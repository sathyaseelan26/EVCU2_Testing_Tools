/*
 * File: SCCR_ac.h
 *
 * Code generated for Simulink model 'SCCR_ac'.
 *
 * Model version                  : 9.183
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:53:49 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SCCR_ac_h_
#define RTW_HEADER_SCCR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef SCCR_ac_COMMON_INCLUDES_
#define SCCR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_SCCR.h"
#endif                                 /* SCCR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S5>/FsftSCCR_b_FlyWMaxRqChrt' */
typedef struct
{
    boolean LeSCCR_b_FlyWMaxRq_FA_out; /* '<S5>/FsftSCCR_b_FlyWMaxRqChrt' */
}
B_FsftSCCR_b_FlyWMaxRqChrt_SCCR_ac_T;

/* Block signals (default storage) */
typedef struct tag_B_SCCR_ac_T
{
    float32 VeSCCR_M_FrntAxlRq_write_IRV;/* '<Root>/Merge_57' */
    float32 VeSCCR_M_RrAxlRq_write_IRV;/* '<Root>/Merge_63' */
    float32 VeSCCR_M_FlyWRq_write_IRV; /* '<Root>/Merge_82' */
    float32 VeSCCR_M_FrntAxlMax_CL_write_IRV;
                                 /* '<Root>/VeSCCR_M_FrntAxlMax_CL_IRV_Merge' */
    float32 VeSCCR_M_FrntAxlMin_CL_write_IRV;
                                 /* '<Root>/VeSCCR_M_FrntAxlMin_CL_IRV_Merge' */
    float32 VeSCCR_M_Output_Torque_Limit_write_IRV;
                           /* '<Root>/VeSCCR_M_Output_Torque_Limit_IRV_Merge' */
    float32 VeSCCR_M_RrAxlMax_CL_write_IRV;
                                   /* '<Root>/VeSCCR_M_RrAxlMax_CL_IRV_Merge' */
    float32 VeSCCR_M_RrAxlMin_CL_write_IRV;
                                   /* '<Root>/VeSCCR_M_RrAxlMin_CL_IRV_Merge' */

#if Rte_SysCon_Variant_SCCR_3

    float32 LeSCCR_M_Output_Torque_Limit_out;
                                /* '<S15>/PokeSCCR_M_Output_Torque_LimitChrt' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 LeSCCR_M_FlyWRq_out;       /* '<S11>/PokeSCCR_M_FlyWRqChrt' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

    float32 OutportBufferForVeSCCR_M_FrntAxlMax_CL_w;/* '<S292>/Const4' */
    float32 OutportBufferForVeSCCR_M_FrntAxlMin_CL_w;/* '<S292>/Const6' */
    float32 OutportBufferForVeSCCR_M_RrAxlMax_CL_wri;/* '<S292>/Const18' */
    float32 OutportBufferForVeSCCR_M_RrAxlMin_CL_wri;/* '<S292>/Const20' */
    float32 OutportBufferForFrntAxlMaxRqPrtctd;/* '<S291>/Constant Value45' */
    float32 OutportBufferForFrntAxlMinRqPrtctd;/* '<S291>/Constant Value1' */
    float32 OutportBufferForOutputTorqueLimit;/* '<S291>/Constant Value2' */
    float32 VariantMergeForOutportVeSCCR_M_ESCSumMax;
    float32 VariantMergeForOutportVeSCCR_M_ESCSumMin;
    float32 VariantMergeForOutportVeSCCR_M_FrntAxlMa;
    float32 VariantMergeForOutportVeSCCR_M_FrntAxlMi;
    float32 VariantMergeForOutportVeSCCR_M_FrntAxlTr;
    float32 VariantMergeForOutportVeSCCR_M_RrAxlMaxR;
    float32 VariantMergeForOutportVeSCCR_M_RrAxlMinR;
    float32 VariantMergeForOutportVeSCCR_M_RrAxlTrqE;

#if Rte_SysCon_Variant_SCCR_3

    float32 OutportBufferForVeSCCI_M_FrntAxlTrqEst;/* '<S290>/KeSCCR_M_FrntAxlTrqEstInit' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 OutportBufferForVeSCCI_M_RrAxlTrqEst;/* '<S290>/KeSCCR_M_RrAxlTrqEstInit' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 OutportBufferForVeSCCI_M_FrntAxlRqst;/* '<S290>/KeSCCR_M_FrntAxlRqstInit' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 OutportBufferForVeSCCI_M_RrAxlRqst;/* '<S290>/KeSCCR_M_RrAxlRqstInit' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

    float32 OutportBufferForVeSCCI_M_FrntAxlOLMax;/* '<S290>/Constant Value' */
    float32 OutportBufferForVeSCCI_M_FrntAxlOLMin;/* '<S290>/Constant Value1' */
    float32 OutportBufferForVeSCCI_M_RrAxlOLMax;/* '<S290>/Constant Value2' */
    float32 OutportBufferForVeSCCI_M_RrAxlOLMin;/* '<S290>/Constant Value3' */
    float32 OutportBufferForVeSCCI_M_FrntAxlCLMax;/* '<S290>/Constant Value4' */
    float32 OutportBufferForVeSCCI_M_FrntAxlCLMin;/* '<S290>/Constant Value5' */
    float32 OutportBufferForVeSCCI_M_RrAxlCLMax;/* '<S290>/Constant Value6' */
    float32 OutportBufferForVeSCCI_M_RrAxlCLMin;/* '<S290>/Constant Value7' */
    float32 OutportBufferForVeSCCI_r_RipAWD;/* '<S290>/Constant Value8' */
    float32 OutportBufferForVeSCCI_M_RipRegen;/* '<S290>/Constant Value9' */
    float32 OutportBufferForVeSCCI_M_FrntAxlStrtgcMa;/* '<S290>/Constant Value15' */
    float32 OutportBufferForVeSCCI_M_RrAxlStrtgcMax_;/* '<S290>/Constant Value16' */
    float32 OutportBufferForVeSCCI_M_FrntAxlStrtgcMi;/* '<S290>/Constant Value17' */
    float32 OutportBufferForVeSCCI_M_RrAxlStrtgcMin_;/* '<S290>/Constant Value18' */
    float32 OutportBufferForVeSCCI_M_FrntAxlTactFast;/* '<S290>/Constant Value19' */
    float32 OutportBufferForVeSCCI_M_RrAxlTactFastMa;/* '<S290>/Constant Value20' */
    float32 OutportBufferForVeSCCI_M_FrntAxlTactFa_p;/* '<S290>/Constant Value21' */
    float32 OutportBufferForVeSCCI_M_RrAxlTactFastMi;/* '<S290>/Constant Value22' */
    float32 OutportBufferForVeSCCI_M_FrntAxlTactSlow;/* '<S290>/Constant Value23' */
    float32 OutportBufferForVeSCCI_M_RrAxlTactSlowMa;/* '<S290>/Constant Value24' */
    float32 OutportBufferForVeSCCI_M_FrntAxlTactSl_n;/* '<S290>/Constant Value25' */
    float32 OutportBufferForVeSCCI_M_RrAxlTactSlowMi;/* '<S290>/Constant Value26' */
    float32 OutportBufferForVeSCCI_M_FrntAxlAdhMax;/* '<S290>/Constant Value27' */
    float32 OutportBufferForVeSCCI_M_RrAxlAdhMax;/* '<S290>/Constant Value28' */
    float32 OutportBufferForVeSCCI_M_FrntAxlAdhMin;/* '<S290>/Constant Value29' */
    float32 OutportBufferForVeSCCI_M_RrAxlAdhMin;/* '<S290>/Constant Value30' */
    float32 OutportBufferForVeSCCI_M_FrntAxlEffMax;/* '<S290>/Constant Value31' */
    float32 OutportBufferForVeSCCI_M_RrAxlEffMax;/* '<S290>/Constant Value32' */
    float32 OutportBufferForVeSCCI_M_FrntAxlEffMin;/* '<S290>/Constant Value33' */
    float32 OutportBufferForVeSCCI_M_RrAxlEffMin;/* '<S290>/Constant Value34' */
    float32 OutportBufferForVeSCCI_M_Output_Torque_L;/* '<S290>/Constant Value38' */

#if Rte_SysCon_Variant_SCCR_3

    float32 OutportBufferForVeSCCI_M_FlyWRq_Init;
                                      /* '<S290>/KeSCCR_M_FrntAxlTrqEstInit1' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Merge;                     /* '<S62>/Merge' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Merge1;                    /* '<S62>/Merge1' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Merge2;                    /* '<S62>/Merge2' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Merge3;                    /* '<S62>/Merge3' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Merge_f;                   /* '<S64>/Merge' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Vector_i;                  /* '<S149>/Vector' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Vector_c;                  /* '<S150>/Vector' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 OutportBufferForFrntAxlFilterTarget[2];

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_g;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_g4;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_n3;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_f;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_py;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_fm;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_gy;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_i;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_pl;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_ij;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_e;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_mw;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_b;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_k;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_mr;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_p5;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_mk;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_c;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_d;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_nu;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_mt;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_bf;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_bd;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_g2;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_o;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_bb;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_pd;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_ea;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_aa;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_d2;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_pj;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_gt;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_c4;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_ip;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_fg;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_ow;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Calib_e;                   /* '<S296>/Calib' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

    boolean VeSCCR_b_FlyWRq_FA_write_IRV;/* '<Root>/Merge_83' */
    boolean VeSCCR_b_FrntAxlRqFA_write_IRV;/* '<Root>/Merge_58' */
    boolean VeSCCR_b_Output_Torque_LimitFA_write_IRV;
                        /* '<Root>/VeSCCR_b_Output_Torque_Limit_FA_IRV_Merge' */
    boolean VeSCCR_b_RrAxlRqFA_write_IRV;/* '<Root>/Merge_64' */
    boolean VeSCCR_b_FlyWMaxRq_FA_write_IRV;/* '<Root>/Merge_85' */
    boolean VeSCCR_b_FlyWMinRq_FA_write_IRV;/* '<Root>/Merge_87' */
    boolean VeSCCR_b_FrntAxlMaxRq_write_IRV;/* '<Root>/Merge_53' */
    boolean VeSCCR_b_FrntAxlMaxRqFA_write_IRV;/* '<Root>/Merge_54' */
    boolean VeSCCR_b_FrntAxlMinRq_write_IRV;/* '<Root>/Merge_55' */
    boolean VeSCCR_b_FrntAxlMinRqFA_write_IRV;/* '<Root>/Merge_56' */
    boolean VeSCCR_b_RrAxlMaxRq_write_IRV;/* '<Root>/Merge_59' */
    boolean VeSCCR_b_RrAxlMaxRqFA_write_IRV;/* '<Root>/Merge_60' */
    boolean VeSCCR_b_RrAxlMinRq_write_IRV;/* '<Root>/Merge_61' */
    boolean VeSCCR_b_RrAxlMinRqFA_write_IRV;/* '<Root>/Merge_62' */
    boolean VeSCCR_b_AWDDiscnctAllwd_write_IRV;
                               /* '<Root>/VeSCCR_b_AWDDiscnctAllwd_IRV_Merge' */
    boolean VeSCCR_b_DsblAEMDPGainFrnt_write_IRV;
                             /* '<Root>/VeSCCR_b_DsblAEMDPGainFrnt_IRV_Merge' */
    boolean VeSCCR_b_DsblAEMDPGainRr_write_IRV;
                               /* '<Root>/VeSCCR_b_DsblAEMDPGainRr_IRV_Merge' */
    boolean VeSCCR_b_FlyWMaxRq_write_IRV;/* '<Root>/Merge_84' */
    boolean VeSCCR_b_FlyWMinRq_write_IRV;/* '<Root>/Merge_86' */
    boolean VeSCCR_b_FrontDFOffReq_write_IRV;
                                 /* '<Root>/VeSCCR_b_FrontDFOffReq_IRV_Merge' */
    boolean VeSCCR_b_RearDFOffReq_write_IRV;
                                  /* '<Root>/VeSCCR_b_RearDFOffReq_IRV_Merge' */

#if Rte_SysCon_Variant_SCCR_3

    boolean LeSCCR_b_FlyWMinRq_out;    /* '<S23>/PokeSCCR_b_FlyWMinRqChrt' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean LeSCCR_b_FlyWMaxRq_out;    /* '<S22>/PokeSCCR_b_FlyWMaxRqChrt' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeSCCR_b_AWDDiscnctAllwd;/* '<S292>/Const28' */
    boolean OutportBufferForVeSCCR_b_DsblAEMDPGainFr;/* '<S292>/Const29' */
    boolean OutportBufferForVeSCCR_b_DsblAEMDPGainRr;/* '<S292>/Const30' */
    boolean OutportBufferForVeSCCR_b_FrontDFOffReq_w;/* '<S292>/Const31' */
    boolean OutportBufferForVeSCCR_b_RearDFOffReq_wr;/* '<S292>/Const33' */
    boolean OutportBufferForFrntAxlMax_Rq;/* '<S291>/FALSE Constant8' */
    boolean OutportBufferForFrntAxlMin_Rq;/* '<S291>/FALSE Constant7' */
    boolean OutportBufferForRrAxlMax_Rq;/* '<S291>/FALSE Constant1' */
    boolean OutportBufferForRrAxlMin_Rq;/* '<S291>/FALSE Constant2' */
    boolean OutportBufferForFrntAxlRqFA;/* '<S291>/FALSE Constant5' */
    boolean OutportBufferForRrAxlRqFA; /* '<S291>/FALSE Constant6' */
    boolean OutportBufferForFrntAxlRq; /* '<S291>/FALSE Constant3' */
    boolean OutportBufferForRrAxlRq;   /* '<S291>/FALSE Constant4' */
    boolean OutportBufferForESCTrqEnblRq_Allowed;/* '<S291>/FALSE Constant9' */
    boolean VariantMergeForOutportVeSCCR_b_Rq_ESCSum;
    boolean VariantMergeForOutportVeSCCR_b_Rq_ESCS_f;

#if Rte_SysCon_Variant_SCCR_3

    boolean OutportBufferForVeSCCI_b_FrntAxlMaxRq;/* '<S290>/KeSCCR_b_FrntAxlMaxRqInit' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean OutportBufferForVeSCCI_b_FrntAxlMinRq;/* '<S290>/KeSCCR_b_FrntAxlMinRqInit' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean OutportBufferForVeSCCI_b_RrAxlMaxRq;/* '<S290>/KeSCCR_b_RrAxlMaxRqInit' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean OutportBufferForVeSCCI_b_RrAxlMinRq;/* '<S290>/KeSCCR_b_RrAxlMinRqInit' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeSCCI_b_FrntAxlMaxRqFA;
                                      /* '<S290>/KeSCCR_b_FrntAxlMaxRqFAInit' */
    boolean OutportBufferForVeSCCI_b_FrntAxlMinRqFA;
                                      /* '<S290>/KeSCCR_b_FrntAxlMinRqFAInit' */

#if Rte_SysCon_Variant_SCCR_3

    boolean OutportBufferForVeSCCI_b_FrntAxlTqRqFA;/* '<S290>/KeSCCR_b_FrntAxlTqRqFAInit' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeSCCI_b_RrAxlMaxRqFA;/* '<S290>/KeSCCR_b_RrAxlMaxRqFAInit' */
    boolean OutportBufferForVeSCCI_b_RrAxlMinRqFA;/* '<S290>/KeSCCR_b_RrAxlMinRqFAInit' */

#if Rte_SysCon_Variant_SCCR_3

    boolean OutportBufferForVeSCCI_b_RrAxlTqRqFA;/* '<S290>/KeSCCR_b_RrAxlTqRqFAInit' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeSCCI_b_PerfAWDFlag;/* '<S290>/Constant Value10' */
    boolean OutportBufferForVeSCCI_b_ZeroTrqAllwd;/* '<S290>/Constant Value11' */
    boolean OutportBufferForVeSCCI_b_AWDDiscnctAllwd;/* '<S290>/Constant Value12' */

#if Rte_SysCon_Variant_SCCR_3

    boolean OutportBufferForVeSCCI_b_DsblAEMDPGainFr;/* '<S290>/Constant Value13' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean OutportBufferForVeSCCI_b_DsblAEMDPGainRr;/* '<S290>/Constant Value14' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeSCCI_b_FrontDFOffReq;/* '<S290>/Constant Value35' */
    boolean OutportBufferForVeSCCI_b_RearDFOffReq;/* '<S290>/Constant Value36' */
    boolean OutportBufferForVeSCCI_b_Output_Torque_L;/* '<S290>/Constant Value37' */

#if Rte_SysCon_Variant_SCCR_3

    boolean OutportBufferForVeSCCR_b_FlyWRq_FA_Init;/* '<S290>/Constant Value39' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean OutportBufferForVeSCCR_b_FlyWMaxRq_Init;/* '<S290>/Constant Value43' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean OutportBufferForVeSCCR_b_FlyWMaxRq_FA_In;/* '<S290>/Constant Value40' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean OutportBufferForVeSCCR_b_FlyWMinRq_Init;/* '<S290>/Constant Value41' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean OutportBufferForVeSCCR_b_FlyWMinRq_FA_In;/* '<S290>/Constant Value42' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Merge6;                    /* '<S62>/Merge6' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Merge7;                    /* '<S62>/Merge7' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Merge5;                    /* '<S62>/Merge5' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Merge8;                    /* '<S62>/Merge8' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Merge9;                    /* '<S62>/Merge9' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Merge4;                    /* '<S62>/Merge4' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean VariantMerge_For_Variant_Source_Variant_[2];

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean VeSCCI_b_Output_Torque_Lim_FA;
                                     /* '<S62>/VeSCCI_b_Output_Torque_Lim_FA' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean TmpSignalConversionAtTmpVM_FcnCallSu_nwh;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_io;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean VM_Conditional_Signal_TmpVM_FcnCallSubsy;

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean VM_Conditional_Signal_TmpVM_FcnCallSub_g;

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_eu;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_nj;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_i1;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_dq;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_cr;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Calib_ec;                  /* '<S303>/Calib' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Calib_m;                   /* '<S308>/Calib' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    TeSRAR_e_BSMComFail_C1CAN TmpSignalConversionAtTmpVM_FcnCallSub_nx;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    TePLTR_e_EPBHoldSts OutportBufferForVeSCCI_e_EPBHoldSts;/* '<S290>/KeSCCR_e_EPBHoldStsInit' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    TePLTR_e_EPBHoldSts TmpSignalConversionAtTmpVM_FcnCallSub_ev;
                      /* '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    TePLTR_e_EPBHoldSts Calib_el;      /* '<S309>/Calib' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    B_FsftSCCR_b_FlyWMaxRqChrt_SCCR_ac_T sf_FsftSCCR_b_FlyWMinRqChrt;/* '<S6>/FsftSCCR_b_FlyWMinRqChrt' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    B_FsftSCCR_b_FlyWMaxRqChrt_SCCR_ac_T sf_FsftSCCR_b_FlyWMaxRqChrt;/* '<S5>/FsftSCCR_b_FlyWMaxRqChrt' */

#define B_SCCR_AC_T_VARIANT_EXISTS
#endif

}
B_SCCR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_SCCR_ac_T
{

#if Rte_SysCon_Variant_SCCR_3

    float32 UnitDelay3_DSTATE;         /* '<S279>/Unit Delay3' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 UnitDelay_DSTATE;          /* '<S270>/Unit Delay' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 UnitDelay_DSTATE_f;        /* '<S279>/Unit Delay' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 UnitDelay3_DSTATE_e;       /* '<S282>/Unit Delay3' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 UnitDelay_DSTATE_m;        /* '<S271>/Unit Delay' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 UnitDelay_DSTATE_n;        /* '<S282>/Unit Delay' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 UnitDelay_DSTATE_p;        /* '<S257>/Unit Delay' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 UnitDelay_DSTATE_g;        /* '<S256>/Unit Delay' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 UnitDelay1_DSTATE[2];      /* '<S69>/Unit Delay1' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 UnitDelay_DSTATE_b[2];     /* '<S88>/Unit Delay' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 UnitDelay_DSTATE_bx;       /* '<S125>/Unit Delay' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 UnitDelay_DSTATE_i;        /* '<S124>/Unit Delay' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 UnitDelay_DSTATE_j;        /* '<S104>/Unit Delay' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean UnitDelay1_DSTATE_i;       /* '<S279>/Unit Delay1' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean UnitDelay1_DSTATE_d;       /* '<S282>/Unit Delay1' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean UnitDelay_DSTATE_k;        /* '<S263>/Unit Delay' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean UnitDelay_DSTATE_d;        /* '<S262>/Unit Delay' */

#define DW_SCCR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_SCCR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_SCCR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const float32 Const4;              /* '<S292>/Const4' */
    const float32 Const6;              /* '<S292>/Const6' */
    const float32 Const18;             /* '<S292>/Const18' */
    const float32 Const20;             /* '<S292>/Const20' */
    const float32 ConstantValue45;     /* '<S291>/Constant Value45' */
    const float32 ConstantValue1;      /* '<S291>/Constant Value1' */
    const float32 ConstantValue2;      /* '<S291>/Constant Value2' */
    const float32 ConstantValue;       /* '<S290>/Constant Value' */
    const float32 ConstantValue1_g;    /* '<S290>/Constant Value1' */
    const float32 ConstantValue2_j;    /* '<S290>/Constant Value2' */
    const float32 ConstantValue3;      /* '<S290>/Constant Value3' */
    const float32 ConstantValue4;      /* '<S290>/Constant Value4' */
    const float32 ConstantValue5;      /* '<S290>/Constant Value5' */
    const float32 ConstantValue6;      /* '<S290>/Constant Value6' */
    const float32 ConstantValue7;      /* '<S290>/Constant Value7' */
    const float32 ConstantValue8;      /* '<S290>/Constant Value8' */
    const float32 ConstantValue9;      /* '<S290>/Constant Value9' */
    const float32 ConstantValue15;     /* '<S290>/Constant Value15' */
    const float32 ConstantValue16;     /* '<S290>/Constant Value16' */
    const float32 ConstantValue17;     /* '<S290>/Constant Value17' */
    const float32 ConstantValue18;     /* '<S290>/Constant Value18' */
    const float32 ConstantValue19;     /* '<S290>/Constant Value19' */
    const float32 ConstantValue20;     /* '<S290>/Constant Value20' */
    const float32 ConstantValue21;     /* '<S290>/Constant Value21' */
    const float32 ConstantValue22;     /* '<S290>/Constant Value22' */
    const float32 ConstantValue23;     /* '<S290>/Constant Value23' */
    const float32 ConstantValue24;     /* '<S290>/Constant Value24' */
    const float32 ConstantValue25;     /* '<S290>/Constant Value25' */
    const float32 ConstantValue26;     /* '<S290>/Constant Value26' */
    const float32 ConstantValue27;     /* '<S290>/Constant Value27' */
    const float32 ConstantValue28;     /* '<S290>/Constant Value28' */
    const float32 ConstantValue29;     /* '<S290>/Constant Value29' */
    const float32 ConstantValue30;     /* '<S290>/Constant Value30' */
    const float32 ConstantValue31;     /* '<S290>/Constant Value31' */
    const float32 ConstantValue32;     /* '<S290>/Constant Value32' */
    const float32 ConstantValue33;     /* '<S290>/Constant Value33' */
    const float32 ConstantValue34;     /* '<S290>/Constant Value34' */
    const float32 ConstantValue38;     /* '<S290>/Constant Value38' */
    const boolean Const28;             /* '<S292>/Const28' */
    const boolean Const29;             /* '<S292>/Const29' */
    const boolean Const30;             /* '<S292>/Const30' */
    const boolean Const31;             /* '<S292>/Const31' */
    const boolean Const33;             /* '<S292>/Const33' */
    const boolean FALSEConstant8;      /* '<S291>/FALSE Constant8' */
    const boolean FALSEConstant7;      /* '<S291>/FALSE Constant7' */
    const boolean FALSEConstant1;      /* '<S291>/FALSE Constant1' */
    const boolean FALSEConstant2;      /* '<S291>/FALSE Constant2' */
    const boolean FALSEConstant5;      /* '<S291>/FALSE Constant5' */
    const boolean FALSEConstant6;      /* '<S291>/FALSE Constant6' */
    const boolean FALSEConstant3;      /* '<S291>/FALSE Constant3' */
    const boolean FALSEConstant4;      /* '<S291>/FALSE Constant4' */
    const boolean FALSEConstant9;      /* '<S291>/FALSE Constant9' */
    const boolean ConstantValue10;     /* '<S290>/Constant Value10' */
    const boolean ConstantValue11;     /* '<S290>/Constant Value11' */
    const boolean ConstantValue12;     /* '<S290>/Constant Value12' */

#if Rte_SysCon_Variant_SCCR_3

    const boolean ConstantValue13;     /* '<S290>/Constant Value13' */

#define CONSTB_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    const boolean ConstantValue14;     /* '<S290>/Constant Value14' */

#define CONSTB_SCCR_AC_T_VARIANT_EXISTS
#endif

    const boolean ConstantValue35;     /* '<S290>/Constant Value35' */
    const boolean ConstantValue36;     /* '<S290>/Constant Value36' */
    const boolean ConstantValue37;     /* '<S290>/Constant Value37' */

#if Rte_SysCon_Variant_SCCR_3

    const boolean ConstantValue39;     /* '<S290>/Constant Value39' */

#define CONSTB_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    const boolean ConstantValue43;     /* '<S290>/Constant Value43' */

#define CONSTB_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    const boolean ConstantValue40;     /* '<S290>/Constant Value40' */

#define CONSTB_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    const boolean ConstantValue41;     /* '<S290>/Constant Value41' */

#define CONSTB_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    const boolean ConstantValue42;     /* '<S290>/Constant Value42' */

#define CONSTB_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    const boolean Logical2;            /* '<S279>/Logical2' */

#define CONSTB_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    const boolean Logical2_n;          /* '<S282>/Logical2' */

#define CONSTB_SCCR_AC_T_VARIANT_EXISTS
#endif

}
ConstB_SCCR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_SCCR_3

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S149>/Vector'
     *   '<S150>/Vector'
     */
    uint32 pooled13[2];

