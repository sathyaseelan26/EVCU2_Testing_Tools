/*
 * File: CR3B_BLUEN_ac.h
 *
 * Code generated for Simulink model 'CR3B_BLUEN_ac'.
 *
 * Model version                  : 1.54
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:45:00 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CR3B_BLUEN_ac_h_
#define RTW_HEADER_CR3B_BLUEN_ac_h_
#include "Rte_Type.h"
#ifndef CR3B_BLUEN_ac_COMMON_INCLUDES_
#define CR3B_BLUEN_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CR3B_BLUEN.h"
#endif                                 /* CR3B_BLUEN_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_CR3B_BLUEN_ac_T
{
    float32 TmpSignalConversionAtVeSR1B_v_V;
    float32 TmpSignalConversionAtVeSR1B_a_L;
    float32 TmpSignalConversionAtVeSR1B_a_i;
    float32 TmpSignalConversionAtVeSR1B_Pct;
    float32 TmpSignalConversionAtVeSR1B_phi;
    float32 TmpSignalConversionAtVeSR1B_dph;
    float32 TmpSignalConversionAtVeSR1B_a_h;
    float32 TmpSignalConversionAtVeSR1B_a_o;
    float32 TmpSignalConversionAtVeSR1B_d_m;
    uint8 TmpSignalConversionAtVeSR1B_y_A;
    uint8 TmpSignalConversionAtVeSR1B_y_B;
    boolean TmpSignalConversionAtVeSR1B_b_I;
    boolean TmpSignalConversionAtVeSR1B_b_e;
    boolean TmpSignalConversionAtVeSR1B_b_L;
    boolean TmpSignalConversionAtVeSR1B_b_o;
    boolean TmpSignalConversionAtVeSR1B_b_Y;
}
B_CR3B_BLUEN_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR3B_BLUEN
#include "MemMap.h"

extern VAR(B_CR3B_BLUEN_ac_T, CR3B_BLUEN_VAR_INIT) CR3B_BLUEN_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR3B_BLUEN
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
 * '<Root>' : 'CR3B_BLUEN_ac'
 * '<S1>'   : 'CR3B_BLUEN_ac/Initialize Function'
 * '<S2>'   : 'CR3B_BLUEN_ac/SigMngt'
 * '<S3>'   : 'CR3B_BLUEN_ac/SigMngt/ADAS_FD_INFO'
 * '<S4>'   : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2'
 * '<S5>'   : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3'
 * '<S6>'   : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_7'
 * '<S7>'   : 'CR3B_BLUEN_ac/SigMngt/EPS_FD_1'
 * '<S8>'   : 'CR3B_BLUEN_ac/SigMngt/Enumerated_Constant1'
 * '<S9>'   : 'CR3B_BLUEN_ac/SigMngt/Enumerated_Constant2'
 * '<S10>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO'
 * '<S11>'  : 'CR3B_BLUEN_ac/SigMngt/KeCR3B_b_CanLocStatusBypEnbl'
 * '<S12>'  : 'CR3B_BLUEN_ac/SigMngt/KeCR3B_e_CanLocStatus'
 * '<S13>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3'
 * '<S14>'  : 'CR3B_BLUEN_ac/SigMngt/SWITCH_UP'
 * '<S15>'  : 'CR3B_BLUEN_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts'
 * '<S16>'  : 'CR3B_BLUEN_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts/ArbtrLogic_Protected'
 * '<S17>'  : 'CR3B_BLUEN_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts/Fsft'
 * '<S18>'  : 'CR3B_BLUEN_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts/Poke'
 * '<S19>'  : 'CR3B_BLUEN_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts/ArbtrLogic_Protected/Chart'
 * '<S20>'  : 'CR3B_BLUEN_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts/Fsft/Failsoft'
 * '<S21>'  : 'CR3B_BLUEN_ac/SigMngt/ADAS_FD_INFO/ACC_Systemsts/Poke/Poke'
 * '<S22>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/Brk_Stat'
 * '<S23>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig'
 * '<S24>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/Brk_Stat/ArbtrLogic_Protected'
 * '<S25>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/Brk_Stat/Fsft'
 * '<S26>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/Brk_Stat/Poke'
 * '<S27>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/Brk_Stat/ArbtrLogic_Protected/Chart'
 * '<S28>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/Brk_Stat/Fsft/Failsoft'
 * '<S29>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/Brk_Stat/Poke/Poke'
 * '<S30>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig/ArbtrLogic_Protected'
 * '<S31>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig/Fsft'
 * '<S32>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig/Poke'
 * '<S33>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig/ArbtrLogic_Protected/Chart'
 * '<S34>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig/Fsft/Failsoft'
 * '<S35>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_2/VehicleSpeedVSOSig/Poke/Poke'
 * '<S36>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM'
 * '<S37>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM'
 * '<S38>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM/ArbtrLogic_Protected'
 * '<S39>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM/Fsft'
 * '<S40>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM/Poke'
 * '<S41>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM/ArbtrLogic_Protected/Chart'
 * '<S42>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM/Fsft/Failsoft'
 * '<S43>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LatAccelerationOffset_BSM/Poke/Poke'
 * '<S44>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM/ArbtrLogic_Protected'
 * '<S45>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM/Fsft'
 * '<S46>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM/Poke'
 * '<S47>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM/ArbtrLogic_Protected/Chart'
 * '<S48>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM/Fsft/Failsoft'
 * '<S49>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_3/LongAccelerationOffset_BSM/Poke/Poke'
 * '<S50>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn'
 * '<S51>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn/ArbtrLogic_Protected'
 * '<S52>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn/Fsft'
 * '<S53>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn/Poke'
 * '<S54>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn/ArbtrLogic_Protected/Chart'
 * '<S55>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn/Fsft/Failsoft'
 * '<S56>'  : 'CR3B_BLUEN_ac/SigMngt/BRAKE_FD_7/BrakePdlPosn/Poke/Poke'
 * '<S57>'  : 'CR3B_BLUEN_ac/SigMngt/EPS_FD_1/LwsAngle'
 * '<S58>'  : 'CR3B_BLUEN_ac/SigMngt/EPS_FD_1/LwsSpeed'
 * '<S59>'  : 'CR3B_BLUEN_ac/SigMngt/EPS_FD_1/LwsAngle/ArbtrLogic_Protected'
 * '<S60>'  : 'CR3B_BLUEN_ac/SigMngt/EPS_FD_1/LwsAngle/Fsft'
 * '<S61>'  : 'CR3B_BLUEN_ac/SigMngt/EPS_FD_1/LwsAngle/Poke'
 * '<S62>'  : 'CR3B_BLUEN_ac/SigMngt/EPS_FD_1/LwsAngle/ArbtrLogic_Protected/Chart'
 * '<S63>'  : 'CR3B_BLUEN_ac/SigMngt/EPS_FD_1/LwsAngle/Fsft/Failsoft'
 * '<S64>'  : 'CR3B_BLUEN_ac/SigMngt/EPS_FD_1/LwsAngle/Poke/Poke'
 * '<S65>'  : 'CR3B_BLUEN_ac/SigMngt/EPS_FD_1/LwsSpeed/ArbtrLogic_Protected'
 * '<S66>'  : 'CR3B_BLUEN_ac/SigMngt/EPS_FD_1/LwsSpeed/Poke'
 * '<S67>'  : 'CR3B_BLUEN_ac/SigMngt/EPS_FD_1/LwsSpeed/ArbtrLogic_Protected/Chart'
 * '<S68>'  : 'CR3B_BLUEN_ac/SigMngt/EPS_FD_1/LwsSpeed/Poke/Poke'
 * '<S69>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTCommand'
 * '<S70>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTConfirm'
 * '<S71>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTCommand/ArbtrLogic_Protected'
 * '<S72>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTCommand/Fsft'
 * '<S73>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTCommand/Poke'
 * '<S74>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTCommand/ArbtrLogic_Protected/Chart'
 * '<S75>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTCommand/Fsft/Failsoft'
 * '<S76>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTCommand/Poke/Poke'
 * '<S77>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTConfirm/ArbtrLogic_Protected'
 * '<S78>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTConfirm/Fsft'
 * '<S79>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTConfirm/Poke'
 * '<S80>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTConfirm/ArbtrLogic_Protected/Chart'
 * '<S81>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTConfirm/Fsft/Failsoft'
 * '<S82>'  : 'CR3B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTConfirm/Poke/Poke'
 * '<S83>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LatAcceleration'
 * '<S84>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LatAccelerationFailSts'
 * '<S85>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LongAcceleration'
 * '<S86>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LongAccelerationFailSts'
 * '<S87>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/YawRate'
 * '<S88>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/YawRateFailSts'
 * '<S89>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LatAcceleration/ArbtrLogic_Protected'
 * '<S90>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LatAcceleration/Poke'
 * '<S91>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LatAcceleration/ArbtrLogic_Protected/Chart'
 * '<S92>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LatAcceleration/Poke/Poke'
 * '<S93>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LatAccelerationFailSts/ArbtrLogic_Protected'
 * '<S94>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LatAccelerationFailSts/Poke'
 * '<S95>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LatAccelerationFailSts/ArbtrLogic_Protected/Chart'
 * '<S96>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LatAccelerationFailSts/Poke/Poke'
 * '<S97>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LongAcceleration/ArbtrLogic_Protected'
 * '<S98>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LongAcceleration/Poke'
 * '<S99>'  : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LongAcceleration/ArbtrLogic_Protected/Chart'
 * '<S100>' : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LongAcceleration/Poke/Poke'
 * '<S101>' : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LongAccelerationFailSts/ArbtrLogic_Protected'
 * '<S102>' : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LongAccelerationFailSts/Poke'
 * '<S103>' : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LongAccelerationFailSts/ArbtrLogic_Protected/Chart'
 * '<S104>' : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/LongAccelerationFailSts/Poke/Poke'
 * '<S105>' : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/YawRate/ArbtrLogic_Protected'
 * '<S106>' : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/YawRate/Poke'
 * '<S107>' : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/YawRate/ArbtrLogic_Protected/Chart'
 * '<S108>' : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/YawRate/Poke/Poke'
 * '<S109>' : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/YawRateFailSts/ArbtrLogic_Protected'
 * '<S110>' : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/YawRateFailSts/Poke'
 * '<S111>' : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/YawRateFailSts/ArbtrLogic_Protected/Chart'
 * '<S112>' : 'CR3B_BLUEN_ac/SigMngt/ORC_FD_3/YawRateFailSts/Poke/Poke'
 */
#endif                                 /* RTW_HEADER_CR3B_BLUEN_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
