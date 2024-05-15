/*
 * File: EBMR_ac.h
 *
 * Code generated for Simulink model 'EBMR_ac'.
 *
 * Model version                  : 9.168
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:35:12 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EBMR_ac_h_
#define RTW_HEADER_EBMR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef EBMR_ac_COMMON_INCLUDES_
#define EBMR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_EBMR.h"
#endif                                 /* EBMR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_EBMR_ac_T
{

#if Rte_SysCon_Variant_EBMR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubsys;
                         /* '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_l;
                         /* '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_j;
                         /* '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_g;
                         /* '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_b;
                         /* '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    float32 VM_Conditional_Signal_TmpVM_FcnCallSubsy;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    float32 VM_Conditional_Signal_TmpVM_FcnCallSub_h;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    float32 VM_Conditional_Signal_TmpVM_FcnCallSub_a;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_m;
                         /* '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    float32 VM_Conditional_Signal_TmpVM_FcnCallSub_k;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    uint8 TmpSignalConversionAtTmpVM_FcnCallSubs_d;
                         /* '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_j1;
                         /* '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_bl;
                         /* '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSubs_o;
                         /* '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    boolean VM_Conditional_Signal_TmpVM_FcnCallSub_j;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    boolean VM_Conditional_Signal_TmpVM_FcnCallSub_l;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    boolean VM_Conditional_Signal_TmpVM_FcnCallSub_e;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    boolean VM_Conditional_Signal_TmpVM_FcnCallSu_lo;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    boolean VM_Conditional_Signal_TmpVM_FcnCallSu_lg;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    boolean VM_Conditional_Signal_TmpVM_FcnCallSub_m;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    boolean VM_Conditional_Signal_TmpVM_FcnCallSub_i;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    TeTRGR_e_TransRangeState TmpSignalConversionAtTmpVM_FcnCallSub_j3;
                         /* '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    TeTMDR_e_TrrnMd VM_Conditional_Signal_TmpVM_FcnCallSu_jn;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    TeTMDR_e_TrrnMd VM_Conditional_Signal_TmpVM_FcnCallSu_ku;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    TeTIMR_e_RaceModeSts VM_Conditional_Signal_TmpVM_FcnCallSu_jz;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    TePLTR_e_HAS_TelltaleSts VM_Conditional_Signal_TmpVM_FcnCallSub_d;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    TePLTR_e_AEB_SystemSts VM_Conditional_Signal_TmpVM_FcnCallSub_n;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    TePLTR_e_ACCSystemSts VM_Conditional_Signal_TmpVM_FcnCallSu_as;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    TeEBMR_e_eBoostWarning VariantMergeForOutportVeEBMC_e_eBoostWar;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    TeDMDR_e_TurtleMdSts VM_Conditional_Signal_TmpVM_FcnCallSu_em;

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    TeDMDR_e_DrvMd TmpSignalConversionAtTmpVM_FcnCallSubs_e;
                         /* '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */

#define B_EBMR_AC_T_VARIANT_EXISTS
#endif

