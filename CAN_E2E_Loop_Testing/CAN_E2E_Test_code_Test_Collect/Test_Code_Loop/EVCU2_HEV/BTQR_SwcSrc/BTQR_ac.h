/*
 * File: BTQR_ac.h
 *
 * Code generated for Simulink model 'BTQR_ac'.
 *
 * Model version                  : 9.110
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:10:36 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BTQR_ac_h_
#define RTW_HEADER_BTQR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef BTQR_ac_COMMON_INCLUDES_
#define BTQR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_BTQR.h"
#endif                                 /* BTQR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_BTQR_ac_T
{

#if Rte_SysCon_Variant_BTQR_2

    float32 LeBTQR_M_RegenBrkRearOffsetReq_out;
                              /* '<S20>/PokeBTQR_M_RegenBrkRearOffsetReqChrt' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_2

    float32 LeBTQR_M_RegenBrkFrontOffsetReq_out;
                             /* '<S19>/PokeBTQR_M_RegenBrkFrontOffsetReqChrt' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_2

    float32 LeBTQR_M_RegenBrkAxleTrqReq_out;
                                 /* '<S18>/PokeBTQR_M_RegenBrkAxleTrqReqChrt' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_2

    float32 LeBTQR_M_DrvrIntndedTotBrkTrqILE_out;
                            /* '<S17>/PokeBTQR_M_DrvrIntndedTotBrkTrqILEChrt' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

    float32 OutportBufferForVeBTQR_r_NVRatioLmtd_Out;/* '<S178>/Const1' */
    float32 OutportBufferForVeBTQR_M_RegenBrkAxleTrq;/* '<S178>/Const2' */
    float32 OutportBufferForVeBTQR_M_DrvrIntndedFric;/* '<S175>/Constant_Value3' */
    float32 OutportBufferForVeBTQI_M_RegenBrkAxleTrq;/* '<S175>/Constant_Value4' */
    float32 OutportBufferForVeBTQI_M_DrvrIntndedTotB;/* '<S175>/Constant_Value2' */
    float32 OutportBufferForVeBTQI_M_RegenBrkAxleT_o;/* '<S175>/Constant_Value5' */
    float32 OutportBufferForVeBTQI_M_DrvIntndTotBrkO;/* '<S175>/Constant_Value1' */
    float32 OutportBufferForVeBTQR_r_TrqDmnConvSumTo;/* '<S175>/Constant_Value6' */

#if Rte_SysCon_Variant_BTQR_2

    float32 OutportBufferForRegenBrkAxleTrqReq_Init;/* '<S177>/Constant_Value1' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_2

    float32 OutportBufferForDrvrIntndedTotBrkTrq_Ini;/* '<S177>/Constant_Value2' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_2

    float32 OutportBufferForDrvrIntndedFricBrkTrq_In;/* '<S177>/Constant_Value3' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_2

    float32 OutportBufferForDrvrIntndedTotBrkTrqILE_;/* '<S177>/Constant_Value4' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

    float32 OutportBufferForRegenBrkFrontOffsetReq_I;/* '<S177>/Constant_Value6' */
    float32 OutportBufferForRegenBrkRearOffsetReq_In;/* '<S177>/Constant_Value7' */

