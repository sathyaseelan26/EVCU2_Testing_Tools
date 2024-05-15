/*
 * File: MMMR_ac.h
 *
 * Code generated for Simulink model 'MMMR_ac'.
 *
 * Model version                  : 9.333
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:27:47 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MMMR_ac_h_
#define RTW_HEADER_MMMR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef MMMR_ac_COMMON_INCLUDES_
#define MMMR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_MMMR.h"
#endif                                 /* MMMR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_MMMR_ac_T
{
    uint8 OutportBufferForVeMMMR_Cnt_Lv2MtrMdVldtn;/* '<S121>/Const8' */
    boolean OutportBufferForVeMMMR_b_Lv2RunCrankNotA;/* '<S121>/Const14' */
    boolean OutportBufferForVeMMMR_b_Lv2CAN_KeyInRun;/* '<S121>/Const15' */
    boolean OutportBufferForVeMMMR_b_Lv2HW_IgnSwitch;/* '<S121>/Const12' */
    boolean OutportBufferForVeMMMR_b_Lv2TransOutTrqC;/* '<S121>/Const1' */
    boolean OutportBufferForVeMMMR_b_Lv2FltShtDwnCmn;/* '<S121>/Const2' */
    boolean OutportBufferForVeMMMR_b_Lv2FltShtDwnC_l;/* '<S121>/Const3' */
    boolean OutportBufferForVeMMMR_b_Lv2MtrMdMntrSet;/* '<S121>/Const4' */
    boolean OutportBufferForVeMMMR_b_Lv2MtrMdNotAllw;/* '<S121>/Const5' */
    boolean OutportBufferForVeMMMR_b_Lv2MtrMdVldtnFa;/* '<S121>/Const6' */
    boolean OutportBufferForVeMMMR_b_Lv2MtrMdVldtnFl;/* '<S121>/Const7' */
    boolean OutportBufferForVeMMMR_b_Lv2MtrMd_DBC_Re;/* '<S121>/Const17' */
    boolean OutportBufferForVeMMMR_b_Lv2HybFeedbackE;/* '<S121>/Const9' */
    boolean VeMMMR_b_Lv2_MtrMdMntrSet; /* '<S26>/Logical10' */
    boolean VeMMMR_b_Lv2_TransOutTrqCmndFlt;/* '<S26>/Logical7' */
    boolean VeMMMR_b_Lv2_FltShtDwnCmndRet;/* '<S26>/Logical8' */
    boolean VeMMMR_b_Lv2_FltShtDwnCmnd;/* '<S26>/Logical9' */
    boolean VeMMMR_b_Lv2_MtrMdNotAllwdSet;/* '<S26>/Logical11' */
    boolean VeMMMR_b_Lv2_MtrMdVldtnFailing;/* '<S26>/Logical18' */
    boolean passDBCparam2;             /* '<S51>/passDBCparam2' */
    boolean VeMMMR_b_Lv2_CAN_KeyInRun; /* '<S10>/Comparison1' */
    boolean AND_o;                     /* '<S21>/AND' */
    TeLTIR_e_KeySts OutportBufferForVeMMMR_e_Lv2CAN_KeySts_O;/* '<S121>/Enumerated_Constant3' */
    TeHTDR_e_SwitchMd OutportBufferForVeMMMR_e_Lv2MtrAMdCmnd_O;/* '<S121>/Enumerated_Constant1' */
    TeHTDR_e_SwitchMd OutportBufferForVeMMMR_e_Lv2MtrBMdCmnd_O;/* '<S121>/Enumerated_Constant2' */
    TeHTDR_e_SwitchMd VeMMMR_e_Lv1_MtrA_ModeCmnd;/* '<S79>/Switch' */
    TeHTDR_e_SwitchMd VeMMMR_e_Lv1_MtrB_ModeCmnd;/* '<S79>/Switch1' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeMMMR_e_Lv2MtrMd_DBC_St;/* '<S121>/Enumerated_Constant4' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeMMMR_e_Lv2FaultSts_PIM;/* '<S121>/Enumerated_Constant5' */
    TeDFIB_e_FaultDebounceStatus Switch1;/* '<S57>/Switch1' */
}
B_MMMR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_MMMR_ac_T
{
    float32 VeMMMR_t_ShutDwnDelay_prev;/* '<S55>/Unit Delay1' */
    float32 VeMMMR_t_Lv2Lv1FltShtDwnCmndRet_Delay_pr;/* '<S54>/Unit Delay1' */
    float32 VeMMMR_t_Lv2RunCrank_NotActive_TurnOnDel;/* '<S21>/Unit Delay1' */
    uint8 UnitDelay_DSTATE;            /* '<S51>/UnitDelay' */
    uint8 UnitDelay_DSTATE_h;          /* '<S57>/UnitDelay' */
    boolean VeMMMD_b_KeySts_RsngEdg_prev;/* '<S52>/Unit Delay' */
    boolean UnitDelay1_DSTATE;         /* '<S51>/UnitDelay1' */
    boolean VeMMMR_b_Lv2_MtrMdVldtnFlt_prev;/* '<S53>/Unit Delay1' */
    boolean VeMMMR_b_ShutDwnDelay_prev;/* '<S66>/Unit Delay' */
    boolean VeMMMR_b_Lv2Lv1FltShtDwnCmndRet_Delay_pr;/* '<S65>/Unit Delay' */
    boolean UnitDelay_DSTATE_j;        /* '<S58>/Unit Delay' */
    boolean VeMMMR_b_Lv2RunCrank_NotActive_TurnOnDel;/* '<S24>/Unit Delay' */
    TeDFIB_e_FaultDebounceStatus VeMMMR_e_FaultSts_PIM_ContMod;
                                 /* '<Root>/DS_VeMMMR_e_FaultSts_PIM_ContMod' */
}
DW_MMMR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeLTIR_e_KeySts Constant;    /* '<S124>/Constant' */
    const TeHTDR_e_SwitchMd Constant_d;/* '<S122>/Constant' */
    const TeHTDR_e_SwitchMd Constant_p;/* '<S123>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_j;/* '<S125>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_e;/* '<S126>/Constant' */
}
ConstB_MMMR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MMMR
#include "MemMap.h"