#ifndef B_EBMR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
B_EBMR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_EBMR_ac_T
{

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    float32 UnitDelay_DSTATE;          /* '<S81>/Unit Delay' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    float32 VeEBMC_t_eBoostDeactivatedTimer;/* '<S200>/eBoost_State_Machine' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    float32 VeEBMC_t_eBoostNotAvailableTimer;/* '<S200>/eBoost_State_Machine' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    float32 VeEBMC_t_eBoostDeactivatedTimer_g;/* '<S199>/eBoost_State_Machine' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    float32 VeEBMC_t_eBoostNotAvailableTimer_a;/* '<S199>/eBoost_State_Machine' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    sint16 UnitDelay_DSTATE_g;         /* '<S53>/UnitDelay' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    boolean UnitDelay_DSTATE_p;        /* '<S128>/Unit Delay' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    boolean UnitDelay_DSTATE_n;        /* '<S80>/Unit Delay' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    boolean UnitDelay_DSTATE_b;        /* '<S79>/Unit Delay' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    boolean UnitDelay_DSTATE_f;        /* '<S59>/Unit Delay' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    boolean UnitDelay_DSTATE_m;        /* '<S58>/Unit Delay' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    boolean UnitDelay_DSTATE_d;        /* '<S31>/UnitDelay' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1

    boolean UnitDelay_DSTATE_n1;       /* '<S6>/Unit Delay' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    uint8 is_active_c1_EBMR_ac;        /* '<S200>/eBoost_State_Machine' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    uint8 is_c1_EBMR_ac;               /* '<S200>/eBoost_State_Machine' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    uint8 is_eBoost_OFF_Deactivated;   /* '<S200>/eBoost_State_Machine' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    uint8 is_active_c2_EBMR_ac;        /* '<S199>/eBoost_State_Machine' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    uint8 is_c2_EBMR_ac;               /* '<S199>/eBoost_State_Machine' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    uint8 is_eBoost_OFF_Deactivated_k; /* '<S199>/eBoost_State_Machine' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    uint8 is_eBoost_PrepPS_PrepNoPS_State;/* '<S199>/eBoost_State_Machine' */

#define DW_EBMR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_EBMR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_EBMR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_EBMR
#include "MemMap.h"

extern VAR(B_EBMR_ac_T, EBMR_VAR_INIT) EBMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_EBMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_EBMR
#include "MemMap.h"

extern VAR(DW_EBMR_ac_T, EBMR_VAR_INIT) EBMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_EBMR
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
 * '<Root>' : 'EBMR_ac'
 * '<S1>'   : 'EBMR_ac/EBMR_MedTED'
 * '<S2>'   : 'EBMR_ac/EBMR_PwrOn'
 * '<S3>'   : 'EBMR_ac/EBMR_MedTED/EBMO'
 * '<S4>'   : 'EBMR_ac/EBMR_MedTED/eBoost_Control'
 * '<S5>'   : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State'
 * '<S6>'   : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/EdgeRising'
 * '<S7>'   : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/HeEBMR_t_dtEBMR'
 * '<S8>'   : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/KaEBMR_e_P2PStatusRemap'
 * '<S9>'   : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/KeEBMR_Pct_PSAccelPedalThreshold'
 * '<S10>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/KeEBMR_b_P2PNoSwitch'
 * '<S11>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/KeEBMR_t_P2PMaxUnavail'
 * '<S12>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/PowerShotPrepTime_Arb'
 * '<S13>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability'
 * '<S14>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning'
 * '<S15>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_status_Arb'
 * '<S16>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/PowerShotPrepTime_Arb/KeEBMR_t_PowerShotPrepTime'
 * '<S17>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Drive1'
 * '<S18>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Drive10'
 * '<S19>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Drive11'
 * '<S20>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Drive12'
 * '<S21>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Drive13'
 * '<S22>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Drive2'
 * '<S23>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Drive3'
 * '<S24>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Drive4'
 * '<S25>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Drive5'
 * '<S26>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Drive6'
 * '<S27>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Drive7'
 * '<S28>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Drive8'
 * '<S29>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Drive9'
 * '<S30>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/EnumeratedConstant'
 * '<S31>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Hysteresis_1'
 * '<S32>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/KaEBMR_b_TrrnMdEnblSt'
 * '<S33>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/KeEBMR_P_PBatMaxLim_LSP'
 * '<S34>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/KeEBMR_P_PBatMaxLim_RSP'
 * '<S35>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/KeEBMR_T_InvrtrMtrBMaxTempThrshld'
 * '<S36>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/KeEBMR_T_MtrBMaxTempThrshld'
 * '<S37>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/KeEBMR_v_MaxSpdThrshld'
 * '<S38>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/KeEBMR_v_MinSpdThrshld'
 * '<S39>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb'
 * '<S40>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb/EnumeratedConstant'
 * '<S41>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb/EnumeratedConstant1'
 * '<S42>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb/EnumeratedConstant11'
 * '<S43>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb/EnumeratedConstant12'
 * '<S44>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb/EnumeratedConstant13'
 * '<S45>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb/EnumeratedConstant2'
 * '<S46>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb/EnumeratedConstant3'
 * '<S47>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb/EnumeratedConstant4'
 * '<S48>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb/EnumeratedConstant5'
 * '<S49>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb/KeEBMR_T_HVBattMaxLim'
 * '<S50>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb/KeEBMR_T_HVBattMinLim'
 * '<S51>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb/KeEBMR_T_InvrtrMtrAMaxTempThrshld'
 * '<S52>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Availability/Powershot_Only_Arb/KeEBMR_T_MtrAMaxTempThrshld'
 * '<S53>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning'
 * '<S54>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning'
 * '<S55>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI'
 * '<S56>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Completed'
 * '<S57>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/DriverCancel'
 * '<S58>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/EdgeFalling'
 * '<S59>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/EdgeRising'
 * '<S60>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/EngageInstruction'
 * '<S61>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Enumerated_Constant1'
 * '<S62>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Enumerated_Constant10'
 * '<S63>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Enumerated_Constant11'
 * '<S64>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Enumerated_Constant12'
 * '<S65>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Enumerated_Constant2'
 * '<S66>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Enumerated_Constant3'
 * '<S67>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Enumerated_Constant4'
 * '<S68>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Enumerated_Constant5'
 * '<S69>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Enumerated_Constant6'
 * '<S70>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Enumerated_Constant7'
 * '<S71>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Enumerated_Constant8'
 * '<S72>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Enumerated_Constant9'
 * '<S73>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/HeEBMR_t_dtEBMR'
 * '<S74>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/KeEBMR_T_HVBattMinLim'
 * '<S75>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/KeEBMR_b_BEVPowershot'
 * '<S76>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/KeEBMR_b_P2PNoSwitch'
 * '<S77>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/NoHMI'
 * '<S78>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/PowershotPrep'
 * '<S79>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/SignalLatchOnWithReset'
 * '<S80>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/SignalLatchOnWithReset1'
 * '<S81>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/StopWatchResetTriggerEnabled'
 * '<S82>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI'
 * '<S83>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled'
 * '<S84>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_ACCEngd'
 * '<S85>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_ADASEngd'
 * '<S86>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_ESCActv'
 * '<S87>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_HighBattTemp'
 * '<S88>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_Launch'
 * '<S89>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_Maxboost'
 * '<S90>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_NotDrive'
 * '<S91>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_RaceModes'
 * '<S92>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_SystemFault'
 * '<S93>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_TimeAttack'
 * '<S94>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_Valet'
 * '<S95>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/EnumeratedConstant'
 * '<S96>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/EnumeratedConstant1'
 * '<S97>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/EnumeratedConstant11'
 * '<S98>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/EnumeratedConstant12'
 * '<S99>'  : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/EnumeratedConstant13'
 * '<S100>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/EnumeratedConstant2'
 * '<S101>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/EnumeratedConstant3'
 * '<S102>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/EnumeratedConstant4'
 * '<S103>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/EnumeratedConstant5'
 * '<S104>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/EnumeratedConstant6'
 * '<S105>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/EnumeratedConstant7'
 * '<S106>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/EnumeratedConstant8'
 * '<S107>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/KeEBMR_T_HVBattMaxLim'
 * '<S108>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/KeEBMR_b_BEVPowershot'
 * '<S109>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/NoHMI'
 * '<S110>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled/Enumerated_Constant1'
 * '<S111>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_ACCEngd/Enumerated_Constant1'
 * '<S112>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_ADASEngd/Enumerated_Constant1'
 * '<S113>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_ESCActv/Enumerated_Constant1'
 * '<S114>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_HighBattTemp/Enumerated_Constant1'
 * '<S115>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_Launch/Enumerated_Constant1'
 * '<S116>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_Maxboost/Enumerated_Constant1'
 * '<S117>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_NotDrive/Enumerated_Constant1'
 * '<S118>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_RaceModes/Enumerated_Constant1'
 * '<S119>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_SystemFault/Enumerated_Constant1'
 * '<S120>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_TimeAttack/Enumerated_Constant1'
 * '<S121>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/Cancelled_Valet/Enumerated_Constant1'
 * '<S122>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Cancelled_HMI/NoHMI/Enumerated_Constant1'
 * '<S123>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Completed/Enumerated_Constant1'
 * '<S124>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/DriverCancel/Enumerated_Constant1'
 * '<S125>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/EngageInstruction/Enumerated_Constant1'
 * '<S126>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/NoHMI/Enumerated_Constant1'
 * '<S127>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/PowershotPrep/Enumerated_Constant1'
 * '<S128>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/StopWatchResetTriggerEnabled/EdgeRising_F2T'
 * '<S129>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant'
 * '<S130>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant1'
 * '<S131>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant10'
 * '<S132>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant11'
 * '<S133>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant12'
 * '<S134>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant13'
 * '<S135>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant14'
 * '<S136>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant2'
 * '<S137>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant3'
 * '<S138>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant4'
 * '<S139>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant5'
 * '<S140>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant6'
 * '<S141>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant7'
 * '<S142>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant8'
 * '<S143>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/EnumeratedConstant9'
 * '<S144>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/KeEBMR_T_HVBattMaxLim'
 * '<S145>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/KeEBMR_T_HVBattMinLim'
 * '<S146>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/KeEBMR_T_InvrtrMtrBMaxTempThrshld'
 * '<S147>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/KeEBMR_T_InvrtrMtrBMaxTempThrshld1'
 * '<S148>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/KeEBMR_b_BEVPowershot'
 * '<S149>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/NoHMI'
 * '<S150>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable'
 * '<S151>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_ACCEngd'
 * '<S152>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_ADASEngd'
 * '<S153>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_ESCActv'
 * '<S154>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_HighBattTemp'
 * '<S155>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_LowBattTemp'
 * '<S156>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_LowBattery'
 * '<S157>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_MaxPower'
 * '<S158>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_NotDrive'
 * '<S159>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_P2P_Corsa'
 * '<S160>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_P2P_Launch'
 * '<S161>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_P2P_Maxboost'
 * '<S162>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_P2P_Timeattack'
 * '<S163>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_RaceModes'
 * '<S164>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_SystemFault'
 * '<S165>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_Valet'
 * '<S166>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/NoHMI/Enumerated_Constant1'
 * '<S167>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable/Enumerated_Constant1'
 * '<S168>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_ACCEngd/Enumerated_Constant1'
 * '<S169>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_ADASEngd/Enumerated_Constant1'
 * '<S170>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_ESCActv/Enumerated_Constant1'
 * '<S171>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_HighBattTemp/Enumerated_Constant1'
 * '<S172>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_LowBattTemp/Enumerated_Constant1'
 * '<S173>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_LowBattery/Enumerated_Constant1'
 * '<S174>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_MaxPower/Enumerated_Constant1'
 * '<S175>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_NotDrive/Enumerated_Constant1'
 * '<S176>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_P2P_Corsa/Enumerated_Constant1'
 * '<S177>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_P2P_Launch/Enumerated_Constant1'
 * '<S178>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_P2P_Maxboost/Enumerated_Constant1'
 * '<S179>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_P2P_Timeattack/Enumerated_Constant1'
 * '<S180>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_RaceModes/Enumerated_Constant1'
 * '<S181>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_SystemFault/Enumerated_Constant1'
 * '<S182>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/Powershot_Warning/Unavailable_HMI/Unavailable_Valet/Enumerated_Constant1'
 * '<S183>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/Deactivate_SPORTMODE'
 * '<S184>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/Enumerated_Constant'
 * '<S185>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/Enumerated_Constant1'
 * '<S186>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/Enumerated_Constant2'
 * '<S187>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/Enumerated_Constant3'
 * '<S188>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/Enumerated_Constant4'
 * '<S189>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/Enumerated_Constant5'
 * '<S190>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/Enumerated_Constant6'
 * '<S191>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/Inhibit_SPORTMODE'
 * '<S192>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/KeEBMR_t_MaxEnabledTime'
 * '<S193>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/KeEBMR_t_MaxEngagedTime'
 * '<S194>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/KeEBMR_t_eBoostOff'
 * '<S195>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/None'
 * '<S196>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/Deactivate_SPORTMODE/Enumerated_Constant1'
 * '<S197>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/Inhibit_SPORTMODE/Enumerated_Constant1'
 * '<S198>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_Warning/eBoost_Warning/None/Enumerated_Constant1'
 * '<S199>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_status_Arb/eBoost_BEV'
 * '<S200>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_status_Arb/eBoost_P1P4'
 * '<S201>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_status_Arb/eBoost_BEV/eBoost_State_Machine'
 * '<S202>' : 'EBMR_ac/EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_status_Arb/eBoost_P1P4/eBoost_State_Machine'
 * '<S203>' : 'EBMR_ac/EBMR_PwrOn/EBMR_Initialization'
 * '<S204>' : 'EBMR_ac/EBMR_PwrOn/EBMR_Initialization/Enumerated_Constant'
 * '<S205>' : 'EBMR_ac/EBMR_PwrOn/EBMR_Initialization/Enumerated_Constant1'
 * '<S206>' : 'EBMR_ac/EBMR_PwrOn/EBMR_Initialization/Enumerated_Constant2'
 */
#endif                                 /* RTW_HEADER_EBMR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