#if Rte_SysCon_Variant_BTQR_2

    float32 OutportBufferForBrkTrq_Driver_Init;/* '<S177>/Constant_Value5' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

    float32 VariantMergeForOutportVeBTQR_M_DrvIntndT;
    float32 VariantMergeForOutportVeBTQR_M_DrvrIntnd;
    float32 VariantMergeForOutportVeBTQR_M_RegenBrkA;
    float32 VariantMergeForOutportVeBTQR_r_NVRatioLm;

#if !Rte_SysCon_Variant_BTQR_1

    float32 Multiplication10;          /* '<S60>/Multiplication10' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    float32 SignalConversion1;         /* '<S60>/SignalConversion1' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 Gain;                      /* '<S67>/Gain' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 Gain_m;                    /* '<S68>/Gain' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

    float32 VM_Conditional_Signal_TmpVM_FcnCallSubsy;
    float32 VM_Conditional_Signal_TmpVM_FcnCallSub_a;
    float32 VM_Conditional_Signal_TmpVM_FcnCallSub_k;
    float32 VM_Conditional_Signal_TmpVM_FcnCallSub_n;

#if !Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubsys;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_c;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_i;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_b;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_mj;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_a;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_mt;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_bt;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_n;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_g;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_gs;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_gf;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_cy;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_p;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_nn;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    uint8 TmpSignalConversionAtTmpVM_FcnCallSubs_o;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_2

    boolean LeBTQR_b_RegenBrkActive_out;
                                     /* '<S23>/PokeBTQR_b_RegenBrkActiveChrt' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

    boolean LeBTQR_b_ESCEvntActv_out;  /* '<S21>/PokeBTQR_b_ESCEvntActvChrt' */
    boolean OutportBufferForRegenBrkAxleTrqReqFA_Ini;/* '<S177>/FALSE_Constant' */
    boolean OutportBufferForDrvrIntndedTotBrkTrqFA_I;/* '<S177>/FALSE_Constant1' */
    boolean OutportBufferForDrvrIntndedFricBrkTrqFA_;/* '<S177>/FALSE_Constant2' */
    boolean OutportBufferForDrvrIntndedTotBrkTrqILEF;/* '<S177>/FALSE_Constant3' */
    boolean OutportBufferForRegenBrkActive_Init;/* '<S177>/FALSE_Constant7' */
    boolean OutportBufferForRegenBrkActiveFA_Init;/* '<S177>/FALSE_Constant4' */
    boolean OutportBufferForRegenBrkFrontOffsetReqFA;/* '<S177>/FALSE_Constant5' */
    boolean OutportBufferForRegenBrkRearOffsetReqFA_;/* '<S177>/FALSE_Constant6' */

#if Rte_SysCon_Variant_BTQR_2

    boolean OutportBufferForHNGActv_Init;/* '<S177>/FALSE_Constant8' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

    boolean VariantMerge_For_Variant_Source_VariantS;
    boolean VariantMerge_For_Variant_Source_Varian_c;

#if Rte_SysCon_Variant_BTQR_1

    boolean OutportBufferForRollsModeAct_Init;/* '<S177>/KeBTQR_b_RollsModeActInit' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean OutportBufferForFricBrakeTestEnInit;
                                     /* '<S177>/KeBTQR_b_FricBrakeTestEnInit' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSubs_e;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSubs_l;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_b3;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_aj;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

    boolean VM_Conditional_Signal_TmpVM_FcnCallSub_m;

#if Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_g3;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_bi;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_nm;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_ay;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_cn;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_mw;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_at;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSubs_k;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSubs_f;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSub_lx;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    boolean TmpSignalConversionAtTmpVM_FcnCallSubs_j;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean Calib;                     /* '<S185>/Calib' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean Calib_f;                   /* '<S184>/Calib' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

    boolean Calib_n;                   /* '<S182>/Calib' */
    boolean FALSE_Constant10;          /* '<S177>/FALSE_Constant10' */

#if !Rte_SysCon_Variant_BTQR_1

    TePLTR_e_EPBHoldSts TmpSignalConversionAtTmpVM_FcnCallSub_ah;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    TeOHSR_e_VLE_DriveStat TmpSignalConversionAtTmpVM_FcnCallSub_kk;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    TeDTRR_e_SumFWIDFst TmpSignalConversionAtTmpVM_FcnCallSub_oh;
                         /* '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

    TeDFIB_e_FaultDebounceStatus OutportBufferForVeBTQR_e_FaultSts_RBS_U1;/* '<S178>/Enumerated_Constant' */