extern VAR(B_MMMR_ac_T, MMMR_VAR_INIT) MMMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MMMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MMMR
#include "MemMap.h"

extern VAR(DW_MMMR_ac_T, MMMR_VAR_INIT) MMMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MMMR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_MMMR
#include "MemMap.h"

extern CONST(ConstB_MMMR_ac_T, MMMR_VAR_INIT) MMMR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_MMMR
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
 * '<Root>' : 'MMMR_ac'
 * '<S1>'   : 'MMMR_ac/MMMR_MedTEB'
 * '<S2>'   : 'MMMR_ac/MMMR_PwrOn'
 * '<S3>'   : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv'
 * '<S4>'   : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure'
 * '<S5>'   : 'MMMR_ac/MMMR_MedTEB/MMMR_FastTEF_StartCheckpoint'
 * '<S6>'   : 'MMMR_ac/MMMR_MedTEB/MMMR_FastTEF_StopCheckpoint'
 * '<S7>'   : 'MMMR_ac/MMMR_MedTEB/Prcss_MMMO_20ms'
 * '<S8>'   : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task'
 * '<S9>'   : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/DocBlock'
 * '<S10>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_KeyStatus'
 * '<S11>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_RunCrnkActv'
 * '<S12>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_KeyStatus/Const1'
 * '<S13>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_KeyStatus/Const2'
 * '<S14>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_KeyStatus/DocBlock'
 * '<S15>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_RunCrnkActv/DocBlock'
 * '<S16>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_RunCrnkActv/IgnSwitch_Boolean_Set'
 * '<S17>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_RunCrnkActv/KeMMMR_b_Lv2_RunCrankNotActive_OvrdEnbl'
 * '<S18>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_RunCrnkActv/KeMMMR_b_Lv2_RunCrankNotActive_OvrdVal'
 * '<S19>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_RunCrnkActv/KeMMMR_t_Lv2_RunCrankNotActive_TurnOnDly'
 * '<S20>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_RunCrnkActv/KeMMMR_t_dT'
 * '<S21>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_RunCrnkActv/LV2_Turn_On_Delay_Time'
 * '<S22>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_RunCrnkActv/Model_Info1'
 * '<S23>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_RunCrnkActv/Model_Info2'
 * '<S24>'  : 'MMMR_ac/MMMR_MedTEB/DtrmnRunCrnkNotAcv/Dtrmn_RunCrnkActv/LV2_Turn_On_Delay_Time/Edge_Rising'
 * '<S25>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/DocBlock'
 * '<S26>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode'
 * '<S27>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Process_MtrMdPCode'
 * '<S28>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/Const1'
 * '<S29>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/Const10'
 * '<S30>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/Const2'
 * '<S31>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/Const3'
 * '<S32>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/Const4'
 * '<S33>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/Const5'
 * '<S34>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/DocBlock'
 * '<S35>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_Cnt_MdVldtnCntrDec'
 * '<S36>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_Cnt_MdVldtnCntrInc'
 * '<S37>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_Cnt_MdVldtnCntrLim'
 * '<S38>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_b_DisblMtrMdMonitor'
 * '<S39>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_b_InFieldMode_Allow'
 * '<S40>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_b_KeyRunCrank_Allow'
 * '<S41>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_b_MtrA_TrqCntrl_Allow'
 * '<S42>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_b_MtrA_VltgCntrl_Allow'
 * '<S43>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_b_MtrB_TrqCntrl_Allow'
 * '<S44>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_b_MtrB_VltgCntrl_Allow'
 * '<S45>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_b_RetShtDwn_Allow'
 * '<S46>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_b_SysShtDwn_Allow'
 * '<S47>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_b_TransFlt_Allow'
 * '<S48>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_t_FltShtDwnCmndRet'
 * '<S49>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_t_ShutDwnDelay'
 * '<S50>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/KeMMMR_t_dT'
 * '<S51>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Debounce_Counter_with_Latch_For_DBC_Status'
 * '<S52>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Edge_Rising'
 * '<S53>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Latch_On_With_Reset'
 * '<S54>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Turn_On_Delay_Time'
 * '<S55>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Turn_On_Delay_Time1'
 * '<S56>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/Model_Info1'
 * '<S57>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Debounce_Counter_with_Latch_For_DBC_Status/DTC_Determination'
 * '<S58>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Debounce_Counter_with_Latch_For_DBC_Status/EdgeFalling'
 * '<S59>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Debounce_Counter_with_Latch_For_DBC_Status/EnumeratedSignal'
 * '<S60>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Debounce_Counter_with_Latch_For_DBC_Status/EnumeratedSignal1'
 * '<S61>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Debounce_Counter_with_Latch_For_DBC_Status/EnumeratedSignal2'
 * '<S62>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Debounce_Counter_with_Latch_For_DBC_Status/TestNotDone'
 * '<S63>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Debounce_Counter_with_Latch_For_DBC_Status/DTC_Determination/CounterZero'
 * '<S64>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Debounce_Counter_with_Latch_For_DBC_Status/DTC_Determination/EnumSetBlock'
 * '<S65>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Turn_On_Delay_Time/Edge_Rising'
 * '<S66>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Monitor_Motor_Mode/LV2_Turn_On_Delay_Time1/Edge_Rising'
 * '<S67>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Process_MtrMdPCode/DocBlock'
 * '<S68>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Process_MtrMdPCode/Prcss_MtrMd_PCode'
 * '<S69>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Process_MtrMdPCode/Prcss_MtrMd_PCode/DocBlock'
 * '<S70>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Process_MtrMdPCode/Prcss_MtrMd_PCode/Event_PIM_ContMod_ReportTestFailed'
 * '<S71>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Process_MtrMdPCode/Prcss_MtrMd_PCode/Event_PIM_ContMod_ReportTestInit'
 * '<S72>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Process_MtrMdPCode/Prcss_MtrMd_PCode/Event_PIM_ContMod_ReportTestPassed'
 * '<S73>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Process_MtrMdPCode/Prcss_MtrMd_PCode/Event_PIM_ContMod_ReportTestFailed/Enumerated_Constant'
 * '<S74>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Process_MtrMdPCode/Prcss_MtrMd_PCode/Event_PIM_ContMod_ReportTestInit/Enumerated_Constant'
 * '<S75>'  : 'MMMR_ac/MMMR_MedTEB/Dtrmn_MtrMdFailure/Process_MtrMdPCode/Prcss_MtrMd_PCode/Event_PIM_ContMod_ReportTestPassed/Enumerated_Constant'
 * '<S76>'  : 'MMMR_ac/MMMR_MedTEB/Prcss_MMMO_20ms/ECM_Boolean_Set'
 * '<S77>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/DocBlock'
 * '<S78>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_CAN_KeySts'
 * '<S79>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_Lv1_MotorMd'
 * '<S80>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_RstDiagCntr'
 * '<S81>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_ShutDwnCmnd'
 * '<S82>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_TransFailure'
 * '<S83>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_VehicleMd'
 * '<S84>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_CAN_KeySts/DocBlock'
 * '<S85>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_CAN_KeySts/KeMMMR_b_KeySts_OvrdEnbl'
 * '<S86>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_CAN_KeySts/KeMMMR_b_Lv2BSW_KeyStsFA_OvrdEnbl'
 * '<S87>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_CAN_KeySts/KeMMMR_b_Lv2BSW_KeyStsFA_OvrdVal'
 * '<S88>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_CAN_KeySts/KeMMMR_e_KeySts_OvrdVal'
 * '<S89>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_CAN_KeySts/Model_Info1'
 * '<S90>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_CAN_KeySts/Model_Info2'
 * '<S91>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_CAN_KeySts/Model_Info3'
 * '<S92>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_Lv1_MotorMd/DocBlock'
 * '<S93>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_Lv1_MotorMd/KeMMMR_b_MtrA_MdCmnd_OvrdEnbl'
 * '<S94>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_Lv1_MotorMd/KeMMMR_b_MtrB_MdCmnd_OvrdEnbl'
 * '<S95>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_Lv1_MotorMd/KeMMMR_e_MtrA_MdCmnd_OvrdVal'
 * '<S96>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_Lv1_MotorMd/KeMMMR_e_MtrB_MdCmnd_OvrdVal'
 * '<S97>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_RstDiagCntr/Const10'
 * '<S98>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_RstDiagCntr/DocBlock'
 * '<S99>'  : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_RstDiagCntr/KeMMMR_b_DualMtr_IO_Ctrl_OvrdEnbl'
 * '<S100>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_RstDiagCntr/KeMMMR_b_InService_OvrdEnbl'
 * '<S101>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_RstDiagCntr/KeMMMR_b_ROL_Cmnd_OvrdEnbl'
 * '<S102>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_RstDiagCntr/KeMMMR_b_ROL_Cmnd_OvrdVal'
 * '<S103>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_RstDiagCntr/KeMMMR_b_SingleMtr_IO_Ctrl_OvrdEnbl'
 * '<S104>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_RstDiagCntr/KeMMMR_b_TestDevicePresent_OvrdEnbl'
 * '<S105>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_RstDiagCntr/KeMMMR_b_TestDevicePresent_OvrdVal'
 * '<S106>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_RstDiagCntr/KeMMMR_e_DualMtr_IO_Ctrl_OvrdVal'
 * '<S107>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_RstDiagCntr/KeMMMR_e_SingleMtr_IO_Ctrl_OvrdVal'
 * '<S108>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_ShutDwnCmnd/DocBlock'
 * '<S109>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_ShutDwnCmnd/KeMMMR_b_Lv1_FltShtDwnCmndRet_OvrdEnbl'
 * '<S110>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_ShutDwnCmnd/KeMMMR_b_Lv1_FltShtDwnCmndRet_OvrdVal'
 * '<S111>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_ShutDwnCmnd/KeMMMR_b_Lv1_FltShtDwnCmnd_OvrdEnbl'
 * '<S112>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_ShutDwnCmnd/KeMMMR_b_Lv1_FltShtDwnCmnd_OvrdVal'
 * '<S113>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_TransFailure/DocBlock'
 * '<S114>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_TransFailure/KeMMMR_b_Lv2_TransOutTrqCmdFlt_OvrdEnbl'
 * '<S115>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_TransFailure/OtherMntr_TransOutTrqFlt'
 * '<S116>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_TransFailure/WhlTrqMntr_TransOutTrqFlt'
 * '<S117>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_TransFailure/WhlTrqMntr_TransOutTrqFlt/KeMMMR_b_Lv2_TransOutTrqCmdFlt_OvrdVal'
 * '<S118>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_VehicleMd/DocBlock'
 * '<S119>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_VehicleMd/KeMMMR_b_InFieldMode_OvrdEnbl'
 * '<S120>' : 'MMMR_ac/MMMR_MedTEB/Process_Input_Task/Prcss_VehicleMd/KeMMMR_b_InFieldMode_OvrdVal'
 * '<S121>' : 'MMMR_ac/MMMR_PwrOn/Sub_Out_Init'
 * '<S122>' : 'MMMR_ac/MMMR_PwrOn/Sub_Out_Init/Enumerated_Constant1'
 * '<S123>' : 'MMMR_ac/MMMR_PwrOn/Sub_Out_Init/Enumerated_Constant2'
 * '<S124>' : 'MMMR_ac/MMMR_PwrOn/Sub_Out_Init/Enumerated_Constant3'
 * '<S125>' : 'MMMR_ac/MMMR_PwrOn/Sub_Out_Init/Enumerated_Constant4'
 * '<S126>' : 'MMMR_ac/MMMR_PwrOn/Sub_Out_Init/Enumerated_Constant5'
 */
#endif                                 /* RTW_HEADER_MMMR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