#define CONSTP_SCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S131>/Vector'
     *   '<S132>/Vector'
     */
    uint32 pooled14[2];

#define CONSTP_SCCR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTP_SCCR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstP_SCCR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SCCR
#include "MemMap.h"

extern VAR(B_SCCR_ac_T, SCCR_VAR_INIT) SCCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SCCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SCCR
#include "MemMap.h"

extern VAR(DW_SCCR_ac_T, SCCR_VAR_INIT) SCCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SCCR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_SCCR
#include "MemMap.h"

extern CONST(ConstB_SCCR_ac_T, SCCR_VAR_INIT) SCCR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_SCCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_SCCR
#include "MemMap.h"

extern CONST(ConstP_SCCR_ac_T, SCCR_VAR_INIT) SCCR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_SCCR
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
 * '<Root>' : 'SCCR_ac'
 * '<S1>'   : 'SCCR_ac/FsftSCCR_M_FlyWRq'
 * '<S2>'   : 'SCCR_ac/FsftSCCR_M_FrntAxlRq'
 * '<S3>'   : 'SCCR_ac/FsftSCCR_M_Output_Torque_Limit'
 * '<S4>'   : 'SCCR_ac/FsftSCCR_M_RrAxlRq'
 * '<S5>'   : 'SCCR_ac/FsftSCCR_b_FlyWMaxRq'
 * '<S6>'   : 'SCCR_ac/FsftSCCR_b_FlyWMinRq'
 * '<S7>'   : 'SCCR_ac/FsftSCCR_b_FrntAxlMaxRq'
 * '<S8>'   : 'SCCR_ac/FsftSCCR_b_FrntAxlMinRq'
 * '<S9>'   : 'SCCR_ac/FsftSCCR_b_RrAxlMaxRq'
 * '<S10>'  : 'SCCR_ac/FsftSCCR_b_RrAxlMinRq'
 * '<S11>'  : 'SCCR_ac/PokeSCCR_M_FlyWRq'
 * '<S12>'  : 'SCCR_ac/PokeSCCR_M_FrntAxlMax_CL'
 * '<S13>'  : 'SCCR_ac/PokeSCCR_M_FrntAxlMin_CL'
 * '<S14>'  : 'SCCR_ac/PokeSCCR_M_FrntAxlRq'
 * '<S15>'  : 'SCCR_ac/PokeSCCR_M_Output_Torque_Limit'
 * '<S16>'  : 'SCCR_ac/PokeSCCR_M_RrAxlMax_CL'
 * '<S17>'  : 'SCCR_ac/PokeSCCR_M_RrAxlMin_CL'
 * '<S18>'  : 'SCCR_ac/PokeSCCR_M_RrAxlRq'
 * '<S19>'  : 'SCCR_ac/PokeSCCR_b_AWDDiscnctAllwd'
 * '<S20>'  : 'SCCR_ac/PokeSCCR_b_DsblAEMDPGainFrnt'
 * '<S21>'  : 'SCCR_ac/PokeSCCR_b_DsblAEMDPGainRr'
 * '<S22>'  : 'SCCR_ac/PokeSCCR_b_FlyWMaxRq'
 * '<S23>'  : 'SCCR_ac/PokeSCCR_b_FlyWMinRq'
 * '<S24>'  : 'SCCR_ac/PokeSCCR_b_FrntAxlMaxRq'
 * '<S25>'  : 'SCCR_ac/PokeSCCR_b_FrntAxlMinRq'
 * '<S26>'  : 'SCCR_ac/PokeSCCR_b_FrontDFOffReq'
 * '<S27>'  : 'SCCR_ac/PokeSCCR_b_RearDFOffReq'
 * '<S28>'  : 'SCCR_ac/PokeSCCR_b_RrAxlMaxRq'
 * '<S29>'  : 'SCCR_ac/PokeSCCR_b_RrAxlMinRq'
 * '<S30>'  : 'SCCR_ac/SCCR_FastTEF1'
 * '<S31>'  : 'SCCR_ac/SCCR_FastTEF2'
 * '<S32>'  : 'SCCR_ac/SCCR_PwrOn'
 * '<S33>'  : 'SCCR_ac/FsftSCCR_M_FlyWRq/FsftSCCR_M_FlyWRqChrt'
 * '<S34>'  : 'SCCR_ac/FsftSCCR_M_FrntAxlRq/FsftSCCR_M_FrntAxlRqChrt'
 * '<S35>'  : 'SCCR_ac/FsftSCCR_M_Output_Torque_Limit/FsftSCCR_M_Output_Torque_LimitChrt'
 * '<S36>'  : 'SCCR_ac/FsftSCCR_M_RrAxlRq/FsftSCCR_M_RrAxlRqChrt'
 * '<S37>'  : 'SCCR_ac/FsftSCCR_b_FlyWMaxRq/FsftSCCR_b_FlyWMaxRqChrt'
 * '<S38>'  : 'SCCR_ac/FsftSCCR_b_FlyWMinRq/FsftSCCR_b_FlyWMinRqChrt'
 * '<S39>'  : 'SCCR_ac/FsftSCCR_b_FrntAxlMaxRq/FsftSCCR_b_FrntAxlMaxRqChrt'
 * '<S40>'  : 'SCCR_ac/FsftSCCR_b_FrntAxlMinRq/FsftSCCR_b_FrntAxlMinRqChrt'
 * '<S41>'  : 'SCCR_ac/FsftSCCR_b_RrAxlMaxRq/FsftSCCR_b_RrAxlMaxRqChrt'
 * '<S42>'  : 'SCCR_ac/FsftSCCR_b_RrAxlMinRq/FsftSCCR_b_RrAxlMinRqChrt'
 * '<S43>'  : 'SCCR_ac/PokeSCCR_M_FlyWRq/PokeSCCR_M_FlyWRqChrt'
 * '<S44>'  : 'SCCR_ac/PokeSCCR_M_FrntAxlMax_CL/PokeSCCR_M_FrntAxlMax_CLChrt'
 * '<S45>'  : 'SCCR_ac/PokeSCCR_M_FrntAxlMin_CL/PokeSCCR_M_FrntAxlMin_CLChrt'
 * '<S46>'  : 'SCCR_ac/PokeSCCR_M_FrntAxlRq/PokeSCCR_M_FrntAxlRqChrt'
 * '<S47>'  : 'SCCR_ac/PokeSCCR_M_Output_Torque_Limit/PokeSCCR_M_Output_Torque_LimitChrt'
 * '<S48>'  : 'SCCR_ac/PokeSCCR_M_RrAxlMax_CL/PokeSCCR_M_RrAxlMax_CLChrt'
 * '<S49>'  : 'SCCR_ac/PokeSCCR_M_RrAxlMin_CL/PokeSCCR_M_RrAxlMin_CLChrt'
 * '<S50>'  : 'SCCR_ac/PokeSCCR_M_RrAxlRq/PokeSCCR_M_RrAxlRqChrt'
 * '<S51>'  : 'SCCR_ac/PokeSCCR_b_AWDDiscnctAllwd/PokeSCCR_b_AWDDiscnctAllwdChrt'
 * '<S52>'  : 'SCCR_ac/PokeSCCR_b_DsblAEMDPGainFrnt/PokeSCCR_b_DsblAEMDPGainFrntChrt'
 * '<S53>'  : 'SCCR_ac/PokeSCCR_b_DsblAEMDPGainRr/PokeSCCR_b_DsblAEMDPGainRrChrt'
 * '<S54>'  : 'SCCR_ac/PokeSCCR_b_FlyWMaxRq/PokeSCCR_b_FlyWMaxRqChrt'
 * '<S55>'  : 'SCCR_ac/PokeSCCR_b_FlyWMinRq/PokeSCCR_b_FlyWMinRqChrt'
 * '<S56>'  : 'SCCR_ac/PokeSCCR_b_FrntAxlMaxRq/PokeSCCR_b_FrntAxlMaxRqChrt'
 * '<S57>'  : 'SCCR_ac/PokeSCCR_b_FrntAxlMinRq/PokeSCCR_b_FrntAxlMinRqChrt'
 * '<S58>'  : 'SCCR_ac/PokeSCCR_b_FrontDFOffReq/PokeSCCR_b_FrontDFOffReqChrt'
 * '<S59>'  : 'SCCR_ac/PokeSCCR_b_RearDFOffReq/PokeSCCR_b_RearDFOffReqChrt'
 * '<S60>'  : 'SCCR_ac/PokeSCCR_b_RrAxlMaxRq/PokeSCCR_b_RrAxlMaxRqChrt'
 * '<S61>'  : 'SCCR_ac/PokeSCCR_b_RrAxlMinRq/PokeSCCR_b_RrAxlMinRqChrt'
 * '<S62>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr'
 * '<S63>'  : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs'
 * '<S64>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/DMPI_Torque_Limit'
 * '<S65>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/DocBlock'
 * '<S66>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/Enumerated Value'
 * '<S67>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlMaxRqFlag'
 * '<S68>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlMinRqFlag'
 * '<S69>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRq'
 * '<S70>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd'
 * '<S71>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrontAxlFA_Flag'
 * '<S72>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrontAxle_ESCType'
 * '<S73>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrontAxle_MaxESC'
 * '<S74>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrontAxle_MinESC'
 * '<S75>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrontAxle_NoESC'
 * '<S76>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/KeSCCR_M_Gradient_Inc_Limit_Protection_Max'
 * '<S77>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/KeSCCR_M_Gradient_Inc_Limit_Protection_Max1'
 * '<S78>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/KeSCCR_M_Gradient_Inc_Limit_Protection_Max2'
 * '<S79>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/KeSCCR_M_Gradient_Inc_Limit_Protection_Max3'
 * '<S80>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/KeSCCR_b_AlwEPBActvP4zeroTrq'
 * '<S81>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_EPB_Actv'
 * '<S82>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_ESCType'
 * '<S83>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_MaxESC'
 * '<S84>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_MinESC'
 * '<S85>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_NoESC'
 * '<S86>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlMaxRqFlag'
 * '<S87>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlMinRqFlag'
 * '<S88>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlRq'
 * '<S89>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/Set Block1'
 * '<S90>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/Set Block10'
 * '<S91>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/Set Block11'
 * '<S92>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/Set Block12'
 * '<S93>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/Set Block2'
 * '<S94>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/Set Block3'
 * '<S95>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/Set Block4'
 * '<S96>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/Set Block5'
 * '<S97>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/Set Block6'
 * '<S98>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/Set Block7'
 * '<S99>'  : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/Set Block8'
 * '<S100>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/Set Block9'
 * '<S101>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/TrqEnblRq_Allowed'
 * '<S102>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/DMPI_Torque_Limit/AWD_Rear'
 * '<S103>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/DMPI_Torque_Limit/FWD '
 * '<S104>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/DMPI_Torque_Limit/GradientLimiter'
 * '<S105>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/DMPI_Torque_Limit/KeSCCR_M_Gradient_Dec_DMPI'
 * '<S106>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/DMPI_Torque_Limit/KeSCCR_M_Gradient_Inc_DMPI'
 * '<S107>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/DMPI_Torque_Limit/KtSCCR_M_OutputTorqueLimitF'
 * '<S108>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/DMPI_Torque_Limit/KtSCCR_M_OutputTorqueLimitR'
 * '<S109>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/DMPI_Torque_Limit/SCALAR_BLK'
 * '<S110>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/DMPI_Torque_Limit/TrailHawk'
 * '<S111>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/DMPI_Torque_Limit/FWD /KeSCCR_b_RU_or_KM_FWD'
 * '<S112>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/DMPI_Torque_Limit/GradientLimiter/Limiter'
 * '<S113>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlMaxRqFlag/KeSCCR_M_FrntAxlCLMaxThrshld'
 * '<S114>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlMaxRqFlag/KeSCCR_M_FrntAxlOLMaxThrshld'
 * '<S115>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlMinRqFlag/KeSCCR_M_FrntAxlCLMinThrshld'
 * '<S116>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlMinRqFlag/KeSCCR_M_FrntAxlOLMinThrshld'
 * '<S117>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRq/GradientLimiter1'
 * '<S118>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRq/KeSCCR_M_FrntAxlMaxLim'
 * '<S119>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRq/KeSCCR_M_FrntAxlMinLim'
 * '<S120>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRq/KtSCCR_k_FrntAxlRmpRt'
 * '<S121>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRq/Set Block2'
 * '<S122>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRq/Set Block3'
 * '<S123>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRq/GradientLimiter1/Limiter'
 * '<S124>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd/GradientLimiter'
 * '<S125>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd/GradientLimiter2'
 * '<S126>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd/KeSCCR_M_Gradient_Dec_Limit_Protection_Max'
 * '<S127>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd/KeSCCR_M_Gradient_Dec_Limit_Protection_Min'
 * '<S128>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd/KeSCCR_M_Gradient_Inc_Limit_Protection_Max'
 * '<S129>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd/KeSCCR_M_Gradient_Inc_Limit_Protection_Min'
 * '<S130>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd/KeSCCR_v_VehicleSpeedProtection'
 * '<S131>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd/KtSCCR_M_FrntAxlMaxProtection'
 * '<S132>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd/KtSCCR_M_FrntAxlMinProtection'
 * '<S133>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd/Set Block1'
 * '<S134>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd/Set Block2'
 * '<S135>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd/GradientLimiter/Limiter'
 * '<S136>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrntAxlRqPrtctd/GradientLimiter2/Limiter'
 * '<S137>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrontAxle_MaxESC/DocBlock'
 * '<S138>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrontAxle_MinESC/DocBlock'
 * '<S139>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrontAxle_NoESC/DocBlock'
 * '<S140>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrontAxle_NoESC/KeSCCR_M_FrntAxlMaxRqLim'
 * '<S141>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrontAxle_NoESC/KeSCCR_M_FrntAxlMinRqLim'
 * '<S142>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrontAxle_NoESC/Set Block'
 * '<S143>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/FrontAxle_NoESC/Set Block1'
 * '<S144>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_EPB_Actv/DocBlock'
 * '<S145>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_MaxESC/DocBlock'
 * '<S146>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_MinESC/DocBlock'
 * '<S147>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_NoESC/DocBlock'
 * '<S148>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_NoESC/KeSCCR_b_EnblRrAxlLimFilt'
 * '<S149>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_NoESC/KtSCCR_M_RrAxlMaxRqLim'
 * '<S150>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_NoESC/KtSCCR_M_RrAxlMinRqLim'
 * '<S151>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_NoESC/Set Block'
 * '<S152>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RearAxle_NoESC/Set Block1'
 * '<S153>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlMaxRqFlag/KeSCCR_M_RrAxlCLMaxThrshld'
 * '<S154>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlMaxRqFlag/KeSCCR_M_RrAxlOLMaxThrshld'
 * '<S155>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlMinRqFlag/KeSCCR_M_RrAxlCLMinThrshld'
 * '<S156>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlMinRqFlag/KeSCCR_M_RrAxlOLMinThrshld'
 * '<S157>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlRq/GradientLimiter'
 * '<S158>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlRq/KeSCCR_M_RrAxlMaxLim'
 * '<S159>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlRq/KeSCCR_M_RrAxlMinLim'
 * '<S160>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlRq/KtSCCR_k_RrAxlRmpRt'
 * '<S161>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlRq/Set Block'
 * '<S162>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlRq/Set Block1'
 * '<S163>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/RrAxlRq/GradientLimiter/Limiter'
 * '<S164>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/TrqEnblRq_Allowed/Enumerated_Constant4'
 * '<S165>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/TrqEnblRq_Allowed/SCALAR_BLK'
 * '<S166>' : 'SCCR_ac/SCCR_FastTEF1/SCCC_AxlTrqArbtr/TrqEnblRq_Allowed/SCALAR_BLK1'
 * '<S167>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/DocBlock'
 * '<S168>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KaSCCR_b_RqFAOvrdEnbl'
 * '<S169>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KaSCCR_b_RqOvrdEnbl'
 * '<S170>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlAdhMax'
 * '<S171>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlAdhMin'
 * '<S172>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlCLMaxOvrdVal'
 * '<S173>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlCLMinOvrdVal'
 * '<S174>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlEffMax'
 * '<S175>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlEffMin'
 * '<S176>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlOLMaxOvrdVal'
 * '<S177>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlOLMinOvrdVal'
 * '<S178>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlRqTorqOvrdVal'
 * '<S179>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlStrtgcMax_OL'
 * '<S180>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlStrtgcMin_OL'
 * '<S181>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlTactFastMax_OL'
 * '<S182>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlTactFastMin_OL'
 * '<S183>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlTactSlowMax_OL'
 * '<S184>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_FrntAxlTactSlowMin_OL'
 * '<S185>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrAxlAdhMax'
 * '<S186>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrAxlAdhMin'
 * '<S187>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrAxlCLMinOvrdVal'
 * '<S188>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrAxlEffMax'
 * '<S189>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrAxlEffMin'
 * '<S190>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrAxlOLMinOvrdVal'
 * '<S191>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrAxlRqTorqOvrdVal'
 * '<S192>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrAxlStrtgcMax_OL'
 * '<S193>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrAxlStrtgcMin_OL'
 * '<S194>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrAxlTactFastMax_OL'
 * '<S195>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrAxlTactFastMin_OL'
 * '<S196>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrAxlTactSlowMax_OL'
 * '<S197>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrAxlTactSlowMin_OL'
 * '<S198>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrtAxlCLMaxOvrdVal'
 * '<S199>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_M_RrtAxlOLMaxOvrdVal'
 * '<S200>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_AWDDiscnctAllwdOvrdEnbl'
 * '<S201>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_AWDDiscnctAllwdOvrdVal'
 * '<S202>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_DsblAEMDGainFrntOvrdEnbl'
 * '<S203>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_DsblAEMDGainFrntOvrdVal'
 * '<S204>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_DsblAEMDGainRrOvrdEnbl'
 * '<S205>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_DsblAEMDGainRrOvrdVal'
 * '<S206>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_EPBHoldStsOvrdEnbl'
 * '<S207>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlAdhMax'
 * '<S208>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlAdhMin'
 * '<S209>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlEffMax'
 * '<S210>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlEffMin'
 * '<S211>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlMaxRqFAOvrdVal'
 * '<S212>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlMaxRqOvrdVal'
 * '<S213>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlMinRqFAOvrdVal'
 * '<S214>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlMinRqOvrdVal'
 * '<S215>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlStrtgcMax_OL'
 * '<S216>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlStrtgcMin_OL'
 * '<S217>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlTactFastMax_OL'
 * '<S218>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlTactFastMin_OL'
 * '<S219>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlTactSlowMax_OL'
 * '<S220>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlTactSlowMin_OL'
 * '<S221>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntAxlTqRqFAOvrdVal'
 * '<S222>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntDFOffReqOvrdEnbl'
 * '<S223>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_FrntDFOffReqOvrdVal'
 * '<S224>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_PerfAWDFlagOvrdEnbl'
 * '<S225>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_PerfAWDFlagOvrdVal'
 * '<S226>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlAdhMax'
 * '<S227>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlAdhMin'
 * '<S228>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlEffMax'
 * '<S229>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlEffMin'
 * '<S230>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlMaxRqFAOvrdVal'
 * '<S231>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlMaxRqOvrdVal'
 * '<S232>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlMinRqFAOvrdVal'
 * '<S233>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlMinRqOvrdVal'
 * '<S234>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlStrtgcMax_OL'
 * '<S235>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlStrtgcMin_OL'
 * '<S236>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlTactFastMax_OL'
 * '<S237>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlTactFastMin_OL'
 * '<S238>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlTactSlowMax_OL'
 * '<S239>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlTactSlowMin_OL'
 * '<S240>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrAxlTqRqFAOvrdVal'
 * '<S241>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrDFOffReqOvrdEnbl'
 * '<S242>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_RrDFOffReqOvrdVal'
 * '<S243>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_ZeroTrqAllwdOvrdEnbl'
 * '<S244>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_b_ZeroTrqAllwdOvrdVal'
 * '<S245>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_e_EPBHoldStsOvrdVal'
 * '<S246>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_e_EPBHoldStsOvrdVal1'
 * '<S247>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_e_EPBHoldStsOvrdVal2'
 * '<S248>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_e_EPBHoldStsOvrdVal3'
 * '<S249>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_e_EPBHoldStsOvrdVal4'
 * '<S250>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_e_EPBHoldStsOvrdVal5'
 * '<S251>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_e_EPBHoldStsOvrdVal6'
 * '<S252>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_r_RipAWDOvrdVal'
 * '<S253>' : 'SCCR_ac/SCCR_FastTEF1/SCCI_OvrrdInputs/KeSCCR_r_RipRegenOvrdVal'
 * '<S254>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough'
 * '<S255>' : 'SCCR_ac/SCCR_FastTEF2/SCCI_OptTrqOvrrd'
 * '<S256>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/Digital Lowpass Reset Enabled'
 * '<S257>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/Digital Lowpass Reset Enabled2'
 * '<S258>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/DocBlock'
 * '<S259>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/KeSCCR_k_FiltCoeffFrntAxlTrqEst'
 * '<S260>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/KeSCCR_k_FiltCoeffRrAxlTrqEst'
 * '<S261>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill'
 * '<S262>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/EdgeBi'
 * '<S263>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/EdgeBi1'
 * '<S264>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/HeSCCR_t_dt'
 * '<S265>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/KeSCCR_t_FrntTrqEstBlndIn'
 * '<S266>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/KeSCCR_t_FrntTrqEstBlndOut'
 * '<S267>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/KeSCCR_t_RrTrqEstBlndIn'
 * '<S268>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/KeSCCR_t_RrTrqEstBlndOut'
 * '<S269>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/SCCC_CndStandStill'
 * '<S270>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/timebsdBlnd_InOut'
 * '<S271>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/timebsdBlnd_InOut1'
 * '<S272>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/SCCC_CndStandStill/Enumerated Value'
 * '<S273>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/SCCC_CndStandStill/Enumerated Value1'
 * '<S274>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/SCCC_CndStandStill/Enumerated Value2'
 * '<S275>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/SCCC_CndStandStill/KeSCCR_M_StandstillThrsh'
 * '<S276>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/SCCC_CndStandStill/KeSCCR_b_AlwEPBCnd'
 * '<S277>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/SCCC_CndStandStill/KeSCCR_b_EnblSeriesModeCnd'
 * '<S278>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/SCCC_CndStandStill/KeSCCR_n_NoStandstillThrsh'
 * '<S279>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/timebsdBlnd_InOut/Blend_x_yTerm_TimeBased'
 * '<S280>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/timebsdBlnd_InOut/Set Block'
 * '<S281>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/timebsdBlnd_InOut/Blend_x_yTerm_TimeBased/Protected Division'
 * '<S282>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/timebsdBlnd_InOut1/Blend_x_yTerm_TimeBased'
 * '<S283>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/timebsdBlnd_InOut1/Set Block'
 * '<S284>' : 'SCCR_ac/SCCR_FastTEF2/SCCC_PassThrough/SCCC_StandStill/timebsdBlnd_InOut1/Blend_x_yTerm_TimeBased/Protected Division'
 * '<S285>' : 'SCCR_ac/SCCR_FastTEF2/SCCI_OptTrqOvrrd/DocBlock'
 * '<S286>' : 'SCCR_ac/SCCR_FastTEF2/SCCI_OptTrqOvrrd/KeSCCR_M_FrntAxlTrqEstOvrdVal'
 * '<S287>' : 'SCCR_ac/SCCR_FastTEF2/SCCI_OptTrqOvrrd/KeSCCR_M_RrAxlTrqEstOvrdVal'
 * '<S288>' : 'SCCR_ac/SCCR_FastTEF2/SCCI_OptTrqOvrrd/KeSCCR_b_FrntAxlTrqEstOvrdEnbl'
 * '<S289>' : 'SCCR_ac/SCCR_FastTEF2/SCCI_OptTrqOvrrd/KeSCCR_b_RrAxlTrqEstOvrdEnbl'
 * '<S290>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs'
 * '<S291>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs'
 * '<S292>' : 'SCCR_ac/SCCR_PwrOn/Sub_Out_Init'
 * '<S293>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/DocBlock'
 * '<S294>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_M_FrntAxlRqstInit'
 * '<S295>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_M_FrntAxlTrqEstInit'
 * '<S296>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_M_FrntAxlTrqEstInit1'
 * '<S297>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_M_RrAxlRqstInit'
 * '<S298>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_M_RrAxlTrqEstInit'
 * '<S299>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_b_FrntAxlMaxRqFAInit'
 * '<S300>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_b_FrntAxlMaxRqInit'
 * '<S301>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_b_FrntAxlMinRqFAInit'
 * '<S302>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_b_FrntAxlMinRqInit'
 * '<S303>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_b_FrntAxlTqRqFAInit'
 * '<S304>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_b_RrAxlMaxRqFAInit'
 * '<S305>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_b_RrAxlMaxRqInit'
 * '<S306>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_b_RrAxlMinRqFAInit'
 * '<S307>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_b_RrAxlMinRqInit'
 * '<S308>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_b_RrAxlTqRqFAInit'
 * '<S309>' : 'SCCR_ac/SCCR_PwrOn/SCCI_InitInputs/KeSCCR_e_EPBHoldStsInit'
 * '<S310>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/DocBlock'
 * '<S311>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/Variant Subsystem'
 * '<S312>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/Variant Subsystem/SCCO_No_Stub'
 * '<S313>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/Variant Subsystem/SCCO_Stub'
 * '<S314>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/Variant Subsystem/SCCO_No_Stub/KeSCCR_M_FrntAxlMaxRqOutInit'
 * '<S315>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/Variant Subsystem/SCCO_No_Stub/KeSCCR_M_FrntAxlMaxRqOutInit1'
 * '<S316>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/Variant Subsystem/SCCO_No_Stub/KeSCCR_M_FrntAxlMinRqOutInit'
 * '<S317>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/Variant Subsystem/SCCO_No_Stub/KeSCCR_M_FrntAxlMinRqOutInit1'
 * '<S318>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/Variant Subsystem/SCCO_No_Stub/KeSCCR_M_FrntAxlTrqEstOutInit'
 * '<S319>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/Variant Subsystem/SCCO_No_Stub/KeSCCR_M_RrAxlMaxRqOutInit'
 * '<S320>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/Variant Subsystem/SCCO_No_Stub/KeSCCR_M_RrAxlMinRqOutInit'
 * '<S321>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/Variant Subsystem/SCCO_No_Stub/KeSCCR_M_RrAxlTrqEstOutInit'
 * '<S322>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/Variant Subsystem/SCCO_No_Stub/Set Block'
 * '<S323>' : 'SCCR_ac/SCCR_PwrOn/SCCO_Init_Outputs/Variant Subsystem/SCCO_No_Stub/Set Block4'
 */
#endif                                 /* RTW_HEADER_SCCR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
