/*
 * File: APMR_ac.c
 *
 * Code generated for Simulink model 'APMR_ac'.
 *
 * Model version                  : 9.208
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:05:30 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "APMR_ac.h"



boolean VeCANR_b_TBM_Submit_Schedule2_APMR_ac_Test_1;
boolean VeCANR_b_IDCM_Wakeup_HCP_FD11_APMR_ac_Test_1;
boolean VeCANR_b_TBM_Submit_Schedule1_APMR_ac_Test_1;
boolean VeCANR_b_TBM_SubmitClimateSchd2_APMR_ac_Test_1;
boolean VeCANR_b_Submit_ClimateSchd1_APMR_ac_Test_1;
boolean VeCANR_b_Submit_Schedule2_APMR_ac_Test_1;
boolean VeCANR_b_TBM_SubmitClimateSchd1_APMR_ac_Test_1;
boolean VeCANR_b_Submit_ClimateSchd2_APMR_ac_Test_1;
boolean VeCANR_b_TBM_Charge_Now_APMR_ac_Test_1;
boolean VeCANR_b_Submit_Schedule1_APMR_ac_Test_1;

/* Named constants for Chart: '<S5>/Mode_Request_Managment' */
#define APMR_ac_IN_Init                ((uint8)1U)
#define APMR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#define APMR_ac_IN_Postrun             ((uint8)2U)
#define APMR_ac_IN_Run                 ((uint8)3U)
#define APMR_ac_IN_Run_Charging        ((uint8)1U)
#define APMR_ac_IN_Run_FullComm        ((uint8)2U)
#define APMR_ac_IN_Shutdown            ((uint8)4U)
#define APMR_ac_IN_Wakeup              ((uint8)5U)

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_APMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, APMR_VAR_INIT) HeAPMR_t_dT = 0.01F;/* Referenced by: '<S111>/Calib' */
static volatile CONST(TePMDR_e_PowerMode, APMR_VAR_INIT)
    KaAPMR_e_PowerModeRaw_Map[10] =
{
    CePMDR_e_PowerMode_Off, CePMDR_e_PowerMode_Off, CePMDR_e_PowerMode_Acc,
    CePMDR_e_PowerMode_Run, CePMDR_e_PowerMode_Crank, CePMDR_e_PowerMode_Off,
    CePMDR_e_PowerMode_Off, CePMDR_e_PowerMode_SNA, CePMDR_e_PowerMode_Off,
    CePMDR_e_PowerMode_Off
};                                     /* Referenced by: '<S219>/Calib' */

static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_BonnetSts = 0;/* Referenced by: '<S155>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_ChargeNow = 0;/* Referenced by: '<S153>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_ClimateReq = 0;/* Referenced by: '<S197>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_CntrlPwrHold = 0;/* Referenced by: '<S169>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_DriverDoorSts = 0;/* Referenced by: '<S156>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_Drv_Dr_Unlocking = 0;/* Referenced by: '<S157>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_EnableCANC = 0;/* Referenced by: '<S171>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_EnblInpOvrd = 1;/* Referenced by: '<S220>/Calib' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_EnblLIN = 0;/* Referenced by: '<S174>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_EnblThrmlRelay = 0;/* Referenced by: '<S34>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_IDCM_Wakeup_FD11 = 0;/* Referenced by: '<S167>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_IDCM_Wakeup_FD5 = 0;/* Referenced by: '<S168>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_IgnAccRun = 0;/* Referenced by: '<S163>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_IgnRunCrnk = 0;/* Referenced by: '<S162>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OBCMWup = 0;/* Referenced by: '<S166>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdBonnetSts = 0;/* Referenced by: '<S155>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdChargeNow = 0;/* Referenced by: '<S153>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdClimateReq = 0;/* Referenced by: '<S197>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdCmdIgnSts = 0;/* Referenced by: '<S161>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdCntrlPwrHold = 0;/* Referenced by: '<S169>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdCommStatus_DCAN = 0;/* Referenced by: '<S184>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdCommStatus_FD11 = 0;/* Referenced by: '<S178>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdCommStatus_FD14 = 0;/* Referenced by: '<S179>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdCommStatus_FD16 = 0;/* Referenced by: '<S180>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdCommStatus_FD3 = 0;/* Referenced by: '<S175>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdCommStatus_FD5 = 0;/* Referenced by: '<S177>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdCommStatus_LIN1 = 0;/* Referenced by: '<S181>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdCommStatus_LIN2 = 0;/* Referenced by: '<S182>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdCommStatus_LIN3 = 0;/* Referenced by: '<S183>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdDriverDoorSts = 0;/* Referenced by: '<S156>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdDrv_Dr_Unlocking = 0;/* Referenced by: '<S157>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdEnableCANC = 0;/* Referenced by: '<S171>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdEnableRTC = 0;/* Referenced by: '<S148>/Calib' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdEnblLIN = 0;/* Referenced by: '<S174>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdEnblThrmlRelay = 0;/* Referenced by: '<S34>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdFOTA_Install_Type = 0;/* Referenced by: '<S158>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdFOTA_Installation_Sts
    = 0;                               /* Referenced by: '<S159>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdIDCM_Wakeup_FD11 = 0;/* Referenced by: '<S167>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdIDCM_Wakeup_FD5 = 0;/* Referenced by: '<S168>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdIgnAccRun = 0;/* Referenced by: '<S163>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdIgnRunCrnk = 0;/* Referenced by: '<S162>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdModeReq = 0;/* Referenced by: '<S41>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdModulPwrModeStatus =
    0;                                 /* Referenced by: '<S172>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdNVM_Status = 0;/* Referenced by: '<S199>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdOBCMWup = 0;/* Referenced by: '<S166>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdPCUPwrUPRelay = 0;/* Referenced by: '<S56>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdPCU_EndRequestFlag =
    0;                                 /* Referenced by: '<S54>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdRTCProgramWakeupError
    = 0;                               /* Referenced by: '<S194>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdRTCReadSts = 0;/* Referenced by: '<S193>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdRTCTimeDay = 0;/* Referenced by: '<S189>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdRTCTimeHour = 0;/* Referenced by: '<S190>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdRTCTimeMinute = 0;/* Referenced by: '<S191>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdRTCTimeMonth = 0;/* Referenced by: '<S188>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdRTCTimeSecond = 0;/* Referenced by: '<S192>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdRTCTimeYear = 0;/* Referenced by: '<S186>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdRTCWakeupReason = 0;/* Referenced by: '<S173>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdRemStActvSts_R = 0;/* Referenced by: '<S160>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT)
    KeAPMR_b_OvrdRemote_Chargeport_Cmnd = 0;/* Referenced by: '<S195>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdRun = 0;
                              /* Referenced by: '<S5>/Mode_Request_Managment' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdSmtPwrPanWakeUp = 0;/* Referenced by: '<S164>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdSubmit_ClimateSchd1 =
    0;                                 /* Referenced by: '<S176>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdSubmit_ClimateSchd2 =
    0;                                 /* Referenced by: '<S187>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdSubmit_Schedule1 = 0;/* Referenced by: '<S154>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdSubmit_Schedule2 = 0;/* Referenced by: '<S165>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT)
    KeAPMR_b_OvrdTBMCooperativeChrgCmnd = 0;/* Referenced by: '<S196>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdTBM_ChargeNow = 0;/* Referenced by: '<S198>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT)
    KeAPMR_b_OvrdTBM_SubmitClimateSchd1 = 0;/* Referenced by: '<S200>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT)
    KeAPMR_b_OvrdTBM_SubmitClimateSchd2 = 0;/* Referenced by: '<S201>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdTBM_Submit_Schedule1 =
    0;                                 /* Referenced by: '<S202>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdTBM_Submit_Schedule2 =
    0;                                 /* Referenced by: '<S203>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdThrmlSystRly_EnblCmnd
    = 0;                               /* Referenced by: '<S170>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdWU_TimerValue = 0;/* Referenced by: '<S185>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_OvrdePTWakeup = 0;/* Referenced by: '<S57>/Constant' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_PCUPwrUPRelay = 0;/* Referenced by: '<S56>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_PCU_EndRequestFlag = 0;/* Referenced by: '<S54>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_RelayDsblSlctr = 1;/* Referenced by: '<S109>/Calib' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_RelayEnblSlctr = 1;/* Referenced by: '<S110>/Calib' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_RemStActvSts_R = 0;/* Referenced by: '<S160>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_SmtPwrPanWakeUp = 0;/* Referenced by: '<S164>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_Submit_ClimateSchd1 = 0;/* Referenced by: '<S176>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_Submit_ClimateSchd2 = 0;/* Referenced by: '<S187>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_Submit_Schedule1 = 0;/* Referenced by: '<S154>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_Submit_Schedule2 = 0;/* Referenced by: '<S165>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_TBM_ChargeNow = 0;/* Referenced by: '<S198>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_TBM_SubmitClimateSchd1 =
    0;                                 /* Referenced by: '<S200>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_TBM_SubmitClimateSchd2 =
    0;                                 /* Referenced by: '<S201>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_TBM_Submit_Schedule1 = 0;/* Referenced by: '<S202>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_TBM_Submit_Schedule2 = 0;/* Referenced by: '<S203>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_ThrmlSystRly_EnblCmnd = 0;/* Referenced by: '<S170>/Constant1' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_UseModeReq = 1;/* Referenced by: '<S70>/Calib' */
static volatile CONST(boolean, APMR_VAR_INIT) KeAPMR_b_ePTWakeup = 0;/* Referenced by: '<S57>/Constant1' */
static volatile CONST(TePMDR_e_PowerMode, APMR_VAR_INIT) KeAPMR_e_CmdIgnSts =
    CePMDR_e_PowerMode_Off;            /* Referenced by: '<S161>/Constant1' */
static volatile CONST(TeAPMR_e_CommStatus, APMR_VAR_INIT)
    KeAPMR_e_CommStatus_DCAN = CeAPMR_e_NoComm;/* Referenced by: '<S184>/Constant1' */
static volatile CONST(TeAPMR_e_CommStatus, APMR_VAR_INIT)
    KeAPMR_e_CommStatus_FD11 = CeAPMR_e_NoComm;/* Referenced by: '<S178>/Constant1' */
static volatile CONST(TeAPMR_e_CommStatus, APMR_VAR_INIT)
    KeAPMR_e_CommStatus_FD14 = CeAPMR_e_NoComm;/* Referenced by: '<S179>/Constant1' */
static volatile CONST(TeAPMR_e_CommStatus, APMR_VAR_INIT)
    KeAPMR_e_CommStatus_FD16 = CeAPMR_e_NoComm;/* Referenced by: '<S180>/Constant1' */
static volatile CONST(TeAPMR_e_CommStatus, APMR_VAR_INIT)
    KeAPMR_e_CommStatus_FD3 = CeAPMR_e_NoComm;/* Referenced by: '<S175>/Constant1' */
static volatile CONST(TeAPMR_e_CommStatus, APMR_VAR_INIT)
    KeAPMR_e_CommStatus_FD5 = CeAPMR_e_NoComm;/* Referenced by: '<S177>/Constant1' */
static volatile CONST(TeAPMR_e_CommStatus, APMR_VAR_INIT)
    KeAPMR_e_CommStatus_LIN1 = CeAPMR_e_NoComm;/* Referenced by: '<S181>/Constant1' */
static volatile CONST(TeAPMR_e_CommStatus, APMR_VAR_INIT)
    KeAPMR_e_CommStatus_LIN2 = CeAPMR_e_NoComm;/* Referenced by: '<S182>/Constant1' */
static volatile CONST(TeAPMR_e_CommStatus, APMR_VAR_INIT)
    KeAPMR_e_CommStatus_LIN3 = CeAPMR_e_NoComm;/* Referenced by: '<S183>/Constant1' */
static volatile CONST(TeCITR_e_FOTA_Install_Type, APMR_VAR_INIT)
    KeAPMR_e_FOTA_Install_Type = CeCITR_e_NoFOTA;/* Referenced by: '<S158>/Constant1' */
static volatile CONST(TeCITR_e_FOTA_Install_Status, APMR_VAR_INIT)
    KeAPMR_e_FOTA_Installation_Sts = CeCITR_e_Installation_Default;/* Referenced by: '<S159>/Constant1' */
static volatile CONST(TeAPMR_e_ModeReq, APMR_VAR_INIT) KeAPMR_e_ModeReq =
    CeAPMR_e_ShutdownMode;             /* Referenced by: '<S41>/Constant1' */
static volatile CONST(TeAPMR_e_ModeReq, APMR_VAR_INIT)
    KeAPMR_e_ModulPwrModeStatus = CeAPMR_e_ShutdownMode;/* Referenced by: '<S172>/Constant1' */
static volatile CONST(TeAPMR_e_NvMStatus, APMR_VAR_INIT) KeAPMR_e_NVM_Status =
    CeAPMR_e_Ok;                       /* Referenced by: '<S199>/Constant1' */
static volatile CONST(TeDFIB_e_RTCCallSts, APMR_VAR_INIT)
    KeAPMR_e_RTCProgramWakeupError = CeDFIB_e_RTCCallCompleteOK;/* Referenced by: '<S194>/Constant1' */
static volatile CONST(TeDFIB_e_RTCCallSts, APMR_VAR_INIT) KeAPMR_e_RTCReadSts =
    CeDFIB_e_RTCCallCompleteOK;        /* Referenced by: '<S193>/Constant1' */
static volatile CONST(TeDFIB_e_RTCWakeupTypes, APMR_VAR_INIT)
    KeAPMR_e_RTCWakeupReason = CeDFIB_e_RTC_ALARM_WAKEUP;/* Referenced by: '<S173>/Constant1' */
static volatile CONST(TeCITR_e_RmtChargePortCmd, APMR_VAR_INIT)
    KeAPMR_e_Remote_Chargeport_Cmnd = CeCITR_e_Unlock_Request;/* Referenced by: '<S195>/Constant1' */
static volatile CONST(TeCITR_e_CoopChargeCmd, APMR_VAR_INIT)
    KeAPMR_e_TBMCooperativeChrgCmnd = CeCITR_e_Stop_Charge;/* Referenced by: '<S196>/Constant1' */
static volatile CONST(uint8, APMR_VAR_INIT) KeAPMR_g_Charging_DsblCANC = 14U;/* Referenced by: '<S22>/Calib' */
static volatile CONST(uint8, APMR_VAR_INIT) KeAPMR_g_Charging_EnblCANC = 255U;/* Referenced by: '<S21>/Calib' */
static volatile CONST(uint8, APMR_VAR_INIT) KeAPMR_g_DsblCANComm = 0U;/* Referenced by: '<S23>/Calib' */
static volatile CONST(uint8, APMR_VAR_INIT) KeAPMR_g_RunModeComm = 255U;/* Referenced by: '<S20>/Calib' */
static volatile CONST(float32, APMR_VAR_INIT) KeAPMR_t_CntrlrPwrHoldDelay = 0.5F;/* Referenced by: '<S13>/Calib' */
static volatile CONST(float32, APMR_VAR_INIT) KeAPMR_t_CommTmout = 30.0F;
                              /* Referenced by: '<S5>/Mode_Request_Managment' */
static volatile CONST(float32, APMR_VAR_INIT) KeAPMR_t_DsblLINRelay = 0.5F;/* Referenced by: '<S36>/Calib' */
static volatile CONST(float32, APMR_VAR_INIT) KeAPMR_t_EnableLINCommDelay = 1.0F;/* Referenced by: '<S35>/Calib' */
static volatile CONST(float32, APMR_VAR_INIT) KeAPMR_t_LOCTimer = 2.5F;/* Referenced by: '<S72>/Calib' */
static volatile CONST(float32, APMR_VAR_INIT) KeAPMR_t_LimitedLOCTimer = 2.5F;/* Referenced by: '<S71>/Calib' */
static volatile CONST(float32, APMR_VAR_INIT) KeAPMR_t_MinPostRun = 1.0F;
                              /* Referenced by: '<S5>/Mode_Request_Managment' */
static volatile CONST(float32, APMR_VAR_INIT) KeAPMR_t_PostRunTimer = 2.0F;
                              /* Referenced by: '<S5>/Mode_Request_Managment' */
static volatile CONST(uint8, APMR_VAR_INIT) KeAPMR_t_RTCTimeSecond = 0U;/* Referenced by: '<S192>/Constant1' */
static volatile CONST(uint16, APMR_VAR_INIT) KeAPMR_t_WU_TimerValue = 0U;/* Referenced by: '<S185>/Constant1' */
static volatile CONST(float32, APMR_VAR_INIT) KeAPMR_t_WakeupTimer = 30.0F;
                              /* Referenced by: '<S5>/Mode_Request_Managment' */
static volatile CONST(float32, APMR_VAR_INIT) KeAPMR_t_ePTHWTurnOffDly = 0.15F;/* Referenced by: '<S73>/Calib' */
static volatile CONST(float32, APMR_VAR_INIT) KeAPMR_t_initTimer = 0.0F;
                              /* Referenced by: '<S5>/Mode_Request_Managment' */
static volatile CONST(uint8, APMR_VAR_INIT) KeAPMR_tdy_RTCTimeDay = 0U;/* Referenced by: '<S189>/Constant1' */
static volatile CONST(uint8, APMR_VAR_INIT) KeAPMR_thr_RTCTimeHour = 0U;/* Referenced by: '<S190>/Constant1' */
static volatile CONST(uint8, APMR_VAR_INIT) KeAPMR_tmn_RTCTimeMinute = 0U;/* Referenced by: '<S191>/Constant1' */
static volatile CONST(uint8, APMR_VAR_INIT) KeAPMR_tmt_RTCTimeMonth = 0U;/* Referenced by: '<S188>/Constant1' */
static volatile CONST(uint8, APMR_VAR_INIT) KeAPMR_tyr_RTCTimeYear = 0U;/* Referenced by: '<S186>/Constant1' */

#define STOP_SEC_CALIB_UNSPECIFIED_APMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_APMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, APMR_VAR_INIT) VeAPMC_b_EnableAlarm;/* '<S7>/AND1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMC_b_EnblThrmlRelay;/* '<S9>/AND' */
static VAR(boolean, APMR_VAR_INIT) VeAPMC_b_OBCMRun;/* '<S6>/Logical Operator7' */
static VAR(boolean, APMR_VAR_INIT) VeAPMC_b_PCU_EndRequestFlag;/* '<S74>/OR1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMC_b_PCU_PwrUpRelay;/* '<S12>/Equal' */
static VAR(boolean, APMR_VAR_INIT) VeAPMC_b_Run;/* '<S6>/Logical Operator8' */
static VAR(boolean, APMR_VAR_INIT) VeAPMC_b_Wakeup;/* '<S6>/Logical Operator9' */
static VAR(TeAPMR_e_HCPShutDwnCmd, APMR_VAR_INIT) VeAPMC_e_HCPShtdwnCmnd;/* '<S68>/Switch1' */
static VAR(TeAPMR_e_ModeReq, APMR_VAR_INIT) VeAPMC_e_ModeReq;/* '<S41>/Switch1' */
static VAR(TeAPMR_e_ModeReq, APMR_VAR_INIT) VeAPMC_e_ModeReq_Arb;/* '<S52>/Switch1' */
static VAR(TeAPMR_e_SysState, APMR_VAR_INIT) VeAPMC_e_SysState;/* '<S5>/Mode_Request_Managment' */
static VAR(TeAPMR_e_EptLOC_DiagEnable, APMR_VAR_INIT) VeAPMC_e_ePTLOCDiagEnable;/* '<S69>/Switch1' */
static VAR(uint8, APMR_VAR_INIT) VeAPMC_g_CANEnable;/* '<S8>/Switch1' */
static VAR(uint32, APMR_VAR_INIT) VeAPMC_g_WakeupActv;/* '<S82>/Switch23' */
static VAR(uint8, APMR_VAR_INIT) VeAPMC_tdy_AlarmDay;/* '<S7>/Data Type Conversion' */
static VAR(uint8, APMR_VAR_INIT) VeAPMC_thr_AlarmHours;/* '<S7>/Divide10' */
static VAR(uint8, APMR_VAR_INIT) VeAPMC_tm_AlarmMinutes;/* '<S7>/Divide9' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_BonnetSts;/* '<S155>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_ChargeNow;/* '<S153>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_ClimateReq;/* '<S197>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_CntrlPwrHold;/* '<S169>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_DriverDoorSts;/* '<S156>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_Drv_Dr_Unlocking;/* '<S157>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_DsblThrmlRelay;/* '<S92>/AND' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_EnableCANC;/* '<S171>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_EnblLIN;/* '<S174>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_EnblThrmlRelay;/* '<S112>/OR1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_IDCM_Wakeup_HCP_FD11;/* '<S167>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_IDCM_Wakeup_HCP_FD5;/* '<S168>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_IgnAccRun;/* '<S163>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_IgnRunCrnk;/* '<S162>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_OBCMWup;/* '<S166>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_RemStActvSts_R;/* '<S160>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_SmtPwrPanWakeUp;/* '<S164>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_Submit_ClimateSchd1;/* '<S176>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_Submit_ClimateSchd2;/* '<S187>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_Submit_Schedule1;/* '<S154>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_Submit_Schedule2;/* '<S165>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_TBM_ChargeNow;/* '<S198>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_TBM_SubmitClimateSchd1;/* '<S200>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_TBM_SubmitClimateSchd2;/* '<S201>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_TBM_Submit_Schedule1;/* '<S202>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_TBM_Submit_Schedule2;/* '<S203>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMI_b_ThrmlSystRly_EnblCmnd;/* '<S170>/Switch1' */
static VAR(TePMDR_e_PowerMode, APMR_VAR_INIT) VeAPMI_e_CmdIgnSts;/* '<S161>/Switch1' */
static VAR(TeAPMR_e_CommStatus, APMR_VAR_INIT) VeAPMI_e_CommStatus_DCAN;/* '<S184>/Switch1' */
static VAR(TeAPMR_e_CommStatus, APMR_VAR_INIT) VeAPMI_e_CommStatus_FD11;/* '<S178>/Switch1' */
static VAR(TeAPMR_e_CommStatus, APMR_VAR_INIT) VeAPMI_e_CommStatus_FD14;/* '<S179>/Switch1' */
static VAR(TeAPMR_e_CommStatus, APMR_VAR_INIT) VeAPMI_e_CommStatus_FD16;/* '<S180>/Switch1' */
static VAR(TeAPMR_e_CommStatus, APMR_VAR_INIT) VeAPMI_e_CommStatus_FD3;/* '<S175>/Switch1' */
static VAR(TeAPMR_e_CommStatus, APMR_VAR_INIT) VeAPMI_e_CommStatus_FD5;/* '<S177>/Switch1' */
static VAR(TeAPMR_e_CommStatus, APMR_VAR_INIT) VeAPMI_e_CommStatus_LIN1;/* '<S181>/Switch1' */
static VAR(TeAPMR_e_CommStatus, APMR_VAR_INIT) VeAPMI_e_CommStatus_LIN2;/* '<S182>/Switch1' */
static VAR(TeAPMR_e_CommStatus, APMR_VAR_INIT) VeAPMI_e_CommStatus_LIN3;/* '<S183>/Switch1' */
static VAR(TeCITR_e_FOTA_Install_Type, APMR_VAR_INIT) VeAPMI_e_FOTA_Install_Type;/* '<S158>/Switch1' */
static VAR(TeCITR_e_FOTA_Install_Status, APMR_VAR_INIT)
    VeAPMI_e_FOTA_Installation_Sts;    /* '<S159>/Switch1' */
