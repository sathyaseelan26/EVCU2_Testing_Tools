/*
 * File: LT3B_FUNC_ac.h
 *
 * Code generated for Simulink model 'LT3B_FUNC_ac'.
 *
 * Model version                  : 1.50
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:38:53 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LT3B_FUNC_ac_h_
#define RTW_HEADER_LT3B_FUNC_ac_h_
#include "Rte_Type.h"
#ifndef LT3B_FUNC_ac_COMMON_INCLUDES_
#define LT3B_FUNC_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_LT3B_FUNC.h"
#endif                                 /* LT3B_FUNC_ac_COMMON_INCLUDES_ */

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
 * '<Root>' : 'LT3B_FUNC_ac'
 * '<S1>'   : 'LT3B_FUNC_ac/Initialize Function'
 * '<S2>'   : 'LT3B_FUNC_ac/SigMngt'
 * '<S3>'   : 'LT3B_FUNC_ac/SigMngt/CCMLIN18Fr02'
 * '<S4>'   : 'LT3B_FUNC_ac/SigMngt/CEXV_REQ'
 * '<S5>'   : 'LT3B_FUNC_ac/SigMngt/ECM_AGS_DEMAND'
 * '<S6>'   : 'LT3B_FUNC_ac/SigMngt/EOPB_REQ'
 * '<S7>'   : 'LT3B_FUNC_ac/SigMngt/HCP_CPIM_COMMAND'
 * '<S8>'   : 'LT3B_FUNC_ac/SigMngt/HTLBV_REQ'
 * '<S9>'   : 'LT3B_FUNC_ac/SigMngt/PECP2_REQ_GLOBAL'
 * '<S10>'  : 'LT3B_FUNC_ac/SigMngt/PowerPanel2_REQ'
 * '<S11>'  : 'LT3B_FUNC_ac/SigMngt/CCMLIN18Fr02/HVH_OverheatUnlock'
 * '<S12>'  : 'LT3B_FUNC_ac/SigMngt/CCMLIN18Fr02/HvCooltHeatrEnad'
 * '<S13>'  : 'LT3B_FUNC_ac/SigMngt/CCMLIN18Fr02/HvWtrHeatrPwrCnsAllwd'
 * '<S14>'  : 'LT3B_FUNC_ac/SigMngt/CCMLIN18Fr02/HvWtrHeatrWtrTDes'
 * '<S15>'  : 'LT3B_FUNC_ac/SigMngt/CEXV_REQ/CEXVCalCmd_RCVReEXVCalCmd'
 * '<S16>'  : 'LT3B_FUNC_ac/SigMngt/CEXV_REQ/CEXVCalCmd_dflt_RCVReEXVCalCmd_Vld'
 * '<S17>'  : 'LT3B_FUNC_ac/SigMngt/CEXV_REQ/CEXVPosRq_RCVRPctEXVPosRq'
 * '<S18>'  : 'LT3B_FUNC_ac/SigMngt/CEXV_REQ/CEXVPosRq_dflt_RCVRPctEXVPosRq_Vld'
 * '<S19>'  : 'LT3B_FUNC_ac/SigMngt/ECM_AGS_DEMAND/AGS_BoostRq'
 * '<S20>'  : 'LT3B_FUNC_ac/SigMngt/ECM_AGS_DEMAND/AGS_CalRq'
 * '<S21>'  : 'LT3B_FUNC_ac/SigMngt/ECM_AGS_DEMAND/AGS_PosRq'
 * '<S22>'  : 'LT3B_FUNC_ac/SigMngt/EOPB_REQ/EOPB_POST_RUN_COM'
 * '<S23>'  : 'LT3B_FUNC_ac/SigMngt/EOPB_REQ/EOPB_RPM_COM'
 * '<S24>'  : 'LT3B_FUNC_ac/SigMngt/HCP_CPIM_COMMAND/Backlight_Cmd'
 * '<S25>'  : 'LT3B_FUNC_ac/SigMngt/HCP_CPIM_COMMAND/CPIM_Blink_Rate'
 * '<S26>'  : 'LT3B_FUNC_ac/SigMngt/HCP_CPIM_COMMAND/CPIM_IND_Color'
 * '<S27>'  : 'LT3B_FUNC_ac/SigMngt/HCP_CPIM_COMMAND/CPIM_SET_IND1'
 * '<S28>'  : 'LT3B_FUNC_ac/SigMngt/HCP_CPIM_COMMAND/CPIM_SET_IND2'
 * '<S29>'  : 'LT3B_FUNC_ac/SigMngt/HCP_CPIM_COMMAND/CPIM_SET_IND3'
 * '<S30>'  : 'LT3B_FUNC_ac/SigMngt/HCP_CPIM_COMMAND/CPIM_SET_IND4'
 * '<S31>'  : 'LT3B_FUNC_ac/SigMngt/HCP_CPIM_COMMAND/CPIM_SET_IND5'
 * '<S32>'  : 'LT3B_FUNC_ac/SigMngt/HCP_CPIM_COMMAND/ChrgPortLock_Cmd'
 * '<S33>'  : 'LT3B_FUNC_ac/SigMngt/HCP_CPIM_COMMAND/DAY_LGT_MD_CPIM'
 * '<S34>'  : 'LT3B_FUNC_ac/SigMngt/HCP_CPIM_COMMAND/Set_Icon1_cmd'
 * '<S35>'  : 'LT3B_FUNC_ac/SigMngt/HCP_CPIM_COMMAND/Set_Icon2_cmd'
 * '<S36>'  : 'LT3B_FUNC_ac/SigMngt/HTLBV_REQ/HTLBVCalRq_RCVReHTLVlvCalCmnd'
 * '<S37>'  : 'LT3B_FUNC_ac/SigMngt/HTLBV_REQ/HTLBVCalRq_dflt_RCVReHTLVlvCalCmnd_Vld'
 * '<S38>'  : 'LT3B_FUNC_ac/SigMngt/HTLBV_REQ/HTLBVPosRq_RCVRPctHTLVlvPstnCmnd'
 * '<S39>'  : 'LT3B_FUNC_ac/SigMngt/HTLBV_REQ/HTLBVPosRq_dflt_RCVRPctHTLVlvPstnCmnd_Vld'
 * '<S40>'  : 'LT3B_FUNC_ac/SigMngt/HTLBV_REQ/HTLBVPosSv_RCVRbHTLVlvPstnSv'
 * '<S41>'  : 'LT3B_FUNC_ac/SigMngt/HTLBV_REQ/HTLBVPosSv_dflt_RCVRbHTLVlvPstnSv_Vld'
 * '<S42>'  : 'LT3B_FUNC_ac/SigMngt/PECP2_REQ_GLOBAL/PECP2_FL_SAFE_ACTVT'
 * '<S43>'  : 'LT3B_FUNC_ac/SigMngt/PECP2_REQ_GLOBAL/PECP2_POST_RUN_REQ'
 * '<S44>'  : 'LT3B_FUNC_ac/SigMngt/PECP2_REQ_GLOBAL/PECP2_RPM_REQ_PERCT'
 * '<S45>'  : 'LT3B_FUNC_ac/SigMngt/PowerPanel2_REQ/DAY_LGT_MD_PowerPanel2'
 * '<S46>'  : 'LT3B_FUNC_ac/SigMngt/PowerPanel2_REQ/PowerPanel2LEDAColorCommand_VTLRePP2LEDAColorCmd'
 * '<S47>'  : 'LT3B_FUNC_ac/SigMngt/PowerPanel2_REQ/PowerPanel2LEDAColorCommand_VTLRePP2LEDAColorCmd_Vld'
 * '<S48>'  : 'LT3B_FUNC_ac/SigMngt/PowerPanel2_REQ/PowerPanel2LEDBColorCommand_VTLRePP2LEDBColorCmd'
 * '<S49>'  : 'LT3B_FUNC_ac/SigMngt/PowerPanel2_REQ/PowerPanel2LEDBColorCommand_VTLRePP2LEDBColorCmd_Vld'
 * '<S50>'  : 'LT3B_FUNC_ac/SigMngt/PowerPanel2_REQ/PowerPanel2_LED_A_Command'
 * '<S51>'  : 'LT3B_FUNC_ac/SigMngt/PowerPanel2_REQ/PowerPanel2_LED_B_Command'
 */
#endif                                 /* RTW_HEADER_LT3B_FUNC_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
