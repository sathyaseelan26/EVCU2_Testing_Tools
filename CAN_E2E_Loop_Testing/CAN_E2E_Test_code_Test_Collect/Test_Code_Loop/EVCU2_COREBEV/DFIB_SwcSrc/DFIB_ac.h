/*
 * File: DFIB_ac.h
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

#ifndef RTW_HEADER_DFIB_ac_h_
#define RTW_HEADER_DFIB_ac_h_
#include "rtwtypes.h"
#include "Rte_Type.h"
#ifndef DFIB_ac_COMMON_INCLUDES_
#define DFIB_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_DFIB.h"
#endif                                 /* DFIB_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"
#ifndef DEFINED_TYPEDEF_FOR_ADTSRTCWakeup_
#define DEFINED_TYPEDEF_FOR_ADTSRTCWakeup_

typedef uint8 ADTSRTCWakeup;

/* enum ADTSRTCWakeup */
#define RTC_NO_WAKEUP                  ((ADTSRTCWakeup)0U)       /* Default value */
#define RTC_ALARM_WAKEUP               ((ADTSRTCWakeup)1U)
#define RTC_TIMER_WAKEUP               ((ADTSRTCWakeup)2U)
#define RTC_ALARM_TIMER_WAKEUP         ((ADTSRTCWakeup)3U)
#endif

