/*
 * File: BRKR_ac.c
 *
 * Code generated for Simulink model 'BRKR_ac'.
 *
 * Model version                  : 9.179
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:11:09 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BRKR_ac.h"

/* Named constants for Chart: '<S87>/P25BA_Diag' */
#if Rte_SysCon_Variant_BRKR_1
#define BRKR_ac_IN_DEBOUNCE            ((uint8)1U)
#endif

#if Rte_SysCon_Variant_BRKR_1
#define BRKR_ac_IN_FAIL_MISMATCH       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_BRKR_1
#define BRKR_ac_IN_FAIL_PRESSED        ((uint8)3U)
#endif

#if Rte_SysCon_Variant_BRKR_1
#define BRKR_ac_IN_IDLE                ((uint8)1U)
#endif

#if Rte_SysCon_Variant_BRKR_1
#define BRKR_ac_IN_MISMATCH            ((uint8)4U)
#endif

#if Rte_SysCon_Variant_BRKR_1
#define BRKR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_BRKR_1
#define BRKR_ac_IN_PASS                ((uint8)5U)
#endif

#if Rte_SysCon_Variant_BRKR_1
#define BRKR_ac_IN_PRESSED             ((uint8)2U)
#endif

#if Rte_SysCon_Variant_BRKR_1
#define BRKR_ac_IN_UNPRESSED           ((uint8)3U)
#endif

/* Named constants for Chart: '<S87>/P25BB_Diag' */
#if Rte_SysCon_Variant_BRKR_1
#define BRKR_ac_IN_FAIL                ((uint8)1U)
#endif

#if Rte_SysCon_Variant_BRKR_1
#define BRKR_ac_IN_IDLE_h              ((uint8)2U)
#endif

#if Rte_SysCon_Variant_BRKR_1
#define BRKR_ac_IN_PASS_j              ((uint8)3U)
#endif

#if Rte_SysCon_Variant_BRKR_1
#define BRKR_ac_IN_SHORT_DETECTED      ((uint8)4U)
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
#define START_SEC_CALIB_UNSPECIFIED_BRKR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, BRKR_VAR_INIT) HeBRKR_b_BrkPosSourceSelFromBPSR =
    0;                                 /* Referenced by: '<S174>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) HeBRKR_b_EmsMlfAtvFAOvrrd = 0;/* Referenced by: '<S199>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) HeBRKR_b_EmsMlfAtvOvrrd = 0;/* Referenced by: '<S200>/Calib' */

#if Rte_SysCon_Variant_BRKR_1

static volatile CONST(float32, BRKR_VAR_INIT) HeBRKR_t_MedTEB = 0.01F;/* Referenced by: '<S104>/Calib' */

#endif

static volatile CONST(boolean, BRKR_VAR_INIT) KaBRKR_b_SSC_Status_Map[4] =
{
    0, 0, 0, 1
} ;                                    /* Referenced by: '<S333>/Calib' */

static volatile CONST(TeBRKR_e_AHH_ReadyStatus, BRKR_VAR_INIT)
    KaBRKR_e_AHH_Ready_Status_Map[8] =
{
    CeBRKR_e_AHH_NotReady, CeBRKR_e_AHH_Ready, CeBRKR_e_AHH_Active,
    CeBRKR_e_AHH_EPB_Ready, CeBRKR_e_AHH_Hydrl_Ready,
    CeBRKR_e_AHH_Hyd_Releasing_EPB_Not_Avail, CeBRKR_e_AHH_StatusNotDefined_6,
    CeBRKR_e_AHH_SNA
};                                     /* Referenced by: '<S313>/Calib' */

static volatile CONST(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    KaBRKR_e_AeCoastSwitchConvert[8] =
{
    CeBRKR_e_Button_Unpressed, CeBRKR_e_Button_Pressed, CeBRKR_e_Button_Pressed,
    CeBRKR_e_Button_Pressed, CeBRKR_e_Indeterminate, CeBRKR_e_ShortToGround,
    CeBRKR_e_ShortToPower, CeBRKR_e_SwitchSNA
};                                     /* Referenced by: '<S166>/Calib' */

static volatile CONST(TeBRKR_e_BSMComFail_C1CAN, BRKR_VAR_INIT)
    KaBRKR_e_BSMComFail_C1[4] =
{
    CeBRKR_e_NoFaultBSM_C1, CeBRKR_e_LoC_BSM_HCP_C1, CeBRKR_e_undefineBSM_C1,
    CeBRKR_e_BusFailBSM_C1CAN
};                                     /* Referenced by: '<S319>/Calib' */

static volatile CONST(TeBRKR_e_BSMComFail_C2CAN, BRKR_VAR_INIT)
    KaBRKR_e_BSMComFail_C2[4] =
{
    CeBRKR_e_NoFaultBSM_C2, CeBRKR_e_LoC_BSM_HCP_C2, CeBRKR_e_undefineBSM_C2,
    CeBRKR_e_BusFailBSM_C2CAN
};                                     /* Referenced by: '<S322>/Calib' */

static volatile CONST(TeBRKR_e_BrkPdl_Stat, BRKR_VAR_INIT)
    KaBRKR_e_BrkPdl_Stat_Map[4] =
{
    CeBRKR_e_BrkNotApplied, CeBRKR_e_BrkApplied, CeBRKR_e_BrkNotApplied,
    CeBRKR_e_BrkNotApplied
};                                     /* Referenced by: '<S324>/Calib' */

static volatile CONST(TeBRKR_e_ShiftInhibit, BRKR_VAR_INIT)
    KaBRKR_e_ShiftInhibit_Map[4] =
{
    CeBRKR_e_NoAction, CeBRKR_e_InhibitDownShift, CeBRKR_e_InhibitUpShift,
    CeBRKR_e_InhibitShift
};                                     /* Referenced by: '<S335>/Calib' */

static volatile CONST(TeBRKR_e_WhlSlpSt, BRKR_VAR_INIT) KaBRKR_e_WhlSlpSt_Map[4]
    =
{
    CeBRKR_e_NoWhlSlpDetected, CeBRKR_e_NegWhlSlpDetected,
    CeBRKR_e_PosWhlSlpDetected, CeBRKR_e_WhlSlpDetectionFlt
};                                     /* Referenced by: '<S337>/Calib' */

static volatile CONST(float32, BRKR_VAR_INIT) KeBRKR_Pct_BrkTravelSts_LSP = 0.0F;/* Referenced by: '<S191>/Calib' */
static volatile CONST(float32, BRKR_VAR_INIT) KeBRKR_Pct_BrkTravelSts_RSP =
    100.0F;                            /* Referenced by: '<S192>/Calib' */
static volatile CONST(float32, BRKR_VAR_INIT) KeBRKR_U_Brake_NO_LSP = 0.8F;/* Referenced by: '<S183>/Calib' */
static volatile CONST(float32, BRKR_VAR_INIT) KeBRKR_U_Brake_NO_RSP = 1.0F;/* Referenced by: '<S184>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AHH_Ready_StatusFA_Init =
    0;            /* Referenced by: '<S241>/KeBRKR_b_AHH_Ready_StatusFA_Init' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastReadyFAOvrrd = 0;/* Referenced by: '<S201>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastReadyFAOvrrdVal =
    0;                                 /* Referenced by: '<S202>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastReadyOvrrd = 0;/* Referenced by: '<S203>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastReadyOvrrdVal = 0;/* Referenced by: '<S204>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastSwitchC1StatFAInit
    = 0;        /* Referenced by: '<S242>/KeBRKR_b_AeCoastSwitchC1StatFAInit' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastSwitchC2StatFAInit
    = 0;        /* Referenced by: '<S243>/KeBRKR_b_AeCoastSwitchC2StatFAInit' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastSwitchFAInit = 0;
                      /* Referenced by: '<S244>/KeBRKR_b_AeCoastSwitchFAInit' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastSwitchFAOvrrd = 0;/* Referenced by: '<S205>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastSwitchFAOvrrdVal =
    0;                                 /* Referenced by: '<S206>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastSwitchOvrrd = 0;/* Referenced by: '<S207>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastSwitchStC1FAOvrrd =
    0;                                 /* Referenced by: '<S208>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT)
    KeBRKR_b_AeCoastSwitchStC1FAOvrrdVal = 0;/* Referenced by: '<S209>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastSwitchStatC1Ovrrd =
    0;                                 /* Referenced by: '<S210>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT)
    KeBRKR_b_AeCoastSwitchStatC2FAOvrrd = 0;/* Referenced by: '<S211>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT)
    KeBRKR_b_AeCoastSwitchStatC2FAOvrrdVal = 0;/* Referenced by: '<S212>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastSwitchStatC2Ovrrd =
    0;                                 /* Referenced by: '<S213>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastSwitchStatFAInit =
    0;            /* Referenced by: '<S245>/KeBRKR_b_AeCoastSwitchStatFAInit' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastSwitchStatFAOvrrd =
    0;                                 /* Referenced by: '<S214>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT)
    KeBRKR_b_AeCoastSwitchStatFAOvrrdVal = 0;/* Referenced by: '<S215>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_AeCoastSwitchStatOvrrd =
    0;                                 /* Referenced by: '<S216>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_BrkMaxTrqIntrvntnFsft = 0;
                    /* Referenced by: '<S7>/FsftBRKR_b_BrkMaxTrqIntrvntnChrt' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_BrkMinTrqIntrvntnFsft = 0;
                    /* Referenced by: '<S8>/FsftBRKR_b_BrkMinTrqIntrvntnChrt' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_BrkPdl_P1P4_GC = 0;/* Referenced by: '<S217>/Calib' */

#if Rte_SysCon_Variant_BRKR_1

static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_DiagTest = 0;/* Referenced by: '<S105>/Calib' */

#endif

static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_EmsMlfAtvDflt = 0;
                           /* Referenced by: '<S52>/PokeBRKR_b_EmsMlfAtvChrt' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_EmsMlfAtvFAOvrrdVal = 0;/* Referenced by: '<S218>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_EmsMlfAtvOvrrdVal = 0;/* Referenced by: '<S219>/Calib' */

#if Rte_SysCon_Variant_BRKR_1

static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_EnaAeCoastDiag = 1;/* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_EnaComDiag = 1;/* Referenced by: '<S107>/Calib' */

#endif

static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_HillHoldActvOvrrd = 0;/* Referenced by: '<S220>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_HillHoldActvOvrrdVal = 0;/* Referenced by: '<S221>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_HillHoldFailStsOvrrd = 0;/* Referenced by: '<S222>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_HillHoldFailStsOvrrdVal =
    0;                                 /* Referenced by: '<S223>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_ImpndSkidOvrrd = 0;/* Referenced by: '<S224>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_ImpndSkidOvrrdVal = 0;/* Referenced by: '<S225>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_Only1Contact = 0;/* Referenced by:
                                                                      * '<S84>/Calib'
                                                                      * '<S157>/Calib'
                                                                      * '<S108>/Calib'
                                                                      */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_P4Equipped = 0;/* Referenced by: '<S158>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_UseBrkPedalDscrtInpt = 1;/* Referenced by: '<S175>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_UseBrkPedalStsSrc = 1;/* Referenced by: '<S176>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_UseBrkTravelStsSrc = 1;/* Referenced by: '<S177>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_UseHwBrkSrc = 1;/* Referenced by: '<S178>/Calib' */
static volatile CONST(boolean, BRKR_VAR_INIT) KeBRKR_b_UseImpndSkidCAN = 1;/* Referenced by: '<S159>/Calib' */
static volatile CONST(TeBRKR_e_AHH_ReadyStatus, BRKR_VAR_INIT)
    KeBRKR_e_AHH_Ready_Status_Fsft = CeBRKR_e_AHH_SNA;
                    /* Referenced by: '<S25>/FsftBRKR_e_AHH_Ready_StatusChrt' */
static volatile CONST(TeBRKR_e_AHH_ReadyStatus, BRKR_VAR_INIT)
    KeBRKR_e_AHH_Ready_Status_Init = CeBRKR_e_AHH_SNA;
                    /* Referenced by: '<S246>/KeBRKR_e_AHH_Ready_Status_Init' */
static volatile CONST(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    KeBRKR_e_AeCoastSwitchC1StatInit = CeBRKR_e_Button_Unpressed;
                  /* Referenced by: '<S247>/KeBRKR_e_AeCoastSwitchC1StatInit' */
static volatile CONST(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    KeBRKR_e_AeCoastSwitchC2StatInit = CeBRKR_e_Button_Unpressed;/* Referenced by:
                                                                  * '<S85>/Calib'
                                                                  * '<S248>/KeBRKR_e_AeCoastSwitchC2StatInit'
                                                                  */
static volatile CONST(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    KeBRKR_e_AeCoastSwitchDflt = CeBRKR_e_SwitchSNA;
                       /* Referenced by: '<S60>/PokeBRKR_e_AeCoastSwitchChrt' */
static volatile CONST(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    KeBRKR_e_AeCoastSwitchInit = CeBRKR_e_Button_Unpressed;
                        /* Referenced by: '<S249>/KeBRKR_e_AeCoastSwitchInit' */
static volatile CONST(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    KeBRKR_e_AeCoastSwitchOvrrdVal = CeBRKR_e_Button_Pressed;/* Referenced by: '<S226>/Calib' */
static volatile CONST(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    KeBRKR_e_AeCoastSwitchStatC1Dflt = CeBRKR_e_SwitchSNA;
                 /* Referenced by: '<S62>/PokeBRKR_e_AeCoastSwitchStatC1Chrt' */
static volatile CONST(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    KeBRKR_e_AeCoastSwitchStatC1OvrrdVal = CeBRKR_e_Button_Pressed;/* Referenced by: '<S227>/Calib' */
static volatile CONST(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    KeBRKR_e_AeCoastSwitchStatC2Dflt = CeBRKR_e_SwitchSNA;
                 /* Referenced by: '<S63>/PokeBRKR_e_AeCoastSwitchStatC2Chrt' */
static volatile CONST(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    KeBRKR_e_AeCoastSwitchStatC2OvrrdVal = CeBRKR_e_Button_Pressed;/* Referenced by: '<S228>/Calib' */
static volatile CONST(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    KeBRKR_e_AeCoastSwitchStatDflt = CeBRKR_e_SwitchSNA;
                   /* Referenced by: '<S61>/PokeBRKR_e_AeCoastSwitchStatChrt' */
static volatile CONST(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    KeBRKR_e_AeCoastSwitchStatInit = CeBRKR_e_Button_Unpressed;
                    /* Referenced by: '<S250>/KeBRKR_e_AeCoastSwitchStatInit' */
static volatile CONST(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    KeBRKR_e_AeCoastSwitchStatOvrrdVal = CeBRKR_e_Button_Pressed;/* Referenced by: '<S229>/Calib' */
static volatile CONST(TeBRKR_e_BSMComFail_C1CAN, BRKR_VAR_INIT)
    KeBRKR_e_BSMComFailDflt_C1CAN = CeBRKR_e_NoFaultBSM_C1;/* Referenced by:
                                                            * '<S30>/FsftBRKR_e_BSMComFailDflt_C1CANChrt'
                                                            * '<S320>/Calib'
                                                            */
static volatile CONST(TeBRKR_e_BSMComFail_C2CAN, BRKR_VAR_INIT)
    KeBRKR_e_BSMComFailDflt_C2CAN = CeBRKR_e_NoFaultBSM_C2;/* Referenced by:
                                                            * '<S31>/FsftBRKR_e_BSMComFailDflt_C2CANChrt'
                                                            * '<S65>/PokeBRKR_e_BSMComFail_C2CANChrt'
                                                            */
static volatile CONST(TeBRKR_e_BSMComFail_C1CAN, BRKR_VAR_INIT)
    KeBRKR_e_BSMComFailInit_C1CAN = CeBRKR_e_NoFaultBSM_C1;
                     /* Referenced by: '<S251>/KeBRKR_e_BSMComFailInit_C1CAN' */
static volatile CONST(TeBRKR_e_BSMComFail_C2CAN, BRKR_VAR_INIT)
    KeBRKR_e_BSMComFailInit_C2CAN = CeBRKR_e_NoFaultBSM_C2;
                     /* Referenced by: '<S252>/KeBRKR_e_BSMComFailInit_C2CAN' */
static volatile CONST(TeBRKR_e_BrkPdl_Stat, BRKR_VAR_INIT)
    KeBRKR_e_BrkPedalStat2Dflt = CeBRKR_e_BrkNotApplied;/* Referenced by:
                                                         * '<S67>/PokeBRKR_e_BrkPedalStat2Chrt'
                                                         * '<S68>/PokeBRKR_e_BrkPedalStat2_C2CANChrt'
                                                         * '<S69>/PokeBRKR_e_BrkPedalStsChrt'
                                                         */
static volatile CONST(TeBRKR_e_ExtBrkReqOff, BRKR_VAR_INIT)
    KeBRKR_e_ExtBrkReqDisabledDflt = CeBRKR_e_NoReq;
                        /* Referenced by: '<S70>/PokeBRKR_e_ExtBrkReqOffChrt' */
static volatile CONST(TeBRKR_e_ExtBrkReqOff, BRKR_VAR_INIT)
    KeBRKR_e_ExtTCSReqDisabledDflt = CeBRKR_e_ExtBrkReq_SNA;
                        /* Referenced by: '<S71>/PokeBRKR_e_ExtTcsReqOffChrt' */
static volatile CONST(TeBRKR_e_OPDHoldStatus, BRKR_VAR_INIT)
    KeBRKR_e_OPDHoldStatusDef = CeBRKR_e_SNA;
                       /* Referenced by: '<S73>/PokeBRKR_e_OPDHoldStatusChrt' */
static volatile CONST(TeBRKR_e_OPDHoldStatus, BRKR_VAR_INIT)
    KeBRKR_e_OPDHoldStatus_Init = CeBRKR_e_SNA;
                       /* Referenced by: '<S253>/KeBRKR_e_OPDHoldStatus_Init' */
static volatile CONST(uint16, BRKR_VAR_INIT) KeBRKR_n_RstHillHold = 4800U;/* Referenced by: '<S149>/Calib' */
static volatile CONST(uint8, BRKR_VAR_INIT) KeBRKR_phi_HillHoldSlopeThrsh = 10U;/* Referenced by: '<S150>/Calib' */

#if Rte_SysCon_Variant_BRKR_1

static volatile CONST(float32, BRKR_VAR_INIT) KeBRKR_t_DiagBtnDiffActv = 0.2F;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static volatile CONST(float32, BRKR_VAR_INIT) KeBRKR_t_P25BA_FailTimerLim =
    120.0F;                            /* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static volatile CONST(float32, BRKR_VAR_INIT) KeBRKR_t_P25BA_PassTimerLim =
    120.0F;                            /* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static volatile CONST(float32, BRKR_VAR_INIT) KeBRKR_t_TiDebounceHeal = 0.2F;/* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static volatile CONST(float32, BRKR_VAR_INIT) KeBRKR_t_TiDebounceSet = 0.2F;/* Referenced by: '<S113>/Calib' */

#endif

static volatile CONST(uint8, BRKR_VAR_INIT) KeBRKR_v_HillHoldRelThrsh = 4U;/* Referenced by: '<S151>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_BRKR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BRKR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_BRKR_1

static VAR(boolean, BRKR_VAR_INIT) VeBRKD_b_AeCoastBtnDiagFail1;/* '<S87>/Logical10' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(boolean, BRKR_VAR_INIT) VeBRKD_b_RgnCntrlSwCktHi_Reset;/* '<S92>/AND' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(boolean, BRKR_VAR_INIT) VeBRKD_b_RgnCntrlSwCktLo_Reset;/* '<S90>/AND' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(boolean, BRKR_VAR_INIT) VeBRKD_b_RgnCntrlSwCkt_Reset;/* '<S91>/AND' */

#endif

static VAR(boolean, BRKR_VAR_INIT) VeBRKI_b_HillHoldActive;/* '<S83>/Switch11' */
static VAR(boolean, BRKR_VAR_INIT) VeBRKI_b_HillHoldFailSts;/* '<S83>/Switch13' */
static VAR(boolean, BRKR_VAR_INIT) VeBRKI_b_ImpndSkid;/* '<S83>/Switch12' */
static VAR(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT) VeBRKI_e_AeCoastSwitchStat;/* '<S83>/Switch3' */
static VAR(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    VeBRKI_e_AeCoastSwitchStatC1;      /* '<S83>/Switch5' */
static VAR(TeBRKR_e_AeCoastSwitchStat, BRKR_VAR_INIT)
    VeBRKI_e_AeCoastSwitchStatC2;      /* '<S83>/Switch7' */

#if Rte_SysCon_Variant_BRKR_1

static VAR(boolean, BRKR_VAR_INIT) VeBRKR_b_P25BA_Fail;/* '<S87>/P25BA_Diag' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(boolean, BRKR_VAR_INIT) VeBRKR_b_P25BA_Pass;/* '<S87>/P25BA_Diag' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(boolean, BRKR_VAR_INIT) VeBRKR_b_P25BB_Fail;/* '<S87>/P25BB_Diag' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(boolean, BRKR_VAR_INIT) VeBRKR_b_P25BB_FltDtct;/* '<S87>/P25BB_Diag' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(boolean, BRKR_VAR_INIT) VeBRKR_b_P25BB_Pass;/* '<S87>/P25BB_Diag' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(boolean, BRKR_VAR_INIT) VeBRKR_b_P25BC_Fail;/* '<S87>/P25BC_Diag' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(boolean, BRKR_VAR_INIT) VeBRKR_b_P25BC_FltDtct;/* '<S87>/P25BC_Diag' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(boolean, BRKR_VAR_INIT) VeBRKR_b_P25BC_Pass;/* '<S87>/P25BC_Diag' */

#endif

static VAR(TeBRKR_e_BrkPdl_Stat, BRKR_VAR_INIT) VeBRKR_e_AnaBrake_NO;/* '<S167>/Switch1' */
static VAR(TeBRKR_e_BrkPdl_Stat, BRKR_VAR_INIT) VeBRKR_e_BrkTravelSts;/* '<S162>/Merge25' */
static VAR(TeBRKR_e_BrkPdl_Stat, BRKR_VAR_INIT) VeBRKR_e_DigBrake_NO;/* '<S172>/Switch2' */

#if Rte_SysCon_Variant_BRKR_1

static VAR(TeBRKR_e_DiagStatus, BRKR_VAR_INIT) VeBRKR_e_P25BA_Status;/* '<S87>/P25BA_Diag' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(TeBRKR_e_DiagStatus, BRKR_VAR_INIT) VeBRKR_e_P25BB_Status;/* '<S87>/P25BB_Diag' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(TeBRKR_e_DiagStatus, BRKR_VAR_INIT) VeBRKR_e_P25BC_Status;/* '<S87>/P25BC_Diag' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(float32, BRKR_VAR_INIT) VeBRKR_t_P25BA_timeCnt;/* '<S87>/P25BA_Diag' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(float32, BRKR_VAR_INIT) VeBRKR_t_P25BB_timeCnt;/* '<S87>/P25BB_Diag' */

#endif

#if Rte_SysCon_Variant_BRKR_1

static VAR(float32, BRKR_VAR_INIT) VeBRKR_t_P25BC_timeCnt;/* '<S87>/P25BC_Diag' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BRKR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_BRKR
#include "MemMap.h"

CONST(ConstB_BRKR_ac_T, BRKR_VAR_INIT) BRKR_ac_ConstB =
{
    CeDFIB_e_Init,                     /* '<S256>/Constant' */
    CeDFIB_e_Init,                     /* '<S254>/Constant' */
    CeDFIB_e_Init,                     /* '<S255>/Constant' */
    CeBRKR_e_NoWhlSlpDetected,         /* '<S234>/Constant' */
    CeBRKR_e_NoAction,                 /* '<S233>/Constant' */
    CeBRKR_e_OK,                       /* '<S232>/Constant' */
    CeBRKR_e_NoReq,                    /* '<S238>/Constant' */
    CeBRKR_e_NoReq,                    /* '<S239>/Constant' */
    CeBRKR_e_BrkNotApplied,            /* '<S231>/Const1' */
    CeBRKR_e_BrkNotApplied,            /* '<S231>/Const3' */
    CeBRKR_e_BrkNotApplied,            /* '<S235>/Constant' */
    CeBRKR_e_BrkNotApplied,            /* '<S237>/Constant' */
    CeBRKR_e_BrkNotApplied,            /* '<S236>/Constant' */
    CeBRKR_e_BrkNotApplied,            /* '<S240>/Constant' */
    CeBRKR_e_BrkPdlDscrtInpt,          /* '<S231>/Const23' */
    CeBRKR_e_Button_Unpressed,         /* '<S231>/Const6' */
    CeBRKR_e_Button_Unpressed,         /* '<S231>/Const16' */
    CeBRKR_e_Button_Unpressed,         /* '<S231>/Const17' */
    CeBRKR_e_Button_Unpressed          /* '<S231>/Const21' */
};

#define STOP_SEC_CONST_UNSPECIFIED_BRKR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BRKR
#include "MemMap.h"

VAR(B_BRKR_ac_T, BRKR_VAR_INIT) BRKR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BRKR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BRKR
#include "MemMap.h"

VAR(DW_BRKR_ac_T, BRKR_VAR_INIT) BRKR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BRKR
#include "MemMap.h"
#if Rte_SysCon_Variant_BRKR_1

static FUNC(void, BRKR_CODE_LOCAL) BRKR_ac_Init_n(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BRKR_VAR_INIT) rty_e_FaultStsInit);

#endif

#if Rte_SysCon_Variant_BRKR_1

static FUNC(void, BRKR_CODE_LOCAL) BRKR_ac_Pass(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BRKR_VAR_INIT) rty_e_FaultStsPass);

#endif

#if Rte_SysCon_Variant_BRKR_1

static FUNC(void, BRKR_CODE_LOCAL) BRKR_ac_Fail(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BRKR_VAR_INIT) rty_e_FaultStsFail);

#endif

static FUNC(void, BRKR_CODE_LOCAL) BRKR_FsftBRKR_b_VehicleStandStillStsChrt
    (P2VAR(B_FsftBRKR_b_VehicleStandStillStsChrt__T, AUTOMATIC, BRKR_VAR_INIT)
     localB);

/*
 * Output and update for action system:
 *    '<S117>/Init'
 *    '<S118>/Init'
 *    '<S119>/Init'
 */
#if Rte_SysCon_Variant_BRKR_1

static FUNC(void, BRKR_CODE_LOCAL) BRKR_ac_Init_n(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BRKR_VAR_INIT) rty_e_FaultStsInit)
{
    /* SignalConversion generated from: '<S125>/e_FaultStsInit' incorporates:
     *  Constant: '<S128>/Constant'
     */
    *rty_e_FaultStsInit = CeDFIB_e_Init;
}

#endif

/*
 * Output and update for action system:
 *    '<S117>/Pass'
 *    '<S118>/Pass'
 *    '<S119>/Pass'
 */
#if Rte_SysCon_Variant_BRKR_1

static FUNC(void, BRKR_CODE_LOCAL) BRKR_ac_Pass(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BRKR_VAR_INIT) rty_e_FaultStsPass)
{
    /* SignalConversion generated from: '<S126>/e_FaultStsPass' incorporates:
     *  Constant: '<S129>/Constant'
     */
    *rty_e_FaultStsPass = CeDFIB_e_Pass;
}

#endif

/*
 * Output and update for action system:
 *    '<S117>/Fail'
 *    '<S118>/Fail'
 *    '<S119>/Fail'
 */
#if Rte_SysCon_Variant_BRKR_1

static FUNC(void, BRKR_CODE_LOCAL) BRKR_ac_Fail(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BRKR_VAR_INIT) rty_e_FaultStsFail)
{
    /* SignalConversion generated from: '<S124>/e_FaultStsFail' incorporates:
     *  Constant: '<S127>/Constant'
     */
    *rty_e_FaultStsFail = CeDFIB_e_Fail;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S24>/FsftBRKR_b_VehicleStandStillStsChrt'
 *    '<S33>/FsftBRKR_e_Not_OK_To_RaceChrt'
 */
static FUNC(void, BRKR_CODE_LOCAL) BRKR_FsftBRKR_b_VehicleStandStillStsChrt
    (P2VAR(B_FsftBRKR_b_VehicleStandStillStsChrt__T, AUTOMATIC, BRKR_VAR_INIT)
     localB)
{
    /* Chart: '<S24>/FsftBRKR_b_VehicleStandStillStsChrt' */
    /* Gateway: FsftBRKR_b_VehicleStandStillSts/FsftBRKR_b_VehicleStandStillStsChrt */
    /* During: FsftBRKR_b_VehicleStandStillSts/FsftBRKR_b_VehicleStandStillStsChrt */
    /* Entry Internal: FsftBRKR_b_VehicleStandStillSts/FsftBRKR_b_VehicleStandStillStsChrt */
    /* Transition: '<S278>:2' */
    localB->LeBRKR_b_VehicleStandStillStsFA_j = true;
}

/* Model step function for TID1 */
FUNC(void, BRKR_CODE) BRKR_MedTEB(void) /* Explicit Task: MedTEB */
{
    float32 tmpRead;
    float32 tmpRead_0;
    boolean tmpRead_1;

#if Rte_SysCon_Variant_BRKR_1

    uint8 tmpRead_2;

#endif

#if Rte_SysCon_Variant_BRKR_1

    uint8 tmpRead_3;

#endif

#if Rte_SysCon_Variant_BRKR_1

    uint8 tmpRead_4;

#endif

    sint32 tmp;
    float32 rtb_Switch8;
    float32 rtb_TmpSignalConversionAtLeBRKR_U_Brake_;
    float32 tmpRead_5;
    TeBRKR_e_AeCoastSwitchStat Switch14;
    TeBRKR_e_AeCoastSwitchStat VeBRKR_e_AeCoastSwitchStat;
    TeBRKR_e_BrkPdl_Stat Switch16;
    boolean Switch17;
    boolean UnitDelay_DSTATE_hw_tmp;
    boolean UnitDelay_DSTATE_hw_tmp_0;
    boolean rtb_AND_d;
    boolean rtb_TmpSignalConversionAtLeBRKR_b_ABSAct;
    boolean rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n;
    boolean rtb_TmpSignalConversionAtLeBRKR_b_BrkTra;
    boolean rtb_TmpSignalConversionAtLeBRKR_b_Hill_o;
    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;
    boolean tmpRead_6;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/BRKR_MedTEB'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommBCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCM_Value
        (&BRKR_ac_DW.StatusByte_LostCommBCM);

    /* SignalConversion generated from: '<S1>/LeBRKR_b_ABSActive_write_read' incorporates:
     *  Merge: '<Root>/Merge_3_Irv'
     */
    rtb_TmpSignalConversionAtLeBRKR_b_ABSAct =
        Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_ABSActive_write_Init_IRV();

    /* SignalConversion generated from: '<S1>/LeBRKR_b_BrkPedalDscrtInptFA_read' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n =
        Rte_IrvRead_BRKR_MedTEB_BrkPedalDscrtInptFA_Init_IRV();

    /* RelationalOperator: '<S82>/Comparison4' incorporates:
     *  Merge: '<Root>/Merge_34'
     *  SignalConversion generated from: '<S1>/LeBRKR_e_BrkPedalDscrtInpt_read'
     */
    VeBRKR_e_BrkTravelSts = Rte_IrvRead_BRKR_MedTEB_BrkPedalDscrtInpt_Init_IRV();

    /* SignalConversion generated from: '<S1>/LeBRKR_U_Brake_NO_read' incorporates:
     *  Merge: '<Root>/Merge_35'
     */
    rtb_TmpSignalConversionAtLeBRKR_U_Brake_ =
        Rte_IrvRead_BRKR_MedTEB_VeBRKR_U_Brake_NO_Init_IRV();

    /* SignalConversion generated from: '<S1>/LeBRKR_b_BrkTravelStsFA_write_read' incorporates:
     *  Merge: '<Root>/Merge_31_Irv'
     */
    rtb_TmpSignalConversionAtLeBRKR_b_BrkTra =
        Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_BrkTravelStsFA_write_Init_IRV();

    /* SignalConversion generated from: '<S1>/LeBRKR_b_HillHoldFailStsFA_write_read' incorporates:
     *  Merge: '<Root>/Merge_39_Irv'
     */
    rtb_TmpSignalConversionAtLeBRKR_b_Hill_o =
        Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_HillHoldFailStsFA_write_Init_IRV();

    /* SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid' */
#if Rte_SysCon_Variant_BRKR_1

    /* SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeBRKB_b_OneBrkBoxPdlPosnFA' */
    (void)Rte_Read_VeBRKB_b_OneBrkBoxPdlPosnFA_Value(&tmpRead_6);

    /* Inport: '<Root>/VeBRKB_Pct_OneBrkBoxPdlPosn' */
    (void)Rte_Read_VeBRKB_Pct_OneBrkBoxPdlPosn_Value(&tmpRead_5);

    /* Inport: '<Root>/VeBPSR_b_BrkPdlSensorFail' */
    (void)Rte_Read_VeBPSR_b_BrkPdlSensorFail_Value(&rtb_AND_d);

    /* Inport: '<Root>/VeBPSR_Pct_BrakePedalPct' */
    (void)Rte_Read_VeBPSR_Pct_BrakePedalPct_Value(&rtb_Switch8);

    /* Inport: '<Root>/VePLTR_phi_EstSlopeAngle' */
    (void)Rte_Read_VePLTR_phi_EstSlopeAngle_Value(&tmpRead_0);

    /* Inport: '<Root>/VeCSVR_v_VehSpd' */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/BRKR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputOverrides'
     */
    /* Switch: '<S83>/Switch12' incorporates:
     *  Constant: '<S224>/Calib'
     */
    if (KeBRKR_b_ImpndSkidOvrrd)
    {
        /* Switch: '<S83>/Switch12' incorporates:
         *  Constant: '<S225>/Calib'
         */
        VeBRKI_b_ImpndSkid = KeBRKR_b_ImpndSkidOvrrdVal;
    }
    else
    {
        /* Switch: '<S83>/Switch12' incorporates:
         *  Merge: '<Root>/Merge_1'
         *  SignalConversion generated from: '<S1>/LeBRKR_b_ImpndSkid_read'
         */
        VeBRKI_b_ImpndSkid = Rte_IrvRead_BRKR_MedTEB_ImpndSkid_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch12' */

    /* Switch: '<S83>/Switch3' incorporates:
     *  Constant: '<S216>/Calib'
     */
    if (KeBRKR_b_AeCoastSwitchStatOvrrd)
    {
        /* Switch: '<S83>/Switch3' incorporates:
         *  Constant: '<S229>/Calib'
         */
        VeBRKI_e_AeCoastSwitchStat = KeBRKR_e_AeCoastSwitchStatOvrrdVal;
    }
    else
    {
        /* Switch: '<S83>/Switch3' incorporates:
         *  Merge: '<Root>/Merge_8'
         *  SignalConversion generated from: '<S1>/LeBRKR_e_AeCoastSwitchStat_read'
         */
        VeBRKI_e_AeCoastSwitchStat =
            Rte_IrvRead_BRKR_MedTEB_VeBRKR_e_AeCoastSwitchStat_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch3' */

    /* Switch: '<S83>/Switch5' incorporates:
     *  Constant: '<S210>/Calib'
     */
    if (KeBRKR_b_AeCoastSwitchStatC1Ovrrd)
    {
        /* Switch: '<S83>/Switch5' incorporates:
         *  Constant: '<S227>/Calib'
         */
        VeBRKI_e_AeCoastSwitchStatC1 = KeBRKR_e_AeCoastSwitchStatC1OvrrdVal;
    }
    else
    {
        /* Switch: '<S83>/Switch5' incorporates:
         *  Merge: '<Root>/Merge_12'
         *  SignalConversion generated from: '<S1>/LeBRKR_e_AeCoastSwitchStatC1_read'
         */
        VeBRKI_e_AeCoastSwitchStatC1 =
            Rte_IrvRead_BRKR_MedTEB_VeBRKR_e_AeCoastSwitchStatC1_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch5' */

    /* Switch: '<S83>/Switch7' incorporates:
     *  Constant: '<S213>/Calib'
     */
    if (KeBRKR_b_AeCoastSwitchStatC2Ovrrd)
    {
        /* RelationalOperator: '<S87>/Comparison4' incorporates:
         *  Constant: '<S228>/Calib'
         *  Switch: '<S83>/Switch7'
         */
        VeBRKI_e_AeCoastSwitchStatC2 = KeBRKR_e_AeCoastSwitchStatC2OvrrdVal;
    }
    else
    {
        /* RelationalOperator: '<S87>/Comparison4' incorporates:
         *  Merge: '<Root>/Merge_15'
         *  SignalConversion generated from: '<S1>/LeBRKR_e_AeCoastSwitchStatC2_read'
         *  Switch: '<S83>/Switch7'
         */
        VeBRKI_e_AeCoastSwitchStatC2 =
            Rte_IrvRead_BRKR_MedTEB_VeBRKR_e_AeCoastSwitchStatC2_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch7' */

    /* Switch: '<S83>/Switch11' incorporates:
     *  Constant: '<S220>/Calib'
     */
    if (KeBRKR_b_HillHoldActvOvrrd)
    {
        /* Switch: '<S83>/Switch11' incorporates:
         *  Constant: '<S221>/Calib'
         */
        VeBRKI_b_HillHoldActive = KeBRKR_b_HillHoldActvOvrrdVal;
    }
    else
    {
        /* Switch: '<S83>/Switch11' incorporates:
         *  Merge: '<Root>/Merge_30'
         *  SignalConversion generated from: '<S1>/LeBRKR_b_HillHoldActive_read'
         */
        VeBRKI_b_HillHoldActive =
            Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_HillHoldActive_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch11' */

    /* Switch: '<S83>/Switch13' incorporates:
     *  Constant: '<S222>/Calib'
     */
    if (KeBRKR_b_HillHoldFailStsOvrrd)
    {
        /* Switch: '<S83>/Switch13' incorporates:
         *  Constant: '<S223>/Calib'
         */
        VeBRKI_b_HillHoldFailSts = KeBRKR_b_HillHoldFailStsOvrrdVal;
    }
    else
    {
        /* Switch: '<S83>/Switch13' incorporates:
         *  Merge: '<Root>/Merge_38'
         *  SignalConversion generated from: '<S1>/LeBRKR_b_HillHoldFailSts_read'
         */
        VeBRKI_b_HillHoldFailSts =
            Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_HillHoldFailSts_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch13' */

    /* Switch: '<S83>/Switch14' incorporates:
     *  Constant: '<S207>/Calib'
     */
    if (KeBRKR_b_AeCoastSwitchOvrrd)
    {
        /* Switch: '<S83>/Switch14' incorporates:
         *  Constant: '<S226>/Calib'
         */
        Switch14 = KeBRKR_e_AeCoastSwitchOvrrdVal;
    }
    else
    {
        /* Switch: '<S83>/Switch14' incorporates:
         *  Merge: '<Root>/Merge_41'
         *  SignalConversion generated from: '<S1>/LeBRKR_e_AeCoastSwitch_read'
         */
        Switch14 = Rte_IrvRead_BRKR_MedTEB_VeBRKR_e_AeCoastSwitch_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch14' */

    /* Switch: '<S83>/Switch16' incorporates:
     *  Constant: '<S217>/Calib'
     *  Switch: '<S83>/Switch17'
     */
    if (KeBRKR_b_BrkPdl_P1P4_GC)
    {
        /* Switch: '<S83>/Switch16' incorporates:
         *  Merge: '<Root>/Merge_54'
         *  SignalConversion generated from: '<S1>/LeBRKR_e_BrkPedalSts_read'
         */
        Switch16 = Rte_IrvRead_BRKR_MedTEB_BrkPedalSts_Init_IRV();

        /* Switch: '<S83>/Switch17' incorporates:
         *  Merge: '<Root>/Merge_53'
         *  SignalConversion generated from: '<S1>/LeBRKR_b_BrkPedalStsFA_read'
         */
        Switch17 = Rte_IrvRead_BRKR_MedTEB_BrkPedalStsFA_Init_IRV();
    }
    else
    {
        /* Switch: '<S83>/Switch16' incorporates:
         *  Merge: '<Root>/Merge_75'
         *  SignalConversion generated from: '<S1>/LeBRKR_e_BrkPedalStat2_read'
         */
        Switch16 = Rte_IrvRead_BRKR_MedTEB_BrkPedalStat2_Init_IRV();

        /* Switch: '<S83>/Switch17' incorporates:
         *  Merge: '<Root>/Merge_67'
         *  SignalConversion generated from: '<S1>/LeBRKR_b_BrkPedalStat2FA_read'
         */
        Switch17 = Rte_IrvRead_BRKR_MedTEB_BrkPedalStat2FA_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch16' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ImpendingSkidSignal'
     */
    /* Logic: '<S82>/Logical1' incorporates:
     *  Logic: '<S162>/Logical2'
     */
    UnitDelay_DSTATE_hw_tmp = !rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n;

    /* Logic: '<S82>/Logical2' incorporates:
     *  Logic: '<S82>/Logical7'
     *  Merge: '<Root>/Merge_76_Irv'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_ABSActiveFA_write_read'
     *  Switch: '<S82>/Switch'
     */
    UnitDelay_DSTATE_hw_tmp_0 =
        !Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_ABSActiveFA_write_Init_IRV();

    /* Outputs for Atomic SubSystem: '<S82>/Signal Latch On With Reset' */
    /* Logic: '<S163>/OR1' incorporates:
     *  Constant: '<S155>/Constant'
     *  Constant: '<S156>/Constant'
     *  Logic: '<S163>/NOT'
     *  Logic: '<S163>/OR'
     *  Logic: '<S82>/Logical'
     *  Logic: '<S82>/Logical1'
     *  Logic: '<S82>/Logical2'
     *  Logic: '<S82>/Logical3'
     *  Logic: '<S82>/Logical4'
     *  RelationalOperator: '<S82>/Comparison1'
     *  RelationalOperator: '<S82>/Comparison4'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    BRKR_ac_DW.UnitDelay_DSTATE_hw =
        ((((rtb_TmpSignalConversionAtLeBRKR_b_ABSAct &&
            UnitDelay_DSTATE_hw_tmp_0) && UnitDelay_DSTATE_hw_tmp) && (((uint32)
            VeBRKR_e_BrkTravelSts) == CeBRKR_e_BrkApplied)) ||
         ((rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n || (((uint32)
             VeBRKR_e_BrkTravelSts) != CeBRKR_e_BrkNotApplied)) &&
          (BRKR_ac_DW.UnitDelay_DSTATE_hw)));

    /* End of Outputs for SubSystem: '<S82>/Signal Latch On With Reset' */

    /* Switch: '<S162>/Switch8' incorporates:
     *  Constant: '<S174>/Calib'
     *  Logic: '<S162>/Logical6'
     *  Merge: '<Root>/Merge_62'
     *  Merge: '<Root>/Merge_65'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_BrkTravelSt_C2CANSgnl_Rcvd_read'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_BrkTravelSts_C2CANFA_read'
     *  Switch: '<S162>/Switch7'
     */
    if (!HeBRKR_b_BrkPosSourceSelFromBPSR)
    {
        /* Switch: '<S162>/Switch3' */
        if (rtb_TmpSignalConversionAtLeBRKR_b_BrkTra)
        {
            /* Switch: '<S162>/Switch8' incorporates:
             *  Merge: '<Root>/Merge_61'
             *  SignalConversion generated from: '<S1>/LeBRKR_Pct_BrkTravelSt_C2CAN_read'
             */
            rtb_Switch8 =
                Rte_IrvRead_BRKR_MedTEB_VeBRKR_Pct_BrkTravelSt_C2CAN_Init_IRV();
        }
        else
        {
            /* Switch: '<S162>/Switch8' incorporates:
             *  Merge: '<Root>/Merge_36_Irv'
             *  SignalConversion generated from: '<S1>/LeBRKR_Pct_BrkTravelSts_write_read'
             */
            rtb_Switch8 =
                Rte_IrvRead_BRKR_MedTEB_VeBRKR_Pct_BrkTravelSts_write_Init_IRV();
        }

        /* End of Switch: '<S162>/Switch3' */
        rtb_AND_d =
            (((!Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_BrkTravelSt_C2CANSgnl_Rcvd_Init_IRV
               ()) ||
              (Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_BrkTravelSts_C2CANFA_Init_IRV()))
             && rtb_TmpSignalConversionAtLeBRKR_b_BrkTra);
    }

    /* End of Switch: '<S162>/Switch8' */

    /* If: '<S162>/If2' incorporates:
     *  Constant: '<S175>/Calib'
     *  Constant: '<S176>/Calib'
     *  Constant: '<S177>/Calib'
     *  Constant: '<S178>/Calib'
     *  Inport: '<Root>/VeBRKB_b_BrkrSwitch'
     *  Logic: '<S162>/Logical'
     *  Logic: '<S162>/Logical1'
     *  Logic: '<S162>/Logical10'
     *  Logic: '<S162>/Logical3'
     *  Logic: '<S162>/Logical4'
     *  Logic: '<S162>/Logical5'
     *  Logic: '<S162>/Logical7'
     *  Logic: '<S162>/Logical8'
     *  Logic: '<S162>/Logical9'
     *  Merge: '<Root>/Merge_33'
     *  Merge: '<Root>/Merge_64'
     *  Merge: '<Root>/Merge_66'
     *  Merge: '<Root>/Merge_68'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_Brake_NOFA_read'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_Brake_NOSgnl_Rcvd_read'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_BrkPedalStat2_C2CANFA_read'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_BrkPedalStat2_C2CANSgnl_Rcvd_read'
     */
    if ((KeBRKR_b_UseBrkTravelStsSrc) && (!rtb_AND_d))
    {
        /* Outputs for IfAction SubSystem: '<S162>/Brake_Travel_Status' incorporates:
         *  ActionPort: '<S170>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S170>/Hysteresis1' */
        /* Switch: '<S190>/Switch1' incorporates:
         *  Constant: '<S190>/Constant Value'
         *  Constant: '<S191>/Calib'
         *  Constant: '<S192>/Calib'
         *  RelationalOperator: '<S190>/Greater  Than'
         *  RelationalOperator: '<S190>/Greater  Than1'
         *  UnitDelay: '<S190>/Unit Delay'
         */
        if (rtb_Switch8 > KeBRKR_Pct_BrkTravelSts_RSP)
        {
            BRKR_ac_DW.UnitDelay_DSTATE_j = true;
        }
        else
        {
            BRKR_ac_DW.UnitDelay_DSTATE_j = ((rtb_Switch8 >=
                KeBRKR_Pct_BrkTravelSts_LSP) && (BRKR_ac_DW.UnitDelay_DSTATE_j));
        }

        /* End of Switch: '<S190>/Switch1' */
        /* End of Outputs for SubSystem: '<S170>/Hysteresis1' */

        /* Switch: '<S170>/Switch2' incorporates:
         *  UnitDelay: '<S190>/Unit Delay'
         */
        if (BRKR_ac_DW.UnitDelay_DSTATE_j)
        {
            /* RelationalOperator: '<S82>/Comparison4' incorporates:
             *  Constant: '<S188>/Constant'
             *  Merge: '<S162>/Merge25'
             */
            VeBRKR_e_BrkTravelSts = CeBRKR_e_BrkApplied;
        }
        else
        {
            /* RelationalOperator: '<S82>/Comparison4' incorporates:
             *  Constant: '<S189>/Constant'
             *  Merge: '<S162>/Merge25'
             */
            VeBRKR_e_BrkTravelSts = CeBRKR_e_BrkNotApplied;
        }

        /* End of Switch: '<S170>/Switch2' */

        /* SignalConversion generated from: '<S1>/VeBRKR_b_BrkPdlDscrtInptFA' incorporates:
         *  Inport: '<S170>/BrkTravelSts_FA'
         *  Outport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA'
         */
        (void)Rte_Write_VeBRKR_b_BrkPedalDscrtInptFA_Value(false);

        /* SignalConversion generated from: '<S1>/VeBRKR_e_BrakeSrc' incorporates:
         *  Constant: '<S187>/Constant'
         *  Merge: '<S162>/Merge2'
         *  Outport: '<Root>/VeBRKR_e_BrakeSrc'
         *  SignalConversion generated from: '<S170>/TeBRKR_e_BrakeSrc'
         */
        (void)Rte_Write_VeBRKR_e_BrakeSrc_Value(CeBRKR_e_BrkTravelSts);

        /* End of Outputs for SubSystem: '<S162>/Brake_Travel_Status' */
    }
    else if ((KeBRKR_b_UseBrkPedalDscrtInpt) && UnitDelay_DSTATE_hw_tmp)
    {
        /* Outputs for IfAction SubSystem: '<S162>/Brake_Pedal_Dscrt' incorporates:
         *  ActionPort: '<S168>/Action Port'
         */
        /* SignalConversion generated from: '<S1>/VeBRKR_b_BrkPdlDscrtInptFA' incorporates:
         *  Inport: '<S168>/BrkPedalDscrtInpt_FA'
         *  Outport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA'
         */
        (void)Rte_Write_VeBRKR_b_BrkPedalDscrtInptFA_Value(false);

        /* SignalConversion generated from: '<S1>/VeBRKR_e_BrakeSrc' incorporates:
         *  Constant: '<S185>/Constant'
         *  Merge: '<S162>/Merge2'
         *  Outport: '<Root>/VeBRKR_e_BrakeSrc'
         *  SignalConversion generated from: '<S168>/TeBRKR_e_BrakeSrc'
         */
        (void)Rte_Write_VeBRKR_e_BrakeSrc_Value(CeBRKR_e_BrkPdlDscrtInpt);

        /* End of Outputs for SubSystem: '<S162>/Brake_Pedal_Dscrt' */
    }
    else if ((KeBRKR_b_UseBrkPedalStsSrc) &&
             (((Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_BrkPedalStat2_C2CANSgnl_Rcvd_Init_IRV
                ()) &&
               (!Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_BrkPedalStat2_C2CANFA_Init_IRV
                ())) || (!Switch17)))
    {
        /* Switch: '<S162>/Switch5' */
        if (Switch17)
        {
            /* Outputs for IfAction SubSystem: '<S162>/Brake_Pedal_Status' incorporates:
             *  ActionPort: '<S169>/Action Port'
             */
            /* RelationalOperator: '<S82>/Comparison4' incorporates:
             *  Inport: '<S169>/BrkPdlSts'
             *  Merge: '<Root>/Merge_63'
             *  Merge: '<S162>/Merge25'
             *  SignalConversion generated from: '<S1>/LeBRKR_e_BrkPedalStat2_C2CAN_read'
             */
            VeBRKR_e_BrkTravelSts =
                Rte_IrvRead_BRKR_MedTEB_VeBRKR_e_BrkPedalStat2_C2CAN_Init_IRV();

            /* End of Outputs for SubSystem: '<S162>/Brake_Pedal_Status' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S162>/Brake_Pedal_Status' incorporates:
             *  ActionPort: '<S169>/Action Port'
             */
            /* RelationalOperator: '<S82>/Comparison4' incorporates:
             *  Inport: '<S169>/BrkPdlSts'
             *  Merge: '<S162>/Merge25'
             *  Switch: '<S83>/Switch16'
             */
            VeBRKR_e_BrkTravelSts = Switch16;

            /* End of Outputs for SubSystem: '<S162>/Brake_Pedal_Status' */
        }

        /* End of Switch: '<S162>/Switch5' */

        /* Outputs for IfAction SubSystem: '<S162>/Brake_Pedal_Status' incorporates:
         *  ActionPort: '<S169>/Action Port'
         */
        /* SignalConversion generated from: '<S1>/VeBRKR_b_BrkPdlDscrtInptFA' incorporates:
         *  Inport: '<S169>/BrkPdlSts_FA'
         *  Outport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA'
         */
        (void)Rte_Write_VeBRKR_b_BrkPedalDscrtInptFA_Value(false);

        /* SignalConversion generated from: '<S1>/VeBRKR_e_BrakeSrc' incorporates:
         *  Constant: '<S186>/Constant'
         *  Merge: '<S162>/Merge2'
         *  Outport: '<Root>/VeBRKR_e_BrakeSrc'
         *  SignalConversion generated from: '<S169>/TeBRKR_e_BrakeSrc'
         */
        (void)Rte_Write_VeBRKR_e_BrakeSrc_Value(CeBRKR_e_BrkPdlDscrtInpt);

        /* End of Outputs for SubSystem: '<S162>/Brake_Pedal_Status' */
    }
    else if (KeBRKR_b_UseHwBrkSrc)
    {
        (void)Rte_Read_VeBRKB_b_BrkrSwitch_Value(&tmpRead_1);

        /* Outputs for IfAction SubSystem: '<S162>/DigBrk_Switch_Normally_Open' incorporates:
         *  ActionPort: '<S172>/Action Port'
         */
        /* Switch: '<S172>/Switch2' incorporates:
         *  Inport: '<Root>/VeBRKB_b_BrkrSwitch'
         */
        if (tmpRead_1)
        {
            /* Switch: '<S172>/Switch2' incorporates:
             *  Constant: '<S196>/Constant'
             */
            VeBRKR_e_DigBrake_NO = CeBRKR_e_BrkApplied;
        }
        else
        {
            /* Switch: '<S172>/Switch2' incorporates:
             *  Constant: '<S197>/Constant'
             */
            VeBRKR_e_DigBrake_NO = CeBRKR_e_BrkNotApplied;
        }

        /* End of Switch: '<S172>/Switch2' */

        /* RelationalOperator: '<S82>/Comparison4' incorporates:
         *  Merge: '<S162>/Merge25'
         *  SignalConversion: '<S172>/Signal Conversion'
         *  Switch: '<S172>/Switch2'
         */
        VeBRKR_e_BrkTravelSts = VeBRKR_e_DigBrake_NO;

        /* SignalConversion generated from: '<S1>/VeBRKR_b_BrkPdlDscrtInptFA' incorporates:
         *  Inport: '<S172>/DigBrake_NO_FA'
         *  Outport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA'
         */
        (void)Rte_Write_VeBRKR_b_BrkPedalDscrtInptFA_Value(false);

        /* SignalConversion generated from: '<S1>/VeBRKR_e_BrakeSrc' incorporates:
         *  Constant: '<S195>/Constant'
         *  Merge: '<S162>/Merge2'
         *  Outport: '<Root>/VeBRKR_e_BrakeSrc'
         *  SignalConversion generated from: '<S172>/TeBRKR_e_BrakeSrc'
         */
        (void)Rte_Write_VeBRKR_e_BrakeSrc_Value(CeBRKR_e_Brake_NO);

        /* End of Outputs for SubSystem: '<S162>/DigBrk_Switch_Normally_Open' */
    }
    else if ((KeBRKR_b_UseHwBrkSrc) &&
             ((Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_Brake_NOSgnl_Rcvd_Init_IRV()) &&
              (!Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_Brake_NOFA_Init_IRV())))
    {
        /* Outputs for IfAction SubSystem: '<S162>/AnaBrk_Switch_Normally_Open' incorporates:
         *  ActionPort: '<S167>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S167>/Hysteresis2' */
        /* Switch: '<S182>/Switch1' incorporates:
         *  Constant: '<S182>/Constant Value'
         *  Constant: '<S183>/Calib'
         *  Constant: '<S184>/Calib'
         *  RelationalOperator: '<S182>/Greater  Than'
         *  RelationalOperator: '<S182>/Greater  Than1'
         *  UnitDelay: '<S182>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtLeBRKR_U_Brake_ > KeBRKR_U_Brake_NO_RSP)
        {
            BRKR_ac_DW.UnitDelay_DSTATE_gl = true;
        }
        else
        {
            BRKR_ac_DW.UnitDelay_DSTATE_gl =
                ((rtb_TmpSignalConversionAtLeBRKR_U_Brake_ >=
                  KeBRKR_U_Brake_NO_LSP) && (BRKR_ac_DW.UnitDelay_DSTATE_gl));
        }

        /* End of Switch: '<S182>/Switch1' */
        /* End of Outputs for SubSystem: '<S167>/Hysteresis2' */

        /* Switch: '<S167>/Switch1' incorporates:
         *  UnitDelay: '<S182>/Unit Delay'
         */
        if (BRKR_ac_DW.UnitDelay_DSTATE_gl)
        {
            /* Switch: '<S167>/Switch1' incorporates:
             *  Constant: '<S180>/Constant'
             */
            VeBRKR_e_AnaBrake_NO = CeBRKR_e_BrkApplied;
        }
        else
        {
            /* Switch: '<S167>/Switch1' incorporates:
             *  Constant: '<S181>/Constant'
             */
            VeBRKR_e_AnaBrake_NO = CeBRKR_e_BrkNotApplied;
        }

        /* End of Switch: '<S167>/Switch1' */

        /* RelationalOperator: '<S82>/Comparison4' incorporates:
         *  Merge: '<S162>/Merge25'
         *  SignalConversion: '<S167>/Signal Conversion'
         *  Switch: '<S167>/Switch1'
         */
        VeBRKR_e_BrkTravelSts = VeBRKR_e_AnaBrake_NO;

        /* SignalConversion generated from: '<S1>/VeBRKR_b_BrkPdlDscrtInptFA' incorporates:
         *  Inport: '<S167>/AnaBrk_NO_FA'
         *  Outport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA'
         */
        (void)Rte_Write_VeBRKR_b_BrkPedalDscrtInptFA_Value(false);

        /* SignalConversion generated from: '<S1>/VeBRKR_e_BrakeSrc' incorporates:
         *  Constant: '<S179>/Constant'
         *  Merge: '<S162>/Merge2'
         *  Outport: '<Root>/VeBRKR_e_BrakeSrc'
         *  SignalConversion generated from: '<S167>/TeBRKR_e_BrakeSrc'
         */
        (void)Rte_Write_VeBRKR_e_BrakeSrc_Value(CeBRKR_e_Brake_NO);

        /* End of Outputs for SubSystem: '<S162>/AnaBrk_Switch_Normally_Open' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S162>/Brake_Unknown' incorporates:
         *  ActionPort: '<S171>/Action Port'
         */
        /* RelationalOperator: '<S82>/Comparison4' incorporates:
         *  Constant: '<S193>/Constant'
         *  Merge: '<S162>/Merge25'
         *  SignalConversion generated from: '<S171>/Brake_Sts_Unknown'
         */
        VeBRKR_e_BrkTravelSts = CeBRKR_e_UNKNOWN;

        /* SignalConversion generated from: '<S1>/VeBRKR_b_BrkPdlDscrtInptFA' incorporates:
         *  Constant: '<S171>/TRUE Constant'
         *  Outport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA'
         *  SignalConversion generated from: '<S171>/Brake_Sts_Unknown_FA'
         */
        (void)Rte_Write_VeBRKR_b_BrkPedalDscrtInptFA_Value(true);

        /* SignalConversion generated from: '<S1>/VeBRKR_e_BrakeSrc' incorporates:
         *  Constant: '<S194>/Constant'
         *  Merge: '<S162>/Merge2'
         *  Outport: '<Root>/VeBRKR_e_BrakeSrc'
         *  SignalConversion generated from: '<S171>/TeBRKR_e_BrakeSrc'
         */
        (void)Rte_Write_VeBRKR_e_BrakeSrc_Value(CeBRKR_e_Unknown);

        /* End of Outputs for SubSystem: '<S162>/Brake_Unknown' */
    }

    /* End of If: '<S162>/If2' */

    /* If: '<S82>/If2' incorporates:
     *  Constant: '<S157>/Calib'
     *  Constant: '<S158>/Calib'
     *  Logic: '<S82>/Logical10'
     *  Logic: '<S82>/Logical8'
     *  Logic: '<S82>/Logical9'
     *  RelationalOperator: '<S164>/Comparison2'
     *  Switch: '<S164>/Switch1'
     *  Switch: '<S83>/Switch5'
     *  Switch: '<S83>/Switch7'
     */
    if ((KeBRKR_b_Only1Contact) && (KeBRKR_b_P4Equipped))
    {
        /* Outputs for IfAction SubSystem: '<S82>/One_contact_button_P1P4' incorporates:
         *  ActionPort: '<S161>/Action Port'
         */
        /* Merge: '<S82>/Merge25' incorporates:
         *  Inport: '<S161>/VeBRKI_e_AeCoastSwitchStat'
         *  Switch: '<S83>/Switch3'
         */
        VeBRKR_e_AeCoastSwitchStat = VeBRKI_e_AeCoastSwitchStat;

        /* End of Outputs for SubSystem: '<S82>/One_contact_button_P1P4' */
    }
    else if ((!KeBRKR_b_P4Equipped) && (KeBRKR_b_Only1Contact))
    {
        /* Outputs for IfAction SubSystem: '<S82>/One_contact_button_P1P2_WL' incorporates:
         *  ActionPort: '<S160>/Action Port'
         */
        /* Merge: '<S82>/Merge25' incorporates:
         *  Constant: '<S166>/Calib'
         *  DataTypeConversion: '<S160>/Data Type Conversion1'
         *  DataTypeConversion: '<S165>/DataTypeConversion'
         *  Selector: '<S160>/Selector1'
         *  Switch: '<S83>/Switch14'
         */
        VeBRKR_e_AeCoastSwitchStat = KaBRKR_e_AeCoastSwitchConvert[(Switch14)];

        /* End of Outputs for SubSystem: '<S82>/One_contact_button_P1P2_WL' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S82>/Two_contact_button_P1P2' incorporates:
         *  ActionPort: '<S164>/Action Port'
         */
        if (VeBRKI_e_AeCoastSwitchStatC1 == VeBRKI_e_AeCoastSwitchStatC2)
        {
            /* Switch: '<S164>/Switch1' incorporates:
             *  Merge: '<S82>/Merge25'
             *  RelationalOperator: '<S164>/Comparison2'
             *  Switch: '<S83>/Switch5'
             */
            VeBRKR_e_AeCoastSwitchStat = VeBRKI_e_AeCoastSwitchStatC1;
        }
        else
        {
            /* Merge: '<S82>/Merge25' incorporates:
             *  Constant: '<S198>/Constant'
             *  Switch: '<S164>/Switch1'
             */
            VeBRKR_e_AeCoastSwitchStat = CeBRKR_e_Indeterminate;
        }

        /* End of Outputs for SubSystem: '<S82>/Two_contact_button_P1P2' */
    }

    /* End of If: '<S82>/If2' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HillHolder'
     */
    /* Logic: '<S81>/Logical7' incorporates:
     *  Merge: '<Root>/Merge_37_Irv'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_HillHoldActiveFA_write_read'
     */
    rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n = (((VeBRKI_b_HillHoldFailSts) ||
        (Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_HillHoldActiveFA_write_Init_IRV())) ||
        rtb_TmpSignalConversionAtLeBRKR_b_Hill_o);

    /* Outputs for Atomic SubSystem: '<S81>/EdgeRising' */
    /* Logic: '<S148>/AND' incorporates:
     *  Logic: '<S148>/OR1'
     *  UnitDelay: '<S148>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeBRKR_b_BrkTra =
        (rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n &&
         (!BRKR_ac_DW.UnitDelay_DSTATE_e4));

    /* Update for UnitDelay: '<S148>/Unit Delay' */
    BRKR_ac_DW.UnitDelay_DSTATE_e4 = rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n;

    /* End of Outputs for SubSystem: '<S81>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S81>/Turn Off Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S152>/EdgeFalling' */
    /* Logic: '<S153>/AND' incorporates:
     *  Logic: '<S153>/OR1'
     *  UnitDelay: '<S153>/Unit Delay'
     */
    rtb_AND_d = ((!rtb_TmpSignalConversionAtLeBRKR_b_BrkTra) &&
                 (BRKR_ac_DW.UnitDelay_DSTATE_n0));

    /* Update for UnitDelay: '<S153>/Unit Delay' */
    BRKR_ac_DW.UnitDelay_DSTATE_n0 = rtb_TmpSignalConversionAtLeBRKR_b_BrkTra;

    /* End of Outputs for SubSystem: '<S152>/EdgeFalling' */

    /* Switch: '<S152>/Switch' incorporates:
     *  Constant: '<S149>/Calib'
     *  Sum: '<S152>/Summation'
     *  UnitDelay: '<S152>/Unit Delay'
     */
    if (rtb_AND_d)
    {
        BRKR_ac_DW.UnitDelay_DSTATE = KeBRKR_n_RstHillHold;
    }
    else
    {
        /* Sum: '<S152>/Summation' incorporates:
         *  Constant: '<S152>/Constant Value'
         *  UnitDelay: '<S152>/Unit Delay'
         */
        tmp = ((sint32)BRKR_ac_DW.UnitDelay_DSTATE) - 1;
        if ((((sint32)BRKR_ac_DW.UnitDelay_DSTATE) - 1) < 0)
        {
            tmp = 0;
        }

        BRKR_ac_DW.UnitDelay_DSTATE = (uint16)tmp;
    }

    /* End of Switch: '<S152>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputOverrides'
     */
    /* Switch: '<S81>/Switch' incorporates:
     *  Abs: '<S81>/Abs'
     *  Constant: '<S150>/Calib'
     *  Constant: '<S151>/Calib'
     *  Constant: '<S152>/Constant Value2'
     *  DataTypeConversion: '<S81>/Data Type Conversion'
     *  DataTypeConversion: '<S81>/Data Type Conversion2'
     *  Inport: '<S83>/VeCSVR_v_VehSpd'
     *  Inport: '<S83>/VePLTR_phi_EstSlopeAngle'
     *  Logic: '<S152>/AND'
     *  Logic: '<S81>/Logical10'
     *  Logic: '<S81>/Logical8'
     *  Logic: '<S81>/Logical9'
     *  RelationalOperator: '<S152>/Greater  Than'
     *  RelationalOperator: '<S81>/Comparison'
     *  RelationalOperator: '<S81>/Comparison1'
     *  UnitDelay: '<S152>/Unit Delay'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    if ((((fabsf(tmpRead_0) <= ((float32)KeBRKR_phi_HillHoldSlopeThrsh)) ||
            (tmpRead >= ((float32)KeBRKR_v_HillHoldRelThrsh))) ||
            ((!rtb_TmpSignalConversionAtLeBRKR_b_BrkTra) && (((sint32)
            BRKR_ac_DW.UnitDelay_DSTATE) <= 0))) ||
            (!rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n))
    {
        BRKR_ac_DW.UnitDelay_DSTATE_hc = ((VeBRKI_b_HillHoldActive) &&
            (!rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n));
    }

    /* End of Switch: '<S81>/Switch' */
    /* End of Outputs for SubSystem: '<S81>/Turn Off Delay Sample1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */
    /* Outputs for Atomic SubSystem: '<S80>/eCoasting_Diagnostic' */
#if Rte_SysCon_Variant_BRKR_1

    /* Outputs for Atomic SubSystem: '<S86>/eCoasting_Diagnostic' */
    /* Inport: '<Root>/VeDMAB_y_StatusByte_RgnCntrlSwCkt' */
    (void)Rte_Read_VeDMAB_y_StatusByte_RgnCntrlSwCkt_Value(&tmpRead_4);

    /* Inport: '<Root>/VeDMAB_y_StatusByte_RgnCntrlSwCktHi' */
    (void)Rte_Read_VeDMAB_y_StatusByte_RgnCntrlSwCktHi_Value(&tmpRead_3);

    /* Inport: '<Root>/VeDMAB_y_StatusByte_RgnCntrlSwCktLo' */
    (void)Rte_Read_VeDMAB_y_StatusByte_RgnCntrlSwCktLo_Value(&tmpRead_2);

    /* VariantMerge generated from: '<S86>/VeBRKR_b_AeCoastBtnCircuitLowC1' incorporates:
     *  Constant: '<S93>/Constant'
     *  RelationalOperator: '<S87>/Comparison1'
     *  Switch: '<S83>/Switch5'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoast_g = (((uint32)
        VeBRKI_e_AeCoastSwitchStatC1) == CeBRKR_e_ShortToGround);

    /* VariantMerge generated from: '<S86>/VeBRKD_b_AeCoastBtnCircuitHi' incorporates:
     *  Constant: '<S100>/Constant'
     *  RelationalOperator: '<S87>/Comparison10'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKD_b_AeCoastBt = (((uint32)
        VeBRKR_e_AeCoastSwitchStat) == CeBRKR_e_ShortToPower);

    /* VariantMerge generated from: '<S86>/VeBRKR_b_AeCoastBtnCircuitHiC1' incorporates:
     *  Constant: '<S97>/Constant'
     *  RelationalOperator: '<S87>/Comparison1'
     *  RelationalOperator: '<S87>/Comparison2'
     *  Switch: '<S83>/Switch5'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoastBt = (((uint32)
        VeBRKI_e_AeCoastSwitchStatC1) == CeBRKR_e_ShortToPower);

    /* VariantMerge generated from: '<S86>/VeBRKR_b_AeCoastBtnCircuitLowC2' incorporates:
     *  Constant: '<S93>/Constant'
     *  RelationalOperator: '<S87>/Comparison4'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoast_o = (CeBRKR_e_ShortToGround
        == ((uint32)VeBRKI_e_AeCoastSwitchStatC2));

    /* VariantMerge generated from: '<S86>/VeBRKD_b_AeCoastBtnCircuitLow' incorporates:
     *  Constant: '<S99>/Constant'
     *  RelationalOperator: '<S87>/Comparison6'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKD_b_AeCoast_e = (((uint32)
        VeBRKR_e_AeCoastSwitchStat) == CeBRKR_e_ShortToGround);

    /* VariantMerge generated from: '<S86>/VeBRKR_b_AeCoastBtnCircuitHiC2' incorporates:
     *  Constant: '<S97>/Constant'
     *  RelationalOperator: '<S87>/Comparison8'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoast_m = (CeBRKR_e_ShortToPower ==
        ((uint32)VeBRKI_e_AeCoastSwitchStatC2));

    /* RelationalOperator: '<S87>/Relational Operator3' incorporates:
     *  Constant: '<S87>/Constant3'
     *  S-Function (sfix_bitop): '<S87>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n = ((((uint32)tmpRead_2) & 64U) ==
        0U);

    /* Outputs for Atomic SubSystem: '<S87>/EdgeFalling1' */
    /* Logic: '<S90>/AND' incorporates:
     *  Logic: '<S90>/OR1'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    VeBRKD_b_RgnCntrlSwCktLo_Reset = ((!rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n)
        && (BRKR_ac_DW.UnitDelay_DSTATE_h));

    /* Update for UnitDelay: '<S90>/Unit Delay' */
    BRKR_ac_DW.UnitDelay_DSTATE_h = rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n;

    /* End of Outputs for SubSystem: '<S87>/EdgeFalling1' */

    /* RelationalOperator: '<S87>/Relational Operator1' incorporates:
     *  Constant: '<S87>/Constant1'
     *  S-Function (sfix_bitop): '<S87>/Bitwise Operator1'
     */
    rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n = ((((uint32)tmpRead_4) & 64U) ==
        0U);

    /* Outputs for Atomic SubSystem: '<S87>/EdgeFalling2' */
    /* Logic: '<S91>/AND' incorporates:
     *  Logic: '<S91>/OR1'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    VeBRKD_b_RgnCntrlSwCkt_Reset = ((!rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n) &&
        (BRKR_ac_DW.UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S91>/Unit Delay' */
    BRKR_ac_DW.UnitDelay_DSTATE_n = rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n;

    /* End of Outputs for SubSystem: '<S87>/EdgeFalling2' */

    /* RelationalOperator: '<S87>/Relational Operator4' incorporates:
     *  Constant: '<S87>/Constant4'
     *  S-Function (sfix_bitop): '<S87>/Bitwise Operator4'
     */
    rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n = ((((uint32)tmpRead_3) & 64U) ==
        0U);

    /* Outputs for Atomic SubSystem: '<S87>/EdgeFalling4' */
    /* Logic: '<S92>/AND' incorporates:
     *  Logic: '<S92>/OR1'
     *  UnitDelay: '<S92>/Unit Delay'
     */
    VeBRKD_b_RgnCntrlSwCktHi_Reset = ((!rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n)
        && (BRKR_ac_DW.UnitDelay_DSTATE_d));

    /* Update for UnitDelay: '<S92>/Unit Delay' */
    BRKR_ac_DW.UnitDelay_DSTATE_d = rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n;

    /* End of Outputs for SubSystem: '<S87>/EdgeFalling4' */

    /* Switch: '<S87>/Switch2' incorporates:
     *  Constant: '<S108>/Calib'
     */
    if (KeBRKR_b_Only1Contact)
    {
        /* VariantMerge generated from: '<S86>/VeBRKD_b_ShortToGround' */
        BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToGr =
            BRKR_ac_B.VariantMergeForOutportVeBRKD_b_AeCoast_e;
    }
    else
    {
        /* VariantMerge generated from: '<S86>/VeBRKD_b_ShortToGround' incorporates:
         *  Logic: '<S87>/Logical6'
         */
        BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToGr =
            ((BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoast_g) ||
             (BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoast_o));
    }

    /* End of Switch: '<S87>/Switch2' */

    /* Chart: '<S87>/P25BB_Diag' incorporates:
     *  Constant: '<S104>/Calib'
     *  Constant: '<S112>/Calib'
     *  Constant: '<S113>/Calib'
     */
    /* Gateway: BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BB_Diag */
    /* During: BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BB_Diag */
    if (((uint32)BRKR_ac_DW.is_active_c70_BRKR_ac) == 0U)
    {
        /* Entry: BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BB_Diag */
        BRKR_ac_DW.is_active_c70_BRKR_ac = 1U;

        /* Entry Internal: BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BB_Diag */
        /* Transition: '<S115>:177' */
        /* Entry Internal 'DEBOUNCE': '<S115>:175' */
        /* Transition: '<S115>:140' */
        /* Transition: '<S115>:74' */
        VeBRKR_b_P25BB_Fail = false;
        VeBRKR_b_P25BB_Pass = false;
        if (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToGr)
        {
            /* Transition: '<S115>:45' */
            /* Transition: '<S115>:7' */
            BRKR_ac_DW.is_DEBOUNCE_k = BRKR_ac_IN_SHORT_DETECTED;

            /* Entry 'SHORT_DETECTED': '<S115>:3' */
            VeBRKR_e_P25BB_Status = CeBRKR_e_ShortDetected;
            VeBRKR_t_P25BB_timeCnt = 0.0F;
        }
        else
        {
            /* Transition: '<S115>:46' */
            BRKR_ac_DW.is_DEBOUNCE_k = BRKR_ac_IN_IDLE_h;

            /* Entry 'IDLE': '<S115>:4' */
            VeBRKR_e_P25BB_Status = CeBRKR_e_Idle;
            VeBRKR_t_P25BB_timeCnt = 0.0F;
        }
    }
    else
    {
        /* During 'DEBOUNCE': '<S115>:175' */
        if ((!rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) ||
                (VeBRKD_b_RgnCntrlSwCktLo_Reset))
        {
            /* Transition: '<S115>:176' */
            /* Exit Internal 'DEBOUNCE': '<S115>:175' */
            /* Entry Internal 'DEBOUNCE': '<S115>:175' */
            /* Transition: '<S115>:140' */
            /* Transition: '<S115>:74' */
            VeBRKR_b_P25BB_Fail = false;
            VeBRKR_b_P25BB_Pass = false;
            if (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToGr)
            {
                /* Transition: '<S115>:45' */
                /* Transition: '<S115>:7' */
                BRKR_ac_DW.is_DEBOUNCE_k = BRKR_ac_IN_SHORT_DETECTED;

                /* Entry 'SHORT_DETECTED': '<S115>:3' */
                VeBRKR_e_P25BB_Status = CeBRKR_e_ShortDetected;
                VeBRKR_t_P25BB_timeCnt = 0.0F;
            }
            else
            {
                /* Transition: '<S115>:46' */
                BRKR_ac_DW.is_DEBOUNCE_k = BRKR_ac_IN_IDLE_h;

                /* Entry 'IDLE': '<S115>:4' */
                VeBRKR_e_P25BB_Status = CeBRKR_e_Idle;
                VeBRKR_t_P25BB_timeCnt = 0.0F;
            }
        }
        else
        {
            switch (BRKR_ac_DW.is_DEBOUNCE_k)
            {
              case BRKR_ac_IN_FAIL:
                /* During 'FAIL': '<S115>:25' */
                /* Transition: '<S115>:166' */
                /* Transition: '<S115>:167' */
                /* Transition: '<S115>:170' */
                /* Transition: '<S115>:172' */
                /* Transition: '<S115>:173' */
                /* Transition: '<S115>:74' */
                VeBRKR_b_P25BB_Fail = false;
                VeBRKR_b_P25BB_Pass = false;
                if (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToGr)
                {
                    /* Transition: '<S115>:45' */
                    /* Transition: '<S115>:7' */
                    BRKR_ac_DW.is_DEBOUNCE_k = BRKR_ac_IN_SHORT_DETECTED;

                    /* Entry 'SHORT_DETECTED': '<S115>:3' */
                    VeBRKR_e_P25BB_Status = CeBRKR_e_ShortDetected;
                    VeBRKR_t_P25BB_timeCnt = 0.0F;
                }
                else
                {
                    /* Transition: '<S115>:46' */
                    BRKR_ac_DW.is_DEBOUNCE_k = BRKR_ac_IN_IDLE_h;

                    /* Entry 'IDLE': '<S115>:4' */
                    VeBRKR_e_P25BB_Status = CeBRKR_e_Idle;
                    VeBRKR_t_P25BB_timeCnt = 0.0F;
                }
                break;

              case BRKR_ac_IN_IDLE_h:
                VeBRKR_e_P25BB_Status = CeBRKR_e_Idle;

                /* During 'IDLE': '<S115>:4' */
                /* Transition: '<S115>:112' */
                if (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToGr)
                {
                    /* Transition: '<S115>:12' */
                    BRKR_ac_DW.is_DEBOUNCE_k = BRKR_ac_IN_SHORT_DETECTED;

                    /* Entry 'SHORT_DETECTED': '<S115>:3' */
                    VeBRKR_e_P25BB_Status = CeBRKR_e_ShortDetected;
                    VeBRKR_t_P25BB_timeCnt = 0.0F;
                }
                else if (VeBRKR_t_P25BB_timeCnt >= KeBRKR_t_TiDebounceHeal)
                {
                    /* Transition: '<S115>:34' */
                    BRKR_ac_DW.is_DEBOUNCE_k = BRKR_ac_IN_PASS_j;

                    /* Entry 'PASS': '<S115>:26' */
                    VeBRKR_e_P25BB_Status = CeBRKR_e_Pass;
                    VeBRKR_b_P25BB_Pass = true;
                    VeBRKR_b_P25BB_FltDtct = false;
                }
                else
                {
                    VeBRKR_t_P25BB_timeCnt = VeBRKR_t_P25BB_timeCnt +
                        HeBRKR_t_MedTEB;
                }
                break;

              case BRKR_ac_IN_PASS_j:
                /* During 'PASS': '<S115>:26' */
                /* Transition: '<S115>:168' */
                /* Transition: '<S115>:170' */
                /* Transition: '<S115>:172' */
                /* Transition: '<S115>:173' */
                /* Transition: '<S115>:74' */
                VeBRKR_b_P25BB_Fail = false;
                VeBRKR_b_P25BB_Pass = false;
                if (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToGr)
                {
                    /* Transition: '<S115>:45' */
                    /* Transition: '<S115>:7' */
                    BRKR_ac_DW.is_DEBOUNCE_k = BRKR_ac_IN_SHORT_DETECTED;

                    /* Entry 'SHORT_DETECTED': '<S115>:3' */
                    VeBRKR_e_P25BB_Status = CeBRKR_e_ShortDetected;
                    VeBRKR_t_P25BB_timeCnt = 0.0F;
                }
                else
                {
                    /* Transition: '<S115>:46' */
                    BRKR_ac_DW.is_DEBOUNCE_k = BRKR_ac_IN_IDLE_h;

                    /* Entry 'IDLE': '<S115>:4' */
                    VeBRKR_e_P25BB_Status = CeBRKR_e_Idle;
                    VeBRKR_t_P25BB_timeCnt = 0.0F;
                }
                break;

              default:
                VeBRKR_e_P25BB_Status = CeBRKR_e_ShortDetected;

                /* During 'SHORT_DETECTED': '<S115>:3' */
                /* Transition: '<S115>:118' */
                if (VeBRKR_t_P25BB_timeCnt >= KeBRKR_t_TiDebounceSet)
                {
                    /* Transition: '<S115>:190' */
                    BRKR_ac_DW.is_DEBOUNCE_k = BRKR_ac_IN_FAIL;

                    /* Entry 'FAIL': '<S115>:25' */
                    VeBRKR_e_P25BB_Status = CeBRKR_e_Fail;
                    VeBRKR_b_P25BB_Fail = true;
                    VeBRKR_b_P25BB_FltDtct = true;
                }
                else if (!BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToGr)
                {
                    /* Transition: '<S115>:191' */
                    BRKR_ac_DW.is_DEBOUNCE_k = BRKR_ac_IN_IDLE_h;

                    /* Entry 'IDLE': '<S115>:4' */
                    VeBRKR_e_P25BB_Status = CeBRKR_e_Idle;
                    VeBRKR_t_P25BB_timeCnt = 0.0F;
                }
                else
                {
                    VeBRKR_t_P25BB_timeCnt = VeBRKR_t_P25BB_timeCnt +
                        HeBRKR_t_MedTEB;
                }
                break;
            }
        }
    }

    /* End of Chart: '<S87>/P25BB_Diag' */

    /* Switch: '<S87>/Switch1' incorporates:
     *  Constant: '<S108>/Calib'
     */
    if (KeBRKR_b_Only1Contact)
    {
        /* VariantMerge generated from: '<S86>/VeBRKD_b_ShortToPower' */
        BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToPo =
            BRKR_ac_B.VariantMergeForOutportVeBRKD_b_AeCoastBt;
    }
    else
    {
        /* VariantMerge generated from: '<S86>/VeBRKD_b_ShortToPower' incorporates:
         *  Logic: '<S87>/Logical3'
         */
        BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToPo =
            ((BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoastBt) ||
             (BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoast_m));
    }

    /* End of Switch: '<S87>/Switch1' */

    /* Chart: '<S87>/P25BC_Diag' incorporates:
     *  Constant: '<S104>/Calib'
     *  Constant: '<S112>/Calib'
     *  Constant: '<S113>/Calib'
     */
    /* Gateway: BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BC_Diag */
    /* During: BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BC_Diag */
    if (((uint32)BRKR_ac_DW.is_active_c72_BRKR_ac) == 0U)
    {
        /* Entry: BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BC_Diag */
        BRKR_ac_DW.is_active_c72_BRKR_ac = 1U;

        /* Entry Internal: BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BC_Diag */
        /* Transition: '<S116>:177' */
        /* Entry Internal 'DEBOUNCE': '<S116>:175' */
        /* Transition: '<S116>:140' */
        /* Transition: '<S116>:74' */
        VeBRKR_b_P25BC_Fail = false;
        VeBRKR_b_P25BC_Pass = false;
        if (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToPo)
        {
            /* Transition: '<S116>:45' */
            /* Transition: '<S116>:7' */
            BRKR_ac_DW.is_DEBOUNCE = BRKR_ac_IN_SHORT_DETECTED;

            /* Entry 'SHORT_DETECTED': '<S116>:3' */
            VeBRKR_e_P25BC_Status = CeBRKR_e_ShortDetected;
            VeBRKR_t_P25BC_timeCnt = 0.0F;
        }
        else
        {
            /* Transition: '<S116>:46' */
            BRKR_ac_DW.is_DEBOUNCE = BRKR_ac_IN_IDLE_h;

            /* Entry 'IDLE': '<S116>:4' */
            VeBRKR_e_P25BC_Status = CeBRKR_e_Idle;
            VeBRKR_t_P25BC_timeCnt = 0.0F;
        }
    }
    else
    {
        /* During 'DEBOUNCE': '<S116>:175' */
        if ((!rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) ||
                (VeBRKD_b_RgnCntrlSwCktHi_Reset))
        {
            /* Transition: '<S116>:176' */
            /* Exit Internal 'DEBOUNCE': '<S116>:175' */
            /* Entry Internal 'DEBOUNCE': '<S116>:175' */
            /* Transition: '<S116>:140' */
            /* Transition: '<S116>:74' */
            VeBRKR_b_P25BC_Fail = false;
            VeBRKR_b_P25BC_Pass = false;
            if (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToPo)
            {
                /* Transition: '<S116>:45' */
                /* Transition: '<S116>:7' */
                BRKR_ac_DW.is_DEBOUNCE = BRKR_ac_IN_SHORT_DETECTED;

                /* Entry 'SHORT_DETECTED': '<S116>:3' */
                VeBRKR_e_P25BC_Status = CeBRKR_e_ShortDetected;
                VeBRKR_t_P25BC_timeCnt = 0.0F;
            }
            else
            {
                /* Transition: '<S116>:46' */
                BRKR_ac_DW.is_DEBOUNCE = BRKR_ac_IN_IDLE_h;

                /* Entry 'IDLE': '<S116>:4' */
                VeBRKR_e_P25BC_Status = CeBRKR_e_Idle;
                VeBRKR_t_P25BC_timeCnt = 0.0F;
            }
        }
        else
        {
            switch (BRKR_ac_DW.is_DEBOUNCE)
            {
              case BRKR_ac_IN_FAIL:
                /* During 'FAIL': '<S116>:25' */
                /* Transition: '<S116>:166' */
                /* Transition: '<S116>:167' */
                /* Transition: '<S116>:170' */
                /* Transition: '<S116>:172' */
                /* Transition: '<S116>:173' */
                /* Transition: '<S116>:74' */
                VeBRKR_b_P25BC_Fail = false;
                VeBRKR_b_P25BC_Pass = false;
                if (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToPo)
                {
                    /* Transition: '<S116>:45' */
                    /* Transition: '<S116>:7' */
                    BRKR_ac_DW.is_DEBOUNCE = BRKR_ac_IN_SHORT_DETECTED;

                    /* Entry 'SHORT_DETECTED': '<S116>:3' */
                    VeBRKR_e_P25BC_Status = CeBRKR_e_ShortDetected;
                    VeBRKR_t_P25BC_timeCnt = 0.0F;
                }
                else
                {
                    /* Transition: '<S116>:46' */
                    BRKR_ac_DW.is_DEBOUNCE = BRKR_ac_IN_IDLE_h;

                    /* Entry 'IDLE': '<S116>:4' */
                    VeBRKR_e_P25BC_Status = CeBRKR_e_Idle;
                    VeBRKR_t_P25BC_timeCnt = 0.0F;
                }
                break;

              case BRKR_ac_IN_IDLE_h:
                VeBRKR_e_P25BC_Status = CeBRKR_e_Idle;

                /* During 'IDLE': '<S116>:4' */
                /* Transition: '<S116>:112' */
                if (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToPo)
                {
                    /* Transition: '<S116>:12' */
                    BRKR_ac_DW.is_DEBOUNCE = BRKR_ac_IN_SHORT_DETECTED;

                    /* Entry 'SHORT_DETECTED': '<S116>:3' */
                    VeBRKR_e_P25BC_Status = CeBRKR_e_ShortDetected;
                    VeBRKR_t_P25BC_timeCnt = 0.0F;
                }
                else if (VeBRKR_t_P25BC_timeCnt >= KeBRKR_t_TiDebounceHeal)
                {
                    /* Transition: '<S116>:34' */
                    BRKR_ac_DW.is_DEBOUNCE = BRKR_ac_IN_PASS_j;

                    /* Entry 'PASS': '<S116>:26' */
                    VeBRKR_e_P25BC_Status = CeBRKR_e_Pass;
                    VeBRKR_b_P25BC_Pass = true;
                    VeBRKR_b_P25BC_FltDtct = false;
                }
                else
                {
                    VeBRKR_t_P25BC_timeCnt = VeBRKR_t_P25BC_timeCnt +
                        HeBRKR_t_MedTEB;
                }
                break;

              case BRKR_ac_IN_PASS_j:
                /* During 'PASS': '<S116>:26' */
                /* Transition: '<S116>:168' */
                /* Transition: '<S116>:170' */
                /* Transition: '<S116>:172' */
                /* Transition: '<S116>:173' */
                /* Transition: '<S116>:74' */
                VeBRKR_b_P25BC_Fail = false;
                VeBRKR_b_P25BC_Pass = false;
                if (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToPo)
                {
                    /* Transition: '<S116>:45' */
                    /* Transition: '<S116>:7' */
                    BRKR_ac_DW.is_DEBOUNCE = BRKR_ac_IN_SHORT_DETECTED;

                    /* Entry 'SHORT_DETECTED': '<S116>:3' */
                    VeBRKR_e_P25BC_Status = CeBRKR_e_ShortDetected;
                    VeBRKR_t_P25BC_timeCnt = 0.0F;
                }
                else
                {
                    /* Transition: '<S116>:46' */
                    BRKR_ac_DW.is_DEBOUNCE = BRKR_ac_IN_IDLE_h;

                    /* Entry 'IDLE': '<S116>:4' */
                    VeBRKR_e_P25BC_Status = CeBRKR_e_Idle;
                    VeBRKR_t_P25BC_timeCnt = 0.0F;
                }
                break;

              default:
                VeBRKR_e_P25BC_Status = CeBRKR_e_ShortDetected;

                /* During 'SHORT_DETECTED': '<S116>:3' */
                /* Transition: '<S116>:118' */
                if (VeBRKR_t_P25BC_timeCnt >= KeBRKR_t_TiDebounceSet)
                {
                    /* Transition: '<S116>:33' */
                    BRKR_ac_DW.is_DEBOUNCE = BRKR_ac_IN_FAIL;

                    /* Entry 'FAIL': '<S116>:25' */
                    VeBRKR_e_P25BC_Status = CeBRKR_e_Fail;
                    VeBRKR_b_P25BC_Fail = true;
                    VeBRKR_b_P25BC_FltDtct = true;
                }
                else if (!BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToPo)
                {
                    /* Transition: '<S116>:125' */
                    BRKR_ac_DW.is_DEBOUNCE = BRKR_ac_IN_IDLE_h;

                    /* Entry 'IDLE': '<S116>:4' */
                    VeBRKR_e_P25BC_Status = CeBRKR_e_Idle;
                    VeBRKR_t_P25BC_timeCnt = 0.0F;
                }
                else
                {
                    VeBRKR_t_P25BC_timeCnt = VeBRKR_t_P25BC_timeCnt +
                        HeBRKR_t_MedTEB;
                }
                break;
            }
        }
    }

    /* End of Chart: '<S87>/P25BC_Diag' */

    /* Switch: '<S87>/Switch6' incorporates:
     *  Constant: '<S108>/Calib'
     *  Switch: '<S87>/Switch3'
     *  Switch: '<S87>/Switch7'
     */
    if (KeBRKR_b_Only1Contact)
    {
        /* Switch: '<S87>/Switch6' incorporates:
         *  Constant: '<S98>/Constant'
         *  RelationalOperator: '<S87>/Comparison3'
         */
        rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n = (((uint32)
            VeBRKR_e_AeCoastSwitchStat) == CeBRKR_e_Button_Pressed);

        /* Switch: '<S87>/Switch3' incorporates:
         *  Constant: '<S96>/Constant'
         *  RelationalOperator: '<S87>/Comparison5'
         */
        rtb_TmpSignalConversionAtLeBRKR_b_BrkTra = (((uint32)
            VeBRKR_e_AeCoastSwitchStat) == CeBRKR_e_Button_Unpressed);

        /* Switch: '<S87>/Switch7' incorporates:
         *  Constant: '<S87>/FALSE Constant'
         */
        rtb_AND_d = false;
    }
    else
    {
        /* Switch: '<S87>/Switch6' incorporates:
         *  Constant: '<S94>/Constant'
         *  Logic: '<S87>/Logical13'
         *  RelationalOperator: '<S87>/Comparison1'
         *  RelationalOperator: '<S87>/Comparison19'
         *  RelationalOperator: '<S87>/Comparison20'
         *  Switch: '<S83>/Switch5'
         */
        rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n = ((((uint32)
            VeBRKI_e_AeCoastSwitchStatC1) == CeBRKR_e_Button_Pressed) ||
            (CeBRKR_e_Button_Pressed == ((uint32)VeBRKI_e_AeCoastSwitchStatC2)));

        /* Switch: '<S87>/Switch3' incorporates:
         *  Constant: '<S95>/Constant'
         *  Logic: '<S87>/Logical14'
         *  RelationalOperator: '<S87>/Comparison1'
         *  RelationalOperator: '<S87>/Comparison21'
         *  RelationalOperator: '<S87>/Comparison22'
         *  Switch: '<S83>/Switch5'
         */
        rtb_TmpSignalConversionAtLeBRKR_b_BrkTra = ((((uint32)
            VeBRKI_e_AeCoastSwitchStatC1) == CeBRKR_e_Button_Unpressed) ||
            (CeBRKR_e_Button_Unpressed == ((uint32)VeBRKI_e_AeCoastSwitchStatC2)));

        /* Switch: '<S87>/Switch7' incorporates:
         *  RelationalOperator: '<S87>/Comparison1'
         *  RelationalOperator: '<S87>/Comparison24'
         *  Switch: '<S83>/Switch5'
         */
        rtb_AND_d = (VeBRKI_e_AeCoastSwitchStatC1 !=
                     VeBRKI_e_AeCoastSwitchStatC2);
    }

    /* End of Switch: '<S87>/Switch6' */

    /* Chart: '<S87>/P25BA_Diag' incorporates:
     *  Constant: '<S104>/Calib'
     *  Constant: '<S109>/Calib'
     *  Constant: '<S110>/Calib'
     *  Constant: '<S111>/Calib'
     */
    /* Gateway: BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BA_Diag */
    /* During: BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BA_Diag */
    if (((uint32)BRKR_ac_DW.is_active_c69_BRKR_ac) == 0U)
    {
        /* Entry: BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BA_Diag */
        BRKR_ac_DW.is_active_c69_BRKR_ac = 1U;

        /* Entry Internal: BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BA_Diag */
        /* Transition: '<S114>:140' */
        BRKR_ac_DW.is_c69_BRKR_ac = BRKR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S114>:138' */
        /* Transition: '<S114>:105' */
        BRKR_ac_DW.is_DEBOUNCE_c = BRKR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S114>:73' */
        VeBRKR_e_P25BA_Status = CeBRKR_e_Idle;
        VeBRKR_b_P25BA_Fail = false;
        VeBRKR_b_P25BA_Pass = false;
        VeBRKR_t_P25BA_timeCnt = 0.0F;
    }
    else
    {
        switch (BRKR_ac_DW.is_c69_BRKR_ac)
        {
          case BRKR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S114>:138' */
            if (rtb_AND_d)
            {
                /* Transition: '<S114>:147' */
                /* Exit Internal 'DEBOUNCE': '<S114>:138' */
                BRKR_ac_DW.is_DEBOUNCE_c = BRKR_ac_IN_NO_ACTIVE_CHILD;
                BRKR_ac_DW.is_c69_BRKR_ac = BRKR_ac_IN_MISMATCH;

                /* Entry 'MISMATCH': '<S114>:155' */
                VeBRKR_e_P25BA_Status = CeBRKR_e_Mismatch;
                VeBRKR_t_P25BA_timeCnt = 0.0F;
            }
            else if ((((!rtb_TmpSignalConversionAtLeBRKR_b_BrkTra) &&
                       (!rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n)) ||
                      (!rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)) ||
                     (VeBRKD_b_RgnCntrlSwCkt_Reset))
            {
                /* Transition: '<S114>:152' */
                /* Exit Internal 'DEBOUNCE': '<S114>:138' */
                /* Entry Internal 'DEBOUNCE': '<S114>:138' */
                /* Transition: '<S114>:105' */
                BRKR_ac_DW.is_DEBOUNCE_c = BRKR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S114>:73' */
                VeBRKR_e_P25BA_Status = CeBRKR_e_Idle;
                VeBRKR_b_P25BA_Fail = false;
                VeBRKR_b_P25BA_Pass = false;
                VeBRKR_t_P25BA_timeCnt = 0.0F;
            }
            else
            {
                switch (BRKR_ac_DW.is_DEBOUNCE_c)
                {
                  case BRKR_ac_IN_IDLE:
                    VeBRKR_e_P25BA_Status = CeBRKR_e_Idle;

                    /* During 'IDLE': '<S114>:73' */
                    /* Transition: '<S114>:74' */
                    if (rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n)
                    {
                        /* Transition: '<S114>:45' */
                        /* Transition: '<S114>:7' */
                        BRKR_ac_DW.is_DEBOUNCE_c = BRKR_ac_IN_PRESSED;

                        /* Entry 'PRESSED': '<S114>:3' */
                        VeBRKR_e_P25BA_Status = CeBRKR_e_Pressed;
                        VeBRKR_t_P25BA_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_TmpSignalConversionAtLeBRKR_b_BrkTra)
                        {
                            /* Transition: '<S114>:46' */
                            BRKR_ac_DW.is_DEBOUNCE_c = BRKR_ac_IN_UNPRESSED;

                            /* Entry 'UNPRESSED': '<S114>:4' */
                            VeBRKR_e_P25BA_Status = CeBRKR_e_Unpressed;
                            VeBRKR_t_P25BA_timeCnt = 0.0F;
                        }
                    }
                    break;

                  case BRKR_ac_IN_PRESSED:
                    VeBRKR_e_P25BA_Status = CeBRKR_e_Pressed;

                    /* During 'PRESSED': '<S114>:3' */
                    /* Transition: '<S114>:118' */
                    if (VeBRKR_t_P25BA_timeCnt >= KeBRKR_t_P25BA_FailTimerLim)
                    {
                        /* Transition: '<S114>:33' */
                        BRKR_ac_DW.is_DEBOUNCE_c = BRKR_ac_IN_NO_ACTIVE_CHILD;
                        BRKR_ac_DW.is_c69_BRKR_ac = BRKR_ac_IN_FAIL_PRESSED;

                        /* Entry 'FAIL_PRESSED': '<S114>:25' */
                        VeBRKR_e_P25BA_Status = CeBRKR_e_Fail;
                        VeBRKR_b_P25BA_Fail = true;

                        /* VariantMerge generated from: '<S86>/VeBRKD_b_ShortToOpen' */
                        BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToOp =
                            true;
                    }
                    else if (rtb_TmpSignalConversionAtLeBRKR_b_BrkTra)
                    {
                        /* Transition: '<S114>:125' */
                        BRKR_ac_DW.is_DEBOUNCE_c = BRKR_ac_IN_UNPRESSED;

                        /* Entry 'UNPRESSED': '<S114>:4' */
                        VeBRKR_e_P25BA_Status = CeBRKR_e_Unpressed;
                        VeBRKR_t_P25BA_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeBRKR_t_P25BA_timeCnt = VeBRKR_t_P25BA_timeCnt +
                            HeBRKR_t_MedTEB;
                    }
                    break;

                  default:
                    VeBRKR_e_P25BA_Status = CeBRKR_e_Unpressed;

                    /* During 'UNPRESSED': '<S114>:4' */
                    /* Transition: '<S114>:112' */
                    if (VeBRKR_t_P25BA_timeCnt >= KeBRKR_t_P25BA_PassTimerLim)
                    {
                        /* Transition: '<S114>:34' */
                        BRKR_ac_DW.is_DEBOUNCE_c = BRKR_ac_IN_NO_ACTIVE_CHILD;
                        BRKR_ac_DW.is_c69_BRKR_ac = BRKR_ac_IN_PASS;

                        /* Entry 'PASS': '<S114>:26' */
                        VeBRKR_e_P25BA_Status = CeBRKR_e_Pass;
                        VeBRKR_b_P25BA_Pass = true;

                        /* VariantMerge generated from: '<S86>/VeBRKD_b_ShortToOpen' */
                        BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToOp =
                            false;
                    }
                    else if (rtb_TmpSignalConversionAtLeBRKR_b_BrkP_n)
                    {
                        /* Transition: '<S114>:12' */
                        BRKR_ac_DW.is_DEBOUNCE_c = BRKR_ac_IN_PRESSED;

                        /* Entry 'PRESSED': '<S114>:3' */
                        VeBRKR_e_P25BA_Status = CeBRKR_e_Pressed;
                        VeBRKR_t_P25BA_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeBRKR_t_P25BA_timeCnt = VeBRKR_t_P25BA_timeCnt +
                            HeBRKR_t_MedTEB;
                    }
                    break;
                }
            }
            break;

          case BRKR_ac_IN_FAIL_MISMATCH:
            /* During 'FAIL_MISMATCH': '<S114>:165' */
            /* Transition: '<S114>:187' */
            /* Transition: '<S114>:188' */
            /* Transition: '<S114>:192' */
            VeBRKR_b_P25BA_Fail = false;
            BRKR_ac_DW.is_c69_BRKR_ac = BRKR_ac_IN_MISMATCH;

            /* Entry 'MISMATCH': '<S114>:155' */
            VeBRKR_e_P25BA_Status = CeBRKR_e_Mismatch;
            VeBRKR_t_P25BA_timeCnt = 0.0F;
            break;

          case BRKR_ac_IN_FAIL_PRESSED:
            /* During 'FAIL_PRESSED': '<S114>:25' */
            /* Transition: '<S114>:196' */
            BRKR_ac_DW.is_c69_BRKR_ac = BRKR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S114>:138' */
            /* Transition: '<S114>:105' */
            BRKR_ac_DW.is_DEBOUNCE_c = BRKR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S114>:73' */
            VeBRKR_e_P25BA_Status = CeBRKR_e_Idle;
            VeBRKR_b_P25BA_Fail = false;
            VeBRKR_b_P25BA_Pass = false;
            VeBRKR_t_P25BA_timeCnt = 0.0F;
            break;

          case BRKR_ac_IN_MISMATCH:
            VeBRKR_e_P25BA_Status = CeBRKR_e_Mismatch;

            /* During 'MISMATCH': '<S114>:155' */
            /* Transition: '<S114>:169' */
            if (((!rtb_AND_d) || (!rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)) ||
                (VeBRKD_b_RgnCntrlSwCkt_Reset))
            {
                /* Transition: '<S114>:166' */
                BRKR_ac_DW.is_c69_BRKR_ac = BRKR_ac_IN_DEBOUNCE;

                /* Entry Internal 'DEBOUNCE': '<S114>:138' */
                /* Transition: '<S114>:105' */
                BRKR_ac_DW.is_DEBOUNCE_c = BRKR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S114>:73' */
                VeBRKR_e_P25BA_Status = CeBRKR_e_Idle;
                VeBRKR_b_P25BA_Fail = false;
                VeBRKR_b_P25BA_Pass = false;
                VeBRKR_t_P25BA_timeCnt = 0.0F;
            }
            else if (VeBRKR_t_P25BA_timeCnt >= KeBRKR_t_DiagBtnDiffActv)
            {
                /* Transition: '<S114>:156' */
                BRKR_ac_DW.is_c69_BRKR_ac = BRKR_ac_IN_FAIL_MISMATCH;

                /* Entry 'FAIL_MISMATCH': '<S114>:165' */
                VeBRKR_e_P25BA_Status = CeBRKR_e_Fail;
                VeBRKR_b_P25BA_Fail = true;

                /* VariantMerge generated from: '<S86>/VeBRKD_b_ShortToOpen' */
                BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToOp = true;
            }
            else
            {
                VeBRKR_t_P25BA_timeCnt = VeBRKR_t_P25BA_timeCnt +
                    HeBRKR_t_MedTEB;
            }
            break;

          default:
            /* During 'PASS': '<S114>:26' */
            /* Transition: '<S114>:195' */
            BRKR_ac_DW.is_c69_BRKR_ac = BRKR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S114>:138' */
            /* Transition: '<S114>:105' */
            BRKR_ac_DW.is_DEBOUNCE_c = BRKR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S114>:73' */
            VeBRKR_e_P25BA_Status = CeBRKR_e_Idle;
            VeBRKR_b_P25BA_Fail = false;
            VeBRKR_b_P25BA_Pass = false;
            VeBRKR_t_P25BA_timeCnt = 0.0F;
            break;
        }
    }

    /* End of Chart: '<S87>/P25BA_Diag' */

    /* Switch: '<S87>/Switch5' incorporates:
     *  Constant: '<S101>/Constant'
     *  Constant: '<S102>/Constant'
     *  Constant: '<S108>/Calib'
     *  Logic: '<S87>/Logical11'
     *  RelationalOperator: '<S87>/Comparison1'
     *  RelationalOperator: '<S87>/Comparison13'
     *  RelationalOperator: '<S87>/Comparison14'
     *  RelationalOperator: '<S87>/Comparison7'
     *  Switch: '<S83>/Switch5'
     */
    if (KeBRKR_b_Only1Contact)
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = (((uint32)
            VeBRKR_e_AeCoastSwitchStat) == CeBRKR_e_SwitchSNA);
    }
    else
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = ((((uint32)
            VeBRKI_e_AeCoastSwitchStatC1) == CeBRKR_e_SwitchSNA) ||
            (CeBRKR_e_SwitchSNA == ((uint32)VeBRKI_e_AeCoastSwitchStatC2)));
    }

    /* End of Switch: '<S87>/Switch5' */

    /* Logic: '<S87>/Logical10' incorporates:
     *  Constant: '<S103>/Constant'
     *  Constant: '<S107>/Calib'
     *  DataStoreRead: '<S103>/StatusByte_LostCommBCM'
     *  Logic: '<S87>/Logical12'
     *  RelationalOperator: '<S103>/Relational Operator'
     *  S-Function (sfix_bitop): '<S103>/Bitwise Operator7'
     */
    VeBRKD_b_AeCoastBtnDiagFail1 = (((((VeBRKR_b_P25BB_FltDtct) ||
        (VeBRKR_b_P25BC_FltDtct)) ||
        (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToOp)) ||
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) || (((((sint32)
        BRKR_ac_DW.StatusByte_LostCommBCM) & 1) > 0) && (KeBRKR_b_EnaComDiag)));

    /* VariantMerge generated from: '<S86>/VeBRKD_b_AeCoastBtnDiagFail' incorporates:
     *  Constant: '<S105>/Calib'
     *  Constant: '<S106>/Calib'
     *  Logic: '<S87>/Logical5'
     *  Logic: '<S87>/Logical9'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKD_b_AeCoast_b = ((KeBRKR_b_DiagTest) ||
        ((VeBRKD_b_AeCoastBtnDiagFail1) && (KeBRKR_b_EnaAeCoastDiag)));

    /* Outputs for Atomic SubSystem: '<S117>/EdgeFalling1' */
    /* Update for UnitDelay: '<S123>/Unit Delay' */
    BRKR_ac_DW.UnitDelay_DSTATE_g = true;

    /* End of Outputs for SubSystem: '<S117>/EdgeFalling1' */

    /* If: '<S117>/If' incorporates:
     *  Logic: '<S117>/Logical5'
     */
    if (VeBRKD_b_RgnCntrlSwCktLo_Reset)
    {
        /* Outputs for IfAction SubSystem: '<S117>/Init' incorporates:
         *  ActionPort: '<S125>/Action Port'
         */
        BRKR_ac_Init_n(&BRKR_ac_B.VariantMergeForOutportVeBRKD_e_FaultSts_);

        /* End of Outputs for SubSystem: '<S117>/Init' */
    }
    else if (VeBRKR_b_P25BB_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S117>/Pass' incorporates:
         *  ActionPort: '<S126>/Action Port'
         */
        BRKR_ac_Pass(&BRKR_ac_B.VariantMergeForOutportVeBRKD_e_FaultSts_);

        /* End of Outputs for SubSystem: '<S117>/Pass' */
    }
    else
    {
        if (VeBRKR_b_P25BB_Fail)
        {
            /* Outputs for IfAction SubSystem: '<S117>/Fail' incorporates:
             *  ActionPort: '<S124>/Action Port'
             */
            BRKR_ac_Fail(&BRKR_ac_B.VariantMergeForOutportVeBRKD_e_FaultSts_);

            /* End of Outputs for SubSystem: '<S117>/Fail' */
        }
    }

    /* End of If: '<S117>/If' */

    /* Outputs for Atomic SubSystem: '<S118>/EdgeFalling1' */
    /* Update for UnitDelay: '<S130>/Unit Delay' */
    BRKR_ac_DW.UnitDelay_DSTATE_e = true;

    /* End of Outputs for SubSystem: '<S118>/EdgeFalling1' */

    /* If: '<S118>/If' incorporates:
     *  Logic: '<S118>/Logical5'
     */
    if (VeBRKD_b_RgnCntrlSwCktHi_Reset)
    {
        /* Outputs for IfAction SubSystem: '<S118>/Init' incorporates:
         *  ActionPort: '<S132>/Action Port'
         */
        BRKR_ac_Init_n(&BRKR_ac_B.VariantMergeForOutportVeBRKR_e_FaultSt_n);

        /* End of Outputs for SubSystem: '<S118>/Init' */
    }
    else if (VeBRKR_b_P25BC_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S118>/Pass' incorporates:
         *  ActionPort: '<S133>/Action Port'
         */
        BRKR_ac_Pass(&BRKR_ac_B.VariantMergeForOutportVeBRKR_e_FaultSt_n);

        /* End of Outputs for SubSystem: '<S118>/Pass' */
    }
    else
    {
        if (VeBRKR_b_P25BC_Fail)
        {
            /* Outputs for IfAction SubSystem: '<S118>/Fail' incorporates:
             *  ActionPort: '<S131>/Action Port'
             */
            BRKR_ac_Fail(&BRKR_ac_B.VariantMergeForOutportVeBRKR_e_FaultSt_n);

            /* End of Outputs for SubSystem: '<S118>/Fail' */
        }
    }

    /* End of If: '<S118>/If' */

    /* Outputs for Atomic SubSystem: '<S119>/EdgeFalling1' */
    /* Update for UnitDelay: '<S137>/Unit Delay' */
    BRKR_ac_DW.UnitDelay_DSTATE_b = true;

    /* End of Outputs for SubSystem: '<S119>/EdgeFalling1' */

    /* If: '<S119>/If' incorporates:
     *  Logic: '<S119>/Logical5'
     */
    if (VeBRKD_b_RgnCntrlSwCkt_Reset)
    {
        /* Outputs for IfAction SubSystem: '<S119>/Init' incorporates:
         *  ActionPort: '<S139>/Action Port'
         */
        BRKR_ac_Init_n(&BRKR_ac_B.VariantMergeForOutportVeBRKR_e_FaultSts_);

        /* End of Outputs for SubSystem: '<S119>/Init' */
    }
    else if (VeBRKR_b_P25BA_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S119>/Pass' incorporates:
         *  ActionPort: '<S140>/Action Port'
         */
        BRKR_ac_Pass(&BRKR_ac_B.VariantMergeForOutportVeBRKR_e_FaultSts_);

        /* End of Outputs for SubSystem: '<S119>/Pass' */
    }
    else
    {
        if (VeBRKR_b_P25BA_Fail)
        {
            /* Outputs for IfAction SubSystem: '<S119>/Fail' incorporates:
             *  ActionPort: '<S138>/Action Port'
             */
            BRKR_ac_Fail(&BRKR_ac_B.VariantMergeForOutportVeBRKR_e_FaultSts_);

            /* End of Outputs for SubSystem: '<S119>/Fail' */
        }
    }

    /* End of If: '<S119>/If' */
    /* End of Outputs for SubSystem: '<S86>/eCoasting_Diagnostic' */
    /* End of Outputs for SubSystem: '<S80>/eCoasting_Diagnostic' */
#else

    /* Outputs for Atomic SubSystem: '<S86>/eCoasting_DiagnosticStub' */
    /* VariantMerge generated from: '<S86>/VeBRKD_b_AeCoastBtnDiagFail' incorporates:
     *  Constant: '<S88>/FALSE Constant'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKD_b_AeCoast_b = false;

    /* VariantMerge generated from: '<S86>/VeBRKD_b_AeCoastBtnCircuitLow' incorporates:
     *  Constant: '<S88>/FALSE Constant1'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKD_b_AeCoast_e = false;

    /* VariantMerge generated from: '<S86>/VeBRKD_b_AeCoastBtnCircuitHi' incorporates:
     *  Constant: '<S88>/FALSE Constant2'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKD_b_AeCoastBt = false;

    /* VariantMerge generated from: '<S86>/VeBRKD_b_ShortToGround' incorporates:
     *  Constant: '<S88>/FALSE Constant3'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToGr = false;

    /* VariantMerge generated from: '<S86>/VeBRKD_b_ShortToPower' incorporates:
     *  Constant: '<S88>/FALSE Constant4'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToPo = false;

    /* VariantMerge generated from: '<S86>/VeBRKD_b_ShortToOpen' incorporates:
     *  Constant: '<S88>/FALSE Constant5'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToOp = false;

    /* VariantMerge generated from: '<S86>/VeBRKR_b_AeCoastBtnCircuitLowC1' incorporates:
     *  Constant: '<S88>/FALSE Constant6'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoast_g = false;

    /* VariantMerge generated from: '<S86>/VeBRKR_b_AeCoastBtnCircuitLowC2' incorporates:
     *  Constant: '<S88>/FALSE Constant7'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoast_o = false;

    /* VariantMerge generated from: '<S86>/VeBRKR_b_AeCoastBtnCircuitHiC1' incorporates:
     *  Constant: '<S88>/FALSE Constant8'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoastBt = false;

    /* VariantMerge generated from: '<S86>/VeBRKR_b_AeCoastBtnCircuitHiC2' incorporates:
     *  Constant: '<S88>/FALSE Constant9'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoast_m = false;

    /* VariantMerge generated from: '<S86>/VeBRKD_e_FaultSts_RgnCntrlSwCktLo' incorporates:
     *  Constant: '<S145>/Constant'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKD_e_FaultSts_ = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S86>/VeBRKR_e_FaultSts_RgnCntrlSwCktHi' incorporates:
     *  Constant: '<S144>/Constant'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKR_e_FaultSt_n = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S86>/VeBRKR_e_FaultSts_RgnCntrlSwCkt' incorporates:
     *  Constant: '<S146>/Constant'
     */
    BRKR_ac_B.VariantMergeForOutportVeBRKR_e_FaultSts_ = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S86>/eCoasting_DiagnosticStub' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputOverrides'
     */
    /* Switch: '<S83>/Switch1' incorporates:
     *  Constant: '<S203>/Calib'
     *  Constant: '<S204>/Calib'
     *  Merge: '<Root>/Merge_10'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_AeCoastReady_read'
     */
    if (KeBRKR_b_AeCoastReadyOvrrd)
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = KeBRKR_b_AeCoastReadyOvrrdVal;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_AeCoastReady_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBRKR_b_AeCoastReady' incorporates:
     *  SignalConversion generated from: '<S1>/AeCoastReady'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastReady_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputOverrides'
     */
    /* Switch: '<S83>/Switch2' incorporates:
     *  Constant: '<S201>/Calib'
     *  Constant: '<S202>/Calib'
     *  Merge: '<Root>/Merge_55'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_AeCoastReadyFA_read'
     */
    if (KeBRKR_b_AeCoastReadyFAOvrrd)
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            KeBRKR_b_AeCoastReadyFAOvrrdVal;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_AeCoastReadyFA_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBRKR_b_AeCoastReadyFA' incorporates:
     *  SignalConversion generated from: '<S1>/AeCoastReadyFA'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastReadyFA_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* Outport: '<Root>/VeBRKR_e_AeCoastSwitch' incorporates:
     *  SignalConversion generated from: '<S1>/AeCoastSwitch'
     *  Switch: '<S83>/Switch14'
     */
    (void)Rte_Write_VeBRKR_e_AeCoastSwitch_Value(Switch14);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputOverrides'
     */
    /* Switch: '<S83>/Switch15' incorporates:
     *  Constant: '<S205>/Calib'
     *  Constant: '<S206>/Calib'
     *  Merge: '<Root>/Merge_40'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_AeCoastSwitchFA_read'
     */
    if (KeBRKR_b_AeCoastSwitchFAOvrrd)
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            KeBRKR_b_AeCoastSwitchFAOvrrdVal;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_AeCoastSwitchFA_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch15' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBRKR_b_AeCoastSwitchFA' incorporates:
     *  SignalConversion generated from: '<S1>/AeCoastSwitchFA'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastSwitchFA_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputOverrides'
     */
    /* Switch: '<S83>/Switch6' incorporates:
     *  Constant: '<S208>/Calib'
     *  Constant: '<S209>/Calib'
     *  Merge: '<Root>/Merge_14'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_AeCoastSwitchStatC1FA_read'
     */
    if (KeBRKR_b_AeCoastSwitchStC1FAOvrrd)
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            KeBRKR_b_AeCoastSwitchStC1FAOvrrdVal;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_AeCoastSwitchStatC1FA_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBRKR_b_AeCoastSwitchStatC1FA' incorporates:
     *  SignalConversion generated from: '<S1>/AeCoastSwitchStatC1FA'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastSwitchStatC1FA_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputOverrides'
     */
    /* Switch: '<S83>/Switch8' incorporates:
     *  Constant: '<S211>/Calib'
     *  Constant: '<S212>/Calib'
     *  Merge: '<Root>/Merge_16'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_AeCoastSwitchStatC2FA_read'
     */
    if (KeBRKR_b_AeCoastSwitchStatC2FAOvrrd)
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            KeBRKR_b_AeCoastSwitchStatC2FAOvrrdVal;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_AeCoastSwitchStatC2FA_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch8' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBRKR_b_AeCoastSwitchStatC2FA' incorporates:
     *  SignalConversion generated from: '<S1>/AeCoastSwitchStatC2FA'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastSwitchStatC2FA_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputOverrides'
     */
    /* Switch: '<S83>/Switch4' incorporates:
     *  Constant: '<S214>/Calib'
     *  Constant: '<S215>/Calib'
     *  Merge: '<Root>/Merge_9'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_AeCoastSwitchStatFA_read'
     */
    if (KeBRKR_b_AeCoastSwitchStatFAOvrrd)
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            KeBRKR_b_AeCoastSwitchStatFAOvrrdVal;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_AeCoastSwitchStatFA_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBRKR_b_AeCoastSwitchStatFA' incorporates:
     *  SignalConversion generated from: '<S1>/AeCoastSwitchStatFA'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastSwitchStatFA_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* Outport: '<Root>/VeBRKR_e_BrkPedalStat2' incorporates:
     *  SignalConversion generated from: '<S1>/BrkPedalStat2'
     *  Switch: '<S83>/Switch16'
     */
    (void)Rte_Write_VeBRKR_e_BrkPedalStat2_Value(Switch16);

    /* Outport: '<Root>/VeBRKR_b_BrkPedalStat2FA' incorporates:
     *  SignalConversion generated from: '<S1>/BrkPedalStat2FA'
     */
    (void)Rte_Write_VeBRKR_b_BrkPedalStat2FA_Value(Switch17);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputOverrides'
     */
    /* Switch: '<S83>/Switch9' incorporates:
     *  Constant: '<S200>/Calib'
     *  Constant: '<S219>/Calib'
     *  Merge: '<Root>/Merge_18'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_EmsMlfAtv_read'
     */
    if (HeBRKR_b_EmsMlfAtvOvrrd)
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = KeBRKR_b_EmsMlfAtvOvrrdVal;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_EmsMlfAtv_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch9' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBRKR_b_EmsMlfAtv' incorporates:
     *  SignalConversion generated from: '<S1>/EmsMlfAtv'
     */
    (void)Rte_Write_VeBRKR_b_EmsMlfAtv_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputOverrides'
     */
    /* Switch: '<S83>/Switch10' incorporates:
     *  Constant: '<S199>/Calib'
     *  Constant: '<S218>/Calib'
     *  Merge: '<Root>/Merge_17'
     *  SignalConversion generated from: '<S1>/LeBRKR_b_EmsMlfAtvFA_read'
     */
    if (HeBRKR_b_EmsMlfAtvFAOvrrd)
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = KeBRKR_b_EmsMlfAtvFAOvrrdVal;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            Rte_IrvRead_BRKR_MedTEB_VeBRKR_b_EmsMlfAtvFA_Init_IRV();
    }

    /* End of Switch: '<S83>/Switch10' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBRKR_b_EmsMlfAtvFA' incorporates:
     *  SignalConversion generated from: '<S1>/EmsMlfAtvFA'
     */
    (void)Rte_Write_VeBRKR_b_EmsMlfAtvFA_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InputOverrides'
     */
    /* Outport: '<Root>/VeBRKR_Pct_OneBrkBoxPdlPosn' incorporates:
     *  Inport: '<S83>/VeBRKI_Pct_OneBrkBoxPdlPosn'
     *  SignalConversion generated from: '<S1>/OneBrkBoxPdlPosn'
     */
    (void)Rte_Write_VeBRKR_Pct_OneBrkBoxPdlPosn_Value(tmpRead_5);

    /* Outport: '<Root>/VeBRKR_b_OneBrkBoxPdlPosnFA' incorporates:
     *  Inport: '<S83>/VeBRKI_b_OneBrkBoxPdlPosnFA'
     *  SignalConversion generated from: '<S1>/OneBrkBoxPdlPosnFA'
     */
    (void)Rte_Write_VeBRKR_b_OneBrkBoxPdlPosnFA_Value(tmpRead_6);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBRKR_b_HillHoldActive' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKC_b_HillHoldActive'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    (void)Rte_Write_VeBRKR_b_HillHoldActive_Value(BRKR_ac_DW.UnitDelay_DSTATE_hc);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HillHolder'
     */
    /* Outport: '<Root>/VeBRKR_b_HillHoldFailSts' incorporates:
     *  Logic: '<S81>/Logical6'
     *  SignalConversion generated from: '<S1>/VeBRKC_b_HillHoldFailSts'
     */
    (void)Rte_Write_VeBRKR_b_HillHoldFailSts_Value((VeBRKI_b_HillHoldFailSts) ||
        rtb_TmpSignalConversionAtLeBRKR_b_Hill_o);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBRKR_e_AeCoastSwitchStat' incorporates:
     *  Merge: '<S82>/Merge25'
     *  SignalConversion generated from: '<S1>/VeBRKC_e_AeCoastSwitchStat'
     */
    (void)Rte_Write_VeBRKR_e_AeCoastSwitchStat_Value(VeBRKR_e_AeCoastSwitchStat);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnCircuitHi' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKD_b_AeCoastBtnCircuitHi'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnCircuitHi_Value
        (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_AeCoastBt);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnCircuitHiC1' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKD_b_AeCoastBtnCircuitHiC1'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnCircuitHiC1_Value
        (BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoastBt);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnCircuitHiC2' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKD_b_AeCoastBtnCircuitHiC2'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnCircuitHiC2_Value
        (BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoast_m);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnCircuitLow' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKD_b_AeCoastBtnCircuitLow'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnCircuitLow_Value
        (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_AeCoast_e);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnCircuitLowC1' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKD_b_AeCoastBtnCircuitLowC1'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnCircuitLowC1_Value
        (BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoast_g);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnCircuitLowC2' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKD_b_AeCoastBtnCircuitLowC2'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnCircuitLowC2_Value
        (BRKR_ac_B.VariantMergeForOutportVeBRKR_b_AeCoast_o);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnDiagFail' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKD_b_AeCoastBtnDiagFail'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnDiagFail_Value
        (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_AeCoast_b);

    /* Outport: '<Root>/VeBRKR_b_ShortToGround' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKD_b_ShortToGround'
     */
    (void)Rte_Write_VeBRKR_b_ShortToGround_Value
        (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToGr);

    /* Outport: '<Root>/VeBRKR_b_ShortToOpen' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKD_b_ShortToOpen'
     */
    (void)Rte_Write_VeBRKR_b_ShortToOpen_Value
        (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToOp);

    /* Outport: '<Root>/VeBRKR_b_ShortToPower' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKD_b_ShortToPower'
     */
    (void)Rte_Write_VeBRKR_b_ShortToPower_Value
        (BRKR_ac_B.VariantMergeForOutportVeBRKD_b_ShortToPo);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ImpendingSkidSignal'
     */
    /* Switch: '<S82>/Switch' incorporates:
     *  Constant: '<S159>/Calib'
     *  Logic: '<S82>/Logical5'
     *  Logic: '<S82>/Logical6'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    if (KeBRKR_b_UseImpndSkidCAN)
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = VeBRKI_b_ImpndSkid;
    }
    else
    {
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = ((UnitDelay_DSTATE_hw_tmp_0 &&
            rtb_TmpSignalConversionAtLeBRKR_b_ABSAct) ||
            (BRKR_ac_DW.UnitDelay_DSTATE_hw));
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBRKR_b_ImpndSkid' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKR_b_ImpndSkid'
     */
    (void)Rte_Write_VeBRKR_b_ImpndSkid_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DID568_Renaming'
     */
    /* Switch: '<S79>/Switch1' incorporates:
     *  Constant: '<S84>/Calib'
     *  Switch: '<S83>/Switch5'
     */
    if (KeBRKR_b_Only1Contact)
    {
    }
    else
    {
        VeBRKR_e_AeCoastSwitchStat = VeBRKI_e_AeCoastSwitchStatC1;
    }

    /* Outport: '<Root>/VeBRKR_e_AeCoastSwitchStatC1' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKR_e_AeCoastSwitchStatC1'
     *  Switch: '<S79>/Switch1'
     */
    (void)Rte_Write_VeBRKR_e_AeCoastSwitchStatC1_Value
        (VeBRKR_e_AeCoastSwitchStat);

    /* Switch: '<S79>/Switch' incorporates:
     *  Constant: '<S84>/Calib'
     *  Constant: '<S85>/Calib'
     *  Switch: '<S83>/Switch7'
     */
    if (KeBRKR_b_Only1Contact)
    {
        VeBRKR_e_AeCoastSwitchStat = KeBRKR_e_AeCoastSwitchC2StatInit;
    }
    else
    {
        VeBRKR_e_AeCoastSwitchStat = VeBRKI_e_AeCoastSwitchStatC2;
    }

    /* Outport: '<Root>/VeBRKR_e_AeCoastSwitchStatC2' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKR_e_AeCoastSwitchStatC2'
     *  Switch: '<S79>/Switch'
     */
    (void)Rte_Write_VeBRKR_e_AeCoastSwitchStatC2_Value
        (VeBRKR_e_AeCoastSwitchStat);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt' incorporates:
     *  Merge: '<S162>/Merge25'
     *  SignalConversion generated from: '<S1>/VeBRKR_e_BrkPdlDscrtInpt'
     */
    (void)Rte_Write_VeBRKR_e_BrkPedalDscrtInpt_Value(VeBRKR_e_BrkTravelSts);

    /* Outport: '<Root>/VeBRKR_e_FaultSts_RgnCntrlSwCkt' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKR_e_FaultSts_RgnCntrlSwCkt'
     *  VariantMerge generated from: '<S86>/VeBRKR_e_FaultSts_RgnCntrlSwCkt'
     */
    (void)Rte_Write_VeBRKR_e_FaultSts_RgnCntrlSwCkt_Value
        (BRKR_ac_B.VariantMergeForOutportVeBRKR_e_FaultSts_);

    /* Outport: '<Root>/VeBRKR_e_FaultSts_RgnCntrlSwCktHi' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKR_e_FaultSts_RgnCntrlSwCktHi'
     *  VariantMerge generated from: '<S86>/VeBRKR_e_FaultSts_RgnCntrlSwCktHi'
     */
    (void)Rte_Write_VeBRKR_e_FaultSts_RgnCntrlSwCktHi_Value
        (BRKR_ac_B.VariantMergeForOutportVeBRKR_e_FaultSt_n);

    /* Outport: '<Root>/VeBRKR_e_FaultSts_RgnCntrlSwCktLo' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRKR_e_FaultSts_RgnCntrlSwCktLo'
     *  VariantMerge generated from: '<S86>/VeBRKD_e_FaultSts_RgnCntrlSwCktLo'
     */
    (void)Rte_Write_VeBRKR_e_FaultSts_RgnCntrlSwCktLo_Value
        (BRKR_ac_B.VariantMergeForOutportVeBRKD_e_FaultSts_);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_P_BrkPrss(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_P_BrkPrss' */
    /* Outport: '<Root>/VeBRKR_b_BrkPrssFA' incorporates:
     *  Chart: '<S3>/FsftBRKR_P_BrkPrssChrt'
     *  SignalConversion generated from: '<S3>/VeBRKR_b_BrkPrssFA'
     */
    /* Gateway: FsftBRKR_P_BrkPrss/FsftBRKR_P_BrkPrssChrt */
    /* During: FsftBRKR_P_BrkPrss/FsftBRKR_P_BrkPrssChrt */
    /* Entry Internal: FsftBRKR_P_BrkPrss/FsftBRKR_P_BrkPrssChrt */
    /* Transition: '<S257>:2' */
    (void)Rte_Write_VeBRKR_b_BrkPrssFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_P_BrkPrss' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_ABSActive(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_ABSActive' */
    /* Outport: '<Root>/VeBRKR_b_ABSActiveFA' incorporates:
     *  Chart: '<S4>/FsftBRKR_b_ABSActiveChrt'
     *  SignalConversion generated from: '<S4>/VeBRKR_b_ABSActiveFA'
     */
    /* Gateway: FsftBRKR_b_ABSActive/FsftBRKR_b_ABSActiveChrt */
    /* During: FsftBRKR_b_ABSActive/FsftBRKR_b_ABSActiveChrt */
    /* Entry Internal: FsftBRKR_b_ABSActive/FsftBRKR_b_ABSActiveChrt */
    /* Transition: '<S258>:2' */
    (void)Rte_Write_VeBRKR_b_ABSActiveFA_Value(true);

    /* Merge: '<Root>/Merge_76_Irv' incorporates:
     *  Chart: '<S4>/FsftBRKR_b_ABSActiveChrt'
     *  SignalConversion generated from: '<S4>/VeBRKR_b_ABSActiveFA_write'
     */
    Rte_IrvWrite_FsftBRKR_b_ABSActive_VeBRKR_b_ABSActiveFA_write_Init_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_ABSActive' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_ASRActive(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_ASRActive' */
    /* Outport: '<Root>/VeBRKR_b_ASRActive_FA' incorporates:
     *  Chart: '<S5>/FsftBRKR_b_ASRActiveChrt'
     *  SignalConversion generated from: '<S5>/VeBRKR_b_ASRActiveFA'
     */
    /* Gateway: FsftBRKR_b_ASRActive/FsftBRKR_b_ASRActiveChrt */
    /* During: FsftBRKR_b_ASRActive/FsftBRKR_b_ASRActiveChrt */
    /* Entry Internal: FsftBRKR_b_ASRActive/FsftBRKR_b_ASRActiveChrt */
    /* Transition: '<S259>:2' */
    (void)Rte_Write_VeBRKR_b_ASRActive_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_ASRActive' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_AeCoastReady(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_AeCoastReady' */
    /* Merge: '<Root>/Merge_55' incorporates:
     *  Chart: '<S6>/FsftBRKR_b_AeCoastReadyChrt'
     *  SignalConversion generated from: '<S6>/VeBRKR_b_AeCoastReadyFA_write'
     */
    /* Gateway: FsftBRKR_b_AeCoastReady/FsftBRKR_b_AeCoastReadyChrt */
    /* During: FsftBRKR_b_AeCoastReady/FsftBRKR_b_AeCoastReadyChrt */
    /* Entry Internal: FsftBRKR_b_AeCoastReady/FsftBRKR_b_AeCoastReadyChrt */
    /* Transition: '<S260>:2' */
    Rte_IrvWrite_FsftBRKR_b_AeCoastReady_VeBRKR_b_AeCoastReadyFA_Init_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_AeCoastReady' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_BrkMaxTrqIntrvntn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_BrkMaxTrqIntrvntn' */
    /* Outport: '<Root>/VeBRKR_b_BrkMaxTrqIntrvntn' incorporates:
     *  Chart: '<S7>/FsftBRKR_b_BrkMaxTrqIntrvntnChrt'
     *  SignalConversion generated from: '<S7>/VeBRKR_b_BrkMaxTrqIntrvntn'
     */
    /* Gateway: FsftBRKR_b_BrkMaxTrqIntrvntn/FsftBRKR_b_BrkMaxTrqIntrvntnChrt */
    /* During: FsftBRKR_b_BrkMaxTrqIntrvntn/FsftBRKR_b_BrkMaxTrqIntrvntnChrt */
    /* Entry Internal: FsftBRKR_b_BrkMaxTrqIntrvntn/FsftBRKR_b_BrkMaxTrqIntrvntnChrt */
    /* Transition: '<S261>:2' */
    (void)Rte_Write_VeBRKR_b_BrkMaxTrqIntrvntn_Value
        (KeBRKR_b_BrkMaxTrqIntrvntnFsft);

    /* Outport: '<Root>/VeBRKR_b_BrkMaxTrqIntrvntnFA' incorporates:
     *  Chart: '<S7>/FsftBRKR_b_BrkMaxTrqIntrvntnChrt'
     *  SignalConversion generated from: '<S7>/VeBRKR_b_BrkMaxTrqIntrvntnFA'
     */
    (void)Rte_Write_VeBRKR_b_BrkMaxTrqIntrvntnFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_BrkMaxTrqIntrvntn' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_BrkMinTrqIntrvntn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_BrkMinTrqIntrvntn' */
    /* Outport: '<Root>/VeBRKR_b_BrkMinTrqIntrvntn' incorporates:
     *  Chart: '<S8>/FsftBRKR_b_BrkMinTrqIntrvntnChrt'
     *  SignalConversion generated from: '<S8>/VeBRKR_b_BrkMinTrqIntrvntn'
     */
    /* Gateway: FsftBRKR_b_BrkMinTrqIntrvntn/FsftBRKR_b_BrkMinTrqIntrvntnChrt */
    /* During: FsftBRKR_b_BrkMinTrqIntrvntn/FsftBRKR_b_BrkMinTrqIntrvntnChrt */
    /* Entry Internal: FsftBRKR_b_BrkMinTrqIntrvntn/FsftBRKR_b_BrkMinTrqIntrvntnChrt */
    /* Transition: '<S262>:2' */
    (void)Rte_Write_VeBRKR_b_BrkMinTrqIntrvntn_Value
        (KeBRKR_b_BrkMinTrqIntrvntnFsft);

    /* Outport: '<Root>/VeBRKR_b_BrkMinTrqIntrvntnFA' incorporates:
     *  Chart: '<S8>/FsftBRKR_b_BrkMinTrqIntrvntnChrt'
     *  SignalConversion generated from: '<S8>/VeBRKR_b_BrkMinTrqIntrvntnFA'
     */
    (void)Rte_Write_VeBRKR_b_BrkMinTrqIntrvntnFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_BrkMinTrqIntrvntn' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_BrkPdlFlt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_BrkPdlFlt' */
    /* Outport: '<Root>/VeBRKR_b_BrkPdlFltFA' incorporates:
     *  Chart: '<S9>/FsftBRKR_b_BrkPdlFltChrt'
     *  SignalConversion generated from: '<S9>/VeBRKR_b_BrkPdlFltFA'
     */
    /* Gateway: FsftBRKR_b_BrkPdlFlt/FsftBRKR_b_BrkPdlFltChrt */
    /* During: FsftBRKR_b_BrkPdlFlt/FsftBRKR_b_BrkPdlFltChrt */
    /* Entry Internal: FsftBRKR_b_BrkPdlFlt/FsftBRKR_b_BrkPdlFltChrt */
    /* Transition: '<S263>:2' */
    (void)Rte_Write_VeBRKR_b_BrkPdlFltFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_BrkPdlFlt' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_BrkPedalDscrtInpt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_BrkPedalDscrtInpt' */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  Chart: '<S10>/FsftBRKR_b_BrkPedalDscrtInptChrt'
     *  SignalConversion generated from: '<S10>/VeBRKR_b_BrkPedalDscrtInptFA_write'
     */
    /* Gateway: FsftBRKR_b_BrkPedalDscrtInpt/FsftBRKR_b_BrkPedalDscrtInptChrt */
    /* During: FsftBRKR_b_BrkPedalDscrtInpt/FsftBRKR_b_BrkPedalDscrtInptChrt */
    /* Entry Internal: FsftBRKR_b_BrkPedalDscrtInpt/FsftBRKR_b_BrkPedalDscrtInptChrt */
    /* Transition: '<S264>:2' */
    Rte_IrvWrite_FsftBRKR_b_BrkPedalDscrtInpt_BrkPedalDscrtInptFA_Init_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_BrkPedalDscrtInpt' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_BrkPedalStat2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_BrkPedalStat2' */
    /* Merge: '<Root>/Merge_67' incorporates:
     *  Chart: '<S11>/FsftBRKR_b_BrkPedalStat2Chrt'
     *  SignalConversion generated from: '<S11>/VeBRKR_b_BrkPedalStat2FA_write'
     */
    /* Gateway: FsftBRKR_b_BrkPedalStat2/FsftBRKR_b_BrkPedalStat2Chrt */
    /* During: FsftBRKR_b_BrkPedalStat2/FsftBRKR_b_BrkPedalStat2Chrt */
    /* Entry Internal: FsftBRKR_b_BrkPedalStat2/FsftBRKR_b_BrkPedalStat2Chrt */
    /* Transition: '<S265>:2' */
    Rte_IrvWrite_FsftBRKR_b_BrkPedalStat2_BrkPedalStat2FA_Init_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_BrkPedalStat2' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_BrkPedalStat2_C2CAN(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_BrkPedalStat2_C2CAN' */
    /* Merge: '<Root>/Merge_64' incorporates:
     *  Chart: '<S12>/FsftBRKR_b_BrkPedalStat2_C2CANChrt'
     *  SignalConversion generated from: '<S12>/VeBRKR_b_BrkPedalStat2_C2CANFA_write'
     */
    /* Gateway: FsftBRKR_b_BrkPedalStat2_C2CAN/FsftBRKR_b_BrkPedalStat2_C2CANChrt */
    /* During: FsftBRKR_b_BrkPedalStat2_C2CAN/FsftBRKR_b_BrkPedalStat2_C2CANChrt */
    /* Entry Internal: FsftBRKR_b_BrkPedalStat2_C2CAN/FsftBRKR_b_BrkPedalStat2_C2CANChrt */
    /* Transition: '<S266>:2' */
    Rte_IrvWrite_FsftBRKR_b_BrkPedalStat2_C2CAN_VeBRKR_b_BrkPedalStat2_C2CANFA_Init_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_BrkPedalStat2_C2CAN' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_BrkPedalSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_BrkPedalSts' */
    /* Merge: '<Root>/Merge_53' incorporates:
     *  Chart: '<S13>/FsftBRKR_b_BrkPedalStsChrt'
     *  SignalConversion generated from: '<S13>/VeBRKR_b_BrkPedalStsFA_write'
     */
    /* Gateway: FsftBRKR_b_BrkPedalSts/FsftBRKR_b_BrkPedalStsChrt */
    /* During: FsftBRKR_b_BrkPedalSts/FsftBRKR_b_BrkPedalStsChrt */
    /* Entry Internal: FsftBRKR_b_BrkPedalSts/FsftBRKR_b_BrkPedalStsChrt */
    /* Transition: '<S267>:2' */
    Rte_IrvWrite_FsftBRKR_b_BrkPedalSts_BrkPedalStsFA_Init_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_BrkPedalSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_BrkTmpSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_BrkTmpSts' */
    /* Outport: '<Root>/VeBRKR_b_BrkTempStsFA' incorporates:
     *  Chart: '<S14>/FsftBRKR_b_BrkTmpStsChrt'
     *  SignalConversion generated from: '<S14>/VeBRKR_b_BrkTempStsFA'
     */
    /* Gateway: FsftBRKR_b_BrkTmpSts/FsftBRKR_b_BrkTmpStsChrt */
    /* During: FsftBRKR_b_BrkTmpSts/FsftBRKR_b_BrkTmpStsChrt */
    /* Entry Internal: FsftBRKR_b_BrkTmpSts/FsftBRKR_b_BrkTmpStsChrt */
    /* Transition: '<S268>:2' */
    (void)Rte_Write_VeBRKR_b_BrkTempStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_BrkTmpSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_BrkTravelSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_BrkTravelSts' */
    /* Outport: '<Root>/VeBRKR_b_BrkTravelStsFA' incorporates:
     *  Chart: '<S15>/FsftBRKR_b_BrkTravelStsChrt'
     *  SignalConversion generated from: '<S15>/VeBRKR_b_BrkTravelStsFA'
     */
    /* Gateway: FsftBRKR_b_BrkTravelSts/FsftBRKR_b_BrkTravelStsChrt */
    /* During: FsftBRKR_b_BrkTravelSts/FsftBRKR_b_BrkTravelStsChrt */
    /* Entry Internal: FsftBRKR_b_BrkTravelSts/FsftBRKR_b_BrkTravelStsChrt */
    /* Transition: '<S269>:2' */
    (void)Rte_Write_VeBRKR_b_BrkTravelStsFA_Value(true);

    /* Merge: '<Root>/Merge_31_Irv' incorporates:
     *  Chart: '<S15>/FsftBRKR_b_BrkTravelStsChrt'
     *  SignalConversion generated from: '<S15>/VeBRKR_b_BrkTravelStsFA_write'
     */
    Rte_IrvWrite_FsftBRKR_b_BrkTravelSts_VeBRKR_b_BrkTravelStsFA_write_Init_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_BrkTravelSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_BrkTravelSts_C2CAN(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_BrkTravelSts_C2CAN' */
    /* Merge: '<Root>/Merge_62' incorporates:
     *  Chart: '<S16>/FsftBRKR_b_BrkTravelSts_C2CANChrt'
     *  SignalConversion generated from: '<S16>/VeBRKR_b_BrkTravelSts_C2CANFA_write'
     */
    /* Gateway: FsftBRKR_b_BrkTravelSts_C2CAN/FsftBRKR_b_BrkTravelSts_C2CANChrt */
    /* During: FsftBRKR_b_BrkTravelSts_C2CAN/FsftBRKR_b_BrkTravelSts_C2CANChrt */
    /* Entry Internal: FsftBRKR_b_BrkTravelSts_C2CAN/FsftBRKR_b_BrkTravelSts_C2CANChrt */
    /* Transition: '<S270>:2' */
    Rte_IrvWrite_FsftBRKR_b_BrkTravelSts_C2CAN_VeBRKR_b_BrkTravelSts_C2CANFA_Init_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_BrkTravelSts_C2CAN' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_ESCActive(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_ESCActive' */
    /* Outport: '<Root>/VeBRKR_b_ESCActiveFA' incorporates:
     *  Chart: '<S17>/FsftBRKR_b_ESCActiveChrt'
     *  SignalConversion generated from: '<S17>/VeBRKR_b_ESCActiveFA'
     */
    /* Gateway: FsftBRKR_b_ESCActive/FsftBRKR_b_ESCActiveChrt */
    /* During: FsftBRKR_b_ESCActive/FsftBRKR_b_ESCActiveChrt */
    /* Entry Internal: FsftBRKR_b_ESCActive/FsftBRKR_b_ESCActiveChrt */
    /* Transition: '<S271>:2' */
    (void)Rte_Write_VeBRKR_b_ESCActiveFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_ESCActive' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_ESCFailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_ESCFailSts' */
    /* Outport: '<Root>/VeBRKR_b_ESCFailStsFA' incorporates:
     *  Chart: '<S18>/FsftBRKR_b_ESCFailStsChrt'
     *  SignalConversion generated from: '<S18>/VeBRKR_b_ESCFailStsFA'
     */
    /* Gateway: FsftBRKR_b_ESCFailSts/FsftBRKR_b_ESCFailStsChrt */
    /* During: FsftBRKR_b_ESCFailSts/FsftBRKR_b_ESCFailStsChrt */
    /* Entry Internal: FsftBRKR_b_ESCFailSts/FsftBRKR_b_ESCFailStsChrt */
    /* Transition: '<S272>:2' */
    (void)Rte_Write_VeBRKR_b_ESCFailStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_ESCFailSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_ESCIntervention(void)
{
    /* Gateway: FsftBRKR_b_ESCIntervention/FsftBRKR_b_ESCInterventionChrt */
    /* During: FsftBRKR_b_ESCIntervention/FsftBRKR_b_ESCInterventionChrt */
    /* Entry Internal: FsftBRKR_b_ESCIntervention/FsftBRKR_b_ESCInterventionChrt */
    /* Transition: '<S273>:2' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_EmsMlfAtv(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_EmsMlfAtv' */
    /* Merge: '<Root>/Merge_17' incorporates:
     *  Chart: '<S20>/FsftBRKR_b_EmsMlfAtvChrt'
     *  SignalConversion generated from: '<S20>/VeBRKR_b_EmsMlfAtvFA_write'
     */
    /* Gateway: FsftBRKR_b_EmsMlfAtv/FsftBRKR_b_EmsMlfAtvChrt */
    /* During: FsftBRKR_b_EmsMlfAtv/FsftBRKR_b_EmsMlfAtvChrt */
    /* Entry Internal: FsftBRKR_b_EmsMlfAtv/FsftBRKR_b_EmsMlfAtvChrt */
    /* Transition: '<S274>:2' */
    Rte_IrvWrite_FsftBRKR_b_EmsMlfAtv_VeBRKR_b_EmsMlfAtvFA_Init_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_EmsMlfAtv' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_HillHoldActive(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_HillHoldActive' */
    /* Outport: '<Root>/VeBRKR_b_HillHoldActiveFA' incorporates:
     *  Chart: '<S21>/FsftBRKR_b_HillHoldActiveChrt'
     *  SignalConversion generated from: '<S21>/VeBRKR_b_HillHoldActiveFA'
     */
    /* Gateway: FsftBRKR_b_HillHoldActive/FsftBRKR_b_HillHoldActiveChrt */
    /* During: FsftBRKR_b_HillHoldActive/FsftBRKR_b_HillHoldActiveChrt */
    /* Entry Internal: FsftBRKR_b_HillHoldActive/FsftBRKR_b_HillHoldActiveChrt */
    /* Transition: '<S275>:2' */
    (void)Rte_Write_VeBRKR_b_HillHoldActiveFA_Value(true);

    /* Merge: '<Root>/Merge_37_Irv' incorporates:
     *  Chart: '<S21>/FsftBRKR_b_HillHoldActiveChrt'
     *  SignalConversion generated from: '<S21>/VeBRKR_b_HillHoldActiveFA_write'
     */
    Rte_IrvWrite_FsftBRKR_b_HillHoldActive_VeBRKR_b_HillHoldActiveFA_write_Init_IRV
        (true);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S21>/FsftBRKR_b_HillHoldActiveChrt'
     *  SignalConversion generated from: '<S21>/VeBRKR_b_HillHoldActive_write'
     */
    Rte_IrvWrite_FsftBRKR_b_HillHoldActive_VeBRKR_b_HillHoldActive_Init_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_HillHoldActive' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_HillHoldFailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_HillHoldFailSts' */
    /* Outport: '<Root>/VeBRKR_b_HillHoldFailStsFA' incorporates:
     *  Chart: '<S22>/FsftBRKR_b_HillHoldFailStsChrt'
     *  SignalConversion generated from: '<S22>/VeBRKR_b_HillHoldFailStsFA'
     */
    /* Gateway: FsftBRKR_b_HillHoldFailSts/FsftBRKR_b_HillHoldFailStsChrt */
    /* During: FsftBRKR_b_HillHoldFailSts/FsftBRKR_b_HillHoldFailStsChrt */
    /* Entry Internal: FsftBRKR_b_HillHoldFailSts/FsftBRKR_b_HillHoldFailStsChrt */
    /* Transition: '<S276>:2' */
    (void)Rte_Write_VeBRKR_b_HillHoldFailStsFA_Value(true);

    /* Merge: '<Root>/Merge_39_Irv' incorporates:
     *  Chart: '<S22>/FsftBRKR_b_HillHoldFailStsChrt'
     *  SignalConversion generated from: '<S22>/VeBRKR_b_HillHoldFailStsFA_write'
     */
    Rte_IrvWrite_FsftBRKR_b_HillHoldFailSts_VeBRKR_b_HillHoldFailStsFA_write_Init_IRV
        (true);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  Chart: '<S22>/FsftBRKR_b_HillHoldFailStsChrt'
     *  SignalConversion generated from: '<S22>/VeBRKR_b_HillHoldFailSts_write'
     */
    Rte_IrvWrite_FsftBRKR_b_HillHoldFailSts_VeBRKR_b_HillHoldFailSts_Init_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_HillHoldFailSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_MSRActive(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_MSRActive' */
    /* Outport: '<Root>/VeBRKR_b_MSRActive_FA' incorporates:
     *  Chart: '<S23>/FsftBRKR_b_MSRActiveChrt'
     *  SignalConversion generated from: '<S23>/VeBRKR_b_MSRActiveFA'
     */
    /* Gateway: FsftBRKR_b_MSRActive/FsftBRKR_b_MSRActiveChrt */
    /* During: FsftBRKR_b_MSRActive/FsftBRKR_b_MSRActiveChrt */
    /* Entry Internal: FsftBRKR_b_MSRActive/FsftBRKR_b_MSRActiveChrt */
    /* Transition: '<S277>:2' */
    (void)Rte_Write_VeBRKR_b_MSRActive_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_MSRActive' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_b_VehicleStandStillSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_b_VehicleStandStillSts' */
    /* Chart: '<S24>/FsftBRKR_b_VehicleStandStillStsChrt' */
    BRKR_FsftBRKR_b_VehicleStandStillStsChrt
        (&BRKR_ac_B.sf_FsftBRKR_b_VehicleStandStillStsChrt);

    /* Outport: '<Root>/VeBRKR_b_VehicleStandStillStsFA' incorporates:
     *  SignalConversion generated from: '<S24>/VeBRKR_b_VehicleStandStillStsFA'
     */
    (void)Rte_Write_VeBRKR_b_VehicleStandStillStsFA_Value
        (BRKR_ac_B.sf_FsftBRKR_b_VehicleStandStillStsChrt.LeBRKR_b_VehicleStandStillStsFA_j);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_b_VehicleStandStillSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_e_AHH_Ready_Status(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_e_AHH_Ready_Status' */
    /* Outport: '<Root>/VeBRKR_b_AHH_Ready_StatusFA' incorporates:
     *  Chart: '<S25>/FsftBRKR_e_AHH_Ready_StatusChrt'
     *  SignalConversion generated from: '<S25>/VeBRKR_b_AHH_Ready_StatusFA'
     */
    /* Gateway: FsftBRKR_e_AHH_Ready_Status/FsftBRKR_e_AHH_Ready_StatusChrt */
    /* During: FsftBRKR_e_AHH_Ready_Status/FsftBRKR_e_AHH_Ready_StatusChrt */
    /* Entry Internal: FsftBRKR_e_AHH_Ready_Status/FsftBRKR_e_AHH_Ready_StatusChrt */
    /* Transition: '<S279>:2' */
    (void)Rte_Write_VeBRKR_b_AHH_Ready_StatusFA_Value(true);

    /* Outport: '<Root>/VeBRKR_e_AHH_Ready_Status' incorporates:
     *  Chart: '<S25>/FsftBRKR_e_AHH_Ready_StatusChrt'
     *  SignalConversion generated from: '<S25>/VeBRKR_e_AHH_Ready_Status'
     */
    (void)Rte_Write_VeBRKR_e_AHH_Ready_Status_Value
        (KeBRKR_e_AHH_Ready_Status_Fsft);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_e_AHH_Ready_Status' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_e_AeCoastSwitch(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_e_AeCoastSwitch' */
    /* Merge: '<Root>/Merge_40' incorporates:
     *  Chart: '<S26>/FsftBRKR_e_AeCoastSwitchChrt'
     *  SignalConversion generated from: '<S26>/VeBRKR_b_AeCoastSwitchFA_write'
     */
    /* Gateway: FsftBRKR_e_AeCoastSwitch/FsftBRKR_e_AeCoastSwitchChrt */
    /* During: FsftBRKR_e_AeCoastSwitch/FsftBRKR_e_AeCoastSwitchChrt */
    /* Entry Internal: FsftBRKR_e_AeCoastSwitch/FsftBRKR_e_AeCoastSwitchChrt */
    /* Transition: '<S280>:2' */
    Rte_IrvWrite_FsftBRKR_e_AeCoastSwitch_VeBRKR_b_AeCoastSwitchFA_Init_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_e_AeCoastSwitch' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_e_AeCoastSwitchStat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_e_AeCoastSwitchStat' */
    /* Merge: '<Root>/Merge_9' incorporates:
     *  Chart: '<S27>/FsftBRKR_e_AeCoastSwitchStatChrt'
     *  SignalConversion generated from: '<S27>/VeBRKR_b_AeCoastSwitchStatFA_write'
     */
    /* Gateway: FsftBRKR_e_AeCoastSwitchStat/FsftBRKR_e_AeCoastSwitchStatChrt */
    /* During: FsftBRKR_e_AeCoastSwitchStat/FsftBRKR_e_AeCoastSwitchStatChrt */
    /* Entry Internal: FsftBRKR_e_AeCoastSwitchStat/FsftBRKR_e_AeCoastSwitchStatChrt */
    /* Transition: '<S281>:2' */
    Rte_IrvWrite_FsftBRKR_e_AeCoastSwitchStat_VeBRKR_b_AeCoastSwitchStatFA_Init_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_e_AeCoastSwitchStat' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_e_AeCoastSwitchStatC1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_e_AeCoastSwitchStatC1' */
    /* Merge: '<Root>/Merge_14' incorporates:
     *  Chart: '<S28>/FsftBRKR_e_AeCoastSwitchStatC1Chrt'
     *  SignalConversion generated from: '<S28>/VeBRKR_b_AeCoastSwitchStatC1FA_write'
     */
    /* Gateway: FsftBRKR_e_AeCoastSwitchStatC1/FsftBRKR_e_AeCoastSwitchStatC1Chrt */
    /* During: FsftBRKR_e_AeCoastSwitchStatC1/FsftBRKR_e_AeCoastSwitchStatC1Chrt */
    /* Entry Internal: FsftBRKR_e_AeCoastSwitchStatC1/FsftBRKR_e_AeCoastSwitchStatC1Chrt */
    /* Transition: '<S282>:2' */
    Rte_IrvWrite_FsftBRKR_e_AeCoastSwitchStatC1_VeBRKR_b_AeCoastSwitchStatC1FA_Init_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_e_AeCoastSwitchStatC1' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_e_AeCoastSwitchStatC2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_e_AeCoastSwitchStatC2' */
    /* Merge: '<Root>/Merge_16' incorporates:
     *  Chart: '<S29>/FsftBRKR_e_AeCoastSwitchStatC2Chrt'
     *  SignalConversion generated from: '<S29>/VeBRKR_b_AeCoastSwitchStatC2FA_write'
     */
    /* Gateway: FsftBRKR_e_AeCoastSwitchStatC2/FsftBRKR_e_AeCoastSwitchStatC2Chrt */
    /* During: FsftBRKR_e_AeCoastSwitchStatC2/FsftBRKR_e_AeCoastSwitchStatC2Chrt */
    /* Entry Internal: FsftBRKR_e_AeCoastSwitchStatC2/FsftBRKR_e_AeCoastSwitchStatC2Chrt */
    /* Transition: '<S283>:2' */
    Rte_IrvWrite_FsftBRKR_e_AeCoastSwitchStatC2_VeBRKR_b_AeCoastSwitchStatC2FA_Init_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_e_AeCoastSwitchStatC2' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_e_BSMComFailDflt_C1CAN(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_e_BSMComFailDflt_C1CAN' */
    /* Outport: '<Root>/VeBRKR_b_ComFailBSM_C1CANFA' incorporates:
     *  Chart: '<S30>/FsftBRKR_e_BSMComFailDflt_C1CANChrt'
     *  SignalConversion generated from: '<S30>/VeBRKR_b_BSMComFailDflt_C1CANFA'
     */
    /* Gateway: FsftBRKR_e_BSMComFailDflt_C1CAN/FsftBRKR_e_BSMComFailDflt_C1CANChrt */
    /* During: FsftBRKR_e_BSMComFailDflt_C1CAN/FsftBRKR_e_BSMComFailDflt_C1CANChrt */
    /* Entry Internal: FsftBRKR_e_BSMComFailDflt_C1CAN/FsftBRKR_e_BSMComFailDflt_C1CANChrt */
    /* Transition: '<S284>:2' */
    (void)Rte_Write_VeBRKR_b_ComFailBSM_C1CANFA_Value(true);

    /* Outport: '<Root>/VeBRKR_e_ComFailBSM_C1CAN' incorporates:
     *  Chart: '<S30>/FsftBRKR_e_BSMComFailDflt_C1CANChrt'
     *  SignalConversion generated from: '<S30>/VeBRKR_e_BSMComFailDflt_C1CAN'
     */
    (void)Rte_Write_VeBRKR_e_ComFailBSM_C1CAN_Value
        (KeBRKR_e_BSMComFailDflt_C1CAN);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_e_BSMComFailDflt_C1CAN' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_e_BSMComFailDflt_C2CAN(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_e_BSMComFailDflt_C2CAN' */
    /* Outport: '<Root>/VeBRKR_b_ComFailBSM_C2CANFA' incorporates:
     *  Chart: '<S31>/FsftBRKR_e_BSMComFailDflt_C2CANChrt'
     *  SignalConversion generated from: '<S31>/VeBRKR_b_BSMComFailDflt_C2CANFA'
     */
    /* Gateway: FsftBRKR_e_BSMComFailDflt_C2CAN/FsftBRKR_e_BSMComFailDflt_C2CANChrt */
    /* During: FsftBRKR_e_BSMComFailDflt_C2CAN/FsftBRKR_e_BSMComFailDflt_C2CANChrt */
    /* Entry Internal: FsftBRKR_e_BSMComFailDflt_C2CAN/FsftBRKR_e_BSMComFailDflt_C2CANChrt */
    /* Transition: '<S285>:2' */
    (void)Rte_Write_VeBRKR_b_ComFailBSM_C2CANFA_Value(true);

    /* Outport: '<Root>/VeBRKR_e_ComFailBSM_C2CAN' incorporates:
     *  Chart: '<S31>/FsftBRKR_e_BSMComFailDflt_C2CANChrt'
     *  SignalConversion generated from: '<S31>/VeBRKR_e_BSMComFailDflt_C2CAN'
     */
    (void)Rte_Write_VeBRKR_e_ComFailBSM_C2CAN_Value
        (KeBRKR_e_BSMComFailDflt_C2CAN);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_e_BSMComFailDflt_C2CAN' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_e_ExtBrkReqOff(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_e_ExtBrkReqOff' */
    /* Outport: '<Root>/VeBRKR_b_ExtBrkReqOffFA' incorporates:
     *  Chart: '<S32>/FsftBRKR_e_ExtBrkReqOffChrt'
     *  SignalConversion generated from: '<S32>/VeBRKR_b_ExtBrkReqOffFA'
     */
    /* Gateway: FsftBRKR_e_ExtBrkReqOff/FsftBRKR_e_ExtBrkReqOffChrt */
    /* During: FsftBRKR_e_ExtBrkReqOff/FsftBRKR_e_ExtBrkReqOffChrt */
    /* Entry Internal: FsftBRKR_e_ExtBrkReqOff/FsftBRKR_e_ExtBrkReqOffChrt */
    /* Transition: '<S286>:2' */
    (void)Rte_Write_VeBRKR_b_ExtBrkReqOffFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_e_ExtBrkReqOff' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_e_Not_OK_To_Race(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_e_Not_OK_To_Race' */
    /* Chart: '<S33>/FsftBRKR_e_Not_OK_To_RaceChrt' */
    BRKR_FsftBRKR_b_VehicleStandStillStsChrt
        (&BRKR_ac_B.sf_FsftBRKR_e_Not_OK_To_RaceChrt);

    /* Outport: '<Root>/VeBRKR_b_Not_OK_To_RaceFA' incorporates:
     *  SignalConversion generated from: '<S33>/VeBRKR_b_Not_OK_To_RaceFA'
     */
    (void)Rte_Write_VeBRKR_b_Not_OK_To_RaceFA_Value
        (BRKR_ac_B.sf_FsftBRKR_e_Not_OK_To_RaceChrt.LeBRKR_b_VehicleStandStillStsFA_j);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_e_Not_OK_To_Race' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_e_OPDHoldStatus(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBRKR_e_OPDHoldStatus' */
    /* Outport: '<Root>/VeBRKR_b_OPDHoldStatusFA' incorporates:
     *  Chart: '<S34>/FsftBRKR_e_OPDHoldStatusChrt'
     *  SignalConversion generated from: '<S34>/VeBRKR_b_OPDHoldStatusFA'
     */
    /* Gateway: FsftBRKR_e_OPDHoldStatus/FsftBRKR_e_OPDHoldStatusChrt */
    /* During: FsftBRKR_e_OPDHoldStatus/FsftBRKR_e_OPDHoldStatusChrt */
    /* Entry Internal: FsftBRKR_e_OPDHoldStatus/FsftBRKR_e_OPDHoldStatusChrt */
    /* Transition: '<S288>:2' */
    (void)Rte_Write_VeBRKR_b_OPDHoldStatusFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBRKR_e_OPDHoldStatus' */
}

/* Output function */
FUNC(void, BRKR_CODE) FsftBRKR_pbar_BrakePedalPressure(void)
{
    /* Gateway: FsftBRKR_pbar_BrakePedalPressure/FsftBRKR_pbar_BrakePedalPressureChrt */
    /* During: FsftBRKR_pbar_BrakePedalPressure/FsftBRKR_pbar_BrakePedalPressureChrt */
    /* Entry Internal: FsftBRKR_pbar_BrakePedalPressure/FsftBRKR_pbar_BrakePedalPressureChrt */
    /* Transition: '<S289>:2' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_P_BrkPrss(VAR(float32, AUTOMATIC)
    LeBRKR_P_BrkPrss, VAR(boolean, AUTOMATIC) LeBRKR_b_BrkPrssFA)
{
    boolean rtb_LeBRKR_b_BrkPrssFA_out_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_P_BrkPrss' */
    /* Chart: '<S36>/PokeBRKR_P_BrkPrssChrt' incorporates:
     *  SignalConversion generated from: '<S36>/LeBRKR_P_BrkPrss'
     *  SignalConversion generated from: '<S36>/LeBRKR_b_BrkPrssFA'
     */
    /* Gateway: PokeBRKR_P_BrkPrss/PokeBRKR_P_BrkPrssChrt */
    /* During: PokeBRKR_P_BrkPrss/PokeBRKR_P_BrkPrssChrt */
    /* Entry Internal: PokeBRKR_P_BrkPrss/PokeBRKR_P_BrkPrssChrt */
    /* Transition: '<S290>:2' */
    if (!LeBRKR_b_BrkPrssFA)
    {
        /* Transition: '<S290>:3' */
        /* Transition: '<S290>:15' */
        BRKR_ac_B.LeBRKR_P_BrkPrss_out = LeBRKR_P_BrkPrss;
        rtb_LeBRKR_b_BrkPrssFA_out_m = false;

        /* Transition: '<S290>:18' */
    }
    else
    {
        /* Transition: '<S290>:4' */
        rtb_LeBRKR_b_BrkPrssFA_out_m = true;
    }

    /* End of Chart: '<S36>/PokeBRKR_P_BrkPrssChrt' */

    /* Outport: '<Root>/VeBRKR_P_BrkPrss' incorporates:
     *  SignalConversion generated from: '<S36>/VeBRKR_P_BrkPrss'
     */
    (void)Rte_Write_VeBRKR_P_BrkPrss_Value(BRKR_ac_B.LeBRKR_P_BrkPrss_out);

    /* Outport: '<Root>/VeBRKR_b_BrkPrssFA' incorporates:
     *  SignalConversion generated from: '<S36>/VeBRKR_b_BrkPrssFA'
     */
    (void)Rte_Write_VeBRKR_b_BrkPrssFA_Value(rtb_LeBRKR_b_BrkPrssFA_out_m);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_P_BrkPrss' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_Pct_BrkTravelSt_C2CAN(VAR(float32, AUTOMATIC)
    LeBRKR_Pct_BrkTravelSt_C2CAN, VAR(boolean, AUTOMATIC)
    LeBRKR_b_BrkTravelSt_C2CANFA)
{
    boolean rtb_LeBRKR_b_BrkTravelSt_C2CANFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_Pct_BrkTravelSt_C2CAN' */
    /* Chart: '<S37>/PokeBRKR_Pct_BrkTravelSt_C2CANChrt' incorporates:
     *  SignalConversion generated from: '<S37>/LeBRKR_Pct_BrkTravelSt_C2CAN'
     *  SignalConversion generated from: '<S37>/LeBRKR_b_BrkTravelSt_C2CANFA'
     */
    /* Gateway: PokeBRKR_Pct_BrkTravelSt_C2CAN/PokeBRKR_Pct_BrkTravelSt_C2CANChrt */
    /* During: PokeBRKR_Pct_BrkTravelSt_C2CAN/PokeBRKR_Pct_BrkTravelSt_C2CANChrt */
    /* Entry Internal: PokeBRKR_Pct_BrkTravelSt_C2CAN/PokeBRKR_Pct_BrkTravelSt_C2CANChrt */
    /* Transition: '<S291>:2' */
    if (!LeBRKR_b_BrkTravelSt_C2CANFA)
    {
        /* Transition: '<S291>:3' */
        /* Transition: '<S291>:15' */
        BRKR_ac_B.LeBRKR_Pct_BrkTravelSt_C2CAN_out =
            LeBRKR_Pct_BrkTravelSt_C2CAN;
        rtb_LeBRKR_b_BrkTravelSt_C2CANFA_out = false;
        BRKR_ac_B.LeBRKR_b_BrkTravelSt_C2CANSgnl_Rcvd = true;

        /* Transition: '<S291>:18' */
    }
    else
    {
        /* Transition: '<S291>:4' */
        rtb_LeBRKR_b_BrkTravelSt_C2CANFA_out = true;
    }

    /* End of Chart: '<S37>/PokeBRKR_Pct_BrkTravelSt_C2CANChrt' */

    /* Merge: '<Root>/Merge_61' incorporates:
     *  SignalConversion generated from: '<S37>/VeBRKR_Pct_BrkTravelSt_C2CAN_write'
     * */
    Rte_IrvWrite_PokeBRKR_Pct_BrkTravelSt_C2CAN_VeBRKR_Pct_BrkTravelSt_C2CAN_Init_IRV
        (BRKR_ac_B.LeBRKR_Pct_BrkTravelSt_C2CAN_out);

    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S37>/VeBRKR_b_BrkTravelSt_C2CANFA_write'
     * */
    Rte_IrvWrite_PokeBRKR_Pct_BrkTravelSt_C2CAN_VeBRKR_b_BrkTravelSts_C2CANFA_Init_IRV
        (rtb_LeBRKR_b_BrkTravelSt_C2CANFA_out);

    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S37>/VeBRKR_b_BrkTravelSt_C2CANSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBRKR_Pct_BrkTravelSt_C2CAN_VeBRKR_b_BrkTravelSt_C2CANSgnl_Rcvd_Init_IRV
        (BRKR_ac_B.LeBRKR_b_BrkTravelSt_C2CANSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_Pct_BrkTravelSt_C2CAN' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_Pct_BrkTravelSts(VAR(float32, AUTOMATIC)
    LeBRKR_Pct_BrkTravelSts, VAR(boolean, AUTOMATIC) LeBRKR_b_BrkTravelStsFA)
{
    boolean rtb_LeBRKR_b_BrkTravelStsFA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_Pct_BrkTravelSts' */
    /* Chart: '<S38>/PokeBRKR_Pct_BrkTravelStsChrt' incorporates:
     *  SignalConversion generated from: '<S38>/LeBRKR_Pct_BrkTravelSts'
     *  SignalConversion generated from: '<S38>/LeBRKR_b_BrkTravelStsFA'
     */
    /* Gateway: PokeBRKR_Pct_BrkTravelSts/PokeBRKR_Pct_BrkTravelStsChrt */
    /* During: PokeBRKR_Pct_BrkTravelSts/PokeBRKR_Pct_BrkTravelStsChrt */
    /* Entry Internal: PokeBRKR_Pct_BrkTravelSts/PokeBRKR_Pct_BrkTravelStsChrt */
    /* Transition: '<S292>:2' */
    if (!LeBRKR_b_BrkTravelStsFA)
    {
        /* Transition: '<S292>:3' */
        /* Transition: '<S292>:15' */
        BRKR_ac_B.LeBRKR_Pct_BrkTravelSts_out = LeBRKR_Pct_BrkTravelSts;
        rtb_LeBRKR_b_BrkTravelStsFA_out_o = false;

        /* Transition: '<S292>:18' */
    }
    else
    {
        /* Transition: '<S292>:4' */
        rtb_LeBRKR_b_BrkTravelStsFA_out_o = true;
    }

    /* End of Chart: '<S38>/PokeBRKR_Pct_BrkTravelStsChrt' */

    /* Outport: '<Root>/VeBRKR_Pct_BrkTravelSts' incorporates:
     *  SignalConversion generated from: '<S38>/VeBRKR_Pct_BrkTravelSts'
     */
    (void)Rte_Write_VeBRKR_Pct_BrkTravelSts_Value
        (BRKR_ac_B.LeBRKR_Pct_BrkTravelSts_out);

    /* Outport: '<Root>/VeBRKR_b_BrkTravelStsFA' incorporates:
     *  SignalConversion generated from: '<S38>/VeBRKR_b_BrkTravelStsFA'
     */
    (void)Rte_Write_VeBRKR_b_BrkTravelStsFA_Value
        (rtb_LeBRKR_b_BrkTravelStsFA_out_o);

    /* Merge: '<Root>/Merge_36_Irv' incorporates:
     *  SignalConversion generated from: '<S38>/VeBRKR_Pct_BrkTravelSts_write'
     * */
    Rte_IrvWrite_PokeBRKR_Pct_BrkTravelSts_VeBRKR_Pct_BrkTravelSts_write_Init_IRV
        (BRKR_ac_B.LeBRKR_Pct_BrkTravelSts_out);

    /* Merge: '<Root>/Merge_31_Irv' incorporates:
     *  SignalConversion generated from: '<S38>/VeBRKR_b_BrkTravelStsFA_write'
     * */
    Rte_IrvWrite_PokeBRKR_Pct_BrkTravelSts_VeBRKR_b_BrkTravelStsFA_write_Init_IRV
        (rtb_LeBRKR_b_BrkTravelStsFA_out_o);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_Pct_BrkTravelSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_U_Brake_NO(VAR(float32, AUTOMATIC)
    LeBRKR_U_Brake_NO, VAR(boolean, AUTOMATIC) LeBRKR_b_Brake_NOFA)
{
    boolean rtb_LeBRKR_b_Brake_NOFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_U_Brake_NO' */
    /* Chart: '<S39>/PokeBRKR_U_Brake_NOChrt' incorporates:
     *  SignalConversion generated from: '<S39>/LeBRKR_U_Brake_NO'
     *  SignalConversion generated from: '<S39>/LeBRKR_b_Brake_NOFA'
     */
    /* Gateway: PokeBRKR_U_Brake_NO/PokeBRKR_U_Brake_NOChrt */
    /* During: PokeBRKR_U_Brake_NO/PokeBRKR_U_Brake_NOChrt */
    /* Entry Internal: PokeBRKR_U_Brake_NO/PokeBRKR_U_Brake_NOChrt */
    /* Transition: '<S293>:2' */
    if (!LeBRKR_b_Brake_NOFA)
    {
        /* Transition: '<S293>:3' */
        /* Transition: '<S293>:15' */
        BRKR_ac_B.LeBRKR_U_Brake_NO_out = LeBRKR_U_Brake_NO;
        rtb_LeBRKR_b_Brake_NOFA_out = false;
        BRKR_ac_B.LeBRKR_b_Brake_NOSgnl_Rcvd = true;

        /* Transition: '<S293>:18' */
    }
    else
    {
        /* Transition: '<S293>:4' */
        rtb_LeBRKR_b_Brake_NOFA_out = true;
    }

    /* End of Chart: '<S39>/PokeBRKR_U_Brake_NOChrt' */

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S39>/VeBRKR_U_Brake_NO_write'
     * */
    Rte_IrvWrite_PokeBRKR_U_Brake_NO_VeBRKR_U_Brake_NO_Init_IRV
        (BRKR_ac_B.LeBRKR_U_Brake_NO_out);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S39>/VeBRKR_b_Brake_NOFA_write'
     * */
    Rte_IrvWrite_PokeBRKR_U_Brake_NO_VeBRKR_b_Brake_NOFA_Init_IRV
        (rtb_LeBRKR_b_Brake_NOFA_out);

    /* Merge: '<Root>/Merge_68' incorporates:
     *  SignalConversion generated from: '<S39>/VeBRKR_b_Brake_NOSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBRKR_U_Brake_NO_VeBRKR_b_Brake_NOSgnl_Rcvd_Init_IRV
        (BRKR_ac_B.LeBRKR_b_Brake_NOSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_U_Brake_NO' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_ABSActive(VAR(boolean, AUTOMATIC)
    LeBRKR_b_ABSActive, VAR(boolean, AUTOMATIC) LeBRKR_b_ABSActiveFA)
{
    boolean rtb_LeBRKR_b_ABSActiveFA_out_n;
    boolean rtb_LeBRKR_b_ABSActive_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_ABSActive' */
    /* Chart: '<S40>/PokeBRKR_b_ABSActiveChrt' incorporates:
     *  SignalConversion generated from: '<S40>/LeBRKR_b_ABSActiveFA'
     *  SignalConversion generated from: '<S40>/LeBRKR_b_ABSActive'
     */
    /* Gateway: PokeBRKR_b_ABSActive/PokeBRKR_b_ABSActiveChrt */
    /* During: PokeBRKR_b_ABSActive/PokeBRKR_b_ABSActiveChrt */
    /* Entry Internal: PokeBRKR_b_ABSActive/PokeBRKR_b_ABSActiveChrt */
    /* Transition: '<S294>:2' */
    if (!LeBRKR_b_ABSActiveFA)
    {
        /* Transition: '<S294>:3' */
        /* Transition: '<S294>:15' */
        rtb_LeBRKR_b_ABSActive_out = LeBRKR_b_ABSActive;
        rtb_LeBRKR_b_ABSActiveFA_out_n = false;

        /* Transition: '<S294>:18' */
    }
    else
    {
        /* Transition: '<S294>:4' */
        rtb_LeBRKR_b_ABSActive_out = false;
        rtb_LeBRKR_b_ABSActiveFA_out_n = true;
    }

    /* End of Chart: '<S40>/PokeBRKR_b_ABSActiveChrt' */

    /* Outport: '<Root>/VeBRKR_b_ABSActive' incorporates:
     *  SignalConversion generated from: '<S40>/VeBRKR_b_ABSActive'
     */
    (void)Rte_Write_VeBRKR_b_ABSActive_Value(rtb_LeBRKR_b_ABSActive_out);

    /* Outport: '<Root>/VeBRKR_b_ABSActiveFA' incorporates:
     *  SignalConversion generated from: '<S40>/VeBRKR_b_ABSActiveFA'
     */
    (void)Rte_Write_VeBRKR_b_ABSActiveFA_Value(rtb_LeBRKR_b_ABSActiveFA_out_n);

    /* Merge: '<Root>/Merge_76_Irv' incorporates:
     *  SignalConversion generated from: '<S40>/VeBRKR_b_ABSActiveFA_write'
     * */
    Rte_IrvWrite_PokeBRKR_b_ABSActive_VeBRKR_b_ABSActiveFA_write_Init_IRV
        (rtb_LeBRKR_b_ABSActiveFA_out_n);

    /* Merge: '<Root>/Merge_3_Irv' incorporates:
     *  SignalConversion generated from: '<S40>/VeBRKR_b_ABSActive_write'
     * */
    Rte_IrvWrite_PokeBRKR_b_ABSActive_VeBRKR_b_ABSActive_write_Init_IRV
        (rtb_LeBRKR_b_ABSActive_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_ABSActive' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_ABSFailSts(VAR(boolean, AUTOMATIC)
    LeBRKR_b_ABSFailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_ABSFailSts' */
    /* Outport: '<Root>/VeBRKR_b_ABSFailSts' incorporates:
     *  SignalConversion generated from: '<S41>/VeBRKR_b_ABSFailSts'
     *  SignalConversion generated from: '<S41>/LeBRKR_b_ABSFailSts'
     */
    /* Gateway: PokeBRKR_b_ABSFailSts/PokeBRKR_b_ABSFailStsChrt */
    /* During: PokeBRKR_b_ABSFailSts/PokeBRKR_b_ABSFailStsChrt */
    /* Entry Internal: PokeBRKR_b_ABSFailSts/PokeBRKR_b_ABSFailStsChrt */
    /* Transition: '<S295>:2' */
    (void)Rte_Write_VeBRKR_b_ABSFailSts_Value(LeBRKR_b_ABSFailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_ABSFailSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_ASRActive(VAR(boolean, AUTOMATIC)
    LeBRKR_b_ASRActive, VAR(boolean, AUTOMATIC) LeBRKR_b_ASRActiveFA)
{
    boolean rtb_LeBRKR_b_ASRActiveFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_ASRActive' */
    /* Chart: '<S42>/PokeBRKR_b_ASRActiveChrt' incorporates:
     *  SignalConversion generated from: '<S42>/LeBRKR_b_ASRActiveFA'
     *  SignalConversion generated from: '<S42>/LeBRKR_b_ASRActive'
     */
    /* Gateway: PokeBRKR_b_ASRActive/PokeBRKR_b_ASRActiveChrt */
    /* During: PokeBRKR_b_ASRActive/PokeBRKR_b_ASRActiveChrt */
    /* Entry Internal: PokeBRKR_b_ASRActive/PokeBRKR_b_ASRActiveChrt */
    /* Transition: '<S296>:2' */
    if (!LeBRKR_b_ASRActiveFA)
    {
        /* Transition: '<S296>:3' */
        /* Transition: '<S296>:15' */
        BRKR_ac_B.LeBRKR_b_ASRActive_out = LeBRKR_b_ASRActive;
        rtb_LeBRKR_b_ASRActiveFA_out_n = false;

        /* Transition: '<S296>:18' */
    }
    else
    {
        /* Transition: '<S296>:4' */
        rtb_LeBRKR_b_ASRActiveFA_out_n = true;
    }

    /* End of Chart: '<S42>/PokeBRKR_b_ASRActiveChrt' */

    /* Outport: '<Root>/VeBRKR_b_ASRActive' incorporates:
     *  SignalConversion generated from: '<S42>/VeBRKR_b_ASRActive'
     */
    (void)Rte_Write_VeBRKR_b_ASRActive_Value(BRKR_ac_B.LeBRKR_b_ASRActive_out);

    /* Outport: '<Root>/VeBRKR_b_ASRActive_FA' incorporates:
     *  SignalConversion generated from: '<S42>/VeBRKR_b_ASRActiveFA'
     */
    (void)Rte_Write_VeBRKR_b_ASRActive_FA_Value(rtb_LeBRKR_b_ASRActiveFA_out_n);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_ASRActive' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_AeCoastReady(VAR(boolean, AUTOMATIC)
    LeBRKR_b_AeCoastReady, VAR(boolean, AUTOMATIC) LeBRKR_b_AeCoastReadyFA)
{
    boolean rtb_LeBRKR_b_AeCoastReadyFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_AeCoastReady' */
    /* Chart: '<S43>/PokeBRKR_b_AeCoastReadyChrt' incorporates:
     *  SignalConversion generated from: '<S43>/LeBRKR_b_AeCoastReadyFA'
     *  SignalConversion generated from: '<S43>/LeBRKR_b_AeCoastReady'
     */
    /* Gateway: PokeBRKR_b_AeCoastReady/PokeBRKR_b_AeCoastReadyChrt */
    /* During: PokeBRKR_b_AeCoastReady/PokeBRKR_b_AeCoastReadyChrt */
    /* Entry Internal: PokeBRKR_b_AeCoastReady/PokeBRKR_b_AeCoastReadyChrt */
    /* Transition: '<S297>:2' */
    if (!LeBRKR_b_AeCoastReadyFA)
    {
        /* Transition: '<S297>:3' */
        /* Transition: '<S297>:15' */
        BRKR_ac_B.LeBRKR_b_AeCoastReady_out = LeBRKR_b_AeCoastReady;
        rtb_LeBRKR_b_AeCoastReadyFA_out_l = false;

        /* Transition: '<S297>:18' */
    }
    else
    {
        /* Transition: '<S297>:4' */
        rtb_LeBRKR_b_AeCoastReadyFA_out_l = true;
    }

    /* End of Chart: '<S43>/PokeBRKR_b_AeCoastReadyChrt' */

    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S43>/VeBRKR_b_AeCoastReadyFA_write'
     * */
    Rte_IrvWrite_PokeBRKR_b_AeCoastReady_VeBRKR_b_AeCoastReadyFA_Init_IRV
        (rtb_LeBRKR_b_AeCoastReadyFA_out_l);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S43>/VeBRKR_b_AeCoastReady_write'
     * */
    Rte_IrvWrite_PokeBRKR_b_AeCoastReady_VeBRKR_b_AeCoastReady_Init_IRV
        (BRKR_ac_B.LeBRKR_b_AeCoastReady_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_AeCoastReady' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_BrkMaxTrqIntrvntn(VAR(boolean, AUTOMATIC)
    LeBRKR_b_BrkMaxTrqIntrvntn, VAR(boolean, AUTOMATIC)
    LeBRKR_b_BrkMaxTrqIntrvntnFA)
{
    boolean rtb_LeBRKR_b_BrkMaxTrqIntrvntnFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_BrkMaxTrqIntrvntn' */
    /* Chart: '<S44>/PokeBRKR_b_BrkMaxTrqIntrvntnChrt' incorporates:
     *  SignalConversion generated from: '<S44>/LeBRKR_b_BrkMaxTrqIntrvntnFA'
     *  SignalConversion generated from: '<S44>/LeBRKR_b_BrkMaxTrqIntrvntn'
     */
    /* Gateway: PokeBRKR_b_BrkMaxTrqIntrvntn/PokeBRKR_b_BrkMaxTrqIntrvntnChrt */
    /* During: PokeBRKR_b_BrkMaxTrqIntrvntn/PokeBRKR_b_BrkMaxTrqIntrvntnChrt */
    /* Entry Internal: PokeBRKR_b_BrkMaxTrqIntrvntn/PokeBRKR_b_BrkMaxTrqIntrvntnChrt */
    /* Transition: '<S298>:2' */
    if (!LeBRKR_b_BrkMaxTrqIntrvntnFA)
    {
        /* Transition: '<S298>:3' */
        /* Transition: '<S298>:15' */
        BRKR_ac_B.LeBRKR_b_BrkMaxTrqIntrvntn_out = LeBRKR_b_BrkMaxTrqIntrvntn;
        rtb_LeBRKR_b_BrkMaxTrqIntrvntnFA_out_p = false;

        /* Transition: '<S298>:18' */
    }
    else
    {
        /* Transition: '<S298>:4' */
        rtb_LeBRKR_b_BrkMaxTrqIntrvntnFA_out_p = true;
    }

    /* End of Chart: '<S44>/PokeBRKR_b_BrkMaxTrqIntrvntnChrt' */

    /* Outport: '<Root>/VeBRKR_b_BrkMaxTrqIntrvntn' incorporates:
     *  SignalConversion generated from: '<S44>/VeBRKR_b_BrkMaxTrqIntrvntn'
     */
    (void)Rte_Write_VeBRKR_b_BrkMaxTrqIntrvntn_Value
        (BRKR_ac_B.LeBRKR_b_BrkMaxTrqIntrvntn_out);

    /* Outport: '<Root>/VeBRKR_b_BrkMaxTrqIntrvntnFA' incorporates:
     *  SignalConversion generated from: '<S44>/VeBRKR_b_BrkMaxTrqIntrvntnFA'
     */
    (void)Rte_Write_VeBRKR_b_BrkMaxTrqIntrvntnFA_Value
        (rtb_LeBRKR_b_BrkMaxTrqIntrvntnFA_out_p);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_BrkMaxTrqIntrvntn' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_BrkMinTrqIntrvntn(VAR(boolean, AUTOMATIC)
    LeBRKR_b_BrkMinTrqIntrvntn, VAR(boolean, AUTOMATIC)
    LeBRKR_b_BrkMinTrqIntrvntnFA)
{
    boolean rtb_LeBRKR_b_BrkMinTrqIntrvntnFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_BrkMinTrqIntrvntn' */
    /* Chart: '<S45>/PokeBRKR_b_BrkMinTrqIntrvntnChrt' incorporates:
     *  SignalConversion generated from: '<S45>/LeBRKR_b_BrkMinTrqIntrvntnFA'
     *  SignalConversion generated from: '<S45>/LeBRKR_b_BrkMinTrqIntrvntn'
     */
    /* Gateway: PokeBRKR_b_BrkMinTrqIntrvntn/PokeBRKR_b_BrkMinTrqIntrvntnChrt */
    /* During: PokeBRKR_b_BrkMinTrqIntrvntn/PokeBRKR_b_BrkMinTrqIntrvntnChrt */
    /* Entry Internal: PokeBRKR_b_BrkMinTrqIntrvntn/PokeBRKR_b_BrkMinTrqIntrvntnChrt */
    /* Transition: '<S299>:2' */
    if (!LeBRKR_b_BrkMinTrqIntrvntnFA)
    {
        /* Transition: '<S299>:3' */
        /* Transition: '<S299>:15' */
        BRKR_ac_B.LeBRKR_b_BrkMinTrqIntrvntn_out = LeBRKR_b_BrkMinTrqIntrvntn;
        rtb_LeBRKR_b_BrkMinTrqIntrvntnFA_out = false;

        /* Transition: '<S299>:18' */
    }
    else
    {
        /* Transition: '<S299>:4' */
        rtb_LeBRKR_b_BrkMinTrqIntrvntnFA_out = true;
    }

    /* End of Chart: '<S45>/PokeBRKR_b_BrkMinTrqIntrvntnChrt' */

    /* Outport: '<Root>/VeBRKR_b_BrkMinTrqIntrvntn' incorporates:
     *  SignalConversion generated from: '<S45>/VeBRKR_b_BrkMinTrqIntrvntn'
     */
    (void)Rte_Write_VeBRKR_b_BrkMinTrqIntrvntn_Value
        (BRKR_ac_B.LeBRKR_b_BrkMinTrqIntrvntn_out);

    /* Outport: '<Root>/VeBRKR_b_BrkMinTrqIntrvntnFA' incorporates:
     *  SignalConversion generated from: '<S45>/VeBRKR_b_BrkMinTrqIntrvntnFA'
     */
    (void)Rte_Write_VeBRKR_b_BrkMinTrqIntrvntnFA_Value
        (rtb_LeBRKR_b_BrkMinTrqIntrvntnFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_BrkMinTrqIntrvntn' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_BrkPdlFlt(VAR(boolean, AUTOMATIC)
    LeBRKR_b_BrkPdlFlt, VAR(boolean, AUTOMATIC) LeBRKR_b_BrkPdlFltFA)
{
    boolean rtb_LeBRKR_b_BrkPdlFltFA_out;
    boolean rtb_LeBRKR_b_BrkPdlFlt_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_BrkPdlFlt' */
    /* Chart: '<S46>/PokeBRKR_b_BrkPdlFltChrt' incorporates:
     *  SignalConversion generated from: '<S46>/LeBRKR_b_BrkPdlFltFA'
     *  SignalConversion generated from: '<S46>/LeBRKR_b_BrkPdlFlt'
     */
    /* Gateway: PokeBRKR_b_BrkPdlFlt/PokeBRKR_b_BrkPdlFltChrt */
    /* During: PokeBRKR_b_BrkPdlFlt/PokeBRKR_b_BrkPdlFltChrt */
    /* Entry Internal: PokeBRKR_b_BrkPdlFlt/PokeBRKR_b_BrkPdlFltChrt */
    /* Transition: '<S300>:2' */
    if (!LeBRKR_b_BrkPdlFltFA)
    {
        /* Transition: '<S300>:3' */
        /* Transition: '<S300>:15' */
        rtb_LeBRKR_b_BrkPdlFlt_out = LeBRKR_b_BrkPdlFlt;
        rtb_LeBRKR_b_BrkPdlFltFA_out = false;

        /* Transition: '<S300>:18' */
    }
    else
    {
        /* Transition: '<S300>:4' */
        rtb_LeBRKR_b_BrkPdlFlt_out = false;
        rtb_LeBRKR_b_BrkPdlFltFA_out = true;
    }

    /* End of Chart: '<S46>/PokeBRKR_b_BrkPdlFltChrt' */

    /* Outport: '<Root>/VeBRKR_b_BrkPdlFlt' incorporates:
     *  SignalConversion generated from: '<S46>/VeBRKR_b_BrkPdlFlt'
     */
    (void)Rte_Write_VeBRKR_b_BrkPdlFlt_Value(rtb_LeBRKR_b_BrkPdlFlt_out);

    /* Outport: '<Root>/VeBRKR_b_BrkPdlFltFA' incorporates:
     *  SignalConversion generated from: '<S46>/VeBRKR_b_BrkPdlFltFA'
     */
    (void)Rte_Write_VeBRKR_b_BrkPdlFltFA_Value(rtb_LeBRKR_b_BrkPdlFltFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_BrkPdlFlt' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_BrkTmpSts(VAR(boolean, AUTOMATIC)
    LeBRKR_b_BrkTmpSts, VAR(boolean, AUTOMATIC) LeBRKR_b_BrkTmpStsFA)
{
    boolean rtb_LeBRKR_b_BrkTmpStsFA_Out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_BrkTmpSts' */
    /* Chart: '<S47>/PokeBRKR_b_BrkTmpStsChrt' incorporates:
     *  SignalConversion generated from: '<S47>/LeBRKR_b_BrkTmpStsFA'
     *  SignalConversion generated from: '<S47>/LeBRKR_b_BrkTmpSts'
     */
    /* Gateway: PokeBRKR_b_BrkTmpSts/PokeBRKR_b_BrkTmpStsChrt */
    /* During: PokeBRKR_b_BrkTmpSts/PokeBRKR_b_BrkTmpStsChrt */
    /* Entry Internal: PokeBRKR_b_BrkTmpSts/PokeBRKR_b_BrkTmpStsChrt */
    /* Transition: '<S301>:9' */
    if (!LeBRKR_b_BrkTmpStsFA)
    {
        /* Transition: '<S301>:2' */
        /* Transition: '<S301>:3' */
        BRKR_ac_B.LeBRKR_b_BrkTmpSts_Out = LeBRKR_b_BrkTmpSts;
        rtb_LeBRKR_b_BrkTmpStsFA_Out = false;

        /* Transition: '<S301>:4' */
    }
    else
    {
        /* Transition: '<S301>:8' */
        rtb_LeBRKR_b_BrkTmpStsFA_Out = true;
    }

    /* End of Chart: '<S47>/PokeBRKR_b_BrkTmpStsChrt' */

    /* Outport: '<Root>/VeBRKR_b_BrkTempSts' incorporates:
     *  SignalConversion generated from: '<S47>/VeBRKR_b_BrkTempSts'
     */
    (void)Rte_Write_VeBRKR_b_BrkTempSts_Value(BRKR_ac_B.LeBRKR_b_BrkTmpSts_Out);

    /* Outport: '<Root>/VeBRKR_b_BrkTempStsFA' incorporates:
     *  SignalConversion generated from: '<S47>/VeBRKR_b_BrkTempStsFA'
     */
    (void)Rte_Write_VeBRKR_b_BrkTempStsFA_Value(rtb_LeBRKR_b_BrkTmpStsFA_Out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_BrkTmpSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_CMMIntervention(VAR(boolean, AUTOMATIC)
    LeBRKR_b_CMMIntervention)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_CMMIntervention' */
    /* Outport: '<Root>/VeBRKR_b_CMMIntervention' incorporates:
     *  SignalConversion generated from: '<S48>/VeBRKR_b_CMMIntervention'
     *  SignalConversion generated from: '<S48>/LeBRKR_b_CMMIntervention'
     */
    /* Gateway: PokeBRKR_b_CMMIntervention/PokeBRKR_b_CMMInterventionChrt */
    /* During: PokeBRKR_b_CMMIntervention/PokeBRKR_b_CMMInterventionChrt */
    /* Entry Internal: PokeBRKR_b_CMMIntervention/PokeBRKR_b_CMMInterventionChrt */
    /* Transition: '<S302>:2' */
    (void)Rte_Write_VeBRKR_b_CMMIntervention_Value(LeBRKR_b_CMMIntervention);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_CMMIntervention' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_ESCActive(VAR(boolean, AUTOMATIC)
    LeBRKR_b_ESCActive, VAR(boolean, AUTOMATIC) LeBRKR_b_ESCActiveFA)
{
    boolean rtb_LeBRKR_b_ESCActiveFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_ESCActive' */
    /* Chart: '<S49>/PokeBRKR_b_ESCActiveChrt' incorporates:
     *  SignalConversion generated from: '<S49>/LeBRKR_b_ESCActiveFA'
     *  SignalConversion generated from: '<S49>/LeBRKR_b_ESCActive'
     */
    /* Gateway: PokeBRKR_b_ESCActive/PokeBRKR_b_ESCActiveChrt */
    /* During: PokeBRKR_b_ESCActive/PokeBRKR_b_ESCActiveChrt */
    /* Entry Internal: PokeBRKR_b_ESCActive/PokeBRKR_b_ESCActiveChrt */
    /* Transition: '<S303>:2' */
    if (!LeBRKR_b_ESCActiveFA)
    {
        /* Transition: '<S303>:3' */
        /* Transition: '<S303>:15' */
        BRKR_ac_B.LeBRKR_b_ESCActive_out = LeBRKR_b_ESCActive;
        rtb_LeBRKR_b_ESCActiveFA_out_p = false;

        /* Transition: '<S303>:18' */
    }
    else
    {
        /* Transition: '<S303>:4' */
        rtb_LeBRKR_b_ESCActiveFA_out_p = true;
    }

    /* End of Chart: '<S49>/PokeBRKR_b_ESCActiveChrt' */

    /* Outport: '<Root>/VeBRKR_b_ESCActive' incorporates:
     *  SignalConversion generated from: '<S49>/VeBRKR_b_ESCActive'
     */
    (void)Rte_Write_VeBRKR_b_ESCActive_Value(BRKR_ac_B.LeBRKR_b_ESCActive_out);

    /* Outport: '<Root>/VeBRKR_b_ESCActiveFA' incorporates:
     *  SignalConversion generated from: '<S49>/VeBRKR_b_ESCActiveFA'
     */
    (void)Rte_Write_VeBRKR_b_ESCActiveFA_Value(rtb_LeBRKR_b_ESCActiveFA_out_p);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_ESCActive' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_ESCFailSts(VAR(boolean, AUTOMATIC)
    LeBRKR_b_ESCFailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_ESCFailSts' */
    /* Outport: '<Root>/VeBRKR_b_ESCFailSts' incorporates:
     *  SignalConversion generated from: '<S50>/VeBRKR_b_ESCFailSts'
     *  SignalConversion generated from: '<S50>/LeBRKR_b_ESCFailSts'
     */
    /* Gateway: PokeBRKR_b_ESCFailSts/PokeBRKR_b_ESCFailStsChrt */
    /* During: PokeBRKR_b_ESCFailSts/PokeBRKR_b_ESCFailStsChrt */
    /* Entry Internal: PokeBRKR_b_ESCFailSts/PokeBRKR_b_ESCFailStsChrt */
    /* Transition: '<S304>:2' */
    (void)Rte_Write_VeBRKR_b_ESCFailSts_Value(LeBRKR_b_ESCFailSts);

    /* Outport: '<Root>/VeBRKR_b_ESCFailStsFA' incorporates:
     *  Chart: '<S50>/PokeBRKR_b_ESCFailStsChrt'
     *  SignalConversion generated from: '<S50>/VeBRKR_b_ESCFailStsFA'
     */
    (void)Rte_Write_VeBRKR_b_ESCFailStsFA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_ESCFailSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_ESCIntervention(VAR(boolean, AUTOMATIC)
    LeBRKR_b_ESCIntervention, VAR(boolean, AUTOMATIC) LeBRKR_b_ESCInterventionFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_ESCIntervention' */
    /* Chart: '<S51>/PokeBRKR_b_ESCInterventionChrt' incorporates:
     *  SignalConversion generated from: '<S51>/LeBRKR_b_ESCInterventionFA'
     *  SignalConversion generated from: '<S51>/LeBRKR_b_ESCIntervention'
     */
    /* Gateway: PokeBRKR_b_ESCIntervention/PokeBRKR_b_ESCInterventionChrt */
    /* During: PokeBRKR_b_ESCIntervention/PokeBRKR_b_ESCInterventionChrt */
    /* Entry Internal: PokeBRKR_b_ESCIntervention/PokeBRKR_b_ESCInterventionChrt */
    /* Transition: '<S305>:2' */
    if (!LeBRKR_b_ESCInterventionFA)
    {
        /* Transition: '<S305>:3' */
        /* Transition: '<S305>:15' */
        BRKR_ac_B.LeBRKR_b_ESCIntervention_out = LeBRKR_b_ESCIntervention;

        /* Transition: '<S305>:18' */
    }
    else
    {
        /* Transition: '<S305>:4' */
    }

    /* End of Chart: '<S51>/PokeBRKR_b_ESCInterventionChrt' */

    /* Outport: '<Root>/VeBRKR_b_ESCIntervention' incorporates:
     *  SignalConversion generated from: '<S51>/VeBRKR_b_ESCIntervention'
     */
    (void)Rte_Write_VeBRKR_b_ESCIntervention_Value
        (BRKR_ac_B.LeBRKR_b_ESCIntervention_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_ESCIntervention' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_EmsMlfAtv(VAR(boolean, AUTOMATIC)
    LeBRKR_b_EmsMlfAtv, VAR(boolean, AUTOMATIC) LeBRKR_b_EmsMlfAtvFA)
{
    boolean rtb_LeBRKR_b_EmsMlfAtvFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_EmsMlfAtv' */
    /* Chart: '<S52>/PokeBRKR_b_EmsMlfAtvChrt' incorporates:
     *  SignalConversion generated from: '<S52>/LeBRKR_b_EmsMlfAtvFA'
     */
    /* Gateway: PokeBRKR_b_EmsMlfAtv/PokeBRKR_b_EmsMlfAtvChrt */
    /* During: PokeBRKR_b_EmsMlfAtv/PokeBRKR_b_EmsMlfAtvChrt */
    /* Entry Internal: PokeBRKR_b_EmsMlfAtv/PokeBRKR_b_EmsMlfAtvChrt */
    /* Transition: '<S306>:2' */
    if (!LeBRKR_b_EmsMlfAtvFA)
    {
        /* SignalConversion generated from: '<S52>/VeBRKR_b_EmsMlfAtv_write' incorporates:
         *  Merge: '<Root>/Merge_18'
         *  SignalConversion generated from: '<S52>/LeBRKR_b_EmsMlfAtv'
         */
        /* Transition: '<S306>:3' */
        /* Transition: '<S306>:15' */
        Rte_IrvWrite_PokeBRKR_b_EmsMlfAtv_VeBRKR_b_EmsMlfAtv_Init_IRV
            (LeBRKR_b_EmsMlfAtv);
        rtb_LeBRKR_b_EmsMlfAtvFA_out_b = false;

        /* Transition: '<S306>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S52>/VeBRKR_b_EmsMlfAtv_write' incorporates:
         *  Merge: '<Root>/Merge_18'
         */
        /* Transition: '<S306>:4' */
        Rte_IrvWrite_PokeBRKR_b_EmsMlfAtv_VeBRKR_b_EmsMlfAtv_Init_IRV
            (KeBRKR_b_EmsMlfAtvDflt);
        rtb_LeBRKR_b_EmsMlfAtvFA_out_b = true;
    }

    /* End of Chart: '<S52>/PokeBRKR_b_EmsMlfAtvChrt' */

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S52>/VeBRKR_b_EmsMlfAtvFA_write'
     * */
    Rte_IrvWrite_PokeBRKR_b_EmsMlfAtv_VeBRKR_b_EmsMlfAtvFA_Init_IRV
        (rtb_LeBRKR_b_EmsMlfAtvFA_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_EmsMlfAtv' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_FunctionSts(VAR(boolean, AUTOMATIC)
    LeBRKR_b_FunctionSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_FunctionSts' */
    /* Outport: '<Root>/VeBRKR_b_FunctionSts' incorporates:
     *  SignalConversion generated from: '<S53>/VeBRKR_b_FunctionSts'
     *  SignalConversion generated from: '<S53>/LeBRKR_b_FunctionSts'
     */
    /* Gateway: PokeBRKR_b_FunctionSts/PokeBRKR_b_FunctionStsChrt */
    /* During: PokeBRKR_b_FunctionSts/PokeBRKR_b_FunctionStsChrt */
    /* Entry Internal: PokeBRKR_b_FunctionSts/PokeBRKR_b_FunctionStsChrt */
    /* Transition: '<S307>:2' */
    (void)Rte_Write_VeBRKR_b_FunctionSts_Value(LeBRKR_b_FunctionSts);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_FunctionSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_HillHoldActive(VAR(boolean, AUTOMATIC)
    LeBRKR_b_HillHoldActive, VAR(boolean, AUTOMATIC) LeBRKR_b_HillHoldActiveFA)
{
    boolean rtb_LeBRKR_b_HillHoldActiveFA_out_m;
    boolean rtb_LeBRKR_b_HillHoldActive_out_c;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_HillHoldActive' */
    /* Chart: '<S54>/PokeBRKR_b_HillHoldActiveChrt' incorporates:
     *  SignalConversion generated from: '<S54>/LeBRKR_b_HillHoldActiveFA'
     *  SignalConversion generated from: '<S54>/LeBRKR_b_HillHoldActive'
     */
    /* Gateway: PokeBRKR_b_HillHoldActive/PokeBRKR_b_HillHoldActiveChrt */
    /* During: PokeBRKR_b_HillHoldActive/PokeBRKR_b_HillHoldActiveChrt */
    /* Entry Internal: PokeBRKR_b_HillHoldActive/PokeBRKR_b_HillHoldActiveChrt */
    /* Transition: '<S308>:2' */
    if (!LeBRKR_b_HillHoldActiveFA)
    {
        /* Transition: '<S308>:3' */
        /* Transition: '<S308>:15' */
        rtb_LeBRKR_b_HillHoldActive_out_c = LeBRKR_b_HillHoldActive;
        rtb_LeBRKR_b_HillHoldActiveFA_out_m = false;

        /* Transition: '<S308>:18' */
    }
    else
    {
        /* Transition: '<S308>:4' */
        rtb_LeBRKR_b_HillHoldActive_out_c = false;
        rtb_LeBRKR_b_HillHoldActiveFA_out_m = true;
    }

    /* End of Chart: '<S54>/PokeBRKR_b_HillHoldActiveChrt' */

    /* Outport: '<Root>/VeBRKR_b_HillHoldActiveFA' incorporates:
     *  SignalConversion generated from: '<S54>/VeBRKR_b_HillHoldActiveFA'
     */
    (void)Rte_Write_VeBRKR_b_HillHoldActiveFA_Value
        (rtb_LeBRKR_b_HillHoldActiveFA_out_m);

    /* Merge: '<Root>/Merge_37_Irv' incorporates:
     *  SignalConversion generated from: '<S54>/VeBRKR_b_HillHoldActiveFA_write'
     * */
    Rte_IrvWrite_PokeBRKR_b_HillHoldActive_VeBRKR_b_HillHoldActiveFA_write_Init_IRV
        (rtb_LeBRKR_b_HillHoldActiveFA_out_m);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S54>/VeBRKR_b_HillHoldActive_write'
     * */
    Rte_IrvWrite_PokeBRKR_b_HillHoldActive_VeBRKR_b_HillHoldActive_Init_IRV
        (rtb_LeBRKR_b_HillHoldActive_out_c);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_HillHoldActive' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_HillHoldFailSts(VAR(boolean, AUTOMATIC)
    LeBRKR_b_HillHoldFailSts, VAR(boolean, AUTOMATIC) LeBRKR_b_HillHoldFailStsFA)
{
    boolean rtb_LeBRKR_b_HillHoldFailStsFA_out_n;
    boolean rtb_LeBRKR_b_HillHoldFailSts_out_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_HillHoldFailSts' */
    /* Chart: '<S55>/PokeBRKR_b_HillHoldFailStsChrt' incorporates:
     *  SignalConversion generated from: '<S55>/LeBRKR_b_HillHoldFailStsFA'
     *  SignalConversion generated from: '<S55>/LeBRKR_b_HillHoldFailSts'
     */
    /* Gateway: PokeBRKR_b_HillHoldFailSts/PokeBRKR_b_HillHoldFailStsChrt */
    /* During: PokeBRKR_b_HillHoldFailSts/PokeBRKR_b_HillHoldFailStsChrt */
    /* Entry Internal: PokeBRKR_b_HillHoldFailSts/PokeBRKR_b_HillHoldFailStsChrt */
    /* Transition: '<S309>:2' */
    if (!LeBRKR_b_HillHoldFailStsFA)
    {
        /* Transition: '<S309>:3' */
        /* Transition: '<S309>:15' */
        rtb_LeBRKR_b_HillHoldFailSts_out_e = LeBRKR_b_HillHoldFailSts;
        rtb_LeBRKR_b_HillHoldFailStsFA_out_n = false;

        /* Transition: '<S309>:18' */
    }
    else
    {
        /* Transition: '<S309>:4' */
        rtb_LeBRKR_b_HillHoldFailSts_out_e = false;
        rtb_LeBRKR_b_HillHoldFailStsFA_out_n = true;
    }

    /* End of Chart: '<S55>/PokeBRKR_b_HillHoldFailStsChrt' */

    /* Outport: '<Root>/VeBRKR_b_HillHoldFailStsFA' incorporates:
     *  SignalConversion generated from: '<S55>/VeBRKR_b_HillHoldFailStsFA'
     */
    (void)Rte_Write_VeBRKR_b_HillHoldFailStsFA_Value
        (rtb_LeBRKR_b_HillHoldFailStsFA_out_n);

    /* Merge: '<Root>/Merge_39_Irv' incorporates:
     *  SignalConversion generated from: '<S55>/VeBRKR_b_HillHoldFailStsFA_write'
     * */
    Rte_IrvWrite_PokeBRKR_b_HillHoldFailSts_VeBRKR_b_HillHoldFailStsFA_write_Init_IRV
        (rtb_LeBRKR_b_HillHoldFailStsFA_out_n);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S55>/VeBRKR_b_HillHoldFailSts_write'
     * */
    Rte_IrvWrite_PokeBRKR_b_HillHoldFailSts_VeBRKR_b_HillHoldFailSts_Init_IRV
        (rtb_LeBRKR_b_HillHoldFailSts_out_e);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_HillHoldFailSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_ImpndSkid(VAR(boolean, AUTOMATIC)
    LeBRKR_b_ImpndSkid)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_ImpndSkid' */
    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S56>/LeBRKR_b_ImpndSkid'
     *  SignalConversion generated from: '<S56>/VeBRKR_b_ImpndSkid_write'
     */
    /* Gateway: PokeBRKR_b_ImpndSkid/PokeBRKR_b_ImpndSkidChrt */
    /* During: PokeBRKR_b_ImpndSkid/PokeBRKR_b_ImpndSkidChrt */
    /* Entry Internal: PokeBRKR_b_ImpndSkid/PokeBRKR_b_ImpndSkidChrt */
    /* Transition: '<S310>:2' */
    Rte_IrvWrite_PokeBRKR_b_ImpndSkid_ImpndSkid_Init_IRV(LeBRKR_b_ImpndSkid);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_ImpndSkid' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_MSRActive(VAR(boolean, AUTOMATIC)
    LeBRKR_b_MSRActive, VAR(boolean, AUTOMATIC) LeBRKR_b_MSRActiveFA)
{
    boolean rtb_LeBRKR_b_MSRActiveFA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_MSRActive' */
    /* Chart: '<S57>/PokeBRKR_b_MSRActiveChrt' incorporates:
     *  SignalConversion generated from: '<S57>/LeBRKR_b_MSRActiveFA'
     *  SignalConversion generated from: '<S57>/LeBRKR_b_MSRActive'
     */
    /* Gateway: PokeBRKR_b_MSRActive/PokeBRKR_b_MSRActiveChrt */
    /* During: PokeBRKR_b_MSRActive/PokeBRKR_b_MSRActiveChrt */
    /* Entry Internal: PokeBRKR_b_MSRActive/PokeBRKR_b_MSRActiveChrt */
    /* Transition: '<S311>:2' */
    if (!LeBRKR_b_MSRActiveFA)
    {
        /* Transition: '<S311>:3' */
        /* Transition: '<S311>:15' */
        BRKR_ac_B.LeBRKR_b_MSRActive_out = LeBRKR_b_MSRActive;
        rtb_LeBRKR_b_MSRActiveFA_out_f = false;

        /* Transition: '<S311>:18' */
    }
    else
    {
        /* Transition: '<S311>:4' */
        rtb_LeBRKR_b_MSRActiveFA_out_f = true;
    }

    /* End of Chart: '<S57>/PokeBRKR_b_MSRActiveChrt' */

    /* Outport: '<Root>/VeBRKR_b_MSRActive' incorporates:
     *  SignalConversion generated from: '<S57>/VeBRKR_b_MSRActive'
     */
    (void)Rte_Write_VeBRKR_b_MSRActive_Value(BRKR_ac_B.LeBRKR_b_MSRActive_out);

    /* Outport: '<Root>/VeBRKR_b_MSRActive_FA' incorporates:
     *  SignalConversion generated from: '<S57>/VeBRKR_b_MSRActiveFA'
     */
    (void)Rte_Write_VeBRKR_b_MSRActive_FA_Value(rtb_LeBRKR_b_MSRActiveFA_out_f);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_MSRActive' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_b_VehicleStandStillSts(VAR(boolean, AUTOMATIC)
    LeBRKR_b_VehicleStandStillSts, VAR(boolean, AUTOMATIC)
    LeBRKR_b_VehicleStandStillStsFA)
{
    boolean rtb_LeBRKR_b_VehicleStandStillStsFA_Out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_b_VehicleStandStillSts' */
    /* Chart: '<S58>/PokeBRKR_b_VehicleStandStillStsChrt' incorporates:
     *  SignalConversion generated from: '<S58>/LeBRKR_b_VehicleStandStillStsFA'
     *  SignalConversion generated from: '<S58>/LeBRKR_b_VehicleStandStillSts'
     */
    /* Gateway: PokeBRKR_b_VehicleStandStillSts/PokeBRKR_b_VehicleStandStillStsChrt */
    /* During: PokeBRKR_b_VehicleStandStillSts/PokeBRKR_b_VehicleStandStillStsChrt */
    /* Entry Internal: PokeBRKR_b_VehicleStandStillSts/PokeBRKR_b_VehicleStandStillStsChrt */
    /* Transition: '<S312>:9' */
    if (!LeBRKR_b_VehicleStandStillStsFA)
    {
        /* Transition: '<S312>:2' */
        /* Transition: '<S312>:3' */
        BRKR_ac_B.LeBRKR_b_VehicleStandStillSts_Out =
            LeBRKR_b_VehicleStandStillSts;
        rtb_LeBRKR_b_VehicleStandStillStsFA_Out = false;

        /* Transition: '<S312>:4' */
    }
    else
    {
        /* Transition: '<S312>:8' */
        rtb_LeBRKR_b_VehicleStandStillStsFA_Out = true;
    }

    /* End of Chart: '<S58>/PokeBRKR_b_VehicleStandStillStsChrt' */

    /* Outport: '<Root>/VeBRKR_b_VehicleStandStillSts' incorporates:
     *  SignalConversion generated from: '<S58>/VeBRKR_b_VehicleStandStillSts'
     */
    (void)Rte_Write_VeBRKR_b_VehicleStandStillSts_Value
        (BRKR_ac_B.LeBRKR_b_VehicleStandStillSts_Out);

    /* Outport: '<Root>/VeBRKR_b_VehicleStandStillStsFA' incorporates:
     *  SignalConversion generated from: '<S58>/VeBRKR_b_VehicleStandStillStsFA'
     */
    (void)Rte_Write_VeBRKR_b_VehicleStandStillStsFA_Value
        (rtb_LeBRKR_b_VehicleStandStillStsFA_Out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_b_VehicleStandStillSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_AHH_Ready_Status(VAR(TeBRKR_e_AHH_ReadyStatus,
    AUTOMATIC) LeBRKR_e_AHH_Ready_Status, VAR(boolean, AUTOMATIC)
    LeBRKR_b_AHH_Ready_StatusFA)
{
    TeBRKR_e_AHH_ReadyStatus rtb_LeBRKR_e_AHH_Ready_Status_out_c;
    boolean rtb_LeBRKR_b_AHH_Ready_StatusFA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_AHH_Ready_Status' */
    /* Chart: '<S59>/PokeBRKR_e_AHH_Ready_StatusChrt' incorporates:
     *  Constant: '<S313>/Calib'
     *  SignalConversion generated from: '<S59>/LeBRKR_b_AHH_Ready_StatusFA'
     *  SignalConversion generated from: '<S59>/LeBRKR_e_AHH_Ready_Status'
     */
    /* Gateway: PokeBRKR_e_AHH_Ready_Status/PokeBRKR_e_AHH_Ready_StatusChrt */
    /* During: PokeBRKR_e_AHH_Ready_Status/PokeBRKR_e_AHH_Ready_StatusChrt */
    /* Entry Internal: PokeBRKR_e_AHH_Ready_Status/PokeBRKR_e_AHH_Ready_StatusChrt */
    /* Transition: '<S314>:2' */
    rtb_LeBRKR_e_AHH_Ready_Status_out_c = KaBRKR_e_AHH_Ready_Status_Map
        [(LeBRKR_e_AHH_Ready_Status)];
    if ((!LeBRKR_b_AHH_Ready_StatusFA) && (((uint32)
            rtb_LeBRKR_e_AHH_Ready_Status_out_c) != CeBRKR_e_AHH_SNA))
    {
        /* Transition: '<S314>:3' */
        /* Transition: '<S314>:15' */
        rtb_LeBRKR_b_AHH_Ready_StatusFA_out_h = false;

        /* Transition: '<S314>:18' */
    }
    else
    {
        /* Transition: '<S314>:4' */
        rtb_LeBRKR_b_AHH_Ready_StatusFA_out_h = true;
    }

    /* End of Chart: '<S59>/PokeBRKR_e_AHH_Ready_StatusChrt' */

    /* Outport: '<Root>/VeBRKR_b_AHH_Ready_StatusFA' incorporates:
     *  SignalConversion generated from: '<S59>/VeBRKR_b_AHH_Ready_StatusFA'
     */
    (void)Rte_Write_VeBRKR_b_AHH_Ready_StatusFA_Value
        (rtb_LeBRKR_b_AHH_Ready_StatusFA_out_h);

    /* Outport: '<Root>/VeBRKR_e_AHH_Ready_Status' incorporates:
     *  SignalConversion generated from: '<S59>/VeBRKR_e_AHH_Ready_Status'
     */
    (void)Rte_Write_VeBRKR_e_AHH_Ready_Status_Value
        (rtb_LeBRKR_e_AHH_Ready_Status_out_c);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_AHH_Ready_Status' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_AeCoastSwitch(VAR(TeBRKR_e_AeCoastSwitchStat,
    AUTOMATIC) LeBRKR_e_AeCoastSwitch, VAR(boolean, AUTOMATIC)
    LeBRKR_b_AeCoastSwitchFA)
{
    boolean rtb_LeBRKR_b_AeCoastSwitchFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_AeCoastSwitch' */
    /* Chart: '<S60>/PokeBRKR_e_AeCoastSwitchChrt' incorporates:
     *  SignalConversion generated from: '<S60>/LeBRKR_b_AeCoastSwitchFA'
     */
    /* Gateway: PokeBRKR_e_AeCoastSwitch/PokeBRKR_e_AeCoastSwitchChrt */
    /* During: PokeBRKR_e_AeCoastSwitch/PokeBRKR_e_AeCoastSwitchChrt */
    /* Entry Internal: PokeBRKR_e_AeCoastSwitch/PokeBRKR_e_AeCoastSwitchChrt */
    /* Transition: '<S315>:2' */
    if (!LeBRKR_b_AeCoastSwitchFA)
    {
        /* SignalConversion generated from: '<S60>/VeBRKR_e_AeCoastSwitch_write' incorporates:
         *  Merge: '<Root>/Merge_41'
         *  SignalConversion generated from: '<S60>/LeBRKR_e_AeCoastSwitch'
         */
        /* Transition: '<S315>:3' */
        /* Transition: '<S315>:15' */
        Rte_IrvWrite_PokeBRKR_e_AeCoastSwitch_VeBRKR_e_AeCoastSwitch_Init_IRV
            (LeBRKR_e_AeCoastSwitch);
        rtb_LeBRKR_b_AeCoastSwitchFA_out_b = false;

        /* Transition: '<S315>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S60>/VeBRKR_e_AeCoastSwitch_write' incorporates:
         *  Merge: '<Root>/Merge_41'
         */
        /* Transition: '<S315>:4' */
        Rte_IrvWrite_PokeBRKR_e_AeCoastSwitch_VeBRKR_e_AeCoastSwitch_Init_IRV
            (KeBRKR_e_AeCoastSwitchDflt);
        rtb_LeBRKR_b_AeCoastSwitchFA_out_b = true;
    }

    /* End of Chart: '<S60>/PokeBRKR_e_AeCoastSwitchChrt' */

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S60>/VeBRKR_b_AeCoastSwitchFA_write'
     * */
    Rte_IrvWrite_PokeBRKR_e_AeCoastSwitch_VeBRKR_b_AeCoastSwitchFA_Init_IRV
        (rtb_LeBRKR_b_AeCoastSwitchFA_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_AeCoastSwitch' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_AeCoastSwitchStat(VAR
    (TeBRKR_e_AeCoastSwitchStat, AUTOMATIC) LeBRKR_e_AeCoastSwitchStat, VAR
    (boolean, AUTOMATIC) LeBRKR_b_AeCoastSwitchStatFA)
{
    boolean rtb_LeBRKR_b_AeCoastSwitchStatFA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_AeCoastSwitchStat' */
    /* Chart: '<S61>/PokeBRKR_e_AeCoastSwitchStatChrt' incorporates:
     *  SignalConversion generated from: '<S61>/LeBRKR_b_AeCoastSwitchStatFA'
     */
    /* Gateway: PokeBRKR_e_AeCoastSwitchStat/PokeBRKR_e_AeCoastSwitchStatChrt */
    /* During: PokeBRKR_e_AeCoastSwitchStat/PokeBRKR_e_AeCoastSwitchStatChrt */
    /* Entry Internal: PokeBRKR_e_AeCoastSwitchStat/PokeBRKR_e_AeCoastSwitchStatChrt */
    /* Transition: '<S316>:2' */
    if (!LeBRKR_b_AeCoastSwitchStatFA)
    {
        /* SignalConversion generated from: '<S61>/VeBRKR_e_AeCoastSwitchStat_write' incorporates:
         *  Merge: '<Root>/Merge_8'
         *  SignalConversion generated from: '<S61>/LeBRKR_e_AeCoastSwitchStat'
         */
        /* Transition: '<S316>:3' */
        /* Transition: '<S316>:15' */
        Rte_IrvWrite_PokeBRKR_e_AeCoastSwitchStat_VeBRKR_e_AeCoastSwitchStat_Init_IRV
            (LeBRKR_e_AeCoastSwitchStat);
        rtb_LeBRKR_b_AeCoastSwitchStatFA_out_a = false;

        /* Transition: '<S316>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S61>/VeBRKR_e_AeCoastSwitchStat_write' incorporates:
         *  Merge: '<Root>/Merge_8'
         */
        /* Transition: '<S316>:4' */
        Rte_IrvWrite_PokeBRKR_e_AeCoastSwitchStat_VeBRKR_e_AeCoastSwitchStat_Init_IRV
            (KeBRKR_e_AeCoastSwitchStatDflt);
        rtb_LeBRKR_b_AeCoastSwitchStatFA_out_a = true;
    }

    /* End of Chart: '<S61>/PokeBRKR_e_AeCoastSwitchStatChrt' */

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S61>/VeBRKR_b_AeCoastSwitchStatFA_write'
     * */
    Rte_IrvWrite_PokeBRKR_e_AeCoastSwitchStat_VeBRKR_b_AeCoastSwitchStatFA_Init_IRV
        (rtb_LeBRKR_b_AeCoastSwitchStatFA_out_a);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_AeCoastSwitchStat' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_AeCoastSwitchStatC1(VAR
    (TeBRKR_e_AeCoastSwitchStat, AUTOMATIC) LeBRKR_e_AeCoastSwitchStatC1, VAR
    (boolean, AUTOMATIC) LeBRKR_b_AeCoastSwitchStatC1FA)
{
    boolean rtb_LeBRKR_b_AeCoastSwitchStatC1FA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_AeCoastSwitchStatC1' */
    /* Chart: '<S62>/PokeBRKR_e_AeCoastSwitchStatC1Chrt' incorporates:
     *  SignalConversion generated from: '<S62>/LeBRKR_b_AeCoastSwitchStatC1FA'
     */
    /* Gateway: PokeBRKR_e_AeCoastSwitchStatC1/PokeBRKR_e_AeCoastSwitchStatC1Chrt */
    /* During: PokeBRKR_e_AeCoastSwitchStatC1/PokeBRKR_e_AeCoastSwitchStatC1Chrt */
    /* Entry Internal: PokeBRKR_e_AeCoastSwitchStatC1/PokeBRKR_e_AeCoastSwitchStatC1Chrt */
    /* Transition: '<S317>:2' */
    if (!LeBRKR_b_AeCoastSwitchStatC1FA)
    {
        /* SignalConversion generated from: '<S62>/VeBRKR_e_AeCoastSwitchStatC1_write' incorporates:
         *  Merge: '<Root>/Merge_12'
         *  SignalConversion generated from: '<S62>/LeBRKR_e_AeCoastSwitchStatC1'
         */
        /* Transition: '<S317>:3' */
        /* Transition: '<S317>:15' */
        Rte_IrvWrite_PokeBRKR_e_AeCoastSwitchStatC1_VeBRKR_e_AeCoastSwitchStatC1_Init_IRV
            (LeBRKR_e_AeCoastSwitchStatC1);
        rtb_LeBRKR_b_AeCoastSwitchStatC1FA_out_p = false;

        /* Transition: '<S317>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S62>/VeBRKR_e_AeCoastSwitchStatC1_write' incorporates:
         *  Merge: '<Root>/Merge_12'
         */
        /* Transition: '<S317>:4' */
        Rte_IrvWrite_PokeBRKR_e_AeCoastSwitchStatC1_VeBRKR_e_AeCoastSwitchStatC1_Init_IRV
            (KeBRKR_e_AeCoastSwitchStatC1Dflt);
        rtb_LeBRKR_b_AeCoastSwitchStatC1FA_out_p = true;
    }

    /* End of Chart: '<S62>/PokeBRKR_e_AeCoastSwitchStatC1Chrt' */

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S62>/VeBRKR_b_AeCoastSwitchStatC1FA_write'
     * */
    Rte_IrvWrite_PokeBRKR_e_AeCoastSwitchStatC1_VeBRKR_b_AeCoastSwitchStatC1FA_Init_IRV
        (rtb_LeBRKR_b_AeCoastSwitchStatC1FA_out_p);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_AeCoastSwitchStatC1' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_AeCoastSwitchStatC2(VAR
    (TeBRKR_e_AeCoastSwitchStat, AUTOMATIC) LeBRKR_e_AeCoastSwitchStatC2, VAR
    (boolean, AUTOMATIC) LeBRKR_b_AeCoastSwitchStatC2FA)
{
    boolean rtb_LeBRKR_b_AeCoastSwitchStatC2FA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_AeCoastSwitchStatC2' */
    /* Chart: '<S63>/PokeBRKR_e_AeCoastSwitchStatC2Chrt' incorporates:
     *  SignalConversion generated from: '<S63>/LeBRKR_b_AeCoastSwitchStatC2FA'
     */
    /* Gateway: PokeBRKR_e_AeCoastSwitchStatC2/PokeBRKR_e_AeCoastSwitchStatC2Chrt */
    /* During: PokeBRKR_e_AeCoastSwitchStatC2/PokeBRKR_e_AeCoastSwitchStatC2Chrt */
    /* Entry Internal: PokeBRKR_e_AeCoastSwitchStatC2/PokeBRKR_e_AeCoastSwitchStatC2Chrt */
    /* Transition: '<S318>:2' */
    if (!LeBRKR_b_AeCoastSwitchStatC2FA)
    {
        /* SignalConversion generated from: '<S63>/VeBRKR_e_AeCoastSwitchStatC2_write' incorporates:
         *  Merge: '<Root>/Merge_15'
         *  SignalConversion generated from: '<S63>/LeBRKR_e_AeCoastSwitchStatC2'
         */
        /* Transition: '<S318>:3' */
        /* Transition: '<S318>:15' */
        Rte_IrvWrite_PokeBRKR_e_AeCoastSwitchStatC2_VeBRKR_e_AeCoastSwitchStatC2_Init_IRV
            (LeBRKR_e_AeCoastSwitchStatC2);
        rtb_LeBRKR_b_AeCoastSwitchStatC2FA_out_h = false;

        /* Transition: '<S318>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S63>/VeBRKR_e_AeCoastSwitchStatC2_write' incorporates:
         *  Merge: '<Root>/Merge_15'
         */
        /* Transition: '<S318>:4' */
        Rte_IrvWrite_PokeBRKR_e_AeCoastSwitchStatC2_VeBRKR_e_AeCoastSwitchStatC2_Init_IRV
            (KeBRKR_e_AeCoastSwitchStatC2Dflt);
        rtb_LeBRKR_b_AeCoastSwitchStatC2FA_out_h = true;
    }

    /* End of Chart: '<S63>/PokeBRKR_e_AeCoastSwitchStatC2Chrt' */

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S63>/VeBRKR_b_AeCoastSwitchStatC2FA_write'
     * */
    Rte_IrvWrite_PokeBRKR_e_AeCoastSwitchStatC2_VeBRKR_b_AeCoastSwitchStatC2FA_Init_IRV
        (rtb_LeBRKR_b_AeCoastSwitchStatC2FA_out_h);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_AeCoastSwitchStatC2' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_BSMComFail_C1CAN(VAR(TeBRKR_e_BSMComFail_C1CAN,
    AUTOMATIC) LeBRKR_e_BSMComFail_C1CAN, VAR(boolean, AUTOMATIC)
    LeBRKR_b_BSMComFail_C1CANFA)
{
    TeBRKR_e_BSMComFail_C1CAN rtb_LeBRKR_e_BSMComFail_C1CAN_out;
    boolean rtb_LeBRKR_b_BSMComFail_C1CANFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_BSMComFail_C1CAN' */
    /* Chart: '<S64>/PokeBRKR_e_BSMComFail_C1CANChrt' incorporates:
     *  Constant: '<S319>/Calib'
     *  Constant: '<S320>/Calib'
     *  SignalConversion generated from: '<S64>/LeBRKR_b_BSMComFail_C1CANFA'
     *  SignalConversion generated from: '<S64>/LeBRKR_e_BSMComFail_C1CAN'
     */
    /* Gateway: PokeBRKR_e_BSMComFail_C1CAN/PokeBRKR_e_BSMComFail_C1CANChrt */
    /* During: PokeBRKR_e_BSMComFail_C1CAN/PokeBRKR_e_BSMComFail_C1CANChrt */
    /* Entry Internal: PokeBRKR_e_BSMComFail_C1CAN/PokeBRKR_e_BSMComFail_C1CANChrt */
    /* Transition: '<S321>:2' */
    if (!LeBRKR_b_BSMComFail_C1CANFA)
    {
        /* Transition: '<S321>:3' */
        /* Transition: '<S321>:15' */
        rtb_LeBRKR_e_BSMComFail_C1CAN_out = KaBRKR_e_BSMComFail_C1
            [(LeBRKR_e_BSMComFail_C1CAN)];
        rtb_LeBRKR_b_BSMComFail_C1CANFA_out = false;

        /* Transition: '<S321>:18' */
    }
    else
    {
        /* Transition: '<S321>:4' */
        rtb_LeBRKR_e_BSMComFail_C1CAN_out = KeBRKR_e_BSMComFailDflt_C1CAN;
        rtb_LeBRKR_b_BSMComFail_C1CANFA_out = true;
    }

    /* End of Chart: '<S64>/PokeBRKR_e_BSMComFail_C1CANChrt' */

    /* Outport: '<Root>/VeBRKR_b_ComFailBSM_C1CANFA' incorporates:
     *  SignalConversion generated from: '<S64>/VeBRKR_b_BSMComFail_C1CANFA'
     */
    (void)Rte_Write_VeBRKR_b_ComFailBSM_C1CANFA_Value
        (rtb_LeBRKR_b_BSMComFail_C1CANFA_out);

    /* Outport: '<Root>/VeBRKR_e_ComFailBSM_C1CAN' incorporates:
     *  SignalConversion generated from: '<S64>/VeBRKR_e_BSMComFail_C1CAN'
     */
    (void)Rte_Write_VeBRKR_e_ComFailBSM_C1CAN_Value
        (rtb_LeBRKR_e_BSMComFail_C1CAN_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_BSMComFail_C1CAN' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_BSMComFail_C2CAN(VAR(TeBRKR_e_BSMComFail_C2CAN,
    AUTOMATIC) LeBRKR_e_BSMComFail_C2CAN, VAR(boolean, AUTOMATIC)
    LeBRKR_b_BSMComFail_C2CANFA)
{
    TeBRKR_e_BSMComFail_C2CAN rtb_LeBRKR_e_BSMComFail_C2CAN_out;
    boolean rtb_LeBRKR_b_BSMComFail_C2CANFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_BSMComFail_C2CAN' */
    /* Chart: '<S65>/PokeBRKR_e_BSMComFail_C2CANChrt' incorporates:
     *  Constant: '<S322>/Calib'
     *  SignalConversion generated from: '<S65>/LeBRKR_b_BSMComFail_C2CANFA'
     *  SignalConversion generated from: '<S65>/LeBRKR_e_BSMComFail_C2CAN'
     */
    /* Gateway: PokeBRKR_e_BSMComFail_C2CAN/PokeBRKR_e_BSMComFail_C2CANChrt */
    /* During: PokeBRKR_e_BSMComFail_C2CAN/PokeBRKR_e_BSMComFail_C2CANChrt */
    /* Entry Internal: PokeBRKR_e_BSMComFail_C2CAN/PokeBRKR_e_BSMComFail_C2CANChrt */
    /* Transition: '<S323>:2' */
    if (!LeBRKR_b_BSMComFail_C2CANFA)
    {
        /* Transition: '<S323>:3' */
        /* Transition: '<S323>:15' */
        rtb_LeBRKR_e_BSMComFail_C2CAN_out = KaBRKR_e_BSMComFail_C2
            [(LeBRKR_e_BSMComFail_C2CAN)];
        rtb_LeBRKR_b_BSMComFail_C2CANFA_out = false;

        /* Transition: '<S323>:18' */
    }
    else
    {
        /* Transition: '<S323>:4' */
        rtb_LeBRKR_e_BSMComFail_C2CAN_out = KeBRKR_e_BSMComFailDflt_C2CAN;
        rtb_LeBRKR_b_BSMComFail_C2CANFA_out = true;
    }

    /* End of Chart: '<S65>/PokeBRKR_e_BSMComFail_C2CANChrt' */

    /* Outport: '<Root>/VeBRKR_b_ComFailBSM_C2CANFA' incorporates:
     *  SignalConversion generated from: '<S65>/VeBRKR_b_BSMComFail_C2CANFA'
     */
    (void)Rte_Write_VeBRKR_b_ComFailBSM_C2CANFA_Value
        (rtb_LeBRKR_b_BSMComFail_C2CANFA_out);

    /* Outport: '<Root>/VeBRKR_e_ComFailBSM_C2CAN' incorporates:
     *  SignalConversion generated from: '<S65>/VeBRKR_e_BSMComFail_C2CAN'
     */
    (void)Rte_Write_VeBRKR_e_ComFailBSM_C2CAN_Value
        (rtb_LeBRKR_e_BSMComFail_C2CAN_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_BSMComFail_C2CAN' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_BrkPedalDscrtInpt(VAR(TeBRKR_e_BrkPdl_Stat,
    AUTOMATIC) LeBRKR_e_BrkPedalDscrtInpt, VAR(boolean, AUTOMATIC)
    LeBRKR_b_BrkPedalDscrtInptFA)
{
    boolean rtb_LeBRKR_b_BrkPedalDscrtInptFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_BrkPedalDscrtInpt' */
    /* Chart: '<S66>/PokeBRKR_e_BrkPedalDscrtInptChrt' incorporates:
     *  Constant: '<S324>/Calib'
     *  SignalConversion generated from: '<S66>/LeBRKR_b_BrkPedalDscrtInptFA'
     *  SignalConversion generated from: '<S66>/LeBRKR_e_BrkPedalDscrtInpt'
     */
    /* Gateway: PokeBRKR_e_BrkPedalDscrtInpt/PokeBRKR_e_BrkPedalDscrtInptChrt */
    /* During: PokeBRKR_e_BrkPedalDscrtInpt/PokeBRKR_e_BrkPedalDscrtInptChrt */
    /* Entry Internal: PokeBRKR_e_BrkPedalDscrtInpt/PokeBRKR_e_BrkPedalDscrtInptChrt */
    /* Transition: '<S325>:2' */
    if (!LeBRKR_b_BrkPedalDscrtInptFA)
    {
        /* Transition: '<S325>:3' */
        /* Transition: '<S325>:15' */
        BRKR_ac_B.LeBRKR_e_BrkPedalDscrtInpt_out = KaBRKR_e_BrkPdl_Stat_Map
            [(LeBRKR_e_BrkPedalDscrtInpt)];
        rtb_LeBRKR_b_BrkPedalDscrtInptFA_out = false;

        /* Transition: '<S325>:18' */
    }
    else
    {
        /* Transition: '<S325>:4' */
        rtb_LeBRKR_b_BrkPedalDscrtInptFA_out = true;
    }

    /* End of Chart: '<S66>/PokeBRKR_e_BrkPedalDscrtInptChrt' */

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S66>/VeBRKR_b_BrkPedalDscrtInptFA_write'
     * */
    Rte_IrvWrite_PokeBRKR_e_BrkPedalDscrtInpt_BrkPedalDscrtInptFA_Init_IRV
        (rtb_LeBRKR_b_BrkPedalDscrtInptFA_out);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S66>/VeBRKR_e_BrkPedalDscrtInpt_write'
     * */
    Rte_IrvWrite_PokeBRKR_e_BrkPedalDscrtInpt_BrkPedalDscrtInpt_Init_IRV
        (BRKR_ac_B.LeBRKR_e_BrkPedalDscrtInpt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_BrkPedalDscrtInpt' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_BrkPedalStat2(VAR(TeBRKR_e_BrkPdl_Stat,
    AUTOMATIC) LeBRKR_e_BrkPedalStat2, VAR(boolean, AUTOMATIC)
    LeBRKR_b_BrkPedalStat2FA)
{
    boolean rtb_LeBRKR_b_BrkPedalStat2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_BrkPedalStat2' */
    /* Chart: '<S67>/PokeBRKR_e_BrkPedalStat2Chrt' incorporates:
     *  SignalConversion generated from: '<S67>/LeBRKR_b_BrkPedalStat2FA'
     */
    /* Gateway: PokeBRKR_e_BrkPedalStat2/PokeBRKR_e_BrkPedalStat2Chrt */
    /* During: PokeBRKR_e_BrkPedalStat2/PokeBRKR_e_BrkPedalStat2Chrt */
    /* Entry Internal: PokeBRKR_e_BrkPedalStat2/PokeBRKR_e_BrkPedalStat2Chrt */
    /* Transition: '<S326>:2' */
    if (!LeBRKR_b_BrkPedalStat2FA)
    {
        /* SignalConversion generated from: '<S67>/VeBRKR_e_BrkPedalStat2_write' incorporates:
         *  Merge: '<Root>/Merge_75'
         *  SignalConversion generated from: '<S67>/LeBRKR_e_BrkPedalStat2'
         */
        /* Transition: '<S326>:3' */
        /* Transition: '<S326>:15' */
        Rte_IrvWrite_PokeBRKR_e_BrkPedalStat2_BrkPedalStat2_Init_IRV
            (LeBRKR_e_BrkPedalStat2);
        rtb_LeBRKR_b_BrkPedalStat2FA_out = false;

        /* Transition: '<S326>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S67>/VeBRKR_e_BrkPedalStat2_write' incorporates:
         *  Merge: '<Root>/Merge_75'
         */
        /* Transition: '<S326>:4' */
        Rte_IrvWrite_PokeBRKR_e_BrkPedalStat2_BrkPedalStat2_Init_IRV
            (KeBRKR_e_BrkPedalStat2Dflt);
        rtb_LeBRKR_b_BrkPedalStat2FA_out = true;
    }

    /* End of Chart: '<S67>/PokeBRKR_e_BrkPedalStat2Chrt' */

    /* Merge: '<Root>/Merge_67' incorporates:
     *  SignalConversion generated from: '<S67>/VeBRKR_b_BrkPedalStat2FA_write'
     * */
    Rte_IrvWrite_PokeBRKR_e_BrkPedalStat2_BrkPedalStat2FA_Init_IRV
        (rtb_LeBRKR_b_BrkPedalStat2FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_BrkPedalStat2' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_BrkPedalStat2_C2CAN(VAR(TeBRKR_e_BrkPdl_Stat,
    AUTOMATIC) LeBRKR_e_BrkPedalStat2_C2CAN, VAR(boolean, AUTOMATIC)
    LeBRKR_b_BrkPedalStat2_C2CANFA)
{
    boolean rtb_LeBRKR_b_BrkPedalStat2_C2CANFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_BrkPedalStat2_C2CAN' */
    /* Chart: '<S68>/PokeBRKR_e_BrkPedalStat2_C2CANChrt' incorporates:
     *  SignalConversion generated from: '<S68>/LeBRKR_b_BrkPedalStat2_C2CANFA'
     */
    /* Gateway: PokeBRKR_e_BrkPedalStat2_C2CAN/PokeBRKR_e_BrkPedalStat2_C2CANChrt */
    /* During: PokeBRKR_e_BrkPedalStat2_C2CAN/PokeBRKR_e_BrkPedalStat2_C2CANChrt */
    /* Entry Internal: PokeBRKR_e_BrkPedalStat2_C2CAN/PokeBRKR_e_BrkPedalStat2_C2CANChrt */
    /* Transition: '<S327>:2' */
    if (!LeBRKR_b_BrkPedalStat2_C2CANFA)
    {
        /* SignalConversion generated from: '<S68>/VeBRKR_e_BrkPedalStat2_C2CAN_write' incorporates:
         *  Merge: '<Root>/Merge_63'
         *  SignalConversion generated from: '<S68>/LeBRKR_e_BrkPedalStat2_C2CAN'
         */
        /* Transition: '<S327>:3' */
        /* Transition: '<S327>:15' */
        Rte_IrvWrite_PokeBRKR_e_BrkPedalStat2_C2CAN_VeBRKR_e_BrkPedalStat2_C2CAN_Init_IRV
            (LeBRKR_e_BrkPedalStat2_C2CAN);
        rtb_LeBRKR_b_BrkPedalStat2_C2CANFA_out = false;
        BRKR_ac_B.LeBRKR_b_BrkPedalStat2_C2CANSgnl_Rcvd = true;

        /* Transition: '<S327>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S68>/VeBRKR_e_BrkPedalStat2_C2CAN_write' incorporates:
         *  Merge: '<Root>/Merge_63'
         */
        /* Transition: '<S327>:4' */
        Rte_IrvWrite_PokeBRKR_e_BrkPedalStat2_C2CAN_VeBRKR_e_BrkPedalStat2_C2CAN_Init_IRV
            (KeBRKR_e_BrkPedalStat2Dflt);
        rtb_LeBRKR_b_BrkPedalStat2_C2CANFA_out = true;
    }

    /* End of Chart: '<S68>/PokeBRKR_e_BrkPedalStat2_C2CANChrt' */

    /* Merge: '<Root>/Merge_64' incorporates:
     *  SignalConversion generated from: '<S68>/VeBRKR_b_BrkPedalStat2_C2CANFA_write'
     * */
    Rte_IrvWrite_PokeBRKR_e_BrkPedalStat2_C2CAN_VeBRKR_b_BrkPedalStat2_C2CANFA_Init_IRV
        (rtb_LeBRKR_b_BrkPedalStat2_C2CANFA_out);

    /* Merge: '<Root>/Merge_66' incorporates:
     *  SignalConversion generated from: '<S68>/VeBRKR_b_BrkPedalStat2_C2CANSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBRKR_e_BrkPedalStat2_C2CAN_VeBRKR_b_BrkPedalStat2_C2CANSgnl_Rcvd_Init_IRV
        (BRKR_ac_B.LeBRKR_b_BrkPedalStat2_C2CANSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_BrkPedalStat2_C2CAN' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_BrkPedalSts(VAR(TeBRKR_e_BrkPdl_Stat, AUTOMATIC)
    LeBRKR_e_BrkPedalSts, VAR(boolean, AUTOMATIC) LeBRKR_b_BrkPedalStsFA)
{
    boolean rtb_LeBRKR_b_BrkPedalStsFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_BrkPedalSts' */
    /* Chart: '<S69>/PokeBRKR_e_BrkPedalStsChrt' incorporates:
     *  SignalConversion generated from: '<S69>/LeBRKR_b_BrkPedalStsFA'
     */
    /* Gateway: PokeBRKR_e_BrkPedalSts/PokeBRKR_e_BrkPedalStsChrt */
    /* During: PokeBRKR_e_BrkPedalSts/PokeBRKR_e_BrkPedalStsChrt */
    /* Entry Internal: PokeBRKR_e_BrkPedalSts/PokeBRKR_e_BrkPedalStsChrt */
    /* Transition: '<S328>:2' */
    if (!LeBRKR_b_BrkPedalStsFA)
    {
        /* SignalConversion generated from: '<S69>/VeBRKR_e_BrkPedalSts_write' incorporates:
         *  Merge: '<Root>/Merge_54'
         *  SignalConversion generated from: '<S69>/LeBRKR_e_BrkPedalSts'
         */
        /* Transition: '<S328>:3' */
        /* Transition: '<S328>:15' */
        Rte_IrvWrite_PokeBRKR_e_BrkPedalSts_BrkPedalSts_Init_IRV
            (LeBRKR_e_BrkPedalSts);
        rtb_LeBRKR_b_BrkPedalStsFA_out_b = false;

        /* Transition: '<S328>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S69>/VeBRKR_e_BrkPedalSts_write' incorporates:
         *  Merge: '<Root>/Merge_54'
         */
        /* Transition: '<S328>:4' */
        Rte_IrvWrite_PokeBRKR_e_BrkPedalSts_BrkPedalSts_Init_IRV
            (KeBRKR_e_BrkPedalStat2Dflt);
        rtb_LeBRKR_b_BrkPedalStsFA_out_b = true;
    }

    /* End of Chart: '<S69>/PokeBRKR_e_BrkPedalStsChrt' */

    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S69>/VeBRKR_b_BrkPedalStsFA_write'
     * */
    Rte_IrvWrite_PokeBRKR_e_BrkPedalSts_BrkPedalStsFA_Init_IRV
        (rtb_LeBRKR_b_BrkPedalStsFA_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_BrkPedalSts' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_ExtBrkReqOff(VAR(TeBRKR_e_ExtBrkReqOff,
    AUTOMATIC) LeBRKR_e_ExtBrkReqOff, VAR(boolean, AUTOMATIC)
    LeBRKR_b_ExtBrkReqOffFA)
{
    boolean rtb_LeBRKR_b_ExtBrkReqOffFA_out_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_ExtBrkReqOff' */
    /* Chart: '<S70>/PokeBRKR_e_ExtBrkReqOffChrt' incorporates:
     *  SignalConversion generated from: '<S70>/LeBRKR_b_ExtBrkReqOffFA'
     */
    /* Gateway: PokeBRKR_e_ExtBrkReqOff/PokeBRKR_e_ExtBrkReqOffChrt */
    /* During: PokeBRKR_e_ExtBrkReqOff/PokeBRKR_e_ExtBrkReqOffChrt */
    /* Entry Internal: PokeBRKR_e_ExtBrkReqOff/PokeBRKR_e_ExtBrkReqOffChrt */
    /* Transition: '<S329>:2' */
    if (!LeBRKR_b_ExtBrkReqOffFA)
    {
        /* SignalConversion generated from: '<S70>/VeBRKR_e_ExtBrkReqOff' incorporates:
         *  Outport: '<Root>/VeBRKR_e_ExtBrkReqOff'
         *  SignalConversion generated from: '<S70>/LeBRKR_e_ExtBrkReqOff'
         */
        /* Transition: '<S329>:3' */
        /* Transition: '<S329>:15' */
        (void)Rte_Write_VeBRKR_e_ExtBrkReqOff_Value(LeBRKR_e_ExtBrkReqOff);
        rtb_LeBRKR_b_ExtBrkReqOffFA_out_d = false;

        /* Transition: '<S329>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S70>/VeBRKR_e_ExtBrkReqOff' incorporates:
         *  Outport: '<Root>/VeBRKR_e_ExtBrkReqOff'
         */
        /* Transition: '<S329>:4' */
        (void)Rte_Write_VeBRKR_e_ExtBrkReqOff_Value
            (KeBRKR_e_ExtBrkReqDisabledDflt);
        rtb_LeBRKR_b_ExtBrkReqOffFA_out_d = true;
    }

    /* End of Chart: '<S70>/PokeBRKR_e_ExtBrkReqOffChrt' */

    /* Outport: '<Root>/VeBRKR_b_ExtBrkReqOffFA' incorporates:
     *  SignalConversion generated from: '<S70>/VeBRKR_b_ExtBrkReqOffFA'
     */
    (void)Rte_Write_VeBRKR_b_ExtBrkReqOffFA_Value
        (rtb_LeBRKR_b_ExtBrkReqOffFA_out_d);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_ExtBrkReqOff' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_ExtTcsReqOff(VAR(TeBRKR_e_ExtBrkReqOff,
    AUTOMATIC) LeBRKR_e_ExtTcsReqOff, VAR(boolean, AUTOMATIC)
    LeBRKR_b_ExtTcsReqOffFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_ExtTcsReqOff' */
    /* Chart: '<S71>/PokeBRKR_e_ExtTcsReqOffChrt' incorporates:
     *  SignalConversion generated from: '<S71>/LeBRKR_b_ExtTcsReqOffFA'
     */
    /* Gateway: PokeBRKR_e_ExtTcsReqOff/PokeBRKR_e_ExtTcsReqOffChrt */
    /* During: PokeBRKR_e_ExtTcsReqOff/PokeBRKR_e_ExtTcsReqOffChrt */
    /* Entry Internal: PokeBRKR_e_ExtTcsReqOff/PokeBRKR_e_ExtTcsReqOffChrt */
    /* Transition: '<S330>:2' */
    if (!LeBRKR_b_ExtTcsReqOffFA)
    {
        /* SignalConversion generated from: '<S71>/VeBRKR_e_ExtTcsReqOff' incorporates:
         *  Outport: '<Root>/VeBRKR_e_ExtTcsReqOff'
         *  SignalConversion generated from: '<S71>/LeBRKR_e_ExtTcsReqOff'
         */
        /* Transition: '<S330>:3' */
        /* Transition: '<S330>:15' */
        (void)Rte_Write_VeBRKR_e_ExtTcsReqOff_Value(LeBRKR_e_ExtTcsReqOff);

        /* Transition: '<S330>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S71>/VeBRKR_e_ExtTcsReqOff' incorporates:
         *  Outport: '<Root>/VeBRKR_e_ExtTcsReqOff'
         */
        /* Transition: '<S330>:4' */
        (void)Rte_Write_VeBRKR_e_ExtTcsReqOff_Value
            (KeBRKR_e_ExtTCSReqDisabledDflt);
    }

    /* End of Chart: '<S71>/PokeBRKR_e_ExtTcsReqOffChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_ExtTcsReqOff' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_Not_OK_To_Race(VAR(TeBRKR_e_Not_OK_To_Race,
    AUTOMATIC) LeBRKR_e_Not_OK_To_Race, VAR(boolean, AUTOMATIC)
    LeBRKR_b_Not_OK_To_RaceFA)
{
    boolean rtb_LeBRKR_b_Not_OK_To_RaceFA_Out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_Not_OK_To_Race' */
    /* Chart: '<S72>/PokeBRKR_e_Not_OK_To_RaceChrt' incorporates:
     *  SignalConversion generated from: '<S72>/LeBRKR_e_Not_OK_To_RaceFA'
     *  SignalConversion generated from: '<S72>/LeBRKR_e_Not_OK_To_Race'
     */
    /* Gateway: PokeBRKR_e_Not_OK_To_Race/PokeBRKR_e_Not_OK_To_RaceChrt */
    /* During: PokeBRKR_e_Not_OK_To_Race/PokeBRKR_e_Not_OK_To_RaceChrt */
    /* Entry Internal: PokeBRKR_e_Not_OK_To_Race/PokeBRKR_e_Not_OK_To_RaceChrt */
    /* Transition: '<S331>:9' */
    if (!LeBRKR_b_Not_OK_To_RaceFA)
    {
        /* Transition: '<S331>:2' */
        /* Transition: '<S331>:3' */
        BRKR_ac_B.LeBRKR_e_Not_OK_To_Race_Out = LeBRKR_e_Not_OK_To_Race;
        rtb_LeBRKR_b_Not_OK_To_RaceFA_Out = false;

        /* Transition: '<S331>:4' */
    }
    else
    {
        /* Transition: '<S331>:8' */
        rtb_LeBRKR_b_Not_OK_To_RaceFA_Out = true;
    }

    /* End of Chart: '<S72>/PokeBRKR_e_Not_OK_To_RaceChrt' */

    /* Outport: '<Root>/VeBRKR_b_Not_OK_To_RaceFA' incorporates:
     *  SignalConversion generated from: '<S72>/VeBRKR_b_Not_OK_To_RaceFA'
     */
    (void)Rte_Write_VeBRKR_b_Not_OK_To_RaceFA_Value
        (rtb_LeBRKR_b_Not_OK_To_RaceFA_Out);

    /* Outport: '<Root>/VeBRKR_e_Not_OK_To_Race' incorporates:
     *  SignalConversion generated from: '<S72>/VeBRKR_e_Not_OK_To_Race'
     */
    (void)Rte_Write_VeBRKR_e_Not_OK_To_Race_Value
        (BRKR_ac_B.LeBRKR_e_Not_OK_To_Race_Out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_Not_OK_To_Race' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_OPDHoldStatus(VAR(TeBRKR_e_OPDHoldStatus,
    AUTOMATIC) LeBRKR_e_OPDHoldStatus, VAR(boolean, AUTOMATIC)
    LeBRKR_b_OPDHoldStatusFA)
{
    boolean rtb_LeBRKR_b_OPDHoldStatusFA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_OPDHoldStatus' */
    /* Chart: '<S73>/PokeBRKR_e_OPDHoldStatusChrt' incorporates:
     *  SignalConversion generated from: '<S73>/LeBRKR_b_OPDHoldStatusFA'
     */
    /* Gateway: PokeBRKR_e_OPDHoldStatus/PokeBRKR_e_OPDHoldStatusChrt */
    /* During: PokeBRKR_e_OPDHoldStatus/PokeBRKR_e_OPDHoldStatusChrt */
    /* Entry Internal: PokeBRKR_e_OPDHoldStatus/PokeBRKR_e_OPDHoldStatusChrt */
    /* Transition: '<S332>:2' */
    if (!LeBRKR_b_OPDHoldStatusFA)
    {
        /* SignalConversion generated from: '<S73>/VeBRKR_e_OPDHoldStatus' incorporates:
         *  Outport: '<Root>/VeBRKR_e_OPDHoldStatus'
         *  SignalConversion generated from: '<S73>/LeBRKR_e_OPDHoldStatus'
         */
        /* Transition: '<S332>:3' */
        /* Transition: '<S332>:15' */
        (void)Rte_Write_VeBRKR_e_OPDHoldStatus_Value(LeBRKR_e_OPDHoldStatus);
        rtb_LeBRKR_b_OPDHoldStatusFA_out_k = false;

        /* Transition: '<S332>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S73>/VeBRKR_e_OPDHoldStatus' incorporates:
         *  Outport: '<Root>/VeBRKR_e_OPDHoldStatus'
         */
        /* Transition: '<S332>:4' */
        (void)Rte_Write_VeBRKR_e_OPDHoldStatus_Value(KeBRKR_e_OPDHoldStatusDef);
        rtb_LeBRKR_b_OPDHoldStatusFA_out_k = true;
    }

    /* End of Chart: '<S73>/PokeBRKR_e_OPDHoldStatusChrt' */

    /* Outport: '<Root>/VeBRKR_b_OPDHoldStatusFA' incorporates:
     *  SignalConversion generated from: '<S73>/VeBRKR_b_OPDHoldStatusFA'
     */
    (void)Rte_Write_VeBRKR_b_OPDHoldStatusFA_Value
        (rtb_LeBRKR_b_OPDHoldStatusFA_out_k);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_OPDHoldStatus' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_ReqSSC_IdlDst(VAR(TeBRKR_e_BrkPdl_Stat,
    AUTOMATIC) LeBRKR_b_ReqSSC_IdlDst, VAR(boolean, AUTOMATIC)
    LeBRKR_b_ReqSSC_IdlDstFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_ReqSSC_IdlDst' */
    /* Chart: '<S74>/PokeBRKR_e_ReqSSC_IdlDstChrt' incorporates:
     *  Constant: '<S333>/Calib'
     *  SignalConversion generated from: '<S74>/LeBRKR_b_ReqSSC_IdlDstFA'
     *  SignalConversion generated from: '<S74>/LeBRKR_b_ReqSSC_IdlDst'
     */
    /* Gateway: PokeBRKR_e_ReqSSC_IdlDst/PokeBRKR_e_ReqSSC_IdlDstChrt */
    /* During: PokeBRKR_e_ReqSSC_IdlDst/PokeBRKR_e_ReqSSC_IdlDstChrt */
    /* Entry Internal: PokeBRKR_e_ReqSSC_IdlDst/PokeBRKR_e_ReqSSC_IdlDstChrt */
    /* Transition: '<S334>:2' */
    if (!LeBRKR_b_ReqSSC_IdlDstFA)
    {
        /* Transition: '<S334>:3' */
        /* Transition: '<S334>:15' */
        BRKR_ac_B.LeBRKR_b_ReqSSC_IdlDst_out = KaBRKR_b_SSC_Status_Map
            [(LeBRKR_b_ReqSSC_IdlDst)];

        /* Transition: '<S334>:18' */
    }
    else
    {
        /* Transition: '<S334>:4' */
    }

    /* End of Chart: '<S74>/PokeBRKR_e_ReqSSC_IdlDstChrt' */

    /* Outport: '<Root>/VeBRKR_b_ReqSSC_IdlDst' incorporates:
     *  SignalConversion generated from: '<S74>/VeBRKR_b_ReqSSC_IdlDst'
     */
    (void)Rte_Write_VeBRKR_b_ReqSSC_IdlDst_Value
        (BRKR_ac_B.LeBRKR_b_ReqSSC_IdlDst_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_ReqSSC_IdlDst' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_ShiftInhibit(VAR(TeBRKR_e_ShiftInhibit,
    AUTOMATIC) LeBRKR_e_ShiftInhibit_Raw)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_ShiftInhibit' */
    /* Outport: '<Root>/VeBRKR_e_ShiftInhibit' incorporates:
     *  Chart: '<S75>/PokeBRKR_e_ShiftInhibitChrt'
     *  Constant: '<S335>/Calib'
     *  SignalConversion generated from: '<S75>/VeBRKR_e_ShiftInhibit'
     *  SignalConversion generated from: '<S75>/LeBRKR_e_ShiftInhibit_Raw'
     */
    /* Gateway: PokeBRKR_e_ShiftInhibit/PokeBRKR_e_ShiftInhibitChrt */
    /* During: PokeBRKR_e_ShiftInhibit/PokeBRKR_e_ShiftInhibitChrt */
    /* Entry Internal: PokeBRKR_e_ShiftInhibit/PokeBRKR_e_ShiftInhibitChrt */
    /* Transition: '<S336>:31' */
    (void)Rte_Write_VeBRKR_e_ShiftInhibit_Value(KaBRKR_e_ShiftInhibit_Map
        [(LeBRKR_e_ShiftInhibit_Raw)]);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_ShiftInhibit' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_e_WhlSlpSt(VAR(TeBRKR_e_WhlSlpSt, AUTOMATIC)
    LeBRKR_e_WhlSlpSt_Raw)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_e_WhlSlpSt' */
    /* Outport: '<Root>/VeBRKR_e_WhlSlpSt' incorporates:
     *  Chart: '<S76>/PokeBRKR_e_WhlSlpStChrt'
     *  Constant: '<S337>/Calib'
     *  SignalConversion generated from: '<S76>/VeBRKR_e_WhlSlpSt'
     *  SignalConversion generated from: '<S76>/LeBRKR_e_WhlSlpSt_Raw'
     */
    /* Gateway: PokeBRKR_e_WhlSlpSt/PokeBRKR_e_WhlSlpStChrt */
    /* During: PokeBRKR_e_WhlSlpSt/PokeBRKR_e_WhlSlpStChrt */
    /* Entry Internal: PokeBRKR_e_WhlSlpSt/PokeBRKR_e_WhlSlpStChrt */
    /* Transition: '<S338>:31' */
    (void)Rte_Write_VeBRKR_e_WhlSlpSt_Value(KaBRKR_e_WhlSlpSt_Map
        [(LeBRKR_e_WhlSlpSt_Raw)]);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_e_WhlSlpSt' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_l_BrkPedalTravel(VAR(float32, AUTOMATIC)
    LeBRKR_l_BrkPedalTravel, VAR(boolean, AUTOMATIC) LeBRKR_b_BrkPedalTravelFA)
{
    boolean rtb_LeBRKR_b_BrkPedalTravelFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_l_BrkPedalTravel' */
    /* Chart: '<S77>/PokeBRKR_l_BrkPedalTravelChrt' incorporates:
     *  SignalConversion generated from: '<S77>/LeBRKR_b_BrkPedalTravelFA'
     *  SignalConversion generated from: '<S77>/LeBRKR_l_BrkPedalTravel'
     */
    /* Gateway: PokeBRKR_l_BrkPedalTravel/PokeBRKR_l_BrkPedalTravelChrt */
    /* During: PokeBRKR_l_BrkPedalTravel/PokeBRKR_l_BrkPedalTravelChrt */
    /* Entry Internal: PokeBRKR_l_BrkPedalTravel/PokeBRKR_l_BrkPedalTravelChrt */
    /* Transition: '<S339>:2' */
    if (!LeBRKR_b_BrkPedalTravelFA)
    {
        /* Transition: '<S339>:3' */
        /* Transition: '<S339>:15' */
        BRKR_ac_B.LeBRKR_l_BrkPedalTravel_out = LeBRKR_l_BrkPedalTravel;
        rtb_LeBRKR_b_BrkPedalTravelFA_out = false;

        /* Transition: '<S339>:18' */
    }
    else
    {
        /* Transition: '<S339>:4' */
        rtb_LeBRKR_b_BrkPedalTravelFA_out = true;
    }

    /* End of Chart: '<S77>/PokeBRKR_l_BrkPedalTravelChrt' */

    /* Outport: '<Root>/VeBRKR_b_BrkPedalTravelFA' incorporates:
     *  SignalConversion generated from: '<S77>/VeBRKR_b_BrkPedalTravelFA'
     */
    (void)Rte_Write_VeBRKR_b_BrkPedalTravelFA_Value
        (rtb_LeBRKR_b_BrkPedalTravelFA_out);

    /* Outport: '<Root>/VeBRKR_l_BrkPedalTravel' incorporates:
     *  SignalConversion generated from: '<S77>/VeBRKR_l_BrkPedalTravel'
     */
    (void)Rte_Write_VeBRKR_l_BrkPedalTravel_Value
        (BRKR_ac_B.LeBRKR_l_BrkPedalTravel_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_l_BrkPedalTravel' */
}

/* Output function */
FUNC(void, BRKR_CODE) PokeBRKR_pbar_BrakePedalPressure(VAR(float32, AUTOMATIC)
    LeBRKR_pbar_BrakePedalPressure, VAR(boolean, AUTOMATIC)
    LeBRKR_b_BrakePedalPressureFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBRKR_pbar_BrakePedalPressure' */
    /* Chart: '<S78>/PokeBRKR_pbar_BrakePedalPressureChrt' incorporates:
     *  SignalConversion generated from: '<S78>/LeBRKR_b_BrakePedalPressureFA'
     *  SignalConversion generated from: '<S78>/LeBRKR_pbar_BrakePedalPressure'
     */
    /* Gateway: PokeBRKR_pbar_BrakePedalPressure/PokeBRKR_pbar_BrakePedalPressureChrt */
    /* During: PokeBRKR_pbar_BrakePedalPressure/PokeBRKR_pbar_BrakePedalPressureChrt */
    /* Entry Internal: PokeBRKR_pbar_BrakePedalPressure/PokeBRKR_pbar_BrakePedalPressureChrt */
    /* Transition: '<S340>:2' */
    if (!LeBRKR_b_BrakePedalPressureFA)
    {
        /* Transition: '<S340>:3' */
        /* Transition: '<S340>:15' */
        BRKR_ac_B.LeBRKR_pbar_BrakePedalPressure_out =
            LeBRKR_pbar_BrakePedalPressure;

        /* Transition: '<S340>:18' */
    }
    else
    {
        /* Transition: '<S340>:4' */
    }

    /* End of Chart: '<S78>/PokeBRKR_pbar_BrakePedalPressureChrt' */

    /* Outport: '<Root>/VeBRKR_pbar_BrakePedalPressure' incorporates:
     *  SignalConversion generated from: '<S78>/VeBRKR_pbar_BrakePedalPressure'
     */
    (void)Rte_Write_VeBRKR_pbar_BrakePedalPressure_Value
        (BRKR_ac_B.LeBRKR_pbar_BrakePedalPressure_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBRKR_pbar_BrakePedalPressure' */
}

/* Output function */
FUNC(void, BRKR_CODE) BRKR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BRKR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Init_BRKI'
     */
    /* SignalConversion generated from: '<S230>/ImpndSkid_Init' */
    BRKR_ac_B.OutportBufferForImpndSkid_Init = false;

    /* SignalConversion generated from: '<S230>/ShiftInhibit_Init' incorporates:
     *  Constant: '<S233>/Constant'
     */
    BRKR_ac_B.OutportBufferForShiftInhibit_Init = BRKR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S230>/WhlSlpSt_Init' incorporates:
     *  Constant: '<S234>/Constant'
     */
    BRKR_ac_B.OutportBufferForWhlSlpSt_Init = BRKR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S230>/BrkPedalTravel_Init' */
    BRKR_ac_B.OutportBufferForBrkPedalTravel_Init = 0.0F;

    /* SignalConversion generated from: '<S230>/BrkPedalTravelFA_Init' */
    BRKR_ac_B.OutportBufferForBrkPedalTravelFA_Init = false;

    /* SignalConversion generated from: '<S230>/BrkPedalStat2_Init' incorporates:
     *  Constant: '<S235>/Constant'
     */
    BRKR_ac_B.OutportBufferForBrkPedalStat2_Init = BRKR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S230>/BrkPedalStat2FA_Init' */
    BRKR_ac_B.OutportBufferForBrkPedalStat2FA_Init = false;

    /* SignalConversion generated from: '<S230>/BrkPedalSts_Init' incorporates:
     *  Constant: '<S237>/Constant'
     */
    BRKR_ac_B.OutportBufferForBrkPedalSts_Init = BRKR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S230>/BrkPedalStsFA_Init' */
    BRKR_ac_B.OutportBufferForBrkPedalStsFA_Init = false;

    /* SignalConversion generated from: '<S230>/BrkPedalDscrtInpt_Init' incorporates:
     *  Constant: '<S236>/Constant'
     */
    BRKR_ac_B.OutportBufferForBrkPedalDscrtInpt_Init =
        BRKR_ac_ConstB.Constant_hr;

    /* SignalConversion generated from: '<S230>/BrkPedalDscrtInptFA_Init' */
    BRKR_ac_B.OutportBufferForBrkPedalDscrtInptFA_Init = false;

    /* SignalConversion generated from: '<S230>/ABSActive' */
    BRKR_ac_B.OutportBufferForABSActive = false;

    /* SignalConversion generated from: '<S230>/ABSActiveFA' */
    BRKR_ac_B.OutportBufferForABSActiveFA = false;

    /* SignalConversion generated from: '<S230>/BrkPrss_Init' */
    BRKR_ac_B.OutportBufferForBrkPrss_Init = 0.0F;

    /* SignalConversion generated from: '<S230>/BrkPrssFA_Init' */
    BRKR_ac_B.OutportBufferForBrkPrssFA_Init = false;

    /* SignalConversion generated from: '<S230>/AHH_Ready_Status_init' incorporates:
     *  Constant: '<S246>/KeBRKR_e_AHH_Ready_Status_Init'
     */
    BRKR_ac_B.OutportBufferForAHH_Ready_Status_init =
        KeBRKR_e_AHH_Ready_Status_Init;

    /* SignalConversion generated from: '<S230>/AHH_Ready_StatusFA_init' incorporates:
     *  Constant: '<S241>/KeBRKR_b_AHH_Ready_StatusFA_Init'
     */
    BRKR_ac_B.OutportBufferForAHH_Ready_StatusFA_init =
        KeBRKR_b_AHH_Ready_StatusFA_Init;

    /* SignalConversion generated from: '<S230>/AeCoastReady_Init' */
    BRKR_ac_B.OutportBufferForAeCoastReady_Init = false;

    /* SignalConversion generated from: '<S230>/AeCoastReadyFA_Init' */
    BRKR_ac_B.OutportBufferForAeCoastReadyFA_Init = false;

    /* SignalConversion generated from: '<S230>/AeCoastSwitchStatInit' incorporates:
     *  Constant: '<S250>/KeBRKR_e_AeCoastSwitchStatInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchStatInit =
        KeBRKR_e_AeCoastSwitchStatInit;

    /* SignalConversion generated from: '<S230>/AeCoastSwitchStatFAInit' incorporates:
     *  Constant: '<S245>/KeBRKR_b_AeCoastSwitchStatFAInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchStatFAInit =
        KeBRKR_b_AeCoastSwitchStatFAInit;

    /* SignalConversion generated from: '<S230>/AeCoastSwitchC1StatInit' incorporates:
     *  Constant: '<S247>/KeBRKR_e_AeCoastSwitchC1StatInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchC1StatInit =
        KeBRKR_e_AeCoastSwitchC1StatInit;

    /* SignalConversion generated from: '<S230>/AeCoastSwitchC1StatFAInit' incorporates:
     *  Constant: '<S242>/KeBRKR_b_AeCoastSwitchC1StatFAInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchC1StatFAIni =
        KeBRKR_b_AeCoastSwitchC1StatFAInit;

    /* SignalConversion generated from: '<S230>/AeCoastSwitchC2StatInit' incorporates:
     *  Constant: '<S248>/KeBRKR_e_AeCoastSwitchC2StatInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchC2StatInit =
        KeBRKR_e_AeCoastSwitchC2StatInit;

    /* SignalConversion generated from: '<S230>/AeCoastSwitchC2StatFAInit' incorporates:
     *  Constant: '<S243>/KeBRKR_b_AeCoastSwitchC2StatFAInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchC2StatFAIni =
        KeBRKR_b_AeCoastSwitchC2StatFAInit;

    /* SignalConversion generated from: '<S230>/EmsMlfAtvInit' */
    BRKR_ac_B.OutportBufferForEmsMlfAtvInit = false;

    /* SignalConversion generated from: '<S230>/EmsMlfAtvFAInit' */
    BRKR_ac_B.OutportBufferForEmsMlfAtvFAInit = false;

    /* SignalConversion generated from: '<S230>/MSR_Active_Init' */
    BRKR_ac_B.OutportBufferForMSR_Active_Init = false;

    /* SignalConversion generated from: '<S230>/MSR_ActiveFA_Init' */
    BRKR_ac_B.OutportBufferForMSR_ActiveFA_Init = false;

    /* SignalConversion generated from: '<S230>/ASR_Active_Init' */
    BRKR_ac_B.OutportBufferForASR_Active_Init = false;

    /* SignalConversion generated from: '<S230>/ASR_ActiveFA_Init' */
    BRKR_ac_B.OutportBufferForASR_ActiveFA_Init = false;

    /* SignalConversion generated from: '<S230>/BrakeAna_NO_Init' */
    BRKR_ac_B.OutportBufferForBrakeAna_NO_Init = 0.0F;

    /* SignalConversion generated from: '<S230>/Brake_NO_FA_Init' */
    BRKR_ac_B.OutportBufferForBrake_NO_FA_Init = false;

    /* SignalConversion generated from: '<S230>/BrkTravelSts_Init' */
    BRKR_ac_B.OutportBufferForBrkTravelSts_Init = 0.0F;

    /* SignalConversion generated from: '<S230>/BrkTravelSts_FA_Init' */
    BRKR_ac_B.OutportBufferForBrkTravelSts_FA_Init = false;

    /* SignalConversion generated from: '<S230>/BSMComFailInit_C1CAN' incorporates:
     *  Constant: '<S251>/KeBRKR_e_BSMComFailInit_C1CAN'
     */
    BRKR_ac_B.OutportBufferForBSMComFailInit_C1CAN =
        KeBRKR_e_BSMComFailInit_C1CAN;

    /* SignalConversion generated from: '<S230>/BSMComFailInit_C1CANFA' */
    BRKR_ac_B.OutportBufferForBSMComFailInit_C1CANFA = false;

    /* SignalConversion generated from: '<S230>/BSMComFailInit_C2CAN' incorporates:
     *  Constant: '<S252>/KeBRKR_e_BSMComFailInit_C2CAN'
     */
    BRKR_ac_B.OutportBufferForBSMComFailInit_C2CAN =
        KeBRKR_e_BSMComFailInit_C2CAN;

    /* SignalConversion generated from: '<S230>/BSMComFailInit_C2CANFA' */
    BRKR_ac_B.OutportBufferForBSMComFailInit_C2CANFA = false;

    /* SignalConversion generated from: '<S230>/ESCActive' */
    BRKR_ac_B.OutportBufferForESCActive = false;

    /* SignalConversion generated from: '<S230>/ESCActiveFA' */
    BRKR_ac_B.OutportBufferForESCActiveFA = false;

    /* SignalConversion generated from: '<S230>/ABSFailSts' */
    BRKR_ac_B.OutportBufferForABSFailSts = false;

    /* SignalConversion generated from: '<S230>/ESCFailSts' */
    BRKR_ac_B.OutportBufferForESCFailSts = false;

    /* SignalConversion generated from: '<S230>/ESCFailStsFA' */
    BRKR_ac_B.OutportBufferForESCFailStsFA = false;

    /* SignalConversion generated from: '<S230>/HillHoldActive' */
    BRKR_ac_B.OutportBufferForHillHoldActive = false;

    /* SignalConversion generated from: '<S230>/HillHoldActiveFA' */
    BRKR_ac_B.OutportBufferForHillHoldActiveFA = false;

    /* SignalConversion generated from: '<S230>/HillHoldFailSts' */
    BRKR_ac_B.OutportBufferForHillHoldFailSts = false;

    /* SignalConversion generated from: '<S230>/HillHoldFailStsFA' */
    BRKR_ac_B.OutportBufferForHillHoldFailStsFA = false;

    /* SignalConversion generated from: '<S230>/AeCoastSwitchInit' incorporates:
     *  Constant: '<S249>/KeBRKR_e_AeCoastSwitchInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchInit = KeBRKR_e_AeCoastSwitchInit;

    /* SignalConversion generated from: '<S230>/AeCoastSwitchFAInit' incorporates:
     *  Constant: '<S244>/KeBRKR_b_AeCoastSwitchFAInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchFAInit = KeBRKR_b_AeCoastSwitchFAInit;

    /* SignalConversion generated from: '<S230>/OPD_Hold_Status_Init' incorporates:
     *  Constant: '<S253>/KeBRKR_e_OPDHoldStatus_Init'
     */
    BRKR_ac_B.OutportBufferForOPD_Hold_Status_Init = KeBRKR_e_OPDHoldStatus_Init;

    /* SignalConversion generated from: '<S230>/OPD_Hold_Status_FA_Init' */
    BRKR_ac_B.OutportBufferForOPD_Hold_Status_FA_Init = false;

    /* SignalConversion generated from: '<S230>/CMMIntervention_Init' */
    BRKR_ac_B.OutportBufferForCMMIntervention_Init = false;

    /* SignalConversion generated from: '<S230>/FunctionSts_Init' */
    BRKR_ac_B.OutportBufferForFunctionSts_Init = false;

    /* SignalConversion generated from: '<S230>/BrkMaxTrqIntrvntn' */
    BRKR_ac_B.OutportBufferForBrkMaxTrqIntrvntn = false;

    /* SignalConversion generated from: '<S230>/BrkMinTrqIntrvntn' */
    BRKR_ac_B.OutportBufferForBrkMinTrqIntrvntn = false;

    /* SignalConversion generated from: '<S230>/BrkMaxTrqIntrvntnFA' */
    BRKR_ac_B.OutportBufferForBrkMaxTrqIntrvntnFA = false;

    /* SignalConversion generated from: '<S230>/BrkMinTrqIntrvntnFA' */
    BRKR_ac_B.OutportBufferForBrkMinTrqIntrvntnFA = false;

    /* SignalConversion generated from: '<S230>/ReqSSC_IdlDst' */
    BRKR_ac_B.OutportBufferForReqSSC_IdlDst = false;

    /* SignalConversion generated from: '<S230>/ExtBrkReqOffInit' incorporates:
     *  Constant: '<S238>/Constant'
     */
    BRKR_ac_B.OutportBufferForExtBrkReqOffInit = BRKR_ac_ConstB.Constant_jh;

    /* SignalConversion generated from: '<S230>/ExtBrkReqOffFAInit' */
    BRKR_ac_B.OutportBufferForExtBrkReqOffFAInit = false;

    /* SignalConversion generated from: '<S230>/ExtTCSReqOffInit' incorporates:
     *  Constant: '<S239>/Constant'
     */
    BRKR_ac_B.OutportBufferForExtTCSReqOffInit = BRKR_ac_ConstB.Constant_g1;

    /* SignalConversion generated from: '<S230>/BrkPdlFltInit' */
    BRKR_ac_B.OutportBufferForBrkPdlFltInit = false;

    /* SignalConversion generated from: '<S230>/BrkPdlFltInitFA' */
    BRKR_ac_B.OutportBufferForBrkPdlFltInitFA = false;

    /* SignalConversion generated from: '<S230>/BrkPedalStat2_C2CANSR_Init' */
    BRKR_ac_B.OutportBufferForBrkPedalStat2_C2CANSR_In = false;

    /* SignalConversion generated from: '<S230>/Brake_NO_SR_Init' */
    BRKR_ac_B.OutportBufferForBrake_NO_SR_Init = false;

    /* SignalConversion generated from: '<S230>/BrkTravelSts_C2CANSR_Init' */
    BRKR_ac_B.OutportBufferForBrkTravelSts_C2CANSR_Ini = false;

    /* SignalConversion generated from: '<S230>/BrkPedalStat2_C2CAN_Init' incorporates:
     *  Constant: '<S240>/Constant'
     */
    BRKR_ac_B.OutportBufferForBrkPedalStat2_C2CAN_Init =
        BRKR_ac_ConstB.Constant_bx;

    /* SignalConversion generated from: '<S230>/BrkPedalStat2_C2CANFA_Init' */
    BRKR_ac_B.OutportBufferForBrkPedalStat2_C2CANFA_In = false;

    /* SignalConversion generated from: '<S230>/BrkTravelSts_C2CAN_Init' */
    BRKR_ac_B.OutportBufferForBrkTravelSts_C2CAN_Init = 0.0F;

    /* SignalConversion generated from: '<S230>/BrkTravelSts_C2CANFA_Init' */
    BRKR_ac_B.OutportBufferForBrkTravelSts_C2CANFA_Ini = false;

    /* SignalConversion generated from: '<S230>/VeBRKR_pbar_BrakePedalPressure_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_pbar_BrakePedalPr = 0.0F;

    /* SignalConversion generated from: '<S230>/ESCIntervention_Init' */
    BRKR_ac_B.OutportBufferForESCIntervention_Init = false;

    /* SignalConversion generated from: '<S230>/VehicleStandStillSts_Init' */
    BRKR_ac_B.OutportBufferForVehicleStandStillSts_Ini = false;

    /* SignalConversion generated from: '<S230>/VehicleStandStillStsFA_Init' */
    BRKR_ac_B.OutportBufferForVehicleStandStillStsFA_I = false;

    /* SignalConversion generated from: '<S230>/Not_OK_To_Race_Init' incorporates:
     *  Constant: '<S232>/Constant'
     */
    BRKR_ac_B.OutportBufferForNot_OK_To_Race_Init = BRKR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S230>/Not_OK_To_RaceFA_Init' */
    BRKR_ac_B.OutportBufferForNot_OK_To_RaceFA_Init = false;

    /* SignalConversion generated from: '<S230>/BrkTempSts_Init' */
    BRKR_ac_B.OutportBufferForBrkTempSts_Init = false;

    /* SignalConversion generated from: '<S230>/BrkTempStsFA_Init' */
    BRKR_ac_B.OutportBufferForBrkTempStsFA_Init = false;

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S231>/VeBRKR_e_BrkPedalStat2_Out_Init' incorporates:
     *  Constant: '<S231>/Const1'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_BrkPedalStat2_O = BRKR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_BrkPedalStat2FA_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_BrkPedalStat2FA = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_e_BrkPedalDscrtInpt_Out_Init' incorporates:
     *  Constant: '<S231>/Const3'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_BrkPedalDscrtIn = BRKR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_BrkPedalDscrtInptFA_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_BrkPedalDscrtIn = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_ImpndSkid_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_ImpndSkid_Out_I = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_e_AeCoastSwitchStat_Out_Init' incorporates:
     *  Constant: '<S231>/Const6'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_AeCoastSwitchSt = BRKR_ac_ConstB.Const6;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_AeCoastSwitchStatFA_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastSwitchSt = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_AeCoastReady_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastReady_Ou = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_AeCoastReadyFA_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastReadyFA_ = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_AeCoastSwitchStatC1FA_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastSwitch_k = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_AeCoastSwitchStatC2FA_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastSwitch_e = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_EmsMlfAtv_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_EmsMlfAtv_Out_I = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_EmsMlfAtvFA_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_EmsMlfAtvFA_Out = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_AeCoastBtnCircuitLow_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnCircu = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_AeCoastBtnCircuitHi_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnCir_e = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_e_AeCoastSwitchStatC1_Out_Init' incorporates:
     *  Constant: '<S231>/Const16'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_AeCoastSwitch_i = BRKR_ac_ConstB.Const16;

    /* SignalConversion generated from: '<S231>/VeBRKR_e_AeCoastSwitchStatC2_Out_Init' incorporates:
     *  Constant: '<S231>/Const17'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_AeCoastSwitc_i4 = BRKR_ac_ConstB.Const17;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_AeCoastBtnDiagFail_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnDiagF = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_HillHoldActive_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_HillHoldActive_ = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_HillHoldFailSts_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_HillHoldFailSts = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_e_AeCoastSwitch_Out_Init' incorporates:
     *  Constant: '<S231>/Const21'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_AeCoastSwitch_O = BRKR_ac_ConstB.Const21;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_AeCoastSwitchFA_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastSwitchFA = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_e_BrakeSrc_Out_Init' incorporates:
     *  Constant: '<S231>/Const23'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_BrakeSrc_Out_In = BRKR_ac_ConstB.Const23;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_ShortToGround_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_ShortToGround_O = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_ShortToPower_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_ShortToPower_Ou = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_ShortToOpen_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_ShortToOpen_Out = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_AeCoastBtnCircuitLowC1_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnCir_n = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_AeCoastBtnCircuitLowC2_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnCi_ec = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_AeCoastBtnCircuitHiC1_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnCi_nu = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_AeCoastBtnCircuitHiC2_Out_Init' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnCir_a = false;

    /* SignalConversion generated from: '<S231>/VeBRKR_e_FaultSts_RgnCntrlSwCktHi' incorporates:
     *  Constant: '<S256>/Constant'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_FaultSts_RgnCnt = BRKR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S231>/VeBRKR_e_FaultSts_RgnCntrlSwCktLo' incorporates:
     *  Constant: '<S254>/Constant'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_FaultSts_RgnC_l =
        BRKR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S231>/VeBRKR_e_FaultSts_RgnCntrlSwCkt' incorporates:
     *  Constant: '<S255>/Constant'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_FaultSts_RgnC_j =
        BRKR_ac_ConstB.Constant_bd;

    /* SignalConversion generated from: '<S231>/VeBRKR_Pct_OneBrkBoxPdlPosn_OutInit' */
    BRKR_ac_B.OutportBufferForVeBRKR_Pct_OneBrkBoxPdlP = 0.0F;

    /* SignalConversion generated from: '<S231>/VeBRKR_b_OneBrkBoxPdlPosnFA_OutInit' */
    BRKR_ac_B.OutportBufferForVeBRKR_b_OneBrkBoxPdlPos = false;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeBRKR_b_ABSActive' incorporates:
     *  SignalConversion generated from: '<S2>/ABSActive'
     */
    (void)Rte_Write_VeBRKR_b_ABSActive_Value(BRKR_ac_B.OutportBufferForABSActive);

    /* Outport: '<Root>/VeBRKR_b_ABSActiveFA' incorporates:
     *  SignalConversion generated from: '<S2>/ABSActiveFA'
     */
    (void)Rte_Write_VeBRKR_b_ABSActiveFA_Value
        (BRKR_ac_B.OutportBufferForABSActiveFA);

    /* Outport: '<Root>/VeBRKR_b_ABSFailSts' incorporates:
     *  SignalConversion generated from: '<S2>/ABSFailSts'
     */
    (void)Rte_Write_VeBRKR_b_ABSFailSts_Value
        (BRKR_ac_B.OutportBufferForABSFailSts);

    /* Outport: '<Root>/VeBRKR_b_AHH_Ready_StatusFA' incorporates:
     *  SignalConversion generated from: '<S2>/AHH_Ready_StatusFA_init'
     */
    (void)Rte_Write_VeBRKR_b_AHH_Ready_StatusFA_Value
        (BRKR_ac_B.OutportBufferForAHH_Ready_StatusFA_init);

    /* Outport: '<Root>/VeBRKR_e_AHH_Ready_Status' incorporates:
     *  SignalConversion generated from: '<S230>/AHH_Ready_Status_init'
     *  SignalConversion generated from: '<S2>/AHH_Ready_Status_init'
     */
    (void)Rte_Write_VeBRKR_e_AHH_Ready_Status_Value
        (BRKR_ac_B.OutportBufferForAHH_Ready_Status_init);

    /* Outport: '<Root>/VeBRKR_b_ASRActive_FA' incorporates:
     *  SignalConversion generated from: '<S2>/ASR_ActiveFA_Init'
     */
    (void)Rte_Write_VeBRKR_b_ASRActive_FA_Value
        (BRKR_ac_B.OutportBufferForASR_ActiveFA_Init);

    /* Outport: '<Root>/VeBRKR_b_ASRActive' incorporates:
     *  SignalConversion generated from: '<S2>/ASR_Active_Init'
     */
    (void)Rte_Write_VeBRKR_b_ASRActive_Value
        (BRKR_ac_B.OutportBufferForASR_Active_Init);

    /* Outport: '<Root>/VeBRKR_e_ComFailBSM_C1CAN' incorporates:
     *  SignalConversion generated from: '<S230>/BSMComFailInit_C1CAN'
     *  SignalConversion generated from: '<S2>/BSMComFailInit_C1CAN'
     */
    (void)Rte_Write_VeBRKR_e_ComFailBSM_C1CAN_Value
        (BRKR_ac_B.OutportBufferForBSMComFailInit_C1CAN);

    /* Outport: '<Root>/VeBRKR_b_ComFailBSM_C1CANFA' incorporates:
     *  SignalConversion generated from: '<S2>/BSMComFailInit_C1CANFA'
     */
    (void)Rte_Write_VeBRKR_b_ComFailBSM_C1CANFA_Value
        (BRKR_ac_B.OutportBufferForBSMComFailInit_C1CANFA);

    /* Outport: '<Root>/VeBRKR_e_ComFailBSM_C2CAN' incorporates:
     *  SignalConversion generated from: '<S230>/BSMComFailInit_C2CAN'
     *  SignalConversion generated from: '<S2>/BSMComFailInit_C2CAN'
     */
    (void)Rte_Write_VeBRKR_e_ComFailBSM_C2CAN_Value
        (BRKR_ac_B.OutportBufferForBSMComFailInit_C2CAN);

    /* Outport: '<Root>/VeBRKR_b_ComFailBSM_C2CANFA' incorporates:
     *  SignalConversion generated from: '<S2>/BSMComFailInit_C2CANFA'
     */
    (void)Rte_Write_VeBRKR_b_ComFailBSM_C2CANFA_Value
        (BRKR_ac_B.OutportBufferForBSMComFailInit_C2CANFA);

    /* Outport: '<Root>/VeBRKR_b_BrkMaxTrqIntrvntn' incorporates:
     *  SignalConversion generated from: '<S2>/BrkMaxTrqIntrvntn'
     */
    (void)Rte_Write_VeBRKR_b_BrkMaxTrqIntrvntn_Value
        (BRKR_ac_B.OutportBufferForBrkMaxTrqIntrvntn);

    /* Outport: '<Root>/VeBRKR_b_BrkMaxTrqIntrvntnFA' incorporates:
     *  SignalConversion generated from: '<S2>/BrkMaxTrqIntrvntnFA'
     */
    (void)Rte_Write_VeBRKR_b_BrkMaxTrqIntrvntnFA_Value
        (BRKR_ac_B.OutportBufferForBrkMaxTrqIntrvntnFA);

    /* Outport: '<Root>/VeBRKR_b_BrkMinTrqIntrvntn' incorporates:
     *  SignalConversion generated from: '<S2>/BrkMinTrqIntrvntn'
     */
    (void)Rte_Write_VeBRKR_b_BrkMinTrqIntrvntn_Value
        (BRKR_ac_B.OutportBufferForBrkMinTrqIntrvntn);

    /* Outport: '<Root>/VeBRKR_b_BrkMinTrqIntrvntnFA' incorporates:
     *  SignalConversion generated from: '<S2>/BrkMinTrqIntrvntnFA'
     */
    (void)Rte_Write_VeBRKR_b_BrkMinTrqIntrvntnFA_Value
        (BRKR_ac_B.OutportBufferForBrkMinTrqIntrvntnFA);

    /* Outport: '<Root>/VeBRKR_b_BrkPdlFlt' incorporates:
     *  SignalConversion generated from: '<S2>/BrkPdlFltInit'
     */
    (void)Rte_Write_VeBRKR_b_BrkPdlFlt_Value
        (BRKR_ac_B.OutportBufferForBrkPdlFltInit);

    /* Outport: '<Root>/VeBRKR_b_BrkPdlFltFA' incorporates:
     *  SignalConversion generated from: '<S2>/BrkPdlFltInitFA'
     */
    (void)Rte_Write_VeBRKR_b_BrkPdlFltFA_Value
        (BRKR_ac_B.OutportBufferForBrkPdlFltInitFA);

    /* Outport: '<Root>/VeBRKR_b_BrkPedalTravelFA' incorporates:
     *  SignalConversion generated from: '<S2>/BrkPedalTravelFA_Init'
     */
    (void)Rte_Write_VeBRKR_b_BrkPedalTravelFA_Value
        (BRKR_ac_B.OutportBufferForBrkPedalTravelFA_Init);

    /* Outport: '<Root>/VeBRKR_l_BrkPedalTravel' incorporates:
     *  SignalConversion generated from: '<S2>/BrkPedalTravel_Init'
     */
    (void)Rte_Write_VeBRKR_l_BrkPedalTravel_Value
        (BRKR_ac_B.OutportBufferForBrkPedalTravel_Init);

    /* Outport: '<Root>/VeBRKR_b_BrkPrssFA' incorporates:
     *  SignalConversion generated from: '<S2>/BrkPrssFA_Init'
     */
    (void)Rte_Write_VeBRKR_b_BrkPrssFA_Value
        (BRKR_ac_B.OutportBufferForBrkPrssFA_Init);

    /* Outport: '<Root>/VeBRKR_P_BrkPrss' incorporates:
     *  SignalConversion generated from: '<S2>/BrkPrss_Init'
     */
    (void)Rte_Write_VeBRKR_P_BrkPrss_Value
        (BRKR_ac_B.OutportBufferForBrkPrss_Init);

    /* Outport: '<Root>/VeBRKR_b_BrkTempStsFA' incorporates:
     *  SignalConversion generated from: '<S2>/BrkTempStsFA_Init'
     */
    (void)Rte_Write_VeBRKR_b_BrkTempStsFA_Value
        (BRKR_ac_B.OutportBufferForBrkTempStsFA_Init);

    /* Outport: '<Root>/VeBRKR_b_BrkTempSts' incorporates:
     *  SignalConversion generated from: '<S2>/BrkTempSts_Init'
     */
    (void)Rte_Write_VeBRKR_b_BrkTempSts_Value
        (BRKR_ac_B.OutportBufferForBrkTempSts_Init);

    /* Outport: '<Root>/VeBRKR_b_BrkTravelStsFA' incorporates:
     *  SignalConversion generated from: '<S2>/BrkTravelSts_FA_Init'
     */
    (void)Rte_Write_VeBRKR_b_BrkTravelStsFA_Value
        (BRKR_ac_B.OutportBufferForBrkTravelSts_FA_Init);

    /* Outport: '<Root>/VeBRKR_Pct_BrkTravelSts' incorporates:
     *  SignalConversion generated from: '<S2>/BrkTravelSts_Init'
     */
    (void)Rte_Write_VeBRKR_Pct_BrkTravelSts_Value
        (BRKR_ac_B.OutportBufferForBrkTravelSts_Init);

    /* Outport: '<Root>/VeBRKR_b_CMMIntervention' incorporates:
     *  SignalConversion generated from: '<S2>/CMMIntervention_Init'
     */
    (void)Rte_Write_VeBRKR_b_CMMIntervention_Value
        (BRKR_ac_B.OutportBufferForCMMIntervention_Init);

    /* Outport: '<Root>/VeBRKR_b_ESCActive' incorporates:
     *  SignalConversion generated from: '<S2>/ESCActive'
     */
    (void)Rte_Write_VeBRKR_b_ESCActive_Value(BRKR_ac_B.OutportBufferForESCActive);

    /* Outport: '<Root>/VeBRKR_b_ESCActiveFA' incorporates:
     *  SignalConversion generated from: '<S2>/ESCActiveFA'
     */
    (void)Rte_Write_VeBRKR_b_ESCActiveFA_Value
        (BRKR_ac_B.OutportBufferForESCActiveFA);

    /* Outport: '<Root>/VeBRKR_b_ESCFailSts' incorporates:
     *  SignalConversion generated from: '<S2>/ESCFailSts'
     */
    (void)Rte_Write_VeBRKR_b_ESCFailSts_Value
        (BRKR_ac_B.OutportBufferForESCFailSts);

    /* Outport: '<Root>/VeBRKR_b_ESCFailStsFA' incorporates:
     *  SignalConversion generated from: '<S2>/ESCFailStsFA'
     */
    (void)Rte_Write_VeBRKR_b_ESCFailStsFA_Value
        (BRKR_ac_B.OutportBufferForESCFailStsFA);

    /* Outport: '<Root>/VeBRKR_b_ESCIntervention' incorporates:
     *  SignalConversion generated from: '<S2>/ESCIntervention_Init'
     */
    (void)Rte_Write_VeBRKR_b_ESCIntervention_Value
        (BRKR_ac_B.OutportBufferForESCIntervention_Init);

    /* Outport: '<Root>/VeBRKR_b_ExtBrkReqOffFA' incorporates:
     *  SignalConversion generated from: '<S2>/ExtBrkReqOffFAInit'
     */
    (void)Rte_Write_VeBRKR_b_ExtBrkReqOffFA_Value
        (BRKR_ac_B.OutportBufferForExtBrkReqOffFAInit);

    /* Outport: '<Root>/VeBRKR_e_ExtBrkReqOff' incorporates:
     *  SignalConversion generated from: '<S230>/ExtBrkReqOffInit'
     *  SignalConversion generated from: '<S2>/ExtBrkReqOffInit'
     */
    (void)Rte_Write_VeBRKR_e_ExtBrkReqOff_Value
        (BRKR_ac_B.OutportBufferForExtBrkReqOffInit);

    /* Outport: '<Root>/VeBRKR_e_ExtTcsReqOff' incorporates:
     *  SignalConversion generated from: '<S230>/ExtTCSReqOffInit'
     *  SignalConversion generated from: '<S2>/ExtTCSReqOffInit'
     */
    (void)Rte_Write_VeBRKR_e_ExtTcsReqOff_Value
        (BRKR_ac_B.OutportBufferForExtTCSReqOffInit);

    /* Outport: '<Root>/VeBRKR_b_FunctionSts' incorporates:
     *  SignalConversion generated from: '<S2>/FunctionSts_Init'
     */
    (void)Rte_Write_VeBRKR_b_FunctionSts_Value
        (BRKR_ac_B.OutportBufferForFunctionSts_Init);

    /* Outport: '<Root>/VeBRKR_b_HillHoldActiveFA' incorporates:
     *  SignalConversion generated from: '<S2>/HillHoldActiveFA'
     */
    (void)Rte_Write_VeBRKR_b_HillHoldActiveFA_Value
        (BRKR_ac_B.OutportBufferForHillHoldActiveFA);

    /* Outport: '<Root>/VeBRKR_b_HillHoldFailStsFA' incorporates:
     *  SignalConversion generated from: '<S2>/HillHoldFailStsFA'
     */
    (void)Rte_Write_VeBRKR_b_HillHoldFailStsFA_Value
        (BRKR_ac_B.OutportBufferForHillHoldFailStsFA);

    /* Outport: '<Root>/VeBRKR_b_MSRActive_FA' incorporates:
     *  SignalConversion generated from: '<S2>/MSR_ActiveFA_Init'
     */
    (void)Rte_Write_VeBRKR_b_MSRActive_FA_Value
        (BRKR_ac_B.OutportBufferForMSR_ActiveFA_Init);

    /* Outport: '<Root>/VeBRKR_b_MSRActive' incorporates:
     *  SignalConversion generated from: '<S2>/MSR_Active_Init'
     */
    (void)Rte_Write_VeBRKR_b_MSRActive_Value
        (BRKR_ac_B.OutportBufferForMSR_Active_Init);

    /* Outport: '<Root>/VeBRKR_b_Not_OK_To_RaceFA' incorporates:
     *  SignalConversion generated from: '<S2>/Not_OK_To_RaceFA_Init'
     */
    (void)Rte_Write_VeBRKR_b_Not_OK_To_RaceFA_Value
        (BRKR_ac_B.OutportBufferForNot_OK_To_RaceFA_Init);

    /* Outport: '<Root>/VeBRKR_e_Not_OK_To_Race' incorporates:
     *  SignalConversion generated from: '<S230>/Not_OK_To_Race_Init'
     *  SignalConversion generated from: '<S2>/Not_OK_To_Race_Init'
     */
    (void)Rte_Write_VeBRKR_e_Not_OK_To_Race_Value
        (BRKR_ac_B.OutportBufferForNot_OK_To_Race_Init);

    /* Outport: '<Root>/VeBRKR_b_OPDHoldStatusFA' incorporates:
     *  SignalConversion generated from: '<S2>/OPD_Hold_Status_FA_Init'
     */
    (void)Rte_Write_VeBRKR_b_OPDHoldStatusFA_Value
        (BRKR_ac_B.OutportBufferForOPD_Hold_Status_FA_Init);

    /* Outport: '<Root>/VeBRKR_e_OPDHoldStatus' incorporates:
     *  SignalConversion generated from: '<S230>/OPD_Hold_Status_Init'
     *  SignalConversion generated from: '<S2>/OPD_Hold_Status_Init'
     */
    (void)Rte_Write_VeBRKR_e_OPDHoldStatus_Value
        (BRKR_ac_B.OutportBufferForOPD_Hold_Status_Init);

    /* Outport: '<Root>/VeBRKR_e_FaultSts_RgnCntrlSwCkt' incorporates:
     *  SignalConversion generated from: '<S231>/VeBRKR_e_FaultSts_RgnCntrlSwCkt'
     *  SignalConversion generated from: '<S2>/R_VeBRKR_e_FaultSts_RgnCntrlSwCkt'
     */
    (void)Rte_Write_VeBRKR_e_FaultSts_RgnCntrlSwCkt_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_e_FaultSts_RgnC_j);

    /* Outport: '<Root>/VeBRKR_e_FaultSts_RgnCntrlSwCktHi' incorporates:
     *  SignalConversion generated from: '<S231>/VeBRKR_e_FaultSts_RgnCntrlSwCktHi'
     *  SignalConversion generated from: '<S2>/R_VeBRKR_e_FaultSts_RgnCntrlSwCktHi'
     */
    (void)Rte_Write_VeBRKR_e_FaultSts_RgnCntrlSwCktHi_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_e_FaultSts_RgnCnt);

    /* Outport: '<Root>/VeBRKR_e_FaultSts_RgnCntrlSwCktLo' incorporates:
     *  SignalConversion generated from: '<S231>/VeBRKR_e_FaultSts_RgnCntrlSwCktLo'
     *  SignalConversion generated from: '<S2>/R_VeBRKR_e_FaultSts_RgnCntrlSwCktLo'
     */
    (void)Rte_Write_VeBRKR_e_FaultSts_RgnCntrlSwCktLo_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_e_FaultSts_RgnC_l);

    /* Outport: '<Root>/VeBRKR_b_ReqSSC_IdlDst' incorporates:
     *  SignalConversion generated from: '<S2>/ReqSSC_IdlDst'
     */
    (void)Rte_Write_VeBRKR_b_ReqSSC_IdlDst_Value
        (BRKR_ac_B.OutportBufferForReqSSC_IdlDst);

    /* Outport: '<Root>/VeBRKR_e_ShiftInhibit' incorporates:
     *  SignalConversion generated from: '<S230>/ShiftInhibit_Init'
     *  SignalConversion generated from: '<S2>/ShiftInhibit_Init'
     */
    (void)Rte_Write_VeBRKR_e_ShiftInhibit_Value
        (BRKR_ac_B.OutportBufferForShiftInhibit_Init);

    /* Outport: '<Root>/VeBRKR_Pct_OneBrkBoxPdlPosn' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_Pct_OneBrkBoxPdlPosn_OutInit'
     */
    (void)Rte_Write_VeBRKR_Pct_OneBrkBoxPdlPosn_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_Pct_OneBrkBoxPdlP);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnCircuitHiC1' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastBtnCircuitHiC1_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnCircuitHiC1_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnCi_nu);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnCircuitHiC2' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastBtnCircuitHiC2_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnCircuitHiC2_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnCir_a);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnCircuitHi' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastBtnCircuitHi_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnCircuitHi_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnCir_e);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnCircuitLowC1' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastBtnCircuitLowC1_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnCircuitLowC1_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnCir_n);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnCircuitLowC2' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastBtnCircuitLowC2_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnCircuitLowC2_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnCi_ec);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnCircuitLow' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastBtnCircuitLow_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnCircuitLow_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnCircu);

    /* Outport: '<Root>/VeBRKR_b_AeCoastBtnDiagFail' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastBtnDiagFail_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastBtnDiagFail_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastBtnDiagF);

    /* Outport: '<Root>/VeBRKR_b_AeCoastReadyFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastReadyFA_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastReadyFA_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastReadyFA_);

    /* Outport: '<Root>/VeBRKR_b_AeCoastReady' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastReady_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastReady_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastReady_Ou);

    /* Outport: '<Root>/VeBRKR_b_AeCoastSwitchFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastSwitchFA_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastSwitchFA_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastSwitchFA);

    /* Outport: '<Root>/VeBRKR_b_AeCoastSwitchStatC1FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastSwitchStatC1FA_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastSwitchStatC1FA_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastSwitch_k);

    /* Outport: '<Root>/VeBRKR_b_AeCoastSwitchStatC2FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastSwitchStatC2FA_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastSwitchStatC2FA_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastSwitch_e);

    /* Outport: '<Root>/VeBRKR_b_AeCoastSwitchStatFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastSwitchStatFA_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_AeCoastSwitchStatFA_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_AeCoastSwitchSt);

    /* Outport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_BrkPedalDscrtInptFA_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_BrkPedalDscrtInptFA_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_BrkPedalDscrtIn);

    /* Outport: '<Root>/VeBRKR_b_BrkPedalStat2FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_BrkPedalStat2FA_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_BrkPedalStat2FA_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_BrkPedalStat2FA);

    /* Outport: '<Root>/VeBRKR_b_EmsMlfAtvFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_EmsMlfAtvFA_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_EmsMlfAtvFA_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_EmsMlfAtvFA_Out);

    /* Outport: '<Root>/VeBRKR_b_EmsMlfAtv' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_EmsMlfAtv_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_EmsMlfAtv_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_EmsMlfAtv_Out_I);

    /* Outport: '<Root>/VeBRKR_b_HillHoldActive' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_HillHoldActive_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_HillHoldActive_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_HillHoldActive_);

    /* Outport: '<Root>/VeBRKR_b_HillHoldFailSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_HillHoldFailSts_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_HillHoldFailSts_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_HillHoldFailSts);

    /* Outport: '<Root>/VeBRKR_b_ImpndSkid' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_ImpndSkid_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_ImpndSkid_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_ImpndSkid_Out_I);

    /* Outport: '<Root>/VeBRKR_b_OneBrkBoxPdlPosnFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_OneBrkBoxPdlPosnFA_OutInit'
     */
    (void)Rte_Write_VeBRKR_b_OneBrkBoxPdlPosnFA_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_OneBrkBoxPdlPos);

    /* Outport: '<Root>/VeBRKR_b_ShortToGround' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_ShortToGround_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_ShortToGround_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_ShortToGround_O);

    /* Outport: '<Root>/VeBRKR_b_ShortToOpen' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_ShortToOpen_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_ShortToOpen_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_ShortToOpen_Out);

    /* Outport: '<Root>/VeBRKR_b_ShortToPower' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_ShortToPower_Out_Init'
     */
    (void)Rte_Write_VeBRKR_b_ShortToPower_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_b_ShortToPower_Ou);

    /* Outport: '<Root>/VeBRKR_e_AeCoastSwitchStatC1' incorporates:
     *  SignalConversion generated from: '<S231>/VeBRKR_e_AeCoastSwitchStatC1_Out_Init'
     *  SignalConversion generated from: '<S2>/VeBRKR_e_AeCoastSwitchStatC1_Out_Init'
     */
    (void)Rte_Write_VeBRKR_e_AeCoastSwitchStatC1_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_e_AeCoastSwitch_i);

    /* Outport: '<Root>/VeBRKR_e_AeCoastSwitchStatC2' incorporates:
     *  SignalConversion generated from: '<S231>/VeBRKR_e_AeCoastSwitchStatC2_Out_Init'
     *  SignalConversion generated from: '<S2>/VeBRKR_e_AeCoastSwitchStatC2_Out_Init'
     */
    (void)Rte_Write_VeBRKR_e_AeCoastSwitchStatC2_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_e_AeCoastSwitc_i4);

    /* Outport: '<Root>/VeBRKR_e_AeCoastSwitchStat' incorporates:
     *  SignalConversion generated from: '<S231>/VeBRKR_e_AeCoastSwitchStat_Out_Init'
     *  SignalConversion generated from: '<S2>/VeBRKR_e_AeCoastSwitchStat_Out_Init'
     */
    (void)Rte_Write_VeBRKR_e_AeCoastSwitchStat_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_e_AeCoastSwitchSt);

    /* Outport: '<Root>/VeBRKR_e_AeCoastSwitch' incorporates:
     *  SignalConversion generated from: '<S231>/VeBRKR_e_AeCoastSwitch_Out_Init'
     *  SignalConversion generated from: '<S2>/VeBRKR_e_AeCoastSwitch_Out_Init'
     */
    (void)Rte_Write_VeBRKR_e_AeCoastSwitch_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_e_AeCoastSwitch_O);

    /* Outport: '<Root>/VeBRKR_e_BrakeSrc' incorporates:
     *  SignalConversion generated from: '<S231>/VeBRKR_e_BrakeSrc_Out_Init'
     *  SignalConversion generated from: '<S2>/VeBRKR_e_BrakeSrc_Out_Init'
     */
    (void)Rte_Write_VeBRKR_e_BrakeSrc_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_e_BrakeSrc_Out_In);

    /* Outport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt' incorporates:
     *  SignalConversion generated from: '<S231>/VeBRKR_e_BrkPedalDscrtInpt_Out_Init'
     *  SignalConversion generated from: '<S2>/VeBRKR_e_BrkPedalDscrtInpt_Out_Init'
     */
    (void)Rte_Write_VeBRKR_e_BrkPedalDscrtInpt_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_e_BrkPedalDscrtIn);

    /* Outport: '<Root>/VeBRKR_e_BrkPedalStat2' incorporates:
     *  SignalConversion generated from: '<S231>/VeBRKR_e_BrkPedalStat2_Out_Init'
     *  SignalConversion generated from: '<S2>/VeBRKR_e_BrkPedalStat2_Out_Init'
     */
    (void)Rte_Write_VeBRKR_e_BrkPedalStat2_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_e_BrkPedalStat2_O);

    /* Outport: '<Root>/VeBRKR_pbar_BrakePedalPressure' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_pbar_BrakePedalPressure_Init'
     */
    (void)Rte_Write_VeBRKR_pbar_BrakePedalPressure_Value
        (BRKR_ac_B.OutportBufferForVeBRKR_pbar_BrakePedalPr);

    /* Outport: '<Root>/VeBRKR_b_VehicleStandStillStsFA' incorporates:
     *  SignalConversion generated from: '<S2>/VehicleStandStillStsFA_Init'
     */
    (void)Rte_Write_VeBRKR_b_VehicleStandStillStsFA_Value
        (BRKR_ac_B.OutportBufferForVehicleStandStillStsFA_I);

    /* Outport: '<Root>/VeBRKR_b_VehicleStandStillSts' incorporates:
     *  SignalConversion generated from: '<S2>/VehicleStandStillSts_Init'
     */
    (void)Rte_Write_VeBRKR_b_VehicleStandStillSts_Value
        (BRKR_ac_B.OutportBufferForVehicleStandStillSts_Ini);

    /* Outport: '<Root>/VeBRKR_e_WhlSlpSt' incorporates:
     *  SignalConversion generated from: '<S230>/WhlSlpSt_Init'
     *  SignalConversion generated from: '<S2>/WhlSlpSt_Init'
     */
    (void)Rte_Write_VeBRKR_e_WhlSlpSt_Value
        (BRKR_ac_B.OutportBufferForWhlSlpSt_Init);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S2>/BrkPedalDscrtInptFA_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_BrkPedalDscrtInptFA_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkPedalDscrtInptFA_Init);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S230>/BrkPedalDscrtInpt_Init'
     *  SignalConversion generated from: '<S2>/BrkPedalDscrtInpt_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_BrkPedalDscrtInpt_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkPedalDscrtInpt_Init);

    /* Merge: '<Root>/Merge_67' incorporates:
     *  SignalConversion generated from: '<S2>/BrkPedalStat2FA_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_BrkPedalStat2FA_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkPedalStat2FA_Init);

    /* Merge: '<Root>/Merge_75' incorporates:
     *  SignalConversion generated from: '<S230>/BrkPedalStat2_Init'
     *  SignalConversion generated from: '<S2>/BrkPedalStat2_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_BrkPedalStat2_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkPedalStat2_Init);

    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S2>/BrkPedalStsFA_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_BrkPedalStsFA_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkPedalStsFA_Init);

    /* Merge: '<Root>/Merge_54' incorporates:
     *  SignalConversion generated from: '<S230>/BrkPedalSts_Init'
     *  SignalConversion generated from: '<S2>/BrkPedalSts_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_BrkPedalSts_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkPedalSts_Init);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S2>/ImpndSkid_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_ImpndSkid_Init_IRV
        (BRKR_ac_B.OutportBufferForImpndSkid_Init);

    /* Merge: '<Root>/Merge_61' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_Pct_BrkTravelSt_C2CAN_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_Pct_BrkTravelSt_C2CAN_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkTravelSts_C2CAN_Init);

    /* Merge: '<Root>/Merge_36_Irv' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_Pct_BrkTravelSts_write_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_Pct_BrkTravelSts_write_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkTravelSts_Init);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_U_Brake_NO_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_U_Brake_NO_Init_IRV
        (BRKR_ac_B.OutportBufferForBrakeAna_NO_Init);

    /* Merge: '<Root>/Merge_76_Irv' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_ABSActiveFA_write_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_ABSActiveFA_write_Init_IRV
        (BRKR_ac_B.OutportBufferForABSActiveFA);

    /* Merge: '<Root>/Merge_3_Irv' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_ABSActive_write_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_ABSActive_write_Init_IRV
        (BRKR_ac_B.OutportBufferForABSActive);

    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastReadyFA_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_AeCoastReadyFA_Init_IRV
        (BRKR_ac_B.OutportBufferForAeCoastReadyFA_Init);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastReady_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_AeCoastReady_Init_IRV
        (BRKR_ac_B.OutportBufferForAeCoastReady_Init);

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastSwitchFA_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_AeCoastSwitchFA_Init_IRV
        (BRKR_ac_B.OutportBufferForAeCoastSwitchFAInit);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastSwitchStatC1FA_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_AeCoastSwitchStatC1FA_Init_IRV
        (BRKR_ac_B.OutportBufferForAeCoastSwitchC1StatFAIni);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastSwitchStatC2FA_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_AeCoastSwitchStatC2FA_Init_IRV
        (BRKR_ac_B.OutportBufferForAeCoastSwitchC2StatFAIni);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_AeCoastSwitchStatFA_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_AeCoastSwitchStatFA_Init_IRV
        (BRKR_ac_B.OutportBufferForAeCoastSwitchStatFAInit);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_Brake_NOFA_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_Brake_NOFA_Init_IRV
        (BRKR_ac_B.OutportBufferForBrake_NO_FA_Init);

    /* Merge: '<Root>/Merge_68' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_Brake_NOSgnl_Rcvd_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_Brake_NOSgnl_Rcvd_Init_IRV
        (BRKR_ac_B.OutportBufferForBrake_NO_SR_Init);

    /* Merge: '<Root>/Merge_64' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_BrkPedalStat2_C2CANFA_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_BrkPedalStat2_C2CANFA_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkPedalStat2_C2CANFA_In);

    /* Merge: '<Root>/Merge_66' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_BrkPedalStat2_C2CANSgnl_Rcvd_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_BrkPedalStat2_C2CANSgnl_Rcvd_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkPedalStat2_C2CANSR_In);

    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_BrkTravelSt_C2CANSgnl_Rcvd_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_BrkTravelSt_C2CANSgnl_Rcvd_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkTravelSts_C2CANSR_Ini);

    /* Merge: '<Root>/Merge_31_Irv' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_BrkTravelStsFA_write_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_BrkTravelStsFA_write_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkTravelSts_FA_Init);

    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_BrkTravelSts_C2CANFA_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_BrkTravelSts_C2CANFA_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkTravelSts_C2CANFA_Ini);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_EmsMlfAtvFA_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_EmsMlfAtvFA_Init_IRV
        (BRKR_ac_B.OutportBufferForEmsMlfAtvFAInit);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_EmsMlfAtv_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_EmsMlfAtv_Init_IRV
        (BRKR_ac_B.OutportBufferForEmsMlfAtvInit);

    /* Merge: '<Root>/Merge_37_Irv' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_HillHoldActiveFA_write_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_HillHoldActiveFA_write_Init_IRV
        (BRKR_ac_B.OutportBufferForHillHoldActiveFA);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_HillHoldActive_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_HillHoldActive_Init_IRV
        (BRKR_ac_B.OutportBufferForHillHoldActive);

    /* Merge: '<Root>/Merge_39_Irv' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_HillHoldFailStsFA_write_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_HillHoldFailStsFA_write_Init_IRV
        (BRKR_ac_B.OutportBufferForHillHoldFailStsFA);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S2>/VeBRKR_b_HillHoldFailSts_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_b_HillHoldFailSts_Init_IRV
        (BRKR_ac_B.OutportBufferForHillHoldFailSts);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S230>/AeCoastSwitchC1StatInit'
     *  SignalConversion generated from: '<S2>/VeBRKR_e_AeCoastSwitchStatC1_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_e_AeCoastSwitchStatC1_Init_IRV
        (BRKR_ac_B.OutportBufferForAeCoastSwitchC1StatInit);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S230>/AeCoastSwitchC2StatInit'
     *  SignalConversion generated from: '<S2>/VeBRKR_e_AeCoastSwitchStatC2_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_e_AeCoastSwitchStatC2_Init_IRV
        (BRKR_ac_B.OutportBufferForAeCoastSwitchC2StatInit);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S230>/AeCoastSwitchStatInit'
     *  SignalConversion generated from: '<S2>/VeBRKR_e_AeCoastSwitchStat_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_e_AeCoastSwitchStat_Init_IRV
        (BRKR_ac_B.OutportBufferForAeCoastSwitchStatInit);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S230>/AeCoastSwitchInit'
     *  SignalConversion generated from: '<S2>/VeBRKR_e_AeCoastSwitch_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_e_AeCoastSwitch_Init_IRV
        (BRKR_ac_B.OutportBufferForAeCoastSwitchInit);

    /* Merge: '<Root>/Merge_63' incorporates:
     *  SignalConversion generated from: '<S230>/BrkPedalStat2_C2CAN_Init'
     *  SignalConversion generated from: '<S2>/VeBRKR_e_BrkPedalStat2_C2CAN_Init'
     * */
    Rte_IrvWrite_BRKR_PwrOn_VeBRKR_e_BrkPedalStat2_C2CAN_Init_IRV
        (BRKR_ac_B.OutportBufferForBrkPedalStat2_C2CAN_Init);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, BRKR_CODE) BRKR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BRKR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Init_BRKI'
     */
    /* SystemInitialize for SignalConversion generated from: '<S230>/ShiftInhibit_Init' incorporates:
     *  Constant: '<S233>/Constant'
     */
    BRKR_ac_B.OutportBufferForShiftInhibit_Init = BRKR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S230>/WhlSlpSt_Init' incorporates:
     *  Constant: '<S234>/Constant'
     */
    BRKR_ac_B.OutportBufferForWhlSlpSt_Init = BRKR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S230>/BrkPedalStat2_Init' incorporates:
     *  Constant: '<S235>/Constant'
     */
    BRKR_ac_B.OutportBufferForBrkPedalStat2_Init = BRKR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S230>/BrkPedalSts_Init' incorporates:
     *  Constant: '<S237>/Constant'
     */
    BRKR_ac_B.OutportBufferForBrkPedalSts_Init = BRKR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S230>/BrkPedalDscrtInpt_Init' incorporates:
     *  Constant: '<S236>/Constant'
     */
    BRKR_ac_B.OutportBufferForBrkPedalDscrtInpt_Init =
        BRKR_ac_ConstB.Constant_hr;

    /* SystemInitialize for SignalConversion generated from: '<S230>/AHH_Ready_Status_init' incorporates:
     *  Constant: '<S246>/KeBRKR_e_AHH_Ready_Status_Init'
     */
    BRKR_ac_B.OutportBufferForAHH_Ready_Status_init =
        KeBRKR_e_AHH_Ready_Status_Init;

    /* SystemInitialize for SignalConversion generated from: '<S230>/AHH_Ready_StatusFA_init' incorporates:
     *  Constant: '<S241>/KeBRKR_b_AHH_Ready_StatusFA_Init'
     */
    BRKR_ac_B.OutportBufferForAHH_Ready_StatusFA_init =
        KeBRKR_b_AHH_Ready_StatusFA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S230>/AeCoastSwitchStatInit' incorporates:
     *  Constant: '<S250>/KeBRKR_e_AeCoastSwitchStatInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchStatInit =
        KeBRKR_e_AeCoastSwitchStatInit;

    /* SystemInitialize for SignalConversion generated from: '<S230>/AeCoastSwitchStatFAInit' incorporates:
     *  Constant: '<S245>/KeBRKR_b_AeCoastSwitchStatFAInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchStatFAInit =
        KeBRKR_b_AeCoastSwitchStatFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S230>/AeCoastSwitchC1StatInit' incorporates:
     *  Constant: '<S247>/KeBRKR_e_AeCoastSwitchC1StatInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchC1StatInit =
        KeBRKR_e_AeCoastSwitchC1StatInit;

    /* SystemInitialize for SignalConversion generated from: '<S230>/AeCoastSwitchC1StatFAInit' incorporates:
     *  Constant: '<S242>/KeBRKR_b_AeCoastSwitchC1StatFAInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchC1StatFAIni =
        KeBRKR_b_AeCoastSwitchC1StatFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S230>/AeCoastSwitchC2StatInit' incorporates:
     *  Constant: '<S248>/KeBRKR_e_AeCoastSwitchC2StatInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchC2StatInit =
        KeBRKR_e_AeCoastSwitchC2StatInit;

    /* SystemInitialize for SignalConversion generated from: '<S230>/AeCoastSwitchC2StatFAInit' incorporates:
     *  Constant: '<S243>/KeBRKR_b_AeCoastSwitchC2StatFAInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchC2StatFAIni =
        KeBRKR_b_AeCoastSwitchC2StatFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S230>/BSMComFailInit_C1CAN' incorporates:
     *  Constant: '<S251>/KeBRKR_e_BSMComFailInit_C1CAN'
     */
    BRKR_ac_B.OutportBufferForBSMComFailInit_C1CAN =
        KeBRKR_e_BSMComFailInit_C1CAN;

    /* SystemInitialize for SignalConversion generated from: '<S230>/BSMComFailInit_C2CAN' incorporates:
     *  Constant: '<S252>/KeBRKR_e_BSMComFailInit_C2CAN'
     */
    BRKR_ac_B.OutportBufferForBSMComFailInit_C2CAN =
        KeBRKR_e_BSMComFailInit_C2CAN;

    /* SystemInitialize for SignalConversion generated from: '<S230>/AeCoastSwitchInit' incorporates:
     *  Constant: '<S249>/KeBRKR_e_AeCoastSwitchInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchInit = KeBRKR_e_AeCoastSwitchInit;

    /* SystemInitialize for SignalConversion generated from: '<S230>/AeCoastSwitchFAInit' incorporates:
     *  Constant: '<S244>/KeBRKR_b_AeCoastSwitchFAInit'
     */
    BRKR_ac_B.OutportBufferForAeCoastSwitchFAInit = KeBRKR_b_AeCoastSwitchFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S230>/OPD_Hold_Status_Init' incorporates:
     *  Constant: '<S253>/KeBRKR_e_OPDHoldStatus_Init'
     */
    BRKR_ac_B.OutportBufferForOPD_Hold_Status_Init = KeBRKR_e_OPDHoldStatus_Init;

    /* SystemInitialize for SignalConversion generated from: '<S230>/ExtBrkReqOffInit' incorporates:
     *  Constant: '<S238>/Constant'
     */
    BRKR_ac_B.OutportBufferForExtBrkReqOffInit = BRKR_ac_ConstB.Constant_jh;

    /* SystemInitialize for SignalConversion generated from: '<S230>/ExtTCSReqOffInit' incorporates:
     *  Constant: '<S239>/Constant'
     */
    BRKR_ac_B.OutportBufferForExtTCSReqOffInit = BRKR_ac_ConstB.Constant_g1;

    /* SystemInitialize for SignalConversion generated from: '<S230>/BrkPedalStat2_C2CAN_Init' incorporates:
     *  Constant: '<S240>/Constant'
     */
    BRKR_ac_B.OutportBufferForBrkPedalStat2_C2CAN_Init =
        BRKR_ac_ConstB.Constant_bx;

    /* SystemInitialize for SignalConversion generated from: '<S230>/Not_OK_To_Race_Init' incorporates:
     *  Constant: '<S232>/Constant'
     */
    BRKR_ac_B.OutportBufferForNot_OK_To_Race_Init = BRKR_ac_ConstB.Constant_j;

    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S231>/VeBRKR_e_BrkPedalStat2_Out_Init' incorporates:
     *  Constant: '<S231>/Const1'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_BrkPedalStat2_O = BRKR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S231>/VeBRKR_e_BrkPedalDscrtInpt_Out_Init' incorporates:
     *  Constant: '<S231>/Const3'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_BrkPedalDscrtIn = BRKR_ac_ConstB.Const3;

    /* SystemInitialize for SignalConversion generated from: '<S231>/VeBRKR_e_AeCoastSwitchStat_Out_Init' incorporates:
     *  Constant: '<S231>/Const6'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_AeCoastSwitchSt = BRKR_ac_ConstB.Const6;

    /* SystemInitialize for SignalConversion generated from: '<S231>/VeBRKR_e_AeCoastSwitchStatC1_Out_Init' incorporates:
     *  Constant: '<S231>/Const16'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_AeCoastSwitch_i = BRKR_ac_ConstB.Const16;

    /* SystemInitialize for SignalConversion generated from: '<S231>/VeBRKR_e_AeCoastSwitchStatC2_Out_Init' incorporates:
     *  Constant: '<S231>/Const17'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_AeCoastSwitc_i4 = BRKR_ac_ConstB.Const17;

    /* SystemInitialize for SignalConversion generated from: '<S231>/VeBRKR_e_AeCoastSwitch_Out_Init' incorporates:
     *  Constant: '<S231>/Const21'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_AeCoastSwitch_O = BRKR_ac_ConstB.Const21;

    /* SystemInitialize for SignalConversion generated from: '<S231>/VeBRKR_e_BrakeSrc_Out_Init' incorporates:
     *  Constant: '<S231>/Const23'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_BrakeSrc_Out_In = BRKR_ac_ConstB.Const23;

    /* SystemInitialize for SignalConversion generated from: '<S231>/VeBRKR_e_FaultSts_RgnCntrlSwCktHi' incorporates:
     *  Constant: '<S256>/Constant'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_FaultSts_RgnCnt = BRKR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S231>/VeBRKR_e_FaultSts_RgnCntrlSwCktLo' incorporates:
     *  Constant: '<S254>/Constant'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_FaultSts_RgnC_l =
        BRKR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S231>/VeBRKR_e_FaultSts_RgnCntrlSwCkt' incorporates:
     *  Constant: '<S255>/Constant'
     */
    BRKR_ac_B.OutportBufferForVeBRKR_e_FaultSts_RgnC_j =
        BRKR_ac_ConstB.Constant_bd;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_WhlSlpSt' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    (void)Rte_Write_VeBRKR_e_WhlSlpSt_Value(CeBRKR_e_NoWhlSlpDetected);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_BrkPedalStat2' incorporates:
     *  Merge: '<Root>/Merge_Outport_4'
     */
    (void)Rte_Write_VeBRKR_e_BrkPedalStat2_Value(CeBRKR_e_BrkNotApplied);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt' incorporates:
     *  Merge: '<Root>/Merge_Outport_6'
     */
    (void)Rte_Write_VeBRKR_e_BrkPedalDscrtInpt_Value(CeBRKR_e_BrkNotApplied);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_ShiftInhibit' incorporates:
     *  Merge: '<Root>/Merge_13'
     */
    (void)Rte_Write_VeBRKR_e_ShiftInhibit_Value(CeBRKR_e_NoAction);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_AHH_Ready_Status' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    (void)Rte_Write_VeBRKR_e_AHH_Ready_Status_Value(CeBRKR_e_AHH_NotReady);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_AeCoastSwitchStat' incorporates:
     *  Merge: '<Root>/Merge_Outport_16'
     */
    (void)Rte_Write_VeBRKR_e_AeCoastSwitchStat_Value(CeBRKR_e_Button_Unpressed);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_ComFailBSM_C1CAN' incorporates:
     *  Merge: '<Root>/Merge_25'
     */
    (void)Rte_Write_VeBRKR_e_ComFailBSM_C1CAN_Value(CeBRKR_e_NoFaultBSM_C1);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_ComFailBSM_C2CAN' incorporates:
     *  Merge: '<Root>/Merge_27'
     */
    (void)Rte_Write_VeBRKR_e_ComFailBSM_C2CAN_Value(CeBRKR_e_NoFaultBSM_C2);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_AeCoastSwitchStatC1' incorporates:
     *  Merge: '<Root>/Merge_Outport_34'
     */
    (void)Rte_Write_VeBRKR_e_AeCoastSwitchStatC1_Value(CeBRKR_e_Button_Unpressed);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_AeCoastSwitchStatC2' incorporates:
     *  Merge: '<Root>/Merge_Outport_35'
     */
    (void)Rte_Write_VeBRKR_e_AeCoastSwitchStatC2_Value(CeBRKR_e_Button_Unpressed);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_AeCoastSwitch' incorporates:
     *  Merge: '<Root>/Merge_Outport_45'
     */
    (void)Rte_Write_VeBRKR_e_AeCoastSwitch_Value(CeBRKR_e_Button_Unpressed);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_OPDHoldStatus' incorporates:
     *  Merge: '<Root>/Merge_42'
     */
    (void)Rte_Write_VeBRKR_e_OPDHoldStatus_Value(CeBRKR_e_In_Active);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_BrakeSrc' incorporates:
     *  Merge: '<Root>/Merge_Outport_51'
     */
    (void)Rte_Write_VeBRKR_e_BrakeSrc_Value(CeBRKR_e_BrkPdlDscrtInpt);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_ExtBrkReqOff' incorporates:
     *  Merge: '<Root>/Merge_58'
     */
    (void)Rte_Write_VeBRKR_e_ExtBrkReqOff_Value(CeBRKR_e_NoReq);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_ExtTcsReqOff' incorporates:
     *  Merge: '<Root>/Merge_60'
     */
    (void)Rte_Write_VeBRKR_e_ExtTcsReqOff_Value(CeBRKR_e_NoReq);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_FaultSts_RgnCntrlSwCktHi' incorporates:
     *  Merge: '<Root>/M_VeBRKR_e_FaultSts_RgnCntrlSwCktHi'
     */
    (void)Rte_Write_VeBRKR_e_FaultSts_RgnCntrlSwCktHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_FaultSts_RgnCntrlSwCktLo' incorporates:
     *  Merge: '<Root>/M_VeBRKR_e_FaultSts_RgnCntrlSwCktLo'
     */
    (void)Rte_Write_VeBRKR_e_FaultSts_RgnCntrlSwCktLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_FaultSts_RgnCntrlSwCkt' incorporates:
     *  Merge: '<Root>/M_VeBRKR_e_FaultSts_RgnCntrlSwCkt'
     */
    (void)Rte_Write_VeBRKR_e_FaultSts_RgnCntrlSwCkt_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBRKR_e_Not_OK_To_Race' incorporates:
     *  Merge: '<Root>/Merge_71'
     */
    (void)Rte_Write_VeBRKR_e_Not_OK_To_Race_Value(CeBRKR_e_OK);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
