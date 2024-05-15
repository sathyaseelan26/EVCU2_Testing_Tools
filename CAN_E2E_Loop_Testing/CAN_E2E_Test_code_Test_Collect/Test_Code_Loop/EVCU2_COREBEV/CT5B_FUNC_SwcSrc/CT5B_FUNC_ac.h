/*
 * File: CT5B_FUNC_ac.h
 *
 * Code generated for Simulink model 'CT5B_FUNC_ac'.
 *
 * Model version                  : 1.53
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:34:33 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CT5B_FUNC_ac_h_
#define RTW_HEADER_CT5B_FUNC_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef CT5B_FUNC_ac_COMMON_INCLUDES_
#define CT5B_FUNC_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CT5B_FUNC.h"
#endif                                 /* CT5B_FUNC_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

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
 * '<Root>' : 'CT5B_FUNC_ac'
 * '<S1>'   : 'CT5B_FUNC_ac/Initialize Function'
 * '<S2>'   : 'CT5B_FUNC_ac/SigMngt'
 * '<S3>'   : 'CT5B_FUNC_ac/SigMngt/EVCU_ISO15118_STATUS1'
 * '<S4>'   : 'CT5B_FUNC_ac/SigMngt/HYBRID_SYSTEM_EPT1'
 * '<S5>'   : 'CT5B_FUNC_ac/SigMngt/HYBRID_THERMAL_COMMAND'
 * '<S6>'   : 'CT5B_FUNC_ac/SigMngt/IMPACT_INFO'
 * '<S7>'   : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM'
 * '<S8>'   : 'CT5B_FUNC_ac/SigMngt/VDCM_PWT3'
 * '<S9>'   : 'CT5B_FUNC_ac/SigMngt/EVCU_ISO15118_STATUS1/EVMaxCurrent'
 * '<S10>'  : 'CT5B_FUNC_ac/SigMngt/EVCU_ISO15118_STATUS1/EVMaxVoltage'
 * '<S11>'  : 'CT5B_FUNC_ac/SigMngt/HYBRID_SYSTEM_EPT1/PerWakeUp_Diag'
 * '<S12>'  : 'CT5B_FUNC_ac/SigMngt/HYBRID_SYSTEM_EPT1/WU_Timer_Value'
 * '<S13>'  : 'CT5B_FUNC_ac/SigMngt/HYBRID_THERMAL_COMMAND/EOPA_OIL_FlwRate'
 * '<S14>'  : 'CT5B_FUNC_ac/SigMngt/HYBRID_THERMAL_COMMAND/EOPA_OIL_TEMP'
 * '<S15>'  : 'CT5B_FUNC_ac/SigMngt/HYBRID_THERMAL_COMMAND/EOPB_OIL_FlwRate'
 * '<S16>'  : 'CT5B_FUNC_ac/SigMngt/HYBRID_THERMAL_COMMAND/EOPB_OIL_TEMP'
 * '<S17>'  : 'CT5B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTCommand'
 * '<S18>'  : 'CT5B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTConfirm'
 * '<S19>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMSServiceScope_OBCRdServiceScope'
 * '<S20>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMSServiceScope_dflt_OBCRdServiceScope_Vld'
 * '<S21>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_ChargingComplete'
 * '<S22>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVEnergyCapacity'
 * '<S23>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVEnergyRequest'
 * '<S24>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVErrorCode'
 * '<S25>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVMax_I_Limit'
 * '<S26>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVMax_P_Limit'
 * '<S27>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVMax_V_Limit'
 * '<S28>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVRESS_SOC'
 * '<S29>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVReady'
 * '<S30>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVTargetCurrent'
 * '<S31>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVTargetVoltage'
 * '<S32>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_ReadyToChargeState'
 * '<S33>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_RemaningTimeToBulkSOC'
 * '<S34>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_RemaningTimeToFullSOC'
 * '<S35>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_SelectedEnergyTransferType'
 * '<S36>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_SelectedPaymentOptn'
 * '<S37>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_SelectedServiceId'
 * '<S38>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_ServiceCategory'
 * '<S39>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/VDCMBattBulkSOC_IDCRPctBattBulkSOC'
 * '<S40>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_OBCM/VDCMBattBulkSOC_dflt_IDCRPctBattBulkSOC_Vld'
 * '<S41>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_PWT3/T4_Sensor_Temp'
 * '<S42>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_PWT3/T7_CoolantTempVldty'
 * '<S43>'  : 'CT5B_FUNC_ac/SigMngt/VDCM_PWT3/T7_Sensor_Temp'
 */
#endif                                 /* RTW_HEADER_CT5B_FUNC_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
