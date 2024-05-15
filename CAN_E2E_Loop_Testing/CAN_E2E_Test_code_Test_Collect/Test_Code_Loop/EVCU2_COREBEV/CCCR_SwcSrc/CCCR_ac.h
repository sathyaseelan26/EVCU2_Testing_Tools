/*
 * File: CCCR_ac.h
 *
 * Code generated for Simulink model 'CCCR_ac'.
 *
 * Model version                  : 9.496
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:12:50 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CCCR_ac_h_
#define RTW_HEADER_CCCR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef CCCR_ac_COMMON_INCLUDES_
#define CCCR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CCCR.h"
#endif                                 /* CCCR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S198>/If Action Subsystem1' */
typedef struct
{
    boolean OutportBufferForFirstDecrFlag_O;/* '<S205>/TRUE Constant' */
}
B_IfActionSubsystem1_CCCR_ac_T;

/* Block signals for system '<S194>/If Action Subsystem2' */
typedef struct
{
    boolean OutportBufferForFirstIncrFlag_O;/* '<S207>/TRUE Constant' */
}
B_IfActionSubsystem2_CCCR_ac_T;

/* Block signals for system '<S195>/If Action Subsystem' */
typedef struct
{
    boolean OutportBufferForFirstIncrFlag_O;/* '<S218>/TRUE Constant' */
}
B_IfActionSubsystem_CCCR_ac_j_T;

/* Block signals for system '<S195>/If Action Subsystem1' */
typedef struct
{
    B_IfActionSubsystem1_CCCR_ac_T IfActionSubsystem1;/* '<S212>/If Action Subsystem1' */
}
B_IfActionSubsystem1_CCCR_a_f_T;

/* Block signals for system '<S223>/If Action Subsystem1' */
typedef struct
{
    B_IfActionSubsystem1_CCCR_ac_T IfActionSubsystem1;/* '<S227>/If Action Subsystem1' */
}
B_IfActionSubsystem1_CCCR_a_i_T;

