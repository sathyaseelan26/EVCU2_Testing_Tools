/*
 * File: CT4B_FUNC_ac.h
 *
 * Code generated for Simulink model 'CT4B_FUNC_ac'.
 *
 * Model version                  : 1.42
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:34:03 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CT4B_FUNC_ac_h_
#define RTW_HEADER_CT4B_FUNC_ac_h_
#ifndef CT4B_FUNC_ac_COMMON_INCLUDES_
#define CT4B_FUNC_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CT4B_FUNC.h"
#endif                                 /* CT4B_FUNC_ac_COMMON_INCLUDES_ */

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
 * '<Root>' : 'CT4B_FUNC_ac'
 * '<S1>'   : 'CT4B_FUNC_ac/Initialize Function'
 * '<S2>'   : 'CT4B_FUNC_ac/SigMngt'
 * '<S3>'   : 'CT4B_FUNC_ac/SigMngt/HYBRID_SYSTEM_EPT1'
 * '<S4>'   : 'CT4B_FUNC_ac/SigMngt/HYBRID_THERMAL_COMMAND'
 * '<S5>'   : 'CT4B_FUNC_ac/SigMngt/IMPACT_INFO'
 * '<S6>'   : 'CT4B_FUNC_ac/SigMngt/VDCM_PWT3'
 * '<S7>'   : 'CT4B_FUNC_ac/SigMngt/VEHDYN_FD_1'
 * '<S8>'   : 'CT4B_FUNC_ac/SigMngt/HYBRID_SYSTEM_EPT1/PerWakeUp_Diag'
 * '<S9>'   : 'CT4B_FUNC_ac/SigMngt/HYBRID_SYSTEM_EPT1/WU_Timer_Value'
 * '<S10>'  : 'CT4B_FUNC_ac/SigMngt/HYBRID_THERMAL_COMMAND/EOPA_OIL_FlwRate'
 * '<S11>'  : 'CT4B_FUNC_ac/SigMngt/HYBRID_THERMAL_COMMAND/EOPA_OIL_TEMP'
 * '<S12>'  : 'CT4B_FUNC_ac/SigMngt/HYBRID_THERMAL_COMMAND/EOPB_OIL_FlwRate'
 * '<S13>'  : 'CT4B_FUNC_ac/SigMngt/HYBRID_THERMAL_COMMAND/EOPB_OIL_TEMP'
 * '<S14>'  : 'CT4B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTCommand'
 * '<S15>'  : 'CT4B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTConfirm'
 * '<S16>'  : 'CT4B_FUNC_ac/SigMngt/VDCM_PWT3/T4_Sensor_Temp'
 * '<S17>'  : 'CT4B_FUNC_ac/SigMngt/VDCM_PWT3/T7_CoolantTempVldty'
 * '<S18>'  : 'CT4B_FUNC_ac/SigMngt/VDCM_PWT3/T7_Sensor_Temp'
 * '<S19>'  : 'CT4B_FUNC_ac/SigMngt/VEHDYN_FD_1/RELSD_TgtTrq'
 */
#endif                                 /* RTW_HEADER_CT4B_FUNC_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */