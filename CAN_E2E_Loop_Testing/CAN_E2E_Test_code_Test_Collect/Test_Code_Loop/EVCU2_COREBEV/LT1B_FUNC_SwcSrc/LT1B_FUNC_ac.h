/*
 * File: LT1B_FUNC_ac.h
 *
 * Code generated for Simulink model 'LT1B_FUNC_ac'.
 *
 * Model version                  : 1.41
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:38:01 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LT1B_FUNC_ac_h_
#define RTW_HEADER_LT1B_FUNC_ac_h_
#include "Rte_Type.h"
#ifndef LT1B_FUNC_ac_COMMON_INCLUDES_
#define LT1B_FUNC_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_LT1B_FUNC.h"
#endif                                 /* LT1B_FUNC_ac_COMMON_INCLUDES_ */

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
 * '<Root>' : 'LT1B_FUNC_ac'
 * '<S1>'   : 'LT1B_FUNC_ac/Initialize Function'
 * '<S2>'   : 'LT1B_FUNC_ac/SigMngt'
 * '<S3>'   : 'LT1B_FUNC_ac/SigMngt/BCP_REQ'
 * '<S4>'   : 'LT1B_FUNC_ac/SigMngt/CPV_REQ'
 * '<S5>'   : 'LT1B_FUNC_ac/SigMngt/ECM_AAD_DEMAND'
 * '<S6>'   : 'LT1B_FUNC_ac/SigMngt/EEXV_REQ'
 * '<S7>'   : 'LT1B_FUNC_ac/SigMngt/EOPA_REQ'
 * '<S8>'   : 'LT1B_FUNC_ac/SigMngt/EXVM_REQ'
 * '<S9>'   : 'LT1B_FUNC_ac/SigMngt/HVEAHLIN18Fr03'
 * '<S10>'  : 'LT1B_FUNC_ac/SigMngt/LTRBV_REQ'
 * '<S11>'  : 'LT1B_FUNC_ac/SigMngt/BCP_REQ/BCP_FL_SAFE_ACTVT'
 * '<S12>'  : 'LT1B_FUNC_ac/SigMngt/BCP_REQ/BCP_POST_RUN_REQ'
 * '<S13>'  : 'LT1B_FUNC_ac/SigMngt/BCP_REQ/BCP_RPM_REQ'
 * '<S14>'  : 'LT1B_FUNC_ac/SigMngt/CPV_REQ/CPV_CalRq'
 * '<S15>'  : 'LT1B_FUNC_ac/SigMngt/CPV_REQ/CPV_PosRq'
 * '<S16>'  : 'LT1B_FUNC_ac/SigMngt/CPV_REQ/CPV_PosSv'
 * '<S17>'  : 'LT1B_FUNC_ac/SigMngt/ECM_AAD_DEMAND/AADCalRq_AADRbAADCalReq'
 * '<S18>'  : 'LT1B_FUNC_ac/SigMngt/ECM_AAD_DEMAND/AADCalRq_dflt_AADRbAADCalReq_Vld'
 * '<S19>'  : 'LT1B_FUNC_ac/SigMngt/ECM_AAD_DEMAND/AADInitialIPCalRq_AADRbAADInitialIPCalRq'
 * '<S20>'  : 'LT1B_FUNC_ac/SigMngt/ECM_AAD_DEMAND/AADInitialIPCalRq_dflt_AADRbAADInitialIPCalRq_Vld'
 * '<S21>'  : 'LT1B_FUNC_ac/SigMngt/ECM_AAD_DEMAND/AADPosRq_AADReAADPosReq'
 * '<S22>'  : 'LT1B_FUNC_ac/SigMngt/ECM_AAD_DEMAND/AADPosRq_dflt_AADReAADPosReq_Vld'
 * '<S23>'  : 'LT1B_FUNC_ac/SigMngt/EEXV_REQ/EEXVCalCmd_RCVReEEXVCalRq'
 * '<S24>'  : 'LT1B_FUNC_ac/SigMngt/EEXV_REQ/EEXVCalCmd_dflt_RCVReEEXVCalRq_Vld'
 * '<S25>'  : 'LT1B_FUNC_ac/SigMngt/EEXV_REQ/EEXVPosRq_RCVRPctEEXVCmd'
 * '<S26>'  : 'LT1B_FUNC_ac/SigMngt/EEXV_REQ/EEXVPosRq_dflt_RCVRPctEEXVCmd_Vld'
 * '<S27>'  : 'LT1B_FUNC_ac/SigMngt/EOPA_REQ/EOPA_POST_RUN_COM'
 * '<S28>'  : 'LT1B_FUNC_ac/SigMngt/EOPA_REQ/EOPA_RPM_COM'
 * '<S29>'  : 'LT1B_FUNC_ac/SigMngt/EXVM_REQ/EXVMCalCmd_RCVReEXVCalCmd'
 * '<S30>'  : 'LT1B_FUNC_ac/SigMngt/EXVM_REQ/EXVMCalCmd_dflt_RCVReEXVCalCmd_Vld'
 * '<S31>'  : 'LT1B_FUNC_ac/SigMngt/EXVM_REQ/EXVMPosRq_RCVRPctEXVPosRq'
 * '<S32>'  : 'LT1B_FUNC_ac/SigMngt/EXVM_REQ/EXVMPosRq_dflt_RCVRPctEXVPosRq_Vld'
 * '<S33>'  : 'LT1B_FUNC_ac/SigMngt/HVEAHLIN18Fr03/AirHeatrEnad_HTRRbHVHtr2Req'
 * '<S34>'  : 'LT1B_FUNC_ac/SigMngt/HVEAHLIN18Fr03/AirHeatrEnad_dflt_HTRRbHVHtr2Req_Vld'
 * '<S35>'  : 'LT1B_FUNC_ac/SigMngt/HVEAHLIN18Fr03/AirHeatrPwrTgt_HTRRPctHVHtr2PwrLimit'
 * '<S36>'  : 'LT1B_FUNC_ac/SigMngt/HVEAHLIN18Fr03/AirHeatrPwrTgt_dflt_HTRRPctHVHtr2PwrLimit_Vld'
 * '<S37>'  : 'LT1B_FUNC_ac/SigMngt/LTRBV_REQ/LTRBVCalRq_RCVReLTRVlvCalCmnd'
 * '<S38>'  : 'LT1B_FUNC_ac/SigMngt/LTRBV_REQ/LTRBVCalRq_dflt_RCVReLTRVlvCalCmnd_Vld'
 * '<S39>'  : 'LT1B_FUNC_ac/SigMngt/LTRBV_REQ/LTRBVPosRq_RCVRPctLTRVlvPstnCmnd'
 * '<S40>'  : 'LT1B_FUNC_ac/SigMngt/LTRBV_REQ/LTRBVPosRq_dflt_RCVRPctLTRVlvPstnCmnd_Vld'
 * '<S41>'  : 'LT1B_FUNC_ac/SigMngt/LTRBV_REQ/LTRBVPosSv_RCVRbLTRVlvPstnSv'
 * '<S42>'  : 'LT1B_FUNC_ac/SigMngt/LTRBV_REQ/LTRBVPosSv_dflt_RCVRbLTRVlvPstnSv_Vld'
 */
#endif                                 /* RTW_HEADER_LT1B_FUNC_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