/* Block signals (default storage) */
typedef struct tag_B_CCCR_ac_T
{
    float32 VariantMergeForOutportVeCCCR_I_;
    float32 VariantMergeForOutportVeCCCR__d;
    float32 VariantMergeForOutportVeCCCR__h;
    float32 VariantMergeForOutportVeCCCR__e;
    float32 VariantMergeForOutportVeCCCR__c;
    float32 VariantMergeForOutportVeCCCR__p;
    float32 VariantMergeForOutportVeCCCR_P_;
    float32 VariantMergeForOutportVeCCCR__k;
    float32 VariantMergeForOutportVeCCCR__g;
    float32 VariantMergeForOutportVeCCCR_ge;
    float32 VariantMergeForOutportVeCCCR_p1;
    float32 VariantMergeForOutportVeCCCR_U_;

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 TmpSignalConversionAtVeBPCR_Pct;

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 TmpSignalConversionAtVeHMIR_Pct;

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 TmpSignalConversionAtVeHVTR_I_S;

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 TmpSignalConversionAtVeHVTR_U_H;

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Merge;                     /* '<S4>/Merge' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Merge1;                    /* '<S4>/Merge1' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Merge10;                   /* '<S4>/Merge10' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Merge14;                   /* '<S4>/Merge14' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Merge15;                   /* '<S4>/Merge15' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Merge16;                   /* '<S4>/Merge16' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Merge17;                   /* '<S4>/Merge17' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Merge18;                   /* '<S4>/Merge18' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Merge2;                    /* '<S4>/Merge2' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Merge7;                    /* '<S4>/Merge7' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Merge8;                    /* '<S4>/Merge8' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Merge9;                    /* '<S4>/Merge9' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Product10;                 /* '<S328>/Product10' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Product9;                  /* '<S328>/Product9' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Product8;                  /* '<S328>/Product8' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 OutportBufferForPwrLev_Lv5;

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 Switch[5];                 /* '<S354>/Switch' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 VeCCCR_t_ChrgSysDtrmnStatTimer;/* '<S26>/StateflowChart' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 VoltRq;                    /* '<S26>/StateflowChart' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 CurrRq;                    /* '<S26>/StateflowChart' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 Switch1;                    /* '<S457>/Switch1' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

    boolean VariantMergeForOutportVeCCCR_b_;
    boolean VariantMergeForOutportVeCCCR_c2;
    boolean VariantMergeForOutportVeCCCR__b;

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean TmpSignalConversionAtVeCITR_b_S;

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean Merge19;                   /* '<S4>/Merge19' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean Merge3;                    /* '<S4>/Merge3' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean Merge5;                    /* '<S4>/Merge5' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean AND_c;                     /* '<S458>/AND' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean VeCCCR_b_CV_Mode_SF;       /* '<S26>/StateflowChart' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean Comparison5;               /* '<S395>/Comparison5' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean Logical12;                 /* '<S395>/Logical12' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean Logical11;                 /* '<S395>/Logical11' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TePMDR_e_PowerMode TmpSignalConversionAtVePMDR_e_P;

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

    TeOBCR_e_SOCReachedBST VariantMergeForOutportVeCCCR_e_;

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_SOCReachedBST Merge12;    /* '<S4>/Merge12' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

    TeOBCR_e_PwrLimReq VariantMergeForOutportVeCCCR__j;

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_PwrLimReq Merge6;         /* '<S4>/Merge6' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

    TeOBCR_e_MaxCellVoltRchdBST VariantMergeForOutportVeCCCR__n;

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_MaxCellVoltRchdBST Merge13;/* '<S4>/Merge13' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

    TeOBCR_e_HVBattBalReq VariantMergeForOutportVeCCCR__l;

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_HVBattBalReq Merge4;      /* '<S4>/Merge4' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_ChrgSysStat TmpSignalConversionAtVeOBCR_e_C;

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_ChargingLevel TmpSignalConversionAtVeOBCR_e_d;

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

    TeOBCR_e_BattPckVoltRchdBST VariantMergeForOutportVeCCCR_ji;

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_BattPckVoltRchdBST Merge11;/* '<S4>/Merge11' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    B_IfActionSubsystem1_CCCR_a_f_T IfActionSubsystem1_f;/* '<S253>/If Action Subsystem1' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    B_IfActionSubsystem_CCCR_ac_j_T IfActionSubsystem_o;/* '<S253>/If Action Subsystem' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    B_IfActionSubsystem2_CCCR_ac_T IfActionSubsystem2_nk;/* '<S252>/If Action Subsystem2' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    B_IfActionSubsystem1_CCCR_a_i_T IfActionSubsystem1_b;/* '<S252>/If Action Subsystem1' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    B_IfActionSubsystem1_CCCR_a_f_T IfActionSubsystem1_d;/* '<S224>/If Action Subsystem1' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    B_IfActionSubsystem_CCCR_ac_j_T IfActionSubsystem_h;/* '<S224>/If Action Subsystem' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    B_IfActionSubsystem2_CCCR_ac_T IfActionSubsystem2_h;/* '<S223>/If Action Subsystem2' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    B_IfActionSubsystem1_CCCR_a_i_T IfActionSubsystem1_j;/* '<S223>/If Action Subsystem1' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    B_IfActionSubsystem1_CCCR_a_f_T IfActionSubsystem1_g;/* '<S195>/If Action Subsystem1' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    B_IfActionSubsystem_CCCR_ac_j_T IfActionSubsystem;/* '<S195>/If Action Subsystem' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    B_IfActionSubsystem2_CCCR_ac_T IfActionSubsystem2;/* '<S194>/If Action Subsystem2' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    B_IfActionSubsystem1_CCCR_ac_T IfActionSubsystem1_k;/* '<S198>/If Action Subsystem1' */

#define B_CCCR_AC_T_VARIANT_EXISTS
#endif

}
B_CCCR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CCCR_ac_T
{

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE;          /* '<S194>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay2_DSTATE;         /* '<S194>/Unit Delay2' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_f;        /* '<S195>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay7_DSTATE;         /* '<S195>/Unit Delay7' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_a;        /* '<S223>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay2_DSTATE_j;       /* '<S223>/Unit Delay2' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_o;        /* '<S224>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay7_DSTATE_f;       /* '<S224>/Unit Delay7' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_c;        /* '<S252>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay2_DSTATE_h;       /* '<S252>/Unit Delay2' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_m;        /* '<S253>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay7_DSTATE_m;       /* '<S253>/Unit Delay7' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay1_DSTATE;         /* '<S183>/Unit Delay1' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay6_DSTATE;         /* '<S183>/Unit Delay6' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_mi;       /* '<S183>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_b;        /* '<S26>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay1_DSTATE_b;       /* '<S26>/Unit Delay1' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_h;        /* '<S27>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 IntegerDelay3_DSTATE[10];  /* '<S328>/Integer Delay3' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay6_DSTATE_d;       /* '<S328>/Unit Delay6' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay4_DSTATE;         /* '<S328>/Unit Delay4' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay1_DSTATE_k[5];    /* '<S354>/Unit Delay1' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 x2_DSTATE;                 /* '<S353>/x2' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 temp_DSTATE;               /* '<S353>/temp' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_fg;       /* '<S140>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_o2;       /* '<S189>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_i;        /* '<S168>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_ft;       /* '<S111>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_g;        /* '<S109>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_g3;       /* '<S108>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_be;       /* '<S84>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 UnitDelay_DSTATE_mf;       /* '<S466>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    float32 NeCCCR_P_PLSMaxPower;      /* '<Root>/DSM_NeCCCR_P_PLSMaxPower' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_j;         /* '<S459>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_ji;        /* '<S458>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_mk;        /* '<S457>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_l;         /* '<S456>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_oa;        /* '<S455>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_gj;        /* '<S454>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_lr;        /* '<S405>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_jv;        /* '<S365>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_a4;        /* '<S364>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_gq;        /* '<S363>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_lrm;       /* '<S338>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_e;         /* '<S274>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_mm;        /* '<S261>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_i4;        /* '<S245>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_ch;        /* '<S232>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_fw;        /* '<S216>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_p;         /* '<S203>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_et;        /* '<S132>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_o1;        /* '<S131>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_jr;        /* '<S80>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_if;        /* '<S79>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_ah;        /* '<S58>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_gd;        /* '<S57>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_jvc;       /* '<S56>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint16 UnitDelay_DSTATE_ai;        /* '<S55>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay4_DSTATE_i;       /* '<S194>/Unit Delay4' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay1_DSTATE_h;       /* '<S194>/Unit Delay1' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay5_DSTATE;         /* '<S195>/Unit Delay5' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay6_DSTATE_o;       /* '<S195>/Unit Delay6' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay4_DSTATE_f;       /* '<S223>/Unit Delay4' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay1_DSTATE_e;       /* '<S223>/Unit Delay1' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay5_DSTATE_m;       /* '<S224>/Unit Delay5' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay6_DSTATE_i;       /* '<S224>/Unit Delay6' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay4_DSTATE_iy;      /* '<S252>/Unit Delay4' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay1_DSTATE_i;       /* '<S252>/Unit Delay1' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay5_DSTATE_c;       /* '<S253>/Unit Delay5' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay6_DSTATE_c;       /* '<S253>/Unit Delay6' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay4_DSTATE_a;       /* '<S183>/Unit Delay4' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_pd;       /* '<S12>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_ej;       /* '<S465>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_n;        /* '<S464>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_ay;       /* '<S463>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_hm;       /* '<S462>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_jj;       /* '<S461>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_nf;       /* '<S460>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_k;        /* '<S451>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_i4e;      /* '<S433>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_gf;       /* '<S410>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_jo;       /* '<S409>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_pa;       /* '<S408>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_au;       /* '<S407>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_ma;       /* '<S406>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_em;       /* '<S400>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay1_DSTATE_n;       /* '<S328>/Unit Delay1' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean IntegerDelay2_DSTATE[2];   /* '<S328>/Integer Delay2' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_kh;       /* '<S369>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_cx;       /* '<S368>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_bz;       /* '<S367>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_op;       /* '<S355>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay2_DSTATE_b;       /* '<S354>/Unit Delay2' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_mg;       /* '<S341>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_kl;       /* '<S340>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_pi;       /* '<S339>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay1_DSTATE_im;      /* '<S338>/Unit Delay1' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_ly;       /* '<S366>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_kp;       /* '<S280>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_lj;       /* '<S268>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_gm;       /* '<S251>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_lrk;      /* '<S239>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_l4;       /* '<S222>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_kf;       /* '<S210>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_ik;       /* '<S186>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_nj;       /* '<S185>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_e0;       /* '<S184>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_ho;       /* '<S178>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_ef;       /* '<S166>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_jd;       /* '<S138>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_k4;       /* '<S137>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_pl;       /* '<S103>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_j4;       /* '<S102>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_kg;       /* '<S101>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_my;       /* '<S81>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_nm;       /* '<S62>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_p3;       /* '<S61>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_jh;       /* '<S60>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_a2;       /* '<S59>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_ow;       /* '<S36>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_el;       /* '<S35>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_cxl;      /* '<S34>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_d;        /* '<S33>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean UnitDelay_DSTATE_j4z;      /* '<S32>/Unit Delay' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_ChrgSysStat UnitDelay1_DSTATE_a;/* '<S12>/Unit Delay1' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    sint8 If_ActiveSubsystem;          /* '<S4>/If' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    sint8 If_ActiveSubsystem_g;        /* '<S26>/If' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint8 is_active_c4_CCCR_ac;        /* '<S26>/StateflowChart' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint8 is_c4_CCCR_ac;               /* '<S26>/StateflowChart' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    uint8 is_Plugged_In;               /* '<S26>/StateflowChart' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean NeCCCR_b_FirstDecrFlag_Cold;
                                  /* '<Root>/DSM_NeCCCR_b_FirstDecrFlag_Cold' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean NeCCCR_b_FirstDecrFlag_Hot;
                                   /* '<Root>/DSM_NeCCCR_b_FirstDecrFlag_Hot' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean NeCCCR_b_FirstDecrFlag_MaxCold;
                               /* '<Root>/DSM_NeCCCR_b_FirstDecrFlag_MaxCold' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean NeCCCR_b_FirstDecrFlag_MaxHot;
                                /* '<Root>/DSM_NeCCCR_b_FirstDecrFlag_MaxHot' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean NeCCCR_b_FirstDecrFlag_MinCold;
                               /* '<Root>/DSM_NeCCCR_b_FirstDecrFlag_MinCold' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean NeCCCR_b_FirstDecrFlag_MinHot;
                                /* '<Root>/DSM_NeCCCR_b_FirstDecrFlag_MinHot' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean NeCCCR_b_FirstIncrFlag_Cold;
                                  /* '<Root>/DSM_NeCCCR_b_FirstIncrFlag_Cold' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean NeCCCR_b_FirstIncrFlag_Hot;
                                   /* '<Root>/DSM_NeCCCR_b_FirstIncrFlag_Hot' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean NeCCCR_b_FirstIncrFlag_MaxCold;
                               /* '<Root>/DSM_NeCCCR_b_FirstIncrFlag_MaxCold' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean NeCCCR_b_FirstIncrFlag_MaxHot;
                                /* '<Root>/DSM_NeCCCR_b_FirstIncrFlag_MaxHot' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean NeCCCR_b_FirstIncrFlag_MinCold;
                               /* '<Root>/DSM_NeCCCR_b_FirstIncrFlag_MinCold' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    boolean NeCCCR_b_FirstIncrFlag_MinHot;
                                /* '<Root>/DSM_NeCCCR_b_FirstIncrFlag_MinHot' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    TeOBCR_e_PwrLimReq NeCCCR_e_PwrLvlSet;/* '<Root>/DSM_NeCCCR_e_PwrLvlSet' */

#define DW_CCCR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_CCCR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_CCCR_ac_T;

/* Invariant block signals for system '<S198>/If Action Subsystem1' */
typedef struct
{
    const boolean TRUEConstant;        /* '<S205>/TRUE Constant' */
}
ConstB_IfActionSubsystem1_CCC_T;

/* Invariant block signals for system '<S194>/If Action Subsystem2' */
typedef struct
{
    const boolean TRUEConstant;        /* '<S207>/TRUE Constant' */
}
ConstB_IfActionSubsystem2_CCC_T;

/* Invariant block signals for system '<S195>/If Action Subsystem' */
typedef struct
{
    const boolean TRUEConstant;        /* '<S218>/TRUE Constant' */
}
ConstB_IfActionSubsystem_CC_p_T;

/* Invariant block signals for system '<S195>/If Action Subsystem1' */
typedef struct
{
    ConstB_IfActionSubsystem1_CCC_T IfActionSubsystem1;/* '<S212>/If Action Subsystem1' */
}
ConstB_IfActionSubsystem1_C_o_T;

/* Invariant block signals for system '<S223>/If Action Subsystem1' */
typedef struct
{
    ConstB_IfActionSubsystem1_CCC_T IfActionSubsystem1;/* '<S227>/If Action Subsystem1' */
}
ConstB_IfActionSubsystem1_C_l_T;

/* Invariant block signals (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_CCCR_FUNC

    const TeOBCR_e_MaxCellVoltRchdBST Constant;/* '<S430>/Constant' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    ConstB_IfActionSubsystem1_C_o_T IfActionSubsystem1_f;/* '<S253>/If Action Subsystem1' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    ConstB_IfActionSubsystem_CC_p_T IfActionSubsystem_o;/* '<S253>/If Action Subsystem' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    ConstB_IfActionSubsystem2_CCC_T IfActionSubsystem2_nk;/* '<S252>/If Action Subsystem2' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    ConstB_IfActionSubsystem1_C_l_T IfActionSubsystem1_b;/* '<S252>/If Action Subsystem1' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    ConstB_IfActionSubsystem1_C_o_T IfActionSubsystem1_d;/* '<S224>/If Action Subsystem1' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    ConstB_IfActionSubsystem_CC_p_T IfActionSubsystem_h;/* '<S224>/If Action Subsystem' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    ConstB_IfActionSubsystem2_CCC_T IfActionSubsystem2_h;/* '<S223>/If Action Subsystem2' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    ConstB_IfActionSubsystem1_C_l_T IfActionSubsystem1_j;/* '<S223>/If Action Subsystem1' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    ConstB_IfActionSubsystem1_C_o_T IfActionSubsystem1_g;/* '<S195>/If Action Subsystem1' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    ConstB_IfActionSubsystem_CC_p_T IfActionSubsystem;/* '<S195>/If Action Subsystem' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    ConstB_IfActionSubsystem2_CCC_T IfActionSubsystem2;/* '<S194>/If Action Subsystem2' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCCR_FUNC

    ConstB_IfActionSubsystem1_CCC_T IfActionSubsystem1_k;/* '<S198>/If Action Subsystem1' */

#define CONSTB_CCCR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTB_CCCR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstB_CCCR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_CCCR_FUNC

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S182>/Vector'
     */
    uint32 Vector_maxIndex[2];

#define CONSTP_CCCR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTP_CCCR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstP_CCCR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CCCR
#include "MemMap.h"

extern VAR(B_CCCR_ac_T, CCCR_VAR_INIT) CCCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CCCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CCCR
#include "MemMap.h"

extern VAR(DW_CCCR_ac_T, CCCR_VAR_INIT) CCCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CCCR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_CCCR
#include "MemMap.h"

extern CONST(ConstB_CCCR_ac_T, CCCR_VAR_INIT) CCCR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_CCCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CCCR
#include "MemMap.h"

extern CONST(ConstP_CCCR_ac_T, CCCR_VAR_INIT) CCCR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_CCCR
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
 * '<Root>' : 'CCCR_ac'
 * '<S1>'   : 'CCCR_ac/CCCR_MedTED'
 * '<S2>'   : 'CCCR_ac/CCCR_PwrOff'
 * '<S3>'   : 'CCCR_ac/CCCR_PwrOn'
 * '<S4>'   : 'CCCR_ac/CCCR_MedTED/CCCC'
 * '<S5>'   : 'CCCR_ac/CCCR_MedTED/CCCI'
 * '<S6>'   : 'CCCR_ac/CCCR_MedTED/Output_Proc'
 * '<S7>'   : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl'
 * '<S8>'   : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl_Init'
 * '<S9>'   : 'CCCR_ac/CCCR_MedTED/CCCC/KeCCCR_b_EnblDsblProxPlgOvrd'
 * '<S10>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl'
 * '<S11>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr'
 * '<S12>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet'
 * '<S13>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/KeCCCR_I_V2GPerfLimChrgCurr'
 * '<S14>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/Set Block1'
 * '<S15>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/Set Block10'
 * '<S16>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/Set Block11'
 * '<S17>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/Set Block2'
 * '<S18>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/Set Block3'
 * '<S19>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/Set Block4'
 * '<S20>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/Set Block5'
 * '<S21>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/Set Block6'
 * '<S22>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/Set Block7'
 * '<S23>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/Set Block8'
 * '<S24>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/Set Block9'
 * '<S25>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest'
 * '<S26>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop'
 * '<S27>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller'
 * '<S28>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Enumerated Value'
 * '<S29>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Enumerated Value1'
 * '<S30>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Enumerated Value2'
 * '<S31>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Enumerated Value4'
 * '<S32>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Hysteresis'
 * '<S33>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Hysteresis1'
 * '<S34>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Hysteresis2'
 * '<S35>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Hysteresis3'
 * '<S36>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Hysteresis4'
 * '<S37>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/IfThenElseif1'
 * '<S38>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/IfThenElseif2'
 * '<S39>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_Cnt_DbncPwrLimPSA'
 * '<S40>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_Cnt_EngOnHighSOC'
 * '<S41>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_Cnt_SOCCheckDelayCntCP'
 * '<S42>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_Cnt_SOCMaxLvl'
 * '<S43>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_I_DischargeCurrHighSOC'
 * '<S44>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_I_MaxAllowChrgCrntOvrd'
 * '<S45>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_P_MinPwrPSAChrg_LSP'
 * '<S46>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_P_MinPwrPSAChrg_RSP'
 * '<S47>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_Pct_EngOnMaxSOC_LSP'
 * '<S48>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_Pct_EngOnMaxSOC_RSP'
 * '<S49>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_Pct_MaxSOCAlwd4CP_LSP'
 * '<S50>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_Pct_MaxSOCAlwd4CP_RSP'
 * '<S51>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_Pct_SOCMaxLvlReqZero_LSP'
 * '<S52>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_Pct_SOCMaxLvlReqZero_RSP'
 * '<S53>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_U_MaxCellVlt4CP_LSP'
 * '<S54>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/KeCCCR_U_MaxCellVlt4CP_RSP'
 * '<S55>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Turn On Delay Sample1'
 * '<S56>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Turn On Delay Sample2'
 * '<S57>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Turn On Delay Sample3'
 * '<S58>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Turn On Delay Sample4'
 * '<S59>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Turn On Delay Sample1/EdgeRising'
 * '<S60>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Turn On Delay Sample2/EdgeRising'
 * '<S61>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Turn On Delay Sample3/EdgeRising'
 * '<S62>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/CurrentRequest/Turn On Delay Sample4/EdgeRising'
 * '<S63>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase'
 * '<S64>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Enum Set Block'
 * '<S65>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Enumerated Value1'
 * '<S66>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Enumerated_Constant'
 * '<S67>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Enumerated_Constant1'
 * '<S68>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/KeCCCR_Cnt_DbncCellVltCond'
 * '<S69>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/KeCCCR_Cnt_DbncCellVltUprCond'
 * '<S70>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/KeCCCR_U_MaxCellVltUprBound'
 * '<S71>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/KeCCCR_b_RelaxStageEnbl'
 * '<S72>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Set Block'
 * '<S73>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Set Block1'
 * '<S74>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Set Block2'
 * '<S75>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Set Block3'
 * '<S76>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Set Block4'
 * '<S77>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Set Block5'
 * '<S78>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/StateflowChart'
 * '<S79>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Turn On Delay Sample'
 * '<S80>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Turn On Delay Sample1'
 * '<S81>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/EdgeRising'
 * '<S82>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/Enumerated_Constant'
 * '<S83>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/HeCCCR_t_PI_ExecutionRate'
 * '<S84>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/IntegratorT Reset Enabled Limited'
 * '<S85>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_I_CV_IV'
 * '<S86>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_I_CV_IV_DC'
 * '<S87>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_I_ChrgCrntOvrdValStp3'
 * '<S88>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_U_KiTerm'
 * '<S89>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_U_KiTermDC'
 * '<S90>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_U_KpTerm'
 * '<S91>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_U_KpTermDC'
 * '<S92>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_U_MaxCurrDiff_CV'
 * '<S93>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_U_MaxCurrDiff_CV_DC'
 * '<S94>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_U_MinCurrDiff_CV'
 * '<S95>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_U_MinCurrDiff_CV_DC'
 * '<S96>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_U_TrgtCellVlt'
 * '<S97>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_U_TrgtCellVltDC'
 * '<S98>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/KeCCCR_b_ChrgCrntOvrdstp3'
 * '<S99>'  : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/Limiter'
 * '<S100>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/CnstVoltagePhase/IntegratorT Reset Enabled Limited/Limiter'
 * '<S101>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Turn On Delay Sample/EdgeRising'
 * '<S102>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/DragAndDrop/Turn On Delay Sample1/EdgeRising'
 * '<S103>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/EdgeRising'
 * '<S104>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/Enumerated Value1'
 * '<S105>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/Enumerated Value2'
 * '<S106>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/Enumerated_Constant'
 * '<S107>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/ErrorDebounce'
 * '<S108>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/GradientLimiter'
 * '<S109>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/GradientLimiter1'
 * '<S110>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/HeCCCR_t_PI_ExecutionRate'
 * '<S111>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/IntegratorT Reset Enabled Limited'
 * '<S112>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_Cnt_BattSideCurrCondDbnc'
 * '<S113>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_Cnt_FrzPIDbnc'
 * '<S114>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_I_BatCurrMaxVal'
 * '<S115>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_I_BatCurrMinVal'
 * '<S116>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_I_BattCrntLimLD'
 * '<S117>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_I_BattCrntLimLU'
 * '<S118>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_I_ChrgCrntOvrdVal'
 * '<S119>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_I_ErrorDeb'
 * '<S120>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_I_IntegratorFrzdrain'
 * '<S121>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_I_KiTerm'
 * '<S122>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_I_KpTerm'
 * '<S123>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_I_LD_CurrRq'
 * '<S124>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_I_LU_CurrRq'
 * '<S125>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_I_LU_CurrRq_DC'
 * '<S126>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_I_MinIDCMCurrRspThr'
 * '<S127>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_b_ChrgCrntOvrd'
 * '<S128>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/KeCCCR_b_FrzPIEnbl'
 * '<S129>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/Limiter'
 * '<S130>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/Limiter2'
 * '<S131>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/Turn Off Delay Sample'
 * '<S132>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/Turn On Delay Sample'
 * '<S133>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/ErrorDebounce/ClosedInterval'
 * '<S134>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/GradientLimiter/Limiter'
 * '<S135>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/GradientLimiter1/Limiter'
 * '<S136>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/IntegratorT Reset Enabled Limited/Limiter'
 * '<S137>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/Turn Off Delay Sample/EdgeFalling'
 * '<S138>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntCtrl/PI_Controller/Turn On Delay Sample/EdgeRising'
 * '<S139>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim'
 * '<S140>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/GradientLimiter'
 * '<S141>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/KeCCCR_I_LD_BatryCmndCurr'
 * '<S142>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/KeCCCR_I_LU_BatryCmndCurr'
 * '<S143>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim'
 * '<S144>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim'
 * '<S145>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim'
 * '<S146>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt'
 * '<S147>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim'
 * '<S148>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattTempLim'
 * '<S149>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattVoltLim'
 * '<S150>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/KtCCCR_I_ChrgCrntTaper'
 * '<S151>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/KtCCCR_I_ChrgCrntTaperPk'
 * '<S152>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/KtCCCR_I_MinCellCrntTaper'
 * '<S153>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/KtCCCR_I_SOC_Taper'
 * '<S154>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/MaxCellTemp1'
 * '<S155>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/MaxCellTempLim'
 * '<S156>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/MaxCellVltLim'
 * '<S157>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/MinCellTemp1'
 * '<S158>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/MinCellTempLim'
 * '<S159>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/MinCellVltLim'
 * '<S160>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/SOCLim'
 * '<S161>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/TempCalTable'
 * '<S162>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd'
 * '<S163>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MaxCellVltAlwd'
 * '<S164>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst'
 * '<S165>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/ClosedInterval1'
 * '<S166>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/EdgeFalling'
 * '<S167>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/Enumerated_Constant'
 * '<S168>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/GradientLimiter'
 * '<S169>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/IfThenElse'
 * '<S170>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/KeCCCR_I_BPCMFiltMN'
 * '<S171>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/KeCCCR_Pct_BPCMLimitFiltSOC'
 * '<S172>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/KeCCCR_T_BPCMFiltTempHi'
 * '<S173>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/KeCCCR_T_BPCMFiltTempLo'
 * '<S174>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/KeCCCR_U_BPCMLimitFiltCellVolt'
 * '<S175>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/KeCCCR_b_AllowBPCMFilt'
 * '<S176>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/KeCCCR_k_BPCMFiltLD'
 * '<S177>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/KeCCCR_k_BPCMFiltLU'
 * '<S178>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/Signal Latch On With Reset'
 * '<S179>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MacChrgCurrAlwd/GradientLimiter/Limiter'
 * '<S180>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MaxCellVltAlwd/HeCCCR_t_FnctRate'
 * '<S181>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MaxCellVltAlwd/KeCCCR_t_Time4AvgCurrCalc'
 * '<S182>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MaxCellVltAlwd/KtCCCR_I_MaxCellCurrTarg'
 * '<S183>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MaxCellVltAlwd/MovAvgEst'
 * '<S184>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MaxCellVltAlwd/MovAvgEst/EdgeRising'
 * '<S185>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MaxCellVltAlwd/MovAvgEst/EdgeRising1'
 * '<S186>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MaxCellVltAlwd/MovAvgEst/EdgeRising2'
 * '<S187>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MaxCellVltAlwd/MovAvgEst/Protected Division'
 * '<S188>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MaxCellVltAlwd/MovAvgEst/Protected Division1'
 * '<S189>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/MaxCellVltAlwd/MovAvgEst/Stop Watch Reset Enabled'
 * '<S190>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg'
 * '<S191>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max'
 * '<S192>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min'
 * '<S193>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/KeCCCR_b_BattHyst_Dsbl'
 * '<S194>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis'
 * '<S195>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Hot_Hysteresis'
 * '<S196>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/IfThenElseifElse'
 * '<S197>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/KeCCCR_T_BattHystThresh'
 * '<S198>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis/If Action Subsystem1'
 * '<S199>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis/If Action Subsystem2'
 * '<S200>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis/If Action Subsystem3'
 * '<S201>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis/If Action Subsystem6'
 * '<S202>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis/KeCCCR_Cnt_HystInitValue'
 * '<S203>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis/Turn On Delay Sample'
 * '<S204>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis/If Action Subsystem1/If Action Subsystem'
 * '<S205>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis/If Action Subsystem1/If Action Subsystem1'
 * '<S206>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis/If Action Subsystem2/If Action Subsystem'
 * '<S207>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis/If Action Subsystem2/If Action Subsystem1'
 * '<S208>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis/If Action Subsystem2/KeCCCR_T_BattHyst_Decr'
 * '<S209>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis/If Action Subsystem2/If Action Subsystem1/Set Block'
 * '<S210>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Cold_Hysteresis/Turn On Delay Sample/EdgeRising'
 * '<S211>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Hot_Hysteresis/If Action Subsystem'
 * '<S212>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Hot_Hysteresis/If Action Subsystem1'
 * '<S213>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Hot_Hysteresis/If Action Subsystem2'
 * '<S214>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Hot_Hysteresis/If Action Subsystem3'
 * '<S215>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Hot_Hysteresis/KeCCCR_Cnt_HystInitValue'
 * '<S216>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Hot_Hysteresis/Turn On Delay Sample'
 * '<S217>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Hot_Hysteresis/If Action Subsystem/If Action Subsystem'
 * '<S218>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Hot_Hysteresis/If Action Subsystem/If Action Subsystem1'
 * '<S219>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Hot_Hysteresis/If Action Subsystem1/If Action Subsystem'
 * '<S220>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Hot_Hysteresis/If Action Subsystem1/If Action Subsystem1'
 * '<S221>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Hot_Hysteresis/If Action Subsystem1/KeCCCR_T_BattHyst_Incr'
 * '<S222>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Avg/Hot_Hysteresis/Turn On Delay Sample/EdgeRising'
 * '<S223>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis'
 * '<S224>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Hot_Hysteresis'
 * '<S225>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/IfThenElseifElse'
 * '<S226>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/KeCCCR_T_BattHystThresh'
 * '<S227>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis/If Action Subsystem1'
 * '<S228>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis/If Action Subsystem2'
 * '<S229>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis/If Action Subsystem3'
 * '<S230>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis/If Action Subsystem6'
 * '<S231>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis/KeCCCR_Cnt_HystInitValue'
 * '<S232>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis/Turn On Delay Sample'
 * '<S233>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis/If Action Subsystem1/If Action Subsystem'
 * '<S234>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis/If Action Subsystem1/If Action Subsystem1'
 * '<S235>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis/If Action Subsystem2/If Action Subsystem'
 * '<S236>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis/If Action Subsystem2/If Action Subsystem1'
 * '<S237>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis/If Action Subsystem2/KeCCCR_T_BattHyst_Decr'
 * '<S238>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis/If Action Subsystem2/If Action Subsystem1/Set Block'
 * '<S239>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Cold_Hysteresis/Turn On Delay Sample/EdgeRising'
 * '<S240>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Hot_Hysteresis/If Action Subsystem'
 * '<S241>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Hot_Hysteresis/If Action Subsystem1'
 * '<S242>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Hot_Hysteresis/If Action Subsystem2'
 * '<S243>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Hot_Hysteresis/If Action Subsystem3'
 * '<S244>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Hot_Hysteresis/KeCCCR_Cnt_HystInitValue'
 * '<S245>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Hot_Hysteresis/Turn On Delay Sample'
 * '<S246>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Hot_Hysteresis/If Action Subsystem/If Action Subsystem'
 * '<S247>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Hot_Hysteresis/If Action Subsystem/If Action Subsystem1'
 * '<S248>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Hot_Hysteresis/If Action Subsystem1/If Action Subsystem'
 * '<S249>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Hot_Hysteresis/If Action Subsystem1/If Action Subsystem1'
 * '<S250>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Hot_Hysteresis/If Action Subsystem1/KeCCCR_T_BattHyst_Incr'
 * '<S251>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Max/Hot_Hysteresis/Turn On Delay Sample/EdgeRising'
 * '<S252>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis'
 * '<S253>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Hot_Hysteresis'
 * '<S254>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/IfThenElseifElse'
 * '<S255>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/KeCCCR_T_BattHystThresh'
 * '<S256>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis/If Action Subsystem1'
 * '<S257>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis/If Action Subsystem2'
 * '<S258>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis/If Action Subsystem3'
 * '<S259>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis/If Action Subsystem6'
 * '<S260>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis/KeCCCR_Cnt_HystInitValue'
 * '<S261>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis/Turn On Delay Sample'
 * '<S262>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis/If Action Subsystem1/If Action Subsystem'
 * '<S263>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis/If Action Subsystem1/If Action Subsystem1'
 * '<S264>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis/If Action Subsystem2/If Action Subsystem'
 * '<S265>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis/If Action Subsystem2/If Action Subsystem1'
 * '<S266>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis/If Action Subsystem2/KeCCCR_T_BattHyst_Decr'
 * '<S267>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis/If Action Subsystem2/If Action Subsystem1/Set Block'
 * '<S268>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Cold_Hysteresis/Turn On Delay Sample/EdgeRising'
 * '<S269>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Hot_Hysteresis/If Action Subsystem'
 * '<S270>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Hot_Hysteresis/If Action Subsystem1'
 * '<S271>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Hot_Hysteresis/If Action Subsystem2'
 * '<S272>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Hot_Hysteresis/If Action Subsystem3'
 * '<S273>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Hot_Hysteresis/KeCCCR_Cnt_HystInitValue'
 * '<S274>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Hot_Hysteresis/Turn On Delay Sample'
 * '<S275>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Hot_Hysteresis/If Action Subsystem/If Action Subsystem'
 * '<S276>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Hot_Hysteresis/If Action Subsystem/If Action Subsystem1'
 * '<S277>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Hot_Hysteresis/If Action Subsystem1/If Action Subsystem'
 * '<S278>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Hot_Hysteresis/If Action Subsystem1/If Action Subsystem1'
 * '<S279>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Hot_Hysteresis/If Action Subsystem1/KeCCCR_T_BattHyst_Incr'
 * '<S280>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BPCMLim_MaxCellVlt/Temp_Hyst/BattTempFilt_Min/Hot_Hysteresis/Turn On Delay Sample/EdgeRising'
 * '<S281>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID'
 * '<S282>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID1'
 * '<S283>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID2'
 * '<S284>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID3'
 * '<S285>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID4'
 * '<S286>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID5'
 * '<S287>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID6'
 * '<S288>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID/If Action Subsystem'
 * '<S289>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID/If Action Subsystem1'
 * '<S290>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID1/If Action Subsystem'
 * '<S291>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID1/If Action Subsystem1'
 * '<S292>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID2/If Action Subsystem'
 * '<S293>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID2/If Action Subsystem1'
 * '<S294>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID3/If Action Subsystem'
 * '<S295>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID3/If Action Subsystem1'
 * '<S296>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID4/If Action Subsystem'
 * '<S297>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID4/If Action Subsystem1'
 * '<S298>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID5/If Action Subsystem'
 * '<S299>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID5/If Action Subsystem1'
 * '<S300>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID6/If Action Subsystem'
 * '<S301>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/BattCrntLim/Min_Max_ID6/If Action Subsystem1'
 * '<S302>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/MaxCellTemp1/KtCCCR_I_BattChrgCrntLimit'
 * '<S303>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/MinCellTemp1/KtCCCR_I_BattChrgCrntLimit'
 * '<S304>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/BattCrntLim/TempCalTable/KtCCCR_I_BattChrgCrntLimit'
 * '<S305>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/GradientLimiter/Limiter'
 * '<S306>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/ChrgTypeCrntLim'
 * '<S307>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/Enumerated_Constant'
 * '<S308>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/Enumerated_Constant1'
 * '<S309>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/KeCCCR_I_WiringCrntLim'
 * '<S310>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/KtCCCR_I_ChrgTypeCrntLim'
 * '<S311>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/MiscCrntLimDet'
 * '<S312>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting'
 * '<S313>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PwrLvlSet'
 * '<S314>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/WiringCrnt'
 * '<S315>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/MiscCrntLimDet/Min_MaxwithID1'
 * '<S316>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/MiscCrntLimDet/Min_MaxwithID2'
 * '<S317>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/MiscCrntLimDet/Min_MaxwithID3'
 * '<S318>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/MiscCrntLimDet/Min_MaxwithID4'
 * '<S319>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/MiscCrntLimDet/Min_MaxwithID1/If Action Subsystem'
 * '<S320>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/MiscCrntLimDet/Min_MaxwithID1/If Action Subsystem1'
 * '<S321>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/MiscCrntLimDet/Min_MaxwithID2/If Action Subsystem'
 * '<S322>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/MiscCrntLimDet/Min_MaxwithID2/If Action Subsystem1'
 * '<S323>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/MiscCrntLimDet/Min_MaxwithID3/If Action Subsystem'
 * '<S324>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/MiscCrntLimDet/Min_MaxwithID3/If Action Subsystem1'
 * '<S325>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/MiscCrntLimDet/Min_MaxwithID4/If Action Subsystem'
 * '<S326>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/MiscCrntLimDet/Min_MaxwithID4/If Action Subsystem1'
 * '<S327>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/BasicPLS'
 * '<S328>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS'
 * '<S329>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/HeCCCR_b_EnhancedPLS_Enbl'
 * '<S330>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/ReduceCurr'
 * '<S331>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/BasicPLS/Enumerated_Constant1'
 * '<S332>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/BasicPLS/Enumerated_Constant2'
 * '<S333>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/BasicPLS/Enumerated_Constant3'
 * '<S334>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/BasicPLS/Enumerated_Constant4'
 * '<S335>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/BasicPLS/IfThenElse'
 * '<S336>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/BasicPLS/KaCCCR_k_LvlPerc'
 * '<S337>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/BasicPLS/KeCCCR_I_MinChrgCurr'
 * '<S338>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Counter Reset  Enabled 1'
 * '<S339>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/EdgeRising1'
 * '<S340>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/EdgeRising2'
 * '<S341>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/EdgeRising3'
 * '<S342>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Enumerated Value1'
 * '<S343>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Enumerated_Constant3'
 * '<S344>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/HeCCCR_t_dT'
 * '<S345>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/KeCCCR_Cnt_DbncPwrChange'
 * '<S346>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/KeCCCR_Cnt_DbncUnplugPLS'
 * '<S347>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/KeCCCR_Cnt_PLS_MaxtToUpdate'
 * '<S348>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/KeCCCR_Cnt_PLSdelayProc'
 * '<S349>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/KeCCCR_P_PLSminPower'
 * '<S350>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/KeCCCR_b_PLSCorrectionEnbl'
 * '<S351>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/KeCCCR_k_PLS_FilterConstD'
 * '<S352>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/KeCCCR_k_PLS_FilterConstT'
 * '<S353>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Lowpass Second Order Enabled1'
 * '<S354>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Signal Latch On With Reset'
 * '<S355>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Signal Latch On With Reset1'
 * '<S356>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Subsystem'
 * '<S357>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Switch Case Action Subsystem1'
 * '<S358>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Switch Case Action Subsystem2'
 * '<S359>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Switch Case Action Subsystem3'
 * '<S360>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Switch Case Action Subsystem4'
 * '<S361>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Switch Case Action Subsystem5'
 * '<S362>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Switch Case Action Subsystem6'
 * '<S363>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Turn On Delay Sample'
 * '<S364>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Turn On Delay Sample1'
 * '<S365>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Turn On Delay Sample2'
 * '<S366>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Counter Reset  Enabled 1/EdgeRising2'
 * '<S367>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Turn On Delay Sample/EdgeRising'
 * '<S368>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Turn On Delay Sample1/EdgeRising'
 * '<S369>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/MiscCrntLim/PowerLevelSetting/EnhancedPLS/Turn On Delay Sample2/EdgeRising'
 * '<S370>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/ChrgPortOTLim'
 * '<S371>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/ChrgPortOTLim1'
 * '<S372>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/ChrgPortOTLim2'
 * '<S373>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/ChrgPortOTLim3'
 * '<S374>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/ChrgTypeAC'
 * '<S375>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/ChrgTypeDC'
 * '<S376>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/ChrgTypeDC1'
 * '<S377>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/DetHWLimit'
 * '<S378>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/IfThenElseifElse'
 * '<S379>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/KeCCCR_I_DC_CurrTolerance'
 * '<S380>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/KeCCCR_I_EVMax_I_Limit'
 * '<S381>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/KeCCCR_P_ProgramLimit'
 * '<S382>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/KeCCCR_b_AllowEVSEPwrLim'
 * '<S383>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/Protected Division'
 * '<S384>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/Protected Division1'
 * '<S385>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/DetHWLimit/Min_Max_ID1'
 * '<S386>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/DetHWLimit/Min_Max_ID2'
 * '<S387>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/DetHWLimit/Min_Max_ID5'
 * '<S388>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/DetHWLimit/Min_Max_ID1/If Action Subsystem'
 * '<S389>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/DetHWLimit/Min_Max_ID1/If Action Subsystem1'
 * '<S390>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/DetHWLimit/Min_Max_ID2/If Action Subsystem'
 * '<S391>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/DetHWLimit/Min_Max_ID2/If Action Subsystem1'
 * '<S392>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/DetHWLimit/Min_Max_ID5/If Action Subsystem'
 * '<S393>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/BattCrntRestr/ModCrntLim/DetHWLimit/Min_Max_ID5/If Action Subsystem1'
 * '<S394>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Cell_Balancing'
 * '<S395>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete'
 * '<S396>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Enumerated Value4'
 * '<S397>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Enumerated Value5'
 * '<S398>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Cell_Balancing/RequestOFF'
 * '<S399>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Cell_Balancing/RequestON'
 * '<S400>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Cell_Balancing/RequestON/Hysteresis'
 * '<S401>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Cell_Balancing/RequestON/IfThenElse'
 * '<S402>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Cell_Balancing/RequestON/KeCCCR_U_LSPCellBalancingValue'
 * '<S403>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Cell_Balancing/RequestON/KeCCCR_U_RSPCellBalancingValue'
 * '<S404>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Cell_Balancing/RequestON/KeCCCR_b_CellBalancingOvrd'
 * '<S405>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Counter Reset  Enabled '
 * '<S406>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/EdgeRising'
 * '<S407>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/EdgeRising1'
 * '<S408>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/EdgeRising2'
 * '<S409>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/EdgeRising3'
 * '<S410>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/EdgeRising4'
 * '<S411>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated Value'
 * '<S412>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated Value1'
 * '<S413>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated Value18'
 * '<S414>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated Value2'
 * '<S415>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated Value21'
 * '<S416>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated Value22'
 * '<S417>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated Value3'
 * '<S418>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated Value4'
 * '<S419>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated Value5'
 * '<S420>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated Value6'
 * '<S421>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated Value7'
 * '<S422>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated Value8'
 * '<S423>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated_Constant'
 * '<S424>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated_Constant1'
 * '<S425>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated_Constant2'
 * '<S426>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated_Constant3'
 * '<S427>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated_Constant4'
 * '<S428>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated_Constant5'
 * '<S429>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated_Constant6'
 * '<S430>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Enumerated_Constant7'
 * '<S431>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/HeCCCR_t_FunCallRate'
 * '<S432>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Hysteresis'
 * '<S433>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Hysteresis1'
 * '<S434>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_Cnt_BPCMChrgCmplt_Dbnc'
 * '<S435>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_Cnt_BatFullCheck'
 * '<S436>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_Cnt_DbncChrgCmplt_BST'
 * '<S437>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_Cnt_Dbnc_BatFull'
 * '<S438>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_Cnt_SOCMaxLvl'
 * '<S439>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_I_MinCurrChrgComplt'
 * '<S440>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_Pct_MaxSOCChrgCmpt_LSP'
 * '<S441>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_Pct_MaxSOCChrgCmpt_RSP'
 * '<S442>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_Pct_MaxSOC_NoChrg'
 * '<S443>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_Pct_SOCMaxLvl_LSP'
 * '<S444>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_Pct_SOCMaxLvl_RSP'
 * '<S445>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_U_MaxCellVlt_NoChrg'
 * '<S446>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_U_MaxPackVoltChrg'
 * '<S447>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_b_ChrgCmplteCondtnMetOvd'
 * '<S448>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_b_ChrgCmplteCondtnMetOvdVal'
 * '<S449>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/KeCCCR_t_ChrgCmplteDbnceTime'
 * '<S450>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Protected Division'
 * '<S451>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Signal Latch On'
 * '<S452>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Signal Latch On With Reset1'
 * '<S453>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Signal Latch On With Reset2'
 * '<S454>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Turn On Delay Sample'
 * '<S455>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Turn On Delay Sample1'
 * '<S456>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Turn On Delay Sample2'
 * '<S457>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Turn On Delay Sample3'
 * '<S458>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Turn On Delay Sample4'
 * '<S459>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Turn On Delay Sample5'
 * '<S460>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Turn On Delay Sample/EdgeRising'
 * '<S461>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Turn On Delay Sample1/EdgeRising'
 * '<S462>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Turn On Delay Sample2/EdgeRising'
 * '<S463>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Turn On Delay Sample3/EdgeRising'
 * '<S464>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Turn On Delay Sample4/EdgeRising'
 * '<S465>' : 'CCCR_ac/CCCR_MedTED/CCCC/CurrRq_ChrgCompl/ChrgComplDet/Chrg_Complete/Turn On Delay Sample5/EdgeRising'
 * '<S466>' : 'CCCR_ac/CCCR_MedTED/CCCI/Digital Lowpass Reset Enabled'
 * '<S467>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_I_EVSEMaxCurrLmtOvrdVal'
 * '<S468>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_P_EVSEMaxPwrLmtOvrdVal'
 * '<S469>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_U_EVSEOutputVoltOvrdVal'
 * '<S470>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_BPCM_ChrgStatOvrd'
 * '<S471>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_CITR_PwrLimOvrd'
 * '<S472>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_CITR_PwrLimReq_FAOvrd'
 * '<S473>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_CITR_PwrLimReq_FAVal'
 * '<S474>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_CabPrecDny_BattCond_Ovrd'
 * '<S475>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_CabPrecDny_BattCond_Val'
 * '<S476>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_EVSEMaxCurrLmtOvrd'
 * '<S477>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_EVSEMaxPwrLmtOvrd'
 * '<S478>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_EVSEOutputVoltOvrd'
 * '<S479>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_EVSE_ProxStat_Ovrd'
 * '<S480>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_HVPerWUTherm_Ovrd'
 * '<S481>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_HVPerWUTherm_Val'
 * '<S482>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_PSAOvrd'
 * '<S483>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_PSAVal'
 * '<S484>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_PwrLimReq_SgnlRcvdOvrd'
 * '<S485>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_PwrLimReq_SgnlRcvdVal'
 * '<S486>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_THMR_Rdy4ShtDwn'
 * '<S487>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_b_THMR_RdyOvrd'
 * '<S488>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_e_BPCM_ChrgStatVal'
 * '<S489>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_e_CITR_PwrLimReqVal'
 * '<S490>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_e_EVSE_ProxStat_Val'
 * '<S491>' : 'CCCR_ac/CCCR_MedTED/CCCI/KeCCCR_k_LPF_MaxCellVoltCoef'
 * '<S492>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Enum Set Block'
 * '<S493>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Enum Set Block10'
 * '<S494>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Enum Set Block11'
 * '<S495>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Enum Set Block14'
 * '<S496>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Enum Set Block2'
 * '<S497>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block1'
 * '<S498>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block10'
 * '<S499>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block2'
 * '<S500>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block3'
 * '<S501>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block35'
 * '<S502>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block36'
 * '<S503>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block37'
 * '<S504>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block38'
 * '<S505>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block39'
 * '<S506>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block4'
 * '<S507>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block5'
 * '<S508>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block6'
 * '<S509>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block7'
 * '<S510>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block8'
 * '<S511>' : 'CCCR_ac/CCCR_MedTED/Output_Proc/Set Block9'
 * '<S512>' : 'CCCR_ac/CCCR_PwrOn/DSM_Init'
 * '<S513>' : 'CCCR_ac/CCCR_PwrOn/Sub_Out_Init'
 * '<S514>' : 'CCCR_ac/CCCR_PwrOn/Sub_Out_Init/Subsystem'
 * '<S515>' : 'CCCR_ac/CCCR_PwrOn/Sub_Out_Init/Subsystem/FUNC'
 * '<S516>' : 'CCCR_ac/CCCR_PwrOn/Sub_Out_Init/Subsystem/NF'
 */
#endif                                 /* RTW_HEADER_CCCR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