#if Rte_SysCon_Variant_BTQR_1

    TeDFIB_e_FaultDebounceStatus Merge;/* '<S35>/Merge' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

    TeBTQR_e_ReqTorqueOverLayActive VariantMerge_For_Variant_Source_Varian_a;

#if Rte_SysCon_Variant_BTQR_1

    TeBTQR_e_ReqTorqueOverLayActive Merge_h;/* '<S66>/Merge' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    TeBTQR_e_ReqTorqueOverLayActive Constant;/* '<S179>/Constant' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    TeBTQR_e_ReqTorqueOverLayActive Constant_b;/* '<S180>/Constant' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_2

    TeBTQR_e_AVHSts OutportBufferForAVHSts_Init;/* '<S177>/Enumerated_Constant' */

#define B_BTQR_AC_T_VARIANT_EXISTS
#endif

    TeBTQR_e_AVHSts VM_Conditional_Signal_TmpVM_FcnCallSub_i;
}
B_BTQR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_BTQR_ac_T
{

#if Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay_DSTATE;          /* '<S42>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay2_DSTATE;         /* '<S60>/Unit Delay2' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay_DSTATE_k;        /* '<S162>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay1_DSTATE;         /* '<S160>/Unit Delay1' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay_DSTATE_i;        /* '<S160>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay_DSTATE_i4;       /* '<S141>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay_DSTATE_g;        /* '<S140>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay_DSTATE_b;        /* '<S139>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay_DSTATE_e;        /* '<S138>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay_DSTATE_bm;       /* '<S107>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay2_DSTATE_o;       /* '<S112>/Unit Delay2' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay_DSTATE_c;        /* '<S94>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay_DSTATE_l;        /* '<S77>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay_DSTATE_d;        /* '<S76>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 UnitDelay_DSTATE_j3;       /* '<S75>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    uint16 UnitDelay_DSTATE_o;         /* '<S87>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    uint16 UnitDelay_DSTATE_c1;        /* '<S86>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    uint16 UnitDelay_DSTATE_po;        /* '<S85>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

    uint16 NeBTQD_Cnt_ESPSignalDiag_MFOP;
                                /* '<Root>/DSM_NeBTQD_Cnt_ESPSignalDiag_MFOP' */

#if Rte_SysCon_Variant_BTQR_1

    boolean UnitDelay_DSTATE_gl;       /* '<S44>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean UnitDelay1_DSTATE_n;       /* '<S44>/Unit Delay1' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean UnitDelay_DSTATE_gf;       /* '<S45>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean UnitDelay_DSTATE_h;        /* '<S43>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    boolean UnitDelay_DSTATE_lk;       /* '<S174>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    boolean UnitDelay_DSTATE_h1;       /* '<S168>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean UnitDelay_DSTATE_gs;       /* '<S93>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean UnitDelay_DSTATE_i2;       /* '<S92>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean UnitDelay_DSTATE_gc;       /* '<S91>/Unit Delay' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    sint8 If_ActiveSubsystem;          /* '<S60>/If' */

#define DW_BTQR_AC_T_VARIANT_EXISTS
#endif

    uint8 StatusByte_LostCommABSCM;   /* '<Root>/DS_StatusByte_LostCommABSCM' */
}
DW_BTQR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeDFIB_e_FaultDebounceStatus Constant;/* '<S186>/Constant' */

#if Rte_SysCon_Variant_BTQR_2

    const TeBTQR_e_AVHSts Constant_l;  /* '<S181>/Constant' */

#define CONSTB_BTQR_AC_T_VARIANT_EXISTS
#endif

}
ConstB_BTQR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_BTQR_1

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S83>/Vector'
     *   '<S84>/Vector'
     */
    uint32 pooled7[2];

#define CONSTP_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S105>/Vector'
     */
    uint32 Vector_maxIndex[2];

