/*
 * File: CTRR_ac.h
 *
 * Code generated for Simulink model 'CTRR_ac'.
 *
 * Model version                  : 9.126
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:21:56 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CTRR_ac_h_
#define RTW_HEADER_CTRR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef CTRR_ac_COMMON_INCLUDES_
#define CTRR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CTRR.h"
#endif                                 /* CTRR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_CTRR_ac_T
{

#if Rte_SysCon_Variant_CTRR_4

    float32 OutportBufferForVeCTRR_P_CabCoo;
                                   /* '<S263>/KeCTRR_P_CabCoolPwrNeed_NFdial' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    float32 OutportBufferForVeCTRR_dT_HtrCo;
                                   /* '<S263>/KeCTRR_dT_HtrCorTmp_Err_NFdial' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    float32 OutportBufferForVeCTRR_P_ErrBas;
                                  /* '<S263>/KeCTRR_P_ErrBasedHeatPwr_NFdial' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    float32 OutportBufferForVeCTRR_T_HtrCor;
                                     /* '<S263>/KeCTRR_T_HCCTISTgtArb_NFdial' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    float32 OutportBufferForVeCTRR_P_RearHe;
                                 /* '<S263>/KeCTRR_P_RearHeaterPwrReq_NFdial' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    float32 OutportBufferForECHInlet_HCCTIS;/* '<S263>/KeCTRR_dT_HeatPumpErr_NF' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    float32 OutportBufferForVeCTRR_P_HeatPm;
                                   /* '<S263>/KeCTRR_P_HeatPmpPwrNeed_NFdial' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 Gain_i;                    /* '<S200>/Gain' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 Gain_m;                    /* '<S201>/Gain' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 TmpSignalConversionAtTmpVM_FcnC;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 TmpSignalConversionAtTmpVM_Fc_o;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 TmpSignalConversionAtTmpVM_Fc_h;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 TmpSignalConversionAtTmpVM_Fc_j;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 TmpSignalConversionAtTmpVM_Fc_m;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 TmpSignalConversionAtTmpVM_Fc_f;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 TmpSignalConversionAtTmpVM_F_ff;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 TmpSignalConversionAtTmpVM_Fc_l;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 TmpSignalConversionAtTmpVM_Fc_k;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if (!(!Rte_SysCon_Variant_CTRR_5) && Rte_SysCon_Variant_CTRR_3) || (!Rte_SysCon_Variant_CTRR_5 && Rte_SysCon_Variant_CTRR_3)

    float32 VM_Conditional_Signal_TmpVM_Fcn;

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 TmpSignalConversionAtTmpVM_F_k5;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 VM_Conditional_Signal_TmpVM_F_h;

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if (!(!Rte_SysCon_Variant_CTRR_5) && Rte_SysCon_Variant_CTRR_3) || (!Rte_SysCon_Variant_CTRR_5 && Rte_SysCon_Variant_CTRR_3)

    float32 VM_Conditional_Signal_TmpVM_F_k;

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 TmpSignalConversionAtTmpVM_F_m1;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    uint8 TmpSignalConversionAtTmpVM_Fc_n;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    uint8 TmpSignalConversionAtTmpVM_Fc_e;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    uint8 TmpSignalConversionAtTmpVM_Fc_a;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    uint8 TmpSignalConversionAtTmpVM_F_fj;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    uint8 TmpSignalConversionAtTmpVM_F_lp;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    boolean OutportBufferForVeCTRR_b_HVAC_H;
                                     /* '<S263>/KeCTRR_b_HVAC_HeatReq_NFdial' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    boolean OutportBufferForVeCTRR_b_HardCa;
                                  /* '<S263>/KeCTRR_b_HardCabHeat_Req_NFdial' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    boolean OutportBufferForVeCTRR_b_CabPri;
                                  /* '<S263>/KeCTRR_b_CabPriorityHigh_NFdial' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    boolean OutportBufferForVeCTRR_b_TurnOf;
                          /* '<S263>/KeCTRR_b_TurnOffEng_CabComfAchvd_NFdial' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    boolean OutportBufferForVeCTRR_b_TrueCa;
                                 /* '<S263>/KeCTRR_b_HVAC_TrueHeatReq_NFdial' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    boolean OutportBufferForVeCTRR_b_RearHe;
                                    /* '<S263>/KeCTRR_b_RearHeaterReq_NFdial' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    boolean OutportBufferForVeCTRR_b_MinFlo;
                                    /* '<S263>/KeCTRR_b_MinFlowCabHeatReq_NF' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_4

    boolean OutportBufferForVeCTRR_b_Ambien;
                                     /* '<S263>/KeCTRR_b_AmbientChillCond_Nf' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean VariantMerge_For_Variant_Source;

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean TmpSignalConversionAtTmpVM_F_ne;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean TmpSignalConversionAtTmpVM_F_n0;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean TmpSignalConversionAtTmpVM_Fc_p;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean TmpSignalConversionAtTmpVM_F_fq;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean TmpSignalConversionAtTmpVM_Fc_b;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean TmpSignalConversionAtTmpVM_F_hf;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean TmpSignalConversionAtTmpVM_F_la;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean TmpSignalConversionAtTmpVM_F_bc;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean VM_Conditional_Signal_TmpVM_F_f;

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean TmpSignalConversionAtTmpVM_F_n5;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean TmpSignalConversionAtTmpVM_F_m5;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean TmpSignalConversionAtTmpVM_F_hl;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    TeTHMR_e_CabHeatThrmlMode TmpSignalConversionAtTmpVM_F_a3;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    TeSSDR_e_KeySts TmpSignalConversionAtTmpVM_F_hd;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    TeRCVR_e_Valve_Stuck_Status TmpSignalConversionAtTmpVM_Fc_i;
                         /* '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */

