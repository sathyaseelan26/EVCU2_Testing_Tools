/*
 * File: ERER_ac.h
 *
 * Code generated for Simulink model 'ERER_ac'.
 *
 * Model version                  : 9.804
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:38:45 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ERER_ac_h_
#define RTW_HEADER_ERER_ac_h_
#include <math.h>
#include <string.h>
#include "Rte_Type.h"
#ifndef ERER_ac_COMMON_INCLUDES_
#define ERER_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ERER.h"
#endif                                 /* ERER_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_ERER_ac_T
{

#if Rte_SysCon_Variant_ERER_1

    float32 DataStoreRead2;            /* '<S383>/Data Store Read2' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 DataStoreRead1;            /* '<S383>/Data Store Read1' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 DataStoreRead3;            /* '<S383>/Data Store Read3' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 DataStoreRead4;            /* '<S383>/Data Store Read4' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

    float32 VariantMerge_For_Variant_Source_VariantS;
    float32 VeERER_l_EstRange_ChrgStpTime_NF;/* '<S382>/Constant Value1' */
    float32 VeERER_E_WhRemaining_V2L_NF;/* '<S382>/Constant Value3' */
    float32 VeERER_E_WhRemaining_V2V_NF;/* '<S382>/Constant Value4' */
    float32 VariantMerge_For_Variant_Source_Varian_g;
    float32 VeERER_l_EstRange_Fuel_NF; /* '<S382>/Constant Value6' */
    float32 VeERER_l_AC_Fan_Range_NF;  /* '<S382>/Constant' */
    float32 VeERER_l_Defrost_Range_NF; /* '<S382>/Constant2' */
    float32 VeERER_l_Seatswhl_Range_NF;/* '<S382>/Constant4' */
    float32 VeERER_l_Audio_Range_NF;   /* '<S382>/Constant6' */
    float32 VeERER_l_Lights_Range_NF;  /* '<S382>/Constant8' */
    float32 VeERER_l_Other_Range_NF;   /* '<S382>/Constant10' */
    float32 VeERER_l_Total_Range_NF;   /* '<S382>/Constant12' */

#if Rte_SysCon_Variant_ERER_1

    float32 Merge;                     /* '<S8>/Merge' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 VeERER_F_WHrpKM_ChargingSF;/* '<S13>/EstRange_State' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Out_Modify_Factor;         /* '<S79>/DRM_Stateflow_LP3' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 VehDist_Delta;             /* '<S79>/DRM_Stateflow_LP3' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Modify_Factor;             /* '<S79>/DRM_Stateflow_LP3' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Out_Modify_Factor_b;       /* '<S78>/DRM_Stateflow_CityBEV' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 VehDist_Delta_m;           /* '<S78>/DRM_Stateflow_CityBEV' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Modify_Factor_m;           /* '<S78>/DRM_Stateflow_CityBEV' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Out_Modify_Factor_p;       /* '<S77>/DRM_Stateflow_M182' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 VehDist_Delta_o;           /* '<S77>/DRM_Stateflow_M182' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Modify_Factor_k;           /* '<S77>/DRM_Stateflow_M182' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Vector_k;                  /* '<S103>/Vector' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Vector_ou;                 /* '<S108>/Vector' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Vector_j;                  /* '<S105>/Vector' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Vector_i;                  /* '<S104>/Vector' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Vector_e;                  /* '<S109>/Vector' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Vector_cs;                 /* '<S106>/Vector' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Out_Modify_Factor_g;  /* '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 VehDist_Delta_j;      /* '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Modify_Factor_j;      /* '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Product2;                  /* '<S20>/Product2' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Switch1;                   /* '<S28>/Switch1' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    sint16 DataStoreRead;              /* '<S383>/Data Store Read' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    sint16 DataStoreRead5;             /* '<S383>/Data Store Read5' */

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

    boolean VeERER_b_EstRange_SNA_NF;  /* '<S382>/Constant Value2' */
    boolean VeERER_b_ACFanRange_SNA_NF;/* '<S382>/Constant1' */
    boolean VeERER_b_DefrostRange_SNA_NF;/* '<S382>/Constant3' */
    boolean VeERER_b_SeatswhlRange_SNA_NF;/* '<S382>/Constant5' */
    boolean VeERER_b_AudioRange_SNA_NF;/* '<S382>/Constant7' */
    boolean VeERER_b_LightsRange_SNA_NF;/* '<S382>/Constant9' */
    boolean VeERER_b_OtherRange_SNA_NF;/* '<S382>/Constant11' */
    boolean VeERER_b_TotalRange_SNA_NF;/* '<S382>/Constant13' */

#if Rte_SysCon_Variant_ERER_1

    TeHMIR_e_TerrainModeStat TmpSignalConversionAtVeHMIR_e_TerrainMod;

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

    TeERER_e_EstRangeTrend VeERER_e_EstRangeTrend_NF;/* '<S382>/Enumerated_Constant' */