static VAR(TeAPMR_e_ModeReq, APMR_VAR_INIT) VeAPMI_e_ModulPwrModeStatus;/* '<S172>/Switch1' */
static VAR(TeAPMR_e_NvMStatus, APMR_VAR_INIT) VeAPMI_e_NVM_Status;/* '<S199>/Switch1' */
static VAR(TeDFIB_e_RTCCallSts, APMR_VAR_INIT) VeAPMI_e_RTCProgramWakeupError;/* '<S194>/Switch1' */
static VAR(TeDFIB_e_RTCCallSts, APMR_VAR_INIT) VeAPMI_e_RTCReadSts;/* '<S193>/Switch1' */
static VAR(TeDFIB_e_RTCWakeupTypes, APMR_VAR_INIT) VeAPMI_e_RTCWakeupReason;/* '<S173>/Switch1' */
static VAR(TeCITR_e_RmtChargePortCmd, APMR_VAR_INIT)
    VeAPMI_e_Remote_Chargeport_Cmnd;   /* '<S195>/Switch1' */
static VAR(TeCITR_e_CoopChargeCmd, APMR_VAR_INIT)
    VeAPMI_e_TBMCooperativeChrgCmnd;   /* '<S196>/Switch1' */
static VAR(uint8, APMR_VAR_INIT) VeAPMI_t_RTCTimeSecond;/* '<S192>/Switch1' */
static VAR(uint16, APMR_VAR_INIT) VeAPMI_t_WU_TimerValue;/* '<S185>/Switch1' */
static VAR(uint8, APMR_VAR_INIT) VeAPMI_tdy_RTCTimeDay;/* '<S189>/Switch1' */
static VAR(uint8, APMR_VAR_INIT) VeAPMI_thr_RTCTimeHour;/* '<S190>/Switch1' */
static VAR(uint8, APMR_VAR_INIT) VeAPMI_tmn_RTCTimeMinute;/* '<S191>/Switch1' */
static VAR(uint8, APMR_VAR_INIT) VeAPMI_tmt_RTCTimeMonth;/* '<S188>/Switch1' */
static VAR(uint8, APMR_VAR_INIT) VeAPMI_tyr_RTCTimeYear;/* '<S186>/Switch1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMR_b_CAN_NoComm;/* '<S6>/OR' */
static VAR(boolean, APMR_VAR_INIT) VeAPMR_b_LIN_NoComm;/* '<S6>/OR1' */
static VAR(boolean, APMR_VAR_INIT) VeAPMR_b_LinRelay;/* '<S5>/Mode_Request_Managment' */
static VAR(boolean, APMR_VAR_INIT) VeAPMR_b_NVMWriteComplete;/* '<S6>/Equal12' */
static VAR(boolean, APMR_VAR_INIT) VeAPMR_b_RTCRdy4Shtdwn;/* '<S6>/OR2' */
static VAR(TeAPMR_e_SysState, APMR_VAR_INIT) VeAPMR_e_Src_Mode;/* '<S5>/Mode_Request_Managment' */
static VAR(float32, APMR_VAR_INIT) VeAPMR_t_StateTimer;/* '<S5>/Mode_Request_Managment' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_APMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_APMR
#include "MemMap.h"

VAR(DW_APMR_ac_T, APMR_VAR_INIT) APMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_APMR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, APMR_CODE) APMR_MedTEB(void) /* Explicit Task: MedTEB */
{
    static const sint8 d[12] =
    {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    static const sint8 e[12] =
    {
        31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    float64 tmp;
    sint32 month_num;
    sint32 tmp_0;
    float32 rtb_Switch1_e;
    float32 rtb_Switch1_m0;
    float32 rtb_Switch_la;
    uint32 Add13;
    uint32 rtb_Switch1;
    uint32 rtb_VeAPMC_tdy_DayNo;
    uint16 rtb_Add9;
    uint16 rtb_TmpSignalConversionAtVeSSDR;
    NvM_RequestResultType tmpRead_e;
    TeAPMR_e_ModeReq rtb_Switch2_l2;
    TeDFIB_e_RTCCallSts rtb_TmpSignalConversionAtVeDF_a;
    TeDFIB_e_RTCCallSts rtb_TmpSignalConversionAtVeD_gx;
    TeDFIB_e_RTCWakeupTypes rtb_TmpSignalConversionAtVeDF_h;
    uint8 rtb_TmpSignalConversionAtVeDFIB;
    uint8 rtb_TmpSignalConversionAtVeDF_c;
    uint8 rtb_TmpSignalConversionAtVeDF_f;
    uint8 rtb_TmpSignalConversionAtVeDF_n;
    uint8 rtb_TmpSignalConversionAtVeDF_o;
    uint8 rtb_TmpSignalConversionAtVeDF_p;
    uint8 tmpRead;
    uint8 tmpRead_0;
    uint8 tmpRead_1;
    uint8 tmpRead_2;
    uint8 tmpRead_3;
    uint8 tmpRead_4;
    uint8 tmpRead_5;
    uint8 tmpRead_6;
    uint8 tmpRead_7;
    uint8 tmpRead_8;
    uint8 tmpRead_9;
    uint8 tmpRead_a;
    uint8 tmpRead_b;
    uint8 tmpRead_c;
    uint8 tmpRead_d;
    boolean rtb_TmpSignalConversionAtVeCANR;
    boolean rtb_TmpSignalConversionAtVeCA_a;
    boolean rtb_TmpSignalConversionAtVeCA_c;
    boolean rtb_TmpSignalConversionAtVeCA_k;
    boolean rtb_TmpSignalConversionAtVeCA_m;
    boolean rtb_TmpSignalConversionAtVeCA_n;
    boolean rtb_TmpSignalConversionAtVeCA_o;
    boolean rtb_TmpSignalConversionAtVeC_hh;
    boolean rtb_TmpSignalConversionAtVeC_kf;
    boolean rtb_TmpSignalConversionAtVeC_lr;
    boolean rtb_TmpSignalConversionAtVeHPMR;
    boolean rtb_TmpSignalConversionAtVeHP_b;
    boolean rtb_TmpSignalConversionAtVePMDB;
    boolean rtb_TmpSignalConversionAtVePMTR;
    boolean rtb_TmpSignalConversionAtVePM_a;
    boolean rtb_TmpSignalConversionAtVePM_m;
    boolean rtb_TmpSignalConversionAtVeP_im;
    boolean rtb_TmpSignalConversionAtVeSR1B;
    boolean rtb_TmpSignalConversionAtVeSR_b;
    boolean rtb_TmpSignalConversionAtVeSR_c;
    boolean rtb_TmpSignalConversionAtVeSR_d;
    boolean rtb_TmpSignalConversionAtVeSR_e;
    boolean rtb_TmpSignalConversionAtVeSR_j;
    boolean rtb_TmpSignalConversionAtVeSS_a;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeSR1B_b_ChargeNow' incorporates:
     *  Inport: '<Root>/VeSR1B_b_ChargeNow'
     */
    (void)Rte_Read_VeSR1B_b_ChargeNow_Value(&rtb_TmpSignalConversionAtVeSR1B);

    /* SignalConversion generated from: '<S1>/VeCANR_b_TBM_Charge_Now' incorporates:
     *  Inport: '<Root>/VeCANR_b_TBM_Charge_Now'
     */
    (void)Rte_Read_VeCANR_b_TBM_Charge_Now_VeCANR_b_TBM_Charge_Now
        (&rtb_TmpSignalConversionAtVeCANR);

VeCANR_b_TBM_Charge_Now_APMR_ac_Test_1 = rtb_TmpSignalConversionAtVeCANR;

    /* SignalConversion generated from: '<S1>/VeCANR_b_Submit_Schedule1' incorporates:
     *  Inport: '<Root>/VeCANR_b_Submit_Schedule1'
     */
    (void)Rte_Read_VeCANR_b_Submit_Schedule1_VeCANR_b_Submit_Schedule1
        (&rtb_TmpSignalConversionAtVeCA_c);

VeCANR_b_Submit_Schedule1_APMR_ac_Test_1 = rtb_TmpSignalConversionAtVeCA_c;

    /* SignalConversion generated from: '<S1>/VeCANR_b_Submit_Schedule2' incorporates:
     *  Inport: '<Root>/VeCANR_b_Submit_Schedule2'
     */
    (void)Rte_Read_VeCANR_b_Submit_Schedule2_VeCANR_b_Submit_Schedule2
        (&rtb_TmpSignalConversionAtVeCA_m);

VeCANR_b_Submit_Schedule2_APMR_ac_Test_1 = rtb_TmpSignalConversionAtVeCA_m;

    /* SignalConversion generated from: '<S1>/VeCANR_b_TBM_Submit_Schedule1' incorporates:
     *  Inport: '<Root>/VeCANR_b_TBM_Submit_Schedule1'
     */
    (void)Rte_Read_VeCANR_b_TBM_Submit_Schedule1_VeCANR_b_TBM_Submit_Schedule1
        (&rtb_TmpSignalConversionAtVeCA_n);

VeCANR_b_TBM_Submit_Schedule1_APMR_ac_Test_1 = rtb_TmpSignalConversionAtVeCA_n;

    /* SignalConversion generated from: '<S1>/VeCANR_b_TBM_Submit_Schedule2' incorporates:
     *  Inport: '<Root>/VeCANR_b_TBM_Submit_Schedule2'
     */
    (void)Rte_Read_VeCANR_b_TBM_Submit_Schedule2_VeCANR_b_TBM_Submit_Schedule2
        (&rtb_TmpSignalConversionAtVeC_kf);

VeCANR_b_TBM_Submit_Schedule2_APMR_ac_Test_1 = rtb_TmpSignalConversionAtVeC_kf;

    /* SignalConversion generated from: '<S1>/VeCANR_b_Submit_ClimateSchd1' incorporates:
     *  Inport: '<Root>/VeCANR_b_Submit_ClimateSchd1'
     */
    (void)Rte_Read_VeCANR_b_Submit_ClimateSchd1_VeCANR_b_Submit_ClimateSchd1
        (&rtb_TmpSignalConversionAtVeCA_a);

VeCANR_b_Submit_ClimateSchd1_APMR_ac_Test_1 = rtb_TmpSignalConversionAtVeCA_a;

    /* SignalConversion generated from: '<S1>/VeCANR_b_Submit_ClimateSchd2' incorporates:
     *  Inport: '<Root>/VeCANR_b_Submit_ClimateSchd2'
     */
    (void)Rte_Read_VeCANR_b_Submit_ClimateSchd2_VeCANR_b_Submit_ClimateSchd2
        (&rtb_TmpSignalConversionAtVeC_hh);

VeCANR_b_Submit_ClimateSchd2_APMR_ac_Test_1 = rtb_TmpSignalConversionAtVeC_hh;

    /* SignalConversion generated from: '<S1>/VeCANR_b_TBM_SubmitClimateSchd1' incorporates:
     *  Inport: '<Root>/VeCANR_b_TBM_SubmitClimateSchd1'
     */
    (void)
        Rte_Read_VeCANR_b_TBM_SubmitClimateSchd1_VeCANR_b_TBM_SubmitClimateSchd1
        (&rtb_TmpSignalConversionAtVeCA_k);

VeCANR_b_TBM_SubmitClimateSchd1_APMR_ac_Test_1 = rtb_TmpSignalConversionAtVeCA_k;

    /* SignalConversion generated from: '<S1>/VeCANR_b_TBM_SubmitClimateSchd2' incorporates:
     *  Inport: '<Root>/VeCANR_b_TBM_SubmitClimateSchd2'
     */
    (void)
        Rte_Read_VeCANR_b_TBM_SubmitClimateSchd2_VeCANR_b_TBM_SubmitClimateSchd2
        (&rtb_TmpSignalConversionAtVeC_lr);

VeCANR_b_TBM_SubmitClimateSchd2_APMR_ac_Test_1 = rtb_TmpSignalConversionAtVeC_lr;

    /* SignalConversion generated from: '<S1>/VeSR1B_b_BonnetSts' incorporates:
     *  Inport: '<Root>/VeSR1B_b_BonnetSts'
     */
    (void)Rte_Read_VeSR1B_b_BonnetSts_Value(&rtb_TmpSignalConversionAtVeSR_j);

    /* SignalConversion generated from: '<S1>/VeSR1B_b_DriverDoorSts' incorporates:
     *  Inport: '<Root>/VeSR1B_b_DriverDoorSts'
     */
    (void)Rte_Read_VeSR1B_b_DriverDoorSts_Value(&rtb_TmpSignalConversionAtVeSR_e);

    /* SignalConversion generated from: '<S1>/VeSR1B_b_DRV_DR_UNLOCKING' incorporates:
     *  Inport: '<Root>/VeSR1B_b_DRV_DR_UNLOCKING'
     */
    (void)Rte_Read_VeSR1B_b_DRV_DR_UNLOCKING_Value
        (&rtb_TmpSignalConversionAtVeSR_b);

    /* SignalConversion generated from: '<S1>/VeSR1B_b_RemStActvSts_R' incorporates:
     *  Inport: '<Root>/VeSR1B_b_RemStActvSts_R'
     */
    (void)Rte_Read_VeSR1B_b_RemStActvSts_R_Value
        (&rtb_TmpSignalConversionAtVeSR_c);

    /* SignalConversion generated from: '<S1>/VePMDB_b_IgnRunCrnk' incorporates:
     *  Inport: '<Root>/VePMDB_b_IgnRunCrnk'
     */
    (void)Rte_Read_VePMDB_b_IgnRunCrnk_Value(&rtb_TmpSignalConversionAtVePMDB);

    /* SignalConversion generated from: '<S1>/VePMDB_b_IgnAccRun' incorporates:
     *  Inport: '<Root>/VePMDB_b_IgnAccRun'
     */
    (void)Rte_Read_VePMDB_b_IgnAccRun_Value(&rtb_TmpSignalConversionAtVeP_im);

    /* SignalConversion generated from: '<S1>/VePMDB_b_SmtPwrPanWakeUp' incorporates:
     *  Inport: '<Root>/VePMDB_b_SmtPwrPanWakeUp'
     */
    (void)Rte_Read_VePMDB_b_SmtPwrPanWakeUp_Value
        (&rtb_TmpSignalConversionAtVePM_a);

    /* SignalConversion generated from: '<S1>/VePMDB_b_OBCMWup' incorporates:
     *  Inport: '<Root>/VePMDB_b_OBCMWup'
     */
    (void)Rte_Read_VePMDB_b_OBCMWup_Value(&rtb_TmpSignalConversionAtVePM_m);

    /* SignalConversion generated from: '<S1>/VeCANR_b_IDCM_Wakeup_HCP_FD11' incorporates:
     *  Inport: '<Root>/VeCANR_b_IDCM_Wakeup_HCP_FD11'
     */
    (void)Rte_Read_VeCANR_b_IDCM_Wakeup_HCP_FD11_VeCANR_b_IDCM_Wakeup_HCP_FD11
        (&rtb_TmpSignalConversionAtVeCA_o);

VeCANR_b_IDCM_Wakeup_HCP_FD11_APMR_ac_Test_1 = rtb_TmpSignalConversionAtVeCA_o;

    /* SignalConversion generated from: '<S1>/VeHPMR_b_CntrlPwrHold' incorporates:
     *  Inport: '<Root>/VeHPMR_b_CntrlrPwrHold'
     */
    (void)Rte_Read_VeHPMR_b_CntrlrPwrHold_Value(&rtb_TmpSignalConversionAtVeHPMR);

    /* SignalConversion generated from: '<S1>/VePMTR_b_ThrmlSystRly_EnblCmnd' incorporates:
     *  Inport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd'
     */
    (void)Rte_Read_VePMTR_b_ThrmlSystRly_EnblCmnd_Value
        (&rtb_TmpSignalConversionAtVePMTR);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_EnableCANC' incorporates:
     *  Inport: '<Root>/VeHPMR_b_EnableCANC'
     */
    (void)Rte_Read_VeHPMR_b_EnableCANC_Value(&rtb_TmpSignalConversionAtVeHP_b);

    /* SignalConversion generated from: '<S1>/VeDFIB_e_RTCWakeupReason' incorporates:
     *  Inport: '<Root>/VeDFIB_e_RTCWakeupReason'
     */
    (void)Rte_Read_VeDFIB_e_RTCWakeupReason_Value
        (&rtb_TmpSignalConversionAtVeDF_h);

    /* SignalConversion generated from: '<S1>/VeSSDR_b_EnblLIN' incorporates:
     *  Inport: '<Root>/VeSSDR_b_EnblLIN'
     */
    (void)Rte_Read_VeSSDR_b_EnblLIN_Value(&rtb_TmpSignalConversionAtVeSS_a);

    /* SignalConversion generated from: '<S1>/VeSSDR_t_WU_TimerValue' incorporates:
     *  Inport: '<Root>/VeSSDR_t_WU_TimerValue'
     */
    (void)Rte_Read_VeSSDR_t_WU_TimerValue_Value(&rtb_TmpSignalConversionAtVeSSDR);

    /* SignalConversion generated from: '<S1>/VeDFIB_tyr_RTCTimeYear' incorporates:
     *  Inport: '<Root>/VeDFIB_tyr_RTCTimeYear'
     */
    (void)Rte_Read_VeDFIB_tyr_RTCTimeYear_Value(&rtb_TmpSignalConversionAtVeDFIB);

    /* SignalConversion generated from: '<S1>/VeDFIB_tmt_RTCTimeMonth' incorporates:
     *  Inport: '<Root>/VeDFIB_tmt_RTCTimeMonth'
     */
    (void)Rte_Read_VeDFIB_tmt_RTCTimeMonth_Value
        (&rtb_TmpSignalConversionAtVeDF_p);

    /* SignalConversion generated from: '<S1>/VeDFIB_tdy_RTCTimeDay' incorporates:
     *  Inport: '<Root>/VeDFIB_tdy_RTCTimeDay'
     */
    (void)Rte_Read_VeDFIB_tdy_RTCTimeDay_Value(&rtb_TmpSignalConversionAtVeDF_o);

    /* SignalConversion generated from: '<S1>/VeDFIB_thr_RTCTimeHour' incorporates:
     *  Inport: '<Root>/VeDFIB_thr_RTCTimeHour'
     */
    (void)Rte_Read_VeDFIB_thr_RTCTimeHour_Value(&rtb_TmpSignalConversionAtVeDF_n);

    /* SignalConversion generated from: '<S1>/VeDFIB_tmn_RTCTimeMinute' incorporates:
     *  Inport: '<Root>/VeDFIB_tmn_RTCTimeMinute'
     */
    (void)Rte_Read_VeDFIB_tmn_RTCTimeMinute_Value
        (&rtb_TmpSignalConversionAtVeDF_c);

    /* SignalConversion generated from: '<S1>/VeDFIB_t_RTCTimeSecond' incorporates:
     *  Inport: '<Root>/VeDFIB_t_RTCTimeSecond'
     */
    (void)Rte_Read_VeDFIB_t_RTCTimeSecond_Value(&rtb_TmpSignalConversionAtVeDF_f);

    /* SignalConversion generated from: '<S1>/VeDFIB_e_RTCReadSts' incorporates:
     *  Inport: '<Root>/VeDFIB_e_RTCReadSts'
     */
    (void)Rte_Read_VeDFIB_e_RTCReadSts_Value(&rtb_TmpSignalConversionAtVeDF_a);

    /* SignalConversion generated from: '<S1>/VeDFIB_e_RTCProgramWakeupError' incorporates:
     *  Inport: '<Root>/VeDFIB_e_RTCProgramWakeupError'
     */
    (void)Rte_Read_VeDFIB_e_RTCProgramWakeupError_Value
        (&rtb_TmpSignalConversionAtVeD_gx);

    /* SignalConversion generated from: '<S1>/VeSR1B_b_ClimateReq' incorporates:
     *  Inport: '<Root>/VeSR1B_b_ClimateReq'
     */
    (void)Rte_Read_VeSR1B_b_ClimateReq_Value(&rtb_TmpSignalConversionAtVeSR_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_FOTA_Install_Type' */
    (void)Rte_Read_VeSR1B_y_FOTA_Install_Type_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S153>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     *  Switch: '<S154>/Switch1'
     *  Switch: '<S155>/Switch1'
     *  Switch: '<S156>/Switch1'
     *  Switch: '<S157>/Switch1'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S153>/Switch' incorporates:
         *  Constant: '<S153>/Constant'
         */
        if (KeAPMR_b_OvrdChargeNow)
        {
            /* Switch: '<S153>/Switch1' incorporates:
             *  Constant: '<S153>/Constant1'
             */
            VeAPMI_b_ChargeNow = KeAPMR_b_ChargeNow;
        }
        else
        {
            /* Switch: '<S153>/Switch1' */
            VeAPMI_b_ChargeNow = rtb_TmpSignalConversionAtVeSR1B;
        }

        /* End of Switch: '<S153>/Switch' */

        /* Switch: '<S154>/Switch' incorporates:
         *  Constant: '<S154>/Constant'
         */
        if (KeAPMR_b_OvrdSubmit_Schedule1)
        {
            /* Switch: '<S154>/Switch1' incorporates:
             *  Constant: '<S154>/Constant1'
             */
            VeAPMI_b_Submit_Schedule1 = KeAPMR_b_Submit_Schedule1;
        }
        else
        {
            /* Switch: '<S154>/Switch1' */
            VeAPMI_b_Submit_Schedule1 = rtb_TmpSignalConversionAtVeCA_c;
        }

        /* End of Switch: '<S154>/Switch' */

        /* Switch: '<S155>/Switch' incorporates:
         *  Constant: '<S155>/Constant'
         */
        if (KeAPMR_b_OvrdBonnetSts)
        {
            /* Switch: '<S155>/Switch1' incorporates:
             *  Constant: '<S155>/Constant1'
             */
            VeAPMI_b_BonnetSts = KeAPMR_b_BonnetSts;
        }
        else
        {
            /* Switch: '<S155>/Switch1' */
            VeAPMI_b_BonnetSts = rtb_TmpSignalConversionAtVeSR_j;
        }

        /* End of Switch: '<S155>/Switch' */

        /* Switch: '<S156>/Switch' incorporates:
         *  Constant: '<S156>/Constant'
         */
        if (KeAPMR_b_OvrdDriverDoorSts)
        {
            /* Switch: '<S156>/Switch1' incorporates:
             *  Constant: '<S156>/Constant1'
             */
            VeAPMI_b_DriverDoorSts = KeAPMR_b_DriverDoorSts;
        }
        else
        {
            /* Switch: '<S156>/Switch1' */
            VeAPMI_b_DriverDoorSts = rtb_TmpSignalConversionAtVeSR_e;
        }

        /* End of Switch: '<S156>/Switch' */

        /* Switch: '<S157>/Switch' incorporates:
         *  Constant: '<S157>/Constant'
         */
        if (KeAPMR_b_OvrdDrv_Dr_Unlocking)
        {
            /* Switch: '<S157>/Switch1' incorporates:
             *  Constant: '<S157>/Constant1'
             */
            VeAPMI_b_Drv_Dr_Unlocking = KeAPMR_b_Drv_Dr_Unlocking;
        }
        else
        {
            /* Switch: '<S157>/Switch1' */
            VeAPMI_b_Drv_Dr_Unlocking = rtb_TmpSignalConversionAtVeSR_b;
        }

        /* End of Switch: '<S157>/Switch' */
    }
    else
    {
        /* Switch: '<S153>/Switch1' */
        VeAPMI_b_ChargeNow = rtb_TmpSignalConversionAtVeSR1B;

        /* Switch: '<S154>/Switch1' */
        VeAPMI_b_Submit_Schedule1 = rtb_TmpSignalConversionAtVeCA_c;

        /* Switch: '<S155>/Switch1' */
        VeAPMI_b_BonnetSts = rtb_TmpSignalConversionAtVeSR_j;

        /* Switch: '<S156>/Switch1' */
        VeAPMI_b_DriverDoorSts = rtb_TmpSignalConversionAtVeSR_e;

        /* Switch: '<S157>/Switch1' */
        VeAPMI_b_Drv_Dr_Unlocking = rtb_TmpSignalConversionAtVeSR_b;
    }

    /* End of Switch: '<S153>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_FOTA_Installation_Sts' */
    (void)Rte_Read_VeSR1B_y_FOTA_Installation_Sts_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S158>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S158>/Switch' incorporates:
         *  Constant: '<S158>/Constant'
         */
        if (KeAPMR_b_OvrdFOTA_Install_Type)
        {
            /* Switch: '<S158>/Switch1' incorporates:
             *  Constant: '<S158>/Constant1'
             */
            VeAPMI_e_FOTA_Install_Type = KeAPMR_e_FOTA_Install_Type;
        }
        else
        {
            /* Switch: '<S158>/Switch1' incorporates:
             *  DataTypeConversion: '<S204>/DataTypeConversion'
             */
            VeAPMI_e_FOTA_Install_Type = tmpRead;
        }

        /* End of Switch: '<S158>/Switch' */
    }
    else
    {
        /* Switch: '<S158>/Switch1' incorporates:
         *  DataTypeConversion: '<S204>/DataTypeConversion'
         */
        VeAPMI_e_FOTA_Install_Type = tmpRead;
    }

    /* End of Switch: '<S158>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_CmdIgnSts' */
    (void)Rte_Read_VeSR1B_y_CmdIgnSts_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S159>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     *  Switch: '<S160>/Switch1'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S159>/Switch' incorporates:
         *  Constant: '<S159>/Constant'
         */
        if (KeAPMR_b_OvrdFOTA_Installation_Sts)
        {
            /* Switch: '<S159>/Switch1' incorporates:
             *  Constant: '<S159>/Constant1'
             */
            VeAPMI_e_FOTA_Installation_Sts = KeAPMR_e_FOTA_Installation_Sts;
        }
        else
        {
            /* Switch: '<S159>/Switch1' incorporates:
             *  DataTypeConversion: '<S205>/DataTypeConversion'
             */
            VeAPMI_e_FOTA_Installation_Sts = tmpRead_0;
        }

        /* End of Switch: '<S159>/Switch' */

        /* Switch: '<S160>/Switch' incorporates:
         *  Constant: '<S160>/Constant'
         */
        if (KeAPMR_b_OvrdRemStActvSts_R)
        {
            /* Switch: '<S160>/Switch1' incorporates:
             *  Constant: '<S160>/Constant1'
             */
            VeAPMI_b_RemStActvSts_R = KeAPMR_b_RemStActvSts_R;
        }
        else
        {
            /* Switch: '<S160>/Switch1' */
            VeAPMI_b_RemStActvSts_R = rtb_TmpSignalConversionAtVeSR_c;
        }

        /* End of Switch: '<S160>/Switch' */
    }
    else
    {
        /* Switch: '<S159>/Switch1' incorporates:
         *  DataTypeConversion: '<S205>/DataTypeConversion'
         */
        VeAPMI_e_FOTA_Installation_Sts = tmpRead_0;

        /* Switch: '<S160>/Switch1' */
        VeAPMI_b_RemStActvSts_R = rtb_TmpSignalConversionAtVeSR_c;
    }

    /* End of Switch: '<S159>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeAPMR_e_ModulPwrModeStatus' */
    (void)Rte_Read_VeAPMR_e_ModulPwrModeStatus_Mode(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S161>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     *  Switch: '<S162>/Switch1'
     *  Switch: '<S163>/Switch1'
     *  Switch: '<S164>/Switch1'
     *  Switch: '<S165>/Switch1'
     *  Switch: '<S166>/Switch1'
     *  Switch: '<S167>/Switch1'
     *  Switch: '<S168>/Switch1'
     *  Switch: '<S169>/Switch1'
     *  Switch: '<S170>/Switch1'
     *  Switch: '<S171>/Switch1'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S161>/Switch' incorporates:
         *  Constant: '<S161>/Constant'
         */
        if (KeAPMR_b_OvrdCmdIgnSts)
        {
            /* Switch: '<S161>/Switch1' incorporates:
             *  Constant: '<S161>/Constant1'
             */
            VeAPMI_e_CmdIgnSts = KeAPMR_e_CmdIgnSts;
        }
        else
        {
            /* Switch: '<S161>/Switch1' incorporates:
             *  Constant: '<S219>/Calib'
             *  Selector: '<S4>/Selector'
             */
            VeAPMI_e_CmdIgnSts = KaAPMR_e_PowerModeRaw_Map[(tmpRead_1)];
        }

        /* End of Switch: '<S161>/Switch' */

        /* Switch: '<S162>/Switch' incorporates:
         *  Constant: '<S162>/Constant'
         */
        if (KeAPMR_b_OvrdIgnRunCrnk)
        {
            /* Switch: '<S162>/Switch1' incorporates:
             *  Constant: '<S162>/Constant1'
             */
            VeAPMI_b_IgnRunCrnk = KeAPMR_b_IgnRunCrnk;
        }
        else
        {
            /* Switch: '<S162>/Switch1' */
            VeAPMI_b_IgnRunCrnk = rtb_TmpSignalConversionAtVePMDB;
        }

        /* End of Switch: '<S162>/Switch' */

        /* Switch: '<S163>/Switch' incorporates:
         *  Constant: '<S163>/Constant'
         */
        if (KeAPMR_b_OvrdIgnAccRun)
        {
            /* Switch: '<S163>/Switch1' incorporates:
             *  Constant: '<S163>/Constant1'
             */
            VeAPMI_b_IgnAccRun = KeAPMR_b_IgnAccRun;
        }
        else
        {
            /* Switch: '<S163>/Switch1' */
            VeAPMI_b_IgnAccRun = rtb_TmpSignalConversionAtVeP_im;
        }

        /* End of Switch: '<S163>/Switch' */

        /* Switch: '<S164>/Switch' incorporates:
         *  Constant: '<S164>/Constant'
         */
        if (KeAPMR_b_OvrdSmtPwrPanWakeUp)
        {
            /* Switch: '<S164>/Switch1' incorporates:
             *  Constant: '<S164>/Constant1'
             */
            VeAPMI_b_SmtPwrPanWakeUp = KeAPMR_b_SmtPwrPanWakeUp;
        }
        else
        {
            /* Switch: '<S164>/Switch1' */
            VeAPMI_b_SmtPwrPanWakeUp = rtb_TmpSignalConversionAtVePM_a;
        }

        /* End of Switch: '<S164>/Switch' */

        /* Switch: '<S165>/Switch' incorporates:
         *  Constant: '<S165>/Constant'
         */
        if (KeAPMR_b_OvrdSubmit_Schedule2)
        {
            /* Switch: '<S165>/Switch1' incorporates:
             *  Constant: '<S165>/Constant1'
             */
            VeAPMI_b_Submit_Schedule2 = KeAPMR_b_Submit_Schedule2;
        }
        else
        {
            /* Switch: '<S165>/Switch1' */
            VeAPMI_b_Submit_Schedule2 = rtb_TmpSignalConversionAtVeCA_m;
        }

        /* End of Switch: '<S165>/Switch' */

        /* Switch: '<S166>/Switch' incorporates:
         *  Constant: '<S166>/Constant'
         */
        if (KeAPMR_b_OvrdOBCMWup)
        {
            /* Switch: '<S166>/Switch1' incorporates:
             *  Constant: '<S166>/Constant1'
             */
            VeAPMI_b_OBCMWup = KeAPMR_b_OBCMWup;
        }
        else
        {
            /* Switch: '<S166>/Switch1' */
            VeAPMI_b_OBCMWup = rtb_TmpSignalConversionAtVePM_m;
        }

        /* End of Switch: '<S166>/Switch' */

        /* Switch: '<S167>/Switch' incorporates:
         *  Constant: '<S167>/Constant'
         */
        if (KeAPMR_b_OvrdIDCM_Wakeup_FD11)
        {
            /* Switch: '<S167>/Switch1' incorporates:
             *  Constant: '<S167>/Constant1'
             */
            VeAPMI_b_IDCM_Wakeup_HCP_FD11 = KeAPMR_b_IDCM_Wakeup_FD11;
        }
        else
        {
            /* Switch: '<S167>/Switch1' */
            VeAPMI_b_IDCM_Wakeup_HCP_FD11 = rtb_TmpSignalConversionAtVeCA_o;
        }

        /* End of Switch: '<S167>/Switch' */

        /* Switch: '<S168>/Switch1' incorporates:
         *  Constant: '<S168>/Constant'
         *  Constant: '<S168>/Constant1'
         *  Switch: '<S168>/Switch'
         */
        VeAPMI_b_IDCM_Wakeup_HCP_FD5 = ((KeAPMR_b_OvrdIDCM_Wakeup_FD5) &&
            (KeAPMR_b_IDCM_Wakeup_FD5));

        /* Switch: '<S169>/Switch' incorporates:
         *  Constant: '<S169>/Constant'
         */
        if (KeAPMR_b_OvrdCntrlPwrHold)
        {
            /* Switch: '<S169>/Switch1' incorporates:
             *  Constant: '<S169>/Constant1'
             */
            VeAPMI_b_CntrlPwrHold = KeAPMR_b_CntrlPwrHold;
        }
        else
        {
            /* Switch: '<S169>/Switch1' */
            VeAPMI_b_CntrlPwrHold = rtb_TmpSignalConversionAtVeHPMR;
        }

        /* End of Switch: '<S169>/Switch' */

        /* Switch: '<S170>/Switch' incorporates:
         *  Constant: '<S170>/Constant'
         */
        if (KeAPMR_b_OvrdThrmlSystRly_EnblCmnd)
        {
            /* Switch: '<S170>/Switch1' incorporates:
             *  Constant: '<S170>/Constant1'
             */
            VeAPMI_b_ThrmlSystRly_EnblCmnd = KeAPMR_b_ThrmlSystRly_EnblCmnd;
        }
        else
        {
            /* Switch: '<S170>/Switch1' */
            VeAPMI_b_ThrmlSystRly_EnblCmnd = rtb_TmpSignalConversionAtVePMTR;
        }

        /* End of Switch: '<S170>/Switch' */

        /* Switch: '<S171>/Switch' incorporates:
         *  Constant: '<S171>/Constant'
         */
        if (KeAPMR_b_OvrdEnableCANC)
        {
            /* Switch: '<S171>/Switch1' incorporates:
             *  Constant: '<S171>/Constant1'
             */
            VeAPMI_b_EnableCANC = KeAPMR_b_EnableCANC;
        }
        else
        {
            /* Switch: '<S171>/Switch1' */
            VeAPMI_b_EnableCANC = rtb_TmpSignalConversionAtVeHP_b;
        }

        /* End of Switch: '<S171>/Switch' */
    }
    else
    {
        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S219>/Calib'
         *  Selector: '<S4>/Selector'
         */
        VeAPMI_e_CmdIgnSts = KaAPMR_e_PowerModeRaw_Map[(tmpRead_1)];

        /* Switch: '<S162>/Switch1' */
        VeAPMI_b_IgnRunCrnk = rtb_TmpSignalConversionAtVePMDB;

        /* Switch: '<S163>/Switch1' */
        VeAPMI_b_IgnAccRun = rtb_TmpSignalConversionAtVeP_im;

        /* Switch: '<S164>/Switch1' */
        VeAPMI_b_SmtPwrPanWakeUp = rtb_TmpSignalConversionAtVePM_a;

        /* Switch: '<S165>/Switch1' */
        VeAPMI_b_Submit_Schedule2 = rtb_TmpSignalConversionAtVeCA_m;

        /* Switch: '<S166>/Switch1' */
        VeAPMI_b_OBCMWup = rtb_TmpSignalConversionAtVePM_m;

        /* Switch: '<S167>/Switch1' */
        VeAPMI_b_IDCM_Wakeup_HCP_FD11 = rtb_TmpSignalConversionAtVeCA_o;

        /* Switch: '<S168>/Switch1' incorporates:
         *  Constant: '<S4>/Constant'
         */
        VeAPMI_b_IDCM_Wakeup_HCP_FD5 = false;

        /* Switch: '<S169>/Switch1' */
        VeAPMI_b_CntrlPwrHold = rtb_TmpSignalConversionAtVeHPMR;

        /* Switch: '<S170>/Switch1' */
        VeAPMI_b_ThrmlSystRly_EnblCmnd = rtb_TmpSignalConversionAtVePMTR;

        /* Switch: '<S171>/Switch1' */
        VeAPMI_b_EnableCANC = rtb_TmpSignalConversionAtVeHP_b;
    }

    /* End of Switch: '<S161>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/PP_COMM_CurrentMode_VeCANR_e_CommStatus_FD3' */
    (void)Rte_Read_PP_COMM_CurrentMode_VeCANR_e_CommStatus_FD3(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S172>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     *  Switch: '<S173>/Switch1'
     *  Switch: '<S174>/Switch1'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S172>/Switch' incorporates:
         *  Constant: '<S172>/Constant'
         */
        if (KeAPMR_b_OvrdModulPwrModeStatus)
        {
            /* Switch: '<S172>/Switch1' incorporates:
             *  Constant: '<S172>/Constant1'
             */
            VeAPMI_e_ModulPwrModeStatus = KeAPMR_e_ModulPwrModeStatus;
        }
        else
        {
            /* Switch: '<S172>/Switch1' incorporates:
             *  DataTypeConversion: '<S211>/DataTypeConversion'
             */
            VeAPMI_e_ModulPwrModeStatus = tmpRead_2;
        }

        /* End of Switch: '<S172>/Switch' */

        /* Switch: '<S173>/Switch' incorporates:
         *  Constant: '<S173>/Constant'
         */
        if (KeAPMR_b_OvrdRTCWakeupReason)
        {
            /* Switch: '<S173>/Switch1' incorporates:
             *  Constant: '<S173>/Constant1'
             */
            VeAPMI_e_RTCWakeupReason = KeAPMR_e_RTCWakeupReason;
        }
        else
        {
            /* Switch: '<S173>/Switch1' incorporates:
             *  SignalConversion generated from: '<S1>/VeDFIB_e_RTCWakeupReason'
             */
            VeAPMI_e_RTCWakeupReason = rtb_TmpSignalConversionAtVeDF_h;
        }

        /* End of Switch: '<S173>/Switch' */

        /* Switch: '<S174>/Switch' incorporates:
         *  Constant: '<S174>/Constant'
         */
        if (KeAPMR_b_OvrdEnblLIN)
        {
            /* Switch: '<S174>/Switch1' incorporates:
             *  Constant: '<S174>/Constant1'
             */
            VeAPMI_b_EnblLIN = KeAPMR_b_EnblLIN;
        }
        else
        {
            /* Switch: '<S174>/Switch1' */
            VeAPMI_b_EnblLIN = rtb_TmpSignalConversionAtVeSS_a;
        }

        /* End of Switch: '<S174>/Switch' */
    }
    else
    {
        /* Switch: '<S172>/Switch1' incorporates:
         *  DataTypeConversion: '<S211>/DataTypeConversion'
         */
        VeAPMI_e_ModulPwrModeStatus = tmpRead_2;

        /* Switch: '<S173>/Switch1' incorporates:
         *  SignalConversion generated from: '<S1>/VeDFIB_e_RTCWakeupReason'
         */
        VeAPMI_e_RTCWakeupReason = rtb_TmpSignalConversionAtVeDF_h;

        /* Switch: '<S174>/Switch1' */
        VeAPMI_b_EnblLIN = rtb_TmpSignalConversionAtVeSS_a;
    }

    /* End of Switch: '<S172>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/PP_COMM_CurrentMode_VeCANR_e_CommStatus_FD5' */
    (void)Rte_Read_PP_COMM_CurrentMode_VeCANR_e_CommStatus_FD5(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S175>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     *  Switch: '<S176>/Switch1'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S175>/Switch' incorporates:
         *  Constant: '<S175>/Constant'
         */
        if (KeAPMR_b_OvrdCommStatus_FD3)
        {
            /* Switch: '<S175>/Switch1' incorporates:
             *  Constant: '<S175>/Constant1'
             */
            VeAPMI_e_CommStatus_FD3 = KeAPMR_e_CommStatus_FD3;
        }
        else
        {
            /* Switch: '<S175>/Switch1' incorporates:
             *  DataTypeConversion: '<S215>/DataTypeConversion'
             */
            VeAPMI_e_CommStatus_FD3 = tmpRead_3;
        }

        /* End of Switch: '<S175>/Switch' */

        /* Switch: '<S176>/Switch' incorporates:
         *  Constant: '<S176>/Constant'
         */
        if (KeAPMR_b_OvrdSubmit_ClimateSchd1)
        {
            /* Switch: '<S176>/Switch1' incorporates:
             *  Constant: '<S176>/Constant1'
             */
            VeAPMI_b_Submit_ClimateSchd1 = KeAPMR_b_Submit_ClimateSchd1;
        }
        else
        {
            /* Switch: '<S176>/Switch1' */
            VeAPMI_b_Submit_ClimateSchd1 = rtb_TmpSignalConversionAtVeCA_a;
        }

        /* End of Switch: '<S176>/Switch' */
    }
    else
    {
        /* Switch: '<S175>/Switch1' incorporates:
         *  DataTypeConversion: '<S215>/DataTypeConversion'
         */
        VeAPMI_e_CommStatus_FD3 = tmpRead_3;

        /* Switch: '<S176>/Switch1' */
        VeAPMI_b_Submit_ClimateSchd1 = rtb_TmpSignalConversionAtVeCA_a;
    }

    /* End of Switch: '<S175>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/PP_COMM_CurrentMode_VeCANR_e_CommStatus_FD11' */
    (void)Rte_Read_PP_COMM_CurrentMode_VeCANR_e_CommStatus_FD11(&tmpRead_5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S177>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S177>/Switch' incorporates:
         *  Constant: '<S177>/Constant'
         */
        if (KeAPMR_b_OvrdCommStatus_FD5)
        {
            /* Switch: '<S177>/Switch1' incorporates:
             *  Constant: '<S177>/Constant1'
             */
            VeAPMI_e_CommStatus_FD5 = KeAPMR_e_CommStatus_FD5;
        }
        else
        {
            /* Switch: '<S177>/Switch1' incorporates:
             *  DataTypeConversion: '<S216>/DataTypeConversion'
             */
            VeAPMI_e_CommStatus_FD5 = tmpRead_4;
        }

        /* End of Switch: '<S177>/Switch' */
    }
    else
    {
        /* Switch: '<S177>/Switch1' incorporates:
         *  DataTypeConversion: '<S216>/DataTypeConversion'
         */
        VeAPMI_e_CommStatus_FD5 = tmpRead_4;
    }

    /* End of Switch: '<S177>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/PP_COMM_CurrentMode_VeCANR_e_CommStatus_FD14' */
    (void)Rte_Read_PP_COMM_CurrentMode_VeCANR_e_CommStatus_FD14(&tmpRead_6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S178>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S178>/Switch' incorporates:
         *  Constant: '<S178>/Constant'
         */
        if (KeAPMR_b_OvrdCommStatus_FD11)
        {
            /* Switch: '<S178>/Switch1' incorporates:
             *  Constant: '<S178>/Constant1'
             */
            VeAPMI_e_CommStatus_FD11 = KeAPMR_e_CommStatus_FD11;
        }
        else
        {
            /* Switch: '<S178>/Switch1' incorporates:
             *  DataTypeConversion: '<S217>/DataTypeConversion'
             */
            VeAPMI_e_CommStatus_FD11 = tmpRead_5;
        }

        /* End of Switch: '<S178>/Switch' */
    }
    else
    {
        /* Switch: '<S178>/Switch1' incorporates:
         *  DataTypeConversion: '<S217>/DataTypeConversion'
         */
        VeAPMI_e_CommStatus_FD11 = tmpRead_5;
    }

    /* End of Switch: '<S178>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/PP_COMM_CurrentMode_VeCANR_e_CommStatus_FD16' */
    (void)Rte_Read_PP_COMM_CurrentMode_VeCANR_e_CommStatus_FD16(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S179>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S179>/Switch' incorporates:
         *  Constant: '<S179>/Constant'
         */
        if (KeAPMR_b_OvrdCommStatus_FD14)
        {
            /* Switch: '<S179>/Switch1' incorporates:
             *  Constant: '<S179>/Constant1'
             */
            VeAPMI_e_CommStatus_FD14 = KeAPMR_e_CommStatus_FD14;
        }
        else
        {
            /* Switch: '<S179>/Switch1' incorporates:
             *  DataTypeConversion: '<S218>/DataTypeConversion'
             */
            VeAPMI_e_CommStatus_FD14 = tmpRead_6;
        }

        /* End of Switch: '<S179>/Switch' */
    }
    else
    {
        /* Switch: '<S179>/Switch1' incorporates:
         *  DataTypeConversion: '<S218>/DataTypeConversion'
         */
        VeAPMI_e_CommStatus_FD14 = tmpRead_6;
    }

    /* End of Switch: '<S179>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/PP_COMM_CurrentMode_VeCANR_e_CommStatus_LIN1' */
    (void)Rte_Read_PP_COMM_CurrentMode_VeCANR_e_CommStatus_LIN1(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S180>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S180>/Switch' incorporates:
         *  Constant: '<S180>/Constant'
         */
        if (KeAPMR_b_OvrdCommStatus_FD16)
        {
            /* Switch: '<S180>/Switch1' incorporates:
             *  Constant: '<S180>/Constant1'
             */
            VeAPMI_e_CommStatus_FD16 = KeAPMR_e_CommStatus_FD16;
        }
        else
        {
            /* Switch: '<S180>/Switch1' incorporates:
             *  DataTypeConversion: '<S206>/DataTypeConversion'
             */
            VeAPMI_e_CommStatus_FD16 = tmpRead_7;
        }

        /* End of Switch: '<S180>/Switch' */
    }
    else
    {
        /* Switch: '<S180>/Switch1' incorporates:
         *  DataTypeConversion: '<S206>/DataTypeConversion'
         */
        VeAPMI_e_CommStatus_FD16 = tmpRead_7;
    }

    /* End of Switch: '<S180>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/PP_COMM_CurrentMode_VeCANR_e_CommStatus_LIN2' */
    (void)Rte_Read_PP_COMM_CurrentMode_VeCANR_e_CommStatus_LIN2(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S181>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S181>/Switch' incorporates:
         *  Constant: '<S181>/Constant'
         */
        if (KeAPMR_b_OvrdCommStatus_LIN1)
        {
            /* Switch: '<S181>/Switch1' incorporates:
             *  Constant: '<S181>/Constant1'
             */
            VeAPMI_e_CommStatus_LIN1 = KeAPMR_e_CommStatus_LIN1;
        }
        else
        {
            /* Switch: '<S181>/Switch1' incorporates:
             *  DataTypeConversion: '<S207>/DataTypeConversion'
             */
            VeAPMI_e_CommStatus_LIN1 = tmpRead_8;
        }

        /* End of Switch: '<S181>/Switch' */
    }
    else
    {
        /* Switch: '<S181>/Switch1' incorporates:
         *  DataTypeConversion: '<S207>/DataTypeConversion'
         */
        VeAPMI_e_CommStatus_LIN1 = tmpRead_8;
    }

    /* End of Switch: '<S181>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/PP_COMM_CurrentMode_VeCANR_e_CommStatus_LIN3' */
    (void)Rte_Read_PP_COMM_CurrentMode_VeCANR_e_CommStatus_LIN3(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S182>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S182>/Switch' incorporates:
         *  Constant: '<S182>/Constant'
         */
        if (KeAPMR_b_OvrdCommStatus_LIN2)
        {
            /* Switch: '<S182>/Switch1' incorporates:
             *  Constant: '<S182>/Constant1'
             */
            VeAPMI_e_CommStatus_LIN2 = KeAPMR_e_CommStatus_LIN2;
        }
        else
        {
            /* Switch: '<S182>/Switch1' incorporates:
             *  DataTypeConversion: '<S208>/DataTypeConversion'
             */
            VeAPMI_e_CommStatus_LIN2 = tmpRead_9;
        }

        /* End of Switch: '<S182>/Switch' */
    }
    else
    {
        /* Switch: '<S182>/Switch1' incorporates:
         *  DataTypeConversion: '<S208>/DataTypeConversion'
         */
        VeAPMI_e_CommStatus_LIN2 = tmpRead_9;
    }

    /* End of Switch: '<S182>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/PP_COMM_CurrentMode_VeCANR_e_CommStatus_DCAN' */
    (void)Rte_Read_PP_COMM_CurrentMode_VeCANR_e_CommStatus_DCAN(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S183>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S183>/Switch' incorporates:
         *  Constant: '<S183>/Constant'
         */
        if (KeAPMR_b_OvrdCommStatus_LIN3)
        {
            /* Switch: '<S183>/Switch1' incorporates:
             *  Constant: '<S183>/Constant1'
             */
            VeAPMI_e_CommStatus_LIN3 = KeAPMR_e_CommStatus_LIN3;
        }
        else
        {
            /* Switch: '<S183>/Switch1' incorporates:
             *  DataTypeConversion: '<S209>/DataTypeConversion'
             */
            VeAPMI_e_CommStatus_LIN3 = tmpRead_a;
        }

        /* End of Switch: '<S183>/Switch' */
    }
    else
    {
        /* Switch: '<S183>/Switch1' incorporates:
         *  DataTypeConversion: '<S209>/DataTypeConversion'
         */
        VeAPMI_e_CommStatus_LIN3 = tmpRead_a;
    }

    /* End of Switch: '<S183>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_e_Remote_Chargeport_Cmnd' */
    (void)
        Rte_Read_VeCANR_e_Remote_Chargeport_Cmnd_VeCANR_e_Remote_Chargeport_Cmnd
        (&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S184>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     *  Switch: '<S185>/Switch1'
     *  Switch: '<S186>/Switch1'
     *  Switch: '<S187>/Switch1'
     *  Switch: '<S188>/Switch1'
     *  Switch: '<S189>/Switch1'
     *  Switch: '<S190>/Switch1'
     *  Switch: '<S191>/Switch1'
     *  Switch: '<S192>/Switch1'
     *  Switch: '<S193>/Switch1'
     *  Switch: '<S194>/Switch1'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S184>/Switch' incorporates:
         *  Constant: '<S184>/Constant'
         */
        if (KeAPMR_b_OvrdCommStatus_DCAN)
        {
            /* Switch: '<S184>/Switch1' incorporates:
             *  Constant: '<S184>/Constant1'
             */
            VeAPMI_e_CommStatus_DCAN = KeAPMR_e_CommStatus_DCAN;
        }
        else
        {
            /* Switch: '<S184>/Switch1' incorporates:
             *  DataTypeConversion: '<S210>/DataTypeConversion'
             */
            VeAPMI_e_CommStatus_DCAN = tmpRead_b;
        }

        /* End of Switch: '<S184>/Switch' */

        /* Switch: '<S185>/Switch' incorporates:
         *  Constant: '<S185>/Constant'
         */
        if (KeAPMR_b_OvrdWU_TimerValue)
        {
            /* Switch: '<S185>/Switch1' incorporates:
             *  Constant: '<S185>/Constant1'
             */
            VeAPMI_t_WU_TimerValue = KeAPMR_t_WU_TimerValue;
        }
        else
        {
            /* Switch: '<S185>/Switch1' */
            VeAPMI_t_WU_TimerValue = rtb_TmpSignalConversionAtVeSSDR;
        }

        /* End of Switch: '<S185>/Switch' */

        /* Switch: '<S186>/Switch' incorporates:
         *  Constant: '<S186>/Constant'
         */
        if (KeAPMR_b_OvrdRTCTimeYear)
        {
            /* Switch: '<S186>/Switch1' incorporates:
             *  Constant: '<S186>/Constant1'
             */
            VeAPMI_tyr_RTCTimeYear = KeAPMR_tyr_RTCTimeYear;
        }
        else
        {
            /* Switch: '<S186>/Switch1' */
            VeAPMI_tyr_RTCTimeYear = rtb_TmpSignalConversionAtVeDFIB;
        }

        /* End of Switch: '<S186>/Switch' */

        /* Switch: '<S187>/Switch' incorporates:
         *  Constant: '<S187>/Constant'
         */
        if (KeAPMR_b_OvrdSubmit_ClimateSchd2)
        {
            /* Switch: '<S187>/Switch1' incorporates:
             *  Constant: '<S187>/Constant1'
             */
            VeAPMI_b_Submit_ClimateSchd2 = KeAPMR_b_Submit_ClimateSchd2;
        }
        else
        {
            /* Switch: '<S187>/Switch1' */
            VeAPMI_b_Submit_ClimateSchd2 = rtb_TmpSignalConversionAtVeC_hh;
        }

        /* End of Switch: '<S187>/Switch' */

        /* Switch: '<S188>/Switch' incorporates:
         *  Constant: '<S188>/Constant'
         */
        if (KeAPMR_b_OvrdRTCTimeMonth)
        {
            /* Switch: '<S188>/Switch1' incorporates:
             *  Constant: '<S188>/Constant1'
             */
            VeAPMI_tmt_RTCTimeMonth = KeAPMR_tmt_RTCTimeMonth;
        }
        else
        {
            /* Switch: '<S188>/Switch1' */
            VeAPMI_tmt_RTCTimeMonth = rtb_TmpSignalConversionAtVeDF_p;
        }

        /* End of Switch: '<S188>/Switch' */

        /* Switch: '<S189>/Switch' incorporates:
         *  Constant: '<S189>/Constant'
         */
        if (KeAPMR_b_OvrdRTCTimeDay)
        {
            /* Switch: '<S189>/Switch1' incorporates:
             *  Constant: '<S189>/Constant1'
             */
            VeAPMI_tdy_RTCTimeDay = KeAPMR_tdy_RTCTimeDay;
        }
        else
        {
            /* Switch: '<S189>/Switch1' */
            VeAPMI_tdy_RTCTimeDay = rtb_TmpSignalConversionAtVeDF_o;
        }

        /* End of Switch: '<S189>/Switch' */

        /* Switch: '<S190>/Switch' incorporates:
         *  Constant: '<S190>/Constant'
         */
        if (KeAPMR_b_OvrdRTCTimeHour)
        {
            /* Switch: '<S190>/Switch1' incorporates:
             *  Constant: '<S190>/Constant1'
             */
            VeAPMI_thr_RTCTimeHour = KeAPMR_thr_RTCTimeHour;
        }
        else
        {
            /* Switch: '<S190>/Switch1' */
            VeAPMI_thr_RTCTimeHour = rtb_TmpSignalConversionAtVeDF_n;
        }

        /* End of Switch: '<S190>/Switch' */

        /* Switch: '<S191>/Switch' incorporates:
         *  Constant: '<S191>/Constant'
         */
        if (KeAPMR_b_OvrdRTCTimeMinute)
        {
            /* Switch: '<S191>/Switch1' incorporates:
             *  Constant: '<S191>/Constant1'
             */
            VeAPMI_tmn_RTCTimeMinute = KeAPMR_tmn_RTCTimeMinute;
        }
        else
        {
            /* Switch: '<S191>/Switch1' */
            VeAPMI_tmn_RTCTimeMinute = rtb_TmpSignalConversionAtVeDF_c;
        }

        /* End of Switch: '<S191>/Switch' */

        /* Switch: '<S192>/Switch' incorporates:
         *  Constant: '<S192>/Constant'
         */
        if (KeAPMR_b_OvrdRTCTimeSecond)
        {
            /* Switch: '<S192>/Switch1' incorporates:
             *  Constant: '<S192>/Constant1'
             */
            VeAPMI_t_RTCTimeSecond = KeAPMR_t_RTCTimeSecond;
        }
        else
        {
            /* Switch: '<S192>/Switch1' */
            VeAPMI_t_RTCTimeSecond = rtb_TmpSignalConversionAtVeDF_f;
        }

        /* End of Switch: '<S192>/Switch' */

        /* Switch: '<S193>/Switch' incorporates:
         *  Constant: '<S193>/Constant'
         */
        if (KeAPMR_b_OvrdRTCReadSts)
        {
            /* Switch: '<S193>/Switch1' incorporates:
             *  Constant: '<S193>/Constant1'
             */
            VeAPMI_e_RTCReadSts = KeAPMR_e_RTCReadSts;
        }
        else
        {
            /* Switch: '<S193>/Switch1' incorporates:
             *  SignalConversion generated from: '<S1>/VeDFIB_e_RTCReadSts'
             */
            VeAPMI_e_RTCReadSts = rtb_TmpSignalConversionAtVeDF_a;
        }

        /* End of Switch: '<S193>/Switch' */

        /* Switch: '<S194>/Switch' incorporates:
         *  Constant: '<S194>/Constant'
         */
        if (KeAPMR_b_OvrdRTCProgramWakeupError)
        {
            /* Switch: '<S194>/Switch1' incorporates:
             *  Constant: '<S194>/Constant1'
             */
            VeAPMI_e_RTCProgramWakeupError = KeAPMR_e_RTCProgramWakeupError;
        }
        else
        {
            /* Switch: '<S194>/Switch1' incorporates:
             *  SignalConversion generated from: '<S1>/VeDFIB_e_RTCProgramWakeupError'
             */
            VeAPMI_e_RTCProgramWakeupError = rtb_TmpSignalConversionAtVeD_gx;
        }

        /* End of Switch: '<S194>/Switch' */
    }
    else
    {
        /* Switch: '<S184>/Switch1' incorporates:
         *  DataTypeConversion: '<S210>/DataTypeConversion'
         */
        VeAPMI_e_CommStatus_DCAN = tmpRead_b;

        /* Switch: '<S185>/Switch1' */
        VeAPMI_t_WU_TimerValue = rtb_TmpSignalConversionAtVeSSDR;

        /* Switch: '<S186>/Switch1' */
        VeAPMI_tyr_RTCTimeYear = rtb_TmpSignalConversionAtVeDFIB;

        /* Switch: '<S187>/Switch1' */
        VeAPMI_b_Submit_ClimateSchd2 = rtb_TmpSignalConversionAtVeC_hh;

        /* Switch: '<S188>/Switch1' */
        VeAPMI_tmt_RTCTimeMonth = rtb_TmpSignalConversionAtVeDF_p;

        /* Switch: '<S189>/Switch1' */
        VeAPMI_tdy_RTCTimeDay = rtb_TmpSignalConversionAtVeDF_o;

        /* Switch: '<S190>/Switch1' */
        VeAPMI_thr_RTCTimeHour = rtb_TmpSignalConversionAtVeDF_n;

        /* Switch: '<S191>/Switch1' */
        VeAPMI_tmn_RTCTimeMinute = rtb_TmpSignalConversionAtVeDF_c;

        /* Switch: '<S192>/Switch1' */
        VeAPMI_t_RTCTimeSecond = rtb_TmpSignalConversionAtVeDF_f;

        /* Switch: '<S193>/Switch1' incorporates:
         *  SignalConversion generated from: '<S1>/VeDFIB_e_RTCReadSts'
         */
        VeAPMI_e_RTCReadSts = rtb_TmpSignalConversionAtVeDF_a;

        /* Switch: '<S194>/Switch1' incorporates:
         *  SignalConversion generated from: '<S1>/VeDFIB_e_RTCProgramWakeupError'
         */
        VeAPMI_e_RTCProgramWakeupError = rtb_TmpSignalConversionAtVeD_gx;
    }

    /* End of Switch: '<S184>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_e_TBMCooperativeChrgCmnd' */
    (void)
        Rte_Read_VeCANR_e_TBMCooperativeChrgCmnd_VeCANR_e_TBMCooperativeChrgCmnd
        (&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S195>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S195>/Switch' incorporates:
         *  Constant: '<S195>/Constant'
         */
        if (KeAPMR_b_OvrdRemote_Chargeport_Cmnd)
        {
            /* Switch: '<S195>/Switch1' incorporates:
             *  Constant: '<S195>/Constant1'
             */
            VeAPMI_e_Remote_Chargeport_Cmnd = KeAPMR_e_Remote_Chargeport_Cmnd;
        }
        else
        {
            /* Switch: '<S195>/Switch1' incorporates:
             *  DataTypeConversion: '<S213>/DataTypeConversion'
             */
            VeAPMI_e_Remote_Chargeport_Cmnd = tmpRead_c;
        }

        /* End of Switch: '<S195>/Switch' */
    }
    else
    {
        /* Switch: '<S195>/Switch1' incorporates:
         *  DataTypeConversion: '<S213>/DataTypeConversion'
         */
        VeAPMI_e_Remote_Chargeport_Cmnd = tmpRead_c;
    }

    /* End of Switch: '<S195>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/PP_NvM_Status' */
    (void)Rte_Read_PP_NvM_Status_NVM_Multiblock_WriteStatus(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* Switch: '<S196>/Switch1' incorporates:
     *  Constant: '<S220>/Calib'
     *  Switch: '<S197>/Switch1'
     *  Switch: '<S198>/Switch1'
     *  Switch: '<S199>/Switch1'
     *  Switch: '<S200>/Switch1'
     *  Switch: '<S201>/Switch1'
     *  Switch: '<S202>/Switch1'
     *  Switch: '<S203>/Switch1'
     */
    if (KeAPMR_b_EnblInpOvrd)
    {
        /* Switch: '<S196>/Switch' incorporates:
         *  Constant: '<S196>/Constant'
         */
        if (KeAPMR_b_OvrdTBMCooperativeChrgCmnd)
        {
            /* Switch: '<S196>/Switch1' incorporates:
             *  Constant: '<S196>/Constant1'
             */
            VeAPMI_e_TBMCooperativeChrgCmnd = KeAPMR_e_TBMCooperativeChrgCmnd;
        }
        else
        {
            /* Switch: '<S196>/Switch1' incorporates:
             *  DataTypeConversion: '<S212>/DataTypeConversion'
             */
            VeAPMI_e_TBMCooperativeChrgCmnd = tmpRead_d;
        }

        /* End of Switch: '<S196>/Switch' */

        /* Switch: '<S197>/Switch' incorporates:
         *  Constant: '<S197>/Constant'
         */
        if (KeAPMR_b_OvrdClimateReq)
        {
            /* Switch: '<S197>/Switch1' incorporates:
             *  Constant: '<S197>/Constant1'
             */
            VeAPMI_b_ClimateReq = KeAPMR_b_ClimateReq;
        }
        else
        {
            /* Switch: '<S197>/Switch1' */
            VeAPMI_b_ClimateReq = rtb_TmpSignalConversionAtVeSR_d;
        }

        /* End of Switch: '<S197>/Switch' */

        /* Switch: '<S198>/Switch' incorporates:
         *  Constant: '<S198>/Constant'
         */
        if (KeAPMR_b_OvrdTBM_ChargeNow)
        {
            /* Switch: '<S198>/Switch1' incorporates:
             *  Constant: '<S198>/Constant1'
             */
            VeAPMI_b_TBM_ChargeNow = KeAPMR_b_TBM_ChargeNow;
        }
        else
        {
            /* Switch: '<S198>/Switch1' */
            VeAPMI_b_TBM_ChargeNow = rtb_TmpSignalConversionAtVeCANR;
        }

        /* End of Switch: '<S198>/Switch' */

        /* Switch: '<S199>/Switch' incorporates:
         *  Constant: '<S199>/Constant'
         */
        if (KeAPMR_b_OvrdNVM_Status)
        {
            /* Switch: '<S199>/Switch1' incorporates:
             *  Constant: '<S199>/Constant1'
             */
            VeAPMI_e_NVM_Status = KeAPMR_e_NVM_Status;
        }
        else
        {
            /* Switch: '<S199>/Switch1' incorporates:
             *  DataTypeConversion: '<S214>/DataTypeConversion'
             *  Inport: '<Root>/PP_NvM_Status'
             */
            VeAPMI_e_NVM_Status = tmpRead_e;
        }

        /* End of Switch: '<S199>/Switch' */

        /* Switch: '<S200>/Switch' incorporates:
         *  Constant: '<S200>/Constant'
         */
        if (KeAPMR_b_OvrdTBM_SubmitClimateSchd1)
        {
            /* Switch: '<S200>/Switch1' incorporates:
             *  Constant: '<S200>/Constant1'
             */
            VeAPMI_b_TBM_SubmitClimateSchd1 = KeAPMR_b_TBM_SubmitClimateSchd1;
        }
        else
        {
            /* Switch: '<S200>/Switch1' */
            VeAPMI_b_TBM_SubmitClimateSchd1 = rtb_TmpSignalConversionAtVeCA_k;
        }

        /* End of Switch: '<S200>/Switch' */

        /* Switch: '<S201>/Switch' incorporates:
         *  Constant: '<S201>/Constant'
         */
        if (KeAPMR_b_OvrdTBM_SubmitClimateSchd2)
        {
            /* Switch: '<S201>/Switch1' incorporates:
             *  Constant: '<S201>/Constant1'
             */
            VeAPMI_b_TBM_SubmitClimateSchd2 = KeAPMR_b_TBM_SubmitClimateSchd2;
        }
        else
        {
            /* Switch: '<S201>/Switch1' */
            VeAPMI_b_TBM_SubmitClimateSchd2 = rtb_TmpSignalConversionAtVeC_lr;
        }

        /* End of Switch: '<S201>/Switch' */

        /* Switch: '<S202>/Switch' incorporates:
         *  Constant: '<S202>/Constant'
         */
        if (KeAPMR_b_OvrdTBM_Submit_Schedule1)
        {
            /* Switch: '<S202>/Switch1' incorporates:
             *  Constant: '<S202>/Constant1'
             */
            VeAPMI_b_TBM_Submit_Schedule1 = KeAPMR_b_TBM_Submit_Schedule1;
        }
        else
        {
            /* Switch: '<S202>/Switch1' */
            VeAPMI_b_TBM_Submit_Schedule1 = rtb_TmpSignalConversionAtVeCA_n;
        }

        /* End of Switch: '<S202>/Switch' */

        /* Switch: '<S203>/Switch' incorporates:
         *  Constant: '<S203>/Constant'
         */
        if (KeAPMR_b_OvrdTBM_Submit_Schedule2)
        {
            /* Switch: '<S203>/Switch1' incorporates:
             *  Constant: '<S203>/Constant1'
             */
            VeAPMI_b_TBM_Submit_Schedule2 = KeAPMR_b_TBM_Submit_Schedule2;
        }
        else
        {
            /* Switch: '<S203>/Switch1' */
            VeAPMI_b_TBM_Submit_Schedule2 = rtb_TmpSignalConversionAtVeC_kf;
        }

        /* End of Switch: '<S203>/Switch' */
    }
    else
    {
        /* Switch: '<S196>/Switch1' incorporates:
         *  DataTypeConversion: '<S212>/DataTypeConversion'
         */
        VeAPMI_e_TBMCooperativeChrgCmnd = tmpRead_d;

        /* Switch: '<S197>/Switch1' */
        VeAPMI_b_ClimateReq = rtb_TmpSignalConversionAtVeSR_d;

        /* Switch: '<S198>/Switch1' */
        VeAPMI_b_TBM_ChargeNow = rtb_TmpSignalConversionAtVeCANR;

        /* Switch: '<S199>/Switch1' incorporates:
         *  DataTypeConversion: '<S214>/DataTypeConversion'
         *  Inport: '<Root>/PP_NvM_Status'
         */
        VeAPMI_e_NVM_Status = tmpRead_e;

        /* Switch: '<S200>/Switch1' */
        VeAPMI_b_TBM_SubmitClimateSchd1 = rtb_TmpSignalConversionAtVeCA_k;

        /* Switch: '<S201>/Switch1' */
        VeAPMI_b_TBM_SubmitClimateSchd2 = rtb_TmpSignalConversionAtVeC_lr;

        /* Switch: '<S202>/Switch1' */
        VeAPMI_b_TBM_Submit_Schedule1 = rtb_TmpSignalConversionAtVeCA_n;

        /* Switch: '<S203>/Switch1' */
        VeAPMI_b_TBM_Submit_Schedule2 = rtb_TmpSignalConversionAtVeC_kf;
    }

    /* End of Switch: '<S196>/Switch1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMC'
     */
    /* Outputs for Atomic SubSystem: '<S6>/EdgeRising' */
    /* Logic: '<S93>/AND' incorporates:
     *  Logic: '<S93>/OR1'
     *  UnitDelay: '<S93>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCA_m = ((VeAPMI_b_BonnetSts) &&
        (!APMR_ac_DW.UnitDelay_DSTATE_f));

    /* Update for UnitDelay: '<S93>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_f = VeAPMI_b_BonnetSts;

    /* End of Outputs for SubSystem: '<S6>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S6>/EdgeRising1' */
    /* RelationalOperator: '<S7>/GreaterThan' incorporates:
     *  UnitDelay: '<S94>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCA_k = APMR_ac_DW.UnitDelay_DSTATE_g;

    /* Update for UnitDelay: '<S94>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_g = VeAPMI_b_Drv_Dr_Unlocking;

    /* End of Outputs for SubSystem: '<S6>/EdgeRising1' */

    /* RelationalOperator: '<S6>/Equal9' incorporates:
     *  Constant: '<S97>/Constant'
     *  Switch: '<S173>/Switch1'
     */
    rtb_TmpSignalConversionAtVeSR1B = (((uint32)VeAPMI_e_RTCWakeupReason) ==
        CeDFIB_e_RTC_ALARM_WAKEUP);

    /* Outputs for Atomic SubSystem: '<S6>/EdgeRising2' */
    /* Logic: '<S95>/OR1' incorporates:
     *  UnitDelay: '<S95>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCA_n = !APMR_ac_DW.UnitDelay_DSTATE_l;

    /* Update for UnitDelay: '<S95>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_l = rtb_TmpSignalConversionAtVeSR1B;

    /* End of Outputs for SubSystem: '<S6>/EdgeRising2' */

    /* Logic: '<S6>/Logical Operator10' incorporates:
     *  Constant: '<S89>/Constant'
     *  Constant: '<S90>/Constant'
     *  RelationalOperator: '<S6>/Relational Operator5'
     *  RelationalOperator: '<S6>/Relational Operator6'
     *  Switch: '<S195>/Switch1'
     */
    rtb_TmpSignalConversionAtVeCANR = ((CeCITR_e_Unlock_Request == ((uint32)
        VeAPMI_e_Remote_Chargeport_Cmnd)) || (((uint32)
        VeAPMI_e_Remote_Chargeport_Cmnd) == CeCITR_e_Lock_Request));

    /* RelationalOperator: '<S6>/Relational Operator7' incorporates:
     *  Constant: '<S91>/Constant'
     *  Switch: '<S196>/Switch1'
     */
    rtb_TmpSignalConversionAtVeCA_c = (((uint32)VeAPMI_e_TBMCooperativeChrgCmnd)
        == CeCITR_e_Charge_Now);

    /* Outputs for Atomic SubSystem: '<S6>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S6>/EdgeRising2' */
    /* Logic: '<S6>/Logical Operator7' incorporates:
     *  Logic: '<S6>/Logical Operator'
     *  Logic: '<S6>/Logical Operator1'
     *  Logic: '<S6>/Logical Operator11'
     *  Logic: '<S6>/Logical Operator2'
     *  Logic: '<S6>/Logical Operator3'
     *  Logic: '<S6>/Logical Operator4'
     *  Logic: '<S94>/AND'
     *  Logic: '<S94>/OR1'
     *  Logic: '<S95>/AND'
     */
    VeAPMC_b_OBCMRun = ((((((((((VeAPMI_b_Submit_Schedule1) ||
        (VeAPMI_b_Submit_Schedule2)) || (VeAPMI_b_Submit_ClimateSchd1)) ||
        (VeAPMI_b_Submit_ClimateSchd2)) || ((((VeAPMI_b_TBM_Submit_Schedule1) ||
        (VeAPMI_b_TBM_Submit_Schedule2)) || (VeAPMI_b_TBM_SubmitClimateSchd1)) ||
        (VeAPMI_b_TBM_SubmitClimateSchd2))) || ((VeAPMI_b_ChargeNow) ||
        (VeAPMI_b_TBM_ChargeNow))) || (((VeAPMI_b_OBCMWup) ||
        (VeAPMI_b_IDCM_Wakeup_HCP_FD11)) || (VeAPMI_b_IDCM_Wakeup_HCP_FD5))) ||
                          (rtb_TmpSignalConversionAtVeCA_m ||
                           ((VeAPMI_b_Drv_Dr_Unlocking) &&
                            (!rtb_TmpSignalConversionAtVeCA_k)))) ||
                         (rtb_TmpSignalConversionAtVeSR1B &&
                          rtb_TmpSignalConversionAtVeCA_n)) ||
                        (rtb_TmpSignalConversionAtVeCANR ||
                         rtb_TmpSignalConversionAtVeCA_c));

    /* End of Outputs for SubSystem: '<S6>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S6>/EdgeRising1' */

    /* RelationalOperator: '<S6>/Relational Operator' incorporates:
     *  Constant: '<S87>/Constant'
     *  Switch: '<S158>/Switch1'
     */
    rtb_TmpSignalConversionAtVeCA_m = (((uint32)VeAPMI_e_FOTA_Install_Type) ==
        CeCITR_e_FOTANow);

    /* RelationalOperator: '<S6>/Relational Operator1' incorporates:
     *  Constant: '<S85>/Constant'
     *  RelationalOperator: '<S6>/Relational Operator'
     *  Switch: '<S158>/Switch1'
     */
    rtb_TmpSignalConversionAtVeCA_n = (((uint32)VeAPMI_e_FOTA_Install_Type) ==
        CeCITR_e_FOTASchedule);

    /* RelationalOperator: '<S6>/Relational Operator4' incorporates:
     *  Constant: '<S83>/Constant'
     *  Switch: '<S159>/Switch1'
     */
    rtb_TmpSignalConversionAtVeC_kf = (((uint32)VeAPMI_e_FOTA_Installation_Sts) ==
        CeCITR_e_Installation_Complete);

    /* Logic: '<S6>/AND' incorporates:
     *  Constant: '<S86>/Constant'
     *  Constant: '<S88>/Constant'
     *  RelationalOperator: '<S6>/Relational Operator2'
     *  RelationalOperator: '<S6>/Relational Operator3'
     *  Switch: '<S161>/Switch1'
     */
    rtb_TmpSignalConversionAtVeCA_a = ((CePMDR_e_PowerMode_Off != ((uint32)
        VeAPMI_e_CmdIgnSts)) && (((uint32)VeAPMI_e_CmdIgnSts) !=
        CePMDR_e_PowerMode_SNA));

    /* Logic: '<S6>/Logical Operator6' */
    rtb_TmpSignalConversionAtVeC_lr = ((rtb_TmpSignalConversionAtVeCA_a ||
        (VeAPMI_b_IgnRunCrnk)) || (VeAPMI_b_IgnAccRun));

    /* Outputs for Atomic SubSystem: '<S6>/EdgeRising3' */
    /* Logic: '<S96>/OR1' incorporates:
     *  UnitDelay: '<S96>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeC_hh = !APMR_ac_DW.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S96>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_p = VeAPMI_b_DriverDoorSts;

    /* Logic: '<S6>/Logical Operator8' incorporates:
     *  Logic: '<S6>/Logical Operator5'
     *  Logic: '<S96>/AND'
     */
    VeAPMC_b_Run = (((((((rtb_TmpSignalConversionAtVeCA_m ||
                          rtb_TmpSignalConversionAtVeCA_n) ||
                         rtb_TmpSignalConversionAtVeC_kf) ||
                        rtb_TmpSignalConversionAtVeC_lr) ||
                       (VeAPMI_b_SmtPwrPanWakeUp)) || ((VeAPMI_b_DriverDoorSts) &&
                       rtb_TmpSignalConversionAtVeC_hh)) ||
                     (VeAPMI_b_RemStActvSts_R)) || (VeAPMI_b_ClimateReq));

    /* End of Outputs for SubSystem: '<S6>/EdgeRising3' */

    /* Logic: '<S6>/Logical Operator9' */
    VeAPMC_b_Wakeup = ((VeAPMC_b_OBCMRun) || (VeAPMC_b_Run));

    /* Logic: '<S6>/OR' incorporates:
     *  Constant: '<S102>/Constant'
     *  Constant: '<S103>/Constant'
     *  Constant: '<S104>/Constant'
     *  Constant: '<S105>/Constant'
     *  Constant: '<S106>/Constant'
     *  Constant: '<S107>/Constant'
     *  RelationalOperator: '<S6>/Equal'
     *  RelationalOperator: '<S6>/Equal1'
     *  RelationalOperator: '<S6>/Equal2'
     *  RelationalOperator: '<S6>/Equal3'
     *  RelationalOperator: '<S6>/Equal4'
     *  RelationalOperator: '<S6>/Equal5'
     *  Switch: '<S175>/Switch1'
     *  Switch: '<S177>/Switch1'
     *  Switch: '<S178>/Switch1'
     *  Switch: '<S179>/Switch1'
     *  Switch: '<S180>/Switch1'
     *  Switch: '<S184>/Switch1'
     */
    VeAPMR_b_CAN_NoComm = ((((((((uint32)VeAPMI_e_CommStatus_FD3) ==
        CeAPMR_e_NoComm) && (((uint32)VeAPMI_e_CommStatus_FD5) ==
        CeAPMR_e_NoComm)) && (((uint32)VeAPMI_e_CommStatus_FD11) ==
        CeAPMR_e_NoComm)) && (((uint32)VeAPMI_e_CommStatus_FD14) ==
        CeAPMR_e_NoComm)) && (((uint32)VeAPMI_e_CommStatus_FD16) ==
        CeAPMR_e_NoComm)) && (((uint32)VeAPMI_e_CommStatus_DCAN) ==
                            CeAPMR_e_NoComm));

    /* Logic: '<S6>/OR1' incorporates:
     *  Constant: '<S100>/Constant'
     *  Constant: '<S108>/Constant'
     *  Constant: '<S99>/Constant'
     *  RelationalOperator: '<S6>/Equal6'
     *  RelationalOperator: '<S6>/Equal7'
     *  RelationalOperator: '<S6>/Equal8'
     *  Switch: '<S181>/Switch1'
     *  Switch: '<S182>/Switch1'
     *  Switch: '<S183>/Switch1'
     */
    VeAPMR_b_LIN_NoComm = (((((uint32)VeAPMI_e_CommStatus_LIN1) ==
        CeAPMR_e_NoComm) && (((uint32)VeAPMI_e_CommStatus_LIN2) ==
        CeAPMR_e_NoComm)) && (((uint32)VeAPMI_e_CommStatus_LIN3) ==
                            CeAPMR_e_NoComm));

    /* Outputs for Atomic SubSystem: '<S5>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S14>/EdgeFalling' */
    /* RelationalOperator: '<S7>/GreaterThan' incorporates:
     *  UnitDelay: '<S81>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCA_k = APMR_ac_DW.UnitDelay_DSTATE_hm;

    /* Update for UnitDelay: '<S81>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_hm = VeAPMI_b_CntrlPwrHold;

    /* Logic: '<S81>/OR1' incorporates:
     *  Logic: '<S14>/AND'
     */
    rtb_TmpSignalConversionAtVeSR_c = !VeAPMI_b_CntrlPwrHold;

    /* Switch: '<S14>/Switch' incorporates:
     *  Logic: '<S81>/AND'
     *  Logic: '<S81>/OR1'
     */
    if (rtb_TmpSignalConversionAtVeSR_c && rtb_TmpSignalConversionAtVeCA_k)
    {
        /* Switch: '<S14>/Switch' incorporates:
         *  Constant: '<S13>/Calib'
         */
        rtb_Switch_la = KeAPMR_t_CntrlrPwrHoldDelay;
    }
    else
    {
        /* Switch: '<S14>/Switch' incorporates:
         *  Constant: '<S111>/Calib'
         *  Constant: '<S14>/Constant Value1'
         *  MinMax: '<S14>/Minimum'
         *  Sum: '<S14>/Summation'
         *  UnitDelay: '<S14>/Unit Delay'
         */
        rtb_Switch_la = fmaxf(APMR_ac_DW.UnitDelay_DSTATE - HeAPMR_t_dT, 0.0F);
    }

    /* End of Switch: '<S14>/Switch' */
    /* End of Outputs for SubSystem: '<S14>/EdgeFalling' */

    /* Update for UnitDelay: '<S14>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE = rtb_Switch_la;

    /* End of Outputs for SubSystem: '<S5>/Turn Off Delay Time' */

    /* Logic: '<S6>/OR2' incorporates:
     *  Constant: '<S101>/Constant'
     *  Constant: '<S98>/Constant'
     *  RelationalOperator: '<S6>/Equal10'
     *  RelationalOperator: '<S6>/Equal11'
     *  Switch: '<S194>/Switch1'
     */
    VeAPMR_b_RTCRdy4Shtdwn = ((CeDFIB_e_RTCCallCompleteOK == ((uint32)
        VeAPMI_e_RTCProgramWakeupError)) || (((uint32)
        VeAPMI_e_RTCProgramWakeupError) == CeDFIB_e_RTCCallCompleteFailed));

    /* RelationalOperator: '<S6>/Equal12' incorporates:
     *  Constant: '<S84>/Constant'
     *  Switch: '<S199>/Switch1'
     */
    VeAPMR_b_NVMWriteComplete = (((uint32)VeAPMI_e_NVM_Status) !=
        CeAPMR_e_Pending);

    /* Chart: '<S5>/Mode_Request_Managment' incorporates:
     *  Constant: '<S111>/Calib'
     *  Constant: '<S14>/Constant Value2'
     *  Logic: '<S14>/AND'
     *  RelationalOperator: '<S14>/Greater  Than'
     *  Switch: '<S172>/Switch1'
     */
    /* Gateway: APMR_MedTEB/APMC/APMC/Mode_Request_Managment */
    /* During: APMR_MedTEB/APMC/APMC/Mode_Request_Managment */
    if (((uint32)APMR_ac_DW.is_active_c3_APMR_ac) == 0U)
    {
        /* Entry: APMR_MedTEB/APMC/APMC/Mode_Request_Managment */
        APMR_ac_DW.is_active_c3_APMR_ac = 1U;

        /* Entry Internal: APMR_MedTEB/APMC/APMC/Mode_Request_Managment */
        /* Transition: '<S11>:2' */
        APMR_ac_DW.is_c3_APMR_ac = APMR_ac_IN_Init;

        /* Entry 'Init': '<S11>:1' */
        VeAPMC_e_SysState = CeAPMR_e_Init;
        VeAPMR_b_LinRelay = false;
        VeAPMR_t_StateTimer = 0.0F;
    }
    else
    {
        switch (APMR_ac_DW.is_c3_APMR_ac)
        {
          case APMR_ac_IN_Init:
            VeAPMC_e_SysState = CeAPMR_e_Init;
            VeAPMR_b_LinRelay = false;

            /* During 'Init': '<S11>:1' */
            if (VeAPMR_t_StateTimer >= KeAPMR_t_initTimer)
            {
                /* Transition: '<S11>:8' */
                /* Exit 'Init': '<S11>:1' */
                VeAPMR_e_Src_Mode = CeAPMR_e_Init;
                APMR_ac_DW.is_c3_APMR_ac = APMR_ac_IN_Wakeup;

                /* Entry 'Wakeup': '<S11>:3' */
                VeAPMC_e_SysState = CeAPMR_e_Wakeup;
                VeAPMR_t_StateTimer = 0.0F;
                VeAPMR_b_LinRelay = false;
            }
            else
            {
                VeAPMR_t_StateTimer = VeAPMR_t_StateTimer + HeAPMR_t_dT;
            }
            break;

          case APMR_ac_IN_Postrun:
            VeAPMC_e_SysState = CeAPMR_e_PostRun;
            VeAPMR_b_LinRelay = false;

            /* During 'Postrun': '<S11>:5' */
            if ((((((VeAPMR_b_CAN_NoComm) && (VeAPMR_b_LIN_NoComm)) &&
                    (VeAPMR_t_StateTimer > KeAPMR_t_MinPostRun)) &&
                    (VeAPMR_b_RTCRdy4Shtdwn)) && (VeAPMR_b_NVMWriteComplete)) ||
                (VeAPMR_t_StateTimer > KeAPMR_t_CommTmout))
            {
                /* Transition: '<S11>:12' */
                /* Exit 'Postrun': '<S11>:5' */
                VeAPMR_e_Src_Mode = CeAPMR_e_PostRun;
                APMR_ac_DW.is_c3_APMR_ac = APMR_ac_IN_Shutdown;

                /* Entry 'Shutdown': '<S11>:6' */
                VeAPMC_e_SysState = CeAPMR_e_Shutdown;
                VeAPMR_t_StateTimer = 0.0F;
            }
            else if (VeAPMC_b_Wakeup)
            {
                /* Transition: '<S11>:17' */
                /* Exit 'Postrun': '<S11>:5' */
                VeAPMR_e_Src_Mode = CeAPMR_e_PostRun;
                APMR_ac_DW.is_c3_APMR_ac = APMR_ac_IN_Run;

                /* Entry 'Run': '<S11>:4' */
                VeAPMR_b_LinRelay = true;
                VeAPMR_t_StateTimer = 0.0F;

                /* Entry Internal 'Run': '<S11>:4' */
                /* Transition: '<S11>:19' */
                APMR_ac_DW.is_Run = APMR_ac_IN_Run_Charging;

                /* Entry 'Run_Charging': '<S11>:18' */
                VeAPMC_e_SysState = CeAPMR_e_Run_Charging;
            }
            else
            {
                VeAPMR_t_StateTimer = VeAPMR_t_StateTimer + HeAPMR_t_dT;
            }
            break;

          case APMR_ac_IN_Run:
            VeAPMR_b_LinRelay = true;

            /* Outputs for Atomic SubSystem: '<S5>/Turn Off Delay Time' */
            /* During 'Run': '<S11>:4' */
            if ((rtb_TmpSignalConversionAtVeSR_c && (rtb_Switch_la <= 0.0F)) &&
                    (VeAPMR_t_StateTimer >= KeAPMR_t_PostRunTimer))
            {
                /* Transition: '<S11>:11' */
                /* Exit Internal 'Run': '<S11>:4' */
                switch (APMR_ac_DW.is_Run)
                {
                  case APMR_ac_IN_Run_Charging:
                    /* Exit 'Run_Charging': '<S11>:18' */
                    VeAPMR_e_Src_Mode = CeAPMR_e_Run_Charging;
                    APMR_ac_DW.is_Run = APMR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  case APMR_ac_IN_Run_FullComm:
                    /* Exit 'Run_FullComm': '<S11>:20' */
                    VeAPMR_e_Src_Mode = CeAPMR_e_Run;
                    APMR_ac_DW.is_Run = APMR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  default:
                    APMR_ac_DW.is_Run = APMR_ac_IN_NO_ACTIVE_CHILD;
                    break;
                }

                APMR_ac_DW.is_c3_APMR_ac = APMR_ac_IN_Postrun;

                /* Entry 'Postrun': '<S11>:5' */
                VeAPMC_e_SysState = CeAPMR_e_PostRun;
                VeAPMR_t_StateTimer = 0.0F;
                VeAPMR_b_LinRelay = false;
            }
            else if (((sint32)APMR_ac_DW.is_Run) == 1)
            {
                VeAPMC_e_SysState = CeAPMR_e_Run_Charging;

                /* During 'Run_Charging': '<S11>:18' */
                if (VeAPMC_b_Run)
                {
                    /* Transition: '<S11>:21' */
                    /* Exit 'Run_Charging': '<S11>:18' */
                    VeAPMR_e_Src_Mode = CeAPMR_e_Run_Charging;
                    APMR_ac_DW.is_Run = APMR_ac_IN_Run_FullComm;

                    /* Entry 'Run_FullComm': '<S11>:20' */
                    VeAPMC_e_SysState = CeAPMR_e_Run;
                }
                else
                {
                    VeAPMR_t_StateTimer = VeAPMR_t_StateTimer + HeAPMR_t_dT;
                }
            }
            else
            {
                VeAPMC_e_SysState = CeAPMR_e_Run;

                /* During 'Run_FullComm': '<S11>:20' */
                if ((VeAPMC_b_OBCMRun) && (!VeAPMC_b_Run))
                {
                    /* Transition: '<S11>:22' */
                    /* Exit 'Run_FullComm': '<S11>:20' */
                    VeAPMR_e_Src_Mode = CeAPMR_e_Run;
                    APMR_ac_DW.is_Run = APMR_ac_IN_Run_Charging;

                    /* Entry 'Run_Charging': '<S11>:18' */
                    VeAPMC_e_SysState = CeAPMR_e_Run_Charging;
                }
                else
                {
                    VeAPMR_t_StateTimer = VeAPMR_t_StateTimer + HeAPMR_t_dT;
                }
            }

            /* End of Outputs for SubSystem: '<S5>/Turn Off Delay Time' */
            break;

          case APMR_ac_IN_Shutdown:
            VeAPMC_e_SysState = CeAPMR_e_Shutdown;

            /* During 'Shutdown': '<S11>:6' */
            if ((VeAPMC_b_Wakeup) && (((uint32)VeAPMI_e_ModulPwrModeStatus) ==
                                      CeAPMR_e_WakeupMode))
            {
                /* Transition: '<S11>:10' */
                /* Exit 'Shutdown': '<S11>:6' */
                VeAPMR_e_Src_Mode = CeAPMR_e_Shutdown;
                APMR_ac_DW.is_c3_APMR_ac = APMR_ac_IN_Run;

                /* Entry 'Run': '<S11>:4' */
                VeAPMR_b_LinRelay = true;
                VeAPMR_t_StateTimer = 0.0F;

                /* Entry Internal 'Run': '<S11>:4' */
                /* Transition: '<S11>:19' */
                APMR_ac_DW.is_Run = APMR_ac_IN_Run_Charging;

                /* Entry 'Run_Charging': '<S11>:18' */
                VeAPMC_e_SysState = CeAPMR_e_Run_Charging;
            }
            else
            {
                VeAPMR_t_StateTimer = VeAPMR_t_StateTimer + HeAPMR_t_dT;
            }
            break;

          default:
            VeAPMC_e_SysState = CeAPMR_e_Wakeup;
            VeAPMR_b_LinRelay = false;

            /* During 'Wakeup': '<S11>:3' */
            if ((VeAPMC_b_Wakeup) || (KeAPMR_b_OvrdRun))
            {
                /* Transition: '<S11>:13' */
                /* Exit 'Wakeup': '<S11>:3' */
                VeAPMR_e_Src_Mode = CeAPMR_e_Wakeup;
                APMR_ac_DW.is_c3_APMR_ac = APMR_ac_IN_Run;

                /* Entry 'Run': '<S11>:4' */
                VeAPMR_b_LinRelay = true;
                VeAPMR_t_StateTimer = 0.0F;

                /* Entry Internal 'Run': '<S11>:4' */
                /* Transition: '<S11>:19' */
                APMR_ac_DW.is_Run = APMR_ac_IN_Run_Charging;

                /* Entry 'Run_Charging': '<S11>:18' */
                VeAPMC_e_SysState = CeAPMR_e_Run_Charging;
            }
            else if (VeAPMR_t_StateTimer > KeAPMR_t_WakeupTimer)
            {
                /* Transition: '<S11>:9' */
                /* Exit 'Wakeup': '<S11>:3' */
                VeAPMR_e_Src_Mode = CeAPMR_e_Wakeup;
                APMR_ac_DW.is_c3_APMR_ac = APMR_ac_IN_Shutdown;

                /* Entry 'Shutdown': '<S11>:6' */
                VeAPMC_e_SysState = CeAPMR_e_Shutdown;
                VeAPMR_t_StateTimer = 0.0F;
            }
            else
            {
                VeAPMR_t_StateTimer = VeAPMR_t_StateTimer + HeAPMR_t_dT;
            }
            break;
        }
    }

    /* End of Chart: '<S5>/Mode_Request_Managment' */

    /* RelationalOperator: '<S8>/Equal1' incorporates:
     *  Switch: '<S12>/Switch2'
     *  Switch: '<S172>/Switch1'
     */
    rtb_Switch2_l2 = VeAPMI_e_ModulPwrModeStatus;

    /* RelationalOperator: '<S8>/Equal1' incorporates:
     *  Constant: '<S15>/Constant'
     *  Switch: '<S172>/Switch1'
     */
    rtb_TmpSignalConversionAtVeC_hh = (((uint32)VeAPMI_e_ModulPwrModeStatus) ==
        CeAPMR_e_RunMode);

    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S16>/Constant'
     *  Constant: '<S17>/Constant'
     *  Constant: '<S18>/Constant'
     *  Logic: '<S8>/AND'
     *  Logic: '<S8>/AND1'
     *  Logic: '<S8>/AND2'
     *  Logic: '<S8>/NOT'
     *  RelationalOperator: '<S8>/Equal'
     *  RelationalOperator: '<S8>/Equal2'
     *  RelationalOperator: '<S8>/Equal3'
     *  Switch: '<S8>/Switch2'
     *  Switch: '<S8>/Switch3'
     */
    if ((((uint32)VeAPMC_e_SysState) == CeAPMR_e_Run) &&
            rtb_TmpSignalConversionAtVeC_hh)
    {
        /* Switch: '<S8>/Switch1' incorporates:
         *  Constant: '<S20>/Calib'
         */
        VeAPMC_g_CANEnable = KeAPMR_g_RunModeComm;
    }
    else if ((rtb_TmpSignalConversionAtVeC_hh && (((uint32)VeAPMC_e_SysState) ==
               CeAPMR_e_Run_Charging)) && (VeAPMI_b_EnableCANC))
    {
        /* Switch: '<S8>/Switch2' incorporates:
         *  Constant: '<S21>/Calib'
         *  Switch: '<S8>/Switch1'
         */
        VeAPMC_g_CANEnable = KeAPMR_g_Charging_EnblCANC;
    }
    else if (((!VeAPMI_b_EnableCANC) && (((uint32)VeAPMC_e_SysState) ==
               CeAPMR_e_Run_Charging)) && rtb_TmpSignalConversionAtVeC_hh)
    {
        /* Switch: '<S8>/Switch3' incorporates:
         *  Constant: '<S22>/Calib'
         *  Switch: '<S8>/Switch1'
         *  Switch: '<S8>/Switch2'
         */
        VeAPMC_g_CANEnable = KeAPMR_g_Charging_DsblCANC;
    }
    else
    {
        /* Switch: '<S8>/Switch1' incorporates:
         *  Constant: '<S23>/Calib'
         *  Switch: '<S8>/Switch2'
         *  Switch: '<S8>/Switch3'
         */
        VeAPMC_g_CANEnable = KeAPMR_g_DsblCANComm;
    }

    /* End of Switch: '<S8>/Switch1' */

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S109>/Calib'
     */
    if (KeAPMR_b_RelayDsblSlctr)
    {
        /* Switch: '<S6>/Switch1' */
        rtb_TmpSignalConversionAtVeC_hh = VeAPMI_b_EnblLIN;
    }
    else
    {
        /* Switch: '<S6>/Switch1' */
        rtb_TmpSignalConversionAtVeC_hh = VeAPMI_b_ThrmlSystRly_EnblCmnd;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S6>/EdgeFalling' */
    /* Logic: '<S92>/AND' incorporates:
     *  Logic: '<S92>/OR1'
     *  UnitDelay: '<S92>/Unit Delay'
     */
    VeAPMI_b_DsblThrmlRelay = ((!rtb_TmpSignalConversionAtVeC_hh) &&
        (APMR_ac_DW.UnitDelay_DSTATE_j));

    /* Update for UnitDelay: '<S92>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtVeC_hh;

    /* End of Outputs for SubSystem: '<S6>/EdgeFalling' */

    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S110>/Calib'
     */
    if (KeAPMR_b_RelayEnblSlctr)
    {
        rtb_TmpSignalConversionAtVeSR_c = VeAPMI_b_EnblLIN;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSR_c = VeAPMI_b_ThrmlSystRly_EnblCmnd;
    }

    /* End of Switch: '<S6>/Switch' */

    /* Outputs for Atomic SubSystem: '<S6>/Signal Latch On With Reset' */
    /* Logic: '<S112>/OR1' incorporates:
     *  Logic: '<S112>/NOT'
     *  Logic: '<S112>/OR'
     *  UnitDelay: '<S112>/Unit Delay'
     */
    VeAPMI_b_EnblThrmlRelay = (rtb_TmpSignalConversionAtVeSR_c ||
        ((!VeAPMI_b_DsblThrmlRelay) && (VeAPMI_b_EnblThrmlRelay)));

    /* End of Outputs for SubSystem: '<S6>/Signal Latch On With Reset' */

    /* Logic: '<S9>/AND' incorporates:
     *  Constant: '<S32>/Constant'
     *  Constant: '<S33>/Constant'
     *  Logic: '<S9>/AND1'
     *  RelationalOperator: '<S9>/Equal'
     *  RelationalOperator: '<S9>/Equal1'
     */
    VeAPMC_b_EnblThrmlRelay = (((((uint32)VeAPMC_e_SysState) == CeAPMR_e_Run) ||
        (((uint32)VeAPMC_e_SysState) == CeAPMR_e_Run_Charging)) &&
        (VeAPMI_b_EnblThrmlRelay));

    /* Switch: '<S34>/Switch' incorporates:
     *  Constant: '<S34>/Constant'
     */
    if (KeAPMR_b_OvrdEnblThrmlRelay)
    {
        /* RelationalOperator: '<S7>/GreaterThan' incorporates:
         *  Constant: '<S34>/Constant1'
         */
        rtb_TmpSignalConversionAtVeCA_k = KeAPMR_b_EnblThrmlRelay;
    }
    else
    {
        /* RelationalOperator: '<S7>/GreaterThan' */
        rtb_TmpSignalConversionAtVeCA_k = VeAPMC_b_EnblThrmlRelay;
    }

    /* End of Switch: '<S34>/Switch' */

    /* Switch: '<S34>/Switch1' */
    rtb_TmpSignalConversionAtVeC_hh = rtb_TmpSignalConversionAtVeCA_k;

    /* Outputs for Atomic SubSystem: '<S9>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S9>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S37>/EdgeFalling' */
    /* Logic: '<S39>/OR1' incorporates:
     *  Logic: '<S38>/OR1'
     *  Switch: '<S34>/Switch1'
     */
    rtb_TmpSignalConversionAtVeSR_e = !rtb_TmpSignalConversionAtVeCA_k;

    /* End of Outputs for SubSystem: '<S9>/Turn On Delay Time' */

    /* Logic: '<S39>/AND' incorporates:
     *  Logic: '<S39>/OR1'
     *  UnitDelay: '<S39>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSR_j = (rtb_TmpSignalConversionAtVeSR_e &&
        (APMR_ac_DW.UnitDelay_DSTATE_at));

    /* Update for UnitDelay: '<S39>/Unit Delay' incorporates:
     *  Switch: '<S34>/Switch1'
     */
    APMR_ac_DW.UnitDelay_DSTATE_at = rtb_TmpSignalConversionAtVeCA_k;

    /* End of Outputs for SubSystem: '<S37>/EdgeFalling' */

    /* Switch: '<S37>/Switch' */
    if (rtb_TmpSignalConversionAtVeSR_j)
    {
        /* Switch: '<S37>/Switch' incorporates:
         *  Constant: '<S36>/Calib'
         */
        rtb_Switch_la = KeAPMR_t_DsblLINRelay;
    }
    else
    {
        /* Switch: '<S37>/Switch' incorporates:
         *  Constant: '<S111>/Calib'
         *  Constant: '<S37>/Constant Value1'
         *  MinMax: '<S37>/Minimum'
         *  Sum: '<S37>/Summation'
         *  UnitDelay: '<S37>/Unit Delay'
         */
        rtb_Switch_la = fmaxf(APMR_ac_DW.UnitDelay_DSTATE_h - HeAPMR_t_dT, 0.0F);
    }

    /* End of Switch: '<S37>/Switch' */

    /* Update for UnitDelay: '<S37>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_h = rtb_Switch_la;

    /* End of Outputs for SubSystem: '<S9>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S9>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S38>/EdgeRising' */
    /* Logic: '<S40>/AND' incorporates:
     *  Logic: '<S40>/OR1'
     *  Switch: '<S34>/Switch1'
     *  UnitDelay: '<S40>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSR_j = (rtb_TmpSignalConversionAtVeCA_k &&
        (!APMR_ac_DW.UnitDelay_DSTATE_jr));

    /* Update for UnitDelay: '<S40>/Unit Delay' incorporates:
     *  Switch: '<S34>/Switch1'
     */
    APMR_ac_DW.UnitDelay_DSTATE_jr = rtb_TmpSignalConversionAtVeCA_k;

    /* End of Outputs for SubSystem: '<S38>/EdgeRising' */

    /* Switch: '<S38>/Switch1' incorporates:
     *  Logic: '<S38>/OR'
     */
    if (rtb_TmpSignalConversionAtVeSR_e || rtb_TmpSignalConversionAtVeSR_j)
    {
        /* Switch: '<S38>/Switch1' incorporates:
         *  Constant: '<S38>/Constant Value1'
         */
        rtb_Switch1_m0 = 0.0F;
    }
    else
    {
        /* Switch: '<S38>/Switch1' incorporates:
         *  Constant: '<S111>/Calib'
         *  Constant: '<S35>/Calib'
         *  MinMax: '<S38>/Minimum'
         *  Sum: '<S38>/Summation'
         *  UnitDelay: '<S38>/Unit Delay'
         */
        rtb_Switch1_m0 = fminf(KeAPMR_t_EnableLINCommDelay, HeAPMR_t_dT +
                               APMR_ac_DW.UnitDelay_DSTATE_m);
    }

    /* End of Switch: '<S38>/Switch1' */

    /* Logic: '<S38>/AND' incorporates:
     *  Constant: '<S35>/Calib'
     *  RelationalOperator: '<S38>/Greater  Than'
     *  Switch: '<S34>/Switch1'
     */
    rtb_TmpSignalConversionAtVeSR_j = (rtb_TmpSignalConversionAtVeCA_k &&
        (rtb_Switch1_m0 >= KeAPMR_t_EnableLINCommDelay));

    /* Update for UnitDelay: '<S38>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_m = rtb_Switch1_m0;

    /* End of Outputs for SubSystem: '<S9>/Turn On Delay Time' */

    /* Switch: '<S52>/Switch1' incorporates:
     *  Constant: '<S42>/Constant'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S47>/Constant'
     *  Constant: '<S48>/Constant'
     *  Constant: '<S49>/Constant'
     *  Logic: '<S10>/OR'
     *  RelationalOperator: '<S10>/Equal'
     *  RelationalOperator: '<S10>/Equal1'
     *  RelationalOperator: '<S10>/Equal2'
     *  RelationalOperator: '<S10>/Equal3'
     *  RelationalOperator: '<S10>/Equal4'
     *  RelationalOperator: '<S9>/Equal'
     *  Switch: '<S52>/Switch2'
     *  Switch: '<S53>/Switch1'
     *  Switch: '<S53>/Switch2'
     */
    if (((uint32)VeAPMC_e_SysState) == CeAPMR_e_Init)
    {
        /* Switch: '<S52>/Switch1' incorporates:
         *  Constant: '<S43>/Constant'
         */
        VeAPMC_e_ModeReq_Arb = CeAPMR_e_StartupMode;
    }
    else if (((uint32)VeAPMC_e_SysState) == CeAPMR_e_Wakeup)
    {
        /* Switch: '<S52>/Switch2' incorporates:
         *  Constant: '<S45>/Constant'
         *  Switch: '<S52>/Switch1'
         */
        VeAPMC_e_ModeReq_Arb = CeAPMR_e_WakeupMode;
    }
    else if ((((uint32)VeAPMC_e_SysState) == CeAPMR_e_Run) || (((uint32)
               VeAPMC_e_SysState) == CeAPMR_e_Run_Charging))
    {
        /* Switch: '<S53>/Switch1' incorporates:
         *  Constant: '<S46>/Constant'
         *  Switch: '<S52>/Switch1'
         *  Switch: '<S52>/Switch2'
         */
        VeAPMC_e_ModeReq_Arb = CeAPMR_e_RunMode;
    }
    else if (((uint32)VeAPMC_e_SysState) == CeAPMR_e_PostRun)
    {
        /* Switch: '<S53>/Switch2' incorporates:
         *  Constant: '<S50>/Constant'
         *  Switch: '<S52>/Switch1'
         *  Switch: '<S52>/Switch2'
         *  Switch: '<S53>/Switch1'
         */
        VeAPMC_e_ModeReq_Arb = CeAPMR_e_PostRunMode;
    }
    else
    {
        /* Switch: '<S52>/Switch1' incorporates:
         *  Constant: '<S51>/Constant'
         *  Switch: '<S52>/Switch2'
         *  Switch: '<S53>/Switch1'
         *  Switch: '<S53>/Switch2'
         */
        VeAPMC_e_ModeReq_Arb = CeAPMR_e_ShutdownMode;
    }

    /* End of Switch: '<S52>/Switch1' */

    /* Switch: '<S41>/Switch' incorporates:
     *  Constant: '<S41>/Constant'
     */
    if (KeAPMR_b_OvrdModeReq)
    {
        /* Switch: '<S41>/Switch1' incorporates:
         *  Constant: '<S41>/Constant1'
         */
        VeAPMC_e_ModeReq = KeAPMR_e_ModeReq;
    }
    else
    {
        /* Switch: '<S41>/Switch1' incorporates:
         *  Switch: '<S52>/Switch1'
         */
        VeAPMC_e_ModeReq = VeAPMC_e_ModeReq_Arb;
    }

    /* End of Switch: '<S41>/Switch' */

    /* Switch: '<S12>/Switch2' incorporates:
     *  Constant: '<S70>/Calib'
     */
    if (KeAPMR_b_UseModeReq)
    {
        /* Switch: '<S12>/Switch2' incorporates:
         *  Switch: '<S41>/Switch1'
         */
        rtb_Switch2_l2 = VeAPMC_e_ModeReq;
    }

    /* RelationalOperator: '<S12>/Equal' incorporates:
     *  Constant: '<S64>/Constant'
     */
    VeAPMC_b_PCU_PwrUpRelay = (((uint32)rtb_Switch2_l2) == CeAPMR_e_RunMode);

    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S77>/EdgeRising' */
    /* RelationalOperator: '<S7>/GreaterThan' incorporates:
     *  UnitDelay: '<S80>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCA_k = APMR_ac_DW.UnitDelay_DSTATE_i;

    /* Update for UnitDelay: '<S80>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_i = VeAPMC_b_PCU_PwrUpRelay;

    /* End of Outputs for SubSystem: '<S77>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S12>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S75>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S12>/EdgeFalling' */
    /* Logic: '<S77>/OR1' incorporates:
     *  Logic: '<S58>/OR1'
     *  Logic: '<S59>/AND'
     *  Logic: '<S78>/OR1'
     */
    rtb_TmpSignalConversionAtVeSR_c = !VeAPMC_b_PCU_PwrUpRelay;

    /* End of Outputs for SubSystem: '<S12>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S12>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S75>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S12>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S77>/EdgeRising' */
    /* Switch: '<S77>/Switch1' incorporates:
     *  Logic: '<S77>/OR'
     *  Logic: '<S77>/OR1'
     *  Logic: '<S80>/AND'
     *  Logic: '<S80>/OR1'
     */
    if (rtb_TmpSignalConversionAtVeSR_c || ((VeAPMC_b_PCU_PwrUpRelay) &&
            (!rtb_TmpSignalConversionAtVeCA_k)))
    {
        /* Switch: '<S77>/Switch1' incorporates:
         *  Constant: '<S77>/Constant Value1'
         */
        rtb_Switch1_m0 = 0.0F;
    }
    else
    {
        /* Switch: '<S77>/Switch1' incorporates:
         *  Constant: '<S111>/Calib'
         *  Constant: '<S71>/Calib'
         *  MinMax: '<S77>/Minimum'
         *  Sum: '<S77>/Summation'
         *  UnitDelay: '<S77>/Unit Delay'
         */
        rtb_Switch1_m0 = fminf(KeAPMR_t_LimitedLOCTimer, HeAPMR_t_dT +
                               APMR_ac_DW.UnitDelay_DSTATE_k);
    }

    /* End of Switch: '<S77>/Switch1' */
    /* End of Outputs for SubSystem: '<S77>/EdgeRising' */

    /* Logic: '<S77>/AND' incorporates:
     *  Constant: '<S71>/Calib'
     *  RelationalOperator: '<S77>/Greater  Than'
     */
    rtb_TmpSignalConversionAtVeSR_e = ((VeAPMC_b_PCU_PwrUpRelay) &&
        (rtb_Switch1_m0 >= KeAPMR_t_LimitedLOCTimer));

    /* Update for UnitDelay: '<S77>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_k = rtb_Switch1_m0;

    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time1' */

    /* Logic: '<S12>/AND' */
    rtb_TmpSignalConversionAtVeC_lr = (rtb_TmpSignalConversionAtVeC_lr &&
        rtb_TmpSignalConversionAtVeSR_e);

    /* Outputs for Atomic SubSystem: '<S12>/EdgeFalling' */
    /* Logic: '<S58>/AND' incorporates:
     *  UnitDelay: '<S58>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCA_k = (rtb_TmpSignalConversionAtVeSR_c &&
        (APMR_ac_DW.UnitDelay_DSTATE_of));

    /* Update for UnitDelay: '<S58>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_of = VeAPMC_b_PCU_PwrUpRelay;

    /* End of Outputs for SubSystem: '<S12>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising' */
    /* Logic: '<S59>/OR1' incorporates:
     *  UnitDelay: '<S59>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSR_b = !APMR_ac_DW.UnitDelay_DSTATE_gz;

    /* Update for UnitDelay: '<S59>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_gz = VeAPMC_b_PCU_PwrUpRelay;

    /* Outputs for Atomic SubSystem: '<S12>/Signal Latch On With Reset' */
    /* Logic: '<S74>/OR1' incorporates:
     *  Logic: '<S59>/AND'
     *  Logic: '<S74>/NOT'
     *  Logic: '<S74>/OR'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    VeAPMC_b_PCU_EndRequestFlag = (rtb_TmpSignalConversionAtVeCA_k ||
        ((rtb_TmpSignalConversionAtVeSR_c || (!rtb_TmpSignalConversionAtVeSR_b))
         && (VeAPMC_b_PCU_EndRequestFlag)));

    /* End of Outputs for SubSystem: '<S12>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S12>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S12>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S75>/EdgeFalling' */
    /* RelationalOperator: '<S7>/GreaterThan' incorporates:
     *  UnitDelay: '<S78>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCA_k = APMR_ac_DW.UnitDelay_DSTATE_a;

    /* Update for UnitDelay: '<S78>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_a = VeAPMC_b_PCU_PwrUpRelay;

    /* Switch: '<S75>/Switch' incorporates:
     *  Logic: '<S78>/AND'
     */
    if (rtb_TmpSignalConversionAtVeSR_c && rtb_TmpSignalConversionAtVeCA_k)
    {
        /* Switch: '<S75>/Switch' incorporates:
         *  Constant: '<S73>/Calib'
         */
        rtb_Switch1_m0 = KeAPMR_t_ePTHWTurnOffDly;
    }
    else
    {
        /* Switch: '<S75>/Switch' incorporates:
         *  Constant: '<S111>/Calib'
         *  Constant: '<S75>/Constant Value1'
         *  MinMax: '<S75>/Minimum'
         *  Sum: '<S75>/Summation'
         *  UnitDelay: '<S75>/Unit Delay'
         */
        rtb_Switch1_m0 = fmaxf(APMR_ac_DW.UnitDelay_DSTATE_kp - HeAPMR_t_dT,
                               0.0F);
    }

    /* End of Switch: '<S75>/Switch' */
    /* End of Outputs for SubSystem: '<S75>/EdgeFalling' */

    /* Update for UnitDelay: '<S75>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_kp = rtb_Switch1_m0;

    /* End of Outputs for SubSystem: '<S12>/Turn Off Delay Time' */

    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<S65>/Constant'
     *  RelationalOperator: '<S12>/Equal1'
     *  Switch: '<S68>/Switch2'
     */
    if (VeAPMC_b_PCU_PwrUpRelay)
    {
        /* Switch: '<S68>/Switch1' incorporates:
         *  Constant: '<S60>/Constant'
         */
        VeAPMC_e_HCPShtdwnCmnd = CeAPMR_e_Default;
    }
    else if (((uint32)rtb_Switch2_l2) == CeAPMR_e_PostRunMode)
    {
        /* Switch: '<S68>/Switch2' incorporates:
         *  Constant: '<S62>/Constant'
         *  Switch: '<S68>/Switch1'
         */
        VeAPMC_e_HCPShtdwnCmnd = CeAPMR_e_Initiate_Powerdown;
    }
    else
    {
        /* Switch: '<S68>/Switch1' incorporates:
         *  Constant: '<S63>/Constant'
         *  Switch: '<S68>/Switch2'
         */
        VeAPMC_e_HCPShtdwnCmnd = CeAPMR_e_HCPShutdown;
    }

    /* End of Switch: '<S68>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S76>/EdgeRising' */
    /* Logic: '<S79>/AND' incorporates:
     *  Logic: '<S79>/OR1'
     *  UnitDelay: '<S79>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCA_k = (rtb_TmpSignalConversionAtVeC_lr &&
        (!APMR_ac_DW.UnitDelay_DSTATE_o));

    /* Update for UnitDelay: '<S79>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_o = rtb_TmpSignalConversionAtVeC_lr;

    /* End of Outputs for SubSystem: '<S76>/EdgeRising' */

    /* Switch: '<S76>/Switch1' incorporates:
     *  Logic: '<S76>/OR'
     *  Logic: '<S76>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeC_lr) || rtb_TmpSignalConversionAtVeCA_k)
    {
        /* Switch: '<S76>/Switch1' incorporates:
         *  Constant: '<S76>/Constant Value1'
         */
        rtb_Switch1_e = 0.0F;
    }
    else
    {
        /* Switch: '<S76>/Switch1' incorporates:
         *  Constant: '<S111>/Calib'
         *  Constant: '<S72>/Calib'
         *  MinMax: '<S76>/Minimum'
         *  Sum: '<S76>/Summation'
         *  UnitDelay: '<S76>/Unit Delay'
         */
        rtb_Switch1_e = fminf(KeAPMR_t_LOCTimer, HeAPMR_t_dT +
                              APMR_ac_DW.UnitDelay_DSTATE_c);
    }

    /* End of Switch: '<S76>/Switch1' */

    /* Update for UnitDelay: '<S76>/Unit Delay' */
    APMR_ac_DW.UnitDelay_DSTATE_c = rtb_Switch1_e;

    /* Switch: '<S69>/Switch1' incorporates:
     *  Constant: '<S72>/Calib'
     *  Logic: '<S76>/AND'
     *  RelationalOperator: '<S76>/Greater  Than'
     *  Switch: '<S69>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeC_lr && (rtb_Switch1_e >= KeAPMR_t_LOCTimer))
    {
        /* Switch: '<S69>/Switch1' incorporates:
         *  Constant: '<S67>/Constant'
         */
        VeAPMC_e_ePTLOCDiagEnable = CeAPMR_e_ENB_LOC;
    }
    else if (rtb_TmpSignalConversionAtVeSR_e)
    {
        /* Switch: '<S69>/Switch2' incorporates:
         *  Constant: '<S66>/Constant'
         *  Switch: '<S69>/Switch1'
         */
        VeAPMC_e_ePTLOCDiagEnable = CeAPMR_e_ENB_LOC_LIMIT;
    }
    else
    {
        /* Switch: '<S69>/Switch1' incorporates:
         *  Constant: '<S61>/Constant'
         *  Switch: '<S69>/Switch2'
         */
        VeAPMC_e_ePTLOCDiagEnable = CeAPMR_e_ePTLOC_Default;
    }

    /* End of Switch: '<S69>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Time' */

    /* Switch: '<S82>/Switch1' */
    if (VeAPMI_b_Submit_Schedule2)
    {
        /* Switch: '<S82>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S114>/FixPt Bitwise Operator1'
         *  Switch: '<S82>/Switch'
         */
        rtb_Switch1 = (VeAPMI_b_Submit_Schedule1 ? 1U : 0U) | 2U;
    }
    else
    {
        /* Switch: '<S82>/Switch1' incorporates:
         *  Switch: '<S82>/Switch'
         */
        rtb_Switch1 = VeAPMI_b_Submit_Schedule1 ? 1U : 0U;
    }

    /* End of Switch: '<S82>/Switch1' */

    /* Switch: '<S82>/Switch2' */
    if (VeAPMI_b_Submit_ClimateSchd1)
    {
        /* Switch: '<S82>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S125>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 4U;
    }

    /* End of Switch: '<S82>/Switch2' */

    /* Switch: '<S82>/Switch3' */
    if (VeAPMI_b_Submit_ClimateSchd2)
    {
        /* Switch: '<S82>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S136>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 8U;
    }

    /* End of Switch: '<S82>/Switch3' */

    /* Switch: '<S82>/Switch4' */
    if (VeAPMI_b_ChargeNow)
    {
        /* Switch: '<S82>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S139>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 16U;
    }

    /* End of Switch: '<S82>/Switch4' */

    /* Switch: '<S82>/Switch12' */
    if (VeAPMI_b_TBM_Submit_Schedule1)
    {
        /* Switch: '<S82>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S117>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 32U;
    }

    /* End of Switch: '<S82>/Switch12' */

    /* Switch: '<S82>/Switch5' */
    if (VeAPMI_b_TBM_Submit_Schedule2)
    {
        /* Switch: '<S82>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S140>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 64U;
    }

    /* End of Switch: '<S82>/Switch5' */

    /* Switch: '<S82>/Switch6' */
    if (VeAPMI_b_TBM_SubmitClimateSchd1)
    {
        /* Switch: '<S82>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S141>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 128U;
    }

    /* End of Switch: '<S82>/Switch6' */

    /* Switch: '<S82>/Switch7' */
    if (VeAPMI_b_TBM_SubmitClimateSchd2)
    {
        /* Switch: '<S82>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S142>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 256U;
    }

    /* End of Switch: '<S82>/Switch7' */

    /* Switch: '<S82>/Switch8' */
    if (VeAPMI_b_TBM_ChargeNow)
    {
        /* Switch: '<S82>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S143>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 512U;
    }

    /* End of Switch: '<S82>/Switch8' */

    /* Switch: '<S82>/Switch10' */
    if (VeAPMI_b_OBCMWup)
    {
        /* Switch: '<S82>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S115>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 1024U;
    }

    /* End of Switch: '<S82>/Switch10' */

    /* Switch: '<S82>/Switch11' */
    if (VeAPMI_b_IDCM_Wakeup_HCP_FD11)
    {
        /* Switch: '<S82>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S116>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 2048U;
    }

    /* End of Switch: '<S82>/Switch11' */

    /* Switch: '<S82>/Switch13' */
    if (VeAPMI_b_IDCM_Wakeup_HCP_FD5)
    {
        /* Switch: '<S82>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S118>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 4096U;
    }

    /* End of Switch: '<S82>/Switch13' */

    /* Switch: '<S82>/Switch9' */
    if (rtb_TmpSignalConversionAtVeCA_m)
    {
        /* Switch: '<S82>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S144>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 8192U;
    }

    /* End of Switch: '<S82>/Switch9' */

    /* Switch: '<S82>/Switch14' */
    if (rtb_TmpSignalConversionAtVeCA_n)
    {
        /* Switch: '<S82>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S119>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 16384U;
    }

    /* End of Switch: '<S82>/Switch14' */

    /* Switch: '<S82>/Switch15' */
    if (rtb_TmpSignalConversionAtVeC_kf)
    {
        /* Switch: '<S82>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S120>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 32768U;
    }

    /* End of Switch: '<S82>/Switch15' */

    /* Switch: '<S82>/Switch16' */
    if (VeAPMI_b_BonnetSts)
    {
        /* Switch: '<S82>/Switch16' incorporates:
         *  S-Function (sfix_bitop): '<S121>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 65536U;
    }

    /* End of Switch: '<S82>/Switch16' */

    /* Switch: '<S82>/Switch17' */
    if (VeAPMI_b_Drv_Dr_Unlocking)
    {
        /* Switch: '<S82>/Switch17' incorporates:
         *  S-Function (sfix_bitop): '<S122>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 131072U;
    }

    /* End of Switch: '<S82>/Switch17' */

    /* Switch: '<S82>/Switch24' */
    if (rtb_TmpSignalConversionAtVeCA_a)
    {
        /* Switch: '<S82>/Switch24' incorporates:
         *  S-Function (sfix_bitop): '<S130>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 262144U;
    }

    /* End of Switch: '<S82>/Switch24' */

    /* Switch: '<S82>/Switch25' */
    if (VeAPMI_b_IgnRunCrnk)
    {
        /* Switch: '<S82>/Switch25' incorporates:
         *  S-Function (sfix_bitop): '<S131>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 524288U;
    }

    /* End of Switch: '<S82>/Switch25' */

    /* Switch: '<S82>/Switch26' */
    if (VeAPMI_b_IgnAccRun)
    {
        /* Switch: '<S82>/Switch26' incorporates:
         *  S-Function (sfix_bitop): '<S132>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 1048576U;
    }

    /* End of Switch: '<S82>/Switch26' */

    /* Switch: '<S82>/Switch20' */
    if (rtb_TmpSignalConversionAtVeSR1B)
    {
        /* Switch: '<S82>/Switch20' incorporates:
         *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 2097152U;
    }

    /* End of Switch: '<S82>/Switch20' */

    /* Switch: '<S82>/Switch27' */
    if (VeAPMI_b_SmtPwrPanWakeUp)
    {
        /* Switch: '<S82>/Switch27' incorporates:
         *  S-Function (sfix_bitop): '<S133>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 4194304U;
    }

    /* End of Switch: '<S82>/Switch27' */

    /* Switch: '<S82>/Switch28' */
    if (VeAPMI_b_RemStActvSts_R)
    {
        /* Switch: '<S82>/Switch28' incorporates:
         *  S-Function (sfix_bitop): '<S134>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 8388608U;
    }

    /* End of Switch: '<S82>/Switch28' */

    /* Switch: '<S82>/Switch29' */
    if (VeAPMI_b_DriverDoorSts)
    {
        /* Switch: '<S82>/Switch29' incorporates:
         *  S-Function (sfix_bitop): '<S135>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 16777216U;
    }

    /* End of Switch: '<S82>/Switch29' */

    /* Switch: '<S82>/Switch30' */
    if (rtb_TmpSignalConversionAtVeCANR)
    {
        /* Switch: '<S82>/Switch30' incorporates:
         *  S-Function (sfix_bitop): '<S137>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 33554432U;
    }

    /* End of Switch: '<S82>/Switch30' */

    /* Switch: '<S82>/Switch18' */
    if (rtb_TmpSignalConversionAtVeCA_c)
    {
        /* Switch: '<S82>/Switch18' incorporates:
         *  S-Function (sfix_bitop): '<S123>/FixPt Bitwise Operator1'
         */
        rtb_Switch1 |= 67108864U;
    }

    /* End of Switch: '<S82>/Switch18' */

    /* Switch: '<S82>/Switch19' */
    if (VeAPMI_b_ClimateReq)
    {
        /* Switch: '<S82>/Switch23' incorporates:
         *  Math: '<S7>/Math Function5'
         *  S-Function (sfix_bitop): '<S124>/FixPt Bitwise Operator1'
         */
        VeAPMC_g_WakeupActv = rtb_Switch1 | 134217728U;
    }
    else
    {
        /* Switch: '<S82>/Switch23' incorporates:
         *  Math: '<S7>/Math Function5'
         */
        VeAPMC_g_WakeupActv = rtb_Switch1;
    }

    /* End of Switch: '<S82>/Switch19' */

    /* Logic: '<S7>/AND' incorporates:
     *  Constant: '<S7>/RTC_Year'
     *  Logic: '<S7>/NOT'
     *  Logic: '<S7>/NOT2'
     *  Logic: '<S7>/OR'
     *  Math: '<S7>/Math Function'
     *  Math: '<S7>/Math Function1'
     *  Math: '<S7>/Math Function2'
     *  Sum: '<S7>/Add6'
     */
    rtb_TmpSignalConversionAtVeCANR = ((((sint32)((uint16)((sint32)(((sint32)
        ((uint16)(((uint32)VeAPMI_tyr_RTCTimeYear) + 2000U))) % 4)))) == 0) &&
        ((((sint32)((uint16)((sint32)(((sint32)((uint16)(((uint32)
        VeAPMI_tyr_RTCTimeYear) + 2000U))) % 100)))) != 0) || (((sint32)((uint16)
        ((sint32)(((sint32)((uint16)(((uint32)VeAPMI_tyr_RTCTimeYear) + 2000U)))
                  % 400)))) == 0)));

    /* Math: '<S7>/Math Function5' incorporates:
     *  Constant: '<S7>/Seconds_In_Min'
     *  Product: '<S7>/Divide3'
     */
    rtb_Switch1 = ((uint32)VeAPMI_t_WU_TimerValue) * 60U;

    /* Logic: '<S7>/AND1' incorporates:
     *  Constant: '<S147>/Constant'
     *  Constant: '<S148>/Calib'
     *  Logic: '<S7>/OR1'
     *  RelationalOperator: '<S7>/Equal'
     *  RelationalOperator: '<S7>/GreaterThan'
     *  Switch: '<S41>/Switch1'
     */
    VeAPMC_b_EnableAlarm = ((rtb_Switch1 > 0U) && ((KeAPMR_b_OvrdEnableRTC) ||
        (((uint32)VeAPMC_e_ModeReq) == CeAPMR_e_PostRunMode)));

    /* MATLAB Function: '<S7>/Days_CurrentYear' */
    /* MATLAB Function 'APMR_MedTEB/APMC/RTC/Days_CurrentYear': '<S146>:1' */
    /* '<S146>:1:4' */
    /* '<S146>:1:3' */
    /* '<S146>:1:2' */
    rtb_TmpSignalConversionAtVeSSDR = 0U;

    /* '<S146>:1:3' */
    /* '<S146>:1:4' */
    if (rtb_TmpSignalConversionAtVeCANR)
    {
        /* '<S146>:1:5' */
        Add13 = ((uint32)VeAPMI_tmt_RTCTimeMonth) - 1U;
        if ((((uint32)VeAPMI_tmt_RTCTimeMonth) - 1U) > ((uint32)
                VeAPMI_tmt_RTCTimeMonth))
        {
            Add13 = 0U;
        }

        /* '<S146>:1:6' */
        for (month_num = 0; month_num < ((sint32)((uint8)Add13)); month_num++)
        {
            /* '<S146>:1:6' */
            /* '<S146>:1:7' */
            tmp_0 = ((sint32)e[month_num]) + ((sint32)
                rtb_TmpSignalConversionAtVeSSDR);
            if (tmp_0 > 65535)
            {
                tmp_0 = 65535;
            }

            rtb_TmpSignalConversionAtVeSSDR = (uint16)tmp_0;
        }
    }
    else
    {
        Add13 = ((uint32)VeAPMI_tmt_RTCTimeMonth) - 1U;
        if ((((uint32)VeAPMI_tmt_RTCTimeMonth) - 1U) > ((uint32)
                VeAPMI_tmt_RTCTimeMonth))
        {
            Add13 = 0U;
        }

        /* '<S146>:1:10' */
        for (month_num = 0; month_num < ((sint32)((uint8)Add13)); month_num++)
        {
            /* '<S146>:1:10' */
            /* '<S146>:1:11' */
            tmp_0 = ((sint32)d[month_num]) + ((sint32)
                rtb_TmpSignalConversionAtVeSSDR);
            if (tmp_0 > 65535)
            {
                tmp_0 = 65535;
            }

            rtb_TmpSignalConversionAtVeSSDR = (uint16)tmp_0;
        }
    }

    /* End of MATLAB Function: '<S7>/Days_CurrentYear' */

    /* Sum: '<S7>/Add9' incorporates:
     *  Constant: '<S7>/Constant10'
     *  Constant: '<S7>/Constant11'
     *  Constant: '<S7>/EPOCH reference 100'
     *  Constant: '<S7>/EPOCH start year '
     *  Constant: '<S7>/EPOCh reference 400'
     *  Constant: '<S7>/RTC_Year'
     *  Product: '<S7>/Divide5'
     *  Product: '<S7>/Divide6'
     *  Product: '<S7>/Divide7'
     *  Sum: '<S7>/Add10'
     *  Sum: '<S7>/Add11'
     *  Sum: '<S7>/Add6'
     *  Sum: '<S7>/Add8'
     */
    rtb_Add9 = (uint16)((sint32)((((sint32)((uint32)(((uint32)((sint32)(((sint32)
        ((uint16)(((uint32)VeAPMI_tyr_RTCTimeYear) + 2000U))) - 1970))) >> 2ULL)))
                          + ((sint32)((uint32)(((uint32)((sint32)(((sint32)
        ((uint16)(((uint32)VeAPMI_tyr_RTCTimeYear) + 2000U))) - 1601))) / 400U))))
                         - ((sint32)((uint32)(((uint32)((sint32)(((sint32)
        ((uint16)(((uint32)VeAPMI_tyr_RTCTimeYear) + 2000U))) - 1901))) / 100U)))));

    /* Sum: '<S7>/Add13' incorporates:
     *  Constant: '<S7>/Constant'
     *  Constant: '<S7>/EPOCH start year '
     *  Constant: '<S7>/RTC_Year'
     *  Constant: '<S7>/Seconds_In_Day'
     *  Constant: '<S7>/Seconds_In_Hour'
     *  Constant: '<S7>/Seconds_In_Min'
     *  Constant: '<S7>/Seconds_In_Year'
     *  Product: '<S7>/Divide'
     *  Product: '<S7>/Divide1'
     *  Product: '<S7>/Divide2'
     *  Product: '<S7>/Divide4'
     *  Product: '<S7>/Divide8'
     *  Sum: '<S7>/Add'
     *  Sum: '<S7>/Add1'
     *  Sum: '<S7>/Add2'
     *  Sum: '<S7>/Add6'
     *  Sum: '<S7>/Add7'
     */
    Add13 = (((((((uint32)((sint32)(((sint32)((uint16)(((uint32)
                        VeAPMI_tyr_RTCTimeYear) + 2000U))) - 1970))) * 31536000U)
                + (((uint32)rtb_Add9) * 86400U)) + (((uint32)((uint16)(((uint32)
                    ((uint8)((sint32)(((sint32)VeAPMI_tdy_RTCTimeDay) - 1)))) +
                   ((uint32)rtb_TmpSignalConversionAtVeSSDR)))) * 86400U)) +
              (((uint32)VeAPMI_thr_RTCTimeHour) * 3600U)) + (((uint32)
               VeAPMI_tmn_RTCTimeMinute) * 60U)) + ((uint32)
        VeAPMI_t_RTCTimeSecond);

    /* Math: '<S7>/Math Function5' incorporates:
     *  Sum: '<S7>/Add5'
     */
    rtb_Switch1 += Add13;

    /* MATLAB Function: '<S7>/Day_of_the_Month' incorporates:
     *  Constant: '<S7>/Constant25'
     *  Constant: '<S7>/Constant26'
     *  Constant: '<S7>/EPOCH start year '
     *  Constant: '<S7>/RTC_Year'
     *  Constant: '<S7>/Seconds_In_Day'
     *  Product: '<S7>/Divide11'
     *  Product: '<S7>/Divide12'
     *  Sum: '<S7>/Add14'
     *  Sum: '<S7>/Add15'
     *  Sum: '<S7>/Add16'
     *  Sum: '<S7>/Add6'
     */
    rtb_VeAPMC_tdy_DayNo = (((rtb_Switch1 / 86400U) - (((uint32)((sint32)
        (((sint32)((uint16)(((uint32)VeAPMI_tyr_RTCTimeYear) + 2000U))) - 1970)))
        * 365U)) - ((uint32)rtb_Add9)) + 1U;

    /* MATLAB Function 'APMR_MedTEB/APMC/RTC/Day_of_the_Month': '<S145>:1' */
    /* '<S145>:1:4' */
    /* '<S145>:1:3' */
    /* '<S145>:1:2' */
    month_num = 0;

    /* '<S145>:1:3' */
    /* '<S145>:1:4' */
    if (rtb_TmpSignalConversionAtVeCANR)
    {
        /* '<S145>:1:5' */
        while (rtb_VeAPMC_tdy_DayNo > ((uint32)e[month_num]))
        {
            /* '<S145>:1:6' */
            /* '<S145>:1:7' */
            tmp = ((float64)rtb_VeAPMC_tdy_DayNo) - ((float64)e[month_num]);
            if (tmp >= 0.0)
            {
                rtb_VeAPMC_tdy_DayNo = (uint32)tmp;
            }
            else
            {
                rtb_VeAPMC_tdy_DayNo = 0U;
            }

            /* '<S145>:1:8' */
            month_num++;
            if ((month_num + 1) > 12)
            {
                /* '<S145>:1:9' */
                /* '<S145>:1:10' */
                month_num = 0;
            }
        }

        /* '<S145>:1:13' */
    }
    else
    {
        while (rtb_VeAPMC_tdy_DayNo > ((uint32)d[month_num]))
        {
            /* '<S145>:1:15' */
            /* '<S145>:1:16' */
            tmp = ((float64)rtb_VeAPMC_tdy_DayNo) - ((float64)d[month_num]);
            if (tmp >= 0.0)
            {
                rtb_VeAPMC_tdy_DayNo = (uint32)tmp;
            }
            else
            {
                rtb_VeAPMC_tdy_DayNo = 0U;
            }

            /* '<S145>:1:17' */
            month_num++;
            if ((month_num + 1) > 12)
            {
                /* '<S145>:1:18' */
                /* '<S145>:1:19' */
                month_num = 0;
            }
        }

        /* '<S145>:1:22' */
    }

    /* End of MATLAB Function: '<S7>/Day_of_the_Month' */

    /* DataTypeConversion: '<S7>/Data Type Conversion' */
    VeAPMC_tdy_AlarmDay = (uint8)rtb_VeAPMC_tdy_DayNo;

    /* Math: '<S7>/Math Function5' incorporates:
     *  Math: '<S7>/Math Function3'
     */
    rtb_Switch1 %= 86400U;

    /* Product: '<S7>/Divide10' incorporates:
     *  Constant: '<S7>/Seconds_In_Hour'
     */
    VeAPMC_thr_AlarmHours = (uint8)(rtb_Switch1 / 3600U);

    /* Math: '<S7>/Math Function5' */
    rtb_Switch1 %= 3600U;

    /* Product: '<S7>/Divide9' incorporates:
     *  Constant: '<S7>/Seconds_In_Min'
     */
    VeAPMC_tm_AlarmMinutes = (uint8)(rtb_Switch1 / 60U);

    /* Outputs for Atomic SubSystem: '<S9>/Turn Off Delay Time' */
    /* Outport: '<Root>/VeAPMR_b_EnblThrmlRelay' incorporates:
     *  Constant: '<S37>/Constant Value2'
     *  Logic: '<S37>/AND'
     *  RelationalOperator: '<S37>/Greater  Than'
     *  SignalConversion generated from: '<S1>/VeAPMC_b_EnblThrmlRelay'
     */
    (void)Rte_Write_VeAPMR_b_EnblThrmlRelay_Value
        (rtb_TmpSignalConversionAtVeC_hh || (rtb_Switch_la > 0.0F));

    /* End of Outputs for SubSystem: '<S9>/Turn Off Delay Time' */

    /* Switch: '<S56>/Switch' incorporates:
     *  Constant: '<S56>/Constant'
     */
    if (KeAPMR_b_OvrdPCUPwrUPRelay)
    {
        /* Outport: '<Root>/VeAPMR_b_PCUPwrUpRelay' incorporates:
         *  Constant: '<S56>/Constant1'
         *  SignalConversion generated from: '<S1>/VeAPMC_b_PCUPwrUpRelay'
         */
        (void)Rte_Write_VeAPMR_b_PCUPwrUpRelay_Value(KeAPMR_b_PCUPwrUPRelay);
    }
    else
    {
        /* Outport: '<Root>/VeAPMR_b_PCUPwrUpRelay' incorporates:
         *  SignalConversion generated from: '<S1>/VeAPMC_b_PCUPwrUpRelay'
         */
        (void)Rte_Write_VeAPMR_b_PCUPwrUpRelay_Value(VeAPMC_b_PCU_PwrUpRelay);
    }

    /* End of Switch: '<S56>/Switch' */

    /* Switch: '<S54>/Switch' incorporates:
     *  Constant: '<S54>/Constant'
     */
    if (KeAPMR_b_OvrdPCU_EndRequestFlag)
    {
        /* Outport: '<Root>/VeAPMR_b_PCU_EndRequestFlag' incorporates:
         *  Constant: '<S54>/Constant1'
         *  SignalConversion generated from: '<S1>/VeAPMC_b_PCU_EndRequestFlag'
         */
        (void)Rte_Write_VeAPMR_b_PCU_EndRequestFlag_Value
            (KeAPMR_b_PCU_EndRequestFlag);
    }
    else
    {
        /* Outport: '<Root>/VeAPMR_b_PCU_EndRequestFlag' incorporates:
         *  SignalConversion generated from: '<S1>/VeAPMC_b_PCU_EndRequestFlag'
         */
        (void)Rte_Write_VeAPMR_b_PCU_EndRequestFlag_Value
            (VeAPMC_b_PCU_EndRequestFlag);
    }

    /* End of Switch: '<S54>/Switch' */

    /* Outport: '<Root>/VeAPMR_b_RequestCommState_DCAN' incorporates:
     *  Constant: '<S19>/Constant29'
     *  Constant: '<S30>/Constant'
     *  RelationalOperator: '<S30>/Compare'
     *  S-Function (sfix_bitop): '<S19>/Bitwise Logical Operator5'
     *  SignalConversion generated from: '<S1>/VeAPMC_b_RequestCommState_DCAN'
     */
    (void)Rte_Write_VeAPMR_b_RequestCommState_DCAN_Value((((sint32)
        VeAPMC_g_CANEnable) & 32) > 0);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAPMR_b_RequestCommState_LIN1' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPMC_b_RequestCommState_LIN1'
     */
    (void)Rte_Write_VeAPMR_b_RequestCommState_LIN1_Value
        (rtb_TmpSignalConversionAtVeSR_j);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMC'
     */
    /* Outport: '<Root>/VeAPMR_b_RequestCommState_LIN2' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPMC_b_RequestCommState_LIN2'
     *  SignalConversion generated from: '<S3>/VeAPMC_b_RequestCommState_LIN2'
     */
    (void)Rte_Write_VeAPMR_b_RequestCommState_LIN2_Value
        (rtb_TmpSignalConversionAtVeSR_j);

    /* Outport: '<Root>/VeAPMR_b_RequestCommState_LIN3' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPMC_b_RequestCommState_LIN3'
     *  SignalConversion generated from: '<S3>/VeAPMC_b_RequestCommState_LIN3'
     */
    (void)Rte_Write_VeAPMR_b_RequestCommState_LIN3_Value
        (rtb_TmpSignalConversionAtVeSR_j);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAPMR_b_TimerExpired' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPMC_b_TimerExpired'
     */
    (void)Rte_Write_VeAPMR_b_TimerExpired_Value(rtb_TmpSignalConversionAtVeSR1B);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMC'
     */
    /* Switch: '<S57>/Switch' incorporates:
     *  Constant: '<S57>/Constant'
     *  Constant: '<S57>/Constant1'
     *  Constant: '<S75>/Constant Value2'
     *  Logic: '<S75>/AND'
     *  RelationalOperator: '<S75>/Greater  Than'
     */
    if (KeAPMR_b_OvrdePTWakeup)
    {
        rtb_TmpSignalConversionAtVeSR_c = KeAPMR_b_ePTWakeup;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S12>/Turn Off Delay Time' */
        rtb_TmpSignalConversionAtVeSR_c = ((VeAPMC_b_PCU_PwrUpRelay) ||
            (rtb_Switch1_m0 > 0.0F));

        /* End of Outputs for SubSystem: '<S12>/Turn Off Delay Time' */
    }

    /* End of Switch: '<S57>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAPMR_b_ePTWakeup' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPMC_b_ePTWakeup'
     */
    (void)Rte_Write_VeAPMR_b_ePTWakeup_Value(rtb_TmpSignalConversionAtVeSR_c);

    /* Outport: '<Root>/VeAPMR_e_HCPShtdwnCmnd' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPMC_e_HCPShtdwnCmnd'
     *  Switch: '<S68>/Switch1'
     */
    (void)Rte_Write_VeAPMR_e_HCPShtdwnCmnd_Value(VeAPMC_e_HCPShtdwnCmnd);

    /* Outport: '<Root>/VeAPMR_e_ePTLOCDiagEnable' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPMC_e_ePTLOCDiagEnable'
     *  Switch: '<S69>/Switch1'
     */
    (void)Rte_Write_VeAPMR_e_ePTLOCDiagEnable_Value(VeAPMC_e_ePTLOCDiagEnable);

    /* Outport: '<Root>/VeAPMR_g_WakeupActv' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPMC_g_WakeupActv'
     */
    (void)Rte_Write_VeAPMR_g_WakeupActv_Value(VeAPMC_g_WakeupActv);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMC'
     */
    /* Outport: '<Root>/VeAPMR_b_EnableAlarm' incorporates:
     *  Gain: '<S149>/Gain'
     *  SignalConversion generated from: '<S1>/VeAPMR_b_EnableAlarm'
     */
    (void)Rte_Write_VeAPMR_b_EnableAlarm_Value(VeAPMC_b_EnableAlarm);

    /* Outport: '<Root>/VeAPMR_b_RequestCommState_FD11' incorporates:
     *  Constant: '<S19>/Constant25'
     *  Constant: '<S25>/Constant'
     *  RelationalOperator: '<S25>/Compare'
     *  S-Function (sfix_bitop): '<S19>/Bitwise Logical Operator1'
     *  SignalConversion generated from: '<S1>/VeAPMR_b_RequestCommState_FD11'
     */
    (void)Rte_Write_VeAPMR_b_RequestCommState_FD11_Value((((sint32)
        VeAPMC_g_CANEnable) & 2) > 0);

    /* Outport: '<Root>/VeAPMR_b_RequestCommState_FD14' incorporates:
     *  Constant: '<S19>/Constant28'
     *  Constant: '<S31>/Constant'
     *  RelationalOperator: '<S31>/Compare'
     *  S-Function (sfix_bitop): '<S19>/Bitwise Logical Operator4'
     *  SignalConversion generated from: '<S1>/VeAPMR_b_RequestCommState_FD14'
     */
    (void)Rte_Write_VeAPMR_b_RequestCommState_FD14_Value((((sint32)
        VeAPMC_g_CANEnable) & 16) > 0);

    /* Outport: '<Root>/VeAPMR_b_RequestCommState_FD16' incorporates:
     *  Constant: '<S19>/Constant26'
     *  Constant: '<S26>/Constant'
     *  RelationalOperator: '<S26>/Compare'
     *  S-Function (sfix_bitop): '<S19>/Bitwise Logical Operator2'
     *  SignalConversion generated from: '<S1>/VeAPMR_b_RequestCommState_FD16'
     */
    (void)Rte_Write_VeAPMR_b_RequestCommState_FD16_Value((((sint32)
        VeAPMC_g_CANEnable) & 4) > 0);

    /* Outport: '<Root>/VeAPMR_b_RequestCommState_FD3' incorporates:
     *  Constant: '<S19>/Constant17'
     *  Constant: '<S24>/Constant'
     *  RelationalOperator: '<S24>/Compare'
     *  S-Function (sfix_bitop): '<S19>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S1>/VeAPMR_b_RequestCommState_FD3'
     */
    (void)Rte_Write_VeAPMR_b_RequestCommState_FD3_Value((((sint32)
        VeAPMC_g_CANEnable) & 1) > 0);

    /* Outport: '<Root>/VeAPMR_b_RequestCommState_FD5' incorporates:
     *  Constant: '<S19>/Constant27'
     *  Constant: '<S27>/Constant'
     *  RelationalOperator: '<S27>/Compare'
     *  S-Function (sfix_bitop): '<S19>/Bitwise Logical Operator3'
     *  SignalConversion generated from: '<S1>/VeAPMR_b_RequestCommState_FD5'
     */
    (void)Rte_Write_VeAPMR_b_RequestCommState_FD5_Value((((sint32)
        VeAPMC_g_CANEnable) & 8) > 0);

    /* Outport: '<Root>/VeAPMR_e_ModulPwrModeReq' incorporates:
     *  DataTypeConversion: '<S3>/Data Type Conversion'
     *  SignalConversion generated from: '<S1>/VeAPMR_e_ModeReq'
     *  Switch: '<S41>/Switch1'
     */
    (void)Rte_Write_VeAPMR_e_ModulPwrModeReq_Mode((uint8)VeAPMC_e_ModeReq);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAPMR_t_EPOCHTime' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPMR_t_EPOCHTime'
     */
    (void)Rte_Write_VeAPMR_t_EPOCHTime_Value(Add13);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMC'
     */
    /* Outport: '<Root>/VeAPMR_tdy_AlarmDay' incorporates:
     *  Gain: '<S150>/Gain'
     *  SignalConversion generated from: '<S1>/VeAPMR_tdy_AlarmDay'
     */
    (void)Rte_Write_VeAPMR_tdy_AlarmDay_Value(VeAPMC_tdy_AlarmDay);

    /* Outport: '<Root>/VeAPMR_thr_AlarmHours' incorporates:
     *  Gain: '<S151>/Gain'
     *  SignalConversion generated from: '<S1>/VeAPMR_thr_AlarmHours'
     */
    (void)Rte_Write_VeAPMR_thr_AlarmHours_Value(VeAPMC_thr_AlarmHours);

    /* Outport: '<Root>/VeAPMR_tm_AlarmMinutes' incorporates:
     *  Gain: '<S152>/Gain'
     *  SignalConversion generated from: '<S1>/VeAPMR_tm_AlarmMinutes'
     */
    (void)Rte_Write_VeAPMR_tm_AlarmMinutes_Value(VeAPMC_tm_AlarmMinutes);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model initialize function */
FUNC(void, APMR_CODE) APMR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */

    /* custom signals */
    VeAPMC_e_SysState = CeAPMR_e_Init;
    VeAPMR_e_Src_Mode = CeAPMR_e_Init;
    VeAPMI_e_NVM_Status = CeAPMR_e_Pending;
    VeAPMC_e_ModeReq_Arb = CeAPMR_e_WakeupMode;
    VeAPMC_e_ModeReq = CeAPMR_e_WakeupMode;
    VeAPMI_e_ModulPwrModeStatus = CeAPMR_e_WakeupMode;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/APMR_MedTEB'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APMI'
     */
    /* SystemInitialize for Switch: '<S172>/Switch1' incorporates:
     *  Outport: '<S4>/VeAPMI_e_ModulPwrModeStatus'
     */
    VeAPMI_e_ModulPwrModeStatus = CeAPMR_e_WakeupMode;

    /* SystemInitialize for Switch: '<S199>/Switch1' incorporates:
     *  Outport: '<S4>/VeAPMI_e_NVM_Status'
     */
    VeAPMI_e_NVM_Status = CeAPMR_e_Pending;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Outputs for Atomic SubSystem: '<Root>/Initialize Function' */
    /* Outport: '<Root>/VeAPMR_e_ModulPwrModeReq' incorporates:
     *  Constant: '<S2>/Constant Value6'
     */
    (void)Rte_Write_VeAPMR_e_ModulPwrModeReq_Mode((uint8)4U);

    /* Outport: '<Root>/VeAPMR_b_PCU_EndRequestFlag' incorporates:
     *  Constant: '<S2>/Constant Value13'
     */
    (void)Rte_Write_VeAPMR_b_PCU_EndRequestFlag_Value(true);

    /* Outport: '<Root>/VeAPMR_e_HCPShtdwnCmnd' incorporates:
     *  Constant: '<S221>/Constant'
     */
    (void)Rte_Write_VeAPMR_e_HCPShtdwnCmnd_Value(CeAPMR_e_Default);

    /* Outport: '<Root>/VeAPMR_e_ePTLOCDiagEnable' incorporates:
     *  Constant: '<S222>/Constant'
     */
    (void)Rte_Write_VeAPMR_e_ePTLOCDiagEnable_Value(CeAPMR_e_ePTLOC_Default);

    /* End of Outputs for SubSystem: '<Root>/Initialize Function' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