/* Block signals (default storage) */
typedef struct tag_B_DFIB_ac_T
{
    float32 OutportBufferForVeHWIO_I_Lv2PPawlMtrCrnt;/* '<S37>/HWIO interfaces' */
    float32 OutportBufferForVeHWIO_U_Lv2PPMtrPosSnsr;/* '<S37>/HWIO interfaces' */
    uint16 OutportBufferForVeDFIR_cnt_NumEmissionDT;/* '<S37>/DFIR interfaces' */
    uint8 OutportBufferForVeBSWR_y_CodeRecCmplt_EE;/* '<S37>/BSWR interfaces' */
    boolean OutportBufferForVeDFIR_b_CANERRSTS_CANFD;/* '<S37>/DFIR interfaces' */
    boolean OutportBufferForVeDFIR_b_CANERRSTS_CAN_c;/* '<S37>/DFIR interfaces' */
    boolean OutportBufferForVeDFIR_b_CANERRSTS_CAN_i;/* '<S37>/DFIR interfaces' */
    boolean OutportBufferForVeDFIR_b_CANERRSTS_CAN_n;/* '<S37>/DFIR interfaces' */
    boolean OutportBufferForVeDFIR_b_CANERRSTS_CAN_e;/* '<S37>/DFIR interfaces' */
    boolean OutportBufferForVeDFIR_b_LocBPCM;/* '<S37>/DFIR interfaces' */
    boolean OutportBufferForVeHWIO_b_OCDiagFA_HighTe;/* '<S37>/HWIO interfaces' */
    boolean OutportBufferForVeHWIO_b_STBDiagFA_HighT;/* '<S37>/HWIO interfaces' */
    boolean OutportBufferForVeHWIO_b_STGDiagFA_HighT;/* '<S37>/HWIO interfaces' */
    boolean OutportBufferForVeBSWR_b_AHCP_CoreFail;/* '<S37>/BSWR interfaces' */
    boolean OutportBufferForVeBSWR_b_ImpctDtctd_HVSh;/* '<S37>/BSWR interfaces' */
    boolean OutportBufferForVeBSWR_b_LimCheckingStat;/* '<S37>/BSWR interfaces' */
    boolean OutportBufferForVeBSWR_b_LossCommwORC;/* '<S37>/BSWR interfaces' */
    boolean OutportBufferForVeBSWR_b_MCPA_CoreFail;/* '<S37>/BSWR interfaces' */
    boolean OutportBufferForVeBSWR_b_MCPB_CoreFail;/* '<S37>/BSWR interfaces' */
    boolean OutportBufferForVeBSWR_b_TestDevicePrese;/* '<S37>/BSWR interfaces' */
    boolean OutportBufferForVeBSWR_b_VehDynaCMPwrRly;/* '<S37>/BSWR interfaces' */
    boolean OutportBufferForVeBSWR_b_VehDynaCMPwrR_f;/* '<S37>/BSWR interfaces' */
    boolean OutportBufferForVeBSWR_b_VehDynaCMPwrR_h;/* '<S37>/BSWR interfaces' */
    boolean OutportBufferForVeBSWR_b_VehDynaCMPwrR_i;/* '<S37>/BSWR interfaces' */
    TeDFIR_MIL_Request OutportBufferForVeBSWR_e_MIL_Request;/* '<S37>/BSWR interfaces' */
    TeDFIB_e_RTCErrors Merge6_n;       /* '<S7>/Merge6' */
    TeDFIB_e_RTCErrors DataTypeConversion;/* '<S11>/Data Type Conversion' */
    TeDFIB_e_RTCErrors DataTypeConversion_i;/* '<S8>/Data Type Conversion' */
    TeDFIB_e_RTCErrors DataTypeConversion_f;/* '<S24>/Data Type Conversion' */
    TeDFIB_e_RTCErrors DataTypeConversion_n;/* '<S23>/Data Type Conversion' */
    TeDFIB_e_RTCCallSts Merge7_m;      /* '<S7>/Merge7' */
    TeDFIB_e_RTCCallSts Merge8_o;      /* '<S24>/Merge8' */
    TeDFIB_e_RTCCallSts Merge8_g;      /* '<S23>/Merge8' */
}
B_DFIB_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_DFIB_ac_T
{
    boolean UnitDelay_DSTATE;          /* '<S20>/Unit Delay' */
    boolean UnitDelay_DSTATE_c;        /* '<S19>/Unit Delay' */
    TeDFIB_e_RTCErrors UnitDelay_DSTATE_g;/* '<S7>/Unit Delay' */
    TeDFIB_e_RTCErrors UnitDelay1_DSTATE;/* '<S7>/Unit Delay1' */
    TeDFIB_e_RTCErrors UnitDelay2_DSTATE;/* '<S18>/Unit Delay2' */
    TeDFIB_e_RTCErrors UnitDelay3_DSTATE;/* '<S18>/Unit Delay3' */
    uint8 is_active_c3_DFIB_ac;        /* '<S7>/RTCInitReadScheduler' */
    uint8 is_c3_DFIB_ac;               /* '<S7>/RTCInitReadScheduler' */
    uint8 is_active_c2_DFIB_ac;        /* '<S18>/RTCProgramTimeScheduler' */
    uint8 is_c2_DFIB_ac;               /* '<S18>/RTCProgramTimeScheduler' */
    uint8 is_active_c1_DFIB_ac;        /* '<S18>/RTCProgramAlarmScheduler' */
    uint8 is_c1_DFIB_ac;               /* '<S18>/RTCProgramAlarmScheduler' */
}
DW_DFIB_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeDFIR_MIL_Request Constant22;/* '<S38>/Constant22' */
}
ConstB_DFIB_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DFIB
#include "MemMap.h"

extern VAR(B_DFIB_ac_T, DFIB_VAR_INIT) DFIB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DFIB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DFIB
#include "MemMap.h"

extern VAR(DW_DFIB_ac_T, DFIB_VAR_INIT) DFIB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DFIB
#include "MemMap.h"

/* External data declarations for dependent source files */
#define START_SEC_CONST_UNSPECIFIED_DFIB
#include "MemMap.h"

extern CONST(ADTRRTCTime, DFIB_VAR_INIT) DFIB_ac_rtZADTRRTCTime;/* ADTRRTCTime ground */

#define STOP_SEC_CONST_UNSPECIFIED_DFIB
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_DFIB
#include "MemMap.h"

extern CONST(ADTRRTCSts, DFIB_VAR_INIT) DFIB_ac_rtZADTRRTCSts;/* ADTRRTCSts ground */

