/*
 * File: INVR_ac.c
 *
 * Code generated for Simulink model 'INVR_ac'.
 *
 * Model version                  : 9.106
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:22:03 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "INVR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_INVR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, INVR_VAR_INIT) HeINVI_b_GMGOverTemp_Enbl = 0;/* Referenced by: '<S358>/Calib' */
static volatile CONST(boolean, INVR_VAR_INIT) HeINVI_b_P2ModeSts_Enbl = 0;/* Referenced by: '<S359>/Calib' */
static volatile CONST(TeINVR_e_EMModeReq_TCM, INVR_VAR_INIT)
    KaINVR_e_EMModeReq_TCM_Map[4] =
{
    CeINVR_e_NoControl_Inactvive, CeINVR_e_SpeedControl,
    CeINVR_e_ZeroTorqueRequest, CeINVR_e_SignalNotAvailableSNA
};                                     /* Referenced by: '<S601>/Calib' */

static volatile CONST(TeINVR_e_InvrtrIsolStat, INVR_VAR_INIT)
    KaINVR_e_InvrtrA_IsolStat_Map[3] =
{
    CeINVR_e_IsolUndetermined, CeINVR_e_IsolPassed, CeINVR_e_IsolFailed
};                                     /* Referenced by: '<S603>/Calib' */

static volatile CONST(TeINVR_e_InvrtrIsolStat, INVR_VAR_INIT)
    KaINVR_e_InvrtrB_IsolStat_Map[3] =
{
    CeINVR_e_IsolUndetermined, CeINVR_e_IsolPassed, CeINVR_e_IsolFailed
};                                     /* Referenced by: '<S605>/Calib' */

static volatile CONST(TeSRAR_e_CommFail, INVR_VAR_INIT)
    KaINVR_e_MCPA_CommFail_Map[15] =
{
    CeSRAR_e_CommFail_NoFault, CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC,
    CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC,
    CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC, CeSRAR_e_LOC_VDCM,
    CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC,
    CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC, CeSRAR_e_Bus_Failure_CAN
};                                     /* Referenced by: '<S607>/Calib' */

static volatile CONST(TeINVR_e_SPTState, INVR_VAR_INIT)
    KaINVR_e_MCPA_SPT_State_Map[3] =
{
    CeINVR_e_Pending_SPT, CeINVR_e_Failed_SPT, CeINVR_e_Passed_SPT
};                                     /* Referenced by: '<S610>/Calib' */

static volatile CONST(TeSRAR_e_CommFail, INVR_VAR_INIT)
    KaINVR_e_MCPB_CommFail_Map[15] =
{
    CeSRAR_e_CommFail_NoFault, CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC,
    CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC,
    CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC, CeSRAR_e_LOC_VDCM,
    CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC,
    CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC, CeSRAR_e_Bus_Failure_CAN
};                                     /* Referenced by: '<S612>/Calib' */

static volatile CONST(TeINVR_e_SPTState, INVR_VAR_INIT)
    KaINVR_e_MCPB_SPT_State_Map[3] =
{
    CeINVR_e_Pending_SPT, CeINVR_e_Failed_SPT, CeINVR_e_Passed_SPT
};                                     /* Referenced by: '<S615>/Calib' */

static volatile CONST(TeINVR_e_SPTState, INVR_VAR_INIT)
    KaINVR_e_MCPC_SPT_State_Map[3] =
{
    CeINVR_e_Pending_SPT, CeINVR_e_Passed_SPT, CeINVR_e_Failed_SPT
};                                     /* Referenced by: '<S618>/Calib' */

static volatile CONST(TeINVR_e_SixSOStatus, INVR_VAR_INIT)
    KaINVR_e_MtrA_6SOEnbl_Map[4] =
{
    CeINVR_e_ThreePS, CeINVR_e_SixSO, CeINVR_e_Switching, CeINVR_e_SNA
};                                     /* Referenced by: '<S620>/Calib' */

static volatile CONST(TeINVR_e_Dschrge_Stat, INVR_VAR_INIT)
    KaINVR_e_MtrA_Dschrge_Stat_Map[4] =
{
    CeINVR_e_AD_DISABLED, CeINVR_e_AD_INPROGRESS, CeINVR_e_AD_COMPLETE,
    CeINVR_e_AD_FAILED
};                                     /* Referenced by: '<S623>/Calib' */

static volatile CONST(TeINVR_e_MtrInvrtrSt, INVR_VAR_INIT)
    KaINVR_e_MtrA_InvrtrSt_Map[10] =
{
    CeINVR_e_NormalPowerStageOff, CeINVR_e_NormalPowerStageOn,
    CeINVR_e_NormalPowerStageOnOvrd, CeINVR_e_ActiveDischarge,
    CeINVR_e_InverterFaulted, CeINVR_e_NormalPowerStageOffHvRqd,
    CeINVR_e_NormalVoltCntrlPriming, CeINVR_e_NormalVoltCntrlOn,
    CeINVR_e_InitCompleted, CeINVR_e_Init
};                                     /* Referenced by: '<S625>/Calib' */

static volatile CONST(TeINVR_e_SixSOStatus, INVR_VAR_INIT)
    KaINVR_e_MtrB_6SOEnbl_Map[4] =
{
    CeINVR_e_ThreePS, CeINVR_e_SixSO, CeINVR_e_Switching, CeINVR_e_SNA
};                                     /* Referenced by: '<S627>/Calib' */

static volatile CONST(TeINVR_e_Dschrge_Stat, INVR_VAR_INIT)
    KaINVR_e_MtrB_Dschrge_Stat_Map[4] =
{
    CeINVR_e_AD_DISABLED, CeINVR_e_AD_INPROGRESS, CeINVR_e_AD_COMPLETE,
    CeINVR_e_AD_FAILED
};                                     /* Referenced by: '<S630>/Calib' */

static volatile CONST(TeINVR_e_MtrInvrtrSt, INVR_VAR_INIT)
    KaINVR_e_MtrB_InvrtrSt_Map[10] =
{
    CeINVR_e_NormalPowerStageOff, CeINVR_e_NormalPowerStageOn,
    CeINVR_e_NormalPowerStageOnOvrd, CeINVR_e_ActiveDischarge,
    CeINVR_e_InverterFaulted, CeINVR_e_NormalPowerStageOffHvRqd,
    CeINVR_e_NormalVoltCntrlPriming, CeINVR_e_NormalVoltCntrlOn,
    CeINVR_e_InitCompleted, CeINVR_e_Init
};                                     /* Referenced by: '<S632>/Calib' */

static volatile CONST(TeINVR_e_SixSOStatus, INVR_VAR_INIT)
    KaINVR_e_MtrC_6SOEnbl_Map[4] =
{
    CeINVR_e_ThreePS, CeINVR_e_SixSO, CeINVR_e_Switching, CeINVR_e_SNA
};                                     /* Referenced by: '<S634>/Calib' */

static volatile CONST(TeINVR_e_Dschrge_Stat, INVR_VAR_INIT)
    KaINVR_e_MtrC_Dschrge_Stat_Map[4] =
{
    CeINVR_e_AD_DISABLED, CeINVR_e_AD_INPROGRESS, CeINVR_e_AD_COMPLETE,
    CeINVR_e_AD_FAILED
};                                     /* Referenced by: '<S637>/Calib' */

static volatile CONST(TeINVR_e_MtrInvrtrSt, INVR_VAR_INIT)
    KaINVR_e_MtrC_InvrtrSt_Map[10] =
{
    CeINVR_e_NormalPowerStageOff, CeINVR_e_NormalPowerStageOn,
    CeINVR_e_NormalPowerStageOnOvrd, CeINVR_e_ActiveDischarge,
    CeINVR_e_InverterFaulted, CeINVR_e_NormalPowerStageOffHvRqd,
    CeINVR_e_NormalVoltCntrlPriming, CeINVR_e_NormalVoltCntrlOn,
    CeINVR_e_InitCompleted, CeINVR_e_Init
};                                     /* Referenced by: '<S639>/Calib' */

static volatile CONST(TeINVR_e_P2ModeStatus, INVR_VAR_INIT)
    KaINVR_e_P2ModeSts_Map[11] =
{
    CeINVR_e_P2ModeStatus_Idle, CeINVR_e_P2ModeStatus_VoltCtrl,
    CeINVR_e_P2ModeStatus_VoltCtrlDerate, CeINVR_e_P2ModeStatus_SpeedCtrl,
    CeINVR_e_P2ModeStatus_SpeedCtrlDerate, CeINVR_e_P2ModeStatus_TorqCtrl,
    CeINVR_e_P2ModeStatus_TorqCtrlDerate, CeINVR_e_P2ModeStatus_ActvShortCircuit,
    CeINVR_e_P2ModeStatus_FailASC, CeINVR_e_P2ModeStatus_FailOpen,
    CeINVR_e_P2ModeStatus_SNA
};                                     /* Referenced by: '<S641>/Calib' */

static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_InvrtrA_IsolStat = 160U;/* Referenced by: '<S307>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_InvrtrB_IsolStat = 160U;/* Referenced by: '<S375>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MCPA_SPT_State = 160U;/* Referenced by: '<S308>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MCPB_SPT_State = 160U;/* Referenced by: '<S376>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MCPC_SPT_State = 160U;/* Referenced by: '<S438>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrAFlt_HV_CntctrOpnRq =
    160U;                              /* Referenced by: '<S309>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrA_6SOEnbl = 160U;/* Referenced by: '<S310>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrA_CapctrTemp = 160U;/* Referenced by: '<S311>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrA_ClntIn_Temp = 160U;/* Referenced by: '<S312>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrA_ClntOut_Temp = 160U;/* Referenced by: '<S313>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrA_CtrlBoard_Temp =
    160U;                              /* Referenced by: '<S314>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrA_DC_Crnt = 160U;/* Referenced by: '<S315>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrA_DC_Volt = 160U;/* Referenced by: '<S316>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrA_InvrtrSt = 160U;/* Referenced by: '<S317>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrA_InvrtrTemp = 160U;/* Referenced by: '<S318>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrA_RotrTemp = 160U;/* Referenced by: '<S319>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrA_Temp = 160U;/* Referenced by: '<S320>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrBFlt_HV_CntctrOpnRq =
    160U;                              /* Referenced by: '<S377>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrB_6SOEnbl = 160U;/* Referenced by: '<S378>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrB_CapctrTemp = 160U;/* Referenced by: '<S379>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrB_ClntIn_Temp = 160U;/* Referenced by: '<S380>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrB_ClntOut_Temp = 160U;/* Referenced by: '<S381>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrB_CtrlBoard_Temp =
    160U;                              /* Referenced by: '<S382>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrB_DC_Crnt = 160U;/* Referenced by: '<S383>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrB_DC_Volt = 160U;/* Referenced by: '<S384>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrB_InvrtrSt = 160U;/* Referenced by: '<S385>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrB_InvrtrTemp = 160U;/* Referenced by: '<S386>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrB_RotrTemp = 160U;/* Referenced by: '<S387>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrB_Temp = 160U;/* Referenced by: '<S388>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrCFlt_3PS_Pos = 160U;/* Referenced by: '<S439>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrCFlt_HV_CntctrOpnRq =
    160U;                              /* Referenced by: '<S440>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrC_6SOEnbl = 160U;/* Referenced by: '<S441>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrC_CtrlBoard_Temp =
    160U;                              /* Referenced by: '<S442>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrC_DC_Crnt = 160U;/* Referenced by: '<S443>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrC_DC_Volt = 160U;/* Referenced by: '<S444>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrC_InvrtrSt = 160U;/* Referenced by: '<S445>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrC_InvrtrTemp = 160U;/* Referenced by: '<S446>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrC_RotrTemp = 160U;/* Referenced by: '<S447>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_MtrC_Temp = 160U;/* Referenced by: '<S448>/Calib' */
static volatile CONST(uint16, INVR_VAR_INIT) KeINVI_Cnt_P2ModeSts = 160U;/* Referenced by: '<S389>/Calib' */
static volatile CONST(boolean, INVR_VAR_INIT)
    KeINVI_b_MtrACntctrOpnRq_AltSrcAvlb = 0;/* Referenced by: '<S356>/Calib' */
static volatile CONST(boolean, INVR_VAR_INIT)
    KeINVI_b_MtrBCntctrOpnRq_AltSrcAvlb = 0;/* Referenced by: '<S426>/Calib' */
static volatile CONST(sint16, INVR_VAR_INIT) KeINVR_Cnt_MCPA_SPT_State_ArraySize
    = 0;             /* Referenced by: '<S148>/PokeINVR_e_MCPA_SPT_StateChrt' */
static volatile CONST(sint16, INVR_VAR_INIT) KeINVR_Cnt_MCPB_SPT_State_ArraySize
    = 0;             /* Referenced by: '<S151>/PokeINVR_e_MCPB_SPT_StateChrt' */
static volatile CONST(sint16, INVR_VAR_INIT)
    KeINVR_Cnt_MtrA_Dschrge_Stat_ArraySize = 5;
                  /* Referenced by: '<S156>/PokeINVR_e_MtrA_Dschrge_StatChrt' */
static volatile CONST(sint16, INVR_VAR_INIT) KeINVR_Cnt_MtrA_InvrtrSt_ArraySize =
    0;                /* Referenced by: '<S157>/PokeINVR_e_MtrA_InvrtrStChrt' */
static volatile CONST(sint16, INVR_VAR_INIT)
    KeINVR_Cnt_MtrB_Dschrge_Stat_ArraySize = 5;
                  /* Referenced by: '<S160>/PokeINVR_e_MtrB_Dschrge_StatChrt' */
static volatile CONST(sint16, INVR_VAR_INIT) KeINVR_Cnt_MtrB_InvrtrSt_ArraySize =
    0;                /* Referenced by: '<S161>/PokeINVR_e_MtrB_InvrtrStChrt' */
static volatile CONST(sint16, INVR_VAR_INIT)
    KeINVR_Cnt_MtrC_Dschrge_Stat_ArraySize = 5;
                  /* Referenced by: '<S164>/PokeINVR_e_MtrC_Dschrge_StatChrt' */
static volatile CONST(sint16, INVR_VAR_INIT) KeINVR_Cnt_P2ModeSts_ArraySize = 0;
                          /* Referenced by: '<S166>/PokeINVR_e_P2ModeStsChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_I_MtrA_DC_Crnt = 0.0F;/* Referenced by: '<S478>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_I_MtrA_DC_CrntDflt = 0.0F;
                         /* Referenced by: '<S1>/FsftINVR_I_MtrA_DC_CrntChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_I_MtrB_DC_Crnt = 0.0F;/* Referenced by: '<S507>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_I_MtrB_DC_CrntDflt = 0.0F;
                         /* Referenced by: '<S2>/FsftINVR_I_MtrB_DC_CrntChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_I_MtrC_DC_Crnt = 0.0F;/* Referenced by: '<S526>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_I_MtrC_DC_CrntDflt = 0.0F;
                         /* Referenced by: '<S3>/FsftINVR_I_MtrC_DC_CrntChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_P_BstCnvtrChrgPwrLmt_Init =
    0.0F;                              /* Referenced by: '<S479>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT)
    KeINVR_P_BstCnvtrChrgPwrLmt_ST_Init = 0.0F;/* Referenced by: '<S480>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_P_BstCnvtrDschrgPwrLmt_Init
    = 0.0F;                            /* Referenced by: '<S481>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT)
    KeINVR_P_BstCnvtrDschrgPwrLmt_ST_Init = 0.0F;/* Referenced by: '<S482>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT)
    KeINVR_T_BstCnvtrLwrIGBT_TmpFltd_Init = 0.0F;/* Referenced by: '<S483>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_BstCnvtrReactorTmp_Init =
    0.0F;                              /* Referenced by: '<S484>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT)
    KeINVR_T_BstCnvtrUpprIGBT_TmpFltd_Init = 0.0F;/* Referenced by: '<S485>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_GPIMACBusBarTemp_Init =
    0.0F;                              /* Referenced by: '<S486>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_GPIMDCBusBarTemp_Init =
    0.0F;                              /* Referenced by: '<S487>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_CapctrTemp = 0.0F;/* Referenced by: '<S488>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_CapctrTempDflt =
    0.0F;            /* Referenced by: '<S13>/FsftINVR_T_MtrA_CapctrTempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_ClntIn_Temp = 0.0F;/* Referenced by: '<S489>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_ClntIn_TempDflt =
    0.0F;           /* Referenced by: '<S14>/FsftINVR_T_MtrA_ClntIn_TempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_ClntOut_Temp = 0.0F;/* Referenced by: '<S490>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_ClntOut_TempDflt =
    0.0F;          /* Referenced by: '<S15>/FsftINVR_T_MtrA_ClntOut_TempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_CoolantTemp_Init =
    0.0F;                              /* Referenced by: '<S491>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_CtrlBoard_Temp =
    0.0F;                              /* Referenced by: '<S492>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_CtrlBoard_TempDflt =
    0.0F;        /* Referenced by: '<S16>/FsftINVR_T_MtrA_CtrlBoard_TempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_InvrtrTemp = 0.0F;/* Referenced by: '<S493>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_InvrtrTempDflt =
    0.0F;            /* Referenced by: '<S17>/FsftINVR_T_MtrA_InvrtrTempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_RotrTemp = 0.0F;/* Referenced by: '<S494>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_RotrTempDflt = 0.0F;
                       /* Referenced by: '<S18>/FsftINVR_T_MtrA_RotrTempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_Temp = 0.0F;/* Referenced by: '<S495>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrA_TempDflt = 0.0F;
                           /* Referenced by: '<S19>/FsftINVR_T_MtrA_TempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrBBusBarTemp_Init =
    0.0F;                              /* Referenced by: '<S508>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_CapctrTemp = 0.0F;/* Referenced by: '<S509>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_CapctrTempDflt =
    0.0F;            /* Referenced by: '<S21>/FsftINVR_T_MtrB_CapctrTempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_ClntIn_Temp = 0.0F;/* Referenced by: '<S510>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_ClntIn_TempDflt =
    0.0F;           /* Referenced by: '<S22>/FsftINVR_T_MtrB_ClntIn_TempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_ClntOut_Temp = 0.0F;/* Referenced by: '<S511>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_ClntOut_TempDflt =
    0.0F;          /* Referenced by: '<S23>/FsftINVR_T_MtrB_ClntOut_TempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_CtrlBoard_Temp =
    0.0F;                              /* Referenced by: '<S512>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_CtrlBoard_TempDflt =
    0.0F;        /* Referenced by: '<S24>/FsftINVR_T_MtrB_CtrlBoard_TempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_InvrtrTemp = 0.0F;/* Referenced by: '<S513>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_InvrtrTempDflt =
    0.0F;            /* Referenced by: '<S25>/FsftINVR_T_MtrB_InvrtrTempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_RotrTemp = 0.0F;/* Referenced by: '<S514>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_RotrTempDflt = 0.0F;
                       /* Referenced by: '<S26>/FsftINVR_T_MtrB_RotrTempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_Temp = 0.0F;/* Referenced by: '<S515>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrB_TempDflt = 0.0F;
                           /* Referenced by: '<S27>/FsftINVR_T_MtrB_TempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrCBusBarTemp_Init =
    0.0F;                              /* Referenced by: '<S527>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrC_CtrlBoard_Temp =
    0.0F;                              /* Referenced by: '<S528>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrC_CtrlBoard_TempDflt =
    0.0F;        /* Referenced by: '<S29>/FsftINVR_T_MtrC_CtrlBoard_TempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrC_InvrtrTemp = 0.0F;/* Referenced by: '<S529>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrC_InvrtrTempDflt =
    0.0F;            /* Referenced by: '<S30>/FsftINVR_T_MtrC_InvrtrTempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrC_RotrTemp = 0.0F;/* Referenced by: '<S530>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrC_RotrTempDflt = 0.0F;
                       /* Referenced by: '<S31>/FsftINVR_T_MtrC_RotrTempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrC_Temp = 0.0F;/* Referenced by: '<S531>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_T_MtrC_TempDflt = 0.0F;
                           /* Referenced by: '<S32>/FsftINVR_T_MtrC_TempChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_U_MaxBoostVolt_Init = 0.0F;/* Referenced by: '<S496>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_U_MtrA_DC_Volt = 0.0F;/* Referenced by: '<S497>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_U_MtrA_DC_VoltDflt = 0.0F;
                        /* Referenced by: '<S34>/FsftINVR_U_MtrA_DC_VoltChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_U_MtrB_DC_Volt = 0.0F;/* Referenced by: '<S516>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_U_MtrB_DC_VoltDflt = 0.0F;
                        /* Referenced by: '<S35>/FsftINVR_U_MtrB_DC_VoltChrt' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_U_MtrC_DC_Volt = 0.0F;/* Referenced by: '<S532>/Calib' */
static volatile CONST(float32, INVR_VAR_INIT) KeINVR_U_MtrC_DC_VoltDflt = 0.0F;
                        /* Referenced by: '<S36>/FsftINVR_U_MtrC_DC_VoltChrt' */
static volatile CONST(boolean, INVR_VAR_INIT) KeINVR_b_P1_CAN_COM_Error_Init = 0;/* Referenced by: '<S498>/Calib' */
static volatile CONST(TeINVR_e_EMModeReq_TCM, INVR_VAR_INIT)
    KeINVR_e_EMModeReq_TCMDflt = CeINVR_e_NoControl_Inactvive;/* Referenced by:
                                                               * '<S65>/FsftINVR_e_EMModeReq_TCMChrt'
                                                               * '<S143>/PokeINVR_e_EMModeReq_TCMChrt'
                                                               * '<S517>/Calib'
                                                               */
static volatile CONST(TeINVR_e_InvrtrIsolStat, INVR_VAR_INIT)
    KeINVR_e_InvrtrA_IsolStat = CeINVR_e_IsolUndetermined;/* Referenced by: '<S499>/Calib' */
static volatile CONST(TeINVR_e_InvrtrIsolStat, INVR_VAR_INIT)
    KeINVR_e_InvrtrB_IsolStat = CeINVR_e_IsolUndetermined;/* Referenced by: '<S518>/Calib' */
static volatile CONST(TeINVR_e_SPTState, INVR_VAR_INIT) KeINVR_e_MCPA_SPT_State =
    CeINVR_e_Pending_SPT;              /* Referenced by: '<S500>/Calib' */
static volatile CONST(TeINVR_e_SPTState, INVR_VAR_INIT) KeINVR_e_MCPB_SPT_State =
    CeINVR_e_Pending_SPT;              /* Referenced by: '<S519>/Calib' */
static volatile CONST(TeINVR_e_SPTState, INVR_VAR_INIT) KeINVR_e_MCPC_SPT_State =
    CeINVR_e_Pending_SPT;              /* Referenced by: '<S533>/Calib' */
static volatile CONST(TeINVR_e_SixSOStatus, INVR_VAR_INIT)
    KeINVR_e_MtrA_6SOEnbl_Init = CeINVR_e_ThreePS;/* Referenced by: '<S501>/Calib' */
static volatile CONST(TeINVR_e_DerateReason, INVR_VAR_INIT)
    KeINVR_e_MtrA_DerateReason_Init = CeINVR_e_DerateReason1;/* Referenced by: '<S502>/Calib' */
static volatile CONST(TeINVR_e_Dschrge_Stat, INVR_VAR_INIT)
    KeINVR_e_MtrA_Dschrge_StatDflt = CeINVR_e_AD_DISABLED;
                   /* Referenced by: '<S71>/FsftINVR_e_MtrA_Dschrge_StatChrt' */
static volatile CONST(TeINVR_e_Dschrge_Stat, INVR_VAR_INIT)
    KeINVR_e_MtrA_Dschrge_Stat_Init = CeINVR_e_AD_DISABLED;/* Referenced by: '<S503>/Calib' */
static volatile CONST(TeINVR_e_MtrInvrtrSt, INVR_VAR_INIT)
    KeINVR_e_MtrA_InvrtrSt = CeINVR_e_NormalPowerStageOff;/* Referenced by: '<S504>/Calib' */
static volatile CONST(TeINVR_e_SixSOStatus, INVR_VAR_INIT)
    KeINVR_e_MtrB_6SOEnbl_Init = CeINVR_e_ThreePS;/* Referenced by: '<S520>/Calib' */
static volatile CONST(TeINVR_e_DerateReason, INVR_VAR_INIT)
    KeINVR_e_MtrB_DerateReason_Init = CeINVR_e_DerateReason1;/* Referenced by: '<S521>/Calib' */
static volatile CONST(TeINVR_e_Dschrge_Stat, INVR_VAR_INIT)
    KeINVR_e_MtrB_Dschrge_StatDflt = CeINVR_e_AD_DISABLED;
                   /* Referenced by: '<S73>/FsftINVR_e_MtrB_Dschrge_StatChrt' */
static volatile CONST(TeINVR_e_Dschrge_Stat, INVR_VAR_INIT)
    KeINVR_e_MtrB_Dschrge_Stat_Init = CeINVR_e_AD_DISABLED;/* Referenced by: '<S522>/Calib' */
static volatile CONST(TeINVR_e_MtrInvrtrSt, INVR_VAR_INIT)
    KeINVR_e_MtrB_InvrtrSt = CeINVR_e_NormalPowerStageOff;/* Referenced by: '<S523>/Calib' */
static volatile CONST(TeINVR_e_SixSOStatus, INVR_VAR_INIT)
    KeINVR_e_MtrC_6SOEnbl_Init = CeINVR_e_ThreePS;/* Referenced by: '<S534>/Calib' */
static volatile CONST(TeINVR_e_DerateReason, INVR_VAR_INIT)
    KeINVR_e_MtrC_DerateReason_Init = CeINVR_e_DerateReason1;/* Referenced by: '<S535>/Calib' */
static volatile CONST(TeINVR_e_Dschrge_Stat, INVR_VAR_INIT)
    KeINVR_e_MtrC_Dschrge_StatDflt = CeINVR_e_AD_DISABLED;
                   /* Referenced by: '<S75>/FsftINVR_e_MtrC_Dschrge_StatChrt' */
static volatile CONST(TeINVR_e_Dschrge_Stat, INVR_VAR_INIT)
    KeINVR_e_MtrC_Dschrge_Stat_Init = CeINVR_e_AD_DISABLED;/* Referenced by: '<S536>/Calib' */
static volatile CONST(TeINVR_e_MtrInvrtrSt, INVR_VAR_INIT)
    KeINVR_e_MtrC_InvrtrSt = CeINVR_e_NormalPowerStageOff;/* Referenced by: '<S537>/Calib' */
static volatile CONST(TeINVR_e_P2ModeStatus, INVR_VAR_INIT)
    KeINVR_e_P2ModeStsDflt = CeINVR_e_P2ModeStatus_Idle;/* Referenced by:
                                                         * '<S77>/FsftINVR_e_P2ModeStsChrt'
                                                         * '<S524>/Calib'
                                                         */
static volatile CONST(float32, INVR_VAR_INIT) KtINVR_P_BstCnvtrChrgLosses[8] =
{
    -0.18F, -5.81F, -12.71F, -22.53F, -28.4F, -35.21F, -39.08F, -46.83F
} ;                                    /* Referenced by: '<S323>/Vector' */

static volatile CONST(float32, INVR_VAR_INIT) KtINVR_P_BstCnvtrChrgLosses_ST[8] =
{
    -0.18F, -5.81F, -12.71F, -22.53F, -28.4F, -35.21F, -39.08F, -46.83F
} ;                                    /* Referenced by: '<S325>/Vector' */

static volatile CONST(float32, INVR_VAR_INIT) KtINVR_P_BstCnvtrDschrgLosses[8] =
{
    -0.18F, 5.81F, 12.71F, 22.53F, 28.4F, 35.21F, 39.08F, 46.83F
} ;                                    /* Referenced by: '<S322>/Vector' */

static volatile CONST(float32, INVR_VAR_INIT) KtINVR_P_BstCnvtrDschrgLosses_ST[8]
    =
{
    -0.18F, 5.81F, 12.71F, 22.53F, 28.4F, 35.21F, 39.08F, 46.83F
} ;                                    /* Referenced by: '<S324>/Vector' */

static volatile CONST(float32, INVR_VAR_INIT) KxINVR_P_BstCnvtrChrgLosses[8] =
{
    0.0F, 6.0F, 13.0F, 23.0F, 29.0F, 36.0F, 40.0F, 48.0F
} ;                                    /* Referenced by: '<S323>/Vector' */

static volatile CONST(float32, INVR_VAR_INIT) KxINVR_P_BstCnvtrChrgLosses_ST[8] =
{
    0.0F, 6.0F, 13.0F, 23.0F, 29.0F, 36.0F, 40.0F, 48.0F
} ;                                    /* Referenced by: '<S325>/Vector' */

static volatile CONST(float32, INVR_VAR_INIT) KxINVR_P_BstCnvtrDschrgLosses[8] =
{
    0.0F, 6.0F, 13.0F, 23.0F, 29.0F, 36.0F, 40.0F, 48.0F
} ;                                    /* Referenced by: '<S322>/Vector' */

static volatile CONST(float32, INVR_VAR_INIT) KxINVR_P_BstCnvtrDschrgLosses_ST[8]
    =
{
    0.0F, 6.0F, 13.0F, 23.0F, 29.0F, 36.0F, 40.0F, 48.0F
} ;                                    /* Referenced by: '<S324>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_INVR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_INVR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, INVR_VAR_INIT) VeINVR_b_GMGOverTempOvrd;/* '<S291>/Logical5' */
static VAR(boolean, INVR_VAR_INIT) VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Arb;/* '<S321>/Merge' */
static VAR(boolean, INVR_VAR_INIT) VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Sig_Rcvd_Arb;/* '<S321>/Merge1' */
static VAR(boolean, INVR_VAR_INIT) VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Arb;/* '<S390>/Merge4' */
static VAR(boolean, INVR_VAR_INIT) VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Sig_Rcvd_Arb;/* '<S390>/Merge5' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_INVR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_INVR
#include "MemMap.h"

CONST(ConstB_INVR_ac_T, INVR_VAR_INIT) INVR_ac_ConstB =
{
    CeSRAR_e_CommFail_NoFault,         /* '<S506>/Constant' */
    CeSRAR_e_CommFail_NoFault,         /* '<S476>/Constant' */
    CeINVR_e_ThreePS,                  /* '<S474>/Const13' */
    CeINVR_e_ThreePS,                  /* '<S474>/Const14' */
    CeINVR_e_ThreePS,                  /* '<S474>/Const40' */
    CeINVR_e_Pending_SPT,              /* '<S474>/Const15' */
    CeINVR_e_Pending_SPT,              /* '<S474>/Const16' */
    CeINVR_e_Pending_SPT,              /* '<S474>/Const37' */
    CeINVR_e_P2ModeStatus_Idle,        /* '<S474>/Const24' */
    CeINVR_e_NormalPowerStageOff,      /* '<S474>/Const1' */
    CeINVR_e_NormalPowerStageOff,      /* '<S474>/Const2' */
    CeINVR_e_NormalPowerStageOff,      /* '<S474>/Const34' */
    CeINVR_e_IsolUndetermined,         /* '<S474>/Const3' */
    CeINVR_e_IsolUndetermined,         /* '<S474>/Const4' */
    CeINVR_e_BstCnvFailStsNormal,      /* '<S477>/Constant' */
    CeHVTR_e_IntrlkNotSourced,         /* '<S525>/Constant' */
    CeHVTR_e_IntrlkNotSourced,         /* '<S505>/Constant' */
    CeHVTR_e_IntrlkNotSourced          /* '<S475>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_INVR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_INVR
#include "MemMap.h"

VAR(B_INVR_ac_T, INVR_VAR_INIT) INVR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_INVR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_INVR
#include "MemMap.h"

VAR(DW_INVR_ac_T, INVR_VAR_INIT) INVR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_INVR
#include "MemMap.h"

static FUNC(void, INVR_CODE_LOCAL) INVR_ac_IfAction_MtrA_CntctrOpnRq(VAR(boolean,
    AUTOMATIC) rtu_In1, VAR(boolean, AUTOMATIC) rtu_In2, P2VAR(boolean,
    AUTOMATIC, INVR_VAR_INIT) rty_Out1, P2VAR(boolean, AUTOMATIC, INVR_VAR_INIT)
    rty_Out2);

/*
 * Output and update for action system:
 *    '<S321>/IfAction_MtrA_CntctrOpnRq'
 *    '<S321>/IfAction_MtrA_CntctrOpnRq_AltSrc'
 *    '<S390>/IfAction_MtrB_CntctrOpnRq'
 *    '<S390>/IfAction_MtrB_CntctrOpnRq_AltSrc'
 */
static FUNC(void, INVR_CODE_LOCAL) INVR_ac_IfAction_MtrA_CntctrOpnRq(VAR(boolean,
    AUTOMATIC) rtu_In1, VAR(boolean, AUTOMATIC) rtu_In2, P2VAR(boolean,
    AUTOMATIC, INVR_VAR_INIT) rty_Out1, P2VAR(boolean, AUTOMATIC, INVR_VAR_INIT)
    rty_Out2)
{
    /* Inport: '<S354>/In1' */
    *rty_Out1 = rtu_In1;

    /* Inport: '<S354>/In2' */
    *rty_Out2 = rtu_In2;
}

/* Model step function for TID1 */
FUNC(void, INVR_CODE) INVR_FastTEF(void) /* Explicit Task: FastTEF */
{
    /* local block i/o variables */
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_ix;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_i5;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrB_n;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_hp;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mt_dyn;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_im;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_fu;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrA_o;
    TeINVR_e_P2ModeStatus rtb_LogicalOperator_0;
    boolean rtb_OR1_jp;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Invr_h;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Invrtr;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MCPA_S;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MCPB_S;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MCPC_S;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrA_k;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrB_6;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrB_a;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrB_d;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrB_g;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrB_k;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrB_l;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrC_6;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrC_a;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrC_b;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrC_e;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrC_i;
    boolean rtb_TmpSignalConversionAtLeINVR_b_MtrC_o;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_dq;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_dw;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_dz;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_fj;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_fp;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_fr;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_gh;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_h2;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_ia;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_ii;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_jn;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_lb;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_le;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_m3;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_mr;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_nl;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_p0;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_p4;
    boolean rtb_TmpSignalConversionAtLeINVR_b_Mtr_pv;
    boolean rtb_TmpSignalConversionAtLeINVR_b_P2Mo_j;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/INVR_FastTEF'
     */
    /* DataStoreWrite: '<S78>/DSW_StatusByte_LostCommDMCM_2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommDMCM_2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommDMCM_2_Value
        (&INVR_ac_DW.StatusByte_LostCommDMCM_2);

    /* DataStoreWrite: '<S78>/DSW_StatusByte_InvData_DMCM_B' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_DMCM_B'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_DMCM_B_Value
        (&INVR_ac_DW.StatusByte_InvData_DMCM_B);

    /* DataStoreWrite: '<S78>/DSW_StatusByte_CommBus_B_Off' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBus_B_Off'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBus_B_Off_Value
        (&INVR_ac_DW.StatusByte_CommBus_B_Off);

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrC_InvrtrSt_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_130'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_fr =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrC_InvrtrSt_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MCPC_SPT_State_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_110'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MCPC_S =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MCPC_SPT_State_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrC_Temp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_138'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrC_a =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrC_Temp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrC_InvrtrTemp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_132'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrC_o =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrC_InvrtrTemp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrC_DC_Crnt_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_123'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrC_i =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrC_DC_Crnt_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrC_DC_Volt_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_126'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrC_b =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrC_DC_Volt_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrC_6SOEnbl_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_118'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrC_6 =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrC_6SOEnbl_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrCFlt_HV_CntctrOpnRq_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_116'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_le =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Sig_Rcvd_write_IRV
        ();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrCFlt_3PS_Pos_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_114'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrC_e =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrCFlt_3PS_Pos_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrC_CtrlBoard_Temp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_120'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_h2 =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrC_CtrlBoard_Temp_Sig_Rcvd_write_IRV
        ();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrC_RotrTemp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_135'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_mr =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrC_RotrTemp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrBFlt_HV_CntctrOpnRq_read' incorporates:
     *  Merge: '<Root>/Merge_69'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_ix =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Init_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrBFlt_HV_CntctrOpnRq_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_68'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_i5 =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Sig_Rcvd_write_IRV
        ();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_71'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_n =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrBFltHVCntctrOpnRqAltSrc_SigRcvd_write_IRV
        ();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc_read' incorporates:
     *  Merge: '<Root>/Merge_72'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_hp =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc_Init_IRV
        ();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrB_InvrtrSt_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_94'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_l =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrB_InvrtrSt_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MCPB_SPT_State_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_64'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MCPB_S =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MCPB_SPT_State_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrB_Temp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_103'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_ii =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrB_Temp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrB_InvrtrTemp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_96'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_fp =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrB_InvrtrTemp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrB_DC_Crnt_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_87'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_lb =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrB_DC_Crnt_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrB_DC_Volt_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_90'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_g =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrB_DC_Volt_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrB_6SOEnbl_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_73'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_6 =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrB_6SOEnbl_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_InvrtrB_IsolStat_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_58'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Invrtr =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_InvrtrB_IsolStat_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_P2ModeSts_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_106'
     */
    rtb_TmpSignalConversionAtLeINVR_b_P2Mo_j =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_P2ModeSts_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrB_CtrlBoard_Temp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_84'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_d =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrB_CtrlBoard_Temp_Sig_Rcvd_write_IRV
        ();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrB_ClntIn_Temp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_78'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_k =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrB_ClntIn_Temp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrB_ClntOut_Temp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_81'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_dz =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrB_ClntOut_Temp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrB_RotrTemp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_99'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_p0 =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrB_RotrTemp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrB_CapctrTemp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_75'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_a =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrB_CapctrTemp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrAFlt_HV_CntctrOpnRq_read' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mt_dyn =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Init_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrAFlt_HV_CntctrOpnRq_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_im =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Sig_Rcvd_write_IRV
        ();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_fu =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrAFltHVCntctrOpnRqAltSrc_SigRcvd_write_IRV
        ();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc_read' incorporates:
     *  Merge: '<Root>/Merge_24'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrA_o =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc_Init_IRV
        ();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrA_InvrtrSt_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_46'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_dq =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_InvrtrSt_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MCPA_SPT_State_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MCPA_S =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MCPA_SPT_State_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrA_Temp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_54'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_pv =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_Temp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrA_InvrtrTemp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_48'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrA_k =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_InvrtrTemp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrA_DC_Crnt_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_39'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_m3 =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_DC_Crnt_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrA_DC_Volt_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_42'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_nl =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_DC_Volt_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrA_6SOEnbl_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_25'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_dw =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_6SOEnbl_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_InvrtrA_IsolStat_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Invr_h =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_InvrtrA_IsolStat_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrA_CtrlBoard_Temp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_36'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_gh =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_CtrlBoard_Temp_Sig_Rcvd_write_IRV
        ();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrA_ClntIn_Temp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_30'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_jn =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_ClntIn_Temp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrA_ClntOut_Temp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_33'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_fj =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_ClntOut_Temp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrA_RotrTemp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_51'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_p4 =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_RotrTemp_Sig_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S78>/LeINVR_b_MtrA_CapctrTemp_Sig_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_27'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_ia =
        Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_CapctrTemp_Sig_Rcvd_write_IRV();

    /* S-Function (fcgen): '<S78>/FcnCallGen' incorporates:
     *  SubSystem: '<S78>/MotorA_TmoutDbnc'
     */
    /* Outputs for Atomic SubSystem: '<S296>/EdgeRising1' */
    /* Logic: '<S333>/OR1' incorporates:
     *  UnitDelay: '<S333>/Unit Delay'
     */
    rtb_OR1_jp = !INVR_ac_DW.UnitDelay_DSTATE_bw;

    /* Update for UnitDelay: '<S333>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_bw = rtb_TmpSignalConversionAtLeINVR_b_Mtr_dq;

    /* Outputs for Atomic SubSystem: '<S296>/Count Down Reset Enabled' */
    /* Switch: '<S332>/Switch1' incorporates:
     *  Constant: '<S317>/Calib'
     *  Constant: '<S332>/Constant Value'
     *  Logic: '<S333>/AND'
     *  RelationalOperator: '<S332>/Greater  Than'
     *  Switch: '<S332>/Switch2'
     *  UnitDelay: '<S332>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_dq && rtb_OR1_jp)
    {
        INVR_ac_DW.UnitDelay_DSTATE_ai = KeINVI_Cnt_MtrA_InvrtrSt;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ai) > 0)
        {
            /* UnitDelay: '<S332>/Unit Delay' incorporates:
             *  Constant: '<S332>/Constant Value1'
             *  Sum: '<S332>/Subtraction'
             *  Switch: '<S332>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_ai = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_ai) - 1));
        }
    }

    /* End of Switch: '<S332>/Switch1' */
    /* End of Outputs for SubSystem: '<S296>/EdgeRising1' */

    /* Switch: '<S296>/Switch' incorporates:
     *  Constant: '<S332>/Constant Value2'
     *  RelationalOperator: '<S332>/Greater  Than1'
     *  UnitDelay: '<S332>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ai) > 0)
    {
    }
    else
    {
        /* Switch: '<S296>/Switch' incorporates:
         *  Merge: '<Root>/Merge_47'
         *  SignalConversion generated from: '<S78>/LeINVR_e_MtrA_InvrtrSt_read'
         */
        INVR_ac_DW.UnitDelay_DSTATE_l5p =
            Rte_IrvRead_INVR_FastTEF_VeINVR_e_MtrA_InvrtrSt_Init_IRV();
    }

    /* End of Switch: '<S296>/Switch' */
    /* End of Outputs for SubSystem: '<S296>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S297>/EdgeRising1' */
    /* Logic: '<S335>/OR1' incorporates:
     *  UnitDelay: '<S335>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_dq = !INVR_ac_DW.UnitDelay_DSTATE_bed;

    /* Update for UnitDelay: '<S335>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_bed = rtb_TmpSignalConversionAtLeINVR_b_Invr_h;

    /* Outputs for Atomic SubSystem: '<S297>/Count Down Reset Enabled' */
    /* Switch: '<S334>/Switch1' incorporates:
     *  Constant: '<S307>/Calib'
     *  Constant: '<S334>/Constant Value'
     *  Logic: '<S335>/AND'
     *  RelationalOperator: '<S334>/Greater  Than'
     *  Switch: '<S334>/Switch2'
     *  UnitDelay: '<S334>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Invr_h &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_dq)
    {
        INVR_ac_DW.UnitDelay_DSTATE_bb = KeINVI_Cnt_InvrtrA_IsolStat;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_bb) > 0)
        {
            /* UnitDelay: '<S334>/Unit Delay' incorporates:
             *  Constant: '<S334>/Constant Value1'
             *  Sum: '<S334>/Subtraction'
             *  Switch: '<S334>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_bb = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_bb) - 1));
        }
    }

    /* End of Switch: '<S334>/Switch1' */
    /* End of Outputs for SubSystem: '<S297>/EdgeRising1' */

    /* Switch: '<S297>/Switch' incorporates:
     *  Constant: '<S334>/Constant Value2'
     *  RelationalOperator: '<S334>/Greater  Than1'
     *  UnitDelay: '<S334>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_bb) > 0)
    {
    }
    else
    {
        /* Switch: '<S297>/Switch' incorporates:
         *  Merge: '<Root>/Merge_12'
         *  SignalConversion generated from: '<S78>/LeINVR_e_InvrtrA_IsolStat_read'
         */
        INVR_ac_DW.UnitDelay_DSTATE_bl =
            Rte_IrvRead_INVR_FastTEF_VeINVR_e_InvrtrA_IsolStat_Init_IRV();
    }

    /* End of Switch: '<S297>/Switch' */
    /* End of Outputs for SubSystem: '<S297>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S304>/EdgeRising1' */
    /* Logic: '<S349>/OR1' incorporates:
     *  UnitDelay: '<S349>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Invr_h = !INVR_ac_DW.UnitDelay_DSTATE_mu;

    /* Update for UnitDelay: '<S349>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_mu = rtb_TmpSignalConversionAtLeINVR_b_Mtr_pv;

    /* Outputs for Atomic SubSystem: '<S304>/Count Down Reset Enabled' */
    /* Switch: '<S348>/Switch1' incorporates:
     *  Constant: '<S320>/Calib'
     *  Constant: '<S348>/Constant Value'
     *  Logic: '<S349>/AND'
     *  RelationalOperator: '<S348>/Greater  Than'
     *  Switch: '<S348>/Switch2'
     *  UnitDelay: '<S348>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_pv &&
            rtb_TmpSignalConversionAtLeINVR_b_Invr_h)
    {
        INVR_ac_DW.UnitDelay_DSTATE_ls = KeINVI_Cnt_MtrA_Temp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ls) > 0)
        {
            /* UnitDelay: '<S348>/Unit Delay' incorporates:
             *  Constant: '<S348>/Constant Value1'
             *  Sum: '<S348>/Subtraction'
             *  Switch: '<S348>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_ls = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_ls) - 1));
        }
    }

    /* End of Switch: '<S348>/Switch1' */
    /* End of Outputs for SubSystem: '<S304>/EdgeRising1' */

    /* Switch: '<S304>/Switch' incorporates:
     *  Constant: '<S348>/Constant Value2'
     *  Merge: '<Root>/Merge_56'
     *  RelationalOperator: '<S348>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrA_Temp_read'
     *  UnitDelay: '<S304>/Unit Delay'
     *  UnitDelay: '<S348>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ls) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_p2 =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrA_Temp_write_IRV();
    }

    /* End of Switch: '<S304>/Switch' */
    /* End of Outputs for SubSystem: '<S304>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S305>/EdgeRising1' */
    /* Logic: '<S351>/OR1' incorporates:
     *  UnitDelay: '<S351>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_pv = !INVR_ac_DW.UnitDelay_DSTATE_cs;

    /* Update for UnitDelay: '<S351>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_cs = rtb_TmpSignalConversionAtLeINVR_b_MtrA_k;

    /* Outputs for Atomic SubSystem: '<S305>/Count Down Reset Enabled' */
    /* Switch: '<S350>/Switch1' incorporates:
     *  Constant: '<S318>/Calib'
     *  Constant: '<S350>/Constant Value'
     *  Logic: '<S351>/AND'
     *  RelationalOperator: '<S350>/Greater  Than'
     *  Switch: '<S350>/Switch2'
     *  UnitDelay: '<S350>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MtrA_k &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_pv)
    {
        INVR_ac_DW.UnitDelay_DSTATE_mt = KeINVI_Cnt_MtrA_InvrtrTemp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_mt) > 0)
        {
            /* UnitDelay: '<S350>/Unit Delay' incorporates:
             *  Constant: '<S350>/Constant Value1'
             *  Sum: '<S350>/Subtraction'
             *  Switch: '<S350>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_mt = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_mt) - 1));
        }
    }

    /* End of Switch: '<S350>/Switch1' */
    /* End of Outputs for SubSystem: '<S305>/EdgeRising1' */

    /* Switch: '<S305>/Switch' incorporates:
     *  Constant: '<S350>/Constant Value2'
     *  Merge: '<Root>/Merge_50'
     *  RelationalOperator: '<S350>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrA_InvrtrTemp_read'
     *  UnitDelay: '<S305>/Unit Delay'
     *  UnitDelay: '<S350>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_mt) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_kq =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrA_InvrtrTemp_write_IRV();
    }

    /* End of Switch: '<S305>/Switch' */
    /* End of Outputs for SubSystem: '<S305>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S306>/EdgeRising1' */
    /* Logic: '<S353>/OR1' incorporates:
     *  UnitDelay: '<S353>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrA_k = !INVR_ac_DW.UnitDelay_DSTATE_hs;

    /* Update for UnitDelay: '<S353>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_hs = rtb_TmpSignalConversionAtLeINVR_b_Mtr_m3;

    /* Outputs for Atomic SubSystem: '<S306>/Count Down Reset Enabled' */
    /* Switch: '<S352>/Switch1' incorporates:
     *  Constant: '<S315>/Calib'
     *  Constant: '<S352>/Constant Value'
     *  Logic: '<S353>/AND'
     *  RelationalOperator: '<S352>/Greater  Than'
     *  Switch: '<S352>/Switch2'
     *  UnitDelay: '<S352>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_m3 &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrA_k)
    {
        INVR_ac_DW.UnitDelay_DSTATE_c3 = KeINVI_Cnt_MtrA_DC_Crnt;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_c3) > 0)
        {
            /* UnitDelay: '<S352>/Unit Delay' incorporates:
             *  Constant: '<S352>/Constant Value1'
             *  Sum: '<S352>/Subtraction'
             *  Switch: '<S352>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_c3 = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_c3) - 1));
        }
    }

    /* End of Switch: '<S352>/Switch1' */
    /* End of Outputs for SubSystem: '<S306>/EdgeRising1' */

    /* Switch: '<S306>/Switch' incorporates:
     *  Constant: '<S352>/Constant Value2'
     *  Merge: '<Root>/Merge_41'
     *  RelationalOperator: '<S352>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_I_MtrA_DC_Crnt_read'
     *  UnitDelay: '<S306>/Unit Delay'
     *  UnitDelay: '<S352>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_c3) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_j =
            Rte_IrvRead_INVR_FastTEF_VeINVR_I_MtrA_DC_Crnt_write_IRV();
    }

    /* End of Switch: '<S306>/Switch' */
    /* End of Outputs for SubSystem: '<S306>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S293>/EdgeRising1' */
    /* Logic: '<S327>/OR1' incorporates:
     *  UnitDelay: '<S327>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_m3 = !INVR_ac_DW.UnitDelay_DSTATE_gd;

    /* Update for UnitDelay: '<S327>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_gd = rtb_TmpSignalConversionAtLeINVR_b_Mtr_nl;

    /* Outputs for Atomic SubSystem: '<S293>/Count Down Reset Enabled' */
    /* Switch: '<S326>/Switch1' incorporates:
     *  Constant: '<S316>/Calib'
     *  Constant: '<S326>/Constant Value'
     *  Logic: '<S327>/AND'
     *  RelationalOperator: '<S326>/Greater  Than'
     *  Switch: '<S326>/Switch2'
     *  UnitDelay: '<S326>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_nl &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_m3)
    {
        INVR_ac_DW.UnitDelay_DSTATE_n3 = KeINVI_Cnt_MtrA_DC_Volt;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_n3) > 0)
        {
            /* UnitDelay: '<S326>/Unit Delay' incorporates:
             *  Constant: '<S326>/Constant Value1'
             *  Sum: '<S326>/Subtraction'
             *  Switch: '<S326>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_n3 = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_n3) - 1));
        }
    }

    /* End of Switch: '<S326>/Switch1' */
    /* End of Outputs for SubSystem: '<S293>/EdgeRising1' */

    /* Switch: '<S293>/Switch' incorporates:
     *  Constant: '<S326>/Constant Value2'
     *  Merge: '<Root>/Merge_44'
     *  RelationalOperator: '<S326>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_U_MtrA_DC_Volt_read'
     *  UnitDelay: '<S293>/Unit Delay'
     *  UnitDelay: '<S326>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_n3) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_n0 =
            Rte_IrvRead_INVR_FastTEF_VeINVR_U_MtrA_DC_Volt_write_IRV();
    }

    /* End of Switch: '<S293>/Switch' */
    /* End of Outputs for SubSystem: '<S293>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S294>/EdgeRising1' */
    /* Logic: '<S329>/OR1' incorporates:
     *  UnitDelay: '<S329>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_nl = !INVR_ac_DW.UnitDelay_DSTATE_nh;

    /* Update for UnitDelay: '<S329>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_nh = rtb_TmpSignalConversionAtLeINVR_b_Mtr_dw;

    /* Outputs for Atomic SubSystem: '<S294>/Count Down Reset Enabled' */
    /* Switch: '<S328>/Switch1' incorporates:
     *  Constant: '<S310>/Calib'
     *  Constant: '<S328>/Constant Value'
     *  Logic: '<S329>/AND'
     *  RelationalOperator: '<S328>/Greater  Than'
     *  Switch: '<S328>/Switch2'
     *  UnitDelay: '<S328>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_dw &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_nl)
    {
        INVR_ac_DW.UnitDelay_DSTATE_o = KeINVI_Cnt_MtrA_6SOEnbl;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_o) > 0)
        {
            /* UnitDelay: '<S328>/Unit Delay' incorporates:
             *  Constant: '<S328>/Constant Value1'
             *  Sum: '<S328>/Subtraction'
             *  Switch: '<S328>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_o = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_o) - 1));
        }
    }

    /* End of Switch: '<S328>/Switch1' */
    /* End of Outputs for SubSystem: '<S294>/EdgeRising1' */

    /* Switch: '<S294>/Switch' incorporates:
     *  Constant: '<S328>/Constant Value2'
     *  RelationalOperator: '<S328>/Greater  Than1'
     *  UnitDelay: '<S328>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_o) > 0)
    {
    }
    else
    {
        /* Switch: '<S294>/Switch' incorporates:
         *  Merge: '<Root>/Merge_26'
         *  SignalConversion generated from: '<S78>/LeINVR_e_MtrA_6SOEnbl_read'
         */
        INVR_ac_DW.UnitDelay_DSTATE_gdz =
            Rte_IrvRead_INVR_FastTEF_VeINVR_e_MtrA_6SOEnbl_Init_IRV();
    }

    /* End of Switch: '<S294>/Switch' */
    /* End of Outputs for SubSystem: '<S294>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S295>/EdgeRising1' */
    /* Logic: '<S331>/OR1' incorporates:
     *  UnitDelay: '<S331>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_dw = !INVR_ac_DW.UnitDelay_DSTATE_lol;

    /* Update for UnitDelay: '<S331>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_lol = rtb_TmpSignalConversionAtLeINVR_b_MCPA_S;

    /* Outputs for Atomic SubSystem: '<S295>/Count Down Reset Enabled' */
    /* Switch: '<S330>/Switch1' incorporates:
     *  Constant: '<S308>/Calib'
     *  Constant: '<S330>/Constant Value'
     *  Logic: '<S331>/AND'
     *  RelationalOperator: '<S330>/Greater  Than'
     *  Switch: '<S330>/Switch2'
     *  UnitDelay: '<S330>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MCPA_S &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_dw)
    {
        INVR_ac_DW.UnitDelay_DSTATE_h = KeINVI_Cnt_MCPA_SPT_State;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_h) > 0)
        {
            /* UnitDelay: '<S330>/Unit Delay' incorporates:
             *  Constant: '<S330>/Constant Value1'
             *  Sum: '<S330>/Subtraction'
             *  Switch: '<S330>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_h = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_h) - 1));
        }
    }

    /* End of Switch: '<S330>/Switch1' */
    /* End of Outputs for SubSystem: '<S295>/EdgeRising1' */

    /* Switch: '<S295>/Switch' incorporates:
     *  Constant: '<S330>/Constant Value2'
     *  RelationalOperator: '<S330>/Greater  Than1'
     *  UnitDelay: '<S330>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_h) > 0)
    {
    }
    else
    {
        /* Switch: '<S295>/Switch' incorporates:
         *  Merge: '<Root>/Merge_18'
         *  SignalConversion generated from: '<S78>/LeINVR_e_MCPA_SPT_State_read'
         */
        INVR_ac_DW.UnitDelay_DSTATE_eb =
            Rte_IrvRead_INVR_FastTEF_VeINVR_e_MCPA_SPT_State_Init_IRV();
    }

    /* End of Switch: '<S295>/Switch' */
    /* End of Outputs for SubSystem: '<S295>/Count Down Reset Enabled' */

    /* If: '<S321>/If' incorporates:
     *  Constant: '<S356>/Calib'
     *  Logic: '<S321>/Logical'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_im)
    {
        /* Outputs for IfAction SubSystem: '<S321>/IfAction_MtrA_CntctrOpnRq' incorporates:
         *  ActionPort: '<S354>/Action_Port'
         */
        INVR_ac_IfAction_MtrA_CntctrOpnRq
            (rtb_TmpSignalConversionAtLeINVR_b_Mt_dyn,
             rtb_TmpSignalConversionAtLeINVR_b_Mtr_im,
             (&(VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Arb)),
             (&(VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Sig_Rcvd_Arb)));

        /* End of Outputs for SubSystem: '<S321>/IfAction_MtrA_CntctrOpnRq' */
    }
    else
    {
        if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_fu &&
                (KeINVI_b_MtrACntctrOpnRq_AltSrcAvlb))
        {
            /* Outputs for IfAction SubSystem: '<S321>/IfAction_MtrA_CntctrOpnRq_AltSrc' incorporates:
             *  ActionPort: '<S355>/Action_Port'
             */
            INVR_ac_IfAction_MtrA_CntctrOpnRq
                (rtb_TmpSignalConversionAtLeINVR_b_MtrA_o,
                 rtb_TmpSignalConversionAtLeINVR_b_Mtr_fu,
                 (&(VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Arb)),
                 (&(VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Sig_Rcvd_Arb)));

            /* End of Outputs for SubSystem: '<S321>/IfAction_MtrA_CntctrOpnRq_AltSrc' */
        }
    }

    /* End of If: '<S321>/If' */

    /* Outputs for Atomic SubSystem: '<S298>/EdgeRising1' */
    /* Logic: '<S337>/OR1' incorporates:
     *  UnitDelay: '<S337>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MCPA_S = !INVR_ac_DW.UnitDelay_DSTATE_is;

    /* Update for UnitDelay: '<S337>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_is =
        VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Sig_Rcvd_Arb;

    /* Outputs for Atomic SubSystem: '<S298>/Count Down Reset Enabled' */
    /* Switch: '<S336>/Switch1' incorporates:
     *  Constant: '<S309>/Calib'
     *  Constant: '<S336>/Constant Value'
     *  Logic: '<S337>/AND'
     *  RelationalOperator: '<S336>/Greater  Than'
     *  Switch: '<S336>/Switch2'
     *  UnitDelay: '<S336>/Unit Delay'
     */
    if ((VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Sig_Rcvd_Arb) &&
            rtb_TmpSignalConversionAtLeINVR_b_MCPA_S)
    {
        INVR_ac_DW.UnitDelay_DSTATE_fm = KeINVI_Cnt_MtrAFlt_HV_CntctrOpnRq;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_fm) > 0)
        {
            /* UnitDelay: '<S336>/Unit Delay' incorporates:
             *  Constant: '<S336>/Constant Value1'
             *  Sum: '<S336>/Subtraction'
             *  Switch: '<S336>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_fm = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_fm) - 1));
        }
    }

    /* End of Switch: '<S336>/Switch1' */
    /* End of Outputs for SubSystem: '<S298>/EdgeRising1' */

    /* Switch: '<S298>/Switch' incorporates:
     *  Constant: '<S336>/Constant Value2'
     *  RelationalOperator: '<S336>/Greater  Than1'
     *  UnitDelay: '<S298>/Unit Delay'
     *  UnitDelay: '<S336>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_fm) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_dh = VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Arb;
    }

    /* End of Switch: '<S298>/Switch' */
    /* End of Outputs for SubSystem: '<S298>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S299>/EdgeRising1' */
    /* Logic: '<S339>/OR1' incorporates:
     *  UnitDelay: '<S339>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MCPA_S = !INVR_ac_DW.UnitDelay_DSTATE_nzl;

    /* Update for UnitDelay: '<S339>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_nzl = rtb_TmpSignalConversionAtLeINVR_b_Mtr_gh;

    /* Outputs for Atomic SubSystem: '<S299>/Count Down Reset Enabled' */
    /* Switch: '<S338>/Switch1' incorporates:
     *  Constant: '<S314>/Calib'
     *  Constant: '<S338>/Constant Value'
     *  Logic: '<S339>/AND'
     *  RelationalOperator: '<S338>/Greater  Than'
     *  Switch: '<S338>/Switch2'
     *  UnitDelay: '<S338>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_gh &&
            rtb_TmpSignalConversionAtLeINVR_b_MCPA_S)
    {
        INVR_ac_DW.UnitDelay_DSTATE_mf = KeINVI_Cnt_MtrA_CtrlBoard_Temp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_mf) > 0)
        {
            /* UnitDelay: '<S338>/Unit Delay' incorporates:
             *  Constant: '<S338>/Constant Value1'
             *  Sum: '<S338>/Subtraction'
             *  Switch: '<S338>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_mf = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_mf) - 1));
        }
    }

    /* End of Switch: '<S338>/Switch1' */
    /* End of Outputs for SubSystem: '<S299>/EdgeRising1' */

    /* Switch: '<S299>/Switch' incorporates:
     *  Constant: '<S338>/Constant Value2'
     *  Merge: '<Root>/Merge_38'
     *  RelationalOperator: '<S338>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrA_CtrlBoard_Temp_read'
     *  UnitDelay: '<S299>/Unit Delay'
     *  UnitDelay: '<S338>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_mf) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_l =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrA_CtrlBoard_Temp_write_IRV();
    }

    /* End of Switch: '<S299>/Switch' */
    /* End of Outputs for SubSystem: '<S299>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S300>/EdgeRising1' */
    /* Logic: '<S341>/OR1' incorporates:
     *  UnitDelay: '<S341>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_gh = !INVR_ac_DW.UnitDelay_DSTATE_ej;

    /* Update for UnitDelay: '<S341>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_ej = rtb_TmpSignalConversionAtLeINVR_b_Mtr_jn;

    /* Outputs for Atomic SubSystem: '<S300>/Count Down Reset Enabled' */
    /* Switch: '<S340>/Switch1' incorporates:
     *  Constant: '<S312>/Calib'
     *  Constant: '<S340>/Constant Value'
     *  Logic: '<S341>/AND'
     *  RelationalOperator: '<S340>/Greater  Than'
     *  Switch: '<S340>/Switch2'
     *  UnitDelay: '<S340>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_jn &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_gh)
    {
        INVR_ac_DW.UnitDelay_DSTATE_nj = KeINVI_Cnt_MtrA_ClntIn_Temp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_nj) > 0)
        {
            /* UnitDelay: '<S340>/Unit Delay' incorporates:
             *  Constant: '<S340>/Constant Value1'
             *  Sum: '<S340>/Subtraction'
             *  Switch: '<S340>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_nj = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_nj) - 1));
        }
    }

    /* End of Switch: '<S340>/Switch1' */
    /* End of Outputs for SubSystem: '<S300>/EdgeRising1' */

    /* Switch: '<S300>/Switch' incorporates:
     *  Constant: '<S340>/Constant Value2'
     *  Merge: '<Root>/Merge_32'
     *  RelationalOperator: '<S340>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrA_ClntIn_Temp_read'
     *  UnitDelay: '<S300>/Unit Delay'
     *  UnitDelay: '<S340>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_nj) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_em =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrA_ClntIn_Temp_write_IRV();
    }

    /* End of Switch: '<S300>/Switch' */
    /* End of Outputs for SubSystem: '<S300>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S301>/EdgeRising1' */
    /* Logic: '<S343>/OR1' incorporates:
     *  UnitDelay: '<S343>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_jn = !INVR_ac_DW.UnitDelay_DSTATE_ek;

    /* Update for UnitDelay: '<S343>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_ek = rtb_TmpSignalConversionAtLeINVR_b_Mtr_fj;

    /* Outputs for Atomic SubSystem: '<S301>/Count Down Reset Enabled' */
    /* Switch: '<S342>/Switch1' incorporates:
     *  Constant: '<S313>/Calib'
     *  Constant: '<S342>/Constant Value'
     *  Logic: '<S343>/AND'
     *  RelationalOperator: '<S342>/Greater  Than'
     *  Switch: '<S342>/Switch2'
     *  UnitDelay: '<S342>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_fj &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_jn)
    {
        INVR_ac_DW.UnitDelay_DSTATE_bo = KeINVI_Cnt_MtrA_ClntOut_Temp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_bo) > 0)
        {
            /* UnitDelay: '<S342>/Unit Delay' incorporates:
             *  Constant: '<S342>/Constant Value1'
             *  Sum: '<S342>/Subtraction'
             *  Switch: '<S342>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_bo = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_bo) - 1));
        }
    }

    /* End of Switch: '<S342>/Switch1' */
    /* End of Outputs for SubSystem: '<S301>/EdgeRising1' */

    /* Switch: '<S301>/Switch' incorporates:
     *  Constant: '<S342>/Constant Value2'
     *  Merge: '<Root>/Merge_35'
     *  RelationalOperator: '<S342>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrA_ClntOut_Temp_read'
     *  UnitDelay: '<S301>/Unit Delay'
     *  UnitDelay: '<S342>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_bo) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_js =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrA_ClntOut_Temp_write_IRV();
    }

    /* End of Switch: '<S301>/Switch' */
    /* End of Outputs for SubSystem: '<S301>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S302>/EdgeRising1' */
    /* Logic: '<S345>/OR1' incorporates:
     *  UnitDelay: '<S345>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_fj = !INVR_ac_DW.UnitDelay_DSTATE_jh;

    /* Update for UnitDelay: '<S345>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_jh = rtb_TmpSignalConversionAtLeINVR_b_Mtr_p4;

    /* Outputs for Atomic SubSystem: '<S302>/Count Down Reset Enabled' */
    /* Switch: '<S344>/Switch1' incorporates:
     *  Constant: '<S319>/Calib'
     *  Constant: '<S344>/Constant Value'
     *  Logic: '<S345>/AND'
     *  RelationalOperator: '<S344>/Greater  Than'
     *  Switch: '<S344>/Switch2'
     *  UnitDelay: '<S344>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_p4 &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_fj)
    {
        INVR_ac_DW.UnitDelay_DSTATE_mm = KeINVI_Cnt_MtrA_RotrTemp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_mm) > 0)
        {
            /* UnitDelay: '<S344>/Unit Delay' incorporates:
             *  Constant: '<S344>/Constant Value1'
             *  Sum: '<S344>/Subtraction'
             *  Switch: '<S344>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_mm = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_mm) - 1));
        }
    }

    /* End of Switch: '<S344>/Switch1' */
    /* End of Outputs for SubSystem: '<S302>/EdgeRising1' */

    /* Switch: '<S302>/Switch' incorporates:
     *  Constant: '<S344>/Constant Value2'
     *  Merge: '<Root>/Merge_53'
     *  RelationalOperator: '<S344>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrA_RotrTemp_read'
     *  UnitDelay: '<S302>/Unit Delay'
     *  UnitDelay: '<S344>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_mm) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_nz =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrA_RotrTemp_write_IRV();
    }

    /* End of Switch: '<S302>/Switch' */
    /* End of Outputs for SubSystem: '<S302>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S303>/EdgeRising1' */
    /* Logic: '<S347>/OR1' incorporates:
     *  UnitDelay: '<S347>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_p4 = !INVR_ac_DW.UnitDelay_DSTATE_h4r;

    /* Update for UnitDelay: '<S347>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_h4r = rtb_TmpSignalConversionAtLeINVR_b_Mtr_ia;

    /* Outputs for Atomic SubSystem: '<S303>/Count Down Reset Enabled' */
    /* Switch: '<S346>/Switch1' incorporates:
     *  Constant: '<S311>/Calib'
     *  Constant: '<S346>/Constant Value'
     *  Logic: '<S347>/AND'
     *  RelationalOperator: '<S346>/Greater  Than'
     *  Switch: '<S346>/Switch2'
     *  UnitDelay: '<S346>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_ia &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_p4)
    {
        INVR_ac_DW.UnitDelay_DSTATE_ee = KeINVI_Cnt_MtrA_CapctrTemp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ee) > 0)
        {
            /* UnitDelay: '<S346>/Unit Delay' incorporates:
             *  Constant: '<S346>/Constant Value1'
             *  Sum: '<S346>/Subtraction'
             *  Switch: '<S346>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_ee = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_ee) - 1));
        }
    }

    /* End of Switch: '<S346>/Switch1' */
    /* End of Outputs for SubSystem: '<S303>/EdgeRising1' */

    /* Switch: '<S303>/Switch' incorporates:
     *  Constant: '<S346>/Constant Value2'
     *  Merge: '<Root>/Merge_29'
     *  RelationalOperator: '<S346>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrA_CapctrTemp_read'
     *  UnitDelay: '<S303>/Unit Delay'
     *  UnitDelay: '<S346>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ee) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_lo =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrA_CapctrTemp_write_IRV();
    }

    /* End of Switch: '<S303>/Switch' */
    /* End of Outputs for SubSystem: '<S303>/Count Down Reset Enabled' */

    /* S-Function (fcgen): '<S78>/FcnCallGen' incorporates:
     *  SubSystem: '<S78>/MotorB_TmoutDbnc'
     */
    /* Outputs for Atomic SubSystem: '<S360>/EdgeRising1' */
    /* Logic: '<S395>/OR1' incorporates:
     *  UnitDelay: '<S395>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_ia = !INVR_ac_DW.UnitDelay_DSTATE_j1;

    /* Update for UnitDelay: '<S395>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_j1 = rtb_TmpSignalConversionAtLeINVR_b_MtrB_l;

    /* Outputs for Atomic SubSystem: '<S360>/Count Down Reset Enabled' */
    /* Switch: '<S394>/Switch1' incorporates:
     *  Constant: '<S385>/Calib'
     *  Constant: '<S394>/Constant Value'
     *  Logic: '<S395>/AND'
     *  RelationalOperator: '<S394>/Greater  Than'
     *  Switch: '<S394>/Switch2'
     *  UnitDelay: '<S394>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MtrB_l &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_ia)
    {
        INVR_ac_DW.UnitDelay_DSTATE_l4 = KeINVI_Cnt_MtrB_InvrtrSt;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_l4) > 0)
        {
            /* UnitDelay: '<S394>/Unit Delay' incorporates:
             *  Constant: '<S394>/Constant Value1'
             *  Sum: '<S394>/Subtraction'
             *  Switch: '<S394>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_l4 = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_l4) - 1));
        }
    }

    /* End of Switch: '<S394>/Switch1' */
    /* End of Outputs for SubSystem: '<S360>/EdgeRising1' */

    /* Switch: '<S360>/Switch' incorporates:
     *  Constant: '<S394>/Constant Value2'
     *  RelationalOperator: '<S394>/Greater  Than1'
     *  UnitDelay: '<S394>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_l4) > 0)
    {
    }
    else
    {
        /* Switch: '<S360>/Switch' incorporates:
         *  Merge: '<Root>/Merge_95'
         *  SignalConversion generated from: '<S78>/LeINVR_e_MtrB_InvrtrSt_read'
         */
        INVR_ac_DW.UnitDelay_DSTATE_oc =
            Rte_IrvRead_INVR_FastTEF_VeINVR_e_MtrB_InvrtrSt_Init_IRV();
    }

    /* End of Switch: '<S360>/Switch' */
    /* End of Outputs for SubSystem: '<S360>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S362>/EdgeRising1' */
    /* Logic: '<S399>/OR1' incorporates:
     *  UnitDelay: '<S399>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_l = !INVR_ac_DW.UnitDelay_DSTATE_n0v;

    /* Update for UnitDelay: '<S399>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_n0v = rtb_TmpSignalConversionAtLeINVR_b_Invrtr;

    /* Outputs for Atomic SubSystem: '<S362>/Count Down Reset Enabled' */
    /* Switch: '<S398>/Switch1' incorporates:
     *  Constant: '<S375>/Calib'
     *  Constant: '<S398>/Constant Value'
     *  Logic: '<S399>/AND'
     *  RelationalOperator: '<S398>/Greater  Than'
     *  Switch: '<S398>/Switch2'
     *  UnitDelay: '<S398>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Invrtr &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrB_l)
    {
        INVR_ac_DW.UnitDelay_DSTATE_cr = KeINVI_Cnt_InvrtrB_IsolStat;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_cr) > 0)
        {
            /* UnitDelay: '<S398>/Unit Delay' incorporates:
             *  Constant: '<S398>/Constant Value1'
             *  Sum: '<S398>/Subtraction'
             *  Switch: '<S398>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_cr = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_cr) - 1));
        }
    }

    /* End of Switch: '<S398>/Switch1' */
    /* End of Outputs for SubSystem: '<S362>/EdgeRising1' */

    /* Switch: '<S362>/Switch' incorporates:
     *  Constant: '<S398>/Constant Value2'
     *  RelationalOperator: '<S398>/Greater  Than1'
     *  UnitDelay: '<S398>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_cr) > 0)
    {
    }
    else
    {
        /* Switch: '<S362>/Switch' incorporates:
         *  Merge: '<Root>/Merge_59'
         *  SignalConversion generated from: '<S78>/LeINVR_e_InvrtrB_IsolStat_read'
         */
        INVR_ac_DW.UnitDelay_DSTATE_n1 =
            Rte_IrvRead_INVR_FastTEF_VeINVR_e_InvrtrB_IsolStat_Init_IRV();
    }

    /* End of Switch: '<S362>/Switch' */
    /* End of Outputs for SubSystem: '<S362>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S364>/EdgeRising1' */
    /* Logic: '<S403>/OR1' incorporates:
     *  UnitDelay: '<S403>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Invrtr = !INVR_ac_DW.UnitDelay_DSTATE_en;

    /* Update for UnitDelay: '<S403>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_en = rtb_TmpSignalConversionAtLeINVR_b_Mtr_ii;

    /* Outputs for Atomic SubSystem: '<S364>/Count Down Reset Enabled' */
    /* Switch: '<S402>/Switch1' incorporates:
     *  Constant: '<S388>/Calib'
     *  Constant: '<S402>/Constant Value'
     *  Logic: '<S403>/AND'
     *  RelationalOperator: '<S402>/Greater  Than'
     *  Switch: '<S402>/Switch2'
     *  UnitDelay: '<S402>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_ii &&
            rtb_TmpSignalConversionAtLeINVR_b_Invrtr)
    {
        INVR_ac_DW.UnitDelay_DSTATE_nn = KeINVI_Cnt_MtrB_Temp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_nn) > 0)
        {
            /* UnitDelay: '<S402>/Unit Delay' incorporates:
             *  Constant: '<S402>/Constant Value1'
             *  Sum: '<S402>/Subtraction'
             *  Switch: '<S402>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_nn = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_nn) - 1));
        }
    }

    /* End of Switch: '<S402>/Switch1' */
    /* End of Outputs for SubSystem: '<S364>/EdgeRising1' */

    /* Switch: '<S364>/Switch' incorporates:
     *  Constant: '<S402>/Constant Value2'
     *  Merge: '<Root>/Merge_105'
     *  RelationalOperator: '<S402>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrB_Temp_read'
     *  UnitDelay: '<S364>/Unit Delay'
     *  UnitDelay: '<S402>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_nn) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_b =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrB_Temp_write_IRV();
    }

    /* End of Switch: '<S364>/Switch' */
    /* End of Outputs for SubSystem: '<S364>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S367>/EdgeRising1' */
    /* Logic: '<S409>/OR1' incorporates:
     *  UnitDelay: '<S409>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_ii = !INVR_ac_DW.UnitDelay_DSTATE_fo;

    /* Update for UnitDelay: '<S409>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_fo = rtb_TmpSignalConversionAtLeINVR_b_Mtr_fp;

    /* Outputs for Atomic SubSystem: '<S367>/Count Down Reset Enabled' */
    /* Switch: '<S408>/Switch1' incorporates:
     *  Constant: '<S386>/Calib'
     *  Constant: '<S408>/Constant Value'
     *  Logic: '<S409>/AND'
     *  RelationalOperator: '<S408>/Greater  Than'
     *  Switch: '<S408>/Switch2'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_fp &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_ii)
    {
        INVR_ac_DW.UnitDelay_DSTATE_cz = KeINVI_Cnt_MtrB_InvrtrTemp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_cz) > 0)
        {
            /* UnitDelay: '<S408>/Unit Delay' incorporates:
             *  Constant: '<S408>/Constant Value1'
             *  Sum: '<S408>/Subtraction'
             *  Switch: '<S408>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_cz = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_cz) - 1));
        }
    }

    /* End of Switch: '<S408>/Switch1' */
    /* End of Outputs for SubSystem: '<S367>/EdgeRising1' */

    /* Switch: '<S367>/Switch' incorporates:
     *  Constant: '<S408>/Constant Value2'
     *  Merge: '<Root>/Merge_98'
     *  RelationalOperator: '<S408>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrB_InvrtrTemp_read'
     *  UnitDelay: '<S367>/Unit Delay'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_cz) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_c =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrB_InvrtrTemp_write_IRV();
    }

    /* End of Switch: '<S367>/Switch' */
    /* End of Outputs for SubSystem: '<S367>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S372>/EdgeRising1' */
    /* Logic: '<S419>/OR1' incorporates:
     *  UnitDelay: '<S419>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_fp = !INVR_ac_DW.UnitDelay_DSTATE_pu;

    /* Update for UnitDelay: '<S419>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_pu = rtb_TmpSignalConversionAtLeINVR_b_Mtr_lb;

    /* Outputs for Atomic SubSystem: '<S372>/Count Down Reset Enabled' */
    /* Switch: '<S418>/Switch1' incorporates:
     *  Constant: '<S383>/Calib'
     *  Constant: '<S418>/Constant Value'
     *  Logic: '<S419>/AND'
     *  RelationalOperator: '<S418>/Greater  Than'
     *  Switch: '<S418>/Switch2'
     *  UnitDelay: '<S418>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_lb &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_fp)
    {
        INVR_ac_DW.UnitDelay_DSTATE_fd = KeINVI_Cnt_MtrB_DC_Crnt;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_fd) > 0)
        {
            /* UnitDelay: '<S418>/Unit Delay' incorporates:
             *  Constant: '<S418>/Constant Value1'
             *  Sum: '<S418>/Subtraction'
             *  Switch: '<S418>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_fd = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_fd) - 1));
        }
    }

    /* End of Switch: '<S418>/Switch1' */
    /* End of Outputs for SubSystem: '<S372>/EdgeRising1' */

    /* Switch: '<S372>/Switch' incorporates:
     *  Constant: '<S418>/Constant Value2'
     *  Merge: '<Root>/Merge_89'
     *  RelationalOperator: '<S418>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_I_MtrB_DC_Crnt_read'
     *  UnitDelay: '<S372>/Unit Delay'
     *  UnitDelay: '<S418>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_fd) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_ca =
            Rte_IrvRead_INVR_FastTEF_VeINVR_I_MtrB_DC_Crnt_write_IRV();
    }

    /* End of Switch: '<S372>/Switch' */
    /* End of Outputs for SubSystem: '<S372>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S373>/EdgeRising1' */
    /* Logic: '<S421>/OR1' incorporates:
     *  UnitDelay: '<S421>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_lb = !INVR_ac_DW.UnitDelay_DSTATE_iu;

    /* Update for UnitDelay: '<S421>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_iu = rtb_TmpSignalConversionAtLeINVR_b_MtrB_g;

    /* Outputs for Atomic SubSystem: '<S373>/Count Down Reset Enabled' */
    /* Switch: '<S420>/Switch1' incorporates:
     *  Constant: '<S384>/Calib'
     *  Constant: '<S420>/Constant Value'
     *  Logic: '<S421>/AND'
     *  RelationalOperator: '<S420>/Greater  Than'
     *  Switch: '<S420>/Switch2'
     *  UnitDelay: '<S420>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MtrB_g &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_lb)
    {
        INVR_ac_DW.UnitDelay_DSTATE_f = KeINVI_Cnt_MtrB_DC_Volt;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_f) > 0)
        {
            /* UnitDelay: '<S420>/Unit Delay' incorporates:
             *  Constant: '<S420>/Constant Value1'
             *  Sum: '<S420>/Subtraction'
             *  Switch: '<S420>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_f = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_f) - 1));
        }
    }

    /* End of Switch: '<S420>/Switch1' */
    /* End of Outputs for SubSystem: '<S373>/EdgeRising1' */

    /* Switch: '<S373>/Switch' incorporates:
     *  Constant: '<S420>/Constant Value2'
     *  Merge: '<Root>/Merge_92'
     *  RelationalOperator: '<S420>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_U_MtrB_DC_Volt_read'
     *  UnitDelay: '<S373>/Unit Delay'
     *  UnitDelay: '<S420>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_f) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_eh =
            Rte_IrvRead_INVR_FastTEF_VeINVR_U_MtrB_DC_Volt_write_IRV();
    }

    /* End of Switch: '<S373>/Switch' */
    /* End of Outputs for SubSystem: '<S373>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S374>/EdgeRising1' */
    /* Logic: '<S423>/OR1' incorporates:
     *  UnitDelay: '<S423>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_g = !INVR_ac_DW.UnitDelay_DSTATE_an;

    /* Update for UnitDelay: '<S423>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_an = rtb_TmpSignalConversionAtLeINVR_b_MtrB_6;

    /* Outputs for Atomic SubSystem: '<S374>/Count Down Reset Enabled' */
    /* Switch: '<S422>/Switch1' incorporates:
     *  Constant: '<S378>/Calib'
     *  Constant: '<S422>/Constant Value'
     *  Logic: '<S423>/AND'
     *  RelationalOperator: '<S422>/Greater  Than'
     *  Switch: '<S422>/Switch2'
     *  UnitDelay: '<S422>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MtrB_6 &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrB_g)
    {
        INVR_ac_DW.UnitDelay_DSTATE_iq = KeINVI_Cnt_MtrB_6SOEnbl;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_iq) > 0)
        {
            /* UnitDelay: '<S422>/Unit Delay' incorporates:
             *  Constant: '<S422>/Constant Value1'
             *  Sum: '<S422>/Subtraction'
             *  Switch: '<S422>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_iq = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_iq) - 1));
        }
    }

    /* End of Switch: '<S422>/Switch1' */
    /* End of Outputs for SubSystem: '<S374>/EdgeRising1' */

    /* Switch: '<S374>/Switch' incorporates:
     *  Constant: '<S422>/Constant Value2'
     *  RelationalOperator: '<S422>/Greater  Than1'
     *  UnitDelay: '<S422>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_iq) > 0)
    {
    }
    else
    {
        /* Switch: '<S374>/Switch' incorporates:
         *  Merge: '<Root>/Merge_74'
         *  SignalConversion generated from: '<S78>/LeINVR_e_MtrB_6SOEnbl_read'
         */
        INVR_ac_DW.UnitDelay_DSTATE_o3 =
            Rte_IrvRead_INVR_FastTEF_VeINVR_e_MtrB_6SOEnbl_Init_IRV();
    }

    /* End of Switch: '<S374>/Switch' */
    /* End of Outputs for SubSystem: '<S374>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S361>/EdgeRising1' */
    /* Logic: '<S397>/OR1' incorporates:
     *  UnitDelay: '<S397>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_6 = !INVR_ac_DW.UnitDelay_DSTATE_ly;

    /* Update for UnitDelay: '<S397>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_ly = rtb_TmpSignalConversionAtLeINVR_b_MCPB_S;

    /* Outputs for Atomic SubSystem: '<S361>/Count Down Reset Enabled' */
    /* Switch: '<S396>/Switch1' incorporates:
     *  Constant: '<S376>/Calib'
     *  Constant: '<S396>/Constant Value'
     *  Logic: '<S397>/AND'
     *  RelationalOperator: '<S396>/Greater  Than'
     *  Switch: '<S396>/Switch2'
     *  UnitDelay: '<S396>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MCPB_S &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrB_6)
    {
        INVR_ac_DW.UnitDelay_DSTATE_ct = KeINVI_Cnt_MCPB_SPT_State;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ct) > 0)
        {
            /* UnitDelay: '<S396>/Unit Delay' incorporates:
             *  Constant: '<S396>/Constant Value1'
             *  Sum: '<S396>/Subtraction'
             *  Switch: '<S396>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_ct = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_ct) - 1));
        }
    }

    /* End of Switch: '<S396>/Switch1' */
    /* End of Outputs for SubSystem: '<S361>/EdgeRising1' */

    /* Switch: '<S361>/Switch' incorporates:
     *  Constant: '<S396>/Constant Value2'
     *  RelationalOperator: '<S396>/Greater  Than1'
     *  UnitDelay: '<S396>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ct) > 0)
    {
    }
    else
    {
        /* Switch: '<S361>/Switch' incorporates:
         *  Merge: '<Root>/Merge_65'
         *  SignalConversion generated from: '<S78>/LeINVR_e_MCPB_SPT_State_read'
         */
        INVR_ac_DW.UnitDelay_DSTATE_id =
            Rte_IrvRead_INVR_FastTEF_VeINVR_e_MCPB_SPT_State_Init_IRV();
    }

    /* End of Switch: '<S361>/Switch' */
    /* End of Outputs for SubSystem: '<S361>/Count Down Reset Enabled' */

    /* If: '<S390>/If2' incorporates:
     *  Constant: '<S426>/Calib'
     *  Logic: '<S390>/Logical2'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_i5)
    {
        /* Outputs for IfAction SubSystem: '<S390>/IfAction_MtrB_CntctrOpnRq' incorporates:
         *  ActionPort: '<S424>/Action_Port'
         */
        INVR_ac_IfAction_MtrA_CntctrOpnRq
            (rtb_TmpSignalConversionAtLeINVR_b_Mtr_ix,
             rtb_TmpSignalConversionAtLeINVR_b_Mtr_i5,
             (&(VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Arb)),
             (&(VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Sig_Rcvd_Arb)));

        /* End of Outputs for SubSystem: '<S390>/IfAction_MtrB_CntctrOpnRq' */
    }
    else
    {
        if (rtb_TmpSignalConversionAtLeINVR_b_MtrB_n &&
                (KeINVI_b_MtrBCntctrOpnRq_AltSrcAvlb))
        {
            /* Outputs for IfAction SubSystem: '<S390>/IfAction_MtrB_CntctrOpnRq_AltSrc' incorporates:
             *  ActionPort: '<S425>/Action_Port'
             */
            INVR_ac_IfAction_MtrA_CntctrOpnRq
                (rtb_TmpSignalConversionAtLeINVR_b_Mtr_hp,
                 rtb_TmpSignalConversionAtLeINVR_b_MtrB_n,
                 (&(VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Arb)),
                 (&(VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Sig_Rcvd_Arb)));

            /* End of Outputs for SubSystem: '<S390>/IfAction_MtrB_CntctrOpnRq_AltSrc' */
        }
    }

    /* End of If: '<S390>/If2' */

    /* Outputs for Atomic SubSystem: '<S363>/EdgeRising1' */
    /* Logic: '<S401>/OR1' incorporates:
     *  UnitDelay: '<S401>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MCPB_S = !INVR_ac_DW.UnitDelay_DSTATE_be;

    /* Update for UnitDelay: '<S401>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_be =
        VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Sig_Rcvd_Arb;

    /* Outputs for Atomic SubSystem: '<S363>/Count Down Reset Enabled' */
    /* Switch: '<S400>/Switch1' incorporates:
     *  Constant: '<S377>/Calib'
     *  Constant: '<S400>/Constant Value'
     *  Logic: '<S401>/AND'
     *  RelationalOperator: '<S400>/Greater  Than'
     *  Switch: '<S400>/Switch2'
     *  UnitDelay: '<S400>/Unit Delay'
     */
    if ((VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Sig_Rcvd_Arb) &&
            rtb_TmpSignalConversionAtLeINVR_b_MCPB_S)
    {
        INVR_ac_DW.UnitDelay_DSTATE_ie = KeINVI_Cnt_MtrBFlt_HV_CntctrOpnRq;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ie) > 0)
        {
            /* UnitDelay: '<S400>/Unit Delay' incorporates:
             *  Constant: '<S400>/Constant Value1'
             *  Sum: '<S400>/Subtraction'
             *  Switch: '<S400>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_ie = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_ie) - 1));
        }
    }

    /* End of Switch: '<S400>/Switch1' */
    /* End of Outputs for SubSystem: '<S363>/EdgeRising1' */

    /* Switch: '<S363>/Switch' incorporates:
     *  Constant: '<S400>/Constant Value2'
     *  RelationalOperator: '<S400>/Greater  Than1'
     *  UnitDelay: '<S363>/Unit Delay'
     *  UnitDelay: '<S400>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ie) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_ob = VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Arb;
    }

    /* End of Switch: '<S363>/Switch' */
    /* End of Outputs for SubSystem: '<S363>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S365>/EdgeRising1' */
    /* Logic: '<S405>/OR1' incorporates:
     *  UnitDelay: '<S405>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MCPB_S = !INVR_ac_DW.UnitDelay_DSTATE_js2;

    /* Update for UnitDelay: '<S405>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_js2 = rtb_TmpSignalConversionAtLeINVR_b_P2Mo_j;

    /* Outputs for Atomic SubSystem: '<S365>/Count Down Reset Enabled' */
    /* Switch: '<S404>/Switch1' incorporates:
     *  Constant: '<S389>/Calib'
     *  Constant: '<S404>/Constant Value'
     *  Logic: '<S405>/AND'
     *  RelationalOperator: '<S404>/Greater  Than'
     *  Switch: '<S404>/Switch2'
     *  UnitDelay: '<S404>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_P2Mo_j &&
            rtb_TmpSignalConversionAtLeINVR_b_MCPB_S)
    {
        INVR_ac_DW.UnitDelay_DSTATE_jy = KeINVI_Cnt_P2ModeSts;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_jy) > 0)
        {
            /* UnitDelay: '<S404>/Unit Delay' incorporates:
             *  Constant: '<S404>/Constant Value1'
             *  Sum: '<S404>/Subtraction'
             *  Switch: '<S404>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_jy = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_jy) - 1));
        }
    }

    /* End of Switch: '<S404>/Switch1' */
    /* End of Outputs for SubSystem: '<S365>/EdgeRising1' */

    /* Switch: '<S365>/Switch' incorporates:
     *  Constant: '<S404>/Constant Value2'
     *  Merge: '<Root>/Merge_107'
     *  RelationalOperator: '<S404>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_e_P2ModeSts_read'
     *  UnitDelay: '<S365>/Unit Delay'
     *  UnitDelay: '<S404>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_jy) > 0)
    {
    }
    else
    {
        INVR_ac_DW.UnitDelay_DSTATE_o0 =
            Rte_IrvRead_INVR_FastTEF_VeINVR_e_P2ModeSts_write_IRV();
    }

    /* End of Switch: '<S365>/Switch' */
    /* End of Outputs for SubSystem: '<S365>/Count Down Reset Enabled' */

    /* Logic: '<S391>/Logical Operator' incorporates:
     *  Constant: '<S391>/Constant1'
     *  Constant: '<S391>/Constant2'
     *  DataStoreRead: '<S391>/StatusByte_LostCommDMCM_2'
     *  RelationalOperator: '<S391>/Relational Operator1'
     *  RelationalOperator: '<S391>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S391>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S391>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtLeINVR_b_P2Mo_j = (((((sint32)
        INVR_ac_DW.StatusByte_LostCommDMCM_2) & 1) > 0) && ((((uint32)
        INVR_ac_DW.StatusByte_LostCommDMCM_2) & 64U) == 0U));

    /* Logic: '<S392>/Logical Operator' incorporates:
     *  Constant: '<S392>/Constant1'
     *  Constant: '<S392>/Constant2'
     *  DataStoreRead: '<S392>/StatusByte_CommBus_B_Off'
     *  RelationalOperator: '<S392>/Relational Operator1'
     *  RelationalOperator: '<S392>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S392>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S392>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MCPB_S = (((((sint32)
        INVR_ac_DW.StatusByte_CommBus_B_Off) & 1) > 0) && ((((uint32)
        INVR_ac_DW.StatusByte_CommBus_B_Off) & 64U) == 0U));

    /* UnitDelay: '<S417>/Unit Delay' incorporates:
     *  Constant: '<S393>/Constant1'
     *  Constant: '<S393>/Constant2'
     *  DataStoreRead: '<S393>/StatusByte_InvData_DMCM_B'
     *  Logic: '<S393>/Logical Operator'
     *  RelationalOperator: '<S393>/Relational Operator1'
     *  RelationalOperator: '<S393>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S393>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S393>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_6 = (((((sint32)
        INVR_ac_DW.StatusByte_InvData_DMCM_B) & 1) > 0) && ((((uint32)
        INVR_ac_DW.StatusByte_InvData_DMCM_B) & 64U) == 0U));

    /* Logic: '<S291>/Logical5' incorporates:
     *  Logic: '<S291>/Logical7'
     *  Merge: '<Root>/Merge_70'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrBFlt_HV_CntctrOpnRqFA_read'
     */
    VeINVR_b_GMGOverTempOvrd = ((rtb_TmpSignalConversionAtLeINVR_b_P2Mo_j ||
        rtb_TmpSignalConversionAtLeINVR_b_MCPB_S) ||
        (rtb_TmpSignalConversionAtLeINVR_b_MtrB_6 &&
         (Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrBFlt_HV_CntctrOpnRqFA_write_IRV())));

    /* Outputs for Atomic SubSystem: '<S366>/EdgeRising1' */
    /* Logic: '<S407>/OR1' incorporates:
     *  UnitDelay: '<S407>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_g = !INVR_ac_DW.UnitDelay_DSTATE_ia;

    /* Update for UnitDelay: '<S407>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_ia = rtb_TmpSignalConversionAtLeINVR_b_MtrB_d;

    /* Outputs for Atomic SubSystem: '<S366>/Count Down Reset Enabled' */
    /* Switch: '<S406>/Switch1' incorporates:
     *  Constant: '<S382>/Calib'
     *  Constant: '<S406>/Constant Value'
     *  Logic: '<S407>/AND'
     *  RelationalOperator: '<S406>/Greater  Than'
     *  Switch: '<S406>/Switch2'
     *  UnitDelay: '<S406>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MtrB_d &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrB_g)
    {
        INVR_ac_DW.UnitDelay_DSTATE_pq = KeINVI_Cnt_MtrB_CtrlBoard_Temp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_pq) > 0)
        {
            /* UnitDelay: '<S406>/Unit Delay' incorporates:
             *  Constant: '<S406>/Constant Value1'
             *  Sum: '<S406>/Subtraction'
             *  Switch: '<S406>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_pq = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_pq) - 1));
        }
    }

    /* End of Switch: '<S406>/Switch1' */
    /* End of Outputs for SubSystem: '<S366>/EdgeRising1' */

    /* Switch: '<S366>/Switch' incorporates:
     *  Constant: '<S406>/Constant Value2'
     *  Merge: '<Root>/Merge_86'
     *  RelationalOperator: '<S406>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrB_CtrlBoard_Temp_read'
     *  UnitDelay: '<S366>/Unit Delay'
     *  UnitDelay: '<S406>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_pq) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_m =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrB_CtrlBoard_Temp_write_IRV();
    }

    /* End of Switch: '<S366>/Switch' */
    /* End of Outputs for SubSystem: '<S366>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S368>/EdgeRising1' */
    /* Logic: '<S411>/OR1' incorporates:
     *  UnitDelay: '<S411>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_d = !INVR_ac_DW.UnitDelay_DSTATE_kt;

    /* Update for UnitDelay: '<S411>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_kt = rtb_TmpSignalConversionAtLeINVR_b_MtrB_k;

    /* Outputs for Atomic SubSystem: '<S368>/Count Down Reset Enabled' */
    /* Switch: '<S410>/Switch1' incorporates:
     *  Constant: '<S380>/Calib'
     *  Constant: '<S410>/Constant Value'
     *  Logic: '<S411>/AND'
     *  RelationalOperator: '<S410>/Greater  Than'
     *  Switch: '<S410>/Switch2'
     *  UnitDelay: '<S410>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MtrB_k &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrB_d)
    {
        INVR_ac_DW.UnitDelay_DSTATE_nr = KeINVI_Cnt_MtrB_ClntIn_Temp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_nr) > 0)
        {
            /* UnitDelay: '<S410>/Unit Delay' incorporates:
             *  Constant: '<S410>/Constant Value1'
             *  Sum: '<S410>/Subtraction'
             *  Switch: '<S410>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_nr = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_nr) - 1));
        }
    }

    /* End of Switch: '<S410>/Switch1' */
    /* End of Outputs for SubSystem: '<S368>/EdgeRising1' */

    /* Switch: '<S368>/Switch' incorporates:
     *  Constant: '<S410>/Constant Value2'
     *  Merge: '<Root>/Merge_80'
     *  RelationalOperator: '<S410>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrB_ClntIn_Temp_read'
     *  UnitDelay: '<S368>/Unit Delay'
     *  UnitDelay: '<S410>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_nr) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_mj =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrB_ClntIn_Temp_write_IRV();
    }

    /* End of Switch: '<S368>/Switch' */
    /* End of Outputs for SubSystem: '<S368>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S369>/EdgeRising1' */
    /* Logic: '<S413>/OR1' incorporates:
     *  UnitDelay: '<S413>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_k = !INVR_ac_DW.UnitDelay_DSTATE_bx;

    /* Update for UnitDelay: '<S413>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_bx = rtb_TmpSignalConversionAtLeINVR_b_Mtr_dz;

    /* Outputs for Atomic SubSystem: '<S369>/Count Down Reset Enabled' */
    /* Switch: '<S412>/Switch1' incorporates:
     *  Constant: '<S381>/Calib'
     *  Constant: '<S412>/Constant Value'
     *  Logic: '<S413>/AND'
     *  RelationalOperator: '<S412>/Greater  Than'
     *  Switch: '<S412>/Switch2'
     *  UnitDelay: '<S412>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_dz &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrB_k)
    {
        INVR_ac_DW.UnitDelay_DSTATE_ec = KeINVI_Cnt_MtrB_ClntOut_Temp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ec) > 0)
        {
            /* UnitDelay: '<S412>/Unit Delay' incorporates:
             *  Constant: '<S412>/Constant Value1'
             *  Sum: '<S412>/Subtraction'
             *  Switch: '<S412>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_ec = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_ec) - 1));
        }
    }

    /* End of Switch: '<S412>/Switch1' */
    /* End of Outputs for SubSystem: '<S369>/EdgeRising1' */

    /* Switch: '<S369>/Switch' incorporates:
     *  Constant: '<S412>/Constant Value2'
     *  Merge: '<Root>/Merge_83'
     *  RelationalOperator: '<S412>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrB_ClntOut_Temp_read'
     *  UnitDelay: '<S369>/Unit Delay'
     *  UnitDelay: '<S412>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ec) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_n =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrB_ClntOut_Temp_write_IRV();
    }

    /* End of Switch: '<S369>/Switch' */
    /* End of Outputs for SubSystem: '<S369>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S370>/EdgeRising1' */
    /* Logic: '<S415>/OR1' incorporates:
     *  UnitDelay: '<S415>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_dz = !INVR_ac_DW.UnitDelay_DSTATE_gt;

    /* Update for UnitDelay: '<S415>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_gt = rtb_TmpSignalConversionAtLeINVR_b_Mtr_p0;

    /* Outputs for Atomic SubSystem: '<S370>/Count Down Reset Enabled' */
    /* Switch: '<S414>/Switch1' incorporates:
     *  Constant: '<S387>/Calib'
     *  Constant: '<S414>/Constant Value'
     *  Logic: '<S415>/AND'
     *  RelationalOperator: '<S414>/Greater  Than'
     *  Switch: '<S414>/Switch2'
     *  UnitDelay: '<S414>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_p0 &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_dz)
    {
        INVR_ac_DW.UnitDelay_DSTATE_ap = KeINVI_Cnt_MtrB_RotrTemp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ap) > 0)
        {
            /* UnitDelay: '<S414>/Unit Delay' incorporates:
             *  Constant: '<S414>/Constant Value1'
             *  Sum: '<S414>/Subtraction'
             *  Switch: '<S414>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_ap = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_ap) - 1));
        }
    }

    /* End of Switch: '<S414>/Switch1' */
    /* End of Outputs for SubSystem: '<S370>/EdgeRising1' */

    /* Switch: '<S370>/Switch' incorporates:
     *  Constant: '<S414>/Constant Value2'
     *  Merge: '<Root>/Merge_101'
     *  RelationalOperator: '<S414>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrB_RotrTemp_read'
     *  UnitDelay: '<S370>/Unit Delay'
     *  UnitDelay: '<S414>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ap) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_pe =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrB_RotrTemp_write_IRV();
    }

    /* End of Switch: '<S370>/Switch' */
    /* End of Outputs for SubSystem: '<S370>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S371>/EdgeRising1' */
    /* Logic: '<S417>/OR1' incorporates:
     *  UnitDelay: '<S417>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_p0 = !INVR_ac_DW.UnitDelay_DSTATE_io;

    /* Update for UnitDelay: '<S417>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_io = rtb_TmpSignalConversionAtLeINVR_b_MtrB_a;

    /* Outputs for Atomic SubSystem: '<S371>/Count Down Reset Enabled' */
    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S379>/Calib'
     *  Constant: '<S416>/Constant Value'
     *  Logic: '<S417>/AND'
     *  RelationalOperator: '<S416>/Greater  Than'
     *  Switch: '<S416>/Switch2'
     *  UnitDelay: '<S416>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MtrB_a &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_p0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_bq = KeINVI_Cnt_MtrB_CapctrTemp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_bq) > 0)
        {
            /* UnitDelay: '<S416>/Unit Delay' incorporates:
             *  Constant: '<S416>/Constant Value1'
             *  Sum: '<S416>/Subtraction'
             *  Switch: '<S416>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_bq = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_bq) - 1));
        }
    }

    /* End of Switch: '<S416>/Switch1' */
    /* End of Outputs for SubSystem: '<S371>/EdgeRising1' */

    /* Switch: '<S371>/Switch' incorporates:
     *  Constant: '<S416>/Constant Value2'
     *  Merge: '<Root>/Merge_77'
     *  RelationalOperator: '<S416>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrB_CapctrTemp_read'
     *  UnitDelay: '<S371>/Unit Delay'
     *  UnitDelay: '<S416>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_bq) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_kf =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrB_CapctrTemp_write_IRV();
    }

    /* End of Switch: '<S371>/Switch' */
    /* End of Outputs for SubSystem: '<S371>/Count Down Reset Enabled' */

    /* S-Function (fcgen): '<S78>/FcnCallGen' incorporates:
     *  SubSystem: '<S78>/MotorC_TmoutDbnc'
     */
    /* Outputs for Atomic SubSystem: '<S430>/EdgeRising1' */
    /* Logic: '<S456>/OR1' incorporates:
     *  UnitDelay: '<S456>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrB_a = !INVR_ac_DW.UnitDelay_DSTATE_bd;

    /* Update for UnitDelay: '<S456>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_bd = rtb_TmpSignalConversionAtLeINVR_b_Mtr_fr;

    /* Outputs for Atomic SubSystem: '<S430>/Count Down Reset Enabled' */
    /* Switch: '<S455>/Switch1' incorporates:
     *  Constant: '<S445>/Calib'
     *  Constant: '<S455>/Constant Value'
     *  Logic: '<S456>/AND'
     *  RelationalOperator: '<S455>/Greater  Than'
     *  Switch: '<S455>/Switch2'
     *  UnitDelay: '<S455>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_fr &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrB_a)
    {
        INVR_ac_DW.UnitDelay_DSTATE_kn = KeINVI_Cnt_MtrC_InvrtrSt;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_kn) > 0)
        {
            /* UnitDelay: '<S455>/Unit Delay' incorporates:
             *  Constant: '<S455>/Constant Value1'
             *  Sum: '<S455>/Subtraction'
             *  Switch: '<S455>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_kn = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_kn) - 1));
        }
    }

    /* End of Switch: '<S455>/Switch1' */
    /* End of Outputs for SubSystem: '<S430>/EdgeRising1' */

    /* Switch: '<S430>/Switch' incorporates:
     *  Constant: '<S455>/Constant Value2'
     *  RelationalOperator: '<S455>/Greater  Than1'
     *  UnitDelay: '<S455>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_kn) > 0)
    {
    }
    else
    {
        /* Switch: '<S430>/Switch' incorporates:
         *  Merge: '<Root>/Merge_131'
         *  SignalConversion generated from: '<S78>/LeINVR_e_MtrC_InvrtrSt_read'
         */
        INVR_ac_DW.UnitDelay_DSTATE_i1 =
            Rte_IrvRead_INVR_FastTEF_VeINVR_e_MtrC_InvrtrSt_Init_IRV();
    }

    /* End of Switch: '<S430>/Switch' */
    /* End of Outputs for SubSystem: '<S430>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S435>/EdgeRising1' */
    /* Logic: '<S466>/OR1' incorporates:
     *  UnitDelay: '<S466>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_fr = !INVR_ac_DW.UnitDelay_DSTATE_ng;

    /* Update for UnitDelay: '<S466>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_ng = rtb_TmpSignalConversionAtLeINVR_b_MtrC_a;

    /* Outputs for Atomic SubSystem: '<S435>/Count Down Reset Enabled' */
    /* Switch: '<S465>/Switch1' incorporates:
     *  Constant: '<S448>/Calib'
     *  Constant: '<S465>/Constant Value'
     *  Logic: '<S466>/AND'
     *  RelationalOperator: '<S465>/Greater  Than'
     *  Switch: '<S465>/Switch2'
     *  UnitDelay: '<S465>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MtrC_a &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_fr)
    {
        INVR_ac_DW.UnitDelay_DSTATE_ep = KeINVI_Cnt_MtrC_Temp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ep) > 0)
        {
            /* UnitDelay: '<S465>/Unit Delay' incorporates:
             *  Constant: '<S465>/Constant Value1'
             *  Sum: '<S465>/Subtraction'
             *  Switch: '<S465>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_ep = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_ep) - 1));
        }
    }

    /* End of Switch: '<S465>/Switch1' */
    /* End of Outputs for SubSystem: '<S435>/EdgeRising1' */

    /* Switch: '<S435>/Switch' incorporates:
     *  Constant: '<S465>/Constant Value2'
     *  Merge: '<Root>/Merge_140'
     *  RelationalOperator: '<S465>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrC_Temp_read'
     *  UnitDelay: '<S435>/Unit Delay'
     *  UnitDelay: '<S465>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ep) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrC_Temp_write_IRV();
    }

    /* End of Switch: '<S435>/Switch' */
    /* End of Outputs for SubSystem: '<S435>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S436>/EdgeRising1' */
    /* Logic: '<S468>/OR1' incorporates:
     *  UnitDelay: '<S468>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrC_a = !INVR_ac_DW.UnitDelay_DSTATE_d0;

    /* Update for UnitDelay: '<S468>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_d0 = rtb_TmpSignalConversionAtLeINVR_b_MtrC_o;

    /* Outputs for Atomic SubSystem: '<S436>/Count Down Reset Enabled' */
    /* Switch: '<S467>/Switch1' incorporates:
     *  Constant: '<S446>/Calib'
     *  Constant: '<S467>/Constant Value'
     *  Logic: '<S468>/AND'
     *  RelationalOperator: '<S467>/Greater  Than'
     *  Switch: '<S467>/Switch2'
     *  UnitDelay: '<S467>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MtrC_o &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrC_a)
    {
        INVR_ac_DW.UnitDelay_DSTATE_mi = KeINVI_Cnt_MtrC_InvrtrTemp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_mi) > 0)
        {
            /* UnitDelay: '<S467>/Unit Delay' incorporates:
             *  Constant: '<S467>/Constant Value1'
             *  Sum: '<S467>/Subtraction'
             *  Switch: '<S467>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_mi = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_mi) - 1));
        }
    }

    /* End of Switch: '<S467>/Switch1' */
    /* End of Outputs for SubSystem: '<S436>/EdgeRising1' */

    /* Switch: '<S436>/Switch' incorporates:
     *  Constant: '<S467>/Constant Value2'
     *  Merge: '<Root>/Merge_134'
     *  RelationalOperator: '<S467>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrC_InvrtrTemp_read'
     *  UnitDelay: '<S436>/Unit Delay'
     *  UnitDelay: '<S467>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_mi) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_d =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrC_InvrtrTemp_write_IRV();
    }

    /* End of Switch: '<S436>/Switch' */
    /* End of Outputs for SubSystem: '<S436>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S437>/EdgeRising1' */
    /* Logic: '<S470>/OR1' incorporates:
     *  UnitDelay: '<S470>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrC_o = !INVR_ac_DW.UnitDelay_DSTATE_b1;

    /* Update for UnitDelay: '<S470>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_b1 = rtb_TmpSignalConversionAtLeINVR_b_MtrC_i;

    /* Outputs for Atomic SubSystem: '<S437>/Count Down Reset Enabled' */
    /* Switch: '<S469>/Switch1' incorporates:
     *  Constant: '<S443>/Calib'
     *  Constant: '<S469>/Constant Value'
     *  Logic: '<S470>/AND'
     *  RelationalOperator: '<S469>/Greater  Than'
     *  Switch: '<S469>/Switch2'
     *  UnitDelay: '<S469>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MtrC_i &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrC_o)
    {
        INVR_ac_DW.UnitDelay_DSTATE_jd = KeINVI_Cnt_MtrC_DC_Crnt;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_jd) > 0)
        {
            /* UnitDelay: '<S469>/Unit Delay' incorporates:
             *  Constant: '<S469>/Constant Value1'
             *  Sum: '<S469>/Subtraction'
             *  Switch: '<S469>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_jd = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_jd) - 1));
        }
    }

    /* End of Switch: '<S469>/Switch1' */
    /* End of Outputs for SubSystem: '<S437>/EdgeRising1' */

    /* Switch: '<S437>/Switch' incorporates:
     *  Constant: '<S469>/Constant Value2'
     *  Merge: '<Root>/Merge_125'
     *  RelationalOperator: '<S469>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_I_MtrC_DC_Crnt_read'
     *  UnitDelay: '<S437>/Unit Delay'
     *  UnitDelay: '<S469>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_jd) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_p =
            Rte_IrvRead_INVR_FastTEF_VeINVR_I_MtrC_DC_Crnt_write_IRV();
    }

    /* End of Switch: '<S437>/Switch' */
    /* End of Outputs for SubSystem: '<S437>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S427>/EdgeRising1' */
    /* Logic: '<S450>/OR1' incorporates:
     *  UnitDelay: '<S450>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrC_i = !INVR_ac_DW.UnitDelay_DSTATE_kft;

    /* Update for UnitDelay: '<S450>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_kft = rtb_TmpSignalConversionAtLeINVR_b_MtrC_b;

    /* Outputs for Atomic SubSystem: '<S427>/Count Down Reset Enabled' */
    /* Switch: '<S449>/Switch1' incorporates:
     *  Constant: '<S444>/Calib'
     *  Constant: '<S449>/Constant Value'
     *  Logic: '<S450>/AND'
     *  RelationalOperator: '<S449>/Greater  Than'
     *  Switch: '<S449>/Switch2'
     *  UnitDelay: '<S449>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MtrC_b &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrC_i)
    {
        INVR_ac_DW.UnitDelay_DSTATE_i3 = KeINVI_Cnt_MtrC_DC_Volt;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_i3) > 0)
        {
            /* UnitDelay: '<S449>/Unit Delay' incorporates:
             *  Constant: '<S449>/Constant Value1'
             *  Sum: '<S449>/Subtraction'
             *  Switch: '<S449>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_i3 = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_i3) - 1));
        }
    }

    /* End of Switch: '<S449>/Switch1' */
    /* End of Outputs for SubSystem: '<S427>/EdgeRising1' */

    /* Switch: '<S427>/Switch' incorporates:
     *  Constant: '<S449>/Constant Value2'
     *  Merge: '<Root>/Merge_128'
     *  RelationalOperator: '<S449>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_U_MtrC_DC_Volt_read'
     *  UnitDelay: '<S427>/Unit Delay'
     *  UnitDelay: '<S449>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_i3) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_e =
            Rte_IrvRead_INVR_FastTEF_VeINVR_U_MtrC_DC_Volt_write_IRV();
    }

    /* End of Switch: '<S427>/Switch' */
    /* End of Outputs for SubSystem: '<S427>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S428>/EdgeRising1' */
    /* Logic: '<S452>/OR1' incorporates:
     *  UnitDelay: '<S452>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrC_b = !INVR_ac_DW.UnitDelay_DSTATE_mi2;

    /* Update for UnitDelay: '<S452>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_mi2 = rtb_TmpSignalConversionAtLeINVR_b_MtrC_6;

    /* Outputs for Atomic SubSystem: '<S428>/Count Down Reset Enabled' */
    /* Switch: '<S451>/Switch1' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S451>/Constant Value'
     *  Logic: '<S452>/AND'
     *  RelationalOperator: '<S451>/Greater  Than'
     *  Switch: '<S451>/Switch2'
     *  UnitDelay: '<S451>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MtrC_6 &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrC_b)
    {
        INVR_ac_DW.UnitDelay_DSTATE_ae = KeINVI_Cnt_MtrC_6SOEnbl;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ae) > 0)
        {
            /* UnitDelay: '<S451>/Unit Delay' incorporates:
             *  Constant: '<S451>/Constant Value1'
             *  Sum: '<S451>/Subtraction'
             *  Switch: '<S451>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_ae = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_ae) - 1));
        }
    }

    /* End of Switch: '<S451>/Switch1' */
    /* End of Outputs for SubSystem: '<S428>/EdgeRising1' */

    /* Switch: '<S428>/Switch' incorporates:
     *  Constant: '<S451>/Constant Value2'
     *  RelationalOperator: '<S451>/Greater  Than1'
     *  UnitDelay: '<S451>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ae) > 0)
    {
    }
    else
    {
        /* Switch: '<S428>/Switch' incorporates:
         *  Merge: '<Root>/Merge_119'
         *  SignalConversion generated from: '<S78>/LeINVR_e_MtrC_6SOEnbl_read'
         */
        INVR_ac_DW.UnitDelay_DSTATE_nhj =
            Rte_IrvRead_INVR_FastTEF_VeINVR_e_MtrC_6SOEnbl_Init_IRV();
    }

    /* End of Switch: '<S428>/Switch' */
    /* End of Outputs for SubSystem: '<S428>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S429>/EdgeRising1' */
    /* Logic: '<S454>/OR1' incorporates:
     *  UnitDelay: '<S454>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrC_6 = !INVR_ac_DW.UnitDelay_DSTATE_h4;

    /* Update for UnitDelay: '<S454>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_h4 = rtb_TmpSignalConversionAtLeINVR_b_MCPC_S;

    /* Outputs for Atomic SubSystem: '<S429>/Count Down Reset Enabled' */
    /* Switch: '<S453>/Switch1' incorporates:
     *  Constant: '<S438>/Calib'
     *  Constant: '<S453>/Constant Value'
     *  Logic: '<S454>/AND'
     *  RelationalOperator: '<S453>/Greater  Than'
     *  Switch: '<S453>/Switch2'
     *  UnitDelay: '<S453>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MCPC_S &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrC_6)
    {
        INVR_ac_DW.UnitDelay_DSTATE_bn = KeINVI_Cnt_MCPC_SPT_State;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_bn) > 0)
        {
            /* UnitDelay: '<S453>/Unit Delay' incorporates:
             *  Constant: '<S453>/Constant Value1'
             *  Sum: '<S453>/Subtraction'
             *  Switch: '<S453>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_bn = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_bn) - 1));
        }
    }

    /* End of Switch: '<S453>/Switch1' */
    /* End of Outputs for SubSystem: '<S429>/EdgeRising1' */

    /* Switch: '<S429>/Switch' incorporates:
     *  Constant: '<S453>/Constant Value2'
     *  RelationalOperator: '<S453>/Greater  Than1'
     *  UnitDelay: '<S453>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_bn) > 0)
    {
    }
    else
    {
        /* Switch: '<S429>/Switch' incorporates:
         *  Merge: '<Root>/Merge_111'
         *  SignalConversion generated from: '<S78>/LeINVR_e_MCPC_SPT_State_read'
         */
        INVR_ac_DW.UnitDelay_DSTATE_l5 =
            Rte_IrvRead_INVR_FastTEF_VeINVR_e_MCPC_SPT_State_Init_IRV();
    }

    /* End of Switch: '<S429>/Switch' */
    /* End of Outputs for SubSystem: '<S429>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S431>/EdgeRising1' */
    /* Logic: '<S458>/OR1' incorporates:
     *  UnitDelay: '<S458>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MCPC_S = !INVR_ac_DW.UnitDelay_DSTATE_oh;

    /* Update for UnitDelay: '<S458>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_oh = rtb_TmpSignalConversionAtLeINVR_b_Mtr_le;

    /* Outputs for Atomic SubSystem: '<S431>/Count Down Reset Enabled' */
    /* Switch: '<S457>/Switch1' incorporates:
     *  Constant: '<S440>/Calib'
     *  Constant: '<S457>/Constant Value'
     *  Logic: '<S458>/AND'
     *  RelationalOperator: '<S457>/Greater  Than'
     *  Switch: '<S457>/Switch2'
     *  UnitDelay: '<S457>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_le &&
            rtb_TmpSignalConversionAtLeINVR_b_MCPC_S)
    {
        INVR_ac_DW.UnitDelay_DSTATE_ip = KeINVI_Cnt_MtrCFlt_HV_CntctrOpnRq;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ip) > 0)
        {
            /* UnitDelay: '<S457>/Unit Delay' incorporates:
             *  Constant: '<S457>/Constant Value1'
             *  Sum: '<S457>/Subtraction'
             *  Switch: '<S457>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_ip = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_ip) - 1));
        }
    }

    /* End of Switch: '<S457>/Switch1' */
    /* End of Outputs for SubSystem: '<S431>/EdgeRising1' */

    /* Switch: '<S431>/Switch' incorporates:
     *  Constant: '<S457>/Constant Value2'
     *  Merge: '<Root>/Merge_117'
     *  RelationalOperator: '<S457>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrCFlt_HV_CntctrOpnRq_read'
     *  UnitDelay: '<S431>/Unit Delay'
     *  UnitDelay: '<S457>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_ip) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_g =
            Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Init_IRV();
    }

    /* End of Switch: '<S431>/Switch' */
    /* End of Outputs for SubSystem: '<S431>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S432>/EdgeRising1' */
    /* Logic: '<S460>/OR1' incorporates:
     *  UnitDelay: '<S460>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_le = !INVR_ac_DW.UnitDelay_DSTATE_fq;

    /* Update for UnitDelay: '<S460>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_fq = rtb_TmpSignalConversionAtLeINVR_b_MtrC_e;

    /* Outputs for Atomic SubSystem: '<S432>/Count Down Reset Enabled' */
    /* Switch: '<S459>/Switch1' incorporates:
     *  Constant: '<S439>/Calib'
     *  Constant: '<S459>/Constant Value'
     *  Logic: '<S460>/AND'
     *  RelationalOperator: '<S459>/Greater  Than'
     *  Switch: '<S459>/Switch2'
     *  UnitDelay: '<S459>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_MtrC_e &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_le)
    {
        INVR_ac_DW.UnitDelay_DSTATE_cy = KeINVI_Cnt_MtrCFlt_3PS_Pos;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_cy) > 0)
        {
            /* UnitDelay: '<S459>/Unit Delay' incorporates:
             *  Constant: '<S459>/Constant Value1'
             *  Sum: '<S459>/Subtraction'
             *  Switch: '<S459>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_cy = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_cy) - 1));
        }
    }

    /* End of Switch: '<S459>/Switch1' */
    /* End of Outputs for SubSystem: '<S432>/EdgeRising1' */

    /* Switch: '<S432>/Switch' incorporates:
     *  Constant: '<S459>/Constant Value2'
     *  Merge: '<Root>/Merge_115'
     *  RelationalOperator: '<S459>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrCFlt_3PS_Pos_read'
     *  UnitDelay: '<S432>/Unit Delay'
     *  UnitDelay: '<S459>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_cy) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_bh =
            Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrCFlt_3PS_Pos_Init_IRV();
    }

    /* End of Switch: '<S432>/Switch' */
    /* End of Outputs for SubSystem: '<S432>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S433>/EdgeRising1' */
    /* Logic: '<S462>/OR1' incorporates:
     *  UnitDelay: '<S462>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_MtrC_e = !INVR_ac_DW.UnitDelay_DSTATE_na;

    /* Update for UnitDelay: '<S462>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_na = rtb_TmpSignalConversionAtLeINVR_b_Mtr_h2;

    /* Outputs for Atomic SubSystem: '<S433>/Count Down Reset Enabled' */
    /* Switch: '<S461>/Switch1' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S461>/Constant Value'
     *  Logic: '<S462>/AND'
     *  RelationalOperator: '<S461>/Greater  Than'
     *  Switch: '<S461>/Switch2'
     *  UnitDelay: '<S461>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_h2 &&
            rtb_TmpSignalConversionAtLeINVR_b_MtrC_e)
    {
        INVR_ac_DW.UnitDelay_DSTATE_bz = KeINVI_Cnt_MtrC_CtrlBoard_Temp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_bz) > 0)
        {
            /* UnitDelay: '<S461>/Unit Delay' incorporates:
             *  Constant: '<S461>/Constant Value1'
             *  Sum: '<S461>/Subtraction'
             *  Switch: '<S461>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_bz = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_bz) - 1));
        }
    }

    /* End of Switch: '<S461>/Switch1' */
    /* End of Outputs for SubSystem: '<S433>/EdgeRising1' */

    /* Switch: '<S433>/Switch' incorporates:
     *  Constant: '<S461>/Constant Value2'
     *  Merge: '<Root>/Merge_122'
     *  RelationalOperator: '<S461>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrC_CtrlBoard_Temp_read'
     *  UnitDelay: '<S433>/Unit Delay'
     *  UnitDelay: '<S461>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_bz) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_a =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrC_CtrlBoard_Temp_write_IRV();
    }

    /* End of Switch: '<S433>/Switch' */
    /* End of Outputs for SubSystem: '<S433>/Count Down Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S434>/EdgeRising1' */
    /* Logic: '<S464>/OR1' incorporates:
     *  UnitDelay: '<S464>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeINVR_b_Mtr_h2 = !INVR_ac_DW.UnitDelay_DSTATE_hc;

    /* Update for UnitDelay: '<S464>/Unit Delay' */
    INVR_ac_DW.UnitDelay_DSTATE_hc = rtb_TmpSignalConversionAtLeINVR_b_Mtr_mr;

    /* Outputs for Atomic SubSystem: '<S434>/Count Down Reset Enabled' */
    /* Switch: '<S463>/Switch1' incorporates:
     *  Constant: '<S447>/Calib'
     *  Constant: '<S463>/Constant Value'
     *  Logic: '<S464>/AND'
     *  RelationalOperator: '<S463>/Greater  Than'
     *  Switch: '<S463>/Switch2'
     *  UnitDelay: '<S463>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeINVR_b_Mtr_mr &&
            rtb_TmpSignalConversionAtLeINVR_b_Mtr_h2)
    {
        INVR_ac_DW.UnitDelay_DSTATE_i = KeINVI_Cnt_MtrC_RotrTemp;
    }
    else
    {
        if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_i) > 0)
        {
            /* UnitDelay: '<S463>/Unit Delay' incorporates:
             *  Constant: '<S463>/Constant Value1'
             *  Sum: '<S463>/Subtraction'
             *  Switch: '<S463>/Switch2'
             */
            INVR_ac_DW.UnitDelay_DSTATE_i = (uint16)((sint32)(((sint32)
                INVR_ac_DW.UnitDelay_DSTATE_i) - 1));
        }
    }

    /* End of Switch: '<S463>/Switch1' */
    /* End of Outputs for SubSystem: '<S434>/EdgeRising1' */

    /* Switch: '<S434>/Switch' incorporates:
     *  Constant: '<S463>/Constant Value2'
     *  Merge: '<Root>/Merge_137'
     *  RelationalOperator: '<S463>/Greater  Than1'
     *  SignalConversion generated from: '<S78>/LeINVR_T_MtrC_RotrTemp_read'
     *  UnitDelay: '<S434>/Unit Delay'
     *  UnitDelay: '<S463>/Unit Delay'
     */
    if (((sint32)INVR_ac_DW.UnitDelay_DSTATE_i) <= 0)
    {
        INVR_ac_DW.UnitDelay_DSTATE_k =
            Rte_IrvRead_INVR_FastTEF_VeINVR_T_MtrC_RotrTemp_write_IRV();
    }

    /* End of Switch: '<S434>/Switch' */
    /* End of Outputs for SubSystem: '<S434>/Count Down Reset Enabled' */
    /* End of Outputs for S-Function (fcgen): '<S78>/FcnCallGen' */

    /* Outport: '<Root>/VeINVR_I_MtrA_DC_Crnt' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_I_MtrA_DC_Crnt'
     *  UnitDelay: '<S306>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_I_MtrA_DC_Crnt_Value(INVR_ac_DW.UnitDelay_DSTATE_j);

    /* Outport: '<Root>/VeINVR_I_MtrB_DC_Crnt' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_I_MtrB_DC_Crnt'
     *  UnitDelay: '<S372>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_I_MtrB_DC_Crnt_Value(INVR_ac_DW.UnitDelay_DSTATE_ca);

    /* Outport: '<Root>/VeINVR_I_MtrC_DC_Crnt' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_I_MtrC_DC_Crnt'
     *  UnitDelay: '<S437>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_I_MtrC_DC_Crnt_Value(INVR_ac_DW.UnitDelay_DSTATE_p);

    /* S-Function (fcgen): '<S78>/FcnCallGen' incorporates:
     *  SubSystem: '<S78>/MotorA_TmoutDbnc'
     */
    /* Outport: '<Root>/VeINVR_P_BstCnvtrChrgPwrLmt' incorporates:
     *  Lookup_n-D: '<S323>/Vector'
     *  Merge: '<Root>/Merge_2'
     *  SignalConversion generated from: '<S78>/VeINVR_P_BstCnvtrChrgPwrLmt'
     *  SignalConversion generated from: '<S78>/LeINVR_P_BstCnvtrChrgPwrLmt_read'
     */
    (void)Rte_Write_VeINVR_P_BstCnvtrChrgPwrLmt_Value(look1_iflf_binlca_16a
        (Rte_IrvRead_INVR_FastTEF_VeINVR_P_BstCnvtrChrgPwrLmt_Init_IRV(), ((
        const float32 *)&(KxINVR_P_BstCnvtrChrgLosses[0])), ((const float32 *)
        &(KtINVR_P_BstCnvtrChrgLosses[0])), 7U));

    /* Outport: '<Root>/VeINVR_P_BstCnvtrChrgPwrLmt_ST' incorporates:
     *  Lookup_n-D: '<S325>/Vector'
     *  Merge: '<Root>/Merge_152'
     *  SignalConversion generated from: '<S78>/VeINVR_P_BstCnvtrChrgPwrLmt_ST'
     *  SignalConversion generated from: '<S78>/LeINVR_P_BstCnvtrChrgPwrLmt_ST_read'
     */
    (void)Rte_Write_VeINVR_P_BstCnvtrChrgPwrLmt_ST_Value(look1_iflf_binlca_16a
        (Rte_IrvRead_INVR_FastTEF_VeINVR_P_BstCnvtrChrgPwrLmt_ST_Init_IRV(), ((
        const float32 *)&(KxINVR_P_BstCnvtrChrgLosses_ST[0])), ((const float32 *)
        &(KtINVR_P_BstCnvtrChrgLosses_ST[0])), 7U));

    /* Outport: '<Root>/VeINVR_P_BstCnvtrDschrgPwrLmt' incorporates:
     *  Lookup_n-D: '<S322>/Vector'
     *  Merge: '<Root>/Merge_151'
     *  SignalConversion generated from: '<S78>/VeINVR_P_BstCnvtrDschrgPwrLmt'
     *  SignalConversion generated from: '<S78>/LeINVR_P_BstCnvtrDschrgPwrLmt_read'
     */
    (void)Rte_Write_VeINVR_P_BstCnvtrDschrgPwrLmt_Value(look1_iflf_binlca_16a
        (Rte_IrvRead_INVR_FastTEF_VeINVR_P_BstCnvtrDschrgPwrLmt_Init_IRV(), ((
        const float32 *)&(KxINVR_P_BstCnvtrDschrgLosses[0])), ((const float32 *)
        &(KtINVR_P_BstCnvtrDschrgLosses[0])), 7U));

    /* Outport: '<Root>/VeINVR_P_BstCnvtrDschrgPwrLmt_ST' incorporates:
     *  Lookup_n-D: '<S324>/Vector'
     *  Merge: '<Root>/Merge_4'
     *  SignalConversion generated from: '<S78>/VeINVR_P_BstCnvtrDschrgPwrLmt_ST'
     *  SignalConversion generated from: '<S78>/LeINVR_P_BstCnvtrDschrgPwrLmt_ST_read'
     */
    (void)Rte_Write_VeINVR_P_BstCnvtrDschrgPwrLmt_ST_Value(look1_iflf_binlca_16a
        (Rte_IrvRead_INVR_FastTEF_VeINVR_P_BstCnvtrDschrgPwrLmt_ST_Init_IRV(),
         ((const float32 *)&(KxINVR_P_BstCnvtrDschrgLosses_ST[0])), ((const
        float32 *)&(KtINVR_P_BstCnvtrDschrgLosses_ST[0])), 7U));

    /* End of Outputs for S-Function (fcgen): '<S78>/FcnCallGen' */

    /* Outport: '<Root>/VeINVR_T_MtrA_CapctrTemp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrA_CapctrTemp'
     *  UnitDelay: '<S303>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrA_CapctrTemp_Value
        (INVR_ac_DW.UnitDelay_DSTATE_lo);

    /* Outport: '<Root>/VeINVR_T_MtrA_ClntIn_Temp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrA_ClntIn_Temp'
     *  UnitDelay: '<S300>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrA_ClntIn_Temp_Value
        (INVR_ac_DW.UnitDelay_DSTATE_em);

    /* Outport: '<Root>/VeINVR_T_MtrA_ClntOut_Temp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrA_ClntOut_Temp'
     *  UnitDelay: '<S301>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrA_ClntOut_Temp_Value
        (INVR_ac_DW.UnitDelay_DSTATE_js);

    /* Outport: '<Root>/VeINVR_T_MtrA_CtrlBoard_Temp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrA_CtrlBoard_Temp'
     *  UnitDelay: '<S299>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrA_CtrlBoard_Temp_Value
        (INVR_ac_DW.UnitDelay_DSTATE_l);

    /* Outport: '<Root>/VeINVR_T_MtrA_InvrtrTemp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrA_InvrtrTemp'
     *  UnitDelay: '<S305>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrA_InvrtrTemp_Value
        (INVR_ac_DW.UnitDelay_DSTATE_kq);

    /* Outport: '<Root>/VeINVR_T_MtrA_RotrTemp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrA_RotrTemp'
     *  UnitDelay: '<S302>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrA_RotrTemp_Value(INVR_ac_DW.UnitDelay_DSTATE_nz);

    /* Outport: '<Root>/VeINVR_T_MtrA_Temp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrA_Temp'
     *  UnitDelay: '<S304>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrA_Temp_Value(INVR_ac_DW.UnitDelay_DSTATE_p2);

    /* Outport: '<Root>/VeINVR_T_MtrB_CapctrTemp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrB_CapctrTemp'
     *  UnitDelay: '<S371>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrB_CapctrTemp_Value
        (INVR_ac_DW.UnitDelay_DSTATE_kf);

    /* Outport: '<Root>/VeINVR_T_MtrB_ClntIn_Temp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrB_ClntIn_Temp'
     *  UnitDelay: '<S368>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrB_ClntIn_Temp_Value
        (INVR_ac_DW.UnitDelay_DSTATE_mj);

    /* Outport: '<Root>/VeINVR_T_MtrB_ClntOut_Temp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrB_ClntOut_Temp'
     *  UnitDelay: '<S369>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrB_ClntOut_Temp_Value
        (INVR_ac_DW.UnitDelay_DSTATE_n);

    /* Outport: '<Root>/VeINVR_T_MtrB_CtrlBoard_Temp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrB_CtrlBoard_Temp'
     *  UnitDelay: '<S366>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrB_CtrlBoard_Temp_Value
        (INVR_ac_DW.UnitDelay_DSTATE_m);

    /* Outport: '<Root>/VeINVR_T_MtrB_InvrtrTemp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrB_InvrtrTemp'
     *  UnitDelay: '<S367>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrB_InvrtrTemp_Value(INVR_ac_DW.UnitDelay_DSTATE_c);

    /* Outport: '<Root>/VeINVR_T_MtrB_RotrTemp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrB_RotrTemp'
     *  UnitDelay: '<S370>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrB_RotrTemp_Value(INVR_ac_DW.UnitDelay_DSTATE_pe);

    /* Outport: '<Root>/VeINVR_T_MtrB_Temp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrB_Temp'
     *  UnitDelay: '<S364>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrB_Temp_Value(INVR_ac_DW.UnitDelay_DSTATE_b);

    /* Outport: '<Root>/VeINVR_T_MtrC_CtrlBoard_Temp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrC_CtrlBoard_Temp'
     *  UnitDelay: '<S433>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrC_CtrlBoard_Temp_Value
        (INVR_ac_DW.UnitDelay_DSTATE_a);

    /* Outport: '<Root>/VeINVR_T_MtrC_InvrtrTemp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrC_InvrtrTemp'
     *  UnitDelay: '<S436>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrC_InvrtrTemp_Value(INVR_ac_DW.UnitDelay_DSTATE_d);

    /* Outport: '<Root>/VeINVR_T_MtrC_RotrTemp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrC_RotrTemp'
     *  UnitDelay: '<S434>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrC_RotrTemp_Value(INVR_ac_DW.UnitDelay_DSTATE_k);

    /* Outport: '<Root>/VeINVR_T_MtrC_Temp' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_T_MtrC_Temp'
     *  UnitDelay: '<S435>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_T_MtrC_Temp_Value(INVR_ac_DW.UnitDelay_DSTATE);

    /* Outport: '<Root>/VeINVR_U_MtrA_DC_Volt' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_U_MtrA_DC_Volt'
     *  UnitDelay: '<S293>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_U_MtrA_DC_Volt_Value(INVR_ac_DW.UnitDelay_DSTATE_n0);

    /* Outport: '<Root>/VeINVR_U_MtrB_DC_Volt' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_U_MtrB_DC_Volt'
     *  UnitDelay: '<S373>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_U_MtrB_DC_Volt_Value(INVR_ac_DW.UnitDelay_DSTATE_eh);

    /* Outport: '<Root>/VeINVR_U_MtrC_DC_Volt' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_U_MtrC_DC_Volt'
     *  UnitDelay: '<S427>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_U_MtrC_DC_Volt_Value(INVR_ac_DW.UnitDelay_DSTATE_e);

    /* Outport: '<Root>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq'
     *  UnitDelay: '<S298>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Value
        (INVR_ac_DW.UnitDelay_DSTATE_dh);

    /* Outport: '<Root>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq'
     *  UnitDelay: '<S363>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Value
        (INVR_ac_DW.UnitDelay_DSTATE_ob);

    /* S-Function (fcgen): '<S78>/FcnCallGen' incorporates:
     *  SubSystem: '<S78>/MotorB_TmoutDbnc'
     */
    /* Outport: '<Root>/VeINVR_b_MtrB_GMGOverTemp' incorporates:
     *  Constant: '<S358>/Calib'
     *  Logic: '<S291>/Logical4'
     *  Logic: '<S291>/Logical6'
     *  SignalConversion generated from: '<S138>/VeINVR_b_MtrB_GMGOverTemp'
     *  SignalConversion generated from: '<S78>/VeINVR_b_MtrB_GMGOverTemp'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrB_GMGOverTemp_out_P_167'
     */
    (void)Rte_Write_VeINVR_b_MtrB_GMGOverTemp_Value(((VeINVR_b_GMGOverTempOvrd) &&
        (HeINVI_b_GMGOverTemp_Enbl)) ||
        (Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrB_GMGOverTemp_IRV()));

    /* End of Outputs for S-Function (fcgen): '<S78>/FcnCallGen' */

    /* Outport: '<Root>/VeINVR_b_MtrCFlt_3PS_Pos' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_b_MtrCFlt_3PS_Pos'
     *  UnitDelay: '<S432>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_b_MtrCFlt_3PS_Pos_Value
        (INVR_ac_DW.UnitDelay_DSTATE_bh);

    /* Outport: '<Root>/VeINVR_b_MtrCFlt_HV_CntctrOpnRq' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_b_MtrCFlt_HV_CntctrOpnRq'
     *  UnitDelay: '<S431>/Unit Delay'
     */
    (void)Rte_Write_VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Value
        (INVR_ac_DW.UnitDelay_DSTATE_g);

    /* S-Function (fcgen): '<S78>/FcnCallGen' incorporates:
     *  SubSystem: '<S78>/MotorA_TmoutDbnc'
     */
    /* Outport: '<Root>/VeINVR_b_P1f_Dgrd_AltMd' incorporates:
     *  Logic: '<S290>/Logical1'
     *  SignalConversion generated from: '<S123>/VeINVR_b_MtrA_BrushwearFA'
     *  SignalConversion generated from: '<S124>/VeINVR_b_MtrA_EstTorqueFA'
     *  SignalConversion generated from: '<S125>/VeINVR_b_MtrA_ExcCrntFA'
     *  SignalConversion generated from: '<S126>/VeINVR_b_MtrA_ExcOCFA'
     *  SignalConversion generated from: '<S127>/VeINVR_b_MtrA_InvrtBrdgFA'
     *  SignalConversion generated from: '<S128>/VeINVR_b_MtrA_InvrtModeFA'
     *  SignalConversion generated from: '<S129>/VeINVR_b_MtrA_NTC_FA'
     *  SignalConversion generated from: '<S130>/VeINVR_b_MtrA_OverVoltFA'
     *  SignalConversion generated from: '<S131>/VeINVR_b_MtrA_SpdRawFA'
     *  SignalConversion generated from: '<S132>/VeINVR_b_MtrA_TorqAchievedFA'
     *  SignalConversion generated from: '<S133>/VeINVR_b_MtrA_UnderVoltFA'
     *  SignalConversion generated from: '<S78>/VeINVR_b_P1f_Dgrd_AltMd'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrA_BrushwearFA_out_P_122'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrA_EstTorqueFA_out_P_123'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrA_ExcCrntFA_out_P_124'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrA_ExcOCFA_out_P_125'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrA_InvrtBrdgFA_out_P_126'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrA_InvrtModeFA_out_P_127'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrA_NTC_FA_out_P_128'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrA_OverVoltFA_out_P_129'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrA_SpdRawFA_out_P_130'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrA_TorqAchievedFA_out_P_131'
     *  SignalConversion generated from: '<S78>/LeINVR_b_MtrA_UnderVoltFA_out_P_132'
     */
    (void)Rte_Write_VeINVR_b_P1f_Dgrd_AltMd_Value
        (((((((((((Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_SpdRawFA_IRV()) ||
                  (Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_TorqAchievedFA_IRV()))
                 || (Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_ExcCrntFA_IRV())) ||
                (Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_NTC_FA_IRV())) ||
               (Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_BrushwearFA_IRV())) ||
              (Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_ExcOCFA_IRV())) ||
             (Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_OverVoltFA_IRV())) ||
            (Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_UnderVoltFA_IRV())) ||
           (Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_InvrtBrdgFA_IRV())) ||
          (Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_InvrtModeFA_IRV())) ||
         (Rte_IrvRead_INVR_FastTEF_VeINVR_b_MtrA_EstTorqueFA_IRV()));

    /* End of Outputs for S-Function (fcgen): '<S78>/FcnCallGen' */

    /* Outport: '<Root>/VeINVR_e_InvrtrA_IsolStat' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_e_InvrtrA_IsolStat'
     *  Switch: '<S297>/Switch'
     */
    (void)Rte_Write_VeINVR_e_InvrtrA_IsolStat_Value
        (INVR_ac_DW.UnitDelay_DSTATE_bl);

    /* Outport: '<Root>/VeINVR_e_InvrtrB_IsolStat' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_e_InvrtrB_IsolStat'
     *  Switch: '<S362>/Switch'
     */
    (void)Rte_Write_VeINVR_e_InvrtrB_IsolStat_Value
        (INVR_ac_DW.UnitDelay_DSTATE_n1);

    /* Outport: '<Root>/VeINVR_e_MCPA_SPT_State' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_e_MCPA_SPT_State'
     *  Switch: '<S295>/Switch'
     */
    (void)Rte_Write_VeINVR_e_MCPA_SPT_State_Value(INVR_ac_DW.UnitDelay_DSTATE_eb);

    /* Outport: '<Root>/VeINVR_e_MCPB_SPT_State' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_e_MCPB_SPT_State'
     *  Switch: '<S361>/Switch'
     */
    (void)Rte_Write_VeINVR_e_MCPB_SPT_State_Value(INVR_ac_DW.UnitDelay_DSTATE_id);

    /* Outport: '<Root>/VeINVR_e_MCPC_SPT_State' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_e_MCPC_SPT_State'
     *  Switch: '<S429>/Switch'
     */
    (void)Rte_Write_VeINVR_e_MCPC_SPT_State_Value(INVR_ac_DW.UnitDelay_DSTATE_l5);

    /* Outport: '<Root>/VeINVR_e_MtrA_6SOEnbl' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_e_MtrA_6SOEnbl'
     *  Switch: '<S294>/Switch'
     */
    (void)Rte_Write_VeINVR_e_MtrA_6SOEnbl_Value(INVR_ac_DW.UnitDelay_DSTATE_gdz);

    /* Outport: '<Root>/VeINVR_e_MtrA_InvrtrSt' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_e_MtrA_InvrtrSt'
     *  Switch: '<S296>/Switch'
     */
    (void)Rte_Write_VeINVR_e_MtrA_InvrtrSt_Value(INVR_ac_DW.UnitDelay_DSTATE_l5p);

    /* Outport: '<Root>/VeINVR_e_MtrB_6SOEnbl' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_e_MtrB_6SOEnbl'
     *  Switch: '<S374>/Switch'
     */
    (void)Rte_Write_VeINVR_e_MtrB_6SOEnbl_Value(INVR_ac_DW.UnitDelay_DSTATE_o3);

    /* Outport: '<Root>/VeINVR_e_MtrB_InvrtrSt' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_e_MtrB_InvrtrSt'
     *  Switch: '<S360>/Switch'
     */
    (void)Rte_Write_VeINVR_e_MtrB_InvrtrSt_Value(INVR_ac_DW.UnitDelay_DSTATE_oc);

    /* Outport: '<Root>/VeINVR_e_MtrC_6SOEnbl' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_e_MtrC_6SOEnbl'
     *  Switch: '<S428>/Switch'
     */
    (void)Rte_Write_VeINVR_e_MtrC_6SOEnbl_Value(INVR_ac_DW.UnitDelay_DSTATE_nhj);

    /* Outport: '<Root>/VeINVR_e_MtrC_InvrtrSt' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_e_MtrC_InvrtrSt'
     *  Switch: '<S430>/Switch'
     */
    (void)Rte_Write_VeINVR_e_MtrC_InvrtrSt_Value(INVR_ac_DW.UnitDelay_DSTATE_i1);

    /* S-Function (fcgen): '<S78>/FcnCallGen' incorporates:
     *  SubSystem: '<S78>/MotorB_TmoutDbnc'
     */
    /* Switch: '<S291>/Switch' incorporates:
     *  Constant: '<S357>/Constant'
     *  Constant: '<S359>/Calib'
     *  Logic: '<S291>/Logical2'
     *  Logic: '<S291>/Logical3'
     *  Switch: '<S365>/Switch'
     *  UnitDelay: '<S365>/Unit Delay'
     */
    if (((rtb_TmpSignalConversionAtLeINVR_b_P2Mo_j ||
            rtb_TmpSignalConversionAtLeINVR_b_MCPB_S) ||
            rtb_TmpSignalConversionAtLeINVR_b_MtrB_6) &&
            (HeINVI_b_P2ModeSts_Enbl))
    {
        rtb_LogicalOperator_0 = CeINVR_e_P2ModeStatus_Idle;
    }
    else
    {
        rtb_LogicalOperator_0 = INVR_ac_DW.UnitDelay_DSTATE_o0;
    }

    /* Outport: '<Root>/VeINVR_e_P2ModeSts' incorporates:
     *  SignalConversion generated from: '<S78>/VeINVR_e_P2ModeSts'
     *  Switch: '<S291>/Switch'
     */
    (void)Rte_Write_VeINVR_e_P2ModeSts_Value(rtb_LogicalOperator_0);

    /* End of Outputs for S-Function (fcgen): '<S78>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_I_MtrA_DC_Crnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_I_MtrA_DC_Crnt' */
    /* Outport: '<Root>/VeINVR_b_MtrA_DC_CrntFA' incorporates:
     *  Chart: '<S1>/FsftINVR_I_MtrA_DC_CrntChrt'
     *  SignalConversion generated from: '<S1>/VeINVR_b_MtrA_DC_CrntFA'
     */
    /* Gateway: FsftINVR_I_MtrA_DC_Crnt/FsftINVR_I_MtrA_DC_CrntChrt */
    /* During: FsftINVR_I_MtrA_DC_Crnt/FsftINVR_I_MtrA_DC_CrntChrt */
    /* Entry Internal: FsftINVR_I_MtrA_DC_Crnt/FsftINVR_I_MtrA_DC_CrntChrt */
    /* Transition: '<S213>:2' */
    (void)Rte_Write_VeINVR_b_MtrA_DC_CrntFA_Value(true);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  Chart: '<S1>/FsftINVR_I_MtrA_DC_CrntChrt'
     *  SignalConversion generated from: '<S1>/VeINVR_I_MtrA_DC_Crnt_write'
     */
    Rte_IrvWrite_FsftINVR_I_MtrA_DC_Crnt_VeINVR_I_MtrA_DC_Crnt_write_IRV
        (KeINVR_I_MtrA_DC_CrntDflt);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  Chart: '<S1>/FsftINVR_I_MtrA_DC_CrntChrt'
     *  SignalConversion generated from: '<S1>/VeINVR_b_MtrA_DC_Crnt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_I_MtrA_DC_Crnt_VeINVR_b_MtrA_DC_Crnt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_I_MtrA_DC_Crnt' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_I_MtrB_DC_Crnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_I_MtrB_DC_Crnt' */
    /* Outport: '<Root>/VeINVR_b_MtrB_DC_CrntFA' incorporates:
     *  Chart: '<S2>/FsftINVR_I_MtrB_DC_CrntChrt'
     *  SignalConversion generated from: '<S2>/VeINVR_b_MtrB_DC_CrntFA'
     */
    /* Gateway: FsftINVR_I_MtrB_DC_Crnt/FsftINVR_I_MtrB_DC_CrntChrt */
    /* During: FsftINVR_I_MtrB_DC_Crnt/FsftINVR_I_MtrB_DC_CrntChrt */
    /* Entry Internal: FsftINVR_I_MtrB_DC_Crnt/FsftINVR_I_MtrB_DC_CrntChrt */
    /* Transition: '<S214>:2' */
    (void)Rte_Write_VeINVR_b_MtrB_DC_CrntFA_Value(true);

    /* Merge: '<Root>/Merge_89' incorporates:
     *  Chart: '<S2>/FsftINVR_I_MtrB_DC_CrntChrt'
     *  SignalConversion generated from: '<S2>/VeINVR_I_MtrB_DC_Crnt_write'
     */
    Rte_IrvWrite_FsftINVR_I_MtrB_DC_Crnt_VeINVR_I_MtrB_DC_Crnt_write_IRV
        (KeINVR_I_MtrB_DC_CrntDflt);

    /* Merge: '<Root>/Merge_87' incorporates:
     *  Chart: '<S2>/FsftINVR_I_MtrB_DC_CrntChrt'
     *  SignalConversion generated from: '<S2>/VeINVR_b_MtrB_DC_Crnt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_I_MtrB_DC_Crnt_VeINVR_b_MtrB_DC_Crnt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_I_MtrB_DC_Crnt' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_I_MtrC_DC_Crnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_I_MtrC_DC_Crnt' */
    /* Outport: '<Root>/VeINVR_b_MtrC_DC_CrntFA' incorporates:
     *  Chart: '<S3>/FsftINVR_I_MtrC_DC_CrntChrt'
     *  SignalConversion generated from: '<S3>/VeINVR_b_MtrC_DC_CrntFA'
     */
    /* Gateway: FsftINVR_I_MtrC_DC_Crnt/FsftINVR_I_MtrC_DC_CrntChrt */
    /* During: FsftINVR_I_MtrC_DC_Crnt/FsftINVR_I_MtrC_DC_CrntChrt */
    /* Entry Internal: FsftINVR_I_MtrC_DC_Crnt/FsftINVR_I_MtrC_DC_CrntChrt */
    /* Transition: '<S215>:2' */
    (void)Rte_Write_VeINVR_b_MtrC_DC_CrntFA_Value(true);

    /* Merge: '<Root>/Merge_125' incorporates:
     *  Chart: '<S3>/FsftINVR_I_MtrC_DC_CrntChrt'
     *  SignalConversion generated from: '<S3>/VeINVR_I_MtrC_DC_Crnt_write'
     */
    Rte_IrvWrite_FsftINVR_I_MtrC_DC_Crnt_VeINVR_I_MtrC_DC_Crnt_write_IRV
        (KeINVR_I_MtrC_DC_CrntDflt);

    /* Merge: '<Root>/Merge_123' incorporates:
     *  Chart: '<S3>/FsftINVR_I_MtrC_DC_CrntChrt'
     *  SignalConversion generated from: '<S3>/VeINVR_b_MtrC_DC_Crnt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_I_MtrC_DC_Crnt_VeINVR_b_MtrC_DC_Crnt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_I_MtrC_DC_Crnt' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_P_BstCnvtrChrgPwrLmt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_P_BstCnvtrChrgPwrLmt' */
    /* Outport: '<Root>/VeINVR_b_BstCnvtrChrgPwrLmtFA' incorporates:
     *  Chart: '<S4>/FsftINVR_P_BstCnvtrChrgPwrLmtChrt'
     *  SignalConversion generated from: '<S4>/VeINVR_b_BstCnvtrChrgPwrLmtFA'
     */
    /* Gateway: FsftINVR_P_BstCnvtrChrgPwrLmt/FsftINVR_P_BstCnvtrChrgPwrLmtChrt */
    /* During: FsftINVR_P_BstCnvtrChrgPwrLmt/FsftINVR_P_BstCnvtrChrgPwrLmtChrt */
    /* Entry Internal: FsftINVR_P_BstCnvtrChrgPwrLmt/FsftINVR_P_BstCnvtrChrgPwrLmtChrt */
    /* Transition: '<S216>:2' */
    (void)Rte_Write_VeINVR_b_BstCnvtrChrgPwrLmtFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_P_BstCnvtrChrgPwrLmt' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_P_BstCnvtrChrgPwrLmt_ST(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_P_BstCnvtrChrgPwrLmt_ST' */
    /* Outport: '<Root>/VeINVR_b_BstCnvtrChrgPwrLmt_ST_FA' incorporates:
     *  Chart: '<S5>/FsftINVR_P_BstCnvtrChrgPwrLmt_STChrt'
     *  SignalConversion generated from: '<S5>/VeINVR_b_BstCnvtrChrgPwrLmt_ST_FA'
     */
    /* Gateway: FsftINVR_P_BstCnvtrChrgPwrLmt_ST/FsftINVR_P_BstCnvtrChrgPwrLmt_STChrt */
    /* During: FsftINVR_P_BstCnvtrChrgPwrLmt_ST/FsftINVR_P_BstCnvtrChrgPwrLmt_STChrt */
    /* Entry Internal: FsftINVR_P_BstCnvtrChrgPwrLmt_ST/FsftINVR_P_BstCnvtrChrgPwrLmt_STChrt */
    /* Transition: '<S217>:2' */
    (void)Rte_Write_VeINVR_b_BstCnvtrChrgPwrLmt_ST_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_P_BstCnvtrChrgPwrLmt_ST' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_P_BstCnvtrDschrgPwrLmt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_P_BstCnvtrDschrgPwrLmt' */
    /* Outport: '<Root>/VeINVR_b_BstCnvtrDschrgPwrLmtFA' incorporates:
     *  Chart: '<S6>/FsftINVR_P_BstCnvtrDschrgPwrLmtChrt'
     *  SignalConversion generated from: '<S6>/VeINVR_b_BstCnvtrDschrgPwrLmtFA'
     */
    /* Gateway: FsftINVR_P_BstCnvtrDschrgPwrLmt/FsftINVR_P_BstCnvtrDschrgPwrLmtChrt */
    /* During: FsftINVR_P_BstCnvtrDschrgPwrLmt/FsftINVR_P_BstCnvtrDschrgPwrLmtChrt */
    /* Entry Internal: FsftINVR_P_BstCnvtrDschrgPwrLmt/FsftINVR_P_BstCnvtrDschrgPwrLmtChrt */
    /* Transition: '<S218>:2' */
    (void)Rte_Write_VeINVR_b_BstCnvtrDschrgPwrLmtFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_P_BstCnvtrDschrgPwrLmt' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_P_BstCnvtrDschrgPwrLmt_ST(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_P_BstCnvtrDschrgPwrLmt_ST' */
    /* Outport: '<Root>/VeINVR_b_BstCnvtrDschrgPwrLmt_ST_FA' incorporates:
     *  Chart: '<S7>/FsftINVR_P_BstCnvtrDschrgPwrLmt_STChrt'
     *  SignalConversion generated from: '<S7>/VeINVR_b_BstCnvtrDschrgPwrLmt_ST_FA'
     */
    /* Gateway: FsftINVR_P_BstCnvtrDschrgPwrLmt_ST/FsftINVR_P_BstCnvtrDschrgPwrLmt_STChrt */
    /* During: FsftINVR_P_BstCnvtrDschrgPwrLmt_ST/FsftINVR_P_BstCnvtrDschrgPwrLmt_STChrt */
    /* Entry Internal: FsftINVR_P_BstCnvtrDschrgPwrLmt_ST/FsftINVR_P_BstCnvtrDschrgPwrLmt_STChrt */
    /* Transition: '<S219>:2' */
    (void)Rte_Write_VeINVR_b_BstCnvtrDschrgPwrLmt_ST_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_P_BstCnvtrDschrgPwrLmt_ST' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_BstCnvtrLwrIGBT_TmpFltd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_BstCnvtrLwrIGBT_TmpFltd' */
    /* Outport: '<Root>/VeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA' incorporates:
     *  Chart: '<S8>/FsftINVR_T_BstCnvtrLwrIGBT_TmpFltdChrt'
     *  SignalConversion generated from: '<S8>/VeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA'
     */
    /* Gateway: FsftINVR_T_BstCnvtrLwrIGBT_TmpFltd/FsftINVR_T_BstCnvtrLwrIGBT_TmpFltdChrt */
    /* During: FsftINVR_T_BstCnvtrLwrIGBT_TmpFltd/FsftINVR_T_BstCnvtrLwrIGBT_TmpFltdChrt */
    /* Entry Internal: FsftINVR_T_BstCnvtrLwrIGBT_TmpFltd/FsftINVR_T_BstCnvtrLwrIGBT_TmpFltdChrt */
    /* Transition: '<S220>:2' */
    (void)Rte_Write_VeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_BstCnvtrLwrIGBT_TmpFltd' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_BstCnvtrReactorTmp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_BstCnvtrReactorTmp' */
    /* Outport: '<Root>/VeINVR_b_BstCnvtrReactorTmpFA' incorporates:
     *  Chart: '<S9>/FsftINVR_T_BstCnvtrReactorTmpChrt'
     *  SignalConversion generated from: '<S9>/VeINVR_b_BstCnvtrReactorTmpFA'
     */
    /* Gateway: FsftINVR_T_BstCnvtrReactorTmp/FsftINVR_T_BstCnvtrReactorTmpChrt */
    /* During: FsftINVR_T_BstCnvtrReactorTmp/FsftINVR_T_BstCnvtrReactorTmpChrt */
    /* Entry Internal: FsftINVR_T_BstCnvtrReactorTmp/FsftINVR_T_BstCnvtrReactorTmpChrt */
    /* Transition: '<S221>:2' */
    (void)Rte_Write_VeINVR_b_BstCnvtrReactorTmpFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_BstCnvtrReactorTmp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_BstCnvtrUpprIGBT_TmpFltd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_BstCnvtrUpprIGBT_TmpFltd' */
    /* Outport: '<Root>/VeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA' incorporates:
     *  Chart: '<S10>/FsftINVR_T_BstCnvtrUpprIGBT_TmpFltdChrt'
     *  SignalConversion generated from: '<S10>/VeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA'
     */
    /* Gateway: FsftINVR_T_BstCnvtrUpprIGBT_TmpFltd/FsftINVR_T_BstCnvtrUpprIGBT_TmpFltdChrt */
    /* During: FsftINVR_T_BstCnvtrUpprIGBT_TmpFltd/FsftINVR_T_BstCnvtrUpprIGBT_TmpFltdChrt */
    /* Entry Internal: FsftINVR_T_BstCnvtrUpprIGBT_TmpFltd/FsftINVR_T_BstCnvtrUpprIGBT_TmpFltdChrt */
    /* Transition: '<S222>:2' */
    (void)Rte_Write_VeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_BstCnvtrUpprIGBT_TmpFltd' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_GPIMACBusBarTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_GPIMACBusBarTemp' */
    /* Outport: '<Root>/VeINVR_b_GPIMACBusBarTempFA' incorporates:
     *  Chart: '<S11>/FsftINVR_T_GPIMACBusBarTempChrt'
     *  SignalConversion generated from: '<S11>/VeINVR_b_GPIMACBusBarTempFA'
     */
    /* Gateway: FsftINVR_T_GPIMACBusBarTemp/FsftINVR_T_GPIMACBusBarTempChrt */
    /* During: FsftINVR_T_GPIMACBusBarTemp/FsftINVR_T_GPIMACBusBarTempChrt */
    /* Entry Internal: FsftINVR_T_GPIMACBusBarTemp/FsftINVR_T_GPIMACBusBarTempChrt */
    /* Transition: '<S223>:2' */
    (void)Rte_Write_VeINVR_b_GPIMACBusBarTempFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_GPIMACBusBarTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_GPIMDCBusBarTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_GPIMDCBusBarTemp' */
    /* Outport: '<Root>/VeINVR_b_GPIMDCBusBarTempFA' incorporates:
     *  Chart: '<S12>/FsftINVR_T_GPIMDCBusBarTempChrt'
     *  SignalConversion generated from: '<S12>/VeINVR_b_GPIMDCBusBarTempFA'
     */
    /* Gateway: FsftINVR_T_GPIMDCBusBarTemp/FsftINVR_T_GPIMDCBusBarTempChrt */
    /* During: FsftINVR_T_GPIMDCBusBarTemp/FsftINVR_T_GPIMDCBusBarTempChrt */
    /* Entry Internal: FsftINVR_T_GPIMDCBusBarTemp/FsftINVR_T_GPIMDCBusBarTempChrt */
    /* Transition: '<S224>:2' */
    (void)Rte_Write_VeINVR_b_GPIMDCBusBarTempFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_GPIMDCBusBarTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrA_CapctrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrA_CapctrTemp' */
    /* Outport: '<Root>/VeINVR_b_MtrA_CapctrTemp_FA' incorporates:
     *  Chart: '<S13>/FsftINVR_T_MtrA_CapctrTempChrt'
     *  SignalConversion generated from: '<S13>/VeINVR_b_MtrA_CapctrTempFA'
     */
    /* Gateway: FsftINVR_T_MtrA_CapctrTemp/FsftINVR_T_MtrA_CapctrTempChrt */
    /* During: FsftINVR_T_MtrA_CapctrTemp/FsftINVR_T_MtrA_CapctrTempChrt */
    /* Entry Internal: FsftINVR_T_MtrA_CapctrTemp/FsftINVR_T_MtrA_CapctrTempChrt */
    /* Transition: '<S225>:2' */
    (void)Rte_Write_VeINVR_b_MtrA_CapctrTemp_FA_Value(true);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  Chart: '<S13>/FsftINVR_T_MtrA_CapctrTempChrt'
     *  SignalConversion generated from: '<S13>/VeINVR_T_MtrA_CapctrTemp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_CapctrTemp_VeINVR_T_MtrA_CapctrTemp_write_IRV
        (KeINVR_T_MtrA_CapctrTempDflt);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  Chart: '<S13>/FsftINVR_T_MtrA_CapctrTempChrt'
     *  SignalConversion generated from: '<S13>/VeINVR_b_MtrA_CapctrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_CapctrTemp_VeINVR_b_MtrA_CapctrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrA_CapctrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrA_ClntIn_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrA_ClntIn_Temp' */
    /* Outport: '<Root>/VeINVR_b_MtrA_ClntIn_Temp_FA' incorporates:
     *  Chart: '<S14>/FsftINVR_T_MtrA_ClntIn_TempChrt'
     *  SignalConversion generated from: '<S14>/VeINVR_b_MtrA_ClntIn_TempFA'
     */
    /* Gateway: FsftINVR_T_MtrA_ClntIn_Temp/FsftINVR_T_MtrA_ClntIn_TempChrt */
    /* During: FsftINVR_T_MtrA_ClntIn_Temp/FsftINVR_T_MtrA_ClntIn_TempChrt */
    /* Entry Internal: FsftINVR_T_MtrA_ClntIn_Temp/FsftINVR_T_MtrA_ClntIn_TempChrt */
    /* Transition: '<S226>:2' */
    (void)Rte_Write_VeINVR_b_MtrA_ClntIn_Temp_FA_Value(true);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  Chart: '<S14>/FsftINVR_T_MtrA_ClntIn_TempChrt'
     *  SignalConversion generated from: '<S14>/VeINVR_T_MtrA_ClntIn_Temp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_ClntIn_Temp_VeINVR_T_MtrA_ClntIn_Temp_write_IRV
        (KeINVR_T_MtrA_ClntIn_TempDflt);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S14>/FsftINVR_T_MtrA_ClntIn_TempChrt'
     *  SignalConversion generated from: '<S14>/VeINVR_b_MtrA_ClntIn_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_ClntIn_Temp_VeINVR_b_MtrA_ClntIn_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrA_ClntIn_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrA_ClntOut_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrA_ClntOut_Temp' */
    /* Outport: '<Root>/VeINVR_b_MtrA_ClntOut_Temp_FA' incorporates:
     *  Chart: '<S15>/FsftINVR_T_MtrA_ClntOut_TempChrt'
     *  SignalConversion generated from: '<S15>/VeINVR_b_MtrA_ClntOut_TempFA'
     */
    /* Gateway: FsftINVR_T_MtrA_ClntOut_Temp/FsftINVR_T_MtrA_ClntOut_TempChrt */
    /* During: FsftINVR_T_MtrA_ClntOut_Temp/FsftINVR_T_MtrA_ClntOut_TempChrt */
    /* Entry Internal: FsftINVR_T_MtrA_ClntOut_Temp/FsftINVR_T_MtrA_ClntOut_TempChrt */
    /* Transition: '<S227>:2' */
    (void)Rte_Write_VeINVR_b_MtrA_ClntOut_Temp_FA_Value(true);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  Chart: '<S15>/FsftINVR_T_MtrA_ClntOut_TempChrt'
     *  SignalConversion generated from: '<S15>/VeINVR_T_MtrA_ClntOut_Temp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_ClntOut_Temp_VeINVR_T_MtrA_ClntOut_Temp_write_IRV
        (KeINVR_T_MtrA_ClntOut_TempDflt);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  Chart: '<S15>/FsftINVR_T_MtrA_ClntOut_TempChrt'
     *  SignalConversion generated from: '<S15>/VeINVR_b_MtrA_ClntOut_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_ClntOut_Temp_VeINVR_b_MtrA_ClntOut_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrA_ClntOut_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrA_CtrlBoard_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrA_CtrlBoard_Temp' */
    /* Outport: '<Root>/VeINVR_b_MtrA_CtrlBoard_Temp_FA' incorporates:
     *  Chart: '<S16>/FsftINVR_T_MtrA_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S16>/VeINVR_b_MtrA_CtrlBoard_TempFA'
     */
    /* Gateway: FsftINVR_T_MtrA_CtrlBoard_Temp/FsftINVR_T_MtrA_CtrlBoard_TempChrt */
    /* During: FsftINVR_T_MtrA_CtrlBoard_Temp/FsftINVR_T_MtrA_CtrlBoard_TempChrt */
    /* Entry Internal: FsftINVR_T_MtrA_CtrlBoard_Temp/FsftINVR_T_MtrA_CtrlBoard_TempChrt */
    /* Transition: '<S228>:2' */
    (void)Rte_Write_VeINVR_b_MtrA_CtrlBoard_Temp_FA_Value(true);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  Chart: '<S16>/FsftINVR_T_MtrA_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S16>/VeINVR_T_MtrA_CtrlBoard_Temp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_CtrlBoard_Temp_VeINVR_T_MtrA_CtrlBoard_Temp_write_IRV
        (KeINVR_T_MtrA_CtrlBoard_TempDflt);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  Chart: '<S16>/FsftINVR_T_MtrA_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S16>/VeINVR_b_MtrA_CtrlBoard_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_CtrlBoard_Temp_VeINVR_b_MtrA_CtrlBoard_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrA_CtrlBoard_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrA_InvrtrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrA_InvrtrTemp' */
    /* Outport: '<Root>/VeINVR_b_MtrA_InvrtrTempFA' incorporates:
     *  Chart: '<S17>/FsftINVR_T_MtrA_InvrtrTempChrt'
     *  SignalConversion generated from: '<S17>/VeINVR_b_MtrA_InvrtrTempFA'
     */
    /* Gateway: FsftINVR_T_MtrA_InvrtrTemp/FsftINVR_T_MtrA_InvrtrTempChrt */
    /* During: FsftINVR_T_MtrA_InvrtrTemp/FsftINVR_T_MtrA_InvrtrTempChrt */
    /* Entry Internal: FsftINVR_T_MtrA_InvrtrTemp/FsftINVR_T_MtrA_InvrtrTempChrt */
    /* Transition: '<S229>:2' */
    (void)Rte_Write_VeINVR_b_MtrA_InvrtrTempFA_Value(true);

    /* Merge: '<Root>/Merge_50' incorporates:
     *  Chart: '<S17>/FsftINVR_T_MtrA_InvrtrTempChrt'
     *  SignalConversion generated from: '<S17>/VeINVR_T_MtrA_InvrtrTemp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_InvrtrTemp_VeINVR_T_MtrA_InvrtrTemp_write_IRV
        (KeINVR_T_MtrA_InvrtrTempDflt);

    /* Merge: '<Root>/Merge_48' incorporates:
     *  Chart: '<S17>/FsftINVR_T_MtrA_InvrtrTempChrt'
     *  SignalConversion generated from: '<S17>/VeINVR_b_MtrA_InvrtrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_InvrtrTemp_VeINVR_b_MtrA_InvrtrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrA_InvrtrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrA_RotrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrA_RotrTemp' */
    /* Outport: '<Root>/VeINVR_b_MtrA_RotrTemp_FA' incorporates:
     *  Chart: '<S18>/FsftINVR_T_MtrA_RotrTempChrt'
     *  SignalConversion generated from: '<S18>/VeINVR_b_MtrA_RotrTempFA'
     */
    /* Gateway: FsftINVR_T_MtrA_RotrTemp/FsftINVR_T_MtrA_RotrTempChrt */
    /* During: FsftINVR_T_MtrA_RotrTemp/FsftINVR_T_MtrA_RotrTempChrt */
    /* Entry Internal: FsftINVR_T_MtrA_RotrTemp/FsftINVR_T_MtrA_RotrTempChrt */
    /* Transition: '<S230>:2' */
    (void)Rte_Write_VeINVR_b_MtrA_RotrTemp_FA_Value(true);

    /* Merge: '<Root>/Merge_53' incorporates:
     *  Chart: '<S18>/FsftINVR_T_MtrA_RotrTempChrt'
     *  SignalConversion generated from: '<S18>/VeINVR_T_MtrA_RotrTemp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_RotrTemp_VeINVR_T_MtrA_RotrTemp_write_IRV
        (KeINVR_T_MtrA_RotrTempDflt);

    /* Merge: '<Root>/Merge_51' incorporates:
     *  Chart: '<S18>/FsftINVR_T_MtrA_RotrTempChrt'
     *  SignalConversion generated from: '<S18>/VeINVR_b_MtrA_RotrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_RotrTemp_VeINVR_b_MtrA_RotrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrA_RotrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrA_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrA_Temp' */
    /* Outport: '<Root>/VeINVR_b_MtrA_TempFA' incorporates:
     *  Chart: '<S19>/FsftINVR_T_MtrA_TempChrt'
     *  SignalConversion generated from: '<S19>/VeINVR_b_MtrA_TempFA'
     */
    /* Gateway: FsftINVR_T_MtrA_Temp/FsftINVR_T_MtrA_TempChrt */
    /* During: FsftINVR_T_MtrA_Temp/FsftINVR_T_MtrA_TempChrt */
    /* Entry Internal: FsftINVR_T_MtrA_Temp/FsftINVR_T_MtrA_TempChrt */
    /* Transition: '<S231>:2' */
    (void)Rte_Write_VeINVR_b_MtrA_TempFA_Value(true);

    /* Merge: '<Root>/Merge_56' incorporates:
     *  Chart: '<S19>/FsftINVR_T_MtrA_TempChrt'
     *  SignalConversion generated from: '<S19>/VeINVR_T_MtrA_Temp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_Temp_VeINVR_T_MtrA_Temp_write_IRV
        (KeINVR_T_MtrA_TempDflt);

    /* Merge: '<Root>/Merge_54' incorporates:
     *  Chart: '<S19>/FsftINVR_T_MtrA_TempChrt'
     *  SignalConversion generated from: '<S19>/VeINVR_b_MtrA_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrA_Temp_VeINVR_b_MtrA_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrA_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrBBusBarTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrBBusBarTemp' */
    /* Outport: '<Root>/VeINVR_b_MtrBBusBarTempFA' incorporates:
     *  Chart: '<S20>/FsftINVR_T_MtrBBusBarTempChrt'
     *  SignalConversion generated from: '<S20>/VeINVR_b_MtrBBusBarTempFA'
     */
    /* Gateway: FsftINVR_T_MtrBBusBarTemp/FsftINVR_T_MtrBBusBarTempChrt */
    /* During: FsftINVR_T_MtrBBusBarTemp/FsftINVR_T_MtrBBusBarTempChrt */
    /* Entry Internal: FsftINVR_T_MtrBBusBarTemp/FsftINVR_T_MtrBBusBarTempChrt */
    /* Transition: '<S232>:2' */
    (void)Rte_Write_VeINVR_b_MtrBBusBarTempFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrBBusBarTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrB_CapctrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrB_CapctrTemp' */
    /* Outport: '<Root>/VeINVR_b_MtrB_CapctrTemp_FA' incorporates:
     *  Chart: '<S21>/FsftINVR_T_MtrB_CapctrTempChrt'
     *  SignalConversion generated from: '<S21>/VeINVR_b_MtrB_CapctrTempFA'
     */
    /* Gateway: FsftINVR_T_MtrB_CapctrTemp/FsftINVR_T_MtrB_CapctrTempChrt */
    /* During: FsftINVR_T_MtrB_CapctrTemp/FsftINVR_T_MtrB_CapctrTempChrt */
    /* Entry Internal: FsftINVR_T_MtrB_CapctrTemp/FsftINVR_T_MtrB_CapctrTempChrt */
    /* Transition: '<S233>:2' */
    (void)Rte_Write_VeINVR_b_MtrB_CapctrTemp_FA_Value(true);

    /* Merge: '<Root>/Merge_77' incorporates:
     *  Chart: '<S21>/FsftINVR_T_MtrB_CapctrTempChrt'
     *  SignalConversion generated from: '<S21>/VeINVR_T_MtrB_CapctrTemp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_CapctrTemp_VeINVR_T_MtrB_CapctrTemp_write_IRV
        (KeINVR_T_MtrB_CapctrTempDflt);

    /* Merge: '<Root>/Merge_75' incorporates:
     *  Chart: '<S21>/FsftINVR_T_MtrB_CapctrTempChrt'
     *  SignalConversion generated from: '<S21>/VeINVR_b_MtrB_CapctrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_CapctrTemp_VeINVR_b_MtrB_CapctrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrB_CapctrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrB_ClntIn_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrB_ClntIn_Temp' */
    /* Outport: '<Root>/VeINVR_b_MtrB_ClntIn_Temp_FA' incorporates:
     *  Chart: '<S22>/FsftINVR_T_MtrB_ClntIn_TempChrt'
     *  SignalConversion generated from: '<S22>/VeINVR_b_MtrB_ClntIn_TempFA'
     */
    /* Gateway: FsftINVR_T_MtrB_ClntIn_Temp/FsftINVR_T_MtrB_ClntIn_TempChrt */
    /* During: FsftINVR_T_MtrB_ClntIn_Temp/FsftINVR_T_MtrB_ClntIn_TempChrt */
    /* Entry Internal: FsftINVR_T_MtrB_ClntIn_Temp/FsftINVR_T_MtrB_ClntIn_TempChrt */
    /* Transition: '<S234>:2' */
    (void)Rte_Write_VeINVR_b_MtrB_ClntIn_Temp_FA_Value(true);

    /* Merge: '<Root>/Merge_80' incorporates:
     *  Chart: '<S22>/FsftINVR_T_MtrB_ClntIn_TempChrt'
     *  SignalConversion generated from: '<S22>/VeINVR_T_MtrB_ClntIn_Temp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_ClntIn_Temp_VeINVR_T_MtrB_ClntIn_Temp_write_IRV
        (KeINVR_T_MtrB_ClntIn_TempDflt);

    /* Merge: '<Root>/Merge_78' incorporates:
     *  Chart: '<S22>/FsftINVR_T_MtrB_ClntIn_TempChrt'
     *  SignalConversion generated from: '<S22>/VeINVR_b_MtrB_ClntIn_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_ClntIn_Temp_VeINVR_b_MtrB_ClntIn_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrB_ClntIn_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrB_ClntOut_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrB_ClntOut_Temp' */
    /* Outport: '<Root>/VeINVR_b_MtrB_ClntOut_Temp_FA' incorporates:
     *  Chart: '<S23>/FsftINVR_T_MtrB_ClntOut_TempChrt'
     *  SignalConversion generated from: '<S23>/VeINVR_b_MtrB_ClntOut_TempFA'
     */
    /* Gateway: FsftINVR_T_MtrB_ClntOut_Temp/FsftINVR_T_MtrB_ClntOut_TempChrt */
    /* During: FsftINVR_T_MtrB_ClntOut_Temp/FsftINVR_T_MtrB_ClntOut_TempChrt */
    /* Entry Internal: FsftINVR_T_MtrB_ClntOut_Temp/FsftINVR_T_MtrB_ClntOut_TempChrt */
    /* Transition: '<S235>:2' */
    (void)Rte_Write_VeINVR_b_MtrB_ClntOut_Temp_FA_Value(true);

    /* Merge: '<Root>/Merge_83' incorporates:
     *  Chart: '<S23>/FsftINVR_T_MtrB_ClntOut_TempChrt'
     *  SignalConversion generated from: '<S23>/VeINVR_T_MtrB_ClntOut_Temp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_ClntOut_Temp_VeINVR_T_MtrB_ClntOut_Temp_write_IRV
        (KeINVR_T_MtrB_ClntOut_TempDflt);

    /* Merge: '<Root>/Merge_81' incorporates:
     *  Chart: '<S23>/FsftINVR_T_MtrB_ClntOut_TempChrt'
     *  SignalConversion generated from: '<S23>/VeINVR_b_MtrB_ClntOut_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_ClntOut_Temp_VeINVR_b_MtrB_ClntOut_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrB_ClntOut_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrB_CtrlBoard_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrB_CtrlBoard_Temp' */
    /* Outport: '<Root>/VeINVR_b_MtrB_CtrlBoard_Temp_FA' incorporates:
     *  Chart: '<S24>/FsftINVR_T_MtrB_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S24>/VeINVR_b_MtrB_CtrlBoard_TempFA'
     */
    /* Gateway: FsftINVR_T_MtrB_CtrlBoard_Temp/FsftINVR_T_MtrB_CtrlBoard_TempChrt */
    /* During: FsftINVR_T_MtrB_CtrlBoard_Temp/FsftINVR_T_MtrB_CtrlBoard_TempChrt */
    /* Entry Internal: FsftINVR_T_MtrB_CtrlBoard_Temp/FsftINVR_T_MtrB_CtrlBoard_TempChrt */
    /* Transition: '<S236>:2' */
    (void)Rte_Write_VeINVR_b_MtrB_CtrlBoard_Temp_FA_Value(true);

    /* Merge: '<Root>/Merge_86' incorporates:
     *  Chart: '<S24>/FsftINVR_T_MtrB_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S24>/VeINVR_T_MtrB_CtrlBoard_Temp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_CtrlBoard_Temp_VeINVR_T_MtrB_CtrlBoard_Temp_write_IRV
        (KeINVR_T_MtrB_CtrlBoard_TempDflt);

    /* Merge: '<Root>/Merge_84' incorporates:
     *  Chart: '<S24>/FsftINVR_T_MtrB_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S24>/VeINVR_b_MtrB_CtrlBoard_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_CtrlBoard_Temp_VeINVR_b_MtrB_CtrlBoard_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrB_CtrlBoard_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrB_InvrtrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrB_InvrtrTemp' */
    /* Outport: '<Root>/VeINVR_b_MtrB_InvrtrTempFA' incorporates:
     *  Chart: '<S25>/FsftINVR_T_MtrB_InvrtrTempChrt'
     *  SignalConversion generated from: '<S25>/VeINVR_b_MtrB_InvrtrTempFA'
     */
    /* Gateway: FsftINVR_T_MtrB_InvrtrTemp/FsftINVR_T_MtrB_InvrtrTempChrt */
    /* During: FsftINVR_T_MtrB_InvrtrTemp/FsftINVR_T_MtrB_InvrtrTempChrt */
    /* Entry Internal: FsftINVR_T_MtrB_InvrtrTemp/FsftINVR_T_MtrB_InvrtrTempChrt */
    /* Transition: '<S237>:2' */
    (void)Rte_Write_VeINVR_b_MtrB_InvrtrTempFA_Value(true);

    /* Merge: '<Root>/Merge_98' incorporates:
     *  Chart: '<S25>/FsftINVR_T_MtrB_InvrtrTempChrt'
     *  SignalConversion generated from: '<S25>/VeINVR_T_MtrB_InvrtrTemp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_InvrtrTemp_VeINVR_T_MtrB_InvrtrTemp_write_IRV
        (KeINVR_T_MtrB_InvrtrTempDflt);

    /* Merge: '<Root>/Merge_96' incorporates:
     *  Chart: '<S25>/FsftINVR_T_MtrB_InvrtrTempChrt'
     *  SignalConversion generated from: '<S25>/VeINVR_b_MtrB_InvrtrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_InvrtrTemp_VeINVR_b_MtrB_InvrtrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrB_InvrtrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrB_RotrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrB_RotrTemp' */
    /* Outport: '<Root>/VeINVR_b_MtrB_RotrTemp_FA' incorporates:
     *  Chart: '<S26>/FsftINVR_T_MtrB_RotrTempChrt'
     *  SignalConversion generated from: '<S26>/VeINVR_b_MtrB_RotrTempFA'
     */
    /* Gateway: FsftINVR_T_MtrB_RotrTemp/FsftINVR_T_MtrB_RotrTempChrt */
    /* During: FsftINVR_T_MtrB_RotrTemp/FsftINVR_T_MtrB_RotrTempChrt */
    /* Entry Internal: FsftINVR_T_MtrB_RotrTemp/FsftINVR_T_MtrB_RotrTempChrt */
    /* Transition: '<S238>:2' */
    (void)Rte_Write_VeINVR_b_MtrB_RotrTemp_FA_Value(true);

    /* Merge: '<Root>/Merge_101' incorporates:
     *  Chart: '<S26>/FsftINVR_T_MtrB_RotrTempChrt'
     *  SignalConversion generated from: '<S26>/VeINVR_T_MtrB_RotrTemp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_RotrTemp_VeINVR_T_MtrB_RotrTemp_write_IRV
        (KeINVR_T_MtrB_RotrTempDflt);

    /* Merge: '<Root>/Merge_99' incorporates:
     *  Chart: '<S26>/FsftINVR_T_MtrB_RotrTempChrt'
     *  SignalConversion generated from: '<S26>/VeINVR_b_MtrB_RotrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_RotrTemp_VeINVR_b_MtrB_RotrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrB_RotrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrB_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrB_Temp' */
    /* Outport: '<Root>/VeINVR_b_MtrB_TempFA' incorporates:
     *  Chart: '<S27>/FsftINVR_T_MtrB_TempChrt'
     *  SignalConversion generated from: '<S27>/VeINVR_b_MtrB_TempFA'
     */
    /* Gateway: FsftINVR_T_MtrB_Temp/FsftINVR_T_MtrB_TempChrt */
    /* During: FsftINVR_T_MtrB_Temp/FsftINVR_T_MtrB_TempChrt */
    /* Entry Internal: FsftINVR_T_MtrB_Temp/FsftINVR_T_MtrB_TempChrt */
    /* Transition: '<S239>:2' */
    (void)Rte_Write_VeINVR_b_MtrB_TempFA_Value(true);

    /* Merge: '<Root>/Merge_105' incorporates:
     *  Chart: '<S27>/FsftINVR_T_MtrB_TempChrt'
     *  SignalConversion generated from: '<S27>/VeINVR_T_MtrB_Temp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_Temp_VeINVR_T_MtrB_Temp_write_IRV
        (KeINVR_T_MtrB_TempDflt);

    /* Merge: '<Root>/Merge_103' incorporates:
     *  Chart: '<S27>/FsftINVR_T_MtrB_TempChrt'
     *  SignalConversion generated from: '<S27>/VeINVR_b_MtrB_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrB_Temp_VeINVR_b_MtrB_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrB_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrCBusBarTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrCBusBarTemp' */
    /* Outport: '<Root>/VeINVR_b_MtrCBusBarTempFA' incorporates:
     *  Chart: '<S28>/FsftINVR_T_MtrCBusBarTempChrt'
     *  SignalConversion generated from: '<S28>/VeINVR_b_MtrCBusBarTempFA'
     */
    /* Gateway: FsftINVR_T_MtrCBusBarTemp/FsftINVR_T_MtrCBusBarTempChrt */
    /* During: FsftINVR_T_MtrCBusBarTemp/FsftINVR_T_MtrCBusBarTempChrt */
    /* Entry Internal: FsftINVR_T_MtrCBusBarTemp/FsftINVR_T_MtrCBusBarTempChrt */
    /* Transition: '<S240>:2' */
    (void)Rte_Write_VeINVR_b_MtrCBusBarTempFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrCBusBarTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrC_CtrlBoard_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrC_CtrlBoard_Temp' */
    /* Outport: '<Root>/VeINVR_b_MtrC_CtrlBoard_Temp_FA' incorporates:
     *  Chart: '<S29>/FsftINVR_T_MtrC_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S29>/VeINVR_b_MtrC_CtrlBoard_TempFA'
     */
    /* Gateway: FsftINVR_T_MtrC_CtrlBoard_Temp/FsftINVR_T_MtrC_CtrlBoard_TempChrt */
    /* During: FsftINVR_T_MtrC_CtrlBoard_Temp/FsftINVR_T_MtrC_CtrlBoard_TempChrt */
    /* Entry Internal: FsftINVR_T_MtrC_CtrlBoard_Temp/FsftINVR_T_MtrC_CtrlBoard_TempChrt */
    /* Transition: '<S241>:2' */
    (void)Rte_Write_VeINVR_b_MtrC_CtrlBoard_Temp_FA_Value(true);

    /* Merge: '<Root>/Merge_122' incorporates:
     *  Chart: '<S29>/FsftINVR_T_MtrC_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S29>/VeINVR_T_MtrC_CtrlBoard_Temp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrC_CtrlBoard_Temp_VeINVR_T_MtrC_CtrlBoard_Temp_write_IRV
        (KeINVR_T_MtrC_CtrlBoard_TempDflt);

    /* Merge: '<Root>/Merge_120' incorporates:
     *  Chart: '<S29>/FsftINVR_T_MtrC_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S29>/VeINVR_b_MtrC_CtrlBoard_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrC_CtrlBoard_Temp_VeINVR_b_MtrC_CtrlBoard_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrC_CtrlBoard_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrC_InvrtrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrC_InvrtrTemp' */
    /* Outport: '<Root>/VeINVR_b_MtrC_InvrtrTempFA' incorporates:
     *  Chart: '<S30>/FsftINVR_T_MtrC_InvrtrTempChrt'
     *  SignalConversion generated from: '<S30>/VeINVR_b_MtrC_InvrtrTempFA'
     */
    /* Gateway: FsftINVR_T_MtrC_InvrtrTemp/FsftINVR_T_MtrC_InvrtrTempChrt */
    /* During: FsftINVR_T_MtrC_InvrtrTemp/FsftINVR_T_MtrC_InvrtrTempChrt */
    /* Entry Internal: FsftINVR_T_MtrC_InvrtrTemp/FsftINVR_T_MtrC_InvrtrTempChrt */
    /* Transition: '<S242>:2' */
    (void)Rte_Write_VeINVR_b_MtrC_InvrtrTempFA_Value(true);

    /* Merge: '<Root>/Merge_134' incorporates:
     *  Chart: '<S30>/FsftINVR_T_MtrC_InvrtrTempChrt'
     *  SignalConversion generated from: '<S30>/VeINVR_T_MtrC_InvrtrTemp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrC_InvrtrTemp_VeINVR_T_MtrC_InvrtrTemp_write_IRV
        (KeINVR_T_MtrC_InvrtrTempDflt);

    /* Merge: '<Root>/Merge_132' incorporates:
     *  Chart: '<S30>/FsftINVR_T_MtrC_InvrtrTempChrt'
     *  SignalConversion generated from: '<S30>/VeINVR_b_MtrC_InvrtrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrC_InvrtrTemp_VeINVR_b_MtrC_InvrtrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrC_InvrtrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrC_RotrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrC_RotrTemp' */
    /* Outport: '<Root>/VeINVR_b_MtrC_RotrTemp_FA' incorporates:
     *  Chart: '<S31>/FsftINVR_T_MtrC_RotrTempChrt'
     *  SignalConversion generated from: '<S31>/VeINVR_b_MtrC_RotrTempFA'
     */
    /* Gateway: FsftINVR_T_MtrC_RotrTemp/FsftINVR_T_MtrC_RotrTempChrt */
    /* During: FsftINVR_T_MtrC_RotrTemp/FsftINVR_T_MtrC_RotrTempChrt */
    /* Entry Internal: FsftINVR_T_MtrC_RotrTemp/FsftINVR_T_MtrC_RotrTempChrt */
    /* Transition: '<S243>:2' */
    (void)Rte_Write_VeINVR_b_MtrC_RotrTemp_FA_Value(true);

    /* Merge: '<Root>/Merge_137' incorporates:
     *  Chart: '<S31>/FsftINVR_T_MtrC_RotrTempChrt'
     *  SignalConversion generated from: '<S31>/VeINVR_T_MtrC_RotrTemp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrC_RotrTemp_VeINVR_T_MtrC_RotrTemp_write_IRV
        (KeINVR_T_MtrC_RotrTempDflt);

    /* Merge: '<Root>/Merge_135' incorporates:
     *  Chart: '<S31>/FsftINVR_T_MtrC_RotrTempChrt'
     *  SignalConversion generated from: '<S31>/VeINVR_b_MtrC_RotrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrC_RotrTemp_VeINVR_b_MtrC_RotrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrC_RotrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_T_MtrC_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_T_MtrC_Temp' */
    /* Outport: '<Root>/VeINVR_b_MtrC_TempFA' incorporates:
     *  Chart: '<S32>/FsftINVR_T_MtrC_TempChrt'
     *  SignalConversion generated from: '<S32>/VeINVR_b_MtrC_TempFA'
     */
    /* Gateway: FsftINVR_T_MtrC_Temp/FsftINVR_T_MtrC_TempChrt */
    /* During: FsftINVR_T_MtrC_Temp/FsftINVR_T_MtrC_TempChrt */
    /* Entry Internal: FsftINVR_T_MtrC_Temp/FsftINVR_T_MtrC_TempChrt */
    /* Transition: '<S244>:2' */
    (void)Rte_Write_VeINVR_b_MtrC_TempFA_Value(true);

    /* Merge: '<Root>/Merge_140' incorporates:
     *  Chart: '<S32>/FsftINVR_T_MtrC_TempChrt'
     *  SignalConversion generated from: '<S32>/VeINVR_T_MtrC_Temp_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrC_Temp_VeINVR_T_MtrC_Temp_write_IRV
        (KeINVR_T_MtrC_TempDflt);

    /* Merge: '<Root>/Merge_138' incorporates:
     *  Chart: '<S32>/FsftINVR_T_MtrC_TempChrt'
     *  SignalConversion generated from: '<S32>/VeINVR_b_MtrC_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_T_MtrC_Temp_VeINVR_b_MtrC_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_T_MtrC_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_U_MaxBoostVolt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_U_MaxBoostVolt' */
    /* Outport: '<Root>/VeINVR_b_MaxBoostVoltFA' incorporates:
     *  Chart: '<S33>/FsftINVR_U_MaxBoostVoltChrt'
     *  SignalConversion generated from: '<S33>/VeINVR_b_MaxBoostVoltFA'
     */
    /* Gateway: FsftINVR_U_MaxBoostVolt/FsftINVR_U_MaxBoostVoltChrt */
    /* During: FsftINVR_U_MaxBoostVolt/FsftINVR_U_MaxBoostVoltChrt */
    /* Entry Internal: FsftINVR_U_MaxBoostVolt/FsftINVR_U_MaxBoostVoltChrt */
    /* Transition: '<S245>:2' */
    (void)Rte_Write_VeINVR_b_MaxBoostVoltFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_U_MaxBoostVolt' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_U_MtrA_DC_Volt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_U_MtrA_DC_Volt' */
    /* Outport: '<Root>/VeINVR_b_MtrA_DC_VoltFA' incorporates:
     *  Chart: '<S34>/FsftINVR_U_MtrA_DC_VoltChrt'
     *  SignalConversion generated from: '<S34>/VeINVR_b_MtrA_DC_VoltFA'
     */
    /* Gateway: FsftINVR_U_MtrA_DC_Volt/FsftINVR_U_MtrA_DC_VoltChrt */
    /* During: FsftINVR_U_MtrA_DC_Volt/FsftINVR_U_MtrA_DC_VoltChrt */
    /* Entry Internal: FsftINVR_U_MtrA_DC_Volt/FsftINVR_U_MtrA_DC_VoltChrt */
    /* Transition: '<S246>:2' */
    (void)Rte_Write_VeINVR_b_MtrA_DC_VoltFA_Value(true);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  Chart: '<S34>/FsftINVR_U_MtrA_DC_VoltChrt'
     *  SignalConversion generated from: '<S34>/VeINVR_U_MtrA_DC_Volt_write'
     */
    Rte_IrvWrite_FsftINVR_U_MtrA_DC_Volt_VeINVR_U_MtrA_DC_Volt_write_IRV
        (KeINVR_U_MtrA_DC_VoltDflt);

    /* Merge: '<Root>/Merge_42' incorporates:
     *  Chart: '<S34>/FsftINVR_U_MtrA_DC_VoltChrt'
     *  SignalConversion generated from: '<S34>/VeINVR_b_MtrA_DC_Volt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_U_MtrA_DC_Volt_VeINVR_b_MtrA_DC_Volt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_U_MtrA_DC_Volt' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_U_MtrB_DC_Volt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_U_MtrB_DC_Volt' */
    /* Outport: '<Root>/VeINVR_b_MtrB_DC_VoltFA' incorporates:
     *  Chart: '<S35>/FsftINVR_U_MtrB_DC_VoltChrt'
     *  SignalConversion generated from: '<S35>/VeINVR_b_MtrB_DC_VoltFA'
     */
    /* Gateway: FsftINVR_U_MtrB_DC_Volt/FsftINVR_U_MtrB_DC_VoltChrt */
    /* During: FsftINVR_U_MtrB_DC_Volt/FsftINVR_U_MtrB_DC_VoltChrt */
    /* Entry Internal: FsftINVR_U_MtrB_DC_Volt/FsftINVR_U_MtrB_DC_VoltChrt */
    /* Transition: '<S247>:2' */
    (void)Rte_Write_VeINVR_b_MtrB_DC_VoltFA_Value(true);

    /* Merge: '<Root>/Merge_92' incorporates:
     *  Chart: '<S35>/FsftINVR_U_MtrB_DC_VoltChrt'
     *  SignalConversion generated from: '<S35>/VeINVR_U_MtrB_DC_Volt_write'
     */
    Rte_IrvWrite_FsftINVR_U_MtrB_DC_Volt_VeINVR_U_MtrB_DC_Volt_write_IRV
        (KeINVR_U_MtrB_DC_VoltDflt);

    /* Merge: '<Root>/Merge_90' incorporates:
     *  Chart: '<S35>/FsftINVR_U_MtrB_DC_VoltChrt'
     *  SignalConversion generated from: '<S35>/VeINVR_b_MtrB_DC_Volt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_U_MtrB_DC_Volt_VeINVR_b_MtrB_DC_Volt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_U_MtrB_DC_Volt' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_U_MtrC_DC_Volt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_U_MtrC_DC_Volt' */
    /* Outport: '<Root>/VeINVR_b_MtrC_DC_VoltFA' incorporates:
     *  Chart: '<S36>/FsftINVR_U_MtrC_DC_VoltChrt'
     *  SignalConversion generated from: '<S36>/VeINVR_b_MtrC_DC_VoltFA'
     */
    /* Gateway: FsftINVR_U_MtrC_DC_Volt/FsftINVR_U_MtrC_DC_VoltChrt */
    /* During: FsftINVR_U_MtrC_DC_Volt/FsftINVR_U_MtrC_DC_VoltChrt */
    /* Entry Internal: FsftINVR_U_MtrC_DC_Volt/FsftINVR_U_MtrC_DC_VoltChrt */
    /* Transition: '<S248>:2' */
    (void)Rte_Write_VeINVR_b_MtrC_DC_VoltFA_Value(true);

    /* Merge: '<Root>/Merge_128' incorporates:
     *  Chart: '<S36>/FsftINVR_U_MtrC_DC_VoltChrt'
     *  SignalConversion generated from: '<S36>/VeINVR_U_MtrC_DC_Volt_write'
     */
    Rte_IrvWrite_FsftINVR_U_MtrC_DC_Volt_VeINVR_U_MtrC_DC_Volt_write_IRV
        (KeINVR_U_MtrC_DC_VoltDflt);

    /* Merge: '<Root>/Merge_126' incorporates:
     *  Chart: '<S36>/FsftINVR_U_MtrC_DC_VoltChrt'
     *  SignalConversion generated from: '<S36>/VeINVR_b_MtrC_DC_Volt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_U_MtrC_DC_Volt_VeINVR_b_MtrC_DC_Volt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_U_MtrC_DC_Volt' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_BstCnvtrFailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_b_BstCnvtrFailSts' */
    /* Outport: '<Root>/VeINVR_b_BstCnvtrFailStsFA' incorporates:
     *  Chart: '<S37>/FsftINVR_b_BstCnvtrFailStsChrt'
     *  SignalConversion generated from: '<S37>/VeINVR_b_BstCnvtrFailStsFA'
     */
    /* Gateway: FsftINVR_b_BstCnvtrFailSts/FsftINVR_b_BstCnvtrFailStsChrt */
    /* During: FsftINVR_b_BstCnvtrFailSts/FsftINVR_b_BstCnvtrFailStsChrt */
    /* Entry Internal: FsftINVR_b_BstCnvtrFailSts/FsftINVR_b_BstCnvtrFailStsChrt */
    /* Transition: '<S249>:2' */
    (void)Rte_Write_VeINVR_b_BstCnvtrFailStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_b_BstCnvtrFailSts' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_DMPI_TempStopFlag(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_b_DMPI_TempStopFlag' */
    /* Outport: '<Root>/VeINVR_b_DMPI_TempStopFlagFA' incorporates:
     *  Chart: '<S38>/FsftINVR_b_DMPI_TempStopFlagChrt'
     *  SignalConversion generated from: '<S38>/VeINVR_b_DMPI_TempStopFlagFA'
     */
    /* Gateway: FsftINVR_b_DMPI_TempStopFlag/FsftINVR_b_DMPI_TempStopFlagChrt */
    /* During: FsftINVR_b_DMPI_TempStopFlag/FsftINVR_b_DMPI_TempStopFlagChrt */
    /* Entry Internal: FsftINVR_b_DMPI_TempStopFlag/FsftINVR_b_DMPI_TempStopFlagChrt */
    /* Transition: '<S250>:2' */
    (void)Rte_Write_VeINVR_b_DMPI_TempStopFlagFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_b_DMPI_TempStopFlag' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_DrvReadyCmplSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_b_DrvReadyCmplSts' */
    /* Outport: '<Root>/VeINVR_b_DrvReadyCmplStsFA' incorporates:
     *  Chart: '<S39>/FsftINVR_b_DrvReadyCmplStsChrt'
     *  SignalConversion generated from: '<S39>/VeINVR_b_DrvReadyCmplSts'
     */
    /* Gateway: FsftINVR_b_DrvReadyCmplSts/FsftINVR_b_DrvReadyCmplStsChrt */
    /* During: FsftINVR_b_DrvReadyCmplSts/FsftINVR_b_DrvReadyCmplStsChrt */
    /* Entry Internal: FsftINVR_b_DrvReadyCmplSts/FsftINVR_b_DrvReadyCmplStsChrt */
    /* Transition: '<S251>:2' */
    (void)Rte_Write_VeINVR_b_DrvReadyCmplStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_b_DrvReadyCmplSts' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MCPA_HVILSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_b_MCPA_HVILSts' */
    /* Outport: '<Root>/VeINVR_b_MCPA_HVILStsFA' incorporates:
     *  Chart: '<S40>/FsftINVR_b_MCPA_HVILStsChrt'
     *  SignalConversion generated from: '<S40>/VeINVR_b_MCPA_HVILSts'
     */
    /* Gateway: FsftINVR_b_MCPA_HVILSts/FsftINVR_b_MCPA_HVILStsChrt */
    /* During: FsftINVR_b_MCPA_HVILSts/FsftINVR_b_MCPA_HVILStsChrt */
    /* Entry Internal: FsftINVR_b_MCPA_HVILSts/FsftINVR_b_MCPA_HVILStsChrt */
    /* Transition: '<S252>:2' */
    (void)Rte_Write_VeINVR_b_MCPA_HVILStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_b_MCPA_HVILSts' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MCPB_HVILSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_b_MCPB_HVILSts' */
    /* Outport: '<Root>/VeINVR_b_MCPB_HVILStsFA' incorporates:
     *  Chart: '<S41>/FsftINVR_b_MCPB_HVILStsChrt'
     *  SignalConversion generated from: '<S41>/VeINVR_b_MCPB_HVILSts'
     */
    /* Gateway: FsftINVR_b_MCPB_HVILSts/FsftINVR_b_MCPB_HVILStsChrt */
    /* During: FsftINVR_b_MCPB_HVILSts/FsftINVR_b_MCPB_HVILStsChrt */
    /* Entry Internal: FsftINVR_b_MCPB_HVILSts/FsftINVR_b_MCPB_HVILStsChrt */
    /* Transition: '<S253>:2' */
    (void)Rte_Write_VeINVR_b_MCPB_HVILStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_b_MCPB_HVILSts' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MCPC_HVILSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_b_MCPC_HVILSts' */
    /* Outport: '<Root>/VeINVR_b_MCPC_HVILStsFA' incorporates:
     *  Chart: '<S42>/FsftINVR_b_MCPC_HVILStsChrt'
     *  SignalConversion generated from: '<S42>/VeINVR_b_MCPC_HVILSts'
     */
    /* Gateway: FsftINVR_b_MCPC_HVILSts/FsftINVR_b_MCPC_HVILStsChrt */
    /* During: FsftINVR_b_MCPC_HVILSts/FsftINVR_b_MCPC_HVILStsChrt */
    /* Entry Internal: FsftINVR_b_MCPC_HVILSts/FsftINVR_b_MCPC_HVILStsChrt */
    /* Transition: '<S254>:2' */
    (void)Rte_Write_VeINVR_b_MCPC_HVILStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_b_MCPC_HVILSts' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrAFlt_3PS_Pos(void)
{
    /* Gateway: FsftINVR_b_MtrAFlt_3PS_Pos/FsftINVR_b_MtrAFlt_3PS_PosChrt */
    /* During: FsftINVR_b_MtrAFlt_3PS_Pos/FsftINVR_b_MtrAFlt_3PS_PosChrt */
    /* Entry Internal: FsftINVR_b_MtrAFlt_3PS_Pos/FsftINVR_b_MtrAFlt_3PS_PosChrt */
    /* Transition: '<S255>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrAFlt_3PS_Pos_AltSrc(void)
{
    /* Gateway: FsftINVR_b_MtrAFlt_3PS_Pos_AltSrc/FsftINVR_b_MtrAFlt_3PS_Pos_AltSrcChrt */
    /* During: FsftINVR_b_MtrAFlt_3PS_Pos_AltSrc/FsftINVR_b_MtrAFlt_3PS_Pos_AltSrcChrt */
    /* Entry Internal: FsftINVR_b_MtrAFlt_3PS_Pos_AltSrc/FsftINVR_b_MtrAFlt_3PS_Pos_AltSrcChrt */
    /* Transition: '<S256>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrAFlt_HV_CntctrOpnRq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_b_MtrAFlt_HV_CntctrOpnRq' */
    /* Merge: '<Root>/Merge_21' incorporates:
     *  Chart: '<S45>/FsftINVR_b_MtrAFlt_HV_CntctrOpnRqChrt'
     *  SignalConversion generated from: '<S45>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Sig_Rcvd_write'
     */
    /* Gateway: FsftINVR_b_MtrAFlt_HV_CntctrOpnRq/FsftINVR_b_MtrAFlt_HV_CntctrOpnRqChrt */
    /* During: FsftINVR_b_MtrAFlt_HV_CntctrOpnRq/FsftINVR_b_MtrAFlt_HV_CntctrOpnRqChrt */
    /* Entry Internal: FsftINVR_b_MtrAFlt_HV_CntctrOpnRq/FsftINVR_b_MtrAFlt_HV_CntctrOpnRqChrt */
    /* Transition: '<S257>:2' */
    Rte_IrvWrite_FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_b_MtrAFlt_HV_CntctrOpnRq' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc' */
    /* Merge: '<Root>/Merge_23' incorporates:
     *  Chart: '<S46>/FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrcChrt'
     *  SignalConversion generated from: '<S46>/VeINVR_b_MtrAFltHVCntctrOpnRqAltSrc_SigRcvd_write'
     */
    /* Gateway: FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc/FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* During: FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc/FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* Entry Internal: FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc/FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* Transition: '<S258>:2' */
    Rte_IrvWrite_FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc_VeINVR_b_MtrAFltHVCntctrOpnRqAltSrc_SigRcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrA_BrushwearFA(void)
{
    /* Gateway: FsftINVR_b_MtrA_BrushwearFA/FsftINVR_b_MtrA_BrushwearFAChrt */
    /* During: FsftINVR_b_MtrA_BrushwearFA/FsftINVR_b_MtrA_BrushwearFAChrt */
    /* Entry Internal: FsftINVR_b_MtrA_BrushwearFA/FsftINVR_b_MtrA_BrushwearFAChrt */
    /* Transition: '<S259>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrA_CoolantTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_b_MtrA_CoolantTemp' */
    /* Outport: '<Root>/VeINVR_b_MtrA_CoolantTempFA' incorporates:
     *  Chart: '<S48>/FsftINVR_b_MtrA_CoolantTempChrt'
     *  SignalConversion generated from: '<S48>/VeINVR_b_MtrA_CoolantTempFA'
     */
    /* Gateway: FsftINVR_b_MtrA_CoolantTemp/FsftINVR_b_MtrA_CoolantTempChrt */
    /* During: FsftINVR_b_MtrA_CoolantTemp/FsftINVR_b_MtrA_CoolantTempChrt */
    /* Entry Internal: FsftINVR_b_MtrA_CoolantTemp/FsftINVR_b_MtrA_CoolantTempChrt */
    /* Transition: '<S260>:2' */
    (void)Rte_Write_VeINVR_b_MtrA_CoolantTempFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_b_MtrA_CoolantTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrA_EstTorqueFA(void)
{
    /* Gateway: FsftINVR_b_MtrA_EstTorqueFA/FsftINVR_b_MtrA_EstTorqueFAChrt */
    /* During: FsftINVR_b_MtrA_EstTorqueFA/FsftINVR_b_MtrA_EstTorqueFAChrt */
    /* Entry Internal: FsftINVR_b_MtrA_EstTorqueFA/FsftINVR_b_MtrA_EstTorqueFAChrt */
    /* Transition: '<S261>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrA_ExcCrntFA(void)
{
    /* Gateway: FsftINVR_b_MtrA_ExcCrntFA/FsftINVR_b_MtrA_ExcCrntFAChrt */
    /* During: FsftINVR_b_MtrA_ExcCrntFA/FsftINVR_b_MtrA_ExcCrntFAChrt */
    /* Entry Internal: FsftINVR_b_MtrA_ExcCrntFA/FsftINVR_b_MtrA_ExcCrntFAChrt */
    /* Transition: '<S262>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrA_ExcOCFA(void)
{
    /* Gateway: FsftINVR_b_MtrA_ExcOCFA/FsftINVR_b_MtrA_ExcOCFAChrt */
    /* During: FsftINVR_b_MtrA_ExcOCFA/FsftINVR_b_MtrA_ExcOCFAChrt */
    /* Entry Internal: FsftINVR_b_MtrA_ExcOCFA/FsftINVR_b_MtrA_ExcOCFAChrt */
    /* Transition: '<S263>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrA_InvrtBrdgFA(void)
{
    /* Gateway: FsftINVR_b_MtrA_InvrtBrdgFA/FsftINVR_b_MtrA_InvrtBrdgFAChrt */
    /* During: FsftINVR_b_MtrA_InvrtBrdgFA/FsftINVR_b_MtrA_InvrtBrdgFAChrt */
    /* Entry Internal: FsftINVR_b_MtrA_InvrtBrdgFA/FsftINVR_b_MtrA_InvrtBrdgFAChrt */
    /* Transition: '<S264>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrA_InvrtModeFA(void)
{
    /* Gateway: FsftINVR_b_MtrA_InvrtModeFA/FsftINVR_b_MtrA_InvrtModeFAChrt */
    /* During: FsftINVR_b_MtrA_InvrtModeFA/FsftINVR_b_MtrA_InvrtModeFAChrt */
    /* Entry Internal: FsftINVR_b_MtrA_InvrtModeFA/FsftINVR_b_MtrA_InvrtModeFAChrt */
    /* Transition: '<S265>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrA_NTC_FA(void)
{
    /* Gateway: FsftINVR_b_MtrA_NTC_FA/FsftINVR_b_MtrA_NTC_FAChrt */
    /* During: FsftINVR_b_MtrA_NTC_FA/FsftINVR_b_MtrA_NTC_FAChrt */
    /* Entry Internal: FsftINVR_b_MtrA_NTC_FA/FsftINVR_b_MtrA_NTC_FAChrt */
    /* Transition: '<S266>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrA_OverVoltFA(void)
{
    /* Gateway: FsftINVR_b_MtrA_OverVoltFA/FsftINVR_b_MtrA_OverVoltFAChrt */
    /* During: FsftINVR_b_MtrA_OverVoltFA/FsftINVR_b_MtrA_OverVoltFAChrt */
    /* Entry Internal: FsftINVR_b_MtrA_OverVoltFA/FsftINVR_b_MtrA_OverVoltFAChrt */
    /* Transition: '<S267>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrA_SpdRawFA(void)
{
    /* Gateway: FsftINVR_b_MtrA_SpdRawFA/FsftINVR_b_MtrA_SpdRawFAChrt */
    /* During: FsftINVR_b_MtrA_SpdRawFA/FsftINVR_b_MtrA_SpdRawFAChrt */
    /* Entry Internal: FsftINVR_b_MtrA_SpdRawFA/FsftINVR_b_MtrA_SpdRawFAChrt */
    /* Transition: '<S268>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrA_TorqAchievedFA(void)
{
    /* Gateway: FsftINVR_b_MtrA_TorqAchievedFA/FsftINVR_b_MtrA_TorqAchievedFAChrt */
    /* During: FsftINVR_b_MtrA_TorqAchievedFA/FsftINVR_b_MtrA_TorqAchievedFAChrt */
    /* Entry Internal: FsftINVR_b_MtrA_TorqAchievedFA/FsftINVR_b_MtrA_TorqAchievedFAChrt */
    /* Transition: '<S269>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrA_UnderVoltFA(void)
{
    /* Gateway: FsftINVR_b_MtrA_UnderVoltFA/FsftINVR_b_MtrA_UnderVoltFAChrt */
    /* During: FsftINVR_b_MtrA_UnderVoltFA/FsftINVR_b_MtrA_UnderVoltFAChrt */
    /* Entry Internal: FsftINVR_b_MtrA_UnderVoltFA/FsftINVR_b_MtrA_UnderVoltFAChrt */
    /* Transition: '<S270>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrBFlt_3PS_Pos(void)
{
    /* Gateway: FsftINVR_b_MtrBFlt_3PS_Pos/FsftINVR_b_MtrBFlt_3PS_PosChrt */
    /* During: FsftINVR_b_MtrBFlt_3PS_Pos/FsftINVR_b_MtrBFlt_3PS_PosChrt */
    /* Entry Internal: FsftINVR_b_MtrBFlt_3PS_Pos/FsftINVR_b_MtrBFlt_3PS_PosChrt */
    /* Transition: '<S271>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrBFlt_3PS_Pos_AltSrc(void)
{
    /* Gateway: FsftINVR_b_MtrBFlt_3PS_Pos_AltSrc/FsftINVR_b_MtrBFlt_3PS_Pos_AltSrcChrt */
    /* During: FsftINVR_b_MtrBFlt_3PS_Pos_AltSrc/FsftINVR_b_MtrBFlt_3PS_Pos_AltSrcChrt */
    /* Entry Internal: FsftINVR_b_MtrBFlt_3PS_Pos_AltSrc/FsftINVR_b_MtrBFlt_3PS_Pos_AltSrcChrt */
    /* Transition: '<S272>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrBFlt_HV_CntctrOpnRq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_b_MtrBFlt_HV_CntctrOpnRq' */
    /* Merge: '<Root>/Merge_70' incorporates:
     *  Chart: '<S61>/FsftINVR_b_MtrBFlt_HV_CntctrOpnRqChrt'
     *  SignalConversion generated from: '<S61>/VeINVR_b_MtrBFlt_HV_CntctrOpnRqFA_write'
     */
    /* Gateway: FsftINVR_b_MtrBFlt_HV_CntctrOpnRq/FsftINVR_b_MtrBFlt_HV_CntctrOpnRqChrt */
    /* During: FsftINVR_b_MtrBFlt_HV_CntctrOpnRq/FsftINVR_b_MtrBFlt_HV_CntctrOpnRqChrt */
    /* Entry Internal: FsftINVR_b_MtrBFlt_HV_CntctrOpnRq/FsftINVR_b_MtrBFlt_HV_CntctrOpnRqChrt */
    /* Transition: '<S273>:2' */
    Rte_IrvWrite_FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_VeINVR_b_MtrBFlt_HV_CntctrOpnRqFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_68' incorporates:
     *  Chart: '<S61>/FsftINVR_b_MtrBFlt_HV_CntctrOpnRqChrt'
     *  SignalConversion generated from: '<S61>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Sig_Rcvd_write'
     */
    Rte_IrvWrite_FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_b_MtrBFlt_HV_CntctrOpnRq' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc' */
    /* Merge: '<Root>/Merge_71' incorporates:
     *  Chart: '<S62>/FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrcChrt'
     *  SignalConversion generated from: '<S62>/VeINVR_b_MtrBFltHVCntctrOpnRqAltSrc_SigRcvd_write'
     */
    /* Gateway: FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc/FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* During: FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc/FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* Entry Internal: FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc/FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* Transition: '<S274>:2' */
    Rte_IrvWrite_FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc_VeINVR_b_MtrBFltHVCntctrOpnRqAltSrc_SigRcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrCFlt_3PS_Pos(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_b_MtrCFlt_3PS_Pos' */
    /* Merge: '<Root>/Merge_114' incorporates:
     *  Chart: '<S63>/FsftINVR_b_MtrCFlt_3PS_PosChrt'
     *  SignalConversion generated from: '<S63>/VeINVR_b_MtrCFlt_3PS_Pos_Sig_Rcvd_write'
     */
    /* Gateway: FsftINVR_b_MtrCFlt_3PS_Pos/FsftINVR_b_MtrCFlt_3PS_PosChrt */
    /* During: FsftINVR_b_MtrCFlt_3PS_Pos/FsftINVR_b_MtrCFlt_3PS_PosChrt */
    /* Entry Internal: FsftINVR_b_MtrCFlt_3PS_Pos/FsftINVR_b_MtrCFlt_3PS_PosChrt */
    /* Transition: '<S275>:2' */
    Rte_IrvWrite_FsftINVR_b_MtrCFlt_3PS_Pos_VeINVR_b_MtrCFlt_3PS_Pos_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_b_MtrCFlt_3PS_Pos' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_b_MtrCFlt_HV_CntctrOpnRq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_b_MtrCFlt_HV_CntctrOpnRq' */
    /* Merge: '<Root>/Merge_116' incorporates:
     *  Chart: '<S64>/FsftINVR_b_MtrCFlt_HV_CntctrOpnRqChrt'
     *  SignalConversion generated from: '<S64>/VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Sig_Rcvd_write'
     */
    /* Gateway: FsftINVR_b_MtrCFlt_HV_CntctrOpnRq/FsftINVR_b_MtrCFlt_HV_CntctrOpnRqChrt */
    /* During: FsftINVR_b_MtrCFlt_HV_CntctrOpnRq/FsftINVR_b_MtrCFlt_HV_CntctrOpnRqChrt */
    /* Entry Internal: FsftINVR_b_MtrCFlt_HV_CntctrOpnRq/FsftINVR_b_MtrCFlt_HV_CntctrOpnRqChrt */
    /* Transition: '<S276>:2' */
    Rte_IrvWrite_FsftINVR_b_MtrCFlt_HV_CntctrOpnRq_VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_b_MtrCFlt_HV_CntctrOpnRq' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_e_EMModeReq_TCM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_e_EMModeReq_TCM' */
    /* Outport: '<Root>/VeINVR_e_MtrB_TCMEMMdReq' incorporates:
     *  Chart: '<S65>/FsftINVR_e_EMModeReq_TCMChrt'
     *  SignalConversion generated from: '<S65>/VeINVR_e_EMModeReq_TCM'
     */
    /* Gateway: FsftINVR_e_EMModeReq_TCM/FsftINVR_e_EMModeReq_TCMChrt */
    /* During: FsftINVR_e_EMModeReq_TCM/FsftINVR_e_EMModeReq_TCMChrt */
    /* Entry Internal: FsftINVR_e_EMModeReq_TCM/FsftINVR_e_EMModeReq_TCMChrt */
    /* Transition: '<S277>:2' */
    (void)Rte_Write_VeINVR_e_MtrB_TCMEMMdReq_Value(KeINVR_e_EMModeReq_TCMDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_e_EMModeReq_TCM' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_e_MCPA_CommFail(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_e_MCPA_CommFail' */
    /* Outport: '<Root>/VeINVR_b_MCPA_CommFailFA' incorporates:
     *  Chart: '<S66>/FsftINVR_e_MCPA_CommFailChrt'
     *  SignalConversion generated from: '<S66>/VeINVR_b_MCPA_CommFailFA'
     */
    /* Gateway: FsftINVR_e_MCPA_CommFail/FsftINVR_e_MCPA_CommFailChrt */
    /* During: FsftINVR_e_MCPA_CommFail/FsftINVR_e_MCPA_CommFailChrt */
    /* Entry Internal: FsftINVR_e_MCPA_CommFail/FsftINVR_e_MCPA_CommFailChrt */
    /* Transition: '<S278>:2' */
    (void)Rte_Write_VeINVR_b_MCPA_CommFailFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_e_MCPA_CommFail' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_e_MCPA_SPT_State(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_e_MCPA_SPT_State' */
    /* Merge: '<Root>/Merge_17' incorporates:
     *  Chart: '<S67>/FsftINVR_e_MCPA_SPT_StateChrt'
     *  SignalConversion generated from: '<S67>/VeINVR_b_MCPA_SPT_State_Sig_Rcvd_write'
     */
    /* Gateway: FsftINVR_e_MCPA_SPT_State/FsftINVR_e_MCPA_SPT_StateChrt */
    /* During: FsftINVR_e_MCPA_SPT_State/FsftINVR_e_MCPA_SPT_StateChrt */
    /* Entry Internal: FsftINVR_e_MCPA_SPT_State/FsftINVR_e_MCPA_SPT_StateChrt */
    /* Transition: '<S279>:2' */
    Rte_IrvWrite_FsftINVR_e_MCPA_SPT_State_VeINVR_b_MCPA_SPT_State_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_e_MCPA_SPT_State' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_e_MCPB_CommFail(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_e_MCPB_CommFail' */
    /* Outport: '<Root>/VeINVR_b_MCPB_CommFailFA' incorporates:
     *  Chart: '<S68>/FsftINVR_e_MCPB_CommFailChrt'
     *  SignalConversion generated from: '<S68>/VeINVR_b_MCPB_CommFailFA'
     */
    /* Gateway: FsftINVR_e_MCPB_CommFail/FsftINVR_e_MCPB_CommFailChrt */
    /* During: FsftINVR_e_MCPB_CommFail/FsftINVR_e_MCPB_CommFailChrt */
    /* Entry Internal: FsftINVR_e_MCPB_CommFail/FsftINVR_e_MCPB_CommFailChrt */
    /* Transition: '<S280>:2' */
    (void)Rte_Write_VeINVR_b_MCPB_CommFailFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_e_MCPB_CommFail' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_e_MCPB_SPT_State(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_e_MCPB_SPT_State' */
    /* Merge: '<Root>/Merge_64' incorporates:
     *  Chart: '<S69>/FsftINVR_e_MCPB_SPT_StateChrt'
     *  SignalConversion generated from: '<S69>/VeINVR_b_MCPB_SPT_State_Sig_Rcvd_write'
     */
    /* Gateway: FsftINVR_e_MCPB_SPT_State/FsftINVR_e_MCPB_SPT_StateChrt */
    /* During: FsftINVR_e_MCPB_SPT_State/FsftINVR_e_MCPB_SPT_StateChrt */
    /* Entry Internal: FsftINVR_e_MCPB_SPT_State/FsftINVR_e_MCPB_SPT_StateChrt */
    /* Transition: '<S281>:2' */
    Rte_IrvWrite_FsftINVR_e_MCPB_SPT_State_VeINVR_b_MCPB_SPT_State_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_e_MCPB_SPT_State' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_e_MCPC_SPT_State(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_e_MCPC_SPT_State' */
    /* Merge: '<Root>/Merge_110' incorporates:
     *  Chart: '<S70>/FsftINVR_e_MCPC_SPT_StateChrt'
     *  SignalConversion generated from: '<S70>/VeINVR_b_MCPC_SPT_State_Sig_Rcvd_write'
     */
    /* Gateway: FsftINVR_e_MCPC_SPT_State/FsftINVR_e_MCPC_SPT_StateChrt */
    /* During: FsftINVR_e_MCPC_SPT_State/FsftINVR_e_MCPC_SPT_StateChrt */
    /* Entry Internal: FsftINVR_e_MCPC_SPT_State/FsftINVR_e_MCPC_SPT_StateChrt */
    /* Transition: '<S282>:2' */
    Rte_IrvWrite_FsftINVR_e_MCPC_SPT_State_VeINVR_b_MCPC_SPT_State_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_e_MCPC_SPT_State' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_e_MtrA_Dschrge_Stat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_e_MtrA_Dschrge_Stat' */
    /* Outport: '<Root>/VeINVR_b_MtrA_Dschrge_StatFA' incorporates:
     *  Chart: '<S71>/FsftINVR_e_MtrA_Dschrge_StatChrt'
     *  SignalConversion generated from: '<S71>/VeINVR_b_MtrA_Dschrge_StatFA_out'
     */
    /* Gateway: FsftINVR_e_MtrA_Dschrge_Stat/FsftINVR_e_MtrA_Dschrge_StatChrt */
    /* During: FsftINVR_e_MtrA_Dschrge_Stat/FsftINVR_e_MtrA_Dschrge_StatChrt */
    /* Entry Internal: FsftINVR_e_MtrA_Dschrge_Stat/FsftINVR_e_MtrA_Dschrge_StatChrt */
    /* Transition: '<S283>:2' */
    (void)Rte_Write_VeINVR_b_MtrA_Dschrge_StatFA_Value(true);

    /* Outport: '<Root>/VeINVR_e_MtrA_Dschrge_Stat' incorporates:
     *  Chart: '<S71>/FsftINVR_e_MtrA_Dschrge_StatChrt'
     *  SignalConversion generated from: '<S71>/VeINVR_e_MtrA_Dschrge_Stat_out'
     */
    (void)Rte_Write_VeINVR_e_MtrA_Dschrge_Stat_Value
        (KeINVR_e_MtrA_Dschrge_StatDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_e_MtrA_Dschrge_Stat' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_e_MtrA_InvrtrSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_e_MtrA_InvrtrSt' */
    /* Merge: '<Root>/Merge_46' incorporates:
     *  Chart: '<S72>/FsftINVR_e_MtrA_InvrtrStChrt'
     *  SignalConversion generated from: '<S72>/VeINVR_b_MtrA_InvrtrSt_Sig_Rcvd_write'
     */
    /* Gateway: FsftINVR_e_MtrA_InvrtrSt/FsftINVR_e_MtrA_InvrtrStChrt */
    /* During: FsftINVR_e_MtrA_InvrtrSt/FsftINVR_e_MtrA_InvrtrStChrt */
    /* Entry Internal: FsftINVR_e_MtrA_InvrtrSt/FsftINVR_e_MtrA_InvrtrStChrt */
    /* Transition: '<S284>:2' */
    Rte_IrvWrite_FsftINVR_e_MtrA_InvrtrSt_VeINVR_b_MtrA_InvrtrSt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_e_MtrA_InvrtrSt' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_e_MtrB_Dschrge_Stat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_e_MtrB_Dschrge_Stat' */
    /* Outport: '<Root>/VeINVR_b_MtrB_Dschrge_StatFA' incorporates:
     *  Chart: '<S73>/FsftINVR_e_MtrB_Dschrge_StatChrt'
     *  SignalConversion generated from: '<S73>/VeINVR_b_MtrB_Dschrge_StatFA_out'
     */
    /* Gateway: FsftINVR_e_MtrB_Dschrge_Stat/FsftINVR_e_MtrB_Dschrge_StatChrt */
    /* During: FsftINVR_e_MtrB_Dschrge_Stat/FsftINVR_e_MtrB_Dschrge_StatChrt */
    /* Entry Internal: FsftINVR_e_MtrB_Dschrge_Stat/FsftINVR_e_MtrB_Dschrge_StatChrt */
    /* Transition: '<S285>:2' */
    (void)Rte_Write_VeINVR_b_MtrB_Dschrge_StatFA_Value(true);

    /* Outport: '<Root>/VeINVR_e_MtrB_Dschrge_Stat' incorporates:
     *  Chart: '<S73>/FsftINVR_e_MtrB_Dschrge_StatChrt'
     *  SignalConversion generated from: '<S73>/VeINVR_e_MtrB_Dschrge_Stat_out'
     */
    (void)Rte_Write_VeINVR_e_MtrB_Dschrge_Stat_Value
        (KeINVR_e_MtrB_Dschrge_StatDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_e_MtrB_Dschrge_Stat' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_e_MtrB_InvrtrSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_e_MtrB_InvrtrSt' */
    /* Merge: '<Root>/Merge_94' incorporates:
     *  Chart: '<S74>/FsftINVR_e_MtrB_InvrtrStChrt'
     *  SignalConversion generated from: '<S74>/VeINVR_b_MtrB_InvrtrSt_Sig_Rcvd_write'
     */
    /* Gateway: FsftINVR_e_MtrB_InvrtrSt/FsftINVR_e_MtrB_InvrtrStChrt */
    /* During: FsftINVR_e_MtrB_InvrtrSt/FsftINVR_e_MtrB_InvrtrStChrt */
    /* Entry Internal: FsftINVR_e_MtrB_InvrtrSt/FsftINVR_e_MtrB_InvrtrStChrt */
    /* Transition: '<S286>:2' */
    Rte_IrvWrite_FsftINVR_e_MtrB_InvrtrSt_VeINVR_b_MtrB_InvrtrSt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_e_MtrB_InvrtrSt' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_e_MtrC_Dschrge_Stat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_e_MtrC_Dschrge_Stat' */
    /* Outport: '<Root>/VeINVR_b_MtrC_Dschrge_StatFA' incorporates:
     *  Chart: '<S75>/FsftINVR_e_MtrC_Dschrge_StatChrt'
     *  SignalConversion generated from: '<S75>/VeINVR_b_MtrC_Dschrge_StatFA_out'
     */
    /* Gateway: FsftINVR_e_MtrC_Dschrge_Stat/FsftINVR_e_MtrC_Dschrge_StatChrt */
    /* During: FsftINVR_e_MtrC_Dschrge_Stat/FsftINVR_e_MtrC_Dschrge_StatChrt */
    /* Entry Internal: FsftINVR_e_MtrC_Dschrge_Stat/FsftINVR_e_MtrC_Dschrge_StatChrt */
    /* Transition: '<S287>:2' */
    (void)Rte_Write_VeINVR_b_MtrC_Dschrge_StatFA_Value(true);

    /* Outport: '<Root>/VeINVR_e_MtrC_Dschrge_Stat' incorporates:
     *  Chart: '<S75>/FsftINVR_e_MtrC_Dschrge_StatChrt'
     *  SignalConversion generated from: '<S75>/VeINVR_e_MtrC_Dschrge_Stat_out'
     */
    (void)Rte_Write_VeINVR_e_MtrC_Dschrge_Stat_Value
        (KeINVR_e_MtrC_Dschrge_StatDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_e_MtrC_Dschrge_Stat' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_e_MtrC_InvrtrSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_e_MtrC_InvrtrSt' */
    /* Merge: '<Root>/Merge_130' incorporates:
     *  Chart: '<S76>/FsftINVR_e_MtrC_InvrtrStChrt'
     *  SignalConversion generated from: '<S76>/VeINVR_b_MtrC_InvrtrSt_Sig_Rcvd_write'
     */
    /* Gateway: FsftINVR_e_MtrC_InvrtrSt/FsftINVR_e_MtrC_InvrtrStChrt */
    /* During: FsftINVR_e_MtrC_InvrtrSt/FsftINVR_e_MtrC_InvrtrStChrt */
    /* Entry Internal: FsftINVR_e_MtrC_InvrtrSt/FsftINVR_e_MtrC_InvrtrStChrt */
    /* Transition: '<S288>:2' */
    Rte_IrvWrite_FsftINVR_e_MtrC_InvrtrSt_VeINVR_b_MtrC_InvrtrSt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_e_MtrC_InvrtrSt' */
}

/* Output function */
FUNC(void, INVR_CODE) FsftINVR_e_P2ModeSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftINVR_e_P2ModeSts' */
    /* Merge: '<Root>/Merge_106' incorporates:
     *  Chart: '<S77>/FsftINVR_e_P2ModeStsChrt'
     *  SignalConversion generated from: '<S77>/VeINVR_b_P2ModeSts_Sig_Rcvd_write'
     */
    /* Gateway: FsftINVR_e_P2ModeSts/FsftINVR_e_P2ModeStsChrt */
    /* During: FsftINVR_e_P2ModeSts/FsftINVR_e_P2ModeStsChrt */
    /* Entry Internal: FsftINVR_e_P2ModeSts/FsftINVR_e_P2ModeStsChrt */
    /* Transition: '<S289>:2' */
    Rte_IrvWrite_FsftINVR_e_P2ModeSts_VeINVR_b_P2ModeSts_Sig_Rcvd_write_IRV
        (false);

    /* Merge: '<Root>/Merge_107' incorporates:
     *  Chart: '<S77>/FsftINVR_e_P2ModeStsChrt'
     *  SignalConversion generated from: '<S77>/VeINVR_e_P2ModeSts_write'
     */
    Rte_IrvWrite_FsftINVR_e_P2ModeSts_VeINVR_e_P2ModeSts_write_IRV
        (KeINVR_e_P2ModeStsDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftINVR_e_P2ModeSts' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_I_MtrA_DC_Crnt(VAR(float32, AUTOMATIC)
    LeINVR_I_MtrA_DC_Crnt, VAR(boolean, AUTOMATIC) LeINVR_b_MtrA_DC_CrntFA)
{
    boolean rtb_LeINVR_b_MtrA_DC_CrntFA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_I_MtrA_DC_Crnt' */
    /* Chart: '<S80>/PokeINVR_I_MtrA_DC_CrntChrt' incorporates:
     *  SignalConversion generated from: '<S80>/LeINVR_I_MtrA_DC_Crnt'
     *  SignalConversion generated from: '<S80>/LeINVR_b_MtrA_DC_CrntFA'
     */
    /* Gateway: PokeINVR_I_MtrA_DC_Crnt/PokeINVR_I_MtrA_DC_CrntChrt */
    /* During: PokeINVR_I_MtrA_DC_Crnt/PokeINVR_I_MtrA_DC_CrntChrt */
    /* Entry Internal: PokeINVR_I_MtrA_DC_Crnt/PokeINVR_I_MtrA_DC_CrntChrt */
    /* Transition: '<S538>:2' */
    if (!LeINVR_b_MtrA_DC_CrntFA)
    {
        /* Transition: '<S538>:3' */
        /* Transition: '<S538>:15' */
        INVR_ac_B.LeINVR_I_MtrA_DC_Crnt_out = LeINVR_I_MtrA_DC_Crnt;
        rtb_LeINVR_b_MtrA_DC_CrntFA_out_h = false;

        /* Transition: '<S538>:18' */
    }
    else
    {
        /* Transition: '<S538>:4' */
        rtb_LeINVR_b_MtrA_DC_CrntFA_out_h = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrA_DC_CrntFA' incorporates:
     *  SignalConversion generated from: '<S80>/VeINVR_b_MtrA_DC_CrntFA'
     */
    (void)Rte_Write_VeINVR_b_MtrA_DC_CrntFA_Value
        (rtb_LeINVR_b_MtrA_DC_CrntFA_out_h);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S80>/VeINVR_I_MtrA_DC_Crnt_write'
     * */
    Rte_IrvWrite_PokeINVR_I_MtrA_DC_Crnt_VeINVR_I_MtrA_DC_Crnt_write_IRV
        (INVR_ac_B.LeINVR_I_MtrA_DC_Crnt_out);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  Chart: '<S80>/PokeINVR_I_MtrA_DC_CrntChrt'
     *  SignalConversion generated from: '<S80>/VeINVR_b_MtrA_DC_Crnt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_I_MtrA_DC_Crnt_VeINVR_b_MtrA_DC_Crnt_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_I_MtrA_DC_Crnt' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_I_MtrB_DC_Crnt(VAR(float32, AUTOMATIC)
    LeINVR_I_MtrB_DC_Crnt, VAR(boolean, AUTOMATIC) LeINVR_b_MtrB_DC_CrntFA)
{
    boolean rtb_LeINVR_b_MtrB_DC_CrntFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_I_MtrB_DC_Crnt' */
    /* Chart: '<S81>/PokeINVR_I_MtrB_DC_CrntChrt' incorporates:
     *  SignalConversion generated from: '<S81>/LeINVR_I_MtrB_DC_Crnt'
     *  SignalConversion generated from: '<S81>/LeINVR_b_MtrB_DC_CrntFA'
     */
    /* Gateway: PokeINVR_I_MtrB_DC_Crnt/PokeINVR_I_MtrB_DC_CrntChrt */
    /* During: PokeINVR_I_MtrB_DC_Crnt/PokeINVR_I_MtrB_DC_CrntChrt */
    /* Entry Internal: PokeINVR_I_MtrB_DC_Crnt/PokeINVR_I_MtrB_DC_CrntChrt */
    /* Transition: '<S539>:2' */
    if (!LeINVR_b_MtrB_DC_CrntFA)
    {
        /* Transition: '<S539>:3' */
        /* Transition: '<S539>:15' */
        INVR_ac_B.LeINVR_I_MtrB_DC_Crnt_out = LeINVR_I_MtrB_DC_Crnt;
        rtb_LeINVR_b_MtrB_DC_CrntFA_out_l = false;

        /* Transition: '<S539>:18' */
    }
    else
    {
        /* Transition: '<S539>:4' */
        rtb_LeINVR_b_MtrB_DC_CrntFA_out_l = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrB_DC_CrntFA' incorporates:
     *  SignalConversion generated from: '<S81>/VeINVR_b_MtrB_DC_CrntFA'
     */
    (void)Rte_Write_VeINVR_b_MtrB_DC_CrntFA_Value
        (rtb_LeINVR_b_MtrB_DC_CrntFA_out_l);

    /* Merge: '<Root>/Merge_89' incorporates:
     *  SignalConversion generated from: '<S81>/VeINVR_I_MtrB_DC_Crnt_write'
     * */
    Rte_IrvWrite_PokeINVR_I_MtrB_DC_Crnt_VeINVR_I_MtrB_DC_Crnt_write_IRV
        (INVR_ac_B.LeINVR_I_MtrB_DC_Crnt_out);

    /* Merge: '<Root>/Merge_87' incorporates:
     *  Chart: '<S81>/PokeINVR_I_MtrB_DC_CrntChrt'
     *  SignalConversion generated from: '<S81>/VeINVR_b_MtrB_DC_Crnt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_I_MtrB_DC_Crnt_VeINVR_b_MtrB_DC_Crnt_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_I_MtrB_DC_Crnt' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_I_MtrC_DC_Crnt(VAR(float32, AUTOMATIC)
    LeINVR_I_MtrC_DC_Crnt, VAR(boolean, AUTOMATIC) LeINVR_b_MtrC_DC_CrntFA)
{
    boolean rtb_LeINVR_b_MtrC_DC_CrntFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_I_MtrC_DC_Crnt' */
    /* Chart: '<S82>/PokeINVR_I_MtrC_DC_CrntChrt' incorporates:
     *  SignalConversion generated from: '<S82>/LeINVR_I_MtrC_DC_Crnt'
     *  SignalConversion generated from: '<S82>/LeINVR_b_MtrC_DC_CrntFA'
     */
    /* Gateway: PokeINVR_I_MtrC_DC_Crnt/PokeINVR_I_MtrC_DC_CrntChrt */
    /* During: PokeINVR_I_MtrC_DC_Crnt/PokeINVR_I_MtrC_DC_CrntChrt */
    /* Entry Internal: PokeINVR_I_MtrC_DC_Crnt/PokeINVR_I_MtrC_DC_CrntChrt */
    /* Transition: '<S540>:2' */
    if (!LeINVR_b_MtrC_DC_CrntFA)
    {
        /* Transition: '<S540>:3' */
        /* Transition: '<S540>:15' */
        INVR_ac_B.LeINVR_I_MtrC_DC_Crnt_out = LeINVR_I_MtrC_DC_Crnt;
        rtb_LeINVR_b_MtrC_DC_CrntFA_out_p = false;

        /* Transition: '<S540>:18' */
    }
    else
    {
        /* Transition: '<S540>:4' */
        rtb_LeINVR_b_MtrC_DC_CrntFA_out_p = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrC_DC_CrntFA' incorporates:
     *  SignalConversion generated from: '<S82>/VeINVR_b_MtrC_DC_CrntFA'
     */
    (void)Rte_Write_VeINVR_b_MtrC_DC_CrntFA_Value
        (rtb_LeINVR_b_MtrC_DC_CrntFA_out_p);

    /* Merge: '<Root>/Merge_125' incorporates:
     *  SignalConversion generated from: '<S82>/VeINVR_I_MtrC_DC_Crnt_write'
     * */
    Rte_IrvWrite_PokeINVR_I_MtrC_DC_Crnt_VeINVR_I_MtrC_DC_Crnt_write_IRV
        (INVR_ac_B.LeINVR_I_MtrC_DC_Crnt_out);

    /* Merge: '<Root>/Merge_123' incorporates:
     *  Chart: '<S82>/PokeINVR_I_MtrC_DC_CrntChrt'
     *  SignalConversion generated from: '<S82>/VeINVR_b_MtrC_DC_Crnt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_I_MtrC_DC_Crnt_VeINVR_b_MtrC_DC_Crnt_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_I_MtrC_DC_Crnt' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_P_BstCnvtrChrgPwrLmt(VAR(float32, AUTOMATIC)
    LeINVR_P_BstCnvtrChrgPwrLmt, VAR(boolean, AUTOMATIC)
    LeINVR_b_BstCnvtrChrgPwrLmtFA)
{
    boolean rtb_LeINVR_b_BstCnvtrChrgPwrLmtFA_out_c;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_P_BstCnvtrChrgPwrLmt' */
    /* Chart: '<S83>/PokeINVR_P_BstCnvtrChrgPwrLmtChrt' incorporates:
     *  SignalConversion generated from: '<S83>/LeINVR_P_BstCnvtrChrgPwrLmt'
     *  SignalConversion generated from: '<S83>/LeINVR_b_BstCnvtrChrgPwrLmtFA'
     */
    /* Gateway: PokeINVR_P_BstCnvtrChrgPwrLmt/PokeINVR_P_BstCnvtrChrgPwrLmtChrt */
    /* During: PokeINVR_P_BstCnvtrChrgPwrLmt/PokeINVR_P_BstCnvtrChrgPwrLmtChrt */
    /* Entry Internal: PokeINVR_P_BstCnvtrChrgPwrLmt/PokeINVR_P_BstCnvtrChrgPwrLmtChrt */
    /* Transition: '<S541>:2' */
    if (!LeINVR_b_BstCnvtrChrgPwrLmtFA)
    {
        /* Transition: '<S541>:3' */
        /* Transition: '<S541>:15' */
        INVR_ac_B.LeINVR_P_BstCnvtrChrgPwrLmt_out = LeINVR_P_BstCnvtrChrgPwrLmt;
        rtb_LeINVR_b_BstCnvtrChrgPwrLmtFA_out_c = false;

        /* Transition: '<S541>:18' */
    }
    else
    {
        /* Transition: '<S541>:4' */
        rtb_LeINVR_b_BstCnvtrChrgPwrLmtFA_out_c = true;
    }

    /* End of Chart: '<S83>/PokeINVR_P_BstCnvtrChrgPwrLmtChrt' */

    /* Outport: '<Root>/VeINVR_b_BstCnvtrChrgPwrLmtFA' incorporates:
     *  SignalConversion generated from: '<S83>/VeINVR_b_BstCnvtrChrgPwrLmtFA'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrChrgPwrLmtFA_Value
        (rtb_LeINVR_b_BstCnvtrChrgPwrLmtFA_out_c);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S83>/VeINVR_P_BstCnvtrChrgPwrLmt_write'
     * */
    Rte_IrvWrite_PokeINVR_P_BstCnvtrChrgPwrLmt_VeINVR_P_BstCnvtrChrgPwrLmt_Init_IRV
        (INVR_ac_B.LeINVR_P_BstCnvtrChrgPwrLmt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_P_BstCnvtrChrgPwrLmt' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_P_BstCnvtrChrgPwrLmt_ST(VAR(float32, AUTOMATIC)
    LeINVR_P_BstCnvtrChrgPwrLmt_ST, VAR(boolean, AUTOMATIC)
    LeINVR_b_BstCnvtrChrgPwrLmt_ST_FA)
{
    boolean rtb_LeINVR_b_BstCnvtrChrgPwrLmt_ST_FA__d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_P_BstCnvtrChrgPwrLmt_ST' */
    /* Chart: '<S84>/PokeINVR_P_BstCnvtrChrgPwrLmt_STChrt' incorporates:
     *  SignalConversion generated from: '<S84>/LeINVR_P_BstCnvtrChrgPwrLmt_ST'
     *  SignalConversion generated from: '<S84>/LeINVR_b_BstCnvtrChrgPwrLmtFA_ST'
     */
    /* Gateway: PokeINVR_P_BstCnvtrChrgPwrLmt_ST/PokeINVR_P_BstCnvtrChrgPwrLmt_STChrt */
    /* During: PokeINVR_P_BstCnvtrChrgPwrLmt_ST/PokeINVR_P_BstCnvtrChrgPwrLmt_STChrt */
    /* Entry Internal: PokeINVR_P_BstCnvtrChrgPwrLmt_ST/PokeINVR_P_BstCnvtrChrgPwrLmt_STChrt */
    /* Transition: '<S542>:2' */
    if (!LeINVR_b_BstCnvtrChrgPwrLmt_ST_FA)
    {
        /* Transition: '<S542>:3' */
        /* Transition: '<S542>:15' */
        INVR_ac_B.LeINVR_P_BstCnvtrChrgPwrLmt_ST_out =
            LeINVR_P_BstCnvtrChrgPwrLmt_ST;
        rtb_LeINVR_b_BstCnvtrChrgPwrLmt_ST_FA__d = false;

        /* Transition: '<S542>:18' */
    }
    else
    {
        /* Transition: '<S542>:4' */
        rtb_LeINVR_b_BstCnvtrChrgPwrLmt_ST_FA__d = true;
    }

    /* End of Chart: '<S84>/PokeINVR_P_BstCnvtrChrgPwrLmt_STChrt' */

    /* Outport: '<Root>/VeINVR_b_BstCnvtrChrgPwrLmt_ST_FA' incorporates:
     *  SignalConversion generated from: '<S84>/VeINVR_b_BstCnvtrChrgPwrLmt_ST_FA'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrChrgPwrLmt_ST_FA_Value
        (rtb_LeINVR_b_BstCnvtrChrgPwrLmt_ST_FA__d);

    /* Merge: '<Root>/Merge_152' incorporates:
     *  SignalConversion generated from: '<S84>/VeINVR_P_BstCnvtrChrgPwrLmt_ST_write'
     * */
    Rte_IrvWrite_PokeINVR_P_BstCnvtrChrgPwrLmt_ST_VeINVR_P_BstCnvtrChrgPwrLmt_ST_Init_IRV
        (INVR_ac_B.LeINVR_P_BstCnvtrChrgPwrLmt_ST_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_P_BstCnvtrChrgPwrLmt_ST' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_P_BstCnvtrDschrgPwrLmt(VAR(float32, AUTOMATIC)
    LeINVR_P_BstCnvtrDschrgPwrLmt, VAR(boolean, AUTOMATIC)
    LeINVR_b_BstCnvtrDschrgPwrLmtFA)
{
    boolean rtb_LeINVR_b_BstCnvtrDschrgPwrLmtFA_ou_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_P_BstCnvtrDschrgPwrLmt' */
    /* Chart: '<S85>/PokeINVR_P_BstCnvtrDschrgPwrLmtChrt' incorporates:
     *  SignalConversion generated from: '<S85>/LeINVR_P_BstCnvtrDschrgPwrLmt'
     *  SignalConversion generated from: '<S85>/LeINVR_b_BstCnvtrDschrgPwrLmtFA'
     */
    /* Gateway: PokeINVR_P_BstCnvtrDschrgPwrLmt/PokeINVR_P_BstCnvtrDschrgPwrLmtChrt */
    /* During: PokeINVR_P_BstCnvtrDschrgPwrLmt/PokeINVR_P_BstCnvtrDschrgPwrLmtChrt */
    /* Entry Internal: PokeINVR_P_BstCnvtrDschrgPwrLmt/PokeINVR_P_BstCnvtrDschrgPwrLmtChrt */
    /* Transition: '<S543>:2' */
    if (!LeINVR_b_BstCnvtrDschrgPwrLmtFA)
    {
        /* Transition: '<S543>:3' */
        /* Transition: '<S543>:15' */
        INVR_ac_B.LeINVR_P_BstCnvtrDschrgPwrLmt_out =
            LeINVR_P_BstCnvtrDschrgPwrLmt;
        rtb_LeINVR_b_BstCnvtrDschrgPwrLmtFA_ou_e = false;

        /* Transition: '<S543>:18' */
    }
    else
    {
        /* Transition: '<S543>:4' */
        rtb_LeINVR_b_BstCnvtrDschrgPwrLmtFA_ou_e = true;
    }

    /* End of Chart: '<S85>/PokeINVR_P_BstCnvtrDschrgPwrLmtChrt' */

    /* Outport: '<Root>/VeINVR_b_BstCnvtrDschrgPwrLmtFA' incorporates:
     *  SignalConversion generated from: '<S85>/VeINVR_b_BstCnvtrDschrgPwrLmtFA'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrDschrgPwrLmtFA_Value
        (rtb_LeINVR_b_BstCnvtrDschrgPwrLmtFA_ou_e);

    /* Merge: '<Root>/Merge_151' incorporates:
     *  SignalConversion generated from: '<S85>/VeINVR_P_BstCnvtrDschrgPwrLmt_write'
     * */
    Rte_IrvWrite_PokeINVR_P_BstCnvtrDschrgPwrLmt_VeINVR_P_BstCnvtrDschrgPwrLmt_Init_IRV
        (INVR_ac_B.LeINVR_P_BstCnvtrDschrgPwrLmt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_P_BstCnvtrDschrgPwrLmt' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_P_BstCnvtrDschrgPwrLmt_ST(VAR(float32, AUTOMATIC)
    LeINVR_P_BstCnvtrDschrgPwrLmt_ST, VAR(boolean, AUTOMATIC)
    LeINVR_b_BstCnvtrDschrgPwrLmt_ST_FA)
{
    boolean rtb_LeINVR_b_BstCnvtrDschrgPwrLmt_ST_F_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_P_BstCnvtrDschrgPwrLmt_ST' */
    /* Chart: '<S86>/PokeINVR_P_BstCnvtrDschrgPwrLmt_STChrt' incorporates:
     *  SignalConversion generated from: '<S86>/LeINVR_P_BstCnvtrDschrgPwrLmt_ST'
     *  SignalConversion generated from: '<S86>/LeINVR_b_BstCnvtrDschrgPwrLmtFA_ST'
     */
    /* Gateway: PokeINVR_P_BstCnvtrDschrgPwrLmt_ST/PokeINVR_P_BstCnvtrDschrgPwrLmt_STChrt */
    /* During: PokeINVR_P_BstCnvtrDschrgPwrLmt_ST/PokeINVR_P_BstCnvtrDschrgPwrLmt_STChrt */
    /* Entry Internal: PokeINVR_P_BstCnvtrDschrgPwrLmt_ST/PokeINVR_P_BstCnvtrDschrgPwrLmt_STChrt */
    /* Transition: '<S544>:2' */
    if (!LeINVR_b_BstCnvtrDschrgPwrLmt_ST_FA)
    {
        /* Transition: '<S544>:3' */
        /* Transition: '<S544>:15' */
        INVR_ac_B.LeINVR_P_BstCnvtrDschrgPwrLmt_ST_out =
            LeINVR_P_BstCnvtrDschrgPwrLmt_ST;
        rtb_LeINVR_b_BstCnvtrDschrgPwrLmt_ST_F_l = false;

        /* Transition: '<S544>:18' */
    }
    else
    {
        /* Transition: '<S544>:4' */
        rtb_LeINVR_b_BstCnvtrDschrgPwrLmt_ST_F_l = true;
    }

    /* End of Chart: '<S86>/PokeINVR_P_BstCnvtrDschrgPwrLmt_STChrt' */

    /* Outport: '<Root>/VeINVR_b_BstCnvtrDschrgPwrLmt_ST_FA' incorporates:
     *  SignalConversion generated from: '<S86>/VeINVR_b_BstCnvtrDschrgPwrLmt_ST_FA'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrDschrgPwrLmt_ST_FA_Value
        (rtb_LeINVR_b_BstCnvtrDschrgPwrLmt_ST_F_l);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S86>/VeINVR_P_BstCnvtrDschrgPwrLmt_ST_write'
     * */
    Rte_IrvWrite_PokeINVR_P_BstCnvtrDschrgPwrLmt_ST_VeINVR_P_BstCnvtrDschrgPwrLmt_ST_Init_IRV
        (INVR_ac_B.LeINVR_P_BstCnvtrDschrgPwrLmt_ST_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_P_BstCnvtrDschrgPwrLmt_ST' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_BstCnvtrLwrIGBT_TmpFltd(VAR(float32, AUTOMATIC)
    LeINVR_T_BstCnvtrLwrIGBT_TmpFltd, VAR(boolean, AUTOMATIC)
    LeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA)
{
    boolean rtb_LeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_BstCnvtrLwrIGBT_TmpFltd' */
    /* Chart: '<S87>/PokeINVR_T_BstCnvtrLwrIGBT_TmpFltdChrt' incorporates:
     *  SignalConversion generated from: '<S87>/LeINVR_T_BstCnvtrLwrIGBT_TmpFltd'
     *  SignalConversion generated from: '<S87>/LeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA'
     */
    /* Gateway: PokeINVR_T_BstCnvtrLwrIGBT_TmpFltd/PokeINVR_T_BstCnvtrLwrIGBT_TmpFltdChrt */
    /* During: PokeINVR_T_BstCnvtrLwrIGBT_TmpFltd/PokeINVR_T_BstCnvtrLwrIGBT_TmpFltdChrt */
    /* Entry Internal: PokeINVR_T_BstCnvtrLwrIGBT_TmpFltd/PokeINVR_T_BstCnvtrLwrIGBT_TmpFltdChrt */
    /* Transition: '<S545>:32' */
    if (!LeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA)
    {
        /* Transition: '<S545>:3' */
        /* Transition: '<S545>:15' */
        INVR_ac_B.LeINVR_T_BstCnvtrLwrIGBT_TmpFltd_out =
            LeINVR_T_BstCnvtrLwrIGBT_TmpFltd;
        rtb_LeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA_a = false;

        /* Transition: '<S545>:18' */
    }
    else
    {
        /* Transition: '<S545>:4' */
        rtb_LeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA_a = true;
    }

    /* End of Chart: '<S87>/PokeINVR_T_BstCnvtrLwrIGBT_TmpFltdChrt' */

    /* Outport: '<Root>/VeINVR_T_BstCnvtrLwrIGBT_TmpFltd' incorporates:
     *  SignalConversion generated from: '<S87>/VeINVR_T_BstCnvtrLwrIGBT_TmpFltd'
     */
    (void)Rte_Write_VeINVR_T_BstCnvtrLwrIGBT_TmpFltd_Value
        (INVR_ac_B.LeINVR_T_BstCnvtrLwrIGBT_TmpFltd_out);

    /* Outport: '<Root>/VeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA' incorporates:
     *  SignalConversion generated from: '<S87>/VeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA_Value
        (rtb_LeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA_a);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_BstCnvtrLwrIGBT_TmpFltd' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_BstCnvtrReactorTmp(VAR(float32, AUTOMATIC)
    LeINVR_T_BstCnvtrReactorTmp, VAR(boolean, AUTOMATIC)
    LeINVR_b_BstCnvtrReactorTmpFA)
{
    boolean rtb_LeINVR_b_BstCnvtrReactorTmpFA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_BstCnvtrReactorTmp' */
    /* Chart: '<S88>/PokeINVR_T_BstCnvtrReactorTmpChrt' incorporates:
     *  SignalConversion generated from: '<S88>/LeINVR_T_BstCnvtrReactorTmp'
     *  SignalConversion generated from: '<S88>/LeINVR_b_BstCnvtrReactorTmpFA'
     */
    /* Gateway: PokeINVR_T_BstCnvtrReactorTmp/PokeINVR_T_BstCnvtrReactorTmpChrt */
    /* During: PokeINVR_T_BstCnvtrReactorTmp/PokeINVR_T_BstCnvtrReactorTmpChrt */
    /* Entry Internal: PokeINVR_T_BstCnvtrReactorTmp/PokeINVR_T_BstCnvtrReactorTmpChrt */
    /* Transition: '<S546>:32' */
    if (!LeINVR_b_BstCnvtrReactorTmpFA)
    {
        /* Transition: '<S546>:3' */
        /* Transition: '<S546>:15' */
        INVR_ac_B.LeINVR_T_BstCnvtrReactorTmp_out = LeINVR_T_BstCnvtrReactorTmp;
        rtb_LeINVR_b_BstCnvtrReactorTmpFA_out_k = false;

        /* Transition: '<S546>:18' */
    }
    else
    {
        /* Transition: '<S546>:4' */
        rtb_LeINVR_b_BstCnvtrReactorTmpFA_out_k = true;
    }

    /* End of Chart: '<S88>/PokeINVR_T_BstCnvtrReactorTmpChrt' */

    /* Outport: '<Root>/VeINVR_T_BstCnvtrReactorTmp' incorporates:
     *  SignalConversion generated from: '<S88>/VeINVR_T_BstCnvtrReactorTmp'
     */
    (void)Rte_Write_VeINVR_T_BstCnvtrReactorTmp_Value
        (INVR_ac_B.LeINVR_T_BstCnvtrReactorTmp_out);

    /* Outport: '<Root>/VeINVR_b_BstCnvtrReactorTmpFA' incorporates:
     *  SignalConversion generated from: '<S88>/VeINVR_b_BstCnvtrReactorTmpFA'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrReactorTmpFA_Value
        (rtb_LeINVR_b_BstCnvtrReactorTmpFA_out_k);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_BstCnvtrReactorTmp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_BstCnvtrUpprIGBT_TmpFltd(VAR(float32, AUTOMATIC)
    LeINVR_T_BstCnvtrUpprIGBT_TmpFltd, VAR(boolean, AUTOMATIC)
    LeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA)
{
    boolean rtb_LeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA_;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_BstCnvtrUpprIGBT_TmpFltd' */
    /* Chart: '<S89>/PokeINVR_T_BstCnvtrUpprIGBT_TmpFltdChrt' incorporates:
     *  SignalConversion generated from: '<S89>/LeINVR_T_BstCnvtrUpprIGBT_TmpFltd'
     *  SignalConversion generated from: '<S89>/LeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA'
     */
    /* Gateway: PokeINVR_T_BstCnvtrUpprIGBT_TmpFltd/PokeINVR_T_BstCnvtrUpprIGBT_TmpFltdChrt */
    /* During: PokeINVR_T_BstCnvtrUpprIGBT_TmpFltd/PokeINVR_T_BstCnvtrUpprIGBT_TmpFltdChrt */
    /* Entry Internal: PokeINVR_T_BstCnvtrUpprIGBT_TmpFltd/PokeINVR_T_BstCnvtrUpprIGBT_TmpFltdChrt */
    /* Transition: '<S547>:32' */
    if (!LeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA)
    {
        /* Transition: '<S547>:3' */
        /* Transition: '<S547>:15' */
        INVR_ac_B.LeINVR_T_BstCnvtrUpprIGBT_TmpFltd_out =
            LeINVR_T_BstCnvtrUpprIGBT_TmpFltd;
        rtb_LeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA_ = false;

        /* Transition: '<S547>:18' */
    }
    else
    {
        /* Transition: '<S547>:4' */
        rtb_LeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA_ = true;
    }

    /* End of Chart: '<S89>/PokeINVR_T_BstCnvtrUpprIGBT_TmpFltdChrt' */

    /* Outport: '<Root>/VeINVR_T_BstCnvtrUpprIGBT_TmpFltd' incorporates:
     *  SignalConversion generated from: '<S89>/VeINVR_T_BstCnvtrUpprIGBT_TmpFltd'
     */
    (void)Rte_Write_VeINVR_T_BstCnvtrUpprIGBT_TmpFltd_Value
        (INVR_ac_B.LeINVR_T_BstCnvtrUpprIGBT_TmpFltd_out);

    /* Outport: '<Root>/VeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA' incorporates:
     *  SignalConversion generated from: '<S89>/VeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA_Value
        (rtb_LeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA_);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_BstCnvtrUpprIGBT_TmpFltd' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_GPIMACBusBarTemp(VAR(float32, AUTOMATIC)
    LeINVR_T_GPIMACBusBarTemp, VAR(boolean, AUTOMATIC)
    LeINVR_b_GPIMACBusBarTempFA)
{
    boolean rtb_LeINVR_b_GPIMACBusBarTempFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_GPIMACBusBarTemp' */
    /* Chart: '<S90>/PokeINVR_T_GPIMACBusBarTempChrt' incorporates:
     *  SignalConversion generated from: '<S90>/LeINVR_T_GPIMACBusBarTemp'
     *  SignalConversion generated from: '<S90>/LeINVR_b_GPIMACBusBarTempFA'
     */
    /* Gateway: PokeINVR_T_GPIMACBusBarTemp/PokeINVR_T_GPIMACBusBarTempChrt */
    /* During: PokeINVR_T_GPIMACBusBarTemp/PokeINVR_T_GPIMACBusBarTempChrt */
    /* Entry Internal: PokeINVR_T_GPIMACBusBarTemp/PokeINVR_T_GPIMACBusBarTempChrt */
    /* Transition: '<S548>:2' */
    if (!LeINVR_b_GPIMACBusBarTempFA)
    {
        /* Transition: '<S548>:3' */
        /* Transition: '<S548>:15' */
        INVR_ac_B.LeINVR_T_GPIMACBusBarTemp_out = LeINVR_T_GPIMACBusBarTemp;
        rtb_LeINVR_b_GPIMACBusBarTempFA_out_b = false;

        /* Transition: '<S548>:18' */
    }
    else
    {
        /* Transition: '<S548>:4' */
        rtb_LeINVR_b_GPIMACBusBarTempFA_out_b = true;
    }

    /* End of Chart: '<S90>/PokeINVR_T_GPIMACBusBarTempChrt' */

    /* Outport: '<Root>/VeINVR_T_GPIMACBusBarTemp' incorporates:
     *  SignalConversion generated from: '<S90>/VeINVR_T_GPIMACBusBarTemp'
     */
    (void)Rte_Write_VeINVR_T_GPIMACBusBarTemp_Value
        (INVR_ac_B.LeINVR_T_GPIMACBusBarTemp_out);

    /* Outport: '<Root>/VeINVR_b_GPIMACBusBarTempFA' incorporates:
     *  SignalConversion generated from: '<S90>/VeINVR_b_GPIMACBusBarTempFA'
     */
    (void)Rte_Write_VeINVR_b_GPIMACBusBarTempFA_Value
        (rtb_LeINVR_b_GPIMACBusBarTempFA_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_GPIMACBusBarTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_GPIMDCBusBarTemp(VAR(float32, AUTOMATIC)
    LeINVR_T_GPIMDCBusBarTemp, VAR(boolean, AUTOMATIC)
    LeINVR_b_GPIMDCBusBarTempFA)
{
    boolean rtb_LeINVR_b_GPIMDCBusBarTempFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_GPIMDCBusBarTemp' */
    /* Chart: '<S91>/PokeINVR_T_GPIMDCBusBarTempChrt' incorporates:
     *  SignalConversion generated from: '<S91>/LeINVR_T_GPIMDCBusBarTemp'
     *  SignalConversion generated from: '<S91>/LeINVR_b_GPIMDCBusBarTempFA'
     */
    /* Gateway: PokeINVR_T_GPIMDCBusBarTemp/PokeINVR_T_GPIMDCBusBarTempChrt */
    /* During: PokeINVR_T_GPIMDCBusBarTemp/PokeINVR_T_GPIMDCBusBarTempChrt */
    /* Entry Internal: PokeINVR_T_GPIMDCBusBarTemp/PokeINVR_T_GPIMDCBusBarTempChrt */
    /* Transition: '<S549>:2' */
    if (!LeINVR_b_GPIMDCBusBarTempFA)
    {
        /* Transition: '<S549>:3' */
        /* Transition: '<S549>:15' */
        INVR_ac_B.LeINVR_T_GPIMDCBusBarTemp_out = LeINVR_T_GPIMDCBusBarTemp;
        rtb_LeINVR_b_GPIMDCBusBarTempFA_out_n = false;

        /* Transition: '<S549>:18' */
    }
    else
    {
        /* Transition: '<S549>:4' */
        rtb_LeINVR_b_GPIMDCBusBarTempFA_out_n = true;
    }

    /* End of Chart: '<S91>/PokeINVR_T_GPIMDCBusBarTempChrt' */

    /* Outport: '<Root>/VeINVR_T_GPIMDCBusBarTemp' incorporates:
     *  SignalConversion generated from: '<S91>/VeINVR_T_GPIMDCBusBarTemp'
     */
    (void)Rte_Write_VeINVR_T_GPIMDCBusBarTemp_Value
        (INVR_ac_B.LeINVR_T_GPIMDCBusBarTemp_out);

    /* Outport: '<Root>/VeINVR_b_GPIMDCBusBarTempFA' incorporates:
     *  SignalConversion generated from: '<S91>/VeINVR_b_GPIMDCBusBarTempFA'
     */
    (void)Rte_Write_VeINVR_b_GPIMDCBusBarTempFA_Value
        (rtb_LeINVR_b_GPIMDCBusBarTempFA_out_n);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_GPIMDCBusBarTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrA_CapctrTemp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrA_CapctrTemp, VAR(boolean, AUTOMATIC) LeINVR_b_MtrA_CapctrTempFA)
{
    boolean rtb_LeINVR_b_MtrA_CapctrTempFA_out_g;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrA_CapctrTemp' */
    /* Chart: '<S92>/PokeINVR_T_MtrA_CapctrTempChrt' incorporates:
     *  SignalConversion generated from: '<S92>/LeINVR_T_MtrA_CapctrTemp'
     *  SignalConversion generated from: '<S92>/LeINVR_b_MtrA_CapctrTempFA'
     */
    /* Gateway: PokeINVR_T_MtrA_CapctrTemp/PokeINVR_T_MtrA_CapctrTempChrt */
    /* During: PokeINVR_T_MtrA_CapctrTemp/PokeINVR_T_MtrA_CapctrTempChrt */
    /* Entry Internal: PokeINVR_T_MtrA_CapctrTemp/PokeINVR_T_MtrA_CapctrTempChrt */
    /* Transition: '<S550>:2' */
    if (!LeINVR_b_MtrA_CapctrTempFA)
    {
        /* Transition: '<S550>:3' */
        /* Transition: '<S550>:15' */
        INVR_ac_B.LeINVR_T_MtrA_CapctrTemp_out = LeINVR_T_MtrA_CapctrTemp;
        rtb_LeINVR_b_MtrA_CapctrTempFA_out_g = false;

        /* Transition: '<S550>:18' */
    }
    else
    {
        /* Transition: '<S550>:4' */
        rtb_LeINVR_b_MtrA_CapctrTempFA_out_g = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrA_CapctrTemp_FA' incorporates:
     *  SignalConversion generated from: '<S92>/VeINVR_b_MtrA_CapctrTempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrA_CapctrTemp_FA_Value
        (rtb_LeINVR_b_MtrA_CapctrTempFA_out_g);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S92>/VeINVR_T_MtrA_CapctrTemp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrA_CapctrTemp_VeINVR_T_MtrA_CapctrTemp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrA_CapctrTemp_out);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  Chart: '<S92>/PokeINVR_T_MtrA_CapctrTempChrt'
     *  SignalConversion generated from: '<S92>/VeINVR_b_MtrA_CapctrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrA_CapctrTemp_VeINVR_b_MtrA_CapctrTemp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrA_CapctrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrA_ClntIn_Temp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrA_ClntIn_Temp, VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_ClntIn_TempFA)
{
    boolean rtb_LeINVR_b_MtrA_ClntIn_TempFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrA_ClntIn_Temp' */
    /* Chart: '<S93>/PokeINVR_T_MtrA_ClntIn_TempChrt' incorporates:
     *  SignalConversion generated from: '<S93>/LeINVR_T_MtrA_ClntIn_Temp'
     *  SignalConversion generated from: '<S93>/LeINVR_b_MtrA_ClntIn_TempFA'
     */
    /* Gateway: PokeINVR_T_MtrA_ClntIn_Temp/PokeINVR_T_MtrA_ClntIn_TempChrt */
    /* During: PokeINVR_T_MtrA_ClntIn_Temp/PokeINVR_T_MtrA_ClntIn_TempChrt */
    /* Entry Internal: PokeINVR_T_MtrA_ClntIn_Temp/PokeINVR_T_MtrA_ClntIn_TempChrt */
    /* Transition: '<S551>:2' */
    if (!LeINVR_b_MtrA_ClntIn_TempFA)
    {
        /* Transition: '<S551>:3' */
        /* Transition: '<S551>:15' */
        INVR_ac_B.LeINVR_T_MtrA_ClntIn_Temp_out = LeINVR_T_MtrA_ClntIn_Temp;
        rtb_LeINVR_b_MtrA_ClntIn_TempFA_out_b = false;

        /* Transition: '<S551>:18' */
    }
    else
    {
        /* Transition: '<S551>:4' */
        rtb_LeINVR_b_MtrA_ClntIn_TempFA_out_b = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrA_ClntIn_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S93>/VeINVR_b_MtrA_ClntIn_TempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrA_ClntIn_Temp_FA_Value
        (rtb_LeINVR_b_MtrA_ClntIn_TempFA_out_b);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S93>/VeINVR_T_MtrA_ClntIn_Temp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrA_ClntIn_Temp_VeINVR_T_MtrA_ClntIn_Temp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrA_ClntIn_Temp_out);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S93>/PokeINVR_T_MtrA_ClntIn_TempChrt'
     *  SignalConversion generated from: '<S93>/VeINVR_b_MtrA_ClntIn_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrA_ClntIn_Temp_VeINVR_b_MtrA_ClntIn_Temp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrA_ClntIn_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrA_ClntOut_Temp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrA_ClntOut_Temp, VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_ClntOut_TempFA)
{
    boolean rtb_LeINVR_b_MtrA_ClntOut_TempFA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrA_ClntOut_Temp' */
    /* Chart: '<S94>/PokeINVR_T_MtrA_ClntOut_TempChrt' incorporates:
     *  SignalConversion generated from: '<S94>/LeINVR_T_MtrA_ClntOut_Temp'
     *  SignalConversion generated from: '<S94>/LeINVR_b_MtrA_ClntOut_TempFA'
     */
    /* Gateway: PokeINVR_T_MtrA_ClntOut_Temp/PokeINVR_T_MtrA_ClntOut_TempChrt */
    /* During: PokeINVR_T_MtrA_ClntOut_Temp/PokeINVR_T_MtrA_ClntOut_TempChrt */
    /* Entry Internal: PokeINVR_T_MtrA_ClntOut_Temp/PokeINVR_T_MtrA_ClntOut_TempChrt */
    /* Transition: '<S552>:2' */
    if (!LeINVR_b_MtrA_ClntOut_TempFA)
    {
        /* Transition: '<S552>:3' */
        /* Transition: '<S552>:15' */
        INVR_ac_B.LeINVR_T_MtrA_ClntOut_Temp_out = LeINVR_T_MtrA_ClntOut_Temp;
        rtb_LeINVR_b_MtrA_ClntOut_TempFA_out_h = false;

        /* Transition: '<S552>:18' */
    }
    else
    {
        /* Transition: '<S552>:4' */
        rtb_LeINVR_b_MtrA_ClntOut_TempFA_out_h = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrA_ClntOut_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S94>/VeINVR_b_MtrA_ClntOut_TempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrA_ClntOut_Temp_FA_Value
        (rtb_LeINVR_b_MtrA_ClntOut_TempFA_out_h);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S94>/VeINVR_T_MtrA_ClntOut_Temp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrA_ClntOut_Temp_VeINVR_T_MtrA_ClntOut_Temp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrA_ClntOut_Temp_out);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  Chart: '<S94>/PokeINVR_T_MtrA_ClntOut_TempChrt'
     *  SignalConversion generated from: '<S94>/VeINVR_b_MtrA_ClntOut_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrA_ClntOut_Temp_VeINVR_b_MtrA_ClntOut_Temp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrA_ClntOut_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrA_CoolantTemp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrA_CoolantTemp, VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_CoolantTempFA)
{
    boolean rtb_LeINVR_b_MtrA_CoolantTempFA_out_j;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrA_CoolantTemp' */
    /* Chart: '<S95>/PokeINVR_T_MtrA_CoolantTempChrt' incorporates:
     *  SignalConversion generated from: '<S95>/LeINVR_T_MtrA_CoolantTemp'
     *  SignalConversion generated from: '<S95>/LeINVR_b_MtrA_CoolantTempFA'
     */
    /* Gateway: PokeINVR_T_MtrA_CoolantTemp/PokeINVR_T_MtrA_CoolantTempChrt */
    /* During: PokeINVR_T_MtrA_CoolantTemp/PokeINVR_T_MtrA_CoolantTempChrt */
    /* Entry Internal: PokeINVR_T_MtrA_CoolantTemp/PokeINVR_T_MtrA_CoolantTempChrt */
    /* Transition: '<S553>:2' */
    if (!LeINVR_b_MtrA_CoolantTempFA)
    {
        /* Transition: '<S553>:3' */
        /* Transition: '<S553>:15' */
        INVR_ac_B.LeINVR_T_MtrA_CoolantTemp_out = LeINVR_T_MtrA_CoolantTemp;
        rtb_LeINVR_b_MtrA_CoolantTempFA_out_j = false;

        /* Transition: '<S553>:18' */
    }
    else
    {
        /* Transition: '<S553>:4' */
        rtb_LeINVR_b_MtrA_CoolantTempFA_out_j = true;
    }

    /* End of Chart: '<S95>/PokeINVR_T_MtrA_CoolantTempChrt' */

    /* Outport: '<Root>/VeINVR_T_MtrA_CoolantTemp' incorporates:
     *  SignalConversion generated from: '<S95>/VeINVR_T_MtrA_CoolantTemp'
     */
    (void)Rte_Write_VeINVR_T_MtrA_CoolantTemp_Value
        (INVR_ac_B.LeINVR_T_MtrA_CoolantTemp_out);

    /* Outport: '<Root>/VeINVR_b_MtrA_CoolantTempFA' incorporates:
     *  SignalConversion generated from: '<S95>/VeINVR_b_MtrA_CoolantTempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrA_CoolantTempFA_Value
        (rtb_LeINVR_b_MtrA_CoolantTempFA_out_j);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrA_CoolantTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrA_CtrlBoard_Temp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrA_CtrlBoard_Temp, VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_CtrlBoard_TempFA)
{
    boolean rtb_LeINVR_b_MtrA_CtrlBoard_TempFA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrA_CtrlBoard_Temp' */
    /* Chart: '<S96>/PokeINVR_T_MtrA_CtrlBoard_TempChrt' incorporates:
     *  SignalConversion generated from: '<S96>/LeINVR_T_MtrA_CtrlBoard_Temp'
     *  SignalConversion generated from: '<S96>/LeINVR_b_MtrA_CtrlBoard_TempFA'
     */
    /* Gateway: PokeINVR_T_MtrA_CtrlBoard_Temp/PokeINVR_T_MtrA_CtrlBoard_TempChrt */
    /* During: PokeINVR_T_MtrA_CtrlBoard_Temp/PokeINVR_T_MtrA_CtrlBoard_TempChrt */
    /* Entry Internal: PokeINVR_T_MtrA_CtrlBoard_Temp/PokeINVR_T_MtrA_CtrlBoard_TempChrt */
    /* Transition: '<S554>:2' */
    if (!LeINVR_b_MtrA_CtrlBoard_TempFA)
    {
        /* Transition: '<S554>:3' */
        /* Transition: '<S554>:15' */
        INVR_ac_B.LeINVR_T_MtrA_CtrlBoard_Temp_out =
            LeINVR_T_MtrA_CtrlBoard_Temp;
        rtb_LeINVR_b_MtrA_CtrlBoard_TempFA_out_f = false;

        /* Transition: '<S554>:18' */
    }
    else
    {
        /* Transition: '<S554>:4' */
        rtb_LeINVR_b_MtrA_CtrlBoard_TempFA_out_f = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrA_CtrlBoard_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S96>/VeINVR_b_MtrA_CtrlBoard_TempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrA_CtrlBoard_Temp_FA_Value
        (rtb_LeINVR_b_MtrA_CtrlBoard_TempFA_out_f);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S96>/VeINVR_T_MtrA_CtrlBoard_Temp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrA_CtrlBoard_Temp_VeINVR_T_MtrA_CtrlBoard_Temp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrA_CtrlBoard_Temp_out);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  Chart: '<S96>/PokeINVR_T_MtrA_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S96>/VeINVR_b_MtrA_CtrlBoard_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrA_CtrlBoard_Temp_VeINVR_b_MtrA_CtrlBoard_Temp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrA_CtrlBoard_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrA_InvrtrTemp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrA_InvrtrTemp, VAR(boolean, AUTOMATIC) LeINVR_b_MtrA_InvrtrTempFA)
{
    boolean rtb_LeINVR_b_MtrA_InvrtrTempFA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrA_InvrtrTemp' */
    /* Chart: '<S97>/PokeINVR_T_MtrA_InvrtrTempChrt' incorporates:
     *  SignalConversion generated from: '<S97>/LeINVR_T_MtrA_InvrtrTemp'
     *  SignalConversion generated from: '<S97>/LeINVR_b_MtrA_InvrtrTempFA'
     */
    /* Gateway: PokeINVR_T_MtrA_InvrtrTemp/PokeINVR_T_MtrA_InvrtrTempChrt */
    /* During: PokeINVR_T_MtrA_InvrtrTemp/PokeINVR_T_MtrA_InvrtrTempChrt */
    /* Entry Internal: PokeINVR_T_MtrA_InvrtrTemp/PokeINVR_T_MtrA_InvrtrTempChrt */
    /* Transition: '<S555>:2' */
    if (!LeINVR_b_MtrA_InvrtrTempFA)
    {
        /* Transition: '<S555>:3' */
        /* Transition: '<S555>:15' */
        INVR_ac_B.LeINVR_T_MtrA_InvrtrTemp_out = LeINVR_T_MtrA_InvrtrTemp;
        rtb_LeINVR_b_MtrA_InvrtrTempFA_out_a = false;

        /* Transition: '<S555>:18' */
    }
    else
    {
        /* Transition: '<S555>:4' */
        rtb_LeINVR_b_MtrA_InvrtrTempFA_out_a = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrA_InvrtrTempFA' incorporates:
     *  SignalConversion generated from: '<S97>/VeINVR_b_MtrA_InvrtrTempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrA_InvrtrTempFA_Value
        (rtb_LeINVR_b_MtrA_InvrtrTempFA_out_a);

    /* Merge: '<Root>/Merge_50' incorporates:
     *  SignalConversion generated from: '<S97>/VeINVR_T_MtrA_InvrtrTemp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrA_InvrtrTemp_VeINVR_T_MtrA_InvrtrTemp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrA_InvrtrTemp_out);

    /* Merge: '<Root>/Merge_48' incorporates:
     *  Chart: '<S97>/PokeINVR_T_MtrA_InvrtrTempChrt'
     *  SignalConversion generated from: '<S97>/VeINVR_b_MtrA_InvrtrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrA_InvrtrTemp_VeINVR_b_MtrA_InvrtrTemp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrA_InvrtrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrA_RotrTemp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrA_RotrTemp, VAR(boolean, AUTOMATIC) LeINVR_b_MtrA_RotrTempFA)
{
    boolean rtb_LeINVR_b_MtrA_RotrTempFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrA_RotrTemp' */
    /* Chart: '<S98>/PokeINVR_T_MtrA_RotrTempChrt' incorporates:
     *  SignalConversion generated from: '<S98>/LeINVR_T_MtrA_RotrTemp'
     *  SignalConversion generated from: '<S98>/LeINVR_b_MtrA_RotrTempFA'
     */
    /* Gateway: PokeINVR_T_MtrA_RotrTemp/PokeINVR_T_MtrA_RotrTempChrt */
    /* During: PokeINVR_T_MtrA_RotrTemp/PokeINVR_T_MtrA_RotrTempChrt */
    /* Entry Internal: PokeINVR_T_MtrA_RotrTemp/PokeINVR_T_MtrA_RotrTempChrt */
    /* Transition: '<S556>:2' */
    if (!LeINVR_b_MtrA_RotrTempFA)
    {
        /* Transition: '<S556>:3' */
        /* Transition: '<S556>:15' */
        INVR_ac_B.LeINVR_T_MtrA_RotrTemp_out = LeINVR_T_MtrA_RotrTemp;
        rtb_LeINVR_b_MtrA_RotrTempFA_out_p = false;

        /* Transition: '<S556>:18' */
    }
    else
    {
        /* Transition: '<S556>:4' */
        rtb_LeINVR_b_MtrA_RotrTempFA_out_p = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrA_RotrTemp_FA' incorporates:
     *  SignalConversion generated from: '<S98>/VeINVR_b_MtrA_RotrTempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrA_RotrTemp_FA_Value
        (rtb_LeINVR_b_MtrA_RotrTempFA_out_p);

    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S98>/VeINVR_T_MtrA_RotrTemp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrA_RotrTemp_VeINVR_T_MtrA_RotrTemp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrA_RotrTemp_out);

    /* Merge: '<Root>/Merge_51' incorporates:
     *  Chart: '<S98>/PokeINVR_T_MtrA_RotrTempChrt'
     *  SignalConversion generated from: '<S98>/VeINVR_b_MtrA_RotrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrA_RotrTemp_VeINVR_b_MtrA_RotrTemp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrA_RotrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrA_Temp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrA_Temp, VAR(boolean, AUTOMATIC) LeINVR_b_MtrA_TempFA)
{
    boolean rtb_LeINVR_b_MtrA_TempFA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrA_Temp' */
    /* Chart: '<S99>/PokeINVR_T_MtrA_TempChrt' incorporates:
     *  SignalConversion generated from: '<S99>/LeINVR_T_MtrA_Temp'
     *  SignalConversion generated from: '<S99>/LeINVR_b_MtrA_TempFA'
     */
    /* Gateway: PokeINVR_T_MtrA_Temp/PokeINVR_T_MtrA_TempChrt */
    /* During: PokeINVR_T_MtrA_Temp/PokeINVR_T_MtrA_TempChrt */
    /* Entry Internal: PokeINVR_T_MtrA_Temp/PokeINVR_T_MtrA_TempChrt */
    /* Transition: '<S557>:2' */
    if (!LeINVR_b_MtrA_TempFA)
    {
        /* Transition: '<S557>:3' */
        /* Transition: '<S557>:15' */
        INVR_ac_B.LeINVR_T_MtrA_Temp_out = LeINVR_T_MtrA_Temp;
        rtb_LeINVR_b_MtrA_TempFA_out_o = false;

        /* Transition: '<S557>:18' */
    }
    else
    {
        /* Transition: '<S557>:4' */
        rtb_LeINVR_b_MtrA_TempFA_out_o = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrA_TempFA' incorporates:
     *  SignalConversion generated from: '<S99>/VeINVR_b_MtrA_TempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrA_TempFA_Value(rtb_LeINVR_b_MtrA_TempFA_out_o);

    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S99>/VeINVR_T_MtrA_Temp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrA_Temp_VeINVR_T_MtrA_Temp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrA_Temp_out);

    /* Merge: '<Root>/Merge_54' incorporates:
     *  Chart: '<S99>/PokeINVR_T_MtrA_TempChrt'
     *  SignalConversion generated from: '<S99>/VeINVR_b_MtrA_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrA_Temp_VeINVR_b_MtrA_Temp_Sig_Rcvd_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrA_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrBBusBarTemp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrBBusBarTemp, VAR(boolean, AUTOMATIC) LeINVR_b_MtrBBusBarTempFA)
{
    boolean rtb_LeINVR_b_MtrBBusBarTempFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrBBusBarTemp' */
    /* Chart: '<S100>/PokeINVR_T_MtrBBusBarTempChrt' incorporates:
     *  SignalConversion generated from: '<S100>/LeINVR_T_MtrBBusBarTemp'
     *  SignalConversion generated from: '<S100>/LeINVR_b_MtrBBusBarTempFA'
     */
    /* Gateway: PokeINVR_T_MtrBBusBarTemp/PokeINVR_T_MtrBBusBarTempChrt */
    /* During: PokeINVR_T_MtrBBusBarTemp/PokeINVR_T_MtrBBusBarTempChrt */
    /* Entry Internal: PokeINVR_T_MtrBBusBarTemp/PokeINVR_T_MtrBBusBarTempChrt */
    /* Transition: '<S558>:2' */
    if (!LeINVR_b_MtrBBusBarTempFA)
    {
        /* Transition: '<S558>:3' */
        /* Transition: '<S558>:15' */
        INVR_ac_B.LeINVR_T_MtrBBusBarTemp_out = LeINVR_T_MtrBBusBarTemp;
        rtb_LeINVR_b_MtrBBusBarTempFA_out_b = false;

        /* Transition: '<S558>:18' */
    }
    else
    {
        /* Transition: '<S558>:4' */
        rtb_LeINVR_b_MtrBBusBarTempFA_out_b = true;
    }

    /* End of Chart: '<S100>/PokeINVR_T_MtrBBusBarTempChrt' */

    /* Outport: '<Root>/VeINVR_T_MtrBBusBarTemp' incorporates:
     *  SignalConversion generated from: '<S100>/VeINVR_T_MtrBBusBarTemp'
     */
    (void)Rte_Write_VeINVR_T_MtrBBusBarTemp_Value
        (INVR_ac_B.LeINVR_T_MtrBBusBarTemp_out);

    /* Outport: '<Root>/VeINVR_b_MtrBBusBarTempFA' incorporates:
     *  SignalConversion generated from: '<S100>/VeINVR_b_MtrBBusBarTempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrBBusBarTempFA_Value
        (rtb_LeINVR_b_MtrBBusBarTempFA_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrBBusBarTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrB_CapctrTemp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrB_CapctrTemp, VAR(boolean, AUTOMATIC) LeINVR_b_MtrB_CapctrTempFA)
{
    boolean rtb_LeINVR_b_MtrB_CapctrTempFA_out_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrB_CapctrTemp' */
    /* Chart: '<S101>/PokeINVR_T_MtrB_CapctrTempChrt' incorporates:
     *  SignalConversion generated from: '<S101>/LeINVR_T_MtrB_CapctrTemp'
     *  SignalConversion generated from: '<S101>/LeINVR_b_MtrB_CapctrTempFA'
     */
    /* Gateway: PokeINVR_T_MtrB_CapctrTemp/PokeINVR_T_MtrB_CapctrTempChrt */
    /* During: PokeINVR_T_MtrB_CapctrTemp/PokeINVR_T_MtrB_CapctrTempChrt */
    /* Entry Internal: PokeINVR_T_MtrB_CapctrTemp/PokeINVR_T_MtrB_CapctrTempChrt */
    /* Transition: '<S559>:2' */
    if (!LeINVR_b_MtrB_CapctrTempFA)
    {
        /* Transition: '<S559>:3' */
        /* Transition: '<S559>:15' */
        INVR_ac_B.LeINVR_T_MtrB_CapctrTemp_out = LeINVR_T_MtrB_CapctrTemp;
        rtb_LeINVR_b_MtrB_CapctrTempFA_out_m = false;

        /* Transition: '<S559>:18' */
    }
    else
    {
        /* Transition: '<S559>:4' */
        rtb_LeINVR_b_MtrB_CapctrTempFA_out_m = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrB_CapctrTemp_FA' incorporates:
     *  SignalConversion generated from: '<S101>/VeINVR_b_MtrB_CapctrTempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrB_CapctrTemp_FA_Value
        (rtb_LeINVR_b_MtrB_CapctrTempFA_out_m);

    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S101>/VeINVR_T_MtrB_CapctrTemp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrB_CapctrTemp_VeINVR_T_MtrB_CapctrTemp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrB_CapctrTemp_out);

    /* Merge: '<Root>/Merge_75' incorporates:
     *  Chart: '<S101>/PokeINVR_T_MtrB_CapctrTempChrt'
     *  SignalConversion generated from: '<S101>/VeINVR_b_MtrB_CapctrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrB_CapctrTemp_VeINVR_b_MtrB_CapctrTemp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrB_CapctrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrB_ClntIn_Temp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrB_ClntIn_Temp, VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrB_ClntIn_TempFA)
{
    boolean rtb_LeINVR_b_MtrB_ClntIn_TempFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrB_ClntIn_Temp' */
    /* Chart: '<S102>/PokeINVR_T_MtrB_ClntIn_TempChrt' incorporates:
     *  SignalConversion generated from: '<S102>/LeINVR_T_MtrB_ClntIn_Temp'
     *  SignalConversion generated from: '<S102>/LeINVR_b_MtrB_ClntIn_TempFA'
     */
    /* Gateway: PokeINVR_T_MtrB_ClntIn_Temp/PokeINVR_T_MtrB_ClntIn_TempChrt */
    /* During: PokeINVR_T_MtrB_ClntIn_Temp/PokeINVR_T_MtrB_ClntIn_TempChrt */
    /* Entry Internal: PokeINVR_T_MtrB_ClntIn_Temp/PokeINVR_T_MtrB_ClntIn_TempChrt */
    /* Transition: '<S560>:2' */
    if (!LeINVR_b_MtrB_ClntIn_TempFA)
    {
        /* Transition: '<S560>:3' */
        /* Transition: '<S560>:15' */
        INVR_ac_B.LeINVR_T_MtrB_ClntIn_Temp_out = LeINVR_T_MtrB_ClntIn_Temp;
        rtb_LeINVR_b_MtrB_ClntIn_TempFA_out_p = false;

        /* Transition: '<S560>:18' */
    }
    else
    {
        /* Transition: '<S560>:4' */
        rtb_LeINVR_b_MtrB_ClntIn_TempFA_out_p = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrB_ClntIn_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S102>/VeINVR_b_MtrB_ClntIn_TempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrB_ClntIn_Temp_FA_Value
        (rtb_LeINVR_b_MtrB_ClntIn_TempFA_out_p);

    /* Merge: '<Root>/Merge_80' incorporates:
     *  SignalConversion generated from: '<S102>/VeINVR_T_MtrB_ClntIn_Temp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrB_ClntIn_Temp_VeINVR_T_MtrB_ClntIn_Temp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrB_ClntIn_Temp_out);

    /* Merge: '<Root>/Merge_78' incorporates:
     *  Chart: '<S102>/PokeINVR_T_MtrB_ClntIn_TempChrt'
     *  SignalConversion generated from: '<S102>/VeINVR_b_MtrB_ClntIn_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrB_ClntIn_Temp_VeINVR_b_MtrB_ClntIn_Temp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrB_ClntIn_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrB_ClntOut_Temp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrB_ClntOut_Temp, VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrB_ClntOut_TempFA)
{
    boolean rtb_LeINVR_b_MtrB_ClntOut_TempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrB_ClntOut_Temp' */
    /* Chart: '<S103>/PokeINVR_T_MtrB_ClntOut_TempChrt' incorporates:
     *  SignalConversion generated from: '<S103>/LeINVR_T_MtrB_ClntOut_Temp'
     *  SignalConversion generated from: '<S103>/LeINVR_b_MtrB_ClntOut_TempFA'
     */
    /* Gateway: PokeINVR_T_MtrB_ClntOut_Temp/PokeINVR_T_MtrB_ClntOut_TempChrt */
    /* During: PokeINVR_T_MtrB_ClntOut_Temp/PokeINVR_T_MtrB_ClntOut_TempChrt */
    /* Entry Internal: PokeINVR_T_MtrB_ClntOut_Temp/PokeINVR_T_MtrB_ClntOut_TempChrt */
    /* Transition: '<S561>:2' */
    if (!LeINVR_b_MtrB_ClntOut_TempFA)
    {
        /* Transition: '<S561>:3' */
        /* Transition: '<S561>:15' */
        INVR_ac_B.LeINVR_T_MtrB_ClntOut_Temp_out = LeINVR_T_MtrB_ClntOut_Temp;
        rtb_LeINVR_b_MtrB_ClntOut_TempFA_out = false;

        /* Transition: '<S561>:18' */
    }
    else
    {
        /* Transition: '<S561>:4' */
        rtb_LeINVR_b_MtrB_ClntOut_TempFA_out = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrB_ClntOut_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S103>/VeINVR_b_MtrB_ClntOut_TempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrB_ClntOut_Temp_FA_Value
        (rtb_LeINVR_b_MtrB_ClntOut_TempFA_out);

    /* Merge: '<Root>/Merge_83' incorporates:
     *  SignalConversion generated from: '<S103>/VeINVR_T_MtrB_ClntOut_Temp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrB_ClntOut_Temp_VeINVR_T_MtrB_ClntOut_Temp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrB_ClntOut_Temp_out);

    /* Merge: '<Root>/Merge_81' incorporates:
     *  Chart: '<S103>/PokeINVR_T_MtrB_ClntOut_TempChrt'
     *  SignalConversion generated from: '<S103>/VeINVR_b_MtrB_ClntOut_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrB_ClntOut_Temp_VeINVR_b_MtrB_ClntOut_Temp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrB_ClntOut_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrB_CtrlBoard_Temp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrB_CtrlBoard_Temp, VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrB_CtrlBoard_TempFA)
{
    boolean rtb_LeINVR_b_MtrB_CtrlBoard_TempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrB_CtrlBoard_Temp' */
    /* Chart: '<S104>/PokeINVR_T_MtrB_CtrlBoard_TempChrt' incorporates:
     *  SignalConversion generated from: '<S104>/LeINVR_T_MtrB_CtrlBoard_Temp'
     *  SignalConversion generated from: '<S104>/LeINVR_b_MtrB_CtrlBoard_TempFA'
     */
    /* Gateway: PokeINVR_T_MtrB_CtrlBoard_Temp/PokeINVR_T_MtrB_CtrlBoard_TempChrt */
    /* During: PokeINVR_T_MtrB_CtrlBoard_Temp/PokeINVR_T_MtrB_CtrlBoard_TempChrt */
    /* Entry Internal: PokeINVR_T_MtrB_CtrlBoard_Temp/PokeINVR_T_MtrB_CtrlBoard_TempChrt */
    /* Transition: '<S562>:2' */
    if (!LeINVR_b_MtrB_CtrlBoard_TempFA)
    {
        /* Transition: '<S562>:3' */
        /* Transition: '<S562>:15' */
        INVR_ac_B.LeINVR_T_MtrB_CtrlBoard_Temp_out =
            LeINVR_T_MtrB_CtrlBoard_Temp;
        rtb_LeINVR_b_MtrB_CtrlBoard_TempFA_out = false;

        /* Transition: '<S562>:18' */
    }
    else
    {
        /* Transition: '<S562>:4' */
        rtb_LeINVR_b_MtrB_CtrlBoard_TempFA_out = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrB_CtrlBoard_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S104>/VeINVR_b_MtrB_CtrlBoard_TempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrB_CtrlBoard_Temp_FA_Value
        (rtb_LeINVR_b_MtrB_CtrlBoard_TempFA_out);

    /* Merge: '<Root>/Merge_86' incorporates:
     *  SignalConversion generated from: '<S104>/VeINVR_T_MtrB_CtrlBoard_Temp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrB_CtrlBoard_Temp_VeINVR_T_MtrB_CtrlBoard_Temp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrB_CtrlBoard_Temp_out);

    /* Merge: '<Root>/Merge_84' incorporates:
     *  Chart: '<S104>/PokeINVR_T_MtrB_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S104>/VeINVR_b_MtrB_CtrlBoard_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrB_CtrlBoard_Temp_VeINVR_b_MtrB_CtrlBoard_Temp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrB_CtrlBoard_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrB_InvrtrTemp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrB_InvrtrTemp, VAR(boolean, AUTOMATIC) LeINVR_b_MtrB_InvrtrTempFA)
{
    boolean rtb_LeINVR_b_MtrB_InvrtrTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrB_InvrtrTemp' */
    /* Chart: '<S105>/PokeINVR_T_MtrB_InvrtrTempChrt' incorporates:
     *  SignalConversion generated from: '<S105>/LeINVR_T_MtrB_InvrtrTemp'
     *  SignalConversion generated from: '<S105>/LeINVR_b_MtrB_InvrtrTempFA'
     */
    /* Gateway: PokeINVR_T_MtrB_InvrtrTemp/PokeINVR_T_MtrB_InvrtrTempChrt */
    /* During: PokeINVR_T_MtrB_InvrtrTemp/PokeINVR_T_MtrB_InvrtrTempChrt */
    /* Entry Internal: PokeINVR_T_MtrB_InvrtrTemp/PokeINVR_T_MtrB_InvrtrTempChrt */
    /* Transition: '<S563>:2' */
    if (!LeINVR_b_MtrB_InvrtrTempFA)
    {
        /* Transition: '<S563>:3' */
        /* Transition: '<S563>:15' */
        INVR_ac_B.LeINVR_T_MtrB_InvrtrTemp_out = LeINVR_T_MtrB_InvrtrTemp;
        rtb_LeINVR_b_MtrB_InvrtrTempFA_out = false;

        /* Transition: '<S563>:18' */
    }
    else
    {
        /* Transition: '<S563>:4' */
        rtb_LeINVR_b_MtrB_InvrtrTempFA_out = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrB_InvrtrTempFA' incorporates:
     *  SignalConversion generated from: '<S105>/VeINVR_b_MtrB_InvrtrTempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrB_InvrtrTempFA_Value
        (rtb_LeINVR_b_MtrB_InvrtrTempFA_out);

    /* Merge: '<Root>/Merge_98' incorporates:
     *  SignalConversion generated from: '<S105>/VeINVR_T_MtrB_InvrtrTemp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrB_InvrtrTemp_VeINVR_T_MtrB_InvrtrTemp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrB_InvrtrTemp_out);

    /* Merge: '<Root>/Merge_96' incorporates:
     *  Chart: '<S105>/PokeINVR_T_MtrB_InvrtrTempChrt'
     *  SignalConversion generated from: '<S105>/VeINVR_b_MtrB_InvrtrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrB_InvrtrTemp_VeINVR_b_MtrB_InvrtrTemp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrB_InvrtrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrB_RotrTemp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrB_RotrTemp, VAR(boolean, AUTOMATIC) LeINVR_b_MtrB_RotrTempFA)
{
    boolean rtb_LeINVR_b_MtrB_RotrTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrB_RotrTemp' */
    /* Chart: '<S106>/PokeINVR_T_MtrB_RotrTempChrt' incorporates:
     *  SignalConversion generated from: '<S106>/LeINVR_T_MtrB_RotrTemp'
     *  SignalConversion generated from: '<S106>/LeINVR_b_MtrB_RotrTempFA'
     */
    /* Gateway: PokeINVR_T_MtrB_RotrTemp/PokeINVR_T_MtrB_RotrTempChrt */
    /* During: PokeINVR_T_MtrB_RotrTemp/PokeINVR_T_MtrB_RotrTempChrt */
    /* Entry Internal: PokeINVR_T_MtrB_RotrTemp/PokeINVR_T_MtrB_RotrTempChrt */
    /* Transition: '<S564>:2' */
    if (!LeINVR_b_MtrB_RotrTempFA)
    {
        /* Transition: '<S564>:3' */
        /* Transition: '<S564>:15' */
        INVR_ac_B.LeINVR_T_MtrB_RotrTemp_out = LeINVR_T_MtrB_RotrTemp;
        rtb_LeINVR_b_MtrB_RotrTempFA_out = false;

        /* Transition: '<S564>:18' */
    }
    else
    {
        /* Transition: '<S564>:4' */
        rtb_LeINVR_b_MtrB_RotrTempFA_out = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrB_RotrTemp_FA' incorporates:
     *  SignalConversion generated from: '<S106>/VeINVR_b_MtrB_RotrTempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrB_RotrTemp_FA_Value
        (rtb_LeINVR_b_MtrB_RotrTempFA_out);

    /* Merge: '<Root>/Merge_101' incorporates:
     *  SignalConversion generated from: '<S106>/VeINVR_T_MtrB_RotrTemp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrB_RotrTemp_VeINVR_T_MtrB_RotrTemp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrB_RotrTemp_out);

    /* Merge: '<Root>/Merge_99' incorporates:
     *  Chart: '<S106>/PokeINVR_T_MtrB_RotrTempChrt'
     *  SignalConversion generated from: '<S106>/VeINVR_b_MtrB_RotrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrB_RotrTemp_VeINVR_b_MtrB_RotrTemp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrB_RotrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrB_Temp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrB_Temp, VAR(boolean, AUTOMATIC) LeINVR_b_MtrB_TempFA)
{
    boolean rtb_LeINVR_b_MtrB_TempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrB_Temp' */
    /* Chart: '<S107>/PokeINVR_T_MtrB_TempChrt' incorporates:
     *  SignalConversion generated from: '<S107>/LeINVR_T_MtrB_Temp'
     *  SignalConversion generated from: '<S107>/LeINVR_b_MtrB_TempFA'
     */
    /* Gateway: PokeINVR_T_MtrB_Temp/PokeINVR_T_MtrB_TempChrt */
    /* During: PokeINVR_T_MtrB_Temp/PokeINVR_T_MtrB_TempChrt */
    /* Entry Internal: PokeINVR_T_MtrB_Temp/PokeINVR_T_MtrB_TempChrt */
    /* Transition: '<S565>:2' */
    if (!LeINVR_b_MtrB_TempFA)
    {
        /* Transition: '<S565>:3' */
        /* Transition: '<S565>:15' */
        INVR_ac_B.LeINVR_T_MtrB_Temp_out = LeINVR_T_MtrB_Temp;
        rtb_LeINVR_b_MtrB_TempFA_out = false;

        /* Transition: '<S565>:18' */
    }
    else
    {
        /* Transition: '<S565>:4' */
        rtb_LeINVR_b_MtrB_TempFA_out = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrB_TempFA' incorporates:
     *  SignalConversion generated from: '<S107>/VeINVR_b_MtrB_TempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrB_TempFA_Value(rtb_LeINVR_b_MtrB_TempFA_out);

    /* Merge: '<Root>/Merge_105' incorporates:
     *  SignalConversion generated from: '<S107>/VeINVR_T_MtrB_Temp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrB_Temp_VeINVR_T_MtrB_Temp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrB_Temp_out);

    /* Merge: '<Root>/Merge_103' incorporates:
     *  Chart: '<S107>/PokeINVR_T_MtrB_TempChrt'
     *  SignalConversion generated from: '<S107>/VeINVR_b_MtrB_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrB_Temp_VeINVR_b_MtrB_Temp_Sig_Rcvd_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrB_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrCBusBarTemp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrCBusBarTemp, VAR(boolean, AUTOMATIC) LeINVR_b_MtrCBusBarTempFA)
{
    boolean rtb_LeINVR_b_MtrCBusBarTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrCBusBarTemp' */
    /* Chart: '<S108>/PokeINVR_T_MtrCBusBarTempChrt' incorporates:
     *  SignalConversion generated from: '<S108>/LeINVR_T_MtrCBusBarTemp'
     *  SignalConversion generated from: '<S108>/LeINVR_b_MtrCBusBarTempFA'
     */
    /* Gateway: PokeINVR_T_MtrCBusBarTemp/PokeINVR_T_MtrCBusBarTempChrt */
    /* During: PokeINVR_T_MtrCBusBarTemp/PokeINVR_T_MtrCBusBarTempChrt */
    /* Entry Internal: PokeINVR_T_MtrCBusBarTemp/PokeINVR_T_MtrCBusBarTempChrt */
    /* Transition: '<S566>:2' */
    if (!LeINVR_b_MtrCBusBarTempFA)
    {
        /* Transition: '<S566>:3' */
        /* Transition: '<S566>:15' */
        INVR_ac_B.LeINVR_T_MtrCBusBarTemp_out = LeINVR_T_MtrCBusBarTemp;
        rtb_LeINVR_b_MtrCBusBarTempFA_out = false;

        /* Transition: '<S566>:18' */
    }
    else
    {
        /* Transition: '<S566>:4' */
        rtb_LeINVR_b_MtrCBusBarTempFA_out = true;
    }

    /* End of Chart: '<S108>/PokeINVR_T_MtrCBusBarTempChrt' */

    /* Outport: '<Root>/VeINVR_T_MtrCBusBarTemp' incorporates:
     *  SignalConversion generated from: '<S108>/VeINVR_T_MtrCBusBarTemp'
     */
    (void)Rte_Write_VeINVR_T_MtrCBusBarTemp_Value
        (INVR_ac_B.LeINVR_T_MtrCBusBarTemp_out);

    /* Outport: '<Root>/VeINVR_b_MtrCBusBarTempFA' incorporates:
     *  SignalConversion generated from: '<S108>/VeINVR_b_MtrCBusBarTempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrCBusBarTempFA_Value
        (rtb_LeINVR_b_MtrCBusBarTempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrCBusBarTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrC_CtrlBoard_Temp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrC_CtrlBoard_Temp, VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrC_CtrlBoard_TempFA)
{
    boolean rtb_LeINVR_b_MtrC_CtrlBoard_TempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrC_CtrlBoard_Temp' */
    /* Chart: '<S109>/PokeINVR_T_MtrC_CtrlBoard_TempChrt' incorporates:
     *  SignalConversion generated from: '<S109>/LeINVR_T_MtrC_CtrlBoard_Temp'
     *  SignalConversion generated from: '<S109>/LeINVR_b_MtrC_CtrlBoard_TempFA'
     */
    /* Gateway: PokeINVR_T_MtrC_CtrlBoard_Temp/PokeINVR_T_MtrC_CtrlBoard_TempChrt */
    /* During: PokeINVR_T_MtrC_CtrlBoard_Temp/PokeINVR_T_MtrC_CtrlBoard_TempChrt */
    /* Entry Internal: PokeINVR_T_MtrC_CtrlBoard_Temp/PokeINVR_T_MtrC_CtrlBoard_TempChrt */
    /* Transition: '<S567>:2' */
    if (!LeINVR_b_MtrC_CtrlBoard_TempFA)
    {
        /* Transition: '<S567>:3' */
        /* Transition: '<S567>:15' */
        INVR_ac_B.LeINVR_T_MtrC_CtrlBoard_Temp_out =
            LeINVR_T_MtrC_CtrlBoard_Temp;
        rtb_LeINVR_b_MtrC_CtrlBoard_TempFA_out = false;

        /* Transition: '<S567>:18' */
    }
    else
    {
        /* Transition: '<S567>:4' */
        rtb_LeINVR_b_MtrC_CtrlBoard_TempFA_out = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrC_CtrlBoard_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S109>/VeINVR_b_MtrC_CtrlBoard_TempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrC_CtrlBoard_Temp_FA_Value
        (rtb_LeINVR_b_MtrC_CtrlBoard_TempFA_out);

    /* Merge: '<Root>/Merge_122' incorporates:
     *  SignalConversion generated from: '<S109>/VeINVR_T_MtrC_CtrlBoard_Temp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrC_CtrlBoard_Temp_VeINVR_T_MtrC_CtrlBoard_Temp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrC_CtrlBoard_Temp_out);

    /* Merge: '<Root>/Merge_120' incorporates:
     *  Chart: '<S109>/PokeINVR_T_MtrC_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S109>/VeINVR_b_MtrC_CtrlBoard_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrC_CtrlBoard_Temp_VeINVR_b_MtrC_CtrlBoard_Temp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrC_CtrlBoard_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrC_InvrtrTemp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrC_InvrtrTemp, VAR(boolean, AUTOMATIC) LeINVR_b_MtrC_InvrtrTempFA)
{
    boolean rtb_LeINVR_b_MtrC_InvrtrTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrC_InvrtrTemp' */
    /* Chart: '<S110>/PokeINVR_T_MtrC_InvrtrTempChrt' incorporates:
     *  SignalConversion generated from: '<S110>/LeINVR_T_MtrC_InvrtrTemp'
     *  SignalConversion generated from: '<S110>/LeINVR_b_MtrC_InvrtrTempFA'
     */
    /* Gateway: PokeINVR_T_MtrC_InvrtrTemp/PokeINVR_T_MtrC_InvrtrTempChrt */
    /* During: PokeINVR_T_MtrC_InvrtrTemp/PokeINVR_T_MtrC_InvrtrTempChrt */
    /* Entry Internal: PokeINVR_T_MtrC_InvrtrTemp/PokeINVR_T_MtrC_InvrtrTempChrt */
    /* Transition: '<S568>:2' */
    if (!LeINVR_b_MtrC_InvrtrTempFA)
    {
        /* Transition: '<S568>:3' */
        /* Transition: '<S568>:15' */
        INVR_ac_B.LeINVR_T_MtrC_InvrtrTemp_out = LeINVR_T_MtrC_InvrtrTemp;
        rtb_LeINVR_b_MtrC_InvrtrTempFA_out = false;

        /* Transition: '<S568>:18' */
    }
    else
    {
        /* Transition: '<S568>:4' */
        rtb_LeINVR_b_MtrC_InvrtrTempFA_out = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrC_InvrtrTempFA' incorporates:
     *  SignalConversion generated from: '<S110>/VeINVR_b_MtrC_InvrtrTempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrC_InvrtrTempFA_Value
        (rtb_LeINVR_b_MtrC_InvrtrTempFA_out);

    /* Merge: '<Root>/Merge_134' incorporates:
     *  SignalConversion generated from: '<S110>/VeINVR_T_MtrC_InvrtrTemp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrC_InvrtrTemp_VeINVR_T_MtrC_InvrtrTemp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrC_InvrtrTemp_out);

    /* Merge: '<Root>/Merge_132' incorporates:
     *  Chart: '<S110>/PokeINVR_T_MtrC_InvrtrTempChrt'
     *  SignalConversion generated from: '<S110>/VeINVR_b_MtrC_InvrtrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrC_InvrtrTemp_VeINVR_b_MtrC_InvrtrTemp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrC_InvrtrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrC_RotrTemp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrC_RotrTemp, VAR(boolean, AUTOMATIC) LeINVR_b_MtrC_RotrTempFA)
{
    boolean rtb_LeINVR_b_MtrC_RotrTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrC_RotrTemp' */
    /* Chart: '<S111>/PokeINVR_T_MtrC_RotrTempChrt' incorporates:
     *  SignalConversion generated from: '<S111>/LeINVR_T_MtrC_RotrTemp'
     *  SignalConversion generated from: '<S111>/LeINVR_b_MtrC_RotrTempFA'
     */
    /* Gateway: PokeINVR_T_MtrC_RotrTemp/PokeINVR_T_MtrC_RotrTempChrt */
    /* During: PokeINVR_T_MtrC_RotrTemp/PokeINVR_T_MtrC_RotrTempChrt */
    /* Entry Internal: PokeINVR_T_MtrC_RotrTemp/PokeINVR_T_MtrC_RotrTempChrt */
    /* Transition: '<S569>:2' */
    if (!LeINVR_b_MtrC_RotrTempFA)
    {
        /* Transition: '<S569>:3' */
        /* Transition: '<S569>:15' */
        INVR_ac_B.LeINVR_T_MtrC_RotrTemp_out = LeINVR_T_MtrC_RotrTemp;
        rtb_LeINVR_b_MtrC_RotrTempFA_out = false;

        /* Transition: '<S569>:18' */
    }
    else
    {
        /* Transition: '<S569>:4' */
        rtb_LeINVR_b_MtrC_RotrTempFA_out = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrC_RotrTemp_FA' incorporates:
     *  SignalConversion generated from: '<S111>/VeINVR_b_MtrC_RotrTempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrC_RotrTemp_FA_Value
        (rtb_LeINVR_b_MtrC_RotrTempFA_out);

    /* Merge: '<Root>/Merge_137' incorporates:
     *  SignalConversion generated from: '<S111>/VeINVR_T_MtrC_RotrTemp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrC_RotrTemp_VeINVR_T_MtrC_RotrTemp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrC_RotrTemp_out);

    /* Merge: '<Root>/Merge_135' incorporates:
     *  Chart: '<S111>/PokeINVR_T_MtrC_RotrTempChrt'
     *  SignalConversion generated from: '<S111>/VeINVR_b_MtrC_RotrTemp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrC_RotrTemp_VeINVR_b_MtrC_RotrTemp_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrC_RotrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_T_MtrC_Temp(VAR(float32, AUTOMATIC)
    LeINVR_T_MtrC_Temp, VAR(boolean, AUTOMATIC) LeINVR_b_MtrC_TempFA)
{
    boolean rtb_LeINVR_b_MtrC_TempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_T_MtrC_Temp' */
    /* Chart: '<S112>/PokeINVR_T_MtrC_TempChrt' incorporates:
     *  SignalConversion generated from: '<S112>/LeINVR_T_MtrC_Temp'
     *  SignalConversion generated from: '<S112>/LeINVR_b_MtrC_TempFA'
     */
    /* Gateway: PokeINVR_T_MtrC_Temp/PokeINVR_T_MtrC_TempChrt */
    /* During: PokeINVR_T_MtrC_Temp/PokeINVR_T_MtrC_TempChrt */
    /* Entry Internal: PokeINVR_T_MtrC_Temp/PokeINVR_T_MtrC_TempChrt */
    /* Transition: '<S570>:2' */
    if (!LeINVR_b_MtrC_TempFA)
    {
        /* Transition: '<S570>:3' */
        /* Transition: '<S570>:15' */
        INVR_ac_B.LeINVR_T_MtrC_Temp_out = LeINVR_T_MtrC_Temp;
        rtb_LeINVR_b_MtrC_TempFA_out = false;

        /* Transition: '<S570>:18' */
    }
    else
    {
        /* Transition: '<S570>:4' */
        rtb_LeINVR_b_MtrC_TempFA_out = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrC_TempFA' incorporates:
     *  SignalConversion generated from: '<S112>/VeINVR_b_MtrC_TempFA'
     */
    (void)Rte_Write_VeINVR_b_MtrC_TempFA_Value(rtb_LeINVR_b_MtrC_TempFA_out);

    /* Merge: '<Root>/Merge_140' incorporates:
     *  SignalConversion generated from: '<S112>/VeINVR_T_MtrC_Temp_write'
     * */
    Rte_IrvWrite_PokeINVR_T_MtrC_Temp_VeINVR_T_MtrC_Temp_write_IRV
        (INVR_ac_B.LeINVR_T_MtrC_Temp_out);

    /* Merge: '<Root>/Merge_138' incorporates:
     *  Chart: '<S112>/PokeINVR_T_MtrC_TempChrt'
     *  SignalConversion generated from: '<S112>/VeINVR_b_MtrC_Temp_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_T_MtrC_Temp_VeINVR_b_MtrC_Temp_Sig_Rcvd_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_T_MtrC_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_U_MaxBoostVolt(VAR(float32, AUTOMATIC)
    LeINVR_U_MaxBoostVolt, VAR(boolean, AUTOMATIC) LeINVR_b_MaxBoostVoltFA)
{
    boolean rtb_LeINVR_b_MaxBoostVoltFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_U_MaxBoostVolt' */
    /* Chart: '<S113>/PokeINVR_U_MaxBoostVoltChrt' incorporates:
     *  SignalConversion generated from: '<S113>/LeINVR_U_MaxBoostVolt'
     *  SignalConversion generated from: '<S113>/LeINVR_b_MaxBoostVoltFA'
     */
    /* Gateway: PokeINVR_U_MaxBoostVolt/PokeINVR_U_MaxBoostVoltChrt */
    /* During: PokeINVR_U_MaxBoostVolt/PokeINVR_U_MaxBoostVoltChrt */
    /* Entry Internal: PokeINVR_U_MaxBoostVolt/PokeINVR_U_MaxBoostVoltChrt */
    /* Transition: '<S571>:2' */
    if (!LeINVR_b_MaxBoostVoltFA)
    {
        /* Transition: '<S571>:3' */
        /* Transition: '<S571>:15' */
        INVR_ac_B.LeINVR_U_MaxBoostVolt_out = LeINVR_U_MaxBoostVolt;
        rtb_LeINVR_b_MaxBoostVoltFA_out = false;

        /* Transition: '<S571>:18' */
    }
    else
    {
        /* Transition: '<S571>:4' */
        rtb_LeINVR_b_MaxBoostVoltFA_out = true;
    }

    /* End of Chart: '<S113>/PokeINVR_U_MaxBoostVoltChrt' */

    /* Outport: '<Root>/VeINVR_U_MaxBoostVolt' incorporates:
     *  SignalConversion generated from: '<S113>/VeINVR_U_MaxBoostVolt'
     */
    (void)Rte_Write_VeINVR_U_MaxBoostVolt_Value
        (INVR_ac_B.LeINVR_U_MaxBoostVolt_out);

    /* Outport: '<Root>/VeINVR_b_MaxBoostVoltFA' incorporates:
     *  SignalConversion generated from: '<S113>/VeINVR_b_MaxBoostVoltFA'
     */
    (void)Rte_Write_VeINVR_b_MaxBoostVoltFA_Value
        (rtb_LeINVR_b_MaxBoostVoltFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_U_MaxBoostVolt' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_U_MtrA_DC_Volt(VAR(float32, AUTOMATIC)
    LeINVR_U_MtrA_DC_Volt, VAR(boolean, AUTOMATIC) LeINVR_b_MtrA_DC_VoltFA)
{
    boolean rtb_LeINVR_b_MtrA_DC_VoltFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_U_MtrA_DC_Volt' */
    /* Chart: '<S114>/PokeINVR_U_MtrA_DC_VoltChrt' incorporates:
     *  SignalConversion generated from: '<S114>/LeINVR_U_MtrA_DC_Volt'
     *  SignalConversion generated from: '<S114>/LeINVR_b_MtrA_DC_VoltFA'
     */
    /* Gateway: PokeINVR_U_MtrA_DC_Volt/PokeINVR_U_MtrA_DC_VoltChrt */
    /* During: PokeINVR_U_MtrA_DC_Volt/PokeINVR_U_MtrA_DC_VoltChrt */
    /* Entry Internal: PokeINVR_U_MtrA_DC_Volt/PokeINVR_U_MtrA_DC_VoltChrt */
    /* Transition: '<S572>:2' */
    if (!LeINVR_b_MtrA_DC_VoltFA)
    {
        /* Transition: '<S572>:3' */
        /* Transition: '<S572>:15' */
        INVR_ac_B.LeINVR_U_MtrA_DC_Volt_out = LeINVR_U_MtrA_DC_Volt;
        rtb_LeINVR_b_MtrA_DC_VoltFA_out = false;

        /* Transition: '<S572>:18' */
    }
    else
    {
        /* Transition: '<S572>:4' */
        rtb_LeINVR_b_MtrA_DC_VoltFA_out = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrA_DC_VoltFA' incorporates:
     *  SignalConversion generated from: '<S114>/VeINVR_b_MtrA_DC_VoltFA'
     */
    (void)Rte_Write_VeINVR_b_MtrA_DC_VoltFA_Value
        (rtb_LeINVR_b_MtrA_DC_VoltFA_out);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S114>/VeINVR_U_MtrA_DC_Volt_write'
     * */
    Rte_IrvWrite_PokeINVR_U_MtrA_DC_Volt_VeINVR_U_MtrA_DC_Volt_write_IRV
        (INVR_ac_B.LeINVR_U_MtrA_DC_Volt_out);

    /* Merge: '<Root>/Merge_42' incorporates:
     *  Chart: '<S114>/PokeINVR_U_MtrA_DC_VoltChrt'
     *  SignalConversion generated from: '<S114>/VeINVR_b_MtrA_DC_Volt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_U_MtrA_DC_Volt_VeINVR_b_MtrA_DC_Volt_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_U_MtrA_DC_Volt' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_U_MtrB_DC_Volt(VAR(float32, AUTOMATIC)
    LeINVR_U_MtrB_DC_Volt, VAR(boolean, AUTOMATIC) LeINVR_b_MtrB_DC_VoltFA)
{
    boolean rtb_LeINVR_b_MtrB_DC_VoltFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_U_MtrB_DC_Volt' */
    /* Chart: '<S115>/PokeINVR_U_MtrB_DC_VoltChrt' incorporates:
     *  SignalConversion generated from: '<S115>/LeINVR_U_MtrB_DC_Volt'
     *  SignalConversion generated from: '<S115>/LeINVR_b_MtrB_DC_VoltFA'
     */
    /* Gateway: PokeINVR_U_MtrB_DC_Volt/PokeINVR_U_MtrB_DC_VoltChrt */
    /* During: PokeINVR_U_MtrB_DC_Volt/PokeINVR_U_MtrB_DC_VoltChrt */
    /* Entry Internal: PokeINVR_U_MtrB_DC_Volt/PokeINVR_U_MtrB_DC_VoltChrt */
    /* Transition: '<S573>:2' */
    if (!LeINVR_b_MtrB_DC_VoltFA)
    {
        /* Transition: '<S573>:3' */
        /* Transition: '<S573>:15' */
        INVR_ac_B.LeINVR_U_MtrB_DC_Volt_out = LeINVR_U_MtrB_DC_Volt;
        rtb_LeINVR_b_MtrB_DC_VoltFA_out = false;

        /* Transition: '<S573>:18' */
    }
    else
    {
        /* Transition: '<S573>:4' */
        rtb_LeINVR_b_MtrB_DC_VoltFA_out = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrB_DC_VoltFA' incorporates:
     *  SignalConversion generated from: '<S115>/VeINVR_b_MtrB_DC_VoltFA'
     */
    (void)Rte_Write_VeINVR_b_MtrB_DC_VoltFA_Value
        (rtb_LeINVR_b_MtrB_DC_VoltFA_out);

    /* Merge: '<Root>/Merge_92' incorporates:
     *  SignalConversion generated from: '<S115>/VeINVR_U_MtrB_DC_Volt_write'
     * */
    Rte_IrvWrite_PokeINVR_U_MtrB_DC_Volt_VeINVR_U_MtrB_DC_Volt_write_IRV
        (INVR_ac_B.LeINVR_U_MtrB_DC_Volt_out);

    /* Merge: '<Root>/Merge_90' incorporates:
     *  Chart: '<S115>/PokeINVR_U_MtrB_DC_VoltChrt'
     *  SignalConversion generated from: '<S115>/VeINVR_b_MtrB_DC_Volt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_U_MtrB_DC_Volt_VeINVR_b_MtrB_DC_Volt_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_U_MtrB_DC_Volt' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_U_MtrC_DC_Volt(VAR(float32, AUTOMATIC)
    LeINVR_U_MtrC_DC_Volt, VAR(boolean, AUTOMATIC) LeINVR_b_MtrC_DC_VoltFA)
{
    boolean rtb_LeINVR_b_MtrC_DC_VoltFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_U_MtrC_DC_Volt' */
    /* Chart: '<S116>/PokeINVR_U_MtrC_DC_VoltChrt' incorporates:
     *  SignalConversion generated from: '<S116>/LeINVR_U_MtrC_DC_Volt'
     *  SignalConversion generated from: '<S116>/LeINVR_b_MtrC_DC_VoltFA'
     */
    /* Gateway: PokeINVR_U_MtrC_DC_Volt/PokeINVR_U_MtrC_DC_VoltChrt */
    /* During: PokeINVR_U_MtrC_DC_Volt/PokeINVR_U_MtrC_DC_VoltChrt */
    /* Entry Internal: PokeINVR_U_MtrC_DC_Volt/PokeINVR_U_MtrC_DC_VoltChrt */
    /* Transition: '<S574>:2' */
    if (!LeINVR_b_MtrC_DC_VoltFA)
    {
        /* Transition: '<S574>:3' */
        /* Transition: '<S574>:15' */
        INVR_ac_B.LeINVR_U_MtrC_DC_Volt_out = LeINVR_U_MtrC_DC_Volt;
        rtb_LeINVR_b_MtrC_DC_VoltFA_out = false;

        /* Transition: '<S574>:18' */
    }
    else
    {
        /* Transition: '<S574>:4' */
        rtb_LeINVR_b_MtrC_DC_VoltFA_out = true;
    }

    /* Outport: '<Root>/VeINVR_b_MtrC_DC_VoltFA' incorporates:
     *  SignalConversion generated from: '<S116>/VeINVR_b_MtrC_DC_VoltFA'
     */
    (void)Rte_Write_VeINVR_b_MtrC_DC_VoltFA_Value
        (rtb_LeINVR_b_MtrC_DC_VoltFA_out);

    /* Merge: '<Root>/Merge_128' incorporates:
     *  SignalConversion generated from: '<S116>/VeINVR_U_MtrC_DC_Volt_write'
     * */
    Rte_IrvWrite_PokeINVR_U_MtrC_DC_Volt_VeINVR_U_MtrC_DC_Volt_write_IRV
        (INVR_ac_B.LeINVR_U_MtrC_DC_Volt_out);

    /* Merge: '<Root>/Merge_126' incorporates:
     *  Chart: '<S116>/PokeINVR_U_MtrC_DC_VoltChrt'
     *  SignalConversion generated from: '<S116>/VeINVR_b_MtrC_DC_Volt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_U_MtrC_DC_Volt_VeINVR_b_MtrC_DC_Volt_Sig_Rcvd_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_U_MtrC_DC_Volt' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_DMPI_TempStopFlag(VAR(boolean, AUTOMATIC)
    LeINVR_b_DMPI_TempStopFlag)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_DMPI_TempStopFlag' */
    /* Outport: '<Root>/VeINVR_b_DMPI_TempStopFlag' incorporates:
     *  SignalConversion generated from: '<S117>/VeINVR_b_DMPI_TempStopFlag'
     *  SignalConversion generated from: '<S117>/LeINVR_b_DMPI_TempStopFlag'
     */
    /* Gateway: PokeINVR_b_DMPI_TempStopFlag/PokeINVR_b_DMPI_TempStopFlagChrt */
    /* During: PokeINVR_b_DMPI_TempStopFlag/PokeINVR_b_DMPI_TempStopFlagChrt */
    /* Entry Internal: PokeINVR_b_DMPI_TempStopFlag/PokeINVR_b_DMPI_TempStopFlagChrt */
    /* Transition: '<S575>:2' */
    (void)Rte_Write_VeINVR_b_DMPI_TempStopFlag_Value(LeINVR_b_DMPI_TempStopFlag);

    /* Outport: '<Root>/VeINVR_b_DMPI_TempStopFlagFA' incorporates:
     *  Chart: '<S117>/PokeINVR_b_DMPI_TempStopFlagChrt'
     *  SignalConversion generated from: '<S117>/VeINVR_b_DMPI_TempStopFlagFA'
     */
    (void)Rte_Write_VeINVR_b_DMPI_TempStopFlagFA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_DMPI_TempStopFlag' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_DrvReadyCmplSts(VAR(boolean, AUTOMATIC)
    LeINVR_b_DrvReadyCmplSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_DrvReadyCmplSts' */
    /* Outport: '<Root>/VeINVR_b_DrvReadyCmplSts' incorporates:
     *  SignalConversion generated from: '<S118>/VeINVR_b_DrvReadyCmplSts'
     *  SignalConversion generated from: '<S118>/LeINVR_b_DrvReadyCmplSts'
     */
    /* Gateway: PokeINVR_b_DrvReadyCmplSts/PokeINVR_b_DrvReadyCmplStsChrt */
    /* During: PokeINVR_b_DrvReadyCmplSts/PokeINVR_b_DrvReadyCmplStsChrt */
    /* Entry Internal: PokeINVR_b_DrvReadyCmplSts/PokeINVR_b_DrvReadyCmplStsChrt */
    /* Transition: '<S576>:2' */
    (void)Rte_Write_VeINVR_b_DrvReadyCmplSts_Value(LeINVR_b_DrvReadyCmplSts);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_DrvReadyCmplSts' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrAFlt_3PS_Pos(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrAFlt_3PS_Pos)
{
    UNUSED_PARAMETER(LeINVR_b_MtrAFlt_3PS_Pos);

    /* Gateway: PokeINVR_b_MtrAFlt_3PS_Pos/PokeINVR_b_MtrAFlt_3PS_PosChrt */
    /* During: PokeINVR_b_MtrAFlt_3PS_Pos/PokeINVR_b_MtrAFlt_3PS_PosChrt */
    /* Entry Internal: PokeINVR_b_MtrAFlt_3PS_Pos/PokeINVR_b_MtrAFlt_3PS_PosChrt */
    /* Transition: '<S577>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrAFlt_3PS_Pos_AltSrc(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrAFlt_3PS_Pos_AltSrc)
{
    UNUSED_PARAMETER(LeINVR_b_MtrAFlt_3PS_Pos_AltSrc);

    /* Gateway: PokeINVR_b_MtrAFlt_3PS_Pos_AltSrc/PokeINVR_b_MtrAFlt_3PS_Pos_AltSrcChrt */
    /* During: PokeINVR_b_MtrAFlt_3PS_Pos_AltSrc/PokeINVR_b_MtrAFlt_3PS_Pos_AltSrcChrt */
    /* Entry Internal: PokeINVR_b_MtrAFlt_3PS_Pos_AltSrc/PokeINVR_b_MtrAFlt_3PS_Pos_AltSrcChrt */
    /* Transition: '<S578>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrAFlt_HV_CntctrOpnRq(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrAFlt_HV_CntctrOpnRq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrAFlt_HV_CntctrOpnRq' */
    /* Merge: '<Root>/Merge_21' incorporates:
     *  Chart: '<S121>/PokeINVR_b_MtrAFlt_HV_CntctrOpnRqChrt'
     *  SignalConversion generated from: '<S121>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Sig_Rcvd_write'
     */
    /* Gateway: PokeINVR_b_MtrAFlt_HV_CntctrOpnRq/PokeINVR_b_MtrAFlt_HV_CntctrOpnRqChrt */
    /* During: PokeINVR_b_MtrAFlt_HV_CntctrOpnRq/PokeINVR_b_MtrAFlt_HV_CntctrOpnRqChrt */
    /* Entry Internal: PokeINVR_b_MtrAFlt_HV_CntctrOpnRq/PokeINVR_b_MtrAFlt_HV_CntctrOpnRqChrt */
    /* Transition: '<S579>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S121>/LeINVR_b_MtrAFlt_HV_CntctrOpnRq'
     *  SignalConversion generated from: '<S121>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq_write'
     */
    Rte_IrvWrite_PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Init_IRV
        (LeINVR_b_MtrAFlt_HV_CntctrOpnRq);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrAFlt_HV_CntctrOpnRq' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc(VAR(boolean,
    AUTOMATIC) LeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc' */
    /* Merge: '<Root>/Merge_23' incorporates:
     *  Chart: '<S122>/PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrcChrt'
     *  SignalConversion generated from: '<S122>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc_Sig_Rcvd_write'
     */
    /* Gateway: PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc/PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* During: PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc/PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* Entry Internal: PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc/PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* Transition: '<S580>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc_VeINVR_b_MtrAFltHVCntctrOpnRqAltSrc_SigRcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S122>/LeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc'
     *  SignalConversion generated from: '<S122>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc_write'
     */
    Rte_IrvWrite_PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc_Init_IRV
        (LeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrA_BrushwearFA(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_BrushwearFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrA_BrushwearFA' */
    /* SignalConversion generated from: '<S123>/VeINVR_b_MtrA_BrushwearFA' incorporates:
     *  SignalConversion generated from: '<S123>/LeINVR_b_MtrA_BrushwearFA'
     */
    /* Gateway: PokeINVR_b_MtrA_BrushwearFA/PokeINVR_b_MtrA_BrushwearFAChrt */
    /* During: PokeINVR_b_MtrA_BrushwearFA/PokeINVR_b_MtrA_BrushwearFAChrt */
    /* Entry Internal: PokeINVR_b_MtrA_BrushwearFA/PokeINVR_b_MtrA_BrushwearFAChrt */
    /* Transition: '<S581>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrA_BrushwearFA_VeINVR_b_MtrA_BrushwearFA_IRV
        (LeINVR_b_MtrA_BrushwearFA);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrA_BrushwearFA' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrA_EstTorqueFA(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_EstTorqueFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrA_EstTorqueFA' */
    /* SignalConversion generated from: '<S124>/VeINVR_b_MtrA_EstTorqueFA' incorporates:
     *  SignalConversion generated from: '<S124>/LeINVR_b_MtrA_EstTorqueFA'
     */
    /* Gateway: PokeINVR_b_MtrA_EstTorqueFA/PokeINVR_b_MtrA_EstTorqueFAChrt */
    /* During: PokeINVR_b_MtrA_EstTorqueFA/PokeINVR_b_MtrA_EstTorqueFAChrt */
    /* Entry Internal: PokeINVR_b_MtrA_EstTorqueFA/PokeINVR_b_MtrA_EstTorqueFAChrt */
    /* Transition: '<S582>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrA_EstTorqueFA_VeINVR_b_MtrA_EstTorqueFA_IRV
        (LeINVR_b_MtrA_EstTorqueFA);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrA_EstTorqueFA' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrA_ExcCrntFA(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_ExcCrntFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrA_ExcCrntFA' */
    /* SignalConversion generated from: '<S125>/VeINVR_b_MtrA_ExcCrntFA' incorporates:
     *  SignalConversion generated from: '<S125>/LeINVR_b_MtrA_ExcCrntFA'
     */
    /* Gateway: PokeINVR_b_MtrA_ExcCrntFA/PokeINVR_b_MtrA_ExcCrntFAChrt */
    /* During: PokeINVR_b_MtrA_ExcCrntFA/PokeINVR_b_MtrA_ExcCrntFAChrt */
    /* Entry Internal: PokeINVR_b_MtrA_ExcCrntFA/PokeINVR_b_MtrA_ExcCrntFAChrt */
    /* Transition: '<S583>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrA_ExcCrntFA_VeINVR_b_MtrA_ExcCrntFA_IRV
        (LeINVR_b_MtrA_ExcCrntFA);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrA_ExcCrntFA' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrA_ExcOCFA(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_ExcOCFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrA_ExcOCFA' */
    /* SignalConversion generated from: '<S126>/VeINVR_b_MtrA_ExcOCFA' incorporates:
     *  SignalConversion generated from: '<S126>/LeINVR_b_MtrA_ExcOCFA'
     */
    /* Gateway: PokeINVR_b_MtrA_ExcOCFA/PokeINVR_b_MtrA_ExcOCFAChrt */
    /* During: PokeINVR_b_MtrA_ExcOCFA/PokeINVR_b_MtrA_ExcOCFAChrt */
    /* Entry Internal: PokeINVR_b_MtrA_ExcOCFA/PokeINVR_b_MtrA_ExcOCFAChrt */
    /* Transition: '<S584>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrA_ExcOCFA_VeINVR_b_MtrA_ExcOCFA_IRV
        (LeINVR_b_MtrA_ExcOCFA);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrA_ExcOCFA' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrA_InvrtBrdgFA(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_InvrtBrdgFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrA_InvrtBrdgFA' */
    /* SignalConversion generated from: '<S127>/VeINVR_b_MtrA_InvrtBrdgFA' incorporates:
     *  SignalConversion generated from: '<S127>/LeINVR_b_MtrA_InvrtBrdgFA'
     */
    /* Gateway: PokeINVR_b_MtrA_InvrtBrdgFA/PokeINVR_b_MtrA_InvrtBrdgFAChrt */
    /* During: PokeINVR_b_MtrA_InvrtBrdgFA/PokeINVR_b_MtrA_InvrtBrdgFAChrt */
    /* Entry Internal: PokeINVR_b_MtrA_InvrtBrdgFA/PokeINVR_b_MtrA_InvrtBrdgFAChrt */
    /* Transition: '<S585>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrA_InvrtBrdgFA_VeINVR_b_MtrA_InvrtBrdgFA_IRV
        (LeINVR_b_MtrA_InvrtBrdgFA);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrA_InvrtBrdgFA' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrA_InvrtModeFA(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_InvrtModeFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrA_InvrtModeFA' */
    /* SignalConversion generated from: '<S128>/VeINVR_b_MtrA_InvrtModeFA' incorporates:
     *  SignalConversion generated from: '<S128>/LeINVR_b_MtrA_InvrtModeFA'
     */
    /* Gateway: PokeINVR_b_MtrA_InvrtModeFA/PokeINVR_b_MtrA_InvrtModeFAChrt */
    /* During: PokeINVR_b_MtrA_InvrtModeFA/PokeINVR_b_MtrA_InvrtModeFAChrt */
    /* Entry Internal: PokeINVR_b_MtrA_InvrtModeFA/PokeINVR_b_MtrA_InvrtModeFAChrt */
    /* Transition: '<S586>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrA_InvrtModeFA_VeINVR_b_MtrA_InvrtModeFA_IRV
        (LeINVR_b_MtrA_InvrtModeFA);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrA_InvrtModeFA' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrA_NTC_FA(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_NTC_FA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrA_NTC_FA' */
    /* SignalConversion generated from: '<S129>/VeINVR_b_MtrA_NTC_FA' incorporates:
     *  SignalConversion generated from: '<S129>/LeINVR_b_MtrA_NTC_FA'
     */
    /* Gateway: PokeINVR_b_MtrA_NTC_FA/PokeINVR_b_MtrA_NTC_FAChrt */
    /* During: PokeINVR_b_MtrA_NTC_FA/PokeINVR_b_MtrA_NTC_FAChrt */
    /* Entry Internal: PokeINVR_b_MtrA_NTC_FA/PokeINVR_b_MtrA_NTC_FAChrt */
    /* Transition: '<S587>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrA_NTC_FA_VeINVR_b_MtrA_NTC_FA_IRV
        (LeINVR_b_MtrA_NTC_FA);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrA_NTC_FA' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrA_OverVoltFA(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_OverVoltFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrA_OverVoltFA' */
    /* SignalConversion generated from: '<S130>/VeINVR_b_MtrA_OverVoltFA' incorporates:
     *  SignalConversion generated from: '<S130>/LeINVR_b_MtrA_OverVoltFA'
     */
    /* Gateway: PokeINVR_b_MtrA_OverVoltFA/PokeINVR_b_MtrA_OverVoltFAChrt */
    /* During: PokeINVR_b_MtrA_OverVoltFA/PokeINVR_b_MtrA_OverVoltFAChrt */
    /* Entry Internal: PokeINVR_b_MtrA_OverVoltFA/PokeINVR_b_MtrA_OverVoltFAChrt */
    /* Transition: '<S588>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrA_OverVoltFA_VeINVR_b_MtrA_OverVoltFA_IRV
        (LeINVR_b_MtrA_OverVoltFA);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrA_OverVoltFA' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrA_SpdRawFA(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_SpdRawFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrA_SpdRawFA' */
    /* SignalConversion generated from: '<S131>/VeINVR_b_MtrA_SpdRawFA' incorporates:
     *  SignalConversion generated from: '<S131>/LeINVR_b_MtrA_SpdRawFA'
     */
    /* Gateway: PokeINVR_b_MtrA_SpdRawFA/PokeINVR_b_MtrA_SpdRawFAChrt */
    /* During: PokeINVR_b_MtrA_SpdRawFA/PokeINVR_b_MtrA_SpdRawFAChrt */
    /* Entry Internal: PokeINVR_b_MtrA_SpdRawFA/PokeINVR_b_MtrA_SpdRawFAChrt */
    /* Transition: '<S589>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrA_SpdRawFA_VeINVR_b_MtrA_SpdRawFA_IRV
        (LeINVR_b_MtrA_SpdRawFA);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrA_SpdRawFA' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrA_TorqAchievedFA(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_TorqAchievedFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrA_TorqAchievedFA' */
    /* SignalConversion generated from: '<S132>/VeINVR_b_MtrA_TorqAchievedFA' incorporates:
     *  SignalConversion generated from: '<S132>/LeINVR_b_MtrA_TorqAchievedFA'
     */
    /* Gateway: PokeINVR_b_MtrA_TorqAchievedFA/PokeINVR_b_MtrA_TorqAchievedFAChrt */
    /* During: PokeINVR_b_MtrA_TorqAchievedFA/PokeINVR_b_MtrA_TorqAchievedFAChrt */
    /* Entry Internal: PokeINVR_b_MtrA_TorqAchievedFA/PokeINVR_b_MtrA_TorqAchievedFAChrt */
    /* Transition: '<S590>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrA_TorqAchievedFA_VeINVR_b_MtrA_TorqAchievedFA_IRV
        (LeINVR_b_MtrA_TorqAchievedFA);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrA_TorqAchievedFA' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrA_UnderVoltFA(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_UnderVoltFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrA_UnderVoltFA' */
    /* SignalConversion generated from: '<S133>/VeINVR_b_MtrA_UnderVoltFA' incorporates:
     *  SignalConversion generated from: '<S133>/LeINVR_b_MtrA_UnderVoltFA'
     */
    /* Gateway: PokeINVR_b_MtrA_UnderVoltFA/PokeINVR_b_MtrA_UnderVoltFAChrt */
    /* During: PokeINVR_b_MtrA_UnderVoltFA/PokeINVR_b_MtrA_UnderVoltFAChrt */
    /* Entry Internal: PokeINVR_b_MtrA_UnderVoltFA/PokeINVR_b_MtrA_UnderVoltFAChrt */
    /* Transition: '<S591>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrA_UnderVoltFA_VeINVR_b_MtrA_UnderVoltFA_IRV
        (LeINVR_b_MtrA_UnderVoltFA);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrA_UnderVoltFA' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrBFlt_3PS_Pos(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrBFlt_3PS_Pos)
{
    UNUSED_PARAMETER(LeINVR_b_MtrBFlt_3PS_Pos);

    /* Gateway: PokeINVR_b_MtrBFlt_3PS_Pos/PokeINVR_b_MtrBFlt_3PS_PosChrt */
    /* During: PokeINVR_b_MtrBFlt_3PS_Pos/PokeINVR_b_MtrBFlt_3PS_PosChrt */
    /* Entry Internal: PokeINVR_b_MtrBFlt_3PS_Pos/PokeINVR_b_MtrBFlt_3PS_PosChrt */
    /* Transition: '<S592>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrBFlt_3PS_Pos_AltSrc(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrBFlt_3PS_Pos_AltSrc)
{
    UNUSED_PARAMETER(LeINVR_b_MtrBFlt_3PS_Pos_AltSrc);

    /* Gateway: PokeINVR_b_MtrBFlt_3PS_Pos_AltSrc/PokeINVR_b_MtrBFlt_3PS_Pos_AltSrcChrt */
    /* During: PokeINVR_b_MtrBFlt_3PS_Pos_AltSrc/PokeINVR_b_MtrBFlt_3PS_Pos_AltSrcChrt */
    /* Entry Internal: PokeINVR_b_MtrBFlt_3PS_Pos_AltSrc/PokeINVR_b_MtrBFlt_3PS_Pos_AltSrcChrt */
    /* Transition: '<S593>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrBFlt_HV_CntctrOpnRq(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrBFlt_HV_CntctrOpnRq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrBFlt_HV_CntctrOpnRq' */
    /* Merge: '<Root>/Merge_68' incorporates:
     *  Chart: '<S136>/PokeINVR_b_MtrBFlt_HV_CntctrOpnRqChrt'
     *  SignalConversion generated from: '<S136>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Sig_Rcvd_write'
     */
    /* Gateway: PokeINVR_b_MtrBFlt_HV_CntctrOpnRq/PokeINVR_b_MtrBFlt_HV_CntctrOpnRqChrt */
    /* During: PokeINVR_b_MtrBFlt_HV_CntctrOpnRq/PokeINVR_b_MtrBFlt_HV_CntctrOpnRqChrt */
    /* Entry Internal: PokeINVR_b_MtrBFlt_HV_CntctrOpnRq/PokeINVR_b_MtrBFlt_HV_CntctrOpnRqChrt */
    /* Transition: '<S594>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_69' incorporates:
     *  SignalConversion generated from: '<S136>/LeINVR_b_MtrBFlt_HV_CntctrOpnRq'
     *  SignalConversion generated from: '<S136>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq_write'
     */
    Rte_IrvWrite_PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Init_IRV
        (LeINVR_b_MtrBFlt_HV_CntctrOpnRq);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrBFlt_HV_CntctrOpnRq' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc(VAR(boolean,
    AUTOMATIC) LeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc' */
    /* Merge: '<Root>/Merge_71' incorporates:
     *  Chart: '<S137>/PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrcChrt'
     *  SignalConversion generated from: '<S137>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc_Sig_Rcvd_write'
     */
    /* Gateway: PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc/PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* During: PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc/PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* Entry Internal: PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc/PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* Transition: '<S595>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc_VeINVR_b_MtrBFltHVCntctrOpnRqAltSrc_SigRcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_72' incorporates:
     *  SignalConversion generated from: '<S137>/LeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc'
     *  SignalConversion generated from: '<S137>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc_write'
     */
    Rte_IrvWrite_PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc_Init_IRV
        (LeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrB_GMGOverTemp(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrB_GMGOverTemp)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrB_GMGOverTemp' */
    /* SignalConversion generated from: '<S138>/VeINVR_b_MtrB_GMGOverTemp' incorporates:
     *  SignalConversion generated from: '<S138>/LeINVR_b_MtrB_GMGOverTemp'
     */
    /* Gateway: PokeINVR_b_MtrB_GMGOverTemp/PokeINVR_b_MtrB_GMGOverTempChrt */
    /* During: PokeINVR_b_MtrB_GMGOverTemp/PokeINVR_b_MtrB_GMGOverTempChrt */
    /* Entry Internal: PokeINVR_b_MtrB_GMGOverTemp/PokeINVR_b_MtrB_GMGOverTempChrt */
    /* Transition: '<S596>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrB_GMGOverTemp_VeINVR_b_MtrB_GMGOverTemp_IRV
        (LeINVR_b_MtrB_GMGOverTemp);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrB_GMGOverTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrCFlt_3PS_Pos(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrCFlt_3PS_Pos)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrCFlt_3PS_Pos' */
    /* Merge: '<Root>/Merge_114' incorporates:
     *  Chart: '<S139>/PokeINVR_b_MtrCFlt_3PS_PosChrt'
     *  SignalConversion generated from: '<S139>/VeINVR_b_MtrCFlt_3PS_Pos_Sig_Rcvd_write'
     */
    /* Gateway: PokeINVR_b_MtrCFlt_3PS_Pos/PokeINVR_b_MtrCFlt_3PS_PosChrt */
    /* During: PokeINVR_b_MtrCFlt_3PS_Pos/PokeINVR_b_MtrCFlt_3PS_PosChrt */
    /* Entry Internal: PokeINVR_b_MtrCFlt_3PS_Pos/PokeINVR_b_MtrCFlt_3PS_PosChrt */
    /* Transition: '<S597>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrCFlt_3PS_Pos_VeINVR_b_MtrCFlt_3PS_Pos_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_115' incorporates:
     *  SignalConversion generated from: '<S139>/LeINVR_b_MtrCFlt_3PS_Pos'
     *  SignalConversion generated from: '<S139>/VeINVR_b_MtrCFlt_3PS_Pos_write'
     */
    Rte_IrvWrite_PokeINVR_b_MtrCFlt_3PS_Pos_VeINVR_b_MtrCFlt_3PS_Pos_Init_IRV
        (LeINVR_b_MtrCFlt_3PS_Pos);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrCFlt_3PS_Pos' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_MtrCFlt_HV_CntctrOpnRq(VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrCFlt_HV_CntctrOpnRq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_MtrCFlt_HV_CntctrOpnRq' */
    /* Merge: '<Root>/Merge_116' incorporates:
     *  Chart: '<S140>/PokeINVR_b_MtrCFlt_HV_CntctrOpnRqChrt'
     *  SignalConversion generated from: '<S140>/VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Sig_Rcvd_write'
     */
    /* Gateway: PokeINVR_b_MtrCFlt_HV_CntctrOpnRq/PokeINVR_b_MtrCFlt_HV_CntctrOpnRqChrt */
    /* During: PokeINVR_b_MtrCFlt_HV_CntctrOpnRq/PokeINVR_b_MtrCFlt_HV_CntctrOpnRqChrt */
    /* Entry Internal: PokeINVR_b_MtrCFlt_HV_CntctrOpnRq/PokeINVR_b_MtrCFlt_HV_CntctrOpnRqChrt */
    /* Transition: '<S598>:2' */
    Rte_IrvWrite_PokeINVR_b_MtrCFlt_HV_CntctrOpnRq_VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_117' incorporates:
     *  SignalConversion generated from: '<S140>/LeINVR_b_MtrCFlt_HV_CntctrOpnRq'
     *  SignalConversion generated from: '<S140>/VeINVR_b_MtrCFlt_HV_CntctrOpnRq_write'
     */
    Rte_IrvWrite_PokeINVR_b_MtrCFlt_HV_CntctrOpnRq_VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Init_IRV
        (LeINVR_b_MtrCFlt_HV_CntctrOpnRq);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_MtrCFlt_HV_CntctrOpnRq' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_b_P1_CAN_COM_Error(VAR(boolean, AUTOMATIC)
    LeINVR_b_P1_CAN_COM_Error)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_b_P1_CAN_COM_Error' */
    /* Outport: '<Root>/VeINVR_b_P1_CAN_COM_Error' incorporates:
     *  SignalConversion generated from: '<S141>/VeINVR_b_P1_CAN_COM_Error'
     *  SignalConversion generated from: '<S141>/LeINVR_b_P1_CAN_COM_Error'
     */
    /* Gateway: PokeINVR_b_P1_CAN_COM_Error/PokeINVR_b_P1_CAN_COM_ErrorChrt */
    /* During: PokeINVR_b_P1_CAN_COM_Error/PokeINVR_b_P1_CAN_COM_ErrorChrt */
    /* Entry Internal: PokeINVR_b_P1_CAN_COM_Error/PokeINVR_b_P1_CAN_COM_ErrorChrt */
    /* Transition: '<S599>:2' */
    (void)Rte_Write_VeINVR_b_P1_CAN_COM_Error_Value(LeINVR_b_P1_CAN_COM_Error);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_b_P1_CAN_COM_Error' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_BstCnvtrFailSts(VAR(TeINVR_e_BstCnvtrFailSts,
    AUTOMATIC) LeINVR_e_BstCnvtrFailSts, VAR(boolean, AUTOMATIC)
    LeINVR_b_BstCnvtrFailStsFA)
{
    TeINVR_e_BstCnvtrFailSts rtb_LeINVR_e_BstCnvtrFailSts_out;
    boolean rtb_LeINVR_b_BstCnvtrFailStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_BstCnvtrFailSts' */
    /* Chart: '<S142>/PokeINVR_e_BstCnvtrFailStsChrt' incorporates:
     *  SignalConversion generated from: '<S142>/LeINVR_b_BstCnvtrFailStsFA'
     *  SignalConversion generated from: '<S142>/LeINVR_e_BstCnvtrFailSts'
     */
    /* Gateway: PokeINVR_e_BstCnvtrFailSts/PokeINVR_e_BstCnvtrFailStsChrt */
    /* During: PokeINVR_e_BstCnvtrFailSts/PokeINVR_e_BstCnvtrFailStsChrt */
    /* Entry Internal: PokeINVR_e_BstCnvtrFailSts/PokeINVR_e_BstCnvtrFailStsChrt */
    /* Transition: '<S600>:32' */
    if (!LeINVR_b_BstCnvtrFailStsFA)
    {
        /* Transition: '<S600>:3' */
        /* Transition: '<S600>:15' */
        rtb_LeINVR_e_BstCnvtrFailSts_out = LeINVR_e_BstCnvtrFailSts;
        rtb_LeINVR_b_BstCnvtrFailStsFA_out = false;

        /* Transition: '<S600>:18' */
    }
    else
    {
        /* Transition: '<S600>:4' */
        rtb_LeINVR_b_BstCnvtrFailStsFA_out = true;
        rtb_LeINVR_e_BstCnvtrFailSts_out = CeINVR_e_BstCnvFailStsSNA;
    }

    /* End of Chart: '<S142>/PokeINVR_e_BstCnvtrFailStsChrt' */

    /* Outport: '<Root>/VeINVR_b_BstCnvtrFailStsFA' incorporates:
     *  SignalConversion generated from: '<S142>/VeINVR_b_BstCnvtrFailStsFA'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrFailStsFA_Value
        (rtb_LeINVR_b_BstCnvtrFailStsFA_out);

    /* Outport: '<Root>/VeINVR_e_BstCnvtrFailSts' incorporates:
     *  SignalConversion generated from: '<S142>/VeINVR_e_BstCnvtrFailSts'
     */
    (void)Rte_Write_VeINVR_e_BstCnvtrFailSts_Value
        (rtb_LeINVR_e_BstCnvtrFailSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_BstCnvtrFailSts' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_EMModeReq_TCM(VAR(sint16, AUTOMATIC)
    LeINVR_e_EMModeReq_TCM, VAR(boolean, AUTOMATIC) LeINVR_b_EMModeReq_TCMFA)
{
    TeINVR_e_EMModeReq_TCM rtb_LeINVR_e_EMModeReq_TCM_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_EMModeReq_TCM' */
    /* Chart: '<S143>/PokeINVR_e_EMModeReq_TCMChrt' incorporates:
     *  Constant: '<S601>/Calib'
     *  SignalConversion generated from: '<S143>/LeINVR_b_EMModeReq_TCMFA'
     *  SignalConversion generated from: '<S143>/LeINVR_e_EMModeReq_TCM'
     */
    /* Gateway: PokeINVR_e_EMModeReq_TCM/PokeINVR_e_EMModeReq_TCMChrt */
    /* During: PokeINVR_e_EMModeReq_TCM/PokeINVR_e_EMModeReq_TCMChrt */
    /* Entry Internal: PokeINVR_e_EMModeReq_TCM/PokeINVR_e_EMModeReq_TCMChrt */
    /* Transition: '<S602>:2' */
    if (!LeINVR_b_EMModeReq_TCMFA)
    {
        /* Transition: '<S602>:3' */
        /* Transition: '<S602>:15' */
        rtb_LeINVR_e_EMModeReq_TCM_out = KaINVR_e_EMModeReq_TCM_Map
            [(LeINVR_e_EMModeReq_TCM)];

        /* Transition: '<S602>:18' */
    }
    else
    {
        /* Transition: '<S602>:4' */
        rtb_LeINVR_e_EMModeReq_TCM_out = KeINVR_e_EMModeReq_TCMDflt;
    }

    /* End of Chart: '<S143>/PokeINVR_e_EMModeReq_TCMChrt' */

    /* Outport: '<Root>/VeINVR_e_MtrB_TCMEMMdReq' incorporates:
     *  SignalConversion generated from: '<S143>/VeINVR_e_EMModeReq_TCM'
     */
    (void)Rte_Write_VeINVR_e_MtrB_TCMEMMdReq_Value
        (rtb_LeINVR_e_EMModeReq_TCM_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_EMModeReq_TCM' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_InvrtrA_IsolStat(VAR(TeINVR_e_InvrtrIsolStat,
    AUTOMATIC) LeINVR_e_InvrtrA_IsolStat_Raw)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_InvrtrA_IsolStat' */
    /* Merge: '<Root>/Merge_11' incorporates:
     *  Chart: '<S144>/PokeINVR_e_InvrtrA_IsolStatChrt'
     *  SignalConversion generated from: '<S144>/VeINVR_b_InvrtrA_IsolStat_Sig_Rcvd_write'
     */
    /* Gateway: PokeINVR_e_InvrtrA_IsolStat/PokeINVR_e_InvrtrA_IsolStatChrt */
    /* During: PokeINVR_e_InvrtrA_IsolStat/PokeINVR_e_InvrtrA_IsolStatChrt */
    /* Entry Internal: PokeINVR_e_InvrtrA_IsolStat/PokeINVR_e_InvrtrA_IsolStatChrt */
    /* Transition: '<S604>:31' */
    Rte_IrvWrite_PokeINVR_e_InvrtrA_IsolStat_VeINVR_b_InvrtrA_IsolStat_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  Chart: '<S144>/PokeINVR_e_InvrtrA_IsolStatChrt'
     *  Constant: '<S603>/Calib'
     *  SignalConversion generated from: '<S144>/LeINVR_e_InvrtrA_IsolStat_Raw'
     *  SignalConversion generated from: '<S144>/VeINVR_e_InvrtrA_IsolStat_write'
     */
    Rte_IrvWrite_PokeINVR_e_InvrtrA_IsolStat_VeINVR_e_InvrtrA_IsolStat_Init_IRV
        (KaINVR_e_InvrtrA_IsolStat_Map[(LeINVR_e_InvrtrA_IsolStat_Raw)]);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_InvrtrA_IsolStat' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_InvrtrB_IsolStat(VAR(TeINVR_e_InvrtrIsolStat,
    AUTOMATIC) LeINVR_e_InvrtrB_IsolStat_Raw)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_InvrtrB_IsolStat' */
    /* Merge: '<Root>/Merge_58' incorporates:
     *  Chart: '<S145>/PokeINVR_e_InvrtrB_IsolStatChrt'
     *  SignalConversion generated from: '<S145>/VeINVR_b_InvrtrB_IsolStat_Sig_Rcvd_write'
     */
    /* Gateway: PokeINVR_e_InvrtrB_IsolStat/PokeINVR_e_InvrtrB_IsolStatChrt */
    /* During: PokeINVR_e_InvrtrB_IsolStat/PokeINVR_e_InvrtrB_IsolStatChrt */
    /* Entry Internal: PokeINVR_e_InvrtrB_IsolStat/PokeINVR_e_InvrtrB_IsolStatChrt */
    /* Transition: '<S606>:31' */
    Rte_IrvWrite_PokeINVR_e_InvrtrB_IsolStat_VeINVR_b_InvrtrB_IsolStat_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_59' incorporates:
     *  Chart: '<S145>/PokeINVR_e_InvrtrB_IsolStatChrt'
     *  Constant: '<S605>/Calib'
     *  SignalConversion generated from: '<S145>/LeINVR_e_InvrtrB_IsolStat_Raw'
     *  SignalConversion generated from: '<S145>/VeINVR_e_InvrtrB_IsolStat_write'
     */
    Rte_IrvWrite_PokeINVR_e_InvrtrB_IsolStat_VeINVR_e_InvrtrB_IsolStat_Init_IRV
        (KaINVR_e_InvrtrB_IsolStat_Map[(LeINVR_e_InvrtrB_IsolStat_Raw)]);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_InvrtrB_IsolStat' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MCPA_CommFail(VAR(uint8, AUTOMATIC)
    LeINVR_e_MCPA_CommFail, VAR(boolean, AUTOMATIC) LeINVR_b_MCPA_CommFailFA)
{
    boolean rtb_LeINVR_b_MCPA_CommFailFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MCPA_CommFail' */
    /* Chart: '<S146>/PokeINVR_e_MCPA_CommFailChrt' incorporates:
     *  Constant: '<S607>/Calib'
     *  SignalConversion generated from: '<S146>/LeINVR_b_MCPA_CommFailFA'
     *  SignalConversion generated from: '<S146>/LeINVR_e_MCPA_CommFail'
     */
    /* Gateway: PokeINVR_e_MCPA_CommFail/PokeINVR_e_MCPA_CommFailChrt */
    /* During: PokeINVR_e_MCPA_CommFail/PokeINVR_e_MCPA_CommFailChrt */
    /* Entry Internal: PokeINVR_e_MCPA_CommFail/PokeINVR_e_MCPA_CommFailChrt */
    /* Transition: '<S608>:2' */
    if (!LeINVR_b_MCPA_CommFailFA)
    {
        /* Transition: '<S608>:3' */
        /* Transition: '<S608>:15' */
        INVR_ac_B.LeINVR_e_MCPA_CommFail_out = KaINVR_e_MCPA_CommFail_Map
            [(LeINVR_e_MCPA_CommFail)];
        rtb_LeINVR_b_MCPA_CommFailFA_out = false;

        /* Transition: '<S608>:18' */
    }
    else
    {
        /* Transition: '<S608>:4' */
        rtb_LeINVR_b_MCPA_CommFailFA_out = true;
    }

    /* End of Chart: '<S146>/PokeINVR_e_MCPA_CommFailChrt' */

    /* Outport: '<Root>/VeINVR_b_MCPA_CommFailFA' incorporates:
     *  SignalConversion generated from: '<S146>/VeINVR_b_MCPA_CommFailFA'
     */
    (void)Rte_Write_VeINVR_b_MCPA_CommFailFA_Value
        (rtb_LeINVR_b_MCPA_CommFailFA_out);

    /* Outport: '<Root>/VeINVR_e_MCPA_CommFail' incorporates:
     *  SignalConversion generated from: '<S146>/VeINVR_e_MCPA_CommFail'
     */
    (void)Rte_Write_VeINVR_e_MCPA_CommFail_Value
        (INVR_ac_B.LeINVR_e_MCPA_CommFail_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MCPA_CommFail' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MCPA_HVILSts(VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC) LeINVR_e_MCPA_HVILSts, VAR(boolean, AUTOMATIC)
    LeINVR_b_MCPA_HVILStsFA)
{
    boolean rtb_LeINVR_b_MCPA_HVILStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MCPA_HVILSts' */
    /* Chart: '<S147>/PokeINVR_e_MCPA_HVILStsChrt' incorporates:
     *  SignalConversion generated from: '<S147>/LeINVR_b_MCPA_HVILStsFA'
     */
    /* Gateway: PokeINVR_e_MCPA_HVILSts/PokeINVR_e_MCPA_HVILStsChrt */
    /* During: PokeINVR_e_MCPA_HVILSts/PokeINVR_e_MCPA_HVILStsChrt */
    /* Entry Internal: PokeINVR_e_MCPA_HVILSts/PokeINVR_e_MCPA_HVILStsChrt */
    /* Transition: '<S609>:2' */
    if (!LeINVR_b_MCPA_HVILStsFA)
    {
        /* SignalConversion generated from: '<S147>/VeINVR_e_MCPA_HVILSts' incorporates:
         *  Outport: '<Root>/VeINVR_e_MCPA_HVILSts'
         *  SignalConversion generated from: '<S147>/LeINVR_e_MCPA_HVILSts'
         */
        /* Transition: '<S609>:3' */
        /* Transition: '<S609>:15' */
        (void)Rte_Write_VeINVR_e_MCPA_HVILSts_Value(LeINVR_e_MCPA_HVILSts);
        rtb_LeINVR_b_MCPA_HVILStsFA_out = false;

        /* Transition: '<S609>:18' */
    }
    else
    {
        /* Transition: '<S609>:4' */
        rtb_LeINVR_b_MCPA_HVILStsFA_out = true;

        /* SignalConversion generated from: '<S147>/VeINVR_e_MCPA_HVILSts' incorporates:
         *  Outport: '<Root>/VeINVR_e_MCPA_HVILSts'
         *  SignalConversion generated from: '<S147>/LeINVR_e_MCPA_HVILSts'
         */
        (void)Rte_Write_VeINVR_e_MCPA_HVILSts_Value(LeINVR_e_MCPA_HVILSts);
    }

    /* End of Chart: '<S147>/PokeINVR_e_MCPA_HVILStsChrt' */

    /* Outport: '<Root>/VeINVR_b_MCPA_HVILStsFA' incorporates:
     *  SignalConversion generated from: '<S147>/VeINVR_b_MCPA_HVILStsFA'
     */
    (void)Rte_Write_VeINVR_b_MCPA_HVILStsFA_Value
        (rtb_LeINVR_b_MCPA_HVILStsFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MCPA_HVILSts' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MCPA_SPT_State(VAR(sint16, AUTOMATIC)
    LeINVR_e_MCPA_SPT_State)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MCPA_SPT_State' */
    /* Chart: '<S148>/PokeINVR_e_MCPA_SPT_StateChrt' incorporates:
     *  Constant: '<S610>/Calib'
     *  SignalConversion generated from: '<S148>/LeINVR_e_MCPA_SPT_State'
     */
    /* Gateway: PokeINVR_e_MCPA_SPT_State/PokeINVR_e_MCPA_SPT_StateChrt */
    /* During: PokeINVR_e_MCPA_SPT_State/PokeINVR_e_MCPA_SPT_StateChrt */
    /* Entry Internal: PokeINVR_e_MCPA_SPT_State/PokeINVR_e_MCPA_SPT_StateChrt */
    /* Transition: '<S611>:101' */
    if ((LeINVR_e_MCPA_SPT_State >= 0) && (LeINVR_e_MCPA_SPT_State <
            KeINVR_Cnt_MCPA_SPT_State_ArraySize))
    {
        /* Transition: '<S611>:104' */
        /* Transition: '<S611>:31' */
        INVR_ac_B.LeINVR_e_MCPA_SPT_State_out = KaINVR_e_MCPA_SPT_State_Map
            [(LeINVR_e_MCPA_SPT_State)];

        /* Transition: '<S611>:105' */
    }
    else
    {
        /* Transition: '<S611>:107' */
    }

    /* Merge: '<Root>/Merge_17' incorporates:
     *  Chart: '<S148>/PokeINVR_e_MCPA_SPT_StateChrt'
     *  SignalConversion generated from: '<S148>/VeINVR_b_MCPA_SPT_State_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_e_MCPA_SPT_State_VeINVR_b_MCPA_SPT_State_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S148>/VeINVR_e_MCPA_SPT_State_write'
     * */
    Rte_IrvWrite_PokeINVR_e_MCPA_SPT_State_VeINVR_e_MCPA_SPT_State_Init_IRV
        (INVR_ac_B.LeINVR_e_MCPA_SPT_State_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MCPA_SPT_State' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MCPB_CommFail(VAR(uint8, AUTOMATIC)
    LeINVR_e_MCPB_CommFail, VAR(boolean, AUTOMATIC) LeINVR_b_MCPB_CommFailFA)
{
    boolean rtb_LeINVR_b_MCPB_CommFailFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MCPB_CommFail' */
    /* Chart: '<S149>/PokeINVR_e_MCPB_CommFailChrt' incorporates:
     *  Constant: '<S612>/Calib'
     *  SignalConversion generated from: '<S149>/LeINVR_b_MCPB_CommFailFA'
     *  SignalConversion generated from: '<S149>/LeINVR_e_MCPB_CommFail'
     */
    /* Gateway: PokeINVR_e_MCPB_CommFail/PokeINVR_e_MCPB_CommFailChrt */
    /* During: PokeINVR_e_MCPB_CommFail/PokeINVR_e_MCPB_CommFailChrt */
    /* Entry Internal: PokeINVR_e_MCPB_CommFail/PokeINVR_e_MCPB_CommFailChrt */
    /* Transition: '<S613>:2' */
    if (!LeINVR_b_MCPB_CommFailFA)
    {
        /* Transition: '<S613>:3' */
        /* Transition: '<S613>:15' */
        INVR_ac_B.LeINVR_e_MCPB_CommFail_out = KaINVR_e_MCPB_CommFail_Map
            [(LeINVR_e_MCPB_CommFail)];
        rtb_LeINVR_b_MCPB_CommFailFA_out = false;

        /* Transition: '<S613>:18' */
    }
    else
    {
        /* Transition: '<S613>:4' */
        rtb_LeINVR_b_MCPB_CommFailFA_out = true;
    }

    /* End of Chart: '<S149>/PokeINVR_e_MCPB_CommFailChrt' */

    /* Outport: '<Root>/VeINVR_b_MCPB_CommFailFA' incorporates:
     *  SignalConversion generated from: '<S149>/VeINVR_b_MCPB_CommFailFA'
     */
    (void)Rte_Write_VeINVR_b_MCPB_CommFailFA_Value
        (rtb_LeINVR_b_MCPB_CommFailFA_out);

    /* Outport: '<Root>/VeINVR_e_MCPB_CommFail' incorporates:
     *  SignalConversion generated from: '<S149>/VeINVR_e_MCPB_CommFail'
     */
    (void)Rte_Write_VeINVR_e_MCPB_CommFail_Value
        (INVR_ac_B.LeINVR_e_MCPB_CommFail_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MCPB_CommFail' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MCPB_HVILSts(VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC) LeINVR_e_MCPB_HVILSts, VAR(boolean, AUTOMATIC)
    LeINVR_b_MCPB_HVILStsFA)
{
    boolean rtb_LeINVR_b_MCPB_HVILStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MCPB_HVILSts' */
    /* Chart: '<S150>/PokeINVR_e_MCPB_HVILStsChrt' incorporates:
     *  SignalConversion generated from: '<S150>/LeINVR_b_MCPB_HVILStsFA'
     */
    /* Gateway: PokeINVR_e_MCPB_HVILSts/PokeINVR_e_MCPB_HVILStsChrt */
    /* During: PokeINVR_e_MCPB_HVILSts/PokeINVR_e_MCPB_HVILStsChrt */
    /* Entry Internal: PokeINVR_e_MCPB_HVILSts/PokeINVR_e_MCPB_HVILStsChrt */
    /* Transition: '<S614>:2' */
    if (!LeINVR_b_MCPB_HVILStsFA)
    {
        /* SignalConversion generated from: '<S150>/VeINVR_e_MCPB_HVILSts' incorporates:
         *  Outport: '<Root>/VeINVR_e_MCPB_HVILSts'
         *  SignalConversion generated from: '<S150>/LeINVR_e_MCPB_HVILSts'
         */
        /* Transition: '<S614>:3' */
        /* Transition: '<S614>:15' */
        (void)Rte_Write_VeINVR_e_MCPB_HVILSts_Value(LeINVR_e_MCPB_HVILSts);
        rtb_LeINVR_b_MCPB_HVILStsFA_out = false;

        /* Transition: '<S614>:18' */
    }
    else
    {
        /* Transition: '<S614>:4' */
        rtb_LeINVR_b_MCPB_HVILStsFA_out = true;

        /* SignalConversion generated from: '<S150>/VeINVR_e_MCPB_HVILSts' incorporates:
         *  Outport: '<Root>/VeINVR_e_MCPB_HVILSts'
         *  SignalConversion generated from: '<S150>/LeINVR_e_MCPB_HVILSts'
         */
        (void)Rte_Write_VeINVR_e_MCPB_HVILSts_Value(LeINVR_e_MCPB_HVILSts);
    }

    /* End of Chart: '<S150>/PokeINVR_e_MCPB_HVILStsChrt' */

    /* Outport: '<Root>/VeINVR_b_MCPB_HVILStsFA' incorporates:
     *  SignalConversion generated from: '<S150>/VeINVR_b_MCPB_HVILStsFA'
     */
    (void)Rte_Write_VeINVR_b_MCPB_HVILStsFA_Value
        (rtb_LeINVR_b_MCPB_HVILStsFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MCPB_HVILSts' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MCPB_SPT_State(VAR(sint16, AUTOMATIC)
    LeINVR_e_MCPB_SPT_State)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MCPB_SPT_State' */
    /* Chart: '<S151>/PokeINVR_e_MCPB_SPT_StateChrt' incorporates:
     *  Constant: '<S615>/Calib'
     *  SignalConversion generated from: '<S151>/LeINVR_e_MCPB_SPT_State'
     */
    /* Gateway: PokeINVR_e_MCPB_SPT_State/PokeINVR_e_MCPB_SPT_StateChrt */
    /* During: PokeINVR_e_MCPB_SPT_State/PokeINVR_e_MCPB_SPT_StateChrt */
    /* Entry Internal: PokeINVR_e_MCPB_SPT_State/PokeINVR_e_MCPB_SPT_StateChrt */
    /* Transition: '<S616>:100' */
    if ((LeINVR_e_MCPB_SPT_State >= 0) && (LeINVR_e_MCPB_SPT_State <
            KeINVR_Cnt_MCPB_SPT_State_ArraySize))
    {
        /* Transition: '<S616>:102' */
        /* Transition: '<S616>:31' */
        INVR_ac_B.LeINVR_e_MCPB_SPT_State_out = KaINVR_e_MCPB_SPT_State_Map
            [(LeINVR_e_MCPB_SPT_State)];

        /* Transition: '<S616>:104' */
    }
    else
    {
        /* Transition: '<S616>:106' */
    }

    /* Merge: '<Root>/Merge_64' incorporates:
     *  Chart: '<S151>/PokeINVR_e_MCPB_SPT_StateChrt'
     *  SignalConversion generated from: '<S151>/VeINVR_b_MCPB_SPT_State_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_e_MCPB_SPT_State_VeINVR_b_MCPB_SPT_State_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S151>/VeINVR_e_MCPB_SPT_State_write'
     * */
    Rte_IrvWrite_PokeINVR_e_MCPB_SPT_State_VeINVR_e_MCPB_SPT_State_Init_IRV
        (INVR_ac_B.LeINVR_e_MCPB_SPT_State_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MCPB_SPT_State' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MCPC_HVILSts(VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC) LeINVR_e_MCPC_HVILSts, VAR(boolean, AUTOMATIC)
    LeINVR_b_MCPC_HVILStsFA)
{
    boolean rtb_LeINVR_b_MCPC_HVILStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MCPC_HVILSts' */
    /* Chart: '<S152>/PokeINVR_e_MCPC_HVILStsChrt' incorporates:
     *  SignalConversion generated from: '<S152>/LeINVR_b_MCPC_HVILStsFA'
     */
    /* Gateway: PokeINVR_e_MCPC_HVILSts/PokeINVR_e_MCPC_HVILStsChrt */
    /* During: PokeINVR_e_MCPC_HVILSts/PokeINVR_e_MCPC_HVILStsChrt */
    /* Entry Internal: PokeINVR_e_MCPC_HVILSts/PokeINVR_e_MCPC_HVILStsChrt */
    /* Transition: '<S617>:2' */
    if (!LeINVR_b_MCPC_HVILStsFA)
    {
        /* SignalConversion generated from: '<S152>/VeINVR_e_MCPC_HVILSts' incorporates:
         *  Outport: '<Root>/VeINVR_e_MCPC_HVILSts'
         *  SignalConversion generated from: '<S152>/LeINVR_e_MCPC_HVILSts'
         */
        /* Transition: '<S617>:3' */
        /* Transition: '<S617>:15' */
        (void)Rte_Write_VeINVR_e_MCPC_HVILSts_Value(LeINVR_e_MCPC_HVILSts);
        rtb_LeINVR_b_MCPC_HVILStsFA_out = false;

        /* Transition: '<S617>:18' */
    }
    else
    {
        /* Transition: '<S617>:4' */
        rtb_LeINVR_b_MCPC_HVILStsFA_out = true;

        /* SignalConversion generated from: '<S152>/VeINVR_e_MCPC_HVILSts' incorporates:
         *  Outport: '<Root>/VeINVR_e_MCPC_HVILSts'
         *  SignalConversion generated from: '<S152>/LeINVR_e_MCPC_HVILSts'
         */
        (void)Rte_Write_VeINVR_e_MCPC_HVILSts_Value(LeINVR_e_MCPC_HVILSts);
    }

    /* End of Chart: '<S152>/PokeINVR_e_MCPC_HVILStsChrt' */

    /* Outport: '<Root>/VeINVR_b_MCPC_HVILStsFA' incorporates:
     *  SignalConversion generated from: '<S152>/VeINVR_b_MCPC_HVILStsFA'
     */
    (void)Rte_Write_VeINVR_b_MCPC_HVILStsFA_Value
        (rtb_LeINVR_b_MCPC_HVILStsFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MCPC_HVILSts' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MCPC_SPT_State(VAR(sint16, AUTOMATIC)
    LeINVR_e_MCPC_SPT_State)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MCPC_SPT_State' */
    /* Merge: '<Root>/Merge_110' incorporates:
     *  Chart: '<S153>/PokeINVR_e_MCPC_SPT_StateChrt'
     *  SignalConversion generated from: '<S153>/VeINVR_b_MCPC_SPT_State_Sig_Rcvd_write'
     */
    /* Gateway: PokeINVR_e_MCPC_SPT_State/PokeINVR_e_MCPC_SPT_StateChrt */
    /* During: PokeINVR_e_MCPC_SPT_State/PokeINVR_e_MCPC_SPT_StateChrt */
    /* Entry Internal: PokeINVR_e_MCPC_SPT_State/PokeINVR_e_MCPC_SPT_StateChrt */
    /* Transition: '<S619>:101' */
    Rte_IrvWrite_PokeINVR_e_MCPC_SPT_State_VeINVR_b_MCPC_SPT_State_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_111' incorporates:
     *  Chart: '<S153>/PokeINVR_e_MCPC_SPT_StateChrt'
     *  Constant: '<S618>/Calib'
     *  SignalConversion generated from: '<S153>/LeINVR_e_MCPC_SPT_State'
     *  SignalConversion generated from: '<S153>/VeINVR_e_MCPC_SPT_State_write'
     */
    Rte_IrvWrite_PokeINVR_e_MCPC_SPT_State_VeINVR_e_MCPC_SPT_State_Init_IRV
        (KaINVR_e_MCPC_SPT_State_Map[(LeINVR_e_MCPC_SPT_State)]);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MCPC_SPT_State' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MtrA_6SOEnbl(VAR(sint16, AUTOMATIC)
    LeINVR_e_MtrA_6SOEnbl, VAR(boolean, AUTOMATIC) LeINVR_b_MtrA_6SOEnbl_FA)
{
    TeINVR_e_SixSOStatus rtb_LeINVR_e_MtrA_6SOEnbl_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MtrA_6SOEnbl' */
    /* Chart: '<S154>/PokeINVR_e_MtrA_6SOEnblChrt' incorporates:
     *  Constant: '<S620>/Calib'
     *  SignalConversion generated from: '<S154>/LeINVR_b_MtrA_6SOEnbl_FA'
     *  SignalConversion generated from: '<S154>/LeINVR_e_MtrA_6SOEnbl_Raw'
     */
    /* Gateway: PokeINVR_e_MtrA_6SOEnbl/PokeINVR_e_MtrA_6SOEnblChrt */
    /* During: PokeINVR_e_MtrA_6SOEnbl/PokeINVR_e_MtrA_6SOEnblChrt */
    /* Entry Internal: PokeINVR_e_MtrA_6SOEnbl/PokeINVR_e_MtrA_6SOEnblChrt */
    /* Transition: '<S621>:2' */
    if (!LeINVR_b_MtrA_6SOEnbl_FA)
    {
        /* Transition: '<S621>:3' */
        /* Transition: '<S621>:15' */
        rtb_LeINVR_e_MtrA_6SOEnbl_out = KaINVR_e_MtrA_6SOEnbl_Map
            [(LeINVR_e_MtrA_6SOEnbl)];

        /* Transition: '<S621>:18' */
    }
    else
    {
        /* Transition: '<S621>:4' */
        rtb_LeINVR_e_MtrA_6SOEnbl_out = CeINVR_e_SNA;
    }

    /* Merge: '<Root>/Merge_25' incorporates:
     *  Chart: '<S154>/PokeINVR_e_MtrA_6SOEnblChrt'
     *  SignalConversion generated from: '<S154>/VeINVR_b_MtrA_6SOEnbl_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_e_MtrA_6SOEnbl_VeINVR_b_MtrA_6SOEnbl_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S154>/VeINVR_e_MtrA_6SOEnbl_write'
     * */
    Rte_IrvWrite_PokeINVR_e_MtrA_6SOEnbl_VeINVR_e_MtrA_6SOEnbl_Init_IRV
        (rtb_LeINVR_e_MtrA_6SOEnbl_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MtrA_6SOEnbl' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MtrA_DrtRsn(VAR(TeINVR_e_DerateReason,
    AUTOMATIC) LeINVR_e_MtrA_DrtRsn)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MtrA_DrtRsn' */
    /* Outport: '<Root>/VeINVR_e_MtrA_DrtRsn' incorporates:
     *  SignalConversion generated from: '<S155>/VeINVR_e_MtrA_DrtRsn'
     *  SignalConversion generated from: '<S155>/LeINVR_e_MtrA_DrtRsn'
     */
    /* Gateway: PokeINVR_e_MtrA_DrtRsn/PokeINVR_e_MtrA_DrtRsnChrt */
    /* During: PokeINVR_e_MtrA_DrtRsn/PokeINVR_e_MtrA_DrtRsnChrt */
    /* Entry Internal: PokeINVR_e_MtrA_DrtRsn/PokeINVR_e_MtrA_DrtRsnChrt */
    /* Transition: '<S622>:2' */
    (void)Rte_Write_VeINVR_e_MtrA_DrtRsn_Value(LeINVR_e_MtrA_DrtRsn);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MtrA_DrtRsn' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MtrA_Dschrge_Stat(VAR(sint16, AUTOMATIC)
    LeINVR_e_MtrA_Dschrge_Stat, VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrA_Dschrge_StatFA)
{
    boolean rtb_LeINVR_b_MtrA_Dschrge_StatFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MtrA_Dschrge_Stat' */
    /* Chart: '<S156>/PokeINVR_e_MtrA_Dschrge_StatChrt' incorporates:
     *  Constant: '<S623>/Calib'
     *  SignalConversion generated from: '<S156>/LeINVR_b_MtrA_Dschrge_StatFA'
     *  SignalConversion generated from: '<S156>/LeINVR_e_MtrA_Dschrge_Stat'
     */
    /* Gateway: PokeINVR_e_MtrA_Dschrge_Stat/PokeINVR_e_MtrA_Dschrge_StatChrt */
    /* During: PokeINVR_e_MtrA_Dschrge_Stat/PokeINVR_e_MtrA_Dschrge_StatChrt */
    /* Entry Internal: PokeINVR_e_MtrA_Dschrge_Stat/PokeINVR_e_MtrA_Dschrge_StatChrt */
    /* Transition: '<S624>:2' */
    if (((!LeINVR_b_MtrA_Dschrge_StatFA) && (LeINVR_e_MtrA_Dschrge_Stat >= 0)) &&
        (LeINVR_e_MtrA_Dschrge_Stat < KeINVR_Cnt_MtrA_Dschrge_Stat_ArraySize))
    {
        /* Transition: '<S624>:3' */
        /* Transition: '<S624>:15' */
        INVR_ac_B.LeINVR_e_MtrA_Dschrge_Stat_out =
            KaINVR_e_MtrA_Dschrge_Stat_Map[(LeINVR_e_MtrA_Dschrge_Stat)];
        rtb_LeINVR_b_MtrA_Dschrge_StatFA_out = false;

        /* Transition: '<S624>:18' */
    }
    else
    {
        /* Transition: '<S624>:4' */
        rtb_LeINVR_b_MtrA_Dschrge_StatFA_out = true;
    }

    /* End of Chart: '<S156>/PokeINVR_e_MtrA_Dschrge_StatChrt' */

    /* Outport: '<Root>/VeINVR_b_MtrA_Dschrge_StatFA' incorporates:
     *  SignalConversion generated from: '<S156>/VeINVR_b_MtrA_Dschrge_StatFA_out'
     */
    (void)Rte_Write_VeINVR_b_MtrA_Dschrge_StatFA_Value
        (rtb_LeINVR_b_MtrA_Dschrge_StatFA_out);

    /* Outport: '<Root>/VeINVR_e_MtrA_Dschrge_Stat' incorporates:
     *  SignalConversion generated from: '<S156>/VeINVR_e_MtrA_Dschrge_Stat_out'
     */
    (void)Rte_Write_VeINVR_e_MtrA_Dschrge_Stat_Value
        (INVR_ac_B.LeINVR_e_MtrA_Dschrge_Stat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MtrA_Dschrge_Stat' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MtrA_InvrtrSt(VAR(TeINVR_e_MtrInvrtrSt,
    AUTOMATIC) LeINVR_e_MtrA_InvrtrSt_Raw)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MtrA_InvrtrSt' */
    /* Chart: '<S157>/PokeINVR_e_MtrA_InvrtrStChrt' incorporates:
     *  Constant: '<S625>/Calib'
     *  SignalConversion generated from: '<S157>/LeINVR_e_MtrA_InvrtrSt_Raw'
     */
    /* Gateway: PokeINVR_e_MtrA_InvrtrSt/PokeINVR_e_MtrA_InvrtrStChrt */
    /* During: PokeINVR_e_MtrA_InvrtrSt/PokeINVR_e_MtrA_InvrtrStChrt */
    /* Entry Internal: PokeINVR_e_MtrA_InvrtrSt/PokeINVR_e_MtrA_InvrtrStChrt */
    /* Transition: '<S626>:31' */
    if (((sint32)LeINVR_e_MtrA_InvrtrSt_Raw) < ((sint32)
            KeINVR_Cnt_MtrA_InvrtrSt_ArraySize))
    {
        /* Transition: '<S626>:100' */
        /* Transition: '<S626>:102' */
        INVR_ac_B.LeINVR_e_MtrA_InvrtrSt = KaINVR_e_MtrA_InvrtrSt_Map
            [(LeINVR_e_MtrA_InvrtrSt_Raw)];

        /* Transition: '<S626>:104' */
    }
    else
    {
        /* Transition: '<S626>:106' */
    }

    /* Merge: '<Root>/Merge_46' incorporates:
     *  Chart: '<S157>/PokeINVR_e_MtrA_InvrtrStChrt'
     *  SignalConversion generated from: '<S157>/VeINVR_b_MtrA_InvrtrSt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_e_MtrA_InvrtrSt_VeINVR_b_MtrA_InvrtrSt_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S157>/VeINVR_e_MtrA_InvrtrSt_write'
     * */
    Rte_IrvWrite_PokeINVR_e_MtrA_InvrtrSt_VeINVR_e_MtrA_InvrtrSt_Init_IRV
        (INVR_ac_B.LeINVR_e_MtrA_InvrtrSt);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MtrA_InvrtrSt' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MtrB_6SOEnbl(VAR(sint16, AUTOMATIC)
    LeINVR_e_MtrB_6SOEnbl, VAR(boolean, AUTOMATIC) LeINVR_b_MtrB_6SOEnbl_FA)
{
    TeINVR_e_SixSOStatus rtb_LeINVR_e_MtrB_6SOEnbl_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MtrB_6SOEnbl' */
    /* Chart: '<S158>/PokeINVR_e_MtrB_6SOEnblChrt' incorporates:
     *  Constant: '<S627>/Calib'
     *  SignalConversion generated from: '<S158>/LeINVR_b_MtrB_Dschrge_StatFA'
     *  SignalConversion generated from: '<S158>/LeINVR_e_MtrB_6SOEnbl_Raw'
     */
    /* Gateway: PokeINVR_e_MtrB_6SOEnbl/PokeINVR_e_MtrB_6SOEnblChrt */
    /* During: PokeINVR_e_MtrB_6SOEnbl/PokeINVR_e_MtrB_6SOEnblChrt */
    /* Entry Internal: PokeINVR_e_MtrB_6SOEnbl/PokeINVR_e_MtrB_6SOEnblChrt */
    /* Transition: '<S628>:2' */
    if (!LeINVR_b_MtrB_6SOEnbl_FA)
    {
        /* Transition: '<S628>:3' */
        /* Transition: '<S628>:15' */
        rtb_LeINVR_e_MtrB_6SOEnbl_out = KaINVR_e_MtrB_6SOEnbl_Map
            [(LeINVR_e_MtrB_6SOEnbl)];

        /* Transition: '<S628>:18' */
    }
    else
    {
        /* Transition: '<S628>:4' */
        rtb_LeINVR_e_MtrB_6SOEnbl_out = CeINVR_e_SNA;
    }

    /* Merge: '<Root>/Merge_73' incorporates:
     *  Chart: '<S158>/PokeINVR_e_MtrB_6SOEnblChrt'
     *  SignalConversion generated from: '<S158>/VeINVR_b_MtrB_6SOEnbl_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_e_MtrB_6SOEnbl_VeINVR_b_MtrB_6SOEnbl_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_74' incorporates:
     *  SignalConversion generated from: '<S158>/VeINVR_e_MtrB_6SOEnbl_write'
     * */
    Rte_IrvWrite_PokeINVR_e_MtrB_6SOEnbl_VeINVR_e_MtrB_6SOEnbl_Init_IRV
        (rtb_LeINVR_e_MtrB_6SOEnbl_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MtrB_6SOEnbl' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MtrB_DrtRsn(VAR(TeINVR_e_DerateReason,
    AUTOMATIC) LeINVR_e_MtrB_DrtRsn)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MtrB_DrtRsn' */
    /* Outport: '<Root>/VeINVR_e_MtrB_DrtRsn' incorporates:
     *  SignalConversion generated from: '<S159>/VeINVR_e_MtrB_DrtRsn'
     *  SignalConversion generated from: '<S159>/LeINVR_e_MtrB_DrtRsn'
     */
    /* Gateway: PokeINVR_e_MtrB_DrtRsn/PokeINVR_e_MtrB_DrtRsnChrt */
    /* During: PokeINVR_e_MtrB_DrtRsn/PokeINVR_e_MtrB_DrtRsnChrt */
    /* Entry Internal: PokeINVR_e_MtrB_DrtRsn/PokeINVR_e_MtrB_DrtRsnChrt */
    /* Transition: '<S629>:2' */
    (void)Rte_Write_VeINVR_e_MtrB_DrtRsn_Value(LeINVR_e_MtrB_DrtRsn);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MtrB_DrtRsn' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MtrB_Dschrge_Stat(VAR(sint16, AUTOMATIC)
    LeINVR_e_MtrB_Dschrge_Stat, VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrB_Dschrge_StatFA)
{
    boolean rtb_LeINVR_b_MtrB_Dschrge_StatFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MtrB_Dschrge_Stat' */
    /* Chart: '<S160>/PokeINVR_e_MtrB_Dschrge_StatChrt' incorporates:
     *  Constant: '<S630>/Calib'
     *  SignalConversion generated from: '<S160>/LeINVR_b_MtrB_Dschrge_StatFA'
     *  SignalConversion generated from: '<S160>/LeINVR_e_MtrB_Dschrge_Stat'
     */
    /* Gateway: PokeINVR_e_MtrB_Dschrge_Stat/PokeINVR_e_MtrB_Dschrge_StatChrt */
    /* During: PokeINVR_e_MtrB_Dschrge_Stat/PokeINVR_e_MtrB_Dschrge_StatChrt */
    /* Entry Internal: PokeINVR_e_MtrB_Dschrge_Stat/PokeINVR_e_MtrB_Dschrge_StatChrt */
    /* Transition: '<S631>:2' */
    if (((!LeINVR_b_MtrB_Dschrge_StatFA) && (LeINVR_e_MtrB_Dschrge_Stat >= 0)) &&
        (LeINVR_e_MtrB_Dschrge_Stat < KeINVR_Cnt_MtrB_Dschrge_Stat_ArraySize))
    {
        /* Transition: '<S631>:3' */
        /* Transition: '<S631>:15' */
        INVR_ac_B.LeINVR_e_MtrB_Dschrge_Stat_out =
            KaINVR_e_MtrB_Dschrge_Stat_Map[(LeINVR_e_MtrB_Dschrge_Stat)];
        rtb_LeINVR_b_MtrB_Dschrge_StatFA_out = false;

        /* Transition: '<S631>:18' */
    }
    else
    {
        /* Transition: '<S631>:4' */
        rtb_LeINVR_b_MtrB_Dschrge_StatFA_out = true;
    }

    /* End of Chart: '<S160>/PokeINVR_e_MtrB_Dschrge_StatChrt' */

    /* Outport: '<Root>/VeINVR_b_MtrB_Dschrge_StatFA' incorporates:
     *  SignalConversion generated from: '<S160>/VeINVR_b_MtrB_Dschrge_StatFA_out'
     */
    (void)Rte_Write_VeINVR_b_MtrB_Dschrge_StatFA_Value
        (rtb_LeINVR_b_MtrB_Dschrge_StatFA_out);

    /* Outport: '<Root>/VeINVR_e_MtrB_Dschrge_Stat' incorporates:
     *  SignalConversion generated from: '<S160>/VeINVR_e_MtrB_Dschrge_Stat_out'
     */
    (void)Rte_Write_VeINVR_e_MtrB_Dschrge_Stat_Value
        (INVR_ac_B.LeINVR_e_MtrB_Dschrge_Stat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MtrB_Dschrge_Stat' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MtrB_InvrtrSt(VAR(TeINVR_e_MtrInvrtrSt,
    AUTOMATIC) LeINVR_e_MtrB_InvrtrSt_Raw)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MtrB_InvrtrSt' */
    /* Chart: '<S161>/PokeINVR_e_MtrB_InvrtrStChrt' incorporates:
     *  Constant: '<S632>/Calib'
     *  SignalConversion generated from: '<S161>/LeINVR_e_MtrB_InvrtrSt_Raw'
     */
    /* Gateway: PokeINVR_e_MtrB_InvrtrSt/PokeINVR_e_MtrB_InvrtrStChrt */
    /* During: PokeINVR_e_MtrB_InvrtrSt/PokeINVR_e_MtrB_InvrtrStChrt */
    /* Entry Internal: PokeINVR_e_MtrB_InvrtrSt/PokeINVR_e_MtrB_InvrtrStChrt */
    /* Transition: '<S633>:100' */
    if (((sint32)LeINVR_e_MtrB_InvrtrSt_Raw) < ((sint32)
            KeINVR_Cnt_MtrB_InvrtrSt_ArraySize))
    {
        /* Transition: '<S633>:102' */
        /* Transition: '<S633>:31' */
        INVR_ac_B.LeINVR_e_MtrB_InvrtrSt = KaINVR_e_MtrB_InvrtrSt_Map
            [(LeINVR_e_MtrB_InvrtrSt_Raw)];

        /* Transition: '<S633>:106' */
    }
    else
    {
        /* Transition: '<S633>:104' */
    }

    /* Merge: '<Root>/Merge_94' incorporates:
     *  Chart: '<S161>/PokeINVR_e_MtrB_InvrtrStChrt'
     *  SignalConversion generated from: '<S161>/VeINVR_b_MtrB_InvrtrSt_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_e_MtrB_InvrtrSt_VeINVR_b_MtrB_InvrtrSt_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_95' incorporates:
     *  SignalConversion generated from: '<S161>/VeINVR_e_MtrB_InvrtrSt_write'
     * */
    Rte_IrvWrite_PokeINVR_e_MtrB_InvrtrSt_VeINVR_e_MtrB_InvrtrSt_Init_IRV
        (INVR_ac_B.LeINVR_e_MtrB_InvrtrSt);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MtrB_InvrtrSt' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MtrC_6SOEnbl(VAR(sint16, AUTOMATIC)
    LeINVR_e_MtrC_6SOEnbl, VAR(boolean, AUTOMATIC) LeINVR_b_MtrC_6SOEnbl_FA)
{
    TeINVR_e_SixSOStatus rtb_LeINVR_e_MtrC_6SOEnbl_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MtrC_6SOEnbl' */
    /* Chart: '<S162>/PokeINVR_e_MtrC_6SOEnblChrt' incorporates:
     *  Constant: '<S634>/Calib'
     *  SignalConversion generated from: '<S162>/LeINVR_b_MtrC_Dschrge_StatFA'
     *  SignalConversion generated from: '<S162>/LeINVR_e_MtrC_6SOEnbl_Raw'
     */
    /* Gateway: PokeINVR_e_MtrC_6SOEnbl/PokeINVR_e_MtrC_6SOEnblChrt */
    /* During: PokeINVR_e_MtrC_6SOEnbl/PokeINVR_e_MtrC_6SOEnblChrt */
    /* Entry Internal: PokeINVR_e_MtrC_6SOEnbl/PokeINVR_e_MtrC_6SOEnblChrt */
    /* Transition: '<S635>:2' */
    if (!LeINVR_b_MtrC_6SOEnbl_FA)
    {
        /* Transition: '<S635>:3' */
        /* Transition: '<S635>:15' */
        rtb_LeINVR_e_MtrC_6SOEnbl_out = KaINVR_e_MtrC_6SOEnbl_Map
            [(LeINVR_e_MtrC_6SOEnbl)];

        /* Transition: '<S635>:18' */
    }
    else
    {
        /* Transition: '<S635>:4' */
        rtb_LeINVR_e_MtrC_6SOEnbl_out = CeINVR_e_SNA;
    }

    /* Merge: '<Root>/Merge_118' incorporates:
     *  Chart: '<S162>/PokeINVR_e_MtrC_6SOEnblChrt'
     *  SignalConversion generated from: '<S162>/VeINVR_b_MtrC_6SOEnbl_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_e_MtrC_6SOEnbl_VeINVR_b_MtrC_6SOEnbl_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_119' incorporates:
     *  SignalConversion generated from: '<S162>/VeINVR_e_MtrC_6SOEnbl_write'
     * */
    Rte_IrvWrite_PokeINVR_e_MtrC_6SOEnbl_VeINVR_e_MtrC_6SOEnbl_Init_IRV
        (rtb_LeINVR_e_MtrC_6SOEnbl_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MtrC_6SOEnbl' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MtrC_DrtRsn(VAR(TeINVR_e_DerateReason,
    AUTOMATIC) LeINVR_e_MtrC_DrtRsn)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MtrC_DrtRsn' */
    /* Outport: '<Root>/VeINVR_e_MtrC_DrtRsn' incorporates:
     *  SignalConversion generated from: '<S163>/VeINVR_e_MtrC_DrtRsn'
     *  SignalConversion generated from: '<S163>/LeINVR_e_MtrC_DrtRsn'
     */
    /* Gateway: PokeINVR_e_MtrC_DrtRsn/PokeINVR_e_MtrC_DrtRsnChrt */
    /* During: PokeINVR_e_MtrC_DrtRsn/PokeINVR_e_MtrC_DrtRsnChrt */
    /* Entry Internal: PokeINVR_e_MtrC_DrtRsn/PokeINVR_e_MtrC_DrtRsnChrt */
    /* Transition: '<S636>:2' */
    (void)Rte_Write_VeINVR_e_MtrC_DrtRsn_Value(LeINVR_e_MtrC_DrtRsn);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MtrC_DrtRsn' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MtrC_Dschrge_Stat(VAR(sint16, AUTOMATIC)
    LeINVR_e_MtrC_Dschrge_Stat, VAR(boolean, AUTOMATIC)
    LeINVR_b_MtrC_Dschrge_StatFA)
{
    boolean rtb_LeINVR_b_MtrC_Dschrge_StatFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MtrC_Dschrge_Stat' */
    /* Chart: '<S164>/PokeINVR_e_MtrC_Dschrge_StatChrt' incorporates:
     *  Constant: '<S637>/Calib'
     *  SignalConversion generated from: '<S164>/LeINVR_b_MtrC_Dschrge_StatFA'
     *  SignalConversion generated from: '<S164>/LeINVR_e_MtrC_Dschrge_Stat'
     */
    /* Gateway: PokeINVR_e_MtrC_Dschrge_Stat/PokeINVR_e_MtrC_Dschrge_StatChrt */
    /* During: PokeINVR_e_MtrC_Dschrge_Stat/PokeINVR_e_MtrC_Dschrge_StatChrt */
    /* Entry Internal: PokeINVR_e_MtrC_Dschrge_Stat/PokeINVR_e_MtrC_Dschrge_StatChrt */
    /* Transition: '<S638>:2' */
    if (((!LeINVR_b_MtrC_Dschrge_StatFA) && (LeINVR_e_MtrC_Dschrge_Stat >= 0)) &&
        (LeINVR_e_MtrC_Dschrge_Stat < KeINVR_Cnt_MtrC_Dschrge_Stat_ArraySize))
    {
        /* Transition: '<S638>:3' */
        /* Transition: '<S638>:15' */
        INVR_ac_B.LeINVR_e_MtrC_Dschrge_Stat_out =
            KaINVR_e_MtrC_Dschrge_Stat_Map[(LeINVR_e_MtrC_Dschrge_Stat)];
        rtb_LeINVR_b_MtrC_Dschrge_StatFA_out = false;

        /* Transition: '<S638>:18' */
    }
    else
    {
        /* Transition: '<S638>:4' */
        rtb_LeINVR_b_MtrC_Dschrge_StatFA_out = true;
    }

    /* End of Chart: '<S164>/PokeINVR_e_MtrC_Dschrge_StatChrt' */

    /* Outport: '<Root>/VeINVR_b_MtrC_Dschrge_StatFA' incorporates:
     *  SignalConversion generated from: '<S164>/VeINVR_b_MtrC_Dschrge_StatFA_out'
     */
    (void)Rte_Write_VeINVR_b_MtrC_Dschrge_StatFA_Value
        (rtb_LeINVR_b_MtrC_Dschrge_StatFA_out);

    /* Outport: '<Root>/VeINVR_e_MtrC_Dschrge_Stat' incorporates:
     *  SignalConversion generated from: '<S164>/VeINVR_e_MtrC_Dschrge_Stat_out'
     */
    (void)Rte_Write_VeINVR_e_MtrC_Dschrge_Stat_Value
        (INVR_ac_B.LeINVR_e_MtrC_Dschrge_Stat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MtrC_Dschrge_Stat' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_MtrC_InvrtrSt(VAR(TeINVR_e_MtrInvrtrSt,
    AUTOMATIC) LeINVR_e_MtrC_InvrtrSt_Raw)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_MtrC_InvrtrSt' */
    /* Merge: '<Root>/Merge_130' incorporates:
     *  Chart: '<S165>/PokeINVR_e_MtrC_InvrtrStChrt'
     *  SignalConversion generated from: '<S165>/VeINVR_b_MtrC_InvrtrSt_Sig_Rcvd_write'
     */
    /* Gateway: PokeINVR_e_MtrC_InvrtrSt/PokeINVR_e_MtrC_InvrtrStChrt */
    /* During: PokeINVR_e_MtrC_InvrtrSt/PokeINVR_e_MtrC_InvrtrStChrt */
    /* Entry Internal: PokeINVR_e_MtrC_InvrtrSt/PokeINVR_e_MtrC_InvrtrStChrt */
    /* Transition: '<S640>:31' */
    Rte_IrvWrite_PokeINVR_e_MtrC_InvrtrSt_VeINVR_b_MtrC_InvrtrSt_Sig_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_131' incorporates:
     *  Chart: '<S165>/PokeINVR_e_MtrC_InvrtrStChrt'
     *  Constant: '<S639>/Calib'
     *  SignalConversion generated from: '<S165>/LeINVR_e_MtrC_InvrtrSt_Raw'
     *  SignalConversion generated from: '<S165>/VeINVR_e_MtrC_InvrtrSt_write'
     */
    Rte_IrvWrite_PokeINVR_e_MtrC_InvrtrSt_VeINVR_e_MtrC_InvrtrSt_Init_IRV
        (KaINVR_e_MtrC_InvrtrSt_Map[(LeINVR_e_MtrC_InvrtrSt_Raw)]);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_MtrC_InvrtrSt' */
}

/* Output function */
FUNC(void, INVR_CODE) PokeINVR_e_P2ModeSts(VAR(TeINVR_e_P2ModeStatus, AUTOMATIC)
    LeINVR_e_P2ModeSts, VAR(boolean, AUTOMATIC) LeINVR_b_P2ModeStsFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeINVR_e_P2ModeSts' */
    /* Chart: '<S166>/PokeINVR_e_P2ModeStsChrt' incorporates:
     *  Constant: '<S641>/Calib'
     *  SignalConversion generated from: '<S166>/LeINVR_b_P2ModeStsFA'
     *  SignalConversion generated from: '<S166>/LeINVR_e_P2ModeSts'
     */
    /* Gateway: PokeINVR_e_P2ModeSts/PokeINVR_e_P2ModeStsChrt */
    /* During: PokeINVR_e_P2ModeSts/PokeINVR_e_P2ModeStsChrt */
    /* Entry Internal: PokeINVR_e_P2ModeSts/PokeINVR_e_P2ModeStsChrt */
    /* Transition: '<S642>:2' */
    if ((!LeINVR_b_P2ModeStsFA) && (((sint32)LeINVR_e_P2ModeSts) < ((sint32)
            KeINVR_Cnt_P2ModeSts_ArraySize)))
    {
        /* Transition: '<S642>:3' */
        /* Transition: '<S642>:15' */
        INVR_ac_B.LeINVR_e_P2ModeSts_out = KaINVR_e_P2ModeSts_Map
            [(LeINVR_e_P2ModeSts)];

        /* Transition: '<S642>:18' */
    }
    else
    {
        /* Transition: '<S642>:4' */
    }

    /* Merge: '<Root>/Merge_106' incorporates:
     *  Chart: '<S166>/PokeINVR_e_P2ModeStsChrt'
     *  SignalConversion generated from: '<S166>/VeINVR_b_P2ModeSts_Sig_Rcvd_write'
     */
    Rte_IrvWrite_PokeINVR_e_P2ModeSts_VeINVR_b_P2ModeSts_Sig_Rcvd_write_IRV(true);

    /* Merge: '<Root>/Merge_107' incorporates:
     *  SignalConversion generated from: '<S166>/VeINVR_e_P2ModeSts_write'
     * */
    Rte_IrvWrite_PokeINVR_e_P2ModeSts_VeINVR_e_P2ModeSts_write_IRV
        (INVR_ac_B.LeINVR_e_P2ModeSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeINVR_e_P2ModeSts' */
}

/* Output function */
FUNC(void, INVR_CODE) INVR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/INVR_PwrOn'
     */
    /* S-Function (fcgen): '<S79>/FcnCallGen' incorporates:
     *  SubSystem: '<S79>/MotorA_INIT'
     */
    /* SignalConversion generated from: '<S471>/MtrA_TempFA_Init' */
    INVR_ac_B.OutportBufferForMtrA_TempFA_Init = false;

    /* SignalConversion generated from: '<S471>/MtrA_InvrtrTempFA_Init' */
    INVR_ac_B.OutportBufferForMtrA_InvrtrTempFA_Init = false;

    /* SignalConversion generated from: '<S471>/MtrA_DC_CrntFA_Init' */
    INVR_ac_B.OutportBufferForMtrA_DC_CrntFA_Init = false;

    /* SignalConversion generated from: '<S471>/MtrA_DC_VoltFA_Init' */
    INVR_ac_B.OutportBufferForMtrA_DC_VoltFA_Init = false;

    /* SignalConversion generated from: '<S471>/MtrA_CtrlBoard_TempFA_Init' */
    INVR_ac_B.OutportBufferForMtrA_CtrlBoard_TempFA_In = false;

    /* SignalConversion generated from: '<S471>/MtrA_ClntIn_TempFA_Init' */
    INVR_ac_B.OutportBufferForMtrA_ClntIn_TempFA_Init = false;

    /* SignalConversion generated from: '<S471>/MtrAFlt_HV_CntctrOpnRq_Init' */
    INVR_ac_B.OutportBufferForMtrAFlt_HV_CntctrOpnRq_I = false;

    /* SignalConversion generated from: '<S471>/MtrAFlt_HV_CntctrOpnRq_AltSrc_Init' */
    INVR_ac_B.OutportBufferForMtrAFlt_HV_CntctrOpnRq_A = false;

    /* SignalConversion generated from: '<S471>/MtrA_ClntOut_TempFA_Init' */
    INVR_ac_B.OutportBufferForMtrA_ClntOut_TempFA_Init = false;

    /* SignalConversion generated from: '<S471>/MtrA_CapctrTempFA_Init' */
    INVR_ac_B.OutportBufferForMtrA_CapctrTempFA_Init = false;

    /* SignalConversion generated from: '<S471>/MtrA_RotrTempFA_Init' */
    INVR_ac_B.OutportBufferForMtrA_RotrTempFA_Init = false;

    /* SignalConversion generated from: '<S471>/MtrA_InvrtrTemp_Init' incorporates:
     *  Constant: '<S493>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_InvrtrTemp_Init = KeINVR_T_MtrA_InvrtrTemp;

    /* SignalConversion generated from: '<S471>/MtrA_Temp_Init' incorporates:
     *  Constant: '<S495>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_Temp_Init = KeINVR_T_MtrA_Temp;

    /* SignalConversion generated from: '<S471>/MtrA_InvrtrSt_Init' incorporates:
     *  Constant: '<S504>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_InvrtrSt_Init = KeINVR_e_MtrA_InvrtrSt;

    /* SignalConversion generated from: '<S471>/InvrtrA_IsolStat_Init' incorporates:
     *  Constant: '<S499>/Calib'
     */
    INVR_ac_B.OutportBufferForInvrtrA_IsolStat_Init = KeINVR_e_InvrtrA_IsolStat;

    /* SignalConversion generated from: '<S471>/MCPA_SPT_State_Init' incorporates:
     *  Constant: '<S500>/Calib'
     */
    INVR_ac_B.OutportBufferForMCPA_SPT_State_Init = KeINVR_e_MCPA_SPT_State;

    /* SignalConversion generated from: '<S471>/MtrA_DC_Crnt_Init' incorporates:
     *  Constant: '<S478>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_DC_Crnt_Init = KeINVR_I_MtrA_DC_Crnt;

    /* SignalConversion generated from: '<S471>/MtrA_DC_Volt_Init' incorporates:
     *  Constant: '<S497>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_DC_Volt_Init = KeINVR_U_MtrA_DC_Volt;

    /* SignalConversion generated from: '<S471>/MtrA_6SOEnbl_Init' incorporates:
     *  Constant: '<S501>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_6SOEnbl_Init = KeINVR_e_MtrA_6SOEnbl_Init;

    /* SignalConversion generated from: '<S471>/MtrA_CtrlBoard_Temp_Init' incorporates:
     *  Constant: '<S492>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_CtrlBoard_Temp_Init =
        KeINVR_T_MtrA_CtrlBoard_Temp;

    /* SignalConversion generated from: '<S471>/MtrA_ClntIn_Temp_Init' incorporates:
     *  Constant: '<S489>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_ClntIn_Temp_Init = KeINVR_T_MtrA_ClntIn_Temp;

    /* SignalConversion generated from: '<S471>/MtrA_ClntOut_Temp_Init' incorporates:
     *  Constant: '<S490>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_ClntOut_Temp_Init =
        KeINVR_T_MtrA_ClntOut_Temp;

    /* SignalConversion generated from: '<S471>/MtrA_RotrTemp_Init' incorporates:
     *  Constant: '<S494>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_RotrTemp_Init = KeINVR_T_MtrA_RotrTemp;

    /* SignalConversion generated from: '<S471>/MtrA_CapctrTemp_Init' incorporates:
     *  Constant: '<S488>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_CapctrTemp_Init = KeINVR_T_MtrA_CapctrTemp;

    /* SignalConversion generated from: '<S471>/P1_CAN_COM_Error_Init' incorporates:
     *  Constant: '<S498>/Calib'
     */
    INVR_ac_B.OutportBufferForP1_CAN_COM_Error_Init =
        KeINVR_b_P1_CAN_COM_Error_Init;

    /* SignalConversion generated from: '<S471>/MCPA_HVILSts_Init' incorporates:
     *  Constant: '<S475>/Constant'
     */
    INVR_ac_B.OutportBufferForMCPA_HVILSts_Init = INVR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S471>/MtrA_DrtRsn_Init' incorporates:
     *  Constant: '<S502>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_DrtRsn_Init = KeINVR_e_MtrA_DerateReason_Init;

    /* SignalConversion generated from: '<S471>/DrvReadyCmplStsFA_Init' */
    INVR_ac_B.OutportBufferForDrvReadyCmplStsFA_Init = false;

    /* SignalConversion generated from: '<S471>/DrvReadyCmplSts_Init' */
    INVR_ac_B.OutportBufferForDrvReadyCmplSts_Init = false;

    /* SignalConversion generated from: '<S471>/BstCnvtrChrgPwrLmtFA_Init' */
    INVR_ac_B.OutportBufferForBstCnvtrChrgPwrLmtFA_Ini = false;

    /* SignalConversion generated from: '<S471>/BstCnvtrChrgPwrLmt_Init' incorporates:
     *  Constant: '<S479>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrChrgPwrLmt_Init =
        KeINVR_P_BstCnvtrChrgPwrLmt_Init;

    /* SignalConversion generated from: '<S471>/BstCnvtrDschrgPwrLmtFA_Init' */
    INVR_ac_B.OutportBufferForBstCnvtrDschrgPwrLmtFA_I = false;

    /* SignalConversion generated from: '<S471>/BstCnvtrDschrgPwrLmt_Init' incorporates:
     *  Constant: '<S481>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrDschrgPwrLmt_Ini =
        KeINVR_P_BstCnvtrDschrgPwrLmt_Init;

    /* SignalConversion generated from: '<S471>/MaxBoostVoltFA_Init' */
    INVR_ac_B.OutportBufferForMaxBoostVoltFA_Init = false;

    /* SignalConversion generated from: '<S471>/MaxBoostVolt_Init' incorporates:
     *  Constant: '<S496>/Calib'
     */
    INVR_ac_B.OutportBufferForMaxBoostVolt_Init = KeINVR_U_MaxBoostVolt_Init;

    /* SignalConversion generated from: '<S471>/MCPA_CommFail_Init' incorporates:
     *  Constant: '<S476>/Constant'
     */
    INVR_ac_B.OutportBufferForMCPA_CommFail_Init = INVR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S471>/MCPA_CommFailFA_Init' */
    INVR_ac_B.OutportBufferForMCPA_CommFailFA_Init = false;

    /* SignalConversion generated from: '<S471>/GPIMDCBusBarTempFA_Init' */
    INVR_ac_B.OutportBufferForGPIMDCBusBarTempFA_Init = false;

    /* SignalConversion generated from: '<S471>/GPIMACBusBarTempFA_Init' */
    INVR_ac_B.OutportBufferForGPIMACBusBarTempFA_Init = false;

    /* SignalConversion generated from: '<S471>/GPIMDCBusTemp_Init' incorporates:
     *  Constant: '<S487>/Calib'
     */
    INVR_ac_B.OutportBufferForGPIMDCBusTemp_Init =
        KeINVR_T_GPIMDCBusBarTemp_Init;

    /* SignalConversion generated from: '<S471>/GPIMACBusTemp_Init' incorporates:
     *  Constant: '<S486>/Calib'
     */
    INVR_ac_B.OutportBufferForGPIMACBusTemp_Init =
        KeINVR_T_GPIMACBusBarTemp_Init;

    /* SignalConversion generated from: '<S471>/BstCnvtrLwrIGBT_TmpFltdFA_Init' */
    INVR_ac_B.OutportBufferForBstCnvtrLwrIGBT_TmpFltdF = false;

    /* SignalConversion generated from: '<S471>/BstCnvtrReactorTmpFA_Init' */
    INVR_ac_B.OutportBufferForBstCnvtrReactorTmpFA_Ini = false;

    /* SignalConversion generated from: '<S471>/BstCnvtrUpprIGBT_TmpFltdFA_Init' */
    INVR_ac_B.OutportBufferForBstCnvtrUpprIGBT_TmpFl_l = false;

    /* SignalConversion generated from: '<S471>/DMPI_TempStopFlagFA_Init' */
    INVR_ac_B.OutportBufferForDMPI_TempStopFlagFA_Init = false;

    /* SignalConversion generated from: '<S471>/BstCnvtrFailStsFA_Init' */
    INVR_ac_B.OutportBufferForBstCnvtrFailStsFA_Init = false;

    /* SignalConversion generated from: '<S471>/BstCnvtrLwrIGBT_TmpFltd_Init' incorporates:
     *  Constant: '<S483>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrLwrIGBT_TmpFltd_ =
        KeINVR_T_BstCnvtrLwrIGBT_TmpFltd_Init;

    /* SignalConversion generated from: '<S471>/BstCnvtrReactorTmp_Init' incorporates:
     *  Constant: '<S484>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrReactorTmp_Init =
        KeINVR_T_BstCnvtrReactorTmp_Init;

    /* SignalConversion generated from: '<S471>/BstCnvtrUpprIGBT_TmpFltd_Init' incorporates:
     *  Constant: '<S485>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrUpprIGBT_TmpFltd =
        KeINVR_T_BstCnvtrUpprIGBT_TmpFltd_Init;

    /* SignalConversion generated from: '<S471>/DMPI_TempStopFlag_Init' */
    INVR_ac_B.OutportBufferForDMPI_TempStopFlag_Init = false;

    /* SignalConversion generated from: '<S471>/BstCnvtrFailSts_Init' incorporates:
     *  Constant: '<S477>/Constant'
     */
    INVR_ac_B.OutportBufferForBstCnvtrFailSts_Init = INVR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S471>/BstCnvtrChrgPwrLmt_ST_FA_Init' */
    INVR_ac_B.OutportBufferForBstCnvtrChrgPwrLmt_ST_FA = false;

    /* SignalConversion generated from: '<S471>/BstCnvtrDschrgPwrLmt_ST_FA_Init' */
    INVR_ac_B.OutportBufferForBstCnvtrDschrgPwrLmt_S_h = false;

    /* SignalConversion generated from: '<S471>/BstCnvtrChrgPwrLmt_ST_Init' incorporates:
     *  Constant: '<S480>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrChrgPwrLmt_ST_In =
        KeINVR_P_BstCnvtrChrgPwrLmt_ST_Init;

    /* SignalConversion generated from: '<S471>/BstCnvtrDschrgPwrLmt_ST_Init' incorporates:
     *  Constant: '<S482>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrDschrgPwrLmt_ST_ =
        KeINVR_P_BstCnvtrDschrgPwrLmt_ST_Init;

    /* SignalConversion generated from: '<S471>/MtrA_CoolantTempFA_Init' */
    INVR_ac_B.OutportBufferForMtrA_CoolantTempFA_Init = false;

    /* SignalConversion generated from: '<S471>/MtrA_CoolantTemp_Init' incorporates:
     *  Constant: '<S491>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_CoolantTemp_Init =
        KeINVR_T_MtrA_CoolantTemp_Init;

    /* SignalConversion generated from: '<S471>/MtrA_Dschrge_Stat_Init' incorporates:
     *  Constant: '<S503>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_Dschrge_Stat_Init =
        KeINVR_e_MtrA_Dschrge_Stat_Init;

    /* SignalConversion generated from: '<S471>/MtrA_Dschrge_StatFA_Init' */
    INVR_ac_B.OutportBufferForMtrA_Dschrge_StatFA_Init = false;

    /* S-Function (fcgen): '<S79>/FcnCallGen' incorporates:
     *  SubSystem: '<S79>/MotorB_INIT'
     */
    /* SignalConversion generated from: '<S472>/MtrB_InvrtrSt_Init' incorporates:
     *  Constant: '<S523>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_InvrtrSt_Init = KeINVR_e_MtrB_InvrtrSt;

    /* SignalConversion generated from: '<S472>/InvrtrB_IsolStat_Init' incorporates:
     *  Constant: '<S518>/Calib'
     */
    INVR_ac_B.OutportBufferForInvrtrB_IsolStat_Init = KeINVR_e_InvrtrB_IsolStat;

    /* SignalConversion generated from: '<S472>/MCPB_SPT_State_Init' incorporates:
     *  Constant: '<S519>/Calib'
     */
    INVR_ac_B.OutportBufferForMCPB_SPT_State_Init = KeINVR_e_MCPB_SPT_State;

    /* SignalConversion generated from: '<S472>/P2ModeStsDflt_Init' incorporates:
     *  Constant: '<S524>/Calib'
     */
    INVR_ac_B.OutportBufferForP2ModeStsDflt_Init = KeINVR_e_P2ModeStsDflt;

    /* SignalConversion generated from: '<S472>/MCPB_HVILSts_Init' incorporates:
     *  Constant: '<S505>/Constant'
     */
    INVR_ac_B.OutportBufferForMCPB_HVILSts_Init = INVR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S472>/MtrB_DrtRsn_Init' incorporates:
     *  Constant: '<S521>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_DrtRsn_Init = KeINVR_e_MtrB_DerateReason_Init;

    /* SignalConversion generated from: '<S472>/MtrB_Temp_Init' incorporates:
     *  Constant: '<S515>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_Temp_Init = KeINVR_T_MtrB_Temp;

    /* SignalConversion generated from: '<S472>/MtrB_TempFA_Init' */
    INVR_ac_B.OutportBufferForMtrB_TempFA_Init = false;

    /* SignalConversion generated from: '<S472>/MtrB_InvrtrTemp_Init' incorporates:
     *  Constant: '<S513>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_InvrtrTemp_Init = KeINVR_T_MtrB_InvrtrTemp;

    /* SignalConversion generated from: '<S472>/MtrB_InvrtrTempFA_Init' */
    INVR_ac_B.OutportBufferForMtrB_InvrtrTempFA_Init = false;

    /* SignalConversion generated from: '<S472>/MtrB_DC_Crnt_Init' incorporates:
     *  Constant: '<S507>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_DC_Crnt_Init = KeINVR_I_MtrB_DC_Crnt;

    /* SignalConversion generated from: '<S472>/MtrB_DC_CrntFA_Init' */
    INVR_ac_B.OutportBufferForMtrB_DC_CrntFA_Init = false;

    /* SignalConversion generated from: '<S472>/MtrB_DC_Volt_Init' incorporates:
     *  Constant: '<S516>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_DC_Volt_Init = KeINVR_U_MtrB_DC_Volt;

    /* SignalConversion generated from: '<S472>/MtrB_DC_VoltFA_Init' */
    INVR_ac_B.OutportBufferForMtrB_DC_VoltFA_Init = false;

    /* SignalConversion generated from: '<S472>/MtrB_6SOEnbl_Init' incorporates:
     *  Constant: '<S520>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_6SOEnbl_Init = KeINVR_e_MtrB_6SOEnbl_Init;

    /* SignalConversion generated from: '<S472>/MtrBFlt_HV_CntctrOpnRq_Init' */
    INVR_ac_B.OutportBufferForMtrBFlt_HV_CntctrOpnRq_I = false;

    /* SignalConversion generated from: '<S472>/MtrBFlt_HV_CntctrOpnRq_AltSrc_Init' */
    INVR_ac_B.OutportBufferForMtrBFlt_HV_CntctrOpnRq_A = false;

    /* SignalConversion generated from: '<S472>/MtrB_CtrlBoard_Temp_Init' incorporates:
     *  Constant: '<S512>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_CtrlBoard_Temp_Init =
        KeINVR_T_MtrB_CtrlBoard_Temp;

    /* SignalConversion generated from: '<S472>/MtrB_CtrlBoard_TempFA_Init' */
    INVR_ac_B.OutportBufferForMtrB_CtrlBoard_TempFA_In = false;

    /* SignalConversion generated from: '<S472>/MtrB_ClntIn_Temp_Init' incorporates:
     *  Constant: '<S510>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_ClntIn_Temp_Init = KeINVR_T_MtrB_ClntIn_Temp;

    /* SignalConversion generated from: '<S472>/MtrB_ClntIn_TempFA_Init' */
    INVR_ac_B.OutportBufferForMtrB_ClntIn_TempFA_Init = false;

    /* SignalConversion generated from: '<S472>/MtrB_ClntOut_Temp_Init' incorporates:
     *  Constant: '<S511>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_ClntOut_Temp_Init =
        KeINVR_T_MtrB_ClntOut_Temp;

    /* SignalConversion generated from: '<S472>/MtrB_ClntOut_TempFA_Init' */
    INVR_ac_B.OutportBufferForMtrB_ClntOut_TempFA_Init = false;

    /* SignalConversion generated from: '<S472>/MtrB_RotrTemp_Init' incorporates:
     *  Constant: '<S514>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_RotrTemp_Init = KeINVR_T_MtrB_RotrTemp;

    /* SignalConversion generated from: '<S472>/MtrB_RotrTempFA_Init' */
    INVR_ac_B.OutportBufferForMtrB_RotrTempFA_Init = false;

    /* SignalConversion generated from: '<S472>/MtrB_CapctrTemp_Init' incorporates:
     *  Constant: '<S509>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_CapctrTemp_Init = KeINVR_T_MtrB_CapctrTemp;

    /* SignalConversion generated from: '<S472>/MtrB_CapctrTempFA_Init' */
    INVR_ac_B.OutportBufferForMtrB_CapctrTempFA_Init = false;

    /* SignalConversion generated from: '<S472>/MtrBFlt_HV_CntctrOpnRqFA_Init' */
    INVR_ac_B.OutportBufferForMtrBFlt_HV_CntctrOpnRqFA = false;

    /* SignalConversion generated from: '<S472>/EMModeReq_TCMDflt_Init' incorporates:
     *  Constant: '<S517>/Calib'
     */
    INVR_ac_B.OutportBufferForEMModeReq_TCMDflt_Init =
        KeINVR_e_EMModeReq_TCMDflt;

    /* SignalConversion generated from: '<S472>/MCPB_CommFailFA_Init' */
    INVR_ac_B.OutportBufferForMCPB_CommFailFA_Init = false;

    /* SignalConversion generated from: '<S472>/MCPB_CommFail_Init' incorporates:
     *  Constant: '<S506>/Constant'
     */
    INVR_ac_B.OutportBufferForMCPB_CommFail_Init = INVR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S472>/MtrBBusBarTemp_Init' incorporates:
     *  Constant: '<S508>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrBBusBarTemp_Init = KeINVR_T_MtrBBusBarTemp_Init;

    /* SignalConversion generated from: '<S472>/MtrBBusBarTempFA_Init' */
    INVR_ac_B.OutportBufferForMtrBBusBarTempFA_Init = false;

    /* SignalConversion generated from: '<S472>/MtrB_Dschrge_Stat_Init' incorporates:
     *  Constant: '<S522>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_Dschrge_Stat_Init =
        KeINVR_e_MtrB_Dschrge_Stat_Init;

    /* SignalConversion generated from: '<S472>/MtrB_Dschrge_StatFA_Init' */
    INVR_ac_B.OutportBufferForMtrB_Dschrge_StatFA_Init = false;

    /* S-Function (fcgen): '<S79>/FcnCallGen' incorporates:
     *  SubSystem: '<S79>/MotorC_INIT'
     */
    /* SignalConversion generated from: '<S473>/MtrC_TempFA_Init' */
    INVR_ac_B.OutportBufferForMtrC_TempFA_Init = false;

    /* SignalConversion generated from: '<S473>/MtrC_InvrtrTempFA_Init' */
    INVR_ac_B.OutportBufferForMtrC_InvrtrTempFA_Init = false;

    /* SignalConversion generated from: '<S473>/MtrC_DC_CrntFA_Init' */
    INVR_ac_B.OutportBufferForMtrC_DC_CrntFA_Init = false;

    /* SignalConversion generated from: '<S473>/MtrC_DC_VoltFA_Init' */
    INVR_ac_B.OutportBufferForMtrC_DC_VoltFA_Init = false;

    /* SignalConversion generated from: '<S473>/MtrC_InvrtrTemp_Init' incorporates:
     *  Constant: '<S529>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_InvrtrTemp_Init = KeINVR_T_MtrC_InvrtrTemp;

    /* SignalConversion generated from: '<S473>/MtrC_Temp_Init' incorporates:
     *  Constant: '<S531>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_Temp_Init = KeINVR_T_MtrC_Temp;

    /* SignalConversion generated from: '<S473>/MtrC_InvrtrSt_Init' incorporates:
     *  Constant: '<S537>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_InvrtrSt_Init = KeINVR_e_MtrC_InvrtrSt;

    /* SignalConversion generated from: '<S473>/MtrC_DC_Crnt_Init' incorporates:
     *  Constant: '<S526>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_DC_Crnt_Init = KeINVR_I_MtrC_DC_Crnt;

    /* SignalConversion generated from: '<S473>/MtrC_DC_Volt_Init' incorporates:
     *  Constant: '<S532>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_DC_Volt_Init = KeINVR_U_MtrC_DC_Volt;

    /* SignalConversion generated from: '<S473>/MtrCFlt_HV_CntctrOpnRq_Init' */
    INVR_ac_B.OutportBufferForMtrCFlt_HV_CntctrOpnRq_I = false;

    /* SignalConversion generated from: '<S473>/MtrC_6SOEnbl_Init' incorporates:
     *  Constant: '<S534>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_6SOEnbl_Init = KeINVR_e_MtrC_6SOEnbl_Init;

    /* SignalConversion generated from: '<S473>/MCPC_SPT_State_Init' incorporates:
     *  Constant: '<S533>/Calib'
     */
    INVR_ac_B.OutportBufferForMCPC_SPT_State_Init = KeINVR_e_MCPC_SPT_State;

    /* SignalConversion generated from: '<S473>/MtrCFlt_3PS_Pos_Init' */
    INVR_ac_B.OutportBufferForMtrCFlt_3PS_Pos_Init = false;

    /* SignalConversion generated from: '<S473>/MCPC_HVILSts_Init' incorporates:
     *  Constant: '<S525>/Constant'
     */
    INVR_ac_B.OutportBufferForMCPC_HVILSts_Init = INVR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S473>/MCPC_HVILStsFA_Init' */
    INVR_ac_B.OutportBufferForMCPC_HVILStsFA_Init = false;

    /* SignalConversion generated from: '<S473>/MtrC_DrtRsn_Init' incorporates:
     *  Constant: '<S535>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_DrtRsn_Init = KeINVR_e_MtrC_DerateReason_Init;

    /* SignalConversion generated from: '<S473>/MtrC_RotrTemp_Init' incorporates:
     *  Constant: '<S530>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_RotrTemp_Init = KeINVR_T_MtrC_RotrTemp;

    /* SignalConversion generated from: '<S473>/MtrC_CtrlBoard_Temp_Init' incorporates:
     *  Constant: '<S528>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_CtrlBoard_Temp_Init =
        KeINVR_T_MtrC_CtrlBoard_Temp;

    /* SignalConversion generated from: '<S473>/MtrC_RotrTempFA_Init' */
    INVR_ac_B.OutportBufferForMtrC_RotrTempFA_Init = false;

    /* SignalConversion generated from: '<S473>/MtrC_CtrlBoard_TempFA_Init' */
    INVR_ac_B.OutportBufferForMtrC_CtrlBoard_TempFA_In = false;

    /* SignalConversion generated from: '<S473>/MtrCBusBarTempFA_Init' */
    INVR_ac_B.OutportBufferForMtrCBusBarTempFA_Init = false;

    /* SignalConversion generated from: '<S473>/MtrCBusBarTemp_Init' incorporates:
     *  Constant: '<S527>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrCBusBarTemp_Init = KeINVR_T_MtrCBusBarTemp_Init;

    /* SignalConversion generated from: '<S473>/MtrC_Dschrge_Stat_Init' incorporates:
     *  Constant: '<S536>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_Dschrge_Stat_Init =
        KeINVR_e_MtrC_Dschrge_Stat_Init;

    /* SignalConversion generated from: '<S473>/MtrC_Dschrge_StatFA_Init' */
    INVR_ac_B.OutportBufferForMtrC_Dschrge_StatFA_Init = false;

    /* S-Function (fcgen): '<S79>/FcnCallGen' incorporates:
     *  SubSystem: '<S79>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S474>/VeINVR_e_MtrA_InvrtrSt_Out_Init' incorporates:
     *  Constant: '<S474>/Const1'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MtrA_InvrtrSt_O = INVR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S474>/VeINVR_e_MtrB_InvrtrSt_Out_Init' incorporates:
     *  Constant: '<S474>/Const2'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MtrB_InvrtrSt_O = INVR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S474>/VeINVR_e_InvrtrA_IsolStat_Out_Init' incorporates:
     *  Constant: '<S474>/Const3'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_InvrtrA_IsolSta = INVR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S474>/VeINVR_e_InvrtrB_IsolStat_Out_Init' incorporates:
     *  Constant: '<S474>/Const4'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_InvrtrB_IsolSta = INVR_ac_ConstB.Const4;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrA_Temp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrA_Temp_Out_I = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrB_Temp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrB_Temp_Out_I = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrA_InvrtrTemp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrA_InvrtrTemp = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrB_InvrtrTemp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrB_InvrtrTemp = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_I_MtrA_DC_Crnt_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_I_MtrA_DC_Crnt_Ou = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_I_MtrB_DC_Crnt_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_I_MtrB_DC_Crnt_Ou = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_U_MtrA_DC_Volt_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_U_MtrA_DC_Volt_Ou = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_U_MtrB_DC_Volt_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_U_MtrB_DC_Volt_Ou = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_e_MtrA_6SOEnbl_Out_Init' incorporates:
     *  Constant: '<S474>/Const13'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MtrA_6SOEnbl_Ou = INVR_ac_ConstB.Const13;

    /* SignalConversion generated from: '<S474>/VeINVR_e_MtrB_6SOEnbl_Out_Init' incorporates:
     *  Constant: '<S474>/Const14'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MtrB_6SOEnbl_Ou = INVR_ac_ConstB.Const14;

    /* SignalConversion generated from: '<S474>/VeINVR_e_MCPA_SPT_State_Out_Init' incorporates:
     *  Constant: '<S474>/Const15'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MCPA_SPT_State_ = INVR_ac_ConstB.Const15;

    /* SignalConversion generated from: '<S474>/VeINVR_e_MCPB_SPT_State_Out_Init' incorporates:
     *  Constant: '<S474>/Const16'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MCPB_SPT_State_ = INVR_ac_ConstB.Const16;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrA_CtrlBoard_Temp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrA_CtrlBoard_ = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrA_ClntIn_Temp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrA_ClntIn_Tem = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrA_ClntOut_Temp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrA_ClntOut_Te = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrA_RotrTemp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrA_RotrTemp_O = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrA_CapctrTemp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrA_CapctrTemp = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_b_MtrAFlt_HV_Cntc = false;

    /* SignalConversion generated from: '<S474>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_b_MtrBFlt_HV_Cntc = false;

    /* SignalConversion generated from: '<S474>/VeINVR_e_P2ModeSts_Out_Init' incorporates:
     *  Constant: '<S474>/Const24'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_P2ModeSts_Out_I = INVR_ac_ConstB.Const24;

    /* SignalConversion generated from: '<S474>/VeINVR_b_P1f_Dgrd_AltMd_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_b_P1f_Dgrd_AltMd_ = false;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrB_CtrlBoard_Temp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrB_CtrlBoard_ = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrB_ClntIn_Temp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrB_ClntIn_Tem = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrB_ClntOut_Temp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrB_ClntOut_Te = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrB_RotrTemp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrB_RotrTemp_O = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrB_CapctrTemp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrB_CapctrTemp = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_b_MCPA_HVILStsFA_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_b_MCPA_HVILStsFA_ = false;

    /* SignalConversion generated from: '<S474>/VeINVR_b_MCPB_HVILStsFA_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_b_MCPB_HVILStsFA_ = false;

    /* SignalConversion generated from: '<S474>/VeINVR_b_MtrB_GMGOverTemp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_b_MtrB_GMGOverTem = false;

    /* SignalConversion generated from: '<S474>/VeINVR_e_MtrC_InvrtrSt_Out_Init' incorporates:
     *  Constant: '<S474>/Const34'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MtrC_InvrtrSt_O = INVR_ac_ConstB.Const34;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrC_Temp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrC_Temp_Out_I = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrC_InvrtrTemp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrC_InvrtrTemp = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_e_MCPC_SPT_State_Out_Init' incorporates:
     *  Constant: '<S474>/Const37'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MCPC_SPT_State_ = INVR_ac_ConstB.Const37;

    /* SignalConversion generated from: '<S474>/VeINVR_I_MtrC_DC_Crnt_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_I_MtrC_DC_Crnt_Ou = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_U_MtrC_DC_Volt_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_U_MtrC_DC_Volt_Ou = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_e_MtrC_6SOEnbl_Out_Init' incorporates:
     *  Constant: '<S474>/Const40'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MtrC_6SOEnbl_Ou = INVR_ac_ConstB.Const40;

    /* SignalConversion generated from: '<S474>/VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_b_MtrCFlt_HV_Cntc = false;

    /* SignalConversion generated from: '<S474>/VeINVR_b_MtrCFlt_3PS_Pos_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_b_MtrCFlt_3PS_Pos = false;

    /* SignalConversion generated from: '<S474>/VeINVR_P_BstCnvtrChrgPwrLmt_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_P_BstCnvtrChrgPwr = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrC_RotrTemp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrC_RotrTemp_O = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_T_MtrC_CtrlBoard_Temp_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_T_MtrC_CtrlBoard_ = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_P_BstCnvtrDschrgPwrLmt_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_P_BstCnvtrDschrgP = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_P_BstCnvtrDschrgPwrLmt_ST_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_P_BstCnvtrDschr_o = 0.0F;

    /* SignalConversion generated from: '<S474>/VeINVR_P_BstCnvtrChrgPwrLmt_ST_Out_Init' */
    INVR_ac_B.OutportBufferForVeINVR_P_BstCnvtrChrgP_m = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S79>/FcnCallGen' */

    /* Outport: '<Root>/VeINVR_b_BstCnvtrChrgPwrLmtFA' incorporates:
     *  SignalConversion generated from: '<S79>/BstCnvtrChrgPwrLmtFA_Init'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrChrgPwrLmtFA_Value
        (INVR_ac_B.OutportBufferForBstCnvtrChrgPwrLmtFA_Ini);

    /* Outport: '<Root>/VeINVR_b_BstCnvtrChrgPwrLmt_ST_FA' incorporates:
     *  SignalConversion generated from: '<S79>/BstCnvtrChrgPwrLmt_ST_FA_Init'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrChrgPwrLmt_ST_FA_Value
        (INVR_ac_B.OutportBufferForBstCnvtrChrgPwrLmt_ST_FA);

    /* Outport: '<Root>/VeINVR_b_BstCnvtrDschrgPwrLmtFA' incorporates:
     *  SignalConversion generated from: '<S79>/BstCnvtrDschrgPwrLmtFA_Init'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrDschrgPwrLmtFA_Value
        (INVR_ac_B.OutportBufferForBstCnvtrDschrgPwrLmtFA_I);

    /* Outport: '<Root>/VeINVR_b_BstCnvtrDschrgPwrLmt_ST_FA' incorporates:
     *  SignalConversion generated from: '<S79>/BstCnvtrDschrgPwrLmt_ST_FA_Init'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrDschrgPwrLmt_ST_FA_Value
        (INVR_ac_B.OutportBufferForBstCnvtrDschrgPwrLmt_S_h);

    /* Outport: '<Root>/VeINVR_b_BstCnvtrFailStsFA' incorporates:
     *  SignalConversion generated from: '<S79>/BstCnvtrFailStsFA_Init'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrFailStsFA_Value
        (INVR_ac_B.OutportBufferForBstCnvtrFailStsFA_Init);

    /* Outport: '<Root>/VeINVR_e_BstCnvtrFailSts' incorporates:
     *  SignalConversion generated from: '<S471>/BstCnvtrFailSts_Init'
     *  SignalConversion generated from: '<S79>/BstCnvtrFailSts_Init'
     */
    (void)Rte_Write_VeINVR_e_BstCnvtrFailSts_Value
        (INVR_ac_B.OutportBufferForBstCnvtrFailSts_Init);

    /* Outport: '<Root>/VeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA' incorporates:
     *  SignalConversion generated from: '<S79>/BstCnvtrLwrIGBT_TmpFltdFA_Init'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA_Value
        (INVR_ac_B.OutportBufferForBstCnvtrLwrIGBT_TmpFltdF);

    /* Outport: '<Root>/VeINVR_T_BstCnvtrLwrIGBT_TmpFltd' incorporates:
     *  SignalConversion generated from: '<S79>/BstCnvtrLwrIGBT_TmpFltd_Init'
     */
    (void)Rte_Write_VeINVR_T_BstCnvtrLwrIGBT_TmpFltd_Value
        (INVR_ac_B.OutportBufferForBstCnvtrLwrIGBT_TmpFltd_);

    /* Outport: '<Root>/VeINVR_b_BstCnvtrReactorTmpFA' incorporates:
     *  SignalConversion generated from: '<S79>/BstCnvtrReactorTmpFA_Init'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrReactorTmpFA_Value
        (INVR_ac_B.OutportBufferForBstCnvtrReactorTmpFA_Ini);

    /* Outport: '<Root>/VeINVR_T_BstCnvtrReactorTmp' incorporates:
     *  SignalConversion generated from: '<S79>/BstCnvtrReactorTmp_Init'
     */
    (void)Rte_Write_VeINVR_T_BstCnvtrReactorTmp_Value
        (INVR_ac_B.OutportBufferForBstCnvtrReactorTmp_Init);

    /* Outport: '<Root>/VeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA' incorporates:
     *  SignalConversion generated from: '<S79>/BstCnvtrUpprIGBT_TmpFltdFA_Init'
     */
    (void)Rte_Write_VeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA_Value
        (INVR_ac_B.OutportBufferForBstCnvtrUpprIGBT_TmpFl_l);

    /* Outport: '<Root>/VeINVR_T_BstCnvtrUpprIGBT_TmpFltd' incorporates:
     *  SignalConversion generated from: '<S79>/BstCnvtrUpprIGBT_TmpFltd_Init'
     */
    (void)Rte_Write_VeINVR_T_BstCnvtrUpprIGBT_TmpFltd_Value
        (INVR_ac_B.OutportBufferForBstCnvtrUpprIGBT_TmpFltd);

    /* Outport: '<Root>/VeINVR_b_DMPI_TempStopFlagFA' incorporates:
     *  SignalConversion generated from: '<S79>/DMPI_TempStopFlagFA_Init'
     */
    (void)Rte_Write_VeINVR_b_DMPI_TempStopFlagFA_Value
        (INVR_ac_B.OutportBufferForDMPI_TempStopFlagFA_Init);

    /* Outport: '<Root>/VeINVR_b_DMPI_TempStopFlag' incorporates:
     *  SignalConversion generated from: '<S79>/DMPI_TempStopFlag_Init'
     */
    (void)Rte_Write_VeINVR_b_DMPI_TempStopFlag_Value
        (INVR_ac_B.OutportBufferForDMPI_TempStopFlag_Init);

    /* Outport: '<Root>/VeINVR_b_DrvReadyCmplStsFA' incorporates:
     *  SignalConversion generated from: '<S79>/DrvReadyCmplStsFA_Init'
     */
    (void)Rte_Write_VeINVR_b_DrvReadyCmplStsFA_Value
        (INVR_ac_B.OutportBufferForDrvReadyCmplStsFA_Init);

    /* Outport: '<Root>/VeINVR_b_DrvReadyCmplSts' incorporates:
     *  SignalConversion generated from: '<S79>/DrvReadyCmplSts_Init'
     */
    (void)Rte_Write_VeINVR_b_DrvReadyCmplSts_Value
        (INVR_ac_B.OutportBufferForDrvReadyCmplSts_Init);

    /* Outport: '<Root>/VeINVR_e_MtrB_TCMEMMdReq' incorporates:
     *  SignalConversion generated from: '<S472>/EMModeReq_TCMDflt_Init'
     *  SignalConversion generated from: '<S79>/EMModeReq_TCMDflt_Init'
     */
    (void)Rte_Write_VeINVR_e_MtrB_TCMEMMdReq_Value
        (INVR_ac_B.OutportBufferForEMModeReq_TCMDflt_Init);

    /* Outport: '<Root>/VeINVR_b_GPIMACBusBarTempFA' incorporates:
     *  SignalConversion generated from: '<S79>/GPIMACBusBarTempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_GPIMACBusBarTempFA_Value
        (INVR_ac_B.OutportBufferForGPIMACBusBarTempFA_Init);

    /* Outport: '<Root>/VeINVR_T_GPIMACBusBarTemp' incorporates:
     *  SignalConversion generated from: '<S79>/GPIMACBusTemp_Init'
     */
    (void)Rte_Write_VeINVR_T_GPIMACBusBarTemp_Value
        (INVR_ac_B.OutportBufferForGPIMACBusTemp_Init);

    /* Outport: '<Root>/VeINVR_b_GPIMDCBusBarTempFA' incorporates:
     *  SignalConversion generated from: '<S79>/GPIMDCBusBarTempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_GPIMDCBusBarTempFA_Value
        (INVR_ac_B.OutportBufferForGPIMDCBusBarTempFA_Init);

    /* Outport: '<Root>/VeINVR_T_GPIMDCBusBarTemp' incorporates:
     *  SignalConversion generated from: '<S79>/GPIMDCBusTemp_Init'
     */
    (void)Rte_Write_VeINVR_T_GPIMDCBusBarTemp_Value
        (INVR_ac_B.OutportBufferForGPIMDCBusTemp_Init);

    /* Outport: '<Root>/VeINVR_b_MCPA_CommFailFA' incorporates:
     *  SignalConversion generated from: '<S79>/MCPA_CommFailFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MCPA_CommFailFA_Value
        (INVR_ac_B.OutportBufferForMCPA_CommFailFA_Init);

    /* Outport: '<Root>/VeINVR_e_MCPA_CommFail' incorporates:
     *  SignalConversion generated from: '<S471>/MCPA_CommFail_Init'
     *  SignalConversion generated from: '<S79>/MCPA_CommFail_Init'
     */
    (void)Rte_Write_VeINVR_e_MCPA_CommFail_Value
        (INVR_ac_B.OutportBufferForMCPA_CommFail_Init);

    /* Outport: '<Root>/VeINVR_e_MCPA_HVILSts' incorporates:
     *  SignalConversion generated from: '<S471>/MCPA_HVILSts_Init'
     *  SignalConversion generated from: '<S79>/MCPA_HVILSts_Init'
     */
    (void)Rte_Write_VeINVR_e_MCPA_HVILSts_Value
        (INVR_ac_B.OutportBufferForMCPA_HVILSts_Init);

    /* Outport: '<Root>/VeINVR_b_MCPB_CommFailFA' incorporates:
     *  SignalConversion generated from: '<S79>/MCPB_CommFailFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MCPB_CommFailFA_Value
        (INVR_ac_B.OutportBufferForMCPB_CommFailFA_Init);

    /* Outport: '<Root>/VeINVR_e_MCPB_CommFail' incorporates:
     *  SignalConversion generated from: '<S472>/MCPB_CommFail_Init'
     *  SignalConversion generated from: '<S79>/MCPB_CommFail_Init'
     */
    (void)Rte_Write_VeINVR_e_MCPB_CommFail_Value
        (INVR_ac_B.OutportBufferForMCPB_CommFail_Init);

    /* Outport: '<Root>/VeINVR_e_MCPB_HVILSts' incorporates:
     *  SignalConversion generated from: '<S472>/MCPB_HVILSts_Init'
     *  SignalConversion generated from: '<S79>/MCPB_HVILSts_Init'
     */
    (void)Rte_Write_VeINVR_e_MCPB_HVILSts_Value
        (INVR_ac_B.OutportBufferForMCPB_HVILSts_Init);

    /* Outport: '<Root>/VeINVR_b_MCPC_HVILStsFA' incorporates:
     *  SignalConversion generated from: '<S79>/MCPC_HVILStsFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MCPC_HVILStsFA_Value
        (INVR_ac_B.OutportBufferForMCPC_HVILStsFA_Init);

    /* Outport: '<Root>/VeINVR_e_MCPC_HVILSts' incorporates:
     *  SignalConversion generated from: '<S473>/MCPC_HVILSts_Init'
     *  SignalConversion generated from: '<S79>/MCPC_HVILSts_Init'
     */
    (void)Rte_Write_VeINVR_e_MCPC_HVILSts_Value
        (INVR_ac_B.OutportBufferForMCPC_HVILSts_Init);

    /* Outport: '<Root>/VeINVR_b_MaxBoostVoltFA' incorporates:
     *  SignalConversion generated from: '<S79>/MaxBoostVoltFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MaxBoostVoltFA_Value
        (INVR_ac_B.OutportBufferForMaxBoostVoltFA_Init);

    /* Outport: '<Root>/VeINVR_U_MaxBoostVolt' incorporates:
     *  SignalConversion generated from: '<S79>/MaxBoostVolt_Init'
     */
    (void)Rte_Write_VeINVR_U_MaxBoostVolt_Value
        (INVR_ac_B.OutportBufferForMaxBoostVolt_Init);

    /* Outport: '<Root>/VeINVR_b_MtrA_CapctrTemp_FA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrA_CapctrTempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrA_CapctrTemp_FA_Value
        (INVR_ac_B.OutportBufferForMtrA_CapctrTempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrA_ClntIn_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrA_ClntIn_TempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrA_ClntIn_Temp_FA_Value
        (INVR_ac_B.OutportBufferForMtrA_ClntIn_TempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrA_ClntOut_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrA_ClntOut_TempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrA_ClntOut_Temp_FA_Value
        (INVR_ac_B.OutportBufferForMtrA_ClntOut_TempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrA_CoolantTempFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrA_CoolantTempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrA_CoolantTempFA_Value
        (INVR_ac_B.OutportBufferForMtrA_CoolantTempFA_Init);

    /* Outport: '<Root>/VeINVR_T_MtrA_CoolantTemp' incorporates:
     *  SignalConversion generated from: '<S79>/MtrA_CoolantTemp_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrA_CoolantTemp_Value
        (INVR_ac_B.OutportBufferForMtrA_CoolantTemp_Init);

    /* Outport: '<Root>/VeINVR_b_MtrA_CtrlBoard_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrA_CtrlBoard_TempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrA_CtrlBoard_Temp_FA_Value
        (INVR_ac_B.OutportBufferForMtrA_CtrlBoard_TempFA_In);

    /* Outport: '<Root>/VeINVR_b_MtrA_DC_CrntFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrA_DC_CrntFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrA_DC_CrntFA_Value
        (INVR_ac_B.OutportBufferForMtrA_DC_CrntFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrA_DC_VoltFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrA_DC_VoltFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrA_DC_VoltFA_Value
        (INVR_ac_B.OutportBufferForMtrA_DC_VoltFA_Init);

    /* Outport: '<Root>/VeINVR_e_MtrA_DrtRsn' incorporates:
     *  SignalConversion generated from: '<S471>/MtrA_DrtRsn_Init'
     *  SignalConversion generated from: '<S79>/MtrA_DrtRsn_Init'
     */
    (void)Rte_Write_VeINVR_e_MtrA_DrtRsn_Value
        (INVR_ac_B.OutportBufferForMtrA_DrtRsn_Init);

    /* Outport: '<Root>/VeINVR_b_MtrA_Dschrge_StatFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrA_Dschrge_StatFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrA_Dschrge_StatFA_Value
        (INVR_ac_B.OutportBufferForMtrA_Dschrge_StatFA_Init);

    /* Outport: '<Root>/VeINVR_e_MtrA_Dschrge_Stat' incorporates:
     *  SignalConversion generated from: '<S471>/MtrA_Dschrge_Stat_Init'
     *  SignalConversion generated from: '<S79>/MtrA_Dschrge_Stat_Init'
     */
    (void)Rte_Write_VeINVR_e_MtrA_Dschrge_Stat_Value
        (INVR_ac_B.OutportBufferForMtrA_Dschrge_Stat_Init);

    /* Outport: '<Root>/VeINVR_b_MtrA_InvrtrTempFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrA_InvrtrTempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrA_InvrtrTempFA_Value
        (INVR_ac_B.OutportBufferForMtrA_InvrtrTempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrA_RotrTemp_FA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrA_RotrTempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrA_RotrTemp_FA_Value
        (INVR_ac_B.OutportBufferForMtrA_RotrTempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrA_TempFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrA_TempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrA_TempFA_Value
        (INVR_ac_B.OutportBufferForMtrA_TempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrBBusBarTempFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrBBusBarTempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrBBusBarTempFA_Value
        (INVR_ac_B.OutportBufferForMtrBBusBarTempFA_Init);

    /* Outport: '<Root>/VeINVR_T_MtrBBusBarTemp' incorporates:
     *  SignalConversion generated from: '<S79>/MtrBBusBarTemp_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrBBusBarTemp_Value
        (INVR_ac_B.OutportBufferForMtrBBusBarTemp_Init);

    /* Outport: '<Root>/VeINVR_b_MtrB_CapctrTemp_FA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrB_CapctrTempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrB_CapctrTemp_FA_Value
        (INVR_ac_B.OutportBufferForMtrB_CapctrTempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrB_ClntIn_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrB_ClntIn_TempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrB_ClntIn_Temp_FA_Value
        (INVR_ac_B.OutportBufferForMtrB_ClntIn_TempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrB_ClntOut_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrB_ClntOut_TempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrB_ClntOut_Temp_FA_Value
        (INVR_ac_B.OutportBufferForMtrB_ClntOut_TempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrB_CtrlBoard_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrB_CtrlBoard_TempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrB_CtrlBoard_Temp_FA_Value
        (INVR_ac_B.OutportBufferForMtrB_CtrlBoard_TempFA_In);

    /* Outport: '<Root>/VeINVR_b_MtrB_DC_CrntFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrB_DC_CrntFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrB_DC_CrntFA_Value
        (INVR_ac_B.OutportBufferForMtrB_DC_CrntFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrB_DC_VoltFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrB_DC_VoltFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrB_DC_VoltFA_Value
        (INVR_ac_B.OutportBufferForMtrB_DC_VoltFA_Init);

    /* Outport: '<Root>/VeINVR_e_MtrB_DrtRsn' incorporates:
     *  SignalConversion generated from: '<S472>/MtrB_DrtRsn_Init'
     *  SignalConversion generated from: '<S79>/MtrB_DrtRsn_Init'
     */
    (void)Rte_Write_VeINVR_e_MtrB_DrtRsn_Value
        (INVR_ac_B.OutportBufferForMtrB_DrtRsn_Init);

    /* Outport: '<Root>/VeINVR_b_MtrB_Dschrge_StatFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrB_Dschrge_StatFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrB_Dschrge_StatFA_Value
        (INVR_ac_B.OutportBufferForMtrB_Dschrge_StatFA_Init);

    /* Outport: '<Root>/VeINVR_e_MtrB_Dschrge_Stat' incorporates:
     *  SignalConversion generated from: '<S472>/MtrB_Dschrge_Stat_Init'
     *  SignalConversion generated from: '<S79>/MtrB_Dschrge_Stat_Init'
     */
    (void)Rte_Write_VeINVR_e_MtrB_Dschrge_Stat_Value
        (INVR_ac_B.OutportBufferForMtrB_Dschrge_Stat_Init);

    /* Outport: '<Root>/VeINVR_b_MtrB_InvrtrTempFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrB_InvrtrTempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrB_InvrtrTempFA_Value
        (INVR_ac_B.OutportBufferForMtrB_InvrtrTempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrB_RotrTemp_FA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrB_RotrTempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrB_RotrTemp_FA_Value
        (INVR_ac_B.OutportBufferForMtrB_RotrTempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrB_TempFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrB_TempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrB_TempFA_Value
        (INVR_ac_B.OutportBufferForMtrB_TempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrCBusBarTempFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrCBusBarTempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrCBusBarTempFA_Value
        (INVR_ac_B.OutportBufferForMtrCBusBarTempFA_Init);

    /* Outport: '<Root>/VeINVR_T_MtrCBusBarTemp' incorporates:
     *  SignalConversion generated from: '<S79>/MtrCBusBarTemp_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrCBusBarTemp_Value
        (INVR_ac_B.OutportBufferForMtrCBusBarTemp_Init);

    /* Outport: '<Root>/VeINVR_b_MtrC_CtrlBoard_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrC_CtrlBoard_TempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrC_CtrlBoard_Temp_FA_Value
        (INVR_ac_B.OutportBufferForMtrC_CtrlBoard_TempFA_In);

    /* Outport: '<Root>/VeINVR_b_MtrC_DC_CrntFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrC_DC_CrntFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrC_DC_CrntFA_Value
        (INVR_ac_B.OutportBufferForMtrC_DC_CrntFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrC_DC_VoltFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrC_DC_VoltFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrC_DC_VoltFA_Value
        (INVR_ac_B.OutportBufferForMtrC_DC_VoltFA_Init);

    /* Outport: '<Root>/VeINVR_e_MtrC_DrtRsn' incorporates:
     *  SignalConversion generated from: '<S473>/MtrC_DrtRsn_Init'
     *  SignalConversion generated from: '<S79>/MtrC_DrtRsn_Init'
     */
    (void)Rte_Write_VeINVR_e_MtrC_DrtRsn_Value
        (INVR_ac_B.OutportBufferForMtrC_DrtRsn_Init);

    /* Outport: '<Root>/VeINVR_b_MtrC_Dschrge_StatFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrC_Dschrge_StatFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrC_Dschrge_StatFA_Value
        (INVR_ac_B.OutportBufferForMtrC_Dschrge_StatFA_Init);

    /* Outport: '<Root>/VeINVR_e_MtrC_Dschrge_Stat' incorporates:
     *  SignalConversion generated from: '<S473>/MtrC_Dschrge_Stat_Init'
     *  SignalConversion generated from: '<S79>/MtrC_Dschrge_Stat_Init'
     */
    (void)Rte_Write_VeINVR_e_MtrC_Dschrge_Stat_Value
        (INVR_ac_B.OutportBufferForMtrC_Dschrge_Stat_Init);

    /* Outport: '<Root>/VeINVR_b_MtrC_InvrtrTempFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrC_InvrtrTempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrC_InvrtrTempFA_Value
        (INVR_ac_B.OutportBufferForMtrC_InvrtrTempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrC_RotrTemp_FA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrC_RotrTempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrC_RotrTemp_FA_Value
        (INVR_ac_B.OutportBufferForMtrC_RotrTempFA_Init);

    /* Outport: '<Root>/VeINVR_b_MtrC_TempFA' incorporates:
     *  SignalConversion generated from: '<S79>/MtrC_TempFA_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrC_TempFA_Value
        (INVR_ac_B.OutportBufferForMtrC_TempFA_Init);

    /* Outport: '<Root>/VeINVR_b_P1_CAN_COM_Error' incorporates:
     *  SignalConversion generated from: '<S79>/P1_CAN_COM_Error_Init'
     */
    (void)Rte_Write_VeINVR_b_P1_CAN_COM_Error_Value
        (INVR_ac_B.OutportBufferForP1_CAN_COM_Error_Init);

    /* Outport: '<Root>/VeINVR_I_MtrA_DC_Crnt' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_I_MtrA_DC_Crnt_Out_Init'
     */
    (void)Rte_Write_VeINVR_I_MtrA_DC_Crnt_Value
        (INVR_ac_B.OutportBufferForVeINVR_I_MtrA_DC_Crnt_Ou);

    /* Outport: '<Root>/VeINVR_I_MtrB_DC_Crnt' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_I_MtrB_DC_Crnt_Out_Init'
     */
    (void)Rte_Write_VeINVR_I_MtrB_DC_Crnt_Value
        (INVR_ac_B.OutportBufferForVeINVR_I_MtrB_DC_Crnt_Ou);

    /* Outport: '<Root>/VeINVR_I_MtrC_DC_Crnt' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_I_MtrC_DC_Crnt_Out_Init'
     */
    (void)Rte_Write_VeINVR_I_MtrC_DC_Crnt_Value
        (INVR_ac_B.OutportBufferForVeINVR_I_MtrC_DC_Crnt_Ou);

    /* Outport: '<Root>/VeINVR_P_BstCnvtrChrgPwrLmt' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_P_BstCnvtrChrgPwrLmt_Out_Init'
     */
    (void)Rte_Write_VeINVR_P_BstCnvtrChrgPwrLmt_Value
        (INVR_ac_B.OutportBufferForVeINVR_P_BstCnvtrChrgPwr);

    /* Outport: '<Root>/VeINVR_P_BstCnvtrChrgPwrLmt_ST' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_P_BstCnvtrChrgPwrLmt_ST_Out_Init'
     */
    (void)Rte_Write_VeINVR_P_BstCnvtrChrgPwrLmt_ST_Value
        (INVR_ac_B.OutportBufferForVeINVR_P_BstCnvtrChrgP_m);

    /* Outport: '<Root>/VeINVR_P_BstCnvtrDschrgPwrLmt' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_P_BstCnvtrDschrgPwrLmt_Out_Init'
     */
    (void)Rte_Write_VeINVR_P_BstCnvtrDschrgPwrLmt_Value
        (INVR_ac_B.OutportBufferForVeINVR_P_BstCnvtrDschrgP);

    /* Outport: '<Root>/VeINVR_P_BstCnvtrDschrgPwrLmt_ST' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_P_BstCnvtrDschrgPwrLmt_ST_Out_Init'
     */
    (void)Rte_Write_VeINVR_P_BstCnvtrDschrgPwrLmt_ST_Value
        (INVR_ac_B.OutportBufferForVeINVR_P_BstCnvtrDschr_o);

    /* Outport: '<Root>/VeINVR_T_MtrA_CapctrTemp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_CapctrTemp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrA_CapctrTemp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrA_CapctrTemp);

    /* Outport: '<Root>/VeINVR_T_MtrA_ClntIn_Temp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_ClntIn_Temp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrA_ClntIn_Temp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrA_ClntIn_Tem);

    /* Outport: '<Root>/VeINVR_T_MtrA_ClntOut_Temp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_ClntOut_Temp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrA_ClntOut_Temp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrA_ClntOut_Te);

    /* Outport: '<Root>/VeINVR_T_MtrA_CtrlBoard_Temp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_CtrlBoard_Temp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrA_CtrlBoard_Temp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrA_CtrlBoard_);

    /* Outport: '<Root>/VeINVR_T_MtrA_InvrtrTemp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_InvrtrTemp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrA_InvrtrTemp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrA_InvrtrTemp);

    /* Outport: '<Root>/VeINVR_T_MtrA_RotrTemp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_RotrTemp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrA_RotrTemp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrA_RotrTemp_O);

    /* Outport: '<Root>/VeINVR_T_MtrA_Temp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_Temp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrA_Temp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrA_Temp_Out_I);

    /* Outport: '<Root>/VeINVR_T_MtrB_CapctrTemp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_CapctrTemp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrB_CapctrTemp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrB_CapctrTemp);

    /* Outport: '<Root>/VeINVR_T_MtrB_ClntIn_Temp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_ClntIn_Temp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrB_ClntIn_Temp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrB_ClntIn_Tem);

    /* Outport: '<Root>/VeINVR_T_MtrB_ClntOut_Temp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_ClntOut_Temp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrB_ClntOut_Temp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrB_ClntOut_Te);

    /* Outport: '<Root>/VeINVR_T_MtrB_CtrlBoard_Temp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_CtrlBoard_Temp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrB_CtrlBoard_Temp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrB_CtrlBoard_);

    /* Outport: '<Root>/VeINVR_T_MtrB_InvrtrTemp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_InvrtrTemp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrB_InvrtrTemp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrB_InvrtrTemp);

    /* Outport: '<Root>/VeINVR_T_MtrB_RotrTemp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_RotrTemp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrB_RotrTemp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrB_RotrTemp_O);

    /* Outport: '<Root>/VeINVR_T_MtrB_Temp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_Temp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrB_Temp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrB_Temp_Out_I);

    /* Outport: '<Root>/VeINVR_T_MtrC_CtrlBoard_Temp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrC_CtrlBoard_Temp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrC_CtrlBoard_Temp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrC_CtrlBoard_);

    /* Outport: '<Root>/VeINVR_T_MtrC_InvrtrTemp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrC_InvrtrTemp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrC_InvrtrTemp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrC_InvrtrTemp);

    /* Outport: '<Root>/VeINVR_T_MtrC_RotrTemp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrC_RotrTemp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrC_RotrTemp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrC_RotrTemp_O);

    /* Outport: '<Root>/VeINVR_T_MtrC_Temp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrC_Temp_Out_Init'
     */
    (void)Rte_Write_VeINVR_T_MtrC_Temp_Value
        (INVR_ac_B.OutportBufferForVeINVR_T_MtrC_Temp_Out_I);

    /* Outport: '<Root>/VeINVR_U_MtrA_DC_Volt' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_U_MtrA_DC_Volt_Out_Init'
     */
    (void)Rte_Write_VeINVR_U_MtrA_DC_Volt_Value
        (INVR_ac_B.OutportBufferForVeINVR_U_MtrA_DC_Volt_Ou);

    /* Outport: '<Root>/VeINVR_U_MtrB_DC_Volt' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_U_MtrB_DC_Volt_Out_Init'
     */
    (void)Rte_Write_VeINVR_U_MtrB_DC_Volt_Value
        (INVR_ac_B.OutportBufferForVeINVR_U_MtrB_DC_Volt_Ou);

    /* Outport: '<Root>/VeINVR_U_MtrC_DC_Volt' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_U_MtrC_DC_Volt_Out_Init'
     */
    (void)Rte_Write_VeINVR_U_MtrC_DC_Volt_Value
        (INVR_ac_B.OutportBufferForVeINVR_U_MtrC_DC_Volt_Ou);

    /* Outport: '<Root>/VeINVR_b_MCPA_HVILStsFA' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MCPA_HVILStsFA_Out_Init'
     */
    (void)Rte_Write_VeINVR_b_MCPA_HVILStsFA_Value
        (INVR_ac_B.OutportBufferForVeINVR_b_MCPA_HVILStsFA_);

    /* Outport: '<Root>/VeINVR_b_MCPB_HVILStsFA' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MCPB_HVILStsFA_Out_Init'
     */
    (void)Rte_Write_VeINVR_b_MCPB_HVILStsFA_Value
        (INVR_ac_B.OutportBufferForVeINVR_b_MCPB_HVILStsFA_);

    /* Outport: '<Root>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Out_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Value
        (INVR_ac_B.OutportBufferForVeINVR_b_MtrAFlt_HV_Cntc);

    /* Outport: '<Root>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Out_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Value
        (INVR_ac_B.OutportBufferForVeINVR_b_MtrBFlt_HV_Cntc);

    /* Outport: '<Root>/VeINVR_b_MtrB_GMGOverTemp' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MtrB_GMGOverTemp_Out_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrB_GMGOverTemp_Value
        (INVR_ac_B.OutportBufferForVeINVR_b_MtrB_GMGOverTem);

    /* Outport: '<Root>/VeINVR_b_MtrCFlt_3PS_Pos' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MtrCFlt_3PS_Pos_Out_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrCFlt_3PS_Pos_Value
        (INVR_ac_B.OutportBufferForVeINVR_b_MtrCFlt_3PS_Pos);

    /* Outport: '<Root>/VeINVR_b_MtrCFlt_HV_CntctrOpnRq' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Out_Init'
     */
    (void)Rte_Write_VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Value
        (INVR_ac_B.OutportBufferForVeINVR_b_MtrCFlt_HV_Cntc);

    /* Outport: '<Root>/VeINVR_b_P1f_Dgrd_AltMd' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_P1f_Dgrd_AltMd_Out_Init'
     */
    (void)Rte_Write_VeINVR_b_P1f_Dgrd_AltMd_Value
        (INVR_ac_B.OutportBufferForVeINVR_b_P1f_Dgrd_AltMd_);

    /* Outport: '<Root>/VeINVR_e_InvrtrA_IsolStat' incorporates:
     *  SignalConversion generated from: '<S474>/VeINVR_e_InvrtrA_IsolStat_Out_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_InvrtrA_IsolStat_Out_Init'
     */
    (void)Rte_Write_VeINVR_e_InvrtrA_IsolStat_Value
        (INVR_ac_B.OutportBufferForVeINVR_e_InvrtrA_IsolSta);

    /* Outport: '<Root>/VeINVR_e_InvrtrB_IsolStat' incorporates:
     *  SignalConversion generated from: '<S474>/VeINVR_e_InvrtrB_IsolStat_Out_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_InvrtrB_IsolStat_Out_Init'
     */
    (void)Rte_Write_VeINVR_e_InvrtrB_IsolStat_Value
        (INVR_ac_B.OutportBufferForVeINVR_e_InvrtrB_IsolSta);

    /* Outport: '<Root>/VeINVR_e_MCPA_SPT_State' incorporates:
     *  SignalConversion generated from: '<S474>/VeINVR_e_MCPA_SPT_State_Out_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MCPA_SPT_State_Out_Init'
     */
    (void)Rte_Write_VeINVR_e_MCPA_SPT_State_Value
        (INVR_ac_B.OutportBufferForVeINVR_e_MCPA_SPT_State_);

    /* Outport: '<Root>/VeINVR_e_MCPB_SPT_State' incorporates:
     *  SignalConversion generated from: '<S474>/VeINVR_e_MCPB_SPT_State_Out_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MCPB_SPT_State_Out_Init'
     */
    (void)Rte_Write_VeINVR_e_MCPB_SPT_State_Value
        (INVR_ac_B.OutportBufferForVeINVR_e_MCPB_SPT_State_);

    /* Outport: '<Root>/VeINVR_e_MCPC_SPT_State' incorporates:
     *  SignalConversion generated from: '<S474>/VeINVR_e_MCPC_SPT_State_Out_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MCPC_SPT_State_Out_Init'
     */
    (void)Rte_Write_VeINVR_e_MCPC_SPT_State_Value
        (INVR_ac_B.OutportBufferForVeINVR_e_MCPC_SPT_State_);

    /* Outport: '<Root>/VeINVR_e_MtrA_6SOEnbl' incorporates:
     *  SignalConversion generated from: '<S474>/VeINVR_e_MtrA_6SOEnbl_Out_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MtrA_6SOEnbl_Out_Init'
     */
    (void)Rte_Write_VeINVR_e_MtrA_6SOEnbl_Value
        (INVR_ac_B.OutportBufferForVeINVR_e_MtrA_6SOEnbl_Ou);

    /* Outport: '<Root>/VeINVR_e_MtrA_InvrtrSt' incorporates:
     *  SignalConversion generated from: '<S474>/VeINVR_e_MtrA_InvrtrSt_Out_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MtrA_InvrtrSt_Out_Init'
     */
    (void)Rte_Write_VeINVR_e_MtrA_InvrtrSt_Value
        (INVR_ac_B.OutportBufferForVeINVR_e_MtrA_InvrtrSt_O);

    /* Outport: '<Root>/VeINVR_e_MtrB_6SOEnbl' incorporates:
     *  SignalConversion generated from: '<S474>/VeINVR_e_MtrB_6SOEnbl_Out_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MtrB_6SOEnbl_Out_Init'
     */
    (void)Rte_Write_VeINVR_e_MtrB_6SOEnbl_Value
        (INVR_ac_B.OutportBufferForVeINVR_e_MtrB_6SOEnbl_Ou);

    /* Outport: '<Root>/VeINVR_e_MtrB_InvrtrSt' incorporates:
     *  SignalConversion generated from: '<S474>/VeINVR_e_MtrB_InvrtrSt_Out_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MtrB_InvrtrSt_Out_Init'
     */
    (void)Rte_Write_VeINVR_e_MtrB_InvrtrSt_Value
        (INVR_ac_B.OutportBufferForVeINVR_e_MtrB_InvrtrSt_O);

    /* Outport: '<Root>/VeINVR_e_MtrC_6SOEnbl' incorporates:
     *  SignalConversion generated from: '<S474>/VeINVR_e_MtrC_6SOEnbl_Out_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MtrC_6SOEnbl_Out_Init'
     */
    (void)Rte_Write_VeINVR_e_MtrC_6SOEnbl_Value
        (INVR_ac_B.OutportBufferForVeINVR_e_MtrC_6SOEnbl_Ou);

    /* Outport: '<Root>/VeINVR_e_MtrC_InvrtrSt' incorporates:
     *  SignalConversion generated from: '<S474>/VeINVR_e_MtrC_InvrtrSt_Out_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MtrC_InvrtrSt_Out_Init'
     */
    (void)Rte_Write_VeINVR_e_MtrC_InvrtrSt_Value
        (INVR_ac_B.OutportBufferForVeINVR_e_MtrC_InvrtrSt_O);

    /* Outport: '<Root>/VeINVR_e_P2ModeSts' incorporates:
     *  SignalConversion generated from: '<S474>/VeINVR_e_P2ModeSts_Out_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_P2ModeSts_Out_Init'
     */
    (void)Rte_Write_VeINVR_e_P2ModeSts_Value
        (INVR_ac_B.OutportBufferForVeINVR_e_P2ModeSts_Out_I);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_I_MtrA_DC_Crnt_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_I_MtrA_DC_Crnt_write_IRV
        (INVR_ac_B.OutportBufferForMtrA_DC_Crnt_Init);

    /* Merge: '<Root>/Merge_89' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_I_MtrB_DC_Crnt_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_I_MtrB_DC_Crnt_write_IRV
        (INVR_ac_B.OutportBufferForMtrB_DC_Crnt_Init);

    /* Merge: '<Root>/Merge_125' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_I_MtrC_DC_Crnt_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_I_MtrC_DC_Crnt_write_IRV
        (INVR_ac_B.OutportBufferForMtrC_DC_Crnt_Init);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_P_BstCnvtrChrgPwrLmt_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_P_BstCnvtrChrgPwrLmt_Init_IRV
        (INVR_ac_B.OutportBufferForBstCnvtrChrgPwrLmt_Init);

    /* Merge: '<Root>/Merge_152' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_P_BstCnvtrChrgPwrLmt_ST_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_P_BstCnvtrChrgPwrLmt_ST_Init_IRV
        (INVR_ac_B.OutportBufferForBstCnvtrChrgPwrLmt_ST_In);

    /* Merge: '<Root>/Merge_151' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_P_BstCnvtrDschrgPwrLmt_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_P_BstCnvtrDschrgPwrLmt_Init_IRV
        (INVR_ac_B.OutportBufferForBstCnvtrDschrgPwrLmt_Ini);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_P_BstCnvtrDschrgPwrLmt_ST_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_P_BstCnvtrDschrgPwrLmt_ST_Init_IRV
        (INVR_ac_B.OutportBufferForBstCnvtrDschrgPwrLmt_ST_);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_CapctrTemp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrA_CapctrTemp_write_IRV
        (INVR_ac_B.OutportBufferForMtrA_CapctrTemp_Init);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_ClntIn_Temp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrA_ClntIn_Temp_write_IRV
        (INVR_ac_B.OutportBufferForMtrA_ClntIn_Temp_Init);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_ClntOut_Temp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrA_ClntOut_Temp_write_IRV
        (INVR_ac_B.OutportBufferForMtrA_ClntOut_Temp_Init);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_CtrlBoard_Temp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrA_CtrlBoard_Temp_write_IRV
        (INVR_ac_B.OutportBufferForMtrA_CtrlBoard_Temp_Init);

    /* Merge: '<Root>/Merge_50' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_InvrtrTemp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrA_InvrtrTemp_write_IRV
        (INVR_ac_B.OutportBufferForMtrA_InvrtrTemp_Init);

    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_RotrTemp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrA_RotrTemp_write_IRV
        (INVR_ac_B.OutportBufferForMtrA_RotrTemp_Init);

    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrA_Temp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrA_Temp_write_IRV
        (INVR_ac_B.OutportBufferForMtrA_Temp_Init);

    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_CapctrTemp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrB_CapctrTemp_write_IRV
        (INVR_ac_B.OutportBufferForMtrB_CapctrTemp_Init);

    /* Merge: '<Root>/Merge_80' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_ClntIn_Temp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrB_ClntIn_Temp_write_IRV
        (INVR_ac_B.OutportBufferForMtrB_ClntIn_Temp_Init);

    /* Merge: '<Root>/Merge_83' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_ClntOut_Temp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrB_ClntOut_Temp_write_IRV
        (INVR_ac_B.OutportBufferForMtrB_ClntOut_Temp_Init);

    /* Merge: '<Root>/Merge_86' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_CtrlBoard_Temp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrB_CtrlBoard_Temp_write_IRV
        (INVR_ac_B.OutportBufferForMtrB_CtrlBoard_Temp_Init);

    /* Merge: '<Root>/Merge_98' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_InvrtrTemp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrB_InvrtrTemp_write_IRV
        (INVR_ac_B.OutportBufferForMtrB_InvrtrTemp_Init);

    /* Merge: '<Root>/Merge_101' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_RotrTemp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrB_RotrTemp_write_IRV
        (INVR_ac_B.OutportBufferForMtrB_RotrTemp_Init);

    /* Merge: '<Root>/Merge_105' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrB_Temp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrB_Temp_write_IRV
        (INVR_ac_B.OutportBufferForMtrB_Temp_Init);

    /* Merge: '<Root>/Merge_122' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrC_CtrlBoard_Temp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrC_CtrlBoard_Temp_write_IRV
        (INVR_ac_B.OutportBufferForMtrC_CtrlBoard_Temp_Init);

    /* Merge: '<Root>/Merge_134' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrC_InvrtrTemp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrC_InvrtrTemp_write_IRV
        (INVR_ac_B.OutportBufferForMtrC_InvrtrTemp_Init);

    /* Merge: '<Root>/Merge_137' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrC_RotrTemp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrC_RotrTemp_write_IRV
        (INVR_ac_B.OutportBufferForMtrC_RotrTemp_Init);

    /* Merge: '<Root>/Merge_140' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_T_MtrC_Temp_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_T_MtrC_Temp_write_IRV
        (INVR_ac_B.OutportBufferForMtrC_Temp_Init);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_U_MtrA_DC_Volt_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_U_MtrA_DC_Volt_write_IRV
        (INVR_ac_B.OutportBufferForMtrA_DC_Volt_Init);

    /* Merge: '<Root>/Merge_92' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_U_MtrB_DC_Volt_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_U_MtrB_DC_Volt_write_IRV
        (INVR_ac_B.OutportBufferForMtrB_DC_Volt_Init);

    /* Merge: '<Root>/Merge_128' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_U_MtrC_DC_Volt_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_U_MtrC_DC_Volt_write_IRV
        (INVR_ac_B.OutportBufferForMtrC_DC_Volt_Init);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc_Init_IRV
        (INVR_ac_B.OutportBufferForMtrAFlt_HV_CntctrOpnRq_A);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Init_IRV
        (INVR_ac_B.OutportBufferForMtrAFlt_HV_CntctrOpnRq_I);

    /* Merge: '<Root>/Merge_70' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MtrBFlt_HV_CntctrOpnRqFA_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_b_MtrBFlt_HV_CntctrOpnRqFA_write_IRV
        (INVR_ac_B.OutportBufferForMtrBFlt_HV_CntctrOpnRqFA);

    /* Merge: '<Root>/Merge_72' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc_Init_IRV
        (INVR_ac_B.OutportBufferForMtrBFlt_HV_CntctrOpnRq_A);

    /* Merge: '<Root>/Merge_69' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Init_IRV
        (INVR_ac_B.OutportBufferForMtrBFlt_HV_CntctrOpnRq_I);

    /* Merge: '<Root>/Merge_115' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MtrCFlt_3PS_Pos_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_b_MtrCFlt_3PS_Pos_Init_IRV
        (INVR_ac_B.OutportBufferForMtrCFlt_3PS_Pos_Init);

    /* Merge: '<Root>/Merge_117' incorporates:
     *  SignalConversion generated from: '<S79>/VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Init_IRV
        (INVR_ac_B.OutportBufferForMtrCFlt_HV_CntctrOpnRq_I);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S471>/InvrtrA_IsolStat_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_InvrtrA_IsolStat_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_e_InvrtrA_IsolStat_Init_IRV
        (INVR_ac_B.OutportBufferForInvrtrA_IsolStat_Init);

    /* Merge: '<Root>/Merge_59' incorporates:
     *  SignalConversion generated from: '<S472>/InvrtrB_IsolStat_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_InvrtrB_IsolStat_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_e_InvrtrB_IsolStat_Init_IRV
        (INVR_ac_B.OutportBufferForInvrtrB_IsolStat_Init);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S471>/MCPA_SPT_State_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MCPA_SPT_State_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_e_MCPA_SPT_State_Init_IRV
        (INVR_ac_B.OutportBufferForMCPA_SPT_State_Init);

    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S472>/MCPB_SPT_State_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MCPB_SPT_State_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_e_MCPB_SPT_State_Init_IRV
        (INVR_ac_B.OutportBufferForMCPB_SPT_State_Init);

    /* Merge: '<Root>/Merge_111' incorporates:
     *  SignalConversion generated from: '<S473>/MCPC_SPT_State_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MCPC_SPT_State_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_e_MCPC_SPT_State_Init_IRV
        (INVR_ac_B.OutportBufferForMCPC_SPT_State_Init);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S471>/MtrA_6SOEnbl_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MtrA_6SOEnbl_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_e_MtrA_6SOEnbl_Init_IRV
        (INVR_ac_B.OutportBufferForMtrA_6SOEnbl_Init);

    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S471>/MtrA_InvrtrSt_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MtrA_InvrtrSt_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_e_MtrA_InvrtrSt_Init_IRV
        (INVR_ac_B.OutportBufferForMtrA_InvrtrSt_Init);

    /* Merge: '<Root>/Merge_74' incorporates:
     *  SignalConversion generated from: '<S472>/MtrB_6SOEnbl_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MtrB_6SOEnbl_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_e_MtrB_6SOEnbl_Init_IRV
        (INVR_ac_B.OutportBufferForMtrB_6SOEnbl_Init);

    /* Merge: '<Root>/Merge_95' incorporates:
     *  SignalConversion generated from: '<S472>/MtrB_InvrtrSt_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MtrB_InvrtrSt_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_e_MtrB_InvrtrSt_Init_IRV
        (INVR_ac_B.OutportBufferForMtrB_InvrtrSt_Init);

    /* Merge: '<Root>/Merge_119' incorporates:
     *  SignalConversion generated from: '<S473>/MtrC_6SOEnbl_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MtrC_6SOEnbl_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_e_MtrC_6SOEnbl_Init_IRV
        (INVR_ac_B.OutportBufferForMtrC_6SOEnbl_Init);

    /* Merge: '<Root>/Merge_131' incorporates:
     *  SignalConversion generated from: '<S473>/MtrC_InvrtrSt_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_MtrC_InvrtrSt_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_e_MtrC_InvrtrSt_Init_IRV
        (INVR_ac_B.OutportBufferForMtrC_InvrtrSt_Init);

    /* Merge: '<Root>/Merge_107' incorporates:
     *  SignalConversion generated from: '<S472>/P2ModeStsDflt_Init'
     *  SignalConversion generated from: '<S79>/VeINVR_e_P2ModeSts_Init'
     * */
    Rte_IrvWrite_INVR_PwrOn_VeINVR_e_P2ModeSts_write_IRV
        (INVR_ac_B.OutportBufferForP2ModeStsDflt_Init);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_InvrtrA_IsolStat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_InvrtrA_IsolStat' */
    /* Merge: '<Root>/Merge_11' incorporates:
     *  Chart: '<S167>/TmotINVR_b_InvrtrA_IsolStatChrt'
     *  SignalConversion generated from: '<S167>/VeINVR_b_InvrtrA_IsolStat_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_InvrtrA_IsolStat/TmotINVR_b_InvrtrA_IsolStatChrt */
    /* During: TmotINVR_b_InvrtrA_IsolStat/TmotINVR_b_InvrtrA_IsolStatChrt */
    /* Entry Internal: TmotINVR_b_InvrtrA_IsolStat/TmotINVR_b_InvrtrA_IsolStatChrt */
    /* Transition: '<S643>:2' */
    Rte_IrvWrite_TmotINVR_b_InvrtrA_IsolStat_VeINVR_b_InvrtrA_IsolStat_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_InvrtrA_IsolStat' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_InvrtrB_IsolStat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_InvrtrB_IsolStat' */
    /* Merge: '<Root>/Merge_58' incorporates:
     *  Chart: '<S168>/TmotINVR_b_InvrtrB_IsolStatChrt'
     *  SignalConversion generated from: '<S168>/VeINVR_b_InvrtrB_IsolStat_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_InvrtrB_IsolStat/TmotINVR_b_InvrtrB_IsolStatChrt */
    /* During: TmotINVR_b_InvrtrB_IsolStat/TmotINVR_b_InvrtrB_IsolStatChrt */
    /* Entry Internal: TmotINVR_b_InvrtrB_IsolStat/TmotINVR_b_InvrtrB_IsolStatChrt */
    /* Transition: '<S644>:2' */
    Rte_IrvWrite_TmotINVR_b_InvrtrB_IsolStat_VeINVR_b_InvrtrB_IsolStat_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_InvrtrB_IsolStat' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MCPA_SPT_State(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MCPA_SPT_State' */
    /* Merge: '<Root>/Merge_17' incorporates:
     *  Chart: '<S169>/TmotINVR_b_MCPA_SPT_StateChrt'
     *  SignalConversion generated from: '<S169>/VeINVR_b_MCPA_SPT_State_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MCPA_SPT_State/TmotINVR_b_MCPA_SPT_StateChrt */
    /* During: TmotINVR_b_MCPA_SPT_State/TmotINVR_b_MCPA_SPT_StateChrt */
    /* Entry Internal: TmotINVR_b_MCPA_SPT_State/TmotINVR_b_MCPA_SPT_StateChrt */
    /* Transition: '<S645>:2' */
    Rte_IrvWrite_TmotINVR_b_MCPA_SPT_State_VeINVR_b_MCPA_SPT_State_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MCPA_SPT_State' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MCPB_SPT_State(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MCPB_SPT_State' */
    /* Merge: '<Root>/Merge_64' incorporates:
     *  Chart: '<S170>/TmotINVR_b_MCPB_SPT_StateChrt'
     *  SignalConversion generated from: '<S170>/VeINVR_b_MCPB_SPT_State_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MCPB_SPT_State/TmotINVR_b_MCPB_SPT_StateChrt */
    /* During: TmotINVR_b_MCPB_SPT_State/TmotINVR_b_MCPB_SPT_StateChrt */
    /* Entry Internal: TmotINVR_b_MCPB_SPT_State/TmotINVR_b_MCPB_SPT_StateChrt */
    /* Transition: '<S646>:2' */
    Rte_IrvWrite_TmotINVR_b_MCPB_SPT_State_VeINVR_b_MCPB_SPT_State_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MCPB_SPT_State' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MCPC_SPT_State(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MCPC_SPT_State' */
    /* Merge: '<Root>/Merge_110' incorporates:
     *  Chart: '<S171>/TmotINVR_b_MCPC_SPT_StateChrt'
     *  SignalConversion generated from: '<S171>/VeINVR_b_MCPC_SPT_State_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MCPC_SPT_State/TmotINVR_b_MCPC_SPT_StateChrt */
    /* During: TmotINVR_b_MCPC_SPT_State/TmotINVR_b_MCPC_SPT_StateChrt */
    /* Entry Internal: TmotINVR_b_MCPC_SPT_State/TmotINVR_b_MCPC_SPT_StateChrt */
    /* Transition: '<S647>:2' */
    Rte_IrvWrite_TmotINVR_b_MCPC_SPT_State_VeINVR_b_MCPC_SPT_State_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MCPC_SPT_State' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrAFlt_3PS_Pos(void)
{
    /* Gateway: TmotINVR_b_MtrAFlt_3PS_Pos/TmotINVR_b_MtrAFlt_3PS_PosChrt */
    /* During: TmotINVR_b_MtrAFlt_3PS_Pos/TmotINVR_b_MtrAFlt_3PS_PosChrt */
    /* Entry Internal: TmotINVR_b_MtrAFlt_3PS_Pos/TmotINVR_b_MtrAFlt_3PS_PosChrt */
    /* Transition: '<S648>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrAFlt_3PS_Pos_AltSrc(void)
{
    /* Gateway: TmotINVR_b_MtrAFlt_3PS_Pos_AltSrc/TmotINVR_b_MtrAFlt_3PS_Pos_AltSrcChrt */
    /* During: TmotINVR_b_MtrAFlt_3PS_Pos_AltSrc/TmotINVR_b_MtrAFlt_3PS_Pos_AltSrcChrt */
    /* Entry Internal: TmotINVR_b_MtrAFlt_3PS_Pos_AltSrc/TmotINVR_b_MtrAFlt_3PS_Pos_AltSrcChrt */
    /* Transition: '<S649>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrAFlt_HV_CntctrOpnRq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrAFlt_HV_CntctrOpnRq' */
    /* Merge: '<Root>/Merge_21' incorporates:
     *  Chart: '<S174>/TmotINVR_b_MtrAFlt_HV_CntctrOpnRqChrt'
     *  SignalConversion generated from: '<S174>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrAFlt_HV_CntctrOpnRq/TmotINVR_b_MtrAFlt_HV_CntctrOpnRqChrt */
    /* During: TmotINVR_b_MtrAFlt_HV_CntctrOpnRq/TmotINVR_b_MtrAFlt_HV_CntctrOpnRqChrt */
    /* Entry Internal: TmotINVR_b_MtrAFlt_HV_CntctrOpnRq/TmotINVR_b_MtrAFlt_HV_CntctrOpnRqChrt */
    /* Transition: '<S650>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrAFlt_HV_CntctrOpnRq_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrAFlt_HV_CntctrOpnRq' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc' */
    /* Merge: '<Root>/Merge_23' incorporates:
     *  Chart: '<S175>/TmotINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrcChrt'
     *  SignalConversion generated from: '<S175>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc/TmotINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* During: TmotINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc/TmotINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* Entry Internal: TmotINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc/TmotINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* Transition: '<S651>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc_VeINVR_b_MtrAFltHVCntctrOpnRqAltSrc_SigRcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrAFlt_HV_CntctrOpnRq_AltSrc' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrA_6SOEnbl(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrA_6SOEnbl' */
    /* Merge: '<Root>/Merge_25' incorporates:
     *  Chart: '<S176>/TmotINVR_b_MtrA_6SOEnblChrt'
     *  SignalConversion generated from: '<S176>/VeINVR_b_MtrA_6SOEnbl_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrA_6SOEnbl/TmotINVR_b_MtrA_6SOEnblChrt */
    /* During: TmotINVR_b_MtrA_6SOEnbl/TmotINVR_b_MtrA_6SOEnblChrt */
    /* Entry Internal: TmotINVR_b_MtrA_6SOEnbl/TmotINVR_b_MtrA_6SOEnblChrt */
    /* Transition: '<S652>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrA_6SOEnbl_VeINVR_b_MtrA_6SOEnbl_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrA_6SOEnbl' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrA_CapctrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrA_CapctrTemp' */
    /* Merge: '<Root>/Merge_27' incorporates:
     *  Chart: '<S177>/TmotINVR_b_MtrA_CapctrTempChrt'
     *  SignalConversion generated from: '<S177>/VeINVR_b_MtrA_CapctrTemp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrA_CapctrTemp/TmotINVR_b_MtrA_CapctrTempChrt */
    /* During: TmotINVR_b_MtrA_CapctrTemp/TmotINVR_b_MtrA_CapctrTempChrt */
    /* Entry Internal: TmotINVR_b_MtrA_CapctrTemp/TmotINVR_b_MtrA_CapctrTempChrt */
    /* Transition: '<S653>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrA_CapctrTemp_VeINVR_b_MtrA_CapctrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrA_CapctrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrA_ClntIn_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrA_ClntIn_Temp' */
    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S178>/TmotINVR_b_MtrA_ClntIn_TempChrt'
     *  SignalConversion generated from: '<S178>/VeINVR_b_MtrA_ClntIn_Temp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrA_ClntIn_Temp/TmotINVR_b_MtrA_ClntIn_TempChrt */
    /* During: TmotINVR_b_MtrA_ClntIn_Temp/TmotINVR_b_MtrA_ClntIn_TempChrt */
    /* Entry Internal: TmotINVR_b_MtrA_ClntIn_Temp/TmotINVR_b_MtrA_ClntIn_TempChrt */
    /* Transition: '<S654>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrA_ClntIn_Temp_VeINVR_b_MtrA_ClntIn_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrA_ClntIn_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrA_ClntOut_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrA_ClntOut_Temp' */
    /* Merge: '<Root>/Merge_33' incorporates:
     *  Chart: '<S179>/TmotINVR_b_MtrA_ClntOut_TempChrt'
     *  SignalConversion generated from: '<S179>/VeINVR_b_MtrA_ClntOut_Temp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrA_ClntOut_Temp/TmotINVR_b_MtrA_ClntOut_TempChrt */
    /* During: TmotINVR_b_MtrA_ClntOut_Temp/TmotINVR_b_MtrA_ClntOut_TempChrt */
    /* Entry Internal: TmotINVR_b_MtrA_ClntOut_Temp/TmotINVR_b_MtrA_ClntOut_TempChrt */
    /* Transition: '<S655>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrA_ClntOut_Temp_VeINVR_b_MtrA_ClntOut_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrA_ClntOut_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrA_CtrlBoard_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrA_CtrlBoard_Temp' */
    /* Merge: '<Root>/Merge_36' incorporates:
     *  Chart: '<S180>/TmotINVR_b_MtrA_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S180>/VeINVR_b_MtrA_CtrlBoard_Temp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrA_CtrlBoard_Temp/TmotINVR_b_MtrA_CtrlBoard_TempChrt */
    /* During: TmotINVR_b_MtrA_CtrlBoard_Temp/TmotINVR_b_MtrA_CtrlBoard_TempChrt */
    /* Entry Internal: TmotINVR_b_MtrA_CtrlBoard_Temp/TmotINVR_b_MtrA_CtrlBoard_TempChrt */
    /* Transition: '<S656>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrA_CtrlBoard_Temp_VeINVR_b_MtrA_CtrlBoard_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrA_CtrlBoard_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrA_DC_Crnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrA_DC_Crnt' */
    /* Merge: '<Root>/Merge_39' incorporates:
     *  Chart: '<S181>/TmotINVR_b_MtrA_DC_CrntChrt'
     *  SignalConversion generated from: '<S181>/VeINVR_b_MtrA_DC_Crnt_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrA_DC_Crnt/TmotINVR_b_MtrA_DC_CrntChrt */
    /* During: TmotINVR_b_MtrA_DC_Crnt/TmotINVR_b_MtrA_DC_CrntChrt */
    /* Entry Internal: TmotINVR_b_MtrA_DC_Crnt/TmotINVR_b_MtrA_DC_CrntChrt */
    /* Transition: '<S657>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrA_DC_Crnt_VeINVR_b_MtrA_DC_Crnt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrA_DC_Crnt' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrA_DC_Volt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrA_DC_Volt' */
    /* Merge: '<Root>/Merge_42' incorporates:
     *  Chart: '<S182>/TmotINVR_b_MtrA_DC_VoltChrt'
     *  SignalConversion generated from: '<S182>/VeINVR_b_MtrA_DC_Volt_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrA_DC_Volt/TmotINVR_b_MtrA_DC_VoltChrt */
    /* During: TmotINVR_b_MtrA_DC_Volt/TmotINVR_b_MtrA_DC_VoltChrt */
    /* Entry Internal: TmotINVR_b_MtrA_DC_Volt/TmotINVR_b_MtrA_DC_VoltChrt */
    /* Transition: '<S658>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrA_DC_Volt_VeINVR_b_MtrA_DC_Volt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrA_DC_Volt' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrA_Dschrge_Stat(void)
{
    /* Gateway: TmotINVR_b_MtrA_Dschrge_Stat/TmotINVR_b_MtrA_Dschrge_StatChrt */
    /* During: TmotINVR_b_MtrA_Dschrge_Stat/TmotINVR_b_MtrA_Dschrge_StatChrt */
    /* Entry Internal: TmotINVR_b_MtrA_Dschrge_Stat/TmotINVR_b_MtrA_Dschrge_StatChrt */
    /* Transition: '<S659>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrA_InvrtrSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrA_InvrtrSt' */
    /* Merge: '<Root>/Merge_46' incorporates:
     *  Chart: '<S184>/TmotINVR_b_MtrA_InvrtrStChrt'
     *  SignalConversion generated from: '<S184>/VeINVR_b_MtrA_InvrtrSt_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrA_InvrtrSt/TmotINVR_b_MtrA_InvrtrStChrt */
    /* During: TmotINVR_b_MtrA_InvrtrSt/TmotINVR_b_MtrA_InvrtrStChrt */
    /* Entry Internal: TmotINVR_b_MtrA_InvrtrSt/TmotINVR_b_MtrA_InvrtrStChrt */
    /* Transition: '<S660>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrA_InvrtrSt_VeINVR_b_MtrA_InvrtrSt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrA_InvrtrSt' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrA_InvrtrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrA_InvrtrTemp' */
    /* Merge: '<Root>/Merge_48' incorporates:
     *  Chart: '<S185>/TmotINVR_b_MtrA_InvrtrTempChrt'
     *  SignalConversion generated from: '<S185>/VeINVR_b_MtrA_InvrtrTemp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrA_InvrtrTemp/TmotINVR_b_MtrA_InvrtrTempChrt */
    /* During: TmotINVR_b_MtrA_InvrtrTemp/TmotINVR_b_MtrA_InvrtrTempChrt */
    /* Entry Internal: TmotINVR_b_MtrA_InvrtrTemp/TmotINVR_b_MtrA_InvrtrTempChrt */
    /* Transition: '<S661>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrA_InvrtrTemp_VeINVR_b_MtrA_InvrtrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrA_InvrtrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrA_RotrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrA_RotrTemp' */
    /* Merge: '<Root>/Merge_51' incorporates:
     *  Chart: '<S186>/TmotINVR_b_MtrA_RotrTempChrt'
     *  SignalConversion generated from: '<S186>/VeINVR_b_MtrA_RotrTemp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrA_RotrTemp/TmotINVR_b_MtrA_RotrTempChrt */
    /* During: TmotINVR_b_MtrA_RotrTemp/TmotINVR_b_MtrA_RotrTempChrt */
    /* Entry Internal: TmotINVR_b_MtrA_RotrTemp/TmotINVR_b_MtrA_RotrTempChrt */
    /* Transition: '<S662>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrA_RotrTemp_VeINVR_b_MtrA_RotrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrA_RotrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrA_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrA_Temp' */
    /* Merge: '<Root>/Merge_54' incorporates:
     *  Chart: '<S187>/TmotINVR_b_MtrA_TempChrt'
     *  SignalConversion generated from: '<S187>/VeINVR_b_MtrA_Temp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrA_Temp/TmotINVR_b_MtrA_TempChrt */
    /* During: TmotINVR_b_MtrA_Temp/TmotINVR_b_MtrA_TempChrt */
    /* Entry Internal: TmotINVR_b_MtrA_Temp/TmotINVR_b_MtrA_TempChrt */
    /* Transition: '<S663>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrA_Temp_VeINVR_b_MtrA_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrA_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrBFlt_3PS_Pos(void)
{
    /* Gateway: TmotINVR_b_MtrBFlt_3PS_Pos/TmotINVR_b_MtrBFlt_3PS_PosChrt */
    /* During: TmotINVR_b_MtrBFlt_3PS_Pos/TmotINVR_b_MtrBFlt_3PS_PosChrt */
    /* Entry Internal: TmotINVR_b_MtrBFlt_3PS_Pos/TmotINVR_b_MtrBFlt_3PS_PosChrt */
    /* Transition: '<S664>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrBFlt_3PS_Pos_AltSrc(void)
{
    /* Gateway: TmotINVR_b_MtrBFlt_3PS_Pos_AltSrc/TmotINVR_b_MtrBFlt_3PS_Pos_AltSrcChrt */
    /* During: TmotINVR_b_MtrBFlt_3PS_Pos_AltSrc/TmotINVR_b_MtrBFlt_3PS_Pos_AltSrcChrt */
    /* Entry Internal: TmotINVR_b_MtrBFlt_3PS_Pos_AltSrc/TmotINVR_b_MtrBFlt_3PS_Pos_AltSrcChrt */
    /* Transition: '<S665>:2' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrBFlt_HV_CntctrOpnRq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrBFlt_HV_CntctrOpnRq' */
    /* Merge: '<Root>/Merge_68' incorporates:
     *  Chart: '<S190>/TmotINVR_b_MtrBFlt_HV_CntctrOpnRqChrt'
     *  SignalConversion generated from: '<S190>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrBFlt_HV_CntctrOpnRq/TmotINVR_b_MtrBFlt_HV_CntctrOpnRqChrt */
    /* During: TmotINVR_b_MtrBFlt_HV_CntctrOpnRq/TmotINVR_b_MtrBFlt_HV_CntctrOpnRqChrt */
    /* Entry Internal: TmotINVR_b_MtrBFlt_HV_CntctrOpnRq/TmotINVR_b_MtrBFlt_HV_CntctrOpnRqChrt */
    /* Transition: '<S666>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrBFlt_HV_CntctrOpnRq' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc' */
    /* Merge: '<Root>/Merge_71' incorporates:
     *  Chart: '<S191>/TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrcChrt'
     *  SignalConversion generated from: '<S191>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc/TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* During: TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc/TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* Entry Internal: TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc/TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrcChrt */
    /* Transition: '<S667>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc_VeINVR_b_MtrBFltHVCntctrOpnRqAltSrc_SigRcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_AltSrc' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrB_6SOEnbl(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrB_6SOEnbl' */
    /* Merge: '<Root>/Merge_73' incorporates:
     *  Chart: '<S192>/TmotINVR_b_MtrB_6SOEnblChrt'
     *  SignalConversion generated from: '<S192>/VeINVR_b_MtrB_6SOEnbl_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrB_6SOEnbl/TmotINVR_b_MtrB_6SOEnblChrt */
    /* During: TmotINVR_b_MtrB_6SOEnbl/TmotINVR_b_MtrB_6SOEnblChrt */
    /* Entry Internal: TmotINVR_b_MtrB_6SOEnbl/TmotINVR_b_MtrB_6SOEnblChrt */
    /* Transition: '<S668>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrB_6SOEnbl_VeINVR_b_MtrB_6SOEnbl_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrB_6SOEnbl' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrB_CapctrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrB_CapctrTemp' */
    /* Merge: '<Root>/Merge_75' incorporates:
     *  Chart: '<S193>/TmotINVR_b_MtrB_CapctrTempChrt'
     *  SignalConversion generated from: '<S193>/VeINVR_b_MtrB_CapctrTemp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrB_CapctrTemp/TmotINVR_b_MtrB_CapctrTempChrt */
    /* During: TmotINVR_b_MtrB_CapctrTemp/TmotINVR_b_MtrB_CapctrTempChrt */
    /* Entry Internal: TmotINVR_b_MtrB_CapctrTemp/TmotINVR_b_MtrB_CapctrTempChrt */
    /* Transition: '<S669>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrB_CapctrTemp_VeINVR_b_MtrB_CapctrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrB_CapctrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrB_ClntIn_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrB_ClntIn_Temp' */
    /* Merge: '<Root>/Merge_78' incorporates:
     *  Chart: '<S194>/TmotINVR_b_MtrB_ClntIn_TempChrt'
     *  SignalConversion generated from: '<S194>/VeINVR_b_MtrB_ClntIn_Temp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrB_ClntIn_Temp/TmotINVR_b_MtrB_ClntIn_TempChrt */
    /* During: TmotINVR_b_MtrB_ClntIn_Temp/TmotINVR_b_MtrB_ClntIn_TempChrt */
    /* Entry Internal: TmotINVR_b_MtrB_ClntIn_Temp/TmotINVR_b_MtrB_ClntIn_TempChrt */
    /* Transition: '<S670>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrB_ClntIn_Temp_VeINVR_b_MtrB_ClntIn_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrB_ClntIn_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrB_ClntOut_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrB_ClntOut_Temp' */
    /* Merge: '<Root>/Merge_81' incorporates:
     *  Chart: '<S195>/TmotINVR_b_MtrB_ClntOut_TempChrt'
     *  SignalConversion generated from: '<S195>/VeINVR_b_MtrB_ClntOut_Temp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrB_ClntOut_Temp/TmotINVR_b_MtrB_ClntOut_TempChrt */
    /* During: TmotINVR_b_MtrB_ClntOut_Temp/TmotINVR_b_MtrB_ClntOut_TempChrt */
    /* Entry Internal: TmotINVR_b_MtrB_ClntOut_Temp/TmotINVR_b_MtrB_ClntOut_TempChrt */
    /* Transition: '<S671>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrB_ClntOut_Temp_VeINVR_b_MtrB_ClntOut_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrB_ClntOut_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrB_CtrlBoard_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrB_CtrlBoard_Temp' */
    /* Merge: '<Root>/Merge_84' incorporates:
     *  Chart: '<S196>/TmotINVR_b_MtrB_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S196>/VeINVR_b_MtrB_CtrlBoard_Temp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrB_CtrlBoard_Temp/TmotINVR_b_MtrB_CtrlBoard_TempChrt */
    /* During: TmotINVR_b_MtrB_CtrlBoard_Temp/TmotINVR_b_MtrB_CtrlBoard_TempChrt */
    /* Entry Internal: TmotINVR_b_MtrB_CtrlBoard_Temp/TmotINVR_b_MtrB_CtrlBoard_TempChrt */
    /* Transition: '<S672>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrB_CtrlBoard_Temp_VeINVR_b_MtrB_CtrlBoard_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrB_CtrlBoard_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrB_DC_Crnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrB_DC_Crnt' */
    /* Merge: '<Root>/Merge_87' incorporates:
     *  Chart: '<S197>/TmotINVR_b_MtrB_DC_CrntChrt'
     *  SignalConversion generated from: '<S197>/VeINVR_b_MtrB_DC_Crnt_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrB_DC_Crnt/TmotINVR_b_MtrB_DC_CrntChrt */
    /* During: TmotINVR_b_MtrB_DC_Crnt/TmotINVR_b_MtrB_DC_CrntChrt */
    /* Entry Internal: TmotINVR_b_MtrB_DC_Crnt/TmotINVR_b_MtrB_DC_CrntChrt */
    /* Transition: '<S673>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrB_DC_Crnt_VeINVR_b_MtrB_DC_Crnt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrB_DC_Crnt' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrB_DC_Volt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrB_DC_Volt' */
    /* Merge: '<Root>/Merge_90' incorporates:
     *  Chart: '<S198>/TmotINVR_b_MtrB_DC_VoltChrt'
     *  SignalConversion generated from: '<S198>/VeINVR_b_MtrB_DC_Volt_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrB_DC_Volt/TmotINVR_b_MtrB_DC_VoltChrt */
    /* During: TmotINVR_b_MtrB_DC_Volt/TmotINVR_b_MtrB_DC_VoltChrt */
    /* Entry Internal: TmotINVR_b_MtrB_DC_Volt/TmotINVR_b_MtrB_DC_VoltChrt */
    /* Transition: '<S674>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrB_DC_Volt_VeINVR_b_MtrB_DC_Volt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrB_DC_Volt' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrB_InvrtrSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrB_InvrtrSt' */
    /* Merge: '<Root>/Merge_94' incorporates:
     *  Chart: '<S199>/TmotINVR_b_MtrB_InvrtrStChrt'
     *  SignalConversion generated from: '<S199>/VeINVR_b_MtrB_InvrtrSt_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrB_InvrtrSt/TmotINVR_b_MtrB_InvrtrStChrt */
    /* During: TmotINVR_b_MtrB_InvrtrSt/TmotINVR_b_MtrB_InvrtrStChrt */
    /* Entry Internal: TmotINVR_b_MtrB_InvrtrSt/TmotINVR_b_MtrB_InvrtrStChrt */
    /* Transition: '<S675>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrB_InvrtrSt_VeINVR_b_MtrB_InvrtrSt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrB_InvrtrSt' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrB_InvrtrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrB_InvrtrTemp' */
    /* Merge: '<Root>/Merge_96' incorporates:
     *  Chart: '<S200>/TmotINVR_b_MtrB_InvrtrTempChrt'
     *  SignalConversion generated from: '<S200>/VeINVR_b_MtrB_InvrtrTemp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrB_InvrtrTemp/TmotINVR_b_MtrB_InvrtrTempChrt */
    /* During: TmotINVR_b_MtrB_InvrtrTemp/TmotINVR_b_MtrB_InvrtrTempChrt */
    /* Entry Internal: TmotINVR_b_MtrB_InvrtrTemp/TmotINVR_b_MtrB_InvrtrTempChrt */
    /* Transition: '<S676>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrB_InvrtrTemp_VeINVR_b_MtrB_InvrtrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrB_InvrtrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrB_RotrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrB_RotrTemp' */
    /* Merge: '<Root>/Merge_99' incorporates:
     *  Chart: '<S201>/TmotINVR_b_MtrB_RotrTempChrt'
     *  SignalConversion generated from: '<S201>/VeINVR_b_MtrB_RotrTemp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrB_RotrTemp/TmotINVR_b_MtrB_RotrTempChrt */
    /* During: TmotINVR_b_MtrB_RotrTemp/TmotINVR_b_MtrB_RotrTempChrt */
    /* Entry Internal: TmotINVR_b_MtrB_RotrTemp/TmotINVR_b_MtrB_RotrTempChrt */
    /* Transition: '<S677>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrB_RotrTemp_VeINVR_b_MtrB_RotrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrB_RotrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrB_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrB_Temp' */
    /* Merge: '<Root>/Merge_103' incorporates:
     *  Chart: '<S202>/TmotINVR_b_MtrB_TempChrt'
     *  SignalConversion generated from: '<S202>/VeINVR_b_MtrB_Temp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrB_Temp/TmotINVR_b_MtrB_TempChrt */
    /* During: TmotINVR_b_MtrB_Temp/TmotINVR_b_MtrB_TempChrt */
    /* Entry Internal: TmotINVR_b_MtrB_Temp/TmotINVR_b_MtrB_TempChrt */
    /* Transition: '<S678>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrB_Temp_VeINVR_b_MtrB_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrB_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrCFlt_3PS_Pos(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrCFlt_3PS_Pos' */
    /* Merge: '<Root>/Merge_114' incorporates:
     *  Chart: '<S203>/TmotINVR_b_MtrCFlt_3PS_PosChrt'
     *  SignalConversion generated from: '<S203>/VeINVR_b_MtrCFlt_3PS_Pos_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrCFlt_3PS_Pos/TmotINVR_b_MtrCFlt_3PS_PosChrt */
    /* During: TmotINVR_b_MtrCFlt_3PS_Pos/TmotINVR_b_MtrCFlt_3PS_PosChrt */
    /* Entry Internal: TmotINVR_b_MtrCFlt_3PS_Pos/TmotINVR_b_MtrCFlt_3PS_PosChrt */
    /* Transition: '<S679>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrCFlt_3PS_Pos_VeINVR_b_MtrCFlt_3PS_Pos_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrCFlt_3PS_Pos' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrCFlt_HV_CntctrOpnRq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrCFlt_HV_CntctrOpnRq' */
    /* Merge: '<Root>/Merge_116' incorporates:
     *  Chart: '<S204>/TmotINVR_b_MtrCFlt_HV_CntctrOpnRqChrt'
     *  SignalConversion generated from: '<S204>/VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrCFlt_HV_CntctrOpnRq/TmotINVR_b_MtrCFlt_HV_CntctrOpnRqChrt */
    /* During: TmotINVR_b_MtrCFlt_HV_CntctrOpnRq/TmotINVR_b_MtrCFlt_HV_CntctrOpnRqChrt */
    /* Entry Internal: TmotINVR_b_MtrCFlt_HV_CntctrOpnRq/TmotINVR_b_MtrCFlt_HV_CntctrOpnRqChrt */
    /* Transition: '<S680>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrCFlt_HV_CntctrOpnRq_VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrCFlt_HV_CntctrOpnRq' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrC_6SOEnbl(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrC_6SOEnbl' */
    /* Merge: '<Root>/Merge_118' incorporates:
     *  Chart: '<S205>/TmotINVR_b_MtrC_6SOEnblChrt'
     *  SignalConversion generated from: '<S205>/VeINVR_b_MtrC_6SOEnbl_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrC_6SOEnbl/TmotINVR_b_MtrC_6SOEnblChrt */
    /* During: TmotINVR_b_MtrC_6SOEnbl/TmotINVR_b_MtrC_6SOEnblChrt */
    /* Entry Internal: TmotINVR_b_MtrC_6SOEnbl/TmotINVR_b_MtrC_6SOEnblChrt */
    /* Transition: '<S681>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrC_6SOEnbl_VeINVR_b_MtrC_6SOEnbl_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrC_6SOEnbl' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrC_CtrlBoard_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrC_CtrlBoard_Temp' */
    /* Merge: '<Root>/Merge_120' incorporates:
     *  Chart: '<S206>/TmotINVR_b_MtrC_CtrlBoard_TempChrt'
     *  SignalConversion generated from: '<S206>/VeINVR_b_MtrC_CtrlBoard_Temp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrC_CtrlBoard_Temp/TmotINVR_b_MtrC_CtrlBoard_TempChrt */
    /* During: TmotINVR_b_MtrC_CtrlBoard_Temp/TmotINVR_b_MtrC_CtrlBoard_TempChrt */
    /* Entry Internal: TmotINVR_b_MtrC_CtrlBoard_Temp/TmotINVR_b_MtrC_CtrlBoard_TempChrt */
    /* Transition: '<S682>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrC_CtrlBoard_Temp_VeINVR_b_MtrC_CtrlBoard_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrC_CtrlBoard_Temp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrC_DC_Crnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrC_DC_Crnt' */
    /* Merge: '<Root>/Merge_123' incorporates:
     *  Chart: '<S207>/TmotINVR_b_MtrC_DC_CrntChrt'
     *  SignalConversion generated from: '<S207>/VeINVR_b_MtrC_DC_Crnt_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrC_DC_Crnt/TmotINVR_b_MtrC_DC_CrntChrt */
    /* During: TmotINVR_b_MtrC_DC_Crnt/TmotINVR_b_MtrC_DC_CrntChrt */
    /* Entry Internal: TmotINVR_b_MtrC_DC_Crnt/TmotINVR_b_MtrC_DC_CrntChrt */
    /* Transition: '<S683>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrC_DC_Crnt_VeINVR_b_MtrC_DC_Crnt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrC_DC_Crnt' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrC_DC_Volt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrC_DC_Volt' */
    /* Merge: '<Root>/Merge_126' incorporates:
     *  Chart: '<S208>/TmotINVR_b_MtrC_DC_VoltChrt'
     *  SignalConversion generated from: '<S208>/VeINVR_b_MtrC_DC_Volt_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrC_DC_Volt/TmotINVR_b_MtrC_DC_VoltChrt */
    /* During: TmotINVR_b_MtrC_DC_Volt/TmotINVR_b_MtrC_DC_VoltChrt */
    /* Entry Internal: TmotINVR_b_MtrC_DC_Volt/TmotINVR_b_MtrC_DC_VoltChrt */
    /* Transition: '<S684>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrC_DC_Volt_VeINVR_b_MtrC_DC_Volt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrC_DC_Volt' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrC_InvrtrSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrC_InvrtrSt' */
    /* Merge: '<Root>/Merge_130' incorporates:
     *  Chart: '<S209>/TmotINVR_b_MtrC_InvrtrStChrt'
     *  SignalConversion generated from: '<S209>/VeINVR_b_MtrC_InvrtrSt_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrC_InvrtrSt/TmotINVR_b_MtrC_InvrtrStChrt */
    /* During: TmotINVR_b_MtrC_InvrtrSt/TmotINVR_b_MtrC_InvrtrStChrt */
    /* Entry Internal: TmotINVR_b_MtrC_InvrtrSt/TmotINVR_b_MtrC_InvrtrStChrt */
    /* Transition: '<S685>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrC_InvrtrSt_VeINVR_b_MtrC_InvrtrSt_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrC_InvrtrSt' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrC_InvrtrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrC_InvrtrTemp' */
    /* Merge: '<Root>/Merge_132' incorporates:
     *  Chart: '<S210>/TmotINVR_b_MtrC_InvrtrTempChrt'
     *  SignalConversion generated from: '<S210>/VeINVR_b_MtrC_InvrtrTemp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrC_InvrtrTemp/TmotINVR_b_MtrC_InvrtrTempChrt */
    /* During: TmotINVR_b_MtrC_InvrtrTemp/TmotINVR_b_MtrC_InvrtrTempChrt */
    /* Entry Internal: TmotINVR_b_MtrC_InvrtrTemp/TmotINVR_b_MtrC_InvrtrTempChrt */
    /* Transition: '<S686>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrC_InvrtrTemp_VeINVR_b_MtrC_InvrtrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrC_InvrtrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrC_RotrTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrC_RotrTemp' */
    /* Merge: '<Root>/Merge_135' incorporates:
     *  Chart: '<S211>/TmotINVR_b_MtrC_RotrTempChrt'
     *  SignalConversion generated from: '<S211>/VeINVR_b_MtrC_RotrTemp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrC_RotrTemp/TmotINVR_b_MtrC_RotrTempChrt */
    /* During: TmotINVR_b_MtrC_RotrTemp/TmotINVR_b_MtrC_RotrTempChrt */
    /* Entry Internal: TmotINVR_b_MtrC_RotrTemp/TmotINVR_b_MtrC_RotrTempChrt */
    /* Transition: '<S687>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrC_RotrTemp_VeINVR_b_MtrC_RotrTemp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrC_RotrTemp' */
}

/* Output function */
FUNC(void, INVR_CODE) TmotINVR_b_MtrC_Temp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotINVR_b_MtrC_Temp' */
    /* Merge: '<Root>/Merge_138' incorporates:
     *  Chart: '<S212>/TmotINVR_b_MtrC_TempChrt'
     *  SignalConversion generated from: '<S212>/VeINVR_b_MtrC_Temp_Sig_Rcvd_write'
     */
    /* Gateway: TmotINVR_b_MtrC_Temp/TmotINVR_b_MtrC_TempChrt */
    /* During: TmotINVR_b_MtrC_Temp/TmotINVR_b_MtrC_TempChrt */
    /* Entry Internal: TmotINVR_b_MtrC_Temp/TmotINVR_b_MtrC_TempChrt */
    /* Transition: '<S688>:2' */
    Rte_IrvWrite_TmotINVR_b_MtrC_Temp_VeINVR_b_MtrC_Temp_Sig_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotINVR_b_MtrC_Temp' */
}

/* Model initialize function */
FUNC(void, INVR_CODE) INVR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/INVR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S79>/FcnCallGen' incorporates:
     *  SubSystem: '<S79>/MotorA_INIT'
     */
    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_InvrtrTemp_Init' incorporates:
     *  Constant: '<S493>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_InvrtrTemp_Init = KeINVR_T_MtrA_InvrtrTemp;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_Temp_Init' incorporates:
     *  Constant: '<S495>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_Temp_Init = KeINVR_T_MtrA_Temp;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_InvrtrSt_Init' incorporates:
     *  Constant: '<S504>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_InvrtrSt_Init = KeINVR_e_MtrA_InvrtrSt;

    /* SystemInitialize for SignalConversion generated from: '<S471>/InvrtrA_IsolStat_Init' incorporates:
     *  Constant: '<S499>/Calib'
     */
    INVR_ac_B.OutportBufferForInvrtrA_IsolStat_Init = KeINVR_e_InvrtrA_IsolStat;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MCPA_SPT_State_Init' incorporates:
     *  Constant: '<S500>/Calib'
     */
    INVR_ac_B.OutportBufferForMCPA_SPT_State_Init = KeINVR_e_MCPA_SPT_State;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_DC_Crnt_Init' incorporates:
     *  Constant: '<S478>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_DC_Crnt_Init = KeINVR_I_MtrA_DC_Crnt;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_DC_Volt_Init' incorporates:
     *  Constant: '<S497>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_DC_Volt_Init = KeINVR_U_MtrA_DC_Volt;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_6SOEnbl_Init' incorporates:
     *  Constant: '<S501>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_6SOEnbl_Init = KeINVR_e_MtrA_6SOEnbl_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_CtrlBoard_Temp_Init' incorporates:
     *  Constant: '<S492>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_CtrlBoard_Temp_Init =
        KeINVR_T_MtrA_CtrlBoard_Temp;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_ClntIn_Temp_Init' incorporates:
     *  Constant: '<S489>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_ClntIn_Temp_Init = KeINVR_T_MtrA_ClntIn_Temp;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_ClntOut_Temp_Init' incorporates:
     *  Constant: '<S490>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_ClntOut_Temp_Init =
        KeINVR_T_MtrA_ClntOut_Temp;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_RotrTemp_Init' incorporates:
     *  Constant: '<S494>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_RotrTemp_Init = KeINVR_T_MtrA_RotrTemp;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_CapctrTemp_Init' incorporates:
     *  Constant: '<S488>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_CapctrTemp_Init = KeINVR_T_MtrA_CapctrTemp;

    /* SystemInitialize for SignalConversion generated from: '<S471>/P1_CAN_COM_Error_Init' incorporates:
     *  Constant: '<S498>/Calib'
     */
    INVR_ac_B.OutportBufferForP1_CAN_COM_Error_Init =
        KeINVR_b_P1_CAN_COM_Error_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MCPA_HVILSts_Init' incorporates:
     *  Constant: '<S475>/Constant'
     */
    INVR_ac_B.OutportBufferForMCPA_HVILSts_Init = INVR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_DrtRsn_Init' incorporates:
     *  Constant: '<S502>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_DrtRsn_Init = KeINVR_e_MtrA_DerateReason_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/BstCnvtrChrgPwrLmt_Init' incorporates:
     *  Constant: '<S479>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrChrgPwrLmt_Init =
        KeINVR_P_BstCnvtrChrgPwrLmt_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/BstCnvtrDschrgPwrLmt_Init' incorporates:
     *  Constant: '<S481>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrDschrgPwrLmt_Ini =
        KeINVR_P_BstCnvtrDschrgPwrLmt_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MaxBoostVolt_Init' incorporates:
     *  Constant: '<S496>/Calib'
     */
    INVR_ac_B.OutportBufferForMaxBoostVolt_Init = KeINVR_U_MaxBoostVolt_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MCPA_CommFail_Init' incorporates:
     *  Constant: '<S476>/Constant'
     */
    INVR_ac_B.OutportBufferForMCPA_CommFail_Init = INVR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S471>/GPIMDCBusTemp_Init' incorporates:
     *  Constant: '<S487>/Calib'
     */
    INVR_ac_B.OutportBufferForGPIMDCBusTemp_Init =
        KeINVR_T_GPIMDCBusBarTemp_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/GPIMACBusTemp_Init' incorporates:
     *  Constant: '<S486>/Calib'
     */
    INVR_ac_B.OutportBufferForGPIMACBusTemp_Init =
        KeINVR_T_GPIMACBusBarTemp_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/BstCnvtrLwrIGBT_TmpFltd_Init' incorporates:
     *  Constant: '<S483>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrLwrIGBT_TmpFltd_ =
        KeINVR_T_BstCnvtrLwrIGBT_TmpFltd_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/BstCnvtrReactorTmp_Init' incorporates:
     *  Constant: '<S484>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrReactorTmp_Init =
        KeINVR_T_BstCnvtrReactorTmp_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/BstCnvtrUpprIGBT_TmpFltd_Init' incorporates:
     *  Constant: '<S485>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrUpprIGBT_TmpFltd =
        KeINVR_T_BstCnvtrUpprIGBT_TmpFltd_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/BstCnvtrFailSts_Init' incorporates:
     *  Constant: '<S477>/Constant'
     */
    INVR_ac_B.OutportBufferForBstCnvtrFailSts_Init = INVR_ac_ConstB.Constant_e;

    /* SystemInitialize for SignalConversion generated from: '<S471>/BstCnvtrChrgPwrLmt_ST_Init' incorporates:
     *  Constant: '<S480>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrChrgPwrLmt_ST_In =
        KeINVR_P_BstCnvtrChrgPwrLmt_ST_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/BstCnvtrDschrgPwrLmt_ST_Init' incorporates:
     *  Constant: '<S482>/Calib'
     */
    INVR_ac_B.OutportBufferForBstCnvtrDschrgPwrLmt_ST_ =
        KeINVR_P_BstCnvtrDschrgPwrLmt_ST_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_CoolantTemp_Init' incorporates:
     *  Constant: '<S491>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_CoolantTemp_Init =
        KeINVR_T_MtrA_CoolantTemp_Init;

    /* SystemInitialize for SignalConversion generated from: '<S471>/MtrA_Dschrge_Stat_Init' incorporates:
     *  Constant: '<S503>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrA_Dschrge_Stat_Init =
        KeINVR_e_MtrA_Dschrge_Stat_Init;

    /* SystemInitialize for S-Function (fcgen): '<S79>/FcnCallGen' incorporates:
     *  SubSystem: '<S79>/MotorB_INIT'
     */
    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrB_InvrtrSt_Init' incorporates:
     *  Constant: '<S523>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_InvrtrSt_Init = KeINVR_e_MtrB_InvrtrSt;

    /* SystemInitialize for SignalConversion generated from: '<S472>/InvrtrB_IsolStat_Init' incorporates:
     *  Constant: '<S518>/Calib'
     */
    INVR_ac_B.OutportBufferForInvrtrB_IsolStat_Init = KeINVR_e_InvrtrB_IsolStat;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MCPB_SPT_State_Init' incorporates:
     *  Constant: '<S519>/Calib'
     */
    INVR_ac_B.OutportBufferForMCPB_SPT_State_Init = KeINVR_e_MCPB_SPT_State;

    /* SystemInitialize for SignalConversion generated from: '<S472>/P2ModeStsDflt_Init' incorporates:
     *  Constant: '<S524>/Calib'
     */
    INVR_ac_B.OutportBufferForP2ModeStsDflt_Init = KeINVR_e_P2ModeStsDflt;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MCPB_HVILSts_Init' incorporates:
     *  Constant: '<S505>/Constant'
     */
    INVR_ac_B.OutportBufferForMCPB_HVILSts_Init = INVR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrB_DrtRsn_Init' incorporates:
     *  Constant: '<S521>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_DrtRsn_Init = KeINVR_e_MtrB_DerateReason_Init;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrB_Temp_Init' incorporates:
     *  Constant: '<S515>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_Temp_Init = KeINVR_T_MtrB_Temp;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrB_InvrtrTemp_Init' incorporates:
     *  Constant: '<S513>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_InvrtrTemp_Init = KeINVR_T_MtrB_InvrtrTemp;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrB_DC_Crnt_Init' incorporates:
     *  Constant: '<S507>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_DC_Crnt_Init = KeINVR_I_MtrB_DC_Crnt;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrB_DC_Volt_Init' incorporates:
     *  Constant: '<S516>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_DC_Volt_Init = KeINVR_U_MtrB_DC_Volt;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrB_6SOEnbl_Init' incorporates:
     *  Constant: '<S520>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_6SOEnbl_Init = KeINVR_e_MtrB_6SOEnbl_Init;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrB_CtrlBoard_Temp_Init' incorporates:
     *  Constant: '<S512>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_CtrlBoard_Temp_Init =
        KeINVR_T_MtrB_CtrlBoard_Temp;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrB_ClntIn_Temp_Init' incorporates:
     *  Constant: '<S510>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_ClntIn_Temp_Init = KeINVR_T_MtrB_ClntIn_Temp;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrB_ClntOut_Temp_Init' incorporates:
     *  Constant: '<S511>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_ClntOut_Temp_Init =
        KeINVR_T_MtrB_ClntOut_Temp;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrB_RotrTemp_Init' incorporates:
     *  Constant: '<S514>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_RotrTemp_Init = KeINVR_T_MtrB_RotrTemp;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrB_CapctrTemp_Init' incorporates:
     *  Constant: '<S509>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_CapctrTemp_Init = KeINVR_T_MtrB_CapctrTemp;

    /* SystemInitialize for SignalConversion generated from: '<S472>/EMModeReq_TCMDflt_Init' incorporates:
     *  Constant: '<S517>/Calib'
     */
    INVR_ac_B.OutportBufferForEMModeReq_TCMDflt_Init =
        KeINVR_e_EMModeReq_TCMDflt;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MCPB_CommFail_Init' incorporates:
     *  Constant: '<S506>/Constant'
     */
    INVR_ac_B.OutportBufferForMCPB_CommFail_Init = INVR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrBBusBarTemp_Init' incorporates:
     *  Constant: '<S508>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrBBusBarTemp_Init = KeINVR_T_MtrBBusBarTemp_Init;

    /* SystemInitialize for SignalConversion generated from: '<S472>/MtrB_Dschrge_Stat_Init' incorporates:
     *  Constant: '<S522>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrB_Dschrge_Stat_Init =
        KeINVR_e_MtrB_Dschrge_Stat_Init;

    /* SystemInitialize for S-Function (fcgen): '<S79>/FcnCallGen' incorporates:
     *  SubSystem: '<S79>/MotorC_INIT'
     */
    /* SystemInitialize for SignalConversion generated from: '<S473>/MtrC_InvrtrTemp_Init' incorporates:
     *  Constant: '<S529>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_InvrtrTemp_Init = KeINVR_T_MtrC_InvrtrTemp;

    /* SystemInitialize for SignalConversion generated from: '<S473>/MtrC_Temp_Init' incorporates:
     *  Constant: '<S531>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_Temp_Init = KeINVR_T_MtrC_Temp;

    /* SystemInitialize for SignalConversion generated from: '<S473>/MtrC_InvrtrSt_Init' incorporates:
     *  Constant: '<S537>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_InvrtrSt_Init = KeINVR_e_MtrC_InvrtrSt;

    /* SystemInitialize for SignalConversion generated from: '<S473>/MtrC_DC_Crnt_Init' incorporates:
     *  Constant: '<S526>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_DC_Crnt_Init = KeINVR_I_MtrC_DC_Crnt;

    /* SystemInitialize for SignalConversion generated from: '<S473>/MtrC_DC_Volt_Init' incorporates:
     *  Constant: '<S532>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_DC_Volt_Init = KeINVR_U_MtrC_DC_Volt;

    /* SystemInitialize for SignalConversion generated from: '<S473>/MtrC_6SOEnbl_Init' incorporates:
     *  Constant: '<S534>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_6SOEnbl_Init = KeINVR_e_MtrC_6SOEnbl_Init;

    /* SystemInitialize for SignalConversion generated from: '<S473>/MCPC_SPT_State_Init' incorporates:
     *  Constant: '<S533>/Calib'
     */
    INVR_ac_B.OutportBufferForMCPC_SPT_State_Init = KeINVR_e_MCPC_SPT_State;

    /* SystemInitialize for SignalConversion generated from: '<S473>/MCPC_HVILSts_Init' incorporates:
     *  Constant: '<S525>/Constant'
     */
    INVR_ac_B.OutportBufferForMCPC_HVILSts_Init = INVR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S473>/MtrC_DrtRsn_Init' incorporates:
     *  Constant: '<S535>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_DrtRsn_Init = KeINVR_e_MtrC_DerateReason_Init;

    /* SystemInitialize for SignalConversion generated from: '<S473>/MtrC_RotrTemp_Init' incorporates:
     *  Constant: '<S530>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_RotrTemp_Init = KeINVR_T_MtrC_RotrTemp;

    /* SystemInitialize for SignalConversion generated from: '<S473>/MtrC_CtrlBoard_Temp_Init' incorporates:
     *  Constant: '<S528>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_CtrlBoard_Temp_Init =
        KeINVR_T_MtrC_CtrlBoard_Temp;

    /* SystemInitialize for SignalConversion generated from: '<S473>/MtrCBusBarTemp_Init' incorporates:
     *  Constant: '<S527>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrCBusBarTemp_Init = KeINVR_T_MtrCBusBarTemp_Init;

    /* SystemInitialize for SignalConversion generated from: '<S473>/MtrC_Dschrge_Stat_Init' incorporates:
     *  Constant: '<S536>/Calib'
     */
    INVR_ac_B.OutportBufferForMtrC_Dschrge_Stat_Init =
        KeINVR_e_MtrC_Dschrge_Stat_Init;

    /* SystemInitialize for S-Function (fcgen): '<S79>/FcnCallGen' incorporates:
     *  SubSystem: '<S79>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S474>/VeINVR_e_MtrA_InvrtrSt_Out_Init' incorporates:
     *  Constant: '<S474>/Const1'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MtrA_InvrtrSt_O = INVR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S474>/VeINVR_e_MtrB_InvrtrSt_Out_Init' incorporates:
     *  Constant: '<S474>/Const2'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MtrB_InvrtrSt_O = INVR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S474>/VeINVR_e_InvrtrA_IsolStat_Out_Init' incorporates:
     *  Constant: '<S474>/Const3'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_InvrtrA_IsolSta = INVR_ac_ConstB.Const3;

    /* SystemInitialize for SignalConversion generated from: '<S474>/VeINVR_e_InvrtrB_IsolStat_Out_Init' incorporates:
     *  Constant: '<S474>/Const4'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_InvrtrB_IsolSta = INVR_ac_ConstB.Const4;

    /* SystemInitialize for SignalConversion generated from: '<S474>/VeINVR_e_MtrA_6SOEnbl_Out_Init' incorporates:
     *  Constant: '<S474>/Const13'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MtrA_6SOEnbl_Ou = INVR_ac_ConstB.Const13;

    /* SystemInitialize for SignalConversion generated from: '<S474>/VeINVR_e_MtrB_6SOEnbl_Out_Init' incorporates:
     *  Constant: '<S474>/Const14'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MtrB_6SOEnbl_Ou = INVR_ac_ConstB.Const14;

    /* SystemInitialize for SignalConversion generated from: '<S474>/VeINVR_e_MCPA_SPT_State_Out_Init' incorporates:
     *  Constant: '<S474>/Const15'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MCPA_SPT_State_ = INVR_ac_ConstB.Const15;

    /* SystemInitialize for SignalConversion generated from: '<S474>/VeINVR_e_MCPB_SPT_State_Out_Init' incorporates:
     *  Constant: '<S474>/Const16'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MCPB_SPT_State_ = INVR_ac_ConstB.Const16;

    /* SystemInitialize for SignalConversion generated from: '<S474>/VeINVR_e_P2ModeSts_Out_Init' incorporates:
     *  Constant: '<S474>/Const24'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_P2ModeSts_Out_I = INVR_ac_ConstB.Const24;

    /* SystemInitialize for SignalConversion generated from: '<S474>/VeINVR_e_MtrC_InvrtrSt_Out_Init' incorporates:
     *  Constant: '<S474>/Const34'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MtrC_InvrtrSt_O = INVR_ac_ConstB.Const34;

    /* SystemInitialize for SignalConversion generated from: '<S474>/VeINVR_e_MCPC_SPT_State_Out_Init' incorporates:
     *  Constant: '<S474>/Const37'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MCPC_SPT_State_ = INVR_ac_ConstB.Const37;

    /* SystemInitialize for SignalConversion generated from: '<S474>/VeINVR_e_MtrC_6SOEnbl_Out_Init' incorporates:
     *  Constant: '<S474>/Const40'
     */
    INVR_ac_B.OutportBufferForVeINVR_e_MtrC_6SOEnbl_Ou = INVR_ac_ConstB.Const40;

    /* End of SystemInitialize for S-Function (fcgen): '<S79>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MtrA_InvrtrSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeINVR_e_MtrA_InvrtrSt_Value(CeINVR_e_NormalPowerStageOff);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MtrB_InvrtrSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_2'
     */
    (void)Rte_Write_VeINVR_e_MtrB_InvrtrSt_Value(CeINVR_e_NormalPowerStageOff);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_InvrtrA_IsolStat' incorporates:
     *  Merge: '<Root>/Merge_Outport_3'
     */
    (void)Rte_Write_VeINVR_e_InvrtrA_IsolStat_Value(CeINVR_e_IsolUndetermined);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_InvrtrB_IsolStat' incorporates:
     *  Merge: '<Root>/Merge_Outport_4'
     */
    (void)Rte_Write_VeINVR_e_InvrtrB_IsolStat_Value(CeINVR_e_IsolUndetermined);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MtrA_6SOEnbl' incorporates:
     *  Merge: '<Root>/Merge_Outport_21'
     */
    (void)Rte_Write_VeINVR_e_MtrA_6SOEnbl_Value(CeINVR_e_ThreePS);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MtrB_6SOEnbl' incorporates:
     *  Merge: '<Root>/Merge_Outport_22'
     */
    (void)Rte_Write_VeINVR_e_MtrB_6SOEnbl_Value(CeINVR_e_ThreePS);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MCPA_SPT_State' incorporates:
     *  Merge: '<Root>/Merge_Outport_23'
     */
    (void)Rte_Write_VeINVR_e_MCPA_SPT_State_Value(CeINVR_e_Pending_SPT);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MCPB_SPT_State' incorporates:
     *  Merge: '<Root>/Merge_Outport_24'
     */
    (void)Rte_Write_VeINVR_e_MCPB_SPT_State_Value(CeINVR_e_Pending_SPT);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MtrB_TCMEMMdReq' incorporates:
     *  Merge: '<Root>/Merge_102'
     */
    (void)Rte_Write_VeINVR_e_MtrB_TCMEMMdReq_Value(CeINVR_e_NoControl_Inactvive);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_P2ModeSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_38'
     */
    (void)Rte_Write_VeINVR_e_P2ModeSts_Value(CeINVR_e_P2ModeStatus_Idle);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MCPA_HVILSts' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    (void)Rte_Write_VeINVR_e_MCPA_HVILSts_Value(CeHVTR_e_IntrlkNotSourced);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MCPB_HVILSts' incorporates:
     *  Merge: '<Root>/Merge_63'
     */
    (void)Rte_Write_VeINVR_e_MCPB_HVILSts_Value(CeHVTR_e_IntrlkNotSourced);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MtrA_DrtRsn' incorporates:
     *  Merge: '<Root>/Merge_45'
     */
    (void)Rte_Write_VeINVR_e_MtrA_DrtRsn_Value(CeINVR_e_DerateReason1);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MtrB_DrtRsn' incorporates:
     *  Merge: '<Root>/Merge_93'
     */
    (void)Rte_Write_VeINVR_e_MtrB_DrtRsn_Value(CeINVR_e_DerateReason1);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MtrC_InvrtrSt' incorporates:
     *  Merge: '<Root>/Merge_Outport_62'
     */
    (void)Rte_Write_VeINVR_e_MtrC_InvrtrSt_Value(CeINVR_e_NormalPowerStageOff);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MCPC_SPT_State' incorporates:
     *  Merge: '<Root>/Merge_Outport_65'
     */
    (void)Rte_Write_VeINVR_e_MCPC_SPT_State_Value(CeINVR_e_Pending_SPT);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MtrC_6SOEnbl' incorporates:
     *  Merge: '<Root>/Merge_Outport_68'
     */
    (void)Rte_Write_VeINVR_e_MtrC_6SOEnbl_Value(CeINVR_e_ThreePS);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MCPC_HVILSts' incorporates:
     *  Merge: '<Root>/Merge_109'
     */
    (void)Rte_Write_VeINVR_e_MCPC_HVILSts_Value(CeHVTR_e_IntrlkNotSourced);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MCPA_CommFail' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    (void)Rte_Write_VeINVR_e_MCPA_CommFail_Value(CeSRAR_e_CommFail_NoFault);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MCPB_CommFail' incorporates:
     *  Merge: '<Root>/Merge_61'
     */
    (void)Rte_Write_VeINVR_e_MCPB_CommFail_Value(CeSRAR_e_CommFail_NoFault);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MtrC_DrtRsn' incorporates:
     *  Merge: '<Root>/Merge_129'
     */
    (void)Rte_Write_VeINVR_e_MtrC_DrtRsn_Value(CeINVR_e_DerateReason1);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_BstCnvtrFailSts' incorporates:
     *  Merge: '<Root>/Merge_150'
     */
    (void)Rte_Write_VeINVR_e_BstCnvtrFailSts_Value(CeINVR_e_BstCnvFailStsNormal);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MtrA_Dschrge_Stat' incorporates:
     *  Merge: '<Root>/Merge_157'
     */
    (void)Rte_Write_VeINVR_e_MtrA_Dschrge_Stat_Value(CeINVR_e_AD_DISABLED);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MtrB_Dschrge_Stat' incorporates:
     *  Merge: '<Root>/Merge_159'
     */
    (void)Rte_Write_VeINVR_e_MtrB_Dschrge_Stat_Value(CeINVR_e_AD_DISABLED);

    /* SystemInitialize for Outport: '<Root>/VeINVR_e_MtrC_Dschrge_Stat' incorporates:
     *  Merge: '<Root>/Merge_161'
     */
    (void)Rte_Write_VeINVR_e_MtrC_Dschrge_Stat_Value(CeINVR_e_AD_DISABLED);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
