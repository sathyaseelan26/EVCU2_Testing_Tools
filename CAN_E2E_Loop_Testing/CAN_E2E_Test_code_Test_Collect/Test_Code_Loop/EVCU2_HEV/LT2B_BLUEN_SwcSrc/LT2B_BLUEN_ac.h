/*
 * File: LT2B_BLUEN_ac.h
 *
 * Code generated for Simulink model 'LT2B_BLUEN_ac'.
 *
 * Model version                  : 1.43
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:49:48 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LT2B_BLUEN_ac_h_
#define RTW_HEADER_LT2B_BLUEN_ac_h_
#include "Rte_Type.h"
#ifndef LT2B_BLUEN_ac_COMMON_INCLUDES_
#define LT2B_BLUEN_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_LT2B_BLUEN.h"
#endif                                 /* LT2B_BLUEN_ac_COMMON_INCLUDES_ */

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
 * '<Root>' : 'LT2B_BLUEN_ac'
 * '<S1>'   : 'LT2B_BLUEN_ac/Initialize Function'
 * '<S2>'   : 'LT2B_BLUEN_ac/SigMngt'
 * '<S3>'   : 'LT2B_BLUEN_ac/SigMngt/AHP_REQ_GLOBAL'
 * '<S4>'   : 'LT2B_BLUEN_ac/SigMngt/COMP_REQ'
 * '<S5>'   : 'LT2B_BLUEN_ac/SigMngt/ECM_AGS2_DEMAND'
 * '<S6>'   : 'LT2B_BLUEN_ac/SigMngt/PECP_REQ_GLOBAL'
 * '<S7>'   : 'LT2B_BLUEN_ac/SigMngt/AHP_REQ_GLOBAL/AHP_FL_SAFE_ACTVT'
 * '<S8>'   : 'LT2B_BLUEN_ac/SigMngt/AHP_REQ_GLOBAL/AHP_POST_RUN_REQ'
 * '<S9>'   : 'LT2B_BLUEN_ac/SigMngt/AHP_REQ_GLOBAL/AHP_RPM_REQ_PERCT'
 * '<S10>'  : 'LT2B_BLUEN_ac/SigMngt/COMP_REQ/CompEnable'
 * '<S11>'  : 'LT2B_BLUEN_ac/SigMngt/COMP_REQ/CompressorSpdReq'
 * '<S12>'  : 'LT2B_BLUEN_ac/SigMngt/ECM_AGS2_DEMAND/AGS2_BoostRq'
 * '<S13>'  : 'LT2B_BLUEN_ac/SigMngt/ECM_AGS2_DEMAND/AGS2_CalRq'
 * '<S14>'  : 'LT2B_BLUEN_ac/SigMngt/ECM_AGS2_DEMAND/AGS2_PosRq'
 * '<S15>'  : 'LT2B_BLUEN_ac/SigMngt/PECP_REQ_GLOBAL/PECP_FL_SAFE_ACTVT'
 * '<S16>'  : 'LT2B_BLUEN_ac/SigMngt/PECP_REQ_GLOBAL/PECP_POST_RUN_REQ'
 * '<S17>'  : 'LT2B_BLUEN_ac/SigMngt/PECP_REQ_GLOBAL/PECP_RPM_REQ_PERCT'
 */
#endif                                 /* RTW_HEADER_LT2B_BLUEN_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
