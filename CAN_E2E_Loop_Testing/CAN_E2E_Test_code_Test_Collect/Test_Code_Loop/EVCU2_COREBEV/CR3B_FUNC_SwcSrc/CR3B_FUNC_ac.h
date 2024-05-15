/*
 * File: CR3B_FUNC_ac.h
 *
 * Code generated for Simulink model 'CR3B_FUNC_ac'.
 *
 * Model version                  : 1.53
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:23:39 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CR3B_FUNC_ac_h_
#define RTW_HEADER_CR3B_FUNC_ac_h_
#include "Rte_Type.h"
#ifndef CR3B_FUNC_ac_COMMON_INCLUDES_
#define CR3B_FUNC_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CR3B_FUNC.h"
#endif                                 /* CR3B_FUNC_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_CR3B_FUNC_ac_T
{
    float32 TmpSignalConversionAtVeSR1B_v_V;
    float32 TmpSignalConversionAtVeSR1B_a_L;
    float32 TmpSignalConversionAtVeSR1B_a_j;
    float32 TmpSignalConversionAtVeSR1B_Pct;
    float32 TmpSignalConversionAtVeSR1B_phi;
    float32 TmpSignalConversionAtVeSR1B_dph;
    float32 TmpSignalConversionAtVeSR1B_a_h;
    float32 TmpSignalConversionAtVeSR1B_a_m;
    float32 TmpSignalConversionAtVeSR1B_d_m;
    uint8 TmpSignalConversionAtVeSR1B_y_A;
    uint8 TmpSignalConversionAtVeSR1B_y_B;

#if Rte_SysCon_VrntCR3B_THASTAT

    uint8 TmpSignalConversionAtVeSR1B_y_T;/* '<S2>/VeSR1B_y_THA_STAT_FD14' */

#define B_CR3B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR3B_THASpeedLimit

    uint8 TmpSignalConversionAtVeSR1B_y_a;
                                      /* '<S2>/VeSR1B_y_THA_Speed_Limit_FD14' */

#define B_CR3B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR3B_TRSCSTAT

    uint8 TmpSignalConversionAtVeSR1B_y_d;/* '<S2>/VeSR1B_y_TRSC_STAT' */

#define B_CR3B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR3B_TRSCSpeedLimitReq

    uint8 TmpSignalConversionAtVeSR1B_y_h;/* '<S2>/VeSR1B_y_TRSC_SpeedLimit_Req' */

#define B_CR3B_FUNC_AC_T_VARIANT_EXISTS
#endif

    boolean TmpSignalConversionAtVeSR1B_b_A;
    boolean TmpSignalConversionAtVeSR1B_b_I;
    boolean TmpSignalConversionAtVeSR1B_b_e;
    boolean TmpSignalConversionAtVeSR1B_b_L;
    boolean TmpSignalConversionAtVeSR1B_b_p;
    boolean TmpSignalConversionAtVeSR1B_b_Y;
}
B_CR3B_FUNC_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR3B_FUNC
#include "MemMap.h"

