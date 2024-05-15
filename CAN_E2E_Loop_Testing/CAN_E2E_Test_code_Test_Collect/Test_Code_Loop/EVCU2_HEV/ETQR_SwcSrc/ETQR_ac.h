/*
 * File: ETQR_ac.h
 *
 * Code generated for Simulink model 'ETQR_ac'.
 *
 * Model version                  : 9.75
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:40:33 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ETQR_ac_h_
#define RTW_HEADER_ETQR_ac_h_
#include <math.h>
#include <string.h>
#include "Rte_Type.h"
#ifndef ETQR_ac_COMMON_INCLUDES_
#define ETQR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ETQR.h"
#endif                                 /* ETQR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S220>/Get_Data_Indexes ' */
typedef struct
{
    float32 UpperIndex;                /* '<S220>/Get_Data_Indexes ' */
    float32 LowerIndex;                /* '<S220>/Get_Data_Indexes ' */
    float32 fract;                     /* '<S220>/Get_Data_Indexes ' */
}
B_Get_Data_Indexes_ETQR_ac_T;

/* Block signals for system '<S124>/UseHalfCylinderCapability' */
typedef struct
{
    B_Get_Data_Indexes_ETQR_ac_T sf_Get_Data_Indexes;/* '<S220>/Get_Data_Indexes ' */
}
B_UseHalfCylinderCapability_E_T;

/* Block signals for system '<S124>/UseFullCylinderCapability' */
typedef struct
{
    B_Get_Data_Indexes_ETQR_ac_T sf_Get_Data_Indexes;/* '<S217>/Get_Data_Indexes ' */
}
B_UseFullCylinderCapability_E_T;

/* Block signals for system '<S127>/UseHalfCylinderCapability' */
typedef struct
{
    B_Get_Data_Indexes_ETQR_ac_T sf_Get_Data_Indexes;/* '<S244>/Get_Data_Indexes ' */
}
B_UseHalfCylinderCapability_d_T;

/* Block signals for system '<S127>/UseFullCylinderCapability' */
typedef struct
{
    B_Get_Data_Indexes_ETQR_ac_T sf_Get_Data_Indexes;/* '<S241>/Get_Data_Indexes ' */
}
B_UseFullCylinderCapability_f_T;

/* Block signals for system '<S125>/UseHalfCylinderCapability' */
typedef struct
{
    B_Get_Data_Indexes_ETQR_ac_T sf_Get_Data_Indexes;/* '<S228>/Get_Data_Indexes ' */
}
B_UseHalfCylinderCapabilit_dn_T;

/* Block signals for system '<S125>/UseFullCylinderCapability' */
typedef struct
{
    B_Get_Data_Indexes_ETQR_ac_T sf_Get_Data_Indexes;/* '<S225>/Get_Data_Indexes ' */
}
B_UseFullCylinderCapability_d_T;

/* Block signals for system '<S126>/UseHalfCylinderCapability' */
typedef struct
{
    B_Get_Data_Indexes_ETQR_ac_T sf_Get_Data_Indexes;/* '<S236>/Get_Data_Indexes ' */
}
B_UseHalfCylinderCapability_g_T;

/* Block signals for system '<S126>/UseFullCylinderCapability' */
typedef struct
{
    B_Get_Data_Indexes_ETQR_ac_T sf_Get_Data_Indexes;/* '<S233>/Get_Data_Indexes ' */
}
B_UseFullCylinderCapability_h_T;

