/*
 * File: PITR_ac.h
 *
 * Code generated for Simulink model 'PITR_ac'.
 *
 * Model version                  : 9.30
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 17:53:13 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PITR_ac_h_
#define RTW_HEADER_PITR_ac_h_
#include "Rte_Type.h"
#ifndef PITR_ac_COMMON_INCLUDES_
#define PITR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_PITR.h"
#endif                                 /* PITR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_PITR_ac_T
{
    boolean OutportBufferForVePITR_b_ECMImmoStatCanC;/* '<S10>/Const2' */
    boolean OutportBufferForVePITR_b_ECMImmoStatePT_;/* '<S10>/Const4' */
    boolean OutportBufferForECMReset_Init;/* '<S9>/FALSE Constant6' */
    TeIMOR_e_ECMStatCANePT OutportBufferForVePITR_e_ECMImmoStatePT_;/* '<S10>/Const3' */
    TeIMOR_e_ECMStatCANC OutportBufferForVePITR_e_ECMImmoStatCanC;/* '<S10>/Const1' */
}
B_PITR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeIMOR_e_ECMStatCANePT Const3;/* '<S10>/Const3' */
    const TeIMOR_e_ECMStatCANC Const1; /* '<S10>/Const1' */
}
ConstB_PITR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PITR
#include "MemMap.h"

extern VAR(B_PITR_ac_T, PITR_VAR_INIT) PITR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PITR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_PITR
#include "MemMap.h"

extern CONST(ConstB_PITR_ac_T, PITR_VAR_INIT) PITR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_PITR
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
 * '<Root>' : 'PITR_ac'
 * '<S1>'   : 'PITR_ac/FsftPITR_e_ECMImmoStatCanC'
 * '<S2>'   : 'PITR_ac/FsftPITR_e_ECMImmoStatePT'
 * '<S3>'   : 'PITR_ac/PITR_PwrOn'
 * '<S4>'   : 'PITR_ac/PokePITR_b_ECMReset'
 * '<S5>'   : 'PITR_ac/PokePITR_e_ECMImmoStatCanC'
 * '<S6>'   : 'PITR_ac/PokePITR_e_ECMImmoStatePT'
 * '<S7>'   : 'PITR_ac/FsftPITR_e_ECMImmoStatCanC/FsftPITR_e_ECMImmoStatCanCChrt'
 * '<S8>'   : 'PITR_ac/FsftPITR_e_ECMImmoStatePT/FsftPITR_e_ECMImmoStatePTChrt'
 * '<S9>'   : 'PITR_ac/PITR_PwrOn/ImmoPokes__InitBlock'
 * '<S10>'  : 'PITR_ac/PITR_PwrOn/Sub_Out_Init'
 * '<S11>'  : 'PITR_ac/PokePITR_b_ECMReset/PokePITR_b_ECMResetChrt'
 * '<S12>'  : 'PITR_ac/PokePITR_e_ECMImmoStatCanC/PokePITR_e_ECMImmoStatCanCChrt'
 * '<S13>'  : 'PITR_ac/PokePITR_e_ECMImmoStatePT/PokePITR_e_ECMImmoStatePTChrt'
 */
#endif                                 /* RTW_HEADER_PITR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
