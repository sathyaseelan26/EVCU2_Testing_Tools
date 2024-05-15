/*
 * File: DFIB_ac.c
 *
 * Code generated for Simulink model 'DFIB_ac'.
 *
 * Model version                  : 1.830
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:22:50 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DFIB_ac.h"

/* Named constants for Chart: '<S18>/RTCProgramAlarmScheduler' */
#define DFIB_a_IN_RTC_PROGRAM_ALARM_ENABLE_STATE ((uint8)1U)
#define DFIB_ac_IN_RTC_PROGRAM_ALARM_IDLE_STATE ((uint8)2U)

/* Named constants for Chart: '<S18>/RTCProgramTimeScheduler' */
#define DFIB_ac_IN_RTC_PROGRAM_TIME_ENABLE_STATE ((uint8)1U)
#define DFIB_ac_IN_RTC_PROGRAM_TIME_IDLE_STATE ((uint8)2U)

/* Named constants for Chart: '<S7>/RTCInitReadScheduler' */
#define DFIB_ac_IN_RTC_INIT_STATE      ((uint8)1U)
#define DFIB_ac_IN_RTC_READ_STATE      ((uint8)2U)

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2019a.
//
// PROD Model Config Ver#19a.1 2/14/2020
//
//////////////////////////////////////////////////////////////////////////////////////
#define START_SEC_CONST_UNSPECIFIED_DFIB
#include "MemMap.h"

CONST(ADTRRTCTime, DFIB_VAR_INIT) DFIB_ac_rtZADTRRTCTime =
{
    0U,                                /* e_e_year */
    0U,                                /* e_e_month */
    0U,                                /* e_e_day */
    0U,                                /* e_e_hour */
    0U,                                /* e_e_minute */
    0U                                 /* e_e_second */
} ;                                    /* ADTRRTCTime ground */

#define STOP_SEC_CONST_UNSPECIFIED_DFIB
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_DFIB
#include "MemMap.h"

CONST(ADTRRTCSts, DFIB_VAR_INIT) DFIB_ac_rtZADTRRTCSts =
{
    {
        0U,                            /* e_e_year */
        0U,                            /* e_e_month */
        0U,                            /* e_e_day */
        0U,                            /* e_e_hour */
        0U,                            /* e_e_minute */
        0U                             /* e_e_second */
    },                                 /* e_e_time */
    RTC_NO_WAKEUP,                     /* e_e_wakeup_reason */

    {
        0U,                            /* e_e_enable_alarm */
        0U,                            /* e_e_enable_timer */
        0U,                            /* e_e_timer_second */
        0U,                            /* e_e_alarm_weekday */
        0U,                            /* e_e_alarm_day */
        0U,                            /* e_e_alarm_hour */
        0U                             /* e_e_alarm_minute */
    }                                  /* e_e_wakeup_config */
} ;                                    /* ADTRRTCSts ground */

#define STOP_SEC_CONST_UNSPECIFIED_DFIB
#include "MemMap.h"

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_DFIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(uint8, DFIB_VAR_INIT) KeDFIB_Cnt_RTCInitReadRtryNr = 5U;/* Referenced by: '<S9>/Calib' */
static volatile CONST(uint8, DFIB_VAR_INIT) KeDFIB_Cnt_RTCProgramAlarmRtryNr =
    5U;                                /* Referenced by: '<S21>/Calib' */
static volatile CONST(uint8, DFIB_VAR_INIT) KeDFIB_Cnt_RTCProgramTimeRtryNr = 5U;/* Referenced by: '<S22>/Calib' */
static volatile CONST(boolean, DFIB_VAR_INIT)
    KeDFIB_b_A2DFaultDetectedFromLLDStubEnbl = 0;/* Referenced by: '<S68>/Calib' */
static volatile CONST(boolean, DFIB_VAR_INIT)
    KeDFIB_b_ChargePortLockDisableStubEnbl = 0;/* Referenced by: '<S43>/Calib' */
static volatile CONST(boolean, DFIB_VAR_INIT)
    KeDFIB_b_ClearTrackingInfoService04StubEnbl = 0;/* Referenced by: '<S54>/Calib' */
static volatile CONST(boolean, DFIB_VAR_INIT) KeDFIB_b_DiagSystemDsblStubEnbl =
    0;                                 /* Referenced by: '<S55>/Calib' */
static volatile CONST(boolean, DFIB_VAR_INIT) KeDFIB_b_DsblDiagFailSafeStubEnbl =
    0;                                 /* Referenced by: '<S56>/Calib' */
static volatile CONST(boolean, DFIB_VAR_INIT) KeDFIB_b_EEProStatusStubEnbl = 0;/* Referenced by: '<S42>/Calib' */
static volatile CONST(boolean, DFIB_VAR_INIT)
    KeDFIB_b_Flashing_InProgressStubEnbl = 0;/* Referenced by: '<S57>/Calib' */
static volatile CONST(boolean, DFIB_VAR_INIT)
    KeDFIB_b_IsDiagGlobalConditionValidStubEnbl = 0;/* Referenced by: '<S64>/Calib' */
static volatile CONST(boolean, DFIB_VAR_INIT) KeDFIB_b_NonEmisMalfActvStubEnbl =
    0;                                 /* Referenced by: '<S58>/Calib' */
static volatile CONST(boolean, DFIB_VAR_INIT)
    KeDFIB_b_PostCodeClrDiagDsblStubEnbl = 0;/* Referenced by: '<S65>/Calib' */
static volatile CONST(boolean, DFIB_VAR_INIT) KeDFIB_b_SPT_StateStubEnbl = 0;/* Referenced by: '<S41>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_DFIB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DFIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, DFIB_VAR_INIT) VeDFIB_Cnt_RTCInitReadRtryCntr;/* '<S7>/RTCInitReadScheduler' */
static VAR(uint8, DFIB_VAR_INIT) VeDFIB_Cnt_RTCProgramAlarmRtryCntr;/* '<S18>/RTCProgramAlarmScheduler' */
static VAR(uint8, DFIB_VAR_INIT) VeDFIB_Cnt_RTCProgramTimeRtryCntr;/* '<S18>/RTCProgramTimeScheduler' */
static VAR(boolean, DFIB_VAR_INIT) VeDFIB_b_RTCInitEn;/* '<S7>/RTCInitReadScheduler' */
static VAR(boolean, DFIB_VAR_INIT) VeDFIB_b_RTCProgramAlarmEn;/* '<S18>/RTCProgramAlarmScheduler' */
static VAR(boolean, DFIB_VAR_INIT) VeDFIB_b_RTCProgramTimeEn;/* '<S18>/RTCProgramTimeScheduler' */
static VAR(boolean, DFIB_VAR_INIT) VeDFIB_b_RTCReadEn;/* '<S7>/RTCInitReadScheduler' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DFIB
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_DFIB
#include "MemMap.h"

CONST(ConstB_DFIB_ac_T, DFIB_VAR_INIT) DFIB_ac_ConstB =
{
    CeDFIR_MIL_Off                     /* '<S38>/Constant22' */
};

#define STOP_SEC_CONST_UNSPECIFIED_DFIB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DFIB
#include "MemMap.h"

VAR(B_DFIB_ac_T, DFIB_VAR_INIT) DFIB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DFIB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DFIB
#include "MemMap.h"

VAR(DW_DFIB_ac_T, DFIB_VAR_INIT) DFIB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DFIB
#include "MemMap.h"

static FUNC(void, DFIB_CODE_LOCAL) DFIB_ac_SwitchCaseActionSubsystem1(P2VAR
    (TeDFIB_e_RTCCallSts, AUTOMATIC, DFIB_VAR_INIT) rty_Out1);
static FUNC(void, DFIB_CODE_LOCAL) DFIB_ac_SwitchCaseActionSubsystem3(VAR(uint8,
    AUTOMATIC) rtu_RetryCounter, VAR(uint8, AUTOMATIC) rtu_RetryLimit, P2VAR
    (TeDFIB_e_RTCCallSts, AUTOMATIC, DFIB_VAR_INIT) rty_Out1);

/*
 * Output and update for action system:
 *    '<S23>/Switch Case Action Subsystem1'
 *    '<S24>/Switch Case Action Subsystem1'
 *    '<S7>/Switch Case Action Subsystem'
 */