/* Block signals (default storage) */
typedef struct tag_B_ETQR_ac_T
{

#if Rte_SysCon_Variant_ETQR_1

    float32 VaETQI_n_EngCapability_Poke[16];
                                      /* '<S46>/PokeETQR_n_EngCapabilityChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 VaETQI_n_EngHalfCylCapability_P[16];
                                      /* '<S46>/PokeETQR_n_EngCapabilityChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_PnLimitMaxEngTrqCap_ou;
                                /* '<S44>/PokeETQR_M_PnLimitMaxEngTrqCapChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_MinDragCapacity_out;
                                    /* '<S43>/PokeETQR_M_MinDragCapacityChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 VaETQI_M_MinDragCapability_Poke[16];
                                  /* '<S42>/PokeETQR_M_MinDragCapabilityChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 VaETQI_M_HalfCylMinDragCapabi_a[16];
                                  /* '<S42>/PokeETQR_M_MinDragCapabilityChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_MinAirFlowMinSparkCapa;
                         /* '<S41>/PokeETQR_M_MinAirFlowMinSparkCapacityChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_EngTrqStaticSEM_out;
                                    /* '<S40>/PokeETQR_M_EngTrqStaticSEMChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_EngTrqReserveReq_out;
                                   /* '<S39>/PokeETQR_M_EngTrqReserveReqChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_EngTrqFSO_CurrAir_out;
                                  /* '<S38>/PokeETQR_M_EngTrqFSO_CurrAirChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_EngTrqAirflow_out;
                                      /* '<S37>/PokeETQR_M_EngTrqAirflowChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_EngTrqActual_out; /* '<S36>/PokeETQR_M_EngTrqActualChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_EngTorque_out;    /* '<S35>/PokeETQR_M_EngTorqueChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_EngTorqACC4Capability_;
                              /* '<S34>/PokeETQR_M_EngTorqACC4CapabilityChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_EngCapacityMinRunImmed;
                          /* '<S33>/PokeETQR_M_EngCapacityMinRunImmedRedChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_EngCapacityMinRunImm_h;
                          /* '<S32>/PokeETQR_M_EngCapacityMinRunImmedNomChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_EngCapacityMinRun_out;
                                  /* '<S31>/PokeETQR_M_EngCapacityMinRunChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_EngCapacityMinOff_out;
                                  /* '<S30>/PokeETQR_M_EngCapacityMinOffChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 LeETQR_M_EngCapacityMax_out;
                                     /* '<S29>/PokeETQR_M_EngCapacityMaxChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 VaETQI_M_EngCapabilityMinRun_Po[16];
                                /* '<S28>/PokeETQR_M_EngCapabilityMinRunChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 VaETQI_M_EngHalfCylCapability_i[16];
                                /* '<S28>/PokeETQR_M_EngCapabilityMinRunChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 VaETQI_M_EngCapabilityMinOff_Po[16];
                                /* '<S27>/PokeETQR_M_EngCapabilityMinOffChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 VaETQI_M_EngHalfCylCapability_n[16];
                                /* '<S27>/PokeETQR_M_EngCapabilityMinOffChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 VeETQI_Cnt_CapabilityFrame_Min;
                                /* '<S27>/PokeETQR_M_EngCapabilityMinOffChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 VeETQI_Cnt_CapabilityFrame_Ha_i;
                                /* '<S27>/PokeETQR_M_EngCapabilityMinOffChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 VaETQI_M_EngCapabilityMax_Poke[16];
                                   /* '<S26>/PokeETQR_M_EngCapabilityMaxChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 VaETQI_M_EngHalfCylCapability_l[16];
                                   /* '<S26>/PokeETQR_M_EngCapabilityMaxChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 VeETQI_Cnt_CapabilityFrame_Max;
                                   /* '<S26>/PokeETQR_M_EngCapabilityMaxChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 VeETQI_Cnt_CapabilityFrame_Ha_c;
                                   /* '<S26>/PokeETQR_M_EngCapabilityMaxChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

    float32 OutportBufferForEngCapabilityMa[16];/* '<S300>/Const' */
    float32 OutportBufferForEngCapabilityMi[16];/* '<S300>/Const1' */
    float32 OutportBufferForEngHalfCylCapab[16];/* '<S300>/Const2' */
    float32 OutportBufferForEngHalfCylCap_h[16];/* '<S300>/Const3' */
    float32 OutportBufferForVeETQR_M_EngTrq;/* '<S296>/Constant Value5' */
    float32 OutportBufferForVeETQR_M_EngT_l;/* '<S296>/Constant Value1' */
    float32 OutportBufferForVaETQR_M_EngCap[16];
                                   /* '<S296>/KaETQR_M_EngCapabilityMax_Dflt' */
    float32 OutportBufferForVaETQR_M_EngC_c[16];
                                /* '<S296>/KaETQR_M_EngCapabilityMinOff_Dflt' */
    float32 OutportBufferForVaETQR_M_EngHal[16];
                            /* '<S296>/KaETQR_M_EngHalfCylCapabilityMax_Dflt' */
    float32 OutportBufferForVaETQR_M_EngH_o[16];
                         /* '<S296>/KaETQR_M_EngHalfCylCapabilityMinOff_Dflt' */
    float32 OutportBufferForVeETQR_M_EngCap;
                                     /* '<S296>/KeETQR_M_EngCapacityMax_Dflt' */
    float32 OutportBufferForVeETQR_M_EngC_c;
                                  /* '<S296>/KeETQR_M_EngCapacityMinOff_Dflt' */
    float32 OutportBufferForVeETQR_M_EngC_h;
                                  /* '<S296>/KeETQR_M_EngCapacityMinRun_Dflt' */
    float32 OutportBufferForVeETQR_M_EngC_j;
                          /* '<S296>/KeETQR_M_EngCapacityMinRunImmedRed_Dflt' */
    float32 OutportBufferForVeETQR_M_MinDra;
                                    /* '<S296>/KeETQR_M_MinDragCapacity_Dflt' */
    float32 OutportBufferForVeETQR_M_MinAir;
                         /* '<S296>/KeETQR_M_MinAirFlowMinSparkCapacity_Dflt' */
    float32 OutportBufferForVeETQR_M_EngT_c;/* '<S296>/Constant Value11' */
    float32 OutportBufferForVeETQR_M_EngT_g;/* '<S296>/Constant Value12' */
    float32 OutportBufferForVeETQR_M_EngC_d;
                          /* '<S296>/KeETQR_M_EngCapacityMinRunImmedNom_Dflt' */
    float32 OutportBufferForVeETQI_M_EngTrq;/* '<S297>/Constant Value' */
    float32 OutportBufferForVeETQI_M_EngT_i;/* '<S297>/Constant Value1' */
    float32 OutportBufferForVeETQI_M_EngTor;/* '<S297>/Constant Value2' */
    float32 OutportBufferForVeETQI_M_EngT_e;/* '<S297>/Constant Value3' */
    float32 OutportBufferForVeETQI_M_EngT_k;/* '<S297>/Constant Value4' */
    float32 OutportBufferForVeETQI_M_EngT_f;/* '<S297>/Constant Value5' */
    float32 OutportBufferForVeETQI_M_EngCap;
                                     /* '<S298>/KeETQR_M_EngCapacityMax_Dflt' */
    float32 OutportBufferForVeETQI_M_EngC_o;
                                  /* '<S298>/KeETQR_M_EngCapacityMinRun_Dflt' */
    float32 OutportBufferForVeETQI_M_EngC_e;
                          /* '<S298>/KeETQR_M_EngCapacityMinRunImmedRed_Dflt' */
    float32 OutportBufferForVeETQI_M_Eng_ox;
                                  /* '<S298>/KeETQR_M_EngCapacityMinOff_Dflt' */
    float32 OutportBufferForVeETQI_M_MinDra;
                                    /* '<S298>/KeETQR_M_MinDragCapacity_Dflt' */
    float32 OutportBufferForVeETQI_M_MinAir;
                         /* '<S298>/KeETQR_M_MinAirFlowMinSparkCapacity_Dflt' */
    float32 OutportBufferForVeETQI_M_EngC_g;
                          /* '<S298>/KeETQR_M_EngCapacityMinRunImmedNom_Dflt' */
    float32 OutportBufferForVeETQI_M_EngT_h;
                                  /* '<S298>/KeETQR_M_EngTrqFSO_CurrAir_Dflt' */
    float32 OutportBufferForVaETQI_M_EngCap[16];
                                   /* '<S299>/KaETQR_M_EngCapabilityMax_Dflt' */
    float32 OutportBufferForVaETQI_M_EngHal[16];
                            /* '<S299>/KaETQR_M_EngHalfCylCapabilityMax_Dflt' */
    float32 OutportBufferForVeETQI_Cnt_Capa;/* '<S299>/Constant Value' */
    float32 OutportBufferForVeETQI_Cnt_Ca_f;/* '<S299>/Constant Value1' */
    float32 OutportBufferForVaETQI_M_EngC_e[16];
                                /* '<S299>/KaETQR_M_EngCapabilityMinRun_Dflt' */
    float32 OutportBufferForVaETQI_M_EngH_f[16];
                         /* '<S299>/KaETQR_M_EngHalfCylCapabilityMinRun_Dflt' */
    float32 OutportBufferForVaETQI_M_EngC_o[16];
                                /* '<S299>/KaETQR_M_EngCapabilityMinOff_Dflt' */
    float32 OutportBufferForVaETQI_M_EngH_m[16];
                         /* '<S299>/KaETQR_M_EngHalfCylCapabilityMinOff_Dflt' */
    float32 OutportBufferForVeETQI_Cnt_Ca_b;/* '<S299>/Constant Value2' */
    float32 OutportBufferForVeETQI_Cnt_Ca_k;/* '<S299>/Constant Value3' */
    float32 OutportBufferForVaETQI_n_EngCap[16];
                                      /* '<S299>/KaETQR_n_EngCapability_Dflt' */
    float32 OutportBufferForVaETQI_n_EngHal[16];
                               /* '<S299>/KaETQR_n_EngHalfCylCapability_Dflt' */
    float32 OutportBufferForVaETQI_M_MinDra[16];
                                  /* '<S299>/KaETQR_M_MinDragCapability_Dflt' */
    float32 OutportBufferForVaETQI_M_HalfCy[16];
                           /* '<S299>/KaETQR_M_HalfCylMinDragCapability_Dflt' */
    float32 OutportBufferForVeETQR_M_PnLimi;
                                /* '<S299>/KeETQR_M_PnLimitMaxEngTrqCap_Dflt' */

#if Rte_SysCon_Variant_ETQR_1

    float32 Merge1;                    /* '<S81>/Merge1' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 Merge1_o;                  /* '<S82>/Merge1' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 Gain;                      /* '<S152>/Gain' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 Merge1_l;                  /* '<S78>/Merge1' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 Merge1_k;                  /* '<S47>/Merge1' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 Merge2;                    /* '<S47>/Merge2' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 SignalConversion_h;        /* '<S47>/Signal Conversion' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean LeETQR_b_EngCapacityMinRunImmed;
                     /* '<S45>/PokeETQR_b_EngCapacityMinRunImmedRedAvailChrt' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeETQR_b_EngTrq;/* '<S296>/FALSE Constant' */
    boolean OutportBufferForVeETQR_b_EngT_k;/* '<S296>/FALSE Constant1' */
    boolean OutportBufferForVeETQR_b_EngCap;/* '<S296>/FALSE Constant2' */
    boolean OutportBufferForVeETQI_b_EngTrq;/* '<S297>/FALSE Constant1' */
    boolean OutportBufferForVeETQI_b_EngT_o;/* '<S297>/FALSE Constant' */
    boolean OutportBufferForVeETQI_M_Eng_hs;/* '<S297>/FALSE Constant2' */
    boolean OutportBufferForVeETQI_M_Eng_f1;/* '<S297>/FALSE Constant3' */
    boolean OutportBufferForVeETQI_b_EngT_j;/* '<S297>/FALSE Constant4' */
    boolean OutportBufferForVeETQI_b_EngTor;/* '<S297>/FALSE Constant5' */
    boolean OutportBufferForVeETQI_b_EngCap;/* '<S298>/FALSE Constant' */
    boolean OutportBufferForVeETQI_b_EngC_k;/* '<S298>/FALSE Constant1' */
    boolean OutportBufferForVeETQI_b_EngC_c;/* '<S298>/FALSE Constant2' */
    boolean OutportBufferForVeETQI_b_EngC_p;/* '<S298>/FALSE Constant3' */
    boolean OutportBufferForVeETQI_b_MinDra;/* '<S298>/FALSE Constant4' */
    boolean OutportBufferForVeETQI_b_MinAir;/* '<S298>/FALSE Constant7' */
    boolean OutportBufferForVeETQI_b_EngC_g;/* '<S298>/FALSE Constant5' */
    boolean OutportBufferForVeETQI_b_EngC_o;
                     /* '<S298>/KeETQR_b_EngCapacityMinRunImmedRedAvail_Dflt' */
    boolean OutportBufferForVeETQI_b_EngC_h;/* '<S298>/FALSE Constant6' */
    boolean OutportBufferForVeETQR_b_PnLimi;/* '<S299>/FALSE Constant6' */

#if Rte_SysCon_Variant_ETQR_1

    B_UseFullCylinderCapability_f_T UseFullCylinderCapability_ho;/* '<S81>/UseFullCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseHalfCylinderCapability_d_T UseHalfCylinderCapability_ia;/* '<S81>/UseHalfCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseFullCylinderCapability_f_T UseFullCylinderCapability_o;/* '<S82>/UseFullCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseHalfCylinderCapability_d_T UseHalfCylinderCapability_f;/* '<S82>/UseHalfCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseFullCylinderCapability_h_T UseFullCylinderCapability_hy;/* '<S80>/UseFullCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseHalfCylinderCapability_g_T UseHalfCylinderCapability_pr;/* '<S80>/UseHalfCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseFullCylinderCapability_d_T UseFullCylinderCapability_n;/* '<S79>/UseFullCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseHalfCylinderCapabilit_dn_T UseHalfCylinderCapability_i;/* '<S79>/UseHalfCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseFullCylinderCapability_E_T UseFullCylinderCapability_mh;/* '<S78>/UseFullCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseHalfCylinderCapability_E_T UseHalfCylinderCapability_p;/* '<S78>/UseHalfCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseFullCylinderCapability_h_T UseFullCylinderCapability_d;/* '<S126>/UseFullCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseHalfCylinderCapability_g_T UseHalfCylinderCapability_a;/* '<S126>/UseHalfCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseFullCylinderCapability_d_T UseFullCylinderCapability_f;/* '<S125>/UseFullCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseHalfCylinderCapabilit_dn_T UseHalfCylinderCapability_j;/* '<S125>/UseHalfCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_Get_Data_Indexes_ETQR_ac_T sf_Get_Data_Indexes_k;/* '<S207>/Get_Data_Indexes ' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_Get_Data_Indexes_ETQR_ac_T sf_Get_Data_Indexes;/* '<S210>/Get_Data_Indexes ' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseFullCylinderCapability_f_T UseFullCylinderCapability_m;/* '<S119>/UseFullCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseHalfCylinderCapability_d_T UseHalfCylinderCapability_c;/* '<S119>/UseHalfCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseFullCylinderCapability_f_T UseFullCylinderCapability_e;/* '<S128>/UseFullCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseHalfCylinderCapability_d_T UseHalfCylinderCapability_d;/* '<S128>/UseHalfCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseFullCylinderCapability_f_T UseFullCylinderCapability_j;/* '<S127>/UseFullCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseHalfCylinderCapability_d_T UseHalfCylinderCapability_l;/* '<S127>/UseHalfCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseFullCylinderCapability_E_T UseFullCylinderCapability;/* '<S124>/UseFullCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    B_UseHalfCylinderCapability_E_T UseHalfCylinderCapability;/* '<S124>/UseHalfCylinderCapability' */

#define B_ETQR_AC_T_VARIANT_EXISTS
#endif

}
B_ETQR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_ETQR_ac_T
{

#if Rte_SysCon_Variant_ETQR_1

    float32 UnitDelay_DSTATE[16];      /* '<S272>/Unit Delay' */

#define DW_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 UnitDelay_DSTATE_d[16];    /* '<S279>/Unit Delay' */

#define DW_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 UnitDelay_DSTATE_p[16];    /* '<S286>/Unit Delay' */

#define DW_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 UnitDelay_DSTATE_g[16];    /* '<S294>/Unit Delay' */

#define DW_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 UnitDelay_DSTATE_a;        /* '<S69>/Unit Delay' */

#define DW_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 UnitDelay_DSTATE_h;        /* '<S65>/Unit Delay' */

#define DW_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 UnitDelay_DSTATE_n;        /* '<S60>/Unit Delay' */

#define DW_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean UnitDelay_DSTATE_d4;       /* '<S293>/Unit Delay' */

#define DW_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean UnitDelay_DSTATE_g1;       /* '<S285>/Unit Delay' */

#define DW_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean UnitDelay_DSTATE_i;        /* '<S278>/Unit Delay' */

#define DW_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean UnitDelay_DSTATE_hk;       /* '<S271>/Unit Delay' */

#define DW_ETQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean UnitDelay_DSTATE_ge;       /* '<S70>/Unit Delay' */

#define DW_ETQR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_ETQR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_ETQR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ETQR
#include "MemMap.h"

extern VAR(B_ETQR_ac_T, ETQR_VAR_INIT) ETQR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ETQR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ETQR
#include "MemMap.h"

extern VAR(DW_ETQR_ac_T, ETQR_VAR_INIT) ETQR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ETQR
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
 * '<Root>' : 'ETQR_ac'
 * '<S1>'   : 'ETQR_ac/ETQR_FastTEF'
 * '<S2>'   : 'ETQR_ac/ETQR_MedTEB'
 * '<S3>'   : 'ETQR_ac/ETQR_MedTEH'
 * '<S4>'   : 'ETQR_ac/ETQR_PwrOn'
 * '<S5>'   : 'ETQR_ac/FsftETQR_M_EngCapabilityMax'
 * '<S6>'   : 'ETQR_ac/FsftETQR_M_EngCapabilityMinOff'
 * '<S7>'   : 'ETQR_ac/FsftETQR_M_EngCapabilityMinRun'
 * '<S8>'   : 'ETQR_ac/FsftETQR_M_EngCapacityMax'
 * '<S9>'   : 'ETQR_ac/FsftETQR_M_EngCapacityMinOff'
 * '<S10>'  : 'ETQR_ac/FsftETQR_M_EngCapacityMinRun'
 * '<S11>'  : 'ETQR_ac/FsftETQR_M_EngCapacityMinRunImmedNom'
 * '<S12>'  : 'ETQR_ac/FsftETQR_M_EngCapacityMinRunImmedRed'
 * '<S13>'  : 'ETQR_ac/FsftETQR_M_EngTorqACC4Capability'
 * '<S14>'  : 'ETQR_ac/FsftETQR_M_EngTorque'
 * '<S15>'  : 'ETQR_ac/FsftETQR_M_EngTrqActual'
 * '<S16>'  : 'ETQR_ac/FsftETQR_M_EngTrqAirflow'
 * '<S17>'  : 'ETQR_ac/FsftETQR_M_EngTrqFSO_CurrAir'
 * '<S18>'  : 'ETQR_ac/FsftETQR_M_EngTrqReserveReq'
 * '<S19>'  : 'ETQR_ac/FsftETQR_M_EngTrqStaticSEM'
 * '<S20>'  : 'ETQR_ac/FsftETQR_M_MinAirFlowMinSparkCapacity'
 * '<S21>'  : 'ETQR_ac/FsftETQR_M_MinDragCapability'
 * '<S22>'  : 'ETQR_ac/FsftETQR_M_MinDragCapacity'
 * '<S23>'  : 'ETQR_ac/FsftETQR_M_PnLimitMaxEngTrqCap'
 * '<S24>'  : 'ETQR_ac/FsftETQR_b_EngCapacityMinRunImmedRedAvail'
 * '<S25>'  : 'ETQR_ac/FsftETQR_n_EngCapability'
 * '<S26>'  : 'ETQR_ac/PokeETQR_M_EngCapabilityMax'
 * '<S27>'  : 'ETQR_ac/PokeETQR_M_EngCapabilityMinOff'
 * '<S28>'  : 'ETQR_ac/PokeETQR_M_EngCapabilityMinRun'
 * '<S29>'  : 'ETQR_ac/PokeETQR_M_EngCapacityMax'
 * '<S30>'  : 'ETQR_ac/PokeETQR_M_EngCapacityMinOff'
 * '<S31>'  : 'ETQR_ac/PokeETQR_M_EngCapacityMinRun'
 * '<S32>'  : 'ETQR_ac/PokeETQR_M_EngCapacityMinRunImmedNom'
 * '<S33>'  : 'ETQR_ac/PokeETQR_M_EngCapacityMinRunImmedRed'
 * '<S34>'  : 'ETQR_ac/PokeETQR_M_EngTorqACC4Capability'
 * '<S35>'  : 'ETQR_ac/PokeETQR_M_EngTorque'
 * '<S36>'  : 'ETQR_ac/PokeETQR_M_EngTrqActual'
 * '<S37>'  : 'ETQR_ac/PokeETQR_M_EngTrqAirflow'
 * '<S38>'  : 'ETQR_ac/PokeETQR_M_EngTrqFSO_CurrAir'
 * '<S39>'  : 'ETQR_ac/PokeETQR_M_EngTrqReserveReq'
 * '<S40>'  : 'ETQR_ac/PokeETQR_M_EngTrqStaticSEM'
 * '<S41>'  : 'ETQR_ac/PokeETQR_M_MinAirFlowMinSparkCapacity'
 * '<S42>'  : 'ETQR_ac/PokeETQR_M_MinDragCapability'
 * '<S43>'  : 'ETQR_ac/PokeETQR_M_MinDragCapacity'
 * '<S44>'  : 'ETQR_ac/PokeETQR_M_PnLimitMaxEngTrqCap'
 * '<S45>'  : 'ETQR_ac/PokeETQR_b_EngCapacityMinRunImmedRedAvail'
 * '<S46>'  : 'ETQR_ac/PokeETQR_n_EngCapability'
 * '<S47>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms'
 * '<S48>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/Boolean Set Block'
 * '<S49>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/Boolean Set Block1'
 * '<S50>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/ETQC_DtrmnEngTrqAct'
 * '<S51>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/EngTrqStaticSEM'
 * '<S52>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/Faulted'
 * '<S53>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/Faulted_w_CL'
 * '<S54>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/KeETQR_b_DsblEngTrqActual_w_CL'
 * '<S55>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/NotFaulted'
 * '<S56>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/NotFaulted_w_CL'
 * '<S57>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/Set Block'
 * '<S58>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/ETQC_DtrmnEngTrqAct/Faulted'
 * '<S59>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/ETQC_DtrmnEngTrqAct/NotFaulted'
 * '<S60>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/ETQC_DtrmnEngTrqAct/Faulted/DigitalLowpassFilter'
 * '<S61>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/ETQC_DtrmnEngTrqAct/Faulted/KeETQR_M_EngTrqActualDflt'
 * '<S62>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/ETQC_DtrmnEngTrqAct/Faulted/KeETQR_k_EngTrqActualFilt'
 * '<S63>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/ETQC_DtrmnEngTrqAct/Faulted/Set Block1'
 * '<S64>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/ETQC_DtrmnEngTrqAct/NotFaulted/Set Block'
 * '<S65>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/EngTrqStaticSEM/Digital Lowpass Reset Enabled1'
 * '<S66>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/EngTrqStaticSEM/Enumerated_Constant'
 * '<S67>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/EngTrqStaticSEM/KeETQR_b_UseCmndAsReplacement'
 * '<S68>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/EngTrqStaticSEM/KeETQR_k_KfFiltSEMFA'
 * '<S69>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/EngTrqStaticSEM/Turn Off Delay Time'
 * '<S70>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/EngTrqStaticSEM/Turn Off Delay Time/EdgeFalling'
 * '<S71>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/Faulted/Set Block'
 * '<S72>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/Faulted_w_CL/Set Block'
 * '<S73>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/NotFaulted/Set Block'
 * '<S74>'  : 'ETQR_ac/ETQR_FastTEF/ETQC_ProcessEngTrq_5ms/NotFaulted_w_CL/Set Block'
 * '<S75>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity'
 * '<S76>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity'
 * '<S77>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Engine_DOD_State'
 * '<S78>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMaxInterpolation'
 * '<S79>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinDrag_Interpolation'
 * '<S80>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinOff_Interpolation'
 * '<S81>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRunImmed_Interpolation'
 * '<S82>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRun_Interpolation'
 * '<S83>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapacityMaxNot_Faulted'
 * '<S84>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapacityMax_Faulted'
 * '<S85>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapacityMinOffFaulted_NotFaulted'
 * '<S86>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapacityMinOff_Faulted'
 * '<S87>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapacityMinRunImmedNom_NotFaulted'
 * '<S88>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapacityMinRunImmed_Faulted'
 * '<S89>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapacityMinRunImmed_NotFaulted'
 * '<S90>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapacityMinRunNot_Faulted'
 * '<S91>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapacityMinRun_Faulted'
 * '<S92>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/Interpolation_Triggers'
 * '<S93>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_M_EngCapacityMax_Dflt'
 * '<S94>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_M_EngCapacityMinOff_Dflt'
 * '<S95>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_M_EngCapacityMinRunImmedNom_Dflt'
 * '<S96>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_M_EngCapacityMinRunImmedRed_Dflt'
 * '<S97>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_M_EngCapacityMinRun_Dflt'
 * '<S98>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_M_MinDragCapacity_Dflt'
 * '<S99>'  : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_M_MinDragCapacity_Dflt1'
 * '<S100>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_EnableEngCapabilityMax4StrtStp_Fix'
 * '<S101>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_EnableEngCapabilityMinOff4StrtStp_Fix'
 * '<S102>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_EnableEngCapacityMax_Fix'
 * '<S103>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_EnableEngCapacityMinOff_Fix'
 * '<S104>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_EnableEngCapacityMinRunImmedNom_Fix'
 * '<S105>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_EnableEngCapacityMinRunImmedRed_Fix'
 * '<S106>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_EnableEngCapacityMinRun_Fix'
 * '<S107>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_EnableMinAirFlowCapacity_Fix'
 * '<S108>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_EnableMinDragCapacity_Fix'
 * '<S109>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_EnableUseCapbltyMinDrag4StrtStp_Fix'
 * '<S110>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_EnableUseCapbltyMinImmed4StrtStp_Fix'
 * '<S111>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_EnableUseCapbltyMinRun4StrtStp_Fix'
 * '<S112>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_EnableUseMinRun4StrtStp_MnAfMnSpk_Fix'
 * '<S113>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_UseCapbltyMax4StrtStp'
 * '<S114>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_UseCapbltyMinDrag4StrtStp'
 * '<S115>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_UseCapbltyMinImmed4StrtStp'
 * '<S116>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_UseCapbltyMinOff4StrtStp'
 * '<S117>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_UseCapbltyMinRun4StrtStp'
 * '<S118>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/KeETQR_b_UseMinRun4StrtStp_MnAfMnSpk'
 * '<S119>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinAirFlowMinSparkCapacity_Faulted'
 * '<S120>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinAirFlowMinSpark_NotFaulted'
 * '<S121>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_Faulted'
 * '<S122>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_NotFaulted'
 * '<S123>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinRunImmedNom_FaultedCase'
 * '<S124>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMaxduringStrtStp'
 * '<S125>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinDragduringStrtStp'
 * '<S126>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinOffduringStrtStp'
 * '<S127>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp'
 * '<S128>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp_Immed'
 * '<S129>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMaxInterpolation/Determine_Ni'
 * '<S130>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMaxInterpolation/UseFullCylinderCapability'
 * '<S131>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMaxInterpolation/UseHalfCylinderCapability'
 * '<S132>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMaxInterpolation/Determine_Ni/KeETQR_b_EngCapacityMax_OvrdEnbl'
 * '<S133>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMaxInterpolation/Determine_Ni/KeETQR_n_EngCapacityMax_OvrdVal'
 * '<S134>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMaxInterpolation/UseFullCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S135>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMaxInterpolation/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S136>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMaxInterpolation/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S137>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMaxInterpolation/UseHalfCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S138>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMaxInterpolation/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S139>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMaxInterpolation/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S140>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinDrag_Interpolation/Determine_Ni'
 * '<S141>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinDrag_Interpolation/UseFullCylinderCapability'
 * '<S142>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinDrag_Interpolation/UseHalfCylinderCapability'
 * '<S143>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinDrag_Interpolation/Determine_Ni/KeETQR_b_EngCapacityMinDrag_OvrdEnbl'
 * '<S144>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinDrag_Interpolation/Determine_Ni/KeETQR_n_EngCapacityMinDrag_OvrdVal'
 * '<S145>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinDrag_Interpolation/UseFullCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S146>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinDrag_Interpolation/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S147>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinDrag_Interpolation/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S148>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinDrag_Interpolation/UseHalfCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S149>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinDrag_Interpolation/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S150>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinDrag_Interpolation/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S151>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinOff_Interpolation/Determine_Ni'
 * '<S152>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinOff_Interpolation/Set Block'
 * '<S153>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinOff_Interpolation/UseFullCylinderCapability'
 * '<S154>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinOff_Interpolation/UseHalfCylinderCapability'
 * '<S155>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinOff_Interpolation/Determine_Ni/KeETQR_b_EngCapacityMinOff_OvrdEnbl'
 * '<S156>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinOff_Interpolation/Determine_Ni/KeETQR_n_EngCapacityMinOff_OvrdVal'
 * '<S157>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinOff_Interpolation/UseFullCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S158>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinOff_Interpolation/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S159>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinOff_Interpolation/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S160>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinOff_Interpolation/UseHalfCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S161>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinOff_Interpolation/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S162>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinOff_Interpolation/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S163>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRunImmed_Interpolation/Determine_Ni'
 * '<S164>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRunImmed_Interpolation/UseFullCylinderCapability'
 * '<S165>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRunImmed_Interpolation/UseHalfCylinderCapability'
 * '<S166>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRunImmed_Interpolation/Determine_Ni/KeETQR_b_EngCapacityMinRunImmed_OvrdEnbl'
 * '<S167>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRunImmed_Interpolation/Determine_Ni/KeETQR_n_EngCapacityMinRunImmed_OvrdVal'
 * '<S168>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRunImmed_Interpolation/UseFullCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S169>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRunImmed_Interpolation/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S170>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRunImmed_Interpolation/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S171>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRunImmed_Interpolation/UseHalfCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S172>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRunImmed_Interpolation/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S173>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRunImmed_Interpolation/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S174>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRun_Interpolation/Determine_Ni'
 * '<S175>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRun_Interpolation/UseFullCylinderCapability'
 * '<S176>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRun_Interpolation/UseHalfCylinderCapability'
 * '<S177>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRun_Interpolation/Determine_Ni/KeETQR_b_EngCapacityMinRun_OvrdEnbl'
 * '<S178>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRun_Interpolation/Determine_Ni/KeETQR_n_EngCapacityMinRun_OvrdVal'
 * '<S179>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRun_Interpolation/UseFullCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S180>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRun_Interpolation/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S181>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRun_Interpolation/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S182>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRun_Interpolation/UseHalfCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S183>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRun_Interpolation/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S184>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapabilityMinRun_Interpolation/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S185>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapacityMinRunImmed_NotFaulted/Set Block'
 * '<S186>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/EngCapacityMinRunNot_Faulted/Set Block'
 * '<S187>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/Interpolation_Triggers/EngCapacityMax'
 * '<S188>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/Interpolation_Triggers/EngCapacityMinDrag'
 * '<S189>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/Interpolation_Triggers/EngCapacityMinOff'
 * '<S190>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/Interpolation_Triggers/EngCapacityMinRun'
 * '<S191>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/Interpolation_Triggers/EngCapacityMinRunImmed'
 * '<S192>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/Interpolation_Triggers/KeETQR_b_EnblTrqInstrumentation'
 * '<S193>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinAirFlowMinSparkCapacity_Faulted/UseFullCylinderCapability'
 * '<S194>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinAirFlowMinSparkCapacity_Faulted/UseHalfCylinderCapability'
 * '<S195>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinAirFlowMinSparkCapacity_Faulted/UseFullCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S196>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinAirFlowMinSparkCapacity_Faulted/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S197>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinAirFlowMinSparkCapacity_Faulted/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S198>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinAirFlowMinSparkCapacity_Faulted/UseHalfCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S199>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinAirFlowMinSparkCapacity_Faulted/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S200>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinAirFlowMinSparkCapacity_Faulted/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S201>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinAirFlowMinSpark_NotFaulted/Set Block'
 * '<S202>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_Faulted/MaxDragCapacity_Faulted'
 * '<S203>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_Faulted/MaxDragCapacity_NotFaulted'
 * '<S204>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_Faulted/MaxDragCapacity_Faulted/UseFullCylinderCapability'
 * '<S205>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_Faulted/MaxDragCapacity_Faulted/UseHalfCylinderCapability'
 * '<S206>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_Faulted/MaxDragCapacity_Faulted/UseFullCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S207>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_Faulted/MaxDragCapacity_Faulted/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S208>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_Faulted/MaxDragCapacity_Faulted/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S209>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_Faulted/MaxDragCapacity_Faulted/UseHalfCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S210>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_Faulted/MaxDragCapacity_Faulted/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S211>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_Faulted/MaxDragCapacity_Faulted/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S212>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_Faulted/MaxDragCapacity_NotFaulted/Set Block'
 * '<S213>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/MinDragCapacity_NotFaulted/Set Block'
 * '<S214>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMaxduringStrtStp/UseFullCylinderCapability'
 * '<S215>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMaxduringStrtStp/UseHalfCylinderCapability'
 * '<S216>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMaxduringStrtStp/UseFullCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S217>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMaxduringStrtStp/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S218>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMaxduringStrtStp/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S219>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMaxduringStrtStp/UseHalfCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S220>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMaxduringStrtStp/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S221>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMaxduringStrtStp/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S222>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinDragduringStrtStp/UseFullCylinderCapability'
 * '<S223>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinDragduringStrtStp/UseHalfCylinderCapability'
 * '<S224>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinDragduringStrtStp/UseFullCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S225>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinDragduringStrtStp/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S226>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinDragduringStrtStp/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S227>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinDragduringStrtStp/UseHalfCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S228>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinDragduringStrtStp/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S229>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinDragduringStrtStp/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S230>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinOffduringStrtStp/UseFullCylinderCapability'
 * '<S231>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinOffduringStrtStp/UseHalfCylinderCapability'
 * '<S232>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinOffduringStrtStp/UseFullCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S233>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinOffduringStrtStp/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S234>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinOffduringStrtStp/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S235>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinOffduringStrtStp/UseHalfCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S236>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinOffduringStrtStp/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S237>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinOffduringStrtStp/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S238>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp/UseFullCylinderCapability'
 * '<S239>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp/UseHalfCylinderCapability'
 * '<S240>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp/UseFullCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S241>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S242>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S243>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp/UseHalfCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S244>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S245>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S246>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp_Immed/Determine_Ni'
 * '<S247>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp_Immed/UseFullCylinderCapability'
 * '<S248>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp_Immed/UseHalfCylinderCapability'
 * '<S249>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp_Immed/Determine_Ni/KeETQR_b_EngCapacityMinRunImmed_OvrdEnbl'
 * '<S250>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp_Immed/Determine_Ni/KeETQR_n_EngCapacityMinRunImmed_OvrdVal'
 * '<S251>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp_Immed/UseFullCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S252>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp_Immed/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S253>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp_Immed/UseFullCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S254>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp_Immed/UseHalfCylinderCapability/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S255>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp_Immed/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S256>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Dtrmn_Eng_Capacity/UseCapabltyMinRunduringStrtStp_Immed/UseHalfCylinderCapability/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S257>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Engine_DOD_State/Constant Value1'
 * '<S258>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Engine_DOD_State/Constant Value3'
 * '<S259>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Engine_DOD_State/Constant Value4'
 * '<S260>' : 'ETQR_ac/ETQR_MedTEB/ETQCProcessEngTrqCapacity/Engine_DOD_State/Constant Value7'
 * '<S261>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor'
 * '<S262>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMax_ArrayProcessor'
 * '<S263>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMinOff_ArrayProcessor'
 * '<S264>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMax_ArrayProcessor'
 * '<S265>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMinOff_ArrayProcessor'
 * '<S266>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMax_ArrayProcessor/Determine_Previous_array'
 * '<S267>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMax_ArrayProcessor/First_element_decreases_or_unchanged'
 * '<S268>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMax_ArrayProcessor/First_element_increases'
 * '<S269>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMax_ArrayProcessor/KaETQR_M_EngCapabilityMax_Dflt'
 * '<S270>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMax_ArrayProcessor/KeETQR_b_EnableEngCapabilityMax_Fix'
 * '<S271>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMax_ArrayProcessor/Determine_Previous_array/EdgeRising'
 * '<S272>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMax_ArrayProcessor/Determine_Previous_array/Unit Delay Reset Enabled'
 * '<S273>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMinOff_ArrayProcessor/Determine_Previous_array'
 * '<S274>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMinOff_ArrayProcessor/First_element_decreases'
 * '<S275>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMinOff_ArrayProcessor/First_element_increases_or_unchanged'
 * '<S276>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMinOff_ArrayProcessor/KaETQR_M_EngCapabilityMinOff_Dflt'
 * '<S277>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMinOff_ArrayProcessor/KeETQR_b_EnableEngCapabilityMinOff_Fix'
 * '<S278>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMinOff_ArrayProcessor/Determine_Previous_array/EdgeRising'
 * '<S279>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngCapabilityMinOff_ArrayProcessor/Determine_Previous_array/Unit Delay Reset Enabled'
 * '<S280>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMax_ArrayProcessor/Determine_Previous_array'
 * '<S281>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMax_ArrayProcessor/First_element_decreases_or_unchanged'
 * '<S282>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMax_ArrayProcessor/First_element_increases'
 * '<S283>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMax_ArrayProcessor/KaETQR_M_EngHalfCylCapabilityMax_Dflt'
 * '<S284>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMax_ArrayProcessor/KeETQR_b_EnableEngHalfCylCapabilityMax_Fix'
 * '<S285>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMax_ArrayProcessor/Determine_Previous_array/EdgeRising'
 * '<S286>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMax_ArrayProcessor/Determine_Previous_array/Unit Delay Reset Enabled'
 * '<S287>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMax_ArrayProcessor/First_element_increases/IfThenElse1'
 * '<S288>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMinOff_ArrayProcessor/Determine_Previous_array'
 * '<S289>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMinOff_ArrayProcessor/First_element_decreases'
 * '<S290>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMinOff_ArrayProcessor/First_element_increases_or_unchanged'
 * '<S291>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMinOff_ArrayProcessor/KaETQR_M_EngHalfCylCapabilityMinOff_Dflt'
 * '<S292>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMinOff_ArrayProcessor/KeETQR_b_EnableEngHalfCylCapabilityMinOff_Fix'
 * '<S293>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMinOff_ArrayProcessor/Determine_Previous_array/EdgeRising'
 * '<S294>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMinOff_ArrayProcessor/Determine_Previous_array/Unit Delay Reset Enabled'
 * '<S295>' : 'ETQR_ac/ETQR_MedTEH/Capability_ArraysProcessor/EngHalfCylCapabilityMinOff_ArrayProcessor/First_element_decreases/IfThenElse1'
 * '<S296>' : 'ETQR_ac/ETQR_PwrOn/ETQI_Out_Init'
 * '<S297>' : 'ETQR_ac/ETQR_PwrOn/ETQI_ProcessEngineActualAirflowTorque__Init ETQI Output'
 * '<S298>' : 'ETQR_ac/ETQR_PwrOn/ETQI_ProcessEngineTorqueCapacity__Init ETQI Output'
 * '<S299>' : 'ETQR_ac/ETQR_PwrOn/Init ETQI Output'
 * '<S300>' : 'ETQR_ac/ETQR_PwrOn/Sub_Out_Init'
 * '<S301>' : 'ETQR_ac/ETQR_PwrOn/ETQI_Out_Init/KaETQR_M_EngCapabilityMax_Dflt'
 * '<S302>' : 'ETQR_ac/ETQR_PwrOn/ETQI_Out_Init/KaETQR_M_EngCapabilityMinOff_Dflt'
 * '<S303>' : 'ETQR_ac/ETQR_PwrOn/ETQI_Out_Init/KaETQR_M_EngHalfCylCapabilityMax_Dflt'
 * '<S304>' : 'ETQR_ac/ETQR_PwrOn/ETQI_Out_Init/KaETQR_M_EngHalfCylCapabilityMinOff_Dflt'
 * '<S305>' : 'ETQR_ac/ETQR_PwrOn/ETQI_Out_Init/KeETQR_M_EngCapacityMax_Dflt'
 * '<S306>' : 'ETQR_ac/ETQR_PwrOn/ETQI_Out_Init/KeETQR_M_EngCapacityMinOff_Dflt'
 * '<S307>' : 'ETQR_ac/ETQR_PwrOn/ETQI_Out_Init/KeETQR_M_EngCapacityMinRunImmedNom_Dflt'
 * '<S308>' : 'ETQR_ac/ETQR_PwrOn/ETQI_Out_Init/KeETQR_M_EngCapacityMinRunImmedRed_Dflt'
 * '<S309>' : 'ETQR_ac/ETQR_PwrOn/ETQI_Out_Init/KeETQR_M_EngCapacityMinRun_Dflt'
 * '<S310>' : 'ETQR_ac/ETQR_PwrOn/ETQI_Out_Init/KeETQR_M_MinAirFlowMinSparkCapacity_Dflt'
 * '<S311>' : 'ETQR_ac/ETQR_PwrOn/ETQI_Out_Init/KeETQR_M_MinDragCapacity_Dflt'
 * '<S312>' : 'ETQR_ac/ETQR_PwrOn/ETQI_ProcessEngineTorqueCapacity__Init ETQI Output/KeETQR_M_EngCapacityMax_Dflt'
 * '<S313>' : 'ETQR_ac/ETQR_PwrOn/ETQI_ProcessEngineTorqueCapacity__Init ETQI Output/KeETQR_M_EngCapacityMinOff_Dflt'
 * '<S314>' : 'ETQR_ac/ETQR_PwrOn/ETQI_ProcessEngineTorqueCapacity__Init ETQI Output/KeETQR_M_EngCapacityMinRunImmedNom_Dflt'
 * '<S315>' : 'ETQR_ac/ETQR_PwrOn/ETQI_ProcessEngineTorqueCapacity__Init ETQI Output/KeETQR_M_EngCapacityMinRunImmedRed_Dflt'
 * '<S316>' : 'ETQR_ac/ETQR_PwrOn/ETQI_ProcessEngineTorqueCapacity__Init ETQI Output/KeETQR_M_EngCapacityMinRun_Dflt'
 * '<S317>' : 'ETQR_ac/ETQR_PwrOn/ETQI_ProcessEngineTorqueCapacity__Init ETQI Output/KeETQR_M_EngTrqFSO_CurrAir_Dflt'
 * '<S318>' : 'ETQR_ac/ETQR_PwrOn/ETQI_ProcessEngineTorqueCapacity__Init ETQI Output/KeETQR_M_MinAirFlowMinSparkCapacity_Dflt'
 * '<S319>' : 'ETQR_ac/ETQR_PwrOn/ETQI_ProcessEngineTorqueCapacity__Init ETQI Output/KeETQR_M_MinDragCapacity_Dflt'
 * '<S320>' : 'ETQR_ac/ETQR_PwrOn/ETQI_ProcessEngineTorqueCapacity__Init ETQI Output/KeETQR_b_EngCapacityMinRunImmedRedAvail_Dflt'
 * '<S321>' : 'ETQR_ac/ETQR_PwrOn/Init ETQI Output/KaETQR_M_EngCapabilityMax_Dflt'
 * '<S322>' : 'ETQR_ac/ETQR_PwrOn/Init ETQI Output/KaETQR_M_EngCapabilityMinOff_Dflt'
 * '<S323>' : 'ETQR_ac/ETQR_PwrOn/Init ETQI Output/KaETQR_M_EngCapabilityMinRun_Dflt'
 * '<S324>' : 'ETQR_ac/ETQR_PwrOn/Init ETQI Output/KaETQR_M_EngHalfCylCapabilityMax_Dflt'
 * '<S325>' : 'ETQR_ac/ETQR_PwrOn/Init ETQI Output/KaETQR_M_EngHalfCylCapabilityMinOff_Dflt'
 * '<S326>' : 'ETQR_ac/ETQR_PwrOn/Init ETQI Output/KaETQR_M_EngHalfCylCapabilityMinRun_Dflt'
 * '<S327>' : 'ETQR_ac/ETQR_PwrOn/Init ETQI Output/KaETQR_M_HalfCylMinDragCapability_Dflt'
 * '<S328>' : 'ETQR_ac/ETQR_PwrOn/Init ETQI Output/KaETQR_M_MinDragCapability_Dflt'
 * '<S329>' : 'ETQR_ac/ETQR_PwrOn/Init ETQI Output/KaETQR_n_EngCapability_Dflt'
 * '<S330>' : 'ETQR_ac/ETQR_PwrOn/Init ETQI Output/KaETQR_n_EngHalfCylCapability_Dflt'
 * '<S331>' : 'ETQR_ac/ETQR_PwrOn/Init ETQI Output/KeETQR_M_PnLimitMaxEngTrqCap_Dflt'
 * '<S332>' : 'ETQR_ac/FsftETQR_M_EngCapabilityMax/FsftETQR_M_EngCapabilityMaxChrt'
 * '<S333>' : 'ETQR_ac/FsftETQR_M_EngCapabilityMinOff/FsftETQR_M_EngCapabilityMinOffChrt'
 * '<S334>' : 'ETQR_ac/FsftETQR_M_EngCapabilityMinRun/FsftETQR_M_EngCapabilityMinRunChrt'
 * '<S335>' : 'ETQR_ac/FsftETQR_M_EngCapacityMax/FsftETQR_M_EngCapacityMaxChrt'
 * '<S336>' : 'ETQR_ac/FsftETQR_M_EngCapacityMinOff/FsftETQR_M_EngCapacityMinOffChrt'
 * '<S337>' : 'ETQR_ac/FsftETQR_M_EngCapacityMinRun/FsftETQR_M_EngCapacityMinRunChrt'
 * '<S338>' : 'ETQR_ac/FsftETQR_M_EngCapacityMinRunImmedNom/FsftETQR_M_EngCapacityMinRunImmedNomChrt'
 * '<S339>' : 'ETQR_ac/FsftETQR_M_EngCapacityMinRunImmedRed/FsftETQR_M_EngCapacityMinRunImmedRedChrt'
 * '<S340>' : 'ETQR_ac/FsftETQR_M_EngTorqACC4Capability/FsftETQR_M_EngTorqACC4CapabilityChrt'
 * '<S341>' : 'ETQR_ac/FsftETQR_M_EngTorque/FsftETQR_M_EngTorqueChrt'
 * '<S342>' : 'ETQR_ac/FsftETQR_M_EngTrqActual/FsftETQR_M_EngTrqActualChrt'
 * '<S343>' : 'ETQR_ac/FsftETQR_M_EngTrqAirflow/FsftETQR_M_EngTrqAirflowChrt'
 * '<S344>' : 'ETQR_ac/FsftETQR_M_EngTrqFSO_CurrAir/FsftETQR_M_EngTrqFSO_CurrAirChrt'
 * '<S345>' : 'ETQR_ac/FsftETQR_M_EngTrqReserveReq/FsftETQR_M_EngTrqReserveReqChrt'
 * '<S346>' : 'ETQR_ac/FsftETQR_M_EngTrqStaticSEM/FsftETQR_M_EngTrqStaticSEMChrt'
 * '<S347>' : 'ETQR_ac/FsftETQR_M_MinAirFlowMinSparkCapacity/FsftETQR_M_MinAirFlowMinSparkCapacityChrt'
 * '<S348>' : 'ETQR_ac/FsftETQR_M_MinDragCapability/FsftETQR_M_MinDragCapabilityChrt'
 * '<S349>' : 'ETQR_ac/FsftETQR_M_MinDragCapacity/FsftETQR_M_MinDragCapacityChrt'
 * '<S350>' : 'ETQR_ac/FsftETQR_M_PnLimitMaxEngTrqCap/FsftETQR_M_PnLimitMaxEngTrqCapChrt'
 * '<S351>' : 'ETQR_ac/FsftETQR_b_EngCapacityMinRunImmedRedAvail/FsftETQR_b_EngCapacityMinRunImmedRedAvailChrt'
 * '<S352>' : 'ETQR_ac/FsftETQR_n_EngCapability/FsftETQR_n_EngCapabilityChrt'
 * '<S353>' : 'ETQR_ac/PokeETQR_M_EngCapabilityMax/PokeETQR_M_EngCapabilityMaxChrt'
 * '<S354>' : 'ETQR_ac/PokeETQR_M_EngCapabilityMinOff/PokeETQR_M_EngCapabilityMinOffChrt'
 * '<S355>' : 'ETQR_ac/PokeETQR_M_EngCapabilityMinRun/PokeETQR_M_EngCapabilityMinRunChrt'
 * '<S356>' : 'ETQR_ac/PokeETQR_M_EngCapacityMax/PokeETQR_M_EngCapacityMaxChrt'
 * '<S357>' : 'ETQR_ac/PokeETQR_M_EngCapacityMinOff/PokeETQR_M_EngCapacityMinOffChrt'
 * '<S358>' : 'ETQR_ac/PokeETQR_M_EngCapacityMinRun/PokeETQR_M_EngCapacityMinRunChrt'
 * '<S359>' : 'ETQR_ac/PokeETQR_M_EngCapacityMinRunImmedNom/PokeETQR_M_EngCapacityMinRunImmedNomChrt'
 * '<S360>' : 'ETQR_ac/PokeETQR_M_EngCapacityMinRunImmedRed/PokeETQR_M_EngCapacityMinRunImmedRedChrt'
 * '<S361>' : 'ETQR_ac/PokeETQR_M_EngTorqACC4Capability/PokeETQR_M_EngTorqACC4CapabilityChrt'
 * '<S362>' : 'ETQR_ac/PokeETQR_M_EngTorque/PokeETQR_M_EngTorqueChrt'
 * '<S363>' : 'ETQR_ac/PokeETQR_M_EngTrqActual/PokeETQR_M_EngTrqActualChrt'
 * '<S364>' : 'ETQR_ac/PokeETQR_M_EngTrqAirflow/PokeETQR_M_EngTrqAirflowChrt'
 * '<S365>' : 'ETQR_ac/PokeETQR_M_EngTrqFSO_CurrAir/PokeETQR_M_EngTrqFSO_CurrAirChrt'
 * '<S366>' : 'ETQR_ac/PokeETQR_M_EngTrqReserveReq/PokeETQR_M_EngTrqReserveReqChrt'
 * '<S367>' : 'ETQR_ac/PokeETQR_M_EngTrqStaticSEM/PokeETQR_M_EngTrqStaticSEMChrt'
 * '<S368>' : 'ETQR_ac/PokeETQR_M_MinAirFlowMinSparkCapacity/PokeETQR_M_MinAirFlowMinSparkCapacityChrt'
 * '<S369>' : 'ETQR_ac/PokeETQR_M_MinDragCapability/PokeETQR_M_MinDragCapabilityChrt'
 * '<S370>' : 'ETQR_ac/PokeETQR_M_MinDragCapacity/PokeETQR_M_MinDragCapacityChrt'
 * '<S371>' : 'ETQR_ac/PokeETQR_M_PnLimitMaxEngTrqCap/PokeETQR_M_PnLimitMaxEngTrqCapChrt'
 * '<S372>' : 'ETQR_ac/PokeETQR_b_EngCapacityMinRunImmedRedAvail/PokeETQR_b_EngCapacityMinRunImmedRedAvailChrt'
 * '<S373>' : 'ETQR_ac/PokeETQR_n_EngCapability/PokeETQR_n_EngCapabilityChrt'
 */
#endif                                 /* RTW_HEADER_ETQR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
