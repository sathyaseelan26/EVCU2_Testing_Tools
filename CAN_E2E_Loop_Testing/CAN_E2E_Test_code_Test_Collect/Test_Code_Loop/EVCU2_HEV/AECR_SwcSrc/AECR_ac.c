/*
 * File: AECR_ac.c
 *
 * Code generated for Simulink model 'AECR_ac'.
 *
 * Model version                  : 9.176
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:05:17 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AECR_ac.h"

/* Named constants for Chart: '<S9>/AeCoast_Arbitration' */
#if Rte_SysCon_Variant_AECR_1
#define AECR__IN_AeCoasting_Active_ImpSkid_Const ((uint8)2U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define AECR_ac_IN_AeCoasting_Active   ((uint8)1U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define AECR_ac_IN_AeCoasting_Active_ImpSkid ((uint8)2U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define AECR_ac_IN_AeCoasting_Active_OnHold ((uint8)3U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define AECR_ac_IN_AeCoasting_NotActive ((uint8)4U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define AECR_ac_IN_AeCoasting_NotActive_ImpSkid ((uint8)5U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define AECR_ac_IN_EEPROM_Active       ((uint8)7U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define AECR_ac_IN_EEPROM_Not_Active_Fault ((uint8)8U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define AECR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define AE_IN_AeCoasting_Active_ImpSkid_Blinking ((uint8)1U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define AE_IN_AeCoasting_NotActive_ImpSkid_Const ((uint8)2U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define AE_IN_AeCoasting_NotActive_Latch_Terrain ((uint8)6U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define IN_AeCoasting_NotActive_ImpSkid_Blinking ((uint8)1U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define IN_AeCoasting_NotActive_Latch_Terrain_Bl ((uint8)1U)
#endif

#if Rte_SysCon_Variant_AECR_1
#define IN_AeCoasting_NotActive_Latch_Terrain_Co ((uint8)2U)
#endif

/* Named constants for Chart: '<S142>/Drive_Mode_Selection' */
#define AECR_ac_IN_Max                 ((uint8)1U)
#define AECR_ac_IN_Normal              ((uint8)2U)

/* Named constants for Chart: '<S84>/eCoasting_paddles' */
#define AECR_ac_IN_System_Faulted      ((uint8)1U)
#define AECR_ac_IN_eCoastPopupMsg0     ((uint8)1U)
#define AECR_ac_IN_eCoastPopupMsg1     ((uint8)2U)
#define AECR_ac_IN_eCoastPopupMsg2     ((uint8)3U)
#define AECR_ac_IN_eCoastPopupMsg3     ((uint8)4U)
#define AECR_ac_IN_eCoastingNA         ((uint8)2U)
#define AECR_ac_IN_eCoasting_Disabled  ((uint8)3U)
#define AECR_ac_IN_eCoasting_Selection ((uint8)4U)

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_AECR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, AECR_VAR_INIT) HeAECR_b_EnaPaddleMaxPressTime = 1;/* Referenced by: '<S121>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) HeAECR_b_P1P2p5Equipped_C = 0;/* Referenced by: '<S88>/Calib' */
static volatile CONST(float32, AECR_VAR_INIT) HeAECR_t_10ms_dT = 0.01F;/* Referenced by:
                                                                      * '<S15>/Calib'
                                                                      * '<S33>/Calib'
                                                                      * '<S99>/Calib'
                                                                      * '<S122>/Calib'
                                                                      * '<S176>/Calib'
                                                                      */

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KaAECR_b_LowLockStatusOff[3] =
{
    1, 1, 0
} ;                                    /* Referenced by: '<S67>/Calib' */

#endif

static volatile CONST(uint8, AECR_VAR_INIT) KaAECR_e_EcoastTrrnThrshld[23] =
{
    0U, 3U, 0U, 0U, 3U, 0U, 0U, 0U, 0U, 0U, 0U, 3U, 0U, 0U, 0U, 3U, 0U, 3U, 0U,
    0U, 0U, 0U, 0U
} ;                                    /* Referenced by: '<S262>/Calib' */

static volatile CONST(TeDMIR_e_PopUpRqst, AECR_VAR_INIT) KaAECR_e_PopUpRqst[8] =
{
    CeDMIR_e_InfoLevel0, CeDMIR_e_InfoLevel1, CeDMIR_e_InfoLevel2,
    CeDMIR_e_InfoLevel3, CeDMIR_e_InfoLevel4, CeDMIR_e_InfoLevel5,
    CeDMIR_e_InfoNA, CeDMIR_e_InfoSNA
};                                     /* Referenced by: '<S317>/Calib' */

static volatile CONST(TeDMIR_e_PopUpRqst, AECR_VAR_INIT) KaAECR_e_TellTaleMap[8]
    =
{
    CeDMIR_e_InfoLevel0, CeDMIR_e_InfoLevel1, CeDMIR_e_InfoLevel2,
    CeDMIR_e_InfoLevel3, CeDMIR_e_InfoLevel4, CeDMIR_e_InfoLevel5,
    CeDMIR_e_InfoNA, CeDMIR_e_InfoSNA
};                                     /* Referenced by: '<S318>/Calib' */

static volatile CONST(TeDMIR_e_eCoastPopUpMsg, AECR_VAR_INIT)
    KaAECR_e_eCoastPopUpMsgMap[4] =
{
    CeDMIR_e_Msg0, CeDMIR_e_Msg1, CeDMIR_e_Msg2, CeDMIR_e_Msg3
};                                     /* Referenced by: '<S319>/Calib' */

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_ACCStsOvrrd = 0;/* Referenced by: '<S185>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastBtnDiagFailOvrrd =
    0;                                 /* Referenced by: '<S282>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT)
    KeAECR_b_AeCoastBtnDiagFailOvrrdVal = 0;/* Referenced by: '<S283>/Calib' */

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastLEDOvrrd = 0;/* Referenced by: '<S320>/Calib' */

#endif

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastRampFastOvrrd = 0;/* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastRampFastOvrrdVal =
    0;                                 /* Referenced by: '<S322>/Calib' */

#endif

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastReadyDisabled = 1;/* Referenced by: '<S217>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastReadyOvrrd = 0;/* Referenced by: '<S284>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastReadyOvrrdVal = 1;/* Referenced by: '<S285>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastStatECMInitNF = 0;/* Referenced by: '<S344>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastStatInitNF = 0;/* Referenced by:
                                                                      * '<S345>/Calib'
                                                                      * '<S89>/Calib'
                                                                      */

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastStatOvrrd = 0;/* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastStatOvrrdVal = 0;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastStat_ECMOvrrd = 0;/* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastStat_ECMOvrrdVal =
    0;                                 /* Referenced by: '<S326>/Calib' */

#endif

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastStsFAOvrrd = 0;/* Referenced by: '<S218>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoastSwitchStatOvrrd =
    0;                                 /* Referenced by: '<S286>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoast_ActOvrrd = 0;/* Referenced by: '<S287>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AeCoast_ActOvrrdVal = 1;/* Referenced by: '<S288>/Calib' */

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_AllwEEPROMChg = 0;/* Referenced by:
                                                                      * '<S46>/Calib'
                                                                      * '<S59>/Calib'
                                                                      */

#endif

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_BEVaeCoastRampStEnbl = 1;/* Referenced by: '<S78>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_BrkPedalDscrtInptOvrrd =
    0;                                 /* Referenced by: '<S289>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_ConfigFALevel1 = 0;/* Referenced by: '<S177>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_ConfigImpendingSkid = 1;/* Referenced by: '<S178>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_ConfigTrrnMdChange = 1;/* Referenced by: '<S229>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_CrsCntrlActvOvrrd = 0;/* Referenced by: '<S290>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_CrsCntrlActvOvrrdVal = 0;/* Referenced by: '<S291>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_EcoastChngOPDFail = 1;/* Referenced by: '<S179>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_EmsMlfAtvOvrrd = 0;/* Referenced by: '<S292>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_EmsMlfAtvOvrrdVal = 0;/* Referenced by: '<S293>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_ImpndSkidOvvrd = 0;/* Referenced by: '<S294>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_ImpndSkidOvvrdVal = 1;/* Referenced by: '<S295>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_LP3EcoastOvrrd = 0;/* Referenced by: '<S186>/Calib' */

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_LowLockStatusCheckOvrrd =
    0;                                 /* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_OvrdMaxRegenDsrdSt = 0;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_P1P4_UseDrvMd = 0;/* Referenced by:
                                                                      * '<S48>/Calib'
                                                                      * '<S69>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_P1P4_UseSportStatus = 1;/* Referenced by: '<S49>/Calib' */

#endif

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_PMM_PowerModeOvrrd = 0;/* Referenced by: '<S296>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_PddlMdStsOvrrd = 0;/* Referenced by: '<S187>/Calib' */

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_PopUpMessageOvrrd = 0;/* Referenced by: '<S327>/Calib' */

#endif

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_RegenBrkInhbOvrrd = 0;/* Referenced by: '<S297>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_RegenBrkInhbOvrrdVal = 0;/* Referenced by: '<S298>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_RegenType = 0;/* Referenced by: '<S79>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_RunCrankActiveOvrrd = 0;/* Referenced by: '<S299>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_RunCrankActiveOvrrdVal =
    0;                                 /* Referenced by: '<S300>/Calib' */

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_TellTaleOvrrd = 0;/* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_TrnModeAllAllowed = 1;/* Referenced by: '<S70>/Calib' */

#endif

static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_TrrnMdOvrrd = 0;/* Referenced by: '<S301>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_eCoastEnaOvrrd = 1;/* Referenced by: '<S213>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_eCoastEnaVal = 1;/* Referenced by: '<S214>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_eCoastFAOvrrd = 1;/* Referenced by: '<S219>/Calib' */
static volatile CONST(boolean, AECR_VAR_INIT) KeAECR_b_eCoastFAVal = 0;/* Referenced by: '<S220>/Calib' */

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(TeAECR_e_LEDCmd, AECR_VAR_INIT)
    KeAECR_e_AeCoastLEDOvrrdVal = CeAECR_e_LEDOff;/* Referenced by: '<S329>/Calib' */

#endif

static volatile CONST(TeBRKR_e_AeCoastSwitchStat, AECR_VAR_INIT)
    KeAECR_e_AeCoastSwitchStatOvrrdVal = CeBRKR_e_Button_Pressed;/* Referenced by: '<S302>/Calib' */
static volatile CONST(TeDMIR_e_eCoastInfo, AECR_VAR_INIT)
    KeAECR_e_AeCoastingDesiredStateA = CeDMIR_e_Level1Sts;/* Referenced by: '<S92>/Calib' */
static volatile CONST(TeDMIR_e_eCoastInfo, AECR_VAR_INIT)
    KeAECR_e_AeCoastingDesiredStateB = CeDMIR_e_Level2Sts;/* Referenced by: '<S93>/Calib' */
static volatile CONST(TeDMIR_e_eCoastInfo, AECR_VAR_INIT)
    KeAECR_e_AeCoastingDesiredStateC = CeDMIR_e_Level2Sts;/* Referenced by: '<S94>/Calib' */
static volatile CONST(TeAECR_e_Aecoasting_Status, AECR_VAR_INIT)
    KeAECR_e_Aecoasting_StsInit = CeAECR_e_AecoastingTemporarily_Unavailable;/* Referenced by: '<S346>/Calib' */
static volatile CONST(TeBRKR_e_BrkPdl_Stat, AECR_VAR_INIT)
    KeAECR_e_BrkPedalDscrtInptOvrrdVal = CeBRKR_e_BrkNotApplied;/* Referenced by: '<S303>/Calib' */
static volatile CONST(TeAECR_e_LEDCmd, AECR_VAR_INIT) KeAECR_e_LEDInit =
    CeAECR_e_LEDOff;                   /* Referenced by: '<S347>/Calib' */

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(TeAECR_e_MaxRegenDsrdSt, AECR_VAR_INIT)
    KeAECR_e_OvrdMaxRegenDsrdStVal = CeAECR_e_MaxRegenDsrdNotActive;/* Referenced by: '<S50>/Calib' */

#endif

static volatile CONST(TePMDR_e_PowerMode, AECR_VAR_INIT)
    KeAECR_e_PMM_PowerModeOvrrdVal = CePMDR_e_PowerMode_Off;/* Referenced by: '<S304>/Calib' */
static volatile CONST(TeDMIR_e_PaddleModeRequest, AECR_VAR_INIT)
    KeAECR_e_PaddlesModeReqDflt = CeDMIR_e_None;
                       /* Referenced by: '<S5>/PokeAECR_e_PaddlesModeReqChrt' */
static volatile CONST(TeAECR_e_PopUpMessage, AECR_VAR_INIT) KeAECR_e_PopUpInit =
    CeAECR_e_MaxRegenOff;              /* Referenced by: '<S348>/Calib' */

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(TeAECR_e_PopUpMessage, AECR_VAR_INIT)
    KeAECR_e_PopUpMessageOvrrdVal = CeAECR_e_MaxRegenOff;/* Referenced by: '<S330>/Calib' */

#endif

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(TeAECR_e_Telltale, AECR_VAR_INIT)
    KeAECR_e_TellTaleOvrrdVal = CeAECR_e_TelltaleOff;/* Referenced by: '<S331>/Calib' */

#endif

static volatile CONST(TeAECR_e_Telltale, AECR_VAR_INIT) KeAECR_e_TelltaleInit =
    CeAECR_e_TelltaleOff;              /* Referenced by: '<S349>/Calib' */
static volatile CONST(TeTMDR_e_TrrnMd, AECR_VAR_INIT) KeAECR_e_TrrnMdOvrrdVal =
    CeTMDR_e_Auto;                     /* Referenced by: '<S305>/Calib' */
static volatile CONST(TeDMIR_e_eCoastSel, AECR_VAR_INIT) KeAECR_e_eCoastInitLvl =
    CeDMIR_e_NotAvail;                 /* Referenced by: '<S351>/Calib' */
static volatile CONST(uint8, AECR_VAR_INIT) KeAECR_i_EcoastOPDThrshld = 0U;/* Referenced by: '<S263>/Calib' */
static volatile CONST(uint8, AECR_VAR_INIT) KeAECR_i_EcoastRaceMdThrshld = 0U;/* Referenced by: '<S264>/Calib' */
static volatile CONST(uint16, AECR_VAR_INIT) KeAECR_i_OPDExitBrkPdlThrshld = 0U;/* Referenced by:
                                                                      * '<S194>/Calib'
                                                                      * '<S154>/Calib'
                                                                      */
static volatile CONST(uint8, AECR_VAR_INIT) KeAECR_i_eCoastLevelDefault = 1U;/* Referenced by: '<S250>/Calib' */
static volatile CONST(uint8, AECR_VAR_INIT) KeAECR_i_eCoastLevelMax = 2U;/* Referenced by: '<S252>/Calib' */
static volatile CONST(uint8, AECR_VAR_INIT) KeAECR_i_eCoastLevelMaxEco = 0U;/* Referenced by: '<S248>/Calib' */
static volatile CONST(float32, AECR_VAR_INIT) KeAECR_t_PaddleDbncSet = 0.2F;/* Referenced by: '<S123>/Calib' */
static volatile CONST(float32, AECR_VAR_INIT) KeAECR_t_PaddleMaxPressTime = 2.0F;/* Referenced by: '<S124>/Calib' */
static volatile CONST(float32, AECR_VAR_INIT) KeAECR_t_PopupMsgTime = 5.0F;/* Referenced by: '<S180>/Calib' */

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(float32, AECR_VAR_INIT) KeAECR_t_StayInBlinkState = 5.0F;/* Referenced by: '<S16>/Calib' */

#endif

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(float32, AECR_VAR_INIT) KeAECR_t_StayInStateActive = 1.0F;/* Referenced by: '<S17>/Calib' */

#endif

#if Rte_SysCon_Variant_AECR_1

static volatile CONST(float32, AECR_VAR_INIT) KeAECR_t_StayInStateNotActive =
    1.0F;                              /* Referenced by: '<S18>/Calib' */

#endif

static volatile CONST(float32, AECR_VAR_INIT) KeAECR_t_TiDebounceSetFastRamp =
    4.0F;                              /* Referenced by:
                                        * '<S34>/Calib'
                                        * '<S100>/Calib'
                                        */
static volatile CONST(float32, AECR_VAR_INIT) KeAECR_t_eCoastNATime = 5.0F;/* Referenced by: '<S181>/Calib' */
static volatile CONST(sint16, AECR_VAR_INIT) KeAECR_v_OPDExitSpeedThrshld = 10;/* Referenced by: '<S195>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_AECR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AECR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint16, AECR_VAR_INIT) EeAECR_e_MaxRegenDsrdSt;/* '<Root>/DSM_1' */

#if Rte_SysCon_Variant_AECR_1

static VAR(boolean, AECR_VAR_INIT) VeAECC_b_4LOWMd;/* '<S40>/Logical4' */

#endif

#if Rte_SysCon_Variant_AECR_1

static VAR(boolean, AECR_VAR_INIT) VeAECC_b_AeCoastActvECM;/* '<S14>/Logical13' */

#endif

#if Rte_SysCon_Variant_AECR_1

static VAR(boolean, AECR_VAR_INIT) VeAECC_b_AeCoastActvEEPROM;/* '<S14>/Logical15' */

#endif

#if Rte_SysCon_Variant_AECR_1

static VAR(boolean, AECR_VAR_INIT) VeAECC_b_AeCoastActvNormal;/* '<S14>/Logical9' */

#endif

#if Rte_SysCon_Variant_AECR_1

static VAR(boolean, AECR_VAR_INIT) VeAECC_b_AeCoastNotActv;/* '<S14>/Logical4' */

#endif

#if Rte_SysCon_Variant_AECR_1

static VAR(boolean, AECR_VAR_INIT) VeAECC_b_AeCoast_Latch;/* '<S39>/Logical7' */

#endif

static VAR(boolean, AECR_VAR_INIT) VeAECC_b_AecoastActiveCnd;/* '<S74>/Logical6' */
static VAR(boolean, AECR_VAR_INIT) VeAECC_b_AecoastAvailCnd;/* '<S74>/OR2' */
static VAR(boolean, AECR_VAR_INIT) VeAECC_b_AecoastFaultCnd;/* '<S74>/OR' */
static VAR(boolean, AECR_VAR_INIT) VeAECC_b_AecoastTmpUnvCnd;/* '<S74>/OR1' */

#if Rte_SysCon_Variant_AECR_1

static VAR(boolean, AECR_VAR_INIT) VeAECC_b_ContactSwitch;/* '<S40>/Switch2' */

#endif

static VAR(boolean, AECR_VAR_INIT) VeAECC_b_MSGAeCoastActvECM;/* '<S73>/Logical13' */
static VAR(boolean, AECR_VAR_INIT) VeAECC_b_MSGAeCoastActvEEPROM;/* '<S73>/Logical15' */
static VAR(boolean, AECR_VAR_INIT) VeAECC_b_MSGAeCoastActvNormal;/* '<S73>/Logical9' */
static VAR(boolean, AECR_VAR_INIT) VeAECC_b_MSGAeCoastNotActv;/* '<S73>/Logical4' */

#if Rte_SysCon_Variant_AECR_1

static VAR(boolean, AECR_VAR_INIT) VeAECC_b_MaxRegenDsrd;/* '<S39>/Logical3' */

#endif

#if Rte_SysCon_Variant_AECR_1

static VAR(boolean, AECR_VAR_INIT) VeAECC_b_TrrnMode;/* '<S40>/Logical2' */

#endif

static VAR(boolean, AECR_VAR_INIT) VeAECC_b_eCoastEnbl;/* '<S172>/Switch1' */
static VAR(boolean, AECR_VAR_INIT) VeAECC_b_eCoastFA;/* '<S175>/Switch2' */

#if Rte_SysCon_Variant_AECR_1

static VAR(TeAECR_e_AeCoastSt, AECR_VAR_INIT) VeAECC_e_AeCoast_State;/* '<S9>/AeCoast_Arbitration' */

#endif

static VAR(TeDMIR_e_eCoastInfo, AECR_VAR_INIT) VeAECC_e_TellTaleSts;
                               /* '<S10>/SigConvForSigProp_Variant_Source1_0' */
static VAR(TeDMIR_e_eCoastInfo, AECR_VAR_INIT) VeAECC_e_eCoast_PopUpRqst;
                               /* '<S10>/SigConvForSigProp_Variant_Source2_0' */
static VAR(TeDMIR_e_eCoastSel, AECR_VAR_INIT) VeAECC_e_eCoastingSel;
                               /* '<S10>/SigConvForSigProp_Variant_Source3_0' */
static VAR(TeDMIR_e_eCoastSt, AECR_VAR_INIT) VeAECC_e_eCoastingSts;
                                /* '<S10>/SigConvForSigProp_Variant_Source_0' */
static VAR(boolean, AECR_VAR_INIT) VeAECI_b_AeCoastBtnDiagFail;/* '<S272>/Switch1' */
static VAR(boolean, AECR_VAR_INIT) VeAECI_b_AeCoast_Act;/* '<S274>/Switch1' */
static VAR(boolean, AECR_VAR_INIT) VeAECI_b_CrsCntrlActv;/* '<S275>/Switch1' */
static VAR(boolean, AECR_VAR_INIT) VeAECI_b_EmsMlfAtv;/* '<S279>/Switch1' */
static VAR(boolean, AECR_VAR_INIT) VeAECI_b_ImpndSkid;/* '<S277>/Switch1' */
static VAR(boolean, AECR_VAR_INIT) VeAECI_b_RunCrankActive;/* '<S273>/Switch1' */

#if Rte_SysCon_Variant_AECR_1

static VAR(boolean, AECR_VAR_INIT) VeAECI_b_TrrnMode;/* '<S40>/Logical3' */

#endif

static VAR(TeBRKR_e_AeCoastSwitchStat, AECR_VAR_INIT) VeAECI_e_AeCoastSwitchStat;/* '<S276>/Switch1' */
static VAR(TeBRKR_e_BrkPdl_Stat, AECR_VAR_INIT) VeAECI_e_BrkPedalDscrtInpt;/* '<S280>/Switch1' */
static VAR(TePMDR_e_PowerMode, AECR_VAR_INIT) VeAECI_e_PMM_PowerMode;/* '<S271>/Switch1' */
static VAR(TeTMDR_e_TrrnMd, AECR_VAR_INIT) VeAECI_e_TrrnMd;/* '<S278>/Switch1' */

#if Rte_SysCon_Variant_AECR_1

static VAR(TeAECR_e_MaxRegenDsrdSt, AECR_VAR_INIT) VeAECR_e_MaxRegenDsrdSt;/* '<S38>/Switch3' */

#endif

#if Rte_SysCon_Variant_AECR_1

static VAR(TeAECR_e_MaxRegenDsrdSt, AECR_VAR_INIT) VeAECR_e_MaxRegenDsrdStOvrd;/* '<S38>/Switch' */

#endif

#if Rte_SysCon_Variant_AECR_1

static VAR(TeAECR_e_MaxRegenDsrdSt, AECR_VAR_INIT) VeAECR_e_MaxRegenDsrdStRaw;/* '<S38>/Merge1' */

#endif

static VAR(TeDMIR_e_eCoastSel, AECR_VAR_INIT) VeAECR_e_eCoastLvlLatched;/* '<S173>/DataTypeConversion' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AECR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_AECR
#include "MemMap.h"

CONST(ConstB_AECR_ac_T, AECR_VAR_INIT) AECR_ac_ConstB =
{
    CeDMIR_e_NotAvailable,             /* '<S336>/Constant' */
    CeDMIR_e_Level1,                   /* '<S339>/Constant' */
    CeDMIR_e_Msg0,                     /* '<S341>/Constant' */
    CeDMIR_e_Level1Sts,                /* '<S337>/Constant' */
    CeDMIR_e_NormalRegen,              /* '<S334>/Constant' */
    CeDMIR_e_InfoLevel1,               /* '<S342>/Constant' */
    CeDMIR_e_InfoLevel1,               /* '<S340>/Constant' */
    CeDMIR_e_None,                     /* '<S338>/Constant' */
    CeDMIR_e_None,                     /* '<S335>/Constant' */
    CeDMIR_e_LevelOne,                 /* '<S343>/Constant' */

#if !Rte_SysCon_Variant_AECR_1

    CeAECR_e_TelltaleOff,              /* '<S76>/Constant' */

#endif

#if !Rte_SysCon_Variant_AECR_1

    CeAECR_e_MaxRegenOff               /* '<S75>/Constant' */
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_AECR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AECR
#include "MemMap.h"

VAR(B_AECR_ac_T, AECR_VAR_INIT) AECR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AECR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AECR
#include "MemMap.h"

VAR(DW_AECR_ac_T, AECR_VAR_INIT) AECR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AECR
#include "MemMap.h"

/* Previous zero-crossings (trigger) states */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AECR
#include "MemMap.h"

VAR(PrevZCX_AECR_ac_T, AECR_VAR_INIT) AECR_ac_PrevZCX;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AECR
#include "MemMap.h"
#if Rte_SysCon_Variant_AECR_1

static FUNC(void, AECR_CODE_LOCAL) AECR_ac_Fault(void);

#endif

#if Rte_SysCon_Variant_AECR_1

static FUNC(void, AECR_CODE_LOCAL) AECR_ac_Active(void);

#endif

#if Rte_SysCon_Variant_AECR_1

static FUNC(void, AECR_CODE_LOCAL) AECR_ac_NotActive(void);

#endif

/* Forward declaration for local functions */
static uint8 AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo(uint8 input);
static uint8 AECR_ac_safe_cast_to_TeDMIR_e_eCoastSel(uint8 input);

#if Rte_SysCon_Variant_AECR_1

static void AECR_a_enter_atomic_AeCoasting_NotActive(void);

#endif

#if Rte_SysCon_Variant_AECR_1

static void AECR_ac_AeCoasting_Active(const boolean *Comparison4);

#endif

#if Rte_SysCon_Variant_AECR_1

static void AECR_ac_AeCoasting_Active_OnHold(const boolean *Comparison4);

#endif

#if Rte_SysCon_Variant_AECR_1

static void AECR_ac_AeCoasting_NotActive_ImpSkid(void);

#endif

#if Rte_SysCon_Variant_AECR_1

static void AECR__AeCoasting_NotActive_Latch_Terrain(void);

#endif

#if Rte_SysCon_Variant_AECR_1

static void AECR_ac_EEPROM_Active(void);

#endif

/* Output and update for action system: '<S38>/Fault' */
#if Rte_SysCon_Variant_AECR_1

static FUNC(void, AECR_CODE_LOCAL) AECR_ac_Fault(void)
{
    /* Merge: '<S38>/Merge1' incorporates:
     *  Constant: '<S53>/Constant'
     *  SignalConversion generated from: '<S45>/MaxRegenDsrdSt'
     */
    VeAECR_e_MaxRegenDsrdStRaw = CeAECR_e_MaxRegenDsrdFault;
}

#endif

/* Output and update for action system: '<S38>/Active' */
#if Rte_SysCon_Variant_AECR_1

static FUNC(void, AECR_CODE_LOCAL) AECR_ac_Active(void)
{
    /* SignalConversion generated from: '<S41>/MaxRegenDsrdSt' incorporates:
     *  Constant: '<S52>/Constant'
     *  Merge: '<S38>/Merge1'
     */
    VeAECR_e_MaxRegenDsrdStRaw = CeAECR_e_MaxRegenDsrdStActive;
}

#endif

/* Output and update for action system: '<S38>/NotActive' */
#if Rte_SysCon_Variant_AECR_1

static FUNC(void, AECR_CODE_LOCAL) AECR_ac_NotActive(void)
{
    /* SignalConversion generated from: '<S51>/MaxRegenDsrdSt' incorporates:
     *  Constant: '<S54>/Constant'
     *  Merge: '<S38>/Merge1'
     */
    VeAECR_e_MaxRegenDsrdStRaw = CeAECR_e_MaxRegenDsrdNotActive;
}

#endif

static uint8 AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo(uint8 input)
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

static uint8 AECR_ac_safe_cast_to_TeDMIR_e_eCoastSel(uint8 input)
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

/* Function for Chart: '<S9>/AeCoast_Arbitration' */
#if Rte_SysCon_Variant_AECR_1