#define B_CTRR_AC_T_VARIANT_EXISTS
#endif

#ifndef B_CTRR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
B_CTRR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CTRR_ac_T
{

#if Rte_SysCon_Variant_CTRR_3

    float32 UnitDelay1_DSTATE;         /* '<S64>/UnitDelay1' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 UnitDelay2_DSTATE;         /* '<S64>/UnitDelay2' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 UnitDelay1_DSTATE_k;       /* '<S76>/UnitDelay1' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 UnitDelay_DSTATE;          /* '<S76>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 UnitDelay2_DSTATE_a;       /* '<S76>/UnitDelay2' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 UnitDelay_DSTATE_i;        /* '<S202>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 UnitDelay_DSTATE_o;        /* '<S144>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 UnitDelay_DSTATE_f;        /* '<S118>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 UnitDelay_DSTATE_g;        /* '<S103>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 UnitDelay_DSTATE_a;        /* '<S88>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    uint16 UnitDelay_DSTATE_g5;        /* '<S177>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_l;        /* '<S60>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_lr;       /* '<S65>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_m;        /* '<S135>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_1 && Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_n;        /* '<S210>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_nf;       /* '<S203>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_f0;       /* '<S206>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_g0;       /* '<S178>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_ik;       /* '<S146>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_or;       /* '<S143>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_fk;       /* '<S142>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_j;        /* '<S141>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_il;       /* '<S130>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_lp;       /* '<S129>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_am;       /* '<S128>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_ge;       /* '<S117>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_h;        /* '<S114>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_ad;       /* '<S113>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_p;        /* '<S104>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_c;        /* '<S112>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_b;        /* '<S95>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_j4;       /* '<S90>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_je;       /* '<S89>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_bx;       /* '<S87>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_ay;       /* '<S83>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_e;        /* '<S82>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_ci;       /* '<S81>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean UnitDelay_DSTATE_d;        /* '<S78>/UnitDelay' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    sint8 If_ActiveSubsystem;          /* '<S39>/If' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    uint8 StatusByte_CT3_SnsrCktHi;   /* '<Root>/DS_StatusByte_CT3_SnsrCktHi' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    uint8 StatusByte_CT3_SnsrCktLo;   /* '<Root>/DS_StatusByte_CT3_SnsrCktLo' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    uint8 StatusByte_CT3_SnsrPerf;     /* '<Root>/DS_StatusByte_CT3_SnsrPerf' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    uint8 StatusByte_LostCommCoolHtrA;
                                   /* '<Root>/DS_StatusByte_LostCommCoolHtrA' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CTRR_3

    uint8 StatusByte_LostCommCoolPmpA;
                                   /* '<Root>/DS_StatusByte_LostCommCoolPmpA' */

#define DW_CTRR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_CTRR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_CTRR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_CTRR_3

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S199>/Vector'
     *   '<S93>/Vector'
     *   '<S94>/Vector'
     *   '<S111>/Vector'
     */
    uint32 pooled5[2];

#define CONSTP_CTRR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTP_CTRR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstP_CTRR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CTRR
#include "MemMap.h"

extern VAR(B_CTRR_ac_T, CTRR_VAR_INIT) CTRR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CTRR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CTRR
#include "MemMap.h"

extern VAR(DW_CTRR_ac_T, CTRR_VAR_INIT) CTRR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CTRR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CTRR
#include "MemMap.h"

extern CONST(ConstP_CTRR_ac_T, CTRR_VAR_INIT) CTRR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_CTRR
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
 * '<Root>' : 'CTRR_ac'
 * '<S1>'   : 'CTRR_ac/CTRR_MedTEH'
 * '<S2>'   : 'CTRR_ac/CTRR_PwrOn'
 * '<S3>'   : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC'
 * '<S4>'   : 'CTRR_ac/CTRR_MedTEH/Control_100ms'
 * '<S5>'   : 'CTRR_ac/CTRR_MedTEH/Overrides'
 * '<S6>'   : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms'
 * '<S7>'   : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/SetBlock1'
 * '<S8>'   : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Set_Block'
 * '<S9>'   : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_P_CabCoolPwrNeed_D'
 * '<S10>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_P_ErrorBasedPwr_D'
 * '<S11>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_P_HeatPmpPwrNeed_D'
 * '<S12>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_P_RearHeaterPwrReq_D'
 * '<S13>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_T_HCCTISTgtArb_D'
 * '<S14>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_AmbientChillCond_D'
 * '<S15>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_AmbientChillCond_SD'
 * '<S16>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_CabCoolPwrNeed_SD'
 * '<S17>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_CabPriorityHigh_D'
 * '<S18>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_CabPriorityHigh_SD'
 * '<S19>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_ECHInlet_HCCTISTgt_Err_SD'
 * '<S20>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_ErrorBasedPwr_SD'
 * '<S21>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_HCCTISTgtArb_SD'
 * '<S22>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_HVAC_HeatReq_D'
 * '<S23>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_HVAC_HeatReq_SD'
 * '<S24>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_HardCabHeat_Req_D'
 * '<S25>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_HardCabHeat_Req_SD'
 * '<S26>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_HeatPmpPwrNeed_SD'
 * '<S27>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_MinFlowCabHeatReq_D'
 * '<S28>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_MinFlowCabHeatReq_SD'
 * '<S29>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_RearHeaterPwrReq_SD'
 * '<S30>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_RearHeaterReq_D'
 * '<S31>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_RearHeaterReq_SD'
 * '<S32>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_TrueCabReq_D'
 * '<S33>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_b_TrueCabReq_SD'
 * '<S34>'  : 'CTRR_ac/CTRR_MedTEH/CTRR_FUNC/Overrides_100ms/KeCTRR_dT_ECHInlet_HCCTISTgt_Err_D'
 * '<S35>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/CabCoolPwr'
 * '<S36>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/DocBlock'
 * '<S37>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/ECH_HCCTIS_select'
 * '<S38>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater'
 * '<S39>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd'
 * '<S40>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/RearHeater'
 * '<S41>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/CabCoolPwr/IfThenElse'
 * '<S42>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/CabCoolPwr/IfThenElse1'
 * '<S43>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/CabCoolPwr/KeCTRR_P_CabCool_Pwr_dflt_D'
 * '<S44>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/CabCoolPwr/KeCTRR_b_CabCoolPwr_Slct'
 * '<S45>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/CabCoolPwr/KeCTRR_b_CabCool_Pwr_dflt_SD'
 * '<S46>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/CabCoolPwr/KtCTRR_P_CabCoolPwrLookup'
 * '<S47>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/CabCoolPwr/Positive'
 * '<S48>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/CabCoolPwr/SetBlock'
 * '<S49>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/ECH_HCCTIS_select/EvtInfo_CT3_SnsrCktHi_FaultActive_3'
 * '<S50>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/ECH_HCCTIS_select/EvtInfo_CT3_SnsrCktLo_FaultActive_2'
 * '<S51>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/ECH_HCCTIS_select/EvtInfo_CT3_SnsrPerf_FaultActive_1'
 * '<S52>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/ECH_HCCTIS_select/IfThenElse'
 * '<S53>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/ECH_HCCTIS_select/KeCTRR_b_Enbl_SnsrCktHi'
 * '<S54>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/ECH_HCCTIS_select/KeCTRR_b_Enbl_SnsrCktLo'
 * '<S55>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/ECH_HCCTIS_select/KeCTRR_b_Enbl_SnsrPerf'
 * '<S56>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req'
 * '<S57>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need'
 * '<S58>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/HCCTISTgt_ECHIn_Err'
 * '<S59>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AirHtrPwr_HeatReq'
 * '<S60>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwrCabHeatAllow'
 * '<S61>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwr_HeatAlwd'
 * '<S62>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/Ambient_HeatReq'
 * '<S63>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/Blwr_CabHeatReq'
 * '<S64>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/EngTurnedOffBlwr'
 * '<S65>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/HardCabHeatReq'
 * '<S66>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/HardCabHeat_ReqArb'
 * '<S67>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/HtrCor_CabHeatReq'
 * '<S68>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/KeCTRR_b_AHPEnbReqApp_ECH'
 * '<S69>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/KeCTRR_b_AHPEnblReqApp_AirPTC'
 * '<S70>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/KeCTRR_b_AHP_Enb'
 * '<S71>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/KeCTRR_b_AmbBlwr_CabRizEdg'
 * '<S72>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/KeCTRR_b_OV_Enbl_AmbTmpHeatRq'
 * '<S73>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/KeCTRR_t_AmbBlwrCab_HeatAlwdTim'
 * '<S74>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/KeCTRR_t_EngReq_HarshCabRq'
 * '<S75>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/MinFlow_CabHeatReq'
 * '<S76>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq'
 * '<S77>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/TrueCabHeatReq'
 * '<S78>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AirHtrPwr_HeatReq/Hysteresis1'
 * '<S79>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AirHtrPwr_HeatReq/KeCTRR_Pct_CabHtReq_AirHtrPwrThLSP'
 * '<S80>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AirHtrPwr_HeatReq/KeCTRR_Pct_CabHtReq_AirHtrPwrThRSP'
 * '<S81>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwrCabHeatAllow/EdgeFalling'
 * '<S82>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwrCabHeatAllow/EdgeRising'
 * '<S83>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwrCabHeatAllow/EdgeRising2'
 * '<S84>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwrCabHeatAllow/KeCTRR_b_AmbBlwrLatch_RST_App'
 * '<S85>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwrCabHeatAllow/KeCTRR_b_AmbBlwr_HCCT_ErDis'
 * '<S86>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwrCabHeatAllow/KeCTRR_dT_AmbBlwr_HCCT_Er'
 * '<S87>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwrCabHeatAllow/SignalLatchOnWithReset'
 * '<S88>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwrCabHeatAllow/TimerRetriggerResetEnabled1'
 * '<S89>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwr_HeatAlwd/EdgeRising'
 * '<S90>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwr_HeatAlwd/EdgeRising1'
 * '<S91>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwr_HeatAlwd/KeCTRR_b_FrtAmbBlwr_CabEnb'
 * '<S92>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwr_HeatAlwd/KeCTRR_b_RrAmbBlwr_CabEnb'
 * '<S93>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwr_HeatAlwd/KtCTRR_n_FtBlwrCab_HeatngEngAllwd'
 * '<S94>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/AmbBlwr_HeatAlwd/KtCTRR_n_RrBlwrCab_HeatngEngAllwd'
 * '<S95>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/Ambient_HeatReq/Hysteresis'
 * '<S96>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/Ambient_HeatReq/KeCTRR_dT_CabHeatReq_TempHysHigh'
 * '<S97>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/Ambient_HeatReq/KeCTRR_dT_CabHeatReq_TempHysLow'
 * '<S98>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/Blwr_CabHeatReq/KeCTRR_Pct_FrtBlwrCmd_Min'
 * '<S99>'  : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/Blwr_CabHeatReq/KeCTRR_Pct_RrBlwrCmd_Min'
 * '<S100>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/Blwr_CabHeatReq/KeCTRR_T_CabHeatReq_MildAmb'
 * '<S101>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/Blwr_CabHeatReq/KeCTRR_b_FrtBlwrMin_FlowEnb'
 * '<S102>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/Blwr_CabHeatReq/KeCTRR_b_RrBlwrMin_FlowEnb'
 * '<S103>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/EngTurnedOffBlwr/CountDownResetTriggerEnabled1'
 * '<S104>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/EngTurnedOffBlwr/EdgeRising1'
 * '<S105>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/EngTurnedOffBlwr/KeCTRR_Pct_FrtBlwrRamp_Dwn'
 * '<S106>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/EngTurnedOffBlwr/KeCTRR_Pct_RrtBlwrRamp_Dwn'
 * '<S107>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/EngTurnedOffBlwr/KeCTRR_b_CabCmfrtAchvd_TimrDsbl'
 * '<S108>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/EngTurnedOffBlwr/KeCTRR_b_FrtBlwrRamp_DwnSelTevap'
 * '<S109>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/EngTurnedOffBlwr/KeCTRR_dT_HCCT_DltaStdyStat_Er'
 * '<S110>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/EngTurnedOffBlwr/KeCTRR_t_DelayEngTurn_Off_Blwr'
 * '<S111>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/EngTurnedOffBlwr/KtCTRR_n_FtBlwrCab_CmfrtAchv'
 * '<S112>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/EngTurnedOffBlwr/CountDownResetTriggerEnabled1/EdgeRising'
 * '<S113>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/HardCabHeatReq/EdgeFalling'
 * '<S114>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/HardCabHeatReq/EdgeRising1'
 * '<S115>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/HardCabHeatReq/KeCTRR_b_HardCab_HCCT_Er'
 * '<S116>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/HardCabHeatReq/KeCTRR_dT_HarshReq_HtrCorTemp_Er'
 * '<S117>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/HardCabHeatReq/SignalLatchOnWithReset1'
 * '<S118>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/HardCabHeatReq/TimerRetriggerResetEnabled'
 * '<S119>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/HardCabHeat_ReqArb/KeCTRR_b_AmbBlwrCab_HeatAlwdEnb'
 * '<S120>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/HardCabHeat_ReqArb/KeCTRR_b_HardCabHeat_ReqDial'
 * '<S121>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/HardCabHeat_ReqArb/KeCTRR_b_HardCabHeat_ReqSlct'
 * '<S122>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/HtrCor_CabHeatReq/KeCTRR_dT_StopCabinCond_TempThres'
 * '<S123>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/MinFlow_CabHeatReq/KeCTRR_b_AHP_Enb'
 * '<S124>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeCTRR_Pct_FrtBlwrCmd_Incrs'
 * '<S125>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeCTRR_Pct_RrBlwrCmd_Incrs'
 * '<S126>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeCTRR_dT_HtrCorTmp_TgtIncrs'
 * '<S127>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk'
 * '<S128>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/EdgeRising1'
 * '<S129>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/EdgeRising2'
 * '<S130>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/EdgeRising3'
 * '<S131>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/EnumeratedValue'
 * '<S132>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/EnumeratedValue1'
 * '<S133>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/EnumeratedValue2'
 * '<S134>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/EnumeratedValue3'
 * '<S135>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/HrshCabRqMsk'
 * '<S136>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/KeCTRR_b_HrshCabReq_AccOn'
 * '<S137>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/KeCTRR_b_HrshCabReq_CrankOn'
 * '<S138>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/KeCTRR_b_HrshCabReq_KeyOffEnb'
 * '<S139>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/KeCTRR_b_HrshCabReq_RunOn'
 * '<S140>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/KeCTRR_t_HrshCabRq_KeyMaskTim'
 * '<S141>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/HrshCabRqMsk/EdgeFalling'
 * '<S142>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/HrshCabRqMsk/EdgeRising1'
 * '<S143>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/HrshCabRqMsk/SignalLatchOnWithReset1'
 * '<S144>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/ProcessHarshRq/KeyMsk/HrshCabRqMsk/TimerRetriggerResetEnabled'
 * '<S145>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/TrueCabHeatReq/HeatSelect'
 * '<S146>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/TrueCabHeatReq/Hysteresis'
 * '<S147>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/TrueCabHeatReq/KeCTRR_b_HeatEnblReqApp_AirPTC'
 * '<S148>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/TrueCabHeatReq/KeCTRR_b_Heat_AHP_Enb'
 * '<S149>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/TrueCabHeatReq/HeatSelect/Enumerated_Constant'
 * '<S150>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/TrueCabHeatReq/HeatSelect/HeatEnbl'
 * '<S151>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/TrueCabHeatReq/HeatSelect/HeatingEnbl_HPMode'
 * '<S152>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/TrueCabHeatReq/HeatSelect/HeatEnbl/KeCTRR_dT_HCCTISErr_HeatDsbl'
 * '<S153>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/TrueCabHeatReq/HeatSelect/HeatEnbl/KeCTRR_dT_HCCTISErr_HeatEnbl'
 * '<S154>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/TrueCabHeatReq/HeatSelect/HeatingEnbl_HPMode/KeCTRR_dT_HCCTISErr_HeatDsbl_HP'
 * '<S155>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Heat_Req/TrueCabHeatReq/HeatSelect/HeatingEnbl_HPMode/KeCTRR_dT_HCCTISErr_HeatEnbl_HP'
 * '<S156>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/CabPriority_High_Set'
 * '<S157>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/Error_Based_Power_Calc'
 * '<S158>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/HeatPmpPwrCalc'
 * '<S159>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/HtrCorTmp_Err_Calc'
 * '<S160>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/CabPriority_High_Set/KeCTRR_dT_CabHtgPriority_MaxTmpErr'
 * '<S161>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/Error_Based_Power_Calc/KtCTRR_P_CabinPwrNeed_LookUp'
 * '<S162>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/HeatPmpPwrCalc/IfThenElse1'
 * '<S163>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/HeatPmpPwrCalc/IfThenElse3'
 * '<S164>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/HeatPmpPwrCalc/KeCTRR_P_DeIcingPower'
 * '<S165>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/HeatPmpPwrCalc/KeCTRR_P_HeatPmpPwr_dflt_D'
 * '<S166>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/HeatPmpPwrCalc/KeCTRR_b_Enbl_DeIcingPwr'
 * '<S167>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/HeatPmpPwrCalc/KeCTRR_b_HeatPmpPwr_dflt_SD'
 * '<S168>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/HeatPmpPwrCalc/KtCTRR_P_HeatPmpPwr'
 * '<S169>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/HeatPmpPwrCalc/KtCTRR_P_Min_HeatPmpPwr'
 * '<S170>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/Cabin_Pwr_Need/HeatPmpPwrCalc/Positive'
 * '<S171>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/HCCTISTgt_ECHIn_Err/IfActionSubsystem1'
 * '<S172>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/HCCTISTgt_ECHIn_Err/IfActionSubsystem2'
 * '<S173>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/HCCTISTgt_ECHIn_Err/IfActionSubsystem3'
 * '<S174>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/HCCTISTgt_ECHIn_Err/IfActionSubsystem1/KeCTRR_b_Use_ECH_In_Temp'
 * '<S175>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/HCCTISTgt_ECHIn_Err/IfActionSubsystem2/KeCTRR_b_Use_ECH_In_Temp'
 * '<S176>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/FrontHeater/HCCTISTgt_ECHIn_Err/IfActionSubsystem3/KeCTRR_dT_HeatPumpErrDefault'
 * '<S177>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/CountDownResetEnabled'
 * '<S178>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/EdgeRising2'
 * '<S179>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/Enumerated Constant'
 * '<S180>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/Enumerated Constant1'
 * '<S181>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/EvtInfo_LostCommCoolHtrA_FaultActive_5'
 * '<S182>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/EvtInfo_LostCommCoolPmpA_FaultActive_4'
 * '<S183>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/IfActionSubsystem6'
 * '<S184>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/KeCTRR_Cnt_HCCTISEnbl_Delay'
 * '<S185>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/KeCTRR_T_OV_EPD_AmbTemp'
 * '<S186>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/KeCTRR_T_OV_EPD_OvrdHCCTISTrgt'
 * '<S187>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/KeCTRR_T_RA_HCCTISTrgtMax'
 * '<S188>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/KeCTRR_T_RA_HCCTISTrgtMin'
 * '<S189>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/KeCTRR_b_Enbl_ECHPerf_Flt_RA'
 * '<S190>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/KeCTRR_b_Enbl_ECH_LOC_Flt_RA'
 * '<S191>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/KeCTRR_b_Enbl_HTAPPerf_Flt_RA'
 * '<S192>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/KeCTRR_b_Enbl_HTAP_LOC_Flt_RA'
 * '<S193>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/KeCTRR_b_Enbl_HTLBVStck_Flt_RA'
 * '<S194>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/KeCTRR_b_HtrCorTmpInTgtSel'
 * '<S195>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/KeCTRR_b_OV_EPD_DsblAmbTemp'
 * '<S196>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/Limiter'
 * '<S197>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/Subsystem2'
 * '<S198>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/Subsystem3'
 * '<S199>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/IfActionSubsystem6/KtCTRR_K_CabHeatTransient'
 * '<S200>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/IfActionSubsystem6/SetBlock1'
 * '<S201>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/IfActionSubsystem6/SetBlock2'
 * '<S202>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/Subsystem2/CounterResetTriggerEnabled'
 * '<S203>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/Subsystem2/EdgeBi'
 * '<S204>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/Subsystem2/KeCTRR_T_HCCTIS_InitConst'
 * '<S205>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/Subsystem2/SetBlock1'
 * '<S206>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/Subsystem2/CounterResetTriggerEnabled/EdgeRising'
 * '<S207>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/OV_Or_RA_TgtOvrd/Subsystem3/SetBlock2'
 * '<S208>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/RearHeater/Cabin_Heat_Req_Rear'
 * '<S209>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/RearHeater/Cabin_Pwr_Need_Rear'
 * '<S210>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/RearHeater/Cabin_Heat_Req_Rear/Hysteresis'
 * '<S211>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/RearHeater/Cabin_Heat_Req_Rear/KeCTRR_Pct_RearCabHtReq_AirHtrPwrThLSP'
 * '<S212>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/RearHeater/Cabin_Heat_Req_Rear/KeCTRR_Pct_RearCabHtReq_AirHtrPwrThRSP'
 * '<S213>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/RearHeater/Cabin_Heat_Req_Rear/KeCTRR_Pct_RrBlwrCmd_Min'
 * '<S214>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/RearHeater/Cabin_Heat_Req_Rear/SetBlock1'
 * '<S215>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/RearHeater/Cabin_Pwr_Need_Rear/KeCTRR_P_RearCabPwrNeed_Min'
 * '<S216>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/RearHeater/Cabin_Pwr_Need_Rear/KtCTRR_P_RearCabAirHtrPwrTgt'
 * '<S217>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/RearHeater/Cabin_Pwr_Need_Rear/KtCTRR_P_RearHeaterMaxPwr'
 * '<S218>' : 'CTRR_ac/CTRR_MedTEH/Control_100ms/RearHeater/Cabin_Pwr_Need_Rear/Limiter'
 * '<S219>' : 'CTRR_ac/CTRR_MedTEH/Overrides/AC_Comp'
 * '<S220>' : 'CTRR_ac/CTRR_MedTEH/Overrides/Battery'
 * '<S221>' : 'CTRR_ac/CTRR_MedTEH/Overrides/PerWup'
 * '<S222>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous'
 * '<S223>' : 'CTRR_ac/CTRR_MedTEH/Overrides/AC_Comp/KeCTRR_Pct_FrtBlwrCmd_D'
 * '<S224>' : 'CTRR_ac/CTRR_MedTEH/Overrides/AC_Comp/KeCTRR_Pct_RrBlwrCmd_D'
 * '<S225>' : 'CTRR_ac/CTRR_MedTEH/Overrides/AC_Comp/KeCTRR_T_FtEvapTmp_D'
 * '<S226>' : 'CTRR_ac/CTRR_MedTEH/Overrides/AC_Comp/KeCTRR_T_FtEvapTmp_Tgt_D'
 * '<S227>' : 'CTRR_ac/CTRR_MedTEH/Overrides/AC_Comp/KeCTRR_T_HtrCorTmp_InTgt_D'
 * '<S228>' : 'CTRR_ac/CTRR_MedTEH/Overrides/AC_Comp/KeCTRR_b_AC_CompReq_D'
 * '<S229>' : 'CTRR_ac/CTRR_MedTEH/Overrides/AC_Comp/KeCTRR_b_AC_CompReq_SD'
 * '<S230>' : 'CTRR_ac/CTRR_MedTEH/Overrides/AC_Comp/KeCTRR_b_FrtBlwrCmd_SD'
 * '<S231>' : 'CTRR_ac/CTRR_MedTEH/Overrides/AC_Comp/KeCTRR_b_FtEvapTmp_SD'
 * '<S232>' : 'CTRR_ac/CTRR_MedTEH/Overrides/AC_Comp/KeCTRR_b_FtEvapTmp_Tgt_SD'
 * '<S233>' : 'CTRR_ac/CTRR_MedTEH/Overrides/AC_Comp/KeCTRR_b_HtrCorTmp_InTgt_SD'
 * '<S234>' : 'CTRR_ac/CTRR_MedTEH/Overrides/AC_Comp/KeCTRR_b_RrBlwrCmd_SD'
 * '<S235>' : 'CTRR_ac/CTRR_MedTEH/Overrides/Battery/KeCTRR_T_BTISBTIS2Max_D'
 * '<S236>' : 'CTRR_ac/CTRR_MedTEH/Overrides/Battery/KeCTRR_T_BattClntMinTgt_D'
 * '<S237>' : 'CTRR_ac/CTRR_MedTEH/Overrides/Battery/KeCTRR_b_BTISBTIS2Max_SD'
 * '<S238>' : 'CTRR_ac/CTRR_MedTEH/Overrides/Battery/KeCTRR_b_BattAllowed_D'
 * '<S239>' : 'CTRR_ac/CTRR_MedTEH/Overrides/Battery/KeCTRR_b_BattAllowed_SD'
 * '<S240>' : 'CTRR_ac/CTRR_MedTEH/Overrides/Battery/KeCTRR_b_BattClntMinTgt_SD'
 * '<S241>' : 'CTRR_ac/CTRR_MedTEH/Overrides/Battery/KeCTRR_b_BattHeatReq_D'
 * '<S242>' : 'CTRR_ac/CTRR_MedTEH/Overrides/Battery/KeCTRR_b_BattHeatReq_SD'
 * '<S243>' : 'CTRR_ac/CTRR_MedTEH/Overrides/PerWup/KeCTRR_b_RS_N_Or_NrmlPerWp_D'
 * '<S244>' : 'CTRR_ac/CTRR_MedTEH/Overrides/PerWup/KeCTRR_b_RS_N_Or_NrmlPerWp_SD'
 * '<S245>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_T_ECT_D'
 * '<S246>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_T_HVC_HtrClntI_Temp_D'
 * '<S247>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_b_CabAllowed_D'
 * '<S248>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_b_CabAllowed_SD'
 * '<S249>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_b_CabHeatThermalMode_SD'
 * '<S250>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_b_CabReqNotAllow_D'
 * '<S251>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_b_CabReqNotAllow_SD'
 * '<S252>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_b_DeiceActv_D'
 * '<S253>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_b_DeiceActv_SD'
 * '<S254>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_b_ECT_SD'
 * '<S255>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_b_HTAPPerf_FltDtct_D'
 * '<S256>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_b_HTAPPerf_FltDtct_SD'
 * '<S257>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_b_HTL_Valve_Stuck_State_SD'
 * '<S258>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_b_HVC_HtrClntIn_Temp_SD'
 * '<S259>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_b_SSDR_KeySts_SD'
 * '<S260>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_e_CabHeatThermalMode_D'
 * '<S261>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_e_HTL_Valve_Stuck_State_D'
 * '<S262>' : 'CTRR_ac/CTRR_MedTEH/Overrides/miscellaneous/KeCTRR_e_SSDR_KeySts_D'
 * '<S263>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL'
 * '<S264>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_P_CabCoolPwrNeed_NFdial'
 * '<S265>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_P_ErrBasedHeatPwr_NFdial'
 * '<S266>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_P_HeatPmpPwrNeed_NFdial'
 * '<S267>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_P_RearHeaterPwrReq_NFdial'
 * '<S268>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_T_HCCTISTgtArb_NFdial'
 * '<S269>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_b_AmbientChillCond_Nf'
 * '<S270>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_b_CabPriorityHigh_NFdial'
 * '<S271>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_b_HVAC_HeatReq_NFdial'
 * '<S272>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_b_HVAC_TrueHeatReq_NFdial'
 * '<S273>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_b_HardCabHeat_Req_NFdial'
 * '<S274>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_b_MinFlowCabHeatReq_NF'
 * '<S275>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_b_RearHeaterReq_NFdial'
 * '<S276>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_b_TurnOffEng_CabComfAchvd_NFdial'
 * '<S277>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_dT_HeatPumpErr_NF'
 * '<S278>' : 'CTRR_ac/CTRR_PwrOn/CTRR_NF_DIAL/KeCTRR_dT_HtrCorTmp_Err_NFdial'
 */
#endif                                 /* RTW_HEADER_CTRR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
