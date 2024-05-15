/*
 * File: LQIR_ac.h
 *
 * Code generated for Simulink model 'LQIR_ac'.
 *
 * Model version                  : 9.87
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:26:46 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LQIR_ac_h_
#define RTW_HEADER_LQIR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef LQIR_ac_COMMON_INCLUDES_
#define LQIR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_LQIR.h"
#endif                                 /* LQIR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_LQIR_ac_T
{

#if Rte_SysCon_Variant_LQIR_2

    float32 OutportBufferForVeLQIR_M_TiRef;/* '<S152>/Constant Value' */

#define B_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_2

    float32 OutportBufferForVeLQIR_M_TiLQI_;/* '<S152>/Constant Value1' */

#define B_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_2

    float32 OutportBufferForVeLQIR_dn_NiDot;/* '<S152>/Constant Value2' */

#define B_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_2

    float32 OutportBufferForVeLQIR_M_TiDela;/* '<S152>/Constant Value3' */

#define B_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_2

    float32 OutportBufferForVeLQIR_M_TiMaxE;/* '<S152>/Constant Value4' */

#define B_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_2

    float32 OutportBufferForVeLQIR_M_TiMinE;/* '<S152>/Constant Value5' */

#define B_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_2

    float32 OutportBufferForVeLQIR_n_NiStat;/* '<S152>/Constant Value6' */

#define B_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 Merge3_c;                  /* '<S21>/Merge3' */

#define B_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 Merge1_c[2];               /* '<S21>/Merge1' */

#define B_LQIR_AC_T_VARIANT_EXISTS
#endif

