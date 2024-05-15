/*
 * File: CT5B_BLUEN_ac.h
 *
 * Code generated for Simulink model 'CT5B_BLUEN_ac'.
 *
 * Model version                  : 1.45
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:47:09 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CT5B_BLUEN_ac_h_
#define RTW_HEADER_CT5B_BLUEN_ac_h_
#include "Rte_Type.h"
#ifndef CT5B_BLUEN_ac_COMMON_INCLUDES_
#define CT5B_BLUEN_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CT5B_BLUEN.h"
#endif                                 /* CT5B_BLUEN_ac_COMMON_INCLUDES_ */

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
 * '<Root>' : 'CT5B_BLUEN_ac'
 * '<S1>'   : 'CT5B_BLUEN_ac/Initialize Function'
 * '<S2>'   : 'CT5B_BLUEN_ac/SigMngt'
 * '<S3>'   : 'CT5B_BLUEN_ac/SigMngt/BCM_FD_10'
 * '<S4>'   : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND'
 * '<S5>'   : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS'
 * '<S6>'   : 'CT5B_BLUEN_ac/SigMngt/HYBRID_SYSTEM_EPT1'
 * '<S7>'   : 'CT5B_BLUEN_ac/SigMngt/HYBRID_THERMAL_COMMAND'
 * '<S8>'   : 'CT5B_BLUEN_ac/SigMngt/IMPACT_INFO'
 * '<S9>'   : 'CT5B_BLUEN_ac/SigMngt/VDCM_PWT3'
 * '<S10>'  : 'CT5B_BLUEN_ac/SigMngt/BCM_FD_10/CmdIgnSts'
 * '<S11>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/AC_Curr_Max_Thrsh'
 * '<S12>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/ChargeEnable'
 * '<S13>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/CurrentRequest'
 * '<S14>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/DC_Curr_Max_Thrsh'
 * '<S15>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/J1772_CloseS2'
 * '<S16>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/OBC_ControlMethod'
 * '<S17>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/OBC_OperativeModeReq'
 * '<S18>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/VDCM_SessnStopReq'
 * '<S19>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/VoltageRequest'
 * '<S20>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/ACCurrent_MaxCal'
 * '<S21>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/ChargeSystemFault'
 * '<S22>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/ChargeSystemFaultReason'
 * '<S23>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/ChargeSystemSts'
 * '<S24>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/ChargingLevel'
 * '<S25>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/HVBatteryCurrent_MaxCal'
 * '<S26>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/HVBatteryVoltage_MaxCal'
 * '<S27>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/HVBatteryVoltage_MinCal'
 * '<S28>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/OBCM_PLUG_STS'
 * '<S29>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_SYSTEM_EPT1/PerWakeUp_Diag'
 * '<S30>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_SYSTEM_EPT1/WU_Timer_Value'
 * '<S31>'  : 'CT5B_BLUEN_ac/SigMngt/HYBRID_THERMAL_COMMAND/RadiatorFanSts'
 * '<S32>'  : 'CT5B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTCommand'
 * '<S33>'  : 'CT5B_BLUEN_ac/SigMngt/IMPACT_INFO/IMPACTConfirm'
 * '<S34>'  : 'CT5B_BLUEN_ac/SigMngt/VDCM_PWT3/PIMF_CoolantFlow'
 * '<S35>'  : 'CT5B_BLUEN_ac/SigMngt/VDCM_PWT3/T4_Sensor_Temp'
 * '<S36>'  : 'CT5B_BLUEN_ac/SigMngt/VDCM_PWT3/T7_Sensor_Temp'
 */
#endif                                 /* RTW_HEADER_CT5B_BLUEN_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
