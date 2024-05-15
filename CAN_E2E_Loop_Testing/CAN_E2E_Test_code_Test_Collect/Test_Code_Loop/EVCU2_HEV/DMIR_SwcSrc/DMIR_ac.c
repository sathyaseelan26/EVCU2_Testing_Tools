/*
 * File: DMIR_ac.c
 *
 * Code generated for Simulink model 'DMIR_ac'.
 *
 * Model version                  : 9.459
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:27:23 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DMIR_ac.h"
#include "look1_iflf_binlcapw.h"

/* Named constants for Chart: '<S515>/P05D5_Diag' */
#define DMIR_ac_IN_DEBOUNCE            ((uint8)1U)
#define DMIR_ac_IN_FAILING             ((uint8)1U)
#define DMIR_ac_IN_FAIL_MATURED        ((uint8)2U)
#define DMIR_ac_IN_IDLE                ((uint8)2U)
#define DMIR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#define DMIR_ac_IN_PASSING             ((uint8)3U)
#define DMIR_ac_IN_PASS_MATURED        ((uint8)3U)

/* Named constants for Chart: '<S561>/BtnStuck_Diag' */
#if Rte_SysCon_Variant_DMIR_11 || Rte_SysCon_Variant_DMIR_13 || Rte_SysCon_Variant_DMIR_5 || Rte_SysCon_Variant_DMIR_7 || Rte_SysCon_Variant_DMIR_9
#define DMIR_ac_IN_ACTIVE              ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DMIR_11 || Rte_SysCon_Variant_DMIR_13 || Rte_SysCon_Variant_DMIR_5 || Rte_SysCon_Variant_DMIR_7 || Rte_SysCon_Variant_DMIR_9
#define DMIR_ac_IN_NOTACTIVE           ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DMIR_11 || Rte_SysCon_Variant_DMIR_13 || Rte_SysCon_Variant_DMIR_5 || Rte_SysCon_Variant_DMIR_7 || Rte_SysCon_Variant_DMIR_9
#define DMIR_ac_IN_NOTSTUCK            ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DMIR_11 || Rte_SysCon_Variant_DMIR_13 || Rte_SysCon_Variant_DMIR_5 || Rte_SysCon_Variant_DMIR_7 || Rte_SysCon_Variant_DMIR_9
#define DMIR_ac_IN_STUCK               ((uint8)3U)
#endif

/* Named constants for Chart: '<S58>/Drive_Mode_Selection' */
#if !Rte_SysCon_Variant_DMIR_1
#define DMIR_ac_IN_Eco                 ((uint8)1U)
#endif

#define DMIR_ac_IN_Normal              ((uint8)2U)

/* Named constants for Chart: '<S209>/Drive_Mode_Selection1' */
#define DMIR_ac_IN_Max                 ((uint8)1U)

/* Named constants for Chart: '<S270>/Powershot_Stateflow' */
#define DMIR_ac_IN_PowershotSwitch     ((uint8)1U)
#define DMIR_ac_IN_Powershot_On        ((uint8)2U)
#define DMIR_ac_IN_Powershot_off       ((uint8)3U)

/* Named constants for Chart: '<S69>/eBoost_Activation' */
#define DMIR_ac_IN_Activate_eBoost     ((uint8)1U)
#define DMIR_ac_IN_Deactivate_eBoost   ((uint8)2U)

/* Named constants for Chart: '<S71>/eCoasting_paddles' */
#define DMIR_ac_IN_System_Faulted      ((uint8)1U)
#define DMIR_ac_IN_eCoastPopupMsg0     ((uint8)1U)
#define DMIR_ac_IN_eCoastPopupMsg1     ((uint8)2U)
#define DMIR_ac_IN_eCoastPopupMsg2     ((uint8)3U)
#define DMIR_ac_IN_eCoastPopupMsg3     ((uint8)4U)
#define DMIR_ac_IN_eCoastingNA         ((uint8)2U)
#define DMIR_ac_IN_eCoasting_Disabled  ((uint8)3U)
#define DMIR_ac_IN_eCoasting_Selection ((uint8)4U)

/* Named constants for Chart: '<S72>/Powershot_Stateflow' */
#define DMIR_ac_IN_ButtonPressed       ((uint8)1U)
#define DMIR_ac_IN_eRuptReq_Off        ((uint8)2U)
#define DMIR_ac_IN_eRuptReq_On         ((uint8)3U)

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_DMIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, DMIR_VAR_INIT) HeDMIR_b_EVPlusLED = 1;/* Referenced by: '<S973>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) HeDMIR_b_EnaEVMdLatch = 0;/* Referenced by: '<S91>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) HeDMIR_b_EnaPaddleMaxPressTime = 1;/* Referenced by:
                                                                      * '<S338>/Calib'
                                                                      * '<S233>/Calib'
                                                                      */
static volatile CONST(boolean, DMIR_VAR_INIT) HeDMIR_b_HoldECOMode = 1;/* Referenced by: '<S92>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) HeDMIR_b_HoldESaveMode = 1;/* Referenced by: '<S93>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KaDMIR_b_DNA_EsaveMap[13] =
{
    0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S699>/Calib' */

static volatile CONST(boolean, DMIR_VAR_INIT) KaDMIR_b_SailOffReqMap[4] =
{
    0, 1, 0, 0
} ;                                    /* Referenced by: '<S1102>/Calib' */

static volatile CONST(TeDMIR_e_DrvMdBtnStat, DMIR_VAR_INIT)
    KaDMIR_e_BrakingMdReqMap[8] =
{
    CeDMIR_e_BtnNotPrsd, CeDMIR_e_BtnPrsd, CeDMIR_e_ShortGrnd, CeDMIR_e_ShortPwr,
    CeDMIR_e_BtnNotPrsd, CeDMIR_e_BtnNotPrsd, CeDMIR_e_BtnNotPrsd,
    CeDMIR_e_DrvMdBtn_SNA
};                                     /* Referenced by: '<S1105>/Calib' */

static volatile CONST(TeDMDR_e_EChargetype, DMIR_VAR_INIT) KaDMIR_e_CFGSetMap[4]
    =
{
    CeDMDR_e_Passive_Charging, CeDMDR_e_Active_Charging,
    CeDMDR_e_Passive_Charging, CeDMDR_e_SNA
};                                     /* Referenced by: '<S1108>/Calib' */

#if Rte_SysCon_Variant_DMIR_1

static volatile CONST(TeDMIR_e_DriveStyleSts, DMIR_VAR_INIT)
    KaDMIR_e_DriveStyleSts[15] =
{
    CeDMIR_e_Normal, CeDMIR_e_City, CeDMIR_e_SportFun, CeDMIR_e_WinterRace,
    CeDMIR_e_Eco, CeDMIR_e_TracPlus, CeDMIR_e_Trekking, CeDMIR_e_Auto,
    CeDMIR_e_Snow, CeDMIR_e_Sand, CeDMIR_e_Mud, CeDMIR_e_Rock, CeDMIR_e_Race,
    CeDMIR_e_SandMud, CeDMIR_e_OffRoad
};                                     /* Referenced by: '<S1111>/Calib' */

#endif

static volatile CONST(TeDMIR_e_DrvMdSt, DMIR_VAR_INIT)
    KaDMIR_e_DrvMdInfoStRemap[32] =
{
    CeDMIR_e_NoDrvMdSt, CeDMIR_e_HybridSt, CeDMIR_e_HybridSt, CeDMIR_e_EVSt,
    CeDMIR_e_ESaveSt, CeDMIR_e_ThermalReq, CeDMIR_e_EVTempNotAvail,
    CeDMIR_e_ESaveTempNotAvail, CeDMIR_e_EVNotAvail4LowAndTerrain,
    CeDMIR_e_EVNotAvailAccelReq, CeDMIR_e_EVNotAvailService,
    CeDMIR_e_EVNotAvailSOC, CeDMIR_e_NoDisplay,
    CeDMIR_e_EVNotAvail4LowAndTerrain, CeDMIR_e_EVNotAvail4LowAndTerrain,
    CeDMIR_e_EVNotAvail4LowAndTerrain, CeDMIR_e_EVNotAvail4LowAndManual,
    CeDMIR_e_ESaveNotAvailSport, CeDMIR_e_ESaveNotAvailSnow,
    CeDMIR_e_ESaveNotAvailSandMud, CeDMIR_e_ESaveNotAvailRock,
    CeDMIR_e_ESaveActvNotAvailManual, CeDMIR_e_ESaveNotAvailDrvMdReq,
    CeDMIR_e_EsaveNotAvailServiceReq, CeDMIR_e_EngineOnWOTInEV,
    CeDMIR_e_ESaveTempNotAvail, CeDMIR_e_HybridSt, CeDMIR_e_SportTempNotAvail,
    CeDMIR_e_SportSt, CeDMIR_e_EVNotAvail4LockAndTerrain,
    CeDMIR_e_EVNotAvail4LockAndManual, CeDMIR_e_ESaveTempNotAvail
};                                     /* Referenced by: '<S702>/Calib' */

static volatile CONST(TeDMDR_e_EChargetype, DMIR_VAR_INIT)
    KaDMIR_e_EChargeTypeMap[4] =
{
    CeDMDR_e_Passive_Charging, CeDMDR_e_Active_Charging,
    CeDMDR_e_Passive_Charging, CeDMDR_e_SNA
};                                     /* Referenced by:
                                        * '<S1114>/Calib'
                                        * '<S1117>/Calib'
                                        */

static volatile CONST(TeDMDR_e_DrvMdBtnStat, DMIR_VAR_INIT)
    KaDMIR_e_ESaveBtnStMap[7] =
{
    CeDMDR_e_BtnNotPrsd, CeDMDR_e_BtnPrsd, CeDMDR_e_BtnPlsbltyFlt,
    CeDMDR_e_Reserved1, CeDMDR_e_Reserved2, CeDMDR_e_ShortGrnd,
    CeDMDR_e_ShortPwr
};                                     /* Referenced by:
                                        * '<S1136>/Calib'
                                        * '<S1138>/Calib'
                                        */

static volatile CONST(TeDMDR_e_DrvMdBtnStat, DMIR_VAR_INIT) KaDMIR_e_EVBtnStMap
    [7] =
{
    CeDMDR_e_BtnNotPrsd, CeDMDR_e_BtnPrsd, CeDMDR_e_BtnPlsbltyFlt,
    CeDMDR_e_Reserved1, CeDMDR_e_Reserved2, CeDMDR_e_ShortGrnd,
    CeDMDR_e_ShortPwr
};                                     /* Referenced by:
                                        * '<S1125>/Calib'
                                        * '<S1127>/Calib'
                                        */

static volatile CONST(TeDMDR_e_DrvMdBtnStat, DMIR_VAR_INIT)
    KaDMIR_e_EcoBtnStMap[7] =
{
    CeDMDR_e_BtnNotPrsd, CeDMDR_e_BtnPrsd, CeDMDR_e_BtnPlsbltyFlt,
    CeDMDR_e_Reserved1, CeDMDR_e_Reserved2, CeDMDR_e_ShortGrnd,
    CeDMDR_e_ShortPwr
};                                     /* Referenced by:
                                        * '<S1121>/Calib'
                                        * '<S1123>/Calib'
                                        */

static volatile CONST(uint8, DMIR_VAR_INIT) KaDMIR_e_EcoastTrrnThrshld[23] =
{
    0U, 3U, 0U, 0U, 3U, 0U, 0U, 0U, 0U, 0U, 0U, 3U, 0U, 0U, 0U, 3U, 0U, 3U, 0U,
    0U, 0U, 0U, 0U
} ;                                    /* Referenced by: '<S367>/Calib' */

static volatile CONST(TeDMIR_e_PaddlesSts, DMIR_VAR_INIT)
    KaDMIR_e_PaddlesStsMap[5] =
{
    CeDMIR_e_NotActive, CeDMIR_e_PlusPressed, CeDMIR_e_MinusPressed,
    CeDMIR_e_BothPressed, CeDMIR_e_Fault
};                                     /* Referenced by: '<S1130>/Calib' */

static volatile CONST(TeDMIR_e_PopUpRqst, DMIR_VAR_INIT) KaDMIR_e_PopUpRqst[8] =
{
    CeDMIR_e_InfoLevel0, CeDMIR_e_InfoLevel1, CeDMIR_e_InfoLevel2,
    CeDMIR_e_InfoLevel3, CeDMIR_e_InfoLevel4, CeDMIR_e_InfoLevel5,
    CeDMIR_e_InfoNA, CeDMIR_e_InfoSNA
};                                     /* Referenced by: '<S700>/Calib' */

static volatile CONST(TeDMDR_e_SailOffStat, DMIR_VAR_INIT)
    KaDMIR_e_SailOffMap_CAN[3] =
{
    CeDMDR_e_NotActive, CeDMDR_e_Active, CeDMDR_e_ActiveTip
};                                     /* Referenced by: '<S701>/Calib' */

static volatile CONST(TeDMIR_e_PopUpRqst, DMIR_VAR_INIT) KaDMIR_e_TellTaleMap[8]
    =
{
    CeDMIR_e_InfoLevel0, CeDMIR_e_InfoLevel1, CeDMIR_e_InfoLevel2,
    CeDMIR_e_InfoLevel3, CeDMIR_e_InfoLevel4, CeDMIR_e_InfoLevel5,
    CeDMIR_e_InfoNA, CeDMIR_e_InfoSNA
};                                     /* Referenced by: '<S703>/Calib' */

static volatile CONST(TeDMIR_e_eCoastPopUpMsg, DMIR_VAR_INIT)
    KaDMIR_e_eCoastPopUpMsgMap[4] =
{
    CeDMIR_e_Msg0, CeDMIR_e_Msg1, CeDMIR_e_Msg2, CeDMIR_e_Msg3
};                                     /* Referenced by: '<S704>/Calib' */

static volatile CONST(TeDMIR_e_eDriveModeSwitchSts, DMIR_VAR_INIT)
    KaDMIR_e_eDriveModeSwitchRqstMap[8] =
{
    CeDMIR_e_NotPressed, CeDMIR_e_Pressed, CeDMIR_e_ShortToGround,
    CeDMIR_e_OpenShortToPwr, CeDMIR_e_NotUsed, CeDMIR_e_NotUsed,
    CeDMIR_e_NotUsed, CeDMIR_e_SwitchSNA
};                                     /* Referenced by: '<S1134>/Calib' */

static volatile CONST(uint8, DMIR_VAR_INIT) KaDMIR_y_DrvMdArbMap[6] =
{
    0U, 3U, 0U, 3U, 2U, 3U
} ;                                    /* Referenced by: '<S138>/Calib' */

static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_Pct_HV_BatSOCTargetDflt =
    0.0F;                              /* Referenced by:
                                        * '<S5>/FsftDMIR_Pct_HV_BatSOCTargetChrt'
                                        * '<S6>/FsftDMIR_Pct_HV_BatSOCTarget_GGGCChrt'
                                        * '<S25>/PokeDMIR_Pct_HV_BatSOCTargetChrt'
                                        * '<S26>/PokeDMIR_Pct_HV_BatSOCTarget_GGGCChrt'
                                        */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_Pct_HV_BatSOCTargetOvrrdVal
    = 0.0F;                            /* Referenced by: '<S426>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_Pct_HV_PanelIntensityDflt =
    127.5F;                            /* Referenced by:
                                        * '<S7>/FsftDMIR_Pct_PanelIntensityChrt'
                                        * '<S27>/PokeDMIR_Pct_PanelIntensityChrt'
                                        */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_Pct_PanelIntensityFull =
    100.0F;                            /* Referenced by: '<S482>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_Pct_PanelIntensityInit =
    0.0F;                              /* Referenced by: '<S1013>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_Pct_PanelIntensityOvrrdVal =
    0.0F;                              /* Referenced by: '<S427>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_Pct_SOCTargetInit = 26.0F;/* Referenced by: '<S1014>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_Pct_SOCTgtLvl1 = 41.0F;/* Referenced by: '<S457>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_Pct_SOCTgtLvl2 = 61.0F;/* Referenced by: '<S458>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_Pct_SOCTgtLvl3 = 81.0F;/* Referenced by: '<S459>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_ACCStsOvrrd = 0;/* Referenced by: '<S298>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_AeCoastReadyDisabled = 1;/* Referenced by: '<S333>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_AeCoastStsFAOvrrd = 0;/* Referenced by: '<S330>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_BoostFAOvrd = 0;/* Referenced by: '<S266>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_CFGFeatureOvrrd = 0;/* Referenced by: '<S428>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_CFGSetOvrrd = 0;/* Referenced by: '<S429>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_ConfigImpendingSkid = 1;/* Referenced by: '<S294>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_ConfigTrrnMdChange = 0;/* Referenced by: '<S365>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_DNAHMIEna = 1;/* Referenced by:
                                                                      * '<S507>/Calib'
                                                                      * '<S744>/Calib'
                                                                      */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_DiagTest = 0;/* Referenced by: '<S508>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_DriveStyleStsFAInit = 0;/* Referenced by: '<S1015>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_DrvMdDrvrInputFAEnbl = 0;/* Referenced by: '<S509>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_DrvMdDrvrInputFAInit = 0;/* Referenced by: '<S1016>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_DrvMdDrvrInputOvrrd = 0;/* Referenced by: '<S430>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_DrvMdInfoStsOvrrd = 0;/* Referenced by: '<S745>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_DrvMdReqErrInit = 0;/* Referenced by: '<S1018>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EChargeTypeOvrrd = 0;/* Referenced by: '<S431>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_ECharge_GGGC = 1;/* Referenced by: '<S412>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_ESaveBtnFAInit = 0;/* Referenced by: '<S1020>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_ESaveBtnOvrrd = 0;/* Referenced by: '<S432>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EVBtnFAInit = 0;/* Referenced by: '<S1021>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EVBtnOvrrd = 0;/* Referenced by: '<S433>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EcoBtnStFAInit = 0;/* Referenced by: '<S1022>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EcoastChngOPDFail = 1;/* Referenced by: '<S287>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EnaBtnVoltDiag = 0;/* Referenced by: '<S510>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EnaComDiag = 0;/* Referenced by: '<S511>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EnaDrvMdDiag = 0;/* Referenced by: '<S512>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EnaDrvMdOvrrd = 0;/* Referenced by: '<S98>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EnaSailOffReqOvrrd = 0;/* Referenced by: '<S434>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EnableBoostFAOvrd = 0;/* Referenced by: '<S267>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EnableCANOrLIN = 0;/* Referenced by: '<S413>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EnableDodgeSportMode = 0;/* Referenced by: '<S139>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_EnableDodgeSwitch = 0;/* Referenced by:
                                                                      * '<S513>/Calib'
                                                                      * '<S140>/Calib'
                                                                      */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_FAeCoastLvlNA = 1;/* Referenced by: '<S288>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_HV_BatSOCTargetOvrrd = 0;/* Referenced by: '<S435>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_IgnoreRotation_DNA = 1;/* Referenced by: '<S141>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_InternalLightStsInit = 0;/* Referenced by: '<S1025>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_InternalLightStsOvrrd = 0;/* Referenced by: '<S436>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_InternalLightStsOvrrdVal =
    0;                                 /* Referenced by: '<S437>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_InvertLightSts = 0;/* Referenced by: '<S483>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_LEDOvrrdOn = 0;/* Referenced by: '<S965>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_LP3EcoastOvrrd = 0;/* Referenced by:
                                                                      * '<S289>/Calib'
                                                                      * '<S299>/Calib'
                                                                      */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_NoStoreRadio = 0;/* Referenced by: '<S460>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_OnlyOneDriveMdLEDActive =
    1;                                 /* Referenced by:
                                        * '<S925>/Calib'
                                        * '<S937>/Calib'
                                        * '<S945>/Calib'
                                        * '<S958>/Calib'
                                        * '<S1004>/Calib'
                                        */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_PaddlesFailStsFAInit = 0;/* Referenced by: '<S1026>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_PaddlesFailStsInit = 0;/* Referenced by: '<S1027>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_PaddlesStsFAInit = 0;/* Referenced by: '<S1028>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_PanelIntensityInPerc = 1;/* Referenced by: '<S484>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_PanelIntensityOvrrd = 0;/* Referenced by: '<S438>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_PddlMdStsOvrrd = 1;/* Referenced by: '<S300>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_PowerPanelDsbld = 0;/* Referenced by: '<S99>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_RegenType = 1;/* Referenced by: '<S67>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_SailOffReqInit = 0;/* Referenced by: '<S1030>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_SailOffReqOvrrdVal = 0;/* Referenced by: '<S439>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_StReqOvrrd = 0;/* Referenced by: '<S440>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_eBoostSelector = 0;/* Referenced by:
                                                                      * '<S268>/Calib'
                                                                      * '<S269>/Calib'
                                                                      */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_eCoastEnaOvrrd = 1;/* Referenced by: '<S326>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_eCoastEnaVal = 1;/* Referenced by: '<S327>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_eCoastFAOvrrd = 0;/* Referenced by: '<S331>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_eCoastFAVal = 0;/* Referenced by: '<S332>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_eDriveModeSwitchStsFAInit
    = 0;                               /* Referenced by: '<S1031>/Calib' */
static volatile CONST(boolean, DMIR_VAR_INIT) KeDMIR_b_eRuptReqBeforeRelease = 1;/* Referenced by: '<S405>/Calib' */
static volatile CONST(uint16, DMIR_VAR_INIT) KeDMIR_d_ESaveActvInhibitMsgRsn =
    255U;                              /* Referenced by:
                                        * '<S461>/Calib'
                                        * '<S763>/Calib'
                                        */
static volatile CONST(TeDMIR_e_DrvMdBtnStat, DMIR_VAR_INIT)
    KeDMIR_e_BrakingMdReqDflt = CeDMIR_e_BtnNotPrsd;
                        /* Referenced by: '<S34>/PokeDMIR_e_BrakingMdReqChrt' */
static volatile CONST(TeDMIR_e_DrvMdBtnStat, DMIR_VAR_INIT)
    KeDMIR_e_BrakingMdReqInit = CeDMIR_e_BtnNotPrsd;/* Referenced by: '<S1036>/Calib' */
static volatile CONST(TeDMDR_e_EChargetype, DMIR_VAR_INIT)
    KeDMIR_e_CFGSetOvrrdVal = CeDMDR_e_Passive_Charging;/* Referenced by: '<S441>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_e_DelaySignalChangeDrvMd =
    5.0F;                              /* Referenced by: '<S827>/Calib' */
static volatile CONST(TeDMIR_e_DriveStyleSts, DMIR_VAR_INIT)
    KeDMIR_e_DriveStyleStsInit = CeDMIR_e_Normal;/* Referenced by:
                                                  * '<S1011>/Calib'
                                                  * '<S1032>/Calib'
                                                  */
static volatile CONST(TeDMIR_e_DrvMdSt, DMIR_VAR_INIT)
    KeDMIR_e_DrvMdInfoStsOvrrdVal = CeDMIR_e_HybridSt;/* Referenced by: '<S746>/Calib' */
static volatile CONST(TeDMDR_e_DrvMd, DMIR_VAR_INIT) KeDMIR_e_DrvMdNoDrvMd =
    CeDMDR_e_NoDrvMd;                  /* Referenced by:
                                        * '<S100>/Calib'
                                        * '<S114>/Calib'
                                        */
static volatile CONST(TeDMDR_e_DrvMd, DMIR_VAR_INIT) KeDMIR_e_DrvMdOvrrd =
    CeDMDR_e_NoDrvMd;                  /* Referenced by: '<S101>/Calib' */
static volatile CONST(TeDMDR_e_EChargetype, DMIR_VAR_INIT)
    KeDMIR_e_EChargeTypeOvrrdVal = CeDMDR_e_Passive_Charging;/* Referenced by: '<S442>/Calib' */
static volatile CONST(TeDMDR_e_EChargetype, DMIR_VAR_INIT)
    KeDMIR_e_EChargetypeDflt = CeDMDR_e_Passive_Charging;/* Referenced by:
                                                          * '<S1089>/Calib'
                                                          * '<S1091>/Calib'
                                                          * '<S1115>/Calib'
                                                          * '<S1118>/Calib'
                                                          */
static volatile CONST(TeDMDR_e_DrvMdBtnStat, DMIR_VAR_INIT)
    KeDMIR_e_ESaveBtnDflt = CeDMDR_e_BtnNotPrsd;/* Referenced by:
                                                 * '<S52>/PokeDMIR_e_eSaveSwitchChrt'
                                                 * '<S53>/PokeDMIR_e_eSaveSwitchLINChrt'
                                                 */
static volatile CONST(TeDMDR_e_DrvMdBtnStat, DMIR_VAR_INIT)
    KeDMIR_e_ESaveBtnInit = CeDMDR_e_BtnNotPrsd;/* Referenced by: '<S1033>/Calib' */
static volatile CONST(TeDMDR_e_DrvMdBtnStat, DMIR_VAR_INIT)
    KeDMIR_e_ESaveBtnOvrrdVal = CeDMDR_e_BtnNotPrsd;/* Referenced by: '<S443>/Calib' */
static volatile CONST(TeDMDR_e_DrvMdLEDStat, DMIR_VAR_INIT)
    KeDMIR_e_ESaveLEDOvrrd = CeDMDR_e_LEDOff;/* Referenced by: '<S966>/Calib' */
static volatile CONST(TeDMDR_e_DrvMdBtnStat, DMIR_VAR_INIT) KeDMIR_e_EVBtnDflt =
    CeDMDR_e_BtnNotPrsd;               /* Referenced by:
                                        * '<S45>/PokeDMIR_e_ElectricPlusSwitchChrt'
                                        * '<S46>/PokeDMIR_e_ElectricPlusSwitchLINChrt'
                                        */
static volatile CONST(TeDMDR_e_DrvMdBtnStat, DMIR_VAR_INIT) KeDMIR_e_EVBtnInit =
    CeDMDR_e_BtnNotPrsd;               /* Referenced by: '<S1034>/Calib' */
static volatile CONST(TeDMDR_e_DrvMdBtnStat, DMIR_VAR_INIT)
    KeDMIR_e_EVBtnOvrrdVal = CeDMDR_e_BtnNotPrsd;/* Referenced by: '<S444>/Calib' */
static volatile CONST(TeDMDR_e_DrvMdLEDStat, DMIR_VAR_INIT) KeDMIR_e_EVLEDOvrrd =
    CeDMDR_e_LEDOff;                   /* Referenced by: '<S967>/Calib' */
static volatile CONST(TeDMIR_e_DrvMdSelect, DMIR_VAR_INIT) KeDMIR_e_EcoBtnDflt =
    CeDMIR_e_Select_Not_Pressed;       /* Referenced by:
                                        * '<S43>/PokeDMIR_e_EcoBtnStChrt'
                                        * '<S44>/PokeDMIR_e_EcoBtnStLINChrt'
                                        */
static volatile CONST(TeDMDR_e_DrvMdBtnStat, DMIR_VAR_INIT)
    KeDMIR_e_EcoBtnStInit = CeDMDR_e_BtnNotPrsd;/* Referenced by: '<S1035>/Calib' */
static volatile CONST(TeDMDR_e_DrvMdLEDStat, DMIR_VAR_INIT) KeDMIR_e_EcoLEDOvrrd
    = CeDMDR_e_LEDOff;                 /* Referenced by: '<S968>/Calib' */
static volatile CONST(TeDMDR_e_DrvMdLEDStat, DMIR_VAR_INIT)
    KeDMIR_e_FailureLEDOvrrd = CeDMDR_e_LEDOn;/* Referenced by: '<S897>/Calib' */
static volatile CONST(TeDMDR_e_DrvMdLEDStat, DMIR_VAR_INIT) KeDMIR_e_HybLEDOvrrd
    = CeDMDR_e_LEDOff;                 /* Referenced by: '<S969>/Calib' */
static volatile CONST(TeDMDR_e_DrvMd, DMIR_VAR_INIT) KeDMIR_e_InitDrvMd =
    CeDMDR_e_EV;                       /* Referenced by: '<S112>/Calib' */
static volatile CONST(TeDMIR_e_PaddleModeRequest, DMIR_VAR_INIT)
    KeDMIR_e_PaddlesModeReqDflt = CeDMIR_e_None;
                      /* Referenced by: '<S47>/PokeDMIR_e_PaddlesModeReqChrt' */
static volatile CONST(TeDMIR_e_PaddlesSts, DMIR_VAR_INIT)
    KeDMIR_e_PaddlesStsInit = CeDMIR_e_NotActive;/* Referenced by: '<S1037>/Calib' */
static volatile CONST(TeDMDR_e_DrvMdLEDStat, DMIR_VAR_INIT)
    KeDMIR_e_SportLEDOvrrd = CeDMDR_e_LEDOff;/* Referenced by: '<S970>/Calib' */
static volatile CONST(TeDMIR_e_eCoastSel, DMIR_VAR_INIT) KeDMIR_e_eCoastInitLvl =
    CeDMIR_e_NotAvail;                 /* Referenced by: '<S1010>/Calib' */
static volatile CONST(TeDMIR_e_eDriveModeSwitchSts, DMIR_VAR_INIT)
    KeDMIR_e_eDriveModeSwitchRqstDflt = CeDMIR_e_NotPressed;
                /* Referenced by: '<S51>/PokeDMIR_e_eDriveModeSwitchRqstChrt' */
static volatile CONST(TeDMIR_e_eDriveModeSwitchSts, DMIR_VAR_INIT)
    KeDMIR_e_eDriveModeSwitchStsInit = CeDMIR_e_NotPressed;/* Referenced by: '<S1038>/Calib' */
static volatile CONST(uint32, DMIR_VAR_INIT) KeDMIR_g_DrvMdNotAvailMes = 1024U;/* Referenced by: '<S846>/Calib' */
static volatile CONST(sint16, DMIR_VAR_INIT) KeDMIR_i_CFGFeatureOvrrdVal = 195;/* Referenced by: '<S445>/Calib' */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_i_DrvMdDrvrInputDflt = 0U;/* Referenced by:
                                                                      * '<S19>/FsftDMIR_e_DrvMdDrvrInputChrt'
                                                                      * '<S39>/PokeDMIR_e_DrvMdDrvrInputChrt'
                                                                      */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_i_DrvMdDrvrInputInit = 0U;/* Referenced by: '<S1039>/Calib' */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_i_DrvMdDrvrInputOvrrdVal = 0U;/* Referenced by: '<S446>/Calib' */
static volatile CONST(sint16, DMIR_VAR_INIT) KeDMIR_i_DrvMdSwtchTyp = 1;/* Referenced by:
                                                                      * '<S514>/Calib'
                                                                      * '<S102>/Calib'
                                                                      */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_i_DrvModeDwnVal = 1U;/* Referenced by:
                                                                      * '<S681>/Calib'
                                                                      * '<S142>/Calib'
                                                                      * '<S828>/Calib'
                                                                      * '<S163>/Calib'
                                                                      */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_i_DrvModeUpVal = 2U;/* Referenced by:
                                                                      * '<S682>/Calib'
                                                                      * '<S143>/Calib'
                                                                      */
static volatile CONST(uint16, DMIR_VAR_INIT) KeDMIR_i_ESaveActv = 3U;/* Referenced by: '<S462>/Calib' */
static volatile CONST(uint16, DMIR_VAR_INIT) KeDMIR_i_ESaveFeature = 195U;/* Referenced by: '<S463>/Calib' */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_i_EcoastOPDThrshld = 0U;/* Referenced by: '<S368>/Calib' */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_i_EcoastRaceMdThrshld = 0U;/* Referenced by: '<S369>/Calib' */
static volatile CONST(uint16, DMIR_VAR_INIT) KeDMIR_i_OPDExitBrkPdlThrshld = 0U;/* Referenced by:
                                                                      * '<S307>/Calib'
                                                                      * '<S222>/Calib'
                                                                      */
static volatile CONST(uint16, DMIR_VAR_INIT) KeDMIR_i_SOCTgtLvl1 = 0U;/* Referenced by: '<S471>/Calib' */
static volatile CONST(uint16, DMIR_VAR_INIT) KeDMIR_i_SOCTgtLvl2 = 1U;/* Referenced by: '<S473>/Calib' */
static volatile CONST(uint16, DMIR_VAR_INIT) KeDMIR_i_SOCTgtLvl3 = 2U;/* Referenced by: '<S475>/Calib' */
static volatile CONST(uint16, DMIR_VAR_INIT) KeDMIR_i_SOCTgtLvl4 = 3U;/* Referenced by: '<S477>/Calib' */
static volatile CONST(sint16, DMIR_VAR_INIT) KeDMIR_i_StReqOvrrdVal = 3;/* Referenced by: '<S447>/Calib' */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_i_SwBnkLwrthreshold = 0U;/* Referenced by: '<S178>/Calib' */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_i_eCoastLevelDefault = 1U;/* Referenced by: '<S393>/Calib' */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_i_eCoastLevelMax = 2U;/* Referenced by: '<S395>/Calib' */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_i_eCoastLevelMaxEco = 0U;/* Referenced by: '<S391>/Calib' */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_i_eDriveModeSwitchNotPressed =
    0U;                                /* Referenced by: '<S164>/Calib' */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_i_eDriveModeSwitchPressed =
    1U;                                /* Referenced by: '<S165>/Calib' */

#if Rte_SysCon_Variant_DMIR_13 || Rte_SysCon_Variant_DMIR_5 || Rte_SysCon_Variant_DMIR_9

static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_BtnMaxActvRatCheck =
    10.0F;                             /* Referenced by:
                                        * '<S562>/Calib'
                                        * '<S572>/Calib'
                                        * '<S668>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_DMIR_13 || Rte_SysCon_Variant_DMIR_5 || Rte_SysCon_Variant_DMIR_9

static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_BtnMaxDeActvRatCheck =
    1.0F;                              /* Referenced by:
                                        * '<S563>/Calib'
                                        * '<S573>/Calib'
                                        * '<S669>/Calib'
                                        */

#endif

static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_ButtonMaxPressTime = 2.0F;/* Referenced by:
                                                                      * '<S76>/Calib'
                                                                      * '<S179>/Calib'
                                                                      */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_CrnkLEDOn = 5.0F;/* Referenced by: '<S909>/Calib' */

#if Rte_SysCon_Variant_DMIR_7

static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_DNAKnobStuckRotateDTCTi =
    120.0F;                            /* Referenced by: '<S574>/Calib' */

#endif

static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_DbncTimeDNATonaleSignal =
    0.5F;                              /* Referenced by: '<S144>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_DbncTimeDodgeWheelSwitch =
    0.5F;                              /* Referenced by: '<S145>/Calib' */

#if Rte_SysCon_Variant_DMIR_11

static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_DodgeSwitchNotStuckTime =
    1.0F;                              /* Referenced by: '<S670>/Calib' */

#endif

#if Rte_SysCon_Variant_DMIR_11

static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_DodgeSwitchStuckTime =
    5.0F;                              /* Referenced by: '<S671>/Calib' */

#endif

#if !Rte_SysCon_Variant_DMIR_1

static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_DriveMdAcceptedTimer =
    0.02F;                             /* Referenced by: '<S77>/Calib' */

#endif

static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_ESaveNotAvailActvDisp =
    0.2F;                              /* Referenced by: '<S765>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_HoldAfterMultBtnActv =
    0.025F;                            /* Referenced by: '<S199>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_HoldNoDisplayMsgTime =
    0.2F;                              /* Referenced by: '<S829>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_HoldOilRefrComplete =
    2.0F;                              /* Referenced by: '<S868>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_HybMdActvSelHold = 0.2F;/* Referenced by: '<S830>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_LatchDrvMdNotAvailRsn =
    6.0F;                              /* Referenced by: '<S847>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_LatchPopUpMsg = 0.1F;/* Referenced by: '<S747>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_MaxHoldTimeAfterBtnActv =
    0.05F;                             /* Referenced by:
                                        * '<S146>/Calib'
                                        * '<S180>/Calib'
                                        */
static volatile CONST(float32, DMIR_VAR_INIT)
    KeDMIR_t_MaxHoldTimeAfterDriveSwActv = 0.05F;/* Referenced by: '<S147>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT)
    KeDMIR_t_MaxHoldTimeSportActivation = 0.075F;/* Referenced by: '<S148>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT)
    KeDMIR_t_MaxHoldTimeSportDeactivation = 0.075F;/* Referenced by: '<S149>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_MedTED = 0.02F;/* Referenced by:
                                                                      * '<S78>/Calib'
                                                                      * '<S290>/Calib'
                                                                      * '<S406>/Calib'
                                                                      * '<S748>/Calib'
                                                                      * '<S150>/Calib'
                                                                      * '<S181>/Calib'
                                                                      * '<S527>/Calib'
                                                                      * '<S564>/Calib'
                                                                      * '<S575>/Calib'
                                                                      * '<S587>/Calib'
                                                                      * '<S630>/Calib'
                                                                      * '<S672>/Calib'
                                                                      * '<S764>/Calib'
                                                                      * '<S831>/Calib'
                                                                      * '<S848>/Calib'
                                                                      * '<S869>/Calib'
                                                                      * '<S910>/Calib'
                                                                      * '<S200>/Calib'
                                                                      * '<S234>/Calib'
                                                                      */
static volatile CONST(uint32, DMIR_VAR_INIT) KeDMIR_t_ModeLatchMaxTime = 14400U;/* Referenced by: '<S103>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_PaddleDbncSet = 0.2F;/* Referenced by:
                                                                      * '<S339>/Calib'
                                                                      * '<S235>/Calib'
                                                                      */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_PaddleMaxPressTime = 2.0F;/* Referenced by:
                                                                      * '<S340>/Calib'
                                                                      * '<S236>/Calib'
                                                                      */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_PopupMsgTime = 5.0F;/* Referenced by: '<S291>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_SampleTime = 0.02F;/* Referenced by: '<S272>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_Threshold = 2.0F;/* Referenced by: '<S273>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_Threshold2 = 0.02F;/* Referenced by: '<S274>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_TiDebounceHeal = 0.2F;/* Referenced by:
                                                                      * '<S528>/Calib'
                                                                      * '<S588>/Calib'
                                                                      * '<S631>/Calib'
                                                                      */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_TiDebounceSet = 0.2F;/* Referenced by:
                                                                      * '<S529>/Calib'
                                                                      * '<S589>/Calib'
                                                                      * '<S632>/Calib'
                                                                      */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_eCoastNATime = 5.0F;/* Referenced by: '<S292>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_t_eRuptBtnMinPress = 5.0F;/* Referenced by: '<S407>/Calib' */
static volatile CONST(sint16, DMIR_VAR_INIT) KeDMIR_v_OPDExitSpeedThrshld = 10;/* Referenced by: '<S308>/Calib' */

#if Rte_SysCon_Variant_DMIR_7

static volatile CONST(float32, DMIR_VAR_INIT)
    KeDMIR_y_DNAKnobNotStuckRotateDTCTi = 1.0F;/* Referenced by: '<S576>/Calib' */

#endif

static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_y_DNAKnobShrtToGrnd = 0U;/* Referenced by: '<S590>/Calib' */
static volatile CONST(uint8, DMIR_VAR_INIT) KeDMIR_y_DNAKnobShrtToPwr = 0U;/* Referenced by: '<S591>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KeDMIR_y_EVNotAv4OilRefreshBit =
    2049.0F;                           /* Referenced by: '<S870>/Calib' */
static volatile CONST(float32, DMIR_VAR_INIT) KtDMIR_Pct_PanelIntensityConv[11] =
{
    30.0F, 41.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F, 105.0F, 109.0F,
    100.0F
} ;                                    /* Referenced by: '<S485>/Vector' */

static volatile CONST(float32, DMIR_VAR_INIT) KxDMIR_Pct_PanelIntensityConv[11] =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 11.0F
} ;                                    /* Referenced by: '<S485>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_DMIR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint16, DMIR_VAR_INIT) EeDMIR_d_ChargeTypeCnf;/* '<Root>/DSM_2' */
static VAR(uint16, DMIR_VAR_INIT) EeDMIR_d_TgtSOCRngCnf;/* '<Root>/DSM_7' */
static VAR(float32, DMIR_VAR_INIT) VeDMIC_Pct_PanelIntensity;/* '<S903>/Gain' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIC_b_InternalLightSts;/* '<S902>/Gain' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIC_b_MultBtnActv;/* '<S186>/Logical2' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIC_b_NoDisplayMsg;/* '<S837>/AND' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIC_b_NoDisplayMsgRstHybSel;/* '<S749>/Logical7' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIC_b_NoDisplayMsgRstNewMdSel;/* '<S749>/Logical1' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIC_b_PaddlesPressed;/* '<S69>/Switch1' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIC_b_eBoostDeactivated;/* '<S69>/Logical2' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIC_b_eBoostRequest;/* '<S69>/eBoost_Activation' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIC_b_eBoostSwitchFailSts;/* '<S69>/Switch2' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIC_b_eCoasEnbl;/* '<S283>/Switch1' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIC_b_eCoasFA;/* '<S286>/Switch1' */
static VAR(TeDMDR_e_DrvMd, DMIR_VAR_INIT) VeDMIC_e_DrvMdBtnRaw;/* '<S106>/Switch1' */
static VAR(TeDMDR_e_DrvMd, DMIR_VAR_INIT) VeDMIC_e_DrvMdRaw;/* '<S59>/Switch1' */
static VAR(TeDMDR_e_DrvMdLEDStat, DMIR_VAR_INIT) VeDMIC_e_ESaveLEDOn;/* '<S962>/Switch1' */
static VAR(TeDMDR_e_DrvMdLEDStat, DMIR_VAR_INIT) VeDMIC_e_EVMdLEDOn;/* '<S961>/Switch1' */
static VAR(TeDMDR_e_DrvMdLEDStat, DMIR_VAR_INIT) VeDMIC_e_EcoLEDOn;/* '<S963>/Switch1' */
static VAR(TeDMDR_e_DrvMdLEDStat, DMIR_VAR_INIT) VeDMIC_e_HybridMdLEDOn;/* '<S960>/Switch1' */
static VAR(TeDMDR_e_SailOffStat, DMIR_VAR_INIT) VeDMIC_e_SailOffStatus;/* '<S68>/Switch' */
static VAR(TeDMDR_e_DrvMdLEDStat, DMIR_VAR_INIT) VeDMIC_e_SportLEDOn;/* '<S964>/Switch1' */
static VAR(TeDMIR_e_eCoastInfo, DMIR_VAR_INIT) VeDMIC_e_TellTaleSts;
                               /* '<S54>/SigConvForSigProp_Variant_Source1_0' */
static VAR(TeDMIR_e_eCoastInfo, DMIR_VAR_INIT) VeDMIC_e_eCoast_PopUpRqst;
                               /* '<S54>/SigConvForSigProp_Variant_Source2_0' */
static VAR(TeDMIR_e_eCoastSel, DMIR_VAR_INIT) VeDMIC_e_eCoastingSel;
                               /* '<S54>/SigConvForSigProp_Variant_Source3_0' */
static VAR(TeDMIR_e_eCoastSt, DMIR_VAR_INIT) VeDMIC_e_eCoastingSts;
                                /* '<S54>/SigConvForSigProp_Variant_Source_0' */
static VAR(boolean, DMIR_VAR_INIT) VeDMID_b_CommFault;/* '<S56>/Logical10' */
static VAR(boolean, DMIR_VAR_INIT) VeDMID_b_CommFaultESave;/* '<S56>/Logical11' */
static VAR(boolean, DMIR_VAR_INIT) VeDMID_b_DrvMdNotAvailBtnVoltFA;/* '<S56>/Logical7' */
static VAR(boolean, DMIR_VAR_INIT) VeDMID_b_DrvMdNotAvailDiag;/* '<S56>/Logical' */
static VAR(float32, DMIR_VAR_INIT) VeDMII_Pct_HV_BatSOCTargetRaw;/* '<S423>/Switch1' */
static VAR(float32, DMIR_VAR_INIT) VeDMII_Pct_PanelIntensityConv;/* '<S479>/Switch1' */
static VAR(float32, DMIR_VAR_INIT) VeDMII_Pct_PanelIntensityRaw;/* '<S425>/Switch1' */
static VAR(boolean, DMIR_VAR_INIT) VeDMII_b_ActCritActv;/* '<S414>/Logical5' */
static VAR(boolean, DMIR_VAR_INIT) VeDMII_b_DayLightSts;/* '<S481>/Switch1' */
static VAR(boolean, DMIR_VAR_INIT) VeDMII_b_WriteChargeType;/* '<S452>/AND' */
static VAR(TeDMDR_e_EChargetype, DMIR_VAR_INIT) VeDMII_e_EChargeTypeRaw;/* '<S422>/Switch1' */
static VAR(sint16, DMIR_VAR_INIT) VeDMII_i_CFGFeature;/* '<S418>/Switch1' */
static VAR(TeDMDR_e_EChargetype, DMIR_VAR_INIT) VeDMII_i_CFG_Set;/* '<S420>/Switch1' */
static VAR(sint16, DMIR_VAR_INIT) VeDMII_i_St_Req;/* '<S419>/Switch1' */

#if Rte_SysCon_Variant_DMIR_7

static VAR(TeDMIR_e_StuckDiagStatus, DMIR_VAR_INIT) VeDMIR_b_DNAStuckStat;/* '<S568>/DNAStuck_Diag' */

#endif

#if Rte_SysCon_Variant_DMIR_11

static VAR(TeDMIR_e_StuckDiagStatus, DMIR_VAR_INIT) VeDMIR_b_DodgeSwStuckStat;/* '<S663>/DodgeSwStuck_Diag' */

#endif

static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_DownReq;/* '<S293>/Switch1' */

#if Rte_SysCon_Variant_DMIR_5

static VAR(TeDMIR_e_StuckDiagStatus, DMIR_VAR_INIT) VeDMIR_b_ESaveBtnStuckStat;/* '<S561>/BtnStuck_Diag' */

#endif

#if Rte_SysCon_Variant_DMIR_9

static VAR(TeDMIR_e_StuckDiagStatus, DMIR_VAR_INIT) VeDMIR_b_EVBtnStuckStat;/* '<S570>/BtnStuck_Diag' */

#endif

#if Rte_SysCon_Variant_DMIR_13

static VAR(TeDMIR_e_StuckDiagStatus, DMIR_VAR_INIT) VeDMIR_b_HybBtnStuckStat;/* '<S666>/BtnStuck_Diag' */

#endif

static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05C8_Fail;/* '<S519>/P05C8_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05C8_Pass;/* '<S519>/P05C8_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05C9_Fail;/* '<S519>/P05C9_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05C9_Pass;/* '<S519>/P05C9_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05CA_Fail;/* '<S519>/P05CA_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05CA_Pass;/* '<S519>/P05CA_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05D1_Fail;/* '<S518>/P05D2_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05D1_Pass;/* '<S518>/P05D2_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05D2_Fail;/* '<S518>/P05D1_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05D2_Pass;/* '<S518>/P05D1_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05D3_Fail;/* '<S518>/P05D3_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05D3_Pass;/* '<S518>/P05D3_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05D5_Fail;/* '<S515>/P05D5_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05D5_Pass;/* '<S515>/P05D5_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05D6_Fail;/* '<S515>/P05D6_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05D6_Pass;/* '<S515>/P05D6_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05D7_Fail;/* '<S515>/P05D7_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_P05D7_Pass;/* '<S515>/P05D7_Diag' */
static VAR(boolean, DMIR_VAR_INIT) VeDMIR_b_UpReq;/* '<S293>/Switch3' */
static VAR(uint16, DMIR_VAR_INIT) VeDMIR_d_ESaveActvDeniedRsn;/* '<Root>/DSM_4' */
static VAR(uint16, DMIR_VAR_INIT) VeDMIR_d_ESaveDeniedRsn;/* '<Root>/DSM_6' */
static VAR(uint16, DMIR_VAR_INIT) VeDMIR_d_EVDeniedRsn;/* '<Root>/DSM_5' */
static VAR(TeDMIR_e_DiagStatus, DMIR_VAR_INIT) VeDMIR_e_P05C8_Status;/* '<S519>/P05C8_Diag' */
static VAR(TeDMIR_e_DiagStatus, DMIR_VAR_INIT) VeDMIR_e_P05C9_Status;/* '<S519>/P05C9_Diag' */
static VAR(TeDMIR_e_DiagStatus, DMIR_VAR_INIT) VeDMIR_e_P05CA_Status;/* '<S519>/P05CA_Diag' */
static VAR(TeDMIR_e_DiagStatus, DMIR_VAR_INIT) VeDMIR_e_P05D1_Status;/* '<S518>/P05D1_Diag' */
static VAR(TeDMIR_e_DiagStatus, DMIR_VAR_INIT) VeDMIR_e_P05D2_Status;/* '<S518>/P05D2_Diag' */
static VAR(TeDMIR_e_DiagStatus, DMIR_VAR_INIT) VeDMIR_e_P05D3_Status;/* '<S518>/P05D3_Diag' */
static VAR(TeDMIR_e_DiagStatus, DMIR_VAR_INIT) VeDMIR_e_P05D5_Status;/* '<S515>/P05D5_Diag' */
static VAR(TeDMIR_e_DiagStatus, DMIR_VAR_INIT) VeDMIR_e_P05D6_Status;/* '<S515>/P05D6_Diag' */
static VAR(TeDMIR_e_DiagStatus, DMIR_VAR_INIT) VeDMIR_e_P05D7_Status;/* '<S515>/P05D7_Diag' */
static VAR(TeDMIR_e_eCoastSel, DMIR_VAR_INIT) VeDMIR_e_eCoastLvlLatched;/* '<S284>/DataTypeConversion' */
static VAR(float32, DMIR_VAR_INIT) VeDMIR_t_ESaveBtnPrsTine;/* '<S565>/Switch1' */
static VAR(float32, DMIR_VAR_INIT) VeDMIR_t_EVBtnPrsTine;/* '<S577>/Switch1' */
static VAR(float32, DMIR_VAR_INIT) VeDMIR_t_HybBtnPrsTine;/* '<S673>/Switch1' */
static VAR(float32, DMIR_VAR_INIT) VeDMIR_t_P05C8_timeCnt;/* '<S519>/P05C8_Diag' */
static VAR(float32, DMIR_VAR_INIT) VeDMIR_t_P05C9_timeCnt;/* '<S519>/P05C9_Diag' */
static VAR(float32, DMIR_VAR_INIT) VeDMIR_t_P05CA_timeCnt;/* '<S519>/P05CA_Diag' */
static VAR(float32, DMIR_VAR_INIT) VeDMIR_t_P05D1_timeCnt;/* '<S518>/P05D1_Diag' */
static VAR(float32, DMIR_VAR_INIT) VeDMIR_t_P05D2_timeCnt;/* '<S518>/P05D2_Diag' */
static VAR(float32, DMIR_VAR_INIT) VeDMIR_t_P05D3_timeCnt;/* '<S518>/P05D3_Diag' */
static VAR(float32, DMIR_VAR_INIT) VeDMIR_t_P05D5_timeCnt;/* '<S515>/P05D5_Diag' */
static VAR(float32, DMIR_VAR_INIT) VeDMIR_t_P05D6_timeCnt;/* '<S515>/P05D6_Diag' */
static VAR(float32, DMIR_VAR_INIT) VeDMIR_t_P05D7_timeCnt;/* '<S515>/P05D7_Diag' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMIR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_DMIR
#include "MemMap.h"

CONST(ConstB_DMIR_ac_T, DMIR_VAR_INIT) DMIR_ac_ConstB =
{
    CePMDR_e_PowerMode_Off,            /* '<S1041>/Constant' */
    CeDMIR_e_NotAvailable,             /* '<S1008>/Const32' */
    CeDMIR_e_Level1,                   /* '<S1008>/Const36' */
    CeDMIR_e_Msg0,                     /* '<S1071>/Constant' */
    CeDMIR_e_Level1Sts,                /* '<S1008>/Const33' */
    CeDMIR_e_NormalRegen,              /* '<S1008>/Const42' */
    CeDMIR_e_Not_Activated,            /* '<S1067>/Constant' */
    CeDMIR_e_InfoLevel1,               /* '<S1008>/Const34' */
    CeDMIR_e_InfoLevel1,               /* '<S1008>/Const35' */
    CeDMIR_e_NotActive,                /* '<S1056>/Constant' */
    CeDMIR_e_None,                     /* '<S1068>/Constant' */
    CeDMIR_e_None,                     /* '<S1070>/Constant' */
    CeDMIR_e_LevelOne,                 /* '<S1069>/Constant' */
    CeDMIR_e_NoDrvMdSt,                /* '<S1008>/Const9' */
    CeDMIR_e_NoDrvMdSt,                /* '<S1047>/Constant' */
    CeDMIR_e_BtnNotPrsd,               /* '<S1072>/Constant' */
    CeDMIR_e_Normal,                   /* '<S1008>/Const39' */
    CeDMIR_e_CreepOff,                 /* '<S1066>/Constant' */
    CeDMDR_e_NotActive,                /* '<S1008>/Const12' */
    CeDMDR_e_NotActive,                /* '<S1008>/Const13' */
    CeDMDR_e_Passive_Charging,         /* '<S1008>/Const11' */
    CeDMDR_e_Passive_Charging,         /* '<S1051>/Constant' */
    CeDMDR_e_LEDOff,                   /* '<S1008>/Const3' */
    CeDMDR_e_LEDOff,                   /* '<S1008>/Const4' */
    CeDMDR_e_LEDOff,                   /* '<S1008>/Const5' */
    CeDMDR_e_LEDOff,                   /* '<S1008>/Const6' */
    CeDMDR_e_LEDOff,                   /* '<S1008>/Const41' */
    CeDMDR_e_LEDOff,                   /* '<S1043>/Constant' */
    CeDMDR_e_LEDOff,                   /* '<S1044>/Constant' */
    CeDMDR_e_LEDOff,                   /* '<S1045>/Constant' */
    CeDMDR_e_LEDOff,                   /* '<S1046>/Constant' */
    CeDMDR_e_LEDOff,                   /* '<S1048>/Constant' */
    CeDMDR_e_LEDOff,                   /* '<S1008>/Const84' */
    CeDMDR_e_LEDOff,                   /* '<S1008>/Const83' */
    CeDMDR_e_LEDOff,                   /* '<S1008>/Const96' */
    CeDMDR_e_BtnNotPrsd,               /* '<S1052>/Constant' */
    CeDMDR_e_BtnNotPrsd,               /* '<S1053>/Constant' */
    CeDMDR_e_BtnNotPrsd,               /* '<S1054>/Constant' */
    CeDMDR_e_BtnNotPrsd,               /* '<S1055>/Constant' */
    CeDMDR_e_BtnNotPrsd,               /* '<S1049>/Constant' */
    CeDMDR_e_BtnNotPrsd,               /* '<S1050>/Constant' */
    CeDMDR_e_NoDrvMd,                  /* '<S1008>/Const1' */
    CeDMDR_e_NoDrvMd,                  /* '<S1040>/Constant' */
    CeDMDR_e_NoDrvMd,                  /* '<S1042>/Constant' */
    CeDFIB_e_Init,                     /* '<S1057>/Constant' */
    CeDFIB_e_Init,                     /* '<S1058>/Constant' */
    CeDFIB_e_Init,                     /* '<S1059>/Constant' */
    CeDFIB_e_Init,                     /* '<S1060>/Constant' */
    CeDFIB_e_Init,                     /* '<S1061>/Constant' */
    CeDFIB_e_Init,                     /* '<S1062>/Constant' */
    CeDFIB_e_Init,                     /* '<S1063>/Constant' */
    CeDFIB_e_Init,                     /* '<S1064>/Constant' */
    CeDFIB_e_Init                      /* '<S1065>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_DMIR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMIR
#include "MemMap.h"

VAR(B_DMIR_ac_T, DMIR_VAR_INIT) DMIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMIR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMIR
#include "MemMap.h"

VAR(DW_DMIR_ac_T, DMIR_VAR_INIT) DMIR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMIR
#include "MemMap.h"

/* Previous zero-crossings (trigger) states */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMIR
#include "MemMap.h"

VAR(PrevZCX_DMIR_ac_T, DMIR_VAR_INIT) DMIR_ac_PrevZCX;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMIR
#include "MemMap.h"

static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_Init_g(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, DMIR_VAR_INIT) rty_e_FaultStsInit);
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_Pass(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, DMIR_VAR_INIT) rty_e_FaultStsPass);
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_Fail(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, DMIR_VAR_INIT) rty_e_FaultStsFail);
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_DodgeSw_Dbnc(VAR(uint8, AUTOMATIC)
    rtu_Raw_Signal_In, VAR(float32, AUTOMATIC) rtu_Debounce_Time, VAR(float32,
    AUTOMATIC) rtu_dT, P2VAR(B_DodgeSw_Dbnc_DMIR_ac_T, AUTOMATIC, DMIR_VAR_INIT)
    localB, P2VAR(DW_DodgeSw_Dbnc_DMIR_ac_T, AUTOMATIC, DMIR_VAR_INIT) localDW);
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_EVTempNotAvail(P2VAR(TeDMIR_e_DrvMdSt,
    AUTOMATIC, DMIR_VAR_INIT) rty_Out1);
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_LockTerrain(P2VAR(TeDMIR_e_DrvMdSt,
    AUTOMATIC, DMIR_VAR_INIT) rty_Out1);
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_ESaveTempNotAvail(P2VAR
    (TeDMIR_e_DrvMdSt, AUTOMATIC, DMIR_VAR_INIT) rty_Out1);
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_NoDrivemode(P2VAR(TeDMIR_e_DrvMdSt,
    AUTOMATIC, DMIR_VAR_INIT) rty_Out1);

/* Forward declaration for local functions */
static uint8 safe_cast_to_TeDMIR_e_eCoastInf(uint8 input);
static uint8 safe_cast_to_TeDMIR_e_eCoastSel(uint8 input);
static uint8 safe_cast_to_TeDMDR_e_DrvMdBtnS(uint8 input);

/*
 * Output and update for action system:
 *    '<S533>/Init'
 *    '<S534>/Init'
 *    '<S535>/Init'
 *    '<S595>/Init'
 *    '<S596>/Init'
 *    '<S597>/Init'
 *    '<S636>/Init'
 *    '<S637>/Init'
 *    '<S638>/Init'
 */
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_Init_g(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, DMIR_VAR_INIT) rty_e_FaultStsInit)
{
    /* SignalConversion generated from: '<S541>/e_FaultStsInit' incorporates:
     *  Constant: '<S544>/Constant'
     */
    *rty_e_FaultStsInit = CeDFIB_e_Init;
}

/*
 * Output and update for action system:
 *    '<S533>/Pass'
 *    '<S534>/Pass'
 *    '<S535>/Pass'
 *    '<S595>/Pass'
 *    '<S596>/Pass'
 *    '<S597>/Pass'
 *    '<S636>/Pass'
 *    '<S637>/Pass'
 *    '<S638>/Pass'
 */
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_Pass(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, DMIR_VAR_INIT) rty_e_FaultStsPass)
{
    /* SignalConversion generated from: '<S542>/e_FaultStsPass' incorporates:
     *  Constant: '<S545>/Constant'
     */
    *rty_e_FaultStsPass = CeDFIB_e_Pass;
}

/*
 * Output and update for action system:
 *    '<S533>/Fail'
 *    '<S534>/Fail'
 *    '<S535>/Fail'
 *    '<S595>/Fail'
 *    '<S596>/Fail'
 *    '<S597>/Fail'
 *    '<S636>/Fail'
 *    '<S637>/Fail'
 *    '<S638>/Fail'
 */
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_Fail(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, DMIR_VAR_INIT) rty_e_FaultStsFail)
{
    /* SignalConversion generated from: '<S540>/e_FaultStsFail' incorporates:
     *  Constant: '<S543>/Constant'
     */
    *rty_e_FaultStsFail = CeDFIB_e_Fail;
}

/*
 * Output and update for atomic system:
 *    '<S105>/DodgeSw_Dbnc'
 *    '<S105>/TonaleDNA_Dbnc'
 */
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_DodgeSw_Dbnc(VAR(uint8, AUTOMATIC)
    rtu_Raw_Signal_In, VAR(float32, AUTOMATIC) rtu_Debounce_Time, VAR(float32,
    AUTOMATIC) rtu_dT, P2VAR(B_DodgeSw_Dbnc_DMIR_ac_T, AUTOMATIC, DMIR_VAR_INIT)
    localB, P2VAR(DW_DodgeSw_Dbnc_DMIR_ac_T, AUTOMATIC, DMIR_VAR_INIT) localDW)
{
    uint16 rtb_Switch_mm;
    boolean rtb_Comparison4_g;
    boolean rtb_OR1_e2;

    /* Outputs for Atomic SubSystem: '<S116>/Counter Reset  Enabled ' */
    /* Switch: '<S160>/Switch' incorporates:
     *  Logic: '<S116>/Logical1'
     *  Logic: '<S116>/Logical2'
     *  RelationalOperator: '<S116>/Comparison4'
     *  UnitDelay: '<S116>/Unit Delay'
     *  UnitDelay: '<S116>/Unit Delay1'
     */
    if ((rtu_Raw_Signal_In != localDW->UnitDelay_DSTATE_h) ||
            (localDW->UnitDelay1_DSTATE))
    {
        /* Switch: '<S160>/Switch' incorporates:
         *  Constant: '<S160>/Constant Value2'
         */
        rtb_Switch_mm = 0U;
    }
    else
    {
        /* Switch: '<S160>/Switch' incorporates:
         *  Constant: '<S160>/Constant Value1'
         *  Sum: '<S160>/Subtraction'
         *  Switch: '<S160>/Switch2'
         *  UnitDelay: '<S160>/Unit Delay'
         */
        rtb_Switch_mm = (uint16)(((uint32)localDW->UnitDelay_DSTATE) + 1U);
    }

    /* End of Switch: '<S160>/Switch' */

    /* Update for UnitDelay: '<S160>/Unit Delay' */
    localDW->UnitDelay_DSTATE = rtb_Switch_mm;

    /* End of Outputs for SubSystem: '<S116>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S116>/Comparison1' incorporates:
     *  Product: '<S116>/Product'
     */
    rtb_Comparison4_g = (((float32)rtb_Switch_mm) >= (rtu_Debounce_Time / rtu_dT));

    /* Outputs for Atomic SubSystem: '<S116>/EdgeRising2' */
    /* Logic: '<S161>/OR1' incorporates:
     *  UnitDelay: '<S161>/Unit Delay'
     */
    rtb_OR1_e2 = !localDW->UnitDelay_DSTATE_f;

    /* Update for UnitDelay: '<S161>/Unit Delay' */
    localDW->UnitDelay_DSTATE_f = rtb_Comparison4_g;

    /* Outputs for Enabled SubSystem: '<S116>/Subsystem2' incorporates:
     *  EnablePort: '<S162>/Enable'
     */
    /* Logic: '<S161>/AND' incorporates:
     *  Inport: '<S162>/In1'
     */
    if (rtb_Comparison4_g && rtb_OR1_e2)
    {
        localB->In1 = rtu_Raw_Signal_In;
    }

    /* End of Logic: '<S161>/AND' */
    /* End of Outputs for SubSystem: '<S116>/Subsystem2' */
    /* End of Outputs for SubSystem: '<S116>/EdgeRising2' */

    /* Update for UnitDelay: '<S116>/Unit Delay' */
    localDW->UnitDelay_DSTATE_h = rtu_Raw_Signal_In;

    /* Update for UnitDelay: '<S116>/Unit Delay1' */
    localDW->UnitDelay1_DSTATE = rtb_Comparison4_g;
}

/*
 * Output and update for action system:
 *    '<S738>/EVTempNotAvail'
 *    '<S738>/Default'
 */
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_EVTempNotAvail(P2VAR(TeDMIR_e_DrvMdSt,
    AUTOMATIC, DMIR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S789>/Out1' incorporates:
     *  Constant: '<S802>/Constant'
     */
    *rty_Out1 = CeDMIR_e_EVTempNotAvail;
}

/*
 * Output and update for action system:
 *    '<S738>/LockTerrain'
 *    '<S738>/LowTerrain'
 */
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_LockTerrain(P2VAR(TeDMIR_e_DrvMdSt,
    AUTOMATIC, DMIR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S792>/Out1' incorporates:
     *  Constant: '<S805>/Constant'
     */
    *rty_Out1 = CeDMIR_e_EVNotAvail4LockAndTerrain;
}

/*
 * Output and update for action system:
 *    '<S736>/ESaveTempNotAvail'
 *    '<S736>/Default'
 */
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_ESaveTempNotAvail(P2VAR
    (TeDMIR_e_DrvMdSt, AUTOMATIC, DMIR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S772>/Out1' incorporates:
     *  Constant: '<S780>/Constant'
     */
    *rty_Out1 = CeDMIR_e_ESaveTempNotAvail;
}

/*
 * Output and update for action system:
 *    '<S753>/NoDrivemode'
 *    '<S753>/Failure_NoDriveMode'
 */
static FUNC(void, DMIR_CODE_LOCAL) DMIR_ac_NoDrivemode(P2VAR(TeDMIR_e_DrvMdSt,
    AUTOMATIC, DMIR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S857>/Out1' incorporates:
     *  Constant: '<S864>/Constant'
     */
    *rty_Out1 = CeDMIR_e_NoDrvMdSt;
}

static uint8 safe_cast_to_TeDMIR_e_eCoastInf(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TeDMIR_e_eCoastInfo (CeDMIR_e_Level1Sts) */
    y = 1U;
    if (((sint32)input) <= 7)
    {
        /* Set output value to input value if it is a member of TeDMIR_e_eCoastInfo */
        y = input;
    }

    return y;
}

static uint8 safe_cast_to_TeDMIR_e_eCoastSel(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TeDMIR_e_eCoastSel (CeDMIR_e_Level1) */
    y = 1U;
    if ((((sint32)input) <= 3) || (((sint32)input) == 5))
    {
        /* Set output value to input value if it is a member of TeDMIR_e_eCoastSel */
        y = input;
    }

    return y;
}

static uint8 safe_cast_to_TeDMDR_e_DrvMdBtnS(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TeDMDR_e_DrvMdBtnStat (CeDMDR_e_BtnNotPrsd) */
    y = 0U;
    if (((sint32)input) <= 6)
    {
        /* Set output value to input value if it is a member of TeDMDR_e_DrvMdBtnStat */
        y = input;
    }

    return y;
}

/* Model step function for TID1 */
FUNC(void, DMIR_CODE) DMIR_MedTED1(void) /* Explicit Task: MedTED1 */
{
    /* local block i/o variables */
    TeDMIR_e_DriveStyleSts rtb_VariantMerge_For_Variant__a;
    sint32 LeDMIR_e_eCoastPopUpMsg;
    sint32 tmp_2;
    float32 rtb_Switch1_dc;
    float32 rtb_Switch1_m3;
    float32 rtb_Switch1_mb;
    float32 rtb_Switch1_md;
    float32 rtb_Switch1_od;
    float32 rtb_Switch_bw;
    float32 rtb_Switch_l2;
    float32 rtb_Switch_ml;
    uint32 VeDMID_b_CommFault_tmp;
    uint32 tmpRead_b;
    uint32 tmpRead_k;
    uint16 rtb_DataTypeConversion2;
    uint16 rtb_Switch1_mn;
    uint16 rtb_Switch_m1;
    TeAECR_e_Aecoasting_Status tmpRead_s;
    TeASLR_e_HDC_Status tmpRead_c;
    TeDMDR_e_DrvMd tmpRead_0;
    TeDMDR_e_DrvMd tmpRead_2;
    TeDMDR_e_DrvMdBtnStat rtb_UnitDelay_m5m_tmp;
    TeDMDR_e_DrvMdLEDStat DataTypeConversion_bd;
    TeDMDR_e_DrvMdLEDStat DataTypeConversion_g;
    TeDMDR_e_DrvMdLEDStat DataTypeConversion_o1;
    TeDMDR_e_EChargetype rtb_Switch3_o;
    TeDMDR_e_TurtleMdSts tmpRead_j;
    TeDMIR_e_ECoastingReq rtb_TmpSignalConversionAtTmp_ma;
    TeDMIR_e_PadLvrSts tmpRead_g;
    TeDMIR_e_PaddleModeRequest Switch3;
    TeDMIR_e_PaddleModeRequest rtb_TmpSignalConversionAtTmp_at;
    TeDMIR_e_PowershotButton rtb_TmpSignalConversionAtTmp_dr;
    TeDMIR_e_RegenSts VeDMIC_e_RegenSts;
    TeDMIR_e_eCoastInfo LeDMIR_e_TellTaleSts_tmp;
    TeDMIR_e_eCoastInfo rtb_VariantMerge_For_Variant__e;
    TeDMIR_e_eCoastSel rtb_DataStoreRead1_c;
    TeDMIR_e_eCoastSel rtb_Switch1_c;
    TeDMIR_e_eDriveModeSwitchSts rtb_TmpSignalConversionAtTmp_cl;
    TeDTRR_e_OPD_Sts tmpRead_u;
    TeEBMR_e_eBoostStatus tmpRead_d;
    TePLTR_e_ACCSystemSts tmpRead_t;
    TePMDR_e_PowerMode tmpRead;
    TeTIMR_e_RaceModeSts tmpRead_i;
    TeTIMR_e_RaceModeSts tmp_3;
    TeTMDR_e_TrrnMd rtb_LogicalOperator_tmp;
    TeTMDR_e_TrrnMd tmpRead_h;
    TeTRGR_e_TransRangeState tmpRead_v;
    TeVSMR_e_VirtShftMd tmpRead_w;
    TeVSMR_e_VirtShftMdPopUp tmpRead_x;
    TeVTXR_e_PowerPanelMd tmpRead_r;
    uint8 rtb_Switch2_pb;
    uint8 rtb_TmpSignalConversionAtTmp_mv;
    uint8 rtb_eCoastThreshold_TrrnMd;
    uint8 tmpRead_f;
    uint8 tmpRead_l;
    uint8 tmpRead_m;
    uint8 tmpRead_n;
    uint8 tmpRead_o;
    uint8 tmpRead_p;
    uint8 tmpRead_q;
    boolean guard1 = false;
    boolean guard2 = false;
    boolean rtb_AND_bat;
    boolean rtb_AND_dk;
    boolean rtb_AND_ev;
    boolean rtb_AND_i2;
    boolean rtb_AND_is;
    boolean rtb_AND_k1;
    boolean rtb_AND_ks;
    boolean rtb_AND_mbz;
    boolean rtb_AND_nv;
    boolean rtb_Comparison1_dz;
    boolean rtb_Comparison1_i3;
    boolean rtb_Comparison3_c;
    boolean rtb_Comparison5_ez;
    boolean rtb_Equal_p;
    boolean rtb_Logical11_n;
    boolean rtb_Logical1_al_tmp;
    boolean rtb_Logical1_bp;
    boolean rtb_Logical1_nr;
    boolean rtb_Logical2_ej;
    boolean rtb_Logical5_fz;
    boolean rtb_LogicalOperator;
    boolean rtb_NOT_l;
    boolean rtb_OR1_lw;
    boolean rtb_OR1_nv;
    boolean rtb_OR_h;
    boolean rtb_RelationalOperator1_l5;
    boolean rtb_RelationalOperator1_l_tmp;
    boolean rtb_RelationalOperator2;
    boolean rtb_RelationalOperator2_cw;
    boolean rtb_RelationalOperator3;
    boolean rtb_RelationalOperator_n;
    boolean rtb_Switch2_jl;
    boolean rtb_Switch3_c;
    boolean rtb_Switch4_iq;
    boolean rtb_Switch5_a;
    boolean rtb_TmpSignalConversionAtTmp_go;
    boolean rtb_TmpSignalConversionAtTmp_ie;
    boolean rtb_TmpSignalConversionAtTmp_mi;
    boolean rtb_UnitDelay_bp;
    boolean rtb_UnitDelay_nx;
    boolean tmp;
    boolean tmpRead_1;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_8;
    boolean tmpRead_9;
    boolean tmpRead_a;
    boolean tmpRead_e;
    boolean tmp_0;
    boolean tmp_1;
    boolean tmp_4;

    /* Inport: '<Root>/VeDMDR_b_EcoDenied' */
    (void)Rte_Read_VeDMDR_b_EcoDenied_Value(&tmpRead_e);

    /* Inport: '<Root>/VeTIMR_b_ModeSoftLatch' */
    (void)Rte_Read_VeTIMR_b_ModeSoftLatch_Value(&rtb_OR1_lw);

    /* Inport: '<Root>/VeEBMR_e_eBoostStatus' */
    (void)Rte_Read_VeEBMR_e_eBoostStatus_Value(&tmpRead_d);

    /* Inport: '<Root>/VeBRKR_b_BrkPdlFlt' */
    (void)Rte_Read_VeBRKR_b_BrkPdlFlt_Value(&rtb_OR_h);

    /* Inport: '<Root>/VeBRKR_b_AeCoastReady' */
    (void)Rte_Read_VeBRKR_b_AeCoastReady_Value(&rtb_Switch4_iq);

    /* Inport: '<Root>/VePLTR_b_Hill_Des_Stat_Prx' */
    (void)Rte_Read_VePLTR_b_Hill_Des_Stat_Prx_Value(&rtb_LogicalOperator);

    /* Inport: '<Root>/VeASLR_e_HDC_Status' */
    (void)Rte_Read_VeASLR_e_HDC_Status_Value(&tmpRead_c);

    /* Inport: '<Root>/VeCCTR_b_ACCTrqEnabled_BSM' */
    (void)Rte_Read_VeCCTR_b_ACCTrqEnabled_BSM_Value(&rtb_Logical11_n);

    /* Inport: '<Root>/VeCCTR_b_CcEngaged' */
    (void)Rte_Read_VeCCTR_b_CcEngaged_Value(&rtb_Logical5_fz);

    /* Inport: '<Root>/VeRGNR_b_AeCoast_ActHCP' */
    (void)Rte_Read_VeRGNR_b_AeCoast_ActHCP_Value(&rtb_NOT_l);

    /* Inport: '<Root>/VeRGNR_b_AeCoast_Act' */
    (void)Rte_Read_VeRGNR_b_AeCoast_Act_Value(&rtb_Equal_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' incorporates:
     *  SubSystem: '<Root>/DMIR_MedTED1'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMII_ProcessInputs'
     */
    /* DataStoreWrite: '<S55>/Data Store Write1' incorporates:
     *  Inport: '<Root>/VeDMDR_d_ESaveDeniedRsn'
     */
    (void)Rte_Read_VeDMDR_d_ESaveDeniedRsn_Value((&(VeDMIR_d_ESaveDeniedRsn)));

    /* DataStoreWrite: '<S55>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeDMDR_d_EVDeniedRsn'
     */
    (void)Rte_Read_VeDMDR_d_EVDeniedRsn_Value((&(VeDMIR_d_EVDeniedRsn)));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */

    /* Inport: '<Root>/VeTRGR_b_ManualMode' */
    (void)Rte_Read_VeTRGR_b_ManualMode_Value(&rtb_Switch3_c);

    /* Inport: '<Root>/VeSTRR_g_EVModeInhbtRsn2' */
    (void)Rte_Read_VeSTRR_g_EVModeInhbtRsn2_Value(&tmpRead_b);

    /* Inport: '<Root>/VeDMDR_b_EngOnEVHMI' */
    (void)Rte_Read_VeDMDR_b_EngOnEVHMI_Value(&tmpRead_a);

    /* Inport: '<Root>/VeDMDR_b_EngOnWOTRsnFinal' */
    (void)Rte_Read_VeDMDR_b_EngOnWOTRsnFinal_Value(&tmpRead_9);

    /* Inport: '<Root>/VeDMDR_b_EngOnEVLED' */
    (void)Rte_Read_VeDMDR_b_EngOnEVLED_Value(&tmpRead_8);

    /* Inport: '<Root>/VeDMDR_b_EngOnWOTRsnRaw' */
    (void)Rte_Read_VeDMDR_b_EngOnWOTRsnRaw_Value(&tmpRead_7);

    /* Inport: '<Root>/VeDMDR_b_SportDenied' */
    (void)Rte_Read_VeDMDR_b_SportDenied_Value(&tmpRead_6);

    /* Inport: '<Root>/VeDMDR_b_ESaveDenied' */
    (void)Rte_Read_VeDMDR_b_ESaveDenied_Value(&tmpRead_5);

    /* Inport: '<Root>/VeDMDR_b_HybridDenied' */
    (void)Rte_Read_VeDMDR_b_HybridDenied_Value(&tmpRead_4);

    /* Inport: '<Root>/VeDMDR_b_EVDenied' */
    (void)Rte_Read_VeDMDR_b_EVDenied_Value(&tmpRead_3);

    /* Inport: '<Root>/VeDMDR_e_DrvMdArb' */
    (void)Rte_Read_VeDMDR_e_DrvMdArb_Value(&tmpRead_2);

    /* Inport: '<Root>/VeHMIR_b_DriveReady' */
    (void)Rte_Read_VeHMIR_b_DriveReady_Value(&tmpRead_1);

    /* Inport: '<Root>/VeDMDR_e_DrvMdInt' */
    (void)Rte_Read_VeDMDR_e_DrvMdInt_Value(&tmpRead_0);

    /* Inport: '<Root>/VeDMDR_d_ESaveActvDeniedRsn' */
    (void)Rte_Read_VeDMDR_d_ESaveActvDeniedRsn_Value(&rtb_Switch1_mn);

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141' incorporates:
     *  Merge: '<Root>/VeDMIR_b_ESCOffActv_IRV_Merge'
     */
    rtb_TmpSignalConversionAtTmp_ie =
        Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_ESCOffActv_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141' */
#if Rte_SysCon_Variant_DMIR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141' incorporates:
     *  Merge: '<Root>/VeDMIR_e_DriveStyleSts_IRV_Merge'
     */
    DMIR_ac_B.VM_Conditional_Signal_TmpVM_Fcn =
        Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_DriveStyleSts_write_IRV();

#else

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141' */
    DMIR_ac_B.VM_Conditional_Signal_TmpVM_Fcn = CeDMIR_e_Normal;

#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */

    /* Inport: '<Root>/VeDMIB_e_PadLvrSts' */
    (void)Rte_Read_VeDMIB_e_PadLvrSts_Value(&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    rtb_TmpSignalConversionAtTmp_mi =
        Rte_IrvRead_DMIR_MedTED1_Comm_b_ESaveBtnFA_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    rtb_TmpSignalConversionAtTmp_mv =
        Rte_IrvRead_DMIR_MedTED1_Comm_e_DrvMdDrvrInput_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141' incorporates:
     *  Merge: '<Root>/Merge_25'
     */
    rtb_TmpSignalConversionAtTmp_cl =
        Rte_IrvRead_DMIR_MedTED1_Comm_eDriveModeSwitchRqst_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141' incorporates:
     *  Merge: '<Root>/Merge_28'
     */
    rtb_TmpSignalConversionAtTmp_go =
        Rte_IrvRead_DMIR_MedTED1_Comm_DodgeSportSts_write_IRV();

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' incorporates:
     *  SubSystem: '<Root>/DMIR_MedTED1'
     */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141' incorporates:
     *  SignalConversion generated from: '<S1>/Comm_e_DriveStyleSts_read'
     */
#if Rte_SysCon_Variant_DMIR_1

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    DMIR_ac_B.TmpSignalConversionAtTmpVM_F_fo =
        Rte_IrvRead_DMIR_MedTED1_Comm_e_DriveStyleSts_write_IRV();

    /* VariantMerge generated from: '<S58>/VariantSource' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_VariantMerge_For_Variant__a = DMIR_ac_B.TmpSignalConversionAtTmpVM_F_fo;

#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */

    /* Inport: '<Root>/VeVSMR_e_VirtShftMdPopUp' */
    (void)Rte_Read_VeVSMR_e_VirtShftMdPopUp_Value(&tmpRead_x);

    /* Inport: '<Root>/VeVSMR_e_VirtShftMd' */
    (void)Rte_Read_VeVSMR_e_VirtShftMd_Value(&tmpRead_w);

    /* Inport: '<Root>/VeTRGR_e_VldtdTransRngSt' */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value(&tmpRead_v);

    /* Inport: '<Root>/VeDTRR_e_OPD_Sts' */
    (void)Rte_Read_VeDTRR_e_OPD_Sts_Value(&tmpRead_u);

    /* Inport: '<Root>/VeBRKR_Pct_BrkTravelSts' */
    (void)Rte_Read_VeBRKR_Pct_BrkTravelSts_Value(&rtb_Switch1_m3);

    /* Inport: '<Root>/VeCSVR_v_VehSpdSigned' */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&rtb_Switch1_mb);

    /* Inport: '<Root>/VePLTR_e_ACCSystemSts' */
    (void)Rte_Read_VePLTR_e_ACCSystemSts_Value(&tmpRead_t);

    /* Inport: '<Root>/VeAECR_e_AeCoastStat' */
    (void)Rte_Read_VeAECR_e_AeCoastStat_Value(&tmpRead_s);

    /* Inport: '<Root>/VeVTXR_e_PowerPanelMd' */
    (void)Rte_Read_VeVTXR_e_PowerPanelMd_Value(&tmpRead_r);

    /* Inport: '<Root>/VeDMAB_y_StatusByte_EcoModSwPerf' */
    (void)Rte_Read_VeDMAB_y_StatusByte_EcoModSwPerf_Value
        (&rtb_eCoastThreshold_TrrnMd);

    /* Inport: '<Root>/VeDMAB_y_StatusByte_EcoModSwLo' */
    (void)Rte_Read_VeDMAB_y_StatusByte_EcoModSwLo_Value(&rtb_Switch2_pb);

    /* Inport: '<Root>/VeDMAB_y_StatusByte_EcoModSwHi' */
    (void)Rte_Read_VeDMAB_y_StatusByte_EcoModSwHi_Value(&tmpRead_q);

    /* Inport: '<Root>/VeDMAB_y_StatusByte_DrvrModSelSwBCkt_Perf' */
    (void)Rte_Read_VeDMAB_y_StatusByte_DrvrModSelSwBCkt_Perf_Value(&tmpRead_p);

    /* Inport: '<Root>/VeDMAB_y_StatusByte_DrvrModSelSwB_CktLo' */
    (void)Rte_Read_VeDMAB_y_StatusByte_DrvrModSelSwB_CktLo_Value(&tmpRead_o);

    /* Inport: '<Root>/VeDMAB_y_StatusByte_DrvrModSelSwB_CktHi' */
    (void)Rte_Read_VeDMAB_y_StatusByte_DrvrModSelSwB_CktHi_Value(&tmpRead_n);

    /* Inport: '<Root>/VeDMAB_y_StatusByte_DrvrModSelSwA_CktPerf' */
    (void)Rte_Read_VeDMAB_y_StatusByte_DrvrModSelSwA_CktPerf_Value(&tmpRead_m);

    /* Inport: '<Root>/VeDMAB_y_StatusByte_DrvrModSelSwA_CktLo' */
    (void)Rte_Read_VeDMAB_y_StatusByte_DrvrModSelSwA_CktLo_Value(&tmpRead_l);

    /* Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid' */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value(&rtb_AND_k1);

    /* Inport: '<Root>/VePLTR_t_HCPOffTime' */
    (void)Rte_Read_VePLTR_t_HCPOffTime_Value(&tmpRead_k);

    /* Inport: '<Root>/VeDMDR_e_TurtleMdSts' */
    (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value(&tmpRead_j);

    /* Inport: '<Root>/VeBRKR_b_ImpndSkid' */
    (void)Rte_Read_VeBRKR_b_ImpndSkid_Value(&rtb_OR1_nv);

    /* Inport: '<Root>/VeTIMR_e_RaceModeSts' */
    (void)Rte_Read_VeTIMR_e_RaceModeSts_Value(&tmpRead_i);

    /* Inport: '<Root>/VeTMDR_e_PropulsionMd' */
    (void)Rte_Read_VeTMDR_e_PropulsionMd_Value(&tmpRead_h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' incorporates:
     *  SubSystem: '<Root>/DMIR_MedTED1'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommRadio' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommRadio'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommRadio_Value
        (&DMIR_ac_DW.StatusByte_LostCommRadio);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommESBM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommESBM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommESBM_Value
        (&DMIR_ac_DW.StatusByte_LostCommESBM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommECM_PCM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommECM_PCM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommECM_PCM_A_Value
        (&DMIR_ac_DW.StatusByte_LostCommECM_PCM_A);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommECM_A_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommECM_A_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommECM_A_BusB_Value
        (&DMIR_ac_DW.StatusByte_LostCommECM_A_BusB);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommBCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCM_Value
        (&DMIR_ac_DW.StatusByte_LostCommBCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&DMIR_ac_DW.StatusByte_LosCommBECM_A);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_ESBM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ESBM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ESBM_Value
        (&DMIR_ac_DW.StatusByte_InvData_ESBM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_ECM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ECM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ECM_Value
        (&DMIR_ac_DW.StatusByte_InvData_ECM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_ECM_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_ECM_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_ECM_BusB_Value
        (&DMIR_ac_DW.StatusByte_InvData_ECM_BusB);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_BECM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BECM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BECM_Value
        (&DMIR_ac_DW.StatusByte_InvData_BECM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_BCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BCM_Value
        (&DMIR_ac_DW.StatusByte_InvData_BCM);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_DrvrModSelSwA_CktHi' */
    (void)Rte_Read_VeDMAB_y_StatusByte_DrvrModSelSwA_CktHi_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141' incorporates:
     *  Merge: '<Root>/2'
     */
    rtb_TmpSignalConversionAtTmp_ma =
        Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_ECoastingReq_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141' incorporates:
     *  Merge: '<Root>/1'
     */
    rtb_TmpSignalConversionAtTmp_dr =
        Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_PoweshotSts_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141' incorporates:
     *  Merge: '<Root>/3'
     */
    rtb_TmpSignalConversionAtTmp_at =
        Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_PddlMdReq_IRV();

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' incorporates:
     *  SubSystem: '<Root>/DMIR_MedTED1'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_DrvrModSelSwA_CktHi' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    DMIR_ac_DW.StatusByte_DrvrModSelSwA_CktHi = tmpRead_f;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMII_ProcessInputs'
     */
    /* DataStoreWrite: '<S55>/Data Store Write2' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    VeDMIR_d_ESaveActvDeniedRsn = rtb_Switch1_mn;

    /* Switch: '<S420>/Switch1' incorporates:
     *  Constant: '<S429>/Calib'
     */
    if (KeDMIR_b_CFGSetOvrrd)
    {
        /* Switch: '<S420>/Switch1' incorporates:
         *  Constant: '<S441>/Calib'
         */
        VeDMII_i_CFG_Set = KeDMIR_e_CFGSetOvrrdVal;
    }
    else
    {
        /* Switch: '<S420>/Switch1' incorporates:
         *  Merge: '<Root>/VeDMIR_e_CFG_Set_IRV_Merge'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        VeDMII_i_CFG_Set = Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_CFG_Set_write_IRV();
    }

    /* End of Switch: '<S420>/Switch1' */

    /* Switch: '<S422>/Switch1' incorporates:
     *  Constant: '<S412>/Calib'
     *  Constant: '<S431>/Calib'
     *  Switch: '<S55>/Switch2'
     */
    if (KeDMIR_b_EChargeTypeOvrrd)
    {
        /* Switch: '<S422>/Switch1' incorporates:
         *  Constant: '<S442>/Calib'
         */
        VeDMII_e_EChargeTypeRaw = KeDMIR_e_EChargeTypeOvrrdVal;
    }
    else if (KeDMIR_b_ECharge_GGGC)
    {
        /* Switch: '<S55>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_48'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         *  Switch: '<S422>/Switch1'
         */
        VeDMII_e_EChargeTypeRaw =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_EChargetypeGGGC_write_IRV();
    }
    else
    {
        /* Switch: '<S422>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_31'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        VeDMII_e_EChargeTypeRaw =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_EChargetype_write_IRV();
    }

    /* End of Switch: '<S422>/Switch1' */

    /* Switch: '<S414>/Switch3' incorporates:
     *  Constant: '<S460>/Calib'
     */
    if (KeDMIR_b_NoStoreRadio)
    {
        /* Switch: '<S414>/Switch3' incorporates:
         *  Switch: '<S420>/Switch1'
         */
        rtb_Switch3_o = VeDMII_i_CFG_Set;
    }
    else
    {
        /* Switch: '<S414>/Switch3' incorporates:
         *  Switch: '<S422>/Switch1'
         */
        rtb_Switch3_o = VeDMII_e_EChargeTypeRaw;
    }

    /* End of Switch: '<S414>/Switch3' */

    /* Switch: '<S418>/Switch1' incorporates:
     *  Constant: '<S428>/Calib'
     */
    if (KeDMIR_b_CFGFeatureOvrrd)
    {
        /* Switch: '<S418>/Switch1' incorporates:
         *  Constant: '<S445>/Calib'
         */
        VeDMII_i_CFGFeature = KeDMIR_i_CFGFeatureOvrrdVal;
    }
    else
    {
        /* Switch: '<S418>/Switch1' incorporates:
         *  Merge: '<Root>/VeDMIR_e_CFGFeature_IRV_Merge'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        VeDMII_i_CFGFeature =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_CFGFeature_write_IRV();
    }

    /* End of Switch: '<S418>/Switch1' */

    /* Switch: '<S419>/Switch1' incorporates:
     *  Constant: '<S440>/Calib'
     */
    if (KeDMIR_b_StReqOvrrd)
    {
        /* Switch: '<S419>/Switch1' incorporates:
         *  Constant: '<S447>/Calib'
         */
        VeDMII_i_St_Req = KeDMIR_i_StReqOvrrdVal;
    }
    else
    {
        /* Switch: '<S419>/Switch1' incorporates:
         *  Merge: '<Root>/VeDMIR_e_StReq_IRV_Merge'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        VeDMII_i_St_Req = Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_StReq_write_IRV();
    }

    /* End of Switch: '<S419>/Switch1' */

    /* Logic: '<S414>/Logical5' incorporates:
     *  Constant: '<S462>/Calib'
     *  Constant: '<S463>/Calib'
     *  RelationalOperator: '<S414>/Comparison5'
     *  RelationalOperator: '<S414>/Comparison6'
     */
    VeDMII_b_ActCritActv = ((((sint32)VeDMII_i_CFGFeature) == ((sint32)
        KeDMIR_i_ESaveFeature)) && (((sint32)VeDMII_i_St_Req) == ((sint32)
        KeDMIR_i_ESaveActv)));

    /* UnitDelay: '<S453>/Unit Delay' incorporates:
     *  Constant: '<S456>/Constant'
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     *  RelationalOperator: '<S414>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_UnitDelay_nx = (((uint32)tmpRead) != CePMDR_e_PowerMode_Off);

    /* Switch: '<S55>/Switch3' incorporates:
     *  Constant: '<S412>/Calib'
     *  Merge: '<Root>/Merge_32'
     *  Merge: '<Root>/Merge_49'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    if (KeDMIR_b_ECharge_GGGC)
    {
        tmp = Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_EChargetypeGGGCFA_write_IRV();
    }
    else
    {
        tmp = Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_EChargetypeFA_write_IRV();
    }

    /* End of Switch: '<S55>/Switch3' */

    /* Switch: '<S414>/Switch2' incorporates:
     *  Constant: '<S414>/Constant Value'
     *  Constant: '<S414>/TRUE Constant'
     *  Constant: '<S455>/Constant'
     *  Constant: '<S461>/Calib'
     *  Logic: '<S414>/Logical4'
     *  RelationalOperator: '<S414>/Comparison'
     *  RelationalOperator: '<S414>/Comparison4'
     *  S-Function (sfix_bitop): '<S414>/Bitwise Operator'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    if (((uint32)rtb_Switch3_o) == CeDMDR_e_Active_Charging)
    {
        rtb_Switch5_a = ((((sint32)rtb_Switch1_mn) & ((sint32)
                           KeDMIR_d_ESaveActvInhibitMsgRsn)) < 1);
    }
    else
    {
        rtb_Switch5_a = true;
    }

    /* End of Switch: '<S414>/Switch2' */

    /* Logic: '<S414>/Logical' incorporates:
     *  DataTypeConversion: '<S414>/Data Type Conversion2'
     *  Logic: '<S414>/Logical2'
     *  Logic: '<S414>/Logical6'
     *  Logic: '<S414>/Logical7'
     *  RelationalOperator: '<S414>/Comparison1'
     *  Switch: '<S422>/Switch1'
     *  UnitDelay: '<S414>/Unit Delay1'
     */
    rtb_Switch5_a = ((((VeDMII_b_ActCritActv) || ((DMIR_ac_DW.UnitDelay1_DSTATE
                         != ((uint16)VeDMII_e_EChargeTypeRaw)) && (!tmp))) &&
                      rtb_UnitDelay_nx) && rtb_Switch5_a);

    /* Outputs for Atomic SubSystem: '<S414>/EdgeRising' */
    /* Logic: '<S452>/AND' incorporates:
     *  Logic: '<S452>/OR1'
     *  UnitDelay: '<S452>/Unit Delay'
     */
    VeDMII_b_WriteChargeType = (rtb_Switch5_a &&
        (!DMIR_ac_DW.UnitDelay_DSTATE_fau));

    /* Update for UnitDelay: '<S452>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_fau = rtb_Switch5_a;

    /* End of Outputs for SubSystem: '<S414>/EdgeRising' */

    /* Switch: '<S414>/Switch' incorporates:
     *  DataStoreWrite: '<S414>/Data Store Write'
     */
    if (VeDMII_b_WriteChargeType)
    {
        EeDMIR_d_ChargeTypeCnf = rtb_Switch3_o;
    }

    /* End of Switch: '<S414>/Switch' */

    /* Switch: '<S423>/Switch1' incorporates:
     *  Constant: '<S412>/Calib'
     *  Constant: '<S435>/Calib'
     *  Switch: '<S55>/Switch4'
     */
    if (KeDMIR_b_HV_BatSOCTargetOvrrd)
    {
        /* Switch: '<S423>/Switch1' incorporates:
         *  Constant: '<S426>/Calib'
         */
        VeDMII_Pct_HV_BatSOCTargetRaw = KeDMIR_Pct_HV_BatSOCTargetOvrrdVal;
    }
    else if (KeDMIR_b_ECharge_GGGC)
    {
        /* Switch: '<S55>/Switch4' incorporates:
         *  Merge: '<Root>/Merge_50'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         *  Switch: '<S423>/Switch1'
         */
        VeDMII_Pct_HV_BatSOCTargetRaw =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_Pct_HV_BatSOCTarget_GGGC_write_IRV();
    }
    else
    {
        /* Switch: '<S423>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_33'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        VeDMII_Pct_HV_BatSOCTargetRaw =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_Pct_HV_BatSOCTarget_write_IRV();
    }

    /* End of Switch: '<S423>/Switch1' */

    /* Switch: '<S55>/Switch5' incorporates:
     *  Constant: '<S412>/Calib'
     *  Merge: '<Root>/Merge_34'
     *  Merge: '<Root>/Merge_51'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    if (KeDMIR_b_ECharge_GGGC)
    {
        tmp = Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_HV_BatSOCTarget_GGGCFA_write_IRV
            ();
    }
    else
    {
        tmp = Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_HV_BatSOCTargetFA_write_IRV();
    }

    /* End of Switch: '<S55>/Switch5' */

    /* Logic: '<S414>/Logical3' incorporates:
     *  Logic: '<S414>/Logical1'
     *  RelationalOperator: '<S414>/Comparison2'
     *  UnitDelay: '<S414>/Unit Delay2'
     */
    rtb_UnitDelay_nx = (((DMIR_ac_DW.UnitDelay2_DSTATE !=
                          VeDMII_Pct_HV_BatSOCTargetRaw) && (!tmp)) &&
                        rtb_UnitDelay_nx);

    /* Outputs for Atomic SubSystem: '<S414>/EdgeRising1' */
    /* Logic: '<S453>/OR1' incorporates:
     *  UnitDelay: '<S453>/Unit Delay'
     */
    rtb_Switch5_a = !DMIR_ac_DW.UnitDelay_DSTATE_gi;

    /* Update for UnitDelay: '<S453>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_gi = rtb_UnitDelay_nx;

    /* Switch: '<S414>/Switch1' incorporates:
     *  Logic: '<S453>/AND'
     */
    if (rtb_UnitDelay_nx && rtb_Switch5_a)
    {
        /* If: '<S414>/If' incorporates:
         *  Constant: '<S457>/Calib'
         *  Constant: '<S458>/Calib'
         *  Constant: '<S459>/Calib'
         *  Constant: '<S471>/Calib'
         *  Constant: '<S473>/Calib'
         *  Constant: '<S475>/Calib'
         *  Constant: '<S477>/Calib'
         *  DataStoreWrite: '<S414>/Data Store Write1'
         *  SignalConversion generated from: '<S464>/VeDMDC_e_TgtSOCRngCnf'
         *  SignalConversion generated from: '<S465>/VeDMDC_e_TgtSOCRngCnf'
         *  SignalConversion generated from: '<S466>/VeDMDC_e_TgtSOCRngCnf'
         *  SignalConversion generated from: '<S467>/VeDMDC_e_TgtSOCRngCnf'
         */
        if (VeDMII_Pct_HV_BatSOCTargetRaw <= KeDMIR_Pct_SOCTgtLvl1)
        {
            /* Outputs for IfAction SubSystem: '<S414>/Lvl1' incorporates:
             *  ActionPort: '<S464>/Action Port'
             */
            EeDMIR_d_TgtSOCRngCnf = KeDMIR_i_SOCTgtLvl1;

            /* End of Outputs for SubSystem: '<S414>/Lvl1' */
        }
        else if (VeDMII_Pct_HV_BatSOCTargetRaw <= KeDMIR_Pct_SOCTgtLvl2)
        {
            /* Outputs for IfAction SubSystem: '<S414>/Lvl2' incorporates:
             *  ActionPort: '<S465>/Action Port'
             */
            EeDMIR_d_TgtSOCRngCnf = KeDMIR_i_SOCTgtLvl2;

            /* End of Outputs for SubSystem: '<S414>/Lvl2' */
        }
        else if (VeDMII_Pct_HV_BatSOCTargetRaw <= KeDMIR_Pct_SOCTgtLvl3)
        {
            /* Outputs for IfAction SubSystem: '<S414>/Lvl3' incorporates:
             *  ActionPort: '<S466>/Action Port'
             */
            EeDMIR_d_TgtSOCRngCnf = KeDMIR_i_SOCTgtLvl3;

            /* End of Outputs for SubSystem: '<S414>/Lvl3' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S414>/Lvl4' incorporates:
             *  ActionPort: '<S467>/Action Port'
             */
            EeDMIR_d_TgtSOCRngCnf = KeDMIR_i_SOCTgtLvl4;

            /* End of Outputs for SubSystem: '<S414>/Lvl4' */
        }

        /* End of If: '<S414>/If' */
    }

    /* End of Switch: '<S414>/Switch1' */
    /* End of Outputs for SubSystem: '<S414>/EdgeRising1' */

    /* Switch: '<S425>/Switch1' incorporates:
     *  Constant: '<S438>/Calib'
     */
    if (KeDMIR_b_PanelIntensityOvrrd)
    {
        /* Switch: '<S425>/Switch1' incorporates:
         *  Constant: '<S427>/Calib'
         */
        VeDMII_Pct_PanelIntensityRaw = KeDMIR_Pct_PanelIntensityOvrrdVal;
    }
    else
    {
        /* Switch: '<S425>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_35'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        VeDMII_Pct_PanelIntensityRaw =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_Pct_PanelIntensity_write_IRV();
    }

    /* End of Switch: '<S425>/Switch1' */

    /* Switch: '<S481>/Switch1' incorporates:
     *  Constant: '<S436>/Calib'
     *  Constant: '<S483>/Calib'
     *  Switch: '<S424>/Switch1'
     */
    if (KeDMIR_b_InvertLightSts)
    {
        /* Switch: '<S424>/Switch1' incorporates:
         *  Constant: '<S436>/Calib'
         */
        if (KeDMIR_b_InternalLightStsOvrrd)
        {
            /* Switch: '<S481>/Switch1' incorporates:
             *  Constant: '<S437>/Calib'
             *  Logic: '<S448>/Logical2'
             */
            VeDMII_b_DayLightSts = !KeDMIR_b_InternalLightStsOvrrdVal;
        }
        else
        {
            /* Switch: '<S481>/Switch1' incorporates:
             *  Logic: '<S448>/Logical2'
             *  Merge: '<Root>/VeDMIR_b_InternalLightSts_IRV_Merge'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
             */
            VeDMII_b_DayLightSts =
                !Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_InternalLightSts_write_IRV();
        }
    }
    else if (KeDMIR_b_InternalLightStsOvrrd)
    {
        /* Switch: '<S424>/Switch1' incorporates:
         *  Constant: '<S437>/Calib'
         *  Switch: '<S481>/Switch1'
         */
        VeDMII_b_DayLightSts = KeDMIR_b_InternalLightStsOvrrdVal;
    }
    else
    {
        /* Switch: '<S481>/Switch1' incorporates:
         *  Merge: '<Root>/VeDMIR_b_InternalLightSts_IRV_Merge'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        VeDMII_b_DayLightSts =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_InternalLightSts_write_IRV();
    }

    /* End of Switch: '<S481>/Switch1' */

    /* Switch: '<S479>/Switch1' */
    if (VeDMII_b_DayLightSts)
    {
        /* Switch: '<S479>/Switch1' incorporates:
         *  Constant: '<S482>/Calib'
         */
        VeDMII_Pct_PanelIntensityConv = KeDMIR_Pct_PanelIntensityFull;
    }
    else
    {
        /* Switch: '<S479>/Switch1' incorporates:
         *  Lookup_n-D: '<S485>/Vector'
         *  Switch: '<S425>/Switch1'
         */
        VeDMII_Pct_PanelIntensityConv = look1_iflf_binlcapw
            (VeDMII_Pct_PanelIntensityRaw, ((const float32 *)
              &(KxDMIR_Pct_PanelIntensityConv[0])), ((const float32 *)
              &(KtDMIR_Pct_PanelIntensityConv[0])), 10U);
    }

    /* End of Switch: '<S479>/Switch1' */

    /* Update for UnitDelay: '<S414>/Unit Delay1' incorporates:
     *  DataTypeConversion: '<S414>/Data Type Conversion2'
     *  Switch: '<S422>/Switch1'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE = (uint16)VeDMII_e_EChargeTypeRaw;

    /* Update for UnitDelay: '<S414>/Unit Delay2' */
    DMIR_ac_DW.UnitDelay2_DSTATE = VeDMII_Pct_HV_BatSOCTargetRaw;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostics'
     */
    /* RelationalOperator: '<S515>/Comparison4' incorporates:
     *  Merge: '<Root>/Merge_15'
     *  RelationalOperator: '<S491>/Comparison4'
     *  RelationalOperator: '<S515>/Comparison1'
     *  RelationalOperator: '<S515>/Comparison2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_UnitDelay_m5m_tmp = Rte_IrvRead_DMIR_MedTED1_Comm_e_ESaveBtn_write_IRV();

    /* RelationalOperator: '<S515>/Comparison4' incorporates:
     *  Constant: '<S526>/Constant'
     */
    rtb_UnitDelay_nx = (((uint32)rtb_UnitDelay_m5m_tmp) == CeDMDR_e_ShortPwr);

    /* Logic: '<S515>/Logical1' incorporates:
     *  Chart: '<S515>/P05D6_Diag'
     */
    rtb_Switch5_a = !rtb_UnitDelay_nx;

    /* RelationalOperator: '<S515>/Relational Operator2' incorporates:
     *  Constant: '<S515>/Constant3'
     *  S-Function (sfix_bitop): '<S515>/Bitwise Operator2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_RelationalOperator2 = ((((uint32)tmpRead_n) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S515>/EdgeFalling2' */
    /* Logic: '<S522>/AND' incorporates:
     *  Logic: '<S522>/OR1'
     *  UnitDelay: '<S522>/Unit Delay'
     */
    rtb_AND_ks = ((!rtb_RelationalOperator2) && (DMIR_ac_DW.UnitDelay_DSTATE_om));

    /* Update for UnitDelay: '<S522>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_om = rtb_RelationalOperator2;

    /* End of Outputs for SubSystem: '<S515>/EdgeFalling2' */

    /* Chart: '<S515>/P05D6_Diag' incorporates:
     *  Constant: '<S527>/Calib'
     *  Constant: '<S528>/Calib'
     *  Constant: '<S529>/Calib'
     *  Logic: '<S515>/Logical1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_Button/P05D6_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_Button/P05D6_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c56_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_Button/P05D6_Diag */
        DMIR_ac_DW.is_active_c56_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_Button/P05D6_Diag */
        /* Transition: '<S531>:140' */
        DMIR_ac_DW.is_c56_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S531>:138' */
        /* Transition: '<S531>:105' */
        DMIR_ac_DW.is_DEBOUNCE_o = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S531>:73' */
        VeDMIR_e_P05D6_Status = CeDMIR_e_DiagIdle;
        VeDMIR_b_P05D6_Fail = false;
        VeDMIR_b_P05D6_Pass = false;
    }
    else
    {
        switch (DMIR_ac_DW.is_c56_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S531>:138' */
            if ((!rtb_AND_k1) || rtb_AND_ks)
            {
                /* Transition: '<S531>:152' */
                /* Exit Internal 'DEBOUNCE': '<S531>:138' */
                /* Entry Internal 'DEBOUNCE': '<S531>:138' */
                /* Transition: '<S531>:105' */
                DMIR_ac_DW.is_DEBOUNCE_o = DMIR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S531>:73' */
                VeDMIR_e_P05D6_Status = CeDMIR_e_DiagIdle;
                VeDMIR_b_P05D6_Fail = false;
                VeDMIR_b_P05D6_Pass = false;
            }
            else
            {
                switch (DMIR_ac_DW.is_DEBOUNCE_o)
                {
                  case DMIR_ac_IN_FAILING:
                    VeDMIR_e_P05D6_Status = CeDMIR_e_Failing;

                    /* During 'FAILING': '<S531>:3' */
                    /* Transition: '<S531>:118' */
                    if (VeDMIR_t_P05D6_timeCnt >= KeDMIR_t_TiDebounceSet)
                    {
                        /* Transition: '<S531>:33' */
                        DMIR_ac_DW.is_DEBOUNCE_o = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c56_DMIR_ac = DMIR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S531>:25' */
                        VeDMIR_e_P05D6_Status = CeDMIR_e_Fail;
                        VeDMIR_b_P05D6_Fail = true;
                        DMIR_ac_B.FaultDtctd_gg = true;
                    }
                    else if (rtb_Switch5_a)
                    {
                        /* Transition: '<S531>:125' */
                        DMIR_ac_DW.is_DEBOUNCE_o = DMIR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S531>:4' */
                        VeDMIR_e_P05D6_Status = CeDMIR_e_Passing;
                        VeDMIR_t_P05D6_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05D6_timeCnt = VeDMIR_t_P05D6_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;

                  case DMIR_ac_IN_IDLE:
                    VeDMIR_e_P05D6_Status = CeDMIR_e_DiagIdle;

                    /* During 'IDLE': '<S531>:73' */
                    /* Transition: '<S531>:74' */
                    if (rtb_UnitDelay_nx)
                    {
                        /* Transition: '<S531>:45' */
                        /* Transition: '<S531>:7' */
                        DMIR_ac_DW.is_DEBOUNCE_o = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S531>:3' */
                        VeDMIR_e_P05D6_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05D6_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_Switch5_a)
                        {
                            /* Transition: '<S531>:46' */
                            DMIR_ac_DW.is_DEBOUNCE_o = DMIR_ac_IN_PASSING;

                            /* Entry 'PASSING': '<S531>:4' */
                            VeDMIR_e_P05D6_Status = CeDMIR_e_Passing;
                            VeDMIR_t_P05D6_timeCnt = 0.0F;
                        }
                    }
                    break;

                  default:
                    VeDMIR_e_P05D6_Status = CeDMIR_e_Passing;

                    /* During 'PASSING': '<S531>:4' */
                    /* Transition: '<S531>:112' */
                    if (VeDMIR_t_P05D6_timeCnt >= KeDMIR_t_TiDebounceHeal)
                    {
                        /* Transition: '<S531>:34' */
                        DMIR_ac_DW.is_DEBOUNCE_o = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c56_DMIR_ac = DMIR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S531>:26' */
                        VeDMIR_e_P05D6_Status = CeDMIR_e_Pass;
                        VeDMIR_b_P05D6_Pass = true;
                        DMIR_ac_B.FaultDtctd_gg = false;
                    }
                    else if (rtb_UnitDelay_nx)
                    {
                        /* Transition: '<S531>:12' */
                        DMIR_ac_DW.is_DEBOUNCE_o = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S531>:3' */
                        VeDMIR_e_P05D6_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05D6_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05D6_timeCnt = VeDMIR_t_P05D6_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case DMIR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S531>:25' */
            /* Transition: '<S531>:153' */
            DMIR_ac_DW.is_c56_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S531>:138' */
            /* Transition: '<S531>:105' */
            DMIR_ac_DW.is_DEBOUNCE_o = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S531>:73' */
            VeDMIR_e_P05D6_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05D6_Fail = false;
            VeDMIR_b_P05D6_Pass = false;
            break;

          default:
            /* During 'PASS_MATURED': '<S531>:26' */
            /* Transition: '<S531>:139' */
            DMIR_ac_DW.is_c56_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S531>:138' */
            /* Transition: '<S531>:105' */
            DMIR_ac_DW.is_DEBOUNCE_o = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S531>:73' */
            VeDMIR_e_P05D6_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05D6_Fail = false;
            VeDMIR_b_P05D6_Pass = false;
            break;
        }
    }

    /* RelationalOperator: '<S515>/Comparison1' incorporates:
     *  Constant: '<S524>/Constant'
     */
    rtb_Switch5_a = (((uint32)rtb_UnitDelay_m5m_tmp) == CeDMDR_e_ShortGrnd);

    /* Logic: '<S515>/Logical4' incorporates:
     *  Chart: '<S515>/P05D5_Diag'
     */
    rtb_RelationalOperator2 = !rtb_Switch5_a;

    /* RelationalOperator: '<S515>/Relational Operator1' incorporates:
     *  Constant: '<S515>/Constant1'
     *  S-Function (sfix_bitop): '<S515>/Bitwise Operator1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_RelationalOperator1_l5 = ((((uint32)tmpRead_o) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S515>/EdgeFalling1' */
    /* Logic: '<S521>/AND' incorporates:
     *  Logic: '<S521>/OR1'
     *  UnitDelay: '<S521>/Unit Delay'
     */
    rtb_AND_mbz = ((!rtb_RelationalOperator1_l5) &&
                   (DMIR_ac_DW.UnitDelay_DSTATE_ld));

    /* Update for UnitDelay: '<S521>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ld = rtb_RelationalOperator1_l5;

    /* End of Outputs for SubSystem: '<S515>/EdgeFalling1' */

    /* Chart: '<S515>/P05D5_Diag' incorporates:
     *  Constant: '<S527>/Calib'
     *  Constant: '<S528>/Calib'
     *  Constant: '<S529>/Calib'
     *  Logic: '<S515>/Logical4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_Button/P05D5_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_Button/P05D5_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c55_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_Button/P05D5_Diag */
        DMIR_ac_DW.is_active_c55_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_Button/P05D5_Diag */
        /* Transition: '<S530>:140' */
        DMIR_ac_DW.is_c55_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S530>:138' */
        /* Transition: '<S530>:105' */
        DMIR_ac_DW.is_DEBOUNCE_c = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S530>:73' */
        VeDMIR_e_P05D5_Status = CeDMIR_e_DiagIdle;
        VeDMIR_b_P05D5_Fail = false;
        VeDMIR_b_P05D5_Pass = false;
    }
    else
    {
        switch (DMIR_ac_DW.is_c55_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S530>:138' */
            if ((!rtb_AND_k1) || rtb_AND_mbz)
            {
                /* Transition: '<S530>:152' */
                /* Exit Internal 'DEBOUNCE': '<S530>:138' */
                /* Entry Internal 'DEBOUNCE': '<S530>:138' */
                /* Transition: '<S530>:105' */
                DMIR_ac_DW.is_DEBOUNCE_c = DMIR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S530>:73' */
                VeDMIR_e_P05D5_Status = CeDMIR_e_DiagIdle;
                VeDMIR_b_P05D5_Fail = false;
                VeDMIR_b_P05D5_Pass = false;
            }
            else
            {
                switch (DMIR_ac_DW.is_DEBOUNCE_c)
                {
                  case DMIR_ac_IN_FAILING:
                    VeDMIR_e_P05D5_Status = CeDMIR_e_Failing;

                    /* During 'FAILING': '<S530>:3' */
                    /* Transition: '<S530>:118' */
                    if (VeDMIR_t_P05D5_timeCnt >= KeDMIR_t_TiDebounceSet)
                    {
                        /* Transition: '<S530>:33' */
                        DMIR_ac_DW.is_DEBOUNCE_c = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c55_DMIR_ac = DMIR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S530>:25' */
                        VeDMIR_e_P05D5_Status = CeDMIR_e_Fail;
                        VeDMIR_b_P05D5_Fail = true;
                        DMIR_ac_B.FaultDtctd_gx = true;
                    }
                    else if (rtb_RelationalOperator2)
                    {
                        /* Transition: '<S530>:125' */
                        DMIR_ac_DW.is_DEBOUNCE_c = DMIR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S530>:4' */
                        VeDMIR_e_P05D5_Status = CeDMIR_e_Passing;
                        VeDMIR_t_P05D5_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05D5_timeCnt = VeDMIR_t_P05D5_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;

                  case DMIR_ac_IN_IDLE:
                    VeDMIR_e_P05D5_Status = CeDMIR_e_DiagIdle;

                    /* During 'IDLE': '<S530>:73' */
                    /* Transition: '<S530>:74' */
                    if (rtb_Switch5_a)
                    {
                        /* Transition: '<S530>:45' */
                        /* Transition: '<S530>:7' */
                        DMIR_ac_DW.is_DEBOUNCE_c = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S530>:3' */
                        VeDMIR_e_P05D5_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05D5_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_RelationalOperator2)
                        {
                            /* Transition: '<S530>:46' */
                            DMIR_ac_DW.is_DEBOUNCE_c = DMIR_ac_IN_PASSING;

                            /* Entry 'PASSING': '<S530>:4' */
                            VeDMIR_e_P05D5_Status = CeDMIR_e_Passing;
                            VeDMIR_t_P05D5_timeCnt = 0.0F;
                        }
                    }
                    break;

                  default:
                    VeDMIR_e_P05D5_Status = CeDMIR_e_Passing;

                    /* During 'PASSING': '<S530>:4' */
                    /* Transition: '<S530>:112' */
                    if (VeDMIR_t_P05D5_timeCnt >= KeDMIR_t_TiDebounceHeal)
                    {
                        /* Transition: '<S530>:34' */
                        DMIR_ac_DW.is_DEBOUNCE_c = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c55_DMIR_ac = DMIR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S530>:26' */
                        VeDMIR_e_P05D5_Status = CeDMIR_e_Pass;
                        VeDMIR_b_P05D5_Pass = true;
                        DMIR_ac_B.FaultDtctd_gx = false;
                    }
                    else if (rtb_Switch5_a)
                    {
                        /* Transition: '<S530>:12' */
                        DMIR_ac_DW.is_DEBOUNCE_c = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S530>:3' */
                        VeDMIR_e_P05D5_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05D5_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05D5_timeCnt = VeDMIR_t_P05D5_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case DMIR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S530>:25' */
            /* Transition: '<S530>:153' */
            DMIR_ac_DW.is_c55_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S530>:138' */
            /* Transition: '<S530>:105' */
            DMIR_ac_DW.is_DEBOUNCE_c = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S530>:73' */
            VeDMIR_e_P05D5_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05D5_Fail = false;
            VeDMIR_b_P05D5_Pass = false;
            break;

          default:
            /* During 'PASS_MATURED': '<S530>:26' */
            /* Transition: '<S530>:139' */
            DMIR_ac_DW.is_c55_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S530>:138' */
            /* Transition: '<S530>:105' */
            DMIR_ac_DW.is_DEBOUNCE_c = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S530>:73' */
            VeDMIR_e_P05D5_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05D5_Fail = false;
            VeDMIR_b_P05D5_Pass = false;
            break;
        }
    }

    /* RelationalOperator: '<S518>/Comparison5' incorporates:
     *  Constant: '<S525>/Constant'
     *  RelationalOperator: '<S515>/Comparison2'
     */
    rtb_Comparison5_ez = (((uint32)rtb_UnitDelay_m5m_tmp) ==
                          CeDMDR_e_BtnPlsbltyFlt);

    /* RelationalOperator: '<S491>/Comparison4' incorporates:
     *  Constant: '<S677>/Constant'
     */
    rtb_RelationalOperator2 = (((uint32)rtb_UnitDelay_m5m_tmp) ==
        CeDMDR_e_BtnPrsd);

    /* Logic: '<S516>/Logical1' incorporates:
     *  SignalConversion generated from: '<S516>/Variant Source7'
     * */
#if Rte_SysCon_Variant_DMIR_5

    /* Outputs for Atomic SubSystem: '<S516>/ESaveBtnStuck_Diag' */
    /* Chart: '<S561>/BtnStuck_Diag' incorporates:
     *  Constant: '<S562>/Calib'
     *  Constant: '<S563>/Calib'
     *  Constant: '<S564>/Calib'
     */
    rtb_Logical1_nr = !rtb_RelationalOperator2;

    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_ButtonVoltageRangeSuckCheck/ESaveBtnStuck_Diag/BtnStuck_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_ButtonVoltageRangeSuckCheck/ESaveBtnStuck_Diag/BtnStuck_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c53_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_ButtonVoltageRangeSuckCheck/ESaveBtnStuck_Diag/BtnStuck_Diag */
        DMIR_ac_DW.is_active_c53_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_ButtonVoltageRangeSuckCheck/ESaveBtnStuck_Diag/BtnStuck_Diag */
        /* Transition: '<S566>:140' */
        DMIR_ac_DW.is_c53_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S566>:138' */
        /* Transition: '<S566>:105' */
        DMIR_ac_DW.is_DEBOUNCE_p = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S566>:73' */
        VeDMIR_b_ESaveBtnStuckStat = CeDMIR_e_SelectionIdle;
    }
    else
    {
        switch (DMIR_ac_DW.is_c53_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S566>:138' */
            switch (DMIR_ac_DW.is_DEBOUNCE_p)
            {
              case DMIR_ac_IN_ACTIVE:
                VeDMIR_b_ESaveBtnStuckStat = CeDMIR_e_DiagActive;

                /* During 'ACTIVE': '<S566>:3' */
                /* Transition: '<S566>:118' */
                if (DMIR_ac_B.timeCnt_n >= KeDMIR_t_BtnMaxActvRatCheck)
                {
                    /* Transition: '<S566>:33' */
                    DMIR_ac_DW.is_DEBOUNCE_p = DMIR_ac_IN_NO_ACTIVE_CHILD;
                    DMIR_ac_DW.is_c53_DMIR_ac = DMIR_ac_IN_STUCK;

                    /* Entry 'STUCK': '<S566>:25' */
                    VeDMIR_b_ESaveBtnStuckStat = CeDMIR_e_Stuck;
                    DMIR_ac_B.Stuck_j = true;
                    DMIR_ac_B.NotStuck_m = false;
                }
                else if (rtb_Logical1_nr)
                {
                    /* Transition: '<S566>:125' */
                    DMIR_ac_DW.is_DEBOUNCE_p = DMIR_ac_IN_NOTACTIVE;

                    /* Entry 'NOTACTIVE': '<S566>:4' */
                    VeDMIR_b_ESaveBtnStuckStat = CeDMIR_e_DiagNotActive;
                    DMIR_ac_B.timeCnt_n = 0.0F;
                }
                else
                {
                    DMIR_ac_B.timeCnt_n += KeDMIR_t_MedTED;
                }
                break;

              case DMIR_ac_IN_IDLE:
                VeDMIR_b_ESaveBtnStuckStat = CeDMIR_e_SelectionIdle;

                /* During 'IDLE': '<S566>:73' */
                /* Transition: '<S566>:74' */
                if (rtb_RelationalOperator2)
                {
                    /* Transition: '<S566>:45' */
                    /* Transition: '<S566>:7' */
                    DMIR_ac_DW.is_DEBOUNCE_p = DMIR_ac_IN_ACTIVE;

                    /* Entry 'ACTIVE': '<S566>:3' */
                    VeDMIR_b_ESaveBtnStuckStat = CeDMIR_e_DiagActive;
                    DMIR_ac_B.timeCnt_n = 0.0F;
                }
                else
                {
                    if (rtb_Logical1_nr)
                    {
                        /* Transition: '<S566>:46' */
                        DMIR_ac_DW.is_DEBOUNCE_p = DMIR_ac_IN_NOTACTIVE;

                        /* Entry 'NOTACTIVE': '<S566>:4' */
                        VeDMIR_b_ESaveBtnStuckStat = CeDMIR_e_DiagNotActive;
                        DMIR_ac_B.timeCnt_n = 0.0F;
                    }
                }
                break;

              default:
                VeDMIR_b_ESaveBtnStuckStat = CeDMIR_e_DiagNotActive;

                /* During 'NOTACTIVE': '<S566>:4' */
                /* Transition: '<S566>:112' */
                if (DMIR_ac_B.timeCnt_n >= KeDMIR_t_BtnMaxDeActvRatCheck)
                {
                    /* Transition: '<S566>:34' */
                    DMIR_ac_DW.is_DEBOUNCE_p = DMIR_ac_IN_NO_ACTIVE_CHILD;
                    DMIR_ac_DW.is_c53_DMIR_ac = DMIR_ac_IN_NOTSTUCK;

                    /* Entry 'NOTSTUCK': '<S566>:26' */
                    VeDMIR_b_ESaveBtnStuckStat = CeDMIR_e_NotStuck;
                    DMIR_ac_B.NotStuck_m = true;
                    DMIR_ac_B.Stuck_j = false;
                }
                else if (rtb_RelationalOperator2)
                {
                    /* Transition: '<S566>:12' */
                    DMIR_ac_DW.is_DEBOUNCE_p = DMIR_ac_IN_ACTIVE;

                    /* Entry 'ACTIVE': '<S566>:3' */
                    VeDMIR_b_ESaveBtnStuckStat = CeDMIR_e_DiagActive;
                    DMIR_ac_B.timeCnt_n = 0.0F;
                }
                else
                {
                    DMIR_ac_B.timeCnt_n += KeDMIR_t_MedTED;
                }
                break;
            }
            break;

          case DMIR_ac_IN_NOTSTUCK:
            /* During 'NOTSTUCK': '<S566>:26' */
            /* Transition: '<S566>:139' */
            DMIR_ac_DW.is_c53_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S566>:138' */
            /* Transition: '<S566>:105' */
            DMIR_ac_DW.is_DEBOUNCE_p = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S566>:73' */
            VeDMIR_b_ESaveBtnStuckStat = CeDMIR_e_SelectionIdle;
            break;

          default:
            /* During 'STUCK': '<S566>:25' */
            /* Transition: '<S566>:153' */
            DMIR_ac_DW.is_c53_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S566>:138' */
            /* Transition: '<S566>:105' */
            DMIR_ac_DW.is_DEBOUNCE_p = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S566>:73' */
            VeDMIR_b_ESaveBtnStuckStat = CeDMIR_e_SelectionIdle;
            break;
        }
    }

    /* End of Chart: '<S561>/BtnStuck_Diag' */

    /* Logic: '<S517>/Logical3' */
    rtb_Logical1_nr = DMIR_ac_B.Stuck_j;

    /* End of Outputs for SubSystem: '<S516>/ESaveBtnStuck_Diag' */
#else

    /* Logic: '<S517>/Logical3' incorporates:
     *  Constant: '<S560>/FALSE Constant'
     *  SignalConversion generated from: '<S516>/Variant Source7'
     */
    rtb_Logical1_nr = false;

#endif

    /* End of Logic: '<S516>/Logical1' */

    /* Logic: '<S515>/Logical9' incorporates:
     *  Logic: '<S515>/Logical12'
     */
    rtb_RelationalOperator1_l_tmp = (rtb_Comparison5_ez || rtb_Logical1_nr);

    /* SignalConversion generated from: '<S516>/Variant Source1' */
#if Rte_SysCon_Variant_DMIR_5

    /* Switch: '<S56>/Switch2' */
    rtb_Switch2_jl = DMIR_ac_B.NotStuck_m;

#else

    /* Switch: '<S56>/Switch2' incorporates:
     *  Constant: '<S560>/FALSE Constant1'
     *  SignalConversion generated from: '<S516>/Variant Source1'
     */
    rtb_Switch2_jl = false;

#endif

    /* End of SignalConversion generated from: '<S516>/Variant Source1' */

    /* Logic: '<S515>/Logical7' incorporates:
     *  Logic: '<S515>/Logical14'
     */
    rtb_Switch2_jl = ((!rtb_Comparison5_ez) && rtb_Switch2_jl);

    /* RelationalOperator: '<S515>/Relational Operator3' incorporates:
     *  Constant: '<S515>/Constant2'
     *  S-Function (sfix_bitop): '<S515>/Bitwise Operator3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_RelationalOperator3 = ((((uint32)tmpRead_p) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S515>/EdgeFalling3' */
    /* Logic: '<S523>/AND' incorporates:
     *  Logic: '<S523>/OR1'
     *  UnitDelay: '<S523>/Unit Delay'
     */
    rtb_AND_bat = ((!rtb_RelationalOperator3) && (DMIR_ac_DW.UnitDelay_DSTATE_ez));

    /* Update for UnitDelay: '<S523>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ez = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S515>/EdgeFalling3' */

    /* Chart: '<S515>/P05D7_Diag' incorporates:
     *  Constant: '<S527>/Calib'
     *  Constant: '<S528>/Calib'
     *  Constant: '<S529>/Calib'
     *  Logic: '<S515>/Logical9'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_Button/P05D7_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_Button/P05D7_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c54_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_Button/P05D7_Diag */
        DMIR_ac_DW.is_active_c54_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/ESave_Button/P05D7_Diag */
        /* Transition: '<S532>:140' */
        DMIR_ac_DW.is_c54_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S532>:138' */
        /* Transition: '<S532>:105' */
        DMIR_ac_DW.is_DEBOUNCE_na = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S532>:73' */
        VeDMIR_e_P05D7_Status = CeDMIR_e_DiagIdle;
        VeDMIR_b_P05D7_Fail = false;
        VeDMIR_b_P05D7_Pass = false;
    }
    else
    {
        switch (DMIR_ac_DW.is_c54_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S532>:138' */
            if ((((!rtb_Switch2_jl) && (!rtb_RelationalOperator1_l_tmp)) ||
                    (!rtb_AND_k1)) || rtb_AND_bat)
            {
                /* Transition: '<S532>:152' */
                /* Exit Internal 'DEBOUNCE': '<S532>:138' */
                /* Entry Internal 'DEBOUNCE': '<S532>:138' */
                /* Transition: '<S532>:105' */
                DMIR_ac_DW.is_DEBOUNCE_na = DMIR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S532>:73' */
                VeDMIR_e_P05D7_Status = CeDMIR_e_DiagIdle;
                VeDMIR_b_P05D7_Fail = false;
                VeDMIR_b_P05D7_Pass = false;
            }
            else
            {
                switch (DMIR_ac_DW.is_DEBOUNCE_na)
                {
                  case DMIR_ac_IN_FAILING:
                    VeDMIR_e_P05D7_Status = CeDMIR_e_Failing;

                    /* During 'FAILING': '<S532>:3' */
                    /* Transition: '<S532>:118' */
                    if (VeDMIR_t_P05D7_timeCnt >= KeDMIR_t_TiDebounceSet)
                    {
                        /* Transition: '<S532>:33' */
                        DMIR_ac_DW.is_DEBOUNCE_na = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c54_DMIR_ac = DMIR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S532>:25' */
                        VeDMIR_e_P05D7_Status = CeDMIR_e_Fail;
                        VeDMIR_b_P05D7_Fail = true;
                        DMIR_ac_B.FaultDtctd_fe = true;
                    }
                    else if (rtb_Switch2_jl)
                    {
                        /* Transition: '<S532>:125' */
                        DMIR_ac_DW.is_DEBOUNCE_na = DMIR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S532>:4' */
                        VeDMIR_e_P05D7_Status = CeDMIR_e_Passing;
                        VeDMIR_t_P05D7_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05D7_timeCnt = VeDMIR_t_P05D7_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;

                  case DMIR_ac_IN_IDLE:
                    VeDMIR_e_P05D7_Status = CeDMIR_e_DiagIdle;

                    /* During 'IDLE': '<S532>:73' */
                    /* Transition: '<S532>:74' */
                    if (rtb_RelationalOperator1_l_tmp)
                    {
                        /* Transition: '<S532>:45' */
                        /* Transition: '<S532>:7' */
                        DMIR_ac_DW.is_DEBOUNCE_na = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S532>:3' */
                        VeDMIR_e_P05D7_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05D7_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_Switch2_jl)
                        {
                            /* Transition: '<S532>:46' */
                            DMIR_ac_DW.is_DEBOUNCE_na = DMIR_ac_IN_PASSING;

                            /* Entry 'PASSING': '<S532>:4' */
                            VeDMIR_e_P05D7_Status = CeDMIR_e_Passing;
                            VeDMIR_t_P05D7_timeCnt = 0.0F;
                        }
                    }
                    break;

                  default:
                    VeDMIR_e_P05D7_Status = CeDMIR_e_Passing;

                    /* During 'PASSING': '<S532>:4' */
                    /* Transition: '<S532>:112' */
                    if (VeDMIR_t_P05D7_timeCnt >= KeDMIR_t_TiDebounceHeal)
                    {
                        /* Transition: '<S532>:34' */
                        DMIR_ac_DW.is_DEBOUNCE_na = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c54_DMIR_ac = DMIR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S532>:26' */
                        VeDMIR_e_P05D7_Status = CeDMIR_e_Pass;
                        VeDMIR_b_P05D7_Pass = true;
                        DMIR_ac_B.FaultDtctd_fe = false;
                    }
                    else if (rtb_RelationalOperator1_l_tmp)
                    {
                        /* Transition: '<S532>:12' */
                        DMIR_ac_DW.is_DEBOUNCE_na = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S532>:3' */
                        VeDMIR_e_P05D7_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05D7_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05D7_timeCnt = VeDMIR_t_P05D7_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case DMIR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S532>:25' */
            /* Transition: '<S532>:153' */
            DMIR_ac_DW.is_c54_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S532>:138' */
            /* Transition: '<S532>:105' */
            DMIR_ac_DW.is_DEBOUNCE_na = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S532>:73' */
            VeDMIR_e_P05D7_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05D7_Fail = false;
            VeDMIR_b_P05D7_Pass = false;
            break;

          default:
            /* During 'PASS_MATURED': '<S532>:26' */
            /* Transition: '<S532>:139' */
            DMIR_ac_DW.is_c54_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S532>:138' */
            /* Transition: '<S532>:105' */
            DMIR_ac_DW.is_DEBOUNCE_na = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S532>:73' */
            VeDMIR_e_P05D7_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05D7_Fail = false;
            VeDMIR_b_P05D7_Pass = false;
            break;
        }
    }

    /* End of Chart: '<S515>/P05D7_Diag' */

    /* Switch: '<S56>/Switch2' incorporates:
     *  Logic: '<S515>/Logical10'
     */
    rtb_Switch2_jl = (((DMIR_ac_B.FaultDtctd_gg) || (DMIR_ac_B.FaultDtctd_gx)) ||
                      (DMIR_ac_B.FaultDtctd_fe));

    /* Logic: '<S56>/Logical12' incorporates:
     *  Constant: '<S507>/Calib'
     *  Logic: '<S56>/Logical9'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_RelationalOperator1_l5 = ((rtb_TmpSignalConversionAtTmp_mi ||
        rtb_Switch2_jl) && (KeDMIR_b_DNAHMIEna));

    /* Switch: '<S56>/Switch5' incorporates:
     *  DataStoreRead: '<S56>/Data Store Read'
     *  DataStoreRead: '<S56>/Data Store Read1'
     *  DataStoreWrite: '<S56>/Data Store Write'
     *  S-Function (sfix_bitop): '<S488>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S488>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S488>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S489>/FixPt Bitwise Operator1'
     */
    if (rtb_RelationalOperator1_l5)
    {
        VeDMIR_d_ESaveDeniedRsn = (uint16)(VeDMIR_d_ESaveDeniedRsn | ((uint16)64));
    }
    else
    {
        VeDMIR_d_ESaveDeniedRsn = (uint16)(~((uint16)(((uint16)
            (~VeDMIR_d_ESaveDeniedRsn)) | ((uint16)64))));
    }

    /* End of Switch: '<S56>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S533>/EdgeFalling1' */
    /* Update for UnitDelay: '<S539>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_dv = true;

    /* End of Outputs for SubSystem: '<S533>/EdgeFalling1' */

    /* If: '<S533>/If' incorporates:
     *  Logic: '<S533>/Logical5'
     */
    if (rtb_AND_mbz)
    {
        /* Outputs for IfAction SubSystem: '<S533>/Init' incorporates:
         *  ActionPort: '<S541>/Action Port'
         */
        DMIR_ac_Init_g(&DMIR_ac_B.Merge_m);

        /* End of Outputs for SubSystem: '<S533>/Init' */
    }
    else if (VeDMIR_b_P05D5_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S533>/Pass' incorporates:
         *  ActionPort: '<S542>/Action Port'
         */
        DMIR_ac_Pass(&DMIR_ac_B.Merge_m);

        /* End of Outputs for SubSystem: '<S533>/Pass' */
    }
    else
    {
        if (VeDMIR_b_P05D5_Fail)
        {
            /* Outputs for IfAction SubSystem: '<S533>/Fail' incorporates:
             *  ActionPort: '<S540>/Action Port'
             */
            DMIR_ac_Fail(&DMIR_ac_B.Merge_m);

            /* End of Outputs for SubSystem: '<S533>/Fail' */
        }
    }

    /* End of If: '<S533>/If' */

    /* Outputs for Atomic SubSystem: '<S534>/EdgeFalling1' */
    /* Update for UnitDelay: '<S546>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_i1 = true;

    /* End of Outputs for SubSystem: '<S534>/EdgeFalling1' */

    /* If: '<S534>/If' incorporates:
     *  Logic: '<S534>/Logical5'
     */
    if (rtb_AND_ks)
    {
        /* Outputs for IfAction SubSystem: '<S534>/Init' incorporates:
         *  ActionPort: '<S548>/Action Port'
         */
        DMIR_ac_Init_g(&DMIR_ac_B.Merge_i);

        /* End of Outputs for SubSystem: '<S534>/Init' */
    }
    else if (VeDMIR_b_P05D6_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S534>/Pass' incorporates:
         *  ActionPort: '<S549>/Action Port'
         */
        DMIR_ac_Pass(&DMIR_ac_B.Merge_i);

        /* End of Outputs for SubSystem: '<S534>/Pass' */
    }
    else
    {
        if (VeDMIR_b_P05D6_Fail)
        {
            /* Outputs for IfAction SubSystem: '<S534>/Fail' incorporates:
             *  ActionPort: '<S547>/Action Port'
             */
            DMIR_ac_Fail(&DMIR_ac_B.Merge_i);

            /* End of Outputs for SubSystem: '<S534>/Fail' */
        }
    }

    /* End of If: '<S534>/If' */

    /* Outputs for Atomic SubSystem: '<S535>/EdgeFalling1' */
    /* Update for UnitDelay: '<S553>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_kc = true;

    /* End of Outputs for SubSystem: '<S535>/EdgeFalling1' */

    /* If: '<S535>/If' incorporates:
     *  Logic: '<S535>/Logical5'
     */
    if (rtb_AND_bat)
    {
        /* Outputs for IfAction SubSystem: '<S535>/Init' incorporates:
         *  ActionPort: '<S555>/Action Port'
         */
        DMIR_ac_Init_g(&DMIR_ac_B.Merge_g);

        /* End of Outputs for SubSystem: '<S535>/Init' */
    }
    else if (VeDMIR_b_P05D7_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S535>/Pass' incorporates:
         *  ActionPort: '<S556>/Action Port'
         */
        DMIR_ac_Pass(&DMIR_ac_B.Merge_g);

        /* End of Outputs for SubSystem: '<S535>/Pass' */
    }
    else
    {
        if (VeDMIR_b_P05D7_Fail)
        {
            /* Outputs for IfAction SubSystem: '<S535>/Fail' incorporates:
             *  ActionPort: '<S554>/Action Port'
             */
            DMIR_ac_Fail(&DMIR_ac_B.Merge_g);

            /* End of Outputs for SubSystem: '<S535>/Fail' */
        }
    }

    /* End of If: '<S535>/If' */

    /* Outputs for Atomic SubSystem: '<S565>/EdgeRising1' */
    /* UnitDelay: '<S624>/Unit Delay' incorporates:
     *  UnitDelay: '<S567>/Unit Delay'
     */
    rtb_Comparison5_ez = DMIR_ac_DW.UnitDelay_DSTATE_mbw;

    /* Update for UnitDelay: '<S567>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_mbw = rtb_RelationalOperator2;

    /* End of Outputs for SubSystem: '<S565>/EdgeRising1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Controls'
     */
    /* Outputs for IfAction SubSystem: '<S59>/SwitchBank1' incorporates:
     *  ActionPort: '<S106>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S184>/EdgeFalling3' */
    /* Outputs for Atomic SubSystem: '<S184>/EdgeFalling4' */
    /* Outputs for IfAction SubSystem: '<S59>/RotaryDrvMdSwitch' incorporates:
     *  ActionPort: '<S105>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S105>/EdgeFalling' */
    /* If: '<S59>/If' incorporates:
     *  Logic: '<S117>/OR1'
     *  Logic: '<S194>/OR1'
     *  Logic: '<S195>/OR1'
     *  Logic: '<S565>/OR1'
     */
    tmp = !rtb_RelationalOperator2;

    /* End of Outputs for SubSystem: '<S105>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S59>/RotaryDrvMdSwitch' */
    /* End of Outputs for SubSystem: '<S184>/EdgeFalling4' */
    /* End of Outputs for SubSystem: '<S184>/EdgeFalling3' */
    /* End of Outputs for SubSystem: '<S59>/SwitchBank1' */

    /* Outputs for Atomic SubSystem: '<S565>/EdgeRising1' */
    /* Switch: '<S565>/Switch1' incorporates:
     *  Logic: '<S565>/OR'
     *  Logic: '<S565>/OR1'
     *  Logic: '<S567>/AND'
     *  Logic: '<S567>/OR1'
     */
    if (tmp || (rtb_RelationalOperator2 && (!rtb_Comparison5_ez)))
    {
        /* Switch: '<S565>/Switch1' incorporates:
         *  Constant: '<S565>/Constant Value1'
         */
        VeDMIR_t_ESaveBtnPrsTine = 0.0F;
    }
    else
    {
        /* Switch: '<S565>/Switch1' incorporates:
         *  Constant: '<S564>/Calib'
         *  Sum: '<S565>/Summation'
         *  UnitDelay: '<S565>/Unit Delay'
         */
        VeDMIR_t_ESaveBtnPrsTine = KeDMIR_t_MedTED +
            DMIR_ac_DW.UnitDelay_DSTATE_ey;
    }

    /* End of Switch: '<S565>/Switch1' */
    /* End of Outputs for SubSystem: '<S565>/EdgeRising1' */

    /* RelationalOperator: '<S517>/Comparison6' incorporates:
     *  Logic: '<S517>/Logical11'
     *  Logic: '<S517>/Logical2'
     *  RelationalOperator: '<S517>/Comparison7'
     */
#if Rte_SysCon_Variant_DMIR_7

    /* Outputs for Atomic SubSystem: '<S517>/DNAStuck_Diag' */
    /* Logic: '<S517>/Logical11' incorporates:
     *  Constant: '<S517>/Constant Value'
     *  Constant: '<S517>/Constant Value1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_Comparison5_ez = ((((sint32)rtb_TmpSignalConversionAtTmp_mv) == 1) ||
                          (((sint32)rtb_TmpSignalConversionAtTmp_mv) == 2));

    /* Chart: '<S568>/DNAStuck_Diag' incorporates:
     *  Constant: '<S574>/Calib'
     *  Constant: '<S575>/Calib'
     *  Constant: '<S576>/Calib'
     */
    rtb_AND_ks = !rtb_Comparison5_ez;

    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ButtonVoltageRangeSuckCheck/DNAStuck_Diag/DNAStuck_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ButtonVoltageRangeSuckCheck/DNAStuck_Diag/DNAStuck_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c50_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ButtonVoltageRangeSuckCheck/DNAStuck_Diag/DNAStuck_Diag */
        DMIR_ac_DW.is_active_c50_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ButtonVoltageRangeSuckCheck/DNAStuck_Diag/DNAStuck_Diag */
        /* Transition: '<S578>:140' */
        DMIR_ac_DW.is_c50_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S578>:138' */
        /* Transition: '<S578>:105' */
        DMIR_ac_DW.is_DEBOUNCE_dz = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S578>:73' */
        VeDMIR_b_DNAStuckStat = CeDMIR_e_SelectionIdle;
    }
    else
    {
        switch (DMIR_ac_DW.is_c50_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S578>:138' */
            switch (DMIR_ac_DW.is_DEBOUNCE_dz)
            {
              case DMIR_ac_IN_ACTIVE:
                VeDMIR_b_DNAStuckStat = CeDMIR_e_DiagActive;

                /* During 'ACTIVE': '<S578>:3' */
                /* Transition: '<S578>:118' */
                if (DMIR_ac_B.timeCnt_h >= KeDMIR_t_DNAKnobStuckRotateDTCTi)
                {
                    /* Transition: '<S578>:33' */
                    DMIR_ac_DW.is_DEBOUNCE_dz = DMIR_ac_IN_NO_ACTIVE_CHILD;
                    DMIR_ac_DW.is_c50_DMIR_ac = DMIR_ac_IN_STUCK;

                    /* Entry 'STUCK': '<S578>:25' */
                    VeDMIR_b_DNAStuckStat = CeDMIR_e_Stuck;
                    DMIR_ac_B.Stuck_h = true;
                    DMIR_ac_B.NotStuck_e = false;
                }
                else if (rtb_AND_ks)
                {
                    /* Transition: '<S578>:125' */
                    DMIR_ac_DW.is_DEBOUNCE_dz = DMIR_ac_IN_NOTACTIVE;

                    /* Entry 'NOTACTIVE': '<S578>:4' */
                    VeDMIR_b_DNAStuckStat = CeDMIR_e_DiagNotActive;
                    DMIR_ac_B.timeCnt_h = 0.0F;
                }
                else
                {
                    DMIR_ac_B.timeCnt_h += KeDMIR_t_MedTED;
                }
                break;

              case DMIR_ac_IN_IDLE:
                VeDMIR_b_DNAStuckStat = CeDMIR_e_SelectionIdle;

                /* During 'IDLE': '<S578>:73' */
                /* Transition: '<S578>:74' */
                if (rtb_Comparison5_ez)
                {
                    /* Transition: '<S578>:45' */
                    /* Transition: '<S578>:7' */
                    DMIR_ac_DW.is_DEBOUNCE_dz = DMIR_ac_IN_ACTIVE;

                    /* Entry 'ACTIVE': '<S578>:3' */
                    VeDMIR_b_DNAStuckStat = CeDMIR_e_DiagActive;
                    DMIR_ac_B.timeCnt_h = 0.0F;
                }
                else
                {
                    if (rtb_AND_ks)
                    {
                        /* Transition: '<S578>:46' */
                        DMIR_ac_DW.is_DEBOUNCE_dz = DMIR_ac_IN_NOTACTIVE;

                        /* Entry 'NOTACTIVE': '<S578>:4' */
                        VeDMIR_b_DNAStuckStat = CeDMIR_e_DiagNotActive;
                        DMIR_ac_B.timeCnt_h = 0.0F;
                    }
                }
                break;

              default:
                VeDMIR_b_DNAStuckStat = CeDMIR_e_DiagNotActive;

                /* During 'NOTACTIVE': '<S578>:4' */
                /* Transition: '<S578>:112' */
                if (DMIR_ac_B.timeCnt_h >= KeDMIR_y_DNAKnobNotStuckRotateDTCTi)
                {
                    /* Transition: '<S578>:34' */
                    DMIR_ac_DW.is_DEBOUNCE_dz = DMIR_ac_IN_NO_ACTIVE_CHILD;
                    DMIR_ac_DW.is_c50_DMIR_ac = DMIR_ac_IN_NOTSTUCK;

                    /* Entry 'NOTSTUCK': '<S578>:26' */
                    VeDMIR_b_DNAStuckStat = CeDMIR_e_NotStuck;
                    DMIR_ac_B.NotStuck_e = true;
                    DMIR_ac_B.Stuck_h = false;
                }
                else if (rtb_Comparison5_ez)
                {
                    /* Transition: '<S578>:12' */
                    DMIR_ac_DW.is_DEBOUNCE_dz = DMIR_ac_IN_ACTIVE;

                    /* Entry 'ACTIVE': '<S578>:3' */
                    VeDMIR_b_DNAStuckStat = CeDMIR_e_DiagActive;
                    DMIR_ac_B.timeCnt_h = 0.0F;
                }
                else
                {
                    DMIR_ac_B.timeCnt_h += KeDMIR_t_MedTED;
                }
                break;
            }
            break;

          case DMIR_ac_IN_NOTSTUCK:
            /* During 'NOTSTUCK': '<S578>:26' */
            /* Transition: '<S578>:139' */
            DMIR_ac_DW.is_c50_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S578>:138' */
            /* Transition: '<S578>:105' */
            DMIR_ac_DW.is_DEBOUNCE_dz = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S578>:73' */
            VeDMIR_b_DNAStuckStat = CeDMIR_e_SelectionIdle;
            break;

          default:
            /* During 'STUCK': '<S578>:25' */
            /* Transition: '<S578>:153' */
            DMIR_ac_DW.is_c50_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S578>:138' */
            /* Transition: '<S578>:105' */
            DMIR_ac_DW.is_DEBOUNCE_dz = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S578>:73' */
            VeDMIR_b_DNAStuckStat = CeDMIR_e_SelectionIdle;
            break;
        }
    }

    /* End of Chart: '<S568>/DNAStuck_Diag' */
    /* End of Outputs for SubSystem: '<S517>/DNAStuck_Diag' */
#endif

    /* End of RelationalOperator: '<S517>/Comparison6' */

    /* RelationalOperator: '<S492>/Comparison4' incorporates:
     *  Merge: '<Root>/Merge_13'
     *  RelationalOperator: '<S518>/Comparison1'
     *  RelationalOperator: '<S518>/Comparison2'
     *  RelationalOperator: '<S518>/Comparison4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_UnitDelay_m5m_tmp =
        Rte_IrvRead_DMIR_MedTED1_Comm_e_ElectricPlusSwitch_write_IRV();

    /* RelationalOperator: '<S492>/Comparison4' incorporates:
     *  Constant: '<S678>/Constant'
     */
    rtb_AND_ks = (((uint32)rtb_UnitDelay_m5m_tmp) == CeDMDR_e_BtnPrsd);

    /* Logic: '<S517>/Logical1' incorporates:
     *  SignalConversion generated from: '<S517>/Variant Source2'
     * */
#if Rte_SysCon_Variant_DMIR_9

    /* Outputs for Atomic SubSystem: '<S517>/EVBtnStuck_Diag' */
    /* Chart: '<S570>/BtnStuck_Diag' incorporates:
     *  Constant: '<S572>/Calib'
     *  Constant: '<S573>/Calib'
     *  Constant: '<S575>/Calib'
     */
    rtb_Logical1_nr = !rtb_AND_ks;

    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ButtonVoltageRangeSuckCheck/EVBtnStuck_Diag/BtnStuck_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ButtonVoltageRangeSuckCheck/EVBtnStuck_Diag/BtnStuck_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c49_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ButtonVoltageRangeSuckCheck/EVBtnStuck_Diag/BtnStuck_Diag */
        DMIR_ac_DW.is_active_c49_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ButtonVoltageRangeSuckCheck/EVBtnStuck_Diag/BtnStuck_Diag */
        /* Transition: '<S579>:140' */
        DMIR_ac_DW.is_c49_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S579>:138' */
        /* Transition: '<S579>:105' */
        DMIR_ac_DW.is_DEBOUNCE_aq = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S579>:73' */
        VeDMIR_b_EVBtnStuckStat = CeDMIR_e_SelectionIdle;
    }
    else
    {
        switch (DMIR_ac_DW.is_c49_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S579>:138' */
            switch (DMIR_ac_DW.is_DEBOUNCE_aq)
            {
              case DMIR_ac_IN_ACTIVE:
                VeDMIR_b_EVBtnStuckStat = CeDMIR_e_DiagActive;

                /* During 'ACTIVE': '<S579>:3' */
                /* Transition: '<S579>:118' */
                if (DMIR_ac_B.timeCnt_d >= KeDMIR_t_BtnMaxActvRatCheck)
                {
                    /* Transition: '<S579>:33' */
                    DMIR_ac_DW.is_DEBOUNCE_aq = DMIR_ac_IN_NO_ACTIVE_CHILD;
                    DMIR_ac_DW.is_c49_DMIR_ac = DMIR_ac_IN_STUCK;

                    /* Entry 'STUCK': '<S579>:25' */
                    VeDMIR_b_EVBtnStuckStat = CeDMIR_e_Stuck;
                    DMIR_ac_B.Stuck_kq = true;
                    DMIR_ac_B.NotStuck_l = false;
                }
                else if (rtb_Logical1_nr)
                {
                    /* Transition: '<S579>:125' */
                    DMIR_ac_DW.is_DEBOUNCE_aq = DMIR_ac_IN_NOTACTIVE;

                    /* Entry 'NOTACTIVE': '<S579>:4' */
                    VeDMIR_b_EVBtnStuckStat = CeDMIR_e_DiagNotActive;
                    DMIR_ac_B.timeCnt_d = 0.0F;
                }
                else
                {
                    DMIR_ac_B.timeCnt_d += KeDMIR_t_MedTED;
                }
                break;

              case DMIR_ac_IN_IDLE:
                VeDMIR_b_EVBtnStuckStat = CeDMIR_e_SelectionIdle;

                /* During 'IDLE': '<S579>:73' */
                /* Transition: '<S579>:74' */
                if (rtb_AND_ks)
                {
                    /* Transition: '<S579>:45' */
                    /* Transition: '<S579>:7' */
                    DMIR_ac_DW.is_DEBOUNCE_aq = DMIR_ac_IN_ACTIVE;

                    /* Entry 'ACTIVE': '<S579>:3' */
                    VeDMIR_b_EVBtnStuckStat = CeDMIR_e_DiagActive;
                    DMIR_ac_B.timeCnt_d = 0.0F;
                }
                else
                {
                    if (rtb_Logical1_nr)
                    {
                        /* Transition: '<S579>:46' */
                        DMIR_ac_DW.is_DEBOUNCE_aq = DMIR_ac_IN_NOTACTIVE;

                        /* Entry 'NOTACTIVE': '<S579>:4' */
                        VeDMIR_b_EVBtnStuckStat = CeDMIR_e_DiagNotActive;
                        DMIR_ac_B.timeCnt_d = 0.0F;
                    }
                }
                break;

              default:
                VeDMIR_b_EVBtnStuckStat = CeDMIR_e_DiagNotActive;

                /* During 'NOTACTIVE': '<S579>:4' */
                /* Transition: '<S579>:112' */
                if (DMIR_ac_B.timeCnt_d >= KeDMIR_t_BtnMaxDeActvRatCheck)
                {
                    /* Transition: '<S579>:34' */
                    DMIR_ac_DW.is_DEBOUNCE_aq = DMIR_ac_IN_NO_ACTIVE_CHILD;
                    DMIR_ac_DW.is_c49_DMIR_ac = DMIR_ac_IN_NOTSTUCK;

                    /* Entry 'NOTSTUCK': '<S579>:26' */
                    VeDMIR_b_EVBtnStuckStat = CeDMIR_e_NotStuck;
                    DMIR_ac_B.NotStuck_l = true;
                    DMIR_ac_B.Stuck_kq = false;
                }
                else if (rtb_AND_ks)
                {
                    /* Transition: '<S579>:12' */
                    DMIR_ac_DW.is_DEBOUNCE_aq = DMIR_ac_IN_ACTIVE;

                    /* Entry 'ACTIVE': '<S579>:3' */
                    VeDMIR_b_EVBtnStuckStat = CeDMIR_e_DiagActive;
                    DMIR_ac_B.timeCnt_d = 0.0F;
                }
                else
                {
                    DMIR_ac_B.timeCnt_d += KeDMIR_t_MedTED;
                }
                break;
            }
            break;

          case DMIR_ac_IN_NOTSTUCK:
            /* During 'NOTSTUCK': '<S579>:26' */
            /* Transition: '<S579>:139' */
            DMIR_ac_DW.is_c49_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S579>:138' */
            /* Transition: '<S579>:105' */
            DMIR_ac_DW.is_DEBOUNCE_aq = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S579>:73' */
            VeDMIR_b_EVBtnStuckStat = CeDMIR_e_SelectionIdle;
            break;

          default:
            /* During 'STUCK': '<S579>:25' */
            /* Transition: '<S579>:153' */
            DMIR_ac_DW.is_c49_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S579>:138' */
            /* Transition: '<S579>:105' */
            DMIR_ac_DW.is_DEBOUNCE_aq = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S579>:73' */
            VeDMIR_b_EVBtnStuckStat = CeDMIR_e_SelectionIdle;
            break;
        }
    }

    /* End of Chart: '<S570>/BtnStuck_Diag' */

    /* Logic: '<S517>/Logical3' */
    rtb_Logical1_nr = DMIR_ac_B.Stuck_kq;

    /* End of Outputs for SubSystem: '<S517>/EVBtnStuck_Diag' */
#else

    /* Logic: '<S517>/Logical3' incorporates:
     *  Constant: '<S571>/FALSE Constant'
     *  SignalConversion generated from: '<S517>/Variant Source2'
     */
    rtb_Logical1_nr = false;

#endif

    /* End of Logic: '<S517>/Logical1' */

    /* SignalConversion generated from: '<S517>/Variant Source7' */
#if Rte_SysCon_Variant_DMIR_7

    /* RelationalOperator: '<S518>/Comparison3' */
    rtb_Comparison3_c = DMIR_ac_B.Stuck_h;

#else

    /* RelationalOperator: '<S518>/Comparison3' incorporates:
     *  Constant: '<S569>/FALSE Constant'
     *  SignalConversion generated from: '<S517>/Variant Source7'
     */
    rtb_Comparison3_c = false;

#endif

    /* End of SignalConversion generated from: '<S517>/Variant Source7' */

    /* Logic: '<S517>/Logical3' */
    rtb_Logical1_nr = (rtb_Logical1_nr || rtb_Comparison3_c);

    /* SignalConversion generated from: '<S517>/Variant Source3' */
#if Rte_SysCon_Variant_DMIR_9

    /* RelationalOperator: '<S518>/Comparison3' */
    rtb_Comparison3_c = DMIR_ac_B.NotStuck_l;

#else

    /* RelationalOperator: '<S518>/Comparison3' incorporates:
     *  Constant: '<S571>/FALSE Constant1'
     *  SignalConversion generated from: '<S517>/Variant Source3'
     */
    rtb_Comparison3_c = false;

#endif

    /* End of SignalConversion generated from: '<S517>/Variant Source3' */

    /* SignalConversion generated from: '<S517>/Variant Source1' */
#if Rte_SysCon_Variant_DMIR_7

    /* RelationalOperator: '<S519>/Comparison1' */
    rtb_Comparison1_dz = DMIR_ac_B.NotStuck_e;

#else

    /* RelationalOperator: '<S519>/Comparison1' incorporates:
     *  Constant: '<S569>/FALSE Constant1'
     *  SignalConversion generated from: '<S517>/Variant Source1'
     */
    rtb_Comparison1_dz = false;

#endif

    /* End of SignalConversion generated from: '<S517>/Variant Source1' */

    /* Logic: '<S517>/Logical4' */
    rtb_RelationalOperator3 = (rtb_Comparison3_c || rtb_Comparison1_dz);

    /* Outputs for Atomic SubSystem: '<S577>/EdgeRising1' */
    /* UnitDelay: '<S624>/Unit Delay' incorporates:
     *  UnitDelay: '<S580>/Unit Delay'
     */
    rtb_Comparison5_ez = DMIR_ac_DW.UnitDelay_DSTATE_bzw;

    /* Update for UnitDelay: '<S580>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_bzw = rtb_AND_ks;

    /* End of Outputs for SubSystem: '<S577>/EdgeRising1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Controls'
     */
    /* Outputs for IfAction SubSystem: '<S59>/SwitchBank1' incorporates:
     *  ActionPort: '<S106>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S183>/EdgeFalling3' */
    /* Outputs for Atomic SubSystem: '<S183>/EdgeFalling4' */
    /* If: '<S59>/If' incorporates:
     *  Logic: '<S191>/OR1'
     *  Logic: '<S192>/OR1'
     *  Logic: '<S577>/OR1'
     */
    tmp_4 = !rtb_AND_ks;

    /* End of Outputs for SubSystem: '<S183>/EdgeFalling4' */
    /* End of Outputs for SubSystem: '<S183>/EdgeFalling3' */
    /* End of Outputs for SubSystem: '<S59>/SwitchBank1' */

    /* Outputs for Atomic SubSystem: '<S577>/EdgeRising1' */
    /* Switch: '<S577>/Switch1' incorporates:
     *  Logic: '<S577>/OR'
     *  Logic: '<S577>/OR1'
     *  Logic: '<S580>/AND'
     *  Logic: '<S580>/OR1'
     */
    if (tmp_4 || (rtb_AND_ks && (!rtb_Comparison5_ez)))
    {
        /* Switch: '<S577>/Switch1' incorporates:
         *  Constant: '<S577>/Constant Value1'
         */
        VeDMIR_t_EVBtnPrsTine = 0.0F;
    }
    else
    {
        /* Switch: '<S577>/Switch1' incorporates:
         *  Constant: '<S575>/Calib'
         *  Sum: '<S577>/Summation'
         *  UnitDelay: '<S577>/Unit Delay'
         */
        VeDMIR_t_EVBtnPrsTine = KeDMIR_t_MedTED + DMIR_ac_DW.UnitDelay_DSTATE_n0;
    }

    /* End of Switch: '<S577>/Switch1' */
    /* End of Outputs for SubSystem: '<S577>/EdgeRising1' */

    /* RelationalOperator: '<S518>/Comparison1' incorporates:
     *  Constant: '<S584>/Constant'
     */
    rtb_AND_mbz = (((uint32)rtb_UnitDelay_m5m_tmp) == CeDMDR_e_ShortGrnd);

    /* RelationalOperator: '<S519>/Comparison1' incorporates:
     *  Constant: '<S585>/Constant'
     *  RelationalOperator: '<S518>/Comparison2'
     */
    rtb_Comparison1_dz = (((uint32)rtb_UnitDelay_m5m_tmp) ==
                          CeDMDR_e_BtnPlsbltyFlt);

    /* RelationalOperator: '<S518>/Comparison3' incorporates:
     *  Constant: '<S591>/Calib'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_Comparison3_c = (rtb_TmpSignalConversionAtTmp_mv ==
                         KeDMIR_y_DNAKnobShrtToPwr);

    /* RelationalOperator: '<S518>/Comparison4' incorporates:
     *  Constant: '<S586>/Constant'
     */
    rtb_AND_bat = (((uint32)rtb_UnitDelay_m5m_tmp) == CeDMDR_e_ShortPwr);

    /* RelationalOperator: '<S518>/Comparison5' incorporates:
     *  Constant: '<S590>/Calib'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_Comparison5_ez = (rtb_TmpSignalConversionAtTmp_mv ==
                          KeDMIR_y_DNAKnobShrtToGrnd);

    /* RelationalOperator: '<S518>/Relational Operator' incorporates:
     *  Constant: '<S518>/Constant2'
     *  S-Function (sfix_bitop): '<S518>/Bitwise Operator'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_RelationalOperator_n = ((((uint32)tmpRead_f) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S518>/EdgeFalling' */
    /* Logic: '<S581>/AND' incorporates:
     *  Logic: '<S581>/OR1'
     *  UnitDelay: '<S581>/Unit Delay'
     */
    rtb_AND_nv = ((!rtb_RelationalOperator_n) && (DMIR_ac_DW.UnitDelay_DSTATE_df));

    /* Update for UnitDelay: '<S581>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_df = rtb_RelationalOperator_n;

    /* End of Outputs for SubSystem: '<S518>/EdgeFalling' */

    /* RelationalOperator: '<S518>/Relational Operator1' incorporates:
     *  Constant: '<S518>/Constant1'
     *  S-Function (sfix_bitop): '<S518>/Bitwise Operator1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_RelationalOperator_n = ((((uint32)tmpRead_l) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S518>/EdgeFalling1' */
    /* Logic: '<S582>/AND' incorporates:
     *  Logic: '<S582>/OR1'
     *  UnitDelay: '<S582>/Unit Delay'
     */
    rtb_AND_is = ((!rtb_RelationalOperator_n) && (DMIR_ac_DW.UnitDelay_DSTATE_n4));

    /* Update for UnitDelay: '<S582>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_n4 = rtb_RelationalOperator_n;

    /* End of Outputs for SubSystem: '<S518>/EdgeFalling1' */

    /* RelationalOperator: '<S518>/Relational Operator2' incorporates:
     *  Constant: '<S518>/Constant3'
     *  S-Function (sfix_bitop): '<S518>/Bitwise Operator2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_RelationalOperator2_cw = ((((uint32)tmpRead_m) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S518>/EdgeFalling2' */
    /* Logic: '<S583>/AND' incorporates:
     *  Logic: '<S583>/OR1'
     *  UnitDelay: '<S583>/Unit Delay'
     */
    rtb_RelationalOperator_n = ((!rtb_RelationalOperator2_cw) &&
        (DMIR_ac_DW.UnitDelay_DSTATE_ji));

    /* Update for UnitDelay: '<S583>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ji = rtb_RelationalOperator2_cw;

    /* End of Outputs for SubSystem: '<S518>/EdgeFalling2' */

    /* Logic: '<S518>/Logical3' */
    rtb_RelationalOperator2_cw = (rtb_AND_bat || rtb_Comparison3_c);

    /* Logic: '<S518>/Logical1' incorporates:
     *  Chart: '<S518>/P05D2_Diag'
     */
    rtb_Logical1_al_tmp = !rtb_RelationalOperator2_cw;

    /* Chart: '<S518>/P05D2_Diag' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S588>/Calib'
     *  Constant: '<S589>/Calib'
     *  Logic: '<S518>/Logical1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ElectricPlus_Button/P05D2_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ElectricPlus_Button/P05D2_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c52_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ElectricPlus_Button/P05D2_Diag */
        DMIR_ac_DW.is_active_c52_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ElectricPlus_Button/P05D2_Diag */
        /* Transition: '<S593>:140' */
        DMIR_ac_DW.is_c52_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S593>:138' */
        /* Transition: '<S593>:105' */
        DMIR_ac_DW.is_DEBOUNCE_iu = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S593>:73' */
        VeDMIR_e_P05D2_Status = CeDMIR_e_DiagIdle;
        VeDMIR_b_P05D1_Fail = false;
        VeDMIR_b_P05D1_Pass = false;
    }
    else
    {
        switch (DMIR_ac_DW.is_c52_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S593>:138' */
            if ((!rtb_AND_k1) || rtb_AND_nv)
            {
                /* Transition: '<S593>:152' */
                /* Exit Internal 'DEBOUNCE': '<S593>:138' */
                /* Entry Internal 'DEBOUNCE': '<S593>:138' */
                /* Transition: '<S593>:105' */
                DMIR_ac_DW.is_DEBOUNCE_iu = DMIR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S593>:73' */
                VeDMIR_e_P05D2_Status = CeDMIR_e_DiagIdle;
                VeDMIR_b_P05D1_Fail = false;
                VeDMIR_b_P05D1_Pass = false;
            }
            else
            {
                switch (DMIR_ac_DW.is_DEBOUNCE_iu)
                {
                  case DMIR_ac_IN_FAILING:
                    VeDMIR_e_P05D2_Status = CeDMIR_e_Failing;

                    /* During 'FAILING': '<S593>:3' */
                    /* Transition: '<S593>:118' */
                    if (VeDMIR_t_P05D2_timeCnt >= KeDMIR_t_TiDebounceHeal)
                    {
                        /* Transition: '<S593>:33' */
                        DMIR_ac_DW.is_DEBOUNCE_iu = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c52_DMIR_ac = DMIR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S593>:25' */
                        VeDMIR_e_P05D2_Status = CeDMIR_e_Fail;
                        VeDMIR_b_P05D1_Fail = true;
                        DMIR_ac_B.FaultDtctd_i = true;
                    }
                    else if (rtb_Logical1_al_tmp)
                    {
                        /* Transition: '<S593>:125' */
                        DMIR_ac_DW.is_DEBOUNCE_iu = DMIR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S593>:4' */
                        VeDMIR_e_P05D2_Status = CeDMIR_e_Passing;
                        VeDMIR_t_P05D2_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05D2_timeCnt = VeDMIR_t_P05D2_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;

                  case DMIR_ac_IN_IDLE:
                    VeDMIR_e_P05D2_Status = CeDMIR_e_DiagIdle;

                    /* During 'IDLE': '<S593>:73' */
                    /* Transition: '<S593>:74' */
                    if (rtb_RelationalOperator2_cw)
                    {
                        /* Transition: '<S593>:45' */
                        /* Transition: '<S593>:7' */
                        DMIR_ac_DW.is_DEBOUNCE_iu = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S593>:3' */
                        VeDMIR_e_P05D2_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05D2_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_Logical1_al_tmp)
                        {
                            /* Transition: '<S593>:46' */
                            DMIR_ac_DW.is_DEBOUNCE_iu = DMIR_ac_IN_PASSING;

                            /* Entry 'PASSING': '<S593>:4' */
                            VeDMIR_e_P05D2_Status = CeDMIR_e_Passing;
                            VeDMIR_t_P05D2_timeCnt = 0.0F;
                        }
                    }
                    break;

                  default:
                    VeDMIR_e_P05D2_Status = CeDMIR_e_Passing;

                    /* During 'PASSING': '<S593>:4' */
                    /* Transition: '<S593>:112' */
                    if (VeDMIR_t_P05D2_timeCnt >= KeDMIR_t_TiDebounceSet)
                    {
                        /* Transition: '<S593>:34' */
                        DMIR_ac_DW.is_DEBOUNCE_iu = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c52_DMIR_ac = DMIR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S593>:26' */
                        VeDMIR_e_P05D2_Status = CeDMIR_e_Pass;
                        VeDMIR_b_P05D1_Pass = true;
                        DMIR_ac_B.FaultDtctd_i = false;
                    }
                    else if (rtb_RelationalOperator2_cw)
                    {
                        /* Transition: '<S593>:12' */
                        DMIR_ac_DW.is_DEBOUNCE_iu = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S593>:3' */
                        VeDMIR_e_P05D2_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05D2_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05D2_timeCnt = VeDMIR_t_P05D2_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case DMIR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S593>:25' */
            /* Transition: '<S593>:153' */
            DMIR_ac_DW.is_c52_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S593>:138' */
            /* Transition: '<S593>:105' */
            DMIR_ac_DW.is_DEBOUNCE_iu = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S593>:73' */
            VeDMIR_e_P05D2_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05D1_Fail = false;
            VeDMIR_b_P05D1_Pass = false;
            break;

          default:
            /* During 'PASS_MATURED': '<S593>:26' */
            /* Transition: '<S593>:139' */
            DMIR_ac_DW.is_c52_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S593>:138' */
            /* Transition: '<S593>:105' */
            DMIR_ac_DW.is_DEBOUNCE_iu = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S593>:73' */
            VeDMIR_e_P05D2_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05D1_Fail = false;
            VeDMIR_b_P05D1_Pass = false;
            break;
        }
    }

    /* Logic: '<S518>/Logical6' */
    rtb_RelationalOperator2_cw = (rtb_AND_mbz || rtb_Comparison5_ez);

    /* Logic: '<S518>/Logical4' incorporates:
     *  Chart: '<S518>/P05D1_Diag'
     */
    rtb_Logical1_al_tmp = !rtb_RelationalOperator2_cw;

    /* Chart: '<S518>/P05D1_Diag' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S588>/Calib'
     *  Constant: '<S589>/Calib'
     *  Logic: '<S518>/Logical4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ElectricPlus_Button/P05D1_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ElectricPlus_Button/P05D1_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c51_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ElectricPlus_Button/P05D1_Diag */
        DMIR_ac_DW.is_active_c51_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ElectricPlus_Button/P05D1_Diag */
        /* Transition: '<S592>:140' */
        DMIR_ac_DW.is_c51_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S592>:138' */
        /* Transition: '<S592>:105' */
        DMIR_ac_DW.is_DEBOUNCE_l = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S592>:73' */
        VeDMIR_e_P05D1_Status = CeDMIR_e_DiagIdle;
        VeDMIR_b_P05D2_Fail = false;
        VeDMIR_b_P05D2_Pass = false;
    }
    else
    {
        switch (DMIR_ac_DW.is_c51_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S592>:138' */
            if ((!rtb_AND_k1) || rtb_AND_is)
            {
                /* Transition: '<S592>:152' */
                /* Exit Internal 'DEBOUNCE': '<S592>:138' */
                /* Entry Internal 'DEBOUNCE': '<S592>:138' */
                /* Transition: '<S592>:105' */
                DMIR_ac_DW.is_DEBOUNCE_l = DMIR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S592>:73' */
                VeDMIR_e_P05D1_Status = CeDMIR_e_DiagIdle;
                VeDMIR_b_P05D2_Fail = false;
                VeDMIR_b_P05D2_Pass = false;
            }
            else
            {
                switch (DMIR_ac_DW.is_DEBOUNCE_l)
                {
                  case DMIR_ac_IN_FAILING:
                    VeDMIR_e_P05D1_Status = CeDMIR_e_Failing;

                    /* During 'FAILING': '<S592>:3' */
                    /* Transition: '<S592>:118' */
                    if (VeDMIR_t_P05D1_timeCnt >= KeDMIR_t_TiDebounceHeal)
                    {
                        /* Transition: '<S592>:33' */
                        DMIR_ac_DW.is_DEBOUNCE_l = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c51_DMIR_ac = DMIR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S592>:25' */
                        VeDMIR_e_P05D1_Status = CeDMIR_e_Fail;
                        VeDMIR_b_P05D2_Fail = true;
                        DMIR_ac_B.FaultDtctd_g = true;
                    }
                    else if (rtb_Logical1_al_tmp)
                    {
                        /* Transition: '<S592>:125' */
                        DMIR_ac_DW.is_DEBOUNCE_l = DMIR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S592>:4' */
                        VeDMIR_e_P05D1_Status = CeDMIR_e_Passing;
                        VeDMIR_t_P05D1_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05D1_timeCnt = VeDMIR_t_P05D1_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;

                  case DMIR_ac_IN_IDLE:
                    VeDMIR_e_P05D1_Status = CeDMIR_e_DiagIdle;

                    /* During 'IDLE': '<S592>:73' */
                    /* Transition: '<S592>:74' */
                    if (rtb_RelationalOperator2_cw)
                    {
                        /* Transition: '<S592>:45' */
                        /* Transition: '<S592>:7' */
                        DMIR_ac_DW.is_DEBOUNCE_l = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S592>:3' */
                        VeDMIR_e_P05D1_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05D1_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_Logical1_al_tmp)
                        {
                            /* Transition: '<S592>:46' */
                            DMIR_ac_DW.is_DEBOUNCE_l = DMIR_ac_IN_PASSING;

                            /* Entry 'PASSING': '<S592>:4' */
                            VeDMIR_e_P05D1_Status = CeDMIR_e_Passing;
                            VeDMIR_t_P05D1_timeCnt = 0.0F;
                        }
                    }
                    break;

                  default:
                    VeDMIR_e_P05D1_Status = CeDMIR_e_Passing;

                    /* During 'PASSING': '<S592>:4' */
                    /* Transition: '<S592>:112' */
                    if (VeDMIR_t_P05D1_timeCnt >= KeDMIR_t_TiDebounceSet)
                    {
                        /* Transition: '<S592>:34' */
                        DMIR_ac_DW.is_DEBOUNCE_l = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c51_DMIR_ac = DMIR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S592>:26' */
                        VeDMIR_e_P05D1_Status = CeDMIR_e_Pass;
                        VeDMIR_b_P05D2_Pass = true;
                        DMIR_ac_B.FaultDtctd_g = false;
                    }
                    else if (rtb_RelationalOperator2_cw)
                    {
                        /* Transition: '<S592>:12' */
                        DMIR_ac_DW.is_DEBOUNCE_l = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S592>:3' */
                        VeDMIR_e_P05D1_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05D1_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05D1_timeCnt = VeDMIR_t_P05D1_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case DMIR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S592>:25' */
            /* Transition: '<S592>:153' */
            DMIR_ac_DW.is_c51_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S592>:138' */
            /* Transition: '<S592>:105' */
            DMIR_ac_DW.is_DEBOUNCE_l = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S592>:73' */
            VeDMIR_e_P05D1_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05D2_Fail = false;
            VeDMIR_b_P05D2_Pass = false;
            break;

          default:
            /* During 'PASS_MATURED': '<S592>:26' */
            /* Transition: '<S592>:139' */
            DMIR_ac_DW.is_c51_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S592>:138' */
            /* Transition: '<S592>:105' */
            DMIR_ac_DW.is_DEBOUNCE_l = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S592>:73' */
            VeDMIR_e_P05D1_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05D2_Fail = false;
            VeDMIR_b_P05D2_Pass = false;
            break;
        }
    }

    /* Logic: '<S518>/Logical9' incorporates:
     *  Logic: '<S518>/Logical15'
     */
    rtb_Logical1_al_tmp = (rtb_Comparison1_dz || rtb_Logical1_nr);

    /* Logic: '<S518>/Logical7' incorporates:
     *  Logic: '<S518>/Logical8'
     */
    rtb_RelationalOperator3 = ((!rtb_Comparison1_dz) && rtb_RelationalOperator3);

    /* Chart: '<S518>/P05D3_Diag' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S588>/Calib'
     *  Constant: '<S589>/Calib'
     *  Logic: '<S518>/Logical9'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ElectricPlus_Button/P05D3_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ElectricPlus_Button/P05D3_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c69_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ElectricPlus_Button/P05D3_Diag */
        DMIR_ac_DW.is_active_c69_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/EV_ElectricPlus_Button/P05D3_Diag */
        /* Transition: '<S594>:140' */
        DMIR_ac_DW.is_c69_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S594>:138' */
        /* Transition: '<S594>:105' */
        DMIR_ac_DW.is_DEBOUNCE_n = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S594>:73' */
        VeDMIR_e_P05D3_Status = CeDMIR_e_DiagIdle;
        VeDMIR_b_P05D3_Fail = false;
        VeDMIR_b_P05D3_Pass = false;
    }
    else
    {
        switch (DMIR_ac_DW.is_c69_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S594>:138' */
            if ((((!rtb_RelationalOperator3) && (!rtb_Logical1_al_tmp)) ||
                    (!rtb_AND_k1)) || rtb_RelationalOperator_n)
            {
                /* Transition: '<S594>:152' */
                /* Exit Internal 'DEBOUNCE': '<S594>:138' */
                /* Entry Internal 'DEBOUNCE': '<S594>:138' */
                /* Transition: '<S594>:105' */
                DMIR_ac_DW.is_DEBOUNCE_n = DMIR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S594>:73' */
                VeDMIR_e_P05D3_Status = CeDMIR_e_DiagIdle;
                VeDMIR_b_P05D3_Fail = false;
                VeDMIR_b_P05D3_Pass = false;
            }
            else
            {
                switch (DMIR_ac_DW.is_DEBOUNCE_n)
                {
                  case DMIR_ac_IN_FAILING:
                    VeDMIR_e_P05D3_Status = CeDMIR_e_Failing;

                    /* During 'FAILING': '<S594>:3' */
                    /* Transition: '<S594>:118' */
                    if (VeDMIR_t_P05D3_timeCnt >= KeDMIR_t_TiDebounceHeal)
                    {
                        /* Transition: '<S594>:33' */
                        DMIR_ac_DW.is_DEBOUNCE_n = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c69_DMIR_ac = DMIR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S594>:25' */
                        VeDMIR_e_P05D3_Status = CeDMIR_e_Fail;
                        VeDMIR_b_P05D3_Fail = true;
                        DMIR_ac_B.FaultDtctd_f = true;
                    }
                    else if (rtb_RelationalOperator3)
                    {
                        /* Transition: '<S594>:125' */
                        DMIR_ac_DW.is_DEBOUNCE_n = DMIR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S594>:4' */
                        VeDMIR_e_P05D3_Status = CeDMIR_e_Passing;
                        VeDMIR_t_P05D3_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05D3_timeCnt = VeDMIR_t_P05D3_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;

                  case DMIR_ac_IN_IDLE:
                    VeDMIR_e_P05D3_Status = CeDMIR_e_DiagIdle;

                    /* During 'IDLE': '<S594>:73' */
                    /* Transition: '<S594>:74' */
                    if (rtb_Logical1_al_tmp)
                    {
                        /* Transition: '<S594>:45' */
                        /* Transition: '<S594>:7' */
                        DMIR_ac_DW.is_DEBOUNCE_n = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S594>:3' */
                        VeDMIR_e_P05D3_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05D3_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_RelationalOperator3)
                        {
                            /* Transition: '<S594>:46' */
                            DMIR_ac_DW.is_DEBOUNCE_n = DMIR_ac_IN_PASSING;

                            /* Entry 'PASSING': '<S594>:4' */
                            VeDMIR_e_P05D3_Status = CeDMIR_e_Passing;
                            VeDMIR_t_P05D3_timeCnt = 0.0F;
                        }
                    }
                    break;

                  default:
                    VeDMIR_e_P05D3_Status = CeDMIR_e_Passing;

                    /* During 'PASSING': '<S594>:4' */
                    /* Transition: '<S594>:112' */
                    if (VeDMIR_t_P05D3_timeCnt >= KeDMIR_t_TiDebounceSet)
                    {
                        /* Transition: '<S594>:34' */
                        DMIR_ac_DW.is_DEBOUNCE_n = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c69_DMIR_ac = DMIR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S594>:26' */
                        VeDMIR_e_P05D3_Status = CeDMIR_e_Pass;
                        VeDMIR_b_P05D3_Pass = true;
                        DMIR_ac_B.FaultDtctd_f = false;
                    }
                    else if (rtb_Logical1_al_tmp)
                    {
                        /* Transition: '<S594>:12' */
                        DMIR_ac_DW.is_DEBOUNCE_n = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S594>:3' */
                        VeDMIR_e_P05D3_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05D3_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05D3_timeCnt = VeDMIR_t_P05D3_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case DMIR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S594>:25' */
            /* Transition: '<S594>:153' */
            DMIR_ac_DW.is_c69_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S594>:138' */
            /* Transition: '<S594>:105' */
            DMIR_ac_DW.is_DEBOUNCE_n = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S594>:73' */
            VeDMIR_e_P05D3_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05D3_Fail = false;
            VeDMIR_b_P05D3_Pass = false;
            break;

          default:
            /* During 'PASS_MATURED': '<S594>:26' */
            /* Transition: '<S594>:139' */
            DMIR_ac_DW.is_c69_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S594>:138' */
            /* Transition: '<S594>:105' */
            DMIR_ac_DW.is_DEBOUNCE_n = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S594>:73' */
            VeDMIR_e_P05D3_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05D3_Fail = false;
            VeDMIR_b_P05D3_Pass = false;
            break;
        }
    }

    /* End of Chart: '<S518>/P05D3_Diag' */

    /* Outputs for Atomic SubSystem: '<S595>/EdgeFalling1' */
    /* Update for UnitDelay: '<S601>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ju = true;

    /* End of Outputs for SubSystem: '<S595>/EdgeFalling1' */

    /* If: '<S595>/If' incorporates:
     *  Logic: '<S595>/Logical5'
     */
    if (rtb_AND_is)
    {
        /* Outputs for IfAction SubSystem: '<S595>/Init' incorporates:
         *  ActionPort: '<S603>/Action Port'
         */
        DMIR_ac_Init_g(&DMIR_ac_B.Merge_ma);

        /* End of Outputs for SubSystem: '<S595>/Init' */
    }
    else if (VeDMIR_b_P05D2_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S595>/Pass' incorporates:
         *  ActionPort: '<S604>/Action Port'
         */
        DMIR_ac_Pass(&DMIR_ac_B.Merge_ma);

        /* End of Outputs for SubSystem: '<S595>/Pass' */
    }
    else
    {
        if (VeDMIR_b_P05D2_Fail)
        {
            /* Outputs for IfAction SubSystem: '<S595>/Fail' incorporates:
             *  ActionPort: '<S602>/Action Port'
             */
            DMIR_ac_Fail(&DMIR_ac_B.Merge_ma);

            /* End of Outputs for SubSystem: '<S595>/Fail' */
        }
    }

    /* End of If: '<S595>/If' */

    /* Outputs for Atomic SubSystem: '<S596>/EdgeFalling1' */
    /* Update for UnitDelay: '<S608>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_hr = true;

    /* End of Outputs for SubSystem: '<S596>/EdgeFalling1' */

    /* If: '<S596>/If' incorporates:
     *  Logic: '<S596>/Logical5'
     */
    if (rtb_AND_nv)
    {
        /* Outputs for IfAction SubSystem: '<S596>/Init' incorporates:
         *  ActionPort: '<S610>/Action Port'
         */
        DMIR_ac_Init_g(&DMIR_ac_B.Merge_l);

        /* End of Outputs for SubSystem: '<S596>/Init' */
    }
    else if (VeDMIR_b_P05D1_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S596>/Pass' incorporates:
         *  ActionPort: '<S611>/Action Port'
         */
        DMIR_ac_Pass(&DMIR_ac_B.Merge_l);

        /* End of Outputs for SubSystem: '<S596>/Pass' */
    }
    else
    {
        if (VeDMIR_b_P05D1_Fail)
        {
            /* Outputs for IfAction SubSystem: '<S596>/Fail' incorporates:
             *  ActionPort: '<S609>/Action Port'
             */
            DMIR_ac_Fail(&DMIR_ac_B.Merge_l);

            /* End of Outputs for SubSystem: '<S596>/Fail' */
        }
    }

    /* End of If: '<S596>/If' */

    /* Outputs for Atomic SubSystem: '<S597>/EdgeFalling1' */
    /* Update for UnitDelay: '<S615>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ac = true;

    /* End of Outputs for SubSystem: '<S597>/EdgeFalling1' */

    /* If: '<S597>/If' incorporates:
     *  Logic: '<S597>/Logical5'
     */
    if (rtb_RelationalOperator_n)
    {
        /* Outputs for IfAction SubSystem: '<S597>/Init' incorporates:
         *  ActionPort: '<S617>/Action Port'
         */
        DMIR_ac_Init_g(&DMIR_ac_B.Merge_c);

        /* End of Outputs for SubSystem: '<S597>/Init' */
    }
    else if (VeDMIR_b_P05D3_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S597>/Pass' incorporates:
         *  ActionPort: '<S618>/Action Port'
         */
        DMIR_ac_Pass(&DMIR_ac_B.Merge_c);

        /* End of Outputs for SubSystem: '<S597>/Pass' */
    }
    else
    {
        if (VeDMIR_b_P05D3_Fail)
        {
            /* Outputs for IfAction SubSystem: '<S597>/Fail' incorporates:
             *  ActionPort: '<S616>/Action Port'
             */
            DMIR_ac_Fail(&DMIR_ac_B.Merge_c);

            /* End of Outputs for SubSystem: '<S597>/Fail' */
        }
    }

    /* End of If: '<S597>/If' */

    /* RelationalOperator: '<S519>/Comparison1' incorporates:
     *  Merge: '<Root>/Merge_7'
     *  RelationalOperator: '<S506>/Comparison4'
     *  RelationalOperator: '<S519>/Comparison2'
     *  RelationalOperator: '<S519>/Comparison4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_UnitDelay_m5m_tmp = Rte_IrvRead_DMIR_MedTED1_Comm_EcoBtnSt_write_IRV();

    /* RelationalOperator: '<S519>/Comparison1' incorporates:
     *  Constant: '<S625>/Constant'
     */
    rtb_Comparison1_dz = (((uint32)rtb_UnitDelay_m5m_tmp) == CeDMDR_e_ShortGrnd);

    /* RelationalOperator: '<S519>/Comparison2' incorporates:
     *  Constant: '<S626>/Constant'
     */
    rtb_AND_nv = (((uint32)rtb_UnitDelay_m5m_tmp) == CeDMDR_e_BtnPlsbltyFlt);

    /* RelationalOperator: '<S519>/Comparison3' incorporates:
     *  Constant: '<S627>/Constant'
     */
    rtb_RelationalOperator_n = (((uint32)rtb_TmpSignalConversionAtTmp_cl) ==
        CeDMIR_e_ShortToGround);

    /* RelationalOperator: '<S519>/Comparison4' incorporates:
     *  Constant: '<S628>/Constant'
     */
    rtb_AND_is = (((uint32)rtb_UnitDelay_m5m_tmp) == CeDMDR_e_ShortPwr);

    /* RelationalOperator: '<S519>/Comparison5' incorporates:
     *  Constant: '<S629>/Constant'
     */
    rtb_RelationalOperator2_cw = (((uint32)rtb_TmpSignalConversionAtTmp_cl) ==
        CeDMIR_e_OpenShortToPwr);

    /* RelationalOperator: '<S519>/Relational Operator1' incorporates:
     *  Constant: '<S519>/Constant1'
     *  S-Function (sfix_bitop): '<S519>/Bitwise Operator1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_RelationalOperator3 = ((((uint32)rtb_Switch2_pb) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S519>/EdgeFalling1' */
    /* Logic: '<S622>/AND' incorporates:
     *  Logic: '<S622>/OR1'
     *  UnitDelay: '<S622>/Unit Delay'
     */
    rtb_AND_i2 = ((!rtb_RelationalOperator3) && (DMIR_ac_DW.UnitDelay_DSTATE_ic));

    /* Update for UnitDelay: '<S622>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ic = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S519>/EdgeFalling1' */

    /* RelationalOperator: '<S519>/Relational Operator2' incorporates:
     *  Constant: '<S519>/Constant3'
     *  S-Function (sfix_bitop): '<S519>/Bitwise Operator2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_RelationalOperator3 = ((((uint32)tmpRead_q) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S519>/EdgeFalling2' */
    /* Logic: '<S623>/AND' incorporates:
     *  Logic: '<S623>/OR1'
     *  UnitDelay: '<S623>/Unit Delay'
     */
    rtb_AND_ev = ((!rtb_RelationalOperator3) && (DMIR_ac_DW.UnitDelay_DSTATE_ap));

    /* Update for UnitDelay: '<S623>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ap = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S519>/EdgeFalling2' */

    /* RelationalOperator: '<S519>/Relational Operator3' incorporates:
     *  Constant: '<S519>/Constant2'
     *  S-Function (sfix_bitop): '<S519>/Bitwise Operator3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_RelationalOperator3 = ((((uint32)rtb_eCoastThreshold_TrrnMd) & 64U) ==
        0U);

    /* Outputs for Atomic SubSystem: '<S519>/EdgeFalling3' */
    /* Logic: '<S624>/AND' incorporates:
     *  Logic: '<S624>/OR1'
     *  UnitDelay: '<S624>/Unit Delay'
     */
    rtb_AND_dk = ((!rtb_RelationalOperator3) && (DMIR_ac_DW.UnitDelay_DSTATE_av));

    /* Update for UnitDelay: '<S624>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_av = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S519>/EdgeFalling3' */

    /* Logic: '<S519>/Logical3' */
    rtb_RelationalOperator3 = (rtb_AND_is || rtb_RelationalOperator2_cw);

    /* Logic: '<S519>/Logical2' incorporates:
     *  Chart: '<S519>/P05CA_Diag'
     */
    rtb_Logical2_ej = !rtb_RelationalOperator3;

    /* Chart: '<S519>/P05CA_Diag' incorporates:
     *  Constant: '<S630>/Calib'
     *  Constant: '<S631>/Calib'
     *  Constant: '<S632>/Calib'
     *  Logic: '<S519>/Logical2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Eco_Hybrid_Button/P05CA_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Eco_Hybrid_Button/P05CA_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c61_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Eco_Hybrid_Button/P05CA_Diag */
        DMIR_ac_DW.is_active_c61_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Eco_Hybrid_Button/P05CA_Diag */
        /* Transition: '<S635>:140' */
        DMIR_ac_DW.is_c61_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S635>:138' */
        /* Transition: '<S635>:105' */
        DMIR_ac_DW.is_DEBOUNCE_i = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S635>:73' */
        VeDMIR_e_P05CA_Status = CeDMIR_e_DiagIdle;
        VeDMIR_b_P05CA_Fail = false;
        VeDMIR_b_P05CA_Pass = false;
    }
    else
    {
        switch (DMIR_ac_DW.is_c61_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S635>:138' */
            if ((!rtb_AND_k1) || rtb_AND_ev)
            {
                /* Transition: '<S635>:152' */
                /* Exit Internal 'DEBOUNCE': '<S635>:138' */
                /* Entry Internal 'DEBOUNCE': '<S635>:138' */
                /* Transition: '<S635>:105' */
                DMIR_ac_DW.is_DEBOUNCE_i = DMIR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S635>:73' */
                VeDMIR_e_P05CA_Status = CeDMIR_e_DiagIdle;
                VeDMIR_b_P05CA_Fail = false;
                VeDMIR_b_P05CA_Pass = false;
            }
            else
            {
                switch (DMIR_ac_DW.is_DEBOUNCE_i)
                {
                  case DMIR_ac_IN_FAILING:
                    VeDMIR_e_P05CA_Status = CeDMIR_e_Failing;

                    /* During 'FAILING': '<S635>:3' */
                    /* Transition: '<S635>:118' */
                    if (VeDMIR_t_P05CA_timeCnt >= KeDMIR_t_TiDebounceSet)
                    {
                        /* Transition: '<S635>:33' */
                        DMIR_ac_DW.is_DEBOUNCE_i = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c61_DMIR_ac = DMIR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S635>:25' */
                        VeDMIR_e_P05CA_Status = CeDMIR_e_Fail;
                        VeDMIR_b_P05CA_Fail = true;
                        DMIR_ac_B.FaultDtctd = true;
                    }
                    else if (rtb_Logical2_ej)
                    {
                        /* Transition: '<S635>:125' */
                        DMIR_ac_DW.is_DEBOUNCE_i = DMIR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S635>:4' */
                        VeDMIR_e_P05CA_Status = CeDMIR_e_Passing;
                        VeDMIR_t_P05CA_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05CA_timeCnt = VeDMIR_t_P05CA_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;

                  case DMIR_ac_IN_IDLE:
                    VeDMIR_e_P05CA_Status = CeDMIR_e_DiagIdle;

                    /* During 'IDLE': '<S635>:73' */
                    /* Transition: '<S635>:74' */
                    if (rtb_RelationalOperator3)
                    {
                        /* Transition: '<S635>:45' */
                        /* Transition: '<S635>:7' */
                        DMIR_ac_DW.is_DEBOUNCE_i = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S635>:3' */
                        VeDMIR_e_P05CA_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05CA_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_Logical2_ej)
                        {
                            /* Transition: '<S635>:46' */
                            DMIR_ac_DW.is_DEBOUNCE_i = DMIR_ac_IN_PASSING;

                            /* Entry 'PASSING': '<S635>:4' */
                            VeDMIR_e_P05CA_Status = CeDMIR_e_Passing;
                            VeDMIR_t_P05CA_timeCnt = 0.0F;
                        }
                    }
                    break;

                  default:
                    VeDMIR_e_P05CA_Status = CeDMIR_e_Passing;

                    /* During 'PASSING': '<S635>:4' */
                    /* Transition: '<S635>:112' */
                    if (VeDMIR_t_P05CA_timeCnt >= KeDMIR_t_TiDebounceHeal)
                    {
                        /* Transition: '<S635>:34' */
                        DMIR_ac_DW.is_DEBOUNCE_i = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c61_DMIR_ac = DMIR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S635>:26' */
                        VeDMIR_e_P05CA_Status = CeDMIR_e_Pass;
                        VeDMIR_b_P05CA_Pass = true;
                        DMIR_ac_B.FaultDtctd = false;
                    }
                    else if (rtb_RelationalOperator3)
                    {
                        /* Transition: '<S635>:12' */
                        DMIR_ac_DW.is_DEBOUNCE_i = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S635>:3' */
                        VeDMIR_e_P05CA_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05CA_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05CA_timeCnt = VeDMIR_t_P05CA_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case DMIR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S635>:25' */
            /* Transition: '<S635>:153' */
            DMIR_ac_DW.is_c61_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S635>:138' */
            /* Transition: '<S635>:105' */
            DMIR_ac_DW.is_DEBOUNCE_i = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S635>:73' */
            VeDMIR_e_P05CA_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05CA_Fail = false;
            VeDMIR_b_P05CA_Pass = false;
            break;

          default:
            /* During 'PASS_MATURED': '<S635>:26' */
            /* Transition: '<S635>:139' */
            DMIR_ac_DW.is_c61_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S635>:138' */
            /* Transition: '<S635>:105' */
            DMIR_ac_DW.is_DEBOUNCE_i = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S635>:73' */
            VeDMIR_e_P05CA_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05CA_Fail = false;
            VeDMIR_b_P05CA_Pass = false;
            break;
        }
    }

    /* Logic: '<S519>/Logical6' */
    rtb_RelationalOperator3 = (rtb_Comparison1_dz || rtb_RelationalOperator_n);

    /* Logic: '<S519>/Logical5' incorporates:
     *  Chart: '<S519>/P05C9_Diag'
     */
    rtb_Logical2_ej = !rtb_RelationalOperator3;

    /* Chart: '<S519>/P05C9_Diag' incorporates:
     *  Constant: '<S630>/Calib'
     *  Constant: '<S631>/Calib'
     *  Constant: '<S632>/Calib'
     *  Logic: '<S519>/Logical5'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Eco_Hybrid_Button/P05C9_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Eco_Hybrid_Button/P05C9_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c60_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Eco_Hybrid_Button/P05C9_Diag */
        DMIR_ac_DW.is_active_c60_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Eco_Hybrid_Button/P05C9_Diag */
        /* Transition: '<S634>:140' */
        DMIR_ac_DW.is_c60_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S634>:138' */
        /* Transition: '<S634>:105' */
        DMIR_ac_DW.is_DEBOUNCE_df = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S634>:73' */
        VeDMIR_e_P05C9_Status = CeDMIR_e_DiagIdle;
        VeDMIR_b_P05C9_Fail = false;
        VeDMIR_b_P05C9_Pass = false;
    }
    else
    {
        switch (DMIR_ac_DW.is_c60_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S634>:138' */
            if ((!rtb_AND_k1) || rtb_AND_i2)
            {
                /* Transition: '<S634>:152' */
                /* Exit Internal 'DEBOUNCE': '<S634>:138' */
                /* Entry Internal 'DEBOUNCE': '<S634>:138' */
                /* Transition: '<S634>:105' */
                DMIR_ac_DW.is_DEBOUNCE_df = DMIR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S634>:73' */
                VeDMIR_e_P05C9_Status = CeDMIR_e_DiagIdle;
                VeDMIR_b_P05C9_Fail = false;
                VeDMIR_b_P05C9_Pass = false;
            }
            else
            {
                switch (DMIR_ac_DW.is_DEBOUNCE_df)
                {
                  case DMIR_ac_IN_FAILING:
                    VeDMIR_e_P05C9_Status = CeDMIR_e_Failing;

                    /* During 'FAILING': '<S634>:3' */
                    /* Transition: '<S634>:118' */
                    if (VeDMIR_t_P05C9_timeCnt >= KeDMIR_t_TiDebounceSet)
                    {
                        /* Transition: '<S634>:33' */
                        DMIR_ac_DW.is_DEBOUNCE_df = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c60_DMIR_ac = DMIR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S634>:25' */
                        VeDMIR_e_P05C9_Status = CeDMIR_e_Fail;
                        VeDMIR_b_P05C9_Fail = true;
                        DMIR_ac_B.FaultDtctd_b = true;
                    }
                    else if (rtb_Logical2_ej)
                    {
                        /* Transition: '<S634>:125' */
                        DMIR_ac_DW.is_DEBOUNCE_df = DMIR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S634>:4' */
                        VeDMIR_e_P05C9_Status = CeDMIR_e_Passing;
                        VeDMIR_t_P05C9_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05C9_timeCnt = VeDMIR_t_P05C9_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;

                  case DMIR_ac_IN_IDLE:
                    VeDMIR_e_P05C9_Status = CeDMIR_e_DiagIdle;

                    /* During 'IDLE': '<S634>:73' */
                    /* Transition: '<S634>:74' */
                    if (rtb_RelationalOperator3)
                    {
                        /* Transition: '<S634>:45' */
                        /* Transition: '<S634>:7' */
                        DMIR_ac_DW.is_DEBOUNCE_df = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S634>:3' */
                        VeDMIR_e_P05C9_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05C9_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_Logical2_ej)
                        {
                            /* Transition: '<S634>:46' */
                            DMIR_ac_DW.is_DEBOUNCE_df = DMIR_ac_IN_PASSING;

                            /* Entry 'PASSING': '<S634>:4' */
                            VeDMIR_e_P05C9_Status = CeDMIR_e_Passing;
                            VeDMIR_t_P05C9_timeCnt = 0.0F;
                        }
                    }
                    break;

                  default:
                    VeDMIR_e_P05C9_Status = CeDMIR_e_Passing;

                    /* During 'PASSING': '<S634>:4' */
                    /* Transition: '<S634>:112' */
                    if (VeDMIR_t_P05C9_timeCnt >= KeDMIR_t_TiDebounceHeal)
                    {
                        /* Transition: '<S634>:34' */
                        DMIR_ac_DW.is_DEBOUNCE_df = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c60_DMIR_ac = DMIR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S634>:26' */
                        VeDMIR_e_P05C9_Status = CeDMIR_e_Pass;
                        VeDMIR_b_P05C9_Pass = true;
                        DMIR_ac_B.FaultDtctd_b = false;
                    }
                    else if (rtb_RelationalOperator3)
                    {
                        /* Transition: '<S634>:12' */
                        DMIR_ac_DW.is_DEBOUNCE_df = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S634>:3' */
                        VeDMIR_e_P05C9_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05C9_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05C9_timeCnt = VeDMIR_t_P05C9_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case DMIR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S634>:25' */
            /* Transition: '<S634>:153' */
            DMIR_ac_DW.is_c60_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S634>:138' */
            /* Transition: '<S634>:105' */
            DMIR_ac_DW.is_DEBOUNCE_df = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S634>:73' */
            VeDMIR_e_P05C9_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05C9_Fail = false;
            VeDMIR_b_P05C9_Pass = false;
            break;

          default:
            /* During 'PASS_MATURED': '<S634>:26' */
            /* Transition: '<S634>:139' */
            DMIR_ac_DW.is_c60_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S634>:138' */
            /* Transition: '<S634>:105' */
            DMIR_ac_DW.is_DEBOUNCE_df = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S634>:73' */
            VeDMIR_e_P05C9_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05C9_Fail = false;
            VeDMIR_b_P05C9_Pass = false;
            break;
        }
    }

    /* Logic: '<S506>/Logical3' incorporates:
     *  Constant: '<S679>/Constant'
     *  Constant: '<S680>/Constant'
     *  Constant: '<S681>/Calib'
     *  Constant: '<S682>/Calib'
     *  Logic: '<S506>/Logical2'
     *  RelationalOperator: '<S506>/Comparison1'
     *  RelationalOperator: '<S506>/Comparison2'
     *  RelationalOperator: '<S506>/Comparison3'
     *  RelationalOperator: '<S506>/Comparison4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_RelationalOperator3 = (((((uint32)rtb_UnitDelay_m5m_tmp) ==
        CeDMDR_e_BtnPrsd) || ((rtb_TmpSignalConversionAtTmp_mv ==
        KeDMIR_i_DrvModeUpVal) || (rtb_TmpSignalConversionAtTmp_mv ==
        KeDMIR_i_DrvModeDwnVal))) || (((uint32)rtb_TmpSignalConversionAtTmp_cl) ==
        CeDMIR_e_Pressed));

    /* Logic: '<S520>/Logical1' incorporates:
     *  SignalConversion generated from: '<S520>/Variant Source2'
     * */
#if Rte_SysCon_Variant_DMIR_13

    /* Outputs for Atomic SubSystem: '<S520>/HybBtnStck_Diag' */
    /* Chart: '<S666>/BtnStuck_Diag' incorporates:
     *  Constant: '<S668>/Calib'
     *  Constant: '<S669>/Calib'
     *  Constant: '<S672>/Calib'
     */
    rtb_Logical1_bp = !rtb_RelationalOperator3;

    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Hybrid_ButtonVoltageRangeSuckCheck/HybBtnStck_Diag/BtnStuck_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Hybrid_ButtonVoltageRangeSuckCheck/HybBtnStck_Diag/BtnStuck_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c57_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Hybrid_ButtonVoltageRangeSuckCheck/HybBtnStck_Diag/BtnStuck_Diag */
        DMIR_ac_DW.is_active_c57_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Hybrid_ButtonVoltageRangeSuckCheck/HybBtnStck_Diag/BtnStuck_Diag */
        /* Transition: '<S675>:140' */
        DMIR_ac_DW.is_c57_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S675>:138' */
        /* Transition: '<S675>:105' */
        DMIR_ac_DW.is_DEBOUNCE = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S675>:73' */
        VeDMIR_b_HybBtnStuckStat = CeDMIR_e_SelectionIdle;
    }
    else
    {
        switch (DMIR_ac_DW.is_c57_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S675>:138' */
            switch (DMIR_ac_DW.is_DEBOUNCE)
            {
              case DMIR_ac_IN_ACTIVE:
                VeDMIR_b_HybBtnStuckStat = CeDMIR_e_DiagActive;

                /* During 'ACTIVE': '<S675>:3' */
                /* Transition: '<S675>:118' */
                if (DMIR_ac_B.timeCnt >= KeDMIR_t_BtnMaxActvRatCheck)
                {
                    /* Transition: '<S675>:33' */
                    DMIR_ac_DW.is_DEBOUNCE = DMIR_ac_IN_NO_ACTIVE_CHILD;
                    DMIR_ac_DW.is_c57_DMIR_ac = DMIR_ac_IN_STUCK;

                    /* Entry 'STUCK': '<S675>:25' */
                    VeDMIR_b_HybBtnStuckStat = CeDMIR_e_Stuck;
                    DMIR_ac_B.Stuck = true;
                    DMIR_ac_B.NotStuck = false;
                }
                else if (rtb_Logical1_bp)
                {
                    /* Transition: '<S675>:125' */
                    DMIR_ac_DW.is_DEBOUNCE = DMIR_ac_IN_NOTACTIVE;

                    /* Entry 'NOTACTIVE': '<S675>:4' */
                    VeDMIR_b_HybBtnStuckStat = CeDMIR_e_DiagNotActive;
                    DMIR_ac_B.timeCnt = 0.0F;
                }
                else
                {
                    DMIR_ac_B.timeCnt += KeDMIR_t_MedTED;
                }
                break;

              case DMIR_ac_IN_IDLE:
                VeDMIR_b_HybBtnStuckStat = CeDMIR_e_SelectionIdle;

                /* During 'IDLE': '<S675>:73' */
                /* Transition: '<S675>:74' */
                if (rtb_RelationalOperator3)
                {
                    /* Transition: '<S675>:45' */
                    /* Transition: '<S675>:7' */
                    DMIR_ac_DW.is_DEBOUNCE = DMIR_ac_IN_ACTIVE;

                    /* Entry 'ACTIVE': '<S675>:3' */
                    VeDMIR_b_HybBtnStuckStat = CeDMIR_e_DiagActive;
                    DMIR_ac_B.timeCnt = 0.0F;
                }
                else
                {
                    if (rtb_Logical1_bp)
                    {
                        /* Transition: '<S675>:46' */
                        DMIR_ac_DW.is_DEBOUNCE = DMIR_ac_IN_NOTACTIVE;

                        /* Entry 'NOTACTIVE': '<S675>:4' */
                        VeDMIR_b_HybBtnStuckStat = CeDMIR_e_DiagNotActive;
                        DMIR_ac_B.timeCnt = 0.0F;
                    }
                }
                break;

              default:
                VeDMIR_b_HybBtnStuckStat = CeDMIR_e_DiagNotActive;

                /* During 'NOTACTIVE': '<S675>:4' */
                /* Transition: '<S675>:112' */
                if (DMIR_ac_B.timeCnt >= KeDMIR_t_BtnMaxDeActvRatCheck)
                {
                    /* Transition: '<S675>:34' */
                    DMIR_ac_DW.is_DEBOUNCE = DMIR_ac_IN_NO_ACTIVE_CHILD;
                    DMIR_ac_DW.is_c57_DMIR_ac = DMIR_ac_IN_NOTSTUCK;

                    /* Entry 'NOTSTUCK': '<S675>:26' */
                    VeDMIR_b_HybBtnStuckStat = CeDMIR_e_NotStuck;
                    DMIR_ac_B.NotStuck = true;
                    DMIR_ac_B.Stuck = false;
                }
                else if (rtb_RelationalOperator3)
                {
                    /* Transition: '<S675>:12' */
                    DMIR_ac_DW.is_DEBOUNCE = DMIR_ac_IN_ACTIVE;

                    /* Entry 'ACTIVE': '<S675>:3' */
                    VeDMIR_b_HybBtnStuckStat = CeDMIR_e_DiagActive;
                    DMIR_ac_B.timeCnt = 0.0F;
                }
                else
                {
                    DMIR_ac_B.timeCnt += KeDMIR_t_MedTED;
                }
                break;
            }
            break;

          case DMIR_ac_IN_NOTSTUCK:
            /* During 'NOTSTUCK': '<S675>:26' */
            /* Transition: '<S675>:139' */
            DMIR_ac_DW.is_c57_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S675>:138' */
            /* Transition: '<S675>:105' */
            DMIR_ac_DW.is_DEBOUNCE = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S675>:73' */
            VeDMIR_b_HybBtnStuckStat = CeDMIR_e_SelectionIdle;
            break;

          default:
            /* During 'STUCK': '<S675>:25' */
            /* Transition: '<S675>:153' */
            DMIR_ac_DW.is_c57_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S675>:138' */
            /* Transition: '<S675>:105' */
            DMIR_ac_DW.is_DEBOUNCE = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S675>:73' */
            VeDMIR_b_HybBtnStuckStat = CeDMIR_e_SelectionIdle;
            break;
        }
    }

    /* End of Chart: '<S666>/BtnStuck_Diag' */

    /* Logic: '<S520>/Logical3' */
    rtb_Logical1_bp = DMIR_ac_B.Stuck;

    /* End of Outputs for SubSystem: '<S520>/HybBtnStck_Diag' */
#else

    /* Logic: '<S520>/Logical3' incorporates:
     *  Constant: '<S667>/FALSE Constant'
     *  SignalConversion generated from: '<S520>/Variant Source2'
     */
    rtb_Logical1_bp = false;

#endif

    /* End of Logic: '<S520>/Logical1' */

    /* RelationalOperator: '<S520>/Comparison1' incorporates:
     *  Logic: '<S520>/Logical2'
     *  SignalConversion generated from: '<S520>/Variant Source7'
     * */
#if Rte_SysCon_Variant_DMIR_11

    /* Outputs for Atomic SubSystem: '<S520>/DodgeSwStuck_Diag' */
    /* RelationalOperator: '<S520>/Comparison1' incorporates:
     *  Constant: '<S665>/Constant'
     */
    rtb_Comparison1_i3 = (((uint32)rtb_TmpSignalConversionAtTmp_cl) ==
                          CeDMIR_e_Pressed);

    /* Logic: '<S520>/Logical2' */
    rtb_Logical2_ej = !rtb_Comparison1_i3;

    /* Chart: '<S663>/DodgeSwStuck_Diag' incorporates:
     *  Constant: '<S670>/Calib'
     *  Constant: '<S671>/Calib'
     *  Constant: '<S672>/Calib'
     */
    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Hybrid_ButtonVoltageRangeSuckCheck/DodgeSwStuck_Diag/DodgeSwStuck_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Hybrid_ButtonVoltageRangeSuckCheck/DodgeSwStuck_Diag/DodgeSwStuck_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c58_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Hybrid_ButtonVoltageRangeSuckCheck/DodgeSwStuck_Diag/DodgeSwStuck_Diag */
        DMIR_ac_DW.is_active_c58_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Hybrid_ButtonVoltageRangeSuckCheck/DodgeSwStuck_Diag/DodgeSwStuck_Diag */
        /* Transition: '<S674>:140' */
        DMIR_ac_DW.is_c58_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S674>:138' */
        /* Transition: '<S674>:105' */
        DMIR_ac_DW.is_DEBOUNCE_d = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S674>:73' */
        VeDMIR_b_DodgeSwStuckStat = CeDMIR_e_SelectionIdle;
    }
    else
    {
        switch (DMIR_ac_DW.is_c58_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S674>:138' */
            if ((!rtb_Logical2_ej) && (!rtb_Comparison1_i3))
            {
                /* Transition: '<S674>:152' */
                /* Exit Internal 'DEBOUNCE': '<S674>:138' */
                /* Entry Internal 'DEBOUNCE': '<S674>:138' */
                /* Transition: '<S674>:105' */
                DMIR_ac_DW.is_DEBOUNCE_d = DMIR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S674>:73' */
                VeDMIR_b_DodgeSwStuckStat = CeDMIR_e_SelectionIdle;
            }
            else
            {
                switch (DMIR_ac_DW.is_DEBOUNCE_d)
                {
                  case DMIR_ac_IN_ACTIVE:
                    VeDMIR_b_DodgeSwStuckStat = CeDMIR_e_DiagActive;

                    /* During 'ACTIVE': '<S674>:3' */
                    /* Transition: '<S674>:118' */
                    if (DMIR_ac_B.timeCnt_f >= KeDMIR_t_DodgeSwitchStuckTime)
                    {
                        /* Transition: '<S674>:33' */
                        DMIR_ac_DW.is_DEBOUNCE_d = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c58_DMIR_ac = DMIR_ac_IN_STUCK;

                        /* Entry 'STUCK': '<S674>:25' */
                        VeDMIR_b_DodgeSwStuckStat = CeDMIR_e_Stuck;
                        DMIR_ac_B.Stuck_k = true;
                        DMIR_ac_B.NotStuck_c = false;
                    }
                    else if (rtb_Logical2_ej)
                    {
                        /* Transition: '<S674>:125' */
                        DMIR_ac_DW.is_DEBOUNCE_d = DMIR_ac_IN_NOTACTIVE;

                        /* Entry 'NOTACTIVE': '<S674>:4' */
                        VeDMIR_b_DodgeSwStuckStat = CeDMIR_e_DiagNotActive;
                        DMIR_ac_B.timeCnt_f = 0.0F;
                    }
                    else
                    {
                        DMIR_ac_B.timeCnt_f += KeDMIR_t_MedTED;
                    }
                    break;

                  case DMIR_ac_IN_IDLE:
                    VeDMIR_b_DodgeSwStuckStat = CeDMIR_e_SelectionIdle;

                    /* During 'IDLE': '<S674>:73' */
                    /* Transition: '<S674>:74' */
                    if (rtb_Comparison1_i3)
                    {
                        /* Transition: '<S674>:45' */
                        /* Transition: '<S674>:7' */
                        DMIR_ac_DW.is_DEBOUNCE_d = DMIR_ac_IN_ACTIVE;

                        /* Entry 'ACTIVE': '<S674>:3' */
                        VeDMIR_b_DodgeSwStuckStat = CeDMIR_e_DiagActive;
                        DMIR_ac_B.timeCnt_f = 0.0F;
                    }
                    else
                    {
                        if (rtb_Logical2_ej)
                        {
                            /* Transition: '<S674>:46' */
                            DMIR_ac_DW.is_DEBOUNCE_d = DMIR_ac_IN_NOTACTIVE;

                            /* Entry 'NOTACTIVE': '<S674>:4' */
                            VeDMIR_b_DodgeSwStuckStat = CeDMIR_e_DiagNotActive;
                            DMIR_ac_B.timeCnt_f = 0.0F;
                        }
                    }
                    break;

                  default:
                    VeDMIR_b_DodgeSwStuckStat = CeDMIR_e_DiagNotActive;

                    /* During 'NOTACTIVE': '<S674>:4' */
                    /* Transition: '<S674>:112' */
                    if (DMIR_ac_B.timeCnt_f >= KeDMIR_t_DodgeSwitchNotStuckTime)
                    {
                        /* Transition: '<S674>:34' */
                        DMIR_ac_DW.is_DEBOUNCE_d = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c58_DMIR_ac = DMIR_ac_IN_NOTSTUCK;

                        /* Entry 'NOTSTUCK': '<S674>:26' */
                        VeDMIR_b_DodgeSwStuckStat = CeDMIR_e_NotStuck;
                        DMIR_ac_B.NotStuck_c = true;
                        DMIR_ac_B.Stuck_k = false;
                    }
                    else if (rtb_Comparison1_i3)
                    {
                        /* Transition: '<S674>:12' */
                        DMIR_ac_DW.is_DEBOUNCE_d = DMIR_ac_IN_ACTIVE;

                        /* Entry 'ACTIVE': '<S674>:3' */
                        VeDMIR_b_DodgeSwStuckStat = CeDMIR_e_DiagActive;
                        DMIR_ac_B.timeCnt_f = 0.0F;
                    }
                    else
                    {
                        DMIR_ac_B.timeCnt_f += KeDMIR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case DMIR_ac_IN_NOTSTUCK:
            /* During 'NOTSTUCK': '<S674>:26' */
            /* Transition: '<S674>:139' */
            DMIR_ac_DW.is_c58_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S674>:138' */
            /* Transition: '<S674>:105' */
            DMIR_ac_DW.is_DEBOUNCE_d = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S674>:73' */
            VeDMIR_b_DodgeSwStuckStat = CeDMIR_e_SelectionIdle;
            break;

          default:
            /* During 'STUCK': '<S674>:25' */
            /* Transition: '<S674>:153' */
            DMIR_ac_DW.is_c58_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S674>:138' */
            /* Transition: '<S674>:105' */
            DMIR_ac_DW.is_DEBOUNCE_d = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S674>:73' */
            VeDMIR_b_DodgeSwStuckStat = CeDMIR_e_SelectionIdle;
            break;
        }
    }

    /* End of Chart: '<S663>/DodgeSwStuck_Diag' */

    /* VariantMerge generated from: '<S520>/Variant Source3' */
    rtb_Comparison1_i3 = DMIR_ac_B.Stuck_k;

    /* End of Outputs for SubSystem: '<S520>/DodgeSwStuck_Diag' */
#else

    /* VariantMerge generated from: '<S520>/Variant Source3' incorporates:
     *  Constant: '<S664>/FALSE Constant'
     *  SignalConversion generated from: '<S520>/Variant Source7'
     */
    rtb_Comparison1_i3 = false;

#endif

    /* End of RelationalOperator: '<S520>/Comparison1' */

    /* Logic: '<S520>/Logical3' */
    rtb_Logical1_bp = (rtb_Logical1_bp || rtb_Comparison1_i3);

    /* Logic: '<S519>/Logical12' */
    rtb_Logical2_ej = (rtb_AND_nv || rtb_Logical1_bp);

    /* SignalConversion generated from: '<S520>/Variant Source3' */
#if Rte_SysCon_Variant_DMIR_13

    /* VariantMerge generated from: '<S520>/Variant Source3' */
    rtb_Comparison1_i3 = DMIR_ac_B.NotStuck;

#else

    /* VariantMerge generated from: '<S520>/Variant Source3' incorporates:
     *  Constant: '<S667>/FALSE Constant1'
     *  SignalConversion generated from: '<S520>/Variant Source3'
     */
    rtb_Comparison1_i3 = false;

#endif

    /* End of SignalConversion generated from: '<S520>/Variant Source3' */

    /* SignalConversion generated from: '<S520>/Variant Source1' */
#if Rte_SysCon_Variant_DMIR_11

    /* UnitDelay: '<S676>/Unit Delay' */
    rtb_UnitDelay_bp = DMIR_ac_B.NotStuck_c;

#else

    /* UnitDelay: '<S676>/Unit Delay' incorporates:
     *  Constant: '<S664>/FALSE Constant1'
     *  SignalConversion generated from: '<S520>/Variant Source1'
     */
    rtb_UnitDelay_bp = false;

#endif

    /* End of SignalConversion generated from: '<S520>/Variant Source1' */

    /* Logic: '<S519>/Logical7' incorporates:
     *  Logic: '<S519>/Logical15'
     *  Logic: '<S520>/Logical4'
     */
    rtb_UnitDelay_bp = ((!rtb_AND_nv) && (rtb_Comparison1_i3 || rtb_UnitDelay_bp));

    /* Chart: '<S519>/P05C8_Diag' incorporates:
     *  Constant: '<S630>/Calib'
     *  Constant: '<S631>/Calib'
     *  Constant: '<S632>/Calib'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    /* Gateway: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Eco_Hybrid_Button/P05C8_Diag */
    /* During: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Eco_Hybrid_Button/P05C8_Diag */
    if (((uint32)DMIR_ac_DW.is_active_c59_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Eco_Hybrid_Button/P05C8_Diag */
        DMIR_ac_DW.is_active_c59_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Diagnostics/ButtonDiagnostic/Eco_Hybrid_Button/P05C8_Diag */
        /* Transition: '<S633>:140' */
        DMIR_ac_DW.is_c59_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S633>:138' */
        /* Transition: '<S633>:105' */
        DMIR_ac_DW.is_DEBOUNCE_a = DMIR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S633>:73' */
        VeDMIR_e_P05C8_Status = CeDMIR_e_DiagIdle;
        VeDMIR_b_P05C8_Fail = false;
        VeDMIR_b_P05C8_Pass = false;
    }
    else
    {
        switch (DMIR_ac_DW.is_c59_DMIR_ac)
        {
          case DMIR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S633>:138' */
            if ((((!rtb_UnitDelay_bp) && (!rtb_Logical2_ej)) || (!rtb_AND_k1)) ||
                rtb_AND_dk)
            {
                /* Transition: '<S633>:152' */
                /* Exit Internal 'DEBOUNCE': '<S633>:138' */
                /* Entry Internal 'DEBOUNCE': '<S633>:138' */
                /* Transition: '<S633>:105' */
                DMIR_ac_DW.is_DEBOUNCE_a = DMIR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S633>:73' */
                VeDMIR_e_P05C8_Status = CeDMIR_e_DiagIdle;
                VeDMIR_b_P05C8_Fail = false;
                VeDMIR_b_P05C8_Pass = false;
            }
            else
            {
                switch (DMIR_ac_DW.is_DEBOUNCE_a)
                {
                  case DMIR_ac_IN_FAILING:
                    VeDMIR_e_P05C8_Status = CeDMIR_e_Failing;

                    /* During 'FAILING': '<S633>:3' */
                    /* Transition: '<S633>:118' */
                    if (VeDMIR_t_P05C8_timeCnt >= KeDMIR_t_TiDebounceSet)
                    {
                        /* Transition: '<S633>:33' */
                        DMIR_ac_DW.is_DEBOUNCE_a = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c59_DMIR_ac = DMIR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S633>:25' */
                        VeDMIR_e_P05C8_Status = CeDMIR_e_Fail;
                        VeDMIR_b_P05C8_Fail = true;
                        DMIR_ac_B.FaultDtctd_j = true;
                    }
                    else if (rtb_UnitDelay_bp)
                    {
                        /* Transition: '<S633>:125' */
                        DMIR_ac_DW.is_DEBOUNCE_a = DMIR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S633>:4' */
                        VeDMIR_e_P05C8_Status = CeDMIR_e_Passing;
                        VeDMIR_t_P05C8_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05C8_timeCnt = VeDMIR_t_P05C8_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;

                  case DMIR_ac_IN_IDLE:
                    VeDMIR_e_P05C8_Status = CeDMIR_e_DiagIdle;

                    /* During 'IDLE': '<S633>:73' */
                    /* Transition: '<S633>:74' */
                    if (rtb_Logical2_ej)
                    {
                        /* Transition: '<S633>:45' */
                        /* Transition: '<S633>:7' */
                        DMIR_ac_DW.is_DEBOUNCE_a = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S633>:3' */
                        VeDMIR_e_P05C8_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05C8_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_UnitDelay_bp)
                        {
                            /* Transition: '<S633>:46' */
                            DMIR_ac_DW.is_DEBOUNCE_a = DMIR_ac_IN_PASSING;

                            /* Entry 'PASSING': '<S633>:4' */
                            VeDMIR_e_P05C8_Status = CeDMIR_e_Passing;
                            VeDMIR_t_P05C8_timeCnt = 0.0F;
                        }
                    }
                    break;

                  default:
                    VeDMIR_e_P05C8_Status = CeDMIR_e_Passing;

                    /* During 'PASSING': '<S633>:4' */
                    /* Transition: '<S633>:112' */
                    if (VeDMIR_t_P05C8_timeCnt >= KeDMIR_t_TiDebounceHeal)
                    {
                        /* Transition: '<S633>:34' */
                        DMIR_ac_DW.is_DEBOUNCE_a = DMIR_ac_IN_NO_ACTIVE_CHILD;
                        DMIR_ac_DW.is_c59_DMIR_ac = DMIR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S633>:26' */
                        VeDMIR_e_P05C8_Status = CeDMIR_e_Pass;
                        VeDMIR_b_P05C8_Pass = true;
                        DMIR_ac_B.FaultDtctd_j = false;
                    }
                    else if (rtb_Logical2_ej)
                    {
                        /* Transition: '<S633>:12' */
                        DMIR_ac_DW.is_DEBOUNCE_a = DMIR_ac_IN_FAILING;

                        /* Entry 'FAILING': '<S633>:3' */
                        VeDMIR_e_P05C8_Status = CeDMIR_e_Failing;
                        VeDMIR_t_P05C8_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeDMIR_t_P05C8_timeCnt = VeDMIR_t_P05C8_timeCnt +
                            KeDMIR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case DMIR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S633>:25' */
            /* Transition: '<S633>:153' */
            DMIR_ac_DW.is_c59_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S633>:138' */
            /* Transition: '<S633>:105' */
            DMIR_ac_DW.is_DEBOUNCE_a = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S633>:73' */
            VeDMIR_e_P05C8_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05C8_Fail = false;
            VeDMIR_b_P05C8_Pass = false;
            break;

          default:
            /* During 'PASS_MATURED': '<S633>:26' */
            /* Transition: '<S633>:139' */
            DMIR_ac_DW.is_c59_DMIR_ac = DMIR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S633>:138' */
            /* Transition: '<S633>:105' */
            DMIR_ac_DW.is_DEBOUNCE_a = DMIR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S633>:73' */
            VeDMIR_e_P05C8_Status = CeDMIR_e_DiagIdle;
            VeDMIR_b_P05C8_Fail = false;
            VeDMIR_b_P05C8_Pass = false;
            break;
        }
    }

    /* End of Chart: '<S519>/P05C8_Diag' */

    /* Outputs for Atomic SubSystem: '<S636>/EdgeFalling1' */
    /* Update for UnitDelay: '<S642>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_pf = true;

    /* End of Outputs for SubSystem: '<S636>/EdgeFalling1' */

    /* If: '<S636>/If' incorporates:
     *  Logic: '<S636>/Logical5'
     */
    if (rtb_AND_i2)
    {
        /* Outputs for IfAction SubSystem: '<S636>/Init' incorporates:
         *  ActionPort: '<S644>/Action Port'
         */
        DMIR_ac_Init_g(&DMIR_ac_B.Merge_p);

        /* End of Outputs for SubSystem: '<S636>/Init' */
    }
    else if (VeDMIR_b_P05C9_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S636>/Pass' incorporates:
         *  ActionPort: '<S645>/Action Port'
         */
        DMIR_ac_Pass(&DMIR_ac_B.Merge_p);

        /* End of Outputs for SubSystem: '<S636>/Pass' */
    }
    else
    {
        if (VeDMIR_b_P05C9_Fail)
        {
            /* Outputs for IfAction SubSystem: '<S636>/Fail' incorporates:
             *  ActionPort: '<S643>/Action Port'
             */
            DMIR_ac_Fail(&DMIR_ac_B.Merge_p);

            /* End of Outputs for SubSystem: '<S636>/Fail' */
        }
    }

    /* End of If: '<S636>/If' */

    /* Outputs for Atomic SubSystem: '<S637>/EdgeFalling1' */
    /* Update for UnitDelay: '<S649>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_hfx = true;

    /* End of Outputs for SubSystem: '<S637>/EdgeFalling1' */

    /* If: '<S637>/If' incorporates:
     *  Logic: '<S637>/Logical5'
     */
    if (rtb_AND_ev)
    {
        /* Outputs for IfAction SubSystem: '<S637>/Init' incorporates:
         *  ActionPort: '<S651>/Action Port'
         */
        DMIR_ac_Init_g(&DMIR_ac_B.Merge_k);

        /* End of Outputs for SubSystem: '<S637>/Init' */
    }
    else if (VeDMIR_b_P05CA_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S637>/Pass' incorporates:
         *  ActionPort: '<S652>/Action Port'
         */
        DMIR_ac_Pass(&DMIR_ac_B.Merge_k);

        /* End of Outputs for SubSystem: '<S637>/Pass' */
    }
    else
    {
        if (VeDMIR_b_P05CA_Fail)
        {
            /* Outputs for IfAction SubSystem: '<S637>/Fail' incorporates:
             *  ActionPort: '<S650>/Action Port'
             */
            DMIR_ac_Fail(&DMIR_ac_B.Merge_k);

            /* End of Outputs for SubSystem: '<S637>/Fail' */
        }
    }

    /* End of If: '<S637>/If' */

    /* Outputs for Atomic SubSystem: '<S638>/EdgeFalling1' */
    /* Update for UnitDelay: '<S656>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_be = true;

    /* End of Outputs for SubSystem: '<S638>/EdgeFalling1' */

    /* If: '<S638>/If' incorporates:
     *  Logic: '<S638>/Logical5'
     */
    if (rtb_AND_dk)
    {
        /* Outputs for IfAction SubSystem: '<S638>/Init' incorporates:
         *  ActionPort: '<S658>/Action Port'
         */
        DMIR_ac_Init_g(&DMIR_ac_B.Merge_o);

        /* End of Outputs for SubSystem: '<S638>/Init' */
    }
    else if (VeDMIR_b_P05C8_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S638>/Pass' incorporates:
         *  ActionPort: '<S659>/Action Port'
         */
        DMIR_ac_Pass(&DMIR_ac_B.Merge_o);

        /* End of Outputs for SubSystem: '<S638>/Pass' */
    }
    else
    {
        if (VeDMIR_b_P05C8_Fail)
        {
            /* Outputs for IfAction SubSystem: '<S638>/Fail' incorporates:
             *  ActionPort: '<S657>/Action Port'
             */
            DMIR_ac_Fail(&DMIR_ac_B.Merge_o);

            /* End of Outputs for SubSystem: '<S638>/Fail' */
        }
    }

    /* End of If: '<S638>/If' */

    /* Outputs for Atomic SubSystem: '<S673>/EdgeRising1' */
    /* UnitDelay: '<S676>/Unit Delay' */
    rtb_UnitDelay_bp = DMIR_ac_DW.UnitDelay_DSTATE_ch2;

    /* Update for UnitDelay: '<S676>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ch2 = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S673>/EdgeRising1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Controls'
     */
    /* Outputs for IfAction SubSystem: '<S59>/SwitchBank1' incorporates:
     *  ActionPort: '<S106>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S185>/EdgeFalling3' */
    /* Outputs for Atomic SubSystem: '<S185>/EdgeFalling4' */
    /* Outputs for Atomic SubSystem: '<S58>/EcoSwitchMaxPress' */
    /* Outputs for Atomic SubSystem: '<S74>/EdgeFalling' */
    /* If: '<S59>/If' incorporates:
     *  Logic: '<S197>/OR1'
     *  Logic: '<S198>/OR1'
     *  Logic: '<S673>/OR1'
     *  Logic: '<S79>/OR1'
     *  Logic: '<S80>/OR1'
     */
    rtb_Logical2_ej = !rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S74>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S58>/EcoSwitchMaxPress' */
    /* End of Outputs for SubSystem: '<S185>/EdgeFalling4' */
    /* End of Outputs for SubSystem: '<S185>/EdgeFalling3' */
    /* End of Outputs for SubSystem: '<S59>/SwitchBank1' */

    /* Outputs for Atomic SubSystem: '<S673>/EdgeRising1' */
    /* Switch: '<S673>/Switch1' incorporates:
     *  Logic: '<S673>/OR'
     *  Logic: '<S673>/OR1'
     *  Logic: '<S676>/AND'
     *  Logic: '<S676>/OR1'
     */
    if (rtb_Logical2_ej || (rtb_RelationalOperator3 && (!rtb_UnitDelay_bp)))
    {
        /* Switch: '<S673>/Switch1' incorporates:
         *  Constant: '<S673>/Constant Value1'
         */
        VeDMIR_t_HybBtnPrsTine = 0.0F;
    }
    else
    {
        /* Switch: '<S673>/Switch1' incorporates:
         *  Constant: '<S672>/Calib'
         *  Sum: '<S673>/Summation'
         *  UnitDelay: '<S673>/Unit Delay'
         */
        VeDMIR_t_HybBtnPrsTine = KeDMIR_t_MedTED +
            DMIR_ac_DW.UnitDelay_DSTATE_ge;
    }

    /* End of Switch: '<S673>/Switch1' */
    /* End of Outputs for SubSystem: '<S673>/EdgeRising1' */

    /* Logic: '<S56>/Logical7' incorporates:
     *  Merge: '<Root>/Merge_11'
     *  Merge: '<Root>/Merge_14'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    VeDMID_b_DrvMdNotAvailBtnVoltFA =
        (((Rte_IrvRead_DMIR_MedTED1_Comm_EcoBtnStFA_write_IRV()) ||
          (Rte_IrvRead_DMIR_MedTED1_Comm_b_EVBtnFA_write_IRV())) ||
         rtb_TmpSignalConversionAtTmp_mi);

    /* Switch: '<S56>/Switch2' incorporates:
     *  Constant: '<S507>/Calib'
     */
    rtb_Switch2_jl = ((!KeDMIR_b_DNAHMIEna) && rtb_Switch2_jl);

    /* Logic: '<S56>/Logical' incorporates:
     *  Constant: '<S508>/Calib'
     *  Constant: '<S509>/Calib'
     *  Constant: '<S510>/Calib'
     *  Constant: '<S512>/Calib'
     *  Constant: '<S513>/Calib'
     *  Constant: '<S514>/Calib'
     *  Constant: '<S56>/Constant Value'
     *  Constant: '<S56>/Constant Value1'
     *  Logic: '<S518>/Logical10'
     *  Logic: '<S519>/Logical10'
     *  Logic: '<S56>/Logical1'
     *  Logic: '<S56>/Logical13'
     *  Logic: '<S56>/Logical14'
     *  Logic: '<S56>/Logical3'
     *  Logic: '<S56>/Logical4'
     *  Logic: '<S56>/Logical5'
     *  Logic: '<S56>/Logical6'
     *  Merge: '<Root>/Merge_16'
     *  Merge: '<Root>/Merge_26'
     *  Merge: '<Root>/Merge_37'
     *  RelationalOperator: '<S56>/Comparison1'
     *  RelationalOperator: '<S56>/Comparison4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    VeDMID_b_DrvMdNotAvailDiag = ((KeDMIR_b_EnaDrvMdDiag) &&
        ((((((((KeDMIR_i_DrvMdSwtchTyp == 1) && (KeDMIR_b_DrvMdDrvrInputFAEnbl))
              && (Rte_IrvRead_DMIR_MedTED1_Comm_b_DrvMdDrvrInputFA_write_IRV()))
             || ((KeDMIR_b_EnableDodgeSwitch) &&
                 (Rte_IrvRead_DMIR_MedTED1_Comm_eDriveModeSwitchRqstFA_write_IRV
                  ()))) ||
            (Rte_IrvRead_DMIR_MedTED1_Comm_b_DrvMdReqErr_write_IRV())) ||
           (KeDMIR_b_DiagTest)) || ((KeDMIR_i_DrvMdSwtchTyp == 2) &&
        (VeDMID_b_DrvMdNotAvailBtnVoltFA))) || ((KeDMIR_b_EnaBtnVoltDiag) &&
        (((((DMIR_ac_B.FaultDtctd_i) || (DMIR_ac_B.FaultDtctd_g)) ||
           (DMIR_ac_B.FaultDtctd_f)) || (((DMIR_ac_B.FaultDtctd) ||
        (DMIR_ac_B.FaultDtctd_b)) || (DMIR_ac_B.FaultDtctd_j))) ||
         rtb_Switch2_jl))));

    /* S-Function (sfix_bitop): '<S494>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S494>/StatusByte_DrvrModSelSwA_CktHi'
     *  S-Function (sfix_bitop): '<S493>/Bitwise Operator2'
     */
    LeDMIR_e_eCoastPopUpMsg = ((sint32)DMIR_ac_DW.StatusByte_DrvrModSelSwA_CktHi)
        & 1;

    /* S-Function (sfix_bitop): '<S494>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S494>/StatusByte_DrvrModSelSwA_CktHi'
     *  S-Function (sfix_bitop): '<S493>/Bitwise Operator1'
     */
    VeDMID_b_CommFault_tmp = ((uint32)DMIR_ac_DW.StatusByte_DrvrModSelSwA_CktHi)
        & 64U;

    /* Logic: '<S56>/Logical10' incorporates:
     *  Constant: '<S494>/Constant1'
     *  Constant: '<S494>/Constant2'
     *  Constant: '<S495>/Constant1'
     *  Constant: '<S495>/Constant2'
     *  Constant: '<S496>/Constant1'
     *  Constant: '<S496>/Constant2'
     *  Constant: '<S497>/Constant1'
     *  Constant: '<S497>/Constant2'
     *  Constant: '<S498>/Constant1'
     *  Constant: '<S498>/Constant2'
     *  Constant: '<S499>/Constant1'
     *  Constant: '<S499>/Constant2'
     *  Constant: '<S500>/Constant1'
     *  Constant: '<S500>/Constant2'
     *  Constant: '<S501>/Constant1'
     *  Constant: '<S501>/Constant2'
     *  Constant: '<S502>/Constant1'
     *  Constant: '<S502>/Constant2'
     *  Constant: '<S503>/Constant1'
     *  Constant: '<S503>/Constant2'
     *  Constant: '<S504>/Constant1'
     *  Constant: '<S504>/Constant2'
     *  Constant: '<S505>/Constant1'
     *  Constant: '<S505>/Constant2'
     *  Constant: '<S511>/Calib'
     *  DataStoreRead: '<S495>/StatusByte_InvData_BCM'
     *  DataStoreRead: '<S496>/StatusByte_InvData_BECM'
     *  DataStoreRead: '<S497>/StatusByte_InvData_ECM_BusB'
     *  DataStoreRead: '<S498>/StatusByte_InvData_ECM'
     *  DataStoreRead: '<S499>/StatusByte_InvData_ESBM'
     *  DataStoreRead: '<S500>/StatusByte_LosCommBECM_A'
     *  DataStoreRead: '<S501>/StatusByte_LostCommBCM'
     *  DataStoreRead: '<S502>/StatusByte_LostCommECM_A_BusB'
     *  DataStoreRead: '<S503>/StatusByte_LostCommECM_PCM_A'
     *  DataStoreRead: '<S504>/StatusByte_LostCommESBM'
     *  DataStoreRead: '<S505>/StatusByte_LostCommRadio'
     *  Logic: '<S494>/Logical Operator'
     *  Logic: '<S495>/Logical Operator'
     *  Logic: '<S496>/Logical Operator'
     *  Logic: '<S497>/Logical Operator'
     *  Logic: '<S498>/Logical Operator'
     *  Logic: '<S499>/Logical Operator'
     *  Logic: '<S500>/Logical Operator'
     *  Logic: '<S501>/Logical Operator'
     *  Logic: '<S502>/Logical Operator'
     *  Logic: '<S503>/Logical Operator'
     *  Logic: '<S504>/Logical Operator'
     *  Logic: '<S505>/Logical Operator'
     *  Logic: '<S56>/Logical8'
     *  RelationalOperator: '<S494>/Relational Operator1'
     *  RelationalOperator: '<S494>/Relational Operator2'
     *  RelationalOperator: '<S495>/Relational Operator1'
     *  RelationalOperator: '<S495>/Relational Operator2'
     *  RelationalOperator: '<S496>/Relational Operator1'
     *  RelationalOperator: '<S496>/Relational Operator2'
     *  RelationalOperator: '<S497>/Relational Operator1'
     *  RelationalOperator: '<S497>/Relational Operator2'
     *  RelationalOperator: '<S498>/Relational Operator1'
     *  RelationalOperator: '<S498>/Relational Operator2'
     *  RelationalOperator: '<S499>/Relational Operator1'
     *  RelationalOperator: '<S499>/Relational Operator2'
     *  RelationalOperator: '<S500>/Relational Operator1'
     *  RelationalOperator: '<S500>/Relational Operator2'
     *  RelationalOperator: '<S501>/Relational Operator1'
     *  RelationalOperator: '<S501>/Relational Operator2'
     *  RelationalOperator: '<S502>/Relational Operator1'
     *  RelationalOperator: '<S502>/Relational Operator2'
     *  RelationalOperator: '<S503>/Relational Operator1'
     *  RelationalOperator: '<S503>/Relational Operator2'
     *  RelationalOperator: '<S504>/Relational Operator1'
     *  RelationalOperator: '<S504>/Relational Operator2'
     *  RelationalOperator: '<S505>/Relational Operator1'
     *  RelationalOperator: '<S505>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S494>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S494>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S495>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S495>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S496>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S496>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S497>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S497>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S498>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S498>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S499>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S499>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S500>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S500>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S501>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S501>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S502>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S502>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S503>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S503>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S504>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S504>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S505>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S505>/Bitwise Operator2'
     */
    VeDMID_b_CommFault = (((((((((((((((((sint32)
        DMIR_ac_DW.StatusByte_LostCommECM_PCM_A) & 1) > 0) && ((((uint32)
        DMIR_ac_DW.StatusByte_LostCommECM_PCM_A) & 64U) == 0U)) ||
        ((LeDMIR_e_eCoastPopUpMsg > 0) && (VeDMID_b_CommFault_tmp == 0U))) ||
        (((((sint32)DMIR_ac_DW.StatusByte_LostCommECM_A_BusB) & 1) > 0) &&
         ((((uint32)DMIR_ac_DW.StatusByte_LostCommECM_A_BusB) & 64U) == 0U))) ||
        (((((sint32)DMIR_ac_DW.StatusByte_InvData_ECM_BusB) & 1) > 0) &&
         ((((uint32)DMIR_ac_DW.StatusByte_InvData_ECM_BusB) & 64U) == 0U))) ||
        (((((sint32)DMIR_ac_DW.StatusByte_InvData_BECM) & 1) > 0) && ((((uint32)
        DMIR_ac_DW.StatusByte_InvData_BECM) & 64U) == 0U))) || (((((sint32)
        DMIR_ac_DW.StatusByte_LostCommESBM) & 1) > 0) && ((((uint32)
        DMIR_ac_DW.StatusByte_LostCommESBM) & 64U) == 0U))) || (((((sint32)
        DMIR_ac_DW.StatusByte_InvData_ESBM) & 1) > 0) && ((((uint32)
        DMIR_ac_DW.StatusByte_InvData_ESBM) & 64U) == 0U))) || (((((sint32)
        DMIR_ac_DW.StatusByte_InvData_ECM) & 1) > 0) && ((((uint32)
        DMIR_ac_DW.StatusByte_InvData_ECM) & 64U) == 0U))) || (((((sint32)
        DMIR_ac_DW.StatusByte_LostCommRadio) & 1) > 0) && ((((uint32)
        DMIR_ac_DW.StatusByte_LostCommRadio) & 64U) == 0U))) || (((((sint32)
        DMIR_ac_DW.StatusByte_LostCommBCM) & 1) > 0) && ((((uint32)
        DMIR_ac_DW.StatusByte_LostCommBCM) & 64U) == 0U))) || (((((sint32)
        DMIR_ac_DW.StatusByte_InvData_BCM) & 1) > 0) && ((((uint32)
        DMIR_ac_DW.StatusByte_InvData_BCM) & 64U) == 0U))) || (((((sint32)
        DMIR_ac_DW.StatusByte_LosCommBECM_A) & 1) > 0) && ((((uint32)
        DMIR_ac_DW.StatusByte_LosCommBECM_A) & 64U) == 0U))) &&
                          (KeDMIR_b_EnaComDiag));

    /* Logic: '<S56>/Logical11' incorporates:
     *  Constant: '<S493>/Constant1'
     *  Constant: '<S493>/Constant2'
     *  Constant: '<S511>/Calib'
     *  Logic: '<S493>/Logical Operator'
     *  RelationalOperator: '<S493>/Relational Operator1'
     *  RelationalOperator: '<S493>/Relational Operator2'
     */
    VeDMID_b_CommFaultESave = ((KeDMIR_b_EnaComDiag) &&
        ((LeDMIR_e_eCoastPopUpMsg > 0) && (VeDMID_b_CommFault_tmp == 0U)));

    /* Update for UnitDelay: '<S565>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ey = VeDMIR_t_ESaveBtnPrsTine;

    /* Update for UnitDelay: '<S577>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_n0 = VeDMIR_t_EVBtnPrsTine;

    /* Update for UnitDelay: '<S673>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ge = VeDMIR_t_HybBtnPrsTine;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Controls'
     */
    /* RelationalOperator: '<S214>/Comparison4' incorporates:
     *  Constant: '<S231>/Constant'
     */
    rtb_AND_k1 = (((uint32)tmpRead_g) == CeDMIR_e_UpShift);

    /* Outputs for Atomic SubSystem: '<S214>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S239>/EdgeRising' */
    /* Logic: '<S251>/AND' incorporates:
     *  Logic: '<S251>/OR1'
     *  UnitDelay: '<S251>/Unit Delay'
     */
    rtb_TmpSignalConversionAtTmp_mi = (rtb_AND_k1 &&
        (!DMIR_ac_DW.UnitDelay_DSTATE_ch));

    /* Update for UnitDelay: '<S251>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ch = rtb_AND_k1;

    /* End of Outputs for SubSystem: '<S239>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S237>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S237>/EdgeFalling' */
    /* Logic: '<S239>/OR1' incorporates:
     *  Logic: '<S241>/OR1'
     *  Logic: '<S242>/OR1'
     *  Logic: '<S243>/OR1'
     */
    tmp_0 = !rtb_AND_k1;

    /* End of Outputs for SubSystem: '<S237>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S237>/EdgeFalling1' */

    /* Switch: '<S239>/Switch1' incorporates:
     *  Logic: '<S239>/OR'
     *  Logic: '<S239>/OR1'
     */
    if (tmp_0 || rtb_TmpSignalConversionAtTmp_mi)
    {
        /* Switch: '<S239>/Switch1' incorporates:
         *  Constant: '<S239>/Constant Value1'
         */
        rtb_Switch1_od = 0.0F;
    }
    else
    {
        /* Switch: '<S239>/Switch1' incorporates:
         *  Constant: '<S234>/Calib'
         *  Constant: '<S235>/Calib'
         *  MinMax: '<S239>/Minimum'
         *  Sum: '<S239>/Summation'
         *  UnitDelay: '<S239>/Unit Delay'
         */
        rtb_Switch1_od = fminf(KeDMIR_t_PaddleDbncSet, KeDMIR_t_MedTED +
                               DMIR_ac_DW.UnitDelay_DSTATE_bz);
    }

    /* End of Switch: '<S239>/Switch1' */

    /* Logic: '<S239>/AND' incorporates:
     *  Constant: '<S235>/Calib'
     *  RelationalOperator: '<S239>/Greater  Than'
     */
    rtb_TmpSignalConversionAtTmp_mi = (rtb_AND_k1 && (rtb_Switch1_od >=
        KeDMIR_t_PaddleDbncSet));

    /* Update for UnitDelay: '<S239>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_bz = rtb_Switch1_od;

    /* End of Outputs for SubSystem: '<S214>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S214>/EdgeRising' */
    /* Logic: '<S229>/AND' incorporates:
     *  Logic: '<S229>/OR1'
     *  UnitDelay: '<S229>/Unit Delay'
     */
    rtb_UnitDelay_bp = (rtb_TmpSignalConversionAtTmp_mi &&
                        (!DMIR_ac_DW.UnitDelay_DSTATE_hc));

    /* Update for UnitDelay: '<S229>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_hc = rtb_TmpSignalConversionAtTmp_mi;

    /* End of Outputs for SubSystem: '<S214>/EdgeRising' */

    /* Logic: '<S244>/AND2' incorporates:
     *  Logic: '<S244>/OR2'
     *  Logic: '<S244>/OR3'
     *  UnitDelay: '<S237>/Unit Delay1'
     *  UnitDelay: '<S244>/Unit Delay2'
     */
    rtb_TmpSignalConversionAtTmp_mi = (((DMIR_ac_DW.UnitDelay2_DSTATE_b) ||
        rtb_UnitDelay_bp) && (!DMIR_ac_DW.UnitDelay1_DSTATE_ba));

    /* Outputs for Atomic SubSystem: '<S237>/EdgeFalling' */
    /* Logic: '<S241>/AND' incorporates:
     *  UnitDelay: '<S241>/Unit Delay'
     */
    rtb_Switch2_jl = (tmp_0 && (DMIR_ac_DW.UnitDelay_DSTATE_f4));

    /* Update for UnitDelay: '<S241>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_f4 = rtb_AND_k1;

    /* End of Outputs for SubSystem: '<S237>/EdgeFalling' */

    /* Switch: '<S214>/Switch3' incorporates:
     *  Constant: '<S233>/Calib'
     */
    if (HeDMIR_b_EnaPaddleMaxPressTime)
    {
        /* Switch: '<S214>/Switch3' incorporates:
         *  Logic: '<S237>/AND'
         *  UnitDelay: '<S243>/Unit Delay1'
         */
        rtb_UnitDelay_bp = ((rtb_TmpSignalConversionAtTmp_mi && rtb_Switch2_jl) &&
                            (DMIR_ac_DW.UnitDelay1_DSTATE_d));
    }

    /* End of Switch: '<S214>/Switch3' */

    /* RelationalOperator: '<S214>/Comparison1' incorporates:
     *  Constant: '<S232>/Constant'
     */
    rtb_Comparison1_i3 = (CeDMIR_e_DownShift == ((uint32)tmpRead_g));

    /* Outputs for Atomic SubSystem: '<S214>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S240>/EdgeRising' */
    /* Logic: '<S252>/AND' incorporates:
     *  Logic: '<S252>/OR1'
     *  UnitDelay: '<S252>/Unit Delay'
     */
    rtb_Switch2_jl = (rtb_Comparison1_i3 && (!DMIR_ac_DW.UnitDelay_DSTATE_oj));

    /* Update for UnitDelay: '<S252>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_oj = rtb_Comparison1_i3;

    /* End of Outputs for SubSystem: '<S240>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S238>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S238>/EdgeFalling' */
    /* Logic: '<S240>/OR1' incorporates:
     *  Logic: '<S246>/OR1'
     *  Logic: '<S247>/OR1'
     *  Logic: '<S248>/OR1'
     */
    tmp_1 = !rtb_Comparison1_i3;

    /* End of Outputs for SubSystem: '<S238>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S238>/EdgeFalling1' */

    /* Switch: '<S240>/Switch1' incorporates:
     *  Logic: '<S240>/OR'
     *  Logic: '<S240>/OR1'
     */
    if (tmp_1 || rtb_Switch2_jl)
    {
        /* Switch: '<S240>/Switch1' incorporates:
         *  Constant: '<S240>/Constant Value1'
         */
        rtb_Switch1_od = 0.0F;
    }
    else
    {
        /* Switch: '<S240>/Switch1' incorporates:
         *  Constant: '<S234>/Calib'
         *  Constant: '<S235>/Calib'
         *  MinMax: '<S240>/Minimum'
         *  Sum: '<S240>/Summation'
         *  UnitDelay: '<S240>/Unit Delay'
         */
        rtb_Switch1_od = fminf(KeDMIR_t_PaddleDbncSet, KeDMIR_t_MedTED +
                               DMIR_ac_DW.UnitDelay_DSTATE_lv);
    }

    /* End of Switch: '<S240>/Switch1' */

    /* Logic: '<S240>/AND' incorporates:
     *  Constant: '<S235>/Calib'
     *  RelationalOperator: '<S240>/Greater  Than'
     */
    rtb_Switch2_jl = (rtb_Comparison1_i3 && (rtb_Switch1_od >=
                       KeDMIR_t_PaddleDbncSet));

    /* Update for UnitDelay: '<S240>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_lv = rtb_Switch1_od;

    /* End of Outputs for SubSystem: '<S214>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S214>/EdgeRising1' */
    /* Logic: '<S230>/AND' incorporates:
     *  Logic: '<S230>/OR1'
     *  UnitDelay: '<S230>/Unit Delay'
     */
    rtb_AND_i2 = (rtb_Switch2_jl && (!DMIR_ac_DW.UnitDelay_DSTATE_ht));

    /* Update for UnitDelay: '<S230>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ht = rtb_Switch2_jl;

    /* End of Outputs for SubSystem: '<S214>/EdgeRising1' */

    /* Logic: '<S249>/AND2' incorporates:
     *  Logic: '<S249>/OR2'
     *  Logic: '<S249>/OR3'
     *  UnitDelay: '<S238>/Unit Delay1'
     *  UnitDelay: '<S249>/Unit Delay2'
     */
    rtb_Switch2_jl = (((DMIR_ac_DW.UnitDelay2_DSTATE_e) || rtb_AND_i2) &&
                      (!DMIR_ac_DW.UnitDelay1_DSTATE_j));

    /* Outputs for Atomic SubSystem: '<S238>/EdgeFalling' */
    /* Logic: '<S246>/AND' incorporates:
     *  UnitDelay: '<S246>/Unit Delay'
     */
    rtb_AND_ev = (tmp_1 && (DMIR_ac_DW.UnitDelay_DSTATE_ep));

    /* Update for UnitDelay: '<S246>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ep = rtb_Comparison1_i3;

    /* End of Outputs for SubSystem: '<S238>/EdgeFalling' */

    /* Switch: '<S214>/Switch1' incorporates:
     *  Constant: '<S233>/Calib'
     */
    if (HeDMIR_b_EnaPaddleMaxPressTime)
    {
        /* Switch: '<S214>/Switch1' incorporates:
         *  Logic: '<S238>/AND'
         *  UnitDelay: '<S248>/Unit Delay1'
         */
        rtb_AND_i2 = ((rtb_Switch2_jl && rtb_AND_ev) &&
                      (DMIR_ac_DW.UnitDelay1_DSTATE_mf));
    }

    /* End of Switch: '<S214>/Switch1' */

    /* Logic: '<S215>/Logical5' incorporates:
     *  Constant: '<S218>/Constant'
     *  Constant: '<S219>/Constant'
     *  Constant: '<S220>/Constant'
     *  RelationalOperator: '<S215>/Comparison1'
     *  RelationalOperator: '<S215>/Comparison2'
     *  RelationalOperator: '<S215>/Comparison3'
     */
    rtb_AND_ev = (((CePLTR_e_Cancel == ((uint32)tmpRead_t)) || (CePLTR_e_Enabled
                    == ((uint32)tmpRead_t))) || (CePLTR_e_Off == ((uint32)
                    tmpRead_t)));

    /* Logic: '<S217>/Logical3' incorporates:
     *  Constant: '<S223>/Constant'
     *  Constant: '<S225>/Constant'
     *  Constant: '<S226>/Constant'
     *  Constant: '<S227>/Constant'
     *  Constant: '<S228>/Constant'
     *  Logic: '<S217>/Logical1'
     *  Logic: '<S217>/Logical2'
     *  Logic: '<S217>/Logical5'
     *  RelationalOperator: '<S217>/Comparison1'
     *  RelationalOperator: '<S217>/Comparison2'
     *  RelationalOperator: '<S217>/Comparison4'
     *  RelationalOperator: '<S217>/Comparison5'
     *  RelationalOperator: '<S217>/Comparison6'
     */
    rtb_AND_dk = (((((uint32)tmpRead_u) == CeDTRR_e_Available) || (((uint32)
                     tmpRead_u) == CeDTRR_e_Active)) || ((((uint32)tmpRead_u) ==
                    CeDTRR_e_Temp_Unavail) && ((((uint32)tmpRead_v) ==
                     CeTRGR_e_TransRangePark) || (((uint32)tmpRead_v) ==
                     CeTRGR_e_TransRangeNeutral))));

    /* Chart: '<S209>/Drive_Mode_Selection1' incorporates:
     *  Constant: '<S221>/Constant'
     *  Constant: '<S222>/Calib'
     *  DataStoreRead: '<S209>/Data Store Read1'
     *  Logic: '<S212>/Logical6'
     *  Logic: '<S216>/OR'
     *  RelationalOperator: '<S216>/GreaterThan'
     *  RelationalOperator: '<S221>/Compare'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    /* Gateway: DMIR_MedTED1/Controls/Regen_Status/RegenMngmt/Drive_Mode_Selection1 */
    /* During: DMIR_MedTED1/Controls/Regen_Status/RegenMngmt/Drive_Mode_Selection1 */
    if (((uint32)DMIR_ac_DW.is_active_c66_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Controls/Regen_Status/RegenMngmt/Drive_Mode_Selection1 */
        DMIR_ac_DW.is_active_c66_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Controls/Regen_Status/RegenMngmt/Drive_Mode_Selection1 */
        /* Transition: '<S211>:1078' */
        if ((((uint32)DMIR_ac_DW.NeDMIR_e_RegenSts) == CeDMIR_e_MaxRegen) &&
                rtb_AND_dk)
        {
            /* Transition: '<S211>:1134' */
            /* Transition: '<S211>:1135' */
            DMIR_ac_DW.is_c66_DMIR_ac = DMIR_ac_IN_Max;

            /* Entry 'Max': '<S211>:1081' */
            VeDMIC_e_RegenSts = CeDMIR_e_MaxRegen;
        }
        else
        {
            /* Transition: '<S211>:1104' */
            DMIR_ac_DW.is_c66_DMIR_ac = DMIR_ac_IN_Normal;

            /* Entry 'Normal': '<S211>:1079' */
            VeDMIC_e_RegenSts = CeDMIR_e_NormalRegen;
        }
    }
    else if (((sint32)DMIR_ac_DW.is_c66_DMIR_ac) == 1)
    {
        VeDMIC_e_RegenSts = CeDMIR_e_MaxRegen;

        /* During 'Max': '<S211>:1081' */
        if ((!rtb_AND_dk) || (((!rtb_UnitDelay_bp) && rtb_AND_i2) && (rtb_AND_ev
              && ((rtb_Switch1_mb != 0.0F) || (rtb_Switch1_m3 > ((float32)
                 KeDMIR_i_OPDExitBrkPdlThrshld))))))
        {
            /* Transition: '<S211>:1146' */
            /* Transition: '<S211>:1150' */
            /* Transition: '<S211>:1148' */
            /* Transition: '<S211>:1126' */
            DMIR_ac_DW.is_c66_DMIR_ac = DMIR_ac_IN_Normal;

            /* Entry 'Normal': '<S211>:1079' */
            VeDMIC_e_RegenSts = CeDMIR_e_NormalRegen;
        }
    }
    else
    {
        VeDMIC_e_RegenSts = CeDMIR_e_NormalRegen;

        /* During 'Normal': '<S211>:1079' */
        if (((rtb_UnitDelay_bp && (!rtb_AND_i2)) && rtb_AND_ev) && rtb_AND_dk)
        {
            /* Transition: '<S211>:1082' */
            DMIR_ac_DW.is_c66_DMIR_ac = DMIR_ac_IN_Max;

            /* Entry 'Max': '<S211>:1081' */
            VeDMIC_e_RegenSts = CeDMIR_e_MaxRegen;
        }
    }

    /* End of Chart: '<S209>/Drive_Mode_Selection1' */

    /* DataStoreWrite: '<S209>/Data Store Write' */
    DMIR_ac_DW.NeDMIR_e_RegenSts = VeDMIC_e_RegenSts;

    /* Outputs for Atomic SubSystem: '<S237>/EdgeFalling1' */
    /* Update for UnitDelay: '<S237>/Unit Delay1' incorporates:
     *  Logic: '<S242>/AND'
     *  UnitDelay: '<S242>/Unit Delay'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_ba = (tmp_0 && (DMIR_ac_DW.UnitDelay_DSTATE_cg));

    /* Update for UnitDelay: '<S242>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_cg = rtb_AND_k1;

    /* End of Outputs for SubSystem: '<S237>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S243>/EdgeRising' */
    /* Logic: '<S245>/AND' incorporates:
     *  Logic: '<S245>/OR1'
     *  UnitDelay: '<S245>/Unit Delay'
     */
    rtb_UnitDelay_bp = (rtb_AND_k1 && (!DMIR_ac_DW.UnitDelay_DSTATE_jo));

    /* Update for UnitDelay: '<S245>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_jo = rtb_AND_k1;

    /* End of Outputs for SubSystem: '<S243>/EdgeRising' */

    /* Switch: '<S243>/Switch1' incorporates:
     *  Logic: '<S243>/OR'
     */
    if (tmp_0 || rtb_UnitDelay_bp)
    {
        /* Switch: '<S243>/Switch1' incorporates:
         *  Constant: '<S243>/Constant Value1'
         */
        rtb_Switch1_od = 0.0F;
    }
    else
    {
        /* Switch: '<S243>/Switch1' incorporates:
         *  Constant: '<S234>/Calib'
         *  Constant: '<S236>/Calib'
         *  MinMax: '<S243>/Minimum'
         *  Sum: '<S243>/Summation'
         *  UnitDelay: '<S243>/Unit Delay'
         */
        rtb_Switch1_od = fminf(KeDMIR_t_PaddleMaxPressTime, KeDMIR_t_MedTED +
                               DMIR_ac_DW.UnitDelay_DSTATE_h);
    }

    /* End of Switch: '<S243>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S238>/EdgeFalling1' */
    /* Update for UnitDelay: '<S238>/Unit Delay1' incorporates:
     *  Logic: '<S247>/AND'
     *  UnitDelay: '<S247>/Unit Delay'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_j = (tmp_1 && (DMIR_ac_DW.UnitDelay_DSTATE_ex));

    /* Update for UnitDelay: '<S247>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ex = rtb_Comparison1_i3;

    /* End of Outputs for SubSystem: '<S238>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S248>/EdgeRising' */
    /* Logic: '<S250>/AND' incorporates:
     *  Logic: '<S250>/OR1'
     *  UnitDelay: '<S250>/Unit Delay'
     */
    rtb_AND_k1 = (rtb_Comparison1_i3 && (!DMIR_ac_DW.UnitDelay_DSTATE_oe));

    /* Update for UnitDelay: '<S250>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_oe = rtb_Comparison1_i3;

    /* End of Outputs for SubSystem: '<S248>/EdgeRising' */

    /* Switch: '<S248>/Switch1' incorporates:
     *  Logic: '<S248>/OR'
     */
    if (tmp_1 || rtb_AND_k1)
    {
        /* Switch: '<S248>/Switch1' incorporates:
         *  Constant: '<S248>/Constant Value1'
         */
        rtb_Switch1_dc = 0.0F;
    }
    else
    {
        /* Switch: '<S248>/Switch1' incorporates:
         *  Constant: '<S234>/Calib'
         *  Constant: '<S236>/Calib'
         *  MinMax: '<S248>/Minimum'
         *  Sum: '<S248>/Summation'
         *  UnitDelay: '<S248>/Unit Delay'
         */
        rtb_Switch1_dc = fminf(KeDMIR_t_PaddleMaxPressTime, KeDMIR_t_MedTED +
                               DMIR_ac_DW.UnitDelay_DSTATE_i);
    }

    /* End of Switch: '<S248>/Switch1' */

    /* SignalConversion generated from: '<S66>/VariantSource' incorporates:
     *  Constant: '<S210>/Constant'
     */
#if Rte_SysCon_Variant_DMIR_2

    /* VariantMerge generated from: '<S66>/VariantSource' */
    DMIR_ac_B.VariantMerge_For_Variant_Sour_a = VeDMIC_e_RegenSts;

#else

    DMIR_ac_B.Constant = CeDMIR_e_NormalRegen;

    /* VariantMerge generated from: '<S66>/VariantSource' incorporates:
     *  Constant: '<S210>/Constant'
     *  SignalConversion generated from: '<S66>/VariantSource'
     */
    DMIR_ac_B.VariantMerge_For_Variant_Sour_a = DMIR_ac_B.Constant;

#endif

    /* End of SignalConversion generated from: '<S66>/VariantSource' */

    /* RelationalOperator: '<S293>/Comparison4' incorporates:
     *  Constant: '<S336>/Constant'
     */
    rtb_Comparison1_i3 = (((uint32)tmpRead_g) == CeDMIR_e_UpShift);

    /* Outputs for Atomic SubSystem: '<S293>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S343>/EdgeRising' */
    /* Logic: '<S355>/AND' incorporates:
     *  Logic: '<S355>/OR1'
     *  UnitDelay: '<S355>/Unit Delay'
     */
    rtb_AND_k1 = (rtb_Comparison1_i3 && (!DMIR_ac_DW.UnitDelay_DSTATE_ll));

    /* Update for UnitDelay: '<S355>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ll = rtb_Comparison1_i3;

    /* End of Outputs for SubSystem: '<S343>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S341>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S341>/EdgeFalling' */
    /* Logic: '<S343>/OR1' incorporates:
     *  Logic: '<S345>/OR1'
     *  Logic: '<S346>/OR1'
     *  Logic: '<S347>/OR1'
     */
    tmp_0 = !rtb_Comparison1_i3;

    /* End of Outputs for SubSystem: '<S341>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S341>/EdgeFalling1' */

    /* Switch: '<S343>/Switch1' incorporates:
     *  Logic: '<S343>/OR'
     *  Logic: '<S343>/OR1'
     */
    if (tmp_0 || rtb_AND_k1)
    {
        /* Switch: '<S343>/Switch1' incorporates:
         *  Constant: '<S343>/Constant Value1'
         */
        rtb_Switch1_md = 0.0F;
    }
    else
    {
        /* Switch: '<S343>/Switch1' incorporates:
         *  Constant: '<S290>/Calib'
         *  Constant: '<S339>/Calib'
         *  MinMax: '<S343>/Minimum'
         *  Sum: '<S343>/Summation'
         *  UnitDelay: '<S343>/Unit Delay'
         */
        rtb_Switch1_md = fminf(KeDMIR_t_PaddleDbncSet, KeDMIR_t_MedTED +
                               DMIR_ac_DW.UnitDelay_DSTATE_e);
    }

    /* End of Switch: '<S343>/Switch1' */

    /* Logic: '<S343>/AND' incorporates:
     *  Constant: '<S339>/Calib'
     *  RelationalOperator: '<S343>/Greater  Than'
     */
    rtb_AND_k1 = (rtb_Comparison1_i3 && (rtb_Switch1_md >=
                   KeDMIR_t_PaddleDbncSet));

    /* Update for UnitDelay: '<S343>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_e = rtb_Switch1_md;

    /* End of Outputs for SubSystem: '<S293>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S293>/EdgeRising' */
    /* Logic: '<S334>/AND' incorporates:
     *  Logic: '<S334>/OR1'
     *  UnitDelay: '<S334>/Unit Delay'
     */
    rtb_UnitDelay_bp = (rtb_AND_k1 && (!DMIR_ac_DW.UnitDelay_DSTATE_brp));

    /* Update for UnitDelay: '<S334>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_brp = rtb_AND_k1;

    /* End of Outputs for SubSystem: '<S293>/EdgeRising' */

    /* Logic: '<S348>/AND2' incorporates:
     *  Logic: '<S348>/OR2'
     *  Logic: '<S348>/OR3'
     *  UnitDelay: '<S341>/Unit Delay1'
     *  UnitDelay: '<S348>/Unit Delay2'
     */
    rtb_AND_k1 = (((DMIR_ac_DW.UnitDelay2_DSTATE_o1) || rtb_UnitDelay_bp) &&
                  (!DMIR_ac_DW.UnitDelay1_DSTATE_c));

    /* Outputs for Atomic SubSystem: '<S341>/EdgeFalling' */
    /* Logic: '<S345>/AND' incorporates:
     *  UnitDelay: '<S345>/Unit Delay'
     */
    rtb_AND_i2 = (tmp_0 && (DMIR_ac_DW.UnitDelay_DSTATE_a5));

    /* Update for UnitDelay: '<S345>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_a5 = rtb_Comparison1_i3;

    /* End of Outputs for SubSystem: '<S341>/EdgeFalling' */

    /* Switch: '<S293>/Switch3' incorporates:
     *  Constant: '<S338>/Calib'
     */
    if (HeDMIR_b_EnaPaddleMaxPressTime)
    {
        /* Switch: '<S293>/Switch3' incorporates:
         *  Logic: '<S341>/AND'
         *  UnitDelay: '<S347>/Unit Delay1'
         */
        VeDMIR_b_UpReq = ((rtb_AND_k1 && rtb_AND_i2) &&
                          (DMIR_ac_DW.UnitDelay1_DSTATE_p));
    }
    else
    {
        /* Switch: '<S293>/Switch3' */
        VeDMIR_b_UpReq = rtb_UnitDelay_bp;
    }

    /* End of Switch: '<S293>/Switch3' */

    /* RelationalOperator: '<S293>/Comparison1' incorporates:
     *  Constant: '<S337>/Constant'
     */
    rtb_AND_i2 = (CeDMIR_e_DownShift == ((uint32)tmpRead_g));

    /* Outputs for Atomic SubSystem: '<S293>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S344>/EdgeRising' */
    /* Logic: '<S356>/AND' incorporates:
     *  Logic: '<S356>/OR1'
     *  UnitDelay: '<S356>/Unit Delay'
     */
    rtb_UnitDelay_bp = (rtb_AND_i2 && (!DMIR_ac_DW.UnitDelay_DSTATE_pc));

    /* Update for UnitDelay: '<S356>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_pc = rtb_AND_i2;

    /* End of Outputs for SubSystem: '<S344>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S342>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S342>/EdgeFalling' */
    /* Logic: '<S344>/OR1' incorporates:
     *  Logic: '<S350>/OR1'
     *  Logic: '<S351>/OR1'
     *  Logic: '<S352>/OR1'
     */
    tmp_1 = !rtb_AND_i2;

    /* End of Outputs for SubSystem: '<S342>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S342>/EdgeFalling1' */

    /* Switch: '<S344>/Switch1' incorporates:
     *  Logic: '<S344>/OR'
     *  Logic: '<S344>/OR1'
     */
    if (tmp_1 || rtb_UnitDelay_bp)
    {
        /* Switch: '<S344>/Switch1' incorporates:
         *  Constant: '<S344>/Constant Value1'
         */
        rtb_Switch1_md = 0.0F;
    }
    else
    {
        /* Switch: '<S344>/Switch1' incorporates:
         *  Constant: '<S290>/Calib'
         *  Constant: '<S339>/Calib'
         *  MinMax: '<S344>/Minimum'
         *  Sum: '<S344>/Summation'
         *  UnitDelay: '<S344>/Unit Delay'
         */
        rtb_Switch1_md = fminf(KeDMIR_t_PaddleDbncSet, KeDMIR_t_MedTED +
                               DMIR_ac_DW.UnitDelay_DSTATE_j);
    }

    /* End of Switch: '<S344>/Switch1' */

    /* Logic: '<S344>/AND' incorporates:
     *  Constant: '<S339>/Calib'
     *  RelationalOperator: '<S344>/Greater  Than'
     */
    rtb_UnitDelay_bp = (rtb_AND_i2 && (rtb_Switch1_md >= KeDMIR_t_PaddleDbncSet));

    /* Update for UnitDelay: '<S344>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch1_md;

    /* End of Outputs for SubSystem: '<S293>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S293>/EdgeRising1' */
    /* Logic: '<S335>/AND' incorporates:
     *  Logic: '<S335>/OR1'
     *  UnitDelay: '<S335>/Unit Delay'
     */
    rtb_AND_ev = (rtb_UnitDelay_bp && (!DMIR_ac_DW.UnitDelay_DSTATE_br));

    /* Update for UnitDelay: '<S335>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_br = rtb_UnitDelay_bp;

    /* End of Outputs for SubSystem: '<S293>/EdgeRising1' */

    /* Logic: '<S353>/AND2' incorporates:
     *  Logic: '<S353>/OR2'
     *  Logic: '<S353>/OR3'
     *  UnitDelay: '<S342>/Unit Delay1'
     *  UnitDelay: '<S353>/Unit Delay2'
     */
    rtb_UnitDelay_bp = (((DMIR_ac_DW.UnitDelay2_DSTATE_j) || rtb_AND_ev) &&
                        (!DMIR_ac_DW.UnitDelay1_DSTATE_je));

    /* Outputs for Atomic SubSystem: '<S342>/EdgeFalling' */
    /* Logic: '<S350>/AND' incorporates:
     *  UnitDelay: '<S350>/Unit Delay'
     */
    rtb_AND_dk = (tmp_1 && (DMIR_ac_DW.UnitDelay_DSTATE_fa));

    /* Update for UnitDelay: '<S350>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_fa = rtb_AND_i2;

    /* End of Outputs for SubSystem: '<S342>/EdgeFalling' */

    /* Switch: '<S293>/Switch1' incorporates:
     *  Constant: '<S338>/Calib'
     */
    if (HeDMIR_b_EnaPaddleMaxPressTime)
    {
        /* Switch: '<S293>/Switch1' incorporates:
         *  Logic: '<S342>/AND'
         *  UnitDelay: '<S352>/Unit Delay1'
         */
        VeDMIR_b_DownReq = ((rtb_UnitDelay_bp && rtb_AND_dk) &&
                            (DMIR_ac_DW.UnitDelay1_DSTATE_dg));
    }
    else
    {
        /* Switch: '<S293>/Switch1' */
        VeDMIR_b_DownReq = rtb_AND_ev;
    }

    /* End of Switch: '<S293>/Switch1' */

    /* Switch: '<S283>/Switch1' incorporates:
     *  Constant: '<S326>/Calib'
     */
    if (KeDMIR_b_eCoastEnaOvrrd)
    {
        /* Switch: '<S283>/Switch1' incorporates:
         *  Constant: '<S327>/Calib'
         */
        VeDMIC_b_eCoasEnbl = KeDMIR_b_eCoastEnaVal;
    }
    else
    {
        /* Switch: '<S283>/Switch1' incorporates:
         *  Constant: '<S324>/Constant'
         *  Constant: '<S325>/Constant'
         *  Inport: '<Root>/VeASLR_e_HDC_Status'
         *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
         *  Logic: '<S283>/Logical'
         *  Logic: '<S283>/Logical1'
         *  Logic: '<S283>/Logical2'
         *  Logic: '<S283>/Logical3'
         *  Logic: '<S283>/Logical5'
         *  Logic: '<S283>/Logical6'
         *  RelationalOperator: '<S283>/Comparison1'
         *  RelationalOperator: '<S283>/Comparison4'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        VeDMIC_b_eCoasEnbl = (((((tmpRead_1 && rtb_Equal_p) && rtb_NOT_l) &&
                                ((!rtb_Logical5_fz) && (!rtb_Logical11_n))) &&
                               ((((uint32)tmpRead_c) != CeASLR_e_HDC_ACT) ||
                                (!rtb_LogicalOperator))) && (((uint32)tmpRead_j)
                               != CeDMDR_e_No_Turtle_Mode));
    }

    /* End of Switch: '<S283>/Switch1' */

    /* Switch: '<S286>/Switch1' incorporates:
     *  Constant: '<S330>/Calib'
     *  Constant: '<S331>/Calib'
     *  Switch: '<S286>/Switch2'
     */
    if (KeDMIR_b_eCoastFAOvrrd)
    {
        /* Switch: '<S286>/Switch1' incorporates:
         *  Constant: '<S332>/Calib'
         */
        VeDMIC_b_eCoasFA = KeDMIR_b_eCoastFAVal;
    }
    else if (KeDMIR_b_AeCoastStsFAOvrrd)
    {
        /* Switch: '<S286>/Switch4' incorporates:
         *  Constant: '<S333>/Calib'
         *  Switch: '<S286>/Switch2'
         */
        if (KeDMIR_b_AeCoastReadyDisabled)
        {
            /* Switch: '<S286>/Switch4' incorporates:
             *  Constant: '<S286>/FALSE Constant2'
             */
            rtb_Switch4_iq = false;
        }
        else
        {
            /* Switch: '<S286>/Switch4' incorporates:
             *  Logic: '<S286>/Logical1'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
             */
            rtb_Switch4_iq = !rtb_Switch4_iq;
        }

        /* End of Switch: '<S286>/Switch4' */

        /* Switch: '<S286>/Switch1' incorporates:
         *  Constant: '<S328>/Constant'
         *  Logic: '<S286>/Logical'
         *  RelationalOperator: '<S286>/Comparison1'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         *  Switch: '<S286>/Switch2'
         */
        VeDMIC_b_eCoasFA = ((rtb_Switch4_iq || rtb_OR_h) || (((uint32)tmpRead_g)
                             == CeDMIR_e_Error));
    }
    else
    {
        /* Switch: '<S286>/Switch1' incorporates:
         *  Constant: '<S329>/Constant'
         *  Inport: '<Root>/VeAECR_e_AeCoastStat'
         *  RelationalOperator: '<S286>/Comparison2'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         *  Switch: '<S286>/Switch2'
         */
        VeDMIC_b_eCoasFA = (((uint32)tmpRead_s) == CeAECR_e_AecoastingFaulted);
    }

    /* End of Switch: '<S286>/Switch1' */

    /* Logic: '<S370>/OR' incorporates:
     *  Constant: '<S371>/Constant'
     *  Constant: '<S372>/Constant'
     *  RelationalOperator: '<S370>/Comparison4'
     *  RelationalOperator: '<S370>/Comparison5'
     */
    rtb_OR_h = ((CeTIMR_e_RaceMode_Active == ((uint32)tmpRead_i)) ||
                (CeTIMR_e_RaceMode_On == ((uint32)tmpRead_i)));

    /* Selector: '<S358>/Selector3' incorporates:
     *  Constant: '<S367>/Calib'
     */
    rtb_eCoastThreshold_TrrnMd = KaDMIR_e_EcoastTrrnThrshld[(tmpRead_h)];

    /* Switch: '<S358>/Switch2' incorporates:
     *  Constant: '<S366>/Constant'
     *  RelationalOperator: '<S358>/Comparison6'
     */
    if (((uint32)tmpRead_u) == CeDTRR_e_Faulted)
    {
        /* Switch: '<S358>/Switch2' incorporates:
         *  Constant: '<S368>/Calib'
         */
        rtb_Switch2_pb = KeDMIR_i_EcoastOPDThrshld;
    }
    else
    {
        /* Switch: '<S358>/Switch2' */
        rtb_Switch2_pb = rtb_eCoastThreshold_TrrnMd;
    }

    /* End of Switch: '<S358>/Switch2' */

    /* Switch: '<S358>/Switch1' incorporates:
     *  Constant: '<S369>/Calib'
     */
    if (rtb_OR_h)
    {
        tmpRead_q = KeDMIR_i_EcoastRaceMdThrshld;
    }
    else
    {
        tmpRead_q = rtb_Switch2_pb;
    }

    /* End of Switch: '<S358>/Switch1' */

    /* MinMax: '<S358>/Min' */
    if (tmpRead_q < rtb_Switch2_pb)
    {
        rtb_Switch2_pb = tmpRead_q;
    }

    if (rtb_Switch2_pb < rtb_eCoastThreshold_TrrnMd)
    {
        /* MinMax: '<S358>/Min' */
        rtb_eCoastThreshold_TrrnMd = rtb_Switch2_pb;
    }

    /* End of MinMax: '<S358>/Min' */

    /* DataStoreRead: '<S71>/Data Store Read1' */
    rtb_DataStoreRead1_c = DMIR_ac_DW.NeDMIR_e_eCoastDefaultAuto;

    /* Logic: '<S71>/Logical5' incorporates:
     *  Constant: '<S294>/Calib'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_Switch4_iq = (rtb_OR1_nv && (KeDMIR_b_ConfigImpendingSkid));

    /* Outputs for Atomic SubSystem: '<S389>/EdgeRising' */
    /* Logic: '<S400>/OR1' incorporates:
     *  UnitDelay: '<S400>/Unit Delay'
     */
    rtb_OR1_nv = !DMIR_ac_DW.UnitDelay_DSTATE_lge;

    /* Update for UnitDelay: '<S400>/Unit Delay' incorporates:
     *  Constant: '<S389>/FALSE Constant'
     */
    DMIR_ac_DW.UnitDelay_DSTATE_lge = true;

    /* End of Outputs for SubSystem: '<S389>/EdgeRising' */

    /* RelationalOperator: '<S389>/Comparison8' incorporates:
     *  Delay: '<S295>/Integer Delay'
     *  RelationalOperator: '<S357>/Comparison4'
     *  RelationalOperator: '<S388>/Comparison8'
     */
    rtb_LogicalOperator_tmp = DMIR_ac_DW.IntegerDelay_DSTATE_m;

    /* Logic: '<S389>/Logical Operator' incorporates:
     *  Constant: '<S401>/Constant'
     *  Constant: '<S402>/Constant'
     *  RelationalOperator: '<S389>/Comparison7'
     *  RelationalOperator: '<S389>/Comparison8'
     */
    rtb_LogicalOperator = ((((uint32)tmpRead_h) != CeTMDR_e_Custom) && (((uint32)
        rtb_LogicalOperator_tmp) == CeTMDR_e_Custom));

    /* Outputs for Triggered SubSystem: '<S389>/If Action Subsystem2' incorporates:
     *  TriggerPort: '<S403>/Trigger'
     */
    if (rtb_LogicalOperator && (((sint32)
            DMIR_ac_PrevZCX.IfActionSubsystem2_Trig_ZCE) != 1))
    {
        /* Inport: '<S403>/eCoastOld' incorporates:
         *  Delay: '<S71>/Integer Delay'
         */
        DMIR_ac_B.eCoastOld = DMIR_ac_DW.IntegerDelay_DSTATE;

        /* DataStoreWrite: '<S403>/Data Store Write' incorporates:
         *  Inport: '<S403>/eCoastOld'
         */
        DMIR_ac_DW.NeDMIR_e_eCoastDefaultCustom = DMIR_ac_B.eCoastOld;
    }

    DMIR_ac_PrevZCX.IfActionSubsystem2_Trig_ZCE = rtb_LogicalOperator ?
        ((ZCSigState)1) : ((ZCSigState)0);

    /* End of Outputs for SubSystem: '<S389>/If Action Subsystem2' */

    /* Outputs for Atomic SubSystem: '<S389>/EdgeRising' */
    /* Switch: '<S389>/Switch1' incorporates:
     *  Logic: '<S400>/AND'
     */
    if (rtb_OR1_nv)
    {
        /* Switch: '<S389>/Switch1' incorporates:
         *  DataStoreRead: '<S389>/Data Store Read'
         */
        rtb_Switch1_c = DMIR_ac_DW.NeDMIR_e_eCoastDefaultCustom;
    }
    else
    {
        /* Switch: '<S389>/Switch1' incorporates:
         *  Inport: '<S403>/eCoastOld'
         */
        rtb_Switch1_c = DMIR_ac_B.eCoastOld;
    }

    /* End of Switch: '<S389>/Switch1' */
    /* End of Outputs for SubSystem: '<S389>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S388>/EdgeRising' */
    /* Logic: '<S396>/OR1' incorporates:
     *  UnitDelay: '<S396>/Unit Delay'
     */
    rtb_OR1_nv = !DMIR_ac_DW.UnitDelay_DSTATE_cj;

    /* Update for UnitDelay: '<S396>/Unit Delay' incorporates:
     *  Constant: '<S388>/FALSE Constant'
     */
    DMIR_ac_DW.UnitDelay_DSTATE_cj = true;

    /* End of Outputs for SubSystem: '<S388>/EdgeRising' */

    /* Logic: '<S388>/Logical Operator' incorporates:
     *  Constant: '<S397>/Constant'
     *  Constant: '<S398>/Constant'
     *  RelationalOperator: '<S388>/Comparison7'
     *  RelationalOperator: '<S388>/Comparison8'
     */
    rtb_LogicalOperator = ((((uint32)tmpRead_h) != CeTMDR_e_Auto) && (((uint32)
        rtb_LogicalOperator_tmp) == CeTMDR_e_Auto));

    /* Outputs for Triggered SubSystem: '<S388>/If Action Subsystem2' incorporates:
     *  TriggerPort: '<S399>/Trigger'
     */
    if (rtb_LogicalOperator && (((sint32)
            DMIR_ac_PrevZCX.IfActionSubsystem2_Trig_ZCE_c) != 1))
    {
        /* Inport: '<S399>/eCoastOld' incorporates:
         *  Delay: '<S71>/Integer Delay'
         */
        DMIR_ac_B.eCoastOld_d = DMIR_ac_DW.IntegerDelay_DSTATE;

        /* DataStoreWrite: '<S399>/Data Store Write' incorporates:
         *  Inport: '<S399>/eCoastOld'
         */
        DMIR_ac_DW.NeDMIR_e_eCoastDefaultAuto = DMIR_ac_B.eCoastOld_d;
    }

    DMIR_ac_PrevZCX.IfActionSubsystem2_Trig_ZCE_c = rtb_LogicalOperator ?
        ((ZCSigState)1) : ((ZCSigState)0);

    /* End of Outputs for SubSystem: '<S388>/If Action Subsystem2' */

    /* If: '<S359>/If' incorporates:
     *  Constant: '<S375>/Constant'
     *  Constant: '<S376>/Constant'
     *  Constant: '<S377>/Constant'
     *  Constant: '<S378>/Constant'
     *  Constant: '<S379>/Constant'
     *  Constant: '<S380>/Constant'
     *  Constant: '<S381>/Constant'
     *  Constant: '<S382>/Constant'
     *  Constant: '<S383>/Constant'
     *  Logic: '<S359>/Logical1'
     *  Logic: '<S359>/Logical2'
     *  RelationalOperator: '<S359>/Comparison1'
     *  RelationalOperator: '<S359>/Comparison2'
     *  RelationalOperator: '<S359>/Comparison3'
     *  RelationalOperator: '<S359>/Comparison4'
     *  RelationalOperator: '<S359>/Comparison5'
     *  RelationalOperator: '<S359>/Comparison6'
     *  RelationalOperator: '<S359>/Comparison7'
     *  RelationalOperator: '<S359>/Comparison8'
     *  RelationalOperator: '<S359>/Comparison9'
     */
    if ((((CeTMDR_e_ECO == ((uint32)tmpRead_h)) || (CeTMDR_e_Snow == ((uint32)
            tmpRead_h))) || (CeTMDR_e_Valet == ((uint32)tmpRead_h))) ||
            (CeTIMR_e_RaceMode_Off != ((uint32)tmpRead_i)))
    {
        /* Outputs for IfAction SubSystem: '<S359>/If Action Subsystem' incorporates:
         *  ActionPort: '<S384>/Action Port'
         */
        /* Merge: '<S359>/Merge' incorporates:
         *  Constant: '<S391>/Calib'
         *  DataTypeConversion: '<S390>/DataTypeConversion'
         */
        rtb_Switch1_c = (TeDMIR_e_eCoastSel)KeDMIR_i_eCoastLevelMaxEco;

        /* End of Outputs for SubSystem: '<S359>/If Action Subsystem' */
    }
    else if (CeTMDR_e_Sport == ((uint32)tmpRead_h))
    {
        /* Outputs for IfAction SubSystem: '<S359>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S385>/Action Port'
         */
        /* Merge: '<S359>/Merge' incorporates:
         *  Constant: '<S393>/Calib'
         *  DataTypeConversion: '<S392>/DataTypeConversion'
         */
        rtb_Switch1_c = (TeDMIR_e_eCoastSel)KeDMIR_i_eCoastLevelDefault;

        /* End of Outputs for SubSystem: '<S359>/If Action Subsystem1' */
    }
    else if ((CeTMDR_e_Drag == ((uint32)tmpRead_h)) || (CeTMDR_e_Track ==
              ((uint32)tmpRead_h)))
    {
        /* Outputs for IfAction SubSystem: '<S359>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S386>/Action Port'
         */
        /* Merge: '<S359>/Merge' incorporates:
         *  Constant: '<S395>/Calib'
         *  DataTypeConversion: '<S394>/DataTypeConversion'
         */
        rtb_Switch1_c = (TeDMIR_e_eCoastSel)KeDMIR_i_eCoastLevelMax;

        /* End of Outputs for SubSystem: '<S359>/If Action Subsystem2' */
    }
    else if (CeTMDR_e_Auto == ((uint32)tmpRead_h))
    {
        /* Outputs for Atomic SubSystem: '<S388>/EdgeRising' */
        /* Switch: '<S388>/Switch1' incorporates:
         *  Logic: '<S396>/AND'
         */
        if (rtb_OR1_nv)
        {
            /* Outputs for IfAction SubSystem: '<S359>/Auto' incorporates:
             *  ActionPort: '<S373>/Action Port'
             */
            /* Merge: '<S359>/Merge' incorporates:
             *  DataStoreRead: '<S388>/Data Store Read'
             *  Inport: '<S373>/eCoastAuto'
             */
            rtb_Switch1_c = DMIR_ac_DW.NeDMIR_e_eCoastDefaultAuto;

            /* End of Outputs for SubSystem: '<S359>/Auto' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S359>/Auto' incorporates:
             *  ActionPort: '<S373>/Action Port'
             */
            /* Merge: '<S359>/Merge' incorporates:
             *  Inport: '<S373>/eCoastAuto'
             *  Inport: '<S399>/eCoastOld'
             */
            rtb_Switch1_c = DMIR_ac_B.eCoastOld_d;

            /* End of Outputs for SubSystem: '<S359>/Auto' */
        }

        /* End of Switch: '<S388>/Switch1' */
        /* End of Outputs for SubSystem: '<S388>/EdgeRising' */
    }
    else
    {
        if (CeTMDR_e_Custom != ((uint32)tmpRead_h))
        {
            /* Outputs for IfAction SubSystem: '<S359>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S387>/Action Port'
             */
            /* Merge: '<S359>/Merge' incorporates:
             *  Delay: '<S71>/Integer Delay'
             *  Inport: '<S387>/eCoasting'
             */
            rtb_Switch1_c = DMIR_ac_DW.IntegerDelay_DSTATE;

            /* End of Outputs for SubSystem: '<S359>/If Action Subsystem3' */
        }
    }

    /* End of If: '<S359>/If' */

    /* Logic: '<S297>/Logical5' incorporates:
     *  Constant: '<S303>/Constant'
     *  Constant: '<S304>/Constant'
     *  Constant: '<S305>/Constant'
     *  RelationalOperator: '<S297>/Comparison1'
     *  RelationalOperator: '<S297>/Comparison2'
     *  RelationalOperator: '<S297>/Comparison3'
     */
    rtb_Logical5_fz = (((CePLTR_e_Cancel == ((uint32)tmpRead_t)) ||
                        (CePLTR_e_Enabled == ((uint32)tmpRead_t))) ||
                       (CePLTR_e_Off == ((uint32)tmpRead_t)));

    /* Logic: '<S301>/NOT' */
    rtb_NOT_l = !rtb_OR_h;

    /* RelationalOperator: '<S301>/Equal' incorporates:
     *  Constant: '<S306>/Constant'
     *  Delay: '<S71>/Integer Delay'
     */
    rtb_Equal_p = (((uint32)DMIR_ac_DW.IntegerDelay_DSTATE) != CeDMIR_e_Level3);

    /* Logic: '<S59>/Logical13' incorporates:
     *  Abs: '<S301>/Abs'
     *  Constant: '<S308>/Calib'
     *  RelationalOperator: '<S301>/GreaterThan'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_LogicalOperator = (fabsf(rtb_Switch1_mb) > ((float32)
                            KeDMIR_v_OPDExitSpeedThrshld));

    /* Logic: '<S59>/Logical11' incorporates:
     *  Constant: '<S307>/Calib'
     *  RelationalOperator: '<S301>/GreaterThan1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_Logical11_n = (rtb_Switch1_m3 > ((float32)KeDMIR_i_OPDExitBrkPdlThrshld));

    /* Logic: '<S59>/Logical12' incorporates:
     *  Constant: '<S311>/Constant'
     *  Constant: '<S321>/Constant'
     *  Logic: '<S302>/Logical2'
     *  RelationalOperator: '<S302>/Comparison8'
     *  RelationalOperator: '<S302>/Comparison9'
     */
    rtb_OR1_nv = ((CeTMDR_e_Custom == ((uint32)tmpRead_h)) || (CeTMDR_e_Auto ==
                   ((uint32)tmpRead_h)));

    /* Switch: '<S309>/Switch1' incorporates:
     *  Constant: '<S322>/Constant'
     *  Constant: '<S323>/Constant'
     *  Logic: '<S309>/OR2'
     *  Logic: '<S309>/OR3'
     *  RelationalOperator: '<S309>/Comparison1'
     *  RelationalOperator: '<S309>/Comparison2'
     */
    if (((((uint32)rtb_TmpSignalConversionAtTmp_at) != CeDMIR_e_En) && (((uint32)
            rtb_TmpSignalConversionAtTmp_at) != CeDMIR_e_Dis)) || (!rtb_OR1_nv))
    {
        /* Switch: '<S309>/Switch1' incorporates:
         *  DataStoreRead: '<S302>/Data Store Read'
         */
        rtb_TmpSignalConversionAtTmp_at = DMIR_ac_DW.NeDMIR_e_PddlMdStatus;
    }

    /* End of Switch: '<S309>/Switch1' */

    /* Switch: '<S302>/Switch3' incorporates:
     *  Constant: '<S313>/Constant'
     *  Constant: '<S315>/Constant'
     *  Constant: '<S317>/Constant'
     *  Constant: '<S318>/Constant'
     *  Constant: '<S319>/Constant'
     *  Constant: '<S320>/Constant'
     *  Logic: '<S302>/Logical1'
     *  Logic: '<S302>/Logical4'
     *  RelationalOperator: '<S302>/Comparison1'
     *  RelationalOperator: '<S302>/Comparison2'
     *  RelationalOperator: '<S302>/Comparison3'
     *  RelationalOperator: '<S302>/Comparison4'
     *  RelationalOperator: '<S302>/Comparison6'
     *  RelationalOperator: '<S302>/Comparison7'
     *  Switch: '<S302>/Switch1'
     *  Switch: '<S302>/Switch2'
     */
    if (rtb_OR1_nv)
    {
        /* Switch: '<S302>/Switch3' incorporates:
         *  Switch: '<S309>/Switch1'
         */
        Switch3 = rtb_TmpSignalConversionAtTmp_at;
    }
    else if (((CeTMDR_e_Sport == ((uint32)tmpRead_h)) || (CeTMDR_e_Track ==
               ((uint32)tmpRead_h))) || (CeTMDR_e_Drag == ((uint32)tmpRead_h)))
    {
        /* Switch: '<S302>/Switch2' incorporates:
         *  Constant: '<S310>/Constant'
         *  Switch: '<S302>/Switch3'
         */
        Switch3 = CeDMIR_e_En;
    }
    else if ((((CeTMDR_e_ECO == ((uint32)tmpRead_h)) || (CeTMDR_e_Valet ==
                ((uint32)tmpRead_h))) || (CeTMDR_e_Snow == ((uint32)tmpRead_h)))
             || rtb_OR_h)
    {
        /* Switch: '<S302>/Switch1' incorporates:
         *  Constant: '<S312>/Constant'
         *  Switch: '<S302>/Switch2'
         *  Switch: '<S302>/Switch3'
         */
        Switch3 = CeDMIR_e_Dis;
    }
    else
    {
        /* Switch: '<S302>/Switch3' incorporates:
         *  Constant: '<S314>/Constant'
         *  Switch: '<S302>/Switch1'
         *  Switch: '<S302>/Switch2'
         */
        Switch3 = CeDMIR_e_None;
    }

    /* End of Switch: '<S302>/Switch3' */

    /* Chart: '<S71>/eCoasting_paddles' incorporates:
     *  Constant: '<S285>/Constant'
     *  Constant: '<S288>/Calib'
     *  Constant: '<S289>/Calib'
     *  Constant: '<S290>/Calib'
     *  Constant: '<S291>/Calib'
     *  Constant: '<S292>/Calib'
     *  DataStoreRead: '<S71>/Data Store Read'
     *  DataStoreRead: '<S71>/Data Store Read1'
     *  DataStoreRead: '<S71>/Data Store Read3'
     *  Logic: '<S282>/Logical4'
     *  Logic: '<S301>/AND2'
     *  Logic: '<S301>/AND3'
     *  Merge: '<S359>/Merge'
     *  RelationalOperator: '<S71>/Comparison5'
     */
    /* Gateway: DMIR_MedTED1/Controls/eCoasting_Paddles_Signal_Interpretation/eCoasting_paddles */
    /* During: DMIR_MedTED1/Controls/eCoasting_Paddles_Signal_Interpretation/eCoasting_paddles */
    if (((uint32)DMIR_ac_DW.is_active_c38_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Controls/eCoasting_Paddles_Signal_Interpretation/eCoasting_paddles */
        DMIR_ac_DW.is_active_c38_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Controls/eCoasting_Paddles_Signal_Interpretation/eCoasting_paddles */
        /* Entry Internal 'eCoastingPopupMessage': '<S296>:1277' */
        /* Transition: '<S296>:1296' */
        DMIR_ac_DW.FaultNew = 1.0;
        DMIR_ac_DW.FlagPopupMsg2 = 0.0;
        DMIR_ac_DW.is_eCoastingPopupMessage = DMIR_ac_IN_eCoastPopupMsg0;

        /* Entry 'eCoastPopupMsg0': '<S296>:1291' */
        LeDMIR_e_eCoastPopUpMsg = 0;

        /* Entry Internal 'eCoastingLevelSelection': '<S296>:1276' */
        /* Transition: '<S296>:576' */
        if (VeDMIC_b_eCoasFA)
        {
            /* Transition: '<S296>:996' */
            /* Transition: '<S296>:1215' */
            if (!KeDMIR_b_FAeCoastLvlNA)
            {
                /* Transition: '<S296>:1147' */
                DMIR_ac_B.LeDMIR_i_CurrentSel = CeDMIR_e_Level0;
                DMIR_ac_B.LeDMIR_e_TellTaleSts = CeDMIR_e_Level0Sts;
                DMIR_ac_B.LeDMIR_e_eCoastingSel = CeDMIR_e_Level0;
            }
            else
            {
                /* Transition: '<S296>:998' */
                /* Transition: '<S296>:1217' */
                /* Transition: '<S296>:1148' */
                DMIR_ac_B.LeDMIR_e_TellTaleSts = CeDMIR_e_NA;
            }

            DMIR_ac_DW.is_eCoastingLevelSelection = DMIR_ac_IN_System_Faulted;

            /* Entry 'System_Faulted': '<S296>:578' */
            DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_NotAvailable;
            DMIR_ac_B.LeDMIR_e_PopUpRqst = CeDMIR_e_SNA;
        }
        else
        {
            /* Transition: '<S296>:995' */
            if (!VeDMIC_b_eCoasEnbl)
            {
                /* Transition: '<S296>:1024' */
                DMIR_ac_B.LeDMIR_i_CurrentSel = (uint8)
                    DMIR_ac_DW.NeDMIR_e_eCoastLvlLatched;
                DMIR_ac_DW.is_eCoastingLevelSelection =
                    DMIR_ac_IN_eCoasting_Disabled;

                /* Entry 'eCoasting_Disabled': '<S296>:997' */
                DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_NotAvailable;
                DMIR_ac_B.LeDMIR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                    safe_cast_to_TeDMIR_e_eCoastInf
                    (DMIR_ac_B.LeDMIR_i_CurrentSel);
                DMIR_ac_B.LeDMIR_e_PopUpRqst = CeDMIR_e_NA;
                DMIR_ac_B.LeDMIR_e_eCoastingSel = CeDMIR_e_NotAvail;
            }
            else
            {
                /* Transition: '<S296>:1153' */
                if ((((uint32)tmpRead_h) == CeTMDR_e_Auto) &&
                        (KeDMIR_b_LP3EcoastOvrrd))
                {
                    /* Transition: '<S296>:1154' */
                    /* Transition: '<S296>:1160' */
                    DMIR_ac_B.LeDMIR_i_CurrentSel = (uint8)rtb_DataStoreRead1_c;
                }
                else if (((uint32)DMIR_ac_DW.NeDMIR_e_RaceModeSts) ==
                         CeTIMR_e_RaceMode_On)
                {
                    /* Transition: '<S296>:1186' */
                    /* Transition: '<S296>:1187' */
                    DMIR_ac_B.LeDMIR_i_CurrentSel = (uint8)rtb_Switch1_c;
                }
                else
                {
                    /* Transition: '<S296>:1188' */
                    DMIR_ac_B.LeDMIR_i_CurrentSel = (uint8)
                        DMIR_ac_DW.NeDMIR_e_eCoastLvlLatched;
                }

                DMIR_ac_DW.is_eCoastingLevelSelection =
                    DMIR_ac_IN_eCoasting_Selection;

                /* Entry 'eCoasting_Selection': '<S296>:1025' */
                DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_Available;
                DMIR_ac_B.LeDMIR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                    safe_cast_to_TeDMIR_e_eCoastInf
                    (DMIR_ac_B.LeDMIR_i_CurrentSel);
                DMIR_ac_B.LeDMIR_e_PopUpRqst = (TeDMIR_e_eCoastInfo)
                    safe_cast_to_TeDMIR_e_eCoastInf
                    (DMIR_ac_B.LeDMIR_i_CurrentSel);
                DMIR_ac_B.LeDMIR_e_eCoastingSel = (TeDMIR_e_eCoastSel)
                    safe_cast_to_TeDMIR_e_eCoastSel
                    (DMIR_ac_B.LeDMIR_i_CurrentSel);
            }
        }
    }
    else
    {
        /* During 'eCoastingPopupMessage': '<S296>:1277' */
        switch (DMIR_ac_DW.is_eCoastingPopupMessage)
        {
          case DMIR_ac_IN_eCoastPopupMsg0:
            LeDMIR_e_eCoastPopUpMsg = 0;

            /* During 'eCoastPopupMsg0': '<S296>:1291' */
            rtb_OR_h = ((VeDMIR_b_UpReq) || (VeDMIR_b_DownReq));
            if ((((VeDMIC_b_eCoasFA) && (DMIR_ac_DW.FaultNew != 0.0)) ||
                    ((VeDMIC_b_eCoasFA) && rtb_OR_h)) || ((!rtb_Logical5_fz) &&
                    rtb_OR_h))
            {
                /* Transition: '<S296>:1301' */
                DMIR_ac_DW.PopupCounter = 0.0;
                DMIR_ac_DW.is_eCoastingPopupMessage = DMIR_ac_IN_eCoastPopupMsg1;

                /* Entry 'eCoastPopupMsg1': '<S296>:1292' */
                LeDMIR_e_eCoastPopUpMsg = 1;
            }
            else if ((DMIR_ac_DW.FlagPopupMsg2 != 0.0) || (((((uint32)tmpRead_u)
                        == CeDTRR_e_Faulted) && (VeDMIR_b_DownReq)) && (((sint32)
                        DMIR_ac_B.LeDMIR_i_CurrentSel) == 2)))
            {
                /* Transition: '<S296>:1323' */
                DMIR_ac_DW.PopupCounter = 0.0;
                DMIR_ac_DW.is_eCoastingPopupMessage = DMIR_ac_IN_eCoastPopupMsg2;

                /* Entry 'eCoastPopupMsg2': '<S296>:1293' */
                LeDMIR_e_eCoastPopUpMsg = 2;
            }
            else
            {
                rtb_OR_h = !VeDMIC_b_eCoasFA;
                if ((rtb_OR_h && (rtb_Logical5_fz && (rtb_NOT_l &&
                        (((!rtb_Equal_p) && (!rtb_LogicalOperator)) &&
                         (!rtb_Logical11_n))))) && (VeDMIR_b_UpReq))
                {
                    /* Transition: '<S296>:1330' */
                    DMIR_ac_DW.PopupCounter = 0.0;
                    DMIR_ac_DW.is_eCoastingPopupMessage =
                        DMIR_ac_IN_eCoastPopupMsg3;

                    /* Entry 'eCoastPopupMsg3': '<S296>:1294' */
                    LeDMIR_e_eCoastPopUpMsg = 3;
                }
                else
                {
                    if (rtb_OR_h && (DMIR_ac_DW.FaultNew == 0.0))
                    {
                        /* Transition: '<S296>:1318' */
                        /* Transition: '<S296>:1320' */
                        DMIR_ac_DW.FaultNew = 1.0;

                        /* Transition: '<S296>:1321' */
                        DMIR_ac_DW.is_eCoastingPopupMessage =
                            DMIR_ac_IN_eCoastPopupMsg0;

                        /* Entry 'eCoastPopupMsg0': '<S296>:1291' */
                    }
                }
            }
            break;

          case DMIR_ac_IN_eCoastPopupMsg1:
            /* During 'eCoastPopupMsg1': '<S296>:1292' */
            if (DMIR_ac_DW.PopupCounter <= ((float64)((float32)
                    (KeDMIR_t_PopupMsgTime / KeDMIR_t_MedTED))))
            {
                /* Transition: '<S296>:1304' */
                /* Transition: '<S296>:1306' */
                /* Transition: '<S296>:1307' */
                DMIR_ac_DW.PopupCounter++;
                DMIR_ac_DW.is_eCoastingPopupMessage = DMIR_ac_IN_eCoastPopupMsg1;

                /* Entry 'eCoastPopupMsg1': '<S296>:1292' */
                LeDMIR_e_eCoastPopUpMsg = 1;
            }
            else
            {
                /* Transition: '<S296>:1322' */
                DMIR_ac_DW.FaultNew = 0.0;
                DMIR_ac_DW.is_eCoastingPopupMessage = DMIR_ac_IN_eCoastPopupMsg0;

                /* Entry 'eCoastPopupMsg0': '<S296>:1291' */
                LeDMIR_e_eCoastPopUpMsg = 0;
            }
            break;

          case DMIR_ac_IN_eCoastPopupMsg2:
            /* During 'eCoastPopupMsg2': '<S296>:1293' */
            if (DMIR_ac_DW.PopupCounter <= ((float64)((float32)
                    (KeDMIR_t_PopupMsgTime / KeDMIR_t_MedTED))))
            {
                /* Transition: '<S296>:1327' */
                /* Transition: '<S296>:1325' */
                /* Transition: '<S296>:1329' */
                DMIR_ac_DW.PopupCounter++;
                DMIR_ac_DW.is_eCoastingPopupMessage = DMIR_ac_IN_eCoastPopupMsg2;

                /* Entry 'eCoastPopupMsg2': '<S296>:1293' */
                LeDMIR_e_eCoastPopUpMsg = 2;
            }
            else
            {
                /* Transition: '<S296>:1324' */
                DMIR_ac_DW.FlagPopupMsg2 = 0.0;
                DMIR_ac_DW.is_eCoastingPopupMessage = DMIR_ac_IN_eCoastPopupMsg0;

                /* Entry 'eCoastPopupMsg0': '<S296>:1291' */
                LeDMIR_e_eCoastPopUpMsg = 0;
            }
            break;

          default:
            /* During 'eCoastPopupMsg3': '<S296>:1294' */
            if (DMIR_ac_DW.PopupCounter <= ((float64)((float32)
                    (KeDMIR_t_PopupMsgTime / KeDMIR_t_MedTED))))
            {
                /* Transition: '<S296>:1336' */
                /* Transition: '<S296>:1335' */
                /* Transition: '<S296>:1333' */
                DMIR_ac_DW.PopupCounter++;
                DMIR_ac_DW.is_eCoastingPopupMessage = DMIR_ac_IN_eCoastPopupMsg3;

                /* Entry 'eCoastPopupMsg3': '<S296>:1294' */
                LeDMIR_e_eCoastPopUpMsg = 3;
            }
            else
            {
                /* Transition: '<S296>:1331' */
                DMIR_ac_DW.is_eCoastingPopupMessage = DMIR_ac_IN_eCoastPopupMsg0;

                /* Entry 'eCoastPopupMsg0': '<S296>:1291' */
                LeDMIR_e_eCoastPopUpMsg = 0;
            }
            break;
        }

        /* During 'eCoastingLevelSelection': '<S296>:1276' */
        guard1 = false;
        guard2 = false;
        switch (DMIR_ac_DW.is_eCoastingLevelSelection)
        {
          case DMIR_ac_IN_System_Faulted:
            DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_NotAvailable;

            /* During 'System_Faulted': '<S296>:578' */
            rtb_OR_h = !VeDMIC_b_eCoasFA;
            if (rtb_OR_h && (!VeDMIC_b_eCoasEnbl))
            {
                /* Transition: '<S296>:1075' */
                DMIR_ac_DW.is_eCoastingLevelSelection =
                    DMIR_ac_IN_eCoasting_Disabled;

                /* Entry 'eCoasting_Disabled': '<S296>:997' */
                DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_NotAvailable;
                DMIR_ac_B.LeDMIR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                    safe_cast_to_TeDMIR_e_eCoastInf
                    (DMIR_ac_B.LeDMIR_i_CurrentSel);
                DMIR_ac_B.LeDMIR_e_PopUpRqst = CeDMIR_e_NA;
                DMIR_ac_B.LeDMIR_e_eCoastingSel = CeDMIR_e_NotAvail;
            }
            else
            {
                if (rtb_OR_h && (VeDMIC_b_eCoasEnbl))
                {
                    /* Transition: '<S296>:1032' */
                    /* Transition: '<S296>:1034' */
                    /* Transition: '<S296>:1033' */
                    DMIR_ac_DW.is_eCoastingLevelSelection =
                        DMIR_ac_IN_eCoasting_Selection;

                    /* Entry 'eCoasting_Selection': '<S296>:1025' */
                    DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_Available;
                    DMIR_ac_B.LeDMIR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                        safe_cast_to_TeDMIR_e_eCoastInf
                        (DMIR_ac_B.LeDMIR_i_CurrentSel);
                    DMIR_ac_B.LeDMIR_e_PopUpRqst = (TeDMIR_e_eCoastInfo)
                        safe_cast_to_TeDMIR_e_eCoastInf
                        (DMIR_ac_B.LeDMIR_i_CurrentSel);
                    DMIR_ac_B.LeDMIR_e_eCoastingSel = (TeDMIR_e_eCoastSel)
                        safe_cast_to_TeDMIR_e_eCoastSel
                        (DMIR_ac_B.LeDMIR_i_CurrentSel);
                }
            }
            break;

          case DMIR_ac_IN_eCoastingNA:
            /* During 'eCoastingNA': '<S296>:1242' */
            if (DMIR_ac_DW.counter <= ((float64)((float32)(KeDMIR_t_eCoastNATime
                   / KeDMIR_t_MedTED))))
            {
                /* Transition: '<S296>:1238' */
                /* Transition: '<S296>:1247' */
                /* Transition: '<S296>:1237' */
                DMIR_ac_DW.counter++;
                DMIR_ac_DW.is_eCoastingLevelSelection = DMIR_ac_IN_eCoastingNA;
            }
            else
            {
                /* Transition: '<S296>:1240' */
                /* Transition: '<S296>:1351' */
                DMIR_ac_DW.is_eCoastingLevelSelection =
                    DMIR_ac_IN_eCoasting_Selection;

                /* Entry 'eCoasting_Selection': '<S296>:1025' */
                DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_Available;
                DMIR_ac_B.LeDMIR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                    safe_cast_to_TeDMIR_e_eCoastInf
                    (DMIR_ac_B.LeDMIR_i_CurrentSel);
                DMIR_ac_B.LeDMIR_e_PopUpRqst = (TeDMIR_e_eCoastInfo)
                    safe_cast_to_TeDMIR_e_eCoastInf
                    (DMIR_ac_B.LeDMIR_i_CurrentSel);
                DMIR_ac_B.LeDMIR_e_eCoastingSel = (TeDMIR_e_eCoastSel)
                    safe_cast_to_TeDMIR_e_eCoastSel
                    (DMIR_ac_B.LeDMIR_i_CurrentSel);
            }
            break;

          case DMIR_ac_IN_eCoasting_Disabled:
            DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_NotAvailable;

            /* During 'eCoasting_Disabled': '<S296>:997' */
            if (VeDMIC_b_eCoasFA)
            {
                /* Transition: '<S296>:1074' */
                /* Transition: '<S296>:1148' */
                DMIR_ac_B.LeDMIR_e_TellTaleSts = CeDMIR_e_NA;
                DMIR_ac_DW.is_eCoastingLevelSelection =
                    DMIR_ac_IN_System_Faulted;

                /* Entry 'System_Faulted': '<S296>:578' */
                DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_NotAvailable;
                DMIR_ac_B.LeDMIR_e_PopUpRqst = CeDMIR_e_SNA;
            }
            else if ((VeDMIR_b_UpReq) && (((sint32)DMIR_ac_B.LeDMIR_i_CurrentSel)
                      > 0))
            {
                /* Transition: '<S296>:1171' */
                /* Transition: '<S296>:1172' */
                tmp_2 = ((sint32)DMIR_ac_B.LeDMIR_i_CurrentSel) - 1;
                if ((((sint32)DMIR_ac_B.LeDMIR_i_CurrentSel) - 1) < 0)
                {
                    tmp_2 = 0;
                }

                DMIR_ac_B.LeDMIR_i_CurrentSel = (uint8)tmp_2;

                /* Transition: '<S296>:1173' */
                guard2 = true;
            }
            else if ((VeDMIR_b_DownReq) && (DMIR_ac_B.LeDMIR_i_CurrentSel <
                      rtb_eCoastThreshold_TrrnMd))
            {
                /* Transition: '<S296>:1167' */
                /* Transition: '<S296>:1166' */
                tmp_2 = ((sint32)DMIR_ac_B.LeDMIR_i_CurrentSel) + 1;
                if ((((sint32)DMIR_ac_B.LeDMIR_i_CurrentSel) + 1) > 255)
                {
                    tmp_2 = 255;
                }

                DMIR_ac_B.LeDMIR_i_CurrentSel = (uint8)tmp_2;

                /* Transition: '<S296>:1168' */
                guard2 = true;
            }
            else
            {
                if ((VeDMIC_b_eCoasEnbl) && (!VeDMIC_b_eCoasFA))
                {
                    /* Transition: '<S296>:1031' */
                    /* Transition: '<S296>:1033' */
                    DMIR_ac_DW.is_eCoastingLevelSelection =
                        DMIR_ac_IN_eCoasting_Selection;

                    /* Entry 'eCoasting_Selection': '<S296>:1025' */
                    DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_Available;
                    DMIR_ac_B.LeDMIR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                        safe_cast_to_TeDMIR_e_eCoastInf
                        (DMIR_ac_B.LeDMIR_i_CurrentSel);
                    DMIR_ac_B.LeDMIR_e_PopUpRqst = (TeDMIR_e_eCoastInfo)
                        safe_cast_to_TeDMIR_e_eCoastInf
                        (DMIR_ac_B.LeDMIR_i_CurrentSel);
                    DMIR_ac_B.LeDMIR_e_eCoastingSel = (TeDMIR_e_eCoastSel)
                        safe_cast_to_TeDMIR_e_eCoastSel
                        (DMIR_ac_B.LeDMIR_i_CurrentSel);
                }
            }
            break;

          default:
            DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_Available;

            /* During 'eCoasting_Selection': '<S296>:1025' */
            if (VeDMIC_b_eCoasFA)
            {
                /* Transition: '<S296>:1039' */
                /* Transition: '<S296>:1043' */
                /* Transition: '<S296>:1162' */
                /* Transition: '<S296>:1215' */
                if (!KeDMIR_b_FAeCoastLvlNA)
                {
                    /* Transition: '<S296>:1147' */
                    DMIR_ac_B.LeDMIR_i_CurrentSel = CeDMIR_e_Level0;
                    DMIR_ac_B.LeDMIR_e_TellTaleSts = CeDMIR_e_Level0Sts;
                    DMIR_ac_B.LeDMIR_e_eCoastingSel = CeDMIR_e_Level0;
                }
                else
                {
                    /* Transition: '<S296>:998' */
                    /* Transition: '<S296>:1217' */
                    /* Transition: '<S296>:1148' */
                    DMIR_ac_B.LeDMIR_e_TellTaleSts = CeDMIR_e_NA;
                }

                DMIR_ac_DW.is_eCoastingLevelSelection =
                    DMIR_ac_IN_System_Faulted;

                /* Entry 'System_Faulted': '<S296>:578' */
                DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_NotAvailable;
                DMIR_ac_B.LeDMIR_e_PopUpRqst = CeDMIR_e_SNA;
            }
            else if (!VeDMIC_b_eCoasEnbl)
            {
                /* Transition: '<S296>:1036' */
                /* Transition: '<S296>:1037' */
                DMIR_ac_DW.is_eCoastingLevelSelection =
                    DMIR_ac_IN_eCoasting_Disabled;

                /* Entry 'eCoasting_Disabled': '<S296>:997' */
                DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_NotAvailable;
                DMIR_ac_B.LeDMIR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                    safe_cast_to_TeDMIR_e_eCoastInf
                    (DMIR_ac_B.LeDMIR_i_CurrentSel);
                DMIR_ac_B.LeDMIR_e_PopUpRqst = CeDMIR_e_NA;
                DMIR_ac_B.LeDMIR_e_eCoastingSel = CeDMIR_e_NotAvail;
            }
            else if (((!KeDMIR_b_ACCStsOvrrd) && (((!rtb_Logical5_fz) ||
                        ((!KeDMIR_b_LP3EcoastOvrrd) && ((!rtb_NOT_l) ||
                          (((!rtb_Equal_p) && (!rtb_LogicalOperator)) &&
                           (!rtb_Logical11_n))))) || ((!KeDMIR_b_PddlMdStsOvrrd)
                        && (CeDMIR_e_En != ((uint32)Switch3))))) &&
                     (((VeDMIR_b_UpReq) || (VeDMIR_b_DownReq)) ||
                      (rtb_TmpSignalConversionAtTmp_ma !=
                       DMIR_ac_DW.UnitDelay_DSTATE_ev)))
            {
                /* Transition: '<S296>:1229' */
                if (!KeDMIR_b_LP3EcoastOvrrd)
                {
                    /* Transition: '<S296>:1352' */
                    /* Transition: '<S296>:1351' */
                    guard1 = true;
                }
                else
                {
                    /* Transition: '<S296>:1234' */
                    DMIR_ac_B.LeDMIR_e_TellTaleSts = CeDMIR_e_NA;
                    DMIR_ac_DW.counter = 0.0;
                    DMIR_ac_DW.is_eCoastingLevelSelection =
                        DMIR_ac_IN_eCoastingNA;
                }
            }
            else
            {
                rtb_OR_h = !rtb_Switch4_iq;
                if ((((uint32)rtb_TmpSignalConversionAtTmp_ma) ==
                        CeDMIR_e_LevelOne) && rtb_OR_h)
                {
                    /* Transition: '<S296>:1198' */
                    /* Transition: '<S296>:1196' */
                    DMIR_ac_B.LeDMIR_i_CurrentSel = 0U;

                    /* Transition: '<S296>:1201' */
                    guard1 = true;
                }
                else
                {
                    tmp_2 = (sint32)DMIR_ac_B.LeDMIR_e_eCoastingSel;
                    if (((VeDMIR_b_UpReq) && (tmp_2 > 0)) && rtb_OR_h)
                    {
                        /* Transition: '<S296>:1046' */
                        /* Transition: '<S296>:1165' */
                        tmp_2 = ((sint32)DMIR_ac_B.LeDMIR_i_CurrentSel) - 1;
                        if ((((sint32)DMIR_ac_B.LeDMIR_i_CurrentSel) - 1) < 0)
                        {
                            tmp_2 = 0;
                        }

                        DMIR_ac_B.LeDMIR_i_CurrentSel = (uint8)tmp_2;

                        /* Transition: '<S296>:1049' */
                        guard1 = true;
                    }
                    else if (((VeDMIR_b_DownReq) && (tmp_2 < ((sint32)
                                rtb_eCoastThreshold_TrrnMd))) && rtb_OR_h)
                    {
                        /* Transition: '<S296>:1051' */
                        /* Transition: '<S296>:1054' */
                        tmp_2 = ((sint32)DMIR_ac_B.LeDMIR_i_CurrentSel) + 1;
                        if ((((sint32)DMIR_ac_B.LeDMIR_i_CurrentSel) + 1) > 255)
                        {
                            tmp_2 = 255;
                        }

                        DMIR_ac_B.LeDMIR_i_CurrentSel = (uint8)tmp_2;

                        /* Transition: '<S296>:1053' */
                        guard1 = true;
                    }
                    else if (((((uint32)tmpRead_u) == CeDTRR_e_Faulted) &&
                              (((sint32)DMIR_ac_B.LeDMIR_i_CurrentSel) == 3)) &&
                             (KeDMIR_b_EcoastChngOPDFail))
                    {
                        /* Transition: '<S296>:1265' */
                        /* Transition: '<S296>:1260' */
                        DMIR_ac_DW.FlagPopupMsg2 = 1.0;
                        DMIR_ac_B.LeDMIR_i_CurrentSel = 2U;

                        /* Transition: '<S296>:1262' */
                        guard1 = true;
                    }
                    else
                    {
                        /* RelationalOperator: '<S357>/Comparison6' incorporates:
                         *  Delay: '<S357>/Integer Delay1'
                         *  RelationalOperator: '<S357>/Comparison8'
                         */
                        tmp_3 = DMIR_ac_DW.IntegerDelay1_DSTATE;
                        if (((((tmpRead_h != rtb_LogicalOperator_tmp) &&
                                (((uint32)tmpRead_i) == CeTIMR_e_RaceMode_Off)) ||
                              ((CeTIMR_e_RaceMode_Off == ((uint32)tmpRead_i)) &&
                               (CeTIMR_e_RaceMode_Off != ((uint32)tmp_3)))) ||
                                ((((uint32)tmp_3) == CeTIMR_e_RaceMode_Off) &&
                                 (((uint32)tmpRead_i) != CeTIMR_e_RaceMode_Off)))
                            && (KeDMIR_b_ConfigTrrnMdChange))
                        {
                            /* Transition: '<S296>:1144' */
                            /* Transition: '<S296>:1143' */
                            DMIR_ac_B.LeDMIR_i_CurrentSel = (uint8)rtb_Switch1_c;

                            /* Transition: '<S296>:1140' */
                            guard1 = true;
                        }
                        else
                        {
                            if ((((uint32)rtb_TmpSignalConversionAtTmp_ma) ==
                                    CeDMIR_e_LevelTwo) && rtb_OR_h)
                            {
                                /* Transition: '<S296>:1212' */
                                /* Transition: '<S296>:1208' */
                                DMIR_ac_B.LeDMIR_i_CurrentSel = 1U;

                                /* Transition: '<S296>:1213' */
                                guard1 = true;
                            }
                        }
                    }
                }
            }
            break;
        }

        if (guard2)
        {
            DMIR_ac_DW.is_eCoastingLevelSelection =
                DMIR_ac_IN_eCoasting_Disabled;

            /* Entry 'eCoasting_Disabled': '<S296>:997' */
            DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_NotAvailable;
            DMIR_ac_B.LeDMIR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                safe_cast_to_TeDMIR_e_eCoastInf(DMIR_ac_B.LeDMIR_i_CurrentSel);
            DMIR_ac_B.LeDMIR_e_PopUpRqst = CeDMIR_e_NA;
            DMIR_ac_B.LeDMIR_e_eCoastingSel = CeDMIR_e_NotAvail;
        }

        if (guard1)
        {
            DMIR_ac_DW.is_eCoastingLevelSelection =
                DMIR_ac_IN_eCoasting_Selection;

            /* Entry 'eCoasting_Selection': '<S296>:1025' */
            DMIR_ac_B.LeDMIR_e_eCoastingSts = CeDMIR_e_Available;
            LeDMIR_e_TellTaleSts_tmp = (TeDMIR_e_eCoastInfo)
                safe_cast_to_TeDMIR_e_eCoastInf(DMIR_ac_B.LeDMIR_i_CurrentSel);
            DMIR_ac_B.LeDMIR_e_TellTaleSts = LeDMIR_e_TellTaleSts_tmp;
            DMIR_ac_B.LeDMIR_e_PopUpRqst = LeDMIR_e_TellTaleSts_tmp;
            DMIR_ac_B.LeDMIR_e_eCoastingSel = (TeDMIR_e_eCoastSel)
                safe_cast_to_TeDMIR_e_eCoastSel(DMIR_ac_B.LeDMIR_i_CurrentSel);
        }
    }

    /* End of Chart: '<S71>/eCoasting_paddles' */

    /* DataTypeConversion: '<S284>/DataTypeConversion' */
    VeDMIR_e_eCoastLvlLatched = DMIR_ac_B.LeDMIR_i_CurrentSel;

    /* DataStoreWrite: '<S71>/Data Store Write' incorporates:
     *  DataTypeConversion: '<S284>/DataTypeConversion'
     */
    DMIR_ac_DW.NeDMIR_e_eCoastLvlLatched = VeDMIR_e_eCoastLvlLatched;

    /* Outputs for Atomic SubSystem: '<S71>/EdgeRising' */
    /* Logic: '<S281>/OR1' incorporates:
     *  UnitDelay: '<S281>/Unit Delay'
     */
    rtb_OR1_nv = !DMIR_ac_DW.UnitDelay_DSTATE_pta;

    /* Update for UnitDelay: '<S281>/Unit Delay' incorporates:
     *  Constant: '<S71>/FALSE Constant2'
     */
    DMIR_ac_DW.UnitDelay_DSTATE_pta = true;

    /* Switch: '<S71>/Switch1' incorporates:
     *  DataStoreWrite: '<S71>/Data Store Write1'
     *  Inport: '<Root>/VeTIMR_e_RaceModeSts'
     *  Logic: '<S281>/AND'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    if (!rtb_OR1_nv)
    {
        DMIR_ac_DW.NeDMIR_e_RaceModeSts = tmpRead_i;
    }

    /* End of Switch: '<S71>/Switch1' */
    /* End of Outputs for SubSystem: '<S71>/EdgeRising' */

    /* DataStoreWrite: '<S302>/Data Store Write' incorporates:
     *  Switch: '<S309>/Switch1'
     */
    DMIR_ac_DW.NeDMIR_e_PddlMdStatus = rtb_TmpSignalConversionAtTmp_at;

    /* Outputs for Atomic SubSystem: '<S341>/EdgeFalling1' */
    /* Update for UnitDelay: '<S341>/Unit Delay1' incorporates:
     *  Logic: '<S346>/AND'
     *  UnitDelay: '<S346>/Unit Delay'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_c = (tmp_0 && (DMIR_ac_DW.UnitDelay_DSTATE_m));

    /* Update for UnitDelay: '<S346>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_m = rtb_Comparison1_i3;

    /* End of Outputs for SubSystem: '<S341>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S347>/EdgeRising' */
    /* Logic: '<S349>/AND' incorporates:
     *  Logic: '<S349>/OR1'
     *  UnitDelay: '<S349>/Unit Delay'
     */
    rtb_OR1_nv = (rtb_Comparison1_i3 && (!DMIR_ac_DW.UnitDelay_DSTATE_od));

    /* Update for UnitDelay: '<S349>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_od = rtb_Comparison1_i3;

    /* End of Outputs for SubSystem: '<S347>/EdgeRising' */

    /* Switch: '<S347>/Switch1' incorporates:
     *  Logic: '<S347>/OR'
     */
    if (tmp_0 || rtb_OR1_nv)
    {
        /* Switch: '<S347>/Switch1' incorporates:
         *  Constant: '<S347>/Constant Value1'
         */
        rtb_Switch1_m3 = 0.0F;
    }
    else
    {
        /* Switch: '<S347>/Switch1' incorporates:
         *  Constant: '<S290>/Calib'
         *  Constant: '<S340>/Calib'
         *  MinMax: '<S347>/Minimum'
         *  Sum: '<S347>/Summation'
         *  UnitDelay: '<S347>/Unit Delay'
         */
        rtb_Switch1_m3 = fminf(KeDMIR_t_PaddleMaxPressTime, KeDMIR_t_MedTED +
                               DMIR_ac_DW.UnitDelay_DSTATE_hf);
    }

    /* End of Switch: '<S347>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S342>/EdgeFalling1' */
    /* Update for UnitDelay: '<S342>/Unit Delay1' incorporates:
     *  Logic: '<S351>/AND'
     *  UnitDelay: '<S351>/Unit Delay'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_je = (tmp_1 && (DMIR_ac_DW.UnitDelay_DSTATE_oyz));

    /* Update for UnitDelay: '<S351>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_oyz = rtb_AND_i2;

    /* End of Outputs for SubSystem: '<S342>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S352>/EdgeRising' */
    /* Logic: '<S354>/AND' incorporates:
     *  Logic: '<S354>/OR1'
     *  UnitDelay: '<S354>/Unit Delay'
     */
    rtb_OR1_nv = (rtb_AND_i2 && (!DMIR_ac_DW.UnitDelay_DSTATE_gwy));

    /* Update for UnitDelay: '<S354>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_gwy = rtb_AND_i2;

    /* End of Outputs for SubSystem: '<S352>/EdgeRising' */

    /* Switch: '<S352>/Switch1' incorporates:
     *  Logic: '<S352>/OR'
     */
    if (tmp_1 || rtb_OR1_nv)
    {
        /* Switch: '<S352>/Switch1' incorporates:
         *  Constant: '<S352>/Constant Value1'
         */
        rtb_Switch1_mb = 0.0F;
    }
    else
    {
        /* Switch: '<S352>/Switch1' incorporates:
         *  Constant: '<S290>/Calib'
         *  Constant: '<S340>/Calib'
         *  MinMax: '<S352>/Minimum'
         *  Sum: '<S352>/Summation'
         *  UnitDelay: '<S352>/Unit Delay'
         */
        rtb_Switch1_mb = fminf(KeDMIR_t_PaddleMaxPressTime, KeDMIR_t_MedTED +
                               DMIR_ac_DW.UnitDelay_DSTATE_d);
    }

    /* End of Switch: '<S352>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S64>/EdgeFalling' */
    /* Logic: '<S206>/AND' incorporates:
     *  Logic: '<S206>/OR1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  UnitDelay: '<S206>/Unit Delay'
     */
    rtb_OR1_nv = ((!tmpRead_1) && (DMIR_ac_DW.UnitDelay_DSTATE_jc));

    /* Update for UnitDelay: '<S206>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    DMIR_ac_DW.UnitDelay_DSTATE_jc = tmpRead_1;

    /* End of Outputs for SubSystem: '<S64>/EdgeFalling' */

    /* Outputs for Enabled SubSystem: '<S64>/LatchDrvMd' incorporates:
     *  EnablePort: '<S207>/Enable'
     */
    if (rtb_OR1_nv)
    {
        /* DataTypeConversion: '<S207>/Data Type Conversion' incorporates:
         *  DataStoreWrite: '<S207>/Data Store Write'
         *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        DMIR_ac_DW.NeDMIR_e_DrvMdArb = (uint16)tmpRead_2;
    }

    /* End of Outputs for SubSystem: '<S64>/LatchDrvMd' */

    /* DataTypeConversion: '<S75>/DataTypeConversion' incorporates:
     *  Chart: '<S58>/Drive_Mode_Selection'
     *  Constant: '<S78>/Calib'
     *  DataStoreRead: '<S58>/Data Store Read5'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S58>/VariantSource'
     */
#if !Rte_SysCon_Variant_DMIR_1

    /* Outputs for Atomic SubSystem: '<S58>/EcoSwitchMaxPress' */
    /* Outputs for Atomic SubSystem: '<S74>/EdgeFalling' */
    /* Logic: '<S79>/AND' incorporates:
     *  UnitDelay: '<S79>/Unit Delay'
     */
    rtb_OR1_nv = (rtb_Logical2_ej && (DMIR_ac_DW.UnitDelay_DSTATE_os));

    /* Update for UnitDelay: '<S79>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_os = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S74>/EdgeFalling' */

    /* Logic: '<S74>/AND' incorporates:
     *  UnitDelay: '<S80>/Unit Delay1'
     */
    rtb_OR_h = (rtb_OR1_nv && (DMIR_ac_DW.UnitDelay1_DSTATE_jw));

    /* Outputs for Atomic SubSystem: '<S80>/EdgeRising' */
    /* Logic: '<S59>/Logical12' incorporates:
     *  UnitDelay: '<S81>/Unit Delay'
     */
    rtb_OR1_nv = DMIR_ac_DW.UnitDelay_DSTATE_ab;

    /* Update for UnitDelay: '<S81>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ab = rtb_RelationalOperator3;

    /* Switch: '<S80>/Switch1' incorporates:
     *  Logic: '<S80>/OR'
     *  Logic: '<S81>/AND'
     *  Logic: '<S81>/OR1'
     */
    if (rtb_Logical2_ej || (rtb_RelationalOperator3 && (!rtb_OR1_nv)))
    {
        /* Switch: '<S80>/Switch1' incorporates:
         *  Constant: '<S80>/Constant Value1'
         */
        rtb_Switch1_md = 0.0F;
    }
    else
    {
        /* Switch: '<S80>/Switch1' incorporates:
         *  Constant: '<S76>/Calib'
         *  Constant: '<S78>/Calib'
         *  MinMax: '<S80>/Minimum'
         *  Sum: '<S80>/Summation'
         *  UnitDelay: '<S80>/Unit Delay'
         */
        rtb_Switch1_md = fminf(KeDMIR_t_ButtonMaxPressTime, KeDMIR_t_MedTED +
                               DMIR_ac_DW.UnitDelay_DSTATE_hp);
    }

    /* End of Switch: '<S80>/Switch1' */
    /* End of Outputs for SubSystem: '<S80>/EdgeRising' */

    /* Update for UnitDelay: '<S80>/Unit Delay1' incorporates:
     *  Constant: '<S76>/Calib'
     *  RelationalOperator: '<S80>/Greater  Than'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_jw = (rtb_Switch1_md <
        KeDMIR_t_ButtonMaxPressTime);

    /* Update for UnitDelay: '<S80>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_hp = rtb_Switch1_md;

    /* Gateway: DMIR_MedTED1/Controls/Drive_Mode_Interpretation_BEV/Drive_Mode_Selection */
    /* During: DMIR_MedTED1/Controls/Drive_Mode_Interpretation_BEV/Drive_Mode_Selection */
    if (((uint32)DMIR_ac_DW.is_active_c4_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Controls/Drive_Mode_Interpretation_BEV/Drive_Mode_Selection */
        DMIR_ac_DW.is_active_c4_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Controls/Drive_Mode_Interpretation_BEV/Drive_Mode_Selection */
        /* Transition: '<S73>:1078' */
        DMIR_ac_DW.timer = 0.0;
        if (rtb_OR1_lw && (((uint32)((TeDMDR_e_DrvMd)
                DMIR_ac_DW.NeDMIR_e_DrvMdArb)) == CeDMDR_e_Camel_Mode))
        {
            /* Transition: '<S73>:1136' */
            /* Transition: '<S73>:1137' */
            DMIR_ac_DW.is_c4_DMIR_ac = DMIR_ac_IN_Eco;

            /* VariantMerge generated from: '<S58>/VariantSource' */
            /* Entry 'Eco': '<S73>:1081' */
            rtb_VariantMerge_For_Variant__a = CeDMIR_e_Eco;
        }
        else
        {
            /* Transition: '<S73>:1104' */
            DMIR_ac_DW.is_c4_DMIR_ac = DMIR_ac_IN_Normal;

            /* VariantMerge generated from: '<S58>/VariantSource' */
            /* Entry 'Normal': '<S73>:1079' */
            rtb_VariantMerge_For_Variant__a = CeDMIR_e_Normal;
        }
    }
    else
    {
        guard1 = false;
        guard2 = false;
        if (((sint32)DMIR_ac_DW.is_c4_DMIR_ac) == 1)
        {
            /* VariantMerge generated from: '<S58>/VariantSource' */
            rtb_VariantMerge_For_Variant__a = CeDMIR_e_Eco;

            /* During 'Eco': '<S73>:1081' */
            /* Transition: '<S73>:1163' */
            if (rtb_OR_h && (((uint32)tmpRead_2) == CeDMDR_e_Camel_Mode))
            {
                /* Transition: '<S73>:1126' */
                guard2 = true;
            }
            else
            {
                /* Transition: '<S73>:1165' */
                if (DMIR_ac_DW.timer < ((float64)KeDMIR_t_DriveMdAcceptedTimer))
                {
                    /* Transition: '<S73>:1167' */
                    /* Transition: '<S73>:1168' */
                    DMIR_ac_DW.timer += (float64)KeDMIR_t_MedTED;
                    DMIR_ac_DW.is_c4_DMIR_ac = DMIR_ac_IN_Eco;

                    /* VariantMerge generated from: '<S58>/VariantSource' incorporates:
                     *  Constant: '<S78>/Calib'
                     */
                    /* Entry 'Eco': '<S73>:1081' */
                    rtb_VariantMerge_For_Variant__a = CeDMIR_e_Eco;
                }
                else
                {
                    if (((uint32)tmpRead_2) == CeDMDR_e_Normal_Mode)
                    {
                        /* Transition: '<S73>:1170' */
                        /* Transition: '<S73>:1172' */
                        guard2 = true;
                    }
                }
            }
        }
        else
        {
            /* VariantMerge generated from: '<S58>/VariantSource' */
            rtb_VariantMerge_For_Variant__a = CeDMIR_e_Normal;

            /* During 'Normal': '<S73>:1079' */
            /* Transition: '<S73>:1175' */
            if (rtb_OR_h && (((uint32)tmpRead_2) == CeDMDR_e_Normal_Mode))
            {
                /* Transition: '<S73>:1082' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S73>:1177' */
                if (DMIR_ac_DW.timer < ((float64)KeDMIR_t_DriveMdAcceptedTimer))
                {
                    /* Transition: '<S73>:1179' */
                    /* Transition: '<S73>:1180' */
                    DMIR_ac_DW.timer += (float64)KeDMIR_t_MedTED;
                    DMIR_ac_DW.is_c4_DMIR_ac = DMIR_ac_IN_Normal;

                    /* VariantMerge generated from: '<S58>/VariantSource' incorporates:
                     *  Constant: '<S78>/Calib'
                     */
                    /* Entry 'Normal': '<S73>:1079' */
                    rtb_VariantMerge_For_Variant__a = CeDMIR_e_Normal;
                }
                else
                {
                    if (((uint32)tmpRead_2) == CeDMDR_e_Camel_Mode)
                    {
                        /* Transition: '<S73>:1182' */
                        /* Transition: '<S73>:1184' */
                        guard1 = true;
                    }
                }
            }
        }

        if (guard2)
        {
            /* Transition: '<S73>:1173' */
            DMIR_ac_DW.timer = 0.0;
            DMIR_ac_DW.is_c4_DMIR_ac = DMIR_ac_IN_Normal;

            /* VariantMerge generated from: '<S58>/VariantSource' */
            /* Entry 'Normal': '<S73>:1079' */
            rtb_VariantMerge_For_Variant__a = CeDMIR_e_Normal;
        }

        if (guard1)
        {
            /* Transition: '<S73>:1185' */
            DMIR_ac_DW.timer = 0.0;
            DMIR_ac_DW.is_c4_DMIR_ac = DMIR_ac_IN_Eco;

            /* VariantMerge generated from: '<S58>/VariantSource' */
            /* Entry 'Eco': '<S73>:1081' */
            rtb_VariantMerge_For_Variant__a = CeDMIR_e_Eco;
        }
    }

    /* End of Outputs for SubSystem: '<S58>/EcoSwitchMaxPress' */
#endif

    /* End of DataTypeConversion: '<S75>/DataTypeConversion' */

    /* Logic: '<S59>/Logical12' incorporates:
     *  Constant: '<S103>/Calib'
     *  RelationalOperator: '<S59>/Comparison2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_OR1_nv = (tmpRead_k <= KeDMIR_t_ModeLatchMaxTime);

    /* Outputs for Atomic SubSystem: '<S83>/EdgeRising1' */
    /* Logic: '<S108>/OR1' incorporates:
     *  UnitDelay: '<S108>/Unit Delay'
     */
    rtb_OR1_lw = !DMIR_ac_DW.UnitDelay_DSTATE_hmx;

    /* Update for UnitDelay: '<S108>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    DMIR_ac_DW.UnitDelay_DSTATE_hmx = tmpRead_1;

    /* Outputs for Atomic SubSystem: '<S83>/Count Down  Reset Enabled' */
    /* Switch: '<S107>/Switch1' incorporates:
     *  Constant: '<S107>/Constant Value'
     *  Logic: '<S107>/AND'
     *  Logic: '<S108>/AND'
     *  RelationalOperator: '<S107>/Greater  Than'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  Switch: '<S107>/Switch2'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    if (tmpRead_1 && rtb_OR1_lw)
    {
        /* Switch: '<S107>/Switch1' incorporates:
         *  Constant: '<S83>/Constant Value1'
         */
        rtb_Switch1_mn = 3U;
    }
    else if (tmpRead_1 && (((sint32)DMIR_ac_DW.UnitDelay_DSTATE_dj) > 0))
    {
        /* Switch: '<S107>/Switch2' incorporates:
         *  Constant: '<S107>/Constant Value1'
         *  Sum: '<S107>/Subtraction'
         *  Switch: '<S107>/Switch1'
         *  UnitDelay: '<S107>/Unit Delay'
         */
        rtb_Switch1_mn = (uint16)((sint32)(((sint32)
            DMIR_ac_DW.UnitDelay_DSTATE_dj) - 1));
    }
    else
    {
        /* Switch: '<S107>/Switch1' incorporates:
         *  Switch: '<S107>/Switch2'
         *  UnitDelay: '<S107>/Unit Delay'
         */
        rtb_Switch1_mn = DMIR_ac_DW.UnitDelay_DSTATE_dj;
    }

    /* End of Switch: '<S107>/Switch1' */
    /* End of Outputs for SubSystem: '<S83>/EdgeRising1' */

    /* RelationalOperator: '<S107>/Greater  Than1' incorporates:
     *  Constant: '<S107>/Constant Value2'
     */
    rtb_OR1_lw = (((sint32)rtb_Switch1_mn) > 0);

    /* Update for UnitDelay: '<S107>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_dj = rtb_Switch1_mn;

    /* End of Outputs for SubSystem: '<S83>/Count Down  Reset Enabled' */

    /* If: '<S59>/If' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S144>/Calib'
     *  Constant: '<S145>/Calib'
     *  Constant: '<S150>/Calib'
     *  Logic: '<S121>/AND'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    if (KeDMIR_i_DrvMdSwtchTyp == 0)
    {
        /* Outputs for IfAction SubSystem: '<S59>/NoDrvMdSwitch' incorporates:
         *  ActionPort: '<S104>/Action Port'
         */
        /* Merge: '<S59>/Merge' incorporates:
         *  Constant: '<S114>/Calib'
         *  SignalConversion generated from: '<S104>/VeDMDC_e_DrvMdRawNoDrvMdSwtch'
         */
        DMIR_ac_B.Merge_b = KeDMIR_e_DrvMdNoDrvMd;

        /* End of Outputs for SubSystem: '<S59>/NoDrvMdSwitch' */
    }
    else if (KeDMIR_i_DrvMdSwtchTyp == 1)
    {
        /* Outputs for IfAction SubSystem: '<S59>/RotaryDrvMdSwitch' incorporates:
         *  ActionPort: '<S105>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S105>/TonaleDNA_Dbnc' */
        DMIR_ac_DodgeSw_Dbnc(rtb_TmpSignalConversionAtTmp_mv,
                             KeDMIR_t_DbncTimeDNATonaleSignal, KeDMIR_t_MedTED,
                             &DMIR_ac_B.TonaleDNA_Dbnc,
                             &DMIR_ac_DW.TonaleDNA_Dbnc);

        /* End of Outputs for SubSystem: '<S105>/TonaleDNA_Dbnc' */

        /* UnitDelay: '<S171>/Unit Delay' incorporates:
         *  Constant: '<S142>/Calib'
         *  Constant: '<S144>/Calib'
         *  Constant: '<S150>/Calib'
         *  RelationalOperator: '<S105>/Comparison1'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        rtb_Logical11_n = (DMIR_ac_B.TonaleDNA_Dbnc.In1 ==
                           KeDMIR_i_DrvModeDwnVal);

        /* Outputs for Atomic SubSystem: '<S105>/DodgeSw_Dbnc' */
        DMIR_ac_DodgeSw_Dbnc(rtb_TmpSignalConversionAtTmp_cl,
                             KeDMIR_t_DbncTimeDodgeWheelSwitch, KeDMIR_t_MedTED,
                             &DMIR_ac_B.DodgeSw_Dbnc, &DMIR_ac_DW.DodgeSw_Dbnc);

        /* End of Outputs for SubSystem: '<S105>/DodgeSw_Dbnc' */

        /* Outputs for Atomic SubSystem: '<S105>/EdgeFalling' */
        /* Logic: '<S117>/AND' incorporates:
         *  Constant: '<S145>/Calib'
         *  Constant: '<S150>/Calib'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         *  UnitDelay: '<S117>/Unit Delay'
         */
        rtb_LogicalOperator = (tmp && (DMIR_ac_DW.UnitDelay_DSTATE_kr));

        /* Update for UnitDelay: '<S117>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_kr = rtb_RelationalOperator2;

        /* End of Outputs for SubSystem: '<S105>/EdgeFalling' */

        /* Outputs for Atomic SubSystem: '<S105>/EdgeFalling1' */
        /* Logic: '<S118>/AND' incorporates:
         *  Logic: '<S118>/OR1'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         *  UnitDelay: '<S118>/Unit Delay'
         */
        rtb_OR_h = ((!rtb_TmpSignalConversionAtTmp_go) &&
                    (DMIR_ac_DW.UnitDelay_DSTATE_oo));

        /* Update for UnitDelay: '<S118>/Unit Delay' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        DMIR_ac_DW.UnitDelay_DSTATE_oo = rtb_TmpSignalConversionAtTmp_go;

        /* End of Outputs for SubSystem: '<S105>/EdgeFalling1' */

        /* Outputs for Atomic SubSystem: '<S105>/EdgeFalling2' */
        /* Logic: '<S119>/AND' incorporates:
         *  Logic: '<S119>/OR1'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         *  UnitDelay: '<S119>/Unit Delay'
         */
        rtb_Logical5_fz = ((!rtb_TmpSignalConversionAtTmp_ie) &&
                           (DMIR_ac_DW.UnitDelay_DSTATE_lr));

        /* Update for UnitDelay: '<S119>/Unit Delay' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        DMIR_ac_DW.UnitDelay_DSTATE_lr = rtb_TmpSignalConversionAtTmp_ie;

        /* End of Outputs for SubSystem: '<S105>/EdgeFalling2' */

        /* Outputs for Atomic SubSystem: '<S105>/EdgeRising' */
        /* Logic: '<S120>/AND' incorporates:
         *  Logic: '<S120>/OR1'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         *  UnitDelay: '<S120>/Unit Delay'
         */
        rtb_Switch4_iq = (rtb_TmpSignalConversionAtTmp_go &&
                          (!DMIR_ac_DW.UnitDelay_DSTATE_k0));

        /* Update for UnitDelay: '<S120>/Unit Delay' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        DMIR_ac_DW.UnitDelay_DSTATE_k0 = rtb_TmpSignalConversionAtTmp_go;

        /* End of Outputs for SubSystem: '<S105>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S105>/FallingEdge' */
        /* RelationalOperator: '<S133>/Comparison8' incorporates:
         *  Constant: '<S163>/Calib'
         *  UnitDelay: '<S133>/Unit Delay'
         */
        rtb_TmpSignalConversionAtTmp_go = (DMIR_ac_DW.UnitDelay_DSTATE_hm ==
            KeDMIR_i_DrvModeDwnVal);

        /* Update for UnitDelay: '<S133>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_hm = DMIR_ac_B.TonaleDNA_Dbnc.In1;

        /* Outputs for Atomic SubSystem: '<S105>/Signal Latch On With Reset' */
        /* Logic: '<S154>/OR1' incorporates:
         *  Constant: '<S163>/Calib'
         *  Logic: '<S105>/Logical8'
         *  Logic: '<S133>/Logical5'
         *  Logic: '<S154>/NOT'
         *  Logic: '<S154>/OR'
         *  RelationalOperator: '<S133>/Comparison7'
         *  UnitDelay: '<S154>/Unit Delay'
         */
        rtb_TmpSignalConversionAtTmp_go = ((rtb_Logical5_fz && rtb_Logical11_n) ||
            (((DMIR_ac_B.TonaleDNA_Dbnc.In1 == KeDMIR_i_DrvModeDwnVal) ||
              (!rtb_TmpSignalConversionAtTmp_go)) &&
             (DMIR_ac_DW.UnitDelay_DSTATE_mb)));

        /* End of Outputs for SubSystem: '<S105>/FallingEdge' */

        /* Update for UnitDelay: '<S154>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_mb = rtb_TmpSignalConversionAtTmp_go;

        /* End of Outputs for SubSystem: '<S105>/Signal Latch On With Reset' */

        /* Switch: '<S105>/Switch' incorporates:
         *  Constant: '<S124>/Constant'
         *  Constant: '<S128>/Constant'
         *  Constant: '<S141>/Calib'
         *  Inport: '<Root>/VeDMDR_e_DrvMdInt'
         *  Logic: '<S105>/Logical1'
         *  Logic: '<S105>/Logical2'
         *  Logic: '<S105>/Logical3'
         *  RelationalOperator: '<S105>/Comparison2'
         *  RelationalOperator: '<S105>/Comparison6'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        rtb_TmpSignalConversionAtTmp_ie = ((((((!rtb_TmpSignalConversionAtTmp_ie)
            || (CeDMDR_e_Sport != ((uint32)tmpRead_0))) && (CeDMDR_e_EV !=
            ((uint32)tmpRead_0))) && (!rtb_TmpSignalConversionAtTmp_go)) ||
            (!KeDMIR_b_IgnoreRotation_DNA)) && rtb_Logical11_n);

        /* Outputs for Atomic SubSystem: '<S105>/EdgeRising1' */
        /* Logic: '<S121>/OR1' incorporates:
         *  UnitDelay: '<S121>/Unit Delay'
         */
        rtb_TmpSignalConversionAtTmp_go = !DMIR_ac_DW.UnitDelay_DSTATE_dq;

        /* Update for UnitDelay: '<S121>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_dq = rtb_TmpSignalConversionAtTmp_ie;

        /* End of Outputs for SubSystem: '<S105>/EdgeRising1' */

        /* Switch: '<S105>/Switch1' incorporates:
         *  Constant: '<S125>/Constant'
         *  Constant: '<S141>/Calib'
         *  Inport: '<Root>/VeDMDR_e_DrvMdInt'
         *  Logic: '<S105>/Logical4'
         *  RelationalOperator: '<S105>/Comparison3'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        if ((KeDMIR_b_IgnoreRotation_DNA) && (CeDMDR_e_Sport == ((uint32)
                tmpRead_0)))
        {
            /* Switch: '<S105>/Switch1' incorporates:
             *  Constant: '<S105>/FALSE Constant1'
             */
            rtb_Logical11_n = false;
        }
        else
        {
            /* Switch: '<S105>/Switch1' incorporates:
             *  Constant: '<S143>/Calib'
             *  RelationalOperator: '<S105>/Comparison4'
             */
            rtb_Logical11_n = (DMIR_ac_B.TonaleDNA_Dbnc.In1 ==
                               KeDMIR_i_DrvModeUpVal);
        }

        /* End of Switch: '<S105>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S105>/EdgeRising3' */
        /* Logic: '<S122>/AND' incorporates:
         *  Logic: '<S122>/OR1'
         *  UnitDelay: '<S122>/Unit Delay'
         */
        rtb_Logical5_fz = (rtb_Logical11_n && (!DMIR_ac_DW.UnitDelay_DSTATE_pl));

        /* Update for UnitDelay: '<S122>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_pl = rtb_Logical11_n;

        /* End of Outputs for SubSystem: '<S105>/EdgeRising3' */

        /* Outputs for Atomic SubSystem: '<S105>/Turn Off Delay Time1' */
        /* Outputs for Atomic SubSystem: '<S157>/EdgeFalling' */
        /* Logic: '<S170>/AND' incorporates:
         *  Logic: '<S170>/OR1'
         *  UnitDelay: '<S170>/Unit Delay'
         */
        rtb_NOT_l = ((!rtb_OR_h) && (DMIR_ac_DW.UnitDelay_DSTATE_l3));

        /* Update for UnitDelay: '<S170>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_l3 = rtb_OR_h;

        /* End of Outputs for SubSystem: '<S157>/EdgeFalling' */

        /* Switch: '<S157>/Switch' */
        if (rtb_NOT_l)
        {
            /* Switch: '<S157>/Switch' incorporates:
             *  Constant: '<S149>/Calib'
             */
            rtb_Switch1_md = KeDMIR_t_MaxHoldTimeSportDeactivation;
        }
        else
        {
            /* Switch: '<S157>/Switch' incorporates:
             *  Constant: '<S150>/Calib'
             *  Constant: '<S157>/Constant Value1'
             *  MinMax: '<S157>/Minimum'
             *  Sum: '<S157>/Summation'
             *  UnitDelay: '<S157>/Unit Delay'
             */
            rtb_Switch1_md = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE_g2 -
                                   KeDMIR_t_MedTED, 0.0F);
        }

        /* End of Switch: '<S157>/Switch' */

        /* Update for UnitDelay: '<S157>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_g2 = rtb_Switch1_md;

        /* End of Outputs for SubSystem: '<S105>/Turn Off Delay Time1' */

        /* Outputs for Atomic SubSystem: '<S105>/Turn Off Delay Time3' */
        /* Outputs for Atomic SubSystem: '<S159>/EdgeFalling' */
        /* Logic: '<S172>/AND' incorporates:
         *  Logic: '<S172>/OR1'
         *  UnitDelay: '<S172>/Unit Delay'
         */
        rtb_NOT_l = ((!rtb_Switch4_iq) && (DMIR_ac_DW.UnitDelay_DSTATE_hcw));

        /* Update for UnitDelay: '<S172>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_hcw = rtb_Switch4_iq;

        /* End of Outputs for SubSystem: '<S159>/EdgeFalling' */

        /* Switch: '<S159>/Switch' */
        if (rtb_NOT_l)
        {
            /* Switch: '<S159>/Switch' incorporates:
             *  Constant: '<S148>/Calib'
             */
            rtb_Switch_bw = KeDMIR_t_MaxHoldTimeSportActivation;
        }
        else
        {
            /* Switch: '<S159>/Switch' incorporates:
             *  Constant: '<S150>/Calib'
             *  Constant: '<S159>/Constant Value1'
             *  MinMax: '<S159>/Minimum'
             *  Sum: '<S159>/Summation'
             *  UnitDelay: '<S159>/Unit Delay'
             */
            rtb_Switch_bw = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE_fd -
                                  KeDMIR_t_MedTED, 0.0F);
        }

        /* End of Switch: '<S159>/Switch' */

        /* Update for UnitDelay: '<S159>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_fd = rtb_Switch_bw;

        /* End of Outputs for SubSystem: '<S105>/Turn Off Delay Time3' */

        /* Outputs for Atomic SubSystem: '<S105>/Turn Off Delay Time' */
        /* Outputs for Atomic SubSystem: '<S156>/EdgeFalling' */
        /* Logic: '<S169>/AND' incorporates:
         *  Logic: '<S169>/OR1'
         *  UnitDelay: '<S169>/Unit Delay'
         */
        rtb_NOT_l = ((!rtb_LogicalOperator) && (DMIR_ac_DW.UnitDelay_DSTATE_psb));

        /* Update for UnitDelay: '<S169>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_psb = rtb_LogicalOperator;

        /* End of Outputs for SubSystem: '<S156>/EdgeFalling' */

        /* Switch: '<S156>/Switch' */
        if (rtb_NOT_l)
        {
            /* Switch: '<S156>/Switch' incorporates:
             *  Constant: '<S146>/Calib'
             */
            rtb_Switch_ml = KeDMIR_t_MaxHoldTimeAfterBtnActv;
        }
        else
        {
            /* Switch: '<S156>/Switch' incorporates:
             *  Constant: '<S150>/Calib'
             *  Constant: '<S156>/Constant Value1'
             *  MinMax: '<S156>/Minimum'
             *  Sum: '<S156>/Summation'
             *  UnitDelay: '<S156>/Unit Delay'
             */
            rtb_Switch_ml = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE_by -
                                  KeDMIR_t_MedTED, 0.0F);
        }

        /* End of Switch: '<S156>/Switch' */

        /* Logic: '<S156>/AND' incorporates:
         *  Constant: '<S156>/Constant Value2'
         *  RelationalOperator: '<S156>/Greater  Than'
         */
        rtb_LogicalOperator = (rtb_LogicalOperator || (rtb_Switch_ml > 0.0F));

        /* Update for UnitDelay: '<S156>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_by = rtb_Switch_ml;

        /* End of Outputs for SubSystem: '<S105>/Turn Off Delay Time' */

        /* Selector: '<S105>/Selector4' incorporates:
         *  Constant: '<S138>/Calib'
         *  Inport: '<Root>/VeDMDR_e_DrvMdInt'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        rtb_TmpSignalConversionAtTmp_mv = KaDMIR_y_DrvMdArbMap[(tmpRead_0)];

        /* Outputs for Atomic SubSystem: '<S105>/Falling_Edge' */
        /* Logic: '<S134>/Logical5' incorporates:
         *  Constant: '<S164>/Calib'
         *  Constant: '<S165>/Calib'
         *  RelationalOperator: '<S134>/Comparison7'
         *  RelationalOperator: '<S134>/Comparison8'
         *  UnitDelay: '<S134>/Unit Delay'
         */
        rtb_NOT_l = ((DMIR_ac_B.DodgeSw_Dbnc.In1 ==
                      KeDMIR_i_eDriveModeSwitchNotPressed) &&
                     (DMIR_ac_DW.UnitDelay_DSTATE_fp ==
                      KeDMIR_i_eDriveModeSwitchPressed));

        /* Update for UnitDelay: '<S134>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_fp = DMIR_ac_B.DodgeSw_Dbnc.In1;

        /* End of Outputs for SubSystem: '<S105>/Falling_Edge' */

        /* Switch: '<S105>/Switch4' incorporates:
         *  Constant: '<S140>/Calib'
         */
        if (KeDMIR_b_EnableDodgeSwitch)
        {
            rtb_Logical5_fz = rtb_NOT_l;
        }

        /* End of Switch: '<S105>/Switch4' */

        /* Outputs for Enabled SubSystem: '<S105>/ModeUp' incorporates:
         *  EnablePort: '<S153>/Enable'
         */
        if (rtb_Logical5_fz)
        {
            /* Sum: '<S153>/Sum' incorporates:
             *  Constant: '<S153>/Constant Value1'
             */
            DMIR_ac_B.Sum = (uint8)(((uint32)rtb_TmpSignalConversionAtTmp_mv) +
                                    1U);
        }

        /* End of Outputs for SubSystem: '<S105>/ModeUp' */

        /* Outputs for Atomic SubSystem: '<S105>/Turn Off Delay Time2' */
        /* Outputs for Atomic SubSystem: '<S158>/EdgeFalling' */
        /* Logic: '<S171>/AND' incorporates:
         *  Logic: '<S171>/OR1'
         *  UnitDelay: '<S171>/Unit Delay'
         */
        rtb_Logical5_fz = ((!rtb_NOT_l) && (DMIR_ac_DW.UnitDelay_DSTATE_b4));

        /* Update for UnitDelay: '<S171>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_b4 = rtb_NOT_l;

        /* End of Outputs for SubSystem: '<S158>/EdgeFalling' */

        /* Switch: '<S158>/Switch' */
        if (rtb_Logical5_fz)
        {
            /* Switch: '<S158>/Switch' incorporates:
             *  Constant: '<S147>/Calib'
             */
            rtb_Switch_ml = KeDMIR_t_MaxHoldTimeAfterDriveSwActv;
        }
        else
        {
            /* Switch: '<S158>/Switch' incorporates:
             *  Constant: '<S150>/Calib'
             *  Constant: '<S158>/Constant Value1'
             *  MinMax: '<S158>/Minimum'
             *  Sum: '<S158>/Summation'
             *  UnitDelay: '<S158>/Unit Delay'
             */
            rtb_Switch_ml = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE_hy -
                                  KeDMIR_t_MedTED, 0.0F);
        }

        /* End of Switch: '<S158>/Switch' */

        /* Update for UnitDelay: '<S158>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_hy = rtb_Switch_ml;

        /* End of Outputs for SubSystem: '<S105>/Turn Off Delay Time2' */

        /* Outputs for Enabled SubSystem: '<S105>/ModeDown' incorporates:
         *  EnablePort: '<S152>/Enable'
         */
        /* Outputs for Atomic SubSystem: '<S105>/EdgeRising1' */
        if (rtb_TmpSignalConversionAtTmp_ie && rtb_TmpSignalConversionAtTmp_go)
        {
            /* Sum: '<S152>/Sum1' incorporates:
             *  Constant: '<S152>/Constant Value1'
             */
            DMIR_ac_B.Sum1 = (uint8)((sint32)(((sint32)
                rtb_TmpSignalConversionAtTmp_mv) - 1));
        }

        /* End of Outputs for SubSystem: '<S105>/EdgeRising1' */
        /* End of Outputs for SubSystem: '<S105>/ModeDown' */

        /* Outputs for Atomic SubSystem: '<S105>/Turn Off Delay Time1' */
        /* Switch: '<S137>/Switch1' incorporates:
         *  Constant: '<S126>/Constant'
         *  Constant: '<S132>/Constant'
         *  Constant: '<S139>/Calib'
         *  Constant: '<S140>/Calib'
         *  Constant: '<S157>/Constant Value2'
         *  Constant: '<S159>/Constant Value2'
         *  Inport: '<Root>/VeDMDR_e_DrvMdInt'
         *  Logic: '<S105>/Logical'
         *  Logic: '<S105>/Logical5'
         *  Logic: '<S105>/Logical6'
         *  Logic: '<S105>/Logical7'
         *  Logic: '<S121>/AND'
         *  Logic: '<S157>/AND'
         *  Logic: '<S159>/AND'
         *  RelationalOperator: '<S105>/Comparison5'
         *  RelationalOperator: '<S105>/Comparison7'
         *  RelationalOperator: '<S157>/Greater  Than'
         *  RelationalOperator: '<S159>/Greater  Than'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         *  Switch: '<S105>/Switch2'
         *  Switch: '<S135>/Switch1'
         *  Switch: '<S135>/Switch2'
         *  Switch: '<S137>/Switch2'
         */
        if (((CeDMDR_e_Sport == ((uint32)tmpRead_0)) && (rtb_OR_h ||
                (rtb_Switch1_md > 0.0F))) && (KeDMIR_b_EnableDodgeSportMode))
        {
            /* Switch: '<S137>/Switch1' */
            rtb_TmpSignalConversionAtTmp_mv = 1U;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S105>/Turn Off Delay Time3' */
            if ((rtb_Switch4_iq || (rtb_Switch_bw > 0.0F)) &&
                    (KeDMIR_b_EnableDodgeSportMode))
            {
                /* Switch: '<S137>/Switch1' incorporates:
                 *  Switch: '<S137>/Switch2'
                 */
                rtb_TmpSignalConversionAtTmp_mv = 4U;
            }
            else if ((CeDMDR_e_ESave == ((uint32)tmpRead_0)) &&
                     rtb_LogicalOperator)
            {
                /* Switch: '<S137>/Switch1' incorporates:
                 *  Switch: '<S135>/Switch1'
                 *  Switch: '<S137>/Switch2'
                 */
                rtb_TmpSignalConversionAtTmp_mv = 1U;
            }
            else if (rtb_LogicalOperator)
            {
                /* Switch: '<S137>/Switch1' incorporates:
                 *  Switch: '<S135>/Switch1'
                 *  Switch: '<S135>/Switch2'
                 *  Switch: '<S137>/Switch2'
                 */
                rtb_TmpSignalConversionAtTmp_mv = 3U;
            }
            else
            {
                if (KeDMIR_b_EnableDodgeSwitch)
                {
                    /* Outputs for Atomic SubSystem: '<S105>/Turn Off Delay Time2' */
                    /* Switch: '<S105>/Switch2' incorporates:
                     *  Constant: '<S158>/Constant Value2'
                     *  Logic: '<S158>/AND'
                     *  RelationalOperator: '<S158>/Greater  Than'
                     *  Switch: '<S135>/Switch1'
                     *  Switch: '<S135>/Switch2'
                     *  Switch: '<S137>/Switch2'
                     */
                    rtb_Logical11_n = (rtb_NOT_l || (rtb_Switch_ml > 0.0F));

                    /* End of Outputs for SubSystem: '<S105>/Turn Off Delay Time2' */
                }

                /* Switch: '<S136>/Switch1' incorporates:
                 *  Switch: '<S135>/Switch1'
                 *  Switch: '<S135>/Switch2'
                 *  Switch: '<S136>/Switch2'
                 *  Switch: '<S137>/Switch2'
                 */
                if (rtb_Logical11_n)
                {
                    /* Switch: '<S137>/Switch1' incorporates:
                     *  Switch: '<S136>/Switch1'
                     */
                    rtb_TmpSignalConversionAtTmp_mv = DMIR_ac_B.Sum;
                }
                else if (rtb_TmpSignalConversionAtTmp_ie)
                {
                    /* Switch: '<S136>/Switch2' incorporates:
                     *  Switch: '<S136>/Switch1'
                     *  Switch: '<S137>/Switch1'
                     */
                    rtb_TmpSignalConversionAtTmp_mv = DMIR_ac_B.Sum1;
                }
                else
                {
                    /* Switch: '<S137>/Switch1' incorporates:
                     *  Switch: '<S136>/Switch1'
                     *  Switch: '<S136>/Switch2'
                     */
                    rtb_TmpSignalConversionAtTmp_mv = (uint8)tmpRead_0;
                }

                /* End of Switch: '<S136>/Switch1' */
            }

            /* End of Outputs for SubSystem: '<S105>/Turn Off Delay Time3' */
        }

        /* End of Switch: '<S137>/Switch1' */
        /* End of Outputs for SubSystem: '<S105>/Turn Off Delay Time1' */

        /* Outputs for Atomic SubSystem: '<S105>/Limiter' */
        /* Switch: '<S151>/Switch1' incorporates:
         *  Constant: '<S105>/Constant Value1'
         *  RelationalOperator: '<S151>/Relational Operator'
         */
        if (4 < ((sint32)rtb_TmpSignalConversionAtTmp_mv))
        {
            /* Switch: '<S151>/Switch1' */
            rtb_TmpSignalConversionAtTmp_mv = 4U;
        }

        /* End of Switch: '<S151>/Switch1' */

        /* Switch: '<S151>/Switch' incorporates:
         *  Constant: '<S105>/Constant Value2'
         *  RelationalOperator: '<S151>/Relational Operator1'
         */
        if (((sint32)rtb_TmpSignalConversionAtTmp_mv) > 1)
        {
            /* Merge: '<S59>/Merge' incorporates:
             *  DataTypeConversion: '<S123>/DataTypeConversion'
             */
            DMIR_ac_B.Merge_b = (TeDMDR_e_DrvMd)rtb_TmpSignalConversionAtTmp_mv;
        }
        else
        {
            /* Merge: '<S59>/Merge' incorporates:
             *  DataTypeConversion: '<S123>/DataTypeConversion'
             */
            DMIR_ac_B.Merge_b = 1U;
        }

        /* End of Switch: '<S151>/Switch' */
        /* End of Outputs for SubSystem: '<S105>/Limiter' */
        /* End of Outputs for SubSystem: '<S59>/RotaryDrvMdSwitch' */
    }
    else
    {
        if (KeDMIR_i_DrvMdSwtchTyp == 2)
        {
            /* Outputs for IfAction SubSystem: '<S59>/SwitchBank1' incorporates:
             *  ActionPort: '<S106>/Action Port'
             */
            /* Logic: '<S186>/Logical2' incorporates:
             *  Logic: '<S186>/Logical'
             *  Logic: '<S186>/Logical1'
             *  Logic: '<S186>/Logical3'
             */
            VeDMIC_b_MultBtnActv = (((rtb_AND_ks && rtb_RelationalOperator2) ||
                (rtb_AND_ks && rtb_RelationalOperator3)) ||
                                    (rtb_RelationalOperator2 &&
                rtb_RelationalOperator3));

            /* Outputs for Atomic SubSystem: '<S186>/Turn Off Delay Time' */
            /* Outputs for Atomic SubSystem: '<S201>/EdgeFalling' */
            /* UnitDelay: '<S197>/Unit Delay' incorporates:
             *  UnitDelay: '<S202>/Unit Delay'
             */
            rtb_OR_h = DMIR_ac_DW.UnitDelay_DSTATE_hq;

            /* Update for UnitDelay: '<S202>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_hq = VeDMIC_b_MultBtnActv;

            /* Switch: '<S201>/Switch' incorporates:
             *  Logic: '<S202>/AND'
             *  Logic: '<S202>/OR1'
             */
            if ((!VeDMIC_b_MultBtnActv) && rtb_OR_h)
            {
                /* Switch: '<S201>/Switch' incorporates:
                 *  Constant: '<S199>/Calib'
                 */
                rtb_Switch1_md = KeDMIR_t_HoldAfterMultBtnActv;
            }
            else
            {
                /* Switch: '<S201>/Switch' incorporates:
                 *  Constant: '<S200>/Calib'
                 *  Constant: '<S201>/Constant Value1'
                 *  MinMax: '<S201>/Minimum'
                 *  Sum: '<S201>/Summation'
                 *  UnitDelay: '<S201>/Unit Delay'
                 */
                rtb_Switch1_md = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE_k -
                                       KeDMIR_t_MedTED, 0.0F);
            }

            /* End of Switch: '<S201>/Switch' */
            /* End of Outputs for SubSystem: '<S201>/EdgeFalling' */

            /* Update for UnitDelay: '<S201>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_k = rtb_Switch1_md;

            /* End of Outputs for SubSystem: '<S186>/Turn Off Delay Time' */

            /* Outputs for Atomic SubSystem: '<S183>/EdgeFalling4' */
            /* UnitDelay: '<S197>/Unit Delay' incorporates:
             *  UnitDelay: '<S192>/Unit Delay'
             */
            rtb_OR_h = DMIR_ac_DW.UnitDelay_DSTATE_du;

            /* Update for UnitDelay: '<S192>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_du = rtb_AND_ks;

            /* Logic: '<S183>/Logical4' incorporates:
             *  Logic: '<S192>/AND'
             *  UnitDelay: '<S183>/Unit Delay4'
             */
            rtb_TmpSignalConversionAtTmp_ie = ((tmp_4 && rtb_OR_h) &&
                (DMIR_ac_DW.UnitDelay4_DSTATE));

            /* End of Outputs for SubSystem: '<S183>/EdgeFalling4' */

            /* Outputs for Atomic SubSystem: '<S106>/Turn Off Delay Time' */
            /* Outputs for Atomic SubSystem: '<S187>/EdgeFalling' */
            /* Logic: '<S203>/AND' incorporates:
             *  Logic: '<S203>/OR1'
             *  UnitDelay: '<S203>/Unit Delay'
             */
            rtb_TmpSignalConversionAtTmp_go = ((!rtb_TmpSignalConversionAtTmp_ie)
                && (DMIR_ac_DW.UnitDelay_DSTATE_kf));

            /* Update for UnitDelay: '<S203>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_kf = rtb_TmpSignalConversionAtTmp_ie;

            /* End of Outputs for SubSystem: '<S187>/EdgeFalling' */

            /* Switch: '<S187>/Switch' */
            if (rtb_TmpSignalConversionAtTmp_go)
            {
                /* Switch: '<S187>/Switch' incorporates:
                 *  Constant: '<S180>/Calib'
                 */
                rtb_Switch_bw = KeDMIR_t_MaxHoldTimeAfterBtnActv;
            }
            else
            {
                /* Switch: '<S187>/Switch' incorporates:
                 *  Constant: '<S181>/Calib'
                 *  Constant: '<S187>/Constant Value1'
                 *  MinMax: '<S187>/Minimum'
                 *  Sum: '<S187>/Summation'
                 *  UnitDelay: '<S187>/Unit Delay'
                 */
                rtb_Switch_bw = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE_n -
                                      KeDMIR_t_MedTED, 0.0F);
            }

            /* End of Switch: '<S187>/Switch' */

            /* Update for UnitDelay: '<S187>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_n = rtb_Switch_bw;

            /* End of Outputs for SubSystem: '<S106>/Turn Off Delay Time' */

            /* Outputs for Atomic SubSystem: '<S184>/EdgeFalling4' */
            /* UnitDelay: '<S197>/Unit Delay' incorporates:
             *  UnitDelay: '<S195>/Unit Delay'
             */
            rtb_OR_h = DMIR_ac_DW.UnitDelay_DSTATE_ki;

            /* Update for UnitDelay: '<S195>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_ki = rtb_RelationalOperator2;

            /* Logic: '<S184>/Logical4' incorporates:
             *  Logic: '<S195>/AND'
             *  UnitDelay: '<S184>/Unit Delay4'
             */
            rtb_TmpSignalConversionAtTmp_go = ((tmp && rtb_OR_h) &&
                (DMIR_ac_DW.UnitDelay4_DSTATE_k));

            /* End of Outputs for SubSystem: '<S184>/EdgeFalling4' */

            /* Outputs for Atomic SubSystem: '<S106>/Turn Off Delay Time1' */
            /* Outputs for Atomic SubSystem: '<S188>/EdgeFalling' */
            /* Logic: '<S204>/AND' incorporates:
             *  Logic: '<S204>/OR1'
             *  UnitDelay: '<S204>/Unit Delay'
             */
            rtb_OR_h = ((!rtb_TmpSignalConversionAtTmp_go) &&
                        (DMIR_ac_DW.UnitDelay_DSTATE_h3));

            /* Update for UnitDelay: '<S204>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_h3 = rtb_TmpSignalConversionAtTmp_go;

            /* End of Outputs for SubSystem: '<S188>/EdgeFalling' */

            /* Switch: '<S188>/Switch' */
            if (rtb_OR_h)
            {
                /* Switch: '<S188>/Switch' incorporates:
                 *  Constant: '<S180>/Calib'
                 */
                rtb_Switch_ml = KeDMIR_t_MaxHoldTimeAfterBtnActv;
            }
            else
            {
                /* Switch: '<S188>/Switch' incorporates:
                 *  Constant: '<S181>/Calib'
                 *  Constant: '<S188>/Constant Value1'
                 *  MinMax: '<S188>/Minimum'
                 *  Sum: '<S188>/Summation'
                 *  UnitDelay: '<S188>/Unit Delay'
                 */
                rtb_Switch_ml = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE_g -
                                      KeDMIR_t_MedTED, 0.0F);
            }

            /* End of Switch: '<S188>/Switch' */

            /* Update for UnitDelay: '<S188>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_g = rtb_Switch_ml;

            /* End of Outputs for SubSystem: '<S106>/Turn Off Delay Time1' */

            /* Outputs for Atomic SubSystem: '<S185>/EdgeFalling4' */
            /* UnitDelay: '<S197>/Unit Delay' incorporates:
             *  UnitDelay: '<S198>/Unit Delay'
             */
            rtb_OR_h = DMIR_ac_DW.UnitDelay_DSTATE_ib;

            /* Update for UnitDelay: '<S198>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_ib = rtb_RelationalOperator3;

            /* Logic: '<S185>/Logical4' incorporates:
             *  Logic: '<S198>/AND'
             *  UnitDelay: '<S185>/Unit Delay4'
             */
            rtb_OR_h = ((rtb_Logical2_ej && rtb_OR_h) &&
                        (DMIR_ac_DW.UnitDelay4_DSTATE_m));

            /* End of Outputs for SubSystem: '<S185>/EdgeFalling4' */

            /* Outputs for Atomic SubSystem: '<S106>/Turn Off Delay Time2' */
            /* Outputs for Atomic SubSystem: '<S189>/EdgeFalling' */
            /* Logic: '<S205>/AND' incorporates:
             *  Logic: '<S205>/OR1'
             *  UnitDelay: '<S205>/Unit Delay'
             */
            rtb_Switch4_iq = ((!rtb_OR_h) && (DMIR_ac_DW.UnitDelay_DSTATE_mv));

            /* Update for UnitDelay: '<S205>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_mv = rtb_OR_h;

            /* End of Outputs for SubSystem: '<S189>/EdgeFalling' */

            /* Switch: '<S189>/Switch' */
            if (rtb_Switch4_iq)
            {
                /* Switch: '<S189>/Switch' incorporates:
                 *  Constant: '<S180>/Calib'
                 */
                rtb_Switch_l2 = KeDMIR_t_MaxHoldTimeAfterBtnActv;
            }
            else
            {
                /* Switch: '<S189>/Switch' incorporates:
                 *  Constant: '<S181>/Calib'
                 *  Constant: '<S189>/Constant Value1'
                 *  MinMax: '<S189>/Minimum'
                 *  Sum: '<S189>/Summation'
                 *  UnitDelay: '<S189>/Unit Delay'
                 */
                rtb_Switch_l2 = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE_ot -
                                      KeDMIR_t_MedTED, 0.0F);
            }

            /* End of Switch: '<S189>/Switch' */

            /* Update for UnitDelay: '<S189>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_ot = rtb_Switch_l2;

            /* End of Outputs for SubSystem: '<S106>/Turn Off Delay Time2' */

            /* Outputs for Atomic SubSystem: '<S106>/Turn Off Delay Time' */
            /* Switch: '<S106>/Switch1' incorporates:
             *  Constant: '<S187>/Constant Value2'
             *  Constant: '<S188>/Constant Value2'
             *  Constant: '<S189>/Constant Value2'
             *  Logic: '<S187>/AND'
             *  Logic: '<S188>/AND'
             *  Logic: '<S189>/AND'
             *  RelationalOperator: '<S187>/Greater  Than'
             *  RelationalOperator: '<S188>/Greater  Than'
             *  RelationalOperator: '<S189>/Greater  Than'
             *  Switch: '<S106>/Switch2'
             *  Switch: '<S106>/Switch3'
             */
            if (rtb_TmpSignalConversionAtTmp_ie || (rtb_Switch_bw > 0.0F))
            {
                /* Switch: '<S106>/Switch1' incorporates:
                 *  Constant: '<S177>/Constant'
                 */
                VeDMIC_e_DrvMdBtnRaw = CeDMDR_e_EV;
            }
            else
            {
                /* Outputs for Atomic SubSystem: '<S106>/Turn Off Delay Time1' */
                if (rtb_TmpSignalConversionAtTmp_go || (rtb_Switch_ml > 0.0F))
                {
                    /* Switch: '<S106>/Switch2' incorporates:
                     *  Constant: '<S176>/Constant'
                     *  Switch: '<S106>/Switch1'
                     */
                    VeDMIC_e_DrvMdBtnRaw = CeDMDR_e_ESave;
                }
                else
                {
                    /* Outputs for Atomic SubSystem: '<S106>/Turn Off Delay Time2' */
                    if (rtb_OR_h || (rtb_Switch_l2 > 0.0F))
                    {
                        /* Switch: '<S106>/Switch3' incorporates:
                         *  Constant: '<S175>/Constant'
                         *  Switch: '<S106>/Switch1'
                         *  Switch: '<S106>/Switch2'
                         */
                        VeDMIC_e_DrvMdBtnRaw = CeDMDR_e_Camel_Mode;
                    }
                    else
                    {
                        /* Switch: '<S106>/Switch1' incorporates:
                         *  Inport: '<Root>/VeDMDR_e_DrvMdInt'
                         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
                         *  Switch: '<S106>/Switch2'
                         */
                        VeDMIC_e_DrvMdBtnRaw = tmpRead_0;
                    }

                    /* End of Outputs for SubSystem: '<S106>/Turn Off Delay Time2' */
                }

                /* End of Outputs for SubSystem: '<S106>/Turn Off Delay Time1' */
            }

            /* End of Switch: '<S106>/Switch1' */
            /* End of Outputs for SubSystem: '<S106>/Turn Off Delay Time' */

            /* Outputs for Atomic SubSystem: '<S186>/Turn Off Delay Time' */
            /* Switch: '<S106>/Switch4' incorporates:
             *  Constant: '<S201>/Constant Value2'
             *  Logic: '<S201>/AND'
             *  RelationalOperator: '<S201>/Greater  Than'
             */
            if ((VeDMIC_b_MultBtnActv) || (rtb_Switch1_md > 0.0F))
            {
                /* DataTypeConversion: '<S106>/Data Type Conversion1' incorporates:
                 *  Inport: '<Root>/VeDMDR_e_DrvMdInt'
                 *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
                 */
                rtb_TmpSignalConversionAtTmp_mv = (uint8)tmpRead_0;
            }
            else
            {
                /* DataTypeConversion: '<S106>/Data Type Conversion1' incorporates:
                 *  Switch: '<S106>/Switch1'
                 */
                rtb_TmpSignalConversionAtTmp_mv = (uint8)VeDMIC_e_DrvMdBtnRaw;
            }

            /* End of Switch: '<S106>/Switch4' */
            /* End of Outputs for SubSystem: '<S186>/Turn Off Delay Time' */

            /* Outputs for Atomic SubSystem: '<S106>/Limiter' */
            /* Switch: '<S182>/Switch1' incorporates:
             *  Constant: '<S106>/Constant Value1'
             *  RelationalOperator: '<S182>/Relational Operator'
             */
            if (9 < ((sint32)rtb_TmpSignalConversionAtTmp_mv))
            {
                /* Switch: '<S182>/Switch1' */
                rtb_TmpSignalConversionAtTmp_mv = 9U;
            }

            /* End of Switch: '<S182>/Switch1' */

            /* Switch: '<S182>/Switch' incorporates:
             *  Constant: '<S178>/Calib'
             *  RelationalOperator: '<S182>/Relational Operator1'
             */
            if (rtb_TmpSignalConversionAtTmp_mv > KeDMIR_i_SwBnkLwrthreshold)
            {
                /* Merge: '<S59>/Merge' incorporates:
                 *  DataTypeConversion: '<S174>/DataTypeConversion'
                 */
                DMIR_ac_B.Merge_b = (TeDMDR_e_DrvMd)
                    rtb_TmpSignalConversionAtTmp_mv;
            }
            else
            {
                /* Merge: '<S59>/Merge' incorporates:
                 *  DataTypeConversion: '<S174>/DataTypeConversion'
                 */
                DMIR_ac_B.Merge_b = (TeDMDR_e_DrvMd)KeDMIR_i_SwBnkLwrthreshold;
            }

            /* End of Switch: '<S182>/Switch' */
            /* End of Outputs for SubSystem: '<S106>/Limiter' */

            /* Outputs for Atomic SubSystem: '<S183>/EdgeFalling3' */
            /* UnitDelay: '<S197>/Unit Delay' incorporates:
             *  UnitDelay: '<S191>/Unit Delay'
             */
            rtb_OR_h = DMIR_ac_DW.UnitDelay_DSTATE_p5;

            /* Update for UnitDelay: '<S191>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_p5 = rtb_AND_ks;

            /* Outputs for Atomic SubSystem: '<S183>/Counter Reset  Enabled ' */
            /* Switch: '<S190>/Switch' incorporates:
             *  Logic: '<S183>/Logical2'
             *  Logic: '<S191>/AND'
             *  Switch: '<S190>/Switch2'
             *  UnitDelay: '<S183>/Unit Delay4'
             */
            if (tmp_4 && rtb_OR_h)
            {
                /* Switch: '<S190>/Switch' incorporates:
                 *  Constant: '<S190>/Constant Value2'
                 */
                rtb_Switch1_mn = 0U;
            }
            else if ((DMIR_ac_DW.UnitDelay4_DSTATE) && rtb_AND_ks)
            {
                /* Switch: '<S190>/Switch2' incorporates:
                 *  Constant: '<S190>/Constant Value1'
                 *  Sum: '<S190>/Subtraction'
                 *  Switch: '<S190>/Switch'
                 *  UnitDelay: '<S190>/Unit Delay'
                 */
                rtb_Switch1_mn = (uint16)(((uint32)
                    DMIR_ac_DW.UnitDelay_DSTATE_lg) + 1U);
            }
            else
            {
                /* Switch: '<S190>/Switch' incorporates:
                 *  Switch: '<S190>/Switch2'
                 *  UnitDelay: '<S190>/Unit Delay'
                 */
                rtb_Switch1_mn = DMIR_ac_DW.UnitDelay_DSTATE_lg;
            }

            /* End of Switch: '<S190>/Switch' */
            /* End of Outputs for SubSystem: '<S183>/EdgeFalling3' */

            /* Update for UnitDelay: '<S190>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_lg = rtb_Switch1_mn;

            /* End of Outputs for SubSystem: '<S183>/Counter Reset  Enabled ' */

            /* Outputs for Atomic SubSystem: '<S184>/EdgeFalling3' */
            /* UnitDelay: '<S197>/Unit Delay' incorporates:
             *  UnitDelay: '<S194>/Unit Delay'
             */
            rtb_OR_h = DMIR_ac_DW.UnitDelay_DSTATE_psn;

            /* Update for UnitDelay: '<S194>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_psn = rtb_RelationalOperator2;

            /* Outputs for Atomic SubSystem: '<S184>/Counter Reset  Enabled ' */
            /* Switch: '<S193>/Switch' incorporates:
             *  Logic: '<S184>/Logical2'
             *  Logic: '<S194>/AND'
             *  Switch: '<S193>/Switch2'
             *  UnitDelay: '<S184>/Unit Delay4'
             */
            if (tmp && rtb_OR_h)
            {
                /* Switch: '<S193>/Switch' incorporates:
                 *  Constant: '<S193>/Constant Value2'
                 */
                rtb_DataTypeConversion2 = 0U;
            }
            else if ((DMIR_ac_DW.UnitDelay4_DSTATE_k) && rtb_RelationalOperator2)
            {
                /* Switch: '<S193>/Switch2' incorporates:
                 *  Constant: '<S193>/Constant Value1'
                 *  Sum: '<S193>/Subtraction'
                 *  Switch: '<S193>/Switch'
                 *  UnitDelay: '<S193>/Unit Delay'
                 */
                rtb_DataTypeConversion2 = (uint16)(((uint32)
                    DMIR_ac_DW.UnitDelay_DSTATE_k5) + 1U);
            }
            else
            {
                /* Switch: '<S193>/Switch' incorporates:
                 *  Switch: '<S193>/Switch2'
                 *  UnitDelay: '<S193>/Unit Delay'
                 */
                rtb_DataTypeConversion2 = DMIR_ac_DW.UnitDelay_DSTATE_k5;
            }

            /* End of Switch: '<S193>/Switch' */
            /* End of Outputs for SubSystem: '<S184>/EdgeFalling3' */

            /* Update for UnitDelay: '<S193>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_k5 = rtb_DataTypeConversion2;

            /* End of Outputs for SubSystem: '<S184>/Counter Reset  Enabled ' */

            /* Outputs for Atomic SubSystem: '<S185>/EdgeFalling3' */
            /* UnitDelay: '<S197>/Unit Delay' */
            rtb_OR_h = DMIR_ac_DW.UnitDelay_DSTATE_ia;

            /* Update for UnitDelay: '<S197>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_ia = rtb_RelationalOperator3;

            /* Outputs for Atomic SubSystem: '<S185>/Counter Reset  Enabled ' */
            /* Switch: '<S196>/Switch' incorporates:
             *  Logic: '<S185>/Logical2'
             *  Logic: '<S197>/AND'
             *  Switch: '<S196>/Switch2'
             *  UnitDelay: '<S185>/Unit Delay4'
             */
            if (rtb_Logical2_ej && rtb_OR_h)
            {
                /* Switch: '<S196>/Switch' incorporates:
                 *  Constant: '<S196>/Constant Value2'
                 */
                rtb_Switch_m1 = 0U;
            }
            else if ((DMIR_ac_DW.UnitDelay4_DSTATE_m) && rtb_RelationalOperator3)
            {
                /* Switch: '<S196>/Switch2' incorporates:
                 *  Constant: '<S196>/Constant Value1'
                 *  Sum: '<S196>/Subtraction'
                 *  Switch: '<S196>/Switch'
                 *  UnitDelay: '<S196>/Unit Delay'
                 */
                rtb_Switch_m1 = (uint16)(((uint32)DMIR_ac_DW.UnitDelay_DSTATE_p)
                    + 1U);
            }
            else
            {
                /* Switch: '<S196>/Switch' incorporates:
                 *  Switch: '<S196>/Switch2'
                 *  UnitDelay: '<S196>/Unit Delay'
                 */
                rtb_Switch_m1 = DMIR_ac_DW.UnitDelay_DSTATE_p;
            }

            /* End of Switch: '<S196>/Switch' */
            /* End of Outputs for SubSystem: '<S185>/EdgeFalling3' */

            /* Update for UnitDelay: '<S196>/Unit Delay' */
            DMIR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch_m1;

            /* End of Outputs for SubSystem: '<S185>/Counter Reset  Enabled ' */

            /* Product: '<S183>/Divide' incorporates:
             *  Constant: '<S179>/Calib'
             *  Constant: '<S181>/Calib'
             *  Product: '<S184>/Divide'
             *  Product: '<S185>/Divide'
             */
            rtb_Switch1_md = KeDMIR_t_ButtonMaxPressTime / KeDMIR_t_MedTED;

            /* Update for UnitDelay: '<S183>/Unit Delay4' incorporates:
             *  Product: '<S183>/Divide'
             *  RelationalOperator: '<S183>/Less Than'
             */
            DMIR_ac_DW.UnitDelay4_DSTATE = (((float32)rtb_Switch1_mn) <=
                rtb_Switch1_md);

            /* Update for UnitDelay: '<S184>/Unit Delay4' incorporates:
             *  RelationalOperator: '<S184>/Less Than'
             */
            DMIR_ac_DW.UnitDelay4_DSTATE_k = (((float32)rtb_DataTypeConversion2)
                <= rtb_Switch1_md);

            /* Update for UnitDelay: '<S185>/Unit Delay4' incorporates:
             *  RelationalOperator: '<S185>/Less Than'
             */
            DMIR_ac_DW.UnitDelay4_DSTATE_m = (((float32)rtb_Switch_m1) <=
                rtb_Switch1_md);

            /* End of Outputs for SubSystem: '<S59>/SwitchBank1' */
        }
    }

    /* DataTypeConversion: '<S86>/DataTypeConversion' incorporates:
     *  DataStoreRead: '<S59>/Data Store Read5'
     *  DataTypeConversion: '<S84>/DataTypeConversion'
     *  DataTypeConversion: '<S85>/DataTypeConversion'
     */
    tmpRead_0 = (TeDMDR_e_DrvMd)DMIR_ac_DW.NeDMIR_e_DrvMdArb;

    /* Logic: '<S59>/Logical11' incorporates:
     *  Constant: '<S90>/Constant'
     *  Constant: '<S93>/Calib'
     *  DataTypeConversion: '<S86>/DataTypeConversion'
     *  Logic: '<S59>/Logical10'
     *  RelationalOperator: '<S59>/Comparison8'
     */
    rtb_Logical11_n = (((((uint32)tmpRead_0) == CeDMDR_e_ESave) &&
                        (HeDMIR_b_HoldESaveMode)) && rtb_OR1_nv);

    /* Logic: '<S59>/Logical12' incorporates:
     *  Constant: '<S87>/Constant'
     *  Constant: '<S92>/Calib'
     *  Logic: '<S59>/Logical8'
     *  RelationalOperator: '<S59>/Comparison6'
     */
    rtb_OR1_nv = (((((uint32)tmpRead_0) == CeDMDR_e_Camel_Mode) &&
                   (HeDMIR_b_HoldECOMode)) && rtb_OR1_nv);

    /* Logic: '<S59>/Logical13' incorporates:
     *  Constant: '<S89>/Constant'
     *  Constant: '<S91>/Calib'
     *  Logic: '<S59>/Logical9'
     *  RelationalOperator: '<S59>/Comparison7'
     */
    rtb_LogicalOperator = (((((uint32)tmpRead_0) == CeDMDR_e_EV) &&
                            (HeDMIR_b_EnaEVMdLatch)) && rtb_OR1_lw);

    /* Switch: '<S59>/Switch1' incorporates:
     *  Constant: '<S88>/Constant'
     *  Constant: '<S99>/Calib'
     *  Inport: '<Root>/VeVTXR_e_PowerPanelMd'
     *  Logic: '<S59>/Logical2'
     *  Logic: '<S59>/Logical3'
     *  RelationalOperator: '<S59>/Relational Operator'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    if (tmpRead_1 && ((((uint32)tmpRead_r) == CeVTXR_e_DefaultMd) ||
                      (KeDMIR_b_PowerPanelDsbld)))
    {
        /* Switch: '<S59>/Switch3' incorporates:
         *  Constant: '<S98>/Calib'
         *  Switch: '<S59>/Switch4'
         */
        if (rtb_OR1_lw)
        {
            /* If: '<S59>/If1' */
            if (rtb_Logical11_n)
            {
                /* Outputs for IfAction SubSystem: '<S59>/If Action Subsystem' incorporates:
                 *  ActionPort: '<S94>/Action Port'
                 */
                /* Switch: '<S59>/Switch1' incorporates:
                 *  Constant: '<S109>/Constant'
                 *  SignalConversion generated from: '<S94>/Out1'
                 *  Switch: '<S59>/Switch3'
                 */
                VeDMIC_e_DrvMdRaw = CeDMDR_e_ESave;

                /* End of Outputs for SubSystem: '<S59>/If Action Subsystem' */
            }
            else if (rtb_OR1_nv)
            {
                /* Outputs for IfAction SubSystem: '<S59>/If Action Subsystem1' incorporates:
                 *  ActionPort: '<S95>/Action Port'
                 */
                /* Switch: '<S59>/Switch1' incorporates:
                 *  Constant: '<S110>/Constant'
                 *  SignalConversion generated from: '<S95>/Out1'
                 *  Switch: '<S59>/Switch3'
                 */
                VeDMIC_e_DrvMdRaw = CeDMDR_e_Camel_Mode;

                /* End of Outputs for SubSystem: '<S59>/If Action Subsystem1' */
            }
            else if (rtb_LogicalOperator)
            {
                /* Outputs for IfAction SubSystem: '<S59>/If Action Subsystem2' incorporates:
                 *  ActionPort: '<S96>/Action Port'
                 */
                /* Switch: '<S59>/Switch1' incorporates:
                 *  Constant: '<S111>/Constant'
                 *  SignalConversion generated from: '<S96>/Out1'
                 *  Switch: '<S59>/Switch3'
                 */
                VeDMIC_e_DrvMdRaw = CeDMDR_e_EV;

                /* End of Outputs for SubSystem: '<S59>/If Action Subsystem2' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S59>/If Action Subsystem3' incorporates:
                 *  ActionPort: '<S97>/Action Port'
                 */
                /* Switch: '<S59>/Switch1' incorporates:
                 *  Constant: '<S112>/Calib'
                 *  SignalConversion generated from: '<S97>/Out1'
                 *  Switch: '<S59>/Switch3'
                 */
                VeDMIC_e_DrvMdRaw = KeDMIR_e_InitDrvMd;

                /* End of Outputs for SubSystem: '<S59>/If Action Subsystem3' */
            }

            /* End of If: '<S59>/If1' */
        }
        else if (KeDMIR_b_EnaDrvMdOvrrd)
        {
            /* Switch: '<S59>/Switch4' incorporates:
             *  Constant: '<S101>/Calib'
             *  Switch: '<S59>/Switch1'
             *  Switch: '<S59>/Switch3'
             */
            VeDMIC_e_DrvMdRaw = KeDMIR_e_DrvMdOvrrd;
        }
        else
        {
            /* Switch: '<S59>/Switch1' incorporates:
             *  Merge: '<S59>/Merge'
             *  Switch: '<S59>/Switch3'
             *  Switch: '<S59>/Switch4'
             */
            VeDMIC_e_DrvMdRaw = DMIR_ac_B.Merge_b;
        }

        /* End of Switch: '<S59>/Switch3' */
    }
    else
    {
        /* Switch: '<S59>/Switch1' incorporates:
         *  Constant: '<S100>/Calib'
         */
        VeDMIC_e_DrvMdRaw = KeDMIR_e_DrvMdNoDrvMd;
    }

    /* End of Switch: '<S59>/Switch1' */

    /* Switch: '<S68>/Switch' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    if (tmpRead_1)
    {
        /* Switch: '<S256>/Switch1' incorporates:
         *  Logic: '<S68>/Logical Operator'
         *  Logic: '<S68>/Logical Operator1'
         *  Merge: '<Root>/Merge_19'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         *  Switch: '<S256>/Switch2'
         */
        if ((Rte_IrvRead_DMIR_MedTED1_SailOff_Request_write_IRV()) &&
                (!rtb_Switch3_c))
        {
            /* Switch: '<S68>/Switch' incorporates:
             *  Constant: '<S254>/Constant'
             *  Switch: '<S256>/Switch1'
             */
            VeDMIC_e_SailOffStatus = CeDMDR_e_Active;
        }
        else if (rtb_Switch3_c)
        {
            /* Switch: '<S256>/Switch2' incorporates:
             *  Constant: '<S253>/Constant'
             *  Switch: '<S256>/Switch1'
             *  Switch: '<S68>/Switch'
             */
            VeDMIC_e_SailOffStatus = CeDMDR_e_ActiveTip;
        }
        else
        {
            /* Switch: '<S68>/Switch' incorporates:
             *  Constant: '<S255>/Constant'
             *  Switch: '<S256>/Switch1'
             *  Switch: '<S256>/Switch2'
             */
            VeDMIC_e_SailOffStatus = CeDMDR_e_NotActive;
        }

        /* End of Switch: '<S256>/Switch1' */
    }
    else
    {
        /* Switch: '<S68>/Switch' incorporates:
         *  Constant: '<S255>/Constant'
         */
        VeDMIC_e_SailOffStatus = CeDMDR_e_NotActive;
    }

    /* End of Switch: '<S68>/Switch' */

    /* SignalConversion generated from: '<S54>/Variant Source1' */
#if Rte_SysCon_Variant_DMIR_3

    /* VariantMerge generated from: '<S54>/Variant Source1' */
    rtb_VariantMerge_For_Variant__e = DMIR_ac_B.LeDMIR_e_TellTaleSts;

#else

    /* VariantMerge generated from: '<S54>/Variant Source1' incorporates:
     *  Constant: '<S277>/Constant'
     *  SignalConversion generated from: '<S54>/Variant Source1'
     */
    rtb_VariantMerge_For_Variant__e = CeDMIR_e_NA;

#endif

    /* End of SignalConversion generated from: '<S54>/Variant Source1' */

    /* SignalConversion generated from: '<S54>/Variant Source1' incorporates:
     *  VariantMerge generated from: '<S54>/Variant Source1'
     */
    VeDMIC_e_TellTaleSts = rtb_VariantMerge_For_Variant__e;

    /* SignalConversion generated from: '<S54>/Variant Source2' */
#if Rte_SysCon_Variant_DMIR_3

    /* Switch: '<S54>/Switch1' */
    DMIR_ac_B.Switch1_ig = DMIR_ac_B.LeDMIR_e_PopUpRqst;

#else

    /* Switch: '<S54>/Switch1' incorporates:
     *  Constant: '<S278>/Constant'
     *  SignalConversion generated from: '<S54>/Variant Source2'
     */
    DMIR_ac_B.Switch1_ig = CeDMIR_e_NA;

#endif

    /* End of SignalConversion generated from: '<S54>/Variant Source2' */

    /* SignalConversion generated from: '<S54>/Variant Source2' incorporates:
     *  Switch: '<S54>/Switch1'
     */
    VeDMIC_e_eCoast_PopUpRqst = DMIR_ac_B.Switch1_ig;

    /* SignalConversion generated from: '<S54>/Variant Source3' */
#if Rte_SysCon_Variant_DMIR_3

    /* VariantMerge generated from: '<S54>/Variant Source3' */
    DMIR_ac_B.VariantMerge_For_Variant_Sour_p = DMIR_ac_B.LeDMIR_e_eCoastingSel;

#else

    /* VariantMerge generated from: '<S54>/Variant Source3' incorporates:
     *  Constant: '<S279>/Constant'
     *  SignalConversion generated from: '<S54>/Variant Source3'
     */
    DMIR_ac_B.VariantMerge_For_Variant_Sour_p = CeDMIR_e_NotAvail;

#endif

    /* End of SignalConversion generated from: '<S54>/Variant Source3' */

    /* SignalConversion generated from: '<S54>/Variant Source3' incorporates:
     *  VariantMerge generated from: '<S54>/Variant Source3'
     */
    VeDMIC_e_eCoastingSel = DMIR_ac_B.VariantMerge_For_Variant_Sour_p;

    /* SignalConversion generated from: '<S54>/Variant Source' */
#if Rte_SysCon_Variant_DMIR_3

    /* VariantMerge generated from: '<S54>/Variant Source' */
    DMIR_ac_B.VariantMerge_For_Variant_Source = DMIR_ac_B.LeDMIR_e_eCoastingSts;

#else

    /* VariantMerge generated from: '<S54>/Variant Source' incorporates:
     *  Constant: '<S276>/Constant'
     *  SignalConversion generated from: '<S54>/Variant Source'
     */
    DMIR_ac_B.VariantMerge_For_Variant_Source = CeDMIR_e_NotAvailable;

#endif

    /* End of SignalConversion generated from: '<S54>/Variant Source' */

    /* SignalConversion generated from: '<S54>/Variant Source' incorporates:
     *  VariantMerge generated from: '<S54>/Variant Source'
     */
    VeDMIC_e_eCoastingSts = DMIR_ac_B.VariantMerge_For_Variant_Source;

    /* Switch: '<S54>/Switch1' incorporates:
     *  Constant: '<S224>/Constant'
     *  Constant: '<S63>/Constant'
     *  Constant: '<S67>/Calib'
     *  RelationalOperator: '<S217>/Comparison3'
     *  RelationalOperator: '<S54>/Comparison1'
     *  Switch: '<S54>/Switch2'
     *  Switch: '<S54>/Switch3'
     *  VariantMerge generated from: '<S66>/VariantSource'
     */
    if (KeDMIR_b_RegenType)
    {
        /* Switch: '<S54>/Switch1' incorporates:
         *  SignalConversion generated from: '<S54>/Variant Source1'
         */
        DMIR_ac_B.Switch1_ig = VeDMIC_e_TellTaleSts;
    }
    else if (((uint32)tmpRead_u) == CeDTRR_e_Faulted)
    {
        /* Switch: '<S54>/Switch2' incorporates:
         *  Constant: '<S62>/Constant'
         *  Switch: '<S54>/Switch1'
         */
        DMIR_ac_B.Switch1_ig = CeDMIR_e_NA;
    }
    else if (((uint32)DMIR_ac_B.VariantMerge_For_Variant_Sour_a) ==
             CeDMIR_e_NormalRegen)
    {
        /* Switch: '<S54>/Switch3' incorporates:
         *  Constant: '<S60>/Constant'
         *  Switch: '<S54>/Switch1'
         *  Switch: '<S54>/Switch2'
         */
        DMIR_ac_B.Switch1_ig = CeDMIR_e_Level1Sts;
    }
    else
    {
        /* Switch: '<S54>/Switch1' incorporates:
         *  Constant: '<S61>/Constant'
         *  Switch: '<S54>/Switch2'
         *  Switch: '<S54>/Switch3'
         */
        DMIR_ac_B.Switch1_ig = CeDMIR_e_Level2Sts;
    }

    /* End of Switch: '<S54>/Switch1' */

    /* Constant: '<S65>/FALSE Constant' */
#if !Rte_SysCon_Variant_DMIR_15

    /* Constant: '<S65>/FALSE Constant' */
    DMIR_ac_B.FALSEConstant = false;

#endif

    /* End of Constant: '<S65>/FALSE Constant' */

    /* DataTypeConversion: '<S69>/Data Type Conversion' incorporates:
     *  Merge: '<Root>/Merge_21'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_TmpSignalConversionAtTmp_mv = (uint8)
        Rte_IrvRead_DMIR_MedTED1_Comm_PaddlesSts_write_IRV();

    /* Chart: '<S270>/Powershot_Stateflow' incorporates:
     *  Constant: '<S272>/Calib'
     *  Constant: '<S273>/Calib'
     *  Constant: '<S274>/Calib'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    /* Gateway: DMIR_MedTED1/Controls/eBoost_Activation/Powershot_Switch/Powershot_Stateflow */
    /* During: DMIR_MedTED1/Controls/eBoost_Activation/Powershot_Switch/Powershot_Stateflow */
    if (((uint32)DMIR_ac_DW.is_active_c17_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Controls/eBoost_Activation/Powershot_Switch/Powershot_Stateflow */
        DMIR_ac_DW.is_active_c17_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Controls/eBoost_Activation/Powershot_Switch/Powershot_Stateflow */
        /* Transition: '<S275>:2' */
        DMIR_ac_DW.is_c17_DMIR_ac = DMIR_ac_IN_Powershot_off;

        /* Entry 'Powershot_off': '<S275>:1' */
        DMIR_ac_B.LeDMIR_e_PowershotStatus = false;
    }
    else
    {
        switch (DMIR_ac_DW.is_c17_DMIR_ac)
        {
          case DMIR_ac_IN_PowershotSwitch:
            /* During 'PowershotSwitch': '<S275>:36' */
            /* Transition: '<S275>:44' */
            if ((((uint32)rtb_TmpSignalConversionAtTmp_dr) != CeDMIR_e_Activated)
                && (DMIR_ac_DW.Cnt >= KeDMIR_t_Threshold))
            {
                /* Transition: '<S275>:41' */
                DMIR_ac_DW.is_c17_DMIR_ac = DMIR_ac_IN_Powershot_off;

                /* Entry 'Powershot_off': '<S275>:1' */
                DMIR_ac_B.LeDMIR_e_PowershotStatus = false;
            }
            else
            {
                /* Transition: '<S275>:52' */
                if ((((uint32)rtb_TmpSignalConversionAtTmp_dr) ==
                        CeDMIR_e_Not_Activated) && (DMIR_ac_DW.Cnt <=
                        KeDMIR_t_Threshold))
                {
                    /* Transition: '<S275>:47' */
                    DMIR_ac_DW.Cnt = KeDMIR_t_SampleTime;
                    DMIR_ac_DW.is_c17_DMIR_ac = DMIR_ac_IN_Powershot_On;

                    /* Entry 'Powershot_On': '<S275>:4' */
                    DMIR_ac_B.LeDMIR_e_PowershotStatus = true;
                }
                else
                {
                    /* Transition: '<S275>:53' */
                    /* Transition: '<S275>:45' */
                    DMIR_ac_DW.Cnt += KeDMIR_t_SampleTime;
                    DMIR_ac_DW.is_c17_DMIR_ac = DMIR_ac_IN_PowershotSwitch;

                    /* Entry 'PowershotSwitch': '<S275>:36' */
                }
            }
            break;

          case DMIR_ac_IN_Powershot_On:
            /* During 'Powershot_On': '<S275>:4' */
            /* Transition: '<S275>:28' */
            if (DMIR_ac_DW.Cnt >= KeDMIR_t_Threshold2)
            {
                /* Transition: '<S275>:57' */
                DMIR_ac_DW.is_c17_DMIR_ac = DMIR_ac_IN_Powershot_off;

                /* Entry 'Powershot_off': '<S275>:1' */
                DMIR_ac_B.LeDMIR_e_PowershotStatus = false;
            }
            else
            {
                /* Transition: '<S275>:58' */
                DMIR_ac_DW.Cnt += KeDMIR_t_SampleTime;

                /* Transition: '<S275>:56' */
                DMIR_ac_DW.is_c17_DMIR_ac = DMIR_ac_IN_Powershot_On;

                /* Entry 'Powershot_On': '<S275>:4' */
                DMIR_ac_B.LeDMIR_e_PowershotStatus = true;
            }
            break;

          default:
            /* During 'Powershot_off': '<S275>:1' */
            if (((uint32)rtb_TmpSignalConversionAtTmp_dr) == CeDMIR_e_Activated)
            {
                /* Transition: '<S275>:37' */
                DMIR_ac_DW.Cnt = 0.0F;
                DMIR_ac_DW.is_c17_DMIR_ac = DMIR_ac_IN_PowershotSwitch;

                /* Entry 'PowershotSwitch': '<S275>:36' */
            }
            else
            {
                DMIR_ac_B.LeDMIR_e_PowershotStatus = false;
            }
            break;
        }
    }

    /* End of Chart: '<S270>/Powershot_Stateflow' */

    /* Switch: '<S69>/Switch1' incorporates:
     *  Constant: '<S268>/Calib'
     */
    if (KeDMIR_b_eBoostSelector)
    {
        /* Switch: '<S69>/Switch1' incorporates:
         *  Logic: '<S69>/Logical'
         *  RelationalOperator: '<S69>/Comparison1'
         *  RelationalOperator: '<S69>/Comparison4'
         *  UnitDelay: '<S69>/Unit Delay'
         */
        VeDMIC_b_PaddlesPressed = ((3 == ((sint32)
            rtb_TmpSignalConversionAtTmp_mv)) && (((sint32)
            DMIR_ac_DW.UnitDelay_DSTATE_po) != 3));
    }
    else
    {
        /* Switch: '<S69>/Switch1' */
        VeDMIC_b_PaddlesPressed = DMIR_ac_B.LeDMIR_e_PowershotStatus;
    }

    /* End of Switch: '<S69>/Switch1' */

    /* Switch: '<S69>/Switch3' incorporates:
     *  Constant: '<S267>/Calib'
     */
    if (KeDMIR_b_EnableBoostFAOvrd)
    {
        /* Switch: '<S69>/Switch3' incorporates:
         *  Constant: '<S266>/Calib'
         */
        rtb_Switch3_c = KeDMIR_b_BoostFAOvrd;
    }
    else
    {
        /* Switch: '<S69>/Switch3' incorporates:
         *  Logic: '<S69>/Logical1'
         *  Merge: '<Root>/Merge_22'
         *  Merge: '<Root>/Merge_23'
         *  Merge: '<Root>/Merge_24'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        rtb_Switch3_c =
            (((Rte_IrvRead_DMIR_MedTED1_Comm_PaddlesFailSts_write_IRV()) ||
              (Rte_IrvRead_DMIR_MedTED1_Comm_PaddlesStsFA_write_IRV())) ||
             (Rte_IrvRead_DMIR_MedTED1_Comm_PaddlesFailStsFA_write_IRV()));
    }

    /* End of Switch: '<S69>/Switch3' */

    /* Logic: '<S69>/Logical2' incorporates:
     *  Inport: '<Root>/VeEBMR_e_eBoostStatus'
     *  Logic: '<S69>/Logical3'
     *  Logic: '<S69>/Logical4'
     *  RelationalOperator: '<S69>/Comparison2'
     *  RelationalOperator: '<S69>/Comparison3'
     *  RelationalOperator: '<S69>/Comparison5'
     *  RelationalOperator: '<S69>/Comparison6'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  UnitDelay: '<S69>/Unit Delay1'
     */
    VeDMIC_b_eBoostDeactivated = (((((sint32)tmpRead_d) == 0) || (((sint32)
        tmpRead_d) == 4)) && ((((sint32)DMIR_ac_DW.UnitDelay1_DSTATE_m) != 0) ||
        (((sint32)DMIR_ac_DW.UnitDelay1_DSTATE_m) != 4)));

    /* Chart: '<S69>/eBoost_Activation' */
    /* Gateway: DMIR_MedTED1/Controls/eBoost_Activation/eBoost_Activation */
    /* During: DMIR_MedTED1/Controls/eBoost_Activation/eBoost_Activation */
    if (((uint32)DMIR_ac_DW.is_active_c43_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Controls/eBoost_Activation/eBoost_Activation */
        DMIR_ac_DW.is_active_c43_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Controls/eBoost_Activation/eBoost_Activation */
        /* Transition: '<S271>:1078' */
        /* Transition: '<S271>:1104' */
        DMIR_ac_DW.is_c43_DMIR_ac = DMIR_ac_IN_Deactivate_eBoost;

        /* Entry 'Deactivate_eBoost': '<S271>:1079' */
        VeDMIC_b_eBoostRequest = false;
    }
    else if (((sint32)DMIR_ac_DW.is_c43_DMIR_ac) == 1)
    {
        VeDMIC_b_eBoostRequest = true;

        /* During 'Activate_eBoost': '<S271>:1081' */
        if (rtb_Switch3_c || ((VeDMIC_b_PaddlesPressed) ||
                              (VeDMIC_b_eBoostDeactivated)))
        {
            /* Transition: '<S271>:1106' */
            /* Transition: '<S271>:1113' */
            /* Transition: '<S271>:1115' */
            /* Transition: '<S271>:1116' */
            /* Transition: '<S271>:1112' */
            /* Transition: '<S271>:1109' */
            /* Transition: '<S271>:1110' */
            DMIR_ac_DW.is_c43_DMIR_ac = DMIR_ac_IN_Deactivate_eBoost;

            /* Entry 'Deactivate_eBoost': '<S271>:1079' */
            VeDMIC_b_eBoostRequest = false;
        }
    }
    else
    {
        VeDMIC_b_eBoostRequest = false;

        /* During 'Deactivate_eBoost': '<S271>:1079' */
        if ((VeDMIC_b_PaddlesPressed) && (!rtb_Switch3_c))
        {
            /* Transition: '<S271>:1082' */
            DMIR_ac_DW.is_c43_DMIR_ac = DMIR_ac_IN_Activate_eBoost;

            /* Entry 'Activate_eBoost': '<S271>:1081' */
            VeDMIC_b_eBoostRequest = true;
        }
    }

    /* End of Chart: '<S69>/eBoost_Activation' */

    /* SignalConversion generated from: '<S54>/Variant Source4' */
#if Rte_SysCon_Variant_DMIR_15

    /* SignalConversion generated from: '<S54>/Variant Source4' */
    DMIR_ac_B.SigConvForSigProp_Variant_Sourc = VeDMIC_b_eBoostRequest;

#else

    /* SignalConversion generated from: '<S54>/Variant Source4' */
    DMIR_ac_B.SigConvForSigProp_Variant_Sourc = DMIR_ac_B.FALSEConstant;

#endif

    /* End of SignalConversion generated from: '<S54>/Variant Source4' */

    /* Switch: '<S69>/Switch2' incorporates:
     *  Constant: '<S269>/Calib'
     */
    if (KeDMIR_b_eBoostSelector)
    {
        /* Switch: '<S69>/Switch2' */
        VeDMIC_b_eBoostSwitchFailSts = rtb_Switch3_c;
    }
    else
    {
        /* Switch: '<S69>/Switch2' incorporates:
         *  Constant: '<S263>/Constant'
         *  Constant: '<S264>/Constant'
         *  Constant: '<S265>/Constant'
         *  Logic: '<S69>/Logical5'
         *  RelationalOperator: '<S69>/Comparison7'
         *  RelationalOperator: '<S69>/Comparison8'
         *  RelationalOperator: '<S69>/Comparison9'
         */
        VeDMIC_b_eBoostSwitchFailSts = (((((uint32)
            rtb_TmpSignalConversionAtTmp_dr) == CeDMIR_e_Short_to_Grnd_Fault) ||
            (((uint32)rtb_TmpSignalConversionAtTmp_dr) ==
             CeDMIR_e_Open_Short_to_Pwr_Flt)) || (((uint32)
            rtb_TmpSignalConversionAtTmp_dr) == CeDMIR_e_SNtAvailable));
    }

    /* End of Switch: '<S69>/Switch2' */

    /* RelationalOperator: '<S72>/Comparison2' incorporates:
     *  Constant: '<S404>/Constant'
     *  Inport: '<Root>/VeVSMR_e_VirtShftMdPopUp'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    rtb_Switch3_c = (((uint32)tmpRead_x) == CeVSMR_e_MSG_NoIssue);

    /* Chart: '<S72>/Powershot_Stateflow' incorporates:
     *  Constant: '<S405>/Calib'
     *  Constant: '<S406>/Calib'
     *  Constant: '<S407>/Calib'
     *  Inport: '<Root>/VeVSMR_e_VirtShftMd'
     *  Logic: '<S72>/Logical2'
     *  RelationalOperator: '<S72>/Comparison1'
     *  RelationalOperator: '<S72>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  UnitDelay: '<S72>/Unit Delay1'
     *  UnitDelay: '<S72>/Unit Delay2'
     */
    /* Gateway: DMIR_MedTED1/Controls/eRupt_Activation/Powershot_Stateflow */
    /* During: DMIR_MedTED1/Controls/eRupt_Activation/Powershot_Stateflow */
    if (((uint32)DMIR_ac_DW.is_active_c67_DMIR_ac) == 0U)
    {
        /* Entry: DMIR_MedTED1/Controls/eRupt_Activation/Powershot_Stateflow */
        DMIR_ac_DW.is_active_c67_DMIR_ac = 1U;

        /* Entry Internal: DMIR_MedTED1/Controls/eRupt_Activation/Powershot_Stateflow */
        /* Transition: '<S408>:65' */
        DMIR_ac_DW.is_c67_DMIR_ac = DMIR_ac_IN_eRuptReq_Off;

        /* Entry 'eRuptReq_Off': '<S408>:1' */
        DMIR_ac_B.LeDMIR_b_eRuptRequest = false;
    }
    else
    {
        switch (DMIR_ac_DW.is_c67_DMIR_ac)
        {
          case DMIR_ac_IN_ButtonPressed:
            /* During 'ButtonPressed': '<S408>:36' */
            /* Transition: '<S408>:44' */
            if (((((uint32)rtb_TmpSignalConversionAtTmp_dr) ==
                    CeDMIR_e_Not_Activated) && (DMIR_ac_DW.Timer <
                    KeDMIR_t_eRuptBtnMinPress)) || (VeDMIC_b_eBoostSwitchFailSts))
            {
                /* Transition: '<S408>:41' */
                DMIR_ac_DW.is_c67_DMIR_ac = DMIR_ac_IN_eRuptReq_Off;

                /* Entry 'eRuptReq_Off': '<S408>:1' */
                DMIR_ac_B.LeDMIR_b_eRuptRequest = false;
            }
            else
            {
                /* Transition: '<S408>:52' */
                if (((((uint32)rtb_TmpSignalConversionAtTmp_dr) ==
                        CeDMIR_e_Not_Activated) ||
                        (KeDMIR_b_eRuptReqBeforeRelease)) && (DMIR_ac_DW.Timer >=
                     KeDMIR_t_eRuptBtnMinPress))
                {
                    /* Transition: '<S408>:47' */
                    DMIR_ac_DW.is_c67_DMIR_ac = DMIR_ac_IN_eRuptReq_On;

                    /* Entry 'eRuptReq_On': '<S408>:4' */
                    DMIR_ac_B.LeDMIR_b_eRuptRequest = true;
                }
                else
                {
                    /* Transition: '<S408>:53' */
                    /* Transition: '<S408>:45' */
                    DMIR_ac_DW.Timer += KeDMIR_t_MedTED;
                    DMIR_ac_DW.is_c67_DMIR_ac = DMIR_ac_IN_ButtonPressed;

                    /* Entry 'ButtonPressed': '<S408>:36' */
                }
            }
            break;

          case DMIR_ac_IN_eRuptReq_Off:
            /* During 'eRuptReq_Off': '<S408>:1' */
            if (((uint32)rtb_TmpSignalConversionAtTmp_dr) == CeDMIR_e_Activated)
            {
                /* Transition: '<S408>:37' */
                DMIR_ac_DW.Timer = 0.0F;
                DMIR_ac_DW.is_c67_DMIR_ac = DMIR_ac_IN_ButtonPressed;

                /* Entry 'ButtonPressed': '<S408>:36' */
            }
            else
            {
                DMIR_ac_B.LeDMIR_b_eRuptRequest = false;
            }
            break;

          default:
            /* During 'eRuptReq_On': '<S408>:4' */
            /* Transition: '<S408>:66' */
            if ((tmpRead_w != DMIR_ac_DW.UnitDelay1_DSTATE_dd) || (rtb_Switch3_c
                 != DMIR_ac_DW.UnitDelay2_DSTATE_p))
            {
                /* Transition: '<S408>:57' */
                DMIR_ac_DW.is_c67_DMIR_ac = DMIR_ac_IN_eRuptReq_Off;

                /* Entry 'eRuptReq_Off': '<S408>:1' */
                DMIR_ac_B.LeDMIR_b_eRuptRequest = false;
            }
            else
            {
                /* Transition: '<S408>:58' */
                /* Transition: '<S408>:56' */
                DMIR_ac_DW.is_c67_DMIR_ac = DMIR_ac_IN_eRuptReq_On;

                /* Entry 'eRuptReq_On': '<S408>:4' */
                DMIR_ac_B.LeDMIR_b_eRuptRequest = true;
            }
            break;
        }
    }

    /* End of Chart: '<S72>/Powershot_Stateflow' */

    /* Update for UnitDelay: '<S244>/Unit Delay2' */
    DMIR_ac_DW.UnitDelay2_DSTATE_b = rtb_TmpSignalConversionAtTmp_mi;

    /* Update for UnitDelay: '<S243>/Unit Delay1' incorporates:
     *  Constant: '<S236>/Calib'
     *  RelationalOperator: '<S243>/Greater  Than'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_d = (rtb_Switch1_od <
        KeDMIR_t_PaddleMaxPressTime);

    /* Update for UnitDelay: '<S249>/Unit Delay2' */
    DMIR_ac_DW.UnitDelay2_DSTATE_e = rtb_Switch2_jl;

    /* Update for UnitDelay: '<S248>/Unit Delay1' incorporates:
     *  Constant: '<S236>/Calib'
     *  RelationalOperator: '<S248>/Greater  Than'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_mf = (rtb_Switch1_dc <
        KeDMIR_t_PaddleMaxPressTime);

    /* Update for UnitDelay: '<S243>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_h = rtb_Switch1_od;

    /* Update for UnitDelay: '<S248>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_i = rtb_Switch1_dc;

    /* Update for UnitDelay: '<S348>/Unit Delay2' */
    DMIR_ac_DW.UnitDelay2_DSTATE_o1 = rtb_AND_k1;

    /* Update for UnitDelay: '<S347>/Unit Delay1' incorporates:
     *  Constant: '<S340>/Calib'
     *  RelationalOperator: '<S347>/Greater  Than'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_p = (rtb_Switch1_m3 <
        KeDMIR_t_PaddleMaxPressTime);

    /* Update for UnitDelay: '<S353>/Unit Delay2' */
    DMIR_ac_DW.UnitDelay2_DSTATE_j = rtb_UnitDelay_bp;

    /* Update for UnitDelay: '<S352>/Unit Delay1' incorporates:
     *  Constant: '<S340>/Calib'
     *  RelationalOperator: '<S352>/Greater  Than'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_dg = (rtb_Switch1_mb <
        KeDMIR_t_PaddleMaxPressTime);

    /* Update for Delay: '<S295>/Integer Delay' incorporates:
     *  Inport: '<Root>/VeTMDR_e_PropulsionMd'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    DMIR_ac_DW.IntegerDelay_DSTATE_m = tmpRead_h;

    /* Update for Delay: '<S357>/Integer Delay1' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RaceModeSts'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    DMIR_ac_DW.IntegerDelay1_DSTATE = tmpRead_i;

    /* Update for Delay: '<S71>/Integer Delay' */
    DMIR_ac_DW.IntegerDelay_DSTATE = DMIR_ac_B.LeDMIR_e_eCoastingSel;

    /* Update for UnitDelay: '<S280>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    DMIR_ac_DW.UnitDelay_DSTATE_ev = rtb_TmpSignalConversionAtTmp_ma;

    /* Update for UnitDelay: '<S347>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_hf = rtb_Switch1_m3;

    /* Update for UnitDelay: '<S352>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_d = rtb_Switch1_mb;

    /* Update for UnitDelay: '<S69>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_po = rtb_TmpSignalConversionAtTmp_mv;

    /* Update for UnitDelay: '<S69>/Unit Delay1' incorporates:
     *  Inport: '<Root>/VeEBMR_e_eBoostStatus'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_m = (uint8)tmpRead_d;

    /* Update for UnitDelay: '<S72>/Unit Delay2' */
    DMIR_ac_DW.UnitDelay2_DSTATE_p = rtb_Switch3_c;

    /* Update for UnitDelay: '<S72>/Unit Delay1' incorporates:
     *  Inport: '<Root>/VeVSMR_e_VirtShftMd'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_dd = tmpRead_w;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* DataTypeConversion: '<S691>/DataTypeConversion' incorporates:
     *  Merge: '<Root>/VeDMIC_e_EVMdLEDOn_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    DataTypeConversion_bd =
        Rte_IrvRead_DMIR_MedTED1_VeDMIC_e_EVMdLEDOn_write_IRV();

    /* DataTypeConversion: '<S692>/DataTypeConversion' incorporates:
     *  Merge: '<Root>/VeDMIC_e_ESaveLEDOn_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    DataTypeConversion_g =
        Rte_IrvRead_DMIR_MedTED1_VeDMIC_e_ESaveLEDOn_write_IRV();

    /* DataTypeConversion: '<S687>/DataTypeConversion' incorporates:
     *  Merge: '<Root>/VeDMIC_b_EcoLEDOn_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    DataTypeConversion_o1 = Rte_IrvRead_DMIR_MedTED1_VeDMIC_b_EcoLEDOn_write_IRV
        ();

    /* Outport: '<Root>/VeDMIR_e_RegenSts' incorporates:
     *  DataTypeConversion: '<S689>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/Output__VeDMIR_e_RegenSts'
     *  VariantMerge generated from: '<S66>/VariantSource'
     */
    (void)Rte_Write_VeDMIR_e_RegenSts_Value
        (DMIR_ac_B.VariantMerge_For_Variant_Sour_a);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDMIR_Pct_HV_BatSOCTarget' incorporates:
     *  Merge: '<Root>/Merge_47'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/VeDMIR_Pct_HV_BatSOCTarget'
     */
    (void)Rte_Write_VeDMIR_Pct_HV_BatSOCTarget_Value
        (Rte_IrvRead_DMIR_MedTED1_Comm_Pct_HV_BatSOCTarget_write_IRV());

    /* Outport: '<Root>/VeDMIR_Pct_PanelIntensity' incorporates:
     *  Merge: '<Root>/VeDMIC_Pct_PanelIntensity_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/VeDMIR_Pct_PanelIntensity'
     */
    (void)Rte_Write_VeDMIR_Pct_PanelIntensity_Value
        (Rte_IrvRead_DMIR_MedTED1_VeDMIC_Pct_PanelIntensity_write_IRV());

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeDMIR_b_CommFault' incorporates:
     *  Gain: '<S725>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_CommFault'
     */
    (void)Rte_Write_VeDMIR_b_CommFault_Value(VeDMID_b_CommFault);

    /* Outport: '<Root>/VeDMIR_b_CommFaultESave' incorporates:
     *  Gain: '<S726>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_CommFaultESave'
     */
    (void)Rte_Write_VeDMIR_b_CommFaultESave_Value(VeDMID_b_CommFaultESave);

    /* Outport: '<Root>/VeDMIR_b_DNA_ESaveStatus' incorporates:
     *  Constant: '<S699>/Calib'
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     *  Selector: '<S57>/Selector1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_DNA_ESaveStatus'
     */
    (void)Rte_Write_VeDMIR_b_DNA_ESaveStatus_Value(KaDMIR_b_DNA_EsaveMap
        [(tmpRead_2)]);

    /* Outport: '<Root>/VeDMIR_b_DenyESave_TonaleDiag' incorporates:
     *  Gain: '<S715>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_DenyESave_TonaleDiag'
     */
    (void)Rte_Write_VeDMIR_b_DenyESave_TonaleDiag_Value
        (rtb_RelationalOperator1_l5);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDMIR_b_DriveStyleStsFA' incorporates:
     *  Merge: '<Root>/Merge_5'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_DriveStyleStsFA'
     */
    (void)Rte_Write_VeDMIR_b_DriveStyleStsFA_Value
        (Rte_IrvRead_DMIR_MedTED1_Comm_b_DriveStyleStsFA_write_IRV());

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeDMIR_b_DrvMdNotAvailDiag' incorporates:
     *  Gain: '<S723>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_DrvMdNotAvailDiag'
     */
    (void)Rte_Write_VeDMIR_b_DrvMdNotAvailDiag_Value(VeDMID_b_DrvMdNotAvailDiag);

    /* Outport: '<Root>/VeDMIR_b_ESaveBtnVolt1ShortToGrnd' incorporates:
     *  Gain: '<S729>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_ESaveBtnVolt1ShortToGrnd'
     */
    (void)Rte_Write_VeDMIR_b_ESaveBtnVolt1ShortToGrnd_Value(rtb_Switch5_a);

    /* Outport: '<Root>/VeDMIR_b_ESaveBtnVolt1ShortToPwr' incorporates:
     *  Gain: '<S728>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_ESaveBtnVolt1ShortToPwr'
     */
    (void)Rte_Write_VeDMIR_b_ESaveBtnVolt1ShortToPwr_Value(rtb_UnitDelay_nx);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostics'
     */
    /* Outport: '<Root>/VeDMIR_b_ESaveBtnVoltDiffBtn' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMIR_b_ESaveBtnVoltDiffBtn'
     */
    (void)Rte_Write_VeDMIR_b_ESaveBtnVoltDiffBtn_Value
        (rtb_RelationalOperator1_l_tmp);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeDMIR_b_ESaveMdBtnActv' incorporates:
     *  Gain: '<S721>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_ESaveMdBtnActv'
     */
    (void)Rte_Write_VeDMIR_b_ESaveMdBtnActv_Value(rtb_RelationalOperator2);

    /* Outport: '<Root>/VeDMIR_b_ElectricPlusSwitchActv' incorporates:
     *  Gain: '<S714>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_ElectricPlusSwitchActv'
     */
    (void)Rte_Write_VeDMIR_b_ElectricPlusSwitchActv_Value(rtb_AND_ks);

    /* Outport: '<Root>/VeDMIR_b_EvBtnVolt1ShortToGrnd' incorporates:
     *  Gain: '<S711>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_EvBtnVolt1ShortToGrnd'
     */
    (void)Rte_Write_VeDMIR_b_EvBtnVolt1ShortToGrnd_Value(rtb_AND_mbz);

    /* Outport: '<Root>/VeDMIR_b_EvBtnVolt1ShortToPwr' incorporates:
     *  Gain: '<S710>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_EvBtnVolt1ShortToPwr'
     */
    (void)Rte_Write_VeDMIR_b_EvBtnVolt1ShortToPwr_Value(rtb_AND_bat);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostics'
     */
    /* Outport: '<Root>/VeDMIR_b_EvBtnVoltDiffBtn' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMIR_b_EvBtnVoltDiffBtn'
     */
    (void)Rte_Write_VeDMIR_b_EvBtnVoltDiffBtn_Value(rtb_Logical1_al_tmp);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeDMIR_b_HybridBtnActv' incorporates:
     *  Gain: '<S724>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_HybridBtnActv'
     */
    (void)Rte_Write_VeDMIR_b_HybridBtnActv_Value(rtb_RelationalOperator3);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostics'
     */
    /* Outport: '<Root>/VeDMIR_b_HybridBtnVolt1ShortToGrnd' incorporates:
     *  Logic: '<S519>/Logical1'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_HybridBtnVolt1ShortToGrnd'
     */
    (void)Rte_Write_VeDMIR_b_HybridBtnVolt1ShortToGrnd_Value((rtb_Comparison1_dz
        || rtb_RelationalOperator_n) || rtb_Comparison5_ez);

    /* Outport: '<Root>/VeDMIR_b_HybridBtnVolt1ShortToPwr' incorporates:
     *  Logic: '<S519>/Logical11'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_HybridBtnVolt1ShortToPwr'
     */
    (void)Rte_Write_VeDMIR_b_HybridBtnVolt1ShortToPwr_Value((rtb_AND_is ||
        rtb_RelationalOperator2_cw) || rtb_Comparison3_c);

    /* Outport: '<Root>/VeDMIR_b_HybridBtnVoltDiffBtn' incorporates:
     *  Logic: '<S519>/Logical4'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_HybridBtnVoltDiffBtn'
     */
    (void)Rte_Write_VeDMIR_b_HybridBtnVoltDiffBtn_Value((rtb_AND_nv ||
        rtb_Logical1_bp) || rtb_Logical1_nr);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDMIR_b_InternalLightSts' incorporates:
     *  Merge: '<Root>/VeDMIC_b_InternalLightSts_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_InternalLightSts'
     */
    (void)Rte_Write_VeDMIR_b_InternalLightSts_Value
        (Rte_IrvRead_DMIR_MedTED1_VeDMIC_b_InternalLightSts_write_IRV());

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Controls'
     */
    /* Outport: '<Root>/VeDMIR_b_LatchEV' incorporates:
     *  Logic: '<S59>/Logical14'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_LatchEV'
     */
    (void)Rte_Write_VeDMIR_b_LatchEV_Value((rtb_Logical11_n || rtb_OR1_nv) ||
        rtb_LogicalOperator);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeDMIR_b_eBoostRequest' incorporates:
     *  Gain: '<S716>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_eBoostRequest'
     */
    (void)Rte_Write_VeDMIR_b_eBoostRequest_Value
        (DMIR_ac_B.SigConvForSigProp_Variant_Sourc);

    /* Outport: '<Root>/VeDMIR_b_eBoostSwitchFailSts' incorporates:
     *  Gain: '<S722>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_eBoostSwitchFailSts'
     */
    (void)Rte_Write_VeDMIR_b_eBoostSwitchFailSts_Value
        (VeDMIC_b_eBoostSwitchFailSts);

    /* Outport: '<Root>/VeDMIR_b_eRuptRequest' incorporates:
     *  Gain: '<S708>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMIR_b_eRuptRequest'
     */
    (void)Rte_Write_VeDMIR_b_eRuptRequest_Value(DMIR_ac_B.LeDMIR_b_eRuptRequest);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDMIR_d_TgtSOCRngCnf' incorporates:
     *  Merge: '<Root>/Merge_18'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/VeDMIR_d_TgtSOCRngCnf'
     */
    (void)Rte_Write_VeDMIR_d_TgtSOCRngCnf_Value
        (Rte_IrvRead_DMIR_MedTED1_VeDMDI_e_TgtSOCRngCnf_write_IRV());

    /* Outport: '<Root>/VeDMIR_e_BrakingMdReq' incorporates:
     *  Merge: '<Root>/4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_BrakingMdReq'
     */
    (void)Rte_Write_VeDMIR_e_BrakingMdReq_Value
        (Rte_IrvRead_DMIR_MedTED1_Comm_e_KeDMIR_e_BrakingMdReq_write_IRV());

    /* Outport: '<Root>/VeDMIR_e_EChargeType' incorporates:
     *  Merge: '<Root>/Merge_27'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_ChargeTypeCnf'
     */
    (void)Rte_Write_VeDMIR_e_EChargeType_Value
        (Rte_IrvRead_DMIR_MedTED1_Comm_e_EChargeType_write_IRV());

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Controls'
     */
    /* Outport: '<Root>/VeDMIR_e_DriveStyleSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMIR_e_DriveStyleSts'
     *  SignalConversion generated from: '<S58>/VariantSource'
     *  VariantMerge generated from: '<S58>/VariantSource'
     */
    (void)Rte_Write_VeDMIR_e_DriveStyleSts_Value(rtb_VariantMerge_For_Variant__a);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeDMIR_e_DrvMdInfoSt' incorporates:
     *  Constant: '<S702>/Calib'
     *  Merge: '<Root>/VeDMIC_e_DrvMdInfoSt_IRV_Merge'
     *  Selector: '<S57>/Selector4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_DrvMdInfoSt'
     */
    (void)Rte_Write_VeDMIR_e_DrvMdInfoSt_Value
        (KaDMIR_e_DrvMdInfoStRemap[Rte_IrvRead_DMIR_MedTED1_VeDMIC_e_DrvMdInfoSt_write_IRV
         ()]);

    /* Outport: '<Root>/VeDMIR_e_DrvMdRaw' incorporates:
     *  DataTypeConversion: '<S57>/Data Type Conversion'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_DrvMdRaw'
     *  Switch: '<S59>/Switch1'
     */
    (void)Rte_Write_VeDMIR_e_DrvMdRaw_Value(VeDMIC_e_DrvMdRaw);

    /* Outport: '<Root>/VeDMIR_e_ESaveLEDOn_LIN' incorporates:
     *  DataTypeConversion: '<S692>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_ESaveLEDOn_LIN'
     *  SignalConversion generated from: '<S57>/VeDMIR_e_ESaveMdLEDOn_LIN'
     */
    (void)Rte_Write_VeDMIR_e_ESaveLEDOn_LIN_Value(DataTypeConversion_g);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDMIR_e_ESaveLEDOn' incorporates:
     *  DataTypeConversion: '<S692>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_ESaveMdLEDOn'
     */
    (void)Rte_Write_VeDMIR_e_ESaveLEDOn_Value(DataTypeConversion_g);

    /* Outport: '<Root>/VeDMIR_e_ElectricPlusLEDOn' incorporates:
     *  DataTypeConversion: '<S691>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_EVMdLEDOn'
     */
    (void)Rte_Write_VeDMIR_e_ElectricPlusLEDOn_Value(DataTypeConversion_bd);

    /* Outport: '<Root>/VeDMIR_e_EcoLEDOn' incorporates:
     *  DataTypeConversion: '<S687>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_EcoLEDOn'
     */
    (void)Rte_Write_VeDMIR_e_EcoLEDOn_Value(DataTypeConversion_o1);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeDMIR_e_EcoLEDOn_LIN' incorporates:
     *  DataTypeConversion: '<S687>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_EcoLEDOn_LIN'
     *  SignalConversion generated from: '<S57>/VeDMIR_e_EcoLEDOn_LED'
     */
    (void)Rte_Write_VeDMIR_e_EcoLEDOn_LIN_Value(DataTypeConversion_o1);

    /* Outport: '<Root>/VeDMIR_e_ElectricPlusLEDOn_LIN' incorporates:
     *  DataTypeConversion: '<S691>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_ElectricPlusLEDOn_LIN'
     *  SignalConversion generated from: '<S57>/VeDMIR_e_EVMdLEDOn_LIN'
     */
    (void)Rte_Write_VeDMIR_e_ElectricPlusLEDOn_LIN_Value(DataTypeConversion_bd);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktHi' incorporates:
     *  Merge: '<S596>/Merge'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktHi'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwA_CktHi_Value
        (DMIR_ac_B.Merge_l);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktLo' incorporates:
     *  Merge: '<S595>/Merge'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktLo'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwA_CktLo_Value
        (DMIR_ac_B.Merge_ma);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktPerf' incorporates:
     *  Merge: '<S597>/Merge'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktPerf'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwA_CktPerf_Value
        (DMIR_ac_B.Merge_c);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwBCkt_Perf' incorporates:
     *  Merge: '<S535>/Merge'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_FaultSts_DrvrModSelSwBCkt_Perf'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwBCkt_Perf_Value
        (DMIR_ac_B.Merge_g);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktHi' incorporates:
     *  Merge: '<S534>/Merge'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktHi'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwB_CktHi_Value
        (DMIR_ac_B.Merge_i);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktLo' incorporates:
     *  Merge: '<S533>/Merge'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktLo'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwB_CktLo_Value
        (DMIR_ac_B.Merge_m);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_EcoModSwHi' incorporates:
     *  Merge: '<S637>/Merge'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_FaultSts_EcoModSwHi'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_EcoModSwHi_Value(DMIR_ac_B.Merge_k);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_EcoModSwLo' incorporates:
     *  Merge: '<S636>/Merge'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_FaultSts_EcoModSwLo'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_EcoModSwLo_Value(DMIR_ac_B.Merge_p);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_EcoModSwPerf' incorporates:
     *  Merge: '<S638>/Merge'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_FaultSts_EcoModSwPerf'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_EcoModSwPerf_Value(DMIR_ac_B.Merge_o);

    /* Outport: '<Root>/VeDMIR_e_HybridMdLEDOn' incorporates:
     *  Merge: '<Root>/VeDMIC_e_HybridMdLEDOn_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_HybridMdLEDOn'
     */
    (void)Rte_Write_VeDMIR_e_HybridMdLEDOn_Value
        (Rte_IrvRead_DMIR_MedTED1_VeDMIC_e_HybridMdLEDOn_write_IRV());

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeDMIR_e_PaddleModeSts' incorporates:
     *  DataTypeConversion: '<S57>/Data Type Conversion12'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_PddlMdStatus'
     *  Switch: '<S302>/Switch3'
     */
    (void)Rte_Write_VeDMIR_e_PaddleModeSts_Value(Switch3);

    /* Outport: '<Root>/VeDMIR_e_SailOffStatus' incorporates:
     *  Constant: '<S701>/Calib'
     *  DataTypeConversion: '<S57>/Data Type Conversion7'
     *  Selector: '<S57>/Selector'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_SailOffStatus'
     *  Switch: '<S68>/Switch'
     */
    (void)Rte_Write_VeDMIR_e_SailOffStatus_Value(KaDMIR_e_SailOffMap_CAN
        [(VeDMIC_e_SailOffStatus)]);

    /* Outport: '<Root>/VeDMIR_e_SailOffStatus_Internal' incorporates:
     *  DataTypeConversion: '<S57>/Data Type Conversion7'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_SailOffStatus_Internal'
     *  Switch: '<S68>/Switch'
     */
    (void)Rte_Write_VeDMIR_e_SailOffStatus_Internal_Value(VeDMIC_e_SailOffStatus);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDMIR_e_SportMdLEDOn' incorporates:
     *  Merge: '<Root>/VeDMIC_e_SportLEDOn_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_SportMdLEDOn'
     */
    (void)Rte_Write_VeDMIR_e_SportMdLEDOn_Value
        (Rte_IrvRead_DMIR_MedTED1_VeDMIC_e_SportLEDOn_write_IRV());

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeDMIR_e_TellTaleInfo' incorporates:
     *  Constant: '<S703>/Calib'
     *  DataTypeConversion: '<S57>/Data Type Conversion9'
     *  Selector: '<S57>/Selector2'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_TellTaleInfo'
     *  Switch: '<S54>/Switch1'
     */
    (void)Rte_Write_VeDMIR_e_TellTaleInfo_Value(KaDMIR_e_TellTaleMap
        [(DMIR_ac_B.Switch1_ig)]);

    /* Outport: '<Root>/VeDMIR_e_TellTaleSts' incorporates:
     *  DataTypeConversion: '<S698>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_TellTaleSts'
     *  Switch: '<S54>/Switch1'
     */
    (void)Rte_Write_VeDMIR_e_TellTaleSts_Value(DMIR_ac_B.Switch1_ig);

    /* Outport: '<Root>/VeDMIR_y_eCoastingPopupMsg' incorporates:
     *  Constant: '<S704>/Calib'
     *  DataTypeConversion: '<S57>/Data Type Conversion14'
     *  Selector: '<S57>/Selector5'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_eCoastPopUpMsg'
     */
    (void)Rte_Write_VeDMIR_y_eCoastingPopupMsg_Value(KaDMIR_e_eCoastPopUpMsgMap
        [(LeDMIR_e_eCoastPopUpMsg)]);

    /* Outport: '<Root>/VeDMIR_e_eCoast_PopUpRqst' incorporates:
     *  Constant: '<S700>/Calib'
     *  DataTypeConversion: '<S57>/Data Type Conversion10'
     *  Selector: '<S57>/Selector3'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_eCoast_PopUpRqst'
     *  SignalConversion generated from: '<S54>/Variant Source2'
     */
    (void)Rte_Write_VeDMIR_e_eCoast_PopUpRqst_Value(KaDMIR_e_PopUpRqst
        [(VeDMIC_e_eCoast_PopUpRqst)]);

    /* Outport: '<Root>/VeDMIR_e_eCoastingSel' incorporates:
     *  DataTypeConversion: '<S685>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_eCoastingSel'
     *  SignalConversion generated from: '<S54>/Variant Source3'
     */
    (void)Rte_Write_VeDMIR_e_eCoastingSel_Value(VeDMIC_e_eCoastingSel);

    /* Outport: '<Root>/VeDMIR_e_eCoastingSts' incorporates:
     *  DataTypeConversion: '<S697>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_eCoastingSts'
     *  SignalConversion generated from: '<S54>/Variant Source'
     */
    (void)Rte_Write_VeDMIR_e_eCoastingSts_Value(VeDMIC_e_eCoastingSts);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Merge_28' incorporates:
     *  Merge: '<Root>/Merge_46'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/Comm_DodgeSportSts_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_DodgeSportSts_write_IRV
        (Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_SportStatus_write_IRV());

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMII_ProcessInputs'
     */
    /* Switch: '<S55>/Switch8' incorporates:
     *  Constant: '<S413>/Calib'
     *  Merge: '<Root>/Merge_6'
     *  Merge: '<Root>/Merge_8'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    if (KeDMIR_b_EnableCANOrLIN)
    {
        tmp = Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_EcoBtnStLINFA_write_IRV();
    }
    else
    {
        tmp = Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_EcoBtnStFA_write_IRV();
    }

    /* End of Switch: '<S55>/Switch8' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S1>/Comm_EcoBtnStFA_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_EcoBtnStFA_write_IRV(tmp);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMII_ProcessInputs'
     */
    /* Switch: '<S55>/Switch7' incorporates:
     *  Constant: '<S413>/Calib'
     *  Merge: '<Root>/VeDMIR_e_EcoBtnStLIN_IRV_Merge'
     *  Merge: '<Root>/VeDMIR_e_EcoBtnSt_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    if (KeDMIR_b_EnableCANOrLIN)
    {
        rtb_UnitDelay_m5m_tmp =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_EcoBtnStLIN_write_IRV();
    }
    else
    {
        rtb_UnitDelay_m5m_tmp =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_EcoBtnSt_write_IRV();
    }

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S1>/Comm_EcoBtnSt_write'
     *  Switch: '<S55>/Switch7'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_EcoBtnSt_write_IRV(rtb_UnitDelay_m5m_tmp);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Merge_24' incorporates:
     *  Merge: '<Root>/Merge_43'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/Comm_PaddlesFailStsFA_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_PaddlesFailStsFA_write_IRV
        (Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_PaddlesFailStsFA_write_IRV());

    /* Merge: '<Root>/Merge_23' incorporates:
     *  Merge: '<Root>/VeDMIR_b_PaddlesFailSts_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/Comm_PaddlesFailSts_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_PaddlesFailSts_write_IRV
        (Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_PaddlesFailSts_write_IRV());

    /* Merge: '<Root>/Merge_22' incorporates:
     *  Merge: '<Root>/Merge_42'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/Comm_PaddlesStsFA_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_PaddlesStsFA_write_IRV
        (Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_PaddlesStsFA_write_IRV());

    /* Merge: '<Root>/Merge_21' incorporates:
     *  Merge: '<Root>/VeDMIR_e_PaddleSts_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/Comm_PaddlesSts_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_PaddlesSts_write_IRV
        (Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_PaddleSts_write_IRV());

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMII_ProcessInputs'
     */
    /* Merge: '<Root>/Merge_47' incorporates:
     *  Gain: '<S469>/Gain'
     *  SignalConversion generated from: '<S1>/Comm_Pct_HV_BatSOCTarget_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_Pct_HV_BatSOCTarget_write_IRV
        (VeDMII_Pct_HV_BatSOCTargetRaw);

    /* Switch: '<S480>/Switch1' incorporates:
     *  Constant: '<S484>/Calib'
     */
    if (KeDMIR_b_PanelIntensityInPerc)
    {
        /* Merge: '<Root>/Merge_3' incorporates:
         *  SignalConversion generated from: '<S1>/Comm_Pct_PanelIntensity_write'
         */
        Rte_IrvWrite_DMIR_MedTED1_Comm_Pct_PanelIntensity_write_IRV
            (VeDMII_Pct_PanelIntensityRaw);
    }
    else
    {
        /* Merge: '<Root>/Merge_3' incorporates:
         *  SignalConversion generated from: '<S1>/Comm_Pct_PanelIntensity_write'
         */
        Rte_IrvWrite_DMIR_MedTED1_Comm_Pct_PanelIntensity_write_IRV
            (VeDMII_Pct_PanelIntensityConv);
    }

    /* End of Switch: '<S480>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Merge_5' incorporates:
     *  Merge: '<Root>/Merge_1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/Comm_b_DriveStyleStsFA_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_b_DriveStyleStsFA_write_IRV
        (Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_DriveStyleStsFA_write_IRV());

    /* Merge: '<Root>/Merge_16' incorporates:
     *  Merge: '<Root>/Merge_29'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/Comm_b_DrvMdDrvrInputFA_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_b_DrvMdDrvrInputFA_write_IRV
        (Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_DrvMdDrvrInputFA_write_IRV());

    /* Merge: '<Root>/Merge_37' incorporates:
     *  Merge: '<Root>/VeDMIR_b_DrvMdReqErr_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/Comm_b_DrvMdReqErr_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_b_DrvMdReqErr_write_IRV
        (Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_DrvMdReqErr_write_IRV());

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMII_ProcessInputs'
     */
    /* Switch: '<S55>/Switch1' incorporates:
     *  Constant: '<S413>/Calib'
     *  Merge: '<Root>/Merge_40'
     *  Merge: '<Root>/Merge_41'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    if (KeDMIR_b_EnableCANOrLIN)
    {
        tmp = Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_ESaveBtnSt_CANFA_write_IRV();
    }
    else
    {
        tmp = Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_ESaveBtnStFA_write_IRV();
    }

    /* End of Switch: '<S55>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S1>/Comm_b_ESaveBtnFA_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_b_ESaveBtnFA_write_IRV(tmp);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMII_ProcessInputs'
     */
    /* Switch: '<S55>/Switch9' incorporates:
     *  Constant: '<S413>/Calib'
     *  Merge: '<Root>/Merge_10'
     *  Merge: '<Root>/Merge_39'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    if (KeDMIR_b_EnableCANOrLIN)
    {
        tmp =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_ElectricPlusSwitchLINFA_write_IRV();
    }
    else
    {
        tmp = Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_EVBtnStFA_write_IRV();
    }

    /* End of Switch: '<S55>/Switch9' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S1>/Comm_b_EVBtnFA_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_b_EVBtnFA_write_IRV(tmp);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMII_ProcessInputs'
     */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  Gain: '<S487>/Gain'
     *  SignalConversion generated from: '<S1>/Comm_b_InternalLightSts_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_b_InternalLightSts_write_IRV
        (VeDMII_b_DayLightSts);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Merge_26' incorporates:
     *  Merge: '<Root>/Merge_44'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/Comm_eDriveModeSwitchRqstFA_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_eDriveModeSwitchRqstFA_write_IRV
        (Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_eDriveModeSwitchRqstFA_write_IRV());

    /* Merge: '<Root>/Merge_25' incorporates:
     *  Merge: '<Root>/Merge_45'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/Comm_eDriveModeSwitchRqst_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_eDriveModeSwitchRqst_write_IRV
        (Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_eDriveModeSwitchRqst_write_IRV());

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMII_ProcessInputs'
     */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  Inport: '<S55>/DriveStyleSts'
     *  SignalConversion generated from: '<S1>/Comm_e_DriveStyleSts_write'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_e_DriveStyleSts_write_IRV
        (DMIR_ac_B.VM_Conditional_Signal_TmpVM_Fcn);

    /* Switch: '<S415>/Switch1' incorporates:
     *  Constant: '<S430>/Calib'
     *  Constant: '<S446>/Calib'
     *  Merge: '<Root>/Merge_30'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    if (KeDMIR_b_DrvMdDrvrInputOvrrd)
    {
        rtb_TmpSignalConversionAtTmp_mv = KeDMIR_i_DrvMdDrvrInputOvrrdVal;
    }
    else
    {
        rtb_TmpSignalConversionAtTmp_mv =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_DrvMdDrvrInput_write_IRV();
    }

    /* End of Switch: '<S415>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S1>/Comm_e_DrvMdDrvrInput_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_e_DrvMdDrvrInput_write_IRV
        (rtb_TmpSignalConversionAtTmp_mv);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMII_ProcessInputs'
     */
    /* Merge: '<Root>/Merge_27' incorporates:
     *  DataStoreWrite: '<S414>/Data Store Write'
     *  DataTypeConversion: '<S454>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/Comm_e_EChargeType_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_e_EChargeType_write_IRV((TeDMDR_e_EChargetype)
        EeDMIR_d_ChargeTypeCnf);

    /* Switch: '<S417>/Switch1' incorporates:
     *  Constant: '<S413>/Calib'
     *  Constant: '<S432>/Calib'
     *  Constant: '<S443>/Calib'
     *  Merge: '<Root>/VeDMIR_e_eSaveSwitch_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  Switch: '<S55>/Switch'
     */
    if (KeDMIR_b_ESaveBtnOvrrd)
    {
        rtb_UnitDelay_m5m_tmp = KeDMIR_e_ESaveBtnOvrrdVal;
    }
    else if (KeDMIR_b_EnableCANOrLIN)
    {
        /* Switch: '<S55>/Switch' incorporates:
         *  Merge: '<Root>/VeDMIR_e_ESaveBtnStLIN_IRV_Merge'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        rtb_UnitDelay_m5m_tmp =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_ESaveBtnStLIN_write_IRV();
    }
    else
    {
        rtb_UnitDelay_m5m_tmp =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_eSaveSwitch_write_IRV();
    }

    /* End of Switch: '<S417>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S1>/Comm_e_ESaveBtn_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_e_ESaveBtn_write_IRV(rtb_UnitDelay_m5m_tmp);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMII_ProcessInputs'
     */
    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S413>/Calib'
     *  Constant: '<S433>/Calib'
     *  Constant: '<S444>/Calib'
     *  Merge: '<Root>/VeDMIR_e_ElectricPlusSwitch_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  Switch: '<S55>/Switch6'
     */
    if (KeDMIR_b_EVBtnOvrrd)
    {
        rtb_UnitDelay_m5m_tmp = KeDMIR_e_EVBtnOvrrdVal;
    }
    else if (KeDMIR_b_EnableCANOrLIN)
    {
        /* Switch: '<S55>/Switch6' incorporates:
         *  Merge: '<Root>/VeDMIR_e_ElectricPlusSwitchLIN_IRV_Merge'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
         */
        rtb_UnitDelay_m5m_tmp =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_ElectricPlusSwitchLIN_write_IRV();
    }
    else
    {
        rtb_UnitDelay_m5m_tmp =
            Rte_IrvRead_DMIR_MedTED1_VeDMIR_e_ElectricPlusSwitch_write_IRV();
    }

    /* End of Switch: '<S416>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S1>/Comm_e_ElectricPlusSwitch_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_Comm_e_ElectricPlusSwitch_write_IRV
        (rtb_UnitDelay_m5m_tmp);

    /* Merge: '<Root>/DenyEsave_TonaleDiag_IRV_Merge' incorporates:
     *  SignalConversion: '<S1>/Signal Conversion2'
     *  SignalConversion generated from: '<S1>/DenyEsave_TonaleDiag_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_DenyEsave_TonaleDiag_write_IRV
        (rtb_RelationalOperator1_l5);

    /* Merge: '<Root>/DriveReady_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/DriveReady_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_DriveReady_write_IRV(tmpRead_1);

    /* Merge: '<Root>/DrvMdArb_IRV_Merge' incorporates:
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/DrvMdArb_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_DrvMdArb_write_IRV(tmpRead_2);

    /* Merge: '<Root>/ESaveModeDenied_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/ESaveModeDenied_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_ESaveModeDenied_write_IRV(tmpRead_5);

    /* Merge: '<Root>/EVModeDenied_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/EVModeDenied_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_EVModeDenied_write_IRV(tmpRead_3);

    /* Merge: '<Root>/EVModeInhibit2_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/EVModeInhibit2_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_EVModeInhibit2_write_IRV(tmpRead_b);

    /* Merge: '<Root>/EcoDenied_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/EcoDenied_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_EcoDenied_write_IRV(tmpRead_e);

    /* Merge: '<Root>/EngOnEVFnlHMI_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/EngOnEVFnlHMI_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_EngOnEVFnlHMI_write_IRV(tmpRead_a);

    /* Merge: '<Root>/EngOnInEVLED_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/EngOnInEVLED_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_EngOnInEVLED_write_IRV(tmpRead_8);

    /* Merge: '<Root>/EngOnWOTRsnFnl_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/EngOnWOTRsnFnl_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_EngOnWOTRsnFnl_write_IRV(tmpRead_9);

    /* Merge: '<Root>/EngOnWOTRsnRaw_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/EngOnWOTRsnRaw_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_EngOnWOTRsnRaw_write_IRV(tmpRead_7);

    /* Merge: '<Root>/HybridModeDenied_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/HybridModeDenied_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_HybridModeDenied_write_IRV(tmpRead_4);

    /* Merge: '<Root>/PowerMode_IRV_Merge' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/PowerMode_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_PowerMode_write_IRV(tmpRead);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMII_ProcessInputs'
     */
    /* Switch: '<S421>/Switch1' incorporates:
     *  Constant: '<S434>/Calib'
     *  Constant: '<S439>/Calib'
     *  Merge: '<Root>/VeDMIR_b_SailOff_Request_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     */
    if (KeDMIR_b_EnaSailOffReqOvrrd)
    {
        tmp = KeDMIR_b_SailOffReqOvrrdVal;
    }
    else
    {
        tmp = Rte_IrvRead_DMIR_MedTED1_VeDMIR_b_SailOff_Request_write_IRV();
    }

    /* End of Switch: '<S421>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S1>/SailOff_Request_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_SailOff_Request_write_IRV(tmp);

    /* Merge: '<Root>/SportModeDenied_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtDMIR_MedTED1Inport141'
     *  SignalConversion generated from: '<S1>/SportModeDenied_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_SportModeDenied_write_IRV(tmpRead_6);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMII_ProcessInputs'
     */
    /* Merge: '<Root>/Merge_18' incorporates:
     *  DataStoreWrite: '<S414>/Data Store Write1'
     *  Gain: '<S468>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMDI_e_TgtSOCRngCnf_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_VeDMDI_e_TgtSOCRngCnf_write_IRV
        (EeDMIR_d_TgtSOCRngCnf);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/VeDMIC_e_DrvMdRaw_IRV_Merge' incorporates:
     *  SignalConversion: '<S1>/Signal Conversion3'
     *  SignalConversion generated from: '<S1>/VeDMIC_e_DrvMdRaw_write'
     *  Switch: '<S59>/Switch1'
     */
    Rte_IrvWrite_DMIR_MedTED1_VeDMIC_e_DrvMdRaw_write_IRV(VeDMIC_e_DrvMdRaw);

    /* Merge: '<Root>/VeDMID_b_DrvMdNotAvailDiag_IRV_Merge' incorporates:
     *  SignalConversion: '<S1>/Signal Conversion'
     *  SignalConversion generated from: '<S1>/VeDMID_b_DrvMdNotAvailDiag_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_VeDMID_b_DrvMdNotAvailDiag_write_IRV
        (VeDMID_b_DrvMdNotAvailDiag);

    /* Merge: '<Root>/VeDMID_b_HybridBtnActv_IRV_Merge' incorporates:
     *  SignalConversion: '<S1>/Signal Conversion1'
     *  SignalConversion generated from: '<S1>/VeDMID_b_HybridBtnActv_write'
     */
    Rte_IrvWrite_DMIR_MedTED1_VeDMID_b_HybridBtnActv_write_IRV
        (rtb_RelationalOperator3);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */
}

/* Model step function for TID2 */
FUNC(void, DMIR_CODE) DMIR_MedTED2(void) /* Explicit Task: MedTED2 */
{
    float32 rtb_Switch_cg;
    float32 rtb_Switch_jt;
    float32 rtb_Switch_kq;
    uint16 rtb_Switch_a;
    TeDMDR_e_DrvMd rtb_TmpSignalConversionAtDrvMdA;
    TeDMDR_e_DrvMdLEDStat VeDMIC_e_HybridMdLEDOn_tmp;
    TeDMIR_e_DrvMdSt rtb_AND_n_tmp;
    TeDMIR_e_DrvMdSt rtb_Merge_k;
    TeDMIR_e_DrvMdSt rtb_UnitDelay4_b;
    TePMDR_e_PowerMode rtb_Comparison1_tmp;
    boolean rtb_AND_eih;
    boolean rtb_AND_jk;
    boolean rtb_AND_nf;
    boolean rtb_AND_nfi;
    boolean rtb_Comparison1;
    boolean rtb_Comparison5;
    boolean rtb_Logical4;
    boolean rtb_Logical4_hr;
    boolean rtb_TmpSignalConversionAtDriveR;
    boolean rtb_TmpSignalConversionAtESaveM;
    boolean rtb_TmpSignalConversionAtEVMo_c;
    boolean rtb_TmpSignalConversionAtEcoDen;
    boolean rtb_TmpSignalConversionAtEngOnW;
    boolean rtb_TmpSignalConversionAtHybrid;
    boolean rtb_TmpSignalConversionAtSportM;
    boolean rtb_TmpSignalConversionAtVeDMID;
    boolean rtb_TmpSignalConversionAtVeDM_e;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' incorporates:
     *  SubSystem: '<Root>/DMIR_MedTED2'
     */
    /* SignalConversion generated from: '<S2>/DrvMdArb_Read' incorporates:
     *  Merge: '<Root>/DrvMdArb_IRV_Merge'
     */
    rtb_TmpSignalConversionAtDrvMdA =
        Rte_IrvRead_DMIR_MedTED2_DrvMdArb_write_IRV();

    /* SignalConversion generated from: '<S2>/EVModeDenied_Read' incorporates:
     *  Merge: '<Root>/EVModeDenied_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEVMo_c =
        Rte_IrvRead_DMIR_MedTED2_EVModeDenied_write_IRV();

    /* SignalConversion generated from: '<S2>/HybridModeDenied_Read' incorporates:
     *  Merge: '<Root>/HybridModeDenied_IRV_Merge'
     */
    rtb_TmpSignalConversionAtHybrid =
        Rte_IrvRead_DMIR_MedTED2_HybridModeDenied_write_IRV();

    /* SignalConversion generated from: '<S2>/ESaveModeDenied_Read' incorporates:
     *  Merge: '<Root>/ESaveModeDenied_IRV_Merge'
     */
    rtb_TmpSignalConversionAtESaveM =
        Rte_IrvRead_DMIR_MedTED2_ESaveModeDenied_write_IRV();

    /* SignalConversion generated from: '<S2>/SportModeDenied_Read' incorporates:
     *  Merge: '<Root>/SportModeDenied_IRV_Merge'
     */
    rtb_TmpSignalConversionAtSportM =
        Rte_IrvRead_DMIR_MedTED2_SportModeDenied_write_IRV();

    /* SignalConversion generated from: '<S2>/VeDMID_b_DrvMdNotAvailDiag_Read' incorporates:
     *  Merge: '<Root>/VeDMID_b_DrvMdNotAvailDiag_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeDMID =
        Rte_IrvRead_DMIR_MedTED2_VeDMID_b_DrvMdNotAvailDiag_write_IRV();

    /* SignalConversion generated from: '<S2>/EngOnWOTRsnRaw_Read' incorporates:
     *  Merge: '<Root>/EngOnWOTRsnRaw_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEngOnW =
        Rte_IrvRead_DMIR_MedTED2_EngOnWOTRsnRaw_write_IRV();

    /* SignalConversion generated from: '<S2>/DriveReady_Read' incorporates:
     *  Merge: '<Root>/DriveReady_IRV_Merge'
     */
    rtb_TmpSignalConversionAtDriveR =
        Rte_IrvRead_DMIR_MedTED2_DriveReady_write_IRV();

    /* SignalConversion generated from: '<S2>/VeDMID_b_HybridBtnActv_Read' incorporates:
     *  Merge: '<Root>/VeDMID_b_HybridBtnActv_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeDM_e =
        Rte_IrvRead_DMIR_MedTED2_VeDMID_b_HybridBtnActv_write_IRV();

    /* SignalConversion generated from: '<S2>/EcoDenied_Read' incorporates:
     *  Merge: '<Root>/EcoDenied_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEcoDen =
        Rte_IrvRead_DMIR_MedTED2_EcoDenied_write_IRV();

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Subsystem'
     */
    /* UnitDelay: '<S731>/Unit Delay4' */
    rtb_UnitDelay4_b = DMIR_ac_DW.UnitDelay4_DSTATE_n;

    /* RelationalOperator: '<S752>/Comparison1' incorporates:
     *  Constant: '<S752>/Constant Value1'
     *  Constant: '<S846>/Calib'
     *  Merge: '<Root>/EVModeInhibit2_IRV_Merge'
     *  S-Function (sfix_bitop): '<S752>/Bitwise Operator1'
     *  SignalConversion generated from: '<S2>/EVModeInhibit2_Read'
     */
    rtb_Comparison1 = ((Rte_IrvRead_DMIR_MedTED2_EVModeInhibit2_write_IRV() &
                        KeDMIR_g_DrvMdNotAvailMes) >= 1U);

    /* Outputs for Atomic SubSystem: '<S752>/EdgeRising' */
    /* Logic: '<S845>/AND' incorporates:
     *  Logic: '<S845>/OR1'
     *  UnitDelay: '<S845>/Unit Delay'
     */
    rtb_AND_eih = (rtb_Comparison1 && (!DMIR_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S845>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_c = rtb_Comparison1;

    /* End of Outputs for SubSystem: '<S752>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S752>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S849>/EdgeFalling' */
    /* Logic: '<S850>/AND' incorporates:
     *  Logic: '<S850>/OR1'
     *  UnitDelay: '<S850>/Unit Delay'
     */
    rtb_Comparison1 = ((!rtb_AND_eih) && (DMIR_ac_DW.UnitDelay_DSTATE_pj));

    /* Update for UnitDelay: '<S850>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_pj = rtb_AND_eih;

    /* End of Outputs for SubSystem: '<S849>/EdgeFalling' */

    /* Switch: '<S849>/Switch' */
    if (rtb_Comparison1)
    {
        /* Switch: '<S849>/Switch' incorporates:
         *  Constant: '<S847>/Calib'
         */
        rtb_Switch_cg = KeDMIR_t_LatchDrvMdNotAvailRsn;
    }
    else
    {
        /* Switch: '<S849>/Switch' incorporates:
         *  Constant: '<S848>/Calib'
         *  Constant: '<S849>/Constant Value1'
         *  MinMax: '<S849>/Minimum'
         *  Sum: '<S849>/Summation'
         *  UnitDelay: '<S849>/Unit Delay'
         */
        rtb_Switch_cg = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE_l - KeDMIR_t_MedTED,
                              0.0F);
    }

    /* End of Switch: '<S849>/Switch' */

    /* Update for UnitDelay: '<S849>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_l = rtb_Switch_cg;

    /* End of Outputs for SubSystem: '<S752>/Turn Off Delay Time' */

    /* Logic: '<S737>/Logical1' incorporates:
     *  Merge: '<Root>/EngOnEVFnlHMI_IRV_Merge'
     *  Merge: '<Root>/EngOnWOTRsnFnl_IRV_Merge'
     *  SignalConversion generated from: '<S2>/EngOnEVFnlHMI_Read'
     *  SignalConversion generated from: '<S2>/EngOnWOTRsnFnl_Read'
     */
    rtb_Comparison1 = ((rtb_TmpSignalConversionAtEVMo_c ||
                        (Rte_IrvRead_DMIR_MedTED2_EngOnWOTRsnFnl_write_IRV())) ||
                       (Rte_IrvRead_DMIR_MedTED2_EngOnEVFnlHMI_write_IRV()));

    /* Logic: '<S731>/Logical4' incorporates:
     *  Merge: '<Root>/DenyEsave_TonaleDiag_IRV_Merge'
     *  SignalConversion generated from: '<S2>/DenyEsave_TonaleDiag_Read'
     */
    rtb_Logical4 = (rtb_TmpSignalConversionAtESaveM ||
                    (Rte_IrvRead_DMIR_MedTED2_DenyEsave_TonaleDiag_write_IRV()));

    /* Logic: '<S735>/Logical4' incorporates:
     *  Constant: '<S735>/Constant Value'
     *  Constant: '<S761>/Constant'
     *  Constant: '<S762>/Constant'
     *  Constant: '<S763>/Calib'
     *  DataStoreRead: '<S735>/Data Store Read5'
     *  Merge: '<Root>/Merge_27'
     *  RelationalOperator: '<S735>/Comparison'
     *  RelationalOperator: '<S735>/Comparison1'
     *  RelationalOperator: '<S735>/Comparison3'
     *  S-Function (sfix_bitop): '<S735>/Bitwise Operator'
     *  SignalConversion generated from: '<S2>/Comm_e_EChargeType_read'
     */
    rtb_Logical4_hr = ((((((sint32)VeDMIR_d_ESaveActvDeniedRsn) & ((sint32)
                           KeDMIR_d_ESaveActvInhibitMsgRsn)) >= 1) && (((uint32)
                          Rte_IrvRead_DMIR_MedTED2_Comm_e_EChargeType_write_IRV())
                         == CeDMDR_e_Active_Charging)) && (((uint32)
                         rtb_TmpSignalConversionAtDrvMdA) == CeDMDR_e_ESave));

    /* Outputs for Atomic SubSystem: '<S735>/EdgeRising' */
    /* Logic: '<S760>/AND' incorporates:
     *  Logic: '<S760>/OR1'
     *  UnitDelay: '<S760>/Unit Delay'
     */
    rtb_AND_nf = (rtb_Logical4_hr && (!DMIR_ac_DW.UnitDelay_DSTATE_ps));

    /* Update for UnitDelay: '<S760>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ps = rtb_Logical4_hr;

    /* End of Outputs for SubSystem: '<S735>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S735>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S766>/EdgeFalling' */
    /* Logic: '<S767>/AND' incorporates:
     *  Logic: '<S767>/OR1'
     *  UnitDelay: '<S767>/Unit Delay'
     */
    rtb_Logical4_hr = ((!rtb_AND_nf) && (DMIR_ac_DW.UnitDelay_DSTATE_dm));

    /* Update for UnitDelay: '<S767>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_dm = rtb_AND_nf;

    /* End of Outputs for SubSystem: '<S766>/EdgeFalling' */

    /* Switch: '<S766>/Switch' */
    if (rtb_Logical4_hr)
    {
        /* Switch: '<S766>/Switch' incorporates:
         *  Constant: '<S765>/Calib'
         */
        rtb_Switch_jt = KeDMIR_t_ESaveNotAvailActvDisp;
    }
    else
    {
        /* Switch: '<S766>/Switch' incorporates:
         *  Constant: '<S764>/Calib'
         *  Constant: '<S766>/Constant Value1'
         *  MinMax: '<S766>/Minimum'
         *  Sum: '<S766>/Summation'
         *  UnitDelay: '<S766>/Unit Delay'
         */
        rtb_Switch_jt = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE_f - KeDMIR_t_MedTED,
                              0.0F);
    }

    /* End of Switch: '<S766>/Switch' */

    /* Logic: '<S766>/AND' incorporates:
     *  Constant: '<S766>/Constant Value2'
     *  RelationalOperator: '<S766>/Greater  Than'
     */
    rtb_AND_nf = (rtb_AND_nf || (rtb_Switch_jt > 0.0F));

    /* Update for UnitDelay: '<S766>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch_jt;

    /* End of Outputs for SubSystem: '<S735>/Turn Off Delay Time' */

    /* Logic: '<S755>/AND' incorporates:
     *  Constant: '<S870>/Calib'
     *  DataStoreRead: '<S731>/Data Store Read3'
     *  RelationalOperator: '<S755>/Equal'
     *  RelationalOperator: '<S755>/Equal1'
     *  UnitDelay: '<S755>/Unit Delay2'
     */
    rtb_Logical4_hr = ((((float32)VeDMIR_d_EVDeniedRsn) !=
                        KeDMIR_y_EVNotAv4OilRefreshBit) &&
                       (KeDMIR_y_EVNotAv4OilRefreshBit == ((float32)
                         DMIR_ac_DW.UnitDelay2_DSTATE_o)));

    /* Outputs for Atomic SubSystem: '<S755>/Turn Off Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S871>/EdgeFalling' */
    /* Logic: '<S872>/AND' incorporates:
     *  Logic: '<S872>/OR1'
     *  UnitDelay: '<S872>/Unit Delay'
     */
    rtb_AND_nfi = ((!rtb_Logical4_hr) && (DMIR_ac_DW.UnitDelay_DSTATE_hyy));

    /* Update for UnitDelay: '<S872>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_hyy = rtb_Logical4_hr;

    /* End of Outputs for SubSystem: '<S871>/EdgeFalling' */

    /* Switch: '<S871>/Switch' */
    if (rtb_AND_nfi)
    {
        /* Switch: '<S871>/Switch' incorporates:
         *  Constant: '<S868>/Calib'
         */
        rtb_Switch_jt = KeDMIR_t_HoldOilRefrComplete;
    }
    else
    {
        /* Switch: '<S871>/Switch' incorporates:
         *  Constant: '<S869>/Calib'
         *  Constant: '<S871>/Constant Value1'
         *  MinMax: '<S871>/Minimum'
         *  Sum: '<S871>/Summation'
         *  UnitDelay: '<S871>/Unit Delay'
         */
        rtb_Switch_jt = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE_or - KeDMIR_t_MedTED,
                              0.0F);
    }

    /* End of Switch: '<S871>/Switch' */

    /* Update for UnitDelay: '<S871>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_or = rtb_Switch_jt;

    /* End of Outputs for SubSystem: '<S755>/Turn Off Delay Time1' */

    /* Logic: '<S731>/Logical1' */
    rtb_AND_nfi = (((rtb_Comparison1 || rtb_Logical4) ||
                    rtb_TmpSignalConversionAtSportM) ||
                   rtb_TmpSignalConversionAtEcoDen);

    /* Logic: '<S749>/Logical1' incorporates:
     *  Constant: '<S824>/Constant'
     *  RelationalOperator: '<S749>/Comparison3'
     *  RelationalOperator: '<S749>/Comparison4'
     *  UnitDelay: '<S749>/Unit Delay2'
     */
    VeDMIC_b_NoDisplayMsgRstNewMdSel = ((rtb_TmpSignalConversionAtDrvMdA !=
        DMIR_ac_DW.UnitDelay2_DSTATE_m) && (((uint32)
        rtb_TmpSignalConversionAtDrvMdA) != CeDMDR_e_Hybrid));

    /* RelationalOperator: '<S749>/Comparison5' incorporates:
     *  Constant: '<S828>/Calib'
     *  Merge: '<Root>/Merge_9'
     *  SignalConversion generated from: '<S2>/Comm_e_DrvMdDrvrInput_read'
     */
    rtb_Comparison5 = (Rte_IrvRead_DMIR_MedTED2_Comm_e_DrvMdDrvrInput_write_IRV()
                       == KeDMIR_i_DrvModeDwnVal);

    /* Outputs for Atomic SubSystem: '<S749>/EdgeFalling1' */
    /* Logic: '<S819>/AND' incorporates:
     *  Logic: '<S819>/OR1'
     *  UnitDelay: '<S819>/Unit Delay'
     */
    rtb_AND_jk = ((!rtb_Comparison5) && (DMIR_ac_DW.UnitDelay_DSTATE_bs));

    /* Update for UnitDelay: '<S819>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_bs = rtb_Comparison5;

    /* End of Outputs for SubSystem: '<S749>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S749>/EdgeFalling' */
    /* Logic: '<S818>/AND' incorporates:
     *  Logic: '<S818>/OR1'
     *  UnitDelay: '<S818>/Unit Delay'
     */
    rtb_Comparison5 = ((!rtb_TmpSignalConversionAtVeDM_e) &&
                       (DMIR_ac_DW.UnitDelay_DSTATE_pn));

    /* Update for UnitDelay: '<S818>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_pn = rtb_TmpSignalConversionAtVeDM_e;

    /* End of Outputs for SubSystem: '<S749>/EdgeFalling' */

    /* Logic: '<S749>/Logical7' incorporates:
     *  Constant: '<S825>/Constant'
     *  Logic: '<S749>/Logical6'
     *  Merge: '<Root>/VeDMIC_e_DrvMdRaw_IRV_Merge'
     *  RelationalOperator: '<S749>/Comparison6'
     *  SignalConversion generated from: '<S2>/VeDMIC_e_DrvMdRaw_Read'
     */
    VeDMIC_b_NoDisplayMsgRstHybSel = ((((uint32)
        Rte_IrvRead_DMIR_MedTED2_VeDMIC_e_DrvMdRaw_write_IRV()) !=
        CeDMDR_e_Hybrid) && (rtb_AND_jk || rtb_Comparison5));

    /* Outputs for Atomic SubSystem: '<S749>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S836>/EdgeFalling' */
    /* UnitDelay: '<S913>/Unit Delay' incorporates:
     *  UnitDelay: '<S839>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDM_e = DMIR_ac_DW.UnitDelay_DSTATE_d1;

    /* Update for UnitDelay: '<S839>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_d1 = VeDMIC_b_NoDisplayMsgRstHybSel;

    /* Logic: '<S839>/OR1' incorporates:
     *  Logic: '<S836>/AND'
     */
    rtb_Comparison5 = !VeDMIC_b_NoDisplayMsgRstHybSel;

    /* Switch: '<S836>/Switch' incorporates:
     *  Logic: '<S839>/AND'
     *  Logic: '<S839>/OR1'
     */
    if (rtb_Comparison5 && rtb_TmpSignalConversionAtVeDM_e)
    {
        /* Switch: '<S836>/Switch' incorporates:
         *  Constant: '<S830>/Calib'
         */
        rtb_Switch_kq = KeDMIR_t_HybMdActvSelHold;
    }
    else
    {
        /* Switch: '<S836>/Switch' incorporates:
         *  Constant: '<S831>/Calib'
         *  Constant: '<S836>/Constant Value1'
         *  MinMax: '<S836>/Minimum'
         *  Sum: '<S836>/Summation'
         *  UnitDelay: '<S836>/Unit Delay'
         */
        rtb_Switch_kq = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE_a - KeDMIR_t_MedTED,
                              0.0F);
    }

    /* End of Switch: '<S836>/Switch' */
    /* End of Outputs for SubSystem: '<S836>/EdgeFalling' */

    /* Update for UnitDelay: '<S836>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_a = rtb_Switch_kq;

    /* Outputs for Atomic SubSystem: '<S749>/Signal Latch On With Reset1' */
    /* Logic: '<S833>/OR1' incorporates:
     *  Constant: '<S836>/Constant Value2'
     *  Logic: '<S749>/Logical5'
     *  Logic: '<S833>/NOT'
     *  Logic: '<S833>/OR'
     *  Logic: '<S836>/AND'
     *  RelationalOperator: '<S836>/Greater  Than'
     *  UnitDelay: '<S833>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDM_e = (rtb_AND_nfi ||
        (((!VeDMIC_b_NoDisplayMsgRstNewMdSel) && (rtb_Comparison5 &&
        (rtb_Switch_kq <= 0.0F))) && (DMIR_ac_DW.UnitDelay_DSTATE_bf)));

    /* End of Outputs for SubSystem: '<S749>/Turn Off Delay Time' */

    /* Update for UnitDelay: '<S833>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_bf = rtb_TmpSignalConversionAtVeDM_e;

    /* End of Outputs for SubSystem: '<S749>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S749>/EdgeRising1' */
    /* Logic: '<S820>/OR1' incorporates:
     *  UnitDelay: '<S820>/Unit Delay'
     */
    rtb_AND_jk = !DMIR_ac_DW.UnitDelay_DSTATE_ka;

    /* Update for UnitDelay: '<S820>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ka = rtb_TmpSignalConversionAtDriveR;

    /* Outputs for Atomic SubSystem: '<S749>/Signal Latch On With Reset' */
    /* Logic: '<S832>/OR1' incorporates:
     *  Constant: '<S822>/Constant'
     *  Constant: '<S826>/Constant'
     *  Logic: '<S749>/Logical2'
     *  Logic: '<S749>/Logical8'
     *  Logic: '<S820>/AND'
     *  Logic: '<S832>/NOT'
     *  Logic: '<S832>/OR'
     *  RelationalOperator: '<S749>/Comparison2'
     *  RelationalOperator: '<S749>/Comparison7'
     *  UnitDelay: '<S832>/Unit Delay'
     */
    rtb_TmpSignalConversionAtDriveR = ((rtb_TmpSignalConversionAtDriveR &&
        rtb_AND_jk) || (((!rtb_AND_nfi) && ((((uint32)
        rtb_TmpSignalConversionAtDrvMdA) == CeDMDR_e_Hybrid) || (((uint32)
        rtb_TmpSignalConversionAtDrvMdA) == CeDMDR_e_NoDrvMd))) &&
                        (DMIR_ac_DW.UnitDelay_DSTATE_cm)));

    /* End of Outputs for SubSystem: '<S749>/EdgeRising1' */

    /* Update for UnitDelay: '<S832>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_cm = rtb_TmpSignalConversionAtDriveR;

    /* End of Outputs for SubSystem: '<S749>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S749>/Signal Latch On With Reset2' */
    /* Logic: '<S834>/OR1' incorporates:
     *  Constant: '<S823>/Constant'
     *  Logic: '<S834>/NOT'
     *  Logic: '<S834>/OR'
     *  RelationalOperator: '<S749>/Comparison1'
     *  UnitDelay: '<S834>/Unit Delay'
     */
    rtb_AND_nfi = (rtb_AND_nf || ((((uint32)rtb_TmpSignalConversionAtDrvMdA) ==
                     CeDMDR_e_ESave) && (DMIR_ac_DW.UnitDelay_DSTATE_h2)));

    /* Update for UnitDelay: '<S834>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_h2 = rtb_AND_nfi;

    /* End of Outputs for SubSystem: '<S749>/Signal Latch On With Reset2' */

    /* Logic: '<S749>/Logical4' incorporates:
     *  UnitDelay: '<S835>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtDriveR = (((rtb_TmpSignalConversionAtVeDM_e ||
        rtb_TmpSignalConversionAtDriveR) || rtb_AND_nfi) ||
        (DMIR_ac_DW.UnitDelay1_DSTATE_b));

    /* Outputs for Atomic SubSystem: '<S749>/Turn Off Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S837>/EdgeFalling' */
    /* Logic: '<S840>/AND' incorporates:
     *  Logic: '<S840>/OR1'
     *  UnitDelay: '<S840>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDM_e = ((!rtb_TmpSignalConversionAtDriveR) &&
        (DMIR_ac_DW.UnitDelay_DSTATE_ft));

    /* Update for UnitDelay: '<S840>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ft = rtb_TmpSignalConversionAtDriveR;

    /* End of Outputs for SubSystem: '<S837>/EdgeFalling' */

    /* Switch: '<S837>/Switch' */
    if (rtb_TmpSignalConversionAtVeDM_e)
    {
        /* Switch: '<S837>/Switch' incorporates:
         *  Constant: '<S829>/Calib'
         */
        rtb_Switch_kq = KeDMIR_t_HoldNoDisplayMsgTime;
    }
    else
    {
        /* Switch: '<S837>/Switch' incorporates:
         *  Constant: '<S831>/Calib'
         *  Constant: '<S837>/Constant Value1'
         *  MinMax: '<S837>/Minimum'
         *  Sum: '<S837>/Summation'
         *  UnitDelay: '<S837>/Unit Delay'
         */
        rtb_Switch_kq = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE_b - KeDMIR_t_MedTED,
                              0.0F);
    }

    /* End of Switch: '<S837>/Switch' */

    /* Logic: '<S837>/AND' incorporates:
     *  Constant: '<S837>/Constant Value2'
     *  RelationalOperator: '<S837>/Greater  Than'
     */
    VeDMIC_b_NoDisplayMsg = (rtb_TmpSignalConversionAtDriveR || (rtb_Switch_kq >
        0.0F));

    /* Update for UnitDelay: '<S837>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_b = rtb_Switch_kq;

    /* End of Outputs for SubSystem: '<S749>/Turn Off Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S731>/EdgeRising2' */
    /* Logic: '<S742>/OR1' incorporates:
     *  UnitDelay: '<S742>/Unit Delay'
     */
    rtb_TmpSignalConversionAtDriveR = !DMIR_ac_DW.UnitDelay_DSTATE_hs;

    /* Update for UnitDelay: '<S742>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_hs = rtb_TmpSignalConversionAtEcoDen;

    /* End of Outputs for SubSystem: '<S731>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S731>/EdgeRising' */
    /* Logic: '<S740>/AND' incorporates:
     *  Logic: '<S740>/OR1'
     *  UnitDelay: '<S740>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDM_e = (rtb_Comparison1 &&
        (!DMIR_ac_DW.UnitDelay_DSTATE_na));

    /* Update for UnitDelay: '<S740>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_na = rtb_Comparison1;

    /* End of Outputs for SubSystem: '<S731>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S731>/EdgeRising1' */
    /* Logic: '<S741>/AND' incorporates:
     *  Logic: '<S741>/OR1'
     *  UnitDelay: '<S741>/Unit Delay'
     */
    rtb_AND_nfi = (rtb_Logical4 && (!DMIR_ac_DW.UnitDelay_DSTATE_ov));

    /* Update for UnitDelay: '<S741>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ov = rtb_Logical4;

    /* End of Outputs for SubSystem: '<S731>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S752>/Turn Off Delay Time' */
    /* If: '<S731>/If' incorporates:
     *  Constant: '<S849>/Constant Value2'
     *  Constant: '<S871>/Constant Value2'
     *  If: '<S753>/If'
     *  Inport: '<Root>/VeDMDR_d_EcoDeniedRsn'
     *  Logic: '<S752>/Logical1'
     *  Logic: '<S849>/AND'
     *  Logic: '<S871>/AND'
     *  RelationalOperator: '<S849>/Greater  Than'
     *  RelationalOperator: '<S871>/Greater  Than'
     */
    if ((rtb_AND_eih || (rtb_Switch_cg > 0.0F)) ||
            rtb_TmpSignalConversionAtVeDMID)
    {
        /* Outputs for IfAction SubSystem: '<S731>/NoDriveMdAvailRsn' incorporates:
         *  ActionPort: '<S751>/Action Port'
         */
        /* Merge: '<S731>/Merge' incorporates:
         *  Constant: '<S844>/Constant'
         *  SignalConversion generated from: '<S751>/VeDMDC_e_DrvMdInfoSt'
         */
        rtb_Merge_k = CeDMIR_e_EVNotAvailService;

        /* End of Outputs for SubSystem: '<S731>/NoDriveMdAvailRsn' */
    }
    else if (rtb_Comparison1)
    {
        /* Outputs for IfAction SubSystem: '<S731>/EVNotAvailRsn' incorporates:
         *  ActionPort: '<S738>/Action Port'
         */
        /* Switch: '<S738>/Switch' incorporates:
         *  Constant: '<S738>/Constant Value'
         *  DataStoreRead: '<S738>/Data Store Read3'
         *  Logic: '<S738>/Logical'
         *  RelationalOperator: '<S738>/Comparison5'
         */
        if ((((sint32)VeDMIR_d_EVDeniedRsn) != 0) &&
                rtb_TmpSignalConversionAtVeDM_e)
        {
            /* Switch: '<S738>/Switch' */
            rtb_Switch_a = VeDMIR_d_EVDeniedRsn;
        }
        else
        {
            /* Switch: '<S738>/Switch' incorporates:
             *  UnitDelay: '<S738>/Unit Delay'
             */
            rtb_Switch_a = DMIR_ac_DW.UnitDelay_DSTATE_b2;
        }

        /* End of Switch: '<S738>/Switch' */

        /* If: '<S738>/If' */
        if (((sint32)rtb_Switch_a) == 1)
        {
            /* Outputs for IfAction SubSystem: '<S738>/EVTempNotAvail' incorporates:
             *  ActionPort: '<S789>/Action Port'
             */
            DMIR_ac_EVTempNotAvail(&rtb_Merge_k);

            /* End of Outputs for SubSystem: '<S738>/EVTempNotAvail' */
        }
        else if (((sint32)rtb_Switch_a) == 2)
        {
            /* Outputs for IfAction SubSystem: '<S738>/SOC' incorporates:
             *  ActionPort: '<S797>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S810>/Constant'
             *  SignalConversion generated from: '<S797>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_EVNotAvailSOC;

            /* End of Outputs for SubSystem: '<S738>/SOC' */
        }
        else if (((sint32)rtb_Switch_a) == 4)
        {
            /* Outputs for IfAction SubSystem: '<S738>/Thermal' incorporates:
             *  ActionPort: '<S799>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S812>/Constant'
             *  SignalConversion generated from: '<S799>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_ThermalReq;

            /* End of Outputs for SubSystem: '<S738>/Thermal' */
        }
        else if (((sint32)rtb_Switch_a) == 8)
        {
            /* Outputs for IfAction SubSystem: '<S738>/Accel' incorporates:
             *  ActionPort: '<S786>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S800>/Constant'
             *  SignalConversion generated from: '<S786>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_EVNotAvailAccelReq;

            /* End of Outputs for SubSystem: '<S738>/Accel' */
        }
        else if (((sint32)rtb_Switch_a) == 12)
        {
            /* Outputs for IfAction SubSystem: '<S738>/OptPerf' incorporates:
             *  ActionPort: '<S796>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S809>/Constant'
             *  SignalConversion generated from: '<S796>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_EVNotAvailOptimizedPerformance;

            /* End of Outputs for SubSystem: '<S738>/OptPerf' */
        }
        else if (((sint32)rtb_Switch_a) == 16)
        {
            /* Outputs for IfAction SubSystem: '<S738>/Service' incorporates:
             *  ActionPort: '<S798>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S811>/Constant'
             *  SignalConversion generated from: '<S798>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_EVNotAvailService;

            /* End of Outputs for SubSystem: '<S738>/Service' */
        }
        else if (((sint32)rtb_Switch_a) == 32)
        {
            /* Outputs for IfAction SubSystem: '<S738>/LockTerrain' incorporates:
             *  ActionPort: '<S792>/Action Port'
             */
            DMIR_ac_LockTerrain(&rtb_Merge_k);

            /* End of Outputs for SubSystem: '<S738>/LockTerrain' */
        }
        else if (((sint32)rtb_Switch_a) == 64)
        {
            /* Outputs for IfAction SubSystem: '<S738>/LockManual' incorporates:
             *  ActionPort: '<S791>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S804>/Constant'
             *  SignalConversion generated from: '<S791>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_EVNotAvail4LockAndManual;

            /* End of Outputs for SubSystem: '<S738>/LockManual' */
        }
        else if (((sint32)rtb_Switch_a) == 128)
        {
            /* Outputs for IfAction SubSystem: '<S738>/LowTerrain' incorporates:
             *  ActionPort: '<S794>/Action Port'
             */
            DMIR_ac_LockTerrain(&rtb_Merge_k);

            /* End of Outputs for SubSystem: '<S738>/LowTerrain' */
        }
        else if (((sint32)rtb_Switch_a) == 256)
        {
            /* Outputs for IfAction SubSystem: '<S738>/LowManual' incorporates:
             *  ActionPort: '<S793>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S806>/Constant'
             *  SignalConversion generated from: '<S793>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_EVNotAvail4LowAndManual;

            /* End of Outputs for SubSystem: '<S738>/LowManual' */
        }
        else if (((sint32)rtb_Switch_a) == 513)
        {
            /* Outputs for IfAction SubSystem: '<S738>/Fuel' incorporates:
             *  ActionPort: '<S790>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S803>/Constant'
             *  SignalConversion generated from: '<S790>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_EVNotAvailFuelRefresh;

            /* End of Outputs for SubSystem: '<S738>/Fuel' */
        }
        else if ((((sint32)rtb_Switch_a) == 1025) || (((sint32)rtb_Switch_a) ==
                  2049))
        {
            /* Outputs for IfAction SubSystem: '<S738>/OilOrSpark' incorporates:
             *  ActionPort: '<S795>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S808>/Constant'
             *  SignalConversion generated from: '<S795>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_EVNotAvailOilOrSpark;

            /* End of Outputs for SubSystem: '<S738>/OilOrSpark' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S738>/Default' incorporates:
             *  ActionPort: '<S787>/Action Port'
             */
            DMIR_ac_EVTempNotAvail(&rtb_Merge_k);

            /* End of Outputs for SubSystem: '<S738>/Default' */
        }

        /* End of If: '<S738>/If' */

        /* Update for UnitDelay: '<S738>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_b2 = rtb_Switch_a;

        /* End of Outputs for SubSystem: '<S731>/EVNotAvailRsn' */
    }
    else if (rtb_Logical4)
    {
        /* Outputs for IfAction SubSystem: '<S731>/ESaveNotAvailRsn' incorporates:
         *  ActionPort: '<S736>/Action Port'
         */
        /* Switch: '<S736>/Switch' incorporates:
         *  Constant: '<S736>/Constant Value'
         *  DataStoreRead: '<S736>/Data Store Read3'
         *  Logic: '<S736>/Logical'
         *  RelationalOperator: '<S736>/Comparison5'
         */
        if ((((sint32)VeDMIR_d_ESaveDeniedRsn) != 0) && rtb_AND_nfi)
        {
            /* Switch: '<S736>/Switch' */
            rtb_Switch_a = VeDMIR_d_ESaveDeniedRsn;
        }
        else
        {
            /* Switch: '<S736>/Switch' incorporates:
             *  UnitDelay: '<S736>/Unit Delay'
             */
            rtb_Switch_a = DMIR_ac_DW.UnitDelay_DSTATE_bc;
        }

        /* End of Switch: '<S736>/Switch' */

        /* If: '<S736>/If' */
        if (((sint32)rtb_Switch_a) == 1)
        {
            /* Outputs for IfAction SubSystem: '<S736>/ESaveTempNotAvail' incorporates:
             *  ActionPort: '<S772>/Action Port'
             */
            DMIR_ac_ESaveTempNotAvail(&rtb_Merge_k);

            /* End of Outputs for SubSystem: '<S736>/ESaveTempNotAvail' */
        }
        else if (((sint32)rtb_Switch_a) == 2)
        {
            /* Outputs for IfAction SubSystem: '<S736>/Sport' incorporates:
             *  ActionPort: '<S776>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S784>/Constant'
             *  SignalConversion generated from: '<S776>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_ESaveNotAvailSport;

            /* End of Outputs for SubSystem: '<S736>/Sport' */
        }
        else if (((sint32)rtb_Switch_a) == 4)
        {
            /* Outputs for IfAction SubSystem: '<S736>/Snow' incorporates:
             *  ActionPort: '<S775>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S783>/Constant'
             *  SignalConversion generated from: '<S775>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_ESaveNotAvailSnow;

            /* End of Outputs for SubSystem: '<S736>/Snow' */
        }
        else if (((sint32)rtb_Switch_a) == 8)
        {
            /* Outputs for IfAction SubSystem: '<S736>/SandMud' incorporates:
             *  ActionPort: '<S774>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S782>/Constant'
             *  SignalConversion generated from: '<S774>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_ESaveNotAvailSandMud;

            /* End of Outputs for SubSystem: '<S736>/SandMud' */
        }
        else if (((sint32)rtb_Switch_a) == 16)
        {
            /* Outputs for IfAction SubSystem: '<S736>/Rock' incorporates:
             *  ActionPort: '<S773>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S781>/Constant'
             *  SignalConversion generated from: '<S773>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_ESaveNotAvailRock;

            /* End of Outputs for SubSystem: '<S736>/Rock' */
        }
        else if (((sint32)rtb_Switch_a) == 32)
        {
            /* Outputs for IfAction SubSystem: '<S736>/DNA_EsaveDenied_DrvMd' incorporates:
             *  ActionPort: '<S769>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S778>/Constant'
             *  SignalConversion generated from: '<S769>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_ESaveNotAvailDrvMdReq;

            /* End of Outputs for SubSystem: '<S736>/DNA_EsaveDenied_DrvMd' */
        }
        else if (((sint32)rtb_Switch_a) == 64)
        {
            /* Outputs for IfAction SubSystem: '<S736>/DNA_EsaveDenied_Diag' incorporates:
             *  ActionPort: '<S768>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S777>/Constant'
             *  SignalConversion generated from: '<S768>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_EsaveNotAvailServiceReq;

            /* End of Outputs for SubSystem: '<S736>/DNA_EsaveDenied_Diag' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S736>/Default' incorporates:
             *  ActionPort: '<S770>/Action Port'
             */
            DMIR_ac_ESaveTempNotAvail(&rtb_Merge_k);

            /* End of Outputs for SubSystem: '<S736>/Default' */
        }

        /* End of If: '<S736>/If' */

        /* Update for UnitDelay: '<S736>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_bc = rtb_Switch_a;

        /* End of Outputs for SubSystem: '<S731>/ESaveNotAvailRsn' */
    }
    else if (rtb_TmpSignalConversionAtSportM)
    {
        /* Outputs for IfAction SubSystem: '<S731>/SportNotAvailRsn' incorporates:
         *  ActionPort: '<S756>/Action Port'
         */
        /* Merge: '<S731>/Merge' incorporates:
         *  Constant: '<S874>/Constant'
         *  SignalConversion generated from: '<S756>/VeDMDC_e_DrvMdInfoSt'
         */
        rtb_Merge_k = CeDMIR_e_SportTempNotAvail;

        /* End of Outputs for SubSystem: '<S731>/SportNotAvailRsn' */
    }
    else if (rtb_TmpSignalConversionAtEcoDen)
    {
        (void)Rte_Read_VeDMDR_d_EcoDeniedRsn_Value(&rtb_Switch_a);

        /* Outputs for IfAction SubSystem: '<S731>/EcoNotAvail' incorporates:
         *  ActionPort: '<S739>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S731>/EdgeRising2' */
        /* Switch: '<S739>/Switch' incorporates:
         *  Inport: '<Root>/VeDMDR_d_EcoDeniedRsn'
         *  Logic: '<S742>/AND'
         */
        if (!rtb_TmpSignalConversionAtDriveR)
        {
            /* Switch: '<S739>/Switch' incorporates:
             *  UnitDelay: '<S739>/Unit Delay'
             */
            rtb_Switch_a = DMIR_ac_DW.UnitDelay_DSTATE_oy;
        }

        /* End of Switch: '<S739>/Switch' */
        /* End of Outputs for SubSystem: '<S731>/EdgeRising2' */

        /* If: '<S739>/If' */
        if (((sint32)rtb_Switch_a) == 2)
        {
            /* Outputs for IfAction SubSystem: '<S739>/EcoOnlyAvailAuto' incorporates:
             *  ActionPort: '<S815>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S817>/Constant'
             *  SignalConversion generated from: '<S815>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_EcoOnlyAvailAuto;

            /* End of Outputs for SubSystem: '<S739>/EcoOnlyAvailAuto' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S739>/ECOTempNotAvail' incorporates:
             *  ActionPort: '<S814>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S816>/Constant'
             *  SignalConversion generated from: '<S814>/Out1'
             */
            rtb_Merge_k = CeDMIR_e_EcoTempNotAvail;

            /* End of Outputs for SubSystem: '<S739>/ECOTempNotAvail' */
        }

        /* End of If: '<S739>/If' */

        /* Update for UnitDelay: '<S739>/Unit Delay' */
        DMIR_ac_DW.UnitDelay_DSTATE_oy = rtb_Switch_a;

        /* End of Outputs for SubSystem: '<S731>/EcoNotAvail' */
    }
    else if (rtb_AND_nf)
    {
        /* Outputs for IfAction SubSystem: '<S731>/ESaveActiveNotAvail' incorporates:
         *  ActionPort: '<S734>/Action Port'
         */
        /* Merge: '<S731>/Merge' incorporates:
         *  Constant: '<S759>/Constant'
         *  SignalConversion generated from: '<S734>/VeDMDC_e_DrvMdInfoSt'
         */
        rtb_Merge_k = CeDMIR_e_ESaveActvNotAvailManual;

        /* End of Outputs for SubSystem: '<S731>/ESaveActiveNotAvail' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S755>/Turn Off Delay Time1' */
        if (rtb_Logical4_hr || (rtb_Switch_jt > 0.0F))
        {
            /* Outputs for IfAction SubSystem: '<S731>/OilRefreshComplete' incorporates:
             *  ActionPort: '<S754>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S867>/Constant'
             *  SignalConversion generated from: '<S754>/VeDMDC_e_DrvMdInfoSt'
             */
            rtb_Merge_k = CeDMIR_e_OilRefreshComplete;

            /* End of Outputs for SubSystem: '<S731>/OilRefreshComplete' */
        }
        else if (VeDMIC_b_NoDisplayMsg)
        {
            /* Outputs for IfAction SubSystem: '<S731>/NoDisplay' incorporates:
             *  ActionPort: '<S750>/Action Port'
             */
            /* Merge: '<S731>/Merge' incorporates:
             *  Constant: '<S842>/Constant'
             *  SignalConversion generated from: '<S750>/VeDMDC_e_DrvMdInfoSt'
             */
            rtb_Merge_k = CeDMIR_e_NoDisplay;

            /* End of Outputs for SubSystem: '<S731>/NoDisplay' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S731>/NormalDriveMode' incorporates:
             *  ActionPort: '<S753>/Action Port'
             */
            if (((sint32)rtb_TmpSignalConversionAtDrvMdA) == 0)
            {
                /* Outputs for IfAction SubSystem: '<S753>/NoDrivemode' incorporates:
                 *  ActionPort: '<S857>/Action Port'
                 */
                /* If: '<S753>/If' */
                DMIR_ac_NoDrivemode(&rtb_Merge_k);

                /* End of Outputs for SubSystem: '<S753>/NoDrivemode' */
            }
            else if (((sint32)rtb_TmpSignalConversionAtDrvMdA) == 1)
            {
                /* Outputs for IfAction SubSystem: '<S753>/Hybrid' incorporates:
                 *  ActionPort: '<S856>/Action Port'
                 */
                /* If: '<S753>/If' incorporates:
                 *  Constant: '<S863>/Constant'
                 *  Merge: '<S731>/Merge'
                 *  SignalConversion generated from: '<S856>/Out1'
                 */
                rtb_Merge_k = CeDMIR_e_HybridSt;

                /* End of Outputs for SubSystem: '<S753>/Hybrid' */
            }
            else if (((sint32)rtb_TmpSignalConversionAtDrvMdA) == 2)
            {
                /* Outputs for IfAction SubSystem: '<S753>/EV' incorporates:
                 *  ActionPort: '<S853>/Action Port'
                 */
                /* If: '<S753>/If' incorporates:
                 *  Constant: '<S860>/Constant'
                 *  Merge: '<S731>/Merge'
                 *  SignalConversion generated from: '<S853>/Out1'
                 */
                rtb_Merge_k = CeDMIR_e_EVSt;

                /* End of Outputs for SubSystem: '<S753>/EV' */
            }
            else if ((((sint32)rtb_TmpSignalConversionAtDrvMdA) == 3) ||
                     (((sint32)rtb_TmpSignalConversionAtDrvMdA) == 5))
            {
                /* Outputs for IfAction SubSystem: '<S753>/ESave' incorporates:
                 *  ActionPort: '<S852>/Action Port'
                 */
                /* If: '<S753>/If' incorporates:
                 *  Constant: '<S859>/Constant'
                 *  Merge: '<S731>/Merge'
                 *  SignalConversion generated from: '<S852>/Out1'
                 */
                rtb_Merge_k = CeDMIR_e_ESaveSt;

                /* End of Outputs for SubSystem: '<S753>/ESave' */
            }
            else if (((sint32)rtb_TmpSignalConversionAtDrvMdA) == 4)
            {
                /* Outputs for IfAction SubSystem: '<S753>/Sport' incorporates:
                 *  ActionPort: '<S858>/Action Port'
                 */
                /* If: '<S753>/If' incorporates:
                 *  Constant: '<S865>/Constant'
                 *  Merge: '<S731>/Merge'
                 *  SignalConversion generated from: '<S858>/Out1'
                 */
                rtb_Merge_k = CeDMIR_e_SportSt;

                /* End of Outputs for SubSystem: '<S753>/Sport' */
            }
            else if (((sint32)rtb_TmpSignalConversionAtDrvMdA) == 8)
            {
                /* Outputs for IfAction SubSystem: '<S753>/Eco' incorporates:
                 *  ActionPort: '<S854>/Action Port'
                 */
                /* If: '<S753>/If' incorporates:
                 *  Constant: '<S861>/Constant'
                 *  Merge: '<S731>/Merge'
                 *  SignalConversion generated from: '<S854>/Out1'
                 */
                rtb_Merge_k = CeDMIR_e_EcoSt;

                /* End of Outputs for SubSystem: '<S753>/Eco' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S753>/Failure_NoDriveMode' incorporates:
                 *  ActionPort: '<S855>/Action Port'
                 */
                /* If: '<S753>/If' */
                DMIR_ac_NoDrivemode(&rtb_Merge_k);

                /* End of Outputs for SubSystem: '<S753>/Failure_NoDriveMode' */
            }

            /* End of Outputs for SubSystem: '<S731>/NormalDriveMode' */
        }

        /* End of Outputs for SubSystem: '<S755>/Turn Off Delay Time1' */
    }

    /* End of If: '<S731>/If' */
    /* End of Outputs for SubSystem: '<S752>/Turn Off Delay Time' */

    /* RelationalOperator: '<S731>/Comparison4' incorporates:
     *  Switch: '<S731>/Switch'
     *  Switch: '<S731>/Switch1'
     *  UnitDelay: '<S731>/Unit Delay4'
     */
    rtb_AND_n_tmp = DMIR_ac_DW.UnitDelay4_DSTATE_n;

    /* Logic: '<S731>/Logical3' incorporates:
     *  RelationalOperator: '<S731>/Comparison1'
     *  RelationalOperator: '<S731>/Comparison4'
     *  UnitDelay: '<S731>/Unit Delay1'
     *  UnitDelay: '<S731>/Unit Delay3'
     */
    rtb_AND_eih = ((DMIR_ac_DW.UnitDelay1_DSTATE_p2 != rtb_Merge_k) ||
                   (rtb_AND_n_tmp != DMIR_ac_DW.UnitDelay3_DSTATE));

    /* Outputs for Atomic SubSystem: '<S731>/StopWatchResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S757>/EdgeRising_F2T' */
    /* Logic: '<S875>/OR1' incorporates:
     *  UnitDelay: '<S875>/Unit Delay'
     */
    rtb_Comparison1 = !DMIR_ac_DW.UnitDelay_DSTATE_dc;

    /* Update for UnitDelay: '<S875>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_dc = rtb_AND_eih;

    /* Switch: '<S757>/Switch' incorporates:
     *  Logic: '<S875>/AND'
     */
    if (rtb_AND_eih && rtb_Comparison1)
    {
        /* Switch: '<S757>/Switch' incorporates:
         *  Constant: '<S757>/Constant Value2'
         */
        rtb_Switch_cg = 0.0F;
    }
    else
    {
        /* Switch: '<S757>/Switch' incorporates:
         *  Constant: '<S748>/Calib'
         *  Sum: '<S757>/Subtraction'
         *  UnitDelay: '<S757>/Unit Delay'
         */
        rtb_Switch_cg = KeDMIR_t_MedTED + DMIR_ac_DW.UnitDelay_DSTATE_o;
    }

    /* End of Switch: '<S757>/Switch' */
    /* End of Outputs for SubSystem: '<S757>/EdgeRising_F2T' */

    /* Update for UnitDelay: '<S757>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_o = rtb_Switch_cg;

    /* End of Outputs for SubSystem: '<S731>/StopWatchResetTriggerEnabled' */

    /* Switch: '<S731>/Switch' incorporates:
     *  Constant: '<S745>/Calib'
     *  Constant: '<S746>/Calib'
     *  Constant: '<S747>/Calib'
     *  DataStoreWrite: '<S731>/Data Store Write3'
     *  RelationalOperator: '<S731>/Comparison'
     *  Switch: '<S731>/Switch1'
     */
    if (KeDMIR_b_DrvMdInfoStsOvrrd)
    {
        DMIR_ac_DW.VeDMIR_e_DrvMdInfoSt_DS = KeDMIR_e_DrvMdInfoStsOvrrdVal;
    }
    else if (KeDMIR_t_LatchPopUpMsg > rtb_Switch_cg)
    {
        /* Switch: '<S731>/Switch1' incorporates:
         *  DataStoreWrite: '<S731>/Data Store Write3'
         *  Switch: '<S731>/Switch'
         */
        DMIR_ac_DW.VeDMIR_e_DrvMdInfoSt_DS = rtb_AND_n_tmp;
    }
    else
    {
        DMIR_ac_DW.VeDMIR_e_DrvMdInfoSt_DS = rtb_Merge_k;
    }

    /* RelationalOperator: '<S749>/Comparison8' incorporates:
     *  UnitDelay: '<S749>/Unit Delay1'
     */
    rtb_AND_eih = (rtb_TmpSignalConversionAtDrvMdA !=
                   DMIR_ac_DW.UnitDelay1_DSTATE_a);

    /* Outputs for Atomic SubSystem: '<S749>/EdgeRising2' */
    /* Logic: '<S821>/OR1' incorporates:
     *  UnitDelay: '<S821>/Unit Delay'
     */
    rtb_Comparison1 = !DMIR_ac_DW.UnitDelay_DSTATE_gr;

    /* Update for UnitDelay: '<S821>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_gr = rtb_AND_eih;

    /* Outputs for Atomic SubSystem: '<S835>/Counter Reset Enabled ' */
    /* Switch: '<S838>/Switch' incorporates:
     *  Logic: '<S821>/AND'
     *  Logic: '<S835>/Logical9'
     *  Switch: '<S838>/Switch2'
     *  UnitDelay: '<S835>/Unit Delay1'
     */
    if (rtb_AND_eih && rtb_Comparison1)
    {
        /* Switch: '<S838>/Switch' incorporates:
         *  Constant: '<S838>/Constant Value2'
         */
        rtb_Switch_a = 0U;
    }
    else if (!DMIR_ac_DW.UnitDelay1_DSTATE_b)
    {
        /* Switch: '<S838>/Switch2' incorporates:
         *  Constant: '<S838>/Constant Value1'
         *  Sum: '<S838>/Subtraction'
         *  Switch: '<S838>/Switch'
         *  UnitDelay: '<S838>/Unit Delay'
         */
        rtb_Switch_a = (uint16)(((uint32)DMIR_ac_DW.UnitDelay_DSTATE_gw) + 1U);
    }
    else
    {
        /* Switch: '<S838>/Switch' incorporates:
         *  Switch: '<S838>/Switch2'
         *  UnitDelay: '<S838>/Unit Delay'
         */
        rtb_Switch_a = DMIR_ac_DW.UnitDelay_DSTATE_gw;
    }

    /* End of Switch: '<S838>/Switch' */
    /* End of Outputs for SubSystem: '<S749>/EdgeRising2' */

    /* Update for UnitDelay: '<S838>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_gw = rtb_Switch_a;

    /* End of Outputs for SubSystem: '<S835>/Counter Reset Enabled ' */

    /* RelationalOperator: '<S876>/Comparison4' incorporates:
     *  Merge: '<Root>/PowerMode_IRV_Merge'
     *  RelationalOperator: '<S876>/Comparison1'
     *  RelationalOperator: '<S876>/Comparison2'
     *  SignalConversion generated from: '<S2>/PowerMode_Read'
     */
    rtb_Comparison1_tmp = Rte_IrvRead_DMIR_MedTED2_PowerMode_write_IRV();

    /* Outputs for Atomic SubSystem: '<S876>/Signal Latch On With Reset' */
    /* Logic: '<S911>/OR1' incorporates:
     *  Constant: '<S906>/Constant'
     *  Constant: '<S907>/Constant'
     *  Constant: '<S908>/Constant'
     *  Logic: '<S876>/Logical1'
     *  Logic: '<S911>/NOT'
     *  Logic: '<S911>/OR'
     *  RelationalOperator: '<S876>/Comparison1'
     *  RelationalOperator: '<S876>/Comparison2'
     *  RelationalOperator: '<S876>/Comparison4'
     *  UnitDelay: '<S911>/Unit Delay'
     */
    rtb_Comparison1 = (((((uint32)rtb_Comparison1_tmp) ==
                         CePMDR_e_PowerMode_Crank) || (((uint32)
                          rtb_Comparison1_tmp) == CePMDR_e_PowerMode_Run)) ||
                       ((((uint32)rtb_Comparison1_tmp) != CePMDR_e_PowerMode_Off)
                        && (DMIR_ac_DW.UnitDelay_DSTATE_gl)));

    /* Update for UnitDelay: '<S911>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_gl = rtb_Comparison1;

    /* End of Outputs for SubSystem: '<S876>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S876>/EdgeRising' */
    /* Logic: '<S905>/AND' incorporates:
     *  Logic: '<S905>/OR1'
     *  UnitDelay: '<S905>/Unit Delay'
     */
    rtb_AND_eih = (rtb_Comparison1 && (!DMIR_ac_DW.UnitDelay_DSTATE_pt));

    /* Update for UnitDelay: '<S905>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_pt = rtb_Comparison1;

    /* End of Outputs for SubSystem: '<S876>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S876>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S912>/EdgeFalling' */
    /* Logic: '<S913>/AND' incorporates:
     *  Logic: '<S913>/OR1'
     *  UnitDelay: '<S913>/Unit Delay'
     */
    rtb_Comparison1 = ((!rtb_AND_eih) && (DMIR_ac_DW.UnitDelay_DSTATE_f3));

    /* Update for UnitDelay: '<S913>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_f3 = rtb_AND_eih;

    /* End of Outputs for SubSystem: '<S912>/EdgeFalling' */

    /* Switch: '<S912>/Switch' */
    if (rtb_Comparison1)
    {
        /* Switch: '<S912>/Switch' incorporates:
         *  Constant: '<S909>/Calib'
         */
        rtb_Switch_cg = KeDMIR_t_CrnkLEDOn;
    }
    else
    {
        /* Switch: '<S912>/Switch' incorporates:
         *  Constant: '<S910>/Calib'
         *  Constant: '<S912>/Constant Value1'
         *  MinMax: '<S912>/Minimum'
         *  Sum: '<S912>/Summation'
         *  UnitDelay: '<S912>/Unit Delay'
         */
        rtb_Switch_cg = fmaxf(DMIR_ac_DW.UnitDelay_DSTATE - KeDMIR_t_MedTED,
                              0.0F);
    }

    /* End of Switch: '<S912>/Switch' */

    /* Logic: '<S912>/AND' incorporates:
     *  Constant: '<S912>/Constant Value2'
     *  RelationalOperator: '<S912>/Greater  Than'
     */
    rtb_AND_eih = (rtb_AND_eih || (rtb_Switch_cg > 0.0F));

    /* Update for UnitDelay: '<S912>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE = rtb_Switch_cg;

    /* End of Outputs for SubSystem: '<S876>/Turn Off Delay Time' */

    /* Logic: '<S732>/Logical2' incorporates:
     *  Merge: '<Root>/EngOnInEVLED_IRV_Merge'
     *  SignalConversion generated from: '<S2>/EngOnInEVLED_Read'
     */
    rtb_TmpSignalConversionAtEVMo_c = ((rtb_TmpSignalConversionAtEngOnW ||
        rtb_TmpSignalConversionAtEVMo_c) ||
        (Rte_IrvRead_DMIR_MedTED2_EngOnInEVLED_write_IRV()));

    /* If: '<S732>/If' incorporates:
     *  DataTypeConversion: '<S732>/Data Type Conversion1'
     *  SignalConversion generated from: '<S2>/DrvMdArb_Read'
     */
    if (((sint32)rtb_TmpSignalConversionAtDrvMdA) == 0)
    {
        /* Outputs for IfAction SubSystem: '<S732>/NoDriveMode' incorporates:
         *  ActionPort: '<S900>/Action Port'
         */
        /* Merge: '<S732>/Merge' incorporates:
         *  Constant: '<S987>/Constant'
         *  SignalConversion generated from: '<S900>/DMDC_b_HybridMdLEDOn'
         */
        DMIR_ac_B.Merge = CeDMDR_e_LEDOff;

        /* Merge: '<S732>/Merge1' incorporates:
         *  Constant: '<S985>/Constant'
         *  SignalConversion generated from: '<S900>/DMDC_b_EVMdLEDON'
         */
        DMIR_ac_B.Merge1 = CeDMDR_e_LEDOff;

        /* Merge: '<S732>/Merge2' incorporates:
         *  Constant: '<S984>/Constant'
         *  SignalConversion generated from: '<S900>/DMDC_b_ESaveLEDON'
         */
        DMIR_ac_B.Merge2 = CeDMDR_e_LEDOff;

        /* Merge: '<S732>/Merge3' incorporates:
         *  Constant: '<S986>/Constant'
         *  SignalConversion generated from: '<S900>/DMDC_b_SportLEDON'
         */
        DMIR_ac_B.Merge3 = CeDMDR_e_LEDOff;

        /* Merge: '<S732>/Merge4' incorporates:
         *  Constant: '<S988>/Constant'
         *  SignalConversion generated from: '<S900>/DMDC_b_EcoMdLEDON'
         */
        DMIR_ac_B.Merge4 = CeDMDR_e_LEDOff;

        /* End of Outputs for SubSystem: '<S732>/NoDriveMode' */
    }
    else if (((sint32)rtb_TmpSignalConversionAtDrvMdA) == 1)
    {
        /* Outputs for IfAction SubSystem: '<S732>/Hybrid' incorporates:
         *  ActionPort: '<S886>/Action Port'
         */
        /* Switch: '<S886>/Switch1' */
        if (rtb_TmpSignalConversionAtEcoDen)
        {
            /* Merge: '<S732>/Merge4' incorporates:
             *  Constant: '<S957>/Constant'
             */
            DMIR_ac_B.Merge4 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge4' incorporates:
             *  Constant: '<S948>/Constant'
             */
            DMIR_ac_B.Merge4 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S886>/Switch1' */

        /* Switch: '<S886>/Switch3' incorporates:
         *  Constant: '<S958>/Calib'
         *  Logic: '<S886>/Logical'
         *  Logic: '<S886>/Logical1'
         *  Switch: '<S886>/Switch2'
         */
        if (rtb_TmpSignalConversionAtHybrid)
        {
            /* Merge: '<S732>/Merge' incorporates:
             *  Constant: '<S949>/Constant'
             */
            DMIR_ac_B.Merge = CeDMDR_e_LEDBlink;
        }
        else if ((((rtb_TmpSignalConversionAtEVMo_c ||
                    rtb_TmpSignalConversionAtESaveM) ||
                   rtb_TmpSignalConversionAtSportM) ||
                  rtb_TmpSignalConversionAtEcoDen) &&
                 (KeDMIR_b_OnlyOneDriveMdLEDActive))
        {
            /* Switch: '<S886>/Switch2' incorporates:
             *  Constant: '<S947>/Constant'
             *  Merge: '<S732>/Merge'
             */
            DMIR_ac_B.Merge = CeDMDR_e_LEDOff;
        }
        else
        {
            /* Merge: '<S732>/Merge' incorporates:
             *  Constant: '<S951>/Constant'
             *  Switch: '<S886>/Switch2'
             */
            DMIR_ac_B.Merge = CeDMDR_e_LEDOn;
        }

        /* End of Switch: '<S886>/Switch3' */

        /* Switch: '<S886>/Switch4' */
        if (rtb_TmpSignalConversionAtESaveM)
        {
            /* Merge: '<S732>/Merge2' incorporates:
             *  Constant: '<S953>/Constant'
             */
            DMIR_ac_B.Merge2 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge2' incorporates:
             *  Constant: '<S954>/Constant'
             */
            DMIR_ac_B.Merge2 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S886>/Switch4' */

        /* Switch: '<S886>/Switch5' */
        if (rtb_TmpSignalConversionAtSportM)
        {
            /* Merge: '<S732>/Merge3' incorporates:
             *  Constant: '<S955>/Constant'
             */
            DMIR_ac_B.Merge3 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge3' incorporates:
             *  Constant: '<S956>/Constant'
             */
            DMIR_ac_B.Merge3 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S886>/Switch5' */

        /* Switch: '<S886>/Switch6' */
        if (rtb_TmpSignalConversionAtEVMo_c)
        {
            /* Merge: '<S732>/Merge1' incorporates:
             *  Constant: '<S950>/Constant'
             */
            DMIR_ac_B.Merge1 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge1' incorporates:
             *  Constant: '<S952>/Constant'
             */
            DMIR_ac_B.Merge1 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S886>/Switch6' */
        /* End of Outputs for SubSystem: '<S732>/Hybrid' */
    }
    else if (((sint32)rtb_TmpSignalConversionAtDrvMdA) == 2)
    {
        /* Outputs for IfAction SubSystem: '<S732>/EV' incorporates:
         *  ActionPort: '<S879>/Action Port'
         */
        /* Switch: '<S879>/Switch2' */
        if (rtb_TmpSignalConversionAtHybrid)
        {
            /* Merge: '<S732>/Merge' incorporates:
             *  Constant: '<S928>/Constant'
             */
            DMIR_ac_B.Merge = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge' incorporates:
             *  Constant: '<S931>/Constant'
             */
            DMIR_ac_B.Merge = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S879>/Switch2' */

        /* Switch: '<S879>/Switch3' */
        if (rtb_TmpSignalConversionAtESaveM)
        {
            /* Merge: '<S732>/Merge2' incorporates:
             *  Constant: '<S934>/Constant'
             */
            DMIR_ac_B.Merge2 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge2' incorporates:
             *  Constant: '<S935>/Constant'
             */
            DMIR_ac_B.Merge2 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S879>/Switch3' */

        /* Switch: '<S879>/Switch4' */
        if (rtb_TmpSignalConversionAtSportM)
        {
            /* Merge: '<S732>/Merge3' incorporates:
             *  Constant: '<S932>/Constant'
             */
            DMIR_ac_B.Merge3 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge3' incorporates:
             *  Constant: '<S933>/Constant'
             */
            DMIR_ac_B.Merge3 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S879>/Switch4' */

        /* Switch: '<S879>/Switch5' incorporates:
         *  Constant: '<S937>/Calib'
         *  Logic: '<S879>/Logical'
         *  Logic: '<S879>/Logical1'
         *  Switch: '<S879>/Switch1'
         */
        if (rtb_TmpSignalConversionAtEVMo_c)
        {
            /* Merge: '<S732>/Merge1' incorporates:
             *  Constant: '<S926>/Constant'
             */
            DMIR_ac_B.Merge1 = CeDMDR_e_LEDBlink;
        }
        else if ((((rtb_TmpSignalConversionAtESaveM ||
                    rtb_TmpSignalConversionAtSportM) ||
                   rtb_TmpSignalConversionAtHybrid) ||
                  rtb_TmpSignalConversionAtEcoDen) &&
                 (KeDMIR_b_OnlyOneDriveMdLEDActive))
        {
            /* Switch: '<S879>/Switch1' incorporates:
             *  Constant: '<S929>/Constant'
             *  Merge: '<S732>/Merge1'
             */
            DMIR_ac_B.Merge1 = CeDMDR_e_LEDOff;
        }
        else
        {
            /* Merge: '<S732>/Merge1' incorporates:
             *  Constant: '<S930>/Constant'
             *  Switch: '<S879>/Switch1'
             */
            DMIR_ac_B.Merge1 = CeDMDR_e_LEDOn;
        }

        /* End of Switch: '<S879>/Switch5' */

        /* Switch: '<S879>/Switch6' */
        if (rtb_TmpSignalConversionAtEcoDen)
        {
            /* Merge: '<S732>/Merge4' incorporates:
             *  Constant: '<S936>/Constant'
             */
            DMIR_ac_B.Merge4 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge4' incorporates:
             *  Constant: '<S927>/Constant'
             */
            DMIR_ac_B.Merge4 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S879>/Switch6' */
        /* End of Outputs for SubSystem: '<S732>/EV' */
    }
    else if ((((sint32)rtb_TmpSignalConversionAtDrvMdA) == 3) || (((sint32)
               rtb_TmpSignalConversionAtDrvMdA) == 5))
    {
        /* Outputs for IfAction SubSystem: '<S732>/ESave' incorporates:
         *  ActionPort: '<S878>/Action Port'
         */
        /* Switch: '<S878>/Switch2' */
        if (rtb_TmpSignalConversionAtEcoDen)
        {
            /* Merge: '<S732>/Merge4' incorporates:
             *  Constant: '<S924>/Constant'
             */
            DMIR_ac_B.Merge4 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge4' incorporates:
             *  Constant: '<S915>/Constant'
             */
            DMIR_ac_B.Merge4 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S878>/Switch2' */

        /* Switch: '<S878>/Switch3' */
        if (rtb_TmpSignalConversionAtHybrid)
        {
            /* Merge: '<S732>/Merge' incorporates:
             *  Constant: '<S916>/Constant'
             */
            DMIR_ac_B.Merge = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge' incorporates:
             *  Constant: '<S919>/Constant'
             */
            DMIR_ac_B.Merge = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S878>/Switch3' */

        /* Switch: '<S878>/Switch4' incorporates:
         *  Constant: '<S925>/Calib'
         *  Logic: '<S878>/Logical'
         *  Logic: '<S878>/Logical1'
         *  Switch: '<S878>/Switch1'
         */
        if (rtb_TmpSignalConversionAtESaveM)
        {
            /* Merge: '<S732>/Merge2' incorporates:
             *  Constant: '<S920>/Constant'
             */
            DMIR_ac_B.Merge2 = CeDMDR_e_LEDBlink;
        }
        else if ((((rtb_TmpSignalConversionAtEVMo_c ||
                    rtb_TmpSignalConversionAtSportM) ||
                   rtb_TmpSignalConversionAtHybrid) ||
                  rtb_TmpSignalConversionAtEcoDen) &&
                 (KeDMIR_b_OnlyOneDriveMdLEDActive))
        {
            /* Switch: '<S878>/Switch1' incorporates:
             *  Constant: '<S921>/Constant'
             *  Merge: '<S732>/Merge2'
             */
            DMIR_ac_B.Merge2 = CeDMDR_e_LEDOff;
        }
        else
        {
            /* Merge: '<S732>/Merge2' incorporates:
             *  Constant: '<S918>/Constant'
             *  Switch: '<S878>/Switch1'
             */
            DMIR_ac_B.Merge2 = CeDMDR_e_LEDOn;
        }

        /* End of Switch: '<S878>/Switch4' */

        /* Switch: '<S878>/Switch5' */
        if (rtb_TmpSignalConversionAtSportM)
        {
            /* Merge: '<S732>/Merge3' incorporates:
             *  Constant: '<S922>/Constant'
             */
            DMIR_ac_B.Merge3 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge3' incorporates:
             *  Constant: '<S923>/Constant'
             */
            DMIR_ac_B.Merge3 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S878>/Switch5' */

        /* Switch: '<S878>/Switch6' */
        if (rtb_TmpSignalConversionAtEVMo_c)
        {
            /* Merge: '<S732>/Merge1' incorporates:
             *  Constant: '<S917>/Constant'
             */
            DMIR_ac_B.Merge1 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge1' incorporates:
             *  Constant: '<S914>/Constant'
             */
            DMIR_ac_B.Merge1 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S878>/Switch6' */
        /* End of Outputs for SubSystem: '<S732>/ESave' */
    }
    else if (((sint32)rtb_TmpSignalConversionAtDrvMdA) == 4)
    {
        /* Outputs for IfAction SubSystem: '<S732>/Sport' incorporates:
         *  ActionPort: '<S904>/Action Port'
         */
        /* Switch: '<S904>/Switch3' */
        if (rtb_TmpSignalConversionAtHybrid)
        {
            /* Merge: '<S732>/Merge' incorporates:
             *  Constant: '<S996>/Constant'
             */
            DMIR_ac_B.Merge = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge' incorporates:
             *  Constant: '<S999>/Constant'
             */
            DMIR_ac_B.Merge = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S904>/Switch3' */

        /* Switch: '<S904>/Switch4' */
        if (rtb_TmpSignalConversionAtESaveM)
        {
            /* Merge: '<S732>/Merge2' incorporates:
             *  Constant: '<S1001>/Constant'
             */
            DMIR_ac_B.Merge2 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge2' incorporates:
             *  Constant: '<S1002>/Constant'
             */
            DMIR_ac_B.Merge2 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S904>/Switch4' */

        /* Switch: '<S904>/Switch5' incorporates:
         *  Constant: '<S1004>/Calib'
         *  Logic: '<S904>/Logical'
         *  Logic: '<S904>/Logical1'
         *  Switch: '<S904>/Switch1'
         */
        if (rtb_TmpSignalConversionAtSportM)
        {
            /* Merge: '<S732>/Merge3' incorporates:
             *  Constant: '<S1003>/Constant'
             */
            DMIR_ac_B.Merge3 = CeDMDR_e_LEDBlink;
        }
        else if (((rtb_TmpSignalConversionAtEVMo_c ||
                   rtb_TmpSignalConversionAtESaveM) ||
                  rtb_TmpSignalConversionAtHybrid) &&
                 (KeDMIR_b_OnlyOneDriveMdLEDActive))
        {
            /* Switch: '<S904>/Switch1' incorporates:
             *  Constant: '<S995>/Constant'
             *  Merge: '<S732>/Merge3'
             */
            DMIR_ac_B.Merge3 = CeDMDR_e_LEDOff;
        }
        else
        {
            /* Merge: '<S732>/Merge3' incorporates:
             *  Constant: '<S998>/Constant'
             *  Switch: '<S904>/Switch1'
             */
            DMIR_ac_B.Merge3 = CeDMDR_e_LEDOn;
        }

        /* End of Switch: '<S904>/Switch5' */

        /* Switch: '<S904>/Switch6' */
        if (rtb_TmpSignalConversionAtEVMo_c)
        {
            /* Merge: '<S732>/Merge1' incorporates:
             *  Constant: '<S997>/Constant'
             */
            DMIR_ac_B.Merge1 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge1' incorporates:
             *  Constant: '<S1000>/Constant'
             */
            DMIR_ac_B.Merge1 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S904>/Switch6' */
        /* End of Outputs for SubSystem: '<S732>/Sport' */
    }
    else if (((sint32)rtb_TmpSignalConversionAtDrvMdA) == 6)
    {
        /* Outputs for IfAction SubSystem: '<S732>/Normal_BEV' incorporates:
         *  ActionPort: '<S901>/Action Port'
         */
        /* Switch: '<S901>/Switch6' */
        if (rtb_TmpSignalConversionAtEcoDen)
        {
            /* Merge: '<S732>/Merge4' incorporates:
             *  Constant: '<S990>/Constant'
             */
            DMIR_ac_B.Merge4 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge4' incorporates:
             *  Constant: '<S989>/Constant'
             */
            DMIR_ac_B.Merge4 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S901>/Switch6' */
        /* End of Outputs for SubSystem: '<S732>/Normal_BEV' */
    }
    else if (((sint32)rtb_TmpSignalConversionAtDrvMdA) == 8)
    {
        /* Outputs for IfAction SubSystem: '<S732>/Eco' incorporates:
         *  ActionPort: '<S880>/Action Port'
         */
        /* Switch: '<S880>/Switch2' incorporates:
         *  Constant: '<S945>/Calib'
         *  Logic: '<S880>/Logical'
         *  Logic: '<S880>/Logical1'
         *  Switch: '<S880>/Switch1'
         */
        if (rtb_TmpSignalConversionAtEcoDen)
        {
            /* Merge: '<S732>/Merge4' incorporates:
             *  Constant: '<S944>/Constant'
             */
            DMIR_ac_B.Merge4 = CeDMDR_e_LEDBlink;
        }
        else if ((rtb_TmpSignalConversionAtEVMo_c ||
                  rtb_TmpSignalConversionAtESaveM) &&
                 (KeDMIR_b_OnlyOneDriveMdLEDActive))
        {
            /* Switch: '<S880>/Switch1' incorporates:
             *  Constant: '<S943>/Constant'
             *  Merge: '<S732>/Merge4'
             */
            DMIR_ac_B.Merge4 = CeDMDR_e_LEDOff;
        }
        else
        {
            /* Merge: '<S732>/Merge4' incorporates:
             *  Constant: '<S941>/Constant'
             *  Switch: '<S880>/Switch1'
             */
            DMIR_ac_B.Merge4 = CeDMDR_e_LEDOn;
        }

        /* End of Switch: '<S880>/Switch2' */

        /* Switch: '<S880>/Switch4' */
        if (rtb_TmpSignalConversionAtESaveM)
        {
            /* Merge: '<S732>/Merge2' incorporates:
             *  Constant: '<S942>/Constant'
             */
            DMIR_ac_B.Merge2 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge2' incorporates:
             *  Constant: '<S939>/Constant'
             */
            DMIR_ac_B.Merge2 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S880>/Switch4' */

        /* Switch: '<S880>/Switch6' */
        if (rtb_TmpSignalConversionAtEVMo_c)
        {
            /* Merge: '<S732>/Merge1' incorporates:
             *  Constant: '<S940>/Constant'
             */
            DMIR_ac_B.Merge1 = CeDMDR_e_LEDBlink;
        }
        else
        {
            /* Merge: '<S732>/Merge1' incorporates:
             *  Constant: '<S938>/Constant'
             */
            DMIR_ac_B.Merge1 = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S880>/Switch6' */
        /* End of Outputs for SubSystem: '<S732>/Eco' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S732>/ModeDetectionFailure' incorporates:
         *  ActionPort: '<S899>/Action Port'
         */
        /* Merge: '<S732>/Merge' incorporates:
         *  Constant: '<S980>/Constant'
         *  SignalConversion generated from: '<S899>/DMDC_b_HybridMdLEDOn'
         */
        DMIR_ac_B.Merge = CeDMDR_e_LEDOn;

        /* Merge: '<S732>/Merge1' incorporates:
         *  Constant: '<S978>/Constant'
         *  SignalConversion generated from: '<S899>/DMDC_b_EVMdLEDON'
         */
        DMIR_ac_B.Merge1 = CeDMDR_e_LEDOn;

        /* Merge: '<S732>/Merge2' incorporates:
         *  Constant: '<S979>/Constant'
         *  SignalConversion generated from: '<S899>/DMDC_b_ESaveLEDON'
         */
        DMIR_ac_B.Merge2 = CeDMDR_e_LEDOn;

        /* Merge: '<S732>/Merge3' incorporates:
         *  Constant: '<S981>/Constant'
         *  SignalConversion generated from: '<S899>/DMDC_b_SportLEDON'
         */
        DMIR_ac_B.Merge3 = CeDMDR_e_LEDOn;

        /* Merge: '<S732>/Merge4' incorporates:
         *  Constant: '<S982>/Constant'
         *  SignalConversion generated from: '<S899>/DMDC_b_EcoMdLEDON'
         */
        DMIR_ac_B.Merge4 = CeDMDR_e_LEDOn;

        /* End of Outputs for SubSystem: '<S732>/ModeDetectionFailure' */
    }

    /* End of If: '<S732>/If' */

    /* Switch: '<S960>/Switch1' incorporates:
     *  Constant: '<S965>/Calib'
     *  Switch: '<S887>/Switch1'
     *  Switch: '<S891>/Switch1'
     *  Switch: '<S892>/Switch1'
     *  Switch: '<S893>/Switch1'
     *  Switch: '<S894>/Switch1'
     *  Switch: '<S896>/Switch1'
     *  Switch: '<S961>/Switch1'
     *  Switch: '<S962>/Switch1'
     *  Switch: '<S963>/Switch1'
     *  Switch: '<S964>/Switch1'
     */
    if (KeDMIR_b_LEDOvrrdOn)
    {
        /* Switch: '<S960>/Switch1' incorporates:
         *  Constant: '<S969>/Calib'
         */
        VeDMIC_e_HybridMdLEDOn = KeDMIR_e_HybLEDOvrrd;

        /* Switch: '<S961>/Switch1' incorporates:
         *  Constant: '<S967>/Calib'
         */
        VeDMIC_e_EVMdLEDOn = KeDMIR_e_EVLEDOvrrd;

        /* Switch: '<S962>/Switch1' incorporates:
         *  Constant: '<S966>/Calib'
         */
        VeDMIC_e_ESaveLEDOn = KeDMIR_e_ESaveLEDOvrrd;

        /* Switch: '<S963>/Switch1' incorporates:
         *  Constant: '<S968>/Calib'
         */
        VeDMIC_e_EcoLEDOn = KeDMIR_e_EcoLEDOvrrd;

        /* Switch: '<S964>/Switch1' incorporates:
         *  Constant: '<S970>/Calib'
         */
        VeDMIC_e_SportLEDOn = KeDMIR_e_SportLEDOvrrd;
    }
    else if (rtb_AND_eih)
    {
        /* Switch: '<S960>/Switch1' incorporates:
         *  Constant: '<S885>/Constant'
         *  Switch: '<S891>/Switch1'
         */
        VeDMIC_e_HybridMdLEDOn = CeDMDR_e_LEDOn;

        /* Switch: '<S961>/Switch1' incorporates:
         *  Constant: '<S881>/Constant'
         *  Switch: '<S892>/Switch1'
         */
        VeDMIC_e_EVMdLEDOn = CeDMDR_e_LEDOn;

        /* Switch: '<S962>/Switch1' incorporates:
         *  Constant: '<S882>/Constant'
         *  Switch: '<S893>/Switch1'
         */
        VeDMIC_e_ESaveLEDOn = CeDMDR_e_LEDOn;

        /* Switch: '<S963>/Switch1' incorporates:
         *  Constant: '<S884>/Constant'
         *  Switch: '<S896>/Switch1'
         */
        VeDMIC_e_EcoLEDOn = CeDMDR_e_LEDOn;

        /* Switch: '<S964>/Switch1' incorporates:
         *  Constant: '<S883>/Constant'
         *  Switch: '<S894>/Switch1'
         */
        VeDMIC_e_SportLEDOn = CeDMDR_e_LEDOn;
    }
    else if (rtb_TmpSignalConversionAtVeDMID)
    {
        /* Switch: '<S887>/Switch1' incorporates:
         *  Constant: '<S897>/Calib'
         *  Switch: '<S891>/Switch1'
         *  Switch: '<S960>/Switch1'
         */
        VeDMIC_e_HybridMdLEDOn = KeDMIR_e_FailureLEDOvrrd;

        /* Switch: '<S888>/Switch1' incorporates:
         *  Constant: '<S897>/Calib'
         *  Switch: '<S887>/Switch1'
         *  Switch: '<S891>/Switch1'
         *  Switch: '<S892>/Switch1'
         *  Switch: '<S961>/Switch1'
         */
        VeDMIC_e_EVMdLEDOn = KeDMIR_e_FailureLEDOvrrd;

        /* Switch: '<S889>/Switch1' incorporates:
         *  Constant: '<S897>/Calib'
         *  Switch: '<S887>/Switch1'
         *  Switch: '<S891>/Switch1'
         *  Switch: '<S893>/Switch1'
         *  Switch: '<S962>/Switch1'
         */
        VeDMIC_e_ESaveLEDOn = KeDMIR_e_FailureLEDOvrrd;

        /* Switch: '<S895>/Switch1' incorporates:
         *  Constant: '<S897>/Calib'
         *  Switch: '<S887>/Switch1'
         *  Switch: '<S891>/Switch1'
         *  Switch: '<S896>/Switch1'
         *  Switch: '<S963>/Switch1'
         */
        VeDMIC_e_EcoLEDOn = KeDMIR_e_FailureLEDOvrrd;

        /* Switch: '<S890>/Switch1' incorporates:
         *  Constant: '<S897>/Calib'
         *  Switch: '<S887>/Switch1'
         *  Switch: '<S891>/Switch1'
         *  Switch: '<S894>/Switch1'
         *  Switch: '<S964>/Switch1'
         */
        VeDMIC_e_SportLEDOn = KeDMIR_e_FailureLEDOvrrd;
    }
    else
    {
        /* Switch: '<S960>/Switch1' incorporates:
         *  Merge: '<S732>/Merge'
         *  Switch: '<S887>/Switch1'
         *  Switch: '<S891>/Switch1'
         */
        VeDMIC_e_HybridMdLEDOn = DMIR_ac_B.Merge;

        /* Switch: '<S961>/Switch1' incorporates:
         *  Merge: '<S732>/Merge1'
         *  Switch: '<S888>/Switch1'
         *  Switch: '<S892>/Switch1'
         */
        VeDMIC_e_EVMdLEDOn = DMIR_ac_B.Merge1;

        /* Switch: '<S962>/Switch1' incorporates:
         *  Merge: '<S732>/Merge2'
         *  Switch: '<S889>/Switch1'
         *  Switch: '<S893>/Switch1'
         */
        VeDMIC_e_ESaveLEDOn = DMIR_ac_B.Merge2;

        /* Switch: '<S963>/Switch1' incorporates:
         *  Merge: '<S732>/Merge4'
         *  Switch: '<S895>/Switch1'
         *  Switch: '<S896>/Switch1'
         */
        VeDMIC_e_EcoLEDOn = DMIR_ac_B.Merge4;

        /* Switch: '<S964>/Switch1' incorporates:
         *  Merge: '<S732>/Merge3'
         *  Switch: '<S890>/Switch1'
         *  Switch: '<S894>/Switch1'
         */
        VeDMIC_e_SportLEDOn = DMIR_ac_B.Merge3;
    }

    /* End of Switch: '<S960>/Switch1' */

    /* Gain: '<S902>/Gain' incorporates:
     *  Merge: '<Root>/Merge_2'
     *  SignalConversion generated from: '<S2>/Comm_b_InternalLightSts_read'
     */
    VeDMIC_b_InternalLightSts =
        Rte_IrvRead_DMIR_MedTED2_Comm_b_InternalLightSts_write_IRV();

    /* Gain: '<S903>/Gain' incorporates:
     *  Merge: '<Root>/Merge_3'
     *  SignalConversion generated from: '<S2>/Comm_Pct_PanelIntensity_read'
     */
    VeDMIC_Pct_PanelIntensity =
        Rte_IrvRead_DMIR_MedTED2_Comm_Pct_PanelIntensity_write_IRV();

    /* Update for UnitDelay: '<S731>/Unit Delay4' incorporates:
     *  DataStoreWrite: '<S731>/Data Store Write3'
     *  Switch: '<S731>/Switch'
     */
    DMIR_ac_DW.UnitDelay4_DSTATE_n = DMIR_ac_DW.VeDMIR_e_DrvMdInfoSt_DS;

    /* Update for UnitDelay: '<S731>/Unit Delay1' incorporates:
     *  Merge: '<S731>/Merge'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_p2 = rtb_Merge_k;

    /* Update for UnitDelay: '<S755>/Unit Delay2' incorporates:
     *  DataStoreRead: '<S731>/Data Store Read3'
     */
    DMIR_ac_DW.UnitDelay2_DSTATE_o = VeDMIR_d_EVDeniedRsn;

    /* Update for UnitDelay: '<S749>/Unit Delay2' incorporates:
     *  SignalConversion generated from: '<S2>/DrvMdArb_Read'
     */
    DMIR_ac_DW.UnitDelay2_DSTATE_m = rtb_TmpSignalConversionAtDrvMdA;

    /* Update for UnitDelay: '<S835>/Unit Delay1' incorporates:
     *  Constant: '<S827>/Calib'
     *  Constant: '<S831>/Calib'
     *  Product: '<S835>/Divide'
     *  RelationalOperator: '<S835>/Relational Operator'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_b = (((float32)rtb_Switch_a) >=
        (KeDMIR_e_DelaySignalChangeDrvMd / KeDMIR_t_MedTED));

    /* Update for UnitDelay: '<S731>/Unit Delay3' incorporates:
     *  UnitDelay: '<S731>/Unit Delay4'
     */
    DMIR_ac_DW.UnitDelay3_DSTATE = rtb_UnitDelay4_b;

    /* Update for UnitDelay: '<S749>/Unit Delay1' incorporates:
     *  SignalConversion generated from: '<S2>/DrvMdArb_Read'
     */
    DMIR_ac_DW.UnitDelay1_DSTATE_a = rtb_TmpSignalConversionAtDrvMdA;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Merge: '<Root>/VeDMIC_Pct_PanelIntensity_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMIC_Pct_PanelIntensity_write'
     * */
    Rte_IrvWrite_DMIR_MedTED2_VeDMIC_Pct_PanelIntensity_write_IRV
        (VeDMIC_Pct_PanelIntensity);

    /* Merge: '<Root>/VeDMIC_b_EcoLEDOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMIC_b_EcoLEDOn_write'
     *  Switch: '<S963>/Switch1'
     * */
    Rte_IrvWrite_DMIR_MedTED2_VeDMIC_b_EcoLEDOn_write_IRV(VeDMIC_e_EcoLEDOn);

    /* Merge: '<Root>/VeDMIC_b_InternalLightSts_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMIC_b_InternalLightSts_write'
     * */
    Rte_IrvWrite_DMIR_MedTED2_VeDMIC_b_InternalLightSts_write_IRV
        (VeDMIC_b_InternalLightSts);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Subsystem'
     */
    /* Switch: '<S731>/Switch2' incorporates:
     *  Constant: '<S743>/Constant'
     *  Constant: '<S744>/Calib'
     *  DataStoreWrite: '<S731>/Data Store Write3'
     *  Logic: '<S731>/Logical2'
     *  Switch: '<S731>/Switch'
     */
    if (rtb_TmpSignalConversionAtEngOnW && (KeDMIR_b_DNAHMIEna))
    {
        rtb_Merge_k = CeDMIR_e_EngineOnWOTInEV;
    }
    else
    {
        rtb_Merge_k = DMIR_ac_DW.VeDMIR_e_DrvMdInfoSt_DS;
    }

    /* Merge: '<Root>/VeDMIC_e_DrvMdInfoSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMIC_e_DrvMdInfoSt_write'
     *  Switch: '<S731>/Switch2'
     */
    Rte_IrvWrite_DMIR_MedTED2_VeDMIC_e_DrvMdInfoSt_write_IRV(rtb_Merge_k);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Merge: '<Root>/VeDMIC_e_ESaveLEDOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMIC_e_ESaveLEDOn_write'
     *  Switch: '<S962>/Switch1'
     * */
    Rte_IrvWrite_DMIR_MedTED2_VeDMIC_e_ESaveLEDOn_write_IRV(VeDMIC_e_ESaveLEDOn);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Subsystem'
     */
    /* Switch: '<S971>/Switch' incorporates:
     *  Constant: '<S973>/Calib'
     *  Switch: '<S961>/Switch1'
     */
    if (HeDMIR_b_EVPlusLED)
    {
        /* Switch: '<S972>/Switch1' incorporates:
         *  Constant: '<S974>/Constant'
         *  Constant: '<S975>/Constant'
         *  Constant: '<S976>/Constant'
         *  Constant: '<S977>/Constant'
         *  Logic: '<S972>/OR'
         *  RelationalOperator: '<S972>/Equal'
         *  RelationalOperator: '<S972>/Equal1'
         *  Switch: '<S960>/Switch1'
         *  Switch: '<S961>/Switch1'
         */
        if ((((uint32)VeDMIC_e_HybridMdLEDOn) == CeDMDR_e_LEDOn) || (((uint32)
                VeDMIC_e_EVMdLEDOn) == CeDMDR_e_LEDOn))
        {
            VeDMIC_e_HybridMdLEDOn_tmp = CeDMDR_e_LEDOn;
        }
        else
        {
            VeDMIC_e_HybridMdLEDOn_tmp = CeDMDR_e_LEDOff;
        }

        /* End of Switch: '<S972>/Switch1' */
    }
    else
    {
        VeDMIC_e_HybridMdLEDOn_tmp = VeDMIC_e_EVMdLEDOn;
    }

    /* End of Switch: '<S971>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Merge: '<Root>/VeDMIC_e_EVMdLEDOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMIC_e_EVMdLEDOn_write'
     */
    Rte_IrvWrite_DMIR_MedTED2_VeDMIC_e_EVMdLEDOn_write_IRV
        (VeDMIC_e_HybridMdLEDOn_tmp);

    /* Merge: '<Root>/VeDMIC_e_HybridMdLEDOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMIC_e_HybridMdLEDOn_write'
     *  Switch: '<S960>/Switch1'
     * */
    Rte_IrvWrite_DMIR_MedTED2_VeDMIC_e_HybridMdLEDOn_write_IRV
        (VeDMIC_e_HybridMdLEDOn);

    /* Merge: '<Root>/VeDMIC_e_SportLEDOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMIC_e_SportLEDOn_write'
     *  Switch: '<S964>/Switch1'
     * */
    Rte_IrvWrite_DMIR_MedTED2_VeDMIC_e_SportLEDOn_write_IRV(VeDMIC_e_SportLEDOn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_Pct_HV_BatSOCTarget(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_Pct_HV_BatSOCTarget' */
    /* Merge: '<Root>/Merge_33' incorporates:
     *  Chart: '<S5>/FsftDMIR_Pct_HV_BatSOCTargetChrt'
     *  SignalConversion generated from: '<S5>/VeDMIR_Pct_HV_BatSOCTarget_write'
     */
    /* Gateway: FsftDMIR_Pct_HV_BatSOCTarget/FsftDMIR_Pct_HV_BatSOCTargetChrt */
    /* During: FsftDMIR_Pct_HV_BatSOCTarget/FsftDMIR_Pct_HV_BatSOCTargetChrt */
    /* Entry Internal: FsftDMIR_Pct_HV_BatSOCTarget/FsftDMIR_Pct_HV_BatSOCTargetChrt */
    /* Transition: '<S1073>:2' */
    Rte_IrvWrite_FsftDMIR_Pct_HV_BatSOCTarget_VeDMIR_Pct_HV_BatSOCTarget_write_IRV
        (KeDMIR_Pct_HV_BatSOCTargetDflt);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  Chart: '<S5>/FsftDMIR_Pct_HV_BatSOCTargetChrt'
     *  SignalConversion generated from: '<S5>/VeDMIR_b_HV_BatSOCTargetFA_write'
     */
    Rte_IrvWrite_FsftDMIR_Pct_HV_BatSOCTarget_VeDMIR_b_HV_BatSOCTargetFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_Pct_HV_BatSOCTarget' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_Pct_HV_BatSOCTarget_GGGC(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_Pct_HV_BatSOCTarget_GGGC' */
    /* Merge: '<Root>/Merge_50' incorporates:
     *  Chart: '<S6>/FsftDMIR_Pct_HV_BatSOCTarget_GGGCChrt'
     *  SignalConversion generated from: '<S6>/VeDMIR_Pct_HV_BatSOCTarget_GGGC_write'
     */
    /* Gateway: FsftDMIR_Pct_HV_BatSOCTarget_GGGC/FsftDMIR_Pct_HV_BatSOCTarget_GGGCChrt */
    /* During: FsftDMIR_Pct_HV_BatSOCTarget_GGGC/FsftDMIR_Pct_HV_BatSOCTarget_GGGCChrt */
    /* Entry Internal: FsftDMIR_Pct_HV_BatSOCTarget_GGGC/FsftDMIR_Pct_HV_BatSOCTarget_GGGCChrt */
    /* Transition: '<S1074>:2' */
    Rte_IrvWrite_FsftDMIR_Pct_HV_BatSOCTarget_GGGC_VeDMIR_Pct_HV_BatSOCTarget_GGGC_write_IRV
        (KeDMIR_Pct_HV_BatSOCTargetDflt);

    /* Merge: '<Root>/Merge_51' incorporates:
     *  Chart: '<S6>/FsftDMIR_Pct_HV_BatSOCTarget_GGGCChrt'
     *  SignalConversion generated from: '<S6>/VeDMIR_b_HV_BatSOCTarget_GGGCFA_write'
     */
    Rte_IrvWrite_FsftDMIR_Pct_HV_BatSOCTarget_GGGC_VeDMIR_b_HV_BatSOCTarget_GGGCFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_Pct_HV_BatSOCTarget_GGGC' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_Pct_PanelIntensity(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_Pct_PanelIntensity' */
    /* Merge: '<Root>/Merge_35' incorporates:
     *  Chart: '<S7>/FsftDMIR_Pct_PanelIntensityChrt'
     *  SignalConversion generated from: '<S7>/VeDMIR_Pct_PanelIntensity_write'
     */
    /* Gateway: FsftDMIR_Pct_PanelIntensity/FsftDMIR_Pct_PanelIntensityChrt */
    /* During: FsftDMIR_Pct_PanelIntensity/FsftDMIR_Pct_PanelIntensityChrt */
    /* Entry Internal: FsftDMIR_Pct_PanelIntensity/FsftDMIR_Pct_PanelIntensityChrt */
    /* Transition: '<S1075>:2' */
    Rte_IrvWrite_FsftDMIR_Pct_PanelIntensity_VeDMIR_Pct_PanelIntensity_write_IRV
        (KeDMIR_Pct_HV_PanelIntensityDflt);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  Chart: '<S7>/FsftDMIR_Pct_PanelIntensityChrt'
     *  SignalConversion generated from: '<S7>/VeDMIR_b_PanelIntensityFA_write'
     */
    Rte_IrvWrite_FsftDMIR_Pct_PanelIntensity_VeDMIR_b_PanelIntensityFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_Pct_PanelIntensity' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_b_DrvMdReqErr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_b_DrvMdReqErr' */
    /* Merge: '<Root>/VeDMIR_b_DrvMdReqErrFA_IRV_Merge' incorporates:
     *  Chart: '<S8>/FsftDMIR_b_DrvMdReqErrChrt'
     *  SignalConversion generated from: '<S8>/VeDMIR_b_DrvMdReqErrFA_write'
     */
    /* Gateway: FsftDMIR_b_DrvMdReqErr/FsftDMIR_b_DrvMdReqErrChrt */
    /* During: FsftDMIR_b_DrvMdReqErr/FsftDMIR_b_DrvMdReqErrChrt */
    /* Entry Internal: FsftDMIR_b_DrvMdReqErr/FsftDMIR_b_DrvMdReqErrChrt */
    /* Transition: '<S1076>:2' */
    Rte_IrvWrite_FsftDMIR_b_DrvMdReqErr_VeDMIR_b_DrvMdReqErrFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_b_DrvMdReqErr' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_b_EcoBtnSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_b_EcoBtnSt' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  Chart: '<S9>/FsftDMIR_b_EcoBtnStChrt'
     *  SignalConversion generated from: '<S9>/VeDMIR_b_EcoBtnStFA_write'
     */
    /* Gateway: FsftDMIR_b_EcoBtnSt/FsftDMIR_b_EcoBtnStChrt */
    /* During: FsftDMIR_b_EcoBtnSt/FsftDMIR_b_EcoBtnStChrt */
    /* Entry Internal: FsftDMIR_b_EcoBtnSt/FsftDMIR_b_EcoBtnStChrt */
    /* Transition: '<S1077>:2' */
    Rte_IrvWrite_FsftDMIR_b_EcoBtnSt_VeDMIR_b_EcoBtnStFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_b_EcoBtnSt' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_b_EcoBtnStLIN(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_b_EcoBtnStLIN' */
    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S10>/FsftDMIR_b_EcoBtnStLINChrt'
     *  SignalConversion generated from: '<S10>/VeDMIR_b_EcoBtnStLINFA_write'
     */
    /* Gateway: FsftDMIR_b_EcoBtnStLIN/FsftDMIR_b_EcoBtnStLINChrt */
    /* During: FsftDMIR_b_EcoBtnStLIN/FsftDMIR_b_EcoBtnStLINChrt */
    /* Entry Internal: FsftDMIR_b_EcoBtnStLIN/FsftDMIR_b_EcoBtnStLINChrt */
    /* Transition: '<S1078>:2' */
    Rte_IrvWrite_FsftDMIR_b_EcoBtnStLIN_VeDMIR_b_EcoBtnStLINFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_b_EcoBtnStLIN' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_b_ElectricPlusSwitchLIN(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_b_ElectricPlusSwitchLIN' */
    /* Merge: '<Root>/Merge_10' incorporates:
     *  Chart: '<S11>/FsftDMIR_b_ElectricPlusSwitchLINChrt'
     *  SignalConversion generated from: '<S11>/VeDMIR_b_ElectricPlusSwitchLINFA_write'
     */
    /* Gateway: FsftDMIR_b_ElectricPlusSwitchLIN/FsftDMIR_b_ElectricPlusSwitchLINChrt */
    /* During: FsftDMIR_b_ElectricPlusSwitchLIN/FsftDMIR_b_ElectricPlusSwitchLINChrt */
    /* Entry Internal: FsftDMIR_b_ElectricPlusSwitchLIN/FsftDMIR_b_ElectricPlusSwitchLINChrt */
    /* Transition: '<S1079>:2' */
    Rte_IrvWrite_FsftDMIR_b_ElectricPlusSwitchLIN_VeDMIR_b_ElectricPlusSwitchLINFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_b_ElectricPlusSwitchLIN' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_b_InternalLightSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_b_InternalLightSts' */
    /* Merge: '<Root>/VeDMIR_b_InternalLightStsFA_IRV_Merge' incorporates:
     *  Chart: '<S12>/FsftDMIR_b_InternalLightStsChrt'
     *  SignalConversion generated from: '<S12>/VeDMIR_b_InternalLightStsFA_write'
     */
    /* Gateway: FsftDMIR_b_InternalLightSts/FsftDMIR_b_InternalLightStsChrt */
    /* During: FsftDMIR_b_InternalLightSts/FsftDMIR_b_InternalLightStsChrt */
    /* Entry Internal: FsftDMIR_b_InternalLightSts/FsftDMIR_b_InternalLightStsChrt */
    /* Transition: '<S1080>:2' */
    Rte_IrvWrite_FsftDMIR_b_InternalLightSts_VeDMIR_b_InternalLightStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_b_InternalLightSts' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_b_PaddlesFailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_b_PaddlesFailSts' */
    /* Merge: '<Root>/Merge_43' incorporates:
     *  Chart: '<S13>/FsftDMIR_b_PaddlesFailStsChrt'
     *  SignalConversion generated from: '<S13>/VeDMIR_b_PaddlesFailStsFA_write'
     */
    /* Gateway: FsftDMIR_b_PaddlesFailSts/FsftDMIR_b_PaddlesFailStsChrt */
    /* During: FsftDMIR_b_PaddlesFailSts/FsftDMIR_b_PaddlesFailStsChrt */
    /* Entry Internal: FsftDMIR_b_PaddlesFailSts/FsftDMIR_b_PaddlesFailStsChrt */
    /* Transition: '<S1081>:2' */
    Rte_IrvWrite_FsftDMIR_b_PaddlesFailSts_VeDMIR_b_PaddlesFailStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_b_PaddlesFailSts' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_b_PaddlesSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_b_PaddlesSts' */
    /* Merge: '<Root>/Merge_42' incorporates:
     *  Chart: '<S14>/FsftDMIR_b_PaddlesStsChrt'
     *  SignalConversion generated from: '<S14>/VeDMIR_b_PaddlesStsFA_write'
     */
    /* Gateway: FsftDMIR_b_PaddlesSts/FsftDMIR_b_PaddlesStsChrt */
    /* During: FsftDMIR_b_PaddlesSts/FsftDMIR_b_PaddlesStsChrt */
    /* Entry Internal: FsftDMIR_b_PaddlesSts/FsftDMIR_b_PaddlesStsChrt */
    /* Transition: '<S1082>:2' */
    Rte_IrvWrite_FsftDMIR_b_PaddlesSts_VeDMIR_b_PaddlesStsFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_b_PaddlesSts' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_b_SportStatus(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_b_SportStatus' */
    /* Merge: '<Root>/Merge_46' incorporates:
     *  Chart: '<S15>/FsftDMIR_b_SportStatusChrt'
     *  SignalConversion generated from: '<S15>/VeDMIR_b_SportStatus_write'
     */
    /* Gateway: FsftDMIR_b_SportStatus/FsftDMIR_b_SportStatusChrt */
    /* During: FsftDMIR_b_SportStatus/FsftDMIR_b_SportStatusChrt */
    /* Entry Internal: FsftDMIR_b_SportStatus/FsftDMIR_b_SportStatusChrt */
    /* Transition: '<S1083>:2' */
    Rte_IrvWrite_FsftDMIR_b_SportStatus_VeDMIR_b_SportStatus_write_IRV(false);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_b_SportStatus' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_b_eDriveModeSwitchRqst(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_b_eDriveModeSwitchRqst' */
    /* Merge: '<Root>/Merge_44' incorporates:
     *  Chart: '<S16>/FsftDMIR_b_eDriveModeSwitchRqstChrt'
     *  SignalConversion generated from: '<S16>/VeDMIR_b_eDriveModeSwitchRqstFA_write'
     */
    /* Gateway: FsftDMIR_b_eDriveModeSwitchRqst/FsftDMIR_b_eDriveModeSwitchRqstChrt */
    /* During: FsftDMIR_b_eDriveModeSwitchRqst/FsftDMIR_b_eDriveModeSwitchRqstChrt */
    /* Entry Internal: FsftDMIR_b_eDriveModeSwitchRqst/FsftDMIR_b_eDriveModeSwitchRqstChrt */
    /* Transition: '<S1084>:2' */
    Rte_IrvWrite_FsftDMIR_b_eDriveModeSwitchRqst_VeDMIR_b_eDriveModeSwitchRqstFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_45' incorporates:
     *  Chart: '<S16>/FsftDMIR_b_eDriveModeSwitchRqstChrt'
     *  SignalConversion generated from: '<S16>/VeDMIR_e_eDriveModeSwitchRqst_write'
     */
    Rte_IrvWrite_FsftDMIR_b_eDriveModeSwitchRqst_VeDMIR_e_eDriveModeSwitchRqst_write_IRV
        (CeDMIR_e_NotPressed);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_b_eDriveModeSwitchRqst' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_e_Braking_Mode_Req(void)
{
    /* Gateway: FsftDMIR_e_Braking_Mode_Req/FsftDMIR_e_Braking_Mode_ReqChrt */
    /* During: FsftDMIR_e_Braking_Mode_Req/FsftDMIR_e_Braking_Mode_ReqChrt */
    /* Entry Internal: FsftDMIR_e_Braking_Mode_Req/FsftDMIR_e_Braking_Mode_ReqChrt */
    /* Transition: '<S1085>:2' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_e_DriveStyleSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_e_DriveStyleSts' */
    /* Merge: '<Root>/Merge_1' incorporates:
     *  Chart: '<S18>/FsftDMIR_e_DriveStyleStsChrt'
     *  SignalConversion generated from: '<S18>/VeDMIR_b_DriveStyleStsFA_write'
     */
    /* Gateway: FsftDMIR_e_DriveStyleSts/FsftDMIR_e_DriveStyleStsChrt */
    /* During: FsftDMIR_e_DriveStyleSts/FsftDMIR_e_DriveStyleStsChrt */
    /* Entry Internal: FsftDMIR_e_DriveStyleSts/FsftDMIR_e_DriveStyleStsChrt */
    /* Transition: '<S1086>:2' */
    Rte_IrvWrite_FsftDMIR_e_DriveStyleSts_VeDMIR_b_DriveStyleStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_e_DriveStyleSts' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_e_DrvMdDrvrInput(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_e_DrvMdDrvrInput' */
    /* Merge: '<Root>/Merge_29' incorporates:
     *  Chart: '<S19>/FsftDMIR_e_DrvMdDrvrInputChrt'
     *  SignalConversion generated from: '<S19>/VeDMIR_b_DrvMdDrvrInputFA_write'
     */
    /* Gateway: FsftDMIR_e_DrvMdDrvrInput/FsftDMIR_e_DrvMdDrvrInputChrt */
    /* During: FsftDMIR_e_DrvMdDrvrInput/FsftDMIR_e_DrvMdDrvrInputChrt */
    /* Entry Internal: FsftDMIR_e_DrvMdDrvrInput/FsftDMIR_e_DrvMdDrvrInputChrt */
    /* Transition: '<S1087>:2' */
    Rte_IrvWrite_FsftDMIR_e_DrvMdDrvrInput_VeDMIR_b_DrvMdDrvrInputFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S19>/FsftDMIR_e_DrvMdDrvrInputChrt'
     *  SignalConversion generated from: '<S19>/VeDMIR_e_DrvMdDrvrInput_write'
     */
    Rte_IrvWrite_FsftDMIR_e_DrvMdDrvrInput_VeDMIR_e_DrvMdDrvrInput_write_IRV
        (KeDMIR_i_DrvMdDrvrInputDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_e_DrvMdDrvrInput' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_e_EChargetype(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_e_EChargetype' */
    /* Merge: '<Root>/Merge_32' incorporates:
     *  Chart: '<S20>/FsftDMIR_e_EChargetypeChrt'
     *  SignalConversion generated from: '<S20>/VeDMIR_b_EChargetypeFA_write'
     */
    /* Gateway: FsftDMIR_e_EChargetype/FsftDMIR_e_EChargetypeChrt */
    /* During: FsftDMIR_e_EChargetype/FsftDMIR_e_EChargetypeChrt */
    /* Entry Internal: FsftDMIR_e_EChargetype/FsftDMIR_e_EChargetypeChrt */
    /* Transition: '<S1088>:2' */
    Rte_IrvWrite_FsftDMIR_e_EChargetype_VeDMIR_b_EChargetypeFA_write_IRV(true);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  Chart: '<S20>/FsftDMIR_e_EChargetypeChrt'
     *  Constant: '<S1089>/Calib'
     *  SignalConversion generated from: '<S20>/VeDMIR_e_EChargetype_write'
     */
    Rte_IrvWrite_FsftDMIR_e_EChargetype_VeDMIR_e_EChargetype_write_IRV
        (KeDMIR_e_EChargetypeDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_e_EChargetype' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_e_EChargetype_GGGC(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_e_EChargetype_GGGC' */
    /* Merge: '<Root>/Merge_49' incorporates:
     *  Chart: '<S21>/FsftDMIR_e_EChargetype_GGGCChrt'
     *  SignalConversion generated from: '<S21>/VeDMIR_b_EChargetypeGGGCFA_write'
     */
    /* Gateway: FsftDMIR_e_EChargetype_GGGC/FsftDMIR_e_EChargetype_GGGCChrt */
    /* During: FsftDMIR_e_EChargetype_GGGC/FsftDMIR_e_EChargetype_GGGCChrt */
    /* Entry Internal: FsftDMIR_e_EChargetype_GGGC/FsftDMIR_e_EChargetype_GGGCChrt */
    /* Transition: '<S1090>:2' */
    Rte_IrvWrite_FsftDMIR_e_EChargetype_GGGC_VeDMIR_b_EChargetypeGGGCFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_48' incorporates:
     *  Chart: '<S21>/FsftDMIR_e_EChargetype_GGGCChrt'
     *  Constant: '<S1091>/Calib'
     *  SignalConversion generated from: '<S21>/VeDMIR_e_EChargetypeGGGC_write'
     */
    Rte_IrvWrite_FsftDMIR_e_EChargetype_GGGC_VeDMIR_e_EChargetypeGGGC_write_IRV
        (KeDMIR_e_EChargetypeDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_e_EChargetype_GGGC' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_e_ESaveBtnSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_e_ESaveBtnSt' */
    /* Merge: '<Root>/Merge_40' incorporates:
     *  Chart: '<S22>/FsftDMIR_e_ESaveBtnStChrt'
     *  SignalConversion generated from: '<S22>/VeDMIR_b_ESaveBtnStFA_write'
     */
    /* Gateway: FsftDMIR_e_ESaveBtnSt/FsftDMIR_e_ESaveBtnStChrt */
    /* During: FsftDMIR_e_ESaveBtnSt/FsftDMIR_e_ESaveBtnStChrt */
    /* Entry Internal: FsftDMIR_e_ESaveBtnSt/FsftDMIR_e_ESaveBtnStChrt */
    /* Transition: '<S1092>:2' */
    Rte_IrvWrite_FsftDMIR_e_ESaveBtnSt_VeDMIR_b_ESaveBtnStFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_e_ESaveBtnSt' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_e_ESaveBtnSt_CAN(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_e_ESaveBtnSt_CAN' */
    /* Merge: '<Root>/Merge_41' incorporates:
     *  Chart: '<S23>/FsftDMIR_e_ESaveBtnSt_CANChrt'
     *  SignalConversion generated from: '<S23>/VeDMIR_b_ESaveBtnSt_CANFA_write'
     */
    /* Gateway: FsftDMIR_e_ESaveBtnSt_CAN/FsftDMIR_e_ESaveBtnSt_CANChrt */
    /* During: FsftDMIR_e_ESaveBtnSt_CAN/FsftDMIR_e_ESaveBtnSt_CANChrt */
    /* Entry Internal: FsftDMIR_e_ESaveBtnSt_CAN/FsftDMIR_e_ESaveBtnSt_CANChrt */
    /* Transition: '<S1093>:2' */
    Rte_IrvWrite_FsftDMIR_e_ESaveBtnSt_CAN_VeDMIR_b_ESaveBtnSt_CANFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_e_ESaveBtnSt_CAN' */
}

/* Output function */
FUNC(void, DMIR_CODE) FsftDMIR_e_EVBtnSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftDMIR_e_EVBtnSt' */
    /* Merge: '<Root>/Merge_39' incorporates:
     *  Chart: '<S24>/FsftDMIR_e_EVBtnStChrt'
     *  SignalConversion generated from: '<S24>/VeDMIR_b_EVBtnStFA_write'
     */
    /* Gateway: FsftDMIR_e_EVBtnSt/FsftDMIR_e_EVBtnStChrt */
    /* During: FsftDMIR_e_EVBtnSt/FsftDMIR_e_EVBtnStChrt */
    /* Entry Internal: FsftDMIR_e_EVBtnSt/FsftDMIR_e_EVBtnStChrt */
    /* Transition: '<S1094>:2' */
    Rte_IrvWrite_FsftDMIR_e_EVBtnSt_VeDMIR_b_EVBtnStFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftDMIR_e_EVBtnSt' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_Pct_HV_BatSOCTarget(VAR(float32, AUTOMATIC)
    LeDMIR_Pct_HV_BatSOCTarget, VAR(boolean, AUTOMATIC)
    LeDMIR_b_HV_BatSOCTargetFA)
{
    boolean rtb_LeDMIR_b_HV_BatSOCTargetF_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_Pct_HV_BatSOCTarget' */
    /* Chart: '<S25>/PokeDMIR_Pct_HV_BatSOCTargetChrt' incorporates:
     *  SignalConversion generated from: '<S25>/LeDMIR_b_HV_BatSOCTargetFA'
     */
    /* Gateway: PokeDMIR_Pct_HV_BatSOCTarget/PokeDMIR_Pct_HV_BatSOCTargetChrt */
    /* During: PokeDMIR_Pct_HV_BatSOCTarget/PokeDMIR_Pct_HV_BatSOCTargetChrt */
    /* Entry Internal: PokeDMIR_Pct_HV_BatSOCTarget/PokeDMIR_Pct_HV_BatSOCTargetChrt */
    /* Transition: '<S1095>:2' */
    if (!LeDMIR_b_HV_BatSOCTargetFA)
    {
        /* SignalConversion generated from: '<S25>/VeDMIR_Pct_HV_BatSOCTarget_write' incorporates:
         *  Merge: '<Root>/Merge_33'
         *  SignalConversion generated from: '<S25>/LeDMIR_Pct_HV_BatSOCTarget'
         */
        /* Transition: '<S1095>:3' */
        /* Transition: '<S1095>:15' */
        Rte_IrvWrite_PokeDMIR_Pct_HV_BatSOCTarget_VeDMIR_Pct_HV_BatSOCTarget_write_IRV
            (LeDMIR_Pct_HV_BatSOCTarget);
        rtb_LeDMIR_b_HV_BatSOCTargetF_o = false;

        /* Transition: '<S1095>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S25>/VeDMIR_Pct_HV_BatSOCTarget_write' incorporates:
         *  Merge: '<Root>/Merge_33'
         */
        /* Transition: '<S1095>:4' */
        Rte_IrvWrite_PokeDMIR_Pct_HV_BatSOCTarget_VeDMIR_Pct_HV_BatSOCTarget_write_IRV
            (KeDMIR_Pct_HV_BatSOCTargetDflt);
        rtb_LeDMIR_b_HV_BatSOCTargetF_o = true;
    }

    /* End of Chart: '<S25>/PokeDMIR_Pct_HV_BatSOCTargetChrt' */

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S25>/VeDMIR_b_HV_BatSOCTargetFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_Pct_HV_BatSOCTarget_VeDMIR_b_HV_BatSOCTargetFA_write_IRV
        (rtb_LeDMIR_b_HV_BatSOCTargetF_o);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_Pct_HV_BatSOCTarget' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_Pct_HV_BatSOCTarget_GGGC(VAR(float32, AUTOMATIC)
    LeDMIR_Pct_HV_BatSOCTarget_GGGC, VAR(boolean, AUTOMATIC)
    LeDMIR_b_HV_BatSOCTarget_GGGCFA)
{
    boolean rtb_LeDMIR_b_HV_BatSOCTarget__f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_Pct_HV_BatSOCTarget_GGGC' */
    /* Chart: '<S26>/PokeDMIR_Pct_HV_BatSOCTarget_GGGCChrt' incorporates:
     *  SignalConversion generated from: '<S26>/LeDMIR_b_HV_BatSOCTarget_GGGCFA'
     */
    /* Gateway: PokeDMIR_Pct_HV_BatSOCTarget_GGGC/PokeDMIR_Pct_HV_BatSOCTarget_GGGCChrt */
    /* During: PokeDMIR_Pct_HV_BatSOCTarget_GGGC/PokeDMIR_Pct_HV_BatSOCTarget_GGGCChrt */
    /* Entry Internal: PokeDMIR_Pct_HV_BatSOCTarget_GGGC/PokeDMIR_Pct_HV_BatSOCTarget_GGGCChrt */
    /* Transition: '<S1096>:2' */
    if (!LeDMIR_b_HV_BatSOCTarget_GGGCFA)
    {
        /* SignalConversion generated from: '<S26>/VeDMIR_Pct_HV_BatSOCTarget_GGGC_write' incorporates:
         *  Merge: '<Root>/Merge_50'
         *  SignalConversion generated from: '<S26>/LeDMIR_Pct_HV_BatSOCTarget_GGGC'
         */
        /* Transition: '<S1096>:3' */
        /* Transition: '<S1096>:15' */
        Rte_IrvWrite_PokeDMIR_Pct_HV_BatSOCTarget_GGGC_VeDMIR_Pct_HV_BatSOCTarget_GGGC_write_IRV
            (LeDMIR_Pct_HV_BatSOCTarget_GGGC);
        rtb_LeDMIR_b_HV_BatSOCTarget__f = false;

        /* Transition: '<S1096>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S26>/VeDMIR_Pct_HV_BatSOCTarget_GGGC_write' incorporates:
         *  Merge: '<Root>/Merge_50'
         */
        /* Transition: '<S1096>:4' */
        Rte_IrvWrite_PokeDMIR_Pct_HV_BatSOCTarget_GGGC_VeDMIR_Pct_HV_BatSOCTarget_GGGC_write_IRV
            (KeDMIR_Pct_HV_BatSOCTargetDflt);
        rtb_LeDMIR_b_HV_BatSOCTarget__f = true;
    }

    /* End of Chart: '<S26>/PokeDMIR_Pct_HV_BatSOCTarget_GGGCChrt' */

    /* Merge: '<Root>/Merge_51' incorporates:
     *  SignalConversion generated from: '<S26>/VeDMIR_b_HV_BatSOCTarget_GGGCFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_Pct_HV_BatSOCTarget_GGGC_VeDMIR_b_HV_BatSOCTarget_GGGCFA_write_IRV
        (rtb_LeDMIR_b_HV_BatSOCTarget__f);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_Pct_HV_BatSOCTarget_GGGC' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_Pct_PanelIntensity(VAR(float32, AUTOMATIC)
    LeDMIR_Pct_PanelIntensity, VAR(boolean, AUTOMATIC) LeDMIR_b_PanelIntensityFA)
{
    boolean rtb_LeDMIR_b_PanelIntensityFA_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_Pct_PanelIntensity' */
    /* Chart: '<S27>/PokeDMIR_Pct_PanelIntensityChrt' incorporates:
     *  SignalConversion generated from: '<S27>/LeDMIR_b_PanelIntensityFA'
     */
    /* Gateway: PokeDMIR_Pct_PanelIntensity/PokeDMIR_Pct_PanelIntensityChrt */
    /* During: PokeDMIR_Pct_PanelIntensity/PokeDMIR_Pct_PanelIntensityChrt */
    /* Entry Internal: PokeDMIR_Pct_PanelIntensity/PokeDMIR_Pct_PanelIntensityChrt */
    /* Transition: '<S1097>:2' */
    if (!LeDMIR_b_PanelIntensityFA)
    {
        /* SignalConversion generated from: '<S27>/VeDMIR_Pct_PanelIntensity_write' incorporates:
         *  Merge: '<Root>/Merge_35'
         *  SignalConversion generated from: '<S27>/LeDMIR_Pct_PanelIntensity'
         */
        /* Transition: '<S1097>:3' */
        /* Transition: '<S1097>:15' */
        Rte_IrvWrite_PokeDMIR_Pct_PanelIntensity_VeDMIR_Pct_PanelIntensity_write_IRV
            (LeDMIR_Pct_PanelIntensity);
        rtb_LeDMIR_b_PanelIntensityFA_e = false;

        /* Transition: '<S1097>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S27>/VeDMIR_Pct_PanelIntensity_write' incorporates:
         *  Merge: '<Root>/Merge_35'
         */
        /* Transition: '<S1097>:4' */
        Rte_IrvWrite_PokeDMIR_Pct_PanelIntensity_VeDMIR_Pct_PanelIntensity_write_IRV
            (KeDMIR_Pct_HV_PanelIntensityDflt);
        rtb_LeDMIR_b_PanelIntensityFA_e = true;
    }

    /* End of Chart: '<S27>/PokeDMIR_Pct_PanelIntensityChrt' */

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S27>/VeDMIR_b_PanelIntensityFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_Pct_PanelIntensity_VeDMIR_b_PanelIntensityFA_write_IRV
        (rtb_LeDMIR_b_PanelIntensityFA_e);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_Pct_PanelIntensity' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_b_DrvMdReqErr(VAR(boolean, AUTOMATIC)
    LeDMIR_b_DrvMdReqErr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_b_DrvMdReqErr' */
    /* Merge: '<Root>/VeDMIR_b_DrvMdReqErr_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S28>/LeDMIR_b_DrvMdReqErr'
     *  SignalConversion generated from: '<S28>/VeDMIR_b_DrvMdReqErr_write'
     */
    /* Gateway: PokeDMIR_b_DrvMdReqErr/PokeDMIR_b_DrvMdReqErrChrt */
    /* During: PokeDMIR_b_DrvMdReqErr/PokeDMIR_b_DrvMdReqErrChrt */
    /* Entry Internal: PokeDMIR_b_DrvMdReqErr/PokeDMIR_b_DrvMdReqErrChrt */
    /* Transition: '<S1098>:2' */
    Rte_IrvWrite_PokeDMIR_b_DrvMdReqErr_VeDMIR_b_DrvMdReqErr_write_IRV
        (LeDMIR_b_DrvMdReqErr);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_b_DrvMdReqErr' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_b_ESCOffActv(VAR(boolean, AUTOMATIC)
    LeDMIR_b_ESCOffActv)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_b_ESCOffActv' */
    /* Merge: '<Root>/VeDMIR_b_ESCOffActv_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S29>/LeDMIR_b_ESCOffActv'
     *  SignalConversion generated from: '<S29>/VeDMIR_b_ESCOffActv_write'
     */
    /* Gateway: PokeDMIR_b_ESCOffActv/PokeDMIR_b_ESCOffActvChrt */
    /* During: PokeDMIR_b_ESCOffActv/PokeDMIR_b_ESCOffActvChrt */
    /* Entry Internal: PokeDMIR_b_ESCOffActv/PokeDMIR_b_ESCOffActvChrt */
    /* Transition: '<S1099>:2' */
    Rte_IrvWrite_PokeDMIR_b_ESCOffActv_VeDMIR_b_ESCOffActv_write_IRV
        (LeDMIR_b_ESCOffActv);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_b_ESCOffActv' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_b_InternalLightSts(VAR(boolean, AUTOMATIC)
    LeDMIR_b_InternalLightSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_b_InternalLightSts' */
    /* Merge: '<Root>/VeDMIR_b_InternalLightSts_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S30>/LeDMIR_b_InternalLightSts'
     *  SignalConversion generated from: '<S30>/VeDMIR_b_InternalLightSts_write'
     */
    /* Gateway: PokeDMIR_b_InternalLightSts/PokeDMIR_b_InternalLightStsChrt */
    /* During: PokeDMIR_b_InternalLightSts/PokeDMIR_b_InternalLightStsChrt */
    /* Entry Internal: PokeDMIR_b_InternalLightSts/PokeDMIR_b_InternalLightStsChrt */
    /* Transition: '<S1100>:2' */
    Rte_IrvWrite_PokeDMIR_b_InternalLightSts_VeDMIR_b_InternalLightSts_write_IRV
        (LeDMIR_b_InternalLightSts);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_b_InternalLightSts' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_b_PaddlesFailSts(VAR(uint8, AUTOMATIC)
    LeDMIR_b_PaddlesFailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_b_PaddlesFailSts' */
    /* Merge: '<Root>/Merge_43' incorporates:
     *  Chart: '<S31>/PokeDMIR_b_PaddlesFailStsChrt'
     *  SignalConversion generated from: '<S31>/VeDMIR_b_PaddlesFailStsFA_write'
     */
    /* Gateway: PokeDMIR_b_PaddlesFailSts/PokeDMIR_b_PaddlesFailStsChrt */
    /* During: PokeDMIR_b_PaddlesFailSts/PokeDMIR_b_PaddlesFailStsChrt */
    /* Entry Internal: PokeDMIR_b_PaddlesFailSts/PokeDMIR_b_PaddlesFailStsChrt */
    /* Transition: '<S1101>:2' */
    Rte_IrvWrite_PokeDMIR_b_PaddlesFailSts_VeDMIR_b_PaddlesFailStsFA_write_IRV
        (false);

    /* Merge: '<Root>/VeDMIR_b_PaddlesFailSts_IRV_Merge' incorporates:
     *  Chart: '<S31>/PokeDMIR_b_PaddlesFailStsChrt'
     *  SignalConversion generated from: '<S31>/LeDMIR_b_PaddlesFailSts'
     *  SignalConversion generated from: '<S31>/VeDMIR_b_PaddlesFailSts_write'
     */
    Rte_IrvWrite_PokeDMIR_b_PaddlesFailSts_VeDMIR_b_PaddlesFailSts_write_IRV
        (((sint32)LeDMIR_b_PaddlesFailSts) != 0);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_b_PaddlesFailSts' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_b_SailOff_Request(VAR(boolean, AUTOMATIC)
    LeDMIR_b_SailOff_Request)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_b_SailOff_Request' */
    /* Merge: '<Root>/VeDMIR_b_SailOff_Request_IRV_Merge' incorporates:
     *  Chart: '<S32>/PokeDMIR_b_SailOff_RequestChrt'
     *  Constant: '<S1102>/Calib'
     *  SignalConversion generated from: '<S32>/LeDMIR_b_SailOff_Request'
     *  SignalConversion generated from: '<S32>/VeDMIR_b_SailOff_Request_write'
     */
    /* Gateway: PokeDMIR_b_SailOff_Request/PokeDMIR_b_SailOff_RequestChrt */
    /* During: PokeDMIR_b_SailOff_Request/PokeDMIR_b_SailOff_RequestChrt */
    /* Entry Internal: PokeDMIR_b_SailOff_Request/PokeDMIR_b_SailOff_RequestChrt */
    /* Transition: '<S1103>:2' */
    Rte_IrvWrite_PokeDMIR_b_SailOff_Request_VeDMIR_b_SailOff_Request_write_IRV
        (KaDMIR_b_SailOffReqMap[(sint32)(LeDMIR_b_SailOff_Request ? 1 : 0)]);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_b_SailOff_Request' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_b_SportStatus(VAR(boolean, AUTOMATIC)
    LeDMIR_b_SportStatus)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_b_SportStatus' */
    /* Merge: '<Root>/Merge_46' incorporates:
     *  SignalConversion generated from: '<S33>/LeDMIR_b_SportStatus'
     *  SignalConversion generated from: '<S33>/VeDMIR_b_SportStatus_write'
     */
    /* Gateway: PokeDMIR_b_SportStatus/PokeDMIR_b_SportStatusChrt */
    /* During: PokeDMIR_b_SportStatus/PokeDMIR_b_SportStatusChrt */
    /* Entry Internal: PokeDMIR_b_SportStatus/PokeDMIR_b_SportStatusChrt */
    /* Transition: '<S1104>:2' */
    Rte_IrvWrite_PokeDMIR_b_SportStatus_VeDMIR_b_SportStatus_write_IRV
        (LeDMIR_b_SportStatus);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_b_SportStatus' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_BrakingMdReq(VAR(uint8, AUTOMATIC)
    LeDMIR_e_BrakingMdReq, VAR(boolean, AUTOMATIC) LeDMIR_b_BrakingMdReqFA)
{
    TeDMIR_e_DrvMdBtnStat rtb_LeDMIR_e_BrakingMdReq_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_BrakingMdReq' */
    /* Chart: '<S34>/PokeDMIR_e_BrakingMdReqChrt' incorporates:
     *  Constant: '<S1105>/Calib'
     *  SignalConversion generated from: '<S34>/LeDMIR_b_Switch_2WD_RqFA'
     *  SignalConversion generated from: '<S34>/LeDMIR_e_Switch_2WD_Rq'
     */
    /* Gateway: PokeDMIR_e_BrakingMdReq/PokeDMIR_e_BrakingMdReqChrt */
    /* During: PokeDMIR_e_BrakingMdReq/PokeDMIR_e_BrakingMdReqChrt */
    /* Entry Internal: PokeDMIR_e_BrakingMdReq/PokeDMIR_e_BrakingMdReqChrt */
    /* Transition: '<S1106>:2' */
    if (!LeDMIR_b_BrakingMdReqFA)
    {
        /* Transition: '<S1106>:3' */
        /* Transition: '<S1106>:15' */
        rtb_LeDMIR_e_BrakingMdReq_out = KaDMIR_e_BrakingMdReqMap
            [(LeDMIR_e_BrakingMdReq)];

        /* Transition: '<S1106>:18' */
    }
    else
    {
        /* Transition: '<S1106>:4' */
        rtb_LeDMIR_e_BrakingMdReq_out = KeDMIR_e_BrakingMdReqDflt;
    }

    /* End of Chart: '<S34>/PokeDMIR_e_BrakingMdReqChrt' */

    /* Merge: '<Root>/4' incorporates:
     *  SignalConversion generated from: '<S34>/VeDMIR_e_BrakingMdReq_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_BrakingMdReq_Comm_e_KeDMIR_e_BrakingMdReq_write_IRV
        (rtb_LeDMIR_e_BrakingMdReq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_BrakingMdReq' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_CFGFeature(VAR(sint16, AUTOMATIC)
    LeDMIR_e_CFGFeature)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_CFGFeature' */
    /* Merge: '<Root>/VeDMIR_e_CFGFeature_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S35>/LeDMIR_e_CFGFeature'
     *  SignalConversion generated from: '<S35>/VeDMIR_e_CFGFeature_write'
     */
    /* Gateway: PokeDMIR_e_CFGFeature/PokeDMIR_e_CFGFeatureChrt */
    /* During: PokeDMIR_e_CFGFeature/PokeDMIR_e_CFGFeatureChrt */
    /* Entry Internal: PokeDMIR_e_CFGFeature/PokeDMIR_e_CFGFeatureChrt */
    /* Transition: '<S1107>:2' */
    Rte_IrvWrite_PokeDMIR_e_CFGFeature_VeDMIR_e_CFGFeature_write_IRV
        (LeDMIR_e_CFGFeature);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_CFGFeature' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_CFG_Set(VAR(sint16, AUTOMATIC) LeDMIR_e_CFG_Set)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_CFG_Set' */
    /* Merge: '<Root>/VeDMIR_e_CFG_Set_IRV_Merge' incorporates:
     *  Chart: '<S36>/PokeDMIR_e_CFG_SetChrt'
     *  Constant: '<S1108>/Calib'
     *  SignalConversion generated from: '<S36>/LeDMIR_e_CFG_Set'
     *  SignalConversion generated from: '<S36>/VeDMIR_e_CFG_Set_write'
     */
    /* Gateway: PokeDMIR_e_CFG_Set/PokeDMIR_e_CFG_SetChrt */
    /* During: PokeDMIR_e_CFG_Set/PokeDMIR_e_CFG_SetChrt */
    /* Entry Internal: PokeDMIR_e_CFG_Set/PokeDMIR_e_CFG_SetChrt */
    /* Transition: '<S1109>:2' */
    Rte_IrvWrite_PokeDMIR_e_CFG_Set_VeDMIR_e_CFG_Set_write_IRV
        (KaDMIR_e_CFGSetMap[(LeDMIR_e_CFG_Set)]);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_CFG_Set' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_CreepSts(VAR(TeDMIR_e_CreepSts, AUTOMATIC)
    LeDMIR_e_CreepSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_CreepSts' */
    /* Outport: '<Root>/VeDMIR_e_CreepSts' incorporates:
     *  SignalConversion generated from: '<S37>/VeDMIR_e_CreepSts_write'
     *  SignalConversion generated from: '<S37>/LeDMIR_e_CreepSts'
     */
    /* Gateway: PokeDMIR_e_CreepSts/PokeDMIR_e_CreepStsChrt */
    /* During: PokeDMIR_e_CreepSts/PokeDMIR_e_CreepStsChrt */
    /* Entry Internal: PokeDMIR_e_CreepSts/PokeDMIR_e_CreepStsChrt */
    /* Transition: '<S1110>:2' */
    (void)Rte_Write_VeDMIR_e_CreepSts_Value(LeDMIR_e_CreepSts);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_CreepSts' */
}

/* Output function */
#if Rte_SysCon_Variant_DMIR_1

FUNC(void, DMIR_CODE) PokeDMIR_e_DriveStyleSts(VAR(uint8, AUTOMATIC)
    LeDMIR_e_DriveStyleSts, VAR(boolean, AUTOMATIC) LeDMIR_b_DriveStyleStsFA)
{

#if Rte_SysCon_Variant_DMIR_1

    boolean rtb_LeDMIR_b_DriveStyleStsFA__b;

#endif

#if !Rte_SysCon_Variant_DMIR_1

    UNUSED_PARAMETER(LeDMIR_e_DriveStyleSts);

#endif

#if !Rte_SysCon_Variant_DMIR_1

    UNUSED_PARAMETER(LeDMIR_b_DriveStyleStsFA);

#endif

#if Rte_SysCon_Variant_DMIR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_DriveStyleSts' */
    /* Chart: '<S38>/PokeDMIR_e_DriveStyleStsChrt' incorporates:
     *  Constant: '<S1111>/Calib'
     *  SignalConversion generated from: '<S38>/LeDMIR_b_DriveStyleStsFA'
     *  SignalConversion generated from: '<S38>/LeDMIR_e_DriveStyleSts'
     */
    /* Gateway: PokeDMIR_e_DriveStyleSts/PokeDMIR_e_DriveStyleStsChrt */
    /* During: PokeDMIR_e_DriveStyleSts/PokeDMIR_e_DriveStyleStsChrt */
    /* Entry Internal: PokeDMIR_e_DriveStyleSts/PokeDMIR_e_DriveStyleStsChrt */
    /* Transition: '<S1112>:2' */
    if (!LeDMIR_b_DriveStyleStsFA)
    {
        /* Transition: '<S1112>:3' */
        /* Transition: '<S1112>:15' */
        DMIR_ac_B.LeDMIR_e_DriveStyleSts_out = KaDMIR_e_DriveStyleSts
            [(LeDMIR_e_DriveStyleSts)];
        rtb_LeDMIR_b_DriveStyleStsFA__b = false;

        /* Transition: '<S1112>:18' */
    }
    else
    {
        /* Transition: '<S1112>:4' */
        rtb_LeDMIR_b_DriveStyleStsFA__b = true;
    }

    /* End of Chart: '<S38>/PokeDMIR_e_DriveStyleStsChrt' */

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S38>/VeDMIR_b_DriveStyleStsFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_DriveStyleSts_VeDMIR_b_DriveStyleStsFA_write_IRV
        (rtb_LeDMIR_b_DriveStyleStsFA__b);

    /* Merge: '<Root>/VeDMIR_e_DriveStyleSts_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S38>/VeDMIR_e_DriveStyleSts_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_DriveStyleSts_VeDMIR_e_DriveStyleSts_write_IRV
        (DMIR_ac_B.LeDMIR_e_DriveStyleSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_DriveStyleSts' */
#endif

}

#endif

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_DrvMdDrvrInput(VAR(uint8, AUTOMATIC)
    LeDMIR_e_DrvMdDrvrInput, VAR(boolean, AUTOMATIC) LeDMIR_b_DrvMdDrvrInputFA)
{
    boolean rtb_LeDMIR_b_DrvMdDrvrInputFA_i;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_DrvMdDrvrInput' */
    /* Chart: '<S39>/PokeDMIR_e_DrvMdDrvrInputChrt' incorporates:
     *  SignalConversion generated from: '<S39>/LeDMIR_b_DrvMdDrvrInputFA'
     */
    /* Gateway: PokeDMIR_e_DrvMdDrvrInput/PokeDMIR_e_DrvMdDrvrInputChrt */
    /* During: PokeDMIR_e_DrvMdDrvrInput/PokeDMIR_e_DrvMdDrvrInputChrt */
    /* Entry Internal: PokeDMIR_e_DrvMdDrvrInput/PokeDMIR_e_DrvMdDrvrInputChrt */
    /* Transition: '<S1113>:2' */
    if (!LeDMIR_b_DrvMdDrvrInputFA)
    {
        /* SignalConversion generated from: '<S39>/VeDMIR_e_DrvMdDrvrInput_write' incorporates:
         *  Merge: '<Root>/Merge_30'
         *  SignalConversion generated from: '<S39>/LeDMIR_e_DrvMdDrvrInput'
         */
        /* Transition: '<S1113>:3' */
        /* Transition: '<S1113>:15' */
        Rte_IrvWrite_PokeDMIR_e_DrvMdDrvrInput_VeDMIR_e_DrvMdDrvrInput_write_IRV
            (LeDMIR_e_DrvMdDrvrInput);
        rtb_LeDMIR_b_DrvMdDrvrInputFA_i = false;

        /* Transition: '<S1113>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S39>/VeDMIR_e_DrvMdDrvrInput_write' incorporates:
         *  Merge: '<Root>/Merge_30'
         */
        /* Transition: '<S1113>:4' */
        Rte_IrvWrite_PokeDMIR_e_DrvMdDrvrInput_VeDMIR_e_DrvMdDrvrInput_write_IRV
            (KeDMIR_i_DrvMdDrvrInputDflt);
        rtb_LeDMIR_b_DrvMdDrvrInputFA_i = true;
    }

    /* End of Chart: '<S39>/PokeDMIR_e_DrvMdDrvrInputChrt' */

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S39>/VeDMIR_b_DrvMdDrvrInputFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_DrvMdDrvrInput_VeDMIR_b_DrvMdDrvrInputFA_write_IRV
        (rtb_LeDMIR_b_DrvMdDrvrInputFA_i);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_DrvMdDrvrInput' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_EChargetype(VAR(sint16, AUTOMATIC)
    LeDMIR_e_EChargetype, VAR(boolean, AUTOMATIC) LeDMIR_b_EChargetypeFA)
{
    TeDMDR_e_EChargetype rtb_LeDMIR_e_EChargetype_out_e;
    boolean rtb_LeDMIR_b_EChargetypeFA_ou_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_EChargetype' */
    /* Chart: '<S40>/PokeDMIR_e_EChargetypeChrt' incorporates:
     *  Constant: '<S1114>/Calib'
     *  Constant: '<S1115>/Calib'
     *  SignalConversion generated from: '<S40>/LeDMIR_b_EChargetypeFA'
     *  SignalConversion generated from: '<S40>/LeDMIR_e_EChargetype'
     */
    /* Gateway: PokeDMIR_e_EChargetype/PokeDMIR_e_EChargetypeChrt */
    /* During: PokeDMIR_e_EChargetype/PokeDMIR_e_EChargetypeChrt */
    /* Entry Internal: PokeDMIR_e_EChargetype/PokeDMIR_e_EChargetypeChrt */
    /* Transition: '<S1116>:2' */
    if (!LeDMIR_b_EChargetypeFA)
    {
        /* Transition: '<S1116>:3' */
        /* Transition: '<S1116>:15' */
        rtb_LeDMIR_e_EChargetype_out_e = KaDMIR_e_EChargeTypeMap
            [(LeDMIR_e_EChargetype)];
        rtb_LeDMIR_b_EChargetypeFA_ou_d = false;

        /* Transition: '<S1116>:18' */
    }
    else
    {
        /* Transition: '<S1116>:4' */
        rtb_LeDMIR_e_EChargetype_out_e = KeDMIR_e_EChargetypeDflt;
        rtb_LeDMIR_b_EChargetypeFA_ou_d = true;
    }

    /* End of Chart: '<S40>/PokeDMIR_e_EChargetypeChrt' */

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S40>/VeDMIR_b_EChargetypeFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_EChargetype_VeDMIR_b_EChargetypeFA_write_IRV
        (rtb_LeDMIR_b_EChargetypeFA_ou_d);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S40>/VeDMIR_e_EChargetype_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_EChargetype_VeDMIR_e_EChargetype_write_IRV
        (rtb_LeDMIR_e_EChargetype_out_e);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_EChargetype' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_EChargetype_GGGC(VAR(sint16, AUTOMATIC)
    LeDMIR_e_EChargetypeGGGC, VAR(boolean, AUTOMATIC) LeDMIR_b_EChargetypeGGGCFA)
{
    TeDMDR_e_EChargetype rtb_LeDMIR_e_EChargetypeGGGC__c;
    boolean rtb_LeDMIR_b_EChargetypeGGGCF_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_EChargetype_GGGC' */
    /* Chart: '<S41>/PokeDMIR_e_EChargetype_GGGCChrt' incorporates:
     *  Constant: '<S1117>/Calib'
     *  Constant: '<S1118>/Calib'
     *  SignalConversion generated from: '<S41>/LeDMIR_b_EChargetypeGGGCFA'
     *  SignalConversion generated from: '<S41>/LeDMIR_e_EChargetypeGGGC'
     */
    /* Gateway: PokeDMIR_e_EChargetype_GGGC/PokeDMIR_e_EChargetype_GGGCChrt */
    /* During: PokeDMIR_e_EChargetype_GGGC/PokeDMIR_e_EChargetype_GGGCChrt */
    /* Entry Internal: PokeDMIR_e_EChargetype_GGGC/PokeDMIR_e_EChargetype_GGGCChrt */
    /* Transition: '<S1119>:2' */
    if (!LeDMIR_b_EChargetypeGGGCFA)
    {
        /* Transition: '<S1119>:3' */
        /* Transition: '<S1119>:15' */
        rtb_LeDMIR_e_EChargetypeGGGC__c = KaDMIR_e_EChargeTypeMap
            [(LeDMIR_e_EChargetypeGGGC)];
        rtb_LeDMIR_b_EChargetypeGGGCF_m = false;

        /* Transition: '<S1119>:18' */
    }
    else
    {
        /* Transition: '<S1119>:4' */
        rtb_LeDMIR_e_EChargetypeGGGC__c = KeDMIR_e_EChargetypeDflt;
        rtb_LeDMIR_b_EChargetypeGGGCF_m = true;
    }

    /* End of Chart: '<S41>/PokeDMIR_e_EChargetype_GGGCChrt' */

    /* Merge: '<Root>/Merge_49' incorporates:
     *  SignalConversion generated from: '<S41>/VeDMIR_b_EChargetypeGGGCFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_EChargetype_GGGC_VeDMIR_b_EChargetypeGGGCFA_write_IRV
        (rtb_LeDMIR_b_EChargetypeGGGCF_m);

    /* Merge: '<Root>/Merge_48' incorporates:
     *  SignalConversion generated from: '<S41>/VeDMIR_e_EChargetypeGGGC_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_EChargetype_GGGC_VeDMIR_e_EChargetypeGGGC_write_IRV
        (rtb_LeDMIR_e_EChargetypeGGGC__c);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_EChargetype_GGGC' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_ECoastingReq(VAR(TeDMIR_e_ECoastingReq,
    AUTOMATIC) ECoastingReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_ECoastingReq' */
    /* Merge: '<Root>/2' incorporates:
     *  SignalConversion generated from: '<S42>/ECoastingReq'
     *  SignalConversion generated from: '<S42>/VeDMIR_e_ECoastingReq_write'
     */
    /* Gateway: PokeDMIR_e_ECoastingReq/PokeDMIR_e_ECoastingReqChrt */
    /* During: PokeDMIR_e_ECoastingReq/PokeDMIR_e_ECoastingReqChrt */
    /* Entry Internal: PokeDMIR_e_ECoastingReq/PokeDMIR_e_ECoastingReqChrt */
    /* Transition: '<S1120>:2' */
    Rte_IrvWrite_PokeDMIR_e_ECoastingReq_VeDMIR_e_ECoastingReq_IRV(ECoastingReq);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_ECoastingReq' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_EcoBtnSt(VAR(sint16, AUTOMATIC)
    LeDMIR_e_Switch_2WD_Rq, VAR(boolean, AUTOMATIC) LeDMIR_b_Switch_2WD_RqFA)
{
    TeDMDR_e_DrvMdBtnStat rtb_LeDMIR_e_EcoBtnSt_out;
    boolean rtb_LeDMIR_b_EcoBtnStFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_EcoBtnSt' */
    /* Chart: '<S43>/PokeDMIR_e_EcoBtnStChrt' incorporates:
     *  Constant: '<S1121>/Calib'
     *  SignalConversion generated from: '<S43>/LeDMIR_b_Switch_2WD_RqFA'
     *  SignalConversion generated from: '<S43>/LeDMIR_e_Switch_2WD_Rq'
     */
    /* Gateway: PokeDMIR_e_EcoBtnSt/PokeDMIR_e_EcoBtnStChrt */
    /* During: PokeDMIR_e_EcoBtnSt/PokeDMIR_e_EcoBtnStChrt */
    /* Entry Internal: PokeDMIR_e_EcoBtnSt/PokeDMIR_e_EcoBtnStChrt */
    /* Transition: '<S1122>:2' */
    if (!LeDMIR_b_Switch_2WD_RqFA)
    {
        /* Transition: '<S1122>:3' */
        /* Transition: '<S1122>:15' */
        rtb_LeDMIR_e_EcoBtnSt_out = KaDMIR_e_EcoBtnStMap[(LeDMIR_e_Switch_2WD_Rq)];
        rtb_LeDMIR_b_EcoBtnStFA_out = false;

        /* Transition: '<S1122>:18' */
    }
    else
    {
        /* Transition: '<S1122>:4' */
        rtb_LeDMIR_e_EcoBtnSt_out = (TeDMDR_e_DrvMdBtnStat)
            safe_cast_to_TeDMDR_e_DrvMdBtnS(KeDMIR_e_EcoBtnDflt);
        rtb_LeDMIR_b_EcoBtnStFA_out = true;
    }

    /* End of Chart: '<S43>/PokeDMIR_e_EcoBtnStChrt' */

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S43>/VeDMIR_b_EcoBtnStFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_EcoBtnSt_VeDMIR_b_EcoBtnStFA_write_IRV
        (rtb_LeDMIR_b_EcoBtnStFA_out);

    /* Merge: '<Root>/VeDMIR_e_EcoBtnSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S43>/VeDMIR_e_EcoBtnSt_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_EcoBtnSt_VeDMIR_e_EcoBtnSt_write_IRV
        (rtb_LeDMIR_e_EcoBtnSt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_EcoBtnSt' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_EcoBtnStLIN(VAR(sint16, AUTOMATIC)
    LeDMIR_e_ESaveModeRq_LIN, VAR(boolean, AUTOMATIC) LeDMIR_b_ESaveModeRq_LINFA)
{
    TeDMDR_e_DrvMdBtnStat rtb_LeDMIR_e_EcoBtnStLIN_out;
    boolean rtb_LeDMIR_b_EcoBtnStLINFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_EcoBtnStLIN' */
    /* Chart: '<S44>/PokeDMIR_e_EcoBtnStLINChrt' incorporates:
     *  Constant: '<S1123>/Calib'
     *  SignalConversion generated from: '<S44>/LeDMIR_b_ESaveModeRq_LINFA'
     *  SignalConversion generated from: '<S44>/LeDMIR_e_ESaveModeRq_LIN'
     */
    /* Gateway: PokeDMIR_e_EcoBtnStLIN/PokeDMIR_e_EcoBtnStLINChrt */
    /* During: PokeDMIR_e_EcoBtnStLIN/PokeDMIR_e_EcoBtnStLINChrt */
    /* Entry Internal: PokeDMIR_e_EcoBtnStLIN/PokeDMIR_e_EcoBtnStLINChrt */
    /* Transition: '<S1124>:2' */
    if (!LeDMIR_b_ESaveModeRq_LINFA)
    {
        /* Transition: '<S1124>:3' */
        /* Transition: '<S1124>:15' */
        rtb_LeDMIR_e_EcoBtnStLIN_out = KaDMIR_e_EcoBtnStMap
            [(LeDMIR_e_ESaveModeRq_LIN)];
        rtb_LeDMIR_b_EcoBtnStLINFA_out = false;

        /* Transition: '<S1124>:18' */
    }
    else
    {
        /* Transition: '<S1124>:4' */
        rtb_LeDMIR_e_EcoBtnStLIN_out = (TeDMDR_e_DrvMdBtnStat)
            safe_cast_to_TeDMDR_e_DrvMdBtnS(KeDMIR_e_EcoBtnDflt);
        rtb_LeDMIR_b_EcoBtnStLINFA_out = true;
    }

    /* End of Chart: '<S44>/PokeDMIR_e_EcoBtnStLINChrt' */

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S44>/VeDMIR_b_EcoBtnStLINFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_EcoBtnStLIN_VeDMIR_b_EcoBtnStLINFA_write_IRV
        (rtb_LeDMIR_b_EcoBtnStLINFA_out);

    /* Merge: '<Root>/VeDMIR_e_EcoBtnStLIN_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S44>/VeDMIR_e_EcoBtnStLIN_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_EcoBtnStLIN_VeDMIR_e_EcoBtnStLIN_write_IRV
        (rtb_LeDMIR_e_EcoBtnStLIN_out);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_EcoBtnStLIN' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_ElectricPlusSwitch(VAR(sint16, AUTOMATIC)
    LeDMIR_e_Switch_4AUTO_Rq, VAR(boolean, AUTOMATIC) LeDMIR_b_Switch_4AUTO_RqFA)
{
    TeDMDR_e_DrvMdBtnStat rtb_LeDMIR_e_ElectricPlusSwitch;
    boolean rtb_LeDMIR_b_ElectricPlusSwitch;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_ElectricPlusSwitch' */
    /* Chart: '<S45>/PokeDMIR_e_ElectricPlusSwitchChrt' incorporates:
     *  Constant: '<S1125>/Calib'
     *  SignalConversion generated from: '<S45>/LeDMIR_b_Switch_4AUTO_RqFA'
     *  SignalConversion generated from: '<S45>/LeDMIR_e_Switch_4AUTO_Rq'
     */
    /* Gateway: PokeDMIR_e_ElectricPlusSwitch/PokeDMIR_e_ElectricPlusSwitchChrt */
    /* During: PokeDMIR_e_ElectricPlusSwitch/PokeDMIR_e_ElectricPlusSwitchChrt */
    /* Entry Internal: PokeDMIR_e_ElectricPlusSwitch/PokeDMIR_e_ElectricPlusSwitchChrt */
    /* Transition: '<S1126>:2' */
    if (!LeDMIR_b_Switch_4AUTO_RqFA)
    {
        /* Transition: '<S1126>:3' */
        /* Transition: '<S1126>:15' */
        rtb_LeDMIR_e_ElectricPlusSwitch = KaDMIR_e_EVBtnStMap
            [(LeDMIR_e_Switch_4AUTO_Rq)];
        rtb_LeDMIR_b_ElectricPlusSwitch = false;

        /* Transition: '<S1126>:18' */
    }
    else
    {
        /* Transition: '<S1126>:4' */
        rtb_LeDMIR_e_ElectricPlusSwitch = KeDMIR_e_EVBtnDflt;
        rtb_LeDMIR_b_ElectricPlusSwitch = true;
    }

    /* End of Chart: '<S45>/PokeDMIR_e_ElectricPlusSwitchChrt' */

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S45>/VeDMIR_b_ElectricPlusSwitchFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_ElectricPlusSwitch_VeDMIR_b_EVBtnStFA_write_IRV
        (rtb_LeDMIR_b_ElectricPlusSwitch);

    /* Merge: '<Root>/VeDMIR_e_ElectricPlusSwitch_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S45>/VeDMIR_e_ElectricPlusSwitch_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_ElectricPlusSwitch_VeDMIR_e_ElectricPlusSwitch_write_IRV
        (rtb_LeDMIR_e_ElectricPlusSwitch);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_ElectricPlusSwitch' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_ElectricPlusSwitchLIN(VAR(sint16, AUTOMATIC)
    LeDMIR_e_ElectricModeRq_LIN, VAR(boolean, AUTOMATIC)
    LeDMIR_b_ElectricModeRq_LINFA)
{
    TeDMDR_e_DrvMdBtnStat rtb_LeDMIR_e_ElectricPlusSwitch;
    boolean rtb_LeDMIR_b_ElectricPlusSwitch;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_ElectricPlusSwitchLIN' */
    /* Chart: '<S46>/PokeDMIR_e_ElectricPlusSwitchLINChrt' incorporates:
     *  Constant: '<S1127>/Calib'
     *  SignalConversion generated from: '<S46>/LeDMIR_b_ElectricModeRq_LINFA'
     *  SignalConversion generated from: '<S46>/LeDMIR_e_ElectricModeRq_LIN'
     */
    /* Gateway: PokeDMIR_e_ElectricPlusSwitchLIN/PokeDMIR_e_ElectricPlusSwitchLINChrt */
    /* During: PokeDMIR_e_ElectricPlusSwitchLIN/PokeDMIR_e_ElectricPlusSwitchLINChrt */
    /* Entry Internal: PokeDMIR_e_ElectricPlusSwitchLIN/PokeDMIR_e_ElectricPlusSwitchLINChrt */
    /* Transition: '<S1128>:2' */
    if (!LeDMIR_b_ElectricModeRq_LINFA)
    {
        /* Transition: '<S1128>:3' */
        /* Transition: '<S1128>:15' */
        rtb_LeDMIR_e_ElectricPlusSwitch = KaDMIR_e_EVBtnStMap
            [(LeDMIR_e_ElectricModeRq_LIN)];
        rtb_LeDMIR_b_ElectricPlusSwitch = false;

        /* Transition: '<S1128>:18' */
    }
    else
    {
        /* Transition: '<S1128>:4' */
        rtb_LeDMIR_e_ElectricPlusSwitch = KeDMIR_e_EVBtnDflt;
        rtb_LeDMIR_b_ElectricPlusSwitch = true;
    }

    /* End of Chart: '<S46>/PokeDMIR_e_ElectricPlusSwitchLINChrt' */

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S46>/VeDMIR_b_ElectricPlusSwitchLINFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_ElectricPlusSwitchLIN_VeDMIR_b_ElectricPlusSwitchLINFA_write_IRV
        (rtb_LeDMIR_b_ElectricPlusSwitch);

    /* Merge: '<Root>/VeDMIR_e_ElectricPlusSwitchLIN_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S46>/VeDMIR_e_ElectricPlusSwitchLIN_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_ElectricPlusSwitchLIN_VeDMIR_e_ElectricPlusSwitchLIN_write_IRV
        (rtb_LeDMIR_e_ElectricPlusSwitch);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_ElectricPlusSwitchLIN' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_PaddleModeReq(VAR(TeDMIR_e_PaddleModeRequest,
    AUTOMATIC) ETM_PaddlesModeReq, VAR(boolean, AUTOMATIC) ETM_PaddlesModeReqFa)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_PaddleModeReq' */
    /* Chart: '<S47>/PokeDMIR_e_PaddlesModeReqChrt' incorporates:
     *  SignalConversion generated from: '<S47>/ETM_PaddlesModeReqFa'
     */
    /* Gateway: PokeDMIR_e_PaddleModeReq/PokeDMIR_e_PaddlesModeReqChrt */
    /* During: PokeDMIR_e_PaddleModeReq/PokeDMIR_e_PaddlesModeReqChrt */
    /* Entry Internal: PokeDMIR_e_PaddleModeReq/PokeDMIR_e_PaddlesModeReqChrt */
    /* Transition: '<S1129>:2' */
    if (!ETM_PaddlesModeReqFa)
    {
        /* SignalConversion generated from: '<S47>/VeDMIR_e_PddlMdReq_write' incorporates:
         *  Merge: '<Root>/3'
         *  SignalConversion generated from: '<S47>/ETM_PaddlesModeReq'
         */
        /* Transition: '<S1129>:3' */
        /* Transition: '<S1129>:15' */
        Rte_IrvWrite_PokeDMIR_e_PaddleModeReq_VeDMIR_e_PddlMdReq_IRV
            (ETM_PaddlesModeReq);

        /* Transition: '<S1129>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S47>/VeDMIR_e_PddlMdReq_write' incorporates:
         *  Merge: '<Root>/3'
         */
        /* Transition: '<S1129>:4' */
        Rte_IrvWrite_PokeDMIR_e_PaddleModeReq_VeDMIR_e_PddlMdReq_IRV
            (KeDMIR_e_PaddlesModeReqDflt);
    }

    /* End of Chart: '<S47>/PokeDMIR_e_PaddlesModeReqChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_PaddleModeReq' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_PaddlesSts(VAR(uint8, AUTOMATIC)
    LeDMIR_e_PaddleSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_PaddlesSts' */
    /* Merge: '<Root>/Merge_42' incorporates:
     *  Chart: '<S48>/PokeDMIR_e_PaddlesStsChrt'
     *  SignalConversion generated from: '<S48>/VeDMIR_b_PaddleStsFA_write'
     */
    /* Gateway: PokeDMIR_e_PaddlesSts/PokeDMIR_e_PaddlesStsChrt */
    /* During: PokeDMIR_e_PaddlesSts/PokeDMIR_e_PaddlesStsChrt */
    /* Entry Internal: PokeDMIR_e_PaddlesSts/PokeDMIR_e_PaddlesStsChrt */
    /* Transition: '<S1131>:2' */
    Rte_IrvWrite_PokeDMIR_e_PaddlesSts_VeDMIR_b_PaddlesStsFA_write_IRV(false);

    /* Merge: '<Root>/VeDMIR_e_PaddleSts_IRV_Merge' incorporates:
     *  Chart: '<S48>/PokeDMIR_e_PaddlesStsChrt'
     *  Constant: '<S1130>/Calib'
     *  SignalConversion generated from: '<S48>/LeDMIR_e_PaddleSts'
     *  SignalConversion generated from: '<S48>/VeDMIR_e_PaddleSts_write'
     */
    Rte_IrvWrite_PokeDMIR_e_PaddlesSts_VeDMIR_e_PaddleSts_write_IRV
        (KaDMIR_e_PaddlesStsMap[(LeDMIR_e_PaddleSts)]);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_PaddlesSts' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_PowershotSts(VAR(TeDMIR_e_PowershotButton,
    AUTOMATIC) LeDMIR_e_PowershotSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_PowershotSts' */
    /* Merge: '<Root>/1' incorporates:
     *  SignalConversion generated from: '<S49>/LeDMIR_e_PowershotSts'
     *  SignalConversion generated from: '<S49>/VeDMIR_e_PowershotSts_write'
     */
    /* Gateway: PokeDMIR_e_PowershotSts/PokeDMIR_e_PowershotStsChrt */
    /* During: PokeDMIR_e_PowershotSts/PokeDMIR_e_PowershotStsChrt */
    /* Entry Internal: PokeDMIR_e_PowershotSts/PokeDMIR_e_PowershotStsChrt */
    /* Transition: '<S1132>:2' */
    Rte_IrvWrite_PokeDMIR_e_PowershotSts_VeDMIR_e_PoweshotSts_IRV
        (LeDMIR_e_PowershotSts);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_PowershotSts' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_StReq(VAR(sint16, AUTOMATIC) LeDMIR_e_StReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_StReq' */
    /* Merge: '<Root>/VeDMIR_e_StReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S50>/LeDMIR_e_StReq'
     *  SignalConversion generated from: '<S50>/VeDMIR_e_StReq_write'
     */
    /* Gateway: PokeDMIR_e_StReq/PokeDMIR_e_StReqChrt */
    /* During: PokeDMIR_e_StReq/PokeDMIR_e_StReqChrt */
    /* Entry Internal: PokeDMIR_e_StReq/PokeDMIR_e_StReqChrt */
    /* Transition: '<S1133>:2' */
    Rte_IrvWrite_PokeDMIR_e_StReq_VeDMIR_e_StReq_write_IRV(LeDMIR_e_StReq);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_StReq' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_eDriveModeSwitchRqst(VAR(uint8, AUTOMATIC)
    LeDMIR_e_eDriveModeSwitchRqst_CAN, VAR(boolean, AUTOMATIC)
    LeDMIR_b_eDriveModeSwitchRqstFA_CAN)
{
    TeDMIR_e_eDriveModeSwitchSts rtb_LeDMIR_e_eDriveModeSwitch_h;
    boolean rtb_LeDMIR_b_eDriveModeSwitch_i;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_eDriveModeSwitchRqst' */
    /* Chart: '<S51>/PokeDMIR_e_eDriveModeSwitchRqstChrt' incorporates:
     *  Constant: '<S1134>/Calib'
     *  SignalConversion generated from: '<S51>/LeDMIR_b_eDriveModeSwitchRqstFA_CAN'
     *  SignalConversion generated from: '<S51>/LeDMIR_e_eDriveModeSwitchRqst_CAN'
     */
    /* Gateway: PokeDMIR_e_eDriveModeSwitchRqst/PokeDMIR_e_eDriveModeSwitchRqstChrt */
    /* During: PokeDMIR_e_eDriveModeSwitchRqst/PokeDMIR_e_eDriveModeSwitchRqstChrt */
    /* Entry Internal: PokeDMIR_e_eDriveModeSwitchRqst/PokeDMIR_e_eDriveModeSwitchRqstChrt */
    /* Transition: '<S1135>:2' */
    if (!LeDMIR_b_eDriveModeSwitchRqstFA_CAN)
    {
        /* Transition: '<S1135>:3' */
        /* Transition: '<S1135>:15' */
        rtb_LeDMIR_e_eDriveModeSwitch_h = KaDMIR_e_eDriveModeSwitchRqstMap
            [(LeDMIR_e_eDriveModeSwitchRqst_CAN)];
        rtb_LeDMIR_b_eDriveModeSwitch_i = false;

        /* Transition: '<S1135>:18' */
    }
    else
    {
        /* Transition: '<S1135>:4' */
        rtb_LeDMIR_e_eDriveModeSwitch_h = KeDMIR_e_eDriveModeSwitchRqstDflt;
        rtb_LeDMIR_b_eDriveModeSwitch_i = true;
    }

    /* End of Chart: '<S51>/PokeDMIR_e_eDriveModeSwitchRqstChrt' */

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S51>/VeDMIR_b_eDriveModeSwitchRqstFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_eDriveModeSwitchRqst_VeDMIR_b_eDriveModeSwitchRqstFA_write_IRV
        (rtb_LeDMIR_b_eDriveModeSwitch_i);

    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S51>/VeDMIR_e_eDriveModeSwitchRqst_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_eDriveModeSwitchRqst_VeDMIR_e_eDriveModeSwitchRqst_write_IRV
        (rtb_LeDMIR_e_eDriveModeSwitch_h);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_eDriveModeSwitchRqst' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_eSaveSwitch(VAR(sint16, AUTOMATIC)
    LeDMIR_e_Switch_4LOCK_Rq, VAR(boolean, AUTOMATIC) LeDMIR_b_Switch_4LOCK_RqFA)
{
    TeDMDR_e_DrvMdBtnStat rtb_LeDMIR_e_eSaveSwitch_out;
    boolean rtb_LeDMIR_b_eSaveSwitchFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_eSaveSwitch' */
    /* Chart: '<S52>/PokeDMIR_e_eSaveSwitchChrt' incorporates:
     *  Constant: '<S1136>/Calib'
     *  SignalConversion generated from: '<S52>/LeDMIR_b_Switch_4LOCK_RqFA'
     *  SignalConversion generated from: '<S52>/LeDMIR_e_Switch_4LOCK_Rq'
     */
    /* Gateway: PokeDMIR_e_eSaveSwitch/PokeDMIR_e_eSaveSwitchChrt */
    /* During: PokeDMIR_e_eSaveSwitch/PokeDMIR_e_eSaveSwitchChrt */
    /* Entry Internal: PokeDMIR_e_eSaveSwitch/PokeDMIR_e_eSaveSwitchChrt */
    /* Transition: '<S1137>:2' */
    if (!LeDMIR_b_Switch_4LOCK_RqFA)
    {
        /* Transition: '<S1137>:3' */
        /* Transition: '<S1137>:15' */
        rtb_LeDMIR_e_eSaveSwitch_out = KaDMIR_e_ESaveBtnStMap
            [(LeDMIR_e_Switch_4LOCK_Rq)];
        rtb_LeDMIR_b_eSaveSwitchFA_out = false;

        /* Transition: '<S1137>:18' */
    }
    else
    {
        /* Transition: '<S1137>:4' */
        rtb_LeDMIR_e_eSaveSwitch_out = KeDMIR_e_ESaveBtnDflt;
        rtb_LeDMIR_b_eSaveSwitchFA_out = true;
    }

    /* End of Chart: '<S52>/PokeDMIR_e_eSaveSwitchChrt' */

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S52>/VeDMIR_b_eSaveSwitchFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_eSaveSwitch_VeDMIR_b_ESaveBtnStFA_write_IRV
        (rtb_LeDMIR_b_eSaveSwitchFA_out);

    /* Merge: '<Root>/VeDMIR_e_eSaveSwitch_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S52>/VeDMIR_e_eSaveSwitch_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_eSaveSwitch_VeDMIR_e_eSaveSwitch_write_IRV
        (rtb_LeDMIR_e_eSaveSwitch_out);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_eSaveSwitch' */
}

/* Output function */
FUNC(void, DMIR_CODE) PokeDMIR_e_eSaveSwitchLIN(VAR(sint16, AUTOMATIC)
    LeDMIR_e_ESaveModeRq_LIN, VAR(boolean, AUTOMATIC) LeDMIR_b_ESaveModeRq_LINFA)
{
    TeDMDR_e_DrvMdBtnStat rtb_LeDMIR_e_ESaveBtnStLIN_out;
    boolean rtb_LeDMIR_b_ESaveBtnStLINFA_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokeDMIR_e_eSaveSwitchLIN' */
    /* Chart: '<S53>/PokeDMIR_e_eSaveSwitchLINChrt' incorporates:
     *  Constant: '<S1138>/Calib'
     *  SignalConversion generated from: '<S53>/LeDMIR_b_ESaveModeRq_LINFA'
     *  SignalConversion generated from: '<S53>/LeDMIR_e_ESaveModeRq_LIN'
     */
    /* Gateway: PokeDMIR_e_eSaveSwitchLIN/PokeDMIR_e_eSaveSwitchLINChrt */
    /* During: PokeDMIR_e_eSaveSwitchLIN/PokeDMIR_e_eSaveSwitchLINChrt */
    /* Entry Internal: PokeDMIR_e_eSaveSwitchLIN/PokeDMIR_e_eSaveSwitchLINChrt */
    /* Transition: '<S1139>:2' */
    if (!LeDMIR_b_ESaveModeRq_LINFA)
    {
        /* Transition: '<S1139>:3' */
        /* Transition: '<S1139>:15' */
        rtb_LeDMIR_e_ESaveBtnStLIN_out = KaDMIR_e_ESaveBtnStMap
            [(LeDMIR_e_ESaveModeRq_LIN)];
        rtb_LeDMIR_b_ESaveBtnStLINFA_ou = false;

        /* Transition: '<S1139>:18' */
    }
    else
    {
        /* Transition: '<S1139>:4' */
        rtb_LeDMIR_e_ESaveBtnStLIN_out = KeDMIR_e_ESaveBtnDflt;
        rtb_LeDMIR_b_ESaveBtnStLINFA_ou = true;
    }

    /* End of Chart: '<S53>/PokeDMIR_e_eSaveSwitchLINChrt' */

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S53>/VeDMIR_b_ESaveBtnStLINFA_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_eSaveSwitchLIN_VeDMIR_b_ESaveBtnSt_CANFA_write_IRV
        (rtb_LeDMIR_b_ESaveBtnStLINFA_ou);

    /* Merge: '<Root>/VeDMIR_e_ESaveBtnStLIN_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S53>/VeDMIR_e_ESaveBtnStLIN_write'
     * */
    Rte_IrvWrite_PokeDMIR_e_eSaveSwitchLIN_VeDMIR_e_ESaveBtnStLIN_write_IRV
        (rtb_LeDMIR_e_ESaveBtnStLIN_out);

    /* End of Outputs for SubSystem: '<Root>/PokeDMIR_e_eSaveSwitchLIN' */
}

/* Output function */
FUNC(void, DMIR_CODE) DMIR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/DMIR_PwrOff'
     */
    /* Outport: '<Root>/NeDMIR_e_eCoastLvlLatched_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeDMIR_e_eCoastLvlLatched'
     */
    (void)Rte_Write_NeDMIR_e_eCoastLvlLatched_NeDMIR_e_eCoastLvlLatched
        (DMIR_ac_DW.NeDMIR_e_eCoastLvlLatched);

    /* Outport: '<Root>/EeDMIR_d_ChargeTypeCnf_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/EeDMIR_d_ChargeTypeCnf'
     */
    (void)Rte_Write_EeDMIR_d_ChargeTypeCnf_EeDMIR_d_ChargeTypeCnf
        (EeDMIR_d_ChargeTypeCnf);

    /* Outport: '<Root>/EeDMIR_d_TgtSOCRngCnf_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/EeDMIR_d_TgtSOCRngCnf'
     */
    (void)Rte_Write_EeDMIR_d_TgtSOCRngCnf_EeDMIR_d_TgtSOCRngCnf
        (EeDMIR_d_TgtSOCRngCnf);

    /* Outport: '<Root>/NeDMIR_e_DrvMdArb_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeDMIR_e_DrvMdArb'
     */
    (void)Rte_Write_NeDMIR_e_DrvMdArb_NeDMIR_e_DrvMdArb
        (DMIR_ac_DW.NeDMIR_e_DrvMdArb);

    /* Outport: '<Root>/NeDMIR_e_DriveStyleSts_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeDMIR_e_DriveStyleSts'
     */
    (void)Rte_Write_NeDMIR_e_DriveStyleSts_NeDMIR_e_DriveStyleSts
        (DMIR_ac_DW.NeDMIR_e_DriveStyleSts);

    /* Outport: '<Root>/NeDMIR_e_RegenSts_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeDMIR_e_RegenSts'
     */
    (void)Rte_Write_NeDMIR_e_RegenSts_NeDMIR_e_RegenSts
        (DMIR_ac_DW.NeDMIR_e_RegenSts);

    /* Outport: '<Root>/NeDMIR_e_eCoastDefaultAuto_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeDMIR_e_RegenSts1'
     */
    (void)Rte_Write_NeDMIR_e_eCoastDefaultAuto_NeDMIR_e_eCoastDefaultAuto
        (DMIR_ac_DW.NeDMIR_e_eCoastDefaultAuto);

    /* Outport: '<Root>/NeDMIR_e_eCoastDefaultCustom_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeDMIR_e_RegenSts2'
     */
    (void)Rte_Write_NeDMIR_e_eCoastDefaultCustom_NeDMIR_e_eCoastDefaultCustom
        (DMIR_ac_DW.NeDMIR_e_eCoastDefaultCustom);

    /* Outport: '<Root>/NeDMIR_e_CreepSts_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeDMIR_e_RegenSts3'
     */
    (void)Rte_Write_NeDMIR_e_CreepSts_NeDMIR_e_CreepSts
        (DMIR_ac_DW.NeDMIR_e_CreepSts);

    /* Outport: '<Root>/NeDMIR_e_RaceModeSts_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeDMIR_e_RegenSts4'
     */
    (void)Rte_Write_NeDMIR_e_RaceModeSts_NeDMIR_e_RaceModeSts
        (DMIR_ac_DW.NeDMIR_e_RaceModeSts);

    /* Outport: '<Root>/NeDMIR_e_PddlMdStatus_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/Data Store Read'
     */
    (void)Rte_Write_NeDMIR_e_PddlMdStatus_NeDMIR_e_PddlMdStatus
        (DMIR_ac_DW.NeDMIR_e_PddlMdStatus);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, DMIR_CODE) DMIR_PwrOn(void)
{
    TeDMIR_e_eCoastSel rtb_TmpSignalConversionAtNeDMIR;

#if Rte_SysCon_Variant_DMIR_1

    TeDMIR_e_DriveStyleSts rtb_OutportBufferForVeDMIR_e_e4;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/DMIR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S1005>/Data Store Write' incorporates:
     *  Inport: '<Root>/NeDMIR_e_PddlMdStatus_PM_In'
     */
    (void)Rte_Read_NeDMIR_e_PddlMdStatus_Rx_NeDMIR_e_PddlMdStatus
        (&DMIR_ac_DW.NeDMIR_e_PddlMdStatus);

    /* DataStoreWrite: '<S1005>/NeDMIR_e_RegenSts4' incorporates:
     *  Inport: '<Root>/NeDMIR_e_RaceModeSts_PM_In'
     */
    (void)Rte_Read_NeDMIR_e_RaceModeSts_Rx_NeDMIR_e_RaceModeSts
        (&DMIR_ac_DW.NeDMIR_e_RaceModeSts);

    /* DataStoreWrite: '<S1005>/NeDMIR_e_RegenSts3' incorporates:
     *  Inport: '<Root>/NeDMIR_e_CreepSts_PM_In'
     */
    (void)Rte_Read_NeDMIR_e_CreepSts_Rx_NeDMIR_e_CreepSts
        (&DMIR_ac_DW.NeDMIR_e_CreepSts);

    /* DataStoreWrite: '<S1005>/NeDMIR_e_RegenSts2' incorporates:
     *  Inport: '<Root>/NeDMIR_e_eCoastDefaultCustom_PM_In'
     */
    (void)Rte_Read_NeDMIR_e_eCoastDefaultCustom_Rx_NeDMIR_e_eCoastDefaultCustom(
        &DMIR_ac_DW.NeDMIR_e_eCoastDefaultCustom);

    /* DataStoreWrite: '<S1005>/NeDMIR_e_RegenSts1' incorporates:
     *  Inport: '<Root>/NeDMIR_e_eCoastDefaultAuto_PM_In'
     */
    (void)Rte_Read_NeDMIR_e_eCoastDefaultAuto_Rx_NeDMIR_e_eCoastDefaultAuto
        (&DMIR_ac_DW.NeDMIR_e_eCoastDefaultAuto);

    /* DataStoreWrite: '<S1005>/NeDMIR_e_RegenSts' incorporates:
     *  Inport: '<Root>/NeDMIR_e_RegenSts_PM_In'
     */
    (void)Rte_Read_NeDMIR_e_RegenSts_Rx_NeDMIR_e_RegenSts
        (&DMIR_ac_DW.NeDMIR_e_RegenSts);

    /* DataStoreWrite: '<S1005>/NeDMIR_e_DriveStyleSts' incorporates:
     *  Inport: '<Root>/NeDMIR_e_DriveStyleSts_PM_In'
     */
    (void)Rte_Read_NeDMIR_e_DriveStyleSts_Rx_NeDMIR_e_DriveStyleSts
        (&DMIR_ac_DW.NeDMIR_e_DriveStyleSts);

    /* DataStoreWrite: '<S1005>/NeDMIR_e_DrvMdArb' incorporates:
     *  Inport: '<Root>/NeDMIR_e_DrvMdArb_PM_In'
     */
    (void)Rte_Read_NeDMIR_e_DrvMdArb_Rx_NeDMIR_e_DrvMdArb
        (&DMIR_ac_DW.NeDMIR_e_DrvMdArb);

    /* DataStoreWrite: '<S1005>/EeDMIR_d_TgtSOCRngCnf' incorporates:
     *  Inport: '<Root>/EeDMIR_d_TgtSOCRngCnf_PM_In'
     */
    (void)Rte_Read_EeDMIR_d_TgtSOCRngCnf_Rx_EeDMIR_d_TgtSOCRngCnf
        ((&(EeDMIR_d_TgtSOCRngCnf)));

    /* DataStoreWrite: '<S1005>/EeDMIR_d_ChargeTypeCnf' incorporates:
     *  Inport: '<Root>/EeDMIR_d_ChargeTypeCnf_PM_In'
     */
    (void)Rte_Read_EeDMIR_d_ChargeTypeCnf_Rx_EeDMIR_d_ChargeTypeCnf
        ((&(EeDMIR_d_ChargeTypeCnf)));

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* SignalConversion generated from: '<S4>/NeDMIR_e_eCoastLvlLatched_PM_In' incorporates:
     *  Inport: '<Root>/NeDMIR_e_eCoastLvlLatched_PM_In'
     */
    (void)Rte_Read_NeDMIR_e_eCoastLvlLatched_Rx_NeDMIR_e_eCoastLvlLatched
        (&rtb_TmpSignalConversionAtNeDMIR);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* Switch: '<S1005>/Switch' incorporates:
     *  Constant: '<S1009>/Constant'
     *  Constant: '<S1010>/Calib'
     *  DataStoreWrite: '<S1005>/NeDMIR_e_eCoastLvlLatched'
     *  RelationalOperator: '<S1005>/Equal'
     */
    if (((uint32)rtb_TmpSignalConversionAtNeDMIR) != CeDMIR_e_NotAvail)
    {
        DMIR_ac_DW.NeDMIR_e_eCoastLvlLatched = rtb_TmpSignalConversionAtNeDMIR;
    }
    else
    {
        DMIR_ac_DW.NeDMIR_e_eCoastLvlLatched = KeDMIR_e_eCoastInitLvl;
    }

    /* End of Switch: '<S1005>/Switch' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Initialize_DMII_Inputs'
     */
    /* SignalConversion generated from: '<S1007>/Comm_e_DrvMdDrvrInput' incorporates:
     *  Constant: '<S1039>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_DrvMdDrv = KeDMIR_i_DrvMdDrvrInputInit;

    /* SignalConversion generated from: '<S1007>/Comm_b_DrvMdDrvrInputFA' incorporates:
     *  Constant: '<S1016>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_DrvMdDrv = KeDMIR_b_DrvMdDrvrInputFAInit;

    /* SignalConversion generated from: '<S1007>/Comm_Pct_HV_BatSOCTarget' incorporates:
     *  Constant: '<S1014>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_Pct_HV_Bat = KeDMIR_Pct_SOCTargetInit;

    /* SignalConversion generated from: '<S1007>/Comm_b_DrvMdReqErr' incorporates:
     *  Constant: '<S1018>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_DrvMdReq = KeDMIR_b_DrvMdReqErrInit;

    /* SignalConversion generated from: '<S1007>/Comm_b_InternalLightSts' incorporates:
     *  Constant: '<S1025>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_Internal = KeDMIR_b_InternalLightStsInit;

    /* SignalConversion generated from: '<S1007>/Comm_Pct_PanelIntensity' incorporates:
     *  Constant: '<S1013>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_Pct_PanelI = KeDMIR_Pct_PanelIntensityInit;

    /* SignalConversion generated from: '<S1007>/Comm_e_ElectricPlusSwitch' incorporates:
     *  Constant: '<S1034>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_Electric = KeDMIR_e_EVBtnInit;

    /* SignalConversion generated from: '<S1007>/Comm_b_EVBtnFA' incorporates:
     *  Constant: '<S1021>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_EVBtnFA = KeDMIR_b_EVBtnFAInit;

    /* SignalConversion generated from: '<S1007>/Comm_e_ESaveBtn' incorporates:
     *  Constant: '<S1033>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_ESaveBtn = KeDMIR_e_ESaveBtnInit;

    /* SignalConversion generated from: '<S1007>/Comm_b_ESaveBtnFA' incorporates:
     *  Constant: '<S1020>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_ESaveBtn = KeDMIR_b_ESaveBtnFAInit;

    /* SignalConversion generated from: '<S1007>/VeDMDI_b_SailOffRequest' incorporates:
     *  Constant: '<S1030>/Calib'
     */
    DMIR_ac_B.OutportBufferForVeDMDI_b_SailOf = KeDMIR_b_SailOffReqInit;

    /* SignalConversion generated from: '<S1007>/Comm_e_PaddlesSts' incorporates:
     *  Constant: '<S1037>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_PaddlesS = KeDMIR_e_PaddlesStsInit;

    /* SignalConversion generated from: '<S1007>/Comm_b_PaddlesStsFA' incorporates:
     *  Constant: '<S1028>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_PaddlesS = KeDMIR_b_PaddlesStsFAInit;

    /* SignalConversion generated from: '<S1007>/Comm_b_PaddlesFailSts' incorporates:
     *  Constant: '<S1027>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_PaddlesF = KeDMIR_b_PaddlesFailStsInit;

    /* SignalConversion generated from: '<S1007>/Comm_b_PaddlesFailStsFA' incorporates:
     *  Constant: '<S1026>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_Paddle_n = KeDMIR_b_PaddlesFailStsFAInit;

    /* SignalConversion generated from: '<S1007>/Comm_e_eDriveModeSwitchRqst' incorporates:
     *  Constant: '<S1038>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_eDriveMo = KeDMIR_e_eDriveModeSwitchStsInit;

    /* SignalConversion generated from: '<S1007>/Comm_b_eDriveModeSwitchRqstFA' incorporates:
     *  Constant: '<S1031>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_eDriveMo =
        KeDMIR_b_eDriveModeSwitchStsFAInit;

    /* SignalConversion generated from: '<S1007>/Comm_b_DodgeSportSts' */
    DMIR_ac_B.OutportBufferForComm_b_DodgeSpo = false;

    /* SignalConversion generated from: '<S1007>/Comm_e_DriveStyleSts' incorporates:
     *  Constant: '<S1032>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_DriveSty = KeDMIR_e_DriveStyleStsInit;

    /* SignalConversion generated from: '<S1007>/Comm_b_DriveStyleStsFA' incorporates:
     *  Constant: '<S1015>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_DriveSty = KeDMIR_b_DriveStyleStsFAInit;

    /* SignalConversion generated from: '<S1007>/Comm_e_EcoBtnSt' incorporates:
     *  Constant: '<S1035>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_EcoBtnSt = KeDMIR_e_EcoBtnStInit;

    /* SignalConversion generated from: '<S1007>/Comm_b_EcoBtnStFa' incorporates:
     *  Constant: '<S1022>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_EcoBtnSt = KeDMIR_b_EcoBtnStFAInit;

    /* SignalConversion generated from: '<S1007>/Comm_e_BrakingMdReq' incorporates:
     *  Constant: '<S1036>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_BrakingM = KeDMIR_e_BrakingMdReqInit;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1008>/VeDMIR_e_DrvMdRaw_Out_Init' incorporates:
     *  Constant: '<S1008>/Const1'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_DrvMdR = DMIR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_LatchEV_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_LatchE = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_HybridMdLEDOn_Out_Init' incorporates:
     *  Constant: '<S1008>/Const3'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Hybrid = DMIR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_EVMdLEDOn_Out_Init' incorporates:
     *  Constant: '<S1008>/Const4'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_EVMdLE = DMIR_ac_ConstB.Const4;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_ESaveMdLEDOn_Out_Init' incorporates:
     *  Constant: '<S1008>/Const5'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_ESaveM = DMIR_ac_ConstB.Const5;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_SportMdLEDOn_Out_Init' incorporates:
     *  Constant: '<S1008>/Const6'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_SportM = DMIR_ac_ConstB.Const6;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_InternalLightSts_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_Intern = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_Pct_PanelIntensity_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_Pct_Pane = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_DrvMdInfoSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const9'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_DrvMdI = DMIR_ac_ConstB.Const9;

    /* SignalConversion generated from: '<S1008>/VeDMIR_d_TgtSOCRngCnf_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_d_TgtSOC = 0U;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_EChargeType_Out_Init' incorporates:
     *  Constant: '<S1008>/Const11'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_ECharg = DMIR_ac_ConstB.Const11;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_SailOffStatus_Out_Init' incorporates:
     *  Constant: '<S1008>/Const12'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_SailOf = DMIR_ac_ConstB.Const12;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_SailOffStatus_Internal_Out_Init' incorporates:
     *  Constant: '<S1008>/Const13'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Sail_h = DMIR_ac_ConstB.Const13;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_DrvMdNotAvailDiag_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_DrvMdN = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_CommFault_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_CommFa = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_CommFaultESave_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_Comm_o = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_Pct_HV_BatSOCTarget_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_Pct_HV_B = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_ESaveBtnVolt1ShortToPwr_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_ESaveB = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_ESaveBtnVolt1ShortToGrnd_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_ESav_g = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_ESaveBtnVoltDiffBtn_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_ESav_n = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_HybridBtnVolt1ShortToPwr_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_Hybrid = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_HybridBtnVolt1ShortToGrnd_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_Hybr_i = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_HybridBtnVoltDiffBtn_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_Hybr_j = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_EvBtnVolt1ShortToPwr_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_EvBtnV = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_EvBtnVolt1ShortToGrnd_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_EvBt_j = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_EvBtnVoltDiffBtn_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_EvBt_n = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_DenyESave_TonaleDiag_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_DenyES = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_ElectricPlusSwitchActv_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_Electr = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_ESaveMdBtnActv_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_ESaveM = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_HybridBtnActv_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_Hyb_jf = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_DNA_ESaveStatus_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_DNA_ES = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_eCoastingSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const32'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_eCoast = DMIR_ac_ConstB.Const32;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_TellTaleSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const33'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_TellTa = DMIR_ac_ConstB.Const33;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_TellTaleInfo_Out_Init' incorporates:
     *  Constant: '<S1008>/Const34'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Tell_j = DMIR_ac_ConstB.Const34;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_eCoast_PopUpRqst_Out_Init' incorporates:
     *  Constant: '<S1008>/Const35'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_eCoa_l = DMIR_ac_ConstB.Const35;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_eCoastingSel_Out_Init' incorporates:
     *  Constant: '<S1008>/Const36'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_eCoa_p = DMIR_ac_ConstB.Const36;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_eBoostRequest_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_eBoost = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_eBoostSwitchFailSts_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_eBoo_p = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_DriveStyleSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const39'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Driv_k = DMIR_ac_ConstB.Const39;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_DriveStyleStsFA_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_DriveS = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_EcoLEDOn_Out_Init' incorporates:
     *  Constant: '<S1008>/Const41'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_EcoLED = DMIR_ac_ConstB.Const41;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_RegenSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const42'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_RegenS = DMIR_ac_ConstB.Const42;

    /* SignalConversion generated from: '<S1008>/DrvMdArb_write' incorporates:
     *  Constant: '<S1040>/Constant'
     */
    DMIR_ac_B.OutportBufferForDrvMdArb_write = DMIR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S1008>/EVModeDenied_write' */
    DMIR_ac_B.OutportBufferForEVModeDenied_wr = false;

    /* SignalConversion generated from: '<S1008>/HybridModeDenied_write' */
    DMIR_ac_B.OutportBufferForHybridModeDenie = false;

    /* SignalConversion generated from: '<S1008>/ESaveModeDenied_write' */
    DMIR_ac_B.OutportBufferForESaveModeDenied = false;

    /* SignalConversion generated from: '<S1008>/SportModeDenied_write' */
    DMIR_ac_B.OutportBufferForSportModeDenied = false;

    /* SignalConversion generated from: '<S1008>/EngOnWOTRsnRaw_write' */
    DMIR_ac_B.OutportBufferForEngOnWOTRsnRaw_ = false;

    /* SignalConversion generated from: '<S1008>/PowerMode_write' incorporates:
     *  Constant: '<S1041>/Constant'
     */
    DMIR_ac_B.OutportBufferForPowerMode_write = DMIR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1008>/EngOnInEVLED_write' */
    DMIR_ac_B.OutportBufferForEngOnInEVLED_wr = false;

    /* SignalConversion generated from: '<S1008>/EngOnWOTRsnFnl_write' */
    DMIR_ac_B.OutportBufferForEngOnWOTRsnFnl_ = false;

    /* SignalConversion generated from: '<S1008>/EngOnEVFnlHMI_write' */
    DMIR_ac_B.OutportBufferForEngOnEVFnlHMI_w = false;

    /* SignalConversion generated from: '<S1008>/DriveReady_write' */
    DMIR_ac_B.OutportBufferForDriveReady_writ = false;

    /* SignalConversion generated from: '<S1008>/EVModeInhibit2_write' */
    DMIR_ac_B.OutportBufferForEVModeInhibit2_ = 0U;

    /* SignalConversion generated from: '<S1008>/EcoDenied_write' */
    DMIR_ac_B.OutportBufferForEcoDenied_write = false;

    /* SignalConversion generated from: '<S1008>/VeDMID_b_DrvMdNotAvailDiag_write' */
    DMIR_ac_B.OutportBufferForVeDMID_b_DrvMdN = false;

    /* SignalConversion generated from: '<S1008>/VeDMID_b_HybridBtnActv_write' */
    DMIR_ac_B.OutportBufferForVeDMID_b_Hybrid = false;

    /* SignalConversion generated from: '<S1008>/DenyEsave_TonaleDiag_write' */
    DMIR_ac_B.OutportBufferForDenyEsave_Tonal = false;

    /* SignalConversion generated from: '<S1008>/VeDMIC_e_DrvMdRaw_write' incorporates:
     *  Constant: '<S1042>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_e_DrvMdR = DMIR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S1008>/VeDMIC_e_HybridMdLEDOn_write' incorporates:
     *  Constant: '<S1043>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_e_Hybrid = DMIR_ac_ConstB.Constant_ka;

    /* SignalConversion generated from: '<S1008>/VeDMIC_e_EVMdLEDOn_write' incorporates:
     *  Constant: '<S1044>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_e_EVMdLE = DMIR_ac_ConstB.Constant_a1;

    /* SignalConversion generated from: '<S1008>/VeDMIC_e_ESaveLEDOn_write' incorporates:
     *  Constant: '<S1045>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_e_ESaveL = DMIR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S1008>/VeDMIC_e_SportLEDOn_write' incorporates:
     *  Constant: '<S1046>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_e_SportL = DMIR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S1008>/VeDMIC_b_InternalLightSts_write' */
    DMIR_ac_B.OutportBufferForVeDMIC_b_Intern = false;

    /* SignalConversion generated from: '<S1008>/VeDMIC_Pct_PanelIntensity_write' */
    DMIR_ac_B.OutportBufferForVeDMIC_Pct_Pane = 0.0F;

    /* SignalConversion generated from: '<S1008>/VeDMIC_e_DrvMdInfoSt_write' incorporates:
     *  Constant: '<S1047>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_e_DrvMdI = DMIR_ac_ConstB.Constant_kg;

    /* SignalConversion generated from: '<S1008>/VeDMIC_b_EcoLEDOn_write' incorporates:
     *  Constant: '<S1048>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_b_EcoLED = DMIR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_DrvMdReqErrFA_write' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_DrvMdR = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_InternalLightStsFA_write' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_Inte_j = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_DrvMdReqErr_write' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_DrvM_i = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_ESCOffActv_write' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_ESCOff = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_InternalLightSts_write' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_Inte_p = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_PaddlesFailSts_write' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_Paddle = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_SailOff_Request_write' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_SailOf = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_CFGFeature_write' */
    DMIR_ac_B.OutportBufferForVeDMIR_e_CFGFea = 0;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_CFG_Set_write' incorporates:
     *  Constant: '<S1051>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_CFG_Se = DMIR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_eSaveSwitch_write' incorporates:
     *  Constant: '<S1052>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_eSaveS = DMIR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_ESaveBtnStLIN_write' incorporates:
     *  Constant: '<S1053>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_ESaveB = DMIR_ac_ConstB.Constant_e2;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_ElectricPlusSwitchLIN_write' incorporates:
     *  Constant: '<S1054>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Elec_n = DMIR_ac_ConstB.Constant_ch;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_EcoBtnStLIN_write' incorporates:
     *  Constant: '<S1055>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_EcoBtn = DMIR_ac_ConstB.Constant_kv;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_PaddleSts_write' incorporates:
     *  Constant: '<S1056>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Paddle = DMIR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_StReq_write' */
    DMIR_ac_B.OutportBufferForVeDMIR_e_StReq_ = 0;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwBCkt_Perf' incorporates:
     *  Constant: '<S1057>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_FaultS = DMIR_ac_ConstB.Constant_fe;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktHi' incorporates:
     *  Constant: '<S1058>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_a = DMIR_ac_ConstB.Constant_er;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktLo' incorporates:
     *  Constant: '<S1059>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_n = DMIR_ac_ConstB.Constant_j0;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktHi' incorporates:
     *  Constant: '<S1060>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_e = DMIR_ac_ConstB.Constant_bl;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktLo' incorporates:
     *  Constant: '<S1061>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_k = DMIR_ac_ConstB.Constant_iz;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktPerf' incorporates:
     *  Constant: '<S1062>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_j = DMIR_ac_ConstB.Constant_eb;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_EcoModSwHi' incorporates:
     *  Constant: '<S1063>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_b = DMIR_ac_ConstB.Constant_bp;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_EcoModSwLo' incorporates:
     *  Constant: '<S1064>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_h = DMIR_ac_ConstB.Constant_an;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_EcoModSwPerf' incorporates:
     *  Constant: '<S1065>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_i = DMIR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_CreepSts' incorporates:
     *  Constant: '<S1066>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_CreepS = DMIR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_PowershotButton' incorporates:
     *  Constant: '<S1067>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Powers = DMIR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_ECoastingReq' incorporates:
     *  Constant: '<S1069>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_ECoast = DMIR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_ElectricPlusSwitch_write' incorporates:
     *  Constant: '<S1049>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Elec_j = DMIR_ac_ConstB.Constant_gf;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_EcoBtnSt_write' incorporates:
     *  Constant: '<S1050>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_EcoB_a = DMIR_ac_ConstB.Constant_nx;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_EcoLEDOn_LED_Out_Init' incorporates:
     *  Constant: '<S1008>/Const84'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_EcoL_h = DMIR_ac_ConstB.Const84;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_ElectricPlusLEDOn_LED_Out_Init' incorporates:
     *  Constant: '<S1008>/Const83'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Electr = DMIR_ac_ConstB.Const83;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_ESaveLEDOn_LED_Out_Init' incorporates:
     *  Constant: '<S1008>/Const96'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_ESaveL = DMIR_ac_ConstB.Const96;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_PddlMdReq' incorporates:
     *  Constant: '<S1068>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_PddlMd = DMIR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_PddlMdSatus_OutInit' incorporates:
     *  Constant: '<S1070>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Pddl_m = DMIR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_eCoastPopUpMsg_OutInit' incorporates:
     *  Constant: '<S1071>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_eCo_pr = DMIR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S1008>/VeDMIR_b_eRuptRequest_Out_Init' */
    DMIR_ac_B.OutportBufferForVeDMIR_b_eRuptR = false;

    /* SignalConversion generated from: '<S1008>/VeDMIR_e_BrakingMdReq_OutInit' incorporates:
     *  Constant: '<S1072>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Brakin = DMIR_ac_ConstB.Constant_nh;

#if Rte_SysCon_Variant_DMIR_1

    /* Outputs for Function Call SubSystem: '<S4>/Init_DMIR_IRV_DT_BEV' */
    /* SignalConversion generated from: '<S1006>/VeDMIR_e_DriveStyleSts_write' incorporates:
     *  Constant: '<S1011>/Calib'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_DriveS = KeDMIR_e_DriveStyleStsInit;

    /* End of Outputs for SubSystem: '<S4>/Init_DMIR_IRV_DT_BEV' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
#endif

    /* Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktHi' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktHi'
     *  SignalConversion generated from: '<S4>/R_VeDMIR_e_FaultSts_DrvrModSelSwA_CktHi'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwA_CktHi_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_e);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktLo' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktLo'
     *  SignalConversion generated from: '<S4>/R_VeDMIR_e_FaultSts_DrvrModSelSwA_CktLo'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwA_CktLo_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_k);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktPerf' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktPerf'
     *  SignalConversion generated from: '<S4>/R_VeDMIR_e_FaultSts_DrvrModSelSwA_CktPerf'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwA_CktPerf_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_j);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwBCkt_Perf' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwBCkt_Perf'
     *  SignalConversion generated from: '<S4>/R_VeDMIR_e_FaultSts_DrvrModSelSwBCkt_Perf'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwBCkt_Perf_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_FaultS);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktHi' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktHi'
     *  SignalConversion generated from: '<S4>/R_VeDMIR_e_FaultSts_DrvrModSelSwB_CktHi'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwB_CktHi_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_a);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktLo' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktLo'
     *  SignalConversion generated from: '<S4>/R_VeDMIR_e_FaultSts_DrvrModSelSwB_CktLo'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwB_CktLo_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_n);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_EcoModSwHi' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_EcoModSwHi'
     *  SignalConversion generated from: '<S4>/R_VeDMIR_e_FaultSts_EcoModSwHi'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_EcoModSwHi_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_b);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_EcoModSwLo' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_EcoModSwLo'
     *  SignalConversion generated from: '<S4>/R_VeDMIR_e_FaultSts_EcoModSwLo'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_EcoModSwLo_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_h);

    /* Outport: '<Root>/VeDMIR_e_FaultSts_EcoModSwPerf' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_EcoModSwPerf'
     *  SignalConversion generated from: '<S4>/R_VeDMIR_e_FaultSts_EcoModSwPerf'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_EcoModSwPerf_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_i);

    /* Outport: '<Root>/VeDMIR_Pct_HV_BatSOCTarget' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_Pct_HV_BatSOCTarget_Out_Init'
     */
    (void)Rte_Write_VeDMIR_Pct_HV_BatSOCTarget_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_Pct_HV_B);

    /* Outport: '<Root>/VeDMIR_Pct_PanelIntensity' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_Pct_PanelIntensity_Out_Init'
     */
    (void)Rte_Write_VeDMIR_Pct_PanelIntensity_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_Pct_Pane);

    /* Outport: '<Root>/VeDMIR_b_CommFaultESave' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_CommFaultESave_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_CommFaultESave_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_Comm_o);

    /* Outport: '<Root>/VeDMIR_b_CommFault' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_CommFault_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_CommFault_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_CommFa);

    /* Outport: '<Root>/VeDMIR_b_DNA_ESaveStatus' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_DNA_ESaveStatus_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_DNA_ESaveStatus_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_DNA_ES);

    /* Outport: '<Root>/VeDMIR_b_DenyESave_TonaleDiag' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_DenyESave_TonaleDiag_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_DenyESave_TonaleDiag_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_DenyES);

    /* Outport: '<Root>/VeDMIR_b_DriveStyleStsFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_DriveStyleStsFA_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_DriveStyleStsFA_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_DriveS);

    /* Outport: '<Root>/VeDMIR_b_DrvMdNotAvailDiag' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_DrvMdNotAvailDiag_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_DrvMdNotAvailDiag_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_DrvMdN);

    /* Outport: '<Root>/VeDMIR_b_ESaveBtnVolt1ShortToGrnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_ESaveBtnVolt1ShortToGrnd_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_ESaveBtnVolt1ShortToGrnd_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_ESav_g);

    /* Outport: '<Root>/VeDMIR_b_ESaveBtnVolt1ShortToPwr' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_ESaveBtnVolt1ShortToPwr_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_ESaveBtnVolt1ShortToPwr_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_ESaveB);

    /* Outport: '<Root>/VeDMIR_b_ESaveBtnVoltDiffBtn' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_ESaveBtnVoltDiffBtn_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_ESaveBtnVoltDiffBtn_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_ESav_n);

    /* Outport: '<Root>/VeDMIR_b_ESaveMdBtnActv' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_ESaveMdBtnActv_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_ESaveMdBtnActv_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_ESaveM);

    /* Outport: '<Root>/VeDMIR_b_ElectricPlusSwitchActv' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_ElectricPlusSwitchActv_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_ElectricPlusSwitchActv_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_Electr);

    /* Outport: '<Root>/VeDMIR_b_EvBtnVolt1ShortToGrnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_EvBtnVolt1ShortToGrnd_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_EvBtnVolt1ShortToGrnd_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_EvBt_j);

    /* Outport: '<Root>/VeDMIR_b_EvBtnVolt1ShortToPwr' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_EvBtnVolt1ShortToPwr_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_EvBtnVolt1ShortToPwr_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_EvBtnV);

    /* Outport: '<Root>/VeDMIR_b_EvBtnVoltDiffBtn' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_EvBtnVoltDiffBtn_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_EvBtnVoltDiffBtn_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_EvBt_n);

    /* Outport: '<Root>/VeDMIR_b_HybridBtnActv' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_HybridBtnActv_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_HybridBtnActv_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_Hyb_jf);

    /* Outport: '<Root>/VeDMIR_b_HybridBtnVolt1ShortToGrnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_HybridBtnVolt1ShortToGrnd_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_HybridBtnVolt1ShortToGrnd_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_Hybr_i);

    /* Outport: '<Root>/VeDMIR_b_HybridBtnVolt1ShortToPwr' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_HybridBtnVolt1ShortToPwr_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_HybridBtnVolt1ShortToPwr_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_Hybrid);

    /* Outport: '<Root>/VeDMIR_b_HybridBtnVoltDiffBtn' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_HybridBtnVoltDiffBtn_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_HybridBtnVoltDiffBtn_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_Hybr_j);

    /* Outport: '<Root>/VeDMIR_b_InternalLightSts' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_InternalLightSts_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_InternalLightSts_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_Intern);

    /* Outport: '<Root>/VeDMIR_b_LatchEV' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_LatchEV_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_LatchEV_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_LatchE);

    /* Outport: '<Root>/VeDMIR_b_eBoostRequest' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_eBoostRequest_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_eBoostRequest_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_eBoost);

    /* Outport: '<Root>/VeDMIR_b_eBoostSwitchFailSts' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_eBoostSwitchFailSts_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_eBoostSwitchFailSts_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_eBoo_p);

    /* Outport: '<Root>/VeDMIR_b_eRuptRequest' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_eRuptRequest_Out_Init'
     */
    (void)Rte_Write_VeDMIR_b_eRuptRequest_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_b_eRuptR);

    /* Outport: '<Root>/VeDMIR_d_TgtSOCRngCnf' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_d_TgtSOCRngCnf_Out_Init'
     */
    (void)Rte_Write_VeDMIR_d_TgtSOCRngCnf_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_d_TgtSOC);

    /* Outport: '<Root>/VeDMIR_e_BrakingMdReq' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_BrakingMdReq_OutInit'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_BrakingMdReq_OutInit'
     */
    (void)Rte_Write_VeDMIR_e_BrakingMdReq_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Brakin);

    /* Outport: '<Root>/VeDMIR_e_CreepSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_CreepSts'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_CreepSts'
     */
    (void)Rte_Write_VeDMIR_e_CreepSts_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_CreepS);

    /* Outport: '<Root>/VeDMIR_e_DriveStyleSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_DriveStyleSts_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_DriveStyleSts_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_DriveStyleSts_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Driv_k);

    /* SignalConversion generated from: '<S4>/VeDMIR_e_DriveStyleSts_write' */
#if Rte_SysCon_Variant_DMIR_1

    /* SignalConversion generated from: '<S4>/VeDMIR_e_DriveStyleSts_write' incorporates:
     *  SignalConversion generated from: '<S1006>/VeDMIR_e_DriveStyleSts_write'
     */
    rtb_OutportBufferForVeDMIR_e_e4 = DMIR_ac_B.OutportBufferForVeDMIR_e_DriveS;

#endif

    /* End of SignalConversion generated from: '<S4>/VeDMIR_e_DriveStyleSts_write' */

    /* Outport: '<Root>/VeDMIR_e_DrvMdInfoSt' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_DrvMdInfoSt_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_DrvMdInfoSt_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_DrvMdInfoSt_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_DrvMdI);

    /* Outport: '<Root>/VeDMIR_e_DrvMdRaw' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_DrvMdRaw_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_DrvMdRaw_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_DrvMdRaw_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_DrvMdR);

    /* Outport: '<Root>/VeDMIR_e_EChargeType' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_EChargeType_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_EChargeType_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_EChargeType_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_ECharg);

    /* Outport: '<Root>/VeDMIR_e_ESaveLEDOn_LIN' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_ESaveLEDOn_LED_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_ESaveLEDOn_LIN_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_ESaveLEDOn_LIN_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_ESaveL);

    /* Outport: '<Root>/VeDMIR_e_ESaveLEDOn' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_ESaveMdLEDOn_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_ESaveMdLEDOn_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_ESaveLEDOn_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_ESaveM);

    /* Outport: '<Root>/VeDMIR_e_ElectricPlusLEDOn' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_EVMdLEDOn_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_EVMdLEDOn_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_ElectricPlusLEDOn_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_EVMdLE);

    /* Outport: '<Root>/VeDMIR_e_EcoLEDOn_LIN' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_EcoLEDOn_LED_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_EcoLEDOn_LIN_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_EcoLEDOn_LIN_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_EcoL_h);

    /* Outport: '<Root>/VeDMIR_e_EcoLEDOn' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_EcoLEDOn_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_EcoLEDOn_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_EcoLEDOn_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_EcoLED);

    /* Outport: '<Root>/VeDMIR_e_ElectricPlusLEDOn_LIN' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_ElectricPlusLEDOn_LED_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_ElectricPlusLEDOn_LIN_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_ElectricPlusLEDOn_LIN_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Electr);

    /* Outport: '<Root>/VeDMIR_e_HybridMdLEDOn' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_HybridMdLEDOn_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_HybridMdLEDOn_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_HybridMdLEDOn_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Hybrid);

    /* Outport: '<Root>/VeDMIR_e_PaddleModeSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_PddlMdSatus_OutInit'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_PddlMdSatus_OutInit'
     */
    (void)Rte_Write_VeDMIR_e_PaddleModeSts_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Pddl_m);

    /* Outport: '<Root>/VeDMIR_e_RegenSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_RegenSts_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_RegenSts_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_RegenSts_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_RegenS);

    /* Outport: '<Root>/VeDMIR_e_SailOffStatus_Internal' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_SailOffStatus_Internal_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_SailOffStatus_Internal_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_SailOffStatus_Internal_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Sail_h);

    /* Outport: '<Root>/VeDMIR_e_SailOffStatus' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_SailOffStatus_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_SailOffStatus_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_SailOffStatus_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_SailOf);

    /* Outport: '<Root>/VeDMIR_e_SportMdLEDOn' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_SportMdLEDOn_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_SportMdLEDOn_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_SportMdLEDOn_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_SportM);

    /* Outport: '<Root>/VeDMIR_e_TellTaleInfo' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_TellTaleInfo_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_TellTaleInfo_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_TellTaleInfo_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Tell_j);

    /* Outport: '<Root>/VeDMIR_e_TellTaleSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_TellTaleSts_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_TellTaleSts_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_TellTaleSts_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_TellTa);

    /* Outport: '<Root>/VeDMIR_y_eCoastingPopupMsg' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_eCoastPopUpMsg_OutInit'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_eCoastPopUpMsg_OutInit'
     */
    (void)Rte_Write_VeDMIR_y_eCoastingPopupMsg_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_eCo_pr);

    /* Outport: '<Root>/VeDMIR_e_eCoast_PopUpRqst' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_eCoast_PopUpRqst_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_eCoast_PopUpRqst_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_eCoast_PopUpRqst_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_eCoa_l);

    /* Outport: '<Root>/VeDMIR_e_eCoastingSel' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_eCoastingSel_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_eCoastingSel_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_eCoastingSel_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_eCoa_p);

    /* Outport: '<Root>/VeDMIR_e_eCoastingSts' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_eCoastingSts_Out_Init'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_eCoastingSts_Out_Init'
     */
    (void)Rte_Write_VeDMIR_e_eCoastingSts_Value
        (DMIR_ac_B.OutportBufferForVeDMIR_e_eCoast);

    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_Pct_HV_BatSOCTarget_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_Pct_HV_BatSOCTarget_write_IRV
        (DMIR_ac_B.OutportBufferForComm_Pct_HV_Bat);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_Pct_PanelIntensity_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_Pct_PanelIntensity_write_IRV
        (DMIR_ac_B.OutportBufferForComm_Pct_PanelI);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_b_DodgeSportSts_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_DodgeSportSts_write_IRV
        (DMIR_ac_B.OutportBufferForComm_b_DodgeSpo);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_b_DriveStyleStsFA_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_b_DriveStyleStsFA_write_IRV
        (DMIR_ac_B.OutportBufferForComm_b_DriveSty);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_b_DrvMdDrvrInputFA_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_b_DrvMdDrvrInputFA_write_IRV
        (DMIR_ac_B.OutportBufferForComm_b_DrvMdDrv);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_b_DrvMdReqErr_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_b_DrvMdReqErr_write_IRV
        (DMIR_ac_B.OutportBufferForComm_b_DrvMdReq);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_b_ESaveBtnFA_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_b_ESaveBtnFA_write_IRV
        (DMIR_ac_B.OutportBufferForComm_b_ESaveBtn);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_b_EVBtnFA_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_b_EVBtnFA_write_IRV
        (DMIR_ac_B.OutportBufferForComm_b_EVBtnFA);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_b_EcoBtnFA_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_EcoBtnStFA_write_IRV
        (DMIR_ac_B.OutportBufferForComm_b_EcoBtnSt);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_b_InternalLightSts_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_b_InternalLightSts_write_IRV
        (DMIR_ac_B.OutportBufferForComm_b_Internal);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_b_PaddlesFailStsFA_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_PaddlesFailStsFA_write_IRV
        (DMIR_ac_B.OutportBufferForComm_b_Paddle_n);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_b_PaddlesFailSts_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_PaddlesFailSts_write_IRV
        (DMIR_ac_B.OutportBufferForComm_b_PaddlesF);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_b_PaddlesStsFA_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_PaddlesStsFA_write_IRV
        (DMIR_ac_B.OutportBufferForComm_b_PaddlesS);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_b_eDriveModeSwitchRqstFA_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_eDriveModeSwitchRqstFA_write_IRV
        (DMIR_ac_B.OutportBufferForComm_b_eDriveMo);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S1007>/Comm_e_DriveStyleSts'
     *  SignalConversion generated from: '<S4>/Comm_e_DriveStyleSts_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_e_DriveStyleSts_write_IRV
        (DMIR_ac_B.OutportBufferForComm_e_DriveSty);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_e_DrvMdDrvrInput_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_e_DrvMdDrvrInput_write_IRV
        (DMIR_ac_B.OutportBufferForComm_e_DrvMdDrv);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Initialize_DMII_Inputs'
     */
    /* Merge: '<Root>/Merge_27' incorporates:
     *  DataStoreRead: '<S1007>/Data Store Read1'
     *  DataTypeConversion: '<S1012>/DataTypeConversion'
     *  SignalConversion generated from: '<S4>/Comm_e_EChargeType_write'
     */
    Rte_IrvWrite_DMIR_PwrOn_Comm_e_EChargeType_write_IRV((TeDMDR_e_EChargetype)
        EeDMIR_d_ChargeTypeCnf);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S1007>/Comm_e_ESaveBtn'
     *  SignalConversion generated from: '<S4>/Comm_e_ESaveBtn_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_e_ESaveBtn_write_IRV
        (DMIR_ac_B.OutportBufferForComm_e_ESaveBtn);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S1007>/Comm_e_EcoBtnSt'
     *  SignalConversion generated from: '<S4>/Comm_e_EcoBtnSt_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_EcoBtnSt_write_IRV
        (DMIR_ac_B.OutportBufferForComm_e_EcoBtnSt);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S1007>/Comm_e_ElectricPlusSwitch'
     *  SignalConversion generated from: '<S4>/Comm_e_ElectricPlusSwitch_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_e_ElectricPlusSwitch_write_IRV
        (DMIR_ac_B.OutportBufferForComm_e_Electric);

    /* Merge: '<Root>/4' incorporates:
     *  SignalConversion generated from: '<S1007>/Comm_e_BrakingMdReq'
     *  SignalConversion generated from: '<S4>/Comm_e_KeDMIR_e_BrakingMdReq_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_e_KeDMIR_e_BrakingMdReq_write_IRV
        (DMIR_ac_B.OutportBufferForComm_e_BrakingM);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S1007>/Comm_e_PaddlesSts'
     *  SignalConversion generated from: '<S4>/Comm_e_PaddlesSts_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_PaddlesSts_write_IRV
        (DMIR_ac_B.OutportBufferForComm_e_PaddlesS);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S1007>/Comm_e_eDriveModeSwitchRqst'
     *  SignalConversion generated from: '<S4>/Comm_e_eDriveModeSwitchRqst_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_Comm_eDriveModeSwitchRqst_write_IRV
        (DMIR_ac_B.OutportBufferForComm_e_eDriveMo);

    /* Merge: '<Root>/DenyEsave_TonaleDiag_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/DenyEsave_TonaleDiag_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_DenyEsave_TonaleDiag_write_IRV
        (DMIR_ac_B.OutportBufferForDenyEsave_Tonal);

    /* Merge: '<Root>/DriveReady_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/DriveReady_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_DriveReady_write_IRV
        (DMIR_ac_B.OutportBufferForDriveReady_writ);

    /* Merge: '<Root>/DrvMdArb_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/DrvMdArb_write'
     *  SignalConversion generated from: '<S4>/DrvMdArb_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_DrvMdArb_write_IRV
        (DMIR_ac_B.OutportBufferForDrvMdArb_write);

    /* Merge: '<Root>/ESaveModeDenied_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/ESaveModeDenied_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_ESaveModeDenied_write_IRV
        (DMIR_ac_B.OutportBufferForESaveModeDenied);

    /* Merge: '<Root>/EVModeDenied_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EVModeDenied_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_EVModeDenied_write_IRV
        (DMIR_ac_B.OutportBufferForEVModeDenied_wr);

    /* Merge: '<Root>/EVModeInhibit2_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EVModeInhibit2_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_EVModeInhibit2_write_IRV
        (DMIR_ac_B.OutportBufferForEVModeInhibit2_);

    /* Merge: '<Root>/EcoDenied_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EcoDenied_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_EcoDenied_write_IRV
        (DMIR_ac_B.OutportBufferForEcoDenied_write);

    /* Merge: '<Root>/EngOnEVFnlHMI_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EngOnEVFnlHMI_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_EngOnEVFnlHMI_write_IRV
        (DMIR_ac_B.OutportBufferForEngOnEVFnlHMI_w);

    /* Merge: '<Root>/EngOnInEVLED_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EngOnInEVLED_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_EngOnInEVLED_write_IRV
        (DMIR_ac_B.OutportBufferForEngOnInEVLED_wr);

    /* Merge: '<Root>/EngOnWOTRsnFnl_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EngOnWOTRsnFnl_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_EngOnWOTRsnFnl_write_IRV
        (DMIR_ac_B.OutportBufferForEngOnWOTRsnFnl_);

    /* Merge: '<Root>/EngOnWOTRsnRaw_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EngOnWOTRsnRaw_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_EngOnWOTRsnRaw_write_IRV
        (DMIR_ac_B.OutportBufferForEngOnWOTRsnRaw_);

    /* Merge: '<Root>/HybridModeDenied_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/HybridModeDenied_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_HybridModeDenied_write_IRV
        (DMIR_ac_B.OutportBufferForHybridModeDenie);

    /* Merge: '<Root>/PowerMode_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/PowerMode_write'
     *  SignalConversion generated from: '<S4>/PowerMode_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_PowerMode_write_IRV
        (DMIR_ac_B.OutportBufferForPowerMode_write);

    /* Merge: '<Root>/SportModeDenied_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/SportModeDenied_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_SportModeDenied_write_IRV
        (DMIR_ac_B.OutportBufferForSportModeDenied);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMDI_b_SailOffRequest_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_SailOff_Request_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMDI_b_SailOf);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Initialize_DMII_Inputs'
     */
    /* Merge: '<Root>/Merge_18' incorporates:
     *  DataStoreRead: '<S1007>/Data Store Read3'
     *  SignalConversion generated from: '<S4>/VeDMDI_e_TgtSOCRngCnf_write'
     */
    Rte_IrvWrite_DMIR_PwrOn_VeDMDI_e_TgtSOCRngCnf_write_IRV
        (EeDMIR_d_TgtSOCRngCnf);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Merge: '<Root>/VeDMIC_Pct_PanelIntensity_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIC_Pct_PanelIntensity_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIC_Pct_PanelIntensity_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIC_Pct_Pane);

    /* Merge: '<Root>/VeDMIC_b_EcoLEDOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIC_b_EcoLEDOn_write'
     *  SignalConversion generated from: '<S4>/VeDMIC_b_EcoLEDOn_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIC_b_EcoLEDOn_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIC_b_EcoLED);

    /* Merge: '<Root>/VeDMIC_b_InternalLightSts_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIC_b_InternalLightSts_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIC_b_InternalLightSts_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIC_b_Intern);

    /* Merge: '<Root>/VeDMIC_e_DrvMdInfoSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIC_e_DrvMdInfoSt_write'
     *  SignalConversion generated from: '<S4>/VeDMIC_e_DrvMdInfoSt_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIC_e_DrvMdInfoSt_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIC_e_DrvMdI);

    /* Merge: '<Root>/VeDMIC_e_DrvMdRaw_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIC_e_DrvMdRaw_write'
     *  SignalConversion generated from: '<S4>/VeDMIC_e_DrvMdRaw_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIC_e_DrvMdRaw_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIC_e_DrvMdR);

    /* Merge: '<Root>/VeDMIC_e_ESaveLEDOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIC_e_ESaveLEDOn_write'
     *  SignalConversion generated from: '<S4>/VeDMIC_e_ESaveLEDOn_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIC_e_ESaveLEDOn_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIC_e_ESaveL);

    /* Merge: '<Root>/VeDMIC_e_EVMdLEDOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIC_e_EVMdLEDOn_write'
     *  SignalConversion generated from: '<S4>/VeDMIC_e_EVMdLEDOn_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIC_e_EVMdLEDOn_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIC_e_EVMdLE);

    /* Merge: '<Root>/VeDMIC_e_HybridMdLEDOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIC_e_HybridMdLEDOn_write'
     *  SignalConversion generated from: '<S4>/VeDMIC_e_HybridMdLEDOn_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIC_e_HybridMdLEDOn_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIC_e_Hybrid);

    /* Merge: '<Root>/VeDMIC_e_SportLEDOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIC_e_SportLEDOn_write'
     *  SignalConversion generated from: '<S4>/VeDMIC_e_SportLEDOn_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIC_e_SportLEDOn_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIC_e_SportL);

    /* Merge: '<Root>/VeDMID_b_DrvMdNotAvailDiag_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMID_b_DrvMdNotAvailDiag_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMID_b_DrvMdNotAvailDiag_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMID_b_DrvMdN);

    /* Merge: '<Root>/VeDMID_b_HybridBtnActv_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMID_b_HybridBtnActv_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMID_b_HybridBtnActv_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMID_b_Hybrid);

    /* Merge: '<Root>/VeDMIR_b_DrvMdReqErrFA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_DrvMdReqErrFA_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_b_DrvMdReqErrFA_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_b_DrvMdR);

    /* Merge: '<Root>/VeDMIR_b_DrvMdReqErr_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_DrvMdReqErr_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_b_DrvMdReqErr_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_b_DrvM_i);

    /* Merge: '<Root>/VeDMIR_b_ESCOffActv_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_ESCOffActv_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_b_ESCOffActv_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_b_ESCOff);

    /* Merge: '<Root>/VeDMIR_b_InternalLightStsFA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_InternalLightStsFA_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_b_InternalLightStsFA_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_b_Inte_j);

    /* Merge: '<Root>/VeDMIR_b_InternalLightSts_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_InternalLightSts_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_b_InternalLightSts_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_b_Inte_p);

    /* Merge: '<Root>/VeDMIR_b_PaddlesFailSts_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_PaddlesFailSts_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_b_PaddlesFailSts_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_b_Paddle);

    /* Merge: '<Root>/VeDMIR_b_SailOff_Request_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_b_SailOff_Request_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_b_SailOff_Request_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_b_SailOf);

    /* Merge: '<Root>/VeDMIR_e_CFGFeature_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_e_CFGFeature_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_CFGFeature_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_e_CFGFea);

    /* Merge: '<Root>/VeDMIR_e_CFG_Set_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_CFG_Set_write'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_CFG_Set_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_CFG_Set_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_e_CFG_Se);

    /* SignalConversion generated from: '<S4>/VeDMIR_e_DriveStyleSts_write' */
#if Rte_SysCon_Variant_DMIR_1

    /* Merge: '<Root>/VeDMIR_e_DriveStyleSts_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_e_DriveStyleSts_write'
     */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_DriveStyleSts_write_IRV
        (rtb_OutportBufferForVeDMIR_e_e4);

#endif

    /* End of SignalConversion generated from: '<S4>/VeDMIR_e_DriveStyleSts_write' */

    /* Merge: '<Root>/2' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_ECoastingReq'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_ECoastingReq'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_ECoastingReq_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_e_ECoast);

    /* Merge: '<Root>/VeDMIR_e_ESaveBtnStLIN_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_ESaveBtnStLIN_write'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_ESaveBtnStLIN_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_ESaveBtnStLIN_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_e_ESaveB);

    /* Merge: '<Root>/VeDMIR_e_EcoBtnStLIN_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_EcoBtnStLIN_write'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_EcoBtnStLIN_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_EcoBtnStLIN_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_e_EcoBtn);

    /* Merge: '<Root>/VeDMIR_e_EcoBtnSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_EcoBtnSt_write'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_EcoBtnSt_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_EcoBtnSt_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_e_EcoB_a);

    /* Merge: '<Root>/VeDMIR_e_ElectricPlusSwitchLIN_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_ElectricPlusSwitchLIN_write'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_ElectricPlusSwitchLIN_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_ElectricPlusSwitchLIN_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Elec_n);

    /* Merge: '<Root>/VeDMIR_e_ElectricPlusSwitch_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_ElectricPlusSwitch_write'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_ElectricPlusSwitch_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_ElectricPlusSwitch_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Elec_j);

    /* Merge: '<Root>/VeDMIR_e_PaddleSts_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_PaddleSts_write'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_PaddleSts_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_PaddleSts_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Paddle);

    /* Merge: '<Root>/3' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_PddlMdReq'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_PddlMdReq'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_PddlMdReq_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_e_PddlMd);

    /* Merge: '<Root>/1' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_PowershotButton'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_PoweshotSts'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_PoweshotSts_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_e_Powers);

    /* Merge: '<Root>/VeDMIR_e_StReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeDMIR_e_StReq_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_StReq_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_e_StReq_);

    /* Merge: '<Root>/VeDMIR_e_eSaveSwitch_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1008>/VeDMIR_e_eSaveSwitch_write'
     *  SignalConversion generated from: '<S4>/VeDMIR_e_eSaveSwitch_write'
     * */
    Rte_IrvWrite_DMIR_PwrOn_VeDMIR_e_eSaveSwitch_write_IRV
        (DMIR_ac_B.OutportBufferForVeDMIR_e_eSaveS);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, DMIR_CODE) DMIR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        DMIR_ac_B.OutportBufferForVeDMIR_e_eCoa_p = CeDMIR_e_Level1;
        DMIR_ac_B.LeDMIR_e_eCoastingSel = CeDMIR_e_Level1;
        DMIR_ac_B.eCoastOld = CeDMIR_e_Level1;
        DMIR_ac_B.eCoastOld_d = CeDMIR_e_Level1;
        DMIR_ac_B.VariantMerge_For_Variant_Sour_p = CeDMIR_e_Level1;
        DMIR_ac_B.OutportBufferForVeDMIR_e_TellTa = CeDMIR_e_Level1Sts;
        DMIR_ac_B.LeDMIR_e_TellTaleSts = CeDMIR_e_Level1Sts;
        DMIR_ac_B.LeDMIR_e_PopUpRqst = CeDMIR_e_Level1Sts;
        DMIR_ac_B.Switch1_ig = CeDMIR_e_Level1Sts;
        DMIR_ac_B.OutportBufferForVeDMIR_e_Tell_j = CeDMIR_e_InfoLevel1;
        DMIR_ac_B.OutportBufferForVeDMIR_e_eCoa_l = CeDMIR_e_InfoLevel1;
        DMIR_ac_B.OutportBufferForVeDMIR_e_ECoast = CeDMIR_e_LevelOne;
    }

    /* custom signals */
    VeDMIR_e_eCoastLvlLatched = CeDMIR_e_Level1;
    VeDMIC_e_eCoastingSel = CeDMIR_e_Level1;
    VeDMIC_e_TellTaleSts = CeDMIR_e_Level1Sts;
    VeDMIC_e_eCoast_PopUpRqst = CeDMIR_e_Level1Sts;

    /* Start for DataStoreMemory: '<Root>/DSM_1' */
    DMIR_ac_DW.NeDMIR_e_eCoastLvlLatched = CeDMIR_e_NotAvail;

    /* Start for DataStoreMemory: '<Root>/DSM_NeDMIR_e_RegenSts2' */
    DMIR_ac_DW.NeDMIR_e_eCoastDefaultAuto = CeDMIR_e_Level0;

    /* Start for DataStoreMemory: '<Root>/DSM_NeDMIR_e_RegenSts3' */
    DMIR_ac_DW.NeDMIR_e_eCoastDefaultCustom = CeDMIR_e_Level0;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
    DMIR_ac_DW.NeDMIR_e_PddlMdStatus = CeDMIR_e_En;
    DMIR_ac_PrevZCX.IfActionSubsystem2_Trig_ZCE_c = POS_ZCSIG;
    DMIR_ac_PrevZCX.IfActionSubsystem2_Trig_ZCE = POS_ZCSIG;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/DMIR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Initialize_DMII_Inputs'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_e_DrvMdDrvrInput' incorporates:
     *  Constant: '<S1039>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_DrvMdDrv = KeDMIR_i_DrvMdDrvrInputInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_b_DrvMdDrvrInputFA' incorporates:
     *  Constant: '<S1016>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_DrvMdDrv = KeDMIR_b_DrvMdDrvrInputFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_Pct_HV_BatSOCTarget' incorporates:
     *  Constant: '<S1014>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_Pct_HV_Bat = KeDMIR_Pct_SOCTargetInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_b_DrvMdReqErr' incorporates:
     *  Constant: '<S1018>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_DrvMdReq = KeDMIR_b_DrvMdReqErrInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_b_InternalLightSts' incorporates:
     *  Constant: '<S1025>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_Internal = KeDMIR_b_InternalLightStsInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_Pct_PanelIntensity' incorporates:
     *  Constant: '<S1013>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_Pct_PanelI = KeDMIR_Pct_PanelIntensityInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_e_ElectricPlusSwitch' incorporates:
     *  Constant: '<S1034>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_Electric = KeDMIR_e_EVBtnInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_b_EVBtnFA' incorporates:
     *  Constant: '<S1021>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_EVBtnFA = KeDMIR_b_EVBtnFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_e_ESaveBtn' incorporates:
     *  Constant: '<S1033>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_ESaveBtn = KeDMIR_e_ESaveBtnInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_b_ESaveBtnFA' incorporates:
     *  Constant: '<S1020>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_ESaveBtn = KeDMIR_b_ESaveBtnFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/VeDMDI_b_SailOffRequest' incorporates:
     *  Constant: '<S1030>/Calib'
     */
    DMIR_ac_B.OutportBufferForVeDMDI_b_SailOf = KeDMIR_b_SailOffReqInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_e_PaddlesSts' incorporates:
     *  Constant: '<S1037>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_PaddlesS = KeDMIR_e_PaddlesStsInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_b_PaddlesStsFA' incorporates:
     *  Constant: '<S1028>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_PaddlesS = KeDMIR_b_PaddlesStsFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_b_PaddlesFailSts' incorporates:
     *  Constant: '<S1027>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_PaddlesF = KeDMIR_b_PaddlesFailStsInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_b_PaddlesFailStsFA' incorporates:
     *  Constant: '<S1026>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_Paddle_n = KeDMIR_b_PaddlesFailStsFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_e_eDriveModeSwitchRqst' incorporates:
     *  Constant: '<S1038>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_eDriveMo = KeDMIR_e_eDriveModeSwitchStsInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_b_eDriveModeSwitchRqstFA' incorporates:
     *  Constant: '<S1031>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_eDriveMo =
        KeDMIR_b_eDriveModeSwitchStsFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_e_DriveStyleSts' incorporates:
     *  Constant: '<S1032>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_DriveSty = KeDMIR_e_DriveStyleStsInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_b_DriveStyleStsFA' incorporates:
     *  Constant: '<S1015>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_DriveSty = KeDMIR_b_DriveStyleStsFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_e_EcoBtnSt' incorporates:
     *  Constant: '<S1035>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_EcoBtnSt = KeDMIR_e_EcoBtnStInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_b_EcoBtnStFa' incorporates:
     *  Constant: '<S1022>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_b_EcoBtnSt = KeDMIR_b_EcoBtnStFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S1007>/Comm_e_BrakingMdReq' incorporates:
     *  Constant: '<S1036>/Calib'
     */
    DMIR_ac_B.OutportBufferForComm_e_BrakingM = KeDMIR_e_BrakingMdReqInit;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_DrvMdRaw_Out_Init' incorporates:
     *  Constant: '<S1008>/Const1'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_DrvMdR = DMIR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_HybridMdLEDOn_Out_Init' incorporates:
     *  Constant: '<S1008>/Const3'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Hybrid = DMIR_ac_ConstB.Const3;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_EVMdLEDOn_Out_Init' incorporates:
     *  Constant: '<S1008>/Const4'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_EVMdLE = DMIR_ac_ConstB.Const4;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_ESaveMdLEDOn_Out_Init' incorporates:
     *  Constant: '<S1008>/Const5'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_ESaveM = DMIR_ac_ConstB.Const5;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_SportMdLEDOn_Out_Init' incorporates:
     *  Constant: '<S1008>/Const6'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_SportM = DMIR_ac_ConstB.Const6;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_DrvMdInfoSt_Out_Init' incorporates:
     *  Constant: '<S1008>/Const9'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_DrvMdI = DMIR_ac_ConstB.Const9;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_EChargeType_Out_Init' incorporates:
     *  Constant: '<S1008>/Const11'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_ECharg = DMIR_ac_ConstB.Const11;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_SailOffStatus_Out_Init' incorporates:
     *  Constant: '<S1008>/Const12'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_SailOf = DMIR_ac_ConstB.Const12;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_SailOffStatus_Internal_Out_Init' incorporates:
     *  Constant: '<S1008>/Const13'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Sail_h = DMIR_ac_ConstB.Const13;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_eCoastingSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const32'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_eCoast = DMIR_ac_ConstB.Const32;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_TellTaleSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const33'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_TellTa = DMIR_ac_ConstB.Const33;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_TellTaleInfo_Out_Init' incorporates:
     *  Constant: '<S1008>/Const34'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Tell_j = DMIR_ac_ConstB.Const34;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_eCoast_PopUpRqst_Out_Init' incorporates:
     *  Constant: '<S1008>/Const35'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_eCoa_l = DMIR_ac_ConstB.Const35;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_eCoastingSel_Out_Init' incorporates:
     *  Constant: '<S1008>/Const36'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_eCoa_p = DMIR_ac_ConstB.Const36;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_DriveStyleSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const39'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Driv_k = DMIR_ac_ConstB.Const39;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_EcoLEDOn_Out_Init' incorporates:
     *  Constant: '<S1008>/Const41'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_EcoLED = DMIR_ac_ConstB.Const41;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_RegenSts_Out_Init' incorporates:
     *  Constant: '<S1008>/Const42'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_RegenS = DMIR_ac_ConstB.Const42;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/DrvMdArb_write' incorporates:
     *  Constant: '<S1040>/Constant'
     */
    DMIR_ac_B.OutportBufferForDrvMdArb_write = DMIR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/PowerMode_write' incorporates:
     *  Constant: '<S1041>/Constant'
     */
    DMIR_ac_B.OutportBufferForPowerMode_write = DMIR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIC_e_DrvMdRaw_write' incorporates:
     *  Constant: '<S1042>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_e_DrvMdR = DMIR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIC_e_HybridMdLEDOn_write' incorporates:
     *  Constant: '<S1043>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_e_Hybrid = DMIR_ac_ConstB.Constant_ka;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIC_e_EVMdLEDOn_write' incorporates:
     *  Constant: '<S1044>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_e_EVMdLE = DMIR_ac_ConstB.Constant_a1;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIC_e_ESaveLEDOn_write' incorporates:
     *  Constant: '<S1045>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_e_ESaveL = DMIR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIC_e_SportLEDOn_write' incorporates:
     *  Constant: '<S1046>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_e_SportL = DMIR_ac_ConstB.Constant_e;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIC_e_DrvMdInfoSt_write' incorporates:
     *  Constant: '<S1047>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_e_DrvMdI = DMIR_ac_ConstB.Constant_kg;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIC_b_EcoLEDOn_write' incorporates:
     *  Constant: '<S1048>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIC_b_EcoLED = DMIR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_CFG_Set_write' incorporates:
     *  Constant: '<S1051>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_CFG_Se = DMIR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_eSaveSwitch_write' incorporates:
     *  Constant: '<S1052>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_eSaveS = DMIR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_ESaveBtnStLIN_write' incorporates:
     *  Constant: '<S1053>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_ESaveB = DMIR_ac_ConstB.Constant_e2;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_ElectricPlusSwitchLIN_write' incorporates:
     *  Constant: '<S1054>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Elec_n = DMIR_ac_ConstB.Constant_ch;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_EcoBtnStLIN_write' incorporates:
     *  Constant: '<S1055>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_EcoBtn = DMIR_ac_ConstB.Constant_kv;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_PaddleSts_write' incorporates:
     *  Constant: '<S1056>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Paddle = DMIR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwBCkt_Perf' incorporates:
     *  Constant: '<S1057>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_FaultS = DMIR_ac_ConstB.Constant_fe;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktHi' incorporates:
     *  Constant: '<S1058>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_a = DMIR_ac_ConstB.Constant_er;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktLo' incorporates:
     *  Constant: '<S1059>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_n = DMIR_ac_ConstB.Constant_j0;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktHi' incorporates:
     *  Constant: '<S1060>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_e = DMIR_ac_ConstB.Constant_bl;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktLo' incorporates:
     *  Constant: '<S1061>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_k = DMIR_ac_ConstB.Constant_iz;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktPerf' incorporates:
     *  Constant: '<S1062>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_j = DMIR_ac_ConstB.Constant_eb;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_EcoModSwHi' incorporates:
     *  Constant: '<S1063>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_b = DMIR_ac_ConstB.Constant_bp;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_EcoModSwLo' incorporates:
     *  Constant: '<S1064>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_h = DMIR_ac_ConstB.Constant_an;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_FaultSts_EcoModSwPerf' incorporates:
     *  Constant: '<S1065>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Faul_i = DMIR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_CreepSts' incorporates:
     *  Constant: '<S1066>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_CreepS = DMIR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_PowershotButton' incorporates:
     *  Constant: '<S1067>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Powers = DMIR_ac_ConstB.Constant_c;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_ECoastingReq' incorporates:
     *  Constant: '<S1069>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_ECoast = DMIR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_ElectricPlusSwitch_write' incorporates:
     *  Constant: '<S1049>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Elec_j = DMIR_ac_ConstB.Constant_gf;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_EcoBtnSt_write' incorporates:
     *  Constant: '<S1050>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_EcoB_a = DMIR_ac_ConstB.Constant_nx;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_EcoLEDOn_LED_Out_Init' incorporates:
     *  Constant: '<S1008>/Const84'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_EcoL_h = DMIR_ac_ConstB.Const84;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_ElectricPlusLEDOn_LED_Out_Init' incorporates:
     *  Constant: '<S1008>/Const83'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Electr = DMIR_ac_ConstB.Const83;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_ESaveLEDOn_LED_Out_Init' incorporates:
     *  Constant: '<S1008>/Const96'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_ESaveL = DMIR_ac_ConstB.Const96;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_PddlMdReq' incorporates:
     *  Constant: '<S1068>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_PddlMd = DMIR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_PddlMdSatus_OutInit' incorporates:
     *  Constant: '<S1070>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Pddl_m = DMIR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_eCoastPopUpMsg_OutInit' incorporates:
     *  Constant: '<S1071>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_eCo_pr = DMIR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S1008>/VeDMIR_e_BrakingMdReq_OutInit' incorporates:
     *  Constant: '<S1072>/Constant'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_Brakin = DMIR_ac_ConstB.Constant_nh;

#if Rte_SysCon_Variant_DMIR_1

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeDMIR_e_DriveStyleSts' */
    /* SystemInitialize for Function Call SubSystem: '<S4>/Init_DMIR_IRV_DT_BEV' */
    /* SystemInitialize for SignalConversion generated from: '<S1006>/VeDMIR_e_DriveStyleSts_write' incorporates:
     *  Constant: '<S1011>/Calib'
     */
    DMIR_ac_B.OutportBufferForVeDMIR_e_DriveS = KeDMIR_e_DriveStyleStsInit;

    /* End of SystemInitialize for SubSystem: '<S4>/Init_DMIR_IRV_DT_BEV' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeDMIR_e_DriveStyleSts' */
    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#endif

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' incorporates:
     *  SubSystem: '<Root>/DMIR_MedTED1'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Controls'
     */
    /* InitializeConditions for Delay: '<S71>/Integer Delay' */
    DMIR_ac_DW.IntegerDelay_DSTATE = CeDMIR_e_Level0;

    /* InitializeConditions for UnitDelay: '<S280>/Unit Delay' */
    DMIR_ac_DW.UnitDelay_DSTATE_ev = CeDMIR_e_LevelOne;

    /* InitializeConditions for UnitDelay: '<S72>/Unit Delay2' */
    DMIR_ac_DW.UnitDelay2_DSTATE_p = true;

    /* SystemInitialize for SignalConversion generated from: '<S66>/VariantSource' */
#if Rte_SysCon_Variant_DMIR_2

    /* SystemInitialize for VariantMerge generated from: '<S66>/VariantSource' incorporates:
     *  Chart: '<S209>/Drive_Mode_Selection1'
     */
    DMIR_ac_B.VariantMerge_For_Variant_Sour_a = CeDMIR_e_NormalRegen;

#else

    /* SystemInitialize for VariantMerge generated from: '<S66>/VariantSource' incorporates:
     *  Constant: '<S210>/Constant'
     *  SignalConversion generated from: '<S66>/VariantSource'
     */
    DMIR_ac_B.VariantMerge_For_Variant_Sour_a = DMIR_ac_B.Constant;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S66>/VariantSource' */

    /* SystemInitialize for Triggered SubSystem: '<S388>/If Action Subsystem2' */
    /* SystemInitialize for Outport: '<S399>/eCoastAuto' incorporates:
     *  Inport: '<S399>/eCoastOld'
     */
    DMIR_ac_B.eCoastOld_d = CeDMIR_e_Level1;

    /* End of SystemInitialize for SubSystem: '<S388>/If Action Subsystem2' */

    /* SystemInitialize for Triggered SubSystem: '<S389>/If Action Subsystem2' */
    /* SystemInitialize for Outport: '<S403>/eCoastCustom' incorporates:
     *  Inport: '<S403>/eCoastOld'
     */
    DMIR_ac_B.eCoastOld = CeDMIR_e_Level1;

    /* End of SystemInitialize for SubSystem: '<S389>/If Action Subsystem2' */

    /* SystemInitialize for Chart: '<S71>/eCoasting_paddles' */
    DMIR_ac_B.LeDMIR_e_TellTaleSts = CeDMIR_e_NA;
    DMIR_ac_B.LeDMIR_e_PopUpRqst = CeDMIR_e_NA;
    DMIR_ac_B.LeDMIR_e_eCoastingSel = CeDMIR_e_NotAvail;

    /* SystemInitialize for SignalConversion generated from: '<S54>/Variant Source2' incorporates:
     *  Switch: '<S54>/Switch1'
     */
    VeDMIC_e_eCoast_PopUpRqst = DMIR_ac_B.Switch1_ig;

    /* SystemInitialize for SignalConversion generated from: '<S54>/Variant Source3' incorporates:
     *  VariantMerge generated from: '<S54>/Variant Source3'
     */
    VeDMIC_e_eCoastingSel = DMIR_ac_B.VariantMerge_For_Variant_Sour_p;

    /* SystemInitialize for SignalConversion generated from: '<S54>/Variant Source' incorporates:
     *  VariantMerge generated from: '<S54>/Variant Source'
     */
    VeDMIC_e_eCoastingSts = DMIR_ac_B.VariantMerge_For_Variant_Source;

    /* SystemInitialize for SignalConversion generated from: '<S54>/Variant Source3' incorporates:
     *  SignalConversion generated from: '<S54>/Variant Source'
     * */
#if Rte_SysCon_Variant_DMIR_3

    /* SystemInitialize for VariantMerge generated from: '<S54>/Variant Source3' */
    DMIR_ac_B.VariantMerge_For_Variant_Sour_p = DMIR_ac_B.LeDMIR_e_eCoastingSel;

    /* SystemInitialize for VariantMerge generated from: '<S54>/Variant Source' */
    DMIR_ac_B.VariantMerge_For_Variant_Source = DMIR_ac_B.LeDMIR_e_eCoastingSts;

#else

    /* SystemInitialize for VariantMerge generated from: '<S54>/Variant Source3' incorporates:
     *  Constant: '<S279>/Constant'
     *  SignalConversion generated from: '<S54>/Variant Source3'
     */
    DMIR_ac_B.VariantMerge_For_Variant_Sour_p = CeDMIR_e_NotAvail;

    /* SystemInitialize for VariantMerge generated from: '<S54>/Variant Source' incorporates:
     *  Constant: '<S276>/Constant'
     *  SignalConversion generated from: '<S54>/Variant Source'
     */
    DMIR_ac_B.VariantMerge_For_Variant_Source = CeDMIR_e_NotAvailable;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S54>/Variant Source3' */

    /* SystemInitialize for SignalConversion generated from: '<S54>/Variant Source4' */
#if Rte_SysCon_Variant_DMIR_15

    /* SystemInitialize for SignalConversion generated from: '<S54>/Variant Source4' */
    DMIR_ac_B.SigConvForSigProp_Variant_Sourc = VeDMIC_b_eBoostRequest;

#else

    /* SystemInitialize for SignalConversion generated from: '<S54>/Variant Source4' */
    DMIR_ac_B.SigConvForSigProp_Variant_Sourc = DMIR_ac_B.FALSEConstant;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S54>/Variant Source4' */

    /* SystemInitialize for Switch: '<S54>/Switch1' incorporates:
     *  Outport: '<S54>/VeDMIC_e_TellTaleSts'
     */
    DMIR_ac_B.Switch1_ig = CeDMIR_e_Level1Sts;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_DrvMdRaw' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeDMIR_e_DrvMdRaw_Value(CeDMDR_e_NoDrvMd);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_HybridMdLEDOn' incorporates:
     *  Merge: '<Root>/Merge_Outport_3'
     */
    (void)Rte_Write_VeDMIR_e_HybridMdLEDOn_Value(CeDMDR_e_LEDOff);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_ElectricPlusLEDOn' incorporates:
     *  Merge: '<Root>/Merge_Outport_4'
     */
    (void)Rte_Write_VeDMIR_e_ElectricPlusLEDOn_Value(CeDMDR_e_LEDOff);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_ESaveLEDOn' incorporates:
     *  Merge: '<Root>/Merge_Outport_5'
     */
    (void)Rte_Write_VeDMIR_e_ESaveLEDOn_Value(CeDMDR_e_LEDOff);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_SportMdLEDOn' incorporates:
     *  Merge: '<Root>/Merge_Outport_6'
     */
    (void)Rte_Write_VeDMIR_e_SportMdLEDOn_Value(CeDMDR_e_LEDOff);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_DrvMdInfoSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_9'
     */
    (void)Rte_Write_VeDMIR_e_DrvMdInfoSt_Value(CeDMIR_e_NoDrvMdSt);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_EChargeType' incorporates:
     *  Merge: '<Root>/Merge_Outport_11'
     */
    (void)Rte_Write_VeDMIR_e_EChargeType_Value(CeDMDR_e_Passive_Charging);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_SailOffStatus' incorporates:
     *  Merge: '<Root>/Merge_Outport_12'
     */
    (void)Rte_Write_VeDMIR_e_SailOffStatus_Value(CeDMDR_e_NotActive);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_SailOffStatus_Internal' incorporates:
     *  Merge: '<Root>/Merge_Outport_13'
     */
    (void)Rte_Write_VeDMIR_e_SailOffStatus_Internal_Value(CeDMDR_e_NotActive);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_eCoastingSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_32'
     */
    (void)Rte_Write_VeDMIR_e_eCoastingSts_Value(CeDMIR_e_NotAvailable);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_TellTaleSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_33'
     */
    (void)Rte_Write_VeDMIR_e_TellTaleSts_Value(CeDMIR_e_Level1Sts);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_TellTaleInfo' incorporates:
     *  Merge: '<Root>/Merge_Outport_34'
     */
    (void)Rte_Write_VeDMIR_e_TellTaleInfo_Value(CeDMIR_e_InfoLevel1);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_eCoast_PopUpRqst' incorporates:
     *  Merge: '<Root>/Merge_Outport_35'
     */
    (void)Rte_Write_VeDMIR_e_eCoast_PopUpRqst_Value(CeDMIR_e_InfoLevel1);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_eCoastingSel' incorporates:
     *  Merge: '<Root>/Merge_Outport_36'
     */
    (void)Rte_Write_VeDMIR_e_eCoastingSel_Value(CeDMIR_e_Level1);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_DriveStyleSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_39'
     */
    (void)Rte_Write_VeDMIR_e_DriveStyleSts_Value(CeDMIR_e_Normal);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_EcoLEDOn' incorporates:
     *  Merge: '<Root>/Merge_Outport_41'
     */
    (void)Rte_Write_VeDMIR_e_EcoLEDOn_Value(CeDMDR_e_LEDOff);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_RegenSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_42'
     */
    (void)Rte_Write_VeDMIR_e_RegenSts_Value(CeDMIR_e_NormalRegen);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwBCkt_Perf' incorporates:
     *  Merge: '<Root>/M_VeDMIR_e_FaultSts_DrvrModSelSwBCkt_Perf'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwBCkt_Perf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktHi' incorporates:
     *  Merge: '<Root>/M_VeDMIR_e_FaultSts_DrvrModSelSwB_CktHi'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwB_CktHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwB_CktLo' incorporates:
     *  Merge: '<Root>/M_VeDMIR_e_FaultSts_DrvrModSelSwB_CktLo'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwB_CktLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktHi' incorporates:
     *  Merge: '<Root>/M_VeDMIR_e_FaultSts_DrvrModSelSwA_CktHi'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwA_CktHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktLo' incorporates:
     *  Merge: '<Root>/M_VeDMIR_e_FaultSts_DrvrModSelSwA_CktLo'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwA_CktLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_FaultSts_DrvrModSelSwA_CktPerf' incorporates:
     *  Merge: '<Root>/M_VeDMIR_e_FaultSts_DrvrModSelSwA_CktPerf'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_DrvrModSelSwA_CktPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_FaultSts_EcoModSwHi' incorporates:
     *  Merge: '<Root>/M_VeDMIR_e_FaultSts_EcoModSwHi'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_EcoModSwHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_FaultSts_EcoModSwLo' incorporates:
     *  Merge: '<Root>/M_VeDMIR_e_FaultSts_EcoModSwLo'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_EcoModSwLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_FaultSts_EcoModSwPerf' incorporates:
     *  Merge: '<Root>/M_VeDMIR_e_FaultSts_EcoModSwPerf'
     */
    (void)Rte_Write_VeDMIR_e_FaultSts_EcoModSwPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_CreepSts' incorporates:
     *  Merge: '<Root>/VeDMIR_e_CreepSts_IRV_Merge'
     */
    (void)Rte_Write_VeDMIR_e_CreepSts_Value(CeDMIR_e_CreepOff);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_EcoLEDOn_LIN' incorporates:
     *  Merge: '<Root>/Merge_Outport_43'
     */
    (void)Rte_Write_VeDMIR_e_EcoLEDOn_LIN_Value(CeDMDR_e_LEDOff);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_ElectricPlusLEDOn_LIN' incorporates:
     *  Merge: '<Root>/Merge_Outport_44'
     */
    (void)Rte_Write_VeDMIR_e_ElectricPlusLEDOn_LIN_Value(CeDMDR_e_LEDOff);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_ESaveLEDOn_LIN' incorporates:
     *  Merge: '<Root>/Merge_Outport_45'
     */
    (void)Rte_Write_VeDMIR_e_ESaveLEDOn_LIN_Value(CeDMDR_e_LEDOff);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_PaddleModeSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_46'
     */
    (void)Rte_Write_VeDMIR_e_PaddleModeSts_Value(CeDMIR_e_None);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_y_eCoastingPopupMsg' incorporates:
     *  Merge: '<Root>/Merge_Outport_47'
     */
    (void)Rte_Write_VeDMIR_y_eCoastingPopupMsg_Value(CeDMIR_e_Msg0);

    /* SystemInitialize for Outport: '<Root>/VeDMIR_e_BrakingMdReq' incorporates:
     *  Merge: '<Root>/Merge_Outport_49'
     */
    (void)Rte_Write_VeDMIR_e_BrakingMdReq_Value(CeDMIR_e_BtnNotPrsd);

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/DMIR_PwrOff'
     */
    /* SystemInitialize for Outport: '<Root>/NeDMIR_e_eCoastLvlLatched_PM_Out' incorporates:
     *  Outport: '<S3>/NeDMIR_e_eCoastLvlLatched_PM_Out'
     */
    (void)Rte_Write_NeDMIR_e_eCoastLvlLatched_NeDMIR_e_eCoastLvlLatched
        (CeDMIR_e_Level1);

    /* SystemInitialize for Outport: '<Root>/NeDMIR_e_eCoastDefaultAuto_PM_Out' incorporates:
     *  Outport: '<S3>/NeDMIR_e_eCoastDefaultAuto_PM_Out'
     */
    (void)Rte_Write_NeDMIR_e_eCoastDefaultAuto_NeDMIR_e_eCoastDefaultAuto
        (CeDMIR_e_Level1);

    /* SystemInitialize for Outport: '<Root>/NeDMIR_e_eCoastDefaultCustom_PM_Out' incorporates:
     *  Outport: '<S3>/NeDMIR_e_eCoastDefaultCustom_PM_Out'
     */
    (void)Rte_Write_NeDMIR_e_eCoastDefaultCustom_NeDMIR_e_eCoastDefaultCustom
        (CeDMIR_e_Level1);

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