#define STOP_SEC_CONST_UNSPECIFIED_DFIB
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_DFIB
#include "MemMap.h"

extern CONST(ConstB_DFIB_ac_T, DFIB_VAR_INIT) DFIB_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_DFIB
#include "MemMap.h"

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'DFIB_ac'
 * '<S1>'   : 'DFIB_ac/DFIB_Runnable100ms'
 * '<S2>'   : 'DFIB_ac/DFIB_Runnable10ms'
 * '<S3>'   : 'DFIB_ac/Init'
 * '<S4>'   : 'DFIB_ac/Interfaces'
 * '<S5>'   : 'DFIB_ac/DFIB_Runnable100ms/DFIB_MedTEH_StartCheckpoint'
 * '<S6>'   : 'DFIB_ac/DFIB_Runnable100ms/DFIB_MedTEH_StopCheckpoint'
 * '<S7>'   : 'DFIB_ac/DFIB_Runnable100ms/Function-Call Subsystem'
 * '<S8>'   : 'DFIB_ac/DFIB_Runnable100ms/Function-Call Subsystem/InitRTCDriverSubsystem'
 * '<S9>'   : 'DFIB_ac/DFIB_Runnable100ms/Function-Call Subsystem/KeDFIB_Cnt_RTCInitReadRtryNr'
 * '<S10>'  : 'DFIB_ac/DFIB_Runnable100ms/Function-Call Subsystem/RTCInitReadScheduler'
 * '<S11>'  : 'DFIB_ac/DFIB_Runnable100ms/Function-Call Subsystem/ReadRTCTimeSubsystem'
 * '<S12>'  : 'DFIB_ac/DFIB_Runnable100ms/Function-Call Subsystem/Switch Case Action Subsystem'
 * '<S13>'  : 'DFIB_ac/DFIB_Runnable100ms/Function-Call Subsystem/Switch Case Action Subsystem1'
 * '<S14>'  : 'DFIB_ac/DFIB_Runnable100ms/Function-Call Subsystem/Switch Case Action Subsystem2'
 * '<S15>'  : 'DFIB_ac/DFIB_Runnable100ms/Function-Call Subsystem/Switch Case Action Subsystem3'
 * '<S16>'  : 'DFIB_ac/DFIB_Runnable10ms/DFIB_FastTEB_StartCheckpoint'
 * '<S17>'  : 'DFIB_ac/DFIB_Runnable10ms/DFIB_FastTEB_StopCheckpoint'
 * '<S18>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem'
 * '<S19>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/EdgeRising_F2T'
 * '<S20>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/EdgeRising_F2T1'
 * '<S21>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/KeDFIB_Cnt_RTCProgramAlarmRtryNr'
 * '<S22>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/KeDFIB_Cnt_RTCProgramTimeRtryNr'
 * '<S23>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/ProgramRTCTimeSubsystem'
 * '<S24>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/ProgramRTCWakeupSubsystem'
 * '<S25>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/RTCProgramAlarmScheduler'
 * '<S26>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/RTCProgramTimeScheduler'
 * '<S27>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/ProgramRTCTimeSubsystem/Switch Case Action Subsystem1'
 * '<S28>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/ProgramRTCTimeSubsystem/Switch Case Action Subsystem2'
 * '<S29>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/ProgramRTCTimeSubsystem/Switch Case Action Subsystem3'
 * '<S30>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/ProgramRTCTimeSubsystem/Switch Case Action Subsystem4'
 * '<S31>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/ProgramRTCWakeupSubsystem/Switch Case Action Subsystem1'
 * '<S32>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/ProgramRTCWakeupSubsystem/Switch Case Action Subsystem2'
 * '<S33>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/ProgramRTCWakeupSubsystem/Switch Case Action Subsystem3'
 * '<S34>'  : 'DFIB_ac/DFIB_Runnable10ms/Function-Call Subsystem/ProgramRTCWakeupSubsystem/Switch Case Action Subsystem4'
 * '<S35>'  : 'DFIB_ac/Interfaces/DFIB_FastTEF_StartCheckpoint'
 * '<S36>'  : 'DFIB_ac/Interfaces/DFIB_FastTEF_StopCheckpoint'
 * '<S37>'  : 'DFIB_ac/Interfaces/Subsystem'
 * '<S38>'  : 'DFIB_ac/Interfaces/Subsystem/BSWR interfaces'
 * '<S39>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces'
 * '<S40>'  : 'DFIB_ac/Interfaces/Subsystem/HWIO interfaces'
 * '<S41>'  : 'DFIB_ac/Interfaces/Subsystem/BSWR interfaces/HeDFIB_b_PostCodeClrDiagDsblStubEnbl1'
 * '<S42>'  : 'DFIB_ac/Interfaces/Subsystem/BSWR interfaces/HeDFIB_b_PostCodeClrDiagDsblStubEnbl2'
 * '<S43>'  : 'DFIB_ac/Interfaces/Subsystem/BSWR interfaces/HeDFIB_b_PostCodeClrDiagDsblStubEnbl4'
 * '<S44>'  : 'DFIB_ac/Interfaces/Subsystem/BSWR interfaces/SWITCH_UP1'
 * '<S45>'  : 'DFIB_ac/Interfaces/Subsystem/BSWR interfaces/SWITCH_UP2'
 * '<S46>'  : 'DFIB_ac/Interfaces/Subsystem/BSWR interfaces/SWITCH_UP3'
 * '<S47>'  : 'DFIB_ac/Interfaces/Subsystem/BSWR interfaces/SWITCH_UP4'
 * '<S48>'  : 'DFIB_ac/Interfaces/Subsystem/BSWR interfaces/SWITCH_UP5'
 * '<S49>'  : 'DFIB_ac/Interfaces/Subsystem/BSWR interfaces/SWITCH_UP6'
 * '<S50>'  : 'DFIB_ac/Interfaces/Subsystem/BSWR interfaces/SWITCH_UP7'
 * '<S51>'  : 'DFIB_ac/Interfaces/Subsystem/BSWR interfaces/SWITCH_UP8'
 * '<S52>'  : 'DFIB_ac/Interfaces/Subsystem/BSWR interfaces/SWITCH_UP9'
 * '<S53>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/DiagInterfaces'
 * '<S54>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/HeDFIB_b_PostCodeClrDiagDsblStubEnbl'
 * '<S55>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/HeDFIB_b_PostCodeClrDiagDsblStubEnbl1'
 * '<S56>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/HeDFIB_b_PostCodeClrDiagDsblStubEnbl2'
 * '<S57>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/HeDFIB_b_PostCodeClrDiagDsblStubEnbl3'
 * '<S58>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/HeDFIB_b_PostCodeClrDiagDsblStubEnbl4'
 * '<S59>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/SWITCH_UP1'
 * '<S60>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/SWITCH_UP2'
 * '<S61>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/SWITCH_UP3'
 * '<S62>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/SWITCH_UP4'
 * '<S63>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/SWITCH_UP5'
 * '<S64>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/DiagInterfaces/HeDFIB_b_IsDiagGlobalConditionValidStubEnbl'
 * '<S65>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/DiagInterfaces/HeDFIB_b_PostCodeClrDiagDsblStubEnbl'
 * '<S66>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/DiagInterfaces/SWITCH_UP'
 * '<S67>'  : 'DFIB_ac/Interfaces/Subsystem/DFIR interfaces/DiagInterfaces/SWITCH_UP1'
 * '<S68>'  : 'DFIB_ac/Interfaces/Subsystem/HWIO interfaces/HeDFIB_b_IsDiagGlobalConditionValidStubEnbl'
 * '<S69>'  : 'DFIB_ac/Interfaces/Subsystem/HWIO interfaces/SWITCH_UP'
 */
#endif                                 /* RTW_HEADER_DFIB_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
