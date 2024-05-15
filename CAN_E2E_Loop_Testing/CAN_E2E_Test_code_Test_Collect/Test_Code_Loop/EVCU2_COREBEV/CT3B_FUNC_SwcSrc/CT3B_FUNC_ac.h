/*
 * File: CT3B_FUNC_ac.h
 *
 * Code generated for Simulink model 'CT3B_FUNC_ac'.
 *
 * Model version                  : 1.41
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:33:59 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CT3B_FUNC_ac_h_
#define RTW_HEADER_CT3B_FUNC_ac_h_
#ifndef CT3B_FUNC_ac_COMMON_INCLUDES_
#define CT3B_FUNC_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CT3B_FUNC.h"
#endif                                 /* CT3B_FUNC_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* MW_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */
#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_VrntCT3B_Motor1RPM_MSPRnMtrASpd
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_VrntCT3B_Motor1RPM_MSPRnMtrCSpd
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CT3B_FUNC_ac/SigMngt/HYBRID_POWERTRAIN6/Vrnt_Motor1RPM' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CT3B_FUNC_ac/SigMngt/HYBRID_POWERTRAIN6/Vrnt_Motor1RPM'"
#endif

/* MW_END_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */

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
 * '<Root>' : 'CT3B_FUNC_ac'
 * '<S1>'   : 'CT3B_FUNC_ac/Initialize Function'
 * '<S2>'   : 'CT3B_FUNC_ac/SigMngt'
 * '<S3>'   : 'CT3B_FUNC_ac/SigMngt/HYBRID_POWERTRAIN6'
 * '<S4>'   : 'CT3B_FUNC_ac/SigMngt/HYBRID_POWERTRAIN6/Motor1RPM_MSPRnMtrASpd'
 * '<S5>'   : 'CT3B_FUNC_ac/SigMngt/HYBRID_POWERTRAIN6/Motor1RPM_MSPRnMtrCSpd'
 * '<S6>'   : 'CT3B_FUNC_ac/SigMngt/HYBRID_POWERTRAIN6/Motor1RPM_dflt_MSPRnMtrCSpd_Vld'
 * '<S7>'   : 'CT3B_FUNC_ac/SigMngt/HYBRID_POWERTRAIN6/Motor2_RPM'
 */
#endif                                 /* RTW_HEADER_CT3B_FUNC_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
