/*
 * File: PPCR_ac.h
 *
 * Code generated for Simulink model 'PPCR_ac'.
 *
 * Model version                  : 9.90
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:40:18 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PPCR_ac_h_
#define RTW_HEADER_PPCR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef PPCR_ac_COMMON_INCLUDES_
#define PPCR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_PPCR.h"
#endif                                 /* PPCR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_PPCR_ac_T
{
    boolean OutportBufferForVePPCR_b_PPawl_TXFlt_Out;/* '<S134>/Const3' */
    boolean OutportBufferForVePPCR_b_PPawlFlt_Unknow;/* '<S134>/Const4' */
    boolean OutportBufferForVePPCR_b_PPawlFlt_Inhibi;/* '<S134>/Const5' */

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean OutportBufferForPark_Pawl_StatFA_Init;/* '<S133>/FALSEConstant' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean OutportBufferForPark_Pawl_flt_StatFA_Ini;/* '<S133>/FALSEConstant2' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean OutportBufferForPP_MotorPos_StatFA_Init;/* '<S133>/FALSEConstant3' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean OutportBufferForPP_Pos_SensorFA_Init;/* '<S133>/FALSEConstant1' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean OutportBufferForMPR_Pos_SensorFA_Init;/* '<S133>/FALSEConstant4' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean OutportBufferForPark_Pawl_StatFA_Init_Fr;/* '<S133>/FALSEConstant6' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean OutportBufferForPark_Pawl_flt_StatFA_I_i;/* '<S133>/FALSEConstant8' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean OutportBufferForPP_MotorPos_StatFA_Init_;/* '<S133>/FALSEConstant9' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean OutportBufferForPP_Pos_SensorFA_Init_Fro;/* '<S133>/FALSEConstant7' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

    TePPCR_e_PPawl_Request OutportBufferForVePPCR_e_PPawlRequest_Ou;/* '<S134>/Const2' */
    TePPCR_e_PPawl_Fdbck OutportBufferForVePPCR_e_PPawlFdbck_Out_;/* '<S134>/Const1' */

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_StateCode LePPCR_e_Prmry_Park_Pawl_Stat_Front_out;
                         /* '<S19>/PokePPCR_e_Prmry_Park_Pawl_StatChrt_Front' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_StateCode LePPCR_e_Prmry_Park_Pawl_Stat_out;
                               /* '<S18>/PokePPCR_e_Prmry_Park_Pawl_StatChrt' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_StateCode OutportBufferForPark_Pawl_Stat_Init;/* '<S133>/ConstantValue1' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_StateCode OutportBufferForPark_Pawl_Stat_Init_Fron;/* '<S133>/ConstantValue7' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_StateCode Merge_13;/* '<S27>/Merge_13' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_PosSnsr LePPCR_e_Prmry_PP_Pos_Sensor_Front_out;
                          /* '<S17>/PokePPCR_e_Prmry_PP_Pos_SensorChrt_Front' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_PosSnsr LePPCR_e_Prmry_PP_Pos_Sensor_out;
                                /* '<S16>/PokePPCR_e_Prmry_PP_Pos_SensorChrt' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_PosSnsr OutportBufferForPP_Pos_Sensor_Init;/* '<S133>/ConstantValue5' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_PosSnsr OutportBufferForPP_Pos_Sensor_Init_Front;/* '<S133>/ConstantValue10' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_PosSnsr Merge_3;  /* '<S27>/Merge_3' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

    TePPCR_e_PCUCtrl_PP_REQ OutportBufferForVePPCR_e_PPawl_HW_Reques;/* '<S134>/Const6' */

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_MtrPosStat LePPCR_e_Prmry_PP_Motor_Pos_Stat_Front_o;
                      /* '<S15>/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt_Front' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_MtrPosStat LePPCR_e_Prmry_PP_Motor_Pos_Stat_out;
                            /* '<S14>/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_MtrPosStat OutportBufferForPP_MotorPos_Stat_Init;/* '<S133>/ConstantValue2' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_MtrPosStat OutportBufferForPP_MotorPos_Stat_Init_Fr;/* '<S133>/ConstantValue8' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_MtrPosStat Merge_2;/* '<S27>/Merge_2' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_MPR_Pos LePPCR_e_Prmry_MPR_Pos_Sensor_out;
                               /* '<S13>/PokePPCR_e_Prmry_MPR_Pos_SensorChrt' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_MPR_Pos OutportBufferForMPR_Pos_Sensor_Init;/* '<S133>/ConstantValue6' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_MPR_Pos Prmry_MPR_Pos_Sensor;/* '<S34>/Prmry_MPR_Pos_Sensor' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_Flt_Stat LePPCR_e_Prmry_Park_Pawl_flt_Stat_Front_;
                     /* '<S21>/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt_Front' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_Flt_Stat LePPCR_e_Prmry_Park_Pawl_flt_Stat_out;
                           /* '<S20>/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_Flt_Stat OutportBufferForPark_Pawl_flt_Stat_Init;/* '<S133>/ConstantValue3' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_Flt_Stat OutportBufferForPark_Pawl_flt_Stat_Init_;/* '<S133>/ConstantValue9' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_Flt_Stat Merge_1; /* '<S27>/Merge_1' */