#ifndef B_LQIR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
B_LQIR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_LQIR_ac_T
{

#if Rte_SysCon_Variant_LQIR_1

    float32 UnitDelay_DSTATE;          /* '<S146>/Unit Delay' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 UnitDelay_1_DSTATE;        /* '<S135>/Unit Delay' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 UnitDelay_DSTATE_d;        /* '<S118>/Unit Delay' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 UnitDelay_DSTATE_k;        /* '<S119>/Unit Delay' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 UnitDelay1_DSTATE;         /* '<S119>/Unit Delay1' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 UnitDelay3_DSTATE;         /* '<S119>/Unit Delay3' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 UnitDelay2_DSTATE;         /* '<S119>/Unit Delay2' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 UnitDelay_DSTATE_b;        /* '<S133>/Unit Delay' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 UnitDelay_DSTATE_o;        /* '<S132>/Unit Delay' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 UnitDelay_DSTATE_f;        /* '<S127>/Unit Delay' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 UnitDelay_DSTATE_p;        /* '<S128>/Unit Delay' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    float32 UnitDelay_1_DSTATE_j;      /* '<S106>/Unit Delay' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    boolean UnitDelay_DSTATE_n;        /* '<S5>/Unit Delay' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_LQIR_1

    boolean UnitDelay_DSTATE_e;        /* '<S4>/Unit Delay' */

#define DW_LQIR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_LQIR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_LQIR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LQIR
#include "MemMap.h"

extern VAR(B_LQIR_ac_T, LQIR_VAR_INIT) LQIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LQIR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LQIR
#include "MemMap.h"

extern VAR(DW_LQIR_ac_T, LQIR_VAR_INIT) LQIR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LQIR
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
 * '<Root>' : 'LQIR_ac'
 * '<S1>'   : 'LQIR_ac/LQIR_MedTEB2'
 * '<S2>'   : 'LQIR_ac/LQIR_PwrOn'
 * '<S3>'   : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect'
 * '<S4>'   : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller'
 * '<S5>'   : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax'
 * '<S6>'   : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active'
 * '<S7>'   : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Inactive'
 * '<S8>'   : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/KeLQIR_b_KeepMinMax'
 * '<S9>'   : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/LQIC_DisableCtrl'
 * '<S10>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Set Block'
 * '<S11>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Set Block1'
 * '<S12>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Set Block10'
 * '<S13>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Set Block2'
 * '<S14>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Set Block3'
 * '<S15>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Set Block4'
 * '<S16>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Set Block5'
 * '<S17>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Set Block6'
 * '<S18>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Set Block7'
 * '<S19>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Set Block8'
 * '<S20>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Set Block9'
 * '<S21>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect'
 * '<S22>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_SystAuthority'
 * '<S23>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Enumerated Value'
 * '<S24>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Enumerated Value1'
 * '<S25>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Enumerated Value2'
 * '<S26>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Enumerated Value3'
 * '<S27>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Enumerated Value4'
 * '<S28>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Enumerated Value5'
 * '<S29>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Enumerated Value6'
 * '<S30>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Enumerated Value7'
 * '<S31>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Enumerated Value8'
 * '<S32>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Enumerated Value9'
 * '<S33>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G1'
 * '<S34>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G2'
 * '<S35>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G3'
 * '<S36>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G4'
 * '<S37>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/HeLQIR_t_MedTEB_dT'
 * '<S38>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/KeLQIR_k_TiCmdFilt'
 * '<S39>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/KtLQIR_K_BackCalcGain'
 * '<S40>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M1'
 * '<S41>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M2'
 * '<S42>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M3'
 * '<S43>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Neutral'
 * '<S44>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Set Block'
 * '<S45>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Set Block1'
 * '<S46>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G1/KaLQIR_K_G1_Kmatrix'
 * '<S47>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G1/KeLQIR_J_G1_Ie'
 * '<S48>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G1/KeLQIR_K_G1_EngMdl_A'
 * '<S49>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G1/KeLQIR_K_G1_EngMdl_B'
 * '<S50>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G1/KeLQIR_K_G1_EngMdl_C'
 * '<S51>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G1/KeLQIR_K_G1_EngMdl_D'
 * '<S52>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G1/KeLQIR_K_G1_Kint'
 * '<S53>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G2/KaLQIR_K_G2_Kmatrix'
 * '<S54>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G2/KeLQIR_J_G2_Ie'
 * '<S55>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G2/KeLQIR_K_G2_EngMdl_A'
 * '<S56>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G2/KeLQIR_K_G2_EngMdl_B'
 * '<S57>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G2/KeLQIR_K_G2_EngMdl_C'
 * '<S58>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G2/KeLQIR_K_G2_EngMdl_D'
 * '<S59>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G2/KeLQIR_K_G2_Kint'
 * '<S60>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G3/KaLQIR_K_G3_Kmatrix'
 * '<S61>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G3/KeLQIR_J_G3_Ie'
 * '<S62>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G3/KeLQIR_K_G3_EngMdl_A'
 * '<S63>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G3/KeLQIR_K_G3_EngMdl_B'
 * '<S64>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G3/KeLQIR_K_G3_EngMdl_C'
 * '<S65>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G3/KeLQIR_K_G3_EngMdl_D'
 * '<S66>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G3/KeLQIR_K_G3_Kint'
 * '<S67>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G4/KaLQIR_K_G4_Kmatrix'
 * '<S68>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G4/KeLQIR_J_G4_Ie'
 * '<S69>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G4/KeLQIR_K_G4_EngMdl_A'
 * '<S70>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G4/KeLQIR_K_G4_EngMdl_B'
 * '<S71>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G4/KeLQIR_K_G4_EngMdl_C'
 * '<S72>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G4/KeLQIR_K_G4_EngMdl_D'
 * '<S73>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/G4/KeLQIR_K_G4_Kint'
 * '<S74>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M1/KaLQIR_K_M1_Kmatrix'
 * '<S75>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M1/KeLQIR_J_M1_Ie'
 * '<S76>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M1/KeLQIR_K_M1_EngMdl_A'
 * '<S77>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M1/KeLQIR_K_M1_EngMdl_B'
 * '<S78>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M1/KeLQIR_K_M1_EngMdl_C'
 * '<S79>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M1/KeLQIR_K_M1_EngMdl_D'
 * '<S80>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M1/KeLQIR_K_M1_Kint'
 * '<S81>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M2/KaLQIR_K_M2_Kmatrix'
 * '<S82>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M2/KeLQIR_J_M2_Ie'
 * '<S83>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M2/KeLQIR_K_M2_EngMdl_A'
 * '<S84>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M2/KeLQIR_K_M2_EngMdl_B'
 * '<S85>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M2/KeLQIR_K_M2_EngMdl_C'
 * '<S86>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M2/KeLQIR_K_M2_EngMdl_D'
 * '<S87>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M2/KeLQIR_K_M2_Kint'
 * '<S88>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M3/KaLQIR_K_M3_Kmatrix'
 * '<S89>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M3/KeLQIR_J_M3_Ie'
 * '<S90>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M3/KeLQIR_K_M3_EngMdl_A'
 * '<S91>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M3/KeLQIR_K_M3_EngMdl_B'
 * '<S92>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M3/KeLQIR_K_M3_EngMdl_C'
 * '<S93>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M3/KeLQIR_K_M3_EngMdl_D'
 * '<S94>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/M3/KeLQIR_K_M3_Kint'
 * '<S95>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Neutral/KaLQIR_K_N_Kmatrix'
 * '<S96>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Neutral/KeLQIR_J_N_Ie'
 * '<S97>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Neutral/KeLQIR_K_N_EngMdl_A'
 * '<S98>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Neutral/KeLQIR_K_N_EngMdl_B'
 * '<S99>'  : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Neutral/KeLQIR_K_N_EngMdl_C'
 * '<S100>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Neutral/KeLQIR_K_N_EngMdl_D'
 * '<S101>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Active/LQIC_CalSelect/Neutral/KeLQIR_K_N_Kint'
 * '<S102>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/Calibrations_Inactive/HeLQIR_t_MedTEB_dT'
 * '<S103>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/LQIC_DisableCtrl/KeLQIR_b_DisableLQI'
 * '<S104>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_CalSelect/LQIC_DisableCtrl/Set Block'
 * '<S105>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active'
 * '<S106>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Inactive'
 * '<S107>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/EngModel_IC'
 * '<S108>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/KeLQIR_b_TiErrorInit'
 * '<S109>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Calc_Err'
 * '<S110>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_EngDelay_Model'
 * '<S111>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd'
 * '<S112>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_State_Ref'
 * '<S113>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/Set Block1'
 * '<S114>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/Set Block2'
 * '<S115>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/Set Block3'
 * '<S116>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/Set Block4'
 * '<S117>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/Set Block5'
 * '<S118>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_EngDelay_Model/Unit Delay Reset Enabled'
 * '<S119>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/Cmd_FilteringAndSaturation'
 * '<S120>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/ITerm'
 * '<S121>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/Set Block1'
 * '<S122>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/Set Block2'
 * '<S123>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/Cmd_FilteringAndSaturation/ApplyFILT_1stOrderLag_flt'
 * '<S124>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/Cmd_FilteringAndSaturation/Protected Division'
 * '<S125>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/Cmd_FilteringAndSaturation/SCALAR_BLK'
 * '<S126>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/Cmd_FilteringAndSaturation/Saturation Dynamic'
 * '<S127>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/Cmd_FilteringAndSaturation/Unit Delay Reset Enabled'
 * '<S128>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/ITerm/IntegratorK Reset Enabled Limited'
 * '<S129>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/ITerm/SCALAR_BLK'
 * '<S130>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/ITerm/SCALAR_BLK1'
 * '<S131>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/ITerm/SCALAR_BLK2'
 * '<S132>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/ITerm/Unit Delay Reset Enabled'
 * '<S133>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/ITerm/Unit Delay Reset Enabled1'
 * '<S134>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_Eval_Cmd/ITerm/IntegratorK Reset Enabled Limited/Limiter'
 * '<S135>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Active/LQIC_State_Ref/Unit Delay Reset Enabled'
 * '<S136>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Inactive/KeLQIR_b_InactiveOutSel'
 * '<S137>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_Controller/LQI_Inactive/Protected Division'
 * '<S138>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax/KeLQIR_b_KeepMinMax'
 * '<S139>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax/TiEstMinMax_Active'
 * '<S140>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax/TiEstMinMax_Inactive'
 * '<S141>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax/TiEstMinMax_Active/LQIC_EngDelay_Model'
 * '<S142>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax/TiEstMinMax_Active/Set Block1'
 * '<S143>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax/TiEstMinMax_Active/Set Block2'
 * '<S144>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax/TiEstMinMax_Active/Ti_HybCmnd_Fast_Arbitration'
 * '<S145>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax/TiEstMinMax_Active/Ti_MinEST_ETRQ'
 * '<S146>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax/TiEstMinMax_Active/LQIC_EngDelay_Model/Unit Delay Reset Enabled'
 * '<S147>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax/TiEstMinMax_Active/Ti_HybCmnd_Fast_Arbitration/Enumerated Constant'
 * '<S148>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax/TiEstMinMax_Active/Ti_HybCmnd_Fast_Arbitration/Enumerated Constant1'
 * '<S149>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax/TiEstMinMax_Active/Ti_HybCmnd_Fast_Arbitration/KeLQIR_b_TiFastArb'
 * '<S150>' : 'LQIR_ac/LQIR_MedTEB2/LQIC_TiEstMinMax/TiEstMinMax_Active/Ti_MinEST_ETRQ/Protected Division'
 * '<S151>' : 'LQIR_ac/LQIR_PwrOn/LQIC_Init'
 * '<S152>' : 'LQIR_ac/LQIR_PwrOn/LQIR_NF'
 */
#endif                                 /* RTW_HEADER_LQIR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
