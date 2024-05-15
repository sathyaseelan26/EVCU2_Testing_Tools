/*
 * File: VSMR_ac.h
 *
 * Code generated for Simulink model 'VSMR_ac'.
 *
 * Model version                  : 9.311
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 20:05:18 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_VSMR_ac_h_
#define RTW_HEADER_VSMR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef VSMR_ac_COMMON_INCLUDES_
#define VSMR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_VSMR.h"
#endif                                 /* VSMR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_VSMR_ac_T
{

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

    float32 UnitDelay_DSTATE;          /* '<S37>/Unit Delay' */

#define DW_VSMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

    boolean UnitDelay_DSTATE_k;        /* '<S38>/Unit Delay' */

#define DW_VSMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

    boolean UnitDelay_DSTATE_l;        /* '<S18>/Unit Delay' */

#define DW_VSMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

    boolean UnitDelay_DSTATE_i;        /* '<S17>/Unit Delay' */

#define DW_VSMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

    TeVSMR_e_VirtShftMd UnitDelay_DSTATE_d;/* '<S7>/Unit Delay' */

#define DW_VSMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VSMR_eRuptEnabled

    TeVSMR_e_VirtShftMd UnitDelay1_DSTATE;/* '<S7>/Unit Delay1' */

#define DW_VSMR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_VSMR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_VSMR_ac_T;

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VSMR
#include "MemMap.h"

extern VAR(DW_VSMR_ac_T, VSMR_VAR_INIT) VSMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VSMR
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
 * '<Root>' : 'VSMR_ac'
 * '<S1>'   : 'VSMR_ac/VSMR_MedTEB'
 * '<S2>'   : 'VSMR_ac/VSMR_PUP'
 * '<S3>'   : 'VSMR_ac/VSMR_PwrOff'
 * '<S4>'   : 'VSMR_ac/VSMR_PwrOn'
 * '<S5>'   : 'VSMR_ac/VSMR_MedTEB/VSMC_A'
 * '<S6>'   : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Disabled'
 * '<S7>'   : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled'
 * '<S8>'   : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Disabled/Enumerated Constant'
 * '<S9>'   : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Disabled/Enumerated Constant1'
 * '<S10>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Disabled/Enumerated Constant9'
 * '<S11>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Disabled/SCALAR_BLK'
 * '<S12>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Disabled/SCALAR_BLK1'
 * '<S13>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Disabled/SCALAR_BLK2'
 * '<S14>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Disabled/SCALAR_BLK3'
 * '<S15>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Disabled/SCALAR_BLK4'
 * '<S16>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Disabled/SCALAR_BLK5'
 * '<S17>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/EdgeFalling'
 * '<S18>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/EdgeRising'
 * '<S19>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/Enumerated Constant'
 * '<S20>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/Enumerated Constant1'
 * '<S21>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/Enumerated Constant3'
 * '<S22>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/Enumerated Constant4'
 * '<S23>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/Enumerated Constant5'
 * '<S24>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/Enumerated Constant6'
 * '<S25>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/Enumerated Constant7'
 * '<S26>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/Enumerated Constant8'
 * '<S27>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/Enumerated Constant9'
 * '<S28>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/SCALAR_BLK'
 * '<S29>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/SCALAR_BLK1'
 * '<S30>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/SCALAR_BLK2'
 * '<S31>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/SCALAR_BLK3'
 * '<S32>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/SCALAR_BLK4'
 * '<S33>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/SCALAR_BLK5'
 * '<S34>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/SCALAR_BLK6'
 * '<S35>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/SCALAR_BLK7'
 * '<S36>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/SCALAR_BLK8'
 * '<S37>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/Turn Off Delay Time'
 * '<S38>'  : 'VSMR_ac/VSMR_MedTEB/VSMC_A/VSMC_Enabled/Turn Off Delay Time/EdgeFalling'
 * '<S39>'  : 'VSMR_ac/VSMR_PwrOn/Enumerated Constant1'
 * '<S40>'  : 'VSMR_ac/VSMR_PwrOn/Enumerated Constant2'
 * '<S41>'  : 'VSMR_ac/VSMR_PwrOn/Enumerated Constant3'
 */
#endif                                 /* RTW_HEADER_VSMR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