static FUNC(void, DFIB_CODE_LOCAL) DFIB_ac_SwitchCaseActionSubsystem1(P2VAR
    (TeDFIB_e_RTCCallSts, AUTOMATIC, DFIB_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S27>/Out1' incorporates:
     *  Constant: '<S27>/Constant7'
     */
    *rty_Out1 = CeDFIB_e_RTCCallCompleteOK;
}

/*
 * Output and update for action system:
 *    '<S23>/Switch Case Action Subsystem3'
 *    '<S24>/Switch Case Action Subsystem3'
 *    '<S7>/Switch Case Action Subsystem2'
 */
static FUNC(void, DFIB_CODE_LOCAL) DFIB_ac_SwitchCaseActionSubsystem3(VAR(uint8,
    AUTOMATIC) rtu_RetryCounter, VAR(uint8, AUTOMATIC) rtu_RetryLimit, P2VAR
    (TeDFIB_e_RTCCallSts, AUTOMATIC, DFIB_VAR_INIT) rty_Out1)
{
    /* Switch: '<S29>/Switch' incorporates:
     *  Constant: '<S29>/Constant1'
     *  Constant: '<S29>/Constant9'
     *  RelationalOperator: '<S29>/Relational Operator'
     */
    if (rtu_RetryCounter >= rtu_RetryLimit)
    {
        *rty_Out1 = CeDFIB_e_RTCCallCompleteFailed;
    }
    else
    {
        *rty_Out1 = CeDFIB_e_RTCCallRunning;
    }

    /* End of Switch: '<S29>/Switch' */
}

/* Model step function for TID1 */
FUNC(void, DFIB_CODE) DFIB_FastTEF(void) /* Explicit Task: FastTEF */
{
    TeINVR_e_SPTState Switch_gp;
    uint8 rtb_TmpSignalConversionAtEE_RunTimeBlock;
    uint8 tmpRead_3;
    uint8 tmpRead_9;
    uint8 tmpRead_a;
    uint8 tmpRead_b;
    uint8 tmpRead_c;
    uint8 tmpRead_d;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_8;

    /* Inport: '<Root>/EE_PEDAL_SEN_0_ErrSts' */
    (void)Rte_Read_EE_PEDAL_SEN_0_ErrSts_VeBSWR_e_NvmWriteStatus(&tmpRead_d);

    /* Inport: '<Root>/EE_IMMOBMMKEY_4_ErrSts' */
    (void)Rte_Read_EE_IMMOBMMKEY_4_ErrSts_VeBSWR_e_NvmWriteStatus(&tmpRead_c);

    /* Inport: '<Root>/EE_RunTimeBlock2_4_ErrSts' */
    (void)Rte_Read_EE_RunTimeBlock2_4_ErrSts_VeBSWR_e_NvmWriteStatus(&tmpRead_b);

    /* Inport: '<Root>/EE_IMMOBYPASSCNTR_4_ErrSts' */
    (void)Rte_Read_EE_IMMOBYPASSCNTR_4_ErrSts_VeBSWR_e_NvmWriteStatus(&tmpRead_a);

    /* Inport: '<Root>/EE_IMMOBAUTHSTAT_4_ErrSts' */
    (void)Rte_Read_EE_IMMOBAUTHSTAT_4_ErrSts_VeBSWR_e_NvmWriteStatus(&tmpRead_9);

    /* Inport: '<Root>/VeADCR_b_A2DFaultDetectedFromLLD' */
    (void)
        Rte_Read_VeADCR_b_A2DFaultDetectedFromLLD_VeADCR_b_A2DFaultDetectedFromLLD
        (&tmpRead_8);

    /* Inport: '<Root>/VeDIDR_b_DiagSystemDsbl' */
    (void)Rte_Read_VeDIDR_b_DiagSystemDsbl_VeDIDR_b_DiagSystemDsbl(&tmpRead_7);

    /* Inport: '<Root>/VeDIDR_b_ClearTrackingInfoService04' */
    (void)
        Rte_Read_VeDIDR_b_ClearTrackingInfoService04_VeDIDR_b_ClearTrackingInfoService04
        (&tmpRead_6);

    /* Inport: '<Root>/VeDIDR_b_NonEmisMalfActv' */
    (void)Rte_Read_VeDIDR_b_NonEmisMalfActv_VeDIDR_b_NonEmisMalfActv(&tmpRead_5);

    /* Inport: '<Root>/VeDIDR_b_Flashing_InProgress' */
    (void)Rte_Read_VeDIDR_b_Flashing_InProgress_VeDIDR_b_Flashing_InProgress
        (&tmpRead_4);

    /* Inport: '<Root>/VeDCMB_b_ChargePortLockDisable' */
    (void)Rte_Read_VeDCMB_b_ChargePortLockDisable_VeDCMB_b_ChargePortLockDisable
        (&tmpRead_2);

    /* Inport: '<Root>/VeDCMB_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDCMB_b_DsblDiagFailSafe_VeDCMB_b_DsblDiagFailSafe
        (&tmpRead_1);

    /* Inport: '<Root>/VeDIDR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDIDR_b_PostCodeClrDiagDsbl_VeDIDR_b_PostCodeClrDiagDsbl
        (&tmpRead_0);

    /* Inport: '<Root>/VeDIDR_b_IsDiagGlobalConditionsValid' */
    (void)
        Rte_Read_VeDIDR_b_IsDiagGlobalConditionsValid_VeDIDR_b_IsDiagGlobalConditionsValid
        (&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/Interfaces'
     */
    /* SignalConversion generated from: '<S4>/EE_RunTimeBlock1_4_ErrSts' incorporates:
     *  Inport: '<Root>/EE_RunTimeBlock1_4_ErrSts'
     */
    (void)Rte_Read_EE_RunTimeBlock1_4_ErrSts_VeBSWR_e_NvmWriteStatus
        (&rtb_TmpSignalConversionAtEE_RunTimeBlock);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DFIB_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S35>/DFIB_FastTEF_StartCheckpoint' */
    Rte_Call_DFIB_FastTEF_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* SignalConversion generated from: '<S37>/VeDFIR_b_CANERRSTS_CANFD_1' */
    DFIB_ac_B.OutportBufferForVeDFIR_b_CANERRSTS_CANFD = false;

    /* SignalConversion generated from: '<S37>/VeDFIR_b_CANERRSTS_CANFD_11' */
    DFIB_ac_B.OutportBufferForVeDFIR_b_CANERRSTS_CAN_c = false;

    /* SignalConversion generated from: '<S37>/VeDFIR_b_CANERRSTS_CANFD_14' */
    DFIB_ac_B.OutportBufferForVeDFIR_b_CANERRSTS_CAN_i = false;

    /* SignalConversion generated from: '<S37>/VeDFIR_b_CANERRSTS_CANFD_3' */
    DFIB_ac_B.OutportBufferForVeDFIR_b_CANERRSTS_CAN_n = false;

    /* SignalConversion generated from: '<S37>/VeDFIR_b_CANERRSTS_CANFD_5' */
    DFIB_ac_B.OutportBufferForVeDFIR_b_CANERRSTS_CAN_e = false;

    /* SignalConversion generated from: '<S37>/VeDFIR_b_LocBPCM' */
    DFIB_ac_B.OutportBufferForVeDFIR_b_LocBPCM = false;

    /* SignalConversion generated from: '<S37>/VeDFIR_cnt_NumEmissionDTC' */
    DFIB_ac_B.OutportBufferForVeDFIR_cnt_NumEmissionDT = 0U;

    /* SignalConversion generated from: '<S37>/VeHWIO_I_Lv2PPawlMtrCrntDraw' */
    DFIB_ac_B.OutportBufferForVeHWIO_I_Lv2PPawlMtrCrnt = 0.0F;

    /* SignalConversion generated from: '<S37>/VeHWIO_U_Lv2PPMtrPosSnsrFB' */
    DFIB_ac_B.OutportBufferForVeHWIO_U_Lv2PPMtrPosSnsr = 0.0F;

    /* SignalConversion generated from: '<S37>/VeHWIO_b_OCDiagFA_HighTempCabinVlv' */
    DFIB_ac_B.OutportBufferForVeHWIO_b_OCDiagFA_HighTe = false;

    /* SignalConversion generated from: '<S37>/VeHWIO_b_STBDiagFA_HighTempCabinVlv' */
    DFIB_ac_B.OutportBufferForVeHWIO_b_STBDiagFA_HighT = false;

    /* SignalConversion generated from: '<S37>/VeHWIO_b_STGDiagFA_HighTempCabinVlv' */
    DFIB_ac_B.OutportBufferForVeHWIO_b_STGDiagFA_HighT = false;

    /* Switch: '<S44>/Switch' incorporates:
     *  Constant: '<S41>/Calib'
     *  Inport: '<Root>/VeDIDR_e_SPT_State'
     */
    if (KeDFIB_b_SPT_StateStubEnbl)
    {
        /* Switch: '<S44>/Switch' incorporates:
         *  Constant: '<S38>/Constant3'
         */
        Switch_gp = CeINVR_e_Pending_SPT;
    }
    else
    {
        (void)Rte_Read_VeDIDR_e_SPT_State_VeDIDR_e_SPT_State(&tmpRead_3);

        /* Switch: '<S44>/Switch' incorporates:
         *  DataTypeConversion: '<S38>/Data Type Conversion'
         *  Inport: '<Root>/VeDIDR_e_SPT_State'
         */
        Switch_gp = (TeINVR_e_SPTState)tmpRead_3;
    }

    /* End of Switch: '<S44>/Switch' */

    /* SignalConversion generated from: '<S37>/VeBSWR_b_AHCP_CoreFail' */
    DFIB_ac_B.OutportBufferForVeBSWR_b_AHCP_CoreFail = false;

    /* SignalConversion generated from: '<S37>/VeBSWR_b_ImpctDtctd_HVShtdwn' */
    DFIB_ac_B.OutportBufferForVeBSWR_b_ImpctDtctd_HVSh = false;

    /* SignalConversion generated from: '<S37>/VeBSWR_b_LimCheckingStatus' */
    DFIB_ac_B.OutportBufferForVeBSWR_b_LimCheckingStat = false;

    /* SignalConversion generated from: '<S37>/VeBSWR_b_LossCommwORC' */
    DFIB_ac_B.OutportBufferForVeBSWR_b_LossCommwORC = false;

    /* SignalConversion generated from: '<S37>/VeBSWR_b_MCPA_CoreFail' */
    DFIB_ac_B.OutportBufferForVeBSWR_b_MCPA_CoreFail = false;

    /* SignalConversion generated from: '<S37>/VeBSWR_b_MCPB_CoreFail' */
    DFIB_ac_B.OutportBufferForVeBSWR_b_MCPB_CoreFail = false;

    /* SignalConversion generated from: '<S37>/VeBSWR_b_TestDevicePresent' */
    DFIB_ac_B.OutportBufferForVeBSWR_b_TestDevicePrese = false;

    /* SignalConversion generated from: '<S37>/VeBSWR_b_VehDynaCMPwrRlyCktHi' */
    DFIB_ac_B.OutportBufferForVeBSWR_b_VehDynaCMPwrRly = false;

    /* SignalConversion generated from: '<S37>/VeBSWR_b_VehDynaCMPwrRlyCktLo' */
    DFIB_ac_B.OutportBufferForVeBSWR_b_VehDynaCMPwrR_f = false;

    /* SignalConversion generated from: '<S37>/VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt' */
    DFIB_ac_B.OutportBufferForVeBSWR_b_VehDynaCMPwrR_h = false;

    /* SignalConversion generated from: '<S37>/VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd' */
    DFIB_ac_B.OutportBufferForVeBSWR_b_VehDynaCMPwrR_i = false;

    /* SignalConversion generated from: '<S37>/VeBSWR_e_MIL_Request' incorporates:
     *  Constant: '<S38>/Constant22'
     */
    DFIB_ac_B.OutportBufferForVeBSWR_e_MIL_Request = DFIB_ac_ConstB.Constant22;

    /* SignalConversion generated from: '<S37>/VeBSWR_y_CodeRecCmplt_EEPROM' */
    DFIB_ac_B.OutportBufferForVeBSWR_y_CodeRecCmplt_EE = 0U;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeBSWR_b_AHCP_CoreFail' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_b_AHCP_CoreFail'
     */
    (void)Rte_Write_VeBSWR_b_AHCP_CoreFail_Value
        (DFIB_ac_B.OutportBufferForVeBSWR_b_AHCP_CoreFail);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* Outport: '<Root>/VeBSWR_b_ChargePortLockDisable' incorporates:
     *  Constant: '<S43>/Calib'
     *  SignalConversion generated from: '<S4>/VeBSWR_b_ChargePortLockDisable'
     *  Switch: '<S48>/Switch'
     */
    (void)Rte_Write_VeBSWR_b_ChargePortLockDisable_Value
        ((!KeDFIB_b_ChargePortLockDisableStubEnbl) && tmpRead_2);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeBSWR_b_ImpctDtctd_HVShtdwn' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_b_ImpctDtctd_HVShtdwn'
     */
    (void)Rte_Write_VeBSWR_b_ImpctDtctd_HVShtdwn_Value
        (DFIB_ac_B.OutportBufferForVeBSWR_b_ImpctDtctd_HVSh);

    /* Outport: '<Root>/VeBSWR_b_LimCheckingStatus' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_b_LimCheckingStatus'
     */
    (void)Rte_Write_VeBSWR_b_LimCheckingStatus_Value
        (DFIB_ac_B.OutportBufferForVeBSWR_b_LimCheckingStat);

    /* Outport: '<Root>/VeBSWR_b_LossCommwORC' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_b_LossCommwORC'
     */
    (void)Rte_Write_VeBSWR_b_LossCommwORC_Value
        (DFIB_ac_B.OutportBufferForVeBSWR_b_LossCommwORC);

    /* Outport: '<Root>/VeBSWR_b_MCPA_CoreFail' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_b_MCPA_CoreFail'
     */
    (void)Rte_Write_VeBSWR_b_MCPA_CoreFail_Value
        (DFIB_ac_B.OutportBufferForVeBSWR_b_MCPA_CoreFail);

    /* Outport: '<Root>/VeBSWR_b_MCPB_CoreFail' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_b_MCPB_CoreFail'
     */
    (void)Rte_Write_VeBSWR_b_MCPB_CoreFail_Value
        (DFIB_ac_B.OutportBufferForVeBSWR_b_MCPB_CoreFail);

    /* Outport: '<Root>/VeBSWR_b_TestDevicePresent' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_b_TestDevicePresent'
     */
    (void)Rte_Write_VeBSWR_b_TestDevicePresent_Value
        (DFIB_ac_B.OutportBufferForVeBSWR_b_TestDevicePrese);

    /* Outport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktHi' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_b_VehDynaCMPwrRlyCktHi'
     */
    (void)Rte_Write_VeBSWR_b_VehDynaCMPwrRlyCktHi_Value
        (DFIB_ac_B.OutportBufferForVeBSWR_b_VehDynaCMPwrRly);

    /* Outport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktLo' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_b_VehDynaCMPwrRlyCktLo'
     */
    (void)Rte_Write_VeBSWR_b_VehDynaCMPwrRlyCktLo_Value
        (DFIB_ac_B.OutportBufferForVeBSWR_b_VehDynaCMPwrR_f);

    /* Outport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt'
     */
    (void)Rte_Write_VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt_Value
        (DFIB_ac_B.OutportBufferForVeBSWR_b_VehDynaCMPwrR_h);

    /* Outport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd'
     */
    (void)Rte_Write_VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd_Value
        (DFIB_ac_B.OutportBufferForVeBSWR_b_VehDynaCMPwrR_i);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* Switch: '<S45>/Switch' incorporates:
     *  Constant: '<S38>/Constant18'
     *  Constant: '<S42>/Calib'
     */
    if (KeDFIB_b_EEProStatusStubEnbl)
    {
        tmpRead_3 = 0U;
    }
    else
    {
        tmpRead_3 = rtb_TmpSignalConversionAtEE_RunTimeBlock;
    }

    /* End of Switch: '<S45>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeBSWR_e_HvRpdShtdwnCmdEEProgStatus' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_e_HvRpdShtdwnCmdEEProgStatus'
     */
    (void)Rte_Write_VeBSWR_e_HvRpdShtdwnCmdEEProgStatus_Value(tmpRead_3);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* Switch: '<S49>/Switch' incorporates:
     *  Constant: '<S38>/Constant14'
     *  Constant: '<S42>/Calib'
     */
    if (KeDFIB_b_EEProStatusStubEnbl)
    {
        tmpRead_b = 0U;
    }

    /* End of Switch: '<S49>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeBSWR_e_ITIDLifetimeEEProgStatus' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_e_ITIDLifetimeEEProgStatus'
     */
    (void)Rte_Write_VeBSWR_e_ITIDLifetimeEEProgStatus_Value(tmpRead_b);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* Switch: '<S46>/Switch' incorporates:
     *  Constant: '<S38>/Constant9'
     *  Constant: '<S42>/Calib'
     */
    if (KeDFIB_b_EEProStatusStubEnbl)
    {
        tmpRead_9 = 0U;
    }

    /* End of Switch: '<S46>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeBSWR_e_ImmoAuthEEProgStatus' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_e_ImmoAuthEEProgStatus'
     */
    (void)Rte_Write_VeBSWR_e_ImmoAuthEEProgStatus_Value(tmpRead_9);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* Switch: '<S47>/Switch' incorporates:
     *  Constant: '<S38>/Constant13'
     *  Constant: '<S42>/Calib'
     */
    if (KeDFIB_b_EEProStatusStubEnbl)
    {
        tmpRead_a = 0U;
    }

    /* End of Switch: '<S47>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeBSWR_e_ImmoByPassCntrProgStatus' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_e_ImmoByPassCntrProgStatus'
     */
    (void)Rte_Write_VeBSWR_e_ImmoByPassCntrProgStatus_Value(tmpRead_a);

    /* Outport: '<Root>/VeBSWR_e_MIL_Request' incorporates:
     *  SignalConversion generated from: '<S37>/VeBSWR_e_MIL_Request'
     *  SignalConversion generated from: '<S4>/VeBSWR_e_MIL_Request'
     */
    (void)Rte_Write_VeBSWR_e_MIL_Request_Value
        (DFIB_ac_B.OutportBufferForVeBSWR_e_MIL_Request);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* Switch: '<S50>/Switch' incorporates:
     *  Constant: '<S38>/Constant15'
     *  Constant: '<S42>/Calib'
     */
    if (KeDFIB_b_EEProStatusStubEnbl)
    {
        tmpRead_c = 0U;
    }

    /* End of Switch: '<S50>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeBSWR_e_MMKeyEEProgStatus' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_e_MMKeyEEProgStatus'
     */
    (void)Rte_Write_VeBSWR_e_MMKeyEEProgStatus_Value(tmpRead_c);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* Switch: '<S51>/Switch' incorporates:
     *  Constant: '<S38>/Constant16'
     *  Constant: '<S42>/Calib'
     */
    if (KeDFIB_b_EEProStatusStubEnbl)
    {
        tmpRead_d = 0U;
    }

    /* End of Switch: '<S51>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeBSWR_e_PedalSensorEEProgStatus' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_e_PedalSensorEEProgStatus'
     */
    (void)Rte_Write_VeBSWR_e_PedalSensorEEProgStatus_Value(tmpRead_d);

    /* Outport: '<Root>/VeBSWR_e_SPT_State' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_e_SPT_State'
     *  Switch: '<S44>/Switch'
     */
    (void)Rte_Write_VeBSWR_e_SPT_State_Value(Switch_gp);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* Switch: '<S52>/Switch' incorporates:
     *  Constant: '<S38>/Constant17'
     *  Constant: '<S42>/Calib'
     */
    if (KeDFIB_b_EEProStatusStubEnbl)
    {
        rtb_TmpSignalConversionAtEE_RunTimeBlock = 0U;
    }

    /* End of Switch: '<S52>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeBSWR_e_SpdLimEEProgStatus' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_e_SpdLimEEProgStatus'
     */
    (void)Rte_Write_VeBSWR_e_SpdLimEEProgStatus_Value
        (rtb_TmpSignalConversionAtEE_RunTimeBlock);

    /* Outport: '<Root>/VeBSWR_y_CodeRecCmplt_EEPROM' incorporates:
     *  SignalConversion generated from: '<S4>/VeBSWR_y_CodeRecCmplt_EEPROM'
     */
    (void)Rte_Write_VeBSWR_y_CodeRecCmplt_EEPROM_Value
        (DFIB_ac_B.OutportBufferForVeBSWR_y_CodeRecCmplt_EE);

    /* Outport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_1' incorporates:
     *  SignalConversion generated from: '<S4>/VeDFIR_b_CANERRSTS_CANFD_1'
     */
    (void)Rte_Write_VeDFIR_b_CANERRSTS_CANFD_1_Value
        (DFIB_ac_B.OutportBufferForVeDFIR_b_CANERRSTS_CANFD);

    /* Outport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_11' incorporates:
     *  SignalConversion generated from: '<S4>/VeDFIR_b_CANERRSTS_CANFD_11'
     */
    (void)Rte_Write_VeDFIR_b_CANERRSTS_CANFD_11_Value
        (DFIB_ac_B.OutportBufferForVeDFIR_b_CANERRSTS_CAN_c);

    /* Outport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_14' incorporates:
     *  SignalConversion generated from: '<S4>/VeDFIR_b_CANERRSTS_CANFD_14'
     */
    (void)Rte_Write_VeDFIR_b_CANERRSTS_CANFD_14_Value
        (DFIB_ac_B.OutportBufferForVeDFIR_b_CANERRSTS_CAN_i);

    /* Outport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_3' incorporates:
     *  SignalConversion generated from: '<S4>/VeDFIR_b_CANERRSTS_CANFD_3'
     */
    (void)Rte_Write_VeDFIR_b_CANERRSTS_CANFD_3_Value
        (DFIB_ac_B.OutportBufferForVeDFIR_b_CANERRSTS_CAN_n);

    /* Outport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_5' incorporates:
     *  SignalConversion generated from: '<S4>/VeDFIR_b_CANERRSTS_CANFD_5'
     */
    (void)Rte_Write_VeDFIR_b_CANERRSTS_CANFD_5_Value
        (DFIB_ac_B.OutportBufferForVeDFIR_b_CANERRSTS_CAN_e);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* Outport: '<Root>/VeDFIR_b_ClearTrackingInfoService04' incorporates:
     *  Constant: '<S54>/Calib'
     *  SignalConversion generated from: '<S4>/VeDFIR_b_ClearTrackingInfoService04'
     *  Switch: '<S59>/Switch'
     */
    (void)Rte_Write_VeDFIR_b_ClearTrackingInfoService04_Value
        ((!KeDFIB_b_ClearTrackingInfoService04StubEnbl) && tmpRead_6);

    /* Outport: '<Root>/VeDFIR_b_DiagSystemDsbl' incorporates:
     *  Constant: '<S55>/Calib'
     *  SignalConversion generated from: '<S4>/VeDFIR_b_DiagSystemDsbl'
     *  Switch: '<S60>/Switch'
     */
    (void)Rte_Write_VeDFIR_b_DiagSystemDsbl_Value
        ((!KeDFIB_b_DiagSystemDsblStubEnbl) && tmpRead_7);

    /* Outport: '<Root>/VeDFIR_b_DsblDiagFailSafe' incorporates:
     *  Constant: '<S56>/Calib'
     *  SignalConversion generated from: '<S4>/VeDFIR_b_DsblDiagFailSafe'
     *  Switch: '<S61>/Switch'
     */
    (void)Rte_Write_VeDFIR_b_DsblDiagFailSafe_Value
        ((!KeDFIB_b_DsblDiagFailSafeStubEnbl) && tmpRead_1);

    /* Outport: '<Root>/VeDFIR_b_Flashing_InProgress' incorporates:
     *  Constant: '<S57>/Calib'
     *  SignalConversion generated from: '<S4>/VeDFIR_b_Flashing_InProgress'
     *  Switch: '<S62>/Switch'
     */
    (void)Rte_Write_VeDFIR_b_Flashing_InProgress_Value
        ((!KeDFIB_b_Flashing_InProgressStubEnbl) && tmpRead_4);

    /* Outputs for Atomic SubSystem: '<S39>/DiagInterfaces' */
    /* Outport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Constant: '<S64>/Calib'
     *  SignalConversion generated from: '<S4>/VeDFIR_b_IsDiagGlobalConditionValid'
     *  Switch: '<S66>/Switch'
     */
    (void)Rte_Write_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        ((KeDFIB_b_IsDiagGlobalConditionValidStubEnbl) || tmpRead);

    /* End of Outputs for SubSystem: '<S39>/DiagInterfaces' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeDFIR_b_LocBPCM' incorporates:
     *  SignalConversion generated from: '<S4>/VeDFIR_b_LocBPCM'
     */
    (void)Rte_Write_VeDFIR_b_LocBPCM_Value
        (DFIB_ac_B.OutportBufferForVeDFIR_b_LocBPCM);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* Outport: '<Root>/VeDFIR_b_NonEmisMalfActv' incorporates:
     *  Constant: '<S58>/Calib'
     *  SignalConversion generated from: '<S4>/VeDFIR_b_NonEmisMalfActv'
     *  Switch: '<S63>/Switch'
     */
    (void)Rte_Write_VeDFIR_b_NonEmisMalfActv_Value
        ((!KeDFIB_b_NonEmisMalfActvStubEnbl) && tmpRead_5);

    /* Outputs for Atomic SubSystem: '<S39>/DiagInterfaces' */
    /* Outport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Constant: '<S65>/Calib'
     *  SignalConversion generated from: '<S4>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  Switch: '<S67>/Switch'
     */
    (void)Rte_Write_VeDFIR_b_PostCodeClrDiagDsbl_Value
        ((!KeDFIB_b_PostCodeClrDiagDsblStubEnbl) && tmpRead_0);

    /* End of Outputs for SubSystem: '<S39>/DiagInterfaces' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeDFIR_cnt_NumEmissionDTC' incorporates:
     *  SignalConversion generated from: '<S4>/VeDFIR_cnt_NumEmissionDTC'
     */
    (void)Rte_Write_VeDFIR_cnt_NumEmissionDTC_Value
        (DFIB_ac_B.OutportBufferForVeDFIR_cnt_NumEmissionDT);

    /* Outport: '<Root>/VeHWIO_I_Lv2PPawlMtrCrntDraw' incorporates:
     *  SignalConversion generated from: '<S4>/VeHWIO_I_Lv2PPawlMtrCrntDraw'
     */
    (void)Rte_Write_VeHWIO_I_Lv2PPawlMtrCrntDraw_Value
        (DFIB_ac_B.OutportBufferForVeHWIO_I_Lv2PPawlMtrCrnt);

    /* Outport: '<Root>/VeHWIO_U_Lv2PPMtrPosSnsrFB' incorporates:
     *  SignalConversion generated from: '<S4>/VeHWIO_U_Lv2PPMtrPosSnsrFB'
     */
    (void)Rte_Write_VeHWIO_U_Lv2PPMtrPosSnsrFB_Value
        (DFIB_ac_B.OutportBufferForVeHWIO_U_Lv2PPMtrPosSnsr);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* Outport: '<Root>/VeHWIO_b_A2DFaultDetectedFromLLD' incorporates:
     *  Constant: '<S68>/Calib'
     *  SignalConversion generated from: '<S4>/VeHWIO_b_A2DFaultDetectedFromLLD'
     *  Switch: '<S69>/Switch'
     */
    (void)Rte_Write_VeHWIO_b_A2DFaultDetectedFromLLD_Value
        ((!KeDFIB_b_A2DFaultDetectedFromLLDStubEnbl) && tmpRead_8);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeHWIO_b_OCDiagFA_HighTempCabinVlv' incorporates:
     *  SignalConversion generated from: '<S4>/VeHWIO_b_OCDiagFA_HighTempCabinVlv'
     */
    (void)Rte_Write_VeHWIO_b_OCDiagFA_HighTempCabinVlv_Value
        (DFIB_ac_B.OutportBufferForVeHWIO_b_OCDiagFA_HighTe);

    /* Outport: '<Root>/VeHWIO_b_STBDiagFA_HighTempCabinVlv' incorporates:
     *  SignalConversion generated from: '<S4>/VeHWIO_b_STBDiagFA_HighTempCabinVlv'
     */
    (void)Rte_Write_VeHWIO_b_STBDiagFA_HighTempCabinVlv_Value
        (DFIB_ac_B.OutportBufferForVeHWIO_b_STBDiagFA_HighT);

    /* Outport: '<Root>/VeHWIO_b_STGDiagFA_HighTempCabinVlv' incorporates:
     *  SignalConversion generated from: '<S4>/VeHWIO_b_STGDiagFA_HighTempCabinVlv'
     */
    (void)Rte_Write_VeHWIO_b_STGDiagFA_HighTempCabinVlv_Value
        (DFIB_ac_B.OutportBufferForVeHWIO_b_STGDiagFA_HighT);

    /* Outputs for Atomic SubSystem: '<S4>/DFIB_FastTEF_StopCheckpoint' */
    /* FunctionCaller: '<S36>/DFIB_FastTEF_StopCheckpoint' */
    Rte_Call_DFIB_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S4>/DFIB_FastTEF_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model step function for TID2 */
FUNC(void, DFIB_CODE) DFIB_MedTEB(void) /* Explicit Task: MedTEB */
{
    ADTRRTCTime rtb_ProgramRTCTime_o1;
    ADTRRTCWakeupConfig rtb_ProgramRTCWakeup_o1;
    sint32 tmp;
    Std_ReturnType rtb_ProgramRTCWakeup_o2;
    boolean rtb_OR1;
    boolean rtb_OR1_p;
    boolean rtb_TmpSignalConversionAtVeAPMR_b_Enable;
    boolean rtb_TmpSignalConversionAtVePLTR_b_RTCPro;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/DFIB_Runnable10ms'
     */
    /* SignalConversion generated from: '<S2>/VeAPMR_b_EnableAlarm' incorporates:
     *  Inport: '<Root>/VeAPMR_b_EnableAlarm'
     */
    (void)Rte_Read_VeAPMR_b_EnableAlarm_Value
        (&rtb_TmpSignalConversionAtVeAPMR_b_Enable);

    /* SignalConversion generated from: '<S2>/VePLTR_b_RTCProgramTimeEn' incorporates:
     *  Inport: '<Root>/VePLTR_b_RTCProgramTimeEn'
     */
    (void)Rte_Read_VePLTR_b_RTCProgramTimeEn_Value
        (&rtb_TmpSignalConversionAtVePLTR_b_RTCPro);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/DFIB_FastTEB_StartCheckpoint'
     */
    /* FunctionCaller: '<S16>/DFIB_FastTEB_StartCheckpoint' */
    Rte_Call_DFIB_FastTEB_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Function-Call Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S18>/EdgeRising_F2T' */
    /* Logic: '<S19>/OR1' incorporates:
     *  UnitDelay: '<S19>/Unit Delay'
     */
    rtb_OR1_p = !DFIB_ac_DW.UnitDelay_DSTATE_c;

    /* Update for UnitDelay: '<S19>/Unit Delay' */
    DFIB_ac_DW.UnitDelay_DSTATE_c = rtb_TmpSignalConversionAtVeAPMR_b_Enable;

    /* End of Outputs for SubSystem: '<S18>/EdgeRising_F2T' */

    /* Outputs for Atomic SubSystem: '<S18>/EdgeRising_F2T1' */
    /* Logic: '<S20>/OR1' incorporates:
     *  UnitDelay: '<S20>/Unit Delay'
     */
    rtb_OR1 = !DFIB_ac_DW.UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    DFIB_ac_DW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtVePLTR_b_RTCPro;

    /* End of Outputs for SubSystem: '<S18>/EdgeRising_F2T1' */

    /* Chart: '<S18>/RTCProgramAlarmScheduler' incorporates:
     *  Constant: '<S21>/Calib'
     *  Logic: '<S19>/AND'
     *  UnitDelay: '<S18>/Unit Delay2'
     */
    /* Gateway: DFIB_Runnable10ms/Function-Call
       Subsystem/RTCProgramAlarmScheduler */
    /* During: DFIB_Runnable10ms/Function-Call
       Subsystem/RTCProgramAlarmScheduler */
    if (((uint32)DFIB_ac_DW.is_active_c1_DFIB_ac) == 0U)
    {
        /* Entry: DFIB_Runnable10ms/Function-Call
           Subsystem/RTCProgramAlarmScheduler */
        DFIB_ac_DW.is_active_c1_DFIB_ac = 1U;

        /* Entry Internal: DFIB_Runnable10ms/Function-Call
           Subsystem/RTCProgramAlarmScheduler */
        /* Transition: '<S25>:646' */
        DFIB_ac_DW.is_c1_DFIB_ac = DFIB_ac_IN_RTC_PROGRAM_ALARM_IDLE_STATE;

        /* Entry 'RTC_PROGRAM_ALARM_IDLE_STATE': '<S25>:645' */
        VeDFIB_b_RTCProgramAlarmEn = false;
    }
    else if (((uint32)DFIB_ac_DW.is_c1_DFIB_ac) ==
             DFIB_a_IN_RTC_PROGRAM_ALARM_ENABLE_STATE)
    {
        /* During 'RTC_PROGRAM_ALARM_ENABLE_STATE': '<S25>:653' */
        if ((((uint32)DFIB_ac_DW.UnitDelay2_DSTATE) == CeDFIB_e_E_OK) ||
                (VeDFIB_Cnt_RTCProgramAlarmRtryCntr >
                 KeDFIB_Cnt_RTCProgramAlarmRtryNr))
        {
            /* Transition: '<S25>:663' */
            DFIB_ac_DW.is_c1_DFIB_ac = DFIB_ac_IN_RTC_PROGRAM_ALARM_IDLE_STATE;

            /* Entry 'RTC_PROGRAM_ALARM_IDLE_STATE': '<S25>:645' */
            VeDFIB_b_RTCProgramAlarmEn = false;
        }
        else
        {
            VeDFIB_b_RTCProgramAlarmEn = true;
            tmp = ((sint32)VeDFIB_Cnt_RTCProgramAlarmRtryCntr) + 1;
            if ((((sint32)VeDFIB_Cnt_RTCProgramAlarmRtryCntr) + 1) > 255)
            {
                tmp = 255;
            }

            VeDFIB_Cnt_RTCProgramAlarmRtryCntr = (uint8)tmp;
        }
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S18>/EdgeRising_F2T' */
        /* During 'RTC_PROGRAM_ALARM_IDLE_STATE': '<S25>:645' */
        if (rtb_TmpSignalConversionAtVeAPMR_b_Enable && rtb_OR1_p)
        {
            /* Transition: '<S25>:693' */
            VeDFIB_Cnt_RTCProgramAlarmRtryCntr = 0U;
            DFIB_ac_DW.is_c1_DFIB_ac = DFIB_a_IN_RTC_PROGRAM_ALARM_ENABLE_STATE;

            /* Entry 'RTC_PROGRAM_ALARM_ENABLE_STATE': '<S25>:653' */
            VeDFIB_b_RTCProgramAlarmEn = true;
            tmp = ((sint32)VeDFIB_Cnt_RTCProgramAlarmRtryCntr) + 1;
            if ((((sint32)VeDFIB_Cnt_RTCProgramAlarmRtryCntr) + 1) > 255)
            {
                tmp = 255;
            }

            VeDFIB_Cnt_RTCProgramAlarmRtryCntr = (uint8)tmp;
        }
        else
        {
            VeDFIB_b_RTCProgramAlarmEn = false;
        }

        /* End of Outputs for SubSystem: '<S18>/EdgeRising_F2T' */
    }

    /* End of Chart: '<S18>/RTCProgramAlarmScheduler' */

    /* Outputs for Enabled SubSystem: '<S18>/ProgramRTCWakeupSubsystem' incorporates:
     *  EnablePort: '<S24>/Enable'
     */
    if (VeDFIB_b_RTCProgramAlarmEn)
    {
        /* FunctionCaller: '<S24>/ProgramRTCWakeup' incorporates:
         *  BusCreator: '<S24>/Bus Creator'
         *  Constant: '<S24>/DisableTimer'
         *  Constant: '<S24>/EnableAlarm'
         *  Constant: '<S24>/TimerSecond'
         *  Constant: '<S24>/WeekdayDisable'
         *  Inport: '<Root>/VeAPMR_tdy_AlarmDay'
         *  Inport: '<Root>/VeAPMR_thr_AlarmHours'
         *  Inport: '<Root>/VeAPMR_tm_AlarmMinutes'
         */
        (void)Rte_Read_VeAPMR_tm_AlarmMinutes_Value
            (&rtb_ProgramRTCWakeup_o1.e_e_alarm_minute);
        (void)Rte_Read_VeAPMR_thr_AlarmHours_Value
            (&rtb_ProgramRTCWakeup_o1.e_e_alarm_hour);
        (void)Rte_Read_VeAPMR_tdy_AlarmDay_Value
            (&rtb_ProgramRTCWakeup_o1.e_e_alarm_day);
        rtb_ProgramRTCWakeup_o1.e_e_enable_alarm = 1U;
        rtb_ProgramRTCWakeup_o1.e_e_enable_timer = 0U;
        rtb_ProgramRTCWakeup_o1.e_e_timer_second = 1U;
        rtb_ProgramRTCWakeup_o1.e_e_alarm_weekday = MAX_uint8_T;

        /* FunctionCaller: '<S24>/ProgramRTCWakeup' */
        rtb_ProgramRTCWakeup_o2 = Rte_Call_ProgramRTCWakeup_ProgramRTCWakeup
            (&rtb_ProgramRTCWakeup_o1);

        /* DataTypeConversion: '<S24>/Data Type Conversion' */
        DFIB_ac_B.DataTypeConversion_f = (TeDFIB_e_RTCErrors)
            rtb_ProgramRTCWakeup_o2;

        /* SwitchCase: '<S24>/Switch Case1' incorporates:
         *  Constant: '<S21>/Calib'
         *  DataTypeConversion: '<S24>/Data Type Conversion'
         */
        if (((uint32)DFIB_ac_B.DataTypeConversion_f) == CeDFIB_e_E_OK)
        {
            /* Outputs for IfAction SubSystem: '<S24>/Switch Case Action Subsystem1' incorporates:
             *  ActionPort: '<S31>/Action Port'
             */
            DFIB_ac_SwitchCaseActionSubsystem1(&DFIB_ac_B.Merge8_o);

            /* End of Outputs for SubSystem: '<S24>/Switch Case Action Subsystem1' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S24>/Switch Case Action Subsystem3' incorporates:
             *  ActionPort: '<S33>/Action Port'
             */
            DFIB_ac_SwitchCaseActionSubsystem3
                (VeDFIB_Cnt_RTCProgramAlarmRtryCntr,
                 KeDFIB_Cnt_RTCProgramAlarmRtryNr, &DFIB_ac_B.Merge8_o);

            /* End of Outputs for SubSystem: '<S24>/Switch Case Action Subsystem3' */
        }

        /* End of SwitchCase: '<S24>/Switch Case1' */

        /* SwitchCase: '<S24>/Switch Case2' incorporates:
         *  Merge: '<S24>/Merge8'
         */
        switch (DFIB_ac_B.Merge8_o)
        {
          case CeDFIB_e_RTCCallCompleteOK:
            /* Outputs for IfAction SubSystem: '<S24>/Switch Case Action Subsystem2' incorporates:
             *  ActionPort: '<S32>/Action Port'
             */
            /* Outport: '<Root>/VeDFIB_b_RTCChipErr' incorporates:
             *  Constant: '<S32>/Constant'
             */
            (void)Rte_Write_VeDFIB_b_RTCChipErr_Value(false);

            /* End of Outputs for SubSystem: '<S24>/Switch Case Action Subsystem2' */
            break;

          case CeDFIB_e_RTCCallCompleteFailed:
            /* Outputs for IfAction SubSystem: '<S24>/Switch Case Action Subsystem4' incorporates:
             *  ActionPort: '<S34>/Action Port'
             */
            /* Outport: '<Root>/VeDFIB_b_RTCChipErr' incorporates:
             *  Constant: '<S34>/Constant'
             */
            (void)Rte_Write_VeDFIB_b_RTCChipErr_Value(true);

            /* End of Outputs for SubSystem: '<S24>/Switch Case Action Subsystem4' */
            break;

          default:
            /* no actions */
            break;
        }

        /* End of SwitchCase: '<S24>/Switch Case2' */
    }

    /* End of Outputs for SubSystem: '<S18>/ProgramRTCWakeupSubsystem' */

    /* Chart: '<S18>/RTCProgramTimeScheduler' incorporates:
     *  Constant: '<S22>/Calib'
     *  Logic: '<S20>/AND'
     *  UnitDelay: '<S18>/Unit Delay3'
     */
    /* Gateway: DFIB_Runnable10ms/Function-Call
       Subsystem/RTCProgramTimeScheduler */
    /* During: DFIB_Runnable10ms/Function-Call
       Subsystem/RTCProgramTimeScheduler */
    if (((uint32)DFIB_ac_DW.is_active_c2_DFIB_ac) == 0U)
    {
        /* Entry: DFIB_Runnable10ms/Function-Call
           Subsystem/RTCProgramTimeScheduler */
        DFIB_ac_DW.is_active_c2_DFIB_ac = 1U;

        /* Entry Internal: DFIB_Runnable10ms/Function-Call
           Subsystem/RTCProgramTimeScheduler */
        /* Transition: '<S26>:646' */
        DFIB_ac_DW.is_c2_DFIB_ac = DFIB_ac_IN_RTC_PROGRAM_TIME_IDLE_STATE;

        /* Entry 'RTC_PROGRAM_TIME_IDLE_STATE': '<S26>:645' */
        VeDFIB_b_RTCProgramTimeEn = false;
    }
    else if (((uint32)DFIB_ac_DW.is_c2_DFIB_ac) ==
             DFIB_ac_IN_RTC_PROGRAM_TIME_ENABLE_STATE)
    {
        /* During 'RTC_PROGRAM_TIME_ENABLE_STATE': '<S26>:653' */
        if ((((uint32)DFIB_ac_DW.UnitDelay3_DSTATE) == CeDFIB_e_E_OK) ||
                (VeDFIB_Cnt_RTCProgramTimeRtryCntr >
                 KeDFIB_Cnt_RTCProgramTimeRtryNr))
        {
            /* Transition: '<S26>:663' */
            DFIB_ac_DW.is_c2_DFIB_ac = DFIB_ac_IN_RTC_PROGRAM_TIME_IDLE_STATE;

            /* Entry 'RTC_PROGRAM_TIME_IDLE_STATE': '<S26>:645' */
            VeDFIB_b_RTCProgramTimeEn = false;
        }
        else
        {
            VeDFIB_b_RTCProgramTimeEn = true;
            tmp = ((sint32)VeDFIB_Cnt_RTCProgramTimeRtryCntr) + 1;
            if ((((sint32)VeDFIB_Cnt_RTCProgramTimeRtryCntr) + 1) > 255)
            {
                tmp = 255;
            }

            VeDFIB_Cnt_RTCProgramTimeRtryCntr = (uint8)tmp;
        }
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S18>/EdgeRising_F2T1' */
        /* During 'RTC_PROGRAM_TIME_IDLE_STATE': '<S26>:645' */
        if (rtb_TmpSignalConversionAtVePLTR_b_RTCPro && rtb_OR1)
        {
            /* Transition: '<S26>:693' */
            VeDFIB_Cnt_RTCProgramTimeRtryCntr = 0U;
            DFIB_ac_DW.is_c2_DFIB_ac = DFIB_ac_IN_RTC_PROGRAM_TIME_ENABLE_STATE;

            /* Entry 'RTC_PROGRAM_TIME_ENABLE_STATE': '<S26>:653' */
            VeDFIB_b_RTCProgramTimeEn = true;
            tmp = ((sint32)VeDFIB_Cnt_RTCProgramTimeRtryCntr) + 1;
            if ((((sint32)VeDFIB_Cnt_RTCProgramTimeRtryCntr) + 1) > 255)
            {
                tmp = 255;
            }

            VeDFIB_Cnt_RTCProgramTimeRtryCntr = (uint8)tmp;
        }
        else
        {
            VeDFIB_b_RTCProgramTimeEn = false;
        }

        /* End of Outputs for SubSystem: '<S18>/EdgeRising_F2T1' */
    }

    /* End of Chart: '<S18>/RTCProgramTimeScheduler' */

    /* Outputs for Enabled SubSystem: '<S18>/ProgramRTCTimeSubsystem' incorporates:
     *  EnablePort: '<S23>/Enable'
     */
    if (VeDFIB_b_RTCProgramTimeEn)
    {
        /* FunctionCaller: '<S23>/ProgramRTCTime' incorporates:
         *  Inport: '<Root>/VePLTR_t_TimeSeconds'
         *  Inport: '<Root>/VePLTR_tdy_TimeDay'
         *  Inport: '<Root>/VePLTR_thr_TimeHours'
         *  Inport: '<Root>/VePLTR_tm_TimeMinutes'
         *  Inport: '<Root>/VePLTR_tmt_TimeMonth'
         *  Inport: '<Root>/VePLTR_tyr_TimeYear'
         */
        (void)Rte_Read_VePLTR_t_TimeSeconds_Value
            (&rtb_ProgramRTCTime_o1.e_e_second);
        (void)Rte_Read_VePLTR_tm_TimeMinutes_Value
            (&rtb_ProgramRTCTime_o1.e_e_minute);
        (void)Rte_Read_VePLTR_thr_TimeHours_Value
            (&rtb_ProgramRTCTime_o1.e_e_hour);
        (void)Rte_Read_VePLTR_tdy_TimeDay_Value(&rtb_ProgramRTCTime_o1.e_e_day);
        (void)Rte_Read_VePLTR_tmt_TimeMonth_Value
            (&rtb_ProgramRTCTime_o1.e_e_month);
        (void)Rte_Read_VePLTR_tyr_TimeYear_Value(&rtb_ProgramRTCTime_o1.e_e_year);

        /* FunctionCaller: '<S23>/ProgramRTCTime' */
        rtb_ProgramRTCWakeup_o2 = Rte_Call_ProgramRTCTime_ProgramRTCTime
            (&rtb_ProgramRTCTime_o1);

        /* DataTypeConversion: '<S23>/Data Type Conversion' */
        DFIB_ac_B.DataTypeConversion_n = (TeDFIB_e_RTCErrors)
            rtb_ProgramRTCWakeup_o2;

        /* SwitchCase: '<S23>/Switch Case1' incorporates:
         *  Constant: '<S22>/Calib'
         *  DataTypeConversion: '<S23>/Data Type Conversion'
         */
        if (((uint32)DFIB_ac_B.DataTypeConversion_n) == CeDFIB_e_E_OK)
        {
            /* Outputs for IfAction SubSystem: '<S23>/Switch Case Action Subsystem1' incorporates:
             *  ActionPort: '<S27>/Action Port'
             */
            DFIB_ac_SwitchCaseActionSubsystem1(&DFIB_ac_B.Merge8_g);

            /* End of Outputs for SubSystem: '<S23>/Switch Case Action Subsystem1' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S23>/Switch Case Action Subsystem3' incorporates:
             *  ActionPort: '<S29>/Action Port'
             */
            DFIB_ac_SwitchCaseActionSubsystem3(VeDFIB_Cnt_RTCProgramTimeRtryCntr,
                KeDFIB_Cnt_RTCProgramTimeRtryNr, &DFIB_ac_B.Merge8_g);

            /* End of Outputs for SubSystem: '<S23>/Switch Case Action Subsystem3' */
        }

        /* End of SwitchCase: '<S23>/Switch Case1' */

        /* SwitchCase: '<S23>/Switch Case2' incorporates:
         *  Merge: '<S23>/Merge8'
         */
        switch (DFIB_ac_B.Merge8_g)
        {
          case CeDFIB_e_RTCCallCompleteOK:
            /* Outputs for IfAction SubSystem: '<S23>/Switch Case Action Subsystem2' incorporates:
             *  ActionPort: '<S28>/Action Port'
             */
            /* Outport: '<Root>/VeDFIB_b_RTCChipErr' incorporates:
             *  Constant: '<S28>/Constant'
             */
            (void)Rte_Write_VeDFIB_b_RTCChipErr_Value(false);

            /* End of Outputs for SubSystem: '<S23>/Switch Case Action Subsystem2' */
            break;

          case CeDFIB_e_RTCCallCompleteFailed:
            /* Outputs for IfAction SubSystem: '<S23>/Switch Case Action Subsystem4' incorporates:
             *  ActionPort: '<S30>/Action Port'
             */
            /* Outport: '<Root>/VeDFIB_b_RTCChipErr' incorporates:
             *  Constant: '<S30>/Constant'
             */
            (void)Rte_Write_VeDFIB_b_RTCChipErr_Value(true);

            /* End of Outputs for SubSystem: '<S23>/Switch Case Action Subsystem4' */
            break;

          default:
            /* no actions */
            break;
        }

        /* End of SwitchCase: '<S23>/Switch Case2' */
    }

    /* End of Outputs for SubSystem: '<S18>/ProgramRTCTimeSubsystem' */

    /* Update for UnitDelay: '<S18>/Unit Delay2' incorporates:
     *  DataTypeConversion: '<S24>/Data Type Conversion'
     */
    DFIB_ac_DW.UnitDelay2_DSTATE = DFIB_ac_B.DataTypeConversion_f;

    /* Update for UnitDelay: '<S18>/Unit Delay3' incorporates:
     *  DataTypeConversion: '<S23>/Data Type Conversion'
     */
    DFIB_ac_DW.UnitDelay3_DSTATE = DFIB_ac_B.DataTypeConversion_n;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeDFIB_e_RTCProgramTimeSts' incorporates:
     *  Merge: '<S23>/Merge8'
     *  SignalConversion generated from: '<S2>/VeDFIB_e_RTCProgramTimeSts'
     */
    (void)Rte_Write_VeDFIB_e_RTCProgramTimeSts_Value(DFIB_ac_B.Merge8_g);

    /* Outport: '<Root>/VeDFIB_e_RTCProgramWakeupError' incorporates:
     *  Merge: '<S24>/Merge8'
     *  SignalConversion generated from: '<S2>/VeDFIB_e_RTCProgramWakeupSts'
     */
    (void)Rte_Write_VeDFIB_e_RTCProgramWakeupError_Value(DFIB_ac_B.Merge8_o);

    /* Outputs for Atomic SubSystem: '<S2>/DFIB_FastTEB_StopCheckpoint' */
    /* FunctionCaller: '<S17>/DFIB_FastTEB_StopCheckpoint' */
    Rte_Call_DFIB_FastTEB_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S2>/DFIB_FastTEB_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID3 */
FUNC(void, DFIB_CODE) DFIB_MedTEH(void) /* Explicit Task: MedTEH */
{
    ADTRRTCSts rtb_RTCStatus;
    ADTRRTCTime rtb_ReadRTCTime_o1;
    sint32 tmp;
    Std_ReturnType rtb_FunctionCaller_o2;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/DFIB_Runnable100ms'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DFIB_MedTEH_StartCheckpoint'
     */
    /* FunctionCaller: '<S5>/DFIB_MedTEH_StartCheckpoint' */
    Rte_Call_DFIB_MedTEH_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Function-Call Subsystem'
     */
    /* Chart: '<S7>/RTCInitReadScheduler' incorporates:
     *  Constant: '<S9>/Calib'
     *  UnitDelay: '<S7>/Unit Delay'
     *  UnitDelay: '<S7>/Unit Delay1'
     */
    /* Gateway: DFIB_Runnable100ms/Function-Call
       Subsystem/RTCInitReadScheduler */
    /* During: DFIB_Runnable100ms/Function-Call
       Subsystem/RTCInitReadScheduler */
    if (((uint32)DFIB_ac_DW.is_active_c3_DFIB_ac) == 0U)
    {
        /* Entry: DFIB_Runnable100ms/Function-Call
           Subsystem/RTCInitReadScheduler */
        DFIB_ac_DW.is_active_c3_DFIB_ac = 1U;

        /* Entry Internal: DFIB_Runnable100ms/Function-Call
           Subsystem/RTCInitReadScheduler */
        /* Transition: '<S10>:646' */
        VeDFIB_Cnt_RTCInitReadRtryCntr = 0U;
        DFIB_ac_DW.is_c3_DFIB_ac = DFIB_ac_IN_RTC_INIT_STATE;

        /* Entry 'RTC_INIT_STATE': '<S10>:645' */
        VeDFIB_b_RTCInitEn = true;
        VeDFIB_b_RTCReadEn = false;
        tmp = ((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1;
        if ((((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1) > 255)
        {
            tmp = 255;
        }

        VeDFIB_Cnt_RTCInitReadRtryCntr = (uint8)tmp;
    }
    else if (((uint32)DFIB_ac_DW.is_c3_DFIB_ac) == DFIB_ac_IN_RTC_INIT_STATE)
    {
        /* During 'RTC_INIT_STATE': '<S10>:645' */
        if (((uint32)DFIB_ac_DW.UnitDelay_DSTATE_g) == CeDFIB_e_E_OK)
        {
            /* Transition: '<S10>:659' */
            VeDFIB_Cnt_RTCInitReadRtryCntr = 0U;
            DFIB_ac_DW.is_c3_DFIB_ac = DFIB_ac_IN_RTC_READ_STATE;

            /* Entry 'RTC_READ_STATE': '<S10>:653' */
            VeDFIB_b_RTCInitEn = false;
            VeDFIB_b_RTCReadEn = true;
            tmp = ((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1;
            if ((((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1) > 255)
            {
                tmp = 255;
            }

            VeDFIB_Cnt_RTCInitReadRtryCntr = (uint8)tmp;
        }
        else if (VeDFIB_Cnt_RTCInitReadRtryCntr > KeDFIB_Cnt_RTCInitReadRtryNr)
        {
            /* Transition: '<S10>:691' */
            VeDFIB_Cnt_RTCInitReadRtryCntr = KeDFIB_Cnt_RTCInitReadRtryNr;
            DFIB_ac_DW.is_c3_DFIB_ac = DFIB_ac_IN_RTC_INIT_STATE;

            /* Entry 'RTC_INIT_STATE': '<S10>:645' */
            VeDFIB_b_RTCInitEn = true;
            VeDFIB_b_RTCReadEn = false;
            tmp = ((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1;
            if ((((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1) > 255)
            {
                tmp = 255;
            }

            VeDFIB_Cnt_RTCInitReadRtryCntr = (uint8)tmp;
        }
        else
        {
            VeDFIB_b_RTCInitEn = true;
            VeDFIB_b_RTCReadEn = false;
            tmp = ((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1;
            if ((((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1) > 255)
            {
                tmp = 255;
            }

            VeDFIB_Cnt_RTCInitReadRtryCntr = (uint8)tmp;
        }
    }
    else
    {
        /* During 'RTC_READ_STATE': '<S10>:653' */
        if (((uint32)DFIB_ac_DW.UnitDelay1_DSTATE) == CeDFIB_e_E_OK)
        {
            /* Transition: '<S10>:683' */
            VeDFIB_Cnt_RTCInitReadRtryCntr = 0U;
            DFIB_ac_DW.is_c3_DFIB_ac = DFIB_ac_IN_RTC_READ_STATE;

            /* Entry 'RTC_READ_STATE': '<S10>:653' */
            VeDFIB_b_RTCInitEn = false;
            VeDFIB_b_RTCReadEn = true;
            tmp = ((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1;
            if ((((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1) > 255)
            {
                tmp = 255;
            }

            VeDFIB_Cnt_RTCInitReadRtryCntr = (uint8)tmp;
        }
        else if (VeDFIB_Cnt_RTCInitReadRtryCntr > KeDFIB_Cnt_RTCInitReadRtryNr)
        {
            /* Transition: '<S10>:663' */
            VeDFIB_Cnt_RTCInitReadRtryCntr = 0U;
            DFIB_ac_DW.is_c3_DFIB_ac = DFIB_ac_IN_RTC_INIT_STATE;

            /* Entry 'RTC_INIT_STATE': '<S10>:645' */
            VeDFIB_b_RTCInitEn = true;
            VeDFIB_b_RTCReadEn = false;
            tmp = ((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1;
            if ((((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1) > 255)
            {
                tmp = 255;
            }

            VeDFIB_Cnt_RTCInitReadRtryCntr = (uint8)tmp;
        }
        else
        {
            VeDFIB_b_RTCInitEn = false;
            VeDFIB_b_RTCReadEn = true;
            tmp = ((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1;
            if ((((sint32)VeDFIB_Cnt_RTCInitReadRtryCntr) + 1) > 255)
            {
                tmp = 255;
            }

            VeDFIB_Cnt_RTCInitReadRtryCntr = (uint8)tmp;
        }
    }

    /* End of Chart: '<S7>/RTCInitReadScheduler' */

    /* Outputs for Enabled SubSystem: '<S7>/InitRTCDriverSubsystem' incorporates:
     *  EnablePort: '<S8>/Enable'
     */
    if (VeDFIB_b_RTCInitEn)
    {
        /* FunctionCaller: '<S8>/Function Caller' */
        rtb_RTCStatus = DFIB_ac_rtZADTRRTCSts;

        /* FunctionCaller: '<S8>/Function Caller' */
        rtb_FunctionCaller_o2 = Rte_Call_InitRTCDriver_InitRTCDriver
            (&rtb_RTCStatus);

        /* DataTypeConversion: '<S8>/Data Type Conversion' */
        DFIB_ac_B.DataTypeConversion_i = (TeDFIB_e_RTCErrors)
            rtb_FunctionCaller_o2;

        /* Outport: '<Root>/VeDFIB_e_RTCWakeupReason' incorporates:
         *  DataTypeConversion: '<S8>/Data Type Conversion1'
         */
        (void)Rte_Write_VeDFIB_e_RTCWakeupReason_Value((TeDFIB_e_RTCWakeupTypes)
            rtb_RTCStatus.e_e_wakeup_reason);

        /* Outport: '<Root>/VeDFIB_tmt_RTCTimeMonth' incorporates:
         *  SignalConversion generated from: '<S8>/Bus Selector1'
         */
        (void)Rte_Write_VeDFIB_tmt_RTCTimeMonth_Value
            (rtb_RTCStatus.e_e_time.e_e_month);

        /* Outport: '<Root>/VeDFIB_tdy_RTCTimeDay' incorporates:
         *  SignalConversion generated from: '<S8>/Bus Selector2'
         */
        (void)Rte_Write_VeDFIB_tdy_RTCTimeDay_Value
            (rtb_RTCStatus.e_e_time.e_e_day);

        /* Outport: '<Root>/VeDFIB_thr_RTCTimeHour' incorporates:
         *  SignalConversion generated from: '<S8>/Bus Selector3'
         */
        (void)Rte_Write_VeDFIB_thr_RTCTimeHour_Value
            (rtb_RTCStatus.e_e_time.e_e_hour);

        /* Outport: '<Root>/VeDFIB_tmn_RTCTimeMinute' incorporates:
         *  SignalConversion generated from: '<S8>/Bus Selector4'
         */
        (void)Rte_Write_VeDFIB_tmn_RTCTimeMinute_Value
            (rtb_RTCStatus.e_e_time.e_e_minute);

        /* Outport: '<Root>/VeDFIB_t_RTCTimeSecond' incorporates:
         *  SignalConversion generated from: '<S8>/Bus Selector5'
         */
        (void)Rte_Write_VeDFIB_t_RTCTimeSecond_Value
            (rtb_RTCStatus.e_e_time.e_e_second);

        /* Outport: '<Root>/VeDFIB_tyr_RTCTimeYear' incorporates:
         *  SignalConversion generated from: '<S8>/Bus Selector'
         */
        (void)Rte_Write_VeDFIB_tyr_RTCTimeYear_Value
            (rtb_RTCStatus.e_e_time.e_e_year);

        /* Merge: '<S7>/Merge6' incorporates:
         *  DataTypeConversion: '<S8>/Data Type Conversion'
         *  SignalConversion: '<S8>/Signal Conversion1'
         */
        DFIB_ac_B.Merge6_n = DFIB_ac_B.DataTypeConversion_i;
    }

    /* End of Outputs for SubSystem: '<S7>/InitRTCDriverSubsystem' */

    /* Outputs for Enabled SubSystem: '<S7>/ReadRTCTimeSubsystem' incorporates:
     *  EnablePort: '<S11>/Enable'
     */
    if (VeDFIB_b_RTCReadEn)
    {
        /* FunctionCaller: '<S11>/ReadRTCTime' */
        rtb_ReadRTCTime_o1 = DFIB_ac_rtZADTRRTCTime;

        /* FunctionCaller: '<S11>/ReadRTCTime' */
        rtb_FunctionCaller_o2 = Rte_Call_ReadRTCTime_ReadRTCTime
            (&rtb_ReadRTCTime_o1);

        /* DataTypeConversion: '<S11>/Data Type Conversion' */
        DFIB_ac_B.DataTypeConversion = (TeDFIB_e_RTCErrors)rtb_FunctionCaller_o2;

        /* Outport: '<Root>/VeDFIB_tmt_RTCTimeMonth' incorporates:
         *  SignalConversion generated from: '<S11>/Bus Selector1'
         */
        (void)Rte_Write_VeDFIB_tmt_RTCTimeMonth_Value
            (rtb_ReadRTCTime_o1.e_e_month);

        /* Outport: '<Root>/VeDFIB_tdy_RTCTimeDay' incorporates:
         *  SignalConversion generated from: '<S11>/Bus Selector2'
         */
        (void)Rte_Write_VeDFIB_tdy_RTCTimeDay_Value(rtb_ReadRTCTime_o1.e_e_day);

        /* Outport: '<Root>/VeDFIB_thr_RTCTimeHour' incorporates:
         *  SignalConversion generated from: '<S11>/Bus Selector3'
         */
        (void)Rte_Write_VeDFIB_thr_RTCTimeHour_Value(rtb_ReadRTCTime_o1.e_e_hour);

        /* Outport: '<Root>/VeDFIB_tmn_RTCTimeMinute' incorporates:
         *  SignalConversion generated from: '<S11>/Bus Selector4'
         */
        (void)Rte_Write_VeDFIB_tmn_RTCTimeMinute_Value
            (rtb_ReadRTCTime_o1.e_e_minute);

        /* Outport: '<Root>/VeDFIB_t_RTCTimeSecond' incorporates:
         *  SignalConversion generated from: '<S11>/Bus Selector5'
         */
        (void)Rte_Write_VeDFIB_t_RTCTimeSecond_Value
            (rtb_ReadRTCTime_o1.e_e_second);

        /* Outport: '<Root>/VeDFIB_tyr_RTCTimeYear' incorporates:
         *  SignalConversion generated from: '<S11>/Bus Selector'
         */
        (void)Rte_Write_VeDFIB_tyr_RTCTimeYear_Value(rtb_ReadRTCTime_o1.e_e_year);

        /* Merge: '<S7>/Merge6' incorporates:
         *  DataTypeConversion: '<S11>/Data Type Conversion'
         *  SignalConversion: '<S11>/Signal Conversion1'
         */
        DFIB_ac_B.Merge6_n = DFIB_ac_B.DataTypeConversion;
    }

    /* End of Outputs for SubSystem: '<S7>/ReadRTCTimeSubsystem' */

    /* SwitchCase: '<S7>/Switch Case' incorporates:
     *  Constant: '<S9>/Calib'
     *  Merge: '<S7>/Merge6'
     */
    if (((uint32)DFIB_ac_B.Merge6_n) == CeDFIB_e_E_OK)
    {
        /* Outputs for IfAction SubSystem: '<S7>/Switch Case Action Subsystem' incorporates:
         *  ActionPort: '<S12>/Action Port'
         */
        DFIB_ac_SwitchCaseActionSubsystem1(&DFIB_ac_B.Merge7_m);

        /* End of Outputs for SubSystem: '<S7>/Switch Case Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S7>/Switch Case Action Subsystem2' incorporates:
         *  ActionPort: '<S14>/Action Port'
         */
        DFIB_ac_SwitchCaseActionSubsystem3(VeDFIB_Cnt_RTCInitReadRtryCntr,
            KeDFIB_Cnt_RTCInitReadRtryNr, &DFIB_ac_B.Merge7_m);

        /* End of Outputs for SubSystem: '<S7>/Switch Case Action Subsystem2' */
    }

    /* End of SwitchCase: '<S7>/Switch Case' */

    /* SwitchCase: '<S7>/Switch Case1' incorporates:
     *  Merge: '<S7>/Merge7'
     */
    switch (DFIB_ac_B.Merge7_m)
    {
      case CeDFIB_e_RTCCallCompleteOK:
        /* Outputs for IfAction SubSystem: '<S7>/Switch Case Action Subsystem1' incorporates:
         *  ActionPort: '<S13>/Action Port'
         */
        /* Outport: '<Root>/VeDFIB_b_RTCChipErr' incorporates:
         *  Constant: '<S13>/Constant'
         */
        (void)Rte_Write_VeDFIB_b_RTCChipErr_Value(false);

        /* End of Outputs for SubSystem: '<S7>/Switch Case Action Subsystem1' */
        break;

      case CeDFIB_e_RTCCallCompleteFailed:
        /* Outputs for IfAction SubSystem: '<S7>/Switch Case Action Subsystem3' incorporates:
         *  ActionPort: '<S15>/Action Port'
         */
        /* Outport: '<Root>/VeDFIB_b_RTCChipErr' incorporates:
         *  Constant: '<S15>/Constant'
         */
        (void)Rte_Write_VeDFIB_b_RTCChipErr_Value(true);

        /* End of Outputs for SubSystem: '<S7>/Switch Case Action Subsystem3' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S7>/Switch Case1' */

    /* Update for UnitDelay: '<S7>/Unit Delay' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion'
     */
    DFIB_ac_DW.UnitDelay_DSTATE_g = DFIB_ac_B.DataTypeConversion_i;

    /* Update for UnitDelay: '<S7>/Unit Delay1' incorporates:
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     */
    DFIB_ac_DW.UnitDelay1_DSTATE = DFIB_ac_B.DataTypeConversion;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDFIB_e_RTCReadSts' incorporates:
     *  Merge: '<S7>/Merge7'
     *  SignalConversion generated from: '<S1>/VeDFIR_e_RTCReadSts'
     */
    (void)Rte_Write_VeDFIB_e_RTCReadSts_Value(DFIB_ac_B.Merge7_m);

    /* Outputs for Atomic SubSystem: '<S1>/DFIB_MedTEH_StopCheckpoint' */
    /* FunctionCaller: '<S6>/DFIB_MedTEH_StopCheckpoint' */
    Rte_Call_DFIB_MedTEH_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S1>/DFIB_MedTEH_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Model initialize function */
FUNC(void, DFIB_CODE) DFIB_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/Interfaces'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
    /* SystemInitialize for SignalConversion generated from: '<S37>/VeBSWR_e_MIL_Request' incorporates:
     *  Constant: '<S38>/Constant22'
     */
    DFIB_ac_B.OutportBufferForVeBSWR_e_MIL_Request = DFIB_ac_ConstB.Constant22;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Outputs for Atomic SubSystem: '<Root>/Init' */
    /* Outport: '<Root>/VeBSWR_e_MIL_Request' incorporates:
     *  Constant: '<S3>/Constant31'
     */
    (void)Rte_Write_VeBSWR_e_MIL_Request_Value(CeDFIR_MIL_Off);

    /* Outport: '<Root>/VeBSWR_e_SPT_State' incorporates:
     *  Constant: '<S3>/Constant35'
     */
    (void)Rte_Write_VeBSWR_e_SPT_State_Value(CeINVR_e_Pending_SPT);

    /* Outport: '<Root>/VeDFIB_tmt_RTCTimeMonth' incorporates:
     *  Constant: '<S3>/Constant12'
     */
    (void)Rte_Write_VeDFIB_tmt_RTCTimeMonth_Value((uint8)1U);

    /* Outport: '<Root>/VeDFIB_tdy_RTCTimeDay' incorporates:
     *  Constant: '<S3>/Constant13'
     */
    (void)Rte_Write_VeDFIB_tdy_RTCTimeDay_Value((uint8)1U);

    /* Outport: '<Root>/VeDFIB_e_RTCReadSts' incorporates:
     *  Constant: '<S3>/Constant69'
     */
    (void)Rte_Write_VeDFIB_e_RTCReadSts_Value(CeDFIB_e_RTCCallInit);

    /* Outport: '<Root>/VeDFIB_e_RTCProgramWakeupError' incorporates:
     *  Constant: '<S3>/Constant74'
     */
    (void)Rte_Write_VeDFIB_e_RTCProgramWakeupError_Value(CeDFIB_e_RTCCallInit);

    /* Outport: '<Root>/VeDFIB_e_RTCProgramTimeSts' incorporates:
     *  Constant: '<S3>/Constant71'
     */
    (void)Rte_Write_VeDFIB_e_RTCProgramTimeSts_Value(CeDFIB_e_RTCCallInit);

    /* End of Outputs for SubSystem: '<Root>/Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