#define CONSTP_BTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BTQR_1

    /* Computed Parameter: Vector_maxIndex_h
     * Referenced by: '<S111>/Vector'
     */
    uint32 Vector_maxIndex_h[2];

#define CONSTP_BTQR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_BTQR_1

    /* Computed Parameter: Vector_maxIndex_f
     * Referenced by: '<S172>/Vector'
     */
    uint32 Vector_maxIndex_f[2];

#define CONSTP_BTQR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTP_BTQR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstP_BTQR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BTQR
#include "MemMap.h"

extern VAR(B_BTQR_ac_T, BTQR_VAR_INIT) BTQR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BTQR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BTQR
#include "MemMap.h"

extern VAR(DW_BTQR_ac_T, BTQR_VAR_INIT) BTQR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BTQR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_BTQR
#include "MemMap.h"

extern CONST(ConstB_BTQR_ac_T, BTQR_VAR_INIT) BTQR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_BTQR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_BTQR
#include "MemMap.h"

extern CONST(ConstP_BTQR_ac_T, BTQR_VAR_INIT) BTQR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_BTQR
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
 * '<Root>' : 'BTQR_ac'
 * '<S1>'   : 'BTQR_ac/BTQR_MedTEB'
 * '<S2>'   : 'BTQR_ac/BTQR_PwrOff'
 * '<S3>'   : 'BTQR_ac/BTQR_PwrOn'
 * '<S4>'   : 'BTQR_ac/FsftBTQR_M_BrkTrq_Driver'
 * '<S5>'   : 'BTQR_ac/FsftBTQR_M_DrvrIntndedFricBrkTrq'
 * '<S6>'   : 'BTQR_ac/FsftBTQR_M_DrvrIntndedTotBrkTrq'
 * '<S7>'   : 'BTQR_ac/FsftBTQR_M_DrvrIntndedTotBrkTrqILE'
 * '<S8>'   : 'BTQR_ac/FsftBTQR_M_RegenBrkAxleTrqReq'
 * '<S9>'   : 'BTQR_ac/FsftBTQR_M_RegenBrkFrontOffsetReq'
 * '<S10>'  : 'BTQR_ac/FsftBTQR_M_RegenBrkRearOffsetReq'
 * '<S11>'  : 'BTQR_ac/FsftBTQR_b_ESCEvntActv'
 * '<S12>'  : 'BTQR_ac/FsftBTQR_b_RegenBrkActive'
 * '<S13>'  : 'BTQR_ac/PokeBTQR_FricBrakeTest'
 * '<S14>'  : 'BTQR_ac/PokeBTQR_M_BrkTrq_Driver'
 * '<S15>'  : 'BTQR_ac/PokeBTQR_M_DrvrIntndedFricBrkTrq'
 * '<S16>'  : 'BTQR_ac/PokeBTQR_M_DrvrIntndedTotBrkTrq'
 * '<S17>'  : 'BTQR_ac/PokeBTQR_M_DrvrIntndedTotBrkTrqILE'
 * '<S18>'  : 'BTQR_ac/PokeBTQR_M_RegenBrkAxleTrqReq'
 * '<S19>'  : 'BTQR_ac/PokeBTQR_M_RegenBrkFrontOffsetReq'
 * '<S20>'  : 'BTQR_ac/PokeBTQR_M_RegenBrkRearOffsetReq'
 * '<S21>'  : 'BTQR_ac/PokeBTQR_b_ESCEvntActv'
 * '<S22>'  : 'BTQR_ac/PokeBTQR_b_HNGActv'
 * '<S23>'  : 'BTQR_ac/PokeBTQR_b_RegenBrkActive'
 * '<S24>'  : 'BTQR_ac/PokeBTQR_b_RollsModeAct'
 * '<S25>'  : 'BTQR_ac/PokeBTQR_e_AVHSts'
 * '<S26>'  : 'BTQR_ac/BTQR_MedTEB/BTQD'
 * '<S27>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem'
 * '<S28>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/CountingEnableFlag'
 * '<S29>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/DocBlock'
 * '<S30>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/KeBTQD_Cnt_ESPSignalFail'
 * '<S31>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/KeBTQD_Cnt_ESPSignalPass'
 * '<S32>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/KeBTQR_b_RBS_U1003_LtchEnbl'
 * '<S33>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/ResetCountsFOMs'
 * '<S34>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/SampleFailFlag'
 * '<S35>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2'
 * '<S36>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/CountingEnableFlag/EvtInfo_LostCommABSCM_FaultActiveTOC_1'
 * '<S37>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/CountingEnableFlag/HeBTQR_t_MedTEB'
 * '<S38>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/CountingEnableFlag/KeBTQD_U_SysVoltLowerLimit'
 * '<S39>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/CountingEnableFlag/KeBTQD_U_SysVoltUpperLimit'
 * '<S40>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/CountingEnableFlag/KeBTQD_b_ESPSignalDiagEnbl'
 * '<S41>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/CountingEnableFlag/KeBTQR_t_DebnTimer'
 * '<S42>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/CountingEnableFlag/Timer Reset Trigger Enabled'
 * '<S43>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/CountingEnableFlag/Timer Reset Trigger Enabled/EdgeRising'
 * '<S44>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/BaseXofY'
 * '<S45>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/EdgeFalling1'
 * '<S46>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/Enumerated Constant16'
 * '<S47>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/Fail'
 * '<S48>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/Init'
 * '<S49>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/Pass'
 * '<S50>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/UpdateMFOP'
 * '<S51>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S52>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S53>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/Fail/Enumerated Constant16'
 * '<S54>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/Init/Enumerated Constant16'
 * '<S55>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/Pass/Enumerated Constant16'
 * '<S56>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S57>'  : 'BTQR_ac/BTQR_MedTEB/BTQD/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S58>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem'
 * '<S59>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC'
 * '<S60>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG'
 * '<S61>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DocBlock'
 * '<S62>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM'
 * '<S63>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque'
 * '<S64>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/MaxOverlayRegenBrakingTorque'
 * '<S65>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/NVRatio'
 * '<S66>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/Overlaybrake'
 * '<S67>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/Set Block1'
 * '<S68>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/Set Block2'
 * '<S69>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/Set Block3'
 * '<S70>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/Vehicle_Speed'
 * '<S71>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/Enumerated Value1'
 * '<S72>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/Enumerated Value10'
 * '<S73>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/Enumerated Value14'
 * '<S74>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/Enumerated Value4'
 * '<S75>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/GradientLimiter'
 * '<S76>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/GradientLimiter1'
 * '<S77>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/GradientLimiter2'
 * '<S78>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/KeBTQR_Cf_RgenBrkTorqLDDeactvIdlSpd'
 * '<S79>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/KeBTQR_Cf_RgenBrkTorqLDDeactvSEM'
 * '<S80>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/KeBTQR_Cf_RgenBrkTorqLUDeactvIdlSpd'
 * '<S81>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/KeBTQR_Cf_RgenBrkTorqLUDeactvSEM'
 * '<S82>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/KeBTQR_Cnt_RegnBrkDeacDebSamples'
 * '<S83>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/KtBTQR_Cf_RegenRampIn4ESC'
 * '<S84>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/KtBTQR_Cf_RegenRampOut4ESC'
 * '<S85>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/Turn On Delay Sample'
 * '<S86>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/Turn On Delay Sample1'
 * '<S87>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/Turn On Delay Sample2'
 * '<S88>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/GradientLimiter/Limiter'
 * '<S89>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/GradientLimiter1/Limiter'
 * '<S90>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/GradientLimiter2/Limiter'
 * '<S91>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/Turn On Delay Sample/EdgeRising'
 * '<S92>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/Turn On Delay Sample1/EdgeRising'
 * '<S93>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverBrakeRequestDeactivationforSEM/Turn On Delay Sample2/EdgeRising'
 * '<S94>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/Digital Lowpass Reset Enabled'
 * '<S95>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/GradientLimiter'
 * '<S96>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/KeBTQR_M_DrvrIntndedTotBrkTrqMax'
 * '<S97>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/KeBTQR_M_OutputTrqDrvrIntGradThresh'
 * '<S98>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/KeBTQR_Pct_BrakePedalPctOvrr'
 * '<S99>'  : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/KeBTQR_b_BrakePedalPctEnblOvrr'
 * '<S100>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/KeBTQR_k_RgnReqFlt'
 * '<S101>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/KtBTQR_M_DrvrIntBrkTrqDwnNegGrd'
 * '<S102>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/KtBTQR_M_DrvrIntBrkTrqDwnPosGrd'
 * '<S103>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/KtBTQR_M_DrvrIntBrkTrqUpNegGrd'
 * '<S104>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/KtBTQR_M_DrvrIntBrkTrqUpPosGrd'
 * '<S105>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/KtBTQR_Pct_BrakePedalPct'
 * '<S106>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/Limiter'
 * '<S107>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/LowPassFilter'
 * '<S108>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/Set Block1'
 * '<S109>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/Set Block2'
 * '<S110>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/GradientLimiter/Limiter'
 * '<S111>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/LowPassFilter/KtBTQR_t_ReqRegnBrkFltConstT'
 * '<S112>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/LowPassFilter/LowPassFilter'
 * '<S113>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/LowPassFilter/LowPassFilter/Clip1'
 * '<S114>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/LowPassFilter/LowPassFilter/Clip2'
 * '<S115>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/LowPassFilter/LowPassFilter/Clip1/Limiter1'
 * '<S116>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/DriverIntenededOutputBrakeTorque/LowPassFilter/LowPassFilter/Clip2/Limiter1'
 * '<S117>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/MaxOverlayRegenBrakingTorque/Digital Lowpass Reset Enabled'
 * '<S118>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/MaxOverlayRegenBrakingTorque/KeBTQR_J_VehInertia'
 * '<S119>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/MaxOverlayRegenBrakingTorque/KeBTQR_a_MaxDeclG'
 * '<S120>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/MaxOverlayRegenBrakingTorque/KeBTQR_k_WhlSpInputSpdRatioFltrCnst'
 * '<S121>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/MaxOverlayRegenBrakingTorque/KeBTQR_l_VehWhlRadius'
 * '<S122>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/MaxOverlayRegenBrakingTorque/KeBTQR_m_BaseVehMass'
 * '<S123>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/MaxOverlayRegenBrakingTorque/KtBTQR_r_MassFactor'
 * '<S124>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/MaxOverlayRegenBrakingTorque/KtBTQR_r_SlopeFactor'
 * '<S125>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/MaxOverlayRegenBrakingTorque/Limiter2'
 * '<S126>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/MaxOverlayRegenBrakingTorque/Limiter3'
 * '<S127>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/MaxOverlayRegenBrakingTorque/Protected Division'
 * '<S128>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/NVRatio/KeBTQR_v_MinVehSpdForNVRatio'
 * '<S129>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/NVRatio/Limiter'
 * '<S130>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/NVRatio/Protected Division'
 * '<S131>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/Overlaybrake/Enumerated Value'
 * '<S132>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/Overlaybrake/Enumerated Value1'
 * '<S133>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/Overlaybrake/RegenActive'
 * '<S134>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/Overlaybrake/RegenInActive'
 * '<S135>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_FUNC/Vehicle_Speed/Limiter1'
 * '<S136>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/Enumerated_Constant'
 * '<S137>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/Enumerated_Constant1'
 * '<S138>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/GradientLimiter1'
 * '<S139>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/GradientLimiter2'
 * '<S140>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/GradientLimiter3'
 * '<S141>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/GradientLimiter4'
 * '<S142>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_Pct_AccPdlNotAppliedLim'
 * '<S143>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_b_AVH_GC_GG_Sel'
 * '<S144>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_b_CreepCancelEna'
 * '<S145>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_b_DrvIntndBrkTrqILEOvrrd'
 * '<S146>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_b_OneBrkBoxEnable'
 * '<S147>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_b_OvrTransTrqRatio'
 * '<S148>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_b_OvrTrqCnvRatio'
 * '<S149>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_dM_FakeBrkTrqRampOutGrd'
 * '<S150>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_r_BrkFailSftNegGrd'
 * '<S151>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_r_BrkFailSftPosGrd'
 * '<S152>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_r_NVRatioLmtd'
 * '<S153>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_r_RgnReqFailSftNegGrd'
 * '<S154>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_r_RgnReqFailSftPosGrd'
 * '<S155>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_r_TransTrqRatio'
 * '<S156>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_r_TrqCnvRatio'
 * '<S157>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_t_12p5_dT'
 * '<S158>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KeBTQR_t_TiDebouncerSetRegnReqFA'
 * '<S159>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/KtBTQR_M_OneBrkBoxPctToRgnBrk'
 * '<S160>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/RampIn'
 * '<S161>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/Set_Block'
 * '<S162>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/Turn_On_Delay_Time'
 * '<S163>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/GradientLimiter1/Limiter'
 * '<S164>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/GradientLimiter2/Limiter'
 * '<S165>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/GradientLimiter3/Limiter'
 * '<S166>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/GradientLimiter4/Limiter'
 * '<S167>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/RampIn/DocBlock'
 * '<S168>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/RampIn/EdgeRising'
 * '<S169>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/RampIn/KeBTQR_dM_FakeBrkTrqRampInGrd'
 * '<S170>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/RampIn/KeBTQR_k_CreepCancelBlendLim'
 * '<S171>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/RampIn/KeTSXR_r_All_FDRratio'
 * '<S172>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/RampIn/KtCTCR_k_CreepCancelBlend'
 * '<S173>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/RampIn/Protected_Division'
 * '<S174>' : 'BTQR_ac/BTQR_MedTEB/Subsystem/Variant_Subsystem/BTQR_MSG/Turn_On_Delay_Time/EdgeRising'
 * '<S175>' : 'BTQR_ac/BTQR_PwrOn/BTQO_InitFUNC'
 * '<S176>' : 'BTQR_ac/BTQR_PwrOn/DSM_Init'
 * '<S177>' : 'BTQR_ac/BTQR_PwrOn/Init_BTQI'
 * '<S178>' : 'BTQR_ac/BTQR_PwrOn/Sub_Out_Init'
 * '<S179>' : 'BTQR_ac/BTQR_PwrOn/BTQO_InitFUNC/Enumerated_Value'
 * '<S180>' : 'BTQR_ac/BTQR_PwrOn/BTQO_InitFUNC/Enumerated_Value1'
 * '<S181>' : 'BTQR_ac/BTQR_PwrOn/Init_BTQI/Enumerated_Constant'
 * '<S182>' : 'BTQR_ac/BTQR_PwrOn/Init_BTQI/KeBTQR_b_ESCEvntActvFAInit'
 * '<S183>' : 'BTQR_ac/BTQR_PwrOn/Init_BTQI/KeBTQR_b_ESCEvntActvInit'
 * '<S184>' : 'BTQR_ac/BTQR_PwrOn/Init_BTQI/KeBTQR_b_FricBrakeTestEnInit'
 * '<S185>' : 'BTQR_ac/BTQR_PwrOn/Init_BTQI/KeBTQR_b_RollsModeActInit'
 * '<S186>' : 'BTQR_ac/BTQR_PwrOn/Sub_Out_Init/Enumerated_Constant'
 * '<S187>' : 'BTQR_ac/FsftBTQR_M_BrkTrq_Driver/FsftBTQR_M_BrkTrq_DriverChrt'
 * '<S188>' : 'BTQR_ac/FsftBTQR_M_DrvrIntndedFricBrkTrq/FsftBTQR_M_DrvrIntndedFricBrkTrqChrt'
 * '<S189>' : 'BTQR_ac/FsftBTQR_M_DrvrIntndedTotBrkTrq/FsftBTQR_M_DrvrIntndedTotBrkTrqChrt'
 * '<S190>' : 'BTQR_ac/FsftBTQR_M_DrvrIntndedTotBrkTrqILE/FsftBTQR_M_DrvrIntndedTotBrkTrqILEChrt'
 * '<S191>' : 'BTQR_ac/FsftBTQR_M_RegenBrkAxleTrqReq/FsftBTQR_M_RegenBrkAxleTrqReqChrt'
 * '<S192>' : 'BTQR_ac/FsftBTQR_M_RegenBrkFrontOffsetReq/FsftBTQR_M_RegenBrkFrontOffsetReqChrt'
 * '<S193>' : 'BTQR_ac/FsftBTQR_M_RegenBrkRearOffsetReq/FsftBTQR_M_RegenBrkRearOffsetReqChrt'
 * '<S194>' : 'BTQR_ac/FsftBTQR_b_ESCEvntActv/FsftBTQR_b_ESCEvntActvChrt'
 * '<S195>' : 'BTQR_ac/FsftBTQR_b_RegenBrkActive/FsftBTQR_b_RegenBrkActiveChrt'
 * '<S196>' : 'BTQR_ac/PokeBTQR_FricBrakeTest/PokeBTQR_FricBrakeTestChrt'
 * '<S197>' : 'BTQR_ac/PokeBTQR_M_BrkTrq_Driver/PokeBTQR_M_BrkTrq_DriverChrt'
 * '<S198>' : 'BTQR_ac/PokeBTQR_M_DrvrIntndedFricBrkTrq/PokeBTQR_M_DrvrIntndedFricBrkTrqChrt'
 * '<S199>' : 'BTQR_ac/PokeBTQR_M_DrvrIntndedTotBrkTrq/PokeBTQR_M_DrvrIntndedTotBrkTrqChrt'
 * '<S200>' : 'BTQR_ac/PokeBTQR_M_DrvrIntndedTotBrkTrqILE/PokeBTQR_M_DrvrIntndedTotBrkTrqILEChrt'
 * '<S201>' : 'BTQR_ac/PokeBTQR_M_RegenBrkAxleTrqReq/PokeBTQR_M_RegenBrkAxleTrqReqChrt'
 * '<S202>' : 'BTQR_ac/PokeBTQR_M_RegenBrkFrontOffsetReq/PokeBTQR_M_RegenBrkFrontOffsetReqChrt'
 * '<S203>' : 'BTQR_ac/PokeBTQR_M_RegenBrkRearOffsetReq/PokeBTQR_M_RegenBrkRearOffsetReqChrt'
 * '<S204>' : 'BTQR_ac/PokeBTQR_b_ESCEvntActv/PokeBTQR_b_ESCEvntActvChrt'
 * '<S205>' : 'BTQR_ac/PokeBTQR_b_HNGActv/PokeBTQR_b_HNGActvChrt'
 * '<S206>' : 'BTQR_ac/PokeBTQR_b_RegenBrkActive/PokeBTQR_b_RegenBrkActiveChrt'
 * '<S207>' : 'BTQR_ac/PokeBTQR_b_RollsModeAct/PokeBTQR_b_RollsModeActChrt'
 * '<S208>' : 'BTQR_ac/PokeBTQR_e_AVHSts/PokeBTQR_e_AVHStsChrt'
 */
#endif                                 /* RTW_HEADER_BTQR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