extern VAR(B_CR3B_FUNC_ac_T, CR3B_FUNC_VAR_INIT) CR3B_FUNC_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR3B_FUNC
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
 * '<Root>' : 'CR3B_FUNC_ac'
 * '<S1>'   : 'CR3B_FUNC_ac/Initialize Function'
 * '<S2>'   : 'CR3B_FUNC_ac/SigMngt'
 * '<S3>'   : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO'
 * '<S4>'   : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2'
 * '<S5>'   : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3'
 * '<S6>'   : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_7'
 * '<S7>'   : 'CR3B_FUNC_ac/SigMngt/EPS_FD_1'
 * '<S8>'   : 'CR3B_FUNC_ac/SigMngt/Enumerated_Constant1'
 * '<S9>'   : 'CR3B_FUNC_ac/SigMngt/Enumerated_Constant2'
 * '<S10>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO'
 * '<S11>'  : 'CR3B_FUNC_ac/SigMngt/KeCR3B_b_CanLocStatusBypEnbl'
 * '<S12>'  : 'CR3B_FUNC_ac/SigMngt/KeCR3B_e_CanLocStatus'
 * '<S13>'  : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3'
 * '<S14>'  : 'CR3B_FUNC_ac/SigMngt/SWITCH_UP'
 * '<S15>'  : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1'
 * '<S16>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts'
 * '<S17>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Wheel_Torque_Enabled'
 * '<S18>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts/ArbtrLogic_Protected'
 * '<S19>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts/Fsft'
 * '<S20>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts/Poke'
 * '<S21>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts/ArbtrLogic_Protected/Chart'
 * '<S22>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts/Fsft/Failsoft'
 * '<S23>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts/Poke/Poke'
 * '<S24>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Wheel_Torque_Enabled/ArbtrLogic_Protected'
 * '<S25>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Wheel_Torque_Enabled/Fsft'
 * '<S26>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Wheel_Torque_Enabled/Poke'
 * '<S27>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Wheel_Torque_Enabled/ArbtrLogic_Protected/Chart'
 * '<S28>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Wheel_Torque_Enabled/Fsft/Failsoft'
 * '<S29>'  : 'CR3B_FUNC_ac/SigMngt/ADAS_FD_INFO/ACC_Wheel_Torque_Enabled/Poke/Poke'
 * '<S30>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/Brk_Stat'
 * '<S31>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig'
 * '<S32>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/Brk_Stat/ArbtrLogic_Protected'
 * '<S33>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/Brk_Stat/Fsft'
 * '<S34>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/Brk_Stat/Poke'
 * '<S35>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/Brk_Stat/ArbtrLogic_Protected/Chart'
 * '<S36>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/Brk_Stat/Fsft/Failsoft'
 * '<S37>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/Brk_Stat/Poke/Poke'
 * '<S38>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig/ArbtrLogic_Protected'
 * '<S39>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig/Fsft'
 * '<S40>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig/Poke'
 * '<S41>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig/ArbtrLogic_Protected/Chart'
 * '<S42>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig/Fsft/Failsoft'
 * '<S43>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig/Poke/Poke'
 * '<S44>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM'
 * '<S45>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM'
 * '<S46>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM/ArbtrLogic_Protected'
 * '<S47>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM/Fsft'
 * '<S48>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM/Poke'
 * '<S49>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM/ArbtrLogic_Protected/Chart'
 * '<S50>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM/Fsft/Failsoft'
 * '<S51>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM/Poke/Poke'
 * '<S52>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM/ArbtrLogic_Protected'
 * '<S53>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM/Fsft'
 * '<S54>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM/Poke'
 * '<S55>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM/ArbtrLogic_Protected/Chart'
 * '<S56>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM/Fsft/Failsoft'
 * '<S57>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM/Poke/Poke'
 * '<S58>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn'
 * '<S59>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn/ArbtrLogic_Protected'
 * '<S60>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn/Fsft'
 * '<S61>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn/Poke'
 * '<S62>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn/ArbtrLogic_Protected/Chart'
 * '<S63>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn/Fsft/Failsoft'
 * '<S64>'  : 'CR3B_FUNC_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn/Poke/Poke'
 * '<S65>'  : 'CR3B_FUNC_ac/SigMngt/EPS_FD_1/LwsAngle'
 * '<S66>'  : 'CR3B_FUNC_ac/SigMngt/EPS_FD_1/LwsSpeed'
 * '<S67>'  : 'CR3B_FUNC_ac/SigMngt/EPS_FD_1/LwsAngle/ArbtrLogic_Protected'
 * '<S68>'  : 'CR3B_FUNC_ac/SigMngt/EPS_FD_1/LwsAngle/Fsft'
 * '<S69>'  : 'CR3B_FUNC_ac/SigMngt/EPS_FD_1/LwsAngle/Poke'
 * '<S70>'  : 'CR3B_FUNC_ac/SigMngt/EPS_FD_1/LwsAngle/ArbtrLogic_Protected/Chart'
 * '<S71>'  : 'CR3B_FUNC_ac/SigMngt/EPS_FD_1/LwsAngle/Fsft/Failsoft'
 * '<S72>'  : 'CR3B_FUNC_ac/SigMngt/EPS_FD_1/LwsAngle/Poke/Poke'
 * '<S73>'  : 'CR3B_FUNC_ac/SigMngt/EPS_FD_1/LwsSpeed/ArbtrLogic_Protected'
 * '<S74>'  : 'CR3B_FUNC_ac/SigMngt/EPS_FD_1/LwsSpeed/Poke'
 * '<S75>'  : 'CR3B_FUNC_ac/SigMngt/EPS_FD_1/LwsSpeed/ArbtrLogic_Protected/Chart'
 * '<S76>'  : 'CR3B_FUNC_ac/SigMngt/EPS_FD_1/LwsSpeed/Poke/Poke'
 * '<S77>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTCommand'
 * '<S78>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTConfirm'
 * '<S79>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTCommand/ArbtrLogic_Protected'
 * '<S80>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTCommand/Fsft'
 * '<S81>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTCommand/Poke'
 * '<S82>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTCommand/ArbtrLogic_Protected/Chart'
 * '<S83>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTCommand/Fsft/Failsoft'
 * '<S84>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTCommand/Poke/Poke'
 * '<S85>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTConfirm/ArbtrLogic_Protected'
 * '<S86>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTConfirm/Fsft'
 * '<S87>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTConfirm/Poke'
 * '<S88>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTConfirm/ArbtrLogic_Protected/Chart'
 * '<S89>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTConfirm/Fsft/Failsoft'
 * '<S90>'  : 'CR3B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTConfirm/Poke/Poke'
 * '<S91>'  : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LatAcceleration'
 * '<S92>'  : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LatAccelerationFailSts'
 * '<S93>'  : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LongAcceleration'
 * '<S94>'  : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LongAccelerationFailSts'
 * '<S95>'  : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/YawRate'
 * '<S96>'  : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/YawRateFailSts'
 * '<S97>'  : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LatAcceleration/ArbtrLogic_Protected'
 * '<S98>'  : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LatAcceleration/Poke'
 * '<S99>'  : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LatAcceleration/ArbtrLogic_Protected/Chart'
 * '<S100>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LatAcceleration/Poke/Poke'
 * '<S101>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LatAccelerationFailSts/ArbtrLogic_Protected'
 * '<S102>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LatAccelerationFailSts/Poke'
 * '<S103>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LatAccelerationFailSts/ArbtrLogic_Protected/Chart'
 * '<S104>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LatAccelerationFailSts/Poke/Poke'
 * '<S105>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LongAcceleration/ArbtrLogic_Protected'
 * '<S106>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LongAcceleration/Poke'
 * '<S107>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LongAcceleration/ArbtrLogic_Protected/Chart'
 * '<S108>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LongAcceleration/Poke/Poke'
 * '<S109>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LongAccelerationFailSts/ArbtrLogic_Protected'
 * '<S110>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LongAccelerationFailSts/Poke'
 * '<S111>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LongAccelerationFailSts/ArbtrLogic_Protected/Chart'
 * '<S112>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/LongAccelerationFailSts/Poke/Poke'
 * '<S113>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/YawRate/ArbtrLogic_Protected'
 * '<S114>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/YawRate/Poke'
 * '<S115>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/YawRate/ArbtrLogic_Protected/Chart'
 * '<S116>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/YawRate/Poke/Poke'
 * '<S117>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/YawRateFailSts/ArbtrLogic_Protected'
 * '<S118>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/YawRateFailSts/Poke'
 * '<S119>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/YawRateFailSts/ArbtrLogic_Protected/Chart'
 * '<S120>' : 'CR3B_FUNC_ac/SigMngt/ORC_FD_3/YawRateFailSts/Poke/Poke'
 * '<S121>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_STAT'
 * '<S122>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_Speed_Limit'
 * '<S123>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_STAT'
 * '<S124>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_SpeedLimit_Req'
 * '<S125>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_STAT/THA_STAT'
 * '<S126>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_STAT/THA_STAT/ArbtrLogic_Protected'
 * '<S127>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_STAT/THA_STAT/Fsft'
 * '<S128>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_STAT/THA_STAT/Poke'
 * '<S129>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_STAT/THA_STAT/ArbtrLogic_Protected/Chart'
 * '<S130>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_STAT/THA_STAT/Fsft/Failsoft'
 * '<S131>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_STAT/THA_STAT/Poke/Poke'
 * '<S132>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_Speed_Limit/THA_Speed_Limit'
 * '<S133>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_Speed_Limit/THA_Speed_Limit/ArbtrLogic_Protected'
 * '<S134>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_Speed_Limit/THA_Speed_Limit/Fsft'
 * '<S135>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_Speed_Limit/THA_Speed_Limit/Poke'
 * '<S136>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_Speed_Limit/THA_Speed_Limit/ArbtrLogic_Protected/Chart'
 * '<S137>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_Speed_Limit/THA_Speed_Limit/Fsft/Failsoft'
 * '<S138>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/THA_Speed_Limit/THA_Speed_Limit/Poke/Poke'
 * '<S139>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_STAT/TRSC_STAT'
 * '<S140>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_STAT/TRSC_STAT/ArbtrLogic_Protected'
 * '<S141>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_STAT/TRSC_STAT/Fsft'
 * '<S142>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_STAT/TRSC_STAT/Poke'
 * '<S143>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_STAT/TRSC_STAT/ArbtrLogic_Protected/Chart'
 * '<S144>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_STAT/TRSC_STAT/Fsft/Failsoft'
 * '<S145>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_STAT/TRSC_STAT/Poke/Poke'
 * '<S146>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_SpeedLimit_Req/TRSC_SpeedLimit_Req'
 * '<S147>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_SpeedLimit_Req/TRSC_SpeedLimit_Req/ArbtrLogic_Protected'
 * '<S148>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_SpeedLimit_Req/TRSC_SpeedLimit_Req/Fsft'
 * '<S149>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_SpeedLimit_Req/TRSC_SpeedLimit_Req/Poke'
 * '<S150>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_SpeedLimit_Req/TRSC_SpeedLimit_Req/ArbtrLogic_Protected/Chart'
 * '<S151>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_SpeedLimit_Req/TRSC_SpeedLimit_Req/Fsft/Failsoft'
 * '<S152>' : 'CR3B_FUNC_ac/SigMngt/TRSCM_FD_1/TRSC_SpeedLimit_Req/TRSC_SpeedLimit_Req/Poke/Poke'
 */
#endif                                 /* RTW_HEADER_CR3B_FUNC_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