#define B_PPCR_AC_T_VARIANT_EXISTS
#endif

}
B_PPCR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_PPCR_ac_T
{

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    float32 UnitDelay_DSTATE;          /* '<S100>/Unit Delay' */

#define DW_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean UnitDelay_DSTATE_f;        /* '<S95>/Unit Delay' */

#define DW_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean UnitDelay_DSTATE_m;        /* '<S77>/Unit Delay' */

#define DW_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    boolean UnitDelay_DSTATE_d;        /* '<S76>/Unit Delay' */

#define DW_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_PP_REQ UnitDelay1_DSTATE;/* '<S58>/Unit Delay1' */

#define DW_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    TePPCR_e_PCUCtrl_PP_REQ NePPCR_e_PrvCmdVal;/* '<Root>/DSM_1' */

#define DW_PPCR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_PPCR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_PPCR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TePPCR_e_PPawl_Request Const2;/* '<S134>/Const2' */
    const TePPCR_e_PPawl_Fdbck Const1; /* '<S134>/Const1' */

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    const TePPCR_e_PCUCtrl_StateCode Constant;/* '<S135>/Constant' */

#define CONSTB_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    const TePPCR_e_PCUCtrl_StateCode Constant_k;/* '<S142>/Constant' */

#define CONSTB_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    const TePPCR_e_PCUCtrl_PosSnsr Constant_f;/* '<S140>/Constant' */

#define CONSTB_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    const TePPCR_e_PCUCtrl_PosSnsr Constant_n;/* '<S136>/Constant' */

#define CONSTB_PPCR_AC_T_VARIANT_EXISTS
#endif

    const TePPCR_e_PCUCtrl_PP_REQ Const6;/* '<S134>/Const6' */

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    const TePPCR_e_PCUCtrl_MtrPosStat Constant_kh;/* '<S137>/Constant' */

#define CONSTB_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    const TePPCR_e_PCUCtrl_MtrPosStat Constant_o;/* '<S143>/Constant' */

#define CONSTB_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    const TePPCR_e_PCUCtrl_MPR_Pos Constant_c;/* '<S141>/Constant' */

#define CONSTB_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    const TePPCR_e_PCUCtrl_Flt_Stat Constant_a;/* '<S138>/Constant' */

#define CONSTB_PPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_PPCR_FUNC_Enab

    const TePPCR_e_PCUCtrl_Flt_Stat Constant_m;/* '<S144>/Constant' */

#define CONSTB_PPCR_AC_T_VARIANT_EXISTS
#endif

}
ConstB_PPCR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PPCR
#include "MemMap.h"