#if Rte_SysCon_Variant_ERER_1

    TeDMDR_e_TurtleMdSts TmpSignalConversionAtVeDMDR_e_TurtleMdSt;

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TeDMDR_e_DrvMd TmpSignalConversionAtVeDMDR_e_DrvMdArbOu;

#define B_ERER_AC_T_VARIANT_EXISTS
#endif

}
B_ERER_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_ERER_ac_T
{

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay1_DSTATE;         /* '<S309>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay1_DSTATE_i;       /* '<S342>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay1_DSTATE_f;       /* '<S366>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay_DSTATE_o;        /* '<S9>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay1_DSTATE_o;       /* '<S9>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay1_DSTATE_j;       /* '<S197>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay_DSTATE_p;        /* '<S345>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay1_DSTATE_n;       /* '<S210>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay1_DSTATE_a;       /* '<S235>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay_DSTATE_n;        /* '<S214>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay_DSTATE_d;        /* '<S229>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay1_DSTATE_f3;      /* '<S236>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay_DSTATE_c;        /* '<S265>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay_DSTATE_g;        /* '<S246>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay_DSTATE_h;        /* '<S202>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay_DSTATE_k;        /* '<S22>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 UnitDelay_DSTATE_m4;       /* '<S29>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 ECAry[100];                /* '<S191>/PSA_WhrpKMCalc' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 VehDist_Init;              /* '<S79>/DRM_Stateflow_LP3' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 VehDist_Init_o;            /* '<S78>/DRM_Stateflow_CityBEV' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 VehDist_Init_m;            /* '<S77>/DRM_Stateflow_M182' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 VehDist_Init_g;       /* '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 sum;                       /* '<S38>/Chart' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    float32 average;                   /* '<S38>/Chart' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 UnitDelay_DSTATE_a;         /* '<S334>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 UnitDelay_DSTATE_f;         /* '<S367>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 UnitDelay_DSTATE_j;         /* '<S326>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 UnitDelay_DSTATE_pm;        /* '<S325>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 UnitDelay_DSTATE_l;         /* '<S200>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 UnitDelay_DSTATE_ky;        /* '<S199>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 UnitDelay_DSTATE_jv;        /* '<S211>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 UnitDelay_DSTATE_kk;        /* '<S264>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 UnitDelay_DSTATE_nh;        /* '<S242>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 UnitDelay_DSTATE_p2;        /* '<S240>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 UnitDelay_DSTATE_i;         /* '<S40>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 s2_count;                   /* '<S339>/Stateflow Chart1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 i;                          /* '<S191>/PSA_WhrpKMCalc' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 DRM_delay;                  /* '<S79>/DRM_Stateflow_LP3' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 DRM_delay_n;                /* '<S77>/DRM_Stateflow_M182' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 DRM_delay_f;           /* '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 count;                      /* '<S38>/Chart' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 prior_window_size;          /* '<S38>/Chart' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay1_DSTATE_p;       /* '<S316>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_ot;       /* '<S342>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay1_DSTATE_b;       /* '<S317>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay6_DSTATE;         /* '<S12>/Unit Delay6' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_gx;       /* '<S375>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_hk;       /* '<S369>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_lf;       /* '<S368>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_m3;       /* '<S350>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_fi;       /* '<S346>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_kj;       /* '<S336>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_ma;       /* '<S310>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_if;       /* '<S308>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_od;       /* '<S307>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_b;        /* '<S198>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_l5;       /* '<S212>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_ld;       /* '<S206>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_pmm;      /* '<S267>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_m5;       /* '<S266>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_ju;       /* '<S245>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_co;       /* '<S244>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_e;        /* '<S243>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_fi2;      /* '<S241>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_kq;       /* '<S230>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_ja;       /* '<S237>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_ej;       /* '<S213>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_fj;       /* '<S189>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_ca;       /* '<S201>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay3_DSTATE;         /* '<S79>/Unit Delay3' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_ke;       /* '<S170>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_dl;       /* '<S143>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay3_DSTATE_d;       /* '<S77>/Unit Delay3' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_og;       /* '<S122>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay4_DSTATE;         /* '<S76>/Unit Delay4' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_ey;       /* '<S89>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_og2;      /* '<S39>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_ai;       /* '<S41>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_km;       /* '<S33>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_d4;       /* '<S32>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_gl;       /* '<S31>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean UnitDelay_DSTATE_ek;       /* '<S30>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TeHMIR_e_TerrainModeStat UnitDelay5_DSTATE;/* '<S79>/Unit Delay5' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TeHMIR_e_TerrainModeStat UnitDelay2_DSTATE;/* '<S76>/Unit Delay2' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TePMDR_e_PowerMode UnitDelay1_DSTATE_g;/* '<S79>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TePMDR_e_PowerMode UnitDelay2_DSTATE_j;/* '<S79>/Unit Delay2' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TePMDR_e_PowerMode UnitDelay1_DSTATE_fa;/* '<S78>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TePMDR_e_PowerMode UnitDelay1_DSTATE_d;/* '<S77>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TePMDR_e_PowerMode UnitDelay2_DSTATE_i;/* '<S77>/Unit Delay2' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TePMDR_e_PowerMode UnitDelay1_DSTATE_m;/* '<S76>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TePMDR_e_PowerMode UnitDelay3_DSTATE_e;/* '<S76>/Unit Delay3' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TeDMDR_e_DrvMd UnitDelay_DSTATE_hr;/* '<S78>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TeDMDR_e_DrvMd UnitDelay_DSTATE_ly;/* '<S77>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TeERER_e_EstRangeTrend UnitDelay_DSTATE_nk;/* '<S259>/Unit Delay' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    TeERER_e_EstRangeTrend UnitDelay1_DSTATE_h;/* '<S259>/Unit Delay1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    sint8 If_ActiveSubsystem;          /* '<S9>/If' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    sint8 If1_ActiveSubsystem;         /* '<S8>/If1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_active_c35_ERER_ac;       /* '<S13>/EstRange_State' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_c35_ERER_ac;              /* '<S13>/EstRange_State' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_PSA;                      /* '<S13>/EstRange_State' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_active_c1_ERER_ac;        /* '<S339>/Stateflow Chart1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_c1_ERER_ac;               /* '<S339>/Stateflow Chart1' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_active_c2_ERER_ac;        /* '<S191>/PSA_WhrpKMCalc' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_c2_ERER_ac;               /* '<S191>/PSA_WhrpKMCalc' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_active_c3_ERER_ac;        /* '<S222>/Stateflow Chart' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_c3_ERER_ac;               /* '<S222>/Stateflow Chart' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_active_c7_ERER_ac;        /* '<S79>/DRM_Stateflow_LP3' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_c7_ERER_ac;               /* '<S79>/DRM_Stateflow_LP3' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_active_c4_ERER_ac;        /* '<S78>/DRM_Stateflow_CityBEV' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_c4_ERER_ac;               /* '<S78>/DRM_Stateflow_CityBEV' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_active_c5_ERER_ac;        /* '<S77>/DRM_Stateflow_M182' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_c5_ERER_ac;               /* '<S77>/DRM_Stateflow_M182' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_active_c8_ERER_ac;   /* '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    uint8 is_c8_ERER_ac;          /* '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ERER_1

    boolean first_pass_complete;       /* '<S38>/Chart' */

#define DW_ERER_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_ERER_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_ERER_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeERER_e_EstRangeTrend Constant;/* '<S384>/Constant' */
}
ConstB_ERER_ac_T;

