/*
 * File: CT2B_BLUEN_ac.h
 *
 * Code generated for Simulink model 'CT2B_BLUEN_ac'.
 *
 * Model version                  : 1.45
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:46:17 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CT2B_BLUEN_ac_h_
#define RTW_HEADER_CT2B_BLUEN_ac_h_
#include "Rte_Type.h"
#ifndef CT2B_BLUEN_ac_COMMON_INCLUDES_
#define CT2B_BLUEN_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CT2B_BLUEN.h"
#endif                                 /* CT2B_BLUEN_ac_COMMON_INCLUDES_ */

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
 * '<Root>' : 'CT2B_BLUEN_ac'
 * '<S1>'   : 'CT2B_BLUEN_ac/Initialize Function'
 * '<S2>'   : 'CT2B_BLUEN_ac/SigMngt'
 * '<S3>'   : 'CT2B_BLUEN_ac/SigMngt/BCM_FD_10'
 * '<S4>'   : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND'
 * '<S5>'   : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS'
 * '<S6>'   : 'CT2B_BLUEN_ac/SigMngt/HYBRID_SYSTEM_EPT1'
 * '<S7>'   : 'CT2B_BLUEN_ac/SigMngt/HYBRID_THERMAL_COMMAND'
 * '<S8>'   : 'CT2B_BLUEN_ac/SigMngt/VDCM_PWT3'
 * '<S9>'   : 'CT2B_BLUEN_ac/SigMngt/BCM_FD_10/CmdIgnSts'
 * '<S10>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/AC_Curr_Max_Thrsh'
 * '<S11>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/ChargeEnable'
 * '<S12>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/CurrentRequest'
 * '<S13>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/DC_Curr_Max_Thrsh'
 * '<S14>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/J1772_CloseS2'
 * '<S15>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/OBC_ControlMethod'
 * '<S16>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/OBC_OperativeModeReq'
 * '<S17>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/VDCM_SessnStopReq'
 * '<S18>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_COMMAND/VoltageRequest'
 * '<S19>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/ACCurrent_MaxCal'
 * '<S20>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/ChargeSystemFault'
 * '<S21>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/ChargeSystemFaultReason'
 * '<S22>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/ChargeSystemSts'
 * '<S23>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/ChargingLevel'
 * '<S24>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/HVBatteryCurrent_MaxCal'
 * '<S25>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/HVBatteryVoltage_MaxCal'
 * '<S26>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/HVBatteryVoltage_MinCal'
 * '<S27>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/OBCM_PLUG_STS'
 * '<S28>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/VDCM_IDCChrgr'
 * '<S29>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_CHARGING_STATUS/VDCM_UDCChrgr'
 * '<S30>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_SYSTEM_EPT1/PerWakeUp_Diag'
 * '<S31>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_SYSTEM_EPT1/WU_Timer_Value'
 * '<S32>'  : 'CT2B_BLUEN_ac/SigMngt/HYBRID_THERMAL_COMMAND/RadiatorFanSts'
 * '<S33>'  : 'CT2B_BLUEN_ac/SigMngt/VDCM_PWT3/PIMF_CoolantFlow'
 * '<S34>'  : 'CT2B_BLUEN_ac/SigMngt/VDCM_PWT3/T4_Sensor_Temp'
 * '<S35>'  : 'CT2B_BLUEN_ac/SigMngt/VDCM_PWT3/T7_Sensor_Temp'
 */
#endif                                 /* RTW_HEADER_CT2B_BLUEN_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
