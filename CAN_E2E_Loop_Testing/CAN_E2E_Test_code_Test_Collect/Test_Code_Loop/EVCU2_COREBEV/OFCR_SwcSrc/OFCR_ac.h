/*
 * File: OFCR_ac.h
 *
 * Code generated for Simulink model 'OFCR_ac'.
 *
 * Model version                  : 9.95
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:34:54 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_OFCR_ac_h_
#define RTW_HEADER_OFCR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef OFCR_ac_COMMON_INCLUDES_
#define OFCR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_OFCR.h"
#endif                                 /* OFCR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_OFCR_ac_T
{
    float32 VariantMergeForOutportVeOFCR_I_ChrgPortO;

#if Rte_SysCon_Variant_OFCR_FUNC

    float32 VeOFCR_t_TriggerBulbsTimer;/* '<S214>/BulbTrigSeq' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    float32 VeOFCR_t_StateColorTimer1; /* '<S97>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    float32 VeOFCR_t_StateColorTimer;  /* '<S75>/BulbCheck' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    float32 VeOFCR_t_BCIM_StateColorTimer;/* '<S19>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

    sint16 VariantMergeForOutportVeOFCR_k_ChargeReq;
    boolean VariantMergeForOutportVeOFCR_b_BckLghtCm;
    boolean VariantMergeForOutportVeOFCR_b_CPIM_Blue;
    boolean VariantMergeForOutportVeOFCR_b_CPIM_Gree;
    boolean VariantMergeForOutportVeOFCR_b_CPIM_RedL;
    boolean VariantMergeForOutportVeOFCR_b_ChrgPortO;
    boolean VariantMergeForOutportVeOFCR_b_ChrgPor_d;
    boolean VariantMergeForOutportVeOFCR_b_InternalL;

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean Merge;                     /* '<S71>/Merge' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean Merge1;                    /* '<S71>/Merge1' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean Merge3;                    /* '<S71>/Merge3' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean VeOFCR_b_TriggerBulbs;     /* '<S214>/BulbTrigSeq' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean VeOFCR_b_SetColorRed;      /* '<S75>/BulbCheck' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean VeOFCR_b_SetColorGreen;    /* '<S75>/BulbCheck' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean VeOFCR_b_SetColorBlue;     /* '<S75>/BulbCheck' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

    TeCITR_e_CPIM_Indication VariantMergeForOutportVeOFCR_e_CPIM_Ind1;
    TeCITR_e_CPIM_Indication VariantMergeForOutportVeOFCR_e_CPIM_Ind2;
    TeCITR_e_CPIM_Indication VariantMergeForOutportVeOFCR_e_CPIM_Ind3;
    TeCITR_e_CPIM_Indication VariantMergeForOutportVeOFCR_e_CPIM_Ind4;
    TeCITR_e_CPIM_Indication VariantMergeForOutportVeOFCR_e_CPIM_Ind5;

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_Indication Ind1_Cmd; /* '<S97>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_Indication Ind2_Cmd; /* '<S97>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_Indication Ind3_Cmd; /* '<S97>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_Indication Ind4_Cmd; /* '<S97>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_Indication Ind5_Cmd; /* '<S97>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_Indication Ind1_Cmd_a;/* '<S95>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_Indication Ind2_Cmd_h;/* '<S95>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_Indication Ind3_Cmd_o;/* '<S95>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_Indication Ind4_Cmd_f;/* '<S95>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_Indication Ind5_Cmd_o;/* '<S95>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

    TeCITR_e_CPIM_Icon_Ind VariantMergeForOutportVeOFCR_e_CPIM_Icon;
    TeCITR_e_CPIM_Icon_Ind VariantMergeForOutportVeOFCR_e_CPIM_Ic_j;
    TeCITR_e_CPIM_Color VariantMergeForOutportVeOFCR_e_CPIM_Colo;
    TeCITR_e_CPIM_BlinkRate VariantMergeForOutportVeOFCR_e_CPIM_Blin;
    TeCITR_e_BCIM_Indication VariantMergeForOutportVeOFCR_e_BCIM_Ind1;
    TeCITR_e_BCIM_Indication VariantMergeForOutportVeOFCR_e_BCIM_Ind2;
    TeCITR_e_BCIM_Indication VariantMergeForOutportVeOFCR_e_BCIM_Ind3;
    TeCITR_e_BCIM_Indication VariantMergeForOutportVeOFCR_e_BCIM_Ind4;
    TeCITR_e_BCIM_Indication VariantMergeForOutportVeOFCR_e_BCIM_Ind5;

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_BCIM_Indication Ind1_Cmd_k;/* '<S19>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_BCIM_Indication Ind2_Cmd_g;/* '<S19>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_BCIM_Indication Ind3_Cmd_n;/* '<S19>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_BCIM_Indication Ind4_Cmd_k;/* '<S19>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_BCIM_Indication Ind5_Cmd_g;/* '<S19>/Stateflow Chart' */