static void AECR_a_enter_atomic_AeCoasting_NotActive(void)
{
    /* Entry 'AeCoasting_NotActive': '<S12>:28' */
    AECR_ac_B.AeCoastLED = CeAECR_e_LEDOff;
    AECR_ac_B.TellTale = CeAECR_e_TelltaleOff;
    if (((uint32)VeAECC_e_AeCoast_State) == CeAECR_e_AeCoastStNotActiveEEPROM)
    {
        AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
    }
    else if ((((uint32)VeAECC_e_AeCoast_State) == CeAECR_e_AeCoastStFaultEEPROM)
             || (((uint32)VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdFault))
    {
        AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenUnavailable;
    }
    else if (!VeAECC_b_TrrnMode)
    {
        AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
    }
    else
    {
        AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOff;
    }

    VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStNotActive;
}

#endif

/* Function for Chart: '<S9>/AeCoast_Arbitration' */
#if Rte_SysCon_Variant_AECR_1

static void AECR_ac_AeCoasting_Active(const boolean *Comparison4)
{
    boolean tmp;
    boolean tmp_0;
    AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
    AECR_ac_B.TellTale = CeAECR_e_TelltaleGreen;

    /* During 'AeCoasting_Active': '<S12>:32' */
    tmp = !AECR_ac_B.Logical;
    if (((((((uint32)VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdNotActive)
           || (((uint32)VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdFault))
          || tmp) || ((VeAECI_b_ImpndSkid) && (VeAECC_b_ContactSwitch))) ||
            (VeAECI_b_CrsCntrlActv))
    {
        /* Transition: '<S12>:93' */
        if ((*Comparison4) || (!VeAECC_b_4LOWMd))
        {
            /* Transition: '<S12>:94' */
            AECR_ac_DW.is_c3_AECR_ac = AE_IN_AeCoasting_NotActive_Latch_Terrain;

            /* Entry Internal 'AeCoasting_NotActive_Latch_Terrain': '<S12>:53' */
            /* Transition: '<S12>:54' */
            AECR_ac_DW.is_AeCoasting_NotActive_Latch_Terrain =
                IN_AeCoasting_NotActive_Latch_Terrain_Bl;

            /* Entry 'AeCoasting_NotActive_Latch_Terrain_Blinking': '<S12>:34' */
            AECR_ac_B.AeCoastLED = CeAECR_e_LEDBlink;
            AECR_ac_B.TellTale = CeAECR_e_TelltaleOff;
            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenUnavailable;
            AECR_ac_DW.State_Timer = 0.0F;
            VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStLatchTerrainFault;
        }
        else
        {
            if ((!(*Comparison4)) && (VeAECC_b_4LOWMd))
            {
                /* Transition: '<S12>:96' */
                tmp_0 = !VeAECI_b_ImpndSkid;
                if (((tmp || (VeAECI_b_CrsCntrlActv)) && (((uint32)
                        VeAECR_e_MaxRegenDsrdSt) ==
                        CeAECR_e_MaxRegenDsrdStActive)) && tmp_0)
                {
                    /* Transition: '<S12>:259' */
                    AECR_ac_DW.is_c3_AECR_ac =
                        AECR_ac_IN_AeCoasting_Active_OnHold;

                    /* Entry 'AeCoasting_Active_OnHold': '<S12>:33' */
                    AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
                    AECR_ac_B.TellTale = CeAECR_e_TelltaleWhite;
                    if (((uint32)VeAECC_e_AeCoast_State) ==
                            CeAECR_e_AeCoastStActiveEEPROM)
                    {
                        AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
                    }
                    else
                    {
                        AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                    }

                    VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStOnHold;
                }
                else if ((VeAECI_b_ImpndSkid) && (VeAECC_b_ContactSwitch))
                {
                    /* Transition: '<S12>:260' */
                    AECR_ac_DW.is_c3_AECR_ac =
                        AECR_ac_IN_AeCoasting_Active_ImpSkid;

                    /* Entry Internal 'AeCoasting_Active_ImpSkid': '<S12>:213' */
                    /* Transition: '<S12>:215' */
                    AECR_ac_DW.is_AeCoasting_Active_ImpSkid =
                        AE_IN_AeCoasting_Active_ImpSkid_Blinking;

                    /* Entry 'AeCoasting_Active_ImpSkid_Blinking': '<S12>:220' */
                    AECR_ac_B.AeCoastLED = CeAECR_e_LEDBlink;
                    AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                    AECR_ac_B.TellTale = CeAECR_e_TelltaleGreen;
                    AECR_ac_DW.State_Timer = 0.0F;
                    VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStImpSkidActive;
                }
                else
                {
                    if (((((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                            CeAECR_e_MaxRegenDsrdNotActive) || (((uint32)
                            VeAECR_e_MaxRegenDsrdSt) ==
                            CeAECR_e_MaxRegenDsrdFault)) && tmp_0)
                    {
                        /* Transition: '<S12>:261' */
                        /* Transition: '<S12>:210' */
                        AECR_ac_DW.is_c3_AECR_ac =
                            AECR_ac_IN_AeCoasting_NotActive;
                        AECR_a_enter_atomic_AeCoasting_NotActive();
                    }
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S9>/AeCoast_Arbitration' */
#if Rte_SysCon_Variant_AECR_1

static void AECR_ac_AeCoasting_Active_OnHold(const boolean *Comparison4)
{
    boolean tmp;
    boolean tmp_0;
    boolean tmp_1;
    AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
    AECR_ac_B.TellTale = CeAECR_e_TelltaleWhite;

    /* During 'AeCoasting_Active_OnHold': '<S12>:33' */
    tmp = ((AECR_ac_B.Logical) && (!VeAECI_b_CrsCntrlActv));
    tmp_0 = ((VeAECI_b_ImpndSkid) && (VeAECC_b_ContactSwitch));
    if ((((((uint32)VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdNotActive) ||
          (((uint32)VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdFault)) ||
            tmp) || tmp_0)
    {
        /* Transition: '<S12>:104' */
        tmp_1 = !VeAECI_b_ImpndSkid;
        if (tmp && (tmp_1 || (!VeAECC_b_ContactSwitch)))
        {
            /* Transition: '<S12>:105' */
            AECR_ac_DW.is_c3_AECR_ac = AECR_ac_IN_AeCoasting_Active;

            /* Entry 'AeCoasting_Active': '<S12>:32' */
            AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
            AECR_ac_B.TellTale = CeAECR_e_TelltaleGreen;
            if (((uint32)VeAECC_e_AeCoast_State) ==
                    CeAECR_e_AeCoastStActiveEEPROM)
            {
                AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
            }
            else
            {
                AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
            }

            VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStActive;
        }
        else
        {
            if (((((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                    CeAECR_e_MaxRegenDsrdNotActive) || (((uint32)
                    VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdFault)) ||
                    tmp_0)
            {
                /* Transition: '<S12>:106' */
                if ((*Comparison4) || (!VeAECC_b_4LOWMd))
                {
                    /* Transition: '<S12>:94' */
                    AECR_ac_DW.is_c3_AECR_ac =
                        AE_IN_AeCoasting_NotActive_Latch_Terrain;

                    /* Entry Internal 'AeCoasting_NotActive_Latch_Terrain': '<S12>:53' */
                    /* Transition: '<S12>:54' */
                    AECR_ac_DW.is_AeCoasting_NotActive_Latch_Terrain =
                        IN_AeCoasting_NotActive_Latch_Terrain_Bl;

                    /* Entry 'AeCoasting_NotActive_Latch_Terrain_Blinking': '<S12>:34' */
                    AECR_ac_B.AeCoastLED = CeAECR_e_LEDBlink;
                    AECR_ac_B.TellTale = CeAECR_e_TelltaleOff;
                    AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenUnavailable;
                    AECR_ac_DW.State_Timer = 0.0F;
                    VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStLatchTerrainFault;
                }
                else
                {
                    if ((!(*Comparison4)) && (VeAECC_b_4LOWMd))
                    {
                        /* Transition: '<S12>:96' */
                        if ((((!AECR_ac_B.Logical) || (VeAECI_b_CrsCntrlActv)) &&
                             (((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                                CeAECR_e_MaxRegenDsrdStActive)) && tmp_1)
                        {
                            /* Transition: '<S12>:259' */
                            AECR_ac_DW.is_c3_AECR_ac =
                                AECR_ac_IN_AeCoasting_Active_OnHold;

                            /* Entry 'AeCoasting_Active_OnHold': '<S12>:33' */
                            AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
                            AECR_ac_B.TellTale = CeAECR_e_TelltaleWhite;
                            if (((uint32)VeAECC_e_AeCoast_State) ==
                                    CeAECR_e_AeCoastStActiveEEPROM)
                            {
                                AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
                            }
                            else
                            {
                                AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                            }

                            VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStOnHold;
                        }
                        else if ((VeAECI_b_ImpndSkid) && (VeAECC_b_ContactSwitch))
                        {
                            /* Transition: '<S12>:260' */
                            AECR_ac_DW.is_c3_AECR_ac =
                                AECR_ac_IN_AeCoasting_Active_ImpSkid;

                            /* Entry Internal 'AeCoasting_Active_ImpSkid': '<S12>:213' */
                            /* Transition: '<S12>:215' */
                            AECR_ac_DW.is_AeCoasting_Active_ImpSkid =
                                AE_IN_AeCoasting_Active_ImpSkid_Blinking;

                            /* Entry 'AeCoasting_Active_ImpSkid_Blinking': '<S12>:220' */
                            AECR_ac_B.AeCoastLED = CeAECR_e_LEDBlink;
                            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                            AECR_ac_B.TellTale = CeAECR_e_TelltaleGreen;
                            AECR_ac_DW.State_Timer = 0.0F;
                            VeAECC_e_AeCoast_State =
                                CeAECR_e_AeCoastStImpSkidActive;
                        }
                        else
                        {
                            if (((((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                                    CeAECR_e_MaxRegenDsrdNotActive) || (((uint32)
                                    VeAECR_e_MaxRegenDsrdSt) ==
                                    CeAECR_e_MaxRegenDsrdFault)) && tmp_1)
                            {
                                /* Transition: '<S12>:261' */
                                /* Transition: '<S12>:210' */
                                AECR_ac_DW.is_c3_AECR_ac =
                                    AECR_ac_IN_AeCoasting_NotActive;
                                AECR_a_enter_atomic_AeCoasting_NotActive();
                            }
                        }
                    }
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S9>/AeCoast_Arbitration' */
#if Rte_SysCon_Variant_AECR_1

static void AECR_ac_AeCoasting_NotActive_ImpSkid(void)
{
    /* During 'AeCoasting_NotActive_ImpSkid': '<S12>:59' */
    if (((uint32)AECR_ac_DW.is_AeCoasting_NotActive_ImpSkid) ==
            IN_AeCoasting_NotActive_ImpSkid_Blinking)
    {
        AECR_ac_B.AeCoastLED = CeAECR_e_LEDBlink;
        AECR_ac_B.TellTale = CeAECR_e_TelltaleOff;

        /* Constant: '<S16>/Calib' */
        /* During 'AeCoasting_NotActive_ImpSkid_Blinking': '<S12>:27' */
        if (AECR_ac_DW.State_Timer >= KeAECR_t_StayInBlinkState)
        {
            /* Transition: '<S12>:47' */
            AECR_ac_DW.is_AeCoasting_NotActive_ImpSkid =
                AE_IN_AeCoasting_NotActive_ImpSkid_Const;

            /* Entry 'AeCoasting_NotActive_ImpSkid_Const': '<S12>:46' */
            AECR_ac_B.AeCoastLED = CeAECR_e_LEDOff;
        }
        else
        {
            /* Constant: '<S15>/Calib' */
            AECR_ac_DW.State_Timer += HeAECR_t_10ms_dT;
        }
    }
    else
    {
        AECR_ac_B.AeCoastLED = CeAECR_e_LEDOff;

        /* Constant: '<S16>/Calib' */
        /* During 'AeCoasting_NotActive_ImpSkid_Const': '<S12>:46' */
        if (((((uint32)VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdStActive)
             || (((uint32)VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdFault))
            || (AECR_ac_DW.State_Timer >= KeAECR_t_StayInBlinkState))
        {
            /* Transition: '<S12>:80' */
            if ((AECR_ac_DW.State_Timer >= KeAECR_t_StayInBlinkState) ||
                    (((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                     CeAECR_e_MaxRegenDsrdFault))
            {
                /* Transition: '<S12>:85' */
                /* Transition: '<S12>:242' */
                /* Transition: '<S12>:113' */
                AECR_ac_DW.is_AeCoasting_NotActive_ImpSkid =
                    AECR_ac_IN_NO_ACTIVE_CHILD;
                AECR_ac_DW.is_c3_AECR_ac = AECR_ac_IN_AeCoasting_NotActive;
                AECR_a_enter_atomic_AeCoasting_NotActive();
            }
            else
            {
                if (((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                        CeAECR_e_MaxRegenDsrdStActive)
                {
                    /* Transition: '<S12>:91' */
                    /* Transition: '<S12>:81' */
                    if ((!AECR_ac_B.Logical) || (VeAECI_b_CrsCntrlActv))
                    {
                        /* Transition: '<S12>:75' */
                        AECR_ac_DW.is_AeCoasting_NotActive_ImpSkid =
                            AECR_ac_IN_NO_ACTIVE_CHILD;
                        AECR_ac_DW.is_c3_AECR_ac =
                            AECR_ac_IN_AeCoasting_Active_OnHold;

                        /* Entry 'AeCoasting_Active_OnHold': '<S12>:33' */
                        AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
                        AECR_ac_B.TellTale = CeAECR_e_TelltaleWhite;
                        if (((uint32)VeAECC_e_AeCoast_State) ==
                                CeAECR_e_AeCoastStActiveEEPROM)
                        {
                            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
                        }
                        else
                        {
                            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                        }

                        VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStOnHold;
                    }
                    else
                    {
                        if ((AECR_ac_B.Logical) && (!VeAECI_b_CrsCntrlActv))
                        {
                            /* Transition: '<S12>:76' */
                            AECR_ac_DW.is_AeCoasting_NotActive_ImpSkid =
                                AECR_ac_IN_NO_ACTIVE_CHILD;
                            AECR_ac_DW.is_c3_AECR_ac =
                                AECR_ac_IN_AeCoasting_Active;

                            /* Entry 'AeCoasting_Active': '<S12>:32' */
                            AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
                            AECR_ac_B.TellTale = CeAECR_e_TelltaleGreen;
                            if (((uint32)VeAECC_e_AeCoast_State) ==
                                    CeAECR_e_AeCoastStActiveEEPROM)
                            {
                                AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
                            }
                            else
                            {
                                AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                            }

                            VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStActive;
                        }
                    }
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S9>/AeCoast_Arbitration' */
#if Rte_SysCon_Variant_AECR_1

static void AECR__AeCoasting_NotActive_Latch_Terrain(void)
{
    boolean guard1 = false;

    /* During 'AeCoasting_NotActive_Latch_Terrain': '<S12>:53' */
    if (((uint32)AECR_ac_DW.is_AeCoasting_NotActive_Latch_Terrain) ==
            IN_AeCoasting_NotActive_Latch_Terrain_Bl)
    {
        AECR_ac_B.AeCoastLED = CeAECR_e_LEDBlink;
        AECR_ac_B.TellTale = CeAECR_e_TelltaleOff;

        /* Constant: '<S16>/Calib' */
        /* During 'AeCoasting_NotActive_Latch_Terrain_Blinking': '<S12>:34' */
        if (AECR_ac_DW.State_Timer >= KeAECR_t_StayInBlinkState)
        {
            /* Transition: '<S12>:43' */
            AECR_ac_DW.is_AeCoasting_NotActive_Latch_Terrain =
                IN_AeCoasting_NotActive_Latch_Terrain_Co;

            /* Entry 'AeCoasting_NotActive_Latch_Terrain_Const': '<S12>:40' */
            AECR_ac_B.AeCoastLED = CeAECR_e_LEDOff;
        }
        else
        {
            /* Constant: '<S15>/Calib' */
            AECR_ac_DW.State_Timer += HeAECR_t_10ms_dT;
        }
    }
    else
    {
        AECR_ac_B.AeCoastLED = CeAECR_e_LEDOff;

        /* Constant: '<S16>/Calib' */
        /* During 'AeCoasting_NotActive_Latch_Terrain_Const': '<S12>:40' */
        if ((((((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                CeAECR_e_MaxRegenDsrdNotActive) || (((uint32)
                VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdFault)) ||
                ((VeAECI_b_ImpndSkid) && (VeAECC_b_ContactSwitch))) ||
                (AECR_ac_DW.State_Timer >= KeAECR_t_StayInBlinkState))
        {
            /* Transition: '<S12>:115' */
            /* Transition: '<S12>:116' */
            if (((AECR_ac_DW.State_Timer >= KeAECR_t_StayInBlinkState) ||
                    (((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                     CeAECR_e_MaxRegenDsrdNotActive)) || (((uint32)
                    VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdFault))
            {
                /* Transition: '<S12>:111' */
                /* Transition: '<S12>:242' */
                /* Transition: '<S12>:113' */
                AECR_ac_DW.is_AeCoasting_NotActive_Latch_Terrain =
                    AECR_ac_IN_NO_ACTIVE_CHILD;
                AECR_ac_DW.is_c3_AECR_ac = AECR_ac_IN_AeCoasting_NotActive;
                AECR_a_enter_atomic_AeCoasting_NotActive();
            }
            else
            {
                guard1 = false;
                if (((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                        CeAECR_e_MaxRegenDsrdStActive)
                {
                    /* Transition: '<S12>:109' */
                    if ((!AECR_ac_B.Logical) || (VeAECI_b_CrsCntrlActv))
                    {
                        /* Transition: '<S12>:75' */
                        AECR_ac_DW.is_AeCoasting_NotActive_Latch_Terrain =
                            AECR_ac_IN_NO_ACTIVE_CHILD;
                        AECR_ac_DW.is_c3_AECR_ac =
                            AECR_ac_IN_AeCoasting_Active_OnHold;

                        /* Entry 'AeCoasting_Active_OnHold': '<S12>:33' */
                        AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
                        AECR_ac_B.TellTale = CeAECR_e_TelltaleWhite;
                        if (((uint32)VeAECC_e_AeCoast_State) ==
                                CeAECR_e_AeCoastStActiveEEPROM)
                        {
                            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
                        }
                        else
                        {
                            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                        }

                        VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStOnHold;
                    }
                    else if ((AECR_ac_B.Logical) && (!VeAECI_b_CrsCntrlActv))
                    {
                        /* Transition: '<S12>:76' */
                        AECR_ac_DW.is_AeCoasting_NotActive_Latch_Terrain =
                            AECR_ac_IN_NO_ACTIVE_CHILD;
                        AECR_ac_DW.is_c3_AECR_ac = AECR_ac_IN_AeCoasting_Active;

                        /* Entry 'AeCoasting_Active': '<S12>:32' */
                        AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
                        AECR_ac_B.TellTale = CeAECR_e_TelltaleGreen;
                        if (((uint32)VeAECC_e_AeCoast_State) ==
                                CeAECR_e_AeCoastStActiveEEPROM)
                        {
                            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
                        }
                        else
                        {
                            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                        }

                        VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStActive;
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

                if (guard1)
                {
                    if ((VeAECI_b_ImpndSkid) && (VeAECC_b_ContactSwitch))
                    {
                        /* Transition: '<S12>:110' */
                        AECR_ac_DW.is_AeCoasting_NotActive_Latch_Terrain =
                            AECR_ac_IN_NO_ACTIVE_CHILD;
                        AECR_ac_DW.is_c3_AECR_ac =
                            AECR_ac_IN_AeCoasting_NotActive_ImpSkid;

                        /* Entry Internal 'AeCoasting_NotActive_ImpSkid': '<S12>:59' */
                        /* Transition: '<S12>:157' */
                        AECR_ac_DW.is_AeCoasting_NotActive_ImpSkid =
                            IN_AeCoasting_NotActive_ImpSkid_Blinking;

                        /* Entry 'AeCoasting_NotActive_ImpSkid_Blinking': '<S12>:27' */
                        AECR_ac_B.AeCoastLED = CeAECR_e_LEDBlink;
                        AECR_ac_B.TellTale = CeAECR_e_TelltaleOff;
                        AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOff;
                        AECR_ac_DW.State_Timer = 0.0F;
                        VeAECC_e_AeCoast_State =
                            CeAECR_e_AeCoastStImpSkidNotActive;
                    }
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S9>/AeCoast_Arbitration' */
#if Rte_SysCon_Variant_AECR_1

static void AECR_ac_EEPROM_Active(void)
{
    boolean guard1 = false;
    boolean guard2 = false;
    AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
    AECR_ac_B.TellTale = CeAECR_e_TelltaleWhite;

    /* Constant: '<S17>/Calib' */
    /* During 'EEPROM_Active': '<S12>:162' */
    guard1 = false;
    guard2 = false;
    if (AECR_ac_DW.State_Timer >= KeAECR_t_StayInStateActive)
    {
        /* Transition: '<S12>:169' */
        /* Transition: '<S12>:203' */
        if (((uint32)VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdStActive)
        {
            /* Transition: '<S12>:71' */
            if ((!AECR_ac_B.Logical) || (VeAECI_b_CrsCntrlActv))
            {
                /* Transition: '<S12>:75' */
                AECR_ac_DW.is_c3_AECR_ac = AECR_ac_IN_AeCoasting_Active_OnHold;

                /* Entry 'AeCoasting_Active_OnHold': '<S12>:33' */
                AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
                AECR_ac_B.TellTale = CeAECR_e_TelltaleWhite;
                if (((uint32)VeAECC_e_AeCoast_State) ==
                        CeAECR_e_AeCoastStActiveEEPROM)
                {
                    AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
                }
                else
                {
                    AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                }

                VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStOnHold;
            }
            else if ((AECR_ac_B.Logical) && (!VeAECI_b_CrsCntrlActv))
            {
                /* Transition: '<S12>:76' */
                AECR_ac_DW.is_c3_AECR_ac = AECR_ac_IN_AeCoasting_Active;

                /* Entry 'AeCoasting_Active': '<S12>:32' */
                AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
                AECR_ac_B.TellTale = CeAECR_e_TelltaleGreen;
                if (((uint32)VeAECC_e_AeCoast_State) ==
                        CeAECR_e_AeCoastStActiveEEPROM)
                {
                    AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
                }
                else
                {
                    AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                }

                VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStActive;
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

    if (guard2)
    {
        if (((VeAECI_b_ImpndSkid) && (VeAECC_b_ContactSwitch)) && (((uint32)
                VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdNotActive))
        {
            /* Transition: '<S12>:70' */
            AECR_ac_DW.is_c3_AECR_ac = AECR_ac_IN_AeCoasting_NotActive_ImpSkid;

            /* Entry Internal 'AeCoasting_NotActive_ImpSkid': '<S12>:59' */
            /* Transition: '<S12>:157' */
            AECR_ac_DW.is_AeCoasting_NotActive_ImpSkid =
                IN_AeCoasting_NotActive_ImpSkid_Blinking;

            /* Entry 'AeCoasting_NotActive_ImpSkid_Blinking': '<S12>:27' */
            AECR_ac_B.AeCoastLED = CeAECR_e_LEDBlink;
            AECR_ac_B.TellTale = CeAECR_e_TelltaleOff;
            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOff;
            AECR_ac_DW.State_Timer = 0.0F;
            VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStImpSkidNotActive;
        }
        else
        {
            guard1 = true;
        }
    }

    if (guard1)
    {
        if ((((uint32)VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdNotActive)
            || (((uint32)VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdFault))
        {
            /* Transition: '<S12>:170' */
            /* Transition: '<S12>:197' */
            /* Transition: '<S12>:200' */
            AECR_ac_DW.is_c3_AECR_ac = AECR_ac_IN_AeCoasting_NotActive;
            AECR_a_enter_atomic_AeCoasting_NotActive();
        }
        else
        {
            /* Constant: '<S15>/Calib' */
            AECR_ac_DW.State_Timer += HeAECR_t_10ms_dT;
        }
    }

    /* End of Constant: '<S17>/Calib' */
}

#endif

/* Model step function for TID1 */
FUNC(void, AECR_CODE) AECR_MedTEB(void) /* Explicit Task: MedTEB */
{
    float32 rtb_TmpSignalConversionAtVeBRKR_Pct_BrkT;
    float32 rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    TeAECR_e_LEDCmd tmpRead_2;
    TeASLR_e_HDC_Status tmpRead_5;
    TeDMDR_e_DrvMd tmpRead_0;
    TeDMDR_e_TurtleMdSts tmpRead_6;
    TeTMDR_e_LockLowSt tmpRead;
    uint8 rtb_eCoastThreshold_TrrnMd;
    boolean rtb_AND_b;
    boolean rtb_Comparison1;
    boolean rtb_Comparison4;
    boolean rtb_Logical;
    boolean rtb_Logical3;
    boolean rtb_Logical3_e;
    boolean rtb_Logical5_j;
    boolean rtb_LogicalOperator;
    boolean rtb_LogicalOperator_j;
    boolean rtb_SignalConversion_b;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_VehSpd;
    boolean tmpRead_1;
    boolean tmpRead_3;
    boolean tmpRead_4;

#if Rte_SysCon_Variant_AECR_1

    boolean rtb_Comparison1_pu;

#endif

    uint8 rtb_Switch2;
    boolean rtb_AND_a;
    boolean rtb_AND_cn;
    boolean rtb_AND_lu;
    boolean rtb_AND_n;
    boolean rtb_AND_nc;
    boolean rtb_Comparison12_p;
    boolean rtb_OR1_h;

#if Rte_SysCon_Variant_AECR_1

    boolean rtb_NotEqual;

#endif

    sint32 LeAECR_e_eCoastPopUpMsg;
    sint32 tmp;
    TeAECR_e_Aecoasting_Status rtb_Merge_o;
    TeAECR_e_Aecoasting_Status rtb_Switch2_p;
    TeDMIR_e_ECoastingReq rtb_TmpSignalConversionAtECoastingReqO_l;
    TeDMIR_e_PadLvrSts rtb_TmpSignalConversionAtVeDMIB_e_PadLvr;
    TeDMIR_e_PaddleModeRequest Switch3;
    TeDMIR_e_PaddleModeRequest rtb_TmpSignalConversionAtVeDMII_e_PddlMd;
    TeDMIR_e_RegenSts VeAECC_e_RegenSts;
    TeDMIR_e_eCoastInfo rtb_TmpSignalConversionAtVeDMIR_e_TellTa;
    TeDMIR_e_eCoastSel rtb_DataStoreRead1;
    TeDMIR_e_eCoastSel rtb_UnitDelay_m_tmp;
    TeDTRR_e_OPD_Sts rtb_TmpSignalConversionAtVeDTRR_e_OPD_St;
    TePLTR_e_ACCSystemSts rtb_TmpSignalConversionAtVePLTR_e_ACCSys;
    TeTIMR_e_RaceModeSts rtb_TmpSignalConversionAtVeTIMR_e_RaceMo;
    TeTMDR_e_TrrnMd rtb_TmpSignalConversionAtVeTMDR_e_Propul;
    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR_e_VldtdT;
    uint8 rtb_OR_d_0;
    boolean guard1 = false;
    boolean guard2 = false;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/AECR_MedTEB'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommECM_PCM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommECM_PCM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommECM_PCM_A_Value
        (&AECR_ac_DW.StatusByte_LostCommECM_PCM_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VePMDR_b_RunCrankActive' */
    (void)Rte_Read_VePMDR_b_RunCrankActive_Value((&(VeAECI_b_RunCrankActive)));

    /* Inport: '<Root>/VePLTR_b_CrsCntrlActv' */
    (void)Rte_Read_VePLTR_b_CrsCntrlActv_Value((&(VeAECI_b_CrsCntrlActv)));

    /* Inport: '<Root>/VeBRKR_b_AeCoastBtnDiagFail' */
    (void)Rte_Read_VeBRKR_b_AeCoastBtnDiagFail_Value
        ((&(VeAECI_b_AeCoastBtnDiagFail)));

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value((&(VeAECI_e_PMM_PowerMode)));

    /* Inport: '<Root>/VeSRAR_b_RegenBrkInhb' */
    (void)Rte_Read_VeSRAR_b_RegenBrkInhb_Value(&rtb_Comparison4);

    /* Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt' */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value
        ((&(VeAECI_e_BrkPedalDscrtInpt)));

    /* Inport: '<Root>/VeBRKR_b_EmsMlfAtv' */
    (void)Rte_Read_VeBRKR_b_EmsMlfAtv_Value((&(VeAECI_b_EmsMlfAtv)));

    /* Inport: '<Root>/VeTMDR_e_TrrnMd' */
    (void)Rte_Read_VeTMDR_e_TrrnMd_Value((&(VeAECI_e_TrrnMd)));

    /* Inport: '<Root>/VeBRKR_b_ImpndSkid' */
    (void)Rte_Read_VeBRKR_b_ImpndSkid_Value((&(VeAECI_b_ImpndSkid)));

    /* Inport: '<Root>/VeBRKR_e_AeCoastSwitchStat' */
    (void)Rte_Read_VeBRKR_e_AeCoastSwitchStat_Value
        ((&(VeAECI_e_AeCoastSwitchStat)));

    /* Inport: '<Root>/VeBRKR_b_AeCoastReady' */
    (void)Rte_Read_VeBRKR_b_AeCoastReady_Value(&rtb_AND_a);

    /* Inport: '<Root>/VeRGNR_b_AeCoast_Act' */
    (void)Rte_Read_VeRGNR_b_AeCoast_Act_Value((&(VeAECI_b_AeCoast_Act)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/AECR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR_e_VldtdT);

    /* SignalConversion generated from: '<S1>/VeCSVR_b_VehSpdFA' incorporates:
     *  Inport: '<Root>/VeCSVR_b_VehSpdFA'
     */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value
        (&rtb_TmpSignalConversionAtVeCSVR_b_VehSpd);

    /* SignalConversion generated from: '<S1>/VeDMIR_e_TellTaleSts' incorporates:
     *  Inport: '<Root>/VeDMIR_e_TellTaleSts'
     */
    (void)Rte_Read_VeDMIR_e_TellTaleSts_Value
        (&rtb_TmpSignalConversionAtVeDMIR_e_TellTa);

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value
        (&rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

    /* SignalConversion generated from: '<S1>/VeBRKR_Pct_BrkTravelSts' incorporates:
     *  Inport: '<Root>/VeBRKR_Pct_BrkTravelSts'
     */
    (void)Rte_Read_VeBRKR_Pct_BrkTravelSts_Value
        (&rtb_TmpSignalConversionAtVeBRKR_Pct_BrkT);

    /* SignalConversion generated from: '<S1>/VeDTRR_e_OPD_Sts' incorporates:
     *  Inport: '<Root>/VeDTRR_e_OPD_Sts'
     */
    (void)Rte_Read_VeDTRR_e_OPD_Sts_Value
        (&rtb_TmpSignalConversionAtVeDTRR_e_OPD_St);

    /* SignalConversion generated from: '<S1>/VeDMIB_e_PadLvrSts' incorporates:
     *  Inport: '<Root>/VeDMIB_e_PadLvrSts'
     */
    (void)Rte_Read_VeDMIB_e_PadLvrSts_Value
        (&rtb_TmpSignalConversionAtVeDMIB_e_PadLvr);

    /* SignalConversion generated from: '<S1>/VeTMDR_e_PropulsionMd' incorporates:
     *  Inport: '<Root>/VeTMDR_e_PropulsionMd'
     */
    (void)Rte_Read_VeTMDR_e_PropulsionMd_Value
        (&rtb_TmpSignalConversionAtVeTMDR_e_Propul);

    /* SignalConversion generated from: '<S1>/VeTIMR_e_RaceModeSts' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RaceModeSts'
     */
    (void)Rte_Read_VeTIMR_e_RaceModeSts_Value
        (&rtb_TmpSignalConversionAtVeTIMR_e_RaceMo);

    /* SignalConversion generated from: '<S1>/ECoastingReq' incorporates:
     *  Merge: '<Root>/2'
     */
    rtb_TmpSignalConversionAtECoastingReqO_l =
        Rte_IrvRead_AECR_MedTEB_VeAECR_e_ECoastingReq_OutInit_IRV();

    /* SignalConversion generated from: '<S1>/VeDMII_e_PddlMdReq' incorporates:
     *  Merge: '<Root>/3'
     */
    rtb_TmpSignalConversionAtVeDMII_e_PddlMd =
        Rte_IrvRead_AECR_MedTEB_VeAECR_e_PddlMdReq_OutInit_IRV();

    /* SignalConversion generated from: '<S1>/VePLTR_e_ACCSystemSts' incorporates:
     *  Inport: '<Root>/VePLTR_e_ACCSystemSts'
     */
    (void)Rte_Read_VePLTR_e_ACCSystemSts_Value
        (&rtb_TmpSignalConversionAtVePLTR_e_ACCSys);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AECI_Process'
     */
    /* Switch: '<S274>/Switch1' incorporates:
     *  Constant: '<S287>/Calib'
     */
    if (KeAECR_b_AeCoast_ActOvrrd)
    {
        /* Switch: '<S274>/Switch1' incorporates:
         *  Constant: '<S288>/Calib'
         *  Inport: '<Root>/VeRGNR_b_AeCoast_Act'
         */
        VeAECI_b_AeCoast_Act = KeAECR_b_AeCoast_ActOvrrdVal;
    }

    /* End of Switch: '<S274>/Switch1' */

    /* Switch: '<S276>/Switch1' incorporates:
     *  Constant: '<S286>/Calib'
     */
    if (KeAECR_b_AeCoastSwitchStatOvrrd)
    {
        /* Switch: '<S276>/Switch1' incorporates:
         *  Constant: '<S302>/Calib'
         *  Inport: '<Root>/VeBRKR_e_AeCoastSwitchStat'
         */
        VeAECI_e_AeCoastSwitchStat = KeAECR_e_AeCoastSwitchStatOvrrdVal;
    }

    /* End of Switch: '<S276>/Switch1' */

    /* Switch: '<S277>/Switch1' incorporates:
     *  Constant: '<S294>/Calib'
     */
    if (KeAECR_b_ImpndSkidOvvrd)
    {
        /* Switch: '<S277>/Switch1' incorporates:
         *  Constant: '<S295>/Calib'
         *  Inport: '<Root>/VeBRKR_b_ImpndSkid'
         */
        VeAECI_b_ImpndSkid = KeAECR_b_ImpndSkidOvvrdVal;
    }

    /* End of Switch: '<S277>/Switch1' */

    /* Switch: '<S278>/Switch1' incorporates:
     *  Constant: '<S301>/Calib'
     */
    if (KeAECR_b_TrrnMdOvrrd)
    {
        /* Switch: '<S278>/Switch1' incorporates:
         *  Constant: '<S305>/Calib'
         *  Inport: '<Root>/VeTMDR_e_TrrnMd'
         */
        VeAECI_e_TrrnMd = KeAECR_e_TrrnMdOvrrdVal;
    }

    /* End of Switch: '<S278>/Switch1' */

    /* Switch: '<S279>/Switch1' incorporates:
     *  Constant: '<S292>/Calib'
     */
    if (KeAECR_b_EmsMlfAtvOvrrd)
    {
        /* Switch: '<S279>/Switch1' incorporates:
         *  Constant: '<S293>/Calib'
         *  Inport: '<Root>/VeBRKR_b_EmsMlfAtv'
         */
        VeAECI_b_EmsMlfAtv = KeAECR_b_EmsMlfAtvOvrrdVal;
    }

    /* End of Switch: '<S279>/Switch1' */

    /* Switch: '<S280>/Switch1' incorporates:
     *  Constant: '<S289>/Calib'
     */
    if (KeAECR_b_BrkPedalDscrtInptOvrrd)
    {
        /* Switch: '<S280>/Switch1' incorporates:
         *  Constant: '<S303>/Calib'
         *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
         */
        VeAECI_e_BrkPedalDscrtInpt = KeAECR_e_BrkPedalDscrtInptOvrrdVal;
    }

    /* End of Switch: '<S280>/Switch1' */

    /* Switch: '<S271>/Switch1' incorporates:
     *  Constant: '<S296>/Calib'
     */
    if (KeAECR_b_PMM_PowerModeOvrrd)
    {
        /* Switch: '<S271>/Switch1' incorporates:
         *  Constant: '<S304>/Calib'
         *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
         */
        VeAECI_e_PMM_PowerMode = KeAECR_e_PMM_PowerModeOvrrdVal;
    }

    /* End of Switch: '<S271>/Switch1' */

    /* Switch: '<S272>/Switch1' incorporates:
     *  Constant: '<S282>/Calib'
     */
    if (KeAECR_b_AeCoastBtnDiagFailOvrrd)
    {
        /* Switch: '<S272>/Switch1' incorporates:
         *  Constant: '<S283>/Calib'
         *  Inport: '<Root>/VeBRKR_b_AeCoastBtnDiagFail'
         */
        VeAECI_b_AeCoastBtnDiagFail = KeAECR_b_AeCoastBtnDiagFailOvrrdVal;
    }

    /* End of Switch: '<S272>/Switch1' */

    /* Switch: '<S275>/Switch1' incorporates:
     *  Constant: '<S290>/Calib'
     */
    if (KeAECR_b_CrsCntrlActvOvrrd)
    {
        /* Switch: '<S275>/Switch1' incorporates:
         *  Constant: '<S291>/Calib'
         *  Inport: '<Root>/VePLTR_b_CrsCntrlActv'
         */
        VeAECI_b_CrsCntrlActv = KeAECR_b_CrsCntrlActvOvrrdVal;
    }

    /* End of Switch: '<S275>/Switch1' */

    /* Switch: '<S273>/Switch1' incorporates:
     *  Constant: '<S299>/Calib'
     */
    if (KeAECR_b_RunCrankActiveOvrrd)
    {
        /* Switch: '<S273>/Switch1' incorporates:
         *  Constant: '<S300>/Calib'
         *  Inport: '<Root>/VePMDR_b_RunCrankActive'
         */
        VeAECI_b_RunCrankActive = KeAECR_b_RunCrankActiveOvrrdVal;
    }

    /* End of Switch: '<S273>/Switch1' */

    /* SignalConversion generated from: '<S7>/Variant Source1' incorporates:
     *  SignalConversion generated from: '<S7>/Variant Source'
     * */
#if Rte_SysCon_Variant_AECR_1

    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S297>/Calib'
     */
    if (KeAECR_b_RegenBrkInhbOvrrd)
    {
        /* VariantMerge generated from: '<S7>/Variant Source1' incorporates:
         *  Constant: '<S298>/Calib'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varia_gx =
            KeAECR_b_RegenBrkInhbOvrrdVal;
    }
    else
    {
        /* VariantMerge generated from: '<S7>/Variant Source1' incorporates:
         *  Inport: '<S7>/VeSRAR_b_RegenBrkInhb'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varia_gx = rtb_Comparison4;
    }

    /* End of Switch: '<S281>/Switch1' */

    /* Switch: '<S270>/Switch1' incorporates:
     *  Constant: '<S284>/Calib'
     */
    if (KeAECR_b_AeCoastReadyOvrrd)
    {
        /* VariantMerge generated from: '<S7>/Variant Source' incorporates:
         *  Constant: '<S285>/Calib'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varia_hy =
            KeAECR_b_AeCoastReadyOvrrdVal;
    }
    else
    {
        /* VariantMerge generated from: '<S7>/Variant Source' incorporates:
         *  Inport: '<S7>/VeBRKR_b_AeCoastReady'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varia_hy = rtb_AND_a;
    }

    /* End of Switch: '<S270>/Switch1' */
#else

    /* VariantMerge generated from: '<S7>/Variant Source1' incorporates:
     *  Inport: '<S7>/VeSRAR_b_RegenBrkInhb'
     *  SignalConversion generated from: '<S7>/Variant Source1'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varia_gx = rtb_Comparison4;

    /* VariantMerge generated from: '<S7>/Variant Source' incorporates:
     *  Inport: '<S7>/VeBRKR_b_AeCoastReady'
     *  SignalConversion generated from: '<S7>/Variant Source'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varia_hy = rtb_AND_a;

#endif

    /* End of SignalConversion generated from: '<S7>/Variant Source1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeVTXR_e_HybButtonLEDSt' */
    (void)Rte_Read_VeVTXR_e_HybButtonLEDSt_Value(&tmpRead_2);

    /* Inport: '<Root>/VeVTXR_b_PowerPanelSts' */
    (void)Rte_Read_VeVTXR_b_PowerPanelSts_Value(&tmpRead_1);

    /* Inport: '<Root>/VeDMDR_e_DrvMdArb' */
    (void)Rte_Read_VeDMDR_e_DrvMdArb_Value(&tmpRead_0);

    /* Inport: '<Root>/VeDMIR_b_DrvMdNotAvailDiag' */
    (void)Rte_Read_VeDMIR_b_DrvMdNotAvailDiag_Value(&rtb_AND_n);

    /* Inport: '<Root>/VeTMDR_e_LockLowSt' */
    (void)Rte_Read_VeTMDR_e_LockLowSt_Value(&tmpRead);

    /* Inport: '<Root>/VeRGNR_b_AeCoast_ActHCP' */
    (void)Rte_Read_VeRGNR_b_AeCoast_ActHCP_Value(&rtb_Comparison12_p);

    /* Inport: '<Root>/VeWTAR_b_AeCoastTorqDiffActv' */
    (void)Rte_Read_VeWTAR_b_AeCoastTorqDiffActv_Value(&rtb_AND_cn);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/AECR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AECC'
     */
    /* RelationalOperator: '<S80>/Comparison4' incorporates:
     *  Constant: '<S119>/Constant'
     */
    rtb_Comparison4 = (((uint32)rtb_TmpSignalConversionAtVeDMIB_e_PadLvr) ==
                       CeDMIR_e_UpShift);

    /* Outputs for Atomic SubSystem: '<S80>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S127>/EdgeRising' */
    /* Logic: '<S139>/AND' incorporates:
     *  Logic: '<S139>/OR1'
     *  UnitDelay: '<S139>/Unit Delay'
     */
    rtb_AND_a = (rtb_Comparison4 && (!AECR_ac_DW.UnitDelay_DSTATE_cu));

    /* Update for UnitDelay: '<S139>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_cu = rtb_Comparison4;

    /* End of Outputs for SubSystem: '<S127>/EdgeRising' */

    /* Switch: '<S127>/Switch1' incorporates:
     *  Constant: '<S122>/Calib'
     *  Constant: '<S123>/Calib'
     *  Constant: '<S127>/Constant Value1'
     *  Logic: '<S127>/OR'
     *  Logic: '<S127>/OR1'
     *  MinMax: '<S127>/Minimum'
     *  Sum: '<S127>/Summation'
     *  UnitDelay: '<S127>/Unit Delay'
     */
    if ((!rtb_Comparison4) || rtb_AND_a)
    {
        AECR_ac_DW.UnitDelay_DSTATE_m4 = 0.0F;
    }
    else
    {
        AECR_ac_DW.UnitDelay_DSTATE_m4 = fminf(KeAECR_t_PaddleDbncSet,
            HeAECR_t_10ms_dT + AECR_ac_DW.UnitDelay_DSTATE_m4);
    }

    /* End of Switch: '<S127>/Switch1' */

    /* Logic: '<S127>/AND' incorporates:
     *  Constant: '<S123>/Calib'
     *  RelationalOperator: '<S127>/Greater  Than'
     *  UnitDelay: '<S127>/Unit Delay'
     */
    rtb_AND_a = (rtb_Comparison4 && (AECR_ac_DW.UnitDelay_DSTATE_m4 >=
                  KeAECR_t_PaddleDbncSet));

    /* End of Outputs for SubSystem: '<S80>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S80>/EdgeRising' */
    /* Logic: '<S117>/AND' incorporates:
     *  Logic: '<S117>/OR1'
     *  UnitDelay: '<S117>/Unit Delay'
     */
    rtb_AND_b = (rtb_AND_a && (!AECR_ac_DW.UnitDelay_DSTATE_gt));

    /* Update for UnitDelay: '<S117>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_gt = rtb_AND_a;

    /* End of Outputs for SubSystem: '<S80>/EdgeRising' */

    /* Logic: '<S132>/AND2' incorporates:
     *  Logic: '<S132>/OR2'
     *  Logic: '<S132>/OR3'
     *  UnitDelay: '<S125>/Unit Delay1'
     *  UnitDelay: '<S132>/Unit Delay2'
     */
    AECR_ac_DW.UnitDelay2_DSTATE = (((AECR_ac_DW.UnitDelay2_DSTATE) || rtb_AND_b)
        && (!AECR_ac_DW.UnitDelay1_DSTATE_l));

    /* Outputs for Atomic SubSystem: '<S125>/EdgeFalling' */
    /* Logic: '<S129>/AND' incorporates:
     *  Logic: '<S129>/OR1'
     *  UnitDelay: '<S129>/Unit Delay'
     */
    rtb_AND_a = ((!rtb_Comparison4) && (AECR_ac_DW.UnitDelay_DSTATE_l));

    /* Update for UnitDelay: '<S129>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_l = rtb_Comparison4;

    /* End of Outputs for SubSystem: '<S125>/EdgeFalling' */

    /* Switch: '<S80>/Switch3' incorporates:
     *  Constant: '<S121>/Calib'
     */
    if (HeAECR_b_EnaPaddleMaxPressTime)
    {
        /* Switch: '<S80>/Switch3' incorporates:
         *  Logic: '<S125>/AND'
         *  UnitDelay: '<S131>/Unit Delay1'
         *  UnitDelay: '<S132>/Unit Delay2'
         */
        rtb_AND_b = (((AECR_ac_DW.UnitDelay2_DSTATE) && rtb_AND_a) &&
                     (AECR_ac_DW.UnitDelay1_DSTATE_d));
    }

    /* End of Switch: '<S80>/Switch3' */

    /* RelationalOperator: '<S80>/Comparison1' incorporates:
     *  Constant: '<S120>/Constant'
     */
    rtb_Comparison1 = (CeDMIR_e_DownShift == ((uint32)
                        rtb_TmpSignalConversionAtVeDMIB_e_PadLvr));

    /* Outputs for Atomic SubSystem: '<S80>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S128>/EdgeRising' */
    /* Logic: '<S140>/AND' incorporates:
     *  Logic: '<S140>/OR1'
     *  UnitDelay: '<S140>/Unit Delay'
     */
    rtb_AND_lu = (rtb_Comparison1 && (!AECR_ac_DW.UnitDelay_DSTATE_o));

    /* Update for UnitDelay: '<S140>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_o = rtb_Comparison1;

    /* End of Outputs for SubSystem: '<S128>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S126>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S126>/EdgeFalling' */
    /* Logic: '<S128>/OR1' incorporates:
     *  Logic: '<S134>/OR1'
     *  Logic: '<S135>/OR1'
     *  Logic: '<S136>/OR1'
     */
    rtb_AND_a = !rtb_Comparison1;

    /* End of Outputs for SubSystem: '<S126>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S126>/EdgeFalling1' */

    /* Switch: '<S128>/Switch1' incorporates:
     *  Constant: '<S122>/Calib'
     *  Constant: '<S123>/Calib'
     *  Constant: '<S128>/Constant Value1'
     *  Logic: '<S128>/OR'
     *  Logic: '<S128>/OR1'
     *  MinMax: '<S128>/Minimum'
     *  Sum: '<S128>/Summation'
     *  UnitDelay: '<S128>/Unit Delay'
     */
    if (rtb_AND_a || rtb_AND_lu)
    {
        AECR_ac_DW.UnitDelay_DSTATE_j = 0.0F;
    }
    else
    {
        AECR_ac_DW.UnitDelay_DSTATE_j = fminf(KeAECR_t_PaddleDbncSet,
            HeAECR_t_10ms_dT + AECR_ac_DW.UnitDelay_DSTATE_j);
    }

    /* End of Switch: '<S128>/Switch1' */

    /* Logic: '<S128>/AND' incorporates:
     *  Constant: '<S123>/Calib'
     *  RelationalOperator: '<S128>/Greater  Than'
     *  UnitDelay: '<S128>/Unit Delay'
     */
    rtb_AND_nc = (rtb_Comparison1 && (AECR_ac_DW.UnitDelay_DSTATE_j >=
                   KeAECR_t_PaddleDbncSet));

    /* End of Outputs for SubSystem: '<S80>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S80>/EdgeRising1' */
    /* Logic: '<S118>/AND' incorporates:
     *  Logic: '<S118>/OR1'
     *  UnitDelay: '<S118>/Unit Delay'
     */
    rtb_AND_lu = (rtb_AND_nc && (!AECR_ac_DW.UnitDelay_DSTATE_i));

    /* Update for UnitDelay: '<S118>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_i = rtb_AND_nc;

    /* End of Outputs for SubSystem: '<S80>/EdgeRising1' */

    /* Logic: '<S137>/AND2' incorporates:
     *  Logic: '<S137>/OR2'
     *  Logic: '<S137>/OR3'
     *  UnitDelay: '<S126>/Unit Delay1'
     *  UnitDelay: '<S137>/Unit Delay2'
     */
    AECR_ac_DW.UnitDelay2_DSTATE_m = (((AECR_ac_DW.UnitDelay2_DSTATE_m) ||
        rtb_AND_lu) && (!AECR_ac_DW.UnitDelay1_DSTATE_o));

    /* Outputs for Atomic SubSystem: '<S126>/EdgeFalling' */
    /* Logic: '<S134>/AND' incorporates:
     *  UnitDelay: '<S134>/Unit Delay'
     */
    rtb_AND_nc = (rtb_AND_a && (AECR_ac_DW.UnitDelay_DSTATE_e));

    /* Update for UnitDelay: '<S134>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_e = rtb_Comparison1;

    /* End of Outputs for SubSystem: '<S126>/EdgeFalling' */

    /* Switch: '<S80>/Switch1' incorporates:
     *  Constant: '<S121>/Calib'
     */
    if (HeAECR_b_EnaPaddleMaxPressTime)
    {
        /* Switch: '<S80>/Switch1' incorporates:
         *  Logic: '<S126>/AND'
         *  UnitDelay: '<S136>/Unit Delay1'
         *  UnitDelay: '<S137>/Unit Delay2'
         */
        rtb_AND_lu = (((AECR_ac_DW.UnitDelay2_DSTATE_m) && rtb_AND_nc) &&
                      (AECR_ac_DW.UnitDelay1_DSTATE_j));
    }

    /* End of Switch: '<S80>/Switch1' */

    /* Logic: '<S147>/Logical5' incorporates:
     *  Constant: '<S150>/Constant'
     *  Constant: '<S151>/Constant'
     *  Constant: '<S152>/Constant'
     *  RelationalOperator: '<S147>/Comparison1'
     *  RelationalOperator: '<S147>/Comparison2'
     *  RelationalOperator: '<S147>/Comparison3'
     */
    rtb_AND_nc = (((CePLTR_e_Cancel == ((uint32)
                     rtb_TmpSignalConversionAtVePLTR_e_ACCSys)) ||
                   (CePLTR_e_Enabled == ((uint32)
                     rtb_TmpSignalConversionAtVePLTR_e_ACCSys))) ||
                  (CePLTR_e_Off == ((uint32)
                    rtb_TmpSignalConversionAtVePLTR_e_ACCSys)));

    /* Logic: '<S149>/Logical3' incorporates:
     *  Constant: '<S155>/Constant'
     *  Constant: '<S157>/Constant'
     *  Constant: '<S158>/Constant'
     *  Constant: '<S159>/Constant'
     *  Constant: '<S160>/Constant'
     *  Logic: '<S149>/Logical1'
     *  Logic: '<S149>/Logical2'
     *  Logic: '<S149>/Logical5'
     *  RelationalOperator: '<S149>/Comparison1'
     *  RelationalOperator: '<S149>/Comparison2'
     *  RelationalOperator: '<S149>/Comparison4'
     *  RelationalOperator: '<S149>/Comparison5'
     *  RelationalOperator: '<S149>/Comparison6'
     */
    rtb_Logical3 = (((((uint32)rtb_TmpSignalConversionAtVeDTRR_e_OPD_St) ==
                      CeDTRR_e_Available) || (((uint32)
                       rtb_TmpSignalConversionAtVeDTRR_e_OPD_St) ==
                      CeDTRR_e_Active)) || ((((uint32)
                       rtb_TmpSignalConversionAtVeDTRR_e_OPD_St) ==
                      CeDTRR_e_Temp_Unavail) && ((((uint32)
                        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                       CeTRGR_e_TransRangePark) || (((uint32)
                        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                       CeTRGR_e_TransRangeNeutral))));

    /* Chart: '<S142>/Drive_Mode_Selection' incorporates:
     *  Constant: '<S153>/Constant'
     *  Constant: '<S154>/Calib'
     *  DataStoreRead: '<S142>/Data Store Read1'
     *  Logic: '<S145>/Logical6'
     *  Logic: '<S148>/OR'
     *  RelationalOperator: '<S148>/GreaterThan'
     *  RelationalOperator: '<S153>/Compare'
     */
    /* Gateway: AECR_MedTEB/AECC/AECC_MSG/Regen_Status/RegenMngmt/Drive_Mode_Selection */
    /* During: AECR_MedTEB/AECC/AECC_MSG/Regen_Status/RegenMngmt/Drive_Mode_Selection */
    if (((uint32)AECR_ac_DW.is_active_c66_AECR_ac) == 0U)
    {
        /* Entry: AECR_MedTEB/AECC/AECC_MSG/Regen_Status/RegenMngmt/Drive_Mode_Selection */
        AECR_ac_DW.is_active_c66_AECR_ac = 1U;

        /* Entry Internal: AECR_MedTEB/AECC/AECC_MSG/Regen_Status/RegenMngmt/Drive_Mode_Selection */
        /* Transition: '<S144>:1078' */
        if ((((uint32)AECR_ac_DW.NeAECR_e_RegenSts) == CeDMIR_e_MaxRegen) &&
                rtb_Logical3)
        {
            /* Transition: '<S144>:1134' */
            /* Transition: '<S144>:1135' */
            AECR_ac_DW.is_c66_AECR_ac = AECR_ac_IN_Max;

            /* Entry 'Max': '<S144>:1081' */
            VeAECC_e_RegenSts = CeDMIR_e_MaxRegen;
        }
        else
        {
            /* Transition: '<S144>:1104' */
            AECR_ac_DW.is_c66_AECR_ac = AECR_ac_IN_Normal;

            /* Entry 'Normal': '<S144>:1079' */
            VeAECC_e_RegenSts = CeDMIR_e_NormalRegen;
        }
    }
    else if (((sint32)AECR_ac_DW.is_c66_AECR_ac) == 1)
    {
        VeAECC_e_RegenSts = CeDMIR_e_MaxRegen;

        /* During 'Max': '<S144>:1081' */
        if ((!rtb_Logical3) || (((!rtb_AND_b) && rtb_AND_lu) && (rtb_AND_nc &&
                ((rtb_TmpSignalConversionAtVeCSVR_v_VehSpd != 0.0F) ||
                 (rtb_TmpSignalConversionAtVeBRKR_Pct_BrkT > ((float32)
                 KeAECR_i_OPDExitBrkPdlThrshld))))))
        {
            /* Transition: '<S144>:1146' */
            /* Transition: '<S144>:1150' */
            /* Transition: '<S144>:1148' */
            /* Transition: '<S144>:1126' */
            AECR_ac_DW.is_c66_AECR_ac = AECR_ac_IN_Normal;

            /* Entry 'Normal': '<S144>:1079' */
            VeAECC_e_RegenSts = CeDMIR_e_NormalRegen;
        }
    }
    else
    {
        VeAECC_e_RegenSts = CeDMIR_e_NormalRegen;

        /* During 'Normal': '<S144>:1079' */
        if (((rtb_AND_b && (!rtb_AND_lu)) && rtb_AND_nc) && rtb_Logical3)
        {
            /* Transition: '<S144>:1082' */
            AECR_ac_DW.is_c66_AECR_ac = AECR_ac_IN_Max;

            /* Entry 'Max': '<S144>:1081' */
            VeAECC_e_RegenSts = CeDMIR_e_MaxRegen;
        }
    }

    /* End of Chart: '<S142>/Drive_Mode_Selection' */

    /* DataStoreWrite: '<S142>/Data Store Write' */
    AECR_ac_DW.NeAECR_e_RegenSts = VeAECC_e_RegenSts;

    /* SignalConversion generated from: '<S81>/VariantSource' incorporates:
     *  Constant: '<S143>/Constant'
     */
#if Rte_SysCon_Variant_AECR_3

    /* VariantMerge generated from: '<S81>/VariantSource' */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varia_ad = VeAECC_e_RegenSts;

#else

    AECR_ac_B.Constant = CeDMIR_e_NormalRegen;

    /* VariantMerge generated from: '<S81>/VariantSource' incorporates:
     *  Constant: '<S143>/Constant'
     *  SignalConversion generated from: '<S81>/VariantSource'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varia_ad = AECR_ac_B.Constant;

#endif

    /* End of SignalConversion generated from: '<S81>/VariantSource' */

    /* Switch: '<S172>/Switch1' incorporates:
     *  Constant: '<S213>/Calib'
     *  Inport: '<Root>/VeASLR_e_HDC_Status'
     *  Inport: '<Root>/VeCCTR_b_ACCTrqEnabled_BSM'
     *  Inport: '<Root>/VeCCTR_b_CcEngaged'
     *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
     *  Inport: '<Root>/VeHMIR_b_DriveReady'
     *  Inport: '<Root>/VePLTR_b_Hill_Des_Stat_Prx'
     */
    if (KeAECR_b_eCoastEnaOvrrd)
    {
        /* Switch: '<S172>/Switch1' incorporates:
         *  Constant: '<S214>/Calib'
         */
        VeAECC_b_eCoastEnbl = KeAECR_b_eCoastEnaVal;
    }
    else
    {
        (void)Rte_Read_VePLTR_b_Hill_Des_Stat_Prx_Value(&rtb_Logical3_e);
        (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value(&tmpRead_6);
        (void)Rte_Read_VeASLR_e_HDC_Status_Value(&tmpRead_5);
        (void)Rte_Read_VeCCTR_b_ACCTrqEnabled_BSM_Value(&rtb_LogicalOperator);
        (void)Rte_Read_VeCCTR_b_CcEngaged_Value(&rtb_LogicalOperator_j);
        (void)Rte_Read_VeHMIR_b_DriveReady_Value(&rtb_SignalConversion_b);

        /* Outputs for Function Call SubSystem: '<S1>/AECI_Process' */
        /* Switch: '<S172>/Switch1' incorporates:
         *  Constant: '<S211>/Constant'
         *  Constant: '<S212>/Constant'
         *  Inport: '<Root>/VeASLR_e_HDC_Status'
         *  Inport: '<Root>/VeCCTR_b_ACCTrqEnabled_BSM'
         *  Inport: '<Root>/VeCCTR_b_CcEngaged'
         *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
         *  Inport: '<Root>/VeHMIR_b_DriveReady'
         *  Inport: '<Root>/VePLTR_b_Hill_Des_Stat_Prx'
         *  Inport: '<S7>/VeRGNR_b_AeCoast_ActHCP'
         *  Logic: '<S172>/Logical'
         *  Logic: '<S172>/Logical1'
         *  Logic: '<S172>/Logical2'
         *  Logic: '<S172>/Logical3'
         *  Logic: '<S172>/Logical5'
         *  Logic: '<S172>/Logical6'
         *  RelationalOperator: '<S172>/Comparison1'
         *  RelationalOperator: '<S172>/Comparison4'
         */
        VeAECC_b_eCoastEnbl = (((((rtb_SignalConversion_b &&
            (VeAECI_b_AeCoast_Act)) && rtb_Comparison12_p) &&
            ((!rtb_LogicalOperator_j) && (!rtb_LogicalOperator))) && ((((uint32)
            tmpRead_5) != CeASLR_e_HDC_ACT) || (!rtb_Logical3_e))) && (((uint32)
            tmpRead_6) != CeDMDR_e_No_Turtle_Mode));

        /* End of Outputs for SubSystem: '<S1>/AECI_Process' */
    }

    /* End of Switch: '<S172>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeRGNR_b_AeCoast_TempUnv' */
    (void)Rte_Read_VeRGNR_b_AeCoast_TempUnv_Value(&tmpRead_4);

    /* Inport: '<Root>/VeRGNR_b_AeCoast_Faulted' */
    (void)Rte_Read_VeRGNR_b_AeCoast_Faulted_Value(&tmpRead_3);

    /* Inport: '<Root>/VeRGNR_b_AeCoast_Avail' */
    (void)Rte_Read_VeRGNR_b_AeCoast_Avail_Value(&rtb_Logical);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/AECR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AECC'
     */
    /* Logic: '<S74>/OR' incorporates:
     *  Constant: '<S107>/Constant'
     *  Constant: '<S108>/Constant'
     *  Logic: '<S74>/Logical4'
     *  RelationalOperator: '<S74>/Comparison4'
     *  RelationalOperator: '<S74>/Comparison5'
     */
    VeAECC_b_AecoastFaultCnd = ((tmpRead_3 || ((((uint32)
        VeAECI_e_BrkPedalDscrtInpt) == CeBRKR_e_UNKNOWN) || (((uint32)
        VeAECI_e_BrkPedalDscrtInpt) == CeBRKR_e_BrkSts_SNA))) ||
        rtb_TmpSignalConversionAtVeCSVR_b_VehSpd);

    /* Logic: '<S74>/OR3' incorporates:
     *  Logic: '<S175>/Logical1'
     *  Switch: '<S175>/Switch2'
     *  Switch: '<S175>/Switch3'
     *  Switch: '<S175>/Switch4'
     */
    rtb_LogicalOperator = !AECR_ac_B.VariantMerge_For_Variant_Source_Varia_hy;

    /* Logic: '<S74>/OR1' incorporates:
     *  Logic: '<S74>/OR3'
     */
    VeAECC_b_AecoastTmpUnvCnd = (tmpRead_4 || rtb_LogicalOperator);

    /* Logic: '<S188>/NOT' incorporates:
     *  Constant: '<S95>/Constant'
     *  Constant: '<S96>/Constant'
     *  Logic: '<S91>/Logical3'
     *  Logic: '<S91>/Logical4'
     *  RelationalOperator: '<S91>/Comparison4'
     *  RelationalOperator: '<S91>/Comparison5'
     */
    rtb_AND_nc = ((((AECR_ac_B.VariantMerge_For_Variant_Source_Varia_hy) &&
                    (((uint32)VeAECI_e_BrkPedalDscrtInpt) != CeBRKR_e_UNKNOWN)) &&
                   (((uint32)VeAECI_e_BrkPedalDscrtInpt) != CeBRKR_e_BrkSts_SNA))
                  && (!rtb_TmpSignalConversionAtVeCSVR_b_VehSpd));

    /* UnitDelay: '<S37>/Unit Delay' incorporates:
     *  Constant: '<S92>/Calib'
     *  Constant: '<S93>/Calib'
     *  Constant: '<S94>/Calib'
     *  Logic: '<S90>/OR'
     *  RelationalOperator: '<S90>/Comparison2'
     *  RelationalOperator: '<S90>/Comparison3'
     *  RelationalOperator: '<S90>/Comparison6'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_VehSpd =
        (((rtb_TmpSignalConversionAtVeDMIR_e_TellTa ==
           KeAECR_e_AeCoastingDesiredStateA) ||
          (rtb_TmpSignalConversionAtVeDMIR_e_TellTa ==
           KeAECR_e_AeCoastingDesiredStateB)) ||
         (rtb_TmpSignalConversionAtVeDMIR_e_TellTa ==
          KeAECR_e_AeCoastingDesiredStateC));

    /* RelationalOperator: '<S74>/Comparison1' */
    tmpRead_4 = !rtb_TmpSignalConversionAtVeCSVR_b_VehSpd;

    /* Logic: '<S74>/OR2' */
    VeAECC_b_AecoastAvailCnd = (((rtb_AND_nc && tmpRead_4) &&
        (VeAECI_b_AeCoast_Act)) && rtb_Logical);

    /* Logic: '<S72>/Logical' */
    rtb_Logical = (((VeAECI_b_AeCoast_Act) && rtb_AND_nc) &&
                   rtb_TmpSignalConversionAtVeCSVR_b_VehSpd);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AECI_Process'
     */
    /* Logic: '<S74>/Logical6' incorporates:
     *  Inport: '<S7>/VeRGNR_b_AeCoast_ActHCP'
     */
    VeAECC_b_AecoastActiveCnd = (rtb_Logical && rtb_Comparison12_p);

    /* If: '<S74>/If' */
    if (VeAECC_b_AecoastFaultCnd)
    {
        /* Outputs for IfAction SubSystem: '<S74>/FaultSubsystem' incorporates:
         *  ActionPort: '<S109>/Action Port'
         */
        /* Merge: '<S74>/Merge' incorporates:
         *  Constant: '<S114>/Constant'
         *  SignalConversion generated from: '<S109>/Faulted'
         */
        rtb_Merge_o = CeAECR_e_AecoastingFaulted;

        /* End of Outputs for SubSystem: '<S74>/FaultSubsystem' */
    }
    else if (VeAECC_b_AecoastTmpUnvCnd)
    {
        /* Outputs for IfAction SubSystem: '<S74>/TempUnavailableSubsystem' incorporates:
         *  ActionPort: '<S110>/Action Port'
         */
        /* Merge: '<S74>/Merge' incorporates:
         *  Constant: '<S115>/Constant'
         *  SignalConversion generated from: '<S110>/TempUnavailable'
         */
        rtb_Merge_o = CeAECR_e_AecoastingTemporarily_Unavailable;

        /* End of Outputs for SubSystem: '<S74>/TempUnavailableSubsystem' */
    }
    else if (VeAECC_b_AecoastAvailCnd)
    {
        /* Outputs for IfAction SubSystem: '<S74>/AvailableSubsystem' incorporates:
         *  ActionPort: '<S105>/Action Port'
         */
        /* Merge: '<S74>/Merge' incorporates:
         *  Constant: '<S113>/Constant'
         *  SignalConversion generated from: '<S105>/Available'
         */
        rtb_Merge_o = CeAECR_e_AecoastingAvailable;

        /* End of Outputs for SubSystem: '<S74>/AvailableSubsystem' */
    }
    else if (VeAECC_b_AecoastActiveCnd)
    {
        /* Outputs for IfAction SubSystem: '<S74>/ActiveSubsystem' incorporates:
         *  ActionPort: '<S104>/Action Port'
         */
        /* Merge: '<S74>/Merge' incorporates:
         *  Constant: '<S112>/Constant'
         *  SignalConversion generated from: '<S104>/Active'
         */
        rtb_Merge_o = CeAECR_e_AecoastingActive;

        /* End of Outputs for SubSystem: '<S74>/ActiveSubsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S74>/TempUnavailableSubsystem1' incorporates:
         *  ActionPort: '<S111>/Action Port'
         */
        /* Merge: '<S74>/Merge' incorporates:
         *  Constant: '<S116>/Constant'
         *  SignalConversion generated from: '<S111>/Default'
         */
        rtb_Merge_o = CeAECR_e_AecoastingTemporarily_Unavailable;

        /* End of Outputs for SubSystem: '<S74>/TempUnavailableSubsystem1' */
    }

    /* End of If: '<S74>/If' */

    /* Outputs for Atomic SubSystem: '<S19>/MaxRegenDsrd' */
    /* Logic: '<S71>/Logical2' incorporates:
     *  Logic: '<S39>/Logical7'
     */
    tmpRead_3 = !AECR_ac_B.VariantMerge_For_Variant_Source_Varia_gx;

    /* End of Outputs for SubSystem: '<S19>/MaxRegenDsrd' */

    /* Logic: '<S71>/Logical3' incorporates:
     *  Constant: '<S85>/Constant'
     *  Constant: '<S88>/Calib'
     *  Constant: '<S89>/Calib'
     *  Logic: '<S71>/Logical1'
     *  Logic: '<S71>/Logical2'
     *  RelationalOperator: '<S71>/Equal8'
     */
    rtb_Logical3_e = (((((AECR_ac_B.VariantMerge_For_Variant_Source_Varia_hy) &&
                         tmpRead_3) && (HeAECR_b_P1P2p5Equipped_C)) && (((uint32)
                         rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                        CeTRGR_e_TransRangeDrive)) ||
                      (KeAECR_b_AeCoastStatInitNF));

    /* Switch: '<S74>/Switch2' incorporates:
     *  Constant: '<S78>/Calib'
     *  Switch: '<S71>/Switch'
     */
    if (KeAECR_b_BEVaeCoastRampStEnbl)
    {
        /* Switch: '<S74>/Switch2' incorporates:
         *  Merge: '<S74>/Merge'
         */
        rtb_Switch2_p = rtb_Merge_o;
    }
    else if (rtb_Logical3_e)
    {
        /* Switch: '<S71>/Switch' incorporates:
         *  Constant: '<S86>/Constant'
         *  Switch: '<S74>/Switch2'
         */
        rtb_Switch2_p = CeAECR_e_AecoastingActive;
    }
    else
    {
        /* Switch: '<S74>/Switch2' incorporates:
         *  Constant: '<S87>/Constant'
         *  Switch: '<S71>/Switch'
         */
        rtb_Switch2_p = CeAECR_e_AecoastingTemporarily_Unavailable;
    }

    /* End of Switch: '<S74>/Switch2' */

    /* Switch: '<S175>/Switch2' incorporates:
     *  Constant: '<S218>/Calib'
     *  Constant: '<S219>/Calib'
     *  Inport: '<Root>/VeBRKR_b_BrkPdlFlt'
     *  Switch: '<S175>/Switch3'
     */
    if (KeAECR_b_eCoastFAOvrrd)
    {
        /* Switch: '<S175>/Switch2' incorporates:
         *  Constant: '<S220>/Calib'
         */
        VeAECC_b_eCoastFA = KeAECR_b_eCoastFAVal;
    }
    else if (KeAECR_b_AeCoastStsFAOvrrd)
    {
        (void)Rte_Read_VeBRKR_b_BrkPdlFlt_Value(&rtb_OR1_h);

        /* Switch: '<S175>/Switch4' incorporates:
         *  Constant: '<S175>/FALSE Constant1'
         *  Constant: '<S217>/Calib'
         *  Inport: '<Root>/VeBRKR_b_BrkPdlFlt'
         *  Switch: '<S175>/Switch3'
         */
        if (KeAECR_b_AeCoastReadyDisabled)
        {
            rtb_LogicalOperator = false;
        }

        /* Switch: '<S175>/Switch2' incorporates:
         *  Constant: '<S215>/Constant'
         *  Logic: '<S175>/Logical'
         *  RelationalOperator: '<S175>/Comparison1'
         *  Switch: '<S175>/Switch3'
         */
        VeAECC_b_eCoastFA = ((rtb_LogicalOperator || rtb_OR1_h) || (((uint32)
                               rtb_TmpSignalConversionAtVeDMIB_e_PadLvr) ==
                              CeDMIR_e_Error));
    }
    else
    {
        /* Switch: '<S175>/Switch2' incorporates:
         *  Constant: '<S216>/Constant'
         *  RelationalOperator: '<S175>/Comparison2'
         *  Switch: '<S175>/Switch3'
         *  Switch: '<S74>/Switch2'
         */
        VeAECC_b_eCoastFA = (((uint32)rtb_Switch2_p) ==
                             CeAECR_e_AecoastingFaulted);
    }

    /* Logic: '<S265>/OR' incorporates:
     *  Constant: '<S266>/Constant'
     *  Constant: '<S267>/Constant'
     *  RelationalOperator: '<S265>/Comparison4'
     *  RelationalOperator: '<S265>/Comparison5'
     */
    rtb_Logical3 = ((CeTIMR_e_RaceMode_Active == ((uint32)
                      rtb_TmpSignalConversionAtVeTIMR_e_RaceMo)) ||
                    (CeTIMR_e_RaceMode_On == ((uint32)
                      rtb_TmpSignalConversionAtVeTIMR_e_RaceMo)));

    /* Selector: '<S223>/Selector3' incorporates:
     *  Constant: '<S262>/Calib'
     *  SignalConversion generated from: '<S1>/VeTMDR_e_PropulsionMd'
     */
    rtb_eCoastThreshold_TrrnMd = KaAECR_e_EcoastTrrnThrshld
        [(rtb_TmpSignalConversionAtVeTMDR_e_Propul)];

    /* Switch: '<S223>/Switch2' incorporates:
     *  Constant: '<S261>/Constant'
     *  RelationalOperator: '<S223>/Comparison6'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDTRR_e_OPD_St) == CeDTRR_e_Faulted)
    {
        /* Switch: '<S223>/Switch2' incorporates:
         *  Constant: '<S263>/Calib'
         */
        rtb_Switch2 = KeAECR_i_EcoastOPDThrshld;
    }
    else
    {
        /* Switch: '<S223>/Switch2' */
        rtb_Switch2 = rtb_eCoastThreshold_TrrnMd;
    }

    /* End of Switch: '<S223>/Switch2' */

    /* Switch: '<S223>/Switch1' incorporates:
     *  Constant: '<S264>/Calib'
     */
    if (rtb_Logical3)
    {
        rtb_OR_d_0 = KeAECR_i_EcoastRaceMdThrshld;
    }
    else
    {
        rtb_OR_d_0 = rtb_Switch2;
    }

    /* End of Switch: '<S223>/Switch1' */

    /* MinMax: '<S223>/Min' */
    if (rtb_OR_d_0 < rtb_Switch2)
    {
        rtb_Switch2 = rtb_OR_d_0;
    }

    if (rtb_Switch2 < rtb_eCoastThreshold_TrrnMd)
    {
        /* MinMax: '<S223>/Min' */
        rtb_eCoastThreshold_TrrnMd = rtb_Switch2;
    }

    /* End of MinMax: '<S223>/Min' */

    /* DataStoreRead: '<S84>/Data Store Read1' */
    rtb_DataStoreRead1 = AECR_ac_DW.NeAECR_e_eCoastDefaultAuto;

    /* Outputs for Atomic SubSystem: '<S246>/EdgeRising' */
    /* Logic: '<S257>/OR1' incorporates:
     *  UnitDelay: '<S257>/Unit Delay'
     */
    rtb_OR1_h = !AECR_ac_DW.UnitDelay_DSTATE_g;

    /* Update for UnitDelay: '<S257>/Unit Delay' incorporates:
     *  Constant: '<S246>/FALSE Constant'
     */
    AECR_ac_DW.UnitDelay_DSTATE_g = true;

    /* End of Outputs for SubSystem: '<S246>/EdgeRising' */

    /* Logic: '<S246>/Logical Operator' incorporates:
     *  Constant: '<S258>/Constant'
     *  Constant: '<S259>/Constant'
     *  RelationalOperator: '<S246>/Comparison7'
     *  RelationalOperator: '<S246>/Comparison8'
     *  Selector: '<S223>/Selector3'
     *  SignalConversion generated from: '<S1>/VeTMDR_e_PropulsionMd'
     */
    rtb_LogicalOperator = ((((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul)
                            != CeTMDR_e_Custom) && (((uint32)
        AECR_ac_DW.IntegerDelay_DSTATE) == CeTMDR_e_Custom));

    /* Outputs for Triggered SubSystem: '<S246>/If Action Subsystem2' incorporates:
     *  TriggerPort: '<S260>/Trigger'
     */
    if (rtb_LogicalOperator && (((sint32)
            AECR_ac_PrevZCX.IfActionSubsystem2_Trig_ZCE) != 1))
    {
        /* Inport: '<S260>/eCoastOld' incorporates:
         *  Delay: '<S84>/Integer Delay'
         */
        AECR_ac_B.eCoastOld = AECR_ac_DW.IntegerDelay_DSTATE_j;

        /* DataStoreWrite: '<S260>/Data Store Write' incorporates:
         *  Inport: '<S260>/eCoastOld'
         */
        AECR_ac_DW.NeAECR_e_eCoastDefaultCustom = AECR_ac_B.eCoastOld;
    }

    AECR_ac_PrevZCX.IfActionSubsystem2_Trig_ZCE = rtb_LogicalOperator ?
        ((ZCSigState)1) : ((ZCSigState)0);

    /* End of Outputs for SubSystem: '<S246>/If Action Subsystem2' */

    /* Outputs for Atomic SubSystem: '<S245>/EdgeRising' */
    /* Logic: '<S253>/OR1' incorporates:
     *  UnitDelay: '<S253>/Unit Delay'
     */
    rtb_LogicalOperator = !AECR_ac_DW.UnitDelay_DSTATE_m0;

    /* Update for UnitDelay: '<S253>/Unit Delay' incorporates:
     *  Constant: '<S245>/FALSE Constant'
     */
    AECR_ac_DW.UnitDelay_DSTATE_m0 = true;

    /* End of Outputs for SubSystem: '<S245>/EdgeRising' */

    /* Logic: '<S245>/Logical Operator' incorporates:
     *  Constant: '<S254>/Constant'
     *  Constant: '<S255>/Constant'
     *  RelationalOperator: '<S245>/Comparison7'
     *  RelationalOperator: '<S245>/Comparison8'
     *  Selector: '<S223>/Selector3'
     *  SignalConversion generated from: '<S1>/VeTMDR_e_PropulsionMd'
     */
    rtb_LogicalOperator_j = ((((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul)
        != CeTMDR_e_Auto) && (((uint32)AECR_ac_DW.IntegerDelay_DSTATE) ==
        CeTMDR_e_Auto));

    /* Outputs for Triggered SubSystem: '<S245>/If Action Subsystem2' incorporates:
     *  TriggerPort: '<S256>/Trigger'
     */
    if (rtb_LogicalOperator_j && (((sint32)
            AECR_ac_PrevZCX.IfActionSubsystem2_Trig_ZCE_d) != 1))
    {
        /* Inport: '<S256>/eCoastOld' incorporates:
         *  Delay: '<S84>/Integer Delay'
         */
        AECR_ac_B.eCoastOld_d = AECR_ac_DW.IntegerDelay_DSTATE_j;

        /* DataStoreWrite: '<S256>/Data Store Write' incorporates:
         *  Inport: '<S256>/eCoastOld'
         */
        AECR_ac_DW.NeAECR_e_eCoastDefaultAuto = AECR_ac_B.eCoastOld_d;
    }

    AECR_ac_PrevZCX.IfActionSubsystem2_Trig_ZCE_d = rtb_LogicalOperator_j ?
        ((ZCSigState)1) : ((ZCSigState)0);

    /* End of Outputs for SubSystem: '<S245>/If Action Subsystem2' */

    /* If: '<S222>/If' incorporates:
     *  Constant: '<S232>/Constant'
     *  Constant: '<S233>/Constant'
     *  Constant: '<S234>/Constant'
     *  Constant: '<S235>/Constant'
     *  Constant: '<S236>/Constant'
     *  Constant: '<S237>/Constant'
     *  Constant: '<S238>/Constant'
     *  Constant: '<S239>/Constant'
     *  Constant: '<S240>/Constant'
     *  Logic: '<S222>/Logical1'
     *  Logic: '<S222>/Logical2'
     *  RelationalOperator: '<S222>/Comparison1'
     *  RelationalOperator: '<S222>/Comparison2'
     *  RelationalOperator: '<S222>/Comparison3'
     *  RelationalOperator: '<S222>/Comparison4'
     *  RelationalOperator: '<S222>/Comparison5'
     *  RelationalOperator: '<S222>/Comparison6'
     *  RelationalOperator: '<S222>/Comparison7'
     *  RelationalOperator: '<S222>/Comparison8'
     *  RelationalOperator: '<S222>/Comparison9'
     *  Selector: '<S223>/Selector3'
     *  SignalConversion generated from: '<S1>/VeTMDR_e_PropulsionMd'
     */
    if ((((CeTMDR_e_ECO == ((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul)) ||
          (CeTMDR_e_Snow == ((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul)))
         || (CeTMDR_e_Valet == ((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul)))
        || (CeTIMR_e_RaceMode_Off != ((uint32)
            rtb_TmpSignalConversionAtVeTIMR_e_RaceMo)))
    {
        /* Outputs for IfAction SubSystem: '<S222>/If Action Subsystem' incorporates:
         *  ActionPort: '<S241>/Action Port'
         */
        /* Merge: '<S222>/Merge' incorporates:
         *  Constant: '<S248>/Calib'
         *  DataTypeConversion: '<S247>/DataTypeConversion'
         */
        AECR_ac_DW.IntegerDelay_DSTATE_j = (TeDMIR_e_eCoastSel)
            KeAECR_i_eCoastLevelMaxEco;

        /* End of Outputs for SubSystem: '<S222>/If Action Subsystem' */
    }
    else if (CeTMDR_e_Sport == ((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul))
    {
        /* Outputs for IfAction SubSystem: '<S222>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S242>/Action Port'
         */
        /* Merge: '<S222>/Merge' incorporates:
         *  Constant: '<S250>/Calib'
         *  DataTypeConversion: '<S249>/DataTypeConversion'
         */
        AECR_ac_DW.IntegerDelay_DSTATE_j = (TeDMIR_e_eCoastSel)
            KeAECR_i_eCoastLevelDefault;

        /* End of Outputs for SubSystem: '<S222>/If Action Subsystem1' */
    }
    else if ((CeTMDR_e_Drag == ((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul))
             || (CeTMDR_e_Track == ((uint32)
               rtb_TmpSignalConversionAtVeTMDR_e_Propul)))
    {
        /* Outputs for IfAction SubSystem: '<S222>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S243>/Action Port'
         */
        /* Merge: '<S222>/Merge' incorporates:
         *  Constant: '<S252>/Calib'
         *  DataTypeConversion: '<S251>/DataTypeConversion'
         */
        AECR_ac_DW.IntegerDelay_DSTATE_j = (TeDMIR_e_eCoastSel)
            KeAECR_i_eCoastLevelMax;

        /* End of Outputs for SubSystem: '<S222>/If Action Subsystem2' */
    }
    else if (CeTMDR_e_Auto == ((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul))
    {
        /* Outputs for Atomic SubSystem: '<S245>/EdgeRising' */
        /* Switch: '<S245>/Switch1' incorporates:
         *  Logic: '<S253>/AND'
         */
        if (rtb_LogicalOperator)
        {
            /* Outputs for IfAction SubSystem: '<S222>/Auto' incorporates:
             *  ActionPort: '<S230>/Action Port'
             */
            /* Merge: '<S222>/Merge' incorporates:
             *  DataStoreRead: '<S245>/Data Store Read'
             *  Inport: '<S230>/eCoastAuto'
             */
            AECR_ac_DW.IntegerDelay_DSTATE_j =
                AECR_ac_DW.NeAECR_e_eCoastDefaultAuto;

            /* End of Outputs for SubSystem: '<S222>/Auto' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S222>/Auto' incorporates:
             *  ActionPort: '<S230>/Action Port'
             */
            /* Merge: '<S222>/Merge' incorporates:
             *  Inport: '<S230>/eCoastAuto'
             *  Inport: '<S256>/eCoastOld'
             */
            AECR_ac_DW.IntegerDelay_DSTATE_j = AECR_ac_B.eCoastOld_d;

            /* End of Outputs for SubSystem: '<S222>/Auto' */
        }

        /* End of Switch: '<S245>/Switch1' */
        /* End of Outputs for SubSystem: '<S245>/EdgeRising' */
    }
    else
    {
        if (CeTMDR_e_Custom == ((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul))
        {
            /* Outputs for Atomic SubSystem: '<S246>/EdgeRising' */
            /* Switch: '<S246>/Switch1' incorporates:
             *  Logic: '<S257>/AND'
             */
            if (rtb_OR1_h)
            {
                /* Outputs for IfAction SubSystem: '<S222>/Auto1' incorporates:
                 *  ActionPort: '<S231>/Action Port'
                 */
                /* Merge: '<S222>/Merge' incorporates:
                 *  DataStoreRead: '<S246>/Data Store Read'
                 *  Inport: '<S231>/eCoastCustom'
                 */
                AECR_ac_DW.IntegerDelay_DSTATE_j =
                    AECR_ac_DW.NeAECR_e_eCoastDefaultCustom;

                /* End of Outputs for SubSystem: '<S222>/Auto1' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S222>/Auto1' incorporates:
                 *  ActionPort: '<S231>/Action Port'
                 */
                /* Merge: '<S222>/Merge' incorporates:
                 *  Inport: '<S231>/eCoastCustom'
                 *  Inport: '<S260>/eCoastOld'
                 */
                AECR_ac_DW.IntegerDelay_DSTATE_j = AECR_ac_B.eCoastOld;

                /* End of Outputs for SubSystem: '<S222>/Auto1' */
            }

            /* End of Switch: '<S246>/Switch1' */
            /* End of Outputs for SubSystem: '<S246>/EdgeRising' */
        }
    }

    /* End of If: '<S222>/If' */

    /* Logic: '<S184>/Logical5' incorporates:
     *  Constant: '<S190>/Constant'
     *  Constant: '<S191>/Constant'
     *  Constant: '<S192>/Constant'
     *  RelationalOperator: '<S184>/Comparison1'
     *  RelationalOperator: '<S184>/Comparison2'
     *  RelationalOperator: '<S184>/Comparison3'
     */
    rtb_Logical5_j = (((CePLTR_e_Cancel == ((uint32)
                         rtb_TmpSignalConversionAtVePLTR_e_ACCSys)) ||
                       (CePLTR_e_Enabled == ((uint32)
                         rtb_TmpSignalConversionAtVePLTR_e_ACCSys))) ||
                      (CePLTR_e_Off == ((uint32)
                        rtb_TmpSignalConversionAtVePLTR_e_ACCSys)));

    /* Logic: '<S188>/NOT' */
    rtb_AND_nc = !rtb_Logical3;

    /* RelationalOperator: '<S188>/Equal' incorporates:
     *  Chart: '<S84>/eCoasting_paddles'
     *  DataStoreRead: '<S84>/Data Store Read4'
     */
    rtb_UnitDelay_m_tmp = AECR_ac_DW.NeAECR_e_eCoastLvlLatched;

    /* UnitDelay: '<S35>/Unit Delay' incorporates:
     *  Constant: '<S193>/Constant'
     *  RelationalOperator: '<S188>/Equal'
     */
    rtb_LogicalOperator_j = (((uint32)rtb_UnitDelay_m_tmp) != CeDMIR_e_Level3);

    /* SignalConversion: '<S11>/SignalConversion' incorporates:
     *  Abs: '<S188>/Abs'
     *  Constant: '<S195>/Calib'
     *  RelationalOperator: '<S188>/GreaterThan'
     */
    rtb_SignalConversion_b = (fabsf(rtb_TmpSignalConversionAtVeCSVR_v_VehSpd) >
        ((float32)KeAECR_v_OPDExitSpeedThrshld));

    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S194>/Calib'
     *  RelationalOperator: '<S188>/GreaterThan1'
     */
    rtb_LogicalOperator = (rtb_TmpSignalConversionAtVeBRKR_Pct_BrkT > ((float32)
                            KeAECR_i_OPDExitBrkPdlThrshld));

    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S198>/Constant'
     *  Constant: '<S208>/Constant'
     *  Logic: '<S189>/Logical2'
     *  RelationalOperator: '<S189>/Comparison8'
     *  RelationalOperator: '<S189>/Comparison9'
     *  Selector: '<S223>/Selector3'
     *  SignalConversion generated from: '<S1>/VeTMDR_e_PropulsionMd'
     */
    rtb_OR1_h = ((CeTMDR_e_Custom == ((uint32)
                   rtb_TmpSignalConversionAtVeTMDR_e_Propul)) || (CeTMDR_e_Auto ==
                  ((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul)));

    /* Switch: '<S196>/Switch1' incorporates:
     *  Constant: '<S209>/Constant'
     *  Constant: '<S210>/Constant'
     *  Logic: '<S196>/OR2'
     *  Logic: '<S196>/OR3'
     *  RelationalOperator: '<S196>/Comparison1'
     *  RelationalOperator: '<S196>/Comparison2'
     */
    if (((((uint32)rtb_TmpSignalConversionAtVeDMII_e_PddlMd) != CeDMIR_e_En) &&
            (((uint32)rtb_TmpSignalConversionAtVeDMII_e_PddlMd) != CeDMIR_e_Dis))
        || (!rtb_OR1_h))
    {
        /* Switch: '<S196>/Switch1' incorporates:
         *  DataStoreRead: '<S189>/Data Store Read'
         */
        rtb_TmpSignalConversionAtVeDMII_e_PddlMd =
            AECR_ac_DW.NeAECR_e_PddlMdStatus;
    }

    /* End of Switch: '<S196>/Switch1' */

    /* Switch: '<S189>/Switch3' incorporates:
     *  Constant: '<S200>/Constant'
     *  Constant: '<S202>/Constant'
     *  Constant: '<S204>/Constant'
     *  Constant: '<S205>/Constant'
     *  Constant: '<S206>/Constant'
     *  Constant: '<S207>/Constant'
     *  Logic: '<S189>/Logical1'
     *  Logic: '<S189>/Logical4'
     *  RelationalOperator: '<S189>/Comparison1'
     *  RelationalOperator: '<S189>/Comparison2'
     *  RelationalOperator: '<S189>/Comparison3'
     *  RelationalOperator: '<S189>/Comparison4'
     *  RelationalOperator: '<S189>/Comparison6'
     *  RelationalOperator: '<S189>/Comparison7'
     *  Selector: '<S223>/Selector3'
     *  SignalConversion generated from: '<S1>/VeTMDR_e_PropulsionMd'
     *  Switch: '<S189>/Switch1'
     *  Switch: '<S189>/Switch2'
     */
    if (rtb_OR1_h)
    {
        /* Switch: '<S189>/Switch3' incorporates:
         *  Switch: '<S196>/Switch1'
         */
        Switch3 = rtb_TmpSignalConversionAtVeDMII_e_PddlMd;
    }
    else if (((CeTMDR_e_Sport == ((uint32)
                rtb_TmpSignalConversionAtVeTMDR_e_Propul)) || (CeTMDR_e_Track ==
               ((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul))) ||
             (CeTMDR_e_Drag == ((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul)))
    {
        /* Switch: '<S189>/Switch2' incorporates:
         *  Constant: '<S197>/Constant'
         *  Switch: '<S189>/Switch3'
         */
        Switch3 = CeDMIR_e_En;
    }
    else if ((((CeTMDR_e_ECO == ((uint32)
                 rtb_TmpSignalConversionAtVeTMDR_e_Propul)) || (CeTMDR_e_Valet ==
                ((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul))) ||
              (CeTMDR_e_Snow == ((uint32)
                rtb_TmpSignalConversionAtVeTMDR_e_Propul))) || rtb_Logical3)
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S199>/Constant'
         *  Switch: '<S189>/Switch2'
         *  Switch: '<S189>/Switch3'
         */
        Switch3 = CeDMIR_e_Dis;
    }
    else
    {
        /* Switch: '<S189>/Switch3' incorporates:
         *  Constant: '<S201>/Constant'
         *  Switch: '<S189>/Switch1'
         *  Switch: '<S189>/Switch2'
         */
        Switch3 = CeDMIR_e_None;
    }

    /* End of Switch: '<S189>/Switch3' */

    /* Chart: '<S84>/eCoasting_paddles' incorporates:
     *  Constant: '<S174>/Constant'
     *  Constant: '<S176>/Calib'
     *  Constant: '<S177>/Calib'
     *  Constant: '<S178>/Calib'
     *  Constant: '<S180>/Calib'
     *  Constant: '<S181>/Calib'
     *  DataStoreRead: '<S84>/Data Store Read'
     *  DataStoreRead: '<S84>/Data Store Read1'
     *  DataStoreRead: '<S84>/Data Store Read3'
     *  Logic: '<S171>/Logical4'
     *  Logic: '<S188>/AND2'
     *  Logic: '<S188>/AND3'
     *  Logic: '<S84>/Logical5'
     *  Merge: '<S222>/Merge'
     *  RelationalOperator: '<S84>/Comparison5'
     *  Selector: '<S223>/Selector3'
     *  SignalConversion generated from: '<S1>/VeTMDR_e_PropulsionMd'
     */
    /* Gateway: AECR_MedTEB/AECC/AECC_MSG/eCoasting_Paddles_Signal_Interpretation/eCoasting_paddles */
    /* During: AECR_MedTEB/AECC/AECC_MSG/eCoasting_Paddles_Signal_Interpretation/eCoasting_paddles */
    if (((uint32)AECR_ac_DW.is_active_c38_AECR_ac) == 0U)
    {
        /* Entry: AECR_MedTEB/AECC/AECC_MSG/eCoasting_Paddles_Signal_Interpretation/eCoasting_paddles */
        AECR_ac_DW.is_active_c38_AECR_ac = 1U;

        /* Entry Internal: AECR_MedTEB/AECC/AECC_MSG/eCoasting_Paddles_Signal_Interpretation/eCoasting_paddles */
        /* Entry Internal 'eCoastingPopupMessage': '<S183>:1277' */
        /* Transition: '<S183>:1296' */
        AECR_ac_DW.FaultNew = 1.0;
        AECR_ac_DW.FlagPopupMsg2 = 0.0;
        AECR_ac_DW.is_eCoastingPopupMessage = AECR_ac_IN_eCoastPopupMsg0;

        /* Entry 'eCoastPopupMsg0': '<S183>:1291' */
        LeAECR_e_eCoastPopUpMsg = 0;

        /* Entry Internal 'eCoastingLevelSelection': '<S183>:1276' */
        /* Transition: '<S183>:576' */
        if (VeAECC_b_eCoastFA)
        {
            /* Transition: '<S183>:996' */
            /* Transition: '<S183>:1215' */
            if (!KeAECR_b_ConfigFALevel1)
            {
                /* Transition: '<S183>:1147' */
                AECR_ac_B.LeAECR_i_CurrentSel = CeDMIR_e_Level0;
                AECR_ac_B.LeAECR_e_TellTaleSts = CeDMIR_e_Level0Sts;
                AECR_ac_B.LeAECR_e_eCoastingSel = CeDMIR_e_Level0;
            }
            else
            {
                /* Transition: '<S183>:998' */
                /* Transition: '<S183>:1217' */
                /* Transition: '<S183>:1148' */
                AECR_ac_B.LeAECR_e_TellTaleSts = CeDMIR_e_NA;
            }

            AECR_ac_DW.is_eCoastingLevelSelection = AECR_ac_IN_System_Faulted;

            /* Entry 'System_Faulted': '<S183>:578' */
            AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_NotAvailable;
            AECR_ac_B.LeAECR_e_PopUpRqst = CeDMIR_e_SNA;
        }
        else
        {
            /* Transition: '<S183>:995' */
            if (!VeAECC_b_eCoastEnbl)
            {
                /* Transition: '<S183>:1024' */
                AECR_ac_B.LeAECR_i_CurrentSel = (uint8)rtb_UnitDelay_m_tmp;
                AECR_ac_DW.is_eCoastingLevelSelection =
                    AECR_ac_IN_eCoasting_Disabled;

                /* Entry 'eCoasting_Disabled': '<S183>:997' */
                AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_NotAvailable;
                AECR_ac_B.LeAECR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                    AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo
                    (AECR_ac_B.LeAECR_i_CurrentSel);
                AECR_ac_B.LeAECR_e_PopUpRqst = CeDMIR_e_NA;
                AECR_ac_B.LeAECR_e_eCoastingSel = CeDMIR_e_NotAvail;
            }
            else
            {
                /* Transition: '<S183>:1153' */
                if (((uint32)rtb_TmpSignalConversionAtVeTMDR_e_Propul) ==
                        CeTMDR_e_Auto)
                {
                    /* Transition: '<S183>:1154' */
                    /* Transition: '<S183>:1160' */
                    AECR_ac_B.LeAECR_i_CurrentSel = (uint8)rtb_DataStoreRead1;
                }
                else if (((uint32)AECR_ac_DW.NeAECR_e_RaceModeSts) ==
                         CeTIMR_e_RaceMode_On)
                {
                    /* Transition: '<S183>:1186' */
                    /* Transition: '<S183>:1187' */
                    AECR_ac_B.LeAECR_i_CurrentSel = (uint8)
                        AECR_ac_DW.IntegerDelay_DSTATE_j;
                }
                else
                {
                    /* Transition: '<S183>:1188' */
                    AECR_ac_B.LeAECR_i_CurrentSel = (uint8)
                        AECR_ac_DW.NeAECR_e_eCoastLvlLatched;
                }

                AECR_ac_DW.is_eCoastingLevelSelection =
                    AECR_ac_IN_eCoasting_Selection;

                /* Entry 'eCoasting_Selection': '<S183>:1025' */
                AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_Available;
                AECR_ac_B.LeAECR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                    AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo
                    (AECR_ac_B.LeAECR_i_CurrentSel);
                AECR_ac_B.LeAECR_e_PopUpRqst = (TeDMIR_e_eCoastInfo)
                    AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo
                    (AECR_ac_B.LeAECR_i_CurrentSel);
                AECR_ac_B.LeAECR_e_eCoastingSel = (TeDMIR_e_eCoastSel)
                    AECR_ac_safe_cast_to_TeDMIR_e_eCoastSel
                    (AECR_ac_B.LeAECR_i_CurrentSel);
            }
        }
    }
    else
    {
        /* During 'eCoastingPopupMessage': '<S183>:1277' */
        switch (AECR_ac_DW.is_eCoastingPopupMessage)
        {
          case AECR_ac_IN_eCoastPopupMsg0:
            LeAECR_e_eCoastPopUpMsg = 0;

            /* During 'eCoastPopupMsg0': '<S183>:1291' */
            if ((AECR_ac_DW.FlagPopupMsg2 != 0.0) || (((((uint32)
                    rtb_TmpSignalConversionAtVeDTRR_e_OPD_St) ==
                    CeDTRR_e_Faulted) && rtb_AND_lu) && (((sint32)
                    AECR_ac_B.LeAECR_i_CurrentSel) == 2)))
            {
                /* Transition: '<S183>:1323' */
                AECR_ac_DW.PopupCounter = 0.0;
                AECR_ac_DW.is_eCoastingPopupMessage = AECR_ac_IN_eCoastPopupMsg2;

                /* Entry 'eCoastPopupMsg2': '<S183>:1293' */
                LeAECR_e_eCoastPopUpMsg = 2;
            }
            else
            {
                rtb_OR1_h = (rtb_AND_b || rtb_AND_lu);
                if ((((VeAECC_b_eCoastFA) && (AECR_ac_DW.FaultNew != 0.0)) ||
                        ((VeAECC_b_eCoastFA) && rtb_OR1_h)) || ((!rtb_Logical5_j)
                     && rtb_OR1_h))
                {
                    /* Transition: '<S183>:1301' */
                    AECR_ac_DW.PopupCounter = 0.0;
                    AECR_ac_DW.is_eCoastingPopupMessage =
                        AECR_ac_IN_eCoastPopupMsg1;

                    /* Entry 'eCoastPopupMsg1': '<S183>:1292' */
                    LeAECR_e_eCoastPopUpMsg = 1;
                }
                else
                {
                    rtb_OR1_h = !VeAECC_b_eCoastFA;
                    if ((rtb_OR1_h && (rtb_Logical5_j && (rtb_AND_nc &&
                            (((!rtb_LogicalOperator_j) &&
                              (!rtb_SignalConversion_b)) &&
                             (!rtb_LogicalOperator))))) && rtb_AND_b)
                    {
                        /* Transition: '<S183>:1330' */
                        AECR_ac_DW.PopupCounter = 0.0;
                        AECR_ac_DW.is_eCoastingPopupMessage =
                            AECR_ac_IN_eCoastPopupMsg3;

                        /* Entry 'eCoastPopupMsg3': '<S183>:1294' */
                        LeAECR_e_eCoastPopUpMsg = 3;
                    }
                    else
                    {
                        if (rtb_OR1_h && (AECR_ac_DW.FaultNew == 0.0))
                        {
                            /* Transition: '<S183>:1318' */
                            /* Transition: '<S183>:1320' */
                            AECR_ac_DW.FaultNew = 1.0;

                            /* Transition: '<S183>:1321' */
                            AECR_ac_DW.is_eCoastingPopupMessage =
                                AECR_ac_IN_eCoastPopupMsg0;

                            /* Entry 'eCoastPopupMsg0': '<S183>:1291' */
                        }
                    }
                }
            }
            break;

          case AECR_ac_IN_eCoastPopupMsg1:
            /* During 'eCoastPopupMsg1': '<S183>:1292' */
            if (AECR_ac_DW.PopupCounter <= ((float64)((float32)
                    (KeAECR_t_PopupMsgTime / HeAECR_t_10ms_dT))))
            {
                /* Transition: '<S183>:1304' */
                /* Transition: '<S183>:1306' */
                /* Transition: '<S183>:1307' */
                AECR_ac_DW.PopupCounter++;
                AECR_ac_DW.is_eCoastingPopupMessage = AECR_ac_IN_eCoastPopupMsg1;

                /* Entry 'eCoastPopupMsg1': '<S183>:1292' */
                LeAECR_e_eCoastPopUpMsg = 1;
            }
            else
            {
                /* Transition: '<S183>:1322' */
                AECR_ac_DW.FaultNew = 0.0;
                AECR_ac_DW.is_eCoastingPopupMessage = AECR_ac_IN_eCoastPopupMsg0;

                /* Entry 'eCoastPopupMsg0': '<S183>:1291' */
                LeAECR_e_eCoastPopUpMsg = 0;
            }
            break;

          case AECR_ac_IN_eCoastPopupMsg2:
            /* During 'eCoastPopupMsg2': '<S183>:1293' */
            if (AECR_ac_DW.PopupCounter <= ((float64)((float32)
                    (KeAECR_t_PopupMsgTime / HeAECR_t_10ms_dT))))
            {
                /* Transition: '<S183>:1327' */
                /* Transition: '<S183>:1325' */
                /* Transition: '<S183>:1329' */
                AECR_ac_DW.PopupCounter++;
                AECR_ac_DW.is_eCoastingPopupMessage = AECR_ac_IN_eCoastPopupMsg2;

                /* Entry 'eCoastPopupMsg2': '<S183>:1293' */
                LeAECR_e_eCoastPopUpMsg = 2;
            }
            else
            {
                /* Transition: '<S183>:1324' */
                AECR_ac_DW.FlagPopupMsg2 = 0.0;
                AECR_ac_DW.is_eCoastingPopupMessage = AECR_ac_IN_eCoastPopupMsg0;

                /* Entry 'eCoastPopupMsg0': '<S183>:1291' */
                LeAECR_e_eCoastPopUpMsg = 0;
            }
            break;

          default:
            /* During 'eCoastPopupMsg3': '<S183>:1294' */
            if (AECR_ac_DW.PopupCounter <= ((float64)((float32)
                    (KeAECR_t_PopupMsgTime / HeAECR_t_10ms_dT))))
            {
                /* Transition: '<S183>:1336' */
                /* Transition: '<S183>:1335' */
                /* Transition: '<S183>:1333' */
                AECR_ac_DW.PopupCounter++;
                AECR_ac_DW.is_eCoastingPopupMessage = AECR_ac_IN_eCoastPopupMsg3;

                /* Entry 'eCoastPopupMsg3': '<S183>:1294' */
                LeAECR_e_eCoastPopUpMsg = 3;
            }
            else
            {
                /* Transition: '<S183>:1331' */
                AECR_ac_DW.is_eCoastingPopupMessage = AECR_ac_IN_eCoastPopupMsg0;

                /* Entry 'eCoastPopupMsg0': '<S183>:1291' */
                LeAECR_e_eCoastPopUpMsg = 0;
            }
            break;
        }

        /* During 'eCoastingLevelSelection': '<S183>:1276' */
        guard1 = false;
        guard2 = false;
        switch (AECR_ac_DW.is_eCoastingLevelSelection)
        {
          case AECR_ac_IN_System_Faulted:
            AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_NotAvailable;

            /* During 'System_Faulted': '<S183>:578' */
            rtb_OR1_h = !VeAECC_b_eCoastFA;
            if (rtb_OR1_h && (!VeAECC_b_eCoastEnbl))
            {
                /* Transition: '<S183>:1075' */
                AECR_ac_DW.is_eCoastingLevelSelection =
                    AECR_ac_IN_eCoasting_Disabled;

                /* Entry 'eCoasting_Disabled': '<S183>:997' */
                AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_NotAvailable;
                AECR_ac_B.LeAECR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                    AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo
                    (AECR_ac_B.LeAECR_i_CurrentSel);
                AECR_ac_B.LeAECR_e_PopUpRqst = CeDMIR_e_NA;
                AECR_ac_B.LeAECR_e_eCoastingSel = CeDMIR_e_NotAvail;
            }
            else
            {
                if (rtb_OR1_h && (VeAECC_b_eCoastEnbl))
                {
                    /* Transition: '<S183>:1032' */
                    /* Transition: '<S183>:1034' */
                    /* Transition: '<S183>:1033' */
                    AECR_ac_DW.is_eCoastingLevelSelection =
                        AECR_ac_IN_eCoasting_Selection;

                    /* Entry 'eCoasting_Selection': '<S183>:1025' */
                    AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_Available;
                    AECR_ac_B.LeAECR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                        AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo
                        (AECR_ac_B.LeAECR_i_CurrentSel);
                    AECR_ac_B.LeAECR_e_PopUpRqst = (TeDMIR_e_eCoastInfo)
                        AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo
                        (AECR_ac_B.LeAECR_i_CurrentSel);
                    AECR_ac_B.LeAECR_e_eCoastingSel = (TeDMIR_e_eCoastSel)
                        AECR_ac_safe_cast_to_TeDMIR_e_eCoastSel
                        (AECR_ac_B.LeAECR_i_CurrentSel);
                }
            }
            break;

          case AECR_ac_IN_eCoastingNA:
            /* During 'eCoastingNA': '<S183>:1242' */
            if (AECR_ac_DW.counter <= ((float64)((float32)(KeAECR_t_eCoastNATime
                   / HeAECR_t_10ms_dT))))
            {
                /* Transition: '<S183>:1238' */
                /* Transition: '<S183>:1247' */
                /* Transition: '<S183>:1237' */
                AECR_ac_DW.counter++;
                AECR_ac_DW.is_eCoastingLevelSelection = AECR_ac_IN_eCoastingNA;
            }
            else
            {
                /* Transition: '<S183>:1240' */
                AECR_ac_DW.is_eCoastingLevelSelection =
                    AECR_ac_IN_eCoasting_Selection;

                /* Entry 'eCoasting_Selection': '<S183>:1025' */
                AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_Available;
                AECR_ac_B.LeAECR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                    AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo
                    (AECR_ac_B.LeAECR_i_CurrentSel);
                AECR_ac_B.LeAECR_e_PopUpRqst = AECR_ac_B.LeAECR_e_TellTaleSts;
                AECR_ac_B.LeAECR_e_eCoastingSel = (TeDMIR_e_eCoastSel)
                    AECR_ac_safe_cast_to_TeDMIR_e_eCoastSel
                    (AECR_ac_B.LeAECR_i_CurrentSel);
            }
            break;

          case AECR_ac_IN_eCoasting_Disabled:
            AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_NotAvailable;

            /* During 'eCoasting_Disabled': '<S183>:997' */
            if (VeAECC_b_eCoastFA)
            {
                /* Transition: '<S183>:1074' */
                /* Transition: '<S183>:1148' */
                AECR_ac_B.LeAECR_e_TellTaleSts = CeDMIR_e_NA;
                AECR_ac_DW.is_eCoastingLevelSelection =
                    AECR_ac_IN_System_Faulted;

                /* Entry 'System_Faulted': '<S183>:578' */
                AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_NotAvailable;
                AECR_ac_B.LeAECR_e_PopUpRqst = CeDMIR_e_SNA;
            }
            else if (rtb_AND_b && (((sint32)AECR_ac_B.LeAECR_i_CurrentSel) > 0))
            {
                /* Transition: '<S183>:1171' */
                /* Transition: '<S183>:1172' */
                tmp = ((sint32)AECR_ac_B.LeAECR_i_CurrentSel) - 1;
                if ((((sint32)AECR_ac_B.LeAECR_i_CurrentSel) - 1) < 0)
                {
                    tmp = 0;
                }

                AECR_ac_B.LeAECR_i_CurrentSel = (uint8)tmp;

                /* Transition: '<S183>:1173' */
                guard2 = true;
            }
            else if (rtb_AND_lu && (AECR_ac_B.LeAECR_i_CurrentSel <
                                    rtb_eCoastThreshold_TrrnMd))
            {
                /* Transition: '<S183>:1167' */
                /* Transition: '<S183>:1166' */
                tmp = ((sint32)AECR_ac_B.LeAECR_i_CurrentSel) + 1;
                if ((((sint32)AECR_ac_B.LeAECR_i_CurrentSel) + 1) > 255)
                {
                    tmp = 255;
                }

                AECR_ac_B.LeAECR_i_CurrentSel = (uint8)tmp;

                /* Transition: '<S183>:1168' */
                guard2 = true;
            }
            else
            {
                if ((VeAECC_b_eCoastEnbl) && (!VeAECC_b_eCoastFA))
                {
                    /* Transition: '<S183>:1031' */
                    /* Transition: '<S183>:1033' */
                    AECR_ac_DW.is_eCoastingLevelSelection =
                        AECR_ac_IN_eCoasting_Selection;

                    /* Entry 'eCoasting_Selection': '<S183>:1025' */
                    AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_Available;
                    AECR_ac_B.LeAECR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                        AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo
                        (AECR_ac_B.LeAECR_i_CurrentSel);
                    AECR_ac_B.LeAECR_e_PopUpRqst = (TeDMIR_e_eCoastInfo)
                        AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo
                        (AECR_ac_B.LeAECR_i_CurrentSel);
                    AECR_ac_B.LeAECR_e_eCoastingSel = (TeDMIR_e_eCoastSel)
                        AECR_ac_safe_cast_to_TeDMIR_e_eCoastSel
                        (AECR_ac_B.LeAECR_i_CurrentSel);
                }
            }
            break;

          default:
            AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_Available;

            /* During 'eCoasting_Selection': '<S183>:1025' */
            if (VeAECC_b_eCoastFA)
            {
                /* Transition: '<S183>:1039' */
                /* Transition: '<S183>:1043' */
                /* Transition: '<S183>:1162' */
                /* Transition: '<S183>:1215' */
                if (!KeAECR_b_ConfigFALevel1)
                {
                    /* Transition: '<S183>:1147' */
                    AECR_ac_B.LeAECR_i_CurrentSel = CeDMIR_e_Level0;
                    AECR_ac_B.LeAECR_e_TellTaleSts = CeDMIR_e_Level0Sts;
                    AECR_ac_B.LeAECR_e_eCoastingSel = CeDMIR_e_Level0;
                }
                else
                {
                    /* Transition: '<S183>:998' */
                    /* Transition: '<S183>:1217' */
                    /* Transition: '<S183>:1148' */
                    AECR_ac_B.LeAECR_e_TellTaleSts = CeDMIR_e_NA;
                }

                AECR_ac_DW.is_eCoastingLevelSelection =
                    AECR_ac_IN_System_Faulted;

                /* Entry 'System_Faulted': '<S183>:578' */
                AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_NotAvailable;
                AECR_ac_B.LeAECR_e_PopUpRqst = CeDMIR_e_SNA;
            }
            else if (!VeAECC_b_eCoastEnbl)
            {
                /* Transition: '<S183>:1036' */
                /* Transition: '<S183>:1037' */
                AECR_ac_DW.is_eCoastingLevelSelection =
                    AECR_ac_IN_eCoasting_Disabled;

                /* Entry 'eCoasting_Disabled': '<S183>:997' */
                AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_NotAvailable;
                AECR_ac_B.LeAECR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                    AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo
                    (AECR_ac_B.LeAECR_i_CurrentSel);
                AECR_ac_B.LeAECR_e_PopUpRqst = CeDMIR_e_NA;
                AECR_ac_B.LeAECR_e_eCoastingSel = CeDMIR_e_NotAvail;
            }
            else if (((!KeAECR_b_ACCStsOvrrd) && (((!rtb_Logical5_j) ||
                        ((!KeAECR_b_LP3EcoastOvrrd) && ((!rtb_AND_nc) ||
                          (((!rtb_LogicalOperator_j) && (!rtb_SignalConversion_b))
                           && (!rtb_LogicalOperator))))) ||
                       ((!KeAECR_b_PddlMdStsOvrrd) && (CeDMIR_e_En != ((uint32)
                          Switch3))))) && ((rtb_AND_b || rtb_AND_lu) ||
                      (rtb_TmpSignalConversionAtECoastingReqO_l !=
                       AECR_ac_DW.UnitDelay_DSTATE_b)))
            {
                /* Transition: '<S183>:1229' */
                /* Transition: '<S183>:1234' */
                AECR_ac_B.LeAECR_e_TellTaleSts = CeDMIR_e_NA;
                AECR_ac_DW.counter = 0.0;
                AECR_ac_DW.is_eCoastingLevelSelection = AECR_ac_IN_eCoastingNA;
            }
            else
            {
                rtb_OR1_h = ((!VeAECI_b_ImpndSkid) ||
                             (!KeAECR_b_ConfigImpendingSkid));
                if ((((uint32)rtb_TmpSignalConversionAtECoastingReqO_l) ==
                        CeDMIR_e_LevelOne) && rtb_OR1_h)
                {
                    /* Transition: '<S183>:1198' */
                    /* Transition: '<S183>:1196' */
                    AECR_ac_B.LeAECR_i_CurrentSel = 0U;

                    /* Transition: '<S183>:1201' */
                    guard1 = true;
                }
                else
                {
                    tmp = (sint32)AECR_ac_B.LeAECR_e_eCoastingSel;
                    if ((rtb_AND_b && (tmp > 0)) && rtb_OR1_h)
                    {
                        /* Transition: '<S183>:1046' */
                        /* Transition: '<S183>:1165' */
                        tmp = ((sint32)AECR_ac_B.LeAECR_i_CurrentSel) - 1;
                        if ((((sint32)AECR_ac_B.LeAECR_i_CurrentSel) - 1) < 0)
                        {
                            tmp = 0;
                        }

                        AECR_ac_B.LeAECR_i_CurrentSel = (uint8)tmp;

                        /* Transition: '<S183>:1049' */
                        guard1 = true;
                    }
                    else if ((rtb_AND_lu && (tmp < ((sint32)
                                rtb_eCoastThreshold_TrrnMd))) && rtb_OR1_h)
                    {
                        /* Transition: '<S183>:1051' */
                        /* Transition: '<S183>:1054' */
                        tmp = ((sint32)AECR_ac_B.LeAECR_i_CurrentSel) + 1;
                        if ((((sint32)AECR_ac_B.LeAECR_i_CurrentSel) + 1) > 255)
                        {
                            tmp = 255;
                        }

                        AECR_ac_B.LeAECR_i_CurrentSel = (uint8)tmp;

                        /* Transition: '<S183>:1053' */
                        guard1 = true;
                    }
                    else if (((((uint32)rtb_TmpSignalConversionAtVeDTRR_e_OPD_St)
                               == CeDTRR_e_Faulted) && (((sint32)
                                AECR_ac_B.LeAECR_i_CurrentSel) == 3)) &&
                             (KeAECR_b_EcoastChngOPDFail))
                    {
                        /* Transition: '<S183>:1265' */
                        /* Transition: '<S183>:1260' */
                        AECR_ac_DW.FlagPopupMsg2 = 1.0;
                        AECR_ac_B.LeAECR_i_CurrentSel = 2U;

                        /* Transition: '<S183>:1262' */
                        guard1 = true;
                    }
                    else if (((((rtb_TmpSignalConversionAtVeTMDR_e_Propul !=
                                 AECR_ac_DW.IntegerDelay_DSTATE) && (((uint32)
                                  rtb_TmpSignalConversionAtVeTIMR_e_RaceMo) ==
                                 CeTIMR_e_RaceMode_Off)) ||
                               ((CeTIMR_e_RaceMode_Off == ((uint32)
                                  rtb_TmpSignalConversionAtVeTIMR_e_RaceMo)) &&
                                (CeTIMR_e_RaceMode_Off != ((uint32)
                                  AECR_ac_DW.IntegerDelay1_DSTATE)))) ||
                              ((CeTIMR_e_RaceMode_Off != ((uint32)
                                 rtb_TmpSignalConversionAtVeTIMR_e_RaceMo)) &&
                               (CeTIMR_e_RaceMode_Off == ((uint32)
                                 AECR_ac_DW.IntegerDelay1_DSTATE)))) &&
                             (KeAECR_b_ConfigTrrnMdChange))
                    {
                        /* Transition: '<S183>:1144' */
                        /* Transition: '<S183>:1143' */
                        AECR_ac_B.LeAECR_i_CurrentSel = (uint8)
                            AECR_ac_DW.IntegerDelay_DSTATE_j;

                        /* Transition: '<S183>:1140' */
                        guard1 = true;
                    }
                    else
                    {
                        if ((((uint32)rtb_TmpSignalConversionAtECoastingReqO_l) ==
                             CeDMIR_e_LevelTwo) && rtb_OR1_h)
                        {
                            /* Transition: '<S183>:1212' */
                            /* Transition: '<S183>:1208' */
                            AECR_ac_B.LeAECR_i_CurrentSel = 1U;

                            /* Transition: '<S183>:1213' */
                            guard1 = true;
                        }
                    }
                }
            }
            break;
        }

        if (guard2)
        {
            AECR_ac_DW.is_eCoastingLevelSelection =
                AECR_ac_IN_eCoasting_Disabled;

            /* Entry 'eCoasting_Disabled': '<S183>:997' */
            AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_NotAvailable;
            AECR_ac_B.LeAECR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo
                (AECR_ac_B.LeAECR_i_CurrentSel);
            AECR_ac_B.LeAECR_e_PopUpRqst = CeDMIR_e_NA;
            AECR_ac_B.LeAECR_e_eCoastingSel = CeDMIR_e_NotAvail;
        }

        if (guard1)
        {
            AECR_ac_DW.is_eCoastingLevelSelection =
                AECR_ac_IN_eCoasting_Selection;

            /* Entry 'eCoasting_Selection': '<S183>:1025' */
            AECR_ac_B.LeAECR_e_eCoastingSts = CeDMIR_e_Available;
            AECR_ac_B.LeAECR_e_TellTaleSts = (TeDMIR_e_eCoastInfo)
                AECR_ac_safe_cast_to_TeDMIR_e_eCoastInfo
                (AECR_ac_B.LeAECR_i_CurrentSel);
            AECR_ac_B.LeAECR_e_PopUpRqst = AECR_ac_B.LeAECR_e_TellTaleSts;
            AECR_ac_B.LeAECR_e_eCoastingSel = (TeDMIR_e_eCoastSel)
                AECR_ac_safe_cast_to_TeDMIR_e_eCoastSel
                (AECR_ac_B.LeAECR_i_CurrentSel);
        }
    }

    /* DataTypeConversion: '<S173>/DataTypeConversion' */
    VeAECR_e_eCoastLvlLatched = AECR_ac_B.LeAECR_i_CurrentSel;

    /* DataStoreWrite: '<S84>/Data Store Write' incorporates:
     *  DataTypeConversion: '<S173>/DataTypeConversion'
     */
    AECR_ac_DW.NeAECR_e_eCoastLvlLatched = VeAECR_e_eCoastLvlLatched;

    /* Outputs for Atomic SubSystem: '<S84>/EdgeRising' */
    /* Logic: '<S170>/OR1' incorporates:
     *  UnitDelay: '<S170>/Unit Delay'
     */
    rtb_OR1_h = !AECR_ac_DW.UnitDelay_DSTATE_co;

    /* Update for UnitDelay: '<S170>/Unit Delay' incorporates:
     *  Constant: '<S84>/FALSE Constant2'
     */
    AECR_ac_DW.UnitDelay_DSTATE_co = true;

    /* Switch: '<S84>/Switch1' incorporates:
     *  DataStoreWrite: '<S84>/Data Store Write1'
     *  Logic: '<S170>/AND'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_RaceModeSts'
     */
    if (!rtb_OR1_h)
    {
        AECR_ac_DW.NeAECR_e_RaceModeSts =
            rtb_TmpSignalConversionAtVeTIMR_e_RaceMo;
    }

    /* End of Switch: '<S84>/Switch1' */
    /* End of Outputs for SubSystem: '<S84>/EdgeRising' */

    /* DataStoreWrite: '<S189>/Data Store Write' incorporates:
     *  Switch: '<S196>/Switch1'
     */
    AECR_ac_DW.NeAECR_e_PddlMdStatus = rtb_TmpSignalConversionAtVeDMII_e_PddlMd;

    /* RelationalOperator: '<S73>/Comparison11' incorporates:
     *  Constant: '<S98>/Constant'
     */
    rtb_LogicalOperator = (CePMDR_e_PowerMode_Off != ((uint32)
                            VeAECI_e_PMM_PowerMode));

    /* RelationalOperator: '<S73>/Comparison12' incorporates:
     *  UnitDelay: '<S73>/Unit Delay5'
     */
    rtb_AND_b = (rtb_Logical != AECR_ac_DW.UnitDelay5_DSTATE);

    /* Outputs for Atomic SubSystem: '<S73>/EdgeRising' */
    /* Logic: '<S97>/OR1' incorporates:
     *  UnitDelay: '<S97>/Unit Delay'
     */
    rtb_AND_lu = !AECR_ac_DW.UnitDelay_DSTATE_lw;

    /* Update for UnitDelay: '<S97>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_lw = rtb_LogicalOperator;

    /* End of Outputs for SubSystem: '<S73>/EdgeRising' */

    /* Logic: '<S73>/Logical9' incorporates:
     *  RelationalOperator: '<S73>/Comparison8'
     *  UnitDelay: '<S73>/Unit Delay4'
     */
    VeAECC_b_MSGAeCoastActvNormal = ((rtb_TmpSignalConversionAtVeCSVR_b_VehSpd &&
        (AECR_ac_DW.UnitDelay4_DSTATE)) && rtb_AND_b);

    /* Logic: '<S73>/Logical4' incorporates:
     *  UnitDelay: '<S73>/Unit Delay3'
     */
    VeAECC_b_MSGAeCoastNotActv = ((AECR_ac_DW.UnitDelay3_DSTATE) && tmpRead_4);

    /* Switch: '<S10>/Switch' incorporates:
     *  Logic: '<S73>/Logical8'
     *  RelationalOperator: '<S73>/Comparison8'
     */
    rtb_OR1_h = (rtb_TmpSignalConversionAtVeCSVR_b_VehSpd && rtb_Logical);

    /* Outputs for Atomic SubSystem: '<S73>/EdgeRising' */
    /* Logic: '<S73>/Logical15' incorporates:
     *  Logic: '<S97>/AND'
     */
    VeAECC_b_MSGAeCoastActvEEPROM = ((rtb_LogicalOperator && rtb_AND_lu) &&
        rtb_OR1_h);

    /* End of Outputs for SubSystem: '<S73>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S73>/Turn Off Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S102>/EdgeFalling' */
    /* Logic: '<S103>/OR1' incorporates:
     *  Logic: '<S102>/AND'
     *  Logic: '<S73>/Logical11'
     */
    rtb_LogicalOperator = !rtb_AND_b;

    /* Logic: '<S103>/AND' incorporates:
     *  Logic: '<S103>/OR1'
     *  UnitDelay: '<S103>/Unit Delay'
     */
    rtb_AND_lu = (rtb_LogicalOperator && (AECR_ac_DW.UnitDelay_DSTATE_jlz));

    /* Update for UnitDelay: '<S103>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_jlz = rtb_AND_b;

    /* End of Outputs for SubSystem: '<S102>/EdgeFalling' */

    /* Switch: '<S102>/Switch' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S102>/Constant Value1'
     *  Constant: '<S99>/Calib'
     *  MinMax: '<S102>/Minimum'
     *  Sum: '<S102>/Summation'
     *  UnitDelay: '<S102>/Unit Delay'
     */
    if (rtb_AND_lu)
    {
        AECR_ac_DW.UnitDelay_DSTATE_c = KeAECR_t_TiDebounceSetFastRamp;
    }
    else
    {
        AECR_ac_DW.UnitDelay_DSTATE_c = fmaxf(AECR_ac_DW.UnitDelay_DSTATE_c -
            HeAECR_t_10ms_dT, 0.0F);
    }

    /* End of Switch: '<S102>/Switch' */

    /* Logic: '<S73>/Logical13' incorporates:
     *  Constant: '<S102>/Constant Value2'
     *  Logic: '<S102>/AND'
     *  Logic: '<S73>/Logical14'
     *  RelationalOperator: '<S102>/Greater  Than'
     *  UnitDelay: '<S102>/Unit Delay'
     */
    VeAECC_b_MSGAeCoastActvECM = (rtb_OR1_h && (rtb_LogicalOperator &&
        (AECR_ac_DW.UnitDelay_DSTATE_c <= 0.0F)));

    /* End of Outputs for SubSystem: '<S73>/Turn Off Delay Time1' */

    /* Logic: '<S73>/Logical10' */
    rtb_OR1_h = ((((VeAECC_b_MSGAeCoastActvNormal) ||
                   (VeAECC_b_MSGAeCoastNotActv)) ||
                  (VeAECC_b_MSGAeCoastActvEEPROM)) ||
                 (VeAECC_b_MSGAeCoastActvECM));

    /* Outputs for Atomic SubSystem: '<S73>/Signal Latch On With Reset1' */
    /* Logic: '<S101>/OR1' incorporates:
     *  Logic: '<S101>/NOT'
     *  Logic: '<S101>/OR'
     *  Logic: '<S73>/Logical11'
     *  Logic: '<S73>/Logical12'
     *  UnitDelay: '<S101>/Unit Delay'
     */
    AECR_ac_DW.UnitDelay_DSTATE_f = (rtb_OR1_h || ((rtb_OR1_h ||
        rtb_LogicalOperator) && (AECR_ac_DW.UnitDelay_DSTATE_f)));

    /* End of Outputs for SubSystem: '<S73>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S125>/EdgeFalling1' */
    /* Logic: '<S130>/AND' incorporates:
     *  Logic: '<S130>/OR1'
     *  UnitDelay: '<S125>/Unit Delay1'
     *  UnitDelay: '<S130>/Unit Delay'
     */
    AECR_ac_DW.UnitDelay1_DSTATE_l = ((!rtb_Comparison4) &&
        (AECR_ac_DW.UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S130>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_n = rtb_Comparison4;

    /* End of Outputs for SubSystem: '<S125>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S131>/EdgeRising' */
    /* Logic: '<S133>/AND' incorporates:
     *  Logic: '<S133>/OR1'
     *  UnitDelay: '<S133>/Unit Delay'
     */
    rtb_OR1_h = (rtb_Comparison4 && (!AECR_ac_DW.UnitDelay_DSTATE_p));

    /* Update for UnitDelay: '<S133>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_p = rtb_Comparison4;

    /* End of Outputs for SubSystem: '<S131>/EdgeRising' */

    /* Switch: '<S131>/Switch1' incorporates:
     *  Constant: '<S122>/Calib'
     *  Constant: '<S124>/Calib'
     *  Constant: '<S131>/Constant Value1'
     *  Logic: '<S131>/OR'
     *  Logic: '<S131>/OR1'
     *  MinMax: '<S131>/Minimum'
     *  Sum: '<S131>/Summation'
     *  UnitDelay: '<S131>/Unit Delay'
     */
    if ((!rtb_Comparison4) || rtb_OR1_h)
    {
        AECR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        AECR_ac_DW.UnitDelay_DSTATE = fminf(KeAECR_t_PaddleMaxPressTime,
            HeAECR_t_10ms_dT + AECR_ac_DW.UnitDelay_DSTATE);
    }

    /* End of Switch: '<S131>/Switch1' */

    /* RelationalOperator: '<S131>/Greater  Than' incorporates:
     *  Constant: '<S124>/Calib'
     *  UnitDelay: '<S131>/Unit Delay'
     *  UnitDelay: '<S131>/Unit Delay1'
     */
    AECR_ac_DW.UnitDelay1_DSTATE_d = (AECR_ac_DW.UnitDelay_DSTATE <
        KeAECR_t_PaddleMaxPressTime);

    /* Outputs for Atomic SubSystem: '<S126>/EdgeFalling1' */
    /* Logic: '<S135>/AND' incorporates:
     *  UnitDelay: '<S126>/Unit Delay1'
     *  UnitDelay: '<S135>/Unit Delay'
     */
    AECR_ac_DW.UnitDelay1_DSTATE_o = (rtb_AND_a &&
        (AECR_ac_DW.UnitDelay_DSTATE_m5));

    /* Update for UnitDelay: '<S135>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_m5 = rtb_Comparison1;

    /* End of Outputs for SubSystem: '<S126>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S136>/EdgeRising' */
    /* Logic: '<S138>/AND' incorporates:
     *  Logic: '<S138>/OR1'
     *  UnitDelay: '<S138>/Unit Delay'
     */
    rtb_Comparison4 = (rtb_Comparison1 && (!AECR_ac_DW.UnitDelay_DSTATE_jl));

    /* Update for UnitDelay: '<S138>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_jl = rtb_Comparison1;

    /* End of Outputs for SubSystem: '<S136>/EdgeRising' */

    /* Switch: '<S136>/Switch1' incorporates:
     *  Constant: '<S122>/Calib'
     *  Constant: '<S124>/Calib'
     *  Constant: '<S136>/Constant Value1'
     *  Logic: '<S136>/OR'
     *  MinMax: '<S136>/Minimum'
     *  Sum: '<S136>/Summation'
     *  UnitDelay: '<S136>/Unit Delay'
     */
    if (rtb_AND_a || rtb_Comparison4)
    {
        AECR_ac_DW.UnitDelay_DSTATE_m = 0.0F;
    }
    else
    {
        AECR_ac_DW.UnitDelay_DSTATE_m = fminf(KeAECR_t_PaddleMaxPressTime,
            HeAECR_t_10ms_dT + AECR_ac_DW.UnitDelay_DSTATE_m);
    }

    /* End of Switch: '<S136>/Switch1' */

    /* RelationalOperator: '<S136>/Greater  Than' incorporates:
     *  Constant: '<S124>/Calib'
     *  UnitDelay: '<S136>/Unit Delay'
     *  UnitDelay: '<S136>/Unit Delay1'
     */
    AECR_ac_DW.UnitDelay1_DSTATE_j = (AECR_ac_DW.UnitDelay_DSTATE_m <
        KeAECR_t_PaddleMaxPressTime);

    /* SignalConversion generated from: '<S10>/Variant Source1' incorporates:
     *  SignalConversion generated from: '<S10>/Variant Source2'
     * */
#if Rte_SysCon_Variant_AECR_2

    /* VariantMerge generated from: '<S10>/Variant Source1' */
    VeAECC_e_TellTaleSts = AECR_ac_B.LeAECR_e_TellTaleSts;

    /* Switch: '<S10>/Switch4' */
    AECR_ac_B.Switch4 = AECR_ac_B.LeAECR_e_PopUpRqst;

#else

    /* VariantMerge generated from: '<S10>/Variant Source1' incorporates:
     *  Constant: '<S166>/Constant'
     *  SignalConversion generated from: '<S10>/Variant Source1'
     */
    VeAECC_e_TellTaleSts = CeDMIR_e_NA;

    /* Switch: '<S10>/Switch4' incorporates:
     *  Constant: '<S167>/Constant'
     *  SignalConversion generated from: '<S10>/Variant Source2'
     */
    AECR_ac_B.Switch4 = CeDMIR_e_NA;

#endif

    /* End of SignalConversion generated from: '<S10>/Variant Source1' */

    /* SignalConversion generated from: '<S10>/Variant Source2' incorporates:
     *  Switch: '<S10>/Switch4'
     */
    VeAECC_e_eCoast_PopUpRqst = AECR_ac_B.Switch4;

    /* SignalConversion generated from: '<S10>/Variant Source3' */
#if Rte_SysCon_Variant_AECR_2

    /* VariantMerge generated from: '<S10>/Variant Source3' */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_p =
        AECR_ac_B.LeAECR_e_eCoastingSel;

#else

    /* VariantMerge generated from: '<S10>/Variant Source3' incorporates:
     *  Constant: '<S168>/Constant'
     *  SignalConversion generated from: '<S10>/Variant Source3'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_p = CeDMIR_e_NotAvail;

#endif

    /* End of SignalConversion generated from: '<S10>/Variant Source3' */

    /* SignalConversion generated from: '<S10>/Variant Source3' incorporates:
     *  VariantMerge generated from: '<S10>/Variant Source3'
     */
    VeAECC_e_eCoastingSel = AECR_ac_B.VariantMerge_For_Variant_Source_Varian_p;

    /* SignalConversion generated from: '<S10>/Variant Source' */
#if Rte_SysCon_Variant_AECR_2

    /* VariantMerge generated from: '<S10>/Variant Source' */
    AECR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk =
        AECR_ac_B.LeAECR_e_eCoastingSts;

#else

    /* VariantMerge generated from: '<S10>/Variant Source' incorporates:
     *  Constant: '<S165>/Constant'
     *  SignalConversion generated from: '<S10>/Variant Source'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeDMIR_e_NotAvailable;

#endif

    /* End of SignalConversion generated from: '<S10>/Variant Source' */

    /* SignalConversion generated from: '<S10>/Variant Source' incorporates:
     *  VariantMerge generated from: '<S10>/Variant Source'
     */
    VeAECC_e_eCoastingSts = AECR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk;

    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S78>/Calib'
     *  Switch: '<S10>/Switch1'
     */
    if (KeAECR_b_BEVaeCoastRampStEnbl)
    {
        /* Switch: '<S10>/Switch' incorporates:
         *  Constant: '<S106>/Constant'
         *  Merge: '<S74>/Merge'
         *  RelationalOperator: '<S74>/Equal'
         */
        rtb_OR1_h = (((uint32)rtb_Merge_o) == CeAECR_e_AecoastingActive);

        /* Switch: '<S10>/Switch1' incorporates:
         *  SignalConversion: '<S73>/SignalConversion'
         *  UnitDelay: '<S101>/Unit Delay'
         */
        rtb_LogicalOperator = AECR_ac_DW.UnitDelay_DSTATE_f;
    }
    else
    {
        /* Switch: '<S10>/Switch' */
        rtb_OR1_h = rtb_Logical3_e;

        /* Switch: '<S10>/Switch1' incorporates:
         *  Constant: '<S10>/FALSE Constant'
         */
        rtb_LogicalOperator = false;
    }

    /* End of Switch: '<S10>/Switch' */

    /* Switch: '<S10>/Switch4' incorporates:
     *  Constant: '<S156>/Constant'
     *  Constant: '<S164>/Constant'
     *  Constant: '<S79>/Calib'
     *  RelationalOperator: '<S149>/Comparison3'
     *  RelationalOperator: '<S82>/Comparison1'
     *  Switch: '<S82>/Switch2'
     *  Switch: '<S82>/Switch3'
     *  VariantMerge generated from: '<S81>/VariantSource'
     */
    if (KeAECR_b_RegenType)
    {
        /* Switch: '<S10>/Switch4' incorporates:
         *  SignalConversion generated from: '<S10>/Variant Source1'
         */
        AECR_ac_B.Switch4 = VeAECC_e_TellTaleSts;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeDTRR_e_OPD_St) ==
             CeDTRR_e_Faulted)
    {
        /* Switch: '<S82>/Switch2' incorporates:
         *  Constant: '<S163>/Constant'
         *  Switch: '<S10>/Switch4'
         */
        AECR_ac_B.Switch4 = CeDMIR_e_NA;
    }
    else if (((uint32)AECR_ac_B.VariantMerge_For_Variant_Source_Varia_ad) ==
             CeDMIR_e_NormalRegen)
    {
        /* Switch: '<S82>/Switch3' incorporates:
         *  Constant: '<S161>/Constant'
         *  Switch: '<S10>/Switch4'
         *  Switch: '<S82>/Switch2'
         */
        AECR_ac_B.Switch4 = CeDMIR_e_Level1Sts;
    }
    else
    {
        /* Switch: '<S10>/Switch4' incorporates:
         *  Constant: '<S162>/Constant'
         *  Switch: '<S82>/Switch2'
         *  Switch: '<S82>/Switch3'
         */
        AECR_ac_B.Switch4 = CeDMIR_e_Level2Sts;
    }

    /* End of Switch: '<S10>/Switch4' */

    /* RelationalOperator: '<S40>/Comparison1' incorporates:
     *  Chart: '<S9>/AeCoast_Arbitration'
     *  Constant: '<S15>/Calib'
     *  Constant: '<S16>/Calib'
     *  Constant: '<S18>/Calib'
     *  Constant: '<S69>/Calib'
     *  DataTypeConversion: '<S40>/Data Type Conversion1'
     *  Inport: '<S7>/VeVTXR_b_PowerPanelSts'
     *  Logic: '<S11>/Logical'
     *  Logic: '<S11>/Logical1'
     *  Logic: '<S11>/Logical4'
     *  Logic: '<S11>/Logical5'
     *  Logic: '<S14>/Logical10'
     *  Logic: '<S14>/Logical11'
     *  Logic: '<S14>/Logical12'
     *  Logic: '<S14>/Logical13'
     *  Logic: '<S14>/Logical14'
     *  Logic: '<S14>/Logical15'
     *  Logic: '<S14>/Logical4'
     *  Logic: '<S14>/Logical8'
     *  Logic: '<S14>/Logical9'
     *  Logic: '<S40>/Logical1'
     *  Logic: '<S40>/Logical2'
     *  Logic: '<S40>/Logical3'
     *  Logic: '<S40>/Logical4'
     *  RelationalOperator: '<S11>/Comparison1'
     *  RelationalOperator: '<S11>/Comparison5'
     *  RelationalOperator: '<S13>/Comparison4'
     *  RelationalOperator: '<S14>/Comparison10'
     *  RelationalOperator: '<S14>/Comparison11'
     *  RelationalOperator: '<S14>/Comparison12'
     *  RelationalOperator: '<S14>/Comparison7'
     *  RelationalOperator: '<S14>/Comparison8'
     *  RelationalOperator: '<S14>/Comparison9'
     *  RelationalOperator: '<S40>/Comparison2'
     *  RelationalOperator: '<S40>/Comparison3'
     *  RelationalOperator: '<S40>/Comparison4'
     *  Selector: '<S40>/Selector1'
     *  SignalConversion: '<S11>/SignalConversion'
     *  SignalConversion: '<S14>/SignalConversion'
     *  SignalConversion generated from: '<S6>/Variant Source1'
     *  SignalConversion generated from: '<S6>/Variant Source2'
     *  SignalConversion generated from: '<S6>/Variant Source3'
     *  SignalConversion: '<S9>/SignalConversion1'
     *  Switch: '<S11>/Switch'
     *  Switch: '<S20>/Switch3'
     *  Switch: '<S40>/Switch2'
     *  UnitDelay: '<S26>/Unit Delay'
     * */
#if Rte_SysCon_Variant_AECR_1

    /* Outputs for Atomic SubSystem: '<S14>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S14>/Turn Off Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S14>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S11>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S11>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S19>/Diagnostic' */
    /* Outputs for Atomic SubSystem: '<S19>/MaxRegenDsrd' */
    /* Outputs for Atomic SubSystem: '<S40>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S40>/EdgeBi' */
    /* Outputs for Function Call SubSystem: '<S1>/AECI_Process' */
    /* RelationalOperator: '<S40>/Comparison1' incorporates:
     *  Constant: '<S65>/Constant'
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     *  Inport: '<S7>/VeDMDR_e_DrvMdArb'
     */
    rtb_Comparison1_pu = (((uint32)tmpRead_0) == CeDMDR_e_Sport);

    /* End of Outputs for SubSystem: '<S1>/AECI_Process' */

    /* RelationalOperator: '<S61>/Not Equal' incorporates:
     *  UnitDelay: '<S61>/Unit Delay'
     */
    rtb_NotEqual = (rtb_Comparison1_pu != AECR_ac_DW.UnitDelay_DSTATE_h);

    /* Update for UnitDelay: '<S61>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_h = rtb_Comparison1_pu;

    /* RelationalOperator: '<S40>/Comparison4' incorporates:
     *  Constant: '<S66>/Constant'
     *  Switch: '<S276>/Switch1'
     */
    rtb_Comparison1_pu = (((uint32)VeAECI_e_AeCoastSwitchStat) ==
                          CeBRKR_e_Button_Pressed);

    /* Logic: '<S62>/AND' incorporates:
     *  Logic: '<S62>/OR1'
     *  UnitDelay: '<S62>/Unit Delay'
     */
    VeAECC_b_ContactSwitch = (rtb_Comparison1_pu &&
        (!AECR_ac_DW.UnitDelay_DSTATE_a));

    /* Update for UnitDelay: '<S62>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_a = rtb_Comparison1_pu;
    if (KeAECR_b_P1P4_UseDrvMd)
    {
        /* Switch: '<S40>/Switch2' incorporates:
         *  RelationalOperator: '<S40>/Comparison5'
         *  Switch: '<S40>/Switch1'
         */
        VeAECC_b_ContactSwitch = ((VeAECI_b_RunCrankActive) && rtb_NotEqual);
    }

    /* Logic: '<S40>/Logical3' incorporates:
     *  Constant: '<S63>/Constant'
     *  Constant: '<S64>/Constant'
     *  Constant: '<S69>/Calib'
     *  Switch: '<S278>/Switch1'
     */
    VeAECI_b_TrrnMode = ((((uint32)VeAECI_e_TrrnMd) == CeTMDR_e_Auto) ||
                         (((uint32)VeAECI_e_TrrnMd) == CeTMDR_e_Sport));

    /* Outputs for Function Call SubSystem: '<S1>/AECI_Process' */
    /* Logic: '<S40>/Logical4' incorporates:
     *  Constant: '<S67>/Calib'
     *  Constant: '<S68>/Calib'
     *  Inport: '<Root>/VeTMDR_e_LockLowSt'
     *  Inport: '<S7>/VeTMDR_e_LockLowSt'
     */
    VeAECC_b_4LOWMd = ((KeAECR_b_LowLockStatusCheckOvrrd) ||
                       (KaAECR_b_LowLockStatusOff[(tmpRead)]));

    /* End of Outputs for SubSystem: '<S1>/AECI_Process' */

    /* Logic: '<S40>/Logical2' incorporates:
     *  Constant: '<S70>/Calib'
     */
    VeAECC_b_TrrnMode = (((VeAECI_b_TrrnMode) && (VeAECC_b_4LOWMd)) ||
                         (KeAECR_b_TrnModeAllAllowed));

    /* Outputs for Atomic SubSystem: '<S39>/EdgeFalling' */
    /* Logic: '<S55>/AND' incorporates:
     *  Logic: '<S55>/OR1'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    rtb_NotEqual = ((!VeAECI_b_RunCrankActive) &&
                    (AECR_ac_DW.UnitDelay_DSTATE_h2));

    /* Update for UnitDelay: '<S55>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_h2 = VeAECI_b_RunCrankActive;

    /* End of Outputs for SubSystem: '<S39>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S39>/EdgeRising' */
    /* Logic: '<S56>/OR1' incorporates:
     *  UnitDelay: '<S56>/Unit Delay'
     */
    rtb_Comparison1_pu = !AECR_ac_DW.UnitDelay_DSTATE_cx;

    /* Update for UnitDelay: '<S56>/Unit Delay' incorporates:
     *  Constant: '<S39>/TRUE Constant'
     */
    AECR_ac_DW.UnitDelay_DSTATE_cx = true;

    /* End of Outputs for SubSystem: '<S39>/EdgeRising' */

    /* Switch: '<S39>/Switch2' incorporates:
     *  Constant: '<S59>/Calib'
     */
    if (KeAECR_b_AllwEEPROMChg)
    {
        /* SignalConversion: '<S11>/SignalConversion' incorporates:
         *  Constant: '<S39>/Constant Value1'
         */
        rtb_SignalConversion_b = false;
    }
    else
    {
        /* RelationalOperator: '<S39>/Comparison1' incorporates:
         *  Constant: '<S58>/Constant'
         *  DataStoreRead: '<S39>/Data Store Read2'
         *  DataTypeConversion: '<S57>/DataTypeConversion'
         */
        rtb_Comparison4 = (((uint32)((TeAECR_e_MaxRegenDsrdSt)
                             EeAECR_e_MaxRegenDsrdSt)) ==
                           CeAECR_e_MaxRegenDsrdStActive);

        /* Outputs for Atomic SubSystem: '<S39>/EdgeRising' */
        /* SignalConversion: '<S11>/SignalConversion' incorporates:
         *  Logic: '<S39>/Logical9'
         *  Logic: '<S56>/AND'
         *  Switch: '<S39>/Switch'
         */
        rtb_SignalConversion_b = ((rtb_Comparison4 && rtb_Comparison1_pu) &&
            rtb_Comparison4);

        /* End of Outputs for SubSystem: '<S39>/EdgeRising' */
    }

    /* End of Switch: '<S39>/Switch2' */

    /* Switch: '<S39>/Switch1' incorporates:
     *  Logic: '<S39>/Logical4'
     *  Logic: '<S39>/Logical5'
     *  Logic: '<S39>/Logical6'
     */
    if ((rtb_SignalConversion_b || (VeAECC_b_ContactSwitch)) &&
            (!VeAECI_b_ImpndSkid))
    {
        /* SignalConversion: '<S11>/SignalConversion' incorporates:
         *  Logic: '<S39>/Logical2'
         *  UnitDelay: '<S39>/Unit Delay2'
         */
        rtb_SignalConversion_b = !AECR_ac_DW.UnitDelay2_DSTATE_a;
    }
    else
    {
        /* SignalConversion: '<S11>/SignalConversion' incorporates:
         *  Constant: '<S59>/Calib'
         *  Logic: '<S39>/Logical8'
         *  UnitDelay: '<S39>/Unit Delay1'
         */
        rtb_SignalConversion_b = (((!rtb_NotEqual) || (!KeAECR_b_AllwEEPROMChg))
            && (AECR_ac_DW.UnitDelay1_DSTATE_p));
    }

    /* End of Switch: '<S39>/Switch1' */

    /* Logic: '<S39>/Logical1' incorporates:
     *  UnitDelay: '<S39>/Unit Delay1'
     */
    AECR_ac_DW.UnitDelay1_DSTATE_p = (rtb_SignalConversion_b &&
        (VeAECC_b_TrrnMode));

    /* Logic: '<S39>/Logical7' */
    VeAECC_b_AeCoast_Latch = tmpRead_3;

    /* Logic: '<S39>/Logical3' incorporates:
     *  Gain: '<S60>/Gain'
     *  UnitDelay: '<S39>/Unit Delay1'
     */
    VeAECC_b_MaxRegenDsrd = ((AECR_ac_DW.UnitDelay1_DSTATE_p) &&
        (VeAECC_b_AeCoast_Latch));

    /* UnitDelay: '<S39>/Unit Delay3' */
    rtb_NotEqual = AECR_ac_DW.UnitDelay3_DSTATE_c;

    /* Update for UnitDelay: '<S39>/Unit Delay2' incorporates:
     *  UnitDelay: '<S39>/Unit Delay1'
     */
    AECR_ac_DW.UnitDelay2_DSTATE_a = AECR_ac_DW.UnitDelay1_DSTATE_p;

    /* Update for UnitDelay: '<S39>/Unit Delay3' incorporates:
     *  Constant: '<S39>/TRUE Constant'
     */
    AECR_ac_DW.UnitDelay3_DSTATE_c = true;

    /* Switch: '<S38>/Switch2' incorporates:
     *  Constant: '<S44>/Constant1'
     *  Constant: '<S44>/Constant2'
     *  Constant: '<S48>/Calib'
     *  Constant: '<S49>/Calib'
     *  DataStoreRead: '<S44>/StatusByte_LostCommECM_PCM_A'
     *  Inport: '<S7>/VeDMIR_b_DrvMdNotAvailDiag'
     *  Logic: '<S38>/Logical1'
     *  Logic: '<S38>/Logical2'
     *  Logic: '<S44>/Logical Operator'
     *  RelationalOperator: '<S44>/Relational Operator1'
     *  RelationalOperator: '<S44>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S44>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S44>/Bitwise Operator2'
     */
    if (KeAECR_b_P1P4_UseDrvMd)
    {
        /* Outputs for Function Call SubSystem: '<S1>/AECI_Process' */
        rtb_AND_a = (((((((sint32)AECR_ac_DW.StatusByte_LostCommECM_PCM_A) & 1) >
                        0) && ((((uint32)AECR_ac_DW.StatusByte_LostCommECM_PCM_A)
                                & 64U) == 0U)) && (KeAECR_b_P1P4_UseSportStatus))
                     || rtb_AND_n);

        /* End of Outputs for SubSystem: '<S1>/AECI_Process' */
    }
    else
    {
        rtb_AND_a = VeAECI_b_AeCoastBtnDiagFail;
    }

    /* End of Switch: '<S38>/Switch2' */

    /* If: '<S38>/If' */
    if (rtb_AND_a)
    {
        /* Outputs for IfAction SubSystem: '<S38>/Fault' incorporates:
         *  ActionPort: '<S45>/Action Port'
         */
        AECR_ac_Fault();

        /* End of Outputs for SubSystem: '<S38>/Fault' */
    }
    else if (VeAECC_b_MaxRegenDsrd)
    {
        /* Outputs for IfAction SubSystem: '<S38>/Active' incorporates:
         *  ActionPort: '<S41>/Action Port'
         */
        AECR_ac_Active();

        /* End of Outputs for SubSystem: '<S38>/Active' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S38>/NotActive' incorporates:
         *  ActionPort: '<S51>/Action Port'
         */
        AECR_ac_NotActive();

        /* End of Outputs for SubSystem: '<S38>/NotActive' */
    }

    /* End of If: '<S38>/If' */

    /* Switch: '<S38>/Switch' incorporates:
     *  Constant: '<S47>/Calib'
     */
    if (KeAECR_b_OvrdMaxRegenDsrdSt)
    {
        /* Switch: '<S38>/Switch' incorporates:
         *  Constant: '<S50>/Calib'
         */
        VeAECR_e_MaxRegenDsrdStOvrd = KeAECR_e_OvrdMaxRegenDsrdStVal;
    }
    else
    {
        /* Switch: '<S38>/Switch' incorporates:
         *  Merge: '<S38>/Merge1'
         */
        VeAECR_e_MaxRegenDsrdStOvrd = VeAECR_e_MaxRegenDsrdStRaw;
    }

    /* End of Switch: '<S38>/Switch' */

    /* Outputs for Function Call SubSystem: '<S1>/AECI_Process' */
    /* Switch: '<S38>/Switch3' incorporates:
     *  Constant: '<S46>/Calib'
     *  Inport: '<S7>/VeVTXR_b_PowerPanelSts'
     *  Logic: '<S38>/Logical3'
     *  Logic: '<S38>/Logical5'
     *  Switch: '<S38>/Switch1'
     */
    if (tmpRead_1 && rtb_NotEqual)
    {
        /* DataTypeConversion: '<S38>/Data Type Conversion' incorporates:
         *  DataTypeConversion: '<S42>/DataTypeConversion'
         *  Switch: '<S38>/Switch3'
         *  UnitDelay: '<S38>/Unit Delay1'
         */
        VeAECR_e_MaxRegenDsrdSt = (TeAECR_e_MaxRegenDsrdSt)
            AECR_ac_DW.UnitDelay1_DSTATE;
    }
    else if (rtb_NotEqual || (KeAECR_b_AllwEEPROMChg))
    {
        /* DataTypeConversion: '<S38>/Data Type Conversion' incorporates:
         *  Switch: '<S38>/Switch'
         *  Switch: '<S38>/Switch1'
         *  Switch: '<S38>/Switch3'
         */
        VeAECR_e_MaxRegenDsrdSt = VeAECR_e_MaxRegenDsrdStOvrd;
    }
    else
    {
        /* DataTypeConversion: '<S38>/Data Type Conversion' incorporates:
         *  DataStoreRead: '<S38>/Data Store Read2'
         *  DataTypeConversion: '<S43>/DataTypeConversion'
         *  Switch: '<S38>/Switch1'
         *  Switch: '<S38>/Switch3'
         */
        VeAECR_e_MaxRegenDsrdSt = (TeAECR_e_MaxRegenDsrdSt)
            EeAECR_e_MaxRegenDsrdSt;
    }

    /* End of Switch: '<S38>/Switch3' */
    /* End of Outputs for SubSystem: '<S1>/AECI_Process' */

    /* DataTypeConversion: '<S38>/Data Type Conversion' incorporates:
     *  UnitDelay: '<S38>/Unit Delay1'
     */
    AECR_ac_DW.UnitDelay1_DSTATE = (uint16)VeAECR_e_MaxRegenDsrdSt;

    /* DataStoreWrite: '<S38>/Data Store Write' incorporates:
     *  UnitDelay: '<S38>/Unit Delay1'
     */
    EeAECR_e_MaxRegenDsrdSt = AECR_ac_DW.UnitDelay1_DSTATE;

    /* Outputs for Function Call SubSystem: '<S1>/AECI_Process' */
    /* Logic: '<S21>/AND' incorporates:
     *  Inport: '<S7>/VeWTAR_b_AeCoastTorqDiffActv'
     *  Logic: '<S21>/OR1'
     *  UnitDelay: '<S21>/Unit Delay'
     */
    rtb_AND_n = ((!rtb_AND_cn) && (AECR_ac_DW.UnitDelay_DSTATE_gd));

    /* Update for UnitDelay: '<S21>/Unit Delay' incorporates:
     *  Inport: '<S7>/VeWTAR_b_AeCoastTorqDiffActv'
     */
    AECR_ac_DW.UnitDelay_DSTATE_gd = rtb_AND_cn;

    /* End of Outputs for SubSystem: '<S1>/AECI_Process' */

    /* Logic: '<S11>/Logical' incorporates:
     *  Constant: '<S24>/Constant'
     *  Constant: '<S25>/Constant'
     */
    AECR_ac_B.Logical = (((((!VeAECI_b_EmsMlfAtv) && (((uint32)
        VeAECI_e_BrkPedalDscrtInpt) != CeBRKR_e_UNKNOWN)) &&
                           (AECR_ac_B.VariantMerge_For_Variant_Source_Varia_hy))
                          && (((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                           CeAECR_e_MaxRegenDsrdStActive)) &&
                         (VeAECI_b_AeCoast_Act));

    /* Outputs for Function Call SubSystem: '<S1>/AECI_Process' */
    /* Logic: '<S26>/OR1' incorporates:
     *  Inport: '<S7>/VeRGNR_b_AeCoast_ActHCP'
     *  Logic: '<S26>/NOT'
     *  Logic: '<S26>/OR'
     *  UnitDelay: '<S26>/Unit Delay'
     */
    AECR_ac_DW.UnitDelay_DSTATE_cj = ((AECR_ac_B.Logical) ||
        ((rtb_Comparison12_p && (!rtb_AND_n)) && (AECR_ac_DW.UnitDelay_DSTATE_cj)));

    /* End of Outputs for SubSystem: '<S1>/AECI_Process' */
    if (AECR_ac_DW.UnitDelay_DSTATE_cj)
    {
        /* VariantMerge generated from: '<S6>/Variant Source7' incorporates:
         *  Constant: '<S22>/Constant'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varia_p3 =
            CeAECR_e_AecoastingActive;
    }
    else
    {
        /* VariantMerge generated from: '<S6>/Variant Source7' incorporates:
         *  Constant: '<S23>/Constant'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varia_p3 =
            CeAECR_e_AecoastingTemporarily_Unavailable;
    }

    /* Gateway: AECR_MedTEB/AECC/AECC_FUNC/AeCoast_Arbitration */
    /* During: AECR_MedTEB/AECC/AECC_FUNC/AeCoast_Arbitration */
    if (((uint32)AECR_ac_DW.is_active_c3_AECR_ac) == 0U)
    {
        /* Entry: AECR_MedTEB/AECC/AECC_FUNC/AeCoast_Arbitration */
        AECR_ac_DW.is_active_c3_AECR_ac = 1U;

        /* Entry Internal: AECR_MedTEB/AECC/AECC_FUNC/AeCoast_Arbitration */
        /* Transition: '<S12>:122' */
        if (((uint32)VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdStActive)
        {
            /* Transition: '<S12>:164' */
            /* Transition: '<S12>:180' */
            AECR_ac_DW.is_c3_AECR_ac = AECR_ac_IN_EEPROM_Active;

            /* Entry 'EEPROM_Active': '<S12>:162' */
            AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
            AECR_ac_B.TellTale = CeAECR_e_TelltaleWhite;
            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
            VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStActiveEEPROM;
            AECR_ac_DW.State_Timer = 0.0F;
        }
        else
        {
            if ((((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                    CeAECR_e_MaxRegenDsrdNotActive) || (((uint32)
                    VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdFault))
            {
                /* Transition: '<S12>:166' */
                /* Transition: '<S12>:182' */
                AECR_ac_DW.is_c3_AECR_ac = AECR_ac_IN_EEPROM_Not_Active_Fault;

                /* Entry 'EEPROM_Not_Active_Fault': '<S12>:165' */
                AECR_ac_B.AeCoastLED = CeAECR_e_LEDOff;
                AECR_ac_B.TellTale = CeAECR_e_TelltaleOff;
                AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
                AECR_ac_DW.State_Timer = 0.0F;
                if (((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                        CeAECR_e_MaxRegenDsrdNotActive)
                {
                    VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStNotActiveEEPROM;
                }
                else
                {
                    VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStFaultEEPROM;
                }
            }
        }
    }
    else
    {
        guard1 = false;
        guard2 = false;
        switch (AECR_ac_DW.is_c3_AECR_ac)
        {
          case AECR_ac_IN_AeCoasting_Active:
            AECR_ac_AeCoasting_Active
                (&AECR_ac_B.VariantMerge_For_Variant_Source_Varia_gx);
            break;

          case AECR_ac_IN_AeCoasting_Active_ImpSkid:
            /* During 'AeCoasting_Active_ImpSkid': '<S12>:213' */
            switch (AECR_ac_DW.is_AeCoasting_Active_ImpSkid)
            {
              case AE_IN_AeCoasting_Active_ImpSkid_Blinking:
                AECR_ac_B.AeCoastLED = CeAECR_e_LEDBlink;
                AECR_ac_B.TellTale = CeAECR_e_TelltaleGreen;

                /* During 'AeCoasting_Active_ImpSkid_Blinking': '<S12>:220' */
                if (AECR_ac_DW.State_Timer >= KeAECR_t_StayInBlinkState)
                {
                    /* Transition: '<S12>:216' */
                    AECR_ac_DW.is_AeCoasting_Active_ImpSkid =
                        AECR__IN_AeCoasting_Active_ImpSkid_Const;

                    /* Entry 'AeCoasting_Active_ImpSkid_Const': '<S12>:221' */
                    AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
                }
                else
                {
                    AECR_ac_DW.State_Timer += HeAECR_t_10ms_dT;
                }
                break;

              default:
                AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;

                /* During 'AeCoasting_Active_ImpSkid_Const': '<S12>:221' */
                if (((((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                        CeAECR_e_MaxRegenDsrdNotActive) || (((uint32)
                        VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdFault))
                    || (AECR_ac_DW.State_Timer >= KeAECR_t_StayInBlinkState))
                {
                    /* Transition: '<S12>:217' */
                    /* Transition: '<S12>:225' */
                    /* Transition: '<S12>:219' */
                    if (AECR_ac_DW.State_Timer >= KeAECR_t_StayInBlinkState)
                    {
                        /* Transition: '<S12>:160' */
                        /* Transition: '<S12>:206' */
                        if ((!AECR_ac_B.Logical) || (VeAECI_b_CrsCntrlActv))
                        {
                            /* Transition: '<S12>:75' */
                            AECR_ac_DW.is_AeCoasting_Active_ImpSkid =
                                AECR_ac_IN_NO_ACTIVE_CHILD;
                            AECR_ac_DW.is_c3_AECR_ac =
                                AECR_ac_IN_AeCoasting_Active_OnHold;

                            /* Entry 'AeCoasting_Active_OnHold': '<S12>:33' */
                            AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
                            AECR_ac_B.TellTale = CeAECR_e_TelltaleWhite;
                            if (((uint32)VeAECC_e_AeCoast_State) ==
                                    CeAECR_e_AeCoastStActiveEEPROM)
                            {
                                AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
                            }
                            else
                            {
                                AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                            }

                            VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStOnHold;
                        }
                        else if ((AECR_ac_B.Logical) && (!VeAECI_b_CrsCntrlActv))
                        {
                            /* Transition: '<S12>:76' */
                            AECR_ac_DW.is_AeCoasting_Active_ImpSkid =
                                AECR_ac_IN_NO_ACTIVE_CHILD;
                            AECR_ac_DW.is_c3_AECR_ac =
                                AECR_ac_IN_AeCoasting_Active;

                            /* Entry 'AeCoasting_Active': '<S12>:32' */
                            AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
                            AECR_ac_B.TellTale = CeAECR_e_TelltaleGreen;
                            if (((uint32)VeAECC_e_AeCoast_State) ==
                                    CeAECR_e_AeCoastStActiveEEPROM)
                            {
                                AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
                            }
                            else
                            {
                                AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                            }

                            VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStActive;
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
                break;
            }
            break;

          case AECR_ac_IN_AeCoasting_Active_OnHold:
            AECR_ac_AeCoasting_Active_OnHold
                (&AECR_ac_B.VariantMerge_For_Variant_Source_Varia_gx);
            break;

          case AECR_ac_IN_AeCoasting_NotActive:
            AECR_ac_B.AeCoastLED = CeAECR_e_LEDOff;
            AECR_ac_B.TellTale = CeAECR_e_TelltaleOff;

            /* During 'AeCoasting_NotActive': '<S12>:28' */
            rtb_AND_a = ((VeAECI_b_ImpndSkid) && (VeAECC_b_ContactSwitch));
            if (rtb_AND_a || (((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                              CeAECR_e_MaxRegenDsrdStActive))
            {
                /* Transition: '<S12>:73' */
                if (((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                        CeAECR_e_MaxRegenDsrdStActive)
                {
                    /* Transition: '<S12>:71' */
                    if ((!AECR_ac_B.Logical) || (VeAECI_b_CrsCntrlActv))
                    {
                        /* Transition: '<S12>:75' */
                        AECR_ac_DW.is_c3_AECR_ac =
                            AECR_ac_IN_AeCoasting_Active_OnHold;

                        /* Entry 'AeCoasting_Active_OnHold': '<S12>:33' */
                        AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
                        AECR_ac_B.TellTale = CeAECR_e_TelltaleWhite;
                        if (((uint32)VeAECC_e_AeCoast_State) ==
                                CeAECR_e_AeCoastStActiveEEPROM)
                        {
                            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
                        }
                        else
                        {
                            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                        }

                        VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStOnHold;
                    }
                    else if ((AECR_ac_B.Logical) && (!VeAECI_b_CrsCntrlActv))
                    {
                        /* Transition: '<S12>:76' */
                        AECR_ac_DW.is_c3_AECR_ac = AECR_ac_IN_AeCoasting_Active;

                        /* Entry 'AeCoasting_Active': '<S12>:32' */
                        AECR_ac_B.AeCoastLED = CeAECR_e_LEDCont;
                        AECR_ac_B.TellTale = CeAECR_e_TelltaleGreen;
                        if (((uint32)VeAECC_e_AeCoast_State) ==
                                CeAECR_e_AeCoastStActiveEEPROM)
                        {
                            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenND;
                        }
                        else
                        {
                            AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOn;
                        }

                        VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStActive;
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
            break;

          case AECR_ac_IN_AeCoasting_NotActive_ImpSkid:
            AECR_ac_AeCoasting_NotActive_ImpSkid();
            break;

          case AE_IN_AeCoasting_NotActive_Latch_Terrain:
            AECR__AeCoasting_NotActive_Latch_Terrain();
            break;

          case AECR_ac_IN_EEPROM_Active:
            AECR_ac_EEPROM_Active();
            break;

          default:
            AECR_ac_B.AeCoastLED = CeAECR_e_LEDOff;
            AECR_ac_B.TellTale = CeAECR_e_TelltaleOff;

            /* During 'EEPROM_Not_Active_Fault': '<S12>:165' */
            if (AECR_ac_DW.State_Timer >= KeAECR_t_StayInStateNotActive)
            {
                /* Transition: '<S12>:168' */
                /* Transition: '<S12>:199' */
                /* Transition: '<S12>:200' */
                AECR_ac_DW.is_c3_AECR_ac = AECR_ac_IN_AeCoasting_NotActive;
                AECR_a_enter_atomic_AeCoasting_NotActive();
            }
            else
            {
                AECR_ac_DW.State_Timer += HeAECR_t_10ms_dT;
            }
            break;
        }

        if (guard2)
        {
            if (rtb_AND_a && (((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                              CeAECR_e_MaxRegenDsrdNotActive))
            {
                /* Transition: '<S12>:70' */
                AECR_ac_DW.is_c3_AECR_ac =
                    AECR_ac_IN_AeCoasting_NotActive_ImpSkid;

                /* Entry Internal 'AeCoasting_NotActive_ImpSkid': '<S12>:59' */
                /* Transition: '<S12>:157' */
                AECR_ac_DW.is_AeCoasting_NotActive_ImpSkid =
                    IN_AeCoasting_NotActive_ImpSkid_Blinking;

                /* Entry 'AeCoasting_NotActive_ImpSkid_Blinking': '<S12>:27' */
                AECR_ac_B.AeCoastLED = CeAECR_e_LEDBlink;
                AECR_ac_B.TellTale = CeAECR_e_TelltaleOff;
                AECR_ac_B.PopUpMessage = CeAECR_e_MaxRegenOff;
                AECR_ac_DW.State_Timer = 0.0F;
                VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStImpSkidNotActive;
            }
        }

        if (guard1)
        {
            if ((((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                    CeAECR_e_MaxRegenDsrdNotActive) || (((uint32)
                    VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdFault))
            {
                /* Transition: '<S12>:161' */
                /* Transition: '<S12>:212' */
                /* Transition: '<S12>:210' */
                AECR_ac_DW.is_AeCoasting_Active_ImpSkid =
                    AECR_ac_IN_NO_ACTIVE_CHILD;
                AECR_ac_DW.is_c3_AECR_ac = AECR_ac_IN_AeCoasting_NotActive;
                AECR_a_enter_atomic_AeCoasting_NotActive();
            }
        }
    }

    /* RelationalOperator: '<S14>/Comparison10' incorporates:
     *  Constant: '<S15>/Calib'
     *  Constant: '<S16>/Calib'
     *  Constant: '<S18>/Calib'
     *  Constant: '<S29>/Constant'
     *  UnitDelay: '<S26>/Unit Delay'
     */
    rtb_NotEqual = (((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                    CeAECR_e_MaxRegenDsrdStActive);

    /* RelationalOperator: '<S14>/Comparison11' incorporates:
     *  Constant: '<S28>/Constant'
     */
    rtb_AND_n = (CePMDR_e_PowerMode_Off != ((uint32)VeAECI_e_PMM_PowerMode));

    /* RelationalOperator: '<S14>/Comparison12' incorporates:
     *  UnitDelay: '<S14>/Unit Delay5'
     */
    rtb_Comparison12_p = (AECR_ac_B.Logical != AECR_ac_DW.UnitDelay5_DSTATE_h);

    /* UnitDelay: '<S35>/Unit Delay' incorporates:
     *  Constant: '<S31>/Constant'
     */
    rtb_LogicalOperator_j = (((uint32)VeAECR_e_MaxRegenDsrdSt) ==
        CeAECR_e_MaxRegenDsrdStActive);

    /* RelationalOperator: '<S14>/Comparison9' incorporates:
     *  Constant: '<S32>/Constant'
     */
    rtb_Comparison1_pu = (((uint32)VeAECR_e_MaxRegenDsrdSt) ==
                          CeAECR_e_MaxRegenDsrdNotActive);

    /* Logic: '<S27>/AND' incorporates:
     *  Logic: '<S27>/OR1'
     *  UnitDelay: '<S27>/Unit Delay'
     */
    rtb_AND_cn = (rtb_AND_n && (!AECR_ac_DW.UnitDelay_DSTATE_o5));

    /* Update for UnitDelay: '<S27>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_o5 = rtb_AND_n;

    /* Logic: '<S14>/Logical9' incorporates:
     *  UnitDelay: '<S14>/Unit Delay4'
     */
    VeAECC_b_AeCoastActvNormal = ((rtb_LogicalOperator_j &&
        (AECR_ac_DW.UnitDelay4_DSTATE_e)) && rtb_Comparison12_p);

    /* Logic: '<S14>/Logical4' incorporates:
     *  Constant: '<S30>/Constant'
     *  UnitDelay: '<S14>/Unit Delay3'
     */
    VeAECC_b_AeCoastNotActv = ((AECR_ac_DW.UnitDelay3_DSTATE_d) && (((uint32)
        VeAECR_e_MaxRegenDsrdSt) == CeAECR_e_MaxRegenDsrdNotActive));

    /* UnitDelay: '<S35>/Unit Delay' */
    rtb_LogicalOperator_j = (rtb_LogicalOperator_j && (AECR_ac_B.Logical));

    /* Logic: '<S14>/Logical15' */
    VeAECC_b_AeCoastActvEEPROM = (rtb_AND_cn && rtb_LogicalOperator_j);

    /* Outputs for Atomic SubSystem: '<S36>/EdgeFalling' */
    /* Logic: '<S37>/OR1' incorporates:
     *  Logic: '<S36>/AND'
     */
    rtb_AND_cn = !rtb_Comparison12_p;

    /* Logic: '<S37>/AND' incorporates:
     *  Logic: '<S37>/OR1'
     *  UnitDelay: '<S37>/Unit Delay'
     */
    rtb_AND_n = (rtb_AND_cn && (AECR_ac_DW.UnitDelay_DSTATE_hk));

    /* Update for UnitDelay: '<S37>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_hk = rtb_Comparison12_p;

    /* End of Outputs for SubSystem: '<S36>/EdgeFalling' */

    /* Switch: '<S36>/Switch' incorporates:
     *  Constant: '<S33>/Calib'
     *  Constant: '<S34>/Calib'
     *  Constant: '<S36>/Constant Value1'
     *  MinMax: '<S36>/Minimum'
     *  Sum: '<S36>/Summation'
     *  UnitDelay: '<S36>/Unit Delay'
     */
    if (rtb_AND_n)
    {
        AECR_ac_DW.UnitDelay_DSTATE_my = KeAECR_t_TiDebounceSetFastRamp;
    }
    else
    {
        AECR_ac_DW.UnitDelay_DSTATE_my = fmaxf(AECR_ac_DW.UnitDelay_DSTATE_my -
            HeAECR_t_10ms_dT, 0.0F);
    }

    /* End of Switch: '<S36>/Switch' */

    /* Logic: '<S14>/Logical13' incorporates:
     *  Constant: '<S36>/Constant Value2'
     *  Logic: '<S36>/AND'
     *  RelationalOperator: '<S36>/Greater  Than'
     *  UnitDelay: '<S36>/Unit Delay'
     */
    VeAECC_b_AeCoastActvECM = (rtb_LogicalOperator_j && (rtb_AND_cn &&
        (AECR_ac_DW.UnitDelay_DSTATE_my <= 0.0F)));

    /* Logic: '<S14>/Logical10' */
    rtb_Comparison12_p = ((((VeAECC_b_AeCoastActvNormal) ||
                            (VeAECC_b_AeCoastNotActv)) ||
                           (VeAECC_b_AeCoastActvEEPROM)) ||
                          (VeAECC_b_AeCoastActvECM));

    /* Logic: '<S35>/OR1' incorporates:
     *  Logic: '<S35>/NOT'
     *  Logic: '<S35>/OR'
     *  UnitDelay: '<S35>/Unit Delay'
     */
    AECR_ac_DW.UnitDelay_DSTATE_on = (rtb_Comparison12_p || ((rtb_Comparison12_p
        || rtb_AND_cn) && (AECR_ac_DW.UnitDelay_DSTATE_on)));

    /* VariantMerge generated from: '<S6>/Variant Source6' incorporates:
     *  UnitDelay: '<S35>/Unit Delay'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_j =
        AECR_ac_DW.UnitDelay_DSTATE_on;

    /* Outputs for Function Call SubSystem: '<S1>/AECI_Process' */
    if (tmpRead_1)
    {
        /* VariantMerge generated from: '<S6>/Variant Source2' incorporates:
         *  Inport: '<Root>/VeVTXR_e_HybButtonLEDSt'
         *  Inport: '<S7>/VeVTXR_e_HybButtonLEDSt'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varian_i = tmpRead_2;
    }
    else
    {
        /* VariantMerge generated from: '<S6>/Variant Source2' */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varian_i =
            AECR_ac_B.AeCoastLED;
    }

    /* End of Outputs for SubSystem: '<S1>/AECI_Process' */

    /* VariantMerge generated from: '<S6>/Variant Source5' incorporates:
     *  Inport: '<S7>/VeVTXR_b_PowerPanelSts'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_h = AECR_ac_B.Logical;

    /* VariantMerge generated from: '<S6>/Variant Source1' incorporates:
     *  UnitDelay: '<S26>/Unit Delay'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
        AECR_ac_DW.UnitDelay_DSTATE_cj;

    /* VariantMerge generated from: '<S6>/Variant Source3' */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varia_pl = AECR_ac_B.TellTale;

    /* End of Outputs for SubSystem: '<S40>/EdgeBi' */
    /* End of Outputs for SubSystem: '<S40>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S19>/MaxRegenDsrd' */
    /* End of Outputs for SubSystem: '<S19>/Diagnostic' */
    /* End of Outputs for SubSystem: '<S11>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S11>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S14>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S14>/Turn Off Delay Time1' */
    /* End of Outputs for SubSystem: '<S14>/Signal Latch On With Reset1' */
#else

    /* VariantMerge generated from: '<S6>/Variant Source1' incorporates:
     *  SignalConversion generated from: '<S6>/Variant Source1'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Variant_ = rtb_OR1_h;

    /* VariantMerge generated from: '<S6>/Variant Source2' incorporates:
     *  Constant: '<S77>/Constant'
     *  SignalConversion generated from: '<S6>/Variant Source2'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_i = CeAECR_e_LEDOff;

#endif

    /* End of RelationalOperator: '<S40>/Comparison1' */

    /* SignalConversion generated from: '<S6>/Variant Source4' incorporates:
     *  SignalConversion generated from: '<S6>/Variant Source3'
     *  SignalConversion generated from: '<S6>/Variant Source5'
     *  SignalConversion generated from: '<S6>/Variant Source6'
     *  SignalConversion generated from: '<S6>/Variant Source7'
     */
#if Rte_SysCon_Variant_AECR_1

    /* VariantMerge generated from: '<S6>/Variant Source4' */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_k = AECR_ac_B.PopUpMessage;

#else

    /* VariantMerge generated from: '<S6>/Variant Source3' incorporates:
     *  Constant: '<S76>/Constant'
     *  SignalConversion generated from: '<S6>/Variant Source3'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varia_pl =
        AECR_ac_ConstB.Constant_bq;

    /* VariantMerge generated from: '<S6>/Variant Source4' incorporates:
     *  Constant: '<S75>/Constant'
     *  SignalConversion generated from: '<S6>/Variant Source4'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_k =
        AECR_ac_ConstB.Constant_bb;

    /* VariantMerge generated from: '<S6>/Variant Source5' incorporates:
     *  Constant: '<S10>/FALSE Constant1'
     *  SignalConversion generated from: '<S6>/Variant Source5'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_h = false;

    /* VariantMerge generated from: '<S6>/Variant Source6' incorporates:
     *  SignalConversion generated from: '<S6>/Variant Source6'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_j = rtb_LogicalOperator;

    /* VariantMerge generated from: '<S6>/Variant Source7' incorporates:
     *  SignalConversion generated from: '<S6>/Variant Source7'
     *  Switch: '<S74>/Switch2'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varia_p3 = rtb_Switch2_p;

#endif

    /* End of SignalConversion generated from: '<S6>/Variant Source4' */

    /* Update for RelationalOperator: '<S246>/Comparison8' incorporates:
     *  Delay: '<S182>/Integer Delay'
     *  SignalConversion generated from: '<S1>/VeTMDR_e_PropulsionMd'
     */
    AECR_ac_DW.IntegerDelay_DSTATE = rtb_TmpSignalConversionAtVeTMDR_e_Propul;

    /* Update for RelationalOperator: '<S221>/Comparison6' incorporates:
     *  Delay: '<S221>/Integer Delay1'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_RaceModeSts'
     */
    AECR_ac_DW.IntegerDelay1_DSTATE = rtb_TmpSignalConversionAtVeTIMR_e_RaceMo;

    /* Update for Delay: '<S84>/Integer Delay' */
    AECR_ac_DW.IntegerDelay_DSTATE_j = AECR_ac_B.LeAECR_e_eCoastingSel;

    /* Update for UnitDelay: '<S169>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S1>/ECoastingReq'
     */
    AECR_ac_DW.UnitDelay_DSTATE_b = rtb_TmpSignalConversionAtECoastingReqO_l;

    /* Update for UnitDelay: '<S73>/Unit Delay5' */
    AECR_ac_DW.UnitDelay5_DSTATE = rtb_Logical;

    /* Update for UnitDelay: '<S73>/Unit Delay4' */
    AECR_ac_DW.UnitDelay4_DSTATE = tmpRead_4;

    /* Update for UnitDelay: '<S73>/Unit Delay3' incorporates:
     *  RelationalOperator: '<S73>/Comparison10'
     */
    AECR_ac_DW.UnitDelay3_DSTATE = rtb_TmpSignalConversionAtVeCSVR_b_VehSpd;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AECO_Output'
     */
    /* Update for UnitDelay: '<S14>/Unit Delay5' incorporates:
     *  Constant: '<S323>/Calib'
     *  Constant: '<S327>/Calib'
     *  SignalConversion generated from: '<S8>/VariantSource3'
     *  Switch: '<S312>/Switch1'
     *  Switch: '<S314>/Switch1'
     *  UnitDelay: '<S14>/Unit Delay3'
     *  UnitDelay: '<S14>/Unit Delay4'
     */
#if Rte_SysCon_Variant_AECR_1

    AECR_ac_DW.UnitDelay5_DSTATE_h = AECR_ac_B.Logical;
    AECR_ac_DW.UnitDelay4_DSTATE_e = rtb_Comparison1_pu;
    AECR_ac_DW.UnitDelay3_DSTATE_d = rtb_NotEqual;
    if (KeAECR_b_AeCoastStatOvrrd)
    {
        /* VariantMerge generated from: '<S8>/VariantSource3' incorporates:
         *  Constant: '<S324>/Calib'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_VariantS =
            KeAECR_b_AeCoastStatOvrrdVal;
    }
    else
    {
        /* VariantMerge generated from: '<S8>/VariantSource3' incorporates:
         *  Inport: '<S8>/VeAECC_b_AeCoastStat'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_VariantS =
            AECR_ac_B.VariantMerge_For_Variant_Source_Variant_;
    }

    if (KeAECR_b_PopUpMessageOvrrd)
    {
        /* VariantMerge generated from: '<S8>/VariantSource' incorporates:
         *  Constant: '<S330>/Calib'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Vari_adz =
            KeAECR_e_PopUpMessageOvrrdVal;
    }
    else
    {
        /* VariantMerge generated from: '<S8>/VariantSource' incorporates:
         *  Inport: '<S8>/VeAECC_e_PopUpMessage'
         *  VariantMerge generated from: '<S6>/Variant Source4'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Vari_adz =
            AECR_ac_B.VariantMerge_For_Variant_Source_Varian_k;
    }

#else

    /* VariantMerge generated from: '<S8>/VariantSource3' incorporates:
     *  Inport: '<S8>/VeAECC_b_AeCoastStat'
     *  SignalConversion generated from: '<S8>/VariantSource3'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_VariantS =
        AECR_ac_B.VariantMerge_For_Variant_Source_Variant_;

#endif

    /* End of Update for UnitDelay: '<S14>/Unit Delay5' */

    /* Switch: '<S311>/Switch1' incorporates:
     *  Constant: '<S328>/Calib'
     *  SignalConversion generated from: '<S8>/VariantSource'
     */
#if Rte_SysCon_Variant_AECR_1

    if (KeAECR_b_TellTaleOvrrd)
    {
        /* VariantMerge generated from: '<S8>/VariantSource1' incorporates:
         *  Constant: '<S331>/Calib'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varian_c =
            KeAECR_e_TellTaleOvrrdVal;
    }
    else
    {
        /* VariantMerge generated from: '<S8>/VariantSource1' incorporates:
         *  Inport: '<S8>/VeAECC_e_TellTale'
         *  VariantMerge generated from: '<S6>/Variant Source3'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varian_c =
            AECR_ac_B.VariantMerge_For_Variant_Source_Varia_pl;
    }

#else

    /* VariantMerge generated from: '<S8>/VariantSource' incorporates:
     *  Inport: '<S8>/VeAECC_e_PopUpMessage'
     *  SignalConversion generated from: '<S8>/VariantSource'
     *  VariantMerge generated from: '<S6>/Variant Source4'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Vari_adz =
        AECR_ac_B.VariantMerge_For_Variant_Source_Varian_k;

#endif

    /* End of Switch: '<S311>/Switch1' */

    /* Switch: '<S313>/Switch1' incorporates:
     *  Constant: '<S320>/Calib'
     *  SignalConversion generated from: '<S8>/VariantSource1'
     */
#if Rte_SysCon_Variant_AECR_1

    if (KeAECR_b_AeCoastLEDOvrrd)
    {
        /* VariantMerge generated from: '<S8>/VariantSource2' incorporates:
         *  Constant: '<S329>/Calib'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varia_hl =
            KeAECR_e_AeCoastLEDOvrrdVal;
    }
    else
    {
        /* VariantMerge generated from: '<S8>/VariantSource2' incorporates:
         *  Inport: '<S8>/VeAECC_e_AeCoastLED'
         *  VariantMerge generated from: '<S6>/Variant Source2'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varia_hl =
            AECR_ac_B.VariantMerge_For_Variant_Source_Varian_i;
    }

#else

    /* VariantMerge generated from: '<S8>/VariantSource1' incorporates:
     *  Inport: '<S8>/VeAECC_e_TellTale'
     *  SignalConversion generated from: '<S8>/VariantSource1'
     *  VariantMerge generated from: '<S6>/Variant Source3'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_c =
        AECR_ac_B.VariantMerge_For_Variant_Source_Varia_pl;

#endif

    /* End of Switch: '<S313>/Switch1' */

    /* Switch: '<S315>/Switch1' incorporates:
     *  Constant: '<S325>/Calib'
     *  SignalConversion generated from: '<S8>/VariantSource2'
     */
#if Rte_SysCon_Variant_AECR_1

    if (KeAECR_b_AeCoastStat_ECMOvrrd)
    {
        /* VariantMerge generated from: '<S8>/VariantSource4' incorporates:
         *  Constant: '<S326>/Calib'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varian_a =
            KeAECR_b_AeCoastStat_ECMOvrrdVal;
    }
    else
    {
        /* VariantMerge generated from: '<S8>/VariantSource4' incorporates:
         *  Inport: '<S8>/VeAECC_b_AeCoastStat_ECM'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varian_a =
            AECR_ac_B.VariantMerge_For_Variant_Source_Varian_h;
    }

#else

    /* VariantMerge generated from: '<S8>/VariantSource2' incorporates:
     *  Inport: '<S8>/VeAECC_e_AeCoastLED'
     *  SignalConversion generated from: '<S8>/VariantSource2'
     *  VariantMerge generated from: '<S6>/Variant Source2'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varia_hl =
        AECR_ac_B.VariantMerge_For_Variant_Source_Varian_i;

#endif

    /* End of Switch: '<S315>/Switch1' */

    /* Switch: '<S316>/Switch1' incorporates:
     *  Constant: '<S321>/Calib'
     *  SignalConversion generated from: '<S8>/VariantSource4'
     *  SignalConversion generated from: '<S8>/VariantSource5'
     */
#if Rte_SysCon_Variant_AECR_1

    if (KeAECR_b_AeCoastRampFastOvrrd)
    {
        /* VariantMerge generated from: '<S8>/VariantSource5' incorporates:
         *  Constant: '<S322>/Calib'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
            KeAECR_b_AeCoastRampFastOvrrdVal;
    }
    else
    {
        /* VariantMerge generated from: '<S8>/VariantSource5' incorporates:
         *  Inport: '<S8>/VeAECC_b_AeCoastRampFast'
         */
        AECR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
            AECR_ac_B.VariantMerge_For_Variant_Source_Varian_j;
    }

#else

    /* VariantMerge generated from: '<S8>/VariantSource4' incorporates:
     *  Inport: '<S8>/VeAECC_b_AeCoastStat_ECM'
     *  SignalConversion generated from: '<S8>/VariantSource4'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_a =
        AECR_ac_B.VariantMerge_For_Variant_Source_Varian_h;

    /* VariantMerge generated from: '<S8>/VariantSource5' incorporates:
     *  Inport: '<S8>/VeAECC_b_AeCoastRampFast'
     *  SignalConversion generated from: '<S8>/VariantSource5'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
        AECR_ac_B.VariantMerge_For_Variant_Source_Varian_j;

#endif

    /* End of Switch: '<S316>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAECR_b_AeCoastRampFast' incorporates:
     *  SignalConversion generated from: '<S1>/VeAECR_b_AeCoastRampFast'
     */
    (void)Rte_Write_VeAECR_b_AeCoastRampFast_Value
        (AECR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* Outport: '<Root>/VeAECR_b_AeCoastStat' incorporates:
     *  SignalConversion generated from: '<S1>/VeAECR_b_AeCoastStat'
     */
    (void)Rte_Write_VeAECR_b_AeCoastStat_Value
        (AECR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* Outport: '<Root>/VeAECR_b_AeCoastStat_ECM' incorporates:
     *  SignalConversion generated from: '<S1>/VeAECR_b_AeCoastStat_ECM'
     */
    (void)Rte_Write_VeAECR_b_AeCoastStat_ECM_Value
        (AECR_ac_B.VariantMerge_For_Variant_Source_Varian_a);

    /* Outport: '<Root>/VeAECR_e_AeCoastLED' incorporates:
     *  SignalConversion generated from: '<S1>/VeAECR_e_AeCoastLED'
     *  VariantMerge generated from: '<S8>/VariantSource2'
     */
    (void)Rte_Write_VeAECR_e_AeCoastLED_Value
        (AECR_ac_B.VariantMerge_For_Variant_Source_Varia_hl);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AECO_Output'
     */
    /* Outport: '<Root>/VeAECR_e_AeCoastStat' incorporates:
     *  Inport: '<S8>/VeAECC_e_AeCoastStat'
     *  SignalConversion generated from: '<S1>/VeAECR_e_AeCoastStat'
     *  VariantMerge generated from: '<S6>/Variant Source7'
     */
    (void)Rte_Write_VeAECR_e_AeCoastStat_Value
        (AECR_ac_B.VariantMerge_For_Variant_Source_Varia_p3);

    /* Outport: '<Root>/VeAECR_e_PddlMdSatus' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion12'
     *  SignalConversion generated from: '<S1>/VeAECR_e_PddlMdStatus'
     *  Switch: '<S189>/Switch3'
     */
    (void)Rte_Write_VeAECR_e_PddlMdSatus_Value(Switch3);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAECR_e_PopUpMessage' incorporates:
     *  SignalConversion generated from: '<S1>/VeAECR_e_PopUpMessage'
     *  VariantMerge generated from: '<S8>/VariantSource'
     */
    (void)Rte_Write_VeAECR_e_PopUpMessage_Value
        (AECR_ac_B.VariantMerge_For_Variant_Source_Vari_adz);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AECO_Output'
     */
    /* Outport: '<Root>/VeAECR_e_RegenSts' incorporates:
     *  DataTypeConversion: '<S308>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeAECR_e_RegenSts'
     *  VariantMerge generated from: '<S81>/VariantSource'
     */
    (void)Rte_Write_VeAECR_e_RegenSts_Value
        (AECR_ac_B.VariantMerge_For_Variant_Source_Varia_ad);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAECR_e_TellTale' incorporates:
     *  SignalConversion generated from: '<S1>/VeAECR_e_TellTale'
     *  VariantMerge generated from: '<S8>/VariantSource1'
     */
    (void)Rte_Write_VeAECR_e_TellTale_Value
        (AECR_ac_B.VariantMerge_For_Variant_Source_Varian_c);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AECO_Output'
     */
    /* Outport: '<Root>/VeAECR_e_TellTaleInfo' incorporates:
     *  Constant: '<S318>/Calib'
     *  DataTypeConversion: '<S8>/Data Type Conversion9'
     *  Selector: '<S8>/Selector2'
     *  SignalConversion generated from: '<S1>/VeAECR_e_TellTaleInfo'
     *  Switch: '<S10>/Switch4'
     */
    (void)Rte_Write_VeAECR_e_TellTaleInfo_Value(KaAECR_e_TellTaleMap
        [(AECR_ac_B.Switch4)]);

    /* Outport: '<Root>/VeAECR_e_TellTaleSts' incorporates:
     *  DataTypeConversion: '<S310>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeAECR_e_TellTaleSts'
     *  Switch: '<S10>/Switch4'
     */
    (void)Rte_Write_VeAECR_e_TellTaleSts_Value(AECR_ac_B.Switch4);

    /* Outport: '<Root>/VeAECR_e_eCoastPopUpMsg' incorporates:
     *  Constant: '<S319>/Calib'
     *  DataTypeConversion: '<S8>/Data Type Conversion14'
     *  Selector: '<S8>/Selector5'
     *  SignalConversion generated from: '<S1>/VeAECR_e_eCoastPopUpMsg'
     */
    (void)Rte_Write_VeAECR_e_eCoastPopUpMsg_Value(KaAECR_e_eCoastPopUpMsgMap
        [(LeAECR_e_eCoastPopUpMsg)]);

    /* Outport: '<Root>/VeAECR_e_eCoast_PopUpRqst' incorporates:
     *  Constant: '<S317>/Calib'
     *  DataTypeConversion: '<S8>/Data Type Conversion10'
     *  Selector: '<S8>/Selector3'
     *  SignalConversion generated from: '<S10>/Variant Source2'
     *  SignalConversion generated from: '<S1>/VeAECR_e_eCoast_PopUpRqst'
     */
    (void)Rte_Write_VeAECR_e_eCoast_PopUpRqst_Value(KaAECR_e_PopUpRqst
        [(VeAECC_e_eCoast_PopUpRqst)]);

    /* Outport: '<Root>/VeAECR_e_eCoastingSel' incorporates:
     *  DataTypeConversion: '<S306>/DataTypeConversion'
     *  SignalConversion generated from: '<S10>/Variant Source3'
     *  SignalConversion generated from: '<S1>/VeAECR_e_eCoastingSel'
     */
    (void)Rte_Write_VeAECR_e_eCoastingSel_Value(VeAECC_e_eCoastingSel);

    /* Outport: '<Root>/VeAECR_e_eCoastingSts' incorporates:
     *  DataTypeConversion: '<S309>/DataTypeConversion'
     *  SignalConversion generated from: '<S10>/Variant Source'
     *  SignalConversion generated from: '<S1>/VeAECR_e_eCoastingSts'
     */
    (void)Rte_Write_VeAECR_e_eCoastingSts_Value(VeAECC_e_eCoastingSts);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, AECR_CODE) PokeAECR_e_ECoastingReq(VAR(TeDMIR_e_ECoastingReq,
    AUTOMATIC) ECoastingReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeAECR_e_ECoastingReq' */
    /* Merge: '<Root>/2' incorporates:
     *  SignalConversion generated from: '<S4>/ECoastingReq'
     *  SignalConversion generated from: '<S4>/VeAECR_e_ECoastingReq_write'
     */
    /* Gateway: PokeAECR_e_ECoastingReq/PokeAECR_e_ECoastingReqChrt */
    /* During: PokeAECR_e_ECoastingReq/PokeAECR_e_ECoastingReqChrt */
    /* Entry Internal: PokeAECR_e_ECoastingReq/PokeAECR_e_ECoastingReqChrt */
    /* Transition: '<S352>:2' */
    Rte_IrvWrite_PokeAECR_e_ECoastingReq_VeAECR_e_ECoastingReq_OutInit_IRV
        (ECoastingReq);

    /* End of Outputs for SubSystem: '<Root>/PokeAECR_e_ECoastingReq' */
}

/* Output function */
FUNC(void, AECR_CODE) PokeAECR_e_PaddleModeReq(VAR(TeDMIR_e_PaddleModeRequest,
    AUTOMATIC) ETM_PaddlesModeReq, VAR(boolean, AUTOMATIC) ETM_PaddlesModeReqFa)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeAECR_e_PaddleModeReq' */
    /* Chart: '<S5>/PokeAECR_e_PaddlesModeReqChrt' incorporates:
     *  SignalConversion generated from: '<S5>/ETM_PaddlesModeReqFa'
     */
    /* Gateway: PokeAECR_e_PaddleModeReq/PokeAECR_e_PaddlesModeReqChrt */
    /* During: PokeAECR_e_PaddleModeReq/PokeAECR_e_PaddlesModeReqChrt */
    /* Entry Internal: PokeAECR_e_PaddleModeReq/PokeAECR_e_PaddlesModeReqChrt */
    /* Transition: '<S353>:2' */
    if (!ETM_PaddlesModeReqFa)
    {
        /* SignalConversion generated from: '<S5>/VeAECR_e_PddlMdReq_write' incorporates:
         *  Merge: '<Root>/3'
         *  SignalConversion generated from: '<S5>/ETM_PaddlesModeReq'
         */
        /* Transition: '<S353>:3' */
        /* Transition: '<S353>:15' */
        Rte_IrvWrite_PokeAECR_e_PaddleModeReq_VeAECR_e_PddlMdReq_OutInit_IRV
            (ETM_PaddlesModeReq);

        /* Transition: '<S353>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S5>/VeAECR_e_PddlMdReq_write' incorporates:
         *  Merge: '<Root>/3'
         */
        /* Transition: '<S353>:4' */
        Rte_IrvWrite_PokeAECR_e_PaddleModeReq_VeAECR_e_PddlMdReq_OutInit_IRV
            (KeAECR_e_PaddlesModeReqDflt);
    }

    /* End of Chart: '<S5>/PokeAECR_e_PaddlesModeReqChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeAECR_e_PaddleModeReq' */
}

/* Output function */
FUNC(void, AECR_CODE) AECR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/AECR_PwrOff'
     */
    /* Outport: '<Root>/EeAECR_e_MaxRegenDsrdSt_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeAECR_e_MaxRegenDsrdSt'
     */
    (void)Rte_Write_EeAECR_e_MaxRegenDsrdSt_EeAECR_e_MaxRegenDsrdSt
        (EeAECR_e_MaxRegenDsrdSt);

    /* Outport: '<Root>/NeAECR_e_eCoastLvlLatched_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeAECR_e_eCoastLvlLatched'
     */
    (void)Rte_Write_NeAECR_e_eCoastLvlLatched_NeAECR_e_eCoastLvlLatched
        (AECR_ac_DW.NeAECR_e_eCoastLvlLatched);

    /* Outport: '<Root>/NeAECR_e_RegenSts_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeAECR_e_RegenSts'
     */
    (void)Rte_Write_NeAECR_e_RegenSts_NeAECR_e_RegenSts
        (AECR_ac_DW.NeAECR_e_RegenSts);

    /* Outport: '<Root>/NeAECR_e_eCoastDefaultAuto_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeAECR_e_eCoastDefaultAuto'
     */
    (void)Rte_Write_NeAECR_e_eCoastDefaultAuto_NeAECR_e_eCoastDefaultAuto
        (AECR_ac_DW.NeAECR_e_eCoastDefaultAuto);

    /* Outport: '<Root>/NeAECR_e_eCoastDefaultCustom_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeAECR_e_eCoastDefaultCustom'
     */
    (void)Rte_Write_NeAECR_e_eCoastDefaultCustom_NeAECR_e_eCoastDefaultCustom
        (AECR_ac_DW.NeAECR_e_eCoastDefaultCustom);

    /* Outport: '<Root>/NeAECR_e_RaceModeSts_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeAECR_e_RaceModeSts'
     */
    (void)Rte_Write_NeAECR_e_RaceModeSts_NeAECR_e_RaceModeSts
        (AECR_ac_DW.NeAECR_e_RaceModeSts);

    /* Outport: '<Root>/NeAECR_e_PddlMdStatus_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeAECR_e_PddlMdStatus'
     */
    (void)Rte_Write_NeAECR_e_PddlMdStatus_NeAECR_e_PddlMdStatus
        (AECR_ac_DW.NeAECR_e_PddlMdStatus);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, AECR_CODE) AECR_PwrOn(void)
{
    TeDMIR_e_eCoastSel rtb_TmpSignalConversionAtNeAECR_e_eCoast;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/AECR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S333>/NeAECR_e_PddlMdStatus' incorporates:
     *  Inport: '<Root>/NeAECR_e_PddlMdStatus_PM_In'
     */
    (void)Rte_Read_NeAECR_e_PddlMdStatus_Rx_NeAECR_e_PddlMdStatus
        (&AECR_ac_DW.NeAECR_e_PddlMdStatus);

    /* DataStoreWrite: '<S333>/NeAECR_e_RaceModeSts' incorporates:
     *  Inport: '<Root>/NeAECR_e_RaceModeSts_PM_In'
     */
    (void)Rte_Read_NeAECR_e_RaceModeSts_Rx_NeAECR_e_RaceModeSts
        (&AECR_ac_DW.NeAECR_e_RaceModeSts);

    /* DataStoreWrite: '<S333>/NeAECR_e_eCoastDefaultCustom' incorporates:
     *  Inport: '<Root>/NeAECR_e_eCoastDefaultCustom_PM_In'
     */
    (void)Rte_Read_NeAECR_e_eCoastDefaultCustom_Rx_NeAECR_e_eCoastDefaultCustom(
        &AECR_ac_DW.NeAECR_e_eCoastDefaultCustom);

    /* DataStoreWrite: '<S333>/NeAECR_e_eCoastDefaultAuto' incorporates:
     *  Inport: '<Root>/NeAECR_e_eCoastDefaultAuto_PM_In'
     */
    (void)Rte_Read_NeAECR_e_eCoastDefaultAuto_Rx_NeAECR_e_eCoastDefaultAuto
        (&AECR_ac_DW.NeAECR_e_eCoastDefaultAuto);

    /* DataStoreWrite: '<S333>/NeAECR_e_RegenSts' incorporates:
     *  Inport: '<Root>/NeAECR_e_RegenSts_PM_In'
     */
    (void)Rte_Read_NeAECR_e_RegenSts_Rx_NeAECR_e_RegenSts
        (&AECR_ac_DW.NeAECR_e_RegenSts);

    /* DataStoreWrite: '<S333>/EeAECR_e_MaxRegenDsrdSt' incorporates:
     *  Inport: '<Root>/EeAECR_e_MaxRegenDsrdSt_PM_In'
     */
    (void)Rte_Read_EeAECR_e_MaxRegenDsrdSt_Rx_EeAECR_e_MaxRegenDsrdSt
        ((&(EeAECR_e_MaxRegenDsrdSt)));

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* SignalConversion generated from: '<S3>/NeAECR_e_eCoastLvlLatched_In' incorporates:
     *  Inport: '<Root>/NeAECR_e_eCoastLvlLatched_PM_In'
     */
    (void)Rte_Read_NeAECR_e_eCoastLvlLatched_Rx_NeAECR_e_eCoastLvlLatched
        (&rtb_TmpSignalConversionAtNeAECR_e_eCoast);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/AECO_InitNF'
     */
    /* SignalConversion generated from: '<S332>/VeAECR_e_PopUpNF' incorporates:
     *  Constant: '<S348>/Calib'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_PopUpNF = KeAECR_e_PopUpInit;

    /* SignalConversion generated from: '<S332>/VeAECR_e_TelltaleNF' incorporates:
     *  Constant: '<S349>/Calib'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_TelltaleNF = KeAECR_e_TelltaleInit;

    /* SignalConversion generated from: '<S332>/VeAECR_e_LEDNF' incorporates:
     *  Constant: '<S347>/Calib'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_LEDNF = KeAECR_e_LEDInit;

    /* SignalConversion generated from: '<S332>/VeAECR_b_AeCoastStatInitNF' incorporates:
     *  Constant: '<S345>/Calib'
     */
    AECR_ac_B.OutportBufferForVeAECR_b_AeCoastStatInit =
        KeAECR_b_AeCoastStatInitNF;

    /* SignalConversion generated from: '<S332>/VeAECO_b_AeCoastStatECMNF' incorporates:
     *  Constant: '<S344>/Calib'
     */
    AECR_ac_B.OutportBufferForVeAECO_b_AeCoastStatECMN =
        KeAECR_b_AeCoastStatECMInitNF;

    /* SignalConversion generated from: '<S332>/VeAECO_b_AeCoastRampFast' */
    AECR_ac_B.OutportBufferForVeAECO_b_AeCoastRampFast = false;

    /* SignalConversion generated from: '<S332>/VeAECO_e_AeCoastStat' incorporates:
     *  Constant: '<S346>/Calib'
     */
    AECR_ac_B.OutportBufferForVeAECO_e_AeCoastStat = KeAECR_e_Aecoasting_StsInit;

    /* SignalConversion generated from: '<S332>/VeAECR_e_RegenSts_OutInit' incorporates:
     *  Constant: '<S334>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_RegenSts_OutIni =
        AECR_ac_ConstB.Constant_ae;

    /* SignalConversion generated from: '<S332>/VeAECR_e_eCoastingSts_OutInit' incorporates:
     *  Constant: '<S336>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_eCoastingSts_Ou = AECR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S332>/VeAECR_e_TellTaleSts_OutInit' incorporates:
     *  Constant: '<S337>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_TellTaleSts_Out =
        AECR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S332>/VeAECR_e_TellTaleInfo_OutInit' incorporates:
     *  Constant: '<S342>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_TellTaleInfo_Ou =
        AECR_ac_ConstB.Constant_k5;

    /* SignalConversion generated from: '<S332>/VeAECR_e_eCoastingSel_OutInit' incorporates:
     *  Constant: '<S339>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_eCoastingSel_Ou =
        AECR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S332>/VeAECR_e_eCoast_PopUpRqst_OutInit' incorporates:
     *  Constant: '<S340>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_eCoast_PopUpRqs =
        AECR_ac_ConstB.Constant_bp;

    /* SignalConversion generated from: '<S332>/VeAECR_e_PddlMdSatus_OutInit' incorporates:
     *  Constant: '<S338>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_PddlMdSatus_Out =
        AECR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S332>/VeAECR_e_eCoastPopUpMsg_OutInit' incorporates:
     *  Constant: '<S341>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_eCoastPopUpMsg_ =
        AECR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S332>/VeAECR_e_ECoastingReq_OutInit' incorporates:
     *  Constant: '<S343>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_ECoastingReq_Ou =
        AECR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S332>/VeAECR_e_PddlMdReq_OutInit' incorporates:
     *  Constant: '<S335>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_PddlMdReq_OutIn =
        AECR_ac_ConstB.Constant_e;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* Switch: '<S333>/Switch' incorporates:
     *  Constant: '<S350>/Constant'
     *  Constant: '<S351>/Calib'
     *  DataStoreWrite: '<S333>/NeAECR_e_eCoastLvlLatched'
     *  RelationalOperator: '<S333>/Equal'
     */
    if (((uint32)rtb_TmpSignalConversionAtNeAECR_e_eCoast) != CeDMIR_e_NotAvail)
    {
        AECR_ac_DW.NeAECR_e_eCoastLvlLatched =
            rtb_TmpSignalConversionAtNeAECR_e_eCoast;
    }
    else
    {
        AECR_ac_DW.NeAECR_e_eCoastLvlLatched = KeAECR_e_eCoastInitLvl;
    }

    /* End of Switch: '<S333>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeAECR_b_AeCoastRampFast' incorporates:
     *  SignalConversion generated from: '<S3>/VeAECO_b_AeCoastRampFast'
     */
    (void)Rte_Write_VeAECR_b_AeCoastRampFast_Value
        (AECR_ac_B.OutportBufferForVeAECO_b_AeCoastRampFast);

    /* Outport: '<Root>/VeAECR_b_AeCoastStat_ECM' incorporates:
     *  SignalConversion generated from: '<S3>/VeAECO_b_AeCoastStatECMNF'
     */
    (void)Rte_Write_VeAECR_b_AeCoastStat_ECM_Value
        (AECR_ac_B.OutportBufferForVeAECO_b_AeCoastStatECMN);

    /* Outport: '<Root>/VeAECR_e_AeCoastStat' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECO_e_AeCoastStat'
     *  SignalConversion generated from: '<S3>/VeAECO_e_AeCoastStat'
     */
    (void)Rte_Write_VeAECR_e_AeCoastStat_Value
        (AECR_ac_B.OutportBufferForVeAECO_e_AeCoastStat);

    /* Outport: '<Root>/VeAECR_b_AeCoastStat' incorporates:
     *  SignalConversion generated from: '<S3>/VeAECR_b_AeCoastStatInitNF'
     */
    (void)Rte_Write_VeAECR_b_AeCoastStat_Value
        (AECR_ac_B.OutportBufferForVeAECR_b_AeCoastStatInit);

    /* Outport: '<Root>/VeAECR_e_AeCoastLED' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECR_e_LEDNF'
     *  SignalConversion generated from: '<S3>/VeAECR_e_LEDNF'
     */
    (void)Rte_Write_VeAECR_e_AeCoastLED_Value
        (AECR_ac_B.OutportBufferForVeAECR_e_LEDNF);

    /* Outport: '<Root>/VeAECR_e_PddlMdSatus' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECR_e_PddlMdSatus_OutInit'
     *  SignalConversion generated from: '<S3>/VeAECR_e_PddlMdSatus_OutInit'
     */
    (void)Rte_Write_VeAECR_e_PddlMdSatus_Value
        (AECR_ac_B.OutportBufferForVeAECR_e_PddlMdSatus_Out);

    /* Outport: '<Root>/VeAECR_e_PopUpMessage' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECR_e_PopUpNF'
     *  SignalConversion generated from: '<S3>/VeAECR_e_PopUpNF'
     */
    (void)Rte_Write_VeAECR_e_PopUpMessage_Value
        (AECR_ac_B.OutportBufferForVeAECR_e_PopUpNF);

    /* Outport: '<Root>/VeAECR_e_RegenSts' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECR_e_RegenSts_OutInit'
     *  SignalConversion generated from: '<S3>/VeAECR_e_RegenSts_OutInit'
     */
    (void)Rte_Write_VeAECR_e_RegenSts_Value
        (AECR_ac_B.OutportBufferForVeAECR_e_RegenSts_OutIni);

    /* Outport: '<Root>/VeAECR_e_TellTaleInfo' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECR_e_TellTaleInfo_OutInit'
     *  SignalConversion generated from: '<S3>/VeAECR_e_TellTaleInfo_OutInit'
     */
    (void)Rte_Write_VeAECR_e_TellTaleInfo_Value
        (AECR_ac_B.OutportBufferForVeAECR_e_TellTaleInfo_Ou);

    /* Outport: '<Root>/VeAECR_e_TellTaleSts' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECR_e_TellTaleSts_OutInit'
     *  SignalConversion generated from: '<S3>/VeAECR_e_TellTaleSts_OutInit'
     */
    (void)Rte_Write_VeAECR_e_TellTaleSts_Value
        (AECR_ac_B.OutportBufferForVeAECR_e_TellTaleSts_Out);

    /* Outport: '<Root>/VeAECR_e_TellTale' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECR_e_TelltaleNF'
     *  SignalConversion generated from: '<S3>/VeAECR_e_TelltaleNF'
     */
    (void)Rte_Write_VeAECR_e_TellTale_Value
        (AECR_ac_B.OutportBufferForVeAECR_e_TelltaleNF);

    /* Outport: '<Root>/VeAECR_e_eCoastPopUpMsg' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECR_e_eCoastPopUpMsg_OutInit'
     *  SignalConversion generated from: '<S3>/VeAECR_e_eCoastPopUpMsg_OutInit'
     */
    (void)Rte_Write_VeAECR_e_eCoastPopUpMsg_Value
        (AECR_ac_B.OutportBufferForVeAECR_e_eCoastPopUpMsg_);

    /* Outport: '<Root>/VeAECR_e_eCoast_PopUpRqst' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECR_e_eCoast_PopUpRqst_OutInit'
     *  SignalConversion generated from: '<S3>/VeAECR_e_eCoast_PopUpRqst_OutInit'
     */
    (void)Rte_Write_VeAECR_e_eCoast_PopUpRqst_Value
        (AECR_ac_B.OutportBufferForVeAECR_e_eCoast_PopUpRqs);

    /* Outport: '<Root>/VeAECR_e_eCoastingSel' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECR_e_eCoastingSel_OutInit'
     *  SignalConversion generated from: '<S3>/VeAECR_e_eCoastingSel_OutInit'
     */
    (void)Rte_Write_VeAECR_e_eCoastingSel_Value
        (AECR_ac_B.OutportBufferForVeAECR_e_eCoastingSel_Ou);

    /* Outport: '<Root>/VeAECR_e_eCoastingSts' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECR_e_eCoastingSts_OutInit'
     *  SignalConversion generated from: '<S3>/VeAECR_e_eCoastingSts_OutInit'
     */
    (void)Rte_Write_VeAECR_e_eCoastingSts_Value
        (AECR_ac_B.OutportBufferForVeAECR_e_eCoastingSts_Ou);

    /* Merge: '<Root>/2' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECR_e_ECoastingReq_OutInit'
     *  SignalConversion generated from: '<S3>/VeAECR_e_ECoastingReq_OutInit'
     * */
    Rte_IrvWrite_AECR_PwrOn_VeAECR_e_ECoastingReq_OutInit_IRV
        (AECR_ac_B.OutportBufferForVeAECR_e_ECoastingReq_Ou);

    /* Merge: '<Root>/3' incorporates:
     *  SignalConversion generated from: '<S332>/VeAECR_e_PddlMdReq_OutInit'
     *  SignalConversion generated from: '<S3>/VeAECR_e_PddlMdReq_OutInit'
     * */
    Rte_IrvWrite_AECR_PwrOn_VeAECR_e_PddlMdReq_OutInit_IRV
        (AECR_ac_B.OutportBufferForVeAECR_e_PddlMdReq_OutIn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, AECR_CODE) AECR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        AECR_ac_B.OutportBufferForVeAECR_e_eCoastingSel_Ou = CeDMIR_e_Level1;
        AECR_ac_B.LeAECR_e_eCoastingSel = CeDMIR_e_Level1;
        AECR_ac_B.eCoastOld = CeDMIR_e_Level1;
        AECR_ac_B.eCoastOld_d = CeDMIR_e_Level1;
        AECR_ac_B.VariantMerge_For_Variant_Source_Varian_p = CeDMIR_e_Level1;
        AECR_ac_B.OutportBufferForVeAECR_e_TellTaleSts_Out = CeDMIR_e_Level1Sts;
        AECR_ac_B.LeAECR_e_TellTaleSts = CeDMIR_e_Level1Sts;
        AECR_ac_B.LeAECR_e_PopUpRqst = CeDMIR_e_Level1Sts;
        AECR_ac_B.Switch4 = CeDMIR_e_Level1Sts;
        AECR_ac_B.OutportBufferForVeAECR_e_TellTaleInfo_Ou = CeDMIR_e_InfoLevel1;
        AECR_ac_B.OutportBufferForVeAECR_e_eCoast_PopUpRqs = CeDMIR_e_InfoLevel1;
        AECR_ac_B.OutportBufferForVeAECR_e_ECoastingReq_Ou = CeDMIR_e_LevelOne;
        AECR_ac_B.OutportBufferForVeAECO_e_AeCoastStat =
            CeAECR_e_AecoastingTemporarily_Unavailable;
        AECR_ac_B.VariantMerge_For_Variant_Source_Varia_p3 =
            CeAECR_e_AecoastingTemporarily_Unavailable;
    }

    /* custom signals */
    VeAECR_e_eCoastLvlLatched = CeDMIR_e_Level1;
    VeAECC_e_eCoastingSel = CeDMIR_e_Level1;
    VeAECC_e_TellTaleSts = CeDMIR_e_Level1Sts;
    VeAECC_e_eCoast_PopUpRqst = CeDMIR_e_Level1Sts;

#if Rte_SysCon_Variant_AECR_1

    VeAECR_e_MaxRegenDsrdStRaw = CeAECR_e_MaxRegenDsrdFault;

#endif

#if Rte_SysCon_Variant_AECR_1

    VeAECR_e_MaxRegenDsrdStOvrd = CeAECR_e_MaxRegenDsrdFault;

#endif

#if Rte_SysCon_Variant_AECR_1

    VeAECR_e_MaxRegenDsrdSt = CeAECR_e_MaxRegenDsrdFault;

#endif

#if Rte_SysCon_Variant_AECR_1

    VeAECC_e_AeCoast_State = CeAECR_e_AeCoastStNotActive;

#endif

    /* Start for DataStoreMemory: '<Root>/DSM_NeAECR_e_PddlMdStatus' */
    AECR_ac_DW.NeAECR_e_PddlMdStatus = CeDMIR_e_En;

    /* Start for DataStoreMemory: '<Root>/DSM_NeAECR_e_eCoastDefaultAuto' */
    AECR_ac_DW.NeAECR_e_eCoastDefaultAuto = CeDMIR_e_Level0;

    /* Start for DataStoreMemory: '<Root>/DSM_NeAECR_e_eCoastDefaultCustom' */
    AECR_ac_DW.NeAECR_e_eCoastDefaultCustom = CeDMIR_e_Level0;

    /* Start for DataStoreMemory: '<Root>/DSM_NeAECR_e_eCoastLvlLatched' */
    AECR_ac_DW.NeAECR_e_eCoastLvlLatched = CeDMIR_e_NotAvail;
    AECR_ac_PrevZCX.IfActionSubsystem2_Trig_ZCE_d = POS_ZCSIG;
    AECR_ac_PrevZCX.IfActionSubsystem2_Trig_ZCE = POS_ZCSIG;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/AECR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/AECO_InitNF'
     */
    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_e_PopUpNF' incorporates:
     *  Constant: '<S348>/Calib'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_PopUpNF = KeAECR_e_PopUpInit;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_e_TelltaleNF' incorporates:
     *  Constant: '<S349>/Calib'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_TelltaleNF = KeAECR_e_TelltaleInit;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_e_LEDNF' incorporates:
     *  Constant: '<S347>/Calib'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_LEDNF = KeAECR_e_LEDInit;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_b_AeCoastStatInitNF' incorporates:
     *  Constant: '<S345>/Calib'
     */
    AECR_ac_B.OutportBufferForVeAECR_b_AeCoastStatInit =
        KeAECR_b_AeCoastStatInitNF;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECO_b_AeCoastStatECMNF' incorporates:
     *  Constant: '<S344>/Calib'
     */
    AECR_ac_B.OutportBufferForVeAECO_b_AeCoastStatECMN =
        KeAECR_b_AeCoastStatECMInitNF;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECO_e_AeCoastStat' incorporates:
     *  Constant: '<S346>/Calib'
     */
    AECR_ac_B.OutportBufferForVeAECO_e_AeCoastStat = KeAECR_e_Aecoasting_StsInit;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_e_RegenSts_OutInit' incorporates:
     *  Constant: '<S334>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_RegenSts_OutIni =
        AECR_ac_ConstB.Constant_ae;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_e_eCoastingSts_OutInit' incorporates:
     *  Constant: '<S336>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_eCoastingSts_Ou = AECR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_e_TellTaleSts_OutInit' incorporates:
     *  Constant: '<S337>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_TellTaleSts_Out =
        AECR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_e_TellTaleInfo_OutInit' incorporates:
     *  Constant: '<S342>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_TellTaleInfo_Ou =
        AECR_ac_ConstB.Constant_k5;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_e_eCoastingSel_OutInit' incorporates:
     *  Constant: '<S339>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_eCoastingSel_Ou =
        AECR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_e_eCoast_PopUpRqst_OutInit' incorporates:
     *  Constant: '<S340>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_eCoast_PopUpRqs =
        AECR_ac_ConstB.Constant_bp;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_e_PddlMdSatus_OutInit' incorporates:
     *  Constant: '<S338>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_PddlMdSatus_Out =
        AECR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_e_eCoastPopUpMsg_OutInit' incorporates:
     *  Constant: '<S341>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_eCoastPopUpMsg_ =
        AECR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_e_ECoastingReq_OutInit' incorporates:
     *  Constant: '<S343>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_ECoastingReq_Ou =
        AECR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S332>/VeAECR_e_PddlMdReq_OutInit' incorporates:
     *  Constant: '<S335>/Constant'
     */
    AECR_ac_B.OutportBufferForVeAECR_e_PddlMdReq_OutIn =
        AECR_ac_ConstB.Constant_e;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/AECR_MedTEB'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AECC'
     */
    /* InitializeConditions for Delay: '<S84>/Integer Delay' */
    AECR_ac_DW.IntegerDelay_DSTATE_j = CeDMIR_e_Level0;

    /* InitializeConditions for UnitDelay: '<S169>/Unit Delay' */
    AECR_ac_DW.UnitDelay_DSTATE_b = CeDMIR_e_LevelOne;

    /* SystemInitialize for SignalConversion generated from: '<S81>/VariantSource' */
#if Rte_SysCon_Variant_AECR_3

    /* SystemInitialize for VariantMerge generated from: '<S81>/VariantSource' incorporates:
     *  Chart: '<S142>/Drive_Mode_Selection'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varia_ad = CeDMIR_e_NormalRegen;

#else

    /* SystemInitialize for VariantMerge generated from: '<S81>/VariantSource' incorporates:
     *  Constant: '<S143>/Constant'
     *  SignalConversion generated from: '<S81>/VariantSource'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varia_ad = AECR_ac_B.Constant;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S81>/VariantSource' */

    /* SystemInitialize for Triggered SubSystem: '<S245>/If Action Subsystem2' */
    /* SystemInitialize for Outport: '<S256>/eCoastAuto' incorporates:
     *  Inport: '<S256>/eCoastOld'
     */
    AECR_ac_B.eCoastOld_d = CeDMIR_e_Level1;

    /* End of SystemInitialize for SubSystem: '<S245>/If Action Subsystem2' */

    /* SystemInitialize for Triggered SubSystem: '<S246>/If Action Subsystem2' */
    /* SystemInitialize for Outport: '<S260>/eCoastCustom' incorporates:
     *  Inport: '<S260>/eCoastOld'
     */
    AECR_ac_B.eCoastOld = CeDMIR_e_Level1;

    /* End of SystemInitialize for SubSystem: '<S246>/If Action Subsystem2' */

    /* SystemInitialize for Chart: '<S84>/eCoasting_paddles' */
    AECR_ac_B.LeAECR_e_TellTaleSts = CeDMIR_e_NA;
    AECR_ac_B.LeAECR_e_PopUpRqst = CeDMIR_e_NA;
    AECR_ac_B.LeAECR_e_eCoastingSel = CeDMIR_e_NotAvail;

    /* SystemInitialize for SignalConversion generated from: '<S10>/Variant Source2' incorporates:
     *  Switch: '<S10>/Switch4'
     */
    VeAECC_e_eCoast_PopUpRqst = AECR_ac_B.Switch4;

    /* SystemInitialize for SignalConversion generated from: '<S10>/Variant Source3' incorporates:
     *  VariantMerge generated from: '<S10>/Variant Source3'
     */
    VeAECC_e_eCoastingSel = AECR_ac_B.VariantMerge_For_Variant_Source_Varian_p;

    /* SystemInitialize for SignalConversion generated from: '<S10>/Variant Source' incorporates:
     *  VariantMerge generated from: '<S10>/Variant Source'
     */
    VeAECC_e_eCoastingSts = AECR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk;

    /* SystemInitialize for SignalConversion generated from: '<S10>/Variant Source3' incorporates:
     *  SignalConversion generated from: '<S10>/Variant Source'
     * */
#if Rte_SysCon_Variant_AECR_2

    /* SystemInitialize for VariantMerge generated from: '<S10>/Variant Source3' */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_p =
        AECR_ac_B.LeAECR_e_eCoastingSel;

    /* SystemInitialize for VariantMerge generated from: '<S10>/Variant Source' */
    AECR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk =
        AECR_ac_B.LeAECR_e_eCoastingSts;

#else

    /* SystemInitialize for VariantMerge generated from: '<S10>/Variant Source3' incorporates:
     *  Constant: '<S168>/Constant'
     *  SignalConversion generated from: '<S10>/Variant Source3'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_p = CeDMIR_e_NotAvail;

    /* SystemInitialize for VariantMerge generated from: '<S10>/Variant Source' incorporates:
     *  Constant: '<S165>/Constant'
     *  SignalConversion generated from: '<S10>/Variant Source'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Vari_hyk = CeDMIR_e_NotAvailable;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S10>/Variant Source3' */

    /* SystemInitialize for Chart: '<S9>/AeCoast_Arbitration' incorporates:
     *  SignalConversion generated from: '<S6>/Variant Source3'
     *  SignalConversion generated from: '<S6>/Variant Source4'
     * */
#if Rte_SysCon_Variant_AECR_1

    /* SystemInitialize for VariantMerge generated from: '<S6>/Variant Source3' */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varia_pl = AECR_ac_B.TellTale;

    /* SystemInitialize for VariantMerge generated from: '<S6>/Variant Source4' */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_k = AECR_ac_B.PopUpMessage;

#else

    /* SystemInitialize for VariantMerge generated from: '<S6>/Variant Source3' incorporates:
     *  Constant: '<S76>/Constant'
     *  SignalConversion generated from: '<S6>/Variant Source3'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varia_pl =
        AECR_ac_ConstB.Constant_bq;

    /* SystemInitialize for VariantMerge generated from: '<S6>/Variant Source4' incorporates:
     *  Constant: '<S75>/Constant'
     *  SignalConversion generated from: '<S6>/Variant Source4'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varian_k =
        AECR_ac_ConstB.Constant_bb;

#endif

    /* End of SystemInitialize for Chart: '<S9>/AeCoast_Arbitration' */

    /* SystemInitialize for VariantMerge generated from: '<S6>/Variant Source7' incorporates:
     *  Outport: '<S6>/VeAECC_e_AeCoastStat'
     */
    AECR_ac_B.VariantMerge_For_Variant_Source_Varia_p3 =
        CeAECR_e_AecoastingTemporarily_Unavailable;

    /* SystemInitialize for Switch: '<S10>/Switch4' incorporates:
     *  Outport: '<S6>/VeAECC_e_TellTaleSts'
     */
    AECR_ac_B.Switch4 = CeDMIR_e_Level1Sts;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* SystemInitialize for Outport: '<Root>/VeAECR_e_PopUpMessage' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    (void)Rte_Write_VeAECR_e_PopUpMessage_Value(CeAECR_e_MaxRegenOff);

    /* SystemInitialize for Outport: '<Root>/VeAECR_e_TellTale' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    (void)Rte_Write_VeAECR_e_TellTale_Value(CeAECR_e_TelltaleOff);

    /* SystemInitialize for Outport: '<Root>/VeAECR_e_AeCoastLED' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    (void)Rte_Write_VeAECR_e_AeCoastLED_Value(CeAECR_e_LEDOff);

    /* SystemInitialize for Outport: '<Root>/VeAECR_e_AeCoastStat' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    (void)Rte_Write_VeAECR_e_AeCoastStat_Value
        (CeAECR_e_AecoastingTemporarily_Unavailable);

    /* SystemInitialize for Outport: '<Root>/VeAECR_e_RegenSts' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    (void)Rte_Write_VeAECR_e_RegenSts_Value(CeDMIR_e_NormalRegen);

    /* SystemInitialize for Outport: '<Root>/VeAECR_e_eCoastingSts' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    (void)Rte_Write_VeAECR_e_eCoastingSts_Value(CeDMIR_e_NotAvailable);

    /* SystemInitialize for Outport: '<Root>/VeAECR_e_TellTaleSts' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeAECR_e_TellTaleSts_Value(CeDMIR_e_Level1Sts);

    /* SystemInitialize for Outport: '<Root>/VeAECR_e_eCoastingSel' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    (void)Rte_Write_VeAECR_e_eCoastingSel_Value(CeDMIR_e_Level1);

    /* SystemInitialize for Outport: '<Root>/VeAECR_e_eCoast_PopUpRqst' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    (void)Rte_Write_VeAECR_e_eCoast_PopUpRqst_Value(CeDMIR_e_InfoLevel1);

    /* SystemInitialize for Outport: '<Root>/VeAECR_e_PddlMdSatus' incorporates:
     *  Merge: '<Root>/Merge_13'
     */
    (void)Rte_Write_VeAECR_e_PddlMdSatus_Value(CeDMIR_e_None);

    /* SystemInitialize for Outport: '<Root>/VeAECR_e_eCoastPopUpMsg' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    (void)Rte_Write_VeAECR_e_eCoastPopUpMsg_Value(CeDMIR_e_Msg0);

    /* SystemInitialize for Outport: '<Root>/VeAECR_e_TellTaleInfo' incorporates:
     *  Merge: '<Root>/Merge_Outport_34'
     */
    (void)Rte_Write_VeAECR_e_TellTaleInfo_Value(CeDMIR_e_InfoLevel1);

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/AECR_PwrOff'
     */
    /* SystemInitialize for Outport: '<Root>/NeAECR_e_eCoastLvlLatched_PM_Out' incorporates:
     *  Outport: '<S2>/NeAECR_e_eCoastLvlLatched_PM_Out'
     */
    (void)Rte_Write_NeAECR_e_eCoastLvlLatched_NeAECR_e_eCoastLvlLatched
        (CeDMIR_e_Level1);

    /* SystemInitialize for Outport: '<Root>/NeAECR_e_eCoastDefaultAuto_PM_Out' incorporates:
     *  Outport: '<S2>/NeAECR_e_eCoastDefaultAuto_PM_Out'
     */
    (void)Rte_Write_NeAECR_e_eCoastDefaultAuto_NeAECR_e_eCoastDefaultAuto
        (CeDMIR_e_Level1);

    /* SystemInitialize for Outport: '<Root>/NeAECR_e_eCoastDefaultCustom_PM_Out' incorporates:
     *  Outport: '<S2>/NeAECR_e_eCoastDefaultCustom_PM_Out'
     */
    (void)Rte_Write_NeAECR_e_eCoastDefaultCustom_NeAECR_e_eCoastDefaultCustom
        (CeDMIR_e_Level1);

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