/* Constant parameters (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_ERER_1

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S61>/Vector'
     *   '<S62>/Vector'
     *   '<S63>/Vector'
     *   '<S67>/Vector'
     *   '<S68>/Vector'
     *   '<S69>/Vector'
     */
    uint32 pooled9[2];

#define CONSTP_ERER_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTP_ERER_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstP_ERER_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ERER
#include "MemMap.h"

extern VAR(B_ERER_ac_T, ERER_VAR_INIT) ERER_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ERER
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ERER
#include "MemMap.h"

extern VAR(DW_ERER_ac_T, ERER_VAR_INIT) ERER_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ERER
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_ERER
#include "MemMap.h"

extern CONST(ConstB_ERER_ac_T, ERER_VAR_INIT) ERER_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_ERER
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ERER
#include "MemMap.h"

extern CONST(ConstP_ERER_ac_T, ERER_VAR_INIT) ERER_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_ERER
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
 * '<Root>' : 'ERER_ac'
 * '<S1>'   : 'ERER_ac/ERER_MedTEH'
 * '<S2>'   : 'ERER_ac/ERER_PwrOff'
 * '<S3>'   : 'ERER_ac/ERER_PwrOn'
 * '<S4>'   : 'ERER_ac/ERER_MedTEH/EREC'
 * '<S5>'   : 'ERER_ac/ERER_MedTEH/EREC/Capacity'
 * '<S6>'   : 'ERER_ac/ERER_MedTEH/EREC/Constant Value1'
 * '<S7>'   : 'ERER_ac/ERER_MedTEH/EREC/Constant Value3'
 * '<S8>'   : 'ERER_ac/ERER_MedTEH/EREC/DRM'
 * '<S9>'   : 'ERER_ac/ERER_MedTEH/EREC/DTE'
 * '<S10>'  : 'ERER_ac/ERER_MedTEH/EREC/DocBlock'
 * '<S11>'  : 'ERER_ac/ERER_MedTEH/EREC/EEPROM'
 * '<S12>'  : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs'
 * '<S13>'  : 'ERER_ac/ERER_MedTEH/EREC/State'
 * '<S14>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining'
 * '<S15>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/KeERER_E_MaxWhr'
 * '<S16>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/KeERER_q_BattFullCapacity'
 * '<S17>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/KtERER_r_CapacityTempRatio'
 * '<S18>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/SchChrg_Whr'
 * '<S19>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining'
 * '<S20>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/EngineOFF_FuelWhrRemaining'
 * '<S21>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/EngineON_FuelWhrRemaining'
 * '<S22>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter'
 * '<S23>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/KeERER_V_FuelMaxTankCap'
 * '<S24>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/EngineOFF_FuelWhrRemaining/KeERER_E_FuelEquEnergy'
 * '<S25>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/EngineOFF_FuelWhrRemaining/KeERER_Pct_EngEfficiency'
 * '<S26>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/EngineOFF_FuelWhrRemaining/KeERER_k_EngineOff_UnitConvert'
 * '<S27>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/EngineON_FuelWhrRemaining/KeERER_k_EngineOn_UnitConvert'
 * '<S28>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/EngineON_FuelWhrRemaining/Protected Division'
 * '<S29>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/Digital Lowpass Reset Enabled'
 * '<S30>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/EdgeFalling'
 * '<S31>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/EdgeFalling1'
 * '<S32>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/EdgeRising1'
 * '<S33>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/EdgeRising2'
 * '<S34>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/KeERER_Cnt_EngineON_Window'
 * '<S35>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/KeERER_b_EnableFuelRange'
 * '<S36>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/KeERER_k_FuelEnergyFilter'
 * '<S37>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/Turn On Delay Sample Resetable Delay'
 * '<S38>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/Window Average'
 * '<S39>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/Turn On Delay Sample Resetable Delay/EdgeRising with resetable delay'
 * '<S40>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/Turn On Delay Sample Resetable Delay/Unit Delay Reset Enabled'
 * '<S41>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/Turn On Delay Sample Resetable Delay/EdgeRising with resetable delay/Unit Delay Reset Enabled'
 * '<S42>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/Window Average/Chart'
 * '<S43>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/FuelWhrRemaining/FuelWhrRemaining_Filter/Window Average/Limiter'
 * '<S44>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/SchChrg_Whr/KtERER_E_Whr_SC'
 * '<S45>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/SchChrg_Whr/Limiter2'
 * '<S46>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/SchChrg_Whr/Protected Division1'
 * '<S47>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Base_SOC_Whr'
 * '<S48>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Base_Whr'
 * '<S49>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Convert_Whr'
 * '<S50>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Crnt_Whr'
 * '<S51>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Current_SOC_Whr'
 * '<S52>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/KeERER_b_CapEstmLogic_Switch'
 * '<S53>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/KeERER_b_UseAh_4WhrCal'
 * '<S54>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/KtERER_E_SOC_WHR'
 * '<S55>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/KtERER_E_SOC_WHR1'
 * '<S56>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/KtERER_E_SOC_WHR2'
 * '<S57>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Limiter1'
 * '<S58>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Limiter2'
 * '<S59>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Limiter6'
 * '<S60>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Protected Division'
 * '<S61>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Base_SOC_Whr/KtERER_E_SOC_SOH_Whr'
 * '<S62>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Base_Whr/KtERER_C_SOC_SOH_Ahr'
 * '<S63>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Base_Whr/KtERER_V_SOC_SOH_OCV'
 * '<S64>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Convert_Whr/HeERER_k_H2Unit_Convert'
 * '<S65>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Convert_Whr/KeERER_E_H2WhrMax'
 * '<S66>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Convert_Whr/Limiter'
 * '<S67>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Crnt_Whr/KtERER_C_SOC_SOH_Ahr'
 * '<S68>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Crnt_Whr/KtERER_V_SOC_SOH_OCV'
 * '<S69>'  : 'ERER_ac/ERER_MedTEH/EREC/Capacity/Whr_Remaining/Current_SOC_Whr/KtERER_E_SOC_SOH_Whr'
 * '<S70>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Enumerated Constant'
 * '<S71>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Enumerated Constant1'
 * '<S72>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Enumerated Constant2'
 * '<S73>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Enumerated Constant3'
 * '<S74>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/KeERER_e_DRMType'
 * '<S75>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/RangeOutputs'
 * '<S76>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1'
 * '<S77>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2'
 * '<S78>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3'
 * '<S79>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4'
 * '<S80>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/RangeOutputs/Protected Division'
 * '<S81>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/DRM_Stateflow_LB//DT//EJ//KM BEV'
 * '<S82>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/Enum Set Block'
 * '<S83>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/Enumerated_Constant1'
 * '<S84>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/Enumerated_Constant2'
 * '<S85>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/Enumerated_Constant3'
 * '<S86>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/Enumerated_Constant4'
 * '<S87>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/Enumerated_Constant5'
 * '<S88>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/Enumerated_Constant6'
 * '<S89>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/Hysteresis'
 * '<S90>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/If Action Subsystem'
 * '<S91>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KeERER_Cnt_DRM_InitDelay'
 * '<S92>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KeERER_b_DRMEnable'
 * '<S93>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KeERER_k_BlendFactor'
 * '<S94>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KeERER_k_DRM_Modify_Factor_Max'
 * '<S95>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KeERER_k_DRM_Modify_Factor_Min'
 * '<S96>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KeERER_l_HomologatedRangeThresh'
 * '<S97>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KeERER_l_MaxHomologatedRange'
 * '<S98>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KeERER_l_TurtleEntryThresh'
 * '<S99>'  : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KeERER_l_TurtleExitThresh'
 * '<S100>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KtERER_k_CamelMod_Perc'
 * '<S101>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KtERER_k_DonuModt_Perc'
 * '<S102>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KtERER_k_DragMod_Perc'
 * '<S103>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KtERER_k_DriftMod_Perc'
 * '<S104>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KtERER_k_Mud_SandMod_Perc'
 * '<S105>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KtERER_k_RockMod_Perc'
 * '<S106>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KtERER_k_SandMod_Perc'
 * '<S107>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KtERER_k_SnowMod_Perc'
 * '<S108>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KtERER_k_SportMod_Perc'
 * '<S109>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KtERER_k_TowMod_Perc'
 * '<S110>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KtERER_k_TrackMod_Perc'
 * '<S111>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/KtERER_k_ValetMod_Perc'
 * '<S112>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/Limiter1'
 * '<S113>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 1/Limiter2'
 * '<S114>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/DRM_Stateflow_M182'
 * '<S115>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/Enum Set Block'
 * '<S116>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/Enumerated_Constant1'
 * '<S117>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/Enumerated_Constant2'
 * '<S118>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/Enumerated_Constant3'
 * '<S119>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/Enumerated_Constant4'
 * '<S120>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/Enumerated_Constant5'
 * '<S121>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/Enumerated_Constant6'
 * '<S122>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/Hysteresis'
 * '<S123>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/If Action Subsystem'
 * '<S124>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/KeERER_Cnt_DRM_InitDelay'
 * '<S125>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/KeERER_b_DRMEnable'
 * '<S126>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/KeERER_k_BlendFactor'
 * '<S127>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/KeERER_k_DRM_Modify_Factor_Max'
 * '<S128>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/KeERER_k_DRM_Modify_Factor_Min'
 * '<S129>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/KeERER_l_HomologatedRangeThresh'
 * '<S130>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/KeERER_l_MaxHomologatedRange'
 * '<S131>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/KeERER_l_TurtleEntryThresh'
 * '<S132>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/KeERER_l_TurtleExitThresh'
 * '<S133>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/KtERER_k_CamelMod_Perc'
 * '<S134>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/KtERER_k_OffrdMod_Perc'
 * '<S135>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/KtERER_k_SportMod_Perc'
 * '<S136>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/Limiter1'
 * '<S137>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 2/Limiter2'
 * '<S138>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/DRM_Stateflow_CityBEV'
 * '<S139>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/Enum Set Block'
 * '<S140>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/Enumerated_Constant1'
 * '<S141>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/Enumerated_Constant2'
 * '<S142>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/Enumerated_Constant3'
 * '<S143>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/Hysteresis'
 * '<S144>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/If Action Subsystem'
 * '<S145>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/KeERER_b_Abarth'
 * '<S146>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/KeERER_b_DRMEnable'
 * '<S147>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/KeERER_k_BlendFactor'
 * '<S148>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/KeERER_k_DRM_Modify_Factor_Max'
 * '<S149>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/KeERER_k_DRM_Modify_Factor_Min'
 * '<S150>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/KeERER_l_HomologatedRangeThresh'
 * '<S151>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/KeERER_l_MaxHomologatedRange'
 * '<S152>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/KeERER_l_TurtleEntryThresh'
 * '<S153>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/KeERER_l_TurtleExitThresh'
 * '<S154>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/KtERER_k_RangeMod_Perc'
 * '<S155>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/Limiter1'
 * '<S156>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/Limiter2'
 * '<S157>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/Subsystem'
 * '<S158>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/Subsystem/If Action Subsystem'
 * '<S159>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/Subsystem/If Action Subsystem1'
 * '<S160>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/Subsystem/If Action Subsystem/KtERER_k_SportMod_Perc'
 * '<S161>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 3/Subsystem/If Action Subsystem1/KtERER_k_CamelMod_Perc'
 * '<S162>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/DRM_Stateflow_LP3'
 * '<S163>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/Enum Set Block1'
 * '<S164>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/Enumerated_Constant1'
 * '<S165>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/Enumerated_Constant2'
 * '<S166>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/Enumerated_Constant3'
 * '<S167>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/Enumerated_Constant4'
 * '<S168>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/Enumerated_Constant5'
 * '<S169>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/Enumerated_Constant6'
 * '<S170>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/Hysteresis'
 * '<S171>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/If Action Subsystem'
 * '<S172>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KeERER_Cnt_DRM_InitDelay'
 * '<S173>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KeERER_b_DRMEnable'
 * '<S174>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KeERER_k_BlendFactor'
 * '<S175>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KeERER_k_DRM_Modify_Factor_Max'
 * '<S176>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KeERER_k_DRM_Modify_Factor_Min'
 * '<S177>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KeERER_l_HomologatedRangeThresh'
 * '<S178>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KeERER_l_MaxHomologatedRange'
 * '<S179>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KeERER_l_TurtleEntryThresh'
 * '<S180>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KeERER_l_TurtleExitThresh'
 * '<S181>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KtERER_k_CamelMod_Perc'
 * '<S182>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KtERER_k_CorsaMod_Perc'
 * '<S183>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KtERER_k_CustomMod_Perc'
 * '<S184>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KtERER_k_OffrdMod_Perc'
 * '<S185>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/KtERER_k_SportMod_Perc'
 * '<S186>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/Limiter1'
 * '<S187>' : 'ERER_ac/ERER_MedTEH/EREC/DRM/Type 4/Limiter2'
 * '<S188>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/DistanceCalc'
 * '<S189>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EdgeFalling'
 * '<S190>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_Charge'
 * '<S191>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA'
 * '<S192>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/KeERER_b_AllowRangeImpact'
 * '<S193>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power'
 * '<S194>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power Not Present'
 * '<S195>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/SCALAR_BLK1'
 * '<S196>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/SCALAR_BLK2'
 * '<S197>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/SchedChrg_EstRange'
 * '<S198>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Signal Latch On With Reset'
 * '<S199>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Turn Off Delay Sample'
 * '<S200>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Turn On Delay Sample'
 * '<S201>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/DistanceCalc/EdgeRising1'
 * '<S202>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/DistanceCalc/IntegratorK Reset Enabled Limited'
 * '<S203>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/DistanceCalc/KeERER_l_VehDistanceMax'
 * '<S204>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/DistanceCalc/IntegratorK Reset Enabled Limited/Limiter'
 * '<S205>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_Charge/ApplyFILT_1stOrderLag_flt1'
 * '<S206>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_Charge/EdgeFalling'
 * '<S207>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_Charge/KeERER_f_WhrpKMResetVal'
 * '<S208>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_Charge/KeERER_k_EstRangeEL'
 * '<S209>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_Charge/Protected Division'
 * '<S210>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_Charge/Unit Delay Reset Enabled'
 * '<S211>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_Charge/Unit Delay Reset Enabled/Turn On Delay Sample'
 * '<S212>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_Charge/Unit Delay Reset Enabled/Turn On Delay Sample/EdgeRising'
 * '<S213>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/EdgeRising2'
 * '<S214>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter'
 * '<S215>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/KeERER_Cnt_UnitWin_total'
 * '<S216>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/KeERER_E_Whrpkm_Max'
 * '<S217>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/KeERER_E_Whrpkm_Min'
 * '<S218>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/KeERER_l_unit_DistWindow'
 * '<S219>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/KtERER_Cnt_UnitWin_fncSOC'
 * '<S220>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_HVBatTotErgy'
 * '<S221>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_PwrCalc'
 * '<S222>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_RTI'
 * '<S223>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_WhrpKMCalc'
 * '<S224>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/Protected Division'
 * '<S225>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/Protected Division1'
 * '<S226>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/WhrpHM_SOCDH_Filtering'
 * '<S227>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/ApplyFILT_1stOrderLag_flt1'
 * '<S228>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/ApplyFILT_1stOrderLag_flt2'
 * '<S229>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/ESML_RateLimit_IC1'
 * '<S230>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/EdgeFalling'
 * '<S231>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/KeERER_k_DRDT_FiltCoef'
 * '<S232>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/KtERER_k_KMtoEmpty_FiltCoef'
 * '<S233>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/KtERER_k_KMtoEmpty_LowSOC'
 * '<S234>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/KtERER_r_KMtoEmpty_RateLimit'
 * '<S235>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/Unit Delay Reset Enabled'
 * '<S236>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/Unit Delay Reset Enabled1'
 * '<S237>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/ESML_RateLimit_IC1/EdgeRising'
 * '<S238>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/ESML_RateLimit_IC1/IfThenElse'
 * '<S239>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/ESML_RateLimit_IC1/Limiter'
 * '<S240>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/Unit Delay Reset Enabled/Turn On Delay Sample'
 * '<S241>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/Unit Delay Reset Enabled/Turn On Delay Sample/EdgeRising'
 * '<S242>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/Unit Delay Reset Enabled1/Turn On Delay Sample'
 * '<S243>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/FinalRangeFilter/Unit Delay Reset Enabled1/Turn On Delay Sample/EdgeRising'
 * '<S244>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_HVBatTotErgy/EdgeRising'
 * '<S245>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_HVBatTotErgy/EdgeRising1'
 * '<S246>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_HVBatTotErgy/IntegratorK Reset Enabled Limited'
 * '<S247>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_HVBatTotErgy/KeERER_b_UseSpeedAdjPower'
 * '<S248>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_HVBatTotErgy/KeERER_k_PwrIntegratorMax'
 * '<S249>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_HVBatTotErgy/KeERER_k_PwrIntegratorMin'
 * '<S250>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_HVBatTotErgy/IntegratorK Reset Enabled Limited/Limiter'
 * '<S251>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_PwrCalc/EnergySource'
 * '<S252>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_PwrCalc/EnergySource/KeERER_b_HEV'
 * '<S253>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_PwrCalc/EnergySource/KeERER_k_HVBat_trqpath_eff'
 * '<S254>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_PwrCalc/EnergySource/KeERER_k_ICE_trqpath_eff'
 * '<S255>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_PwrCalc/EnergySource/KeERER_k_MtrA_eff'
 * '<S256>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_PwrCalc/EnergySource/Limiter1'
 * '<S257>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_PwrCalc/EnergySource/Protected Division'
 * '<S258>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_PwrCalc/EnergySource/Protected Division1'
 * '<S259>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_RTI/Debounce'
 * '<S260>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_RTI/KeERER_n_RTI_DebounceSamples'
 * '<S261>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_RTI/KtERER_l_RTI_Hys'
 * '<S262>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_RTI/KtERER_l_RTI_Thrshld'
 * '<S263>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_RTI/Stateflow Chart'
 * '<S264>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_RTI/Debounce/Counter Reset  Enabled '
 * '<S265>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/WhrpHM_SOCDH_Filtering/Digital Lowpass Reset Enabled'
 * '<S266>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/WhrpHM_SOCDH_Filtering/EdgeRising3'
 * '<S267>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/WhrpHM_SOCDH_Filtering/EdgeRising4'
 * '<S268>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/WhrpHM_SOCDH_Filtering/KeERER_f_WhrpKMResetVal'
 * '<S269>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/WhrpHM_SOCDH_Filtering/KeERER_k_WhrpKM_FilterGain'
 * '<S270>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/KeERER_l_ACFAN_SNA_value'
 * '<S271>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/KeERER_l_Audio_SNA_value'
 * '<S272>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/KeERER_l_Defrost_SNA_value'
 * '<S273>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/KeERER_l_Lights_SNA_value'
 * '<S274>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/KeERER_l_Other_SNA_value'
 * '<S275>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/KeERER_l_Seatswhl_SNA_value'
 * '<S276>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/KeERER_l_Total_SNA_value'
 * '<S277>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem'
 * '<S278>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem1'
 * '<S279>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem2'
 * '<S280>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem3'
 * '<S281>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem4'
 * '<S282>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem5'
 * '<S283>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem/Enumerated Constant'
 * '<S284>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem/Enumerated Constant1'
 * '<S285>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem/Enumerated Constant2'
 * '<S286>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem/Enumerated Constant3'
 * '<S287>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem/Enumerated Constant4'
 * '<S288>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem/Enumerated Constant5'
 * '<S289>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem/Enumerated Constant6'
 * '<S290>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem/Enumerated Constant7'
 * '<S291>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem/Enumerated Constant8'
 * '<S292>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem/Enumerated Constant9'
 * '<S293>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem2/Enumerated Constant10'
 * '<S294>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem2/Enumerated Constant11'
 * '<S295>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem4/Enumerated Constant12'
 * '<S296>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Non Prop Power/Subsystem4/Enumerated Constant14'
 * '<S297>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/SchedChrg_EstRange/ApplyFILT_1stOrderLag_flt2'
 * '<S298>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/SchedChrg_EstRange/KeERER_b_OutEstRangeinMiles'
 * '<S299>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/SchedChrg_EstRange/KeERER_b_RangeRounding'
 * '<S300>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/SchedChrg_EstRange/KeERER_k_SchdChrgRangeEL'
 * '<S301>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/SchedChrg_EstRange/KeERER_l_max_range'
 * '<S302>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/SchedChrg_EstRange/KtERER_l_MaxRange'
 * '<S303>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/SchedChrg_EstRange/KtERER_l_MinRange'
 * '<S304>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/SchedChrg_EstRange/Limiter'
 * '<S305>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/SchedChrg_EstRange/Limiter1'
 * '<S306>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/SchedChrg_EstRange/Protected Division1'
 * '<S307>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Turn Off Delay Sample/EdgeFalling'
 * '<S308>' : 'ERER_ac/ERER_MedTEH/EREC/DTE/Turn On Delay Sample/EdgeRising'
 * '<S309>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/EEPROM_write'
 * '<S310>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/EdgeRising2'
 * '<S311>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/Enumerated Value'
 * '<S312>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/KeERER_n_Capacity_StorTime'
 * '<S313>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/KeERER_n_WHperKM_StorTime'
 * '<S314>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/Set Block2'
 * '<S315>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/Set Block9'
 * '<S316>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/Storage_Trigger'
 * '<S317>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/Storage_Trigger8'
 * '<S318>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/EEPROM_write/KeERER_F_WhperKM_Max'
 * '<S319>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/EEPROM_write/KeERER_F_WhperKM_Min'
 * '<S320>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/EEPROM_write/KtERER_K_FullDH_Weight'
 * '<S321>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/EEPROM_write/KtERER_K_Init_Weight'
 * '<S322>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/EEPROM_write/KtERER_K_SOCDH_Weight'
 * '<S323>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/EEPROM_write/Limiter'
 * '<S324>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/EEPROM_write/Protected Division'
 * '<S325>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/Storage_Trigger/Counter Reset  Enabled '
 * '<S326>' : 'ERER_ac/ERER_MedTEH/EREC/EEPROM/Storage_Trigger8/Counter Reset  Enabled '
 * '<S327>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Enumerated Value2'
 * '<S328>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Enumerated Value3'
 * '<S329>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/KeERER_b_EstRangeTrend_OvrdEnbl'
 * '<S330>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/KeERER_n_EEROMInitDelay'
 * '<S331>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic'
 * '<S332>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_disp'
 * '<S333>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/SOC_Min_det'
 * '<S334>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Turn On Delay Sample'
 * '<S335>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/WHrpKM_Init'
 * '<S336>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/EdgeRising'
 * '<S337>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/Enumerated Value'
 * '<S338>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/Enumerated Value1'
 * '<S339>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/If Action Subsystem'
 * '<S340>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/KeERER_b_AllowRangeReset'
 * '<S341>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/KeERER_v_VehSpdThrshld'
 * '<S342>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/RangeResetDisplay'
 * '<S343>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/If Action Subsystem/Constant Value1'
 * '<S344>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/If Action Subsystem/Stateflow Chart1'
 * '<S345>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/RangeResetDisplay/Counter Reset  Enabled '
 * '<S346>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/RangeResetDisplay/EdgeRising'
 * '<S347>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/RangeResetDisplay/KeERER_l_SNA_value'
 * '<S348>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/RangeResetDisplay/KeERER_t_RngResetDuration'
 * '<S349>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/RangeResetDisplay/Protected Division'
 * '<S350>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/RangeResetDisplay/Signal Latch On With Reset'
 * '<S351>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_disp/KeERER_Pct_DispSOC_0Range'
 * '<S352>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_disp/KeERER_b_EstRangeinit_OvrdEnbl'
 * '<S353>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_disp/KeERER_b_OutEstRangeinMiles'
 * '<S354>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_disp/KeERER_b_RangeRounding'
 * '<S355>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_disp/KeERER_l_EstRangeinit_Ovrd'
 * '<S356>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_disp/KeERER_l_SNA_value'
 * '<S357>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_disp/KeERER_l_max_range'
 * '<S358>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_disp/KtERER_l_MaxRange'
 * '<S359>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_disp/KtERER_l_MinRange'
 * '<S360>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_disp/Limiter'
 * '<S361>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Range_disp/Limiter1'
 * '<S362>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/SOC_Min_det/MinSOC_Det'
 * '<S363>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/SOC_Min_det/MinSOC_Det/ApplyFILT_1stOrderLag_flt1'
 * '<S364>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/SOC_Min_det/MinSOC_Det/KeERER_Pct_ZeroSOCDisplay'
 * '<S365>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/SOC_Min_det/MinSOC_Det/KeERER_k_CapFiltCoef'
 * '<S366>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/SOC_Min_det/MinSOC_Det/Unit Delay Reset Enabled1'
 * '<S367>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/SOC_Min_det/MinSOC_Det/Unit Delay Reset Enabled1/Turn On Delay Sample'
 * '<S368>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/SOC_Min_det/MinSOC_Det/Unit Delay Reset Enabled1/Turn On Delay Sample/EdgeRising'
 * '<S369>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/Turn On Delay Sample/EdgeRising'
 * '<S370>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/WHrpKM_Init/KeERER_F_WHperKMinit'
 * '<S371>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/WHrpKM_Init/KeERER_F_WHperKMinit_Ovrd'
 * '<S372>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/WHrpKM_Init/KeERER_b_WHperKMinit_OvrdEnbl'
 * '<S373>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/WHrpKM_Init/KeERER_f_WhrpKMResetVal'
 * '<S374>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/WHrpKM_Init/OpenInterval'
 * '<S375>' : 'ERER_ac/ERER_MedTEH/EREC/Inital_Outputs/WHrpKM_Init/Signal Latch On'
 * '<S376>' : 'ERER_ac/ERER_MedTEH/EREC/State/EstRange_State'
 * '<S377>' : 'ERER_ac/ERER_MedTEH/EREC/State/KeERER_Cnt_CapacityInitDelayTrshld'
 * '<S378>' : 'ERER_ac/ERER_MedTEH/EREC/State/KeERER_Cnt_RangeInitalizationDelayTrshld'
 * '<S379>' : 'ERER_ac/ERER_MedTEH/EREC/State/KeERER_t_ZeroSpdThrshld'
 * '<S380>' : 'ERER_ac/ERER_MedTEH/EREC/State/KeERER_v_VehSpdThrshld'
 * '<S381>' : 'ERER_ac/ERER_PwrOn/DSM_Init'
 * '<S382>' : 'ERER_ac/ERER_PwrOn/ERER_NF'
 * '<S383>' : 'ERER_ac/ERER_PwrOn/ReadFromEEPROM'
 * '<S384>' : 'ERER_ac/ERER_PwrOn/ERER_NF/Enumerated_Constant'
 */
#endif                                 /* RTW_HEADER_ERER_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