extern VAR(B_PPCR_ac_T, PPCR_VAR_INIT) PPCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PPCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PPCR
#include "MemMap.h"

extern VAR(DW_PPCR_ac_T, PPCR_VAR_INIT) PPCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PPCR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_PPCR
#include "MemMap.h"

extern CONST(ConstB_PPCR_ac_T, PPCR_VAR_INIT) PPCR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_PPCR
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
 * '<Root>' : 'PPCR_ac'
 * '<S1>'   : 'PPCR_ac/FsftPPCR_b_Prmry_MPR_Pos_Sensor'
 * '<S2>'   : 'PPCR_ac/FsftPPCR_b_Prmry_PP_Motor_Pos_Stat'
 * '<S3>'   : 'PPCR_ac/FsftPPCR_b_Prmry_PP_Motor_Pos_Stat_Front'
 * '<S4>'   : 'PPCR_ac/FsftPPCR_b_Prmry_PP_Pos_Sensor'
 * '<S5>'   : 'PPCR_ac/FsftPPCR_b_Prmry_PP_Pos_Sensor_Front'
 * '<S6>'   : 'PPCR_ac/FsftPPCR_b_Prmry_Park_Pawl_Stat'
 * '<S7>'   : 'PPCR_ac/FsftPPCR_b_Prmry_Park_Pawl_Stat_Front'
 * '<S8>'   : 'PPCR_ac/FsftPPCR_b_Prmry_Park_Pawl_flt_Stat'
 * '<S9>'   : 'PPCR_ac/FsftPPCR_b_Prmry_Park_Pawl_flt_Stat_Front'
 * '<S10>'  : 'PPCR_ac/PPCR_MSG_FastTEF'
 * '<S11>'  : 'PPCR_ac/PPCR_MSG_PwrOff'
 * '<S12>'  : 'PPCR_ac/PPCR_MSG_PwrOn'
 * '<S13>'  : 'PPCR_ac/PokePPCR_e_Prmry_MPR_Pos_Sensor'
 * '<S14>'  : 'PPCR_ac/PokePPCR_e_Prmry_PP_Motor_Pos_Stat'
 * '<S15>'  : 'PPCR_ac/PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front'
 * '<S16>'  : 'PPCR_ac/PokePPCR_e_Prmry_PP_Pos_Sensor'
 * '<S17>'  : 'PPCR_ac/PokePPCR_e_Prmry_PP_Pos_Sensor_Front'
 * '<S18>'  : 'PPCR_ac/PokePPCR_e_Prmry_Park_Pawl_Stat'
 * '<S19>'  : 'PPCR_ac/PokePPCR_e_Prmry_Park_Pawl_Stat_Front'
 * '<S20>'  : 'PPCR_ac/PokePPCR_e_Prmry_Park_Pawl_flt_Stat'
 * '<S21>'  : 'PPCR_ac/PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Front'
 * '<S22>'  : 'PPCR_ac/FsftPPCR_b_Prmry_MPR_Pos_Sensor/FsftPPCR_b_Prmry_MPR_Pos_SensorChrt'
 * '<S23>'  : 'PPCR_ac/FsftPPCR_b_Prmry_PP_Motor_Pos_Stat/FsftPPCR_b_Prmry_PP_Motor_Pos_StatChrt'
 * '<S24>'  : 'PPCR_ac/FsftPPCR_b_Prmry_PP_Pos_Sensor/FsftPPCR_b_Prmry_PP_Pos_SensorChrt'
 * '<S25>'  : 'PPCR_ac/FsftPPCR_b_Prmry_Park_Pawl_Stat/FsftPPCR_b_Prmry_Park_Pawl_StatChrt'
 * '<S26>'  : 'PPCR_ac/FsftPPCR_b_Prmry_Park_Pawl_flt_Stat/FsftPPCR_b_Prmry_Park_Pawl_flt_StatChrt'
 * '<S27>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANBus'
 * '<S28>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANOutputs'
 * '<S29>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANOvrds'
 * '<S30>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_IntrnlInputs'
 * '<S31>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_IntrnlOutputs'
 * '<S32>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus'
 * '<S33>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANBus/CANBus_Rationalization_F'
 * '<S34>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANBus/CANBus_Rationalization_R'
 * '<S35>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANOutputs/EnumSetBlock1'
 * '<S36>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANOvrds/KePPCR_b_MPR_Pos_SensorOvrd'
 * '<S37>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANOvrds/KePPCR_b_PP_Motor_Pos_StatOvrd'
 * '<S38>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANOvrds/KePPCR_b_PP_Pos_SensorOvrd'
 * '<S39>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANOvrds/KePPCR_b_Park_Pawl_StatOvrd'
 * '<S40>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANOvrds/KePPCR_b_Park_Pawl_flt_StatOvrd'
 * '<S41>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANOvrds/KePPCR_e_MPR_Pos_SensorVal'
 * '<S42>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANOvrds/KePPCR_e_PP_Motor_Pos_StatVal'
 * '<S43>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANOvrds/KePPCR_e_PP_Pos_SensorVal'
 * '<S44>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANOvrds/KePPCR_e_Park_Pawl_StatVal'
 * '<S45>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_CANOvrds/KePPCR_e_Park_Pawl_flt_StatVal'
 * '<S46>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_IntrnlInputs/KePPCR_b_DiagResetOvrd'
 * '<S47>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_IntrnlInputs/KePPCR_b_DiagResetOvrdVal'
 * '<S48>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_IntrnlInputs/KePPCR_b_HCPShtDwnCmdOvrd'
 * '<S49>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_IntrnlInputs/KePPCR_b_HCPShtDwnCmdVal'
 * '<S50>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_IntrnlInputs/KePPCR_b_PPawlCmnd_Ovrd'
 * '<S51>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_IntrnlInputs/KePPCR_e_PPawlCmnd_OvrdVal'
 * '<S52>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_IntrnlOutputs/EnumSetBlock'
 * '<S53>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_IntrnlOutputs/EnumSetBlock2'
 * '<S54>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_IntrnlOutputs/SetBlock1'
 * '<S55>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_IntrnlOutputs/SetBlock3'
 * '<S56>'  : 'PPCR_ac/PPCR_MSG_FastTEF/Proc_IntrnlOutputs/SetBlock4'
 * '<S57>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DocBlock'
 * '<S58>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd'
 * '<S59>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl'
 * '<S60>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/Disengage'
 * '<S61>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/Engage'
 * '<S62>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/Enumerated_Constant1'
 * '<S63>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/Enumerated_Constant2'
 * '<S64>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/Enumerated_Constant3'
 * '<S65>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/Enumerated_Constant4'
 * '<S66>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/Enumerated_Constant5'
 * '<S67>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/Enumerated_Constant6'
 * '<S68>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/KaPPCR_e_PPawlReq_Map'
 * '<S69>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/KePPCR_b_PPawlReq_DBC_FXD'
 * '<S70>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/No_Req'
 * '<S71>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/PPawl_e_Disengage'
 * '<S72>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/PPawl_e_Engage'
 * '<S73>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/PPawl_e_Idle'
 * '<S74>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/PPawl_e_Unknown'
 * '<S75>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/SNA'
 * '<S76>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/SignalLatchOnWithReset1'
 * '<S77>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/SignalLatchOnWithReset2'
 * '<S78>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/Disengage/Enumerated_Constant1'
 * '<S79>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/Engage/Enumerated_Constant1'
 * '<S80>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/No_Req/Enumerated_Constant1'
 * '<S81>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/PPawl_e_Disengage/Enumerated_Constant3'
 * '<S82>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/PPawl_e_Engage/Enumerated_Constant2'
 * '<S83>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/PPawl_e_Idle/Enumerated_Constant3'
 * '<S84>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/PPawl_e_Unknown/Enumerated_Constant1'
 * '<S85>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/DtrmnParkPawlCmnd/SNA/Enumerated_Constant1'
 * '<S86>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Fault_Status'
 * '<S87>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Manual_Park_Release'
 * '<S88>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/MotorPosition'
 * '<S89>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status'
 * '<S90>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Set_PPawl_RemedialAction'
 * '<S91>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Fault_Status/Enumerated_Constant2'
 * '<S92>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Fault_Status/Enumerated_Constant3'
 * '<S93>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Fault_Status/Enumerated_Constant5'
 * '<S94>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Manual_Park_Release/Enumerated_Constant6'
 * '<S95>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Manual_Park_Release/SignalLatchOnWithReset'
 * '<S96>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/MotorPosition/Enumerated_Constant6'
 * '<S97>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/MotorPosition/Enumerated_Constant7'
 * '<S98>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/MotorPosition/KePPCR_t_BtwRngDbnc'
 * '<S99>'  : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/MotorPosition/KePPCR_t_dT'
 * '<S100>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/MotorPosition/Timer_Retrigger_Reset_Enabled'
 * '<S101>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Disengaged'
 * '<S102>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Disengaging'
 * '<S103>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Dither_Diseng'
 * '<S104>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Dither_eng'
 * '<S105>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Engaged'
 * '<S106>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Engaging'
 * '<S107>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Enumerated_Constant1'
 * '<S108>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Enumerated_Constant10'
 * '<S109>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Enumerated_Constant11'
 * '<S110>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Enumerated_Constant2'
 * '<S111>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Enumerated_Constant3'
 * '<S112>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Enumerated_Constant4'
 * '<S113>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Enumerated_Constant5'
 * '<S114>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Enumerated_Constant6'
 * '<S115>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Enumerated_Constant7'
 * '<S116>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Enumerated_Constant8'
 * '<S117>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Enumerated_Constant9'
 * '<S118>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Fault'
 * '<S119>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Init'
 * '<S120>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Stuck'
 * '<S121>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Unknown'
 * '<S122>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Disengaged/Enumerated_Constant1'
 * '<S123>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Disengaging/Enumerated_Constant1'
 * '<S124>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Dither_Diseng/Enumerated_Constant1'
 * '<S125>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Dither_eng/Enumerated_Constant1'
 * '<S126>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Engaged/Enumerated_Constant1'
 * '<S127>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Engaging/Enumerated_Constant1'
 * '<S128>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Fault/Enumerated_Constant1'
 * '<S129>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Init/Enumerated_Constant1'
 * '<S130>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Stuck/Enumerated_Constant1'
 * '<S131>' : 'PPCR_ac/PPCR_MSG_FastTEF/VldtParkStatus/PCUCntrl/Park_Pawl_Status/Unknown/Enumerated_Constant1'
 * '<S132>' : 'PPCR_ac/PPCR_MSG_PwrOn/DSM_Init'
 * '<S133>' : 'PPCR_ac/PPCR_MSG_PwrOn/Init_PrmryCntrlr1'
 * '<S134>' : 'PPCR_ac/PPCR_MSG_PwrOn/Sub_Out_Init'
 * '<S135>' : 'PPCR_ac/PPCR_MSG_PwrOn/Init_PrmryCntrlr1/ConstantValue1'
 * '<S136>' : 'PPCR_ac/PPCR_MSG_PwrOn/Init_PrmryCntrlr1/ConstantValue10'
 * '<S137>' : 'PPCR_ac/PPCR_MSG_PwrOn/Init_PrmryCntrlr1/ConstantValue2'
 * '<S138>' : 'PPCR_ac/PPCR_MSG_PwrOn/Init_PrmryCntrlr1/ConstantValue3'
 * '<S139>' : 'PPCR_ac/PPCR_MSG_PwrOn/Init_PrmryCntrlr1/ConstantValue4'
 * '<S140>' : 'PPCR_ac/PPCR_MSG_PwrOn/Init_PrmryCntrlr1/ConstantValue5'
 * '<S141>' : 'PPCR_ac/PPCR_MSG_PwrOn/Init_PrmryCntrlr1/ConstantValue6'
 * '<S142>' : 'PPCR_ac/PPCR_MSG_PwrOn/Init_PrmryCntrlr1/ConstantValue7'
 * '<S143>' : 'PPCR_ac/PPCR_MSG_PwrOn/Init_PrmryCntrlr1/ConstantValue8'
 * '<S144>' : 'PPCR_ac/PPCR_MSG_PwrOn/Init_PrmryCntrlr1/ConstantValue9'
 * '<S145>' : 'PPCR_ac/PokePPCR_e_Prmry_MPR_Pos_Sensor/KaPPCR_e_Prmry_MPR_Pos_Sensor_Map'
 * '<S146>' : 'PPCR_ac/PokePPCR_e_Prmry_MPR_Pos_Sensor/PokePPCR_e_Prmry_MPR_Pos_SensorChrt'
 * '<S147>' : 'PPCR_ac/PokePPCR_e_Prmry_PP_Motor_Pos_Stat/KaPPCR_e_Prmry_PP_Motor_Pos_Stat_Map'
 * '<S148>' : 'PPCR_ac/PokePPCR_e_Prmry_PP_Motor_Pos_Stat/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt'
 * '<S149>' : 'PPCR_ac/PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front/KaPPCR_e_Prmry_PP_Motor_Pos_Stat_Map_Front'
 * '<S150>' : 'PPCR_ac/PokePPCR_e_Prmry_PP_Motor_Pos_Stat_Front/PokePPCR_e_Prmry_PP_Motor_Pos_StatChrt_Front'
 * '<S151>' : 'PPCR_ac/PokePPCR_e_Prmry_PP_Pos_Sensor/KaPPCR_e_Prmry_PP_Pos_Sensor_Map'
 * '<S152>' : 'PPCR_ac/PokePPCR_e_Prmry_PP_Pos_Sensor/PokePPCR_e_Prmry_PP_Pos_SensorChrt'
 * '<S153>' : 'PPCR_ac/PokePPCR_e_Prmry_PP_Pos_Sensor_Front/KaPPCR_e_Prmry_PP_Pos_Sensor_Map_Front'
 * '<S154>' : 'PPCR_ac/PokePPCR_e_Prmry_PP_Pos_Sensor_Front/PokePPCR_e_Prmry_PP_Pos_SensorChrt_Front'
 * '<S155>' : 'PPCR_ac/PokePPCR_e_Prmry_Park_Pawl_Stat/KaPPCR_e_Prmry_Park_Pawl_Stat_Map'
 * '<S156>' : 'PPCR_ac/PokePPCR_e_Prmry_Park_Pawl_Stat/PokePPCR_e_Prmry_Park_Pawl_StatChrt'
 * '<S157>' : 'PPCR_ac/PokePPCR_e_Prmry_Park_Pawl_Stat_Front/KaPPCR_e_Prmry_Park_Pawl_Stat_Map_Front'
 * '<S158>' : 'PPCR_ac/PokePPCR_e_Prmry_Park_Pawl_Stat_Front/PokePPCR_e_Prmry_Park_Pawl_StatChrt_Front'
 * '<S159>' : 'PPCR_ac/PokePPCR_e_Prmry_Park_Pawl_flt_Stat/KaPPCR_e_Prmry_Park_Pawl_flt_Stat_Map'
 * '<S160>' : 'PPCR_ac/PokePPCR_e_Prmry_Park_Pawl_flt_Stat/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt'
 * '<S161>' : 'PPCR_ac/PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Front/KaPPCR_e_Prmry_Park_Pawl_flt_Stat_Map_Front'
 * '<S162>' : 'PPCR_ac/PokePPCR_e_Prmry_Park_Pawl_flt_Stat_Front/PokePPCR_e_Prmry_Park_Pawl_flt_StatChrt_Front'
 */
#endif                                 /* RTW_HEADER_PPCR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
