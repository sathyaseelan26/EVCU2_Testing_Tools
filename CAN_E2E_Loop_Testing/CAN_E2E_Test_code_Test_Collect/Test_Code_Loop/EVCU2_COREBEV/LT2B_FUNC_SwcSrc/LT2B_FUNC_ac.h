/*
 * File: LT2B_FUNC_ac.h
 *
 * Code generated for Simulink model 'LT2B_FUNC_ac'.
 *
 * Model version                  : 1.49
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:38:42 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LT2B_FUNC_ac_h_
#define RTW_HEADER_LT2B_FUNC_ac_h_
#include "Rte_Type.h"
#ifndef LT2B_FUNC_ac_COMMON_INCLUDES_
#define LT2B_FUNC_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_LT2B_FUNC.h"
#endif                                 /* LT2B_FUNC_ac_COMMON_INCLUDES_ */

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
 * '<Root>' : 'LT2B_FUNC_ac'
 * '<S1>'   : 'LT2B_FUNC_ac/Initialize Function'
 * '<S2>'   : 'LT2B_FUNC_ac/SigMngt'
 * '<S3>'   : 'LT2B_FUNC_ac/SigMngt/AHP_REQ_GLOBAL'
 * '<S4>'   : 'LT2B_FUNC_ac/SigMngt/BHV_REQ'
 * '<S5>'   : 'LT2B_FUNC_ac/SigMngt/COMP_REQ'
 * '<S6>'   : 'LT2B_FUNC_ac/SigMngt/ECM_AGS2_DEMAND'
 * '<S7>'   : 'LT2B_FUNC_ac/SigMngt/MASTER_ESBM_1'
 * '<S8>'   : 'LT2B_FUNC_ac/SigMngt/OEXV_REQ'
 * '<S9>'   : 'LT2B_FUNC_ac/SigMngt/PECP_REQ_GLOBAL'
 * '<S10>'  : 'LT2B_FUNC_ac/SigMngt/PowerPanel_REQ'
 * '<S11>'  : 'LT2B_FUNC_ac/SigMngt/AHP_REQ_GLOBAL/AHP_FL_SAFE_ACTVT'
 * '<S12>'  : 'LT2B_FUNC_ac/SigMngt/AHP_REQ_GLOBAL/AHP_POST_RUN_REQ'
 * '<S13>'  : 'LT2B_FUNC_ac/SigMngt/AHP_REQ_GLOBAL/AHP_RPM_REQ_PERCT'
 * '<S14>'  : 'LT2B_FUNC_ac/SigMngt/BHV_REQ/BHVCalRq_RCVReHTLVlvCalCmnd'
 * '<S15>'  : 'LT2B_FUNC_ac/SigMngt/BHV_REQ/BHVCalRq_dflt_RCVReHTLVlvCalCmnd_Vld'
 * '<S16>'  : 'LT2B_FUNC_ac/SigMngt/BHV_REQ/BHVPosRq_RCVRPctHTLVlvPstnCmnd'
 * '<S17>'  : 'LT2B_FUNC_ac/SigMngt/BHV_REQ/BHVPosRq_dflt_RCVRPctHTLVlvPstnCmnd_Vld'
 * '<S18>'  : 'LT2B_FUNC_ac/SigMngt/BHV_REQ/BHVPosSv_RCVRbHTLVlvPstnSv'
 * '<S19>'  : 'LT2B_FUNC_ac/SigMngt/BHV_REQ/BHVPosSv_dflt_RCVRbHTLVlvPstnSv_Vld'
 * '<S20>'  : 'LT2B_FUNC_ac/SigMngt/COMP_REQ/CompEnable'
 * '<S21>'  : 'LT2B_FUNC_ac/SigMngt/COMP_REQ/CompressorSpdReq'
 * '<S22>'  : 'LT2B_FUNC_ac/SigMngt/ECM_AGS2_DEMAND/AGS2BoostRq_FSCRbAGS2BoostReq'
 * '<S23>'  : 'LT2B_FUNC_ac/SigMngt/ECM_AGS2_DEMAND/AGS2BoostRq_dflt_FSCRbAGS2BoostReq_Vld'
 * '<S24>'  : 'LT2B_FUNC_ac/SigMngt/ECM_AGS2_DEMAND/AGS2CalRq_FSCRbAGS2CalReq'
 * '<S25>'  : 'LT2B_FUNC_ac/SigMngt/ECM_AGS2_DEMAND/AGS2CalRq_dflt_FSCRbAGS2CalReq_Vld'
 * '<S26>'  : 'LT2B_FUNC_ac/SigMngt/ECM_AGS2_DEMAND/AGS2PosRq_FSCReAGS2PosReq'
 * '<S27>'  : 'LT2B_FUNC_ac/SigMngt/ECM_AGS2_DEMAND/AGS2PosRq_dflt_FSCReAGS2PosReq_Vld'
 * '<S28>'  : 'LT2B_FUNC_ac/SigMngt/MASTER_ESBM_1/DriveESaveLmp_DMIReESaveLEDOnLIN'
 * '<S29>'  : 'LT2B_FUNC_ac/SigMngt/MASTER_ESBM_1/DriveESaveLmp_dflt_DMIReESaveLEDOnLIN_Vld'
 * '<S30>'  : 'LT2B_FUNC_ac/SigMngt/MASTER_ESBM_1/DriveEcohybridLmp_DMIReEcoLEDOnLIN'
 * '<S31>'  : 'LT2B_FUNC_ac/SigMngt/MASTER_ESBM_1/DriveEcohybridLmp_dflt_DMIReEcoLEDOnLIN_Vld'
 * '<S32>'  : 'LT2B_FUNC_ac/SigMngt/MASTER_ESBM_1/DriveElectricLmp_DMIReElectricPlusLEDOnLIN'
 * '<S33>'  : 'LT2B_FUNC_ac/SigMngt/MASTER_ESBM_1/DriveElectricLmp_dflt_DMIReElectricPlusLEDOnLIN_Vld'
 * '<S34>'  : 'LT2B_FUNC_ac/SigMngt/OEXV_REQ/OEXVCalCmd_RCVReOEXVCalRq'
 * '<S35>'  : 'LT2B_FUNC_ac/SigMngt/OEXV_REQ/OEXVCalCmd_dflt_RCVReOEXVCalRq_Vld'
 * '<S36>'  : 'LT2B_FUNC_ac/SigMngt/OEXV_REQ/OEXVPosRq_RCVRPctOEXVCmd'
 * '<S37>'  : 'LT2B_FUNC_ac/SigMngt/OEXV_REQ/OEXVPosRq_dflt_RCVRPctOEXVCmd_Vld'
 * '<S38>'  : 'LT2B_FUNC_ac/SigMngt/PECP_REQ_GLOBAL/PECP_FL_SAFE_ACTVT'
 * '<S39>'  : 'LT2B_FUNC_ac/SigMngt/PECP_REQ_GLOBAL/PECP_POST_RUN_REQ'
 * '<S40>'  : 'LT2B_FUNC_ac/SigMngt/PECP_REQ_GLOBAL/PECP_RPM_REQ_PERCT'
 * '<S41>'  : 'LT2B_FUNC_ac/SigMngt/PowerPanel_REQ/DAY_LGT_MD_PowerPanel'
 * '<S42>'  : 'LT2B_FUNC_ac/SigMngt/PowerPanel_REQ/PowerPanelLEDAColorCommand_VTLRePPLEDAColorCmd'
 * '<S43>'  : 'LT2B_FUNC_ac/SigMngt/PowerPanel_REQ/PowerPanelLEDAColorCommand_VTLRePPLEDAColorCmd_Vld'
 * '<S44>'  : 'LT2B_FUNC_ac/SigMngt/PowerPanel_REQ/PowerPanelLEDBColorCommand_VTLRePPLEDBColorCmd'
 * '<S45>'  : 'LT2B_FUNC_ac/SigMngt/PowerPanel_REQ/PowerPanelLEDBColorCommand_VTLRePPLEDBColorCmd_Vld'
 * '<S46>'  : 'LT2B_FUNC_ac/SigMngt/PowerPanel_REQ/PowerPanelLEDCColorCommand_VTLRePPLEDCColorCmd'
 * '<S47>'  : 'LT2B_FUNC_ac/SigMngt/PowerPanel_REQ/PowerPanelLEDCColorCommand_VTLRePPLEDCColorCmd_Vld'
 * '<S48>'  : 'LT2B_FUNC_ac/SigMngt/PowerPanel_REQ/PowerPanelLEDCCommand_VTLRePPLEDCCmd'
 * '<S49>'  : 'LT2B_FUNC_ac/SigMngt/PowerPanel_REQ/PowerPanelLEDCCommand_VTLRePPLEDCCmd_Vld'
 * '<S50>'  : 'LT2B_FUNC_ac/SigMngt/PowerPanel_REQ/PowerPanel_LED_A_Command'
 * '<S51>'  : 'LT2B_FUNC_ac/SigMngt/PowerPanel_REQ/PowerPanel_LED_B_Command'
 */
#endif                                 /* RTW_HEADER_LT2B_FUNC_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