#define B_OFCR_AC_T_VARIANT_EXISTS
#endif

    TeCITR_e_BCIM_Color VariantMergeForOutportVeOFCR_e_BCIM_Colo;
    TeCITR_e_BCIM_BlinkRate VariantMergeForOutportVeOFCR_e_BCIM_Blin;
}
B_OFCR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_OFCR_ac_T
{

#if Rte_SysCon_Variant_OFCR_FUNC

    float32 UnitDelay_DSTATE;          /* '<S180>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    float32 UnitDelay_DSTATE_h;        /* '<S90>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    float32 UnitDelay_DSTATE_p;        /* '<S86>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint16 UnitDelay_DSTATE_k;         /* '<S194>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay_DSTATE_g;        /* '<S160>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay1_DSTATE;         /* '<S178>/Unit Delay1' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay2_DSTATE_k;       /* '<S72>/Unit Delay2' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay_DSTATE_i;        /* '<S224>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay2_DSTATE_e;       /* '<S224>/Unit Delay2' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay_DSTATE_m;        /* '<S225>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay_DSTATE_c;        /* '<S242>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay_DSTATE_gb;       /* '<S230>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay_DSTATE_d;        /* '<S229>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay_DSTATE_hk;       /* '<S217>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay_DSTATE_dj;       /* '<S195>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay1_DSTATE_fb;      /* '<S90>/Unit Delay1' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay_DSTATE_go;       /* '<S87>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay1_DSTATE_e;       /* '<S86>/Unit Delay1' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean UnitDelay_DSTATE_b;        /* '<S83>/Unit Delay' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 StatusByte_LIN1_BusOff;      /* '<Root>/DS_StatusByte_LIN1_BusOff' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 StatusByte_LIN2_BusOff;      /* '<Root>/DS_StatusByte_LIN2_BusOff' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 StatusByte_LIN3_BusOff;      /* '<Root>/DS_StatusByte_LIN3_BusOff' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 StatusByte_LostCommBCIM;     /* '<Root>/DS_StatusByte_LostCommBCIM' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 StatusByte_LostCommBCM;      /* '<Root>/DS_StatusByte_LostCommBCM' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 StatusByte_LostCommCPIM;     /* '<Root>/DS_StatusByte_LostCommCPIM' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 StatusByte_Module_Failure_CPIM;/* '<Root>/Data Store Memory' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 is_active_c4_OFCR_ac;        /* '<S214>/BulbTrigSeq' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 is_c4_OFCR_ac;               /* '<S214>/BulbTrigSeq' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 is_active_c2_OFCR_ac;        /* '<S97>/Stateflow Chart' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 is_c2_OFCR_ac;               /* '<S97>/Stateflow Chart' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 is_active_c1_OFCR_ac;        /* '<S75>/BulbCheck' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 is_c1_OFCR_ac;               /* '<S75>/BulbCheck' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 is_active_c6_OFCR_ac;        /* '<S19>/Stateflow Chart' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    uint8 is_c6_OFCR_ac;               /* '<S19>/Stateflow Chart' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean NeOFCR_b_PluginLatchOverride;
                                 /* '<Root>/DSM_NeOFCR_b_PluginLatchOverride' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean NeOFCR_b_RadioRqLstVldStt;
                                    /* '<Root>/DSM_NeOFCR_b_RadioRqLstVldStt' */

#define DW_OFCR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_OFCR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_OFCR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_OFCR_FUNC

    const boolean NotEqual1;           /* '<S212>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    const boolean NotEqual1_g;         /* '<S211>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    const boolean NotEqual1_l;         /* '<S210>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    const boolean NotEqual1_d;         /* '<S209>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    const boolean NotEqual1_e;         /* '<S208>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    const boolean NotEqual1_h;         /* '<S202>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    const boolean NotEqual1_n;         /* '<S201>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    const boolean NotEqual1_j;         /* '<S200>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    const boolean NotEqual1_dn;        /* '<S199>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTB_OFCR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstB_OFCR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_OFCR
#include "MemMap.h"

extern VAR(B_OFCR_ac_T, OFCR_VAR_INIT) OFCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_OFCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_OFCR
#include "MemMap.h"

extern VAR(DW_OFCR_ac_T, OFCR_VAR_INIT) OFCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_OFCR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_OFCR
#include "MemMap.h"

extern CONST(ConstB_OFCR_ac_T, OFCR_VAR_INIT) OFCR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_OFCR
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
 * '<Root>' : 'OFCR_ac'
 * '<S1>'   : 'OFCR_ac/OFCR_MedTEH'
 * '<S2>'   : 'OFCR_ac/OFCR_PwrOff'
 * '<S3>'   : 'OFCR_ac/OFCR_PwrOn'
 * '<S4>'   : 'OFCR_ac/OFCR_MedTEH/OFCC'
 * '<S5>'   : 'OFCR_ac/OFCR_MedTEH/OFCI'
 * '<S6>'   : 'OFCR_ac/OFCR_MedTEH/OFCO'
 * '<S7>'   : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface'
 * '<S8>'   : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface'
 * '<S9>'   : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc'
 * '<S10>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/LEDIntensity_BckLight'
 * '<S11>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/ServiceOverride'
 * '<S12>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor'
 * '<S13>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/HeOFCR_b_Actvt5LED'
 * '<S14>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem'
 * '<S15>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem1'
 * '<S16>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem2'
 * '<S17>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem3'
 * '<S18>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem7'
 * '<S19>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem8'
 * '<S20>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem9'
 * '<S21>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/KeOFCR_b_AlwBCIMKnigtRdrInUnlock'
 * '<S22>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem/Enumerated_Constant'
 * '<S23>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem/Enumerated_Constant1'
 * '<S24>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem/Enumerated_Constant2'
 * '<S25>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem/Enumerated_Constant3'
 * '<S26>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem/Enumerated_Constant4'
 * '<S27>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem/Enumerated_Constant5'
 * '<S28>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem/Enumerated_Constant6'
 * '<S29>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem1/Enumerated_Constant'
 * '<S30>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem1/Enumerated_Constant1'
 * '<S31>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem1/Enumerated_Constant2'
 * '<S32>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem1/Enumerated_Constant3'
 * '<S33>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem1/Enumerated_Constant4'
 * '<S34>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem1/Enumerated_Constant5'
 * '<S35>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem1/Enumerated_Constant6'
 * '<S36>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem1/Enumerated_Constant7'
 * '<S37>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem1/Enumerated_Constant8'
 * '<S38>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem2/Enumerated_Constant'
 * '<S39>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem2/Enumerated_Constant1'
 * '<S40>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem2/Enumerated_Constant2'
 * '<S41>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem2/Enumerated_Constant3'
 * '<S42>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem2/Enumerated_Constant4'
 * '<S43>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem2/Enumerated_Constant5'
 * '<S44>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem2/Enumerated_Constant6'
 * '<S45>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem2/Enumerated_Constant8'
 * '<S46>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem2/Enumerated_Constant9'
 * '<S47>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem3/Enumerated_Constant3'
 * '<S48>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem3/Enumerated_Constant4'
 * '<S49>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem3/Stateflow Chart'
 * '<S50>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem7/Enumerated_Constant'
 * '<S51>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem7/Enumerated_Constant1'
 * '<S52>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem7/Enumerated_Constant2'
 * '<S53>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem7/Enumerated_Constant3'
 * '<S54>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem7/Enumerated_Constant4'
 * '<S55>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem7/Enumerated_Constant5'
 * '<S56>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem7/Enumerated_Constant6'
 * '<S57>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem7/Enumerated_Constant7'
 * '<S58>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem7/Enumerated_Constant8'
 * '<S59>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem7/Enumerated_Constant9'
 * '<S60>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem8/Enumerated_Constant4'
 * '<S61>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem8/Enumerated_Constant5'
 * '<S62>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem8/Enumerated_Constant6'
 * '<S63>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem8/Stateflow Chart'
 * '<S64>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem9/Enumerated_Constant'
 * '<S65>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem9/Enumerated_Constant1'
 * '<S66>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem9/Enumerated_Constant2'
 * '<S67>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem9/Enumerated_Constant3'
 * '<S68>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem9/Enumerated_Constant4'
 * '<S69>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem9/Enumerated_Constant5'
 * '<S70>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action Subsystem9/Enumerated_Constant6'
 * '<S71>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic'
 * '<S72>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic'
 * '<S73>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/Icon_Logic'
 * '<S74>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem'
 * '<S75>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem1'
 * '<S76>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem2'
 * '<S77>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem3'
 * '<S78>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem4'
 * '<S79>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem5'
 * '<S80>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem6'
 * '<S81>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/KeOFCR_b_AlwCPIMBluFlshInUnlock'
 * '<S82>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem1/BulbCheck'
 * '<S83>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem3/EdgeRising'
 * '<S84>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem3/HeOFCR_t_ExecRate'
 * '<S85>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem3/KeOFCR_t_SqWaveTimePeriod'
 * '<S86>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem3/PositiveSquarewave'
 * '<S87>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem5/EdgeRising'
 * '<S88>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem5/HeOFCR_t_ExecRate'
 * '<S89>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem5/KeOFCR_t_SqWaveTimePeriod'
 * '<S90>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action Subsystem5/PositiveSquarewave'
 * '<S91>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem'
 * '<S92>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem1'
 * '<S93>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem2'
 * '<S94>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem3'
 * '<S95>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem4'
 * '<S96>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem7'
 * '<S97>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem8'
 * '<S98>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem9'
 * '<S99>'  : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/KeOFCR_b_AllowStopDC'
 * '<S100>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/KeOFCR_b_AlwCPIMKnitRdrInUnlock'
 * '<S101>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem/Enumerated_Constant'
 * '<S102>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem/Enumerated_Constant1'
 * '<S103>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem/Enumerated_Constant2'
 * '<S104>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem/Enumerated_Constant3'
 * '<S105>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem/Enumerated_Constant4'
 * '<S106>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem/Enumerated_Constant5'
 * '<S107>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem/Enumerated_Constant6'
 * '<S108>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem1/Enumerated_Constant'
 * '<S109>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem1/Enumerated_Constant1'
 * '<S110>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem1/Enumerated_Constant2'
 * '<S111>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem1/Enumerated_Constant3'
 * '<S112>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem1/Enumerated_Constant4'
 * '<S113>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem1/Enumerated_Constant5'
 * '<S114>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem1/Enumerated_Constant6'
 * '<S115>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem2/Enumerated_Constant'
 * '<S116>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem2/Enumerated_Constant1'
 * '<S117>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem2/Enumerated_Constant2'
 * '<S118>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem2/Enumerated_Constant3'
 * '<S119>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem2/Enumerated_Constant5'
 * '<S120>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem2/Enumerated_Constant6'
 * '<S121>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem2/Enumerated_Constant7'
 * '<S122>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem2/Enumerated_Constant8'
 * '<S123>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem2/HeOFCR_b_Ignore_SOC_Max_Lev'
 * '<S124>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem3/Enumerated_Constant6'
 * '<S125>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem3/Stateflow Chart'
 * '<S126>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem4/Enumerated_Constant1'
 * '<S127>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem4/Enumerated_Constant6'
 * '<S128>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem4/Stateflow Chart'
 * '<S129>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem7/Enumerated_Constant'
 * '<S130>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem7/Enumerated_Constant1'
 * '<S131>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem7/Enumerated_Constant2'
 * '<S132>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem7/Enumerated_Constant3'
 * '<S133>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem7/Enumerated_Constant4'
 * '<S134>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem7/Enumerated_Constant5'
 * '<S135>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem7/Enumerated_Constant6'
 * '<S136>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem8/Enumerated_Constant5'
 * '<S137>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem8/Enumerated_Constant6'
 * '<S138>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem8/Stateflow Chart'
 * '<S139>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem9/Enumerated_Constant'
 * '<S140>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem9/Enumerated_Constant1'
 * '<S141>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem9/Enumerated_Constant2'
 * '<S142>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem9/Enumerated_Constant3'
 * '<S143>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem9/Enumerated_Constant4'
 * '<S144>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem9/Enumerated_Constant5'
 * '<S145>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action Subsystem9/Enumerated_Constant6'
 * '<S146>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/Icon_Logic/EvtInfo_Module_Failure_CPIM'
 * '<S147>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/Icon_Logic/If Action Subsystem'
 * '<S148>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/Icon_Logic/If Action Subsystem1'
 * '<S149>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/Icon_Logic/If Action Subsystem2'
 * '<S150>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/Icon_Logic/If Action Subsystem3'
 * '<S151>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/Icon_Logic/If Action Subsystem/Enumerated_Constant'
 * '<S152>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/Icon_Logic/If Action Subsystem/Enumerated_Constant1'
 * '<S153>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/Icon_Logic/If Action Subsystem1/Enumerated_Constant'
 * '<S154>' : 'OFCR_ac/OFCR_MedTEH/OFCC/CPIM_LINInterface/Icon_Logic/If Action Subsystem2/Enumerated_Constant'
 * '<S155>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic'
 * '<S156>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/CPIM_BCIM_Flt'
 * '<S157>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/CPIM_PowerStat'
 * '<S158>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/ChargingState'
 * '<S159>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/HeOFCR_t_ExecRate'
 * '<S160>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/PlugInStatus'
 * '<S161>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber'
 * '<S162>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/TriggerBulbs'
 * '<S163>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/HeOFCR_t_ExecRate'
 * '<S164>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/If Action Subsystem'
 * '<S165>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/If Action Subsystem1'
 * '<S166>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/If Action Subsystem2'
 * '<S167>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/If Action Subsystem3'
 * '<S168>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/IfThenElseifElse'
 * '<S169>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/KeOFCR_t_OFFTime'
 * '<S170>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/KeOFCR_t_ONTime'
 * '<S171>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/LeftOpenInterval'
 * '<S172>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/MN_MX_Deter'
 * '<S173>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/OpenInterval1'
 * '<S174>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/OpenInterval2'
 * '<S175>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/RightOpenInterval'
 * '<S176>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/RightOpenInterval2'
 * '<S177>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/Subsystem'
 * '<S178>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/Subsystem1'
 * '<S179>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/Subsystem1/KeOFCR_t_ResetThreshold'
 * '<S180>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/BlinkingLogic/Subsystem1/Stop Watch Reset Enabled'
 * '<S181>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/CPIM_BCIM_Flt/EvtInfo_LIN1_BusOff_FaultActiveTOC_4'
 * '<S182>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/CPIM_BCIM_Flt/EvtInfo_LIN2_BusOff_FaultActiveTOC_1'
 * '<S183>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/CPIM_BCIM_Flt/EvtInfo_LIN3_BusOff_FaultActiveTOC_5'
 * '<S184>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/CPIM_BCIM_Flt/EvtInfo_LostCommBCIM_FaultActiveTOC_2'
 * '<S185>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/CPIM_BCIM_Flt/EvtInfo_LostCommCPIM_FaultActiveTOC_3'
 * '<S186>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/CPIM_BCIM_Flt/HeOFCR_b_EnblLIN1_BusOff'
 * '<S187>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/CPIM_BCIM_Flt/HeOFCR_b_EnblLIN2_BusOff'
 * '<S188>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/CPIM_BCIM_Flt/HeOFCR_b_EnblLIN3_BusOff'
 * '<S189>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/CPIM_BCIM_Flt/KeOFCR_b_SnsronLINBus'
 * '<S190>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/ChargingState/Enumerated Value1'
 * '<S191>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/ChargingState/Enumerated Value2'
 * '<S192>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/ChargingState/Enumerated Value4'
 * '<S193>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/ChargingState/Enumerated Value5'
 * '<S194>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/PlugInStatus/Counter Reset  Enabled '
 * '<S195>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/PlugInStatus/EdgeRising2'
 * '<S196>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/PlugInStatus/KeOFCR_Cnt_ColorTimer'
 * '<S197>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/PlugInStatus/Signal Latch On With Reset'
 * '<S198>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/KaOFCR_k_CPIMTestColor'
 * '<S199>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Protected Division'
 * '<S200>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Protected Division1'
 * '<S201>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Protected Division2'
 * '<S202>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Protected Division3'
 * '<S203>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Subsystem1'
 * '<S204>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Subsystem2'
 * '<S205>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Subsystem3'
 * '<S206>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Subsystem4'
 * '<S207>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Subsystem5'
 * '<S208>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Subsystem1/Protected Division'
 * '<S209>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Subsystem2/Protected Division'
 * '<S210>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Subsystem3/Protected Division'
 * '<S211>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Subsystem4/Protected Division'
 * '<S212>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/SplitNumber/Subsystem5/Protected Division'
 * '<S213>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/TriggerBulbs/Enumerated Value6'
 * '<S214>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/TriggerBulbs/IfActionSubsystem1'
 * '<S215>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/TriggerBulbs/KeOFCR_b_TriggerBulbs'
 * '<S216>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/TriggerBulbs/IfActionSubsystem1/BulbTrigSeq'
 * '<S217>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/TriggerBulbs/IfActionSubsystem1/EdgeRising'
 * '<S218>' : 'OFCR_ac/OFCR_MedTEH/OFCC/InputProc/TriggerBulbs/IfActionSubsystem1/Enumerated Value'
 * '<S219>' : 'OFCR_ac/OFCR_MedTEH/OFCC/LEDIntensity_BckLight/Enumerated_Constant1'
 * '<S220>' : 'OFCR_ac/OFCR_MedTEH/OFCC/LEDIntensity_BckLight/EvtInfo_LostCommBCM_FaultActiveTOC_6'
 * '<S221>' : 'OFCR_ac/OFCR_MedTEH/OFCC/LEDIntensity_BckLight/KeOFCR_b_PassThru_IntLghtSts'
 * '<S222>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ServiceOverride/Enumerated Value2'
 * '<S223>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ServiceOverride/Enumerated_Constant'
 * '<S224>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor'
 * '<S225>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor'
 * '<S226>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/Subsystem'
 * '<S227>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/Enumerated_Constant'
 * '<S228>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/Hysteresis'
 * '<S229>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/Hysteresis1'
 * '<S230>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/Hysteresis2'
 * '<S231>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/Hysteresis3'
 * '<S232>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/KeOFCR_T_Abs_LSPDerate2Normal'
 * '<S233>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/KeOFCR_T_Abs_RSPDerate2Normal'
 * '<S234>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/KeOFCR_T_Del_LSPDerate2Normal'
 * '<S235>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/KeOFCR_T_Del_RSPDerate2Normal'
 * '<S236>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/KeOFCR_T_LSPAbsOTThrshldFlt'
 * '<S237>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/KeOFCR_T_LSPDeltaOTThrshldFlt'
 * '<S238>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/KeOFCR_T_RSPAbsOTThrshldFlt'
 * '<S239>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/KeOFCR_T_RSPDeltaOTThrshldFlt'
 * '<S240>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/KeOFCR_b_ACTempSensAvail'
 * '<S241>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/AC_ThermalSensor/KeOFCR_b_LINOffLOCCPIM_ACStop'
 * '<S242>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/EdgeRising'
 * '<S243>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/EnabledSubsystem'
 * '<S244>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/Enumerated_Constant'
 * '<S245>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/Enumerated_Constant1'
 * '<S246>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/Hysteresis'
 * '<S247>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/Hysteresis1'
 * '<S248>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/Hysteresis4'
 * '<S249>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/Hysteresis5'
 * '<S250>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/Hysteresis6'
 * '<S251>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/Hysteresis7'
 * '<S252>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_T_Abs_LSPDerate'
 * '<S253>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_T_Abs_LSPStop'
 * '<S254>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_T_Abs_RSPDerate'
 * '<S255>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_T_Abs_RSPStop'
 * '<S256>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_T_Del_LSPDerate_DCNeg'
 * '<S257>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_T_Del_LSPDerate_DCPos'
 * '<S258>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_T_Del_LSPStop_DCNeg'
 * '<S259>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_T_Del_LSPStop_DCPos'
 * '<S260>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_T_Del_RSPDerate_DCNeg'
 * '<S261>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_T_Del_RSPDerate_DCPos'
 * '<S262>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_T_Del_RSPStop_DCNeg'
 * '<S263>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_T_Del_RSPStop_DCPos'
 * '<S264>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_b_DCTempSensAvail'
 * '<S265>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_b_Derate_InletFA'
 * '<S266>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_b_LINOffLOCCPIM_DCStop'
 * '<S267>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/KeOFCR_b_Stop_InletFA'
 * '<S268>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/EnabledSubsystem/Set Block'
 * '<S269>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/DC_ThermalSensor/EnabledSubsystem/Set Block1'
 * '<S270>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/Subsystem/IfThenElseifElse'
 * '<S271>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/Subsystem/KeOFCR_I_DCInletOT'
 * '<S272>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/Subsystem/KeOFCR_I_InletOT'
 * '<S273>' : 'OFCR_ac/OFCR_MedTEH/OFCC/ThermalSensor/Subsystem/KeOFCR_I_NoDerate'
 * '<S274>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_Pct_HVBatSOC_HCP_Val'
 * '<S275>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_T_Chrg_Inlet_Temp_Val'
 * '<S276>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_T_DCNegTempOvrdVal'
 * '<S277>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_T_DCPosTempOvrdVal'
 * '<S278>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_T_EstAmbAirTemp_Val'
 * '<S279>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_BrkPedalDscrtInptOvrd'
 * '<S280>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_CPIMIconMismatch_Ovrd'
 * '<S281>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_CPIMIconMismatch_Val'
 * '<S282>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_CPIM_Icon1_Cmd_Ovrd'
 * '<S283>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_CPIM_Icon1_FailStsOvrd'
 * '<S284>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_CPIM_Icon1_FailStsVal'
 * '<S285>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_CPIM_Icon2_Cmd_Ovrd'
 * '<S286>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_CPIM_Icon2_FailStsOvrd'
 * '<S287>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_CPIM_Icon2_FailStsVal'
 * '<S288>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_ChargeType_Ovrd'
 * '<S289>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_ChrgSysFault_ReasonOvrd'
 * '<S290>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_Chrg_Inlet_Temp_Ovrd'
 * '<S291>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_DCNegTempFAOvrd'
 * '<S292>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_DCNegTempFAVal'
 * '<S293>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_DCNegTempOvrd'
 * '<S294>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_DCPosTempFAOvrd'
 * '<S295>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_DCPosTempFAVal'
 * '<S296>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_DCPosTempOvrd'
 * '<S297>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_DriveReady_Ovrd'
 * '<S298>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_DriveReady_Val'
 * '<S299>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_DschrgSysSts_Ovrd'
 * '<S300>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_EnableDischarge_Ovrd'
 * '<S301>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_EnableDischarge_Val'
 * '<S302>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_EstAmbAirTempFA_Ovrd'
 * '<S303>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_EstAmbAirTempFA_Val'
 * '<S304>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_EstAmbAirTemp_Ovrd'
 * '<S305>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_HVBatSOC_HCP_Ovrd'
 * '<S306>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_InletTempRatFail_Ovrd'
 * '<S307>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_InletTempRatFail_Val'
 * '<S308>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_InternalLightSts_Ovrd'
 * '<S309>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_InternalLightSts_Val'
 * '<S310>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_NoSchEnbl_Ovrd'
 * '<S311>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_NoSchEnbl_Val'
 * '<S312>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_OvrdEnblChrgPrtLck_BCI'
 * '<S313>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_OvrdEnblChrgSysFault'
 * '<S314>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_OvrdEnblChrgSysSts'
 * '<S315>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_OvrdEnblKeySts'
 * '<S316>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_OvrdEnblPluggedIn'
 * '<S317>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_OvrdEnblSmartEVSEDtctd'
 * '<S318>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_OvrdValChrgPrtLck_BCI'
 * '<S319>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_OvrdValChrgSysFault'
 * '<S320>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_OvrdValPluggedIn'
 * '<S321>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_OvrdValSmartEVSEDtctd'
 * '<S322>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_Rdy4ShtDwn_Ovrd'
 * '<S323>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_Rdy4ShtDwn_Val'
 * '<S324>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_SCPRChargeReq_Ovrd'
 * '<S325>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_SCPRChargeReq_Val'
 * '<S326>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_SecureConnV2L_Ovrd'
 * '<S327>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_SecureConnV2L_Val'
 * '<S328>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_b_ShifterPOSOvrd'
 * '<S329>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_e_BrkPedalDscrtInpt'
 * '<S330>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_e_CPIM_Icon1_Cmd_Val'
 * '<S331>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_e_CPIM_Icon2_Cmd_Val'
 * '<S332>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_e_ChargeType_OvrdVal'
 * '<S333>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_e_DschrgSysSts_Val'
 * '<S334>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_e_OvrdKeyStsVal'
 * '<S335>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_e_OvrdValChrgSysSts'
 * '<S336>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_e_ShifterPOS'
 * '<S337>' : 'OFCR_ac/OFCR_MedTEH/OFCI/KeOFCR_k_ChrgSysFault_Reason'
 * '<S338>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_BCIM_BlinkRate_Cmd_Ovrd'
 * '<S339>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_BCIM_Ind1_Cmd_Ovrd'
 * '<S340>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_BCIM_Ind2_Cmd_Ovrd'
 * '<S341>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_BCIM_Ind3_Cmd_Ovrd'
 * '<S342>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_BCIM_Ind4_Cmd_Ovrd'
 * '<S343>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_BCIM_Ind5_Cmd_Ovrd'
 * '<S344>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_BCIM_IndColor_Cmd_Ovrd'
 * '<S345>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_BlinkRate_Cmd_Ovrd'
 * '<S346>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_CPIM_Icon1_CmdOutOvrd'
 * '<S347>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_CPIM_Icon2_CmdOutOvrd'
 * '<S348>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_ChrgPortOT_DerateRq_Ovrd'
 * '<S349>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_ChrgPortOT_DerateRq_Val'
 * '<S350>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_ChrgPortOT_StopChrg_Ovrd'
 * '<S351>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_ChrgPortOT_StopChrg_Val'
 * '<S352>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_Ind1_Cmd_Ovrd'
 * '<S353>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_Ind2_Cmd_Ovrd'
 * '<S354>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_Ind3_Cmd_Ovrd'
 * '<S355>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_Ind4_Cmd_Ovrd'
 * '<S356>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_Ind5_Cmd_Ovrd'
 * '<S357>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_IndColor_Cmd_Ovrd'
 * '<S358>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_OvrdValBlue'
 * '<S359>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_OvrdValEnblBlue'
 * '<S360>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_OvrdValEnblGreen'
 * '<S361>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_OvrdValEnblRed'
 * '<S362>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_OvrdValGreen'
 * '<S363>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_b_OvrdValRed'
 * '<S364>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_BCIM_BlinkRate_Cmd_Val'
 * '<S365>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_BCIM_Ind1_Cmd_Val'
 * '<S366>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_BCIM_Ind2_Cmd_Val'
 * '<S367>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_BCIM_Ind3_Cmd_Val'
 * '<S368>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_BCIM_Ind4_Cmd_Val'
 * '<S369>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_BCIM_Ind5_Cmd_Val'
 * '<S370>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_BCIM_IndColor_Cmd_Val'
 * '<S371>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_BlinkRate_Cmd_Val'
 * '<S372>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_CPIM_Icon1_CmdOutVal'
 * '<S373>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_CPIM_Icon2_CmdOutVal'
 * '<S374>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_Ind1_Cmd_Val'
 * '<S375>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_Ind2_Cmd_Val'
 * '<S376>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_Ind3_Cmd_Val'
 * '<S377>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_Ind4_Cmd_Val'
 * '<S378>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_Ind5_Cmd_Val'
 * '<S379>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_e_IndColor_Cmd_Val'
 * '<S380>' : 'OFCR_ac/OFCR_MedTEH/OFCO/KeOFCR_k_OvrdValChrgReqRsn'
 * '<S381>' : 'OFCR_ac/OFCR_MedTEH/OFCO/MReport Model Info'
 * '<S382>' : 'OFCR_ac/OFCR_MedTEH/OFCO/Set Block'
 * '<S383>' : 'OFCR_ac/OFCR_MedTEH/OFCO/Set Block1'
 * '<S384>' : 'OFCR_ac/OFCR_MedTEH/OFCO/Set Block2'
 * '<S385>' : 'OFCR_ac/OFCR_MedTEH/OFCO/Set Block4'
 * '<S386>' : 'OFCR_ac/OFCR_PwrOn/DSM_Init'
 * '<S387>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init'
 * '<S388>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem'
 * '<S389>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/FUNC'
 * '<S390>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF'
 * '<S391>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_I_ChrgPortOTCrnt'
 * '<S392>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_b_ChrgPortOT_DerateRq_Val'
 * '<S393>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_b_ChrgPortOT_StopChrg_Val'
 * '<S394>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_b_OvrdValBlue'
 * '<S395>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_b_OvrdValGreen'
 * '<S396>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_b_OvrdValRed'
 * '<S397>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_BCIM_BlinkRate_Cmd_Val'
 * '<S398>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_BCIM_Ind1_Cmd_Val'
 * '<S399>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_BCIM_Ind2_Cmd_Val'
 * '<S400>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_BCIM_Ind3_Cmd_Val'
 * '<S401>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_BCIM_Ind4_Cmd_Val'
 * '<S402>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_BCIM_Ind5_Cmd_Val'
 * '<S403>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_BCIM_IndColor_Cmd_Val'
 * '<S404>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_BlinkRate_Cmd_Val'
 * '<S405>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_CPIM_Icon1_CmdOutVal'
 * '<S406>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_CPIM_Icon2_CmdOutVal'
 * '<S407>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_Ind1_Cmd_Val'
 * '<S408>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_Ind2_Cmd_Val'
 * '<S409>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_Ind3_Cmd_Val'
 * '<S410>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_Ind4_Cmd_Val'
 * '<S411>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_Ind5_Cmd_Val'
 * '<S412>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_e_IndColor_Cmd_Val'
 * '<S413>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/KeOFCR_k_OvrdValChrgReqRsn'
 * '<S414>' : 'OFCR_ac/OFCR_PwrOn/Sub_Out_Init/Variant Subsystem/NF/Set Block'
 */
#endif                                 /* RTW_HEADER_OFCR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
