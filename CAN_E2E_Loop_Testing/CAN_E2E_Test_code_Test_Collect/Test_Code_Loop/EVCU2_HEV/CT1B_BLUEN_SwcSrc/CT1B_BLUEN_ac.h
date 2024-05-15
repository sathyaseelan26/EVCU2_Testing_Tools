/*
 * File: CT1B_BLUEN_ac.h
 *
 * Code generated for Simulink model 'CT1B_BLUEN_ac'.
 *
 * Model version                  : 1.45
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:45:43 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CT1B_BLUEN_ac_h_
#define RTW_HEADER_CT1B_BLUEN_ac_h_
#include "Rte_Type.h"
#ifndef CT1B_BLUEN_ac_COMMON_INCLUDES_
#define CT1B_BLUEN_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CT1B_BLUEN.h"
#endif                                 /* CT1B_BLUEN_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

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
 * '<Root>' : 'CT1B_BLUEN_ac'
 * '<S1>'   : 'CT1B_BLUEN_ac/Initialize Function'
 * '<S2>'   : 'CT1B_BLUEN_ac/SigMngt'
 * '<S3>'   : 'CT1B_BLUEN_ac/SigMngt/HYBRID_DISPLAY2'
 * '<S4>'   : 'CT1B_BLUEN_ac/SigMngt/HYBRID_HVAC'
 * '<S5>'   : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS'
 * '<S6>'   : 'CT1B_BLUEN_ac/SigMngt/HYBRID_THERMAL_COMMAND'
 * '<S7>'   : 'CT1B_BLUEN_ac/SigMngt/VDCM_PWT3'
 * '<S8>'   : 'CT1B_BLUEN_ac/SigMngt/HYBRID_DISPLAY2/APCM_Rq_Display'
 * '<S9>'   : 'CT1B_BLUEN_ac/SigMngt/HYBRID_HVAC/CabinConditioningSts'
 * '<S10>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_HVAC/CabinPreconditionReqSts'
 * '<S11>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_HVAC/CompressorState'
 * '<S12>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_HVAC/ElecCoolantHtrPwr'
 * '<S13>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_HVAC/FRfShVlvSts'
 * '<S14>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_HVAC/HTAuxPmpMontrngRPM'
 * '<S15>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_HVAC/HTAuxPmpRPMAct'
 * '<S16>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_HVAC/HVBatCoolantLevelLow_DPT'
 * '<S17>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_HVAC/HVBatCritCondT'
 * '<S18>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_HVAC/HeaterCoreInletTemp'
 * '<S19>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_HVAC/SchCond_Time_Till_Dep'
 * '<S20>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_HVAC/Sch_PreCondition_Sts'
 * '<S21>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorA_DC_Current'
 * '<S22>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorA_DC_Voltage'
 * '<S23>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorA_InverterState'
 * '<S24>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorA_InverterTemp'
 * '<S25>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorA_RPM'
 * '<S26>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorA_Temperature'
 * '<S27>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorA_TorqueAchieved'
 * '<S28>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_DC_Current'
 * '<S29>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_DC_Voltage'
 * '<S30>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_InverterState'
 * '<S31>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_InverterTemp'
 * '<S32>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_RPM'
 * '<S33>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_Temperature'
 * '<S34>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_TorqueAchieved'
 * '<S35>'  : 'CT1B_BLUEN_ac/SigMngt/HYBRID_THERMAL_COMMAND/PE_CoolTempIn'
 * '<S36>'  : 'CT1B_BLUEN_ac/SigMngt/VDCM_PWT3/T4_Sensor_Temp'
 */
#endif                                 /* RTW_HEADER_CT1B_BLUEN_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
