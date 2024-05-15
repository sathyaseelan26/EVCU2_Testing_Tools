/*
 * File: TTQR_ac.h
 *
 * Code generated for Simulink model 'TTQR_ac'.
 *
 * Model version                  : 9.58
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:55:32 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TTQR_ac_h_
#define RTW_HEADER_TTQR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef TTQR_ac_COMMON_INCLUDES_
#define TTQR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_TTQR.h"
#endif                                 /* TTQR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_TTQR_ac_T
{
    float32 OutportBufferForTTQR_M_SumTrqSt;/* '<S250>/ConstantValue2' */
    float32 OutportBufferForTTQR_M_SumTrqAc;/* '<S250>/ConstantValue3' */
    float32 OutportBufferForTTQC_M_EngP1Sum;/* '<S250>/ConstantValue4' */
    float32 OutportBufferForTTQR_M_EngP1Sum;/* '<S250>/ConstantValue5' */
    float32 OutportBufferForTTQR_M_LoadTorq;/* '<S250>/ConstantValue6' */
    float32 OutportBufferForTTQC_M_HTDRLoad;/* '<S250>/ConstantValue7' */
    float32 OutportBufferForTTQR_M_LoadTo_d;/* '<S250>/ConstantValue30' */
    float32 OutportBufferForTTQR_M_LoadTo_l;/* '<S250>/ConstantValue18' */
    float32 OutportBufferForTTQR_M_LoadT_da;/* '<S250>/ConstantValue8' */
    float32 OutportBufferForTTQR_M_SumMaxTr;/* '<S250>/ConstantValue12' */
    float32 OutportBufferForTTQR_M_TCMSumTr;/* '<S250>/ConstantValue9' */
    float32 OutportBufferForTTQR_M_TCMSum_e;/* '<S250>/ConstantValue10' */
    float32 OutportBufferForTTQR_M_SumTrq_h;/* '<S250>/ConstantValue15' */
    float32 OutportBufferForVeTTQR_M_LoadFr;/* '<S250>/ConstantValue20' */
    float32 OutportBufferForVeTTQR_M_Load_d;/* '<S250>/ConstantValue19' */
    float32 OutportBufferForVeTTQR_M_Load_h;/* '<S250>/ConstantValue17' */
    float32 OutportBufferForVeTTQR_M_Load_i;/* '<S250>/ConstantValue16' */
    float32 OutportBufferForTTQR_M_SumMinTr;/* '<S250>/ConstantValue13' */
    float32 OutportBufferForVeTTQR_M_SumTrq;/* '<S250>/ConstantValue14' */
    float32 OutportBufferForVeTTQR_M_SumT_m;/* '<S250>/ConstantValue11' */
    float32 OutportBufferForVeTTQR_M_SumTor;/* '<S250>/ConstantValue23' */
    float32 OutportBufferForVeTTQR_M_SumT_j;/* '<S250>/ConstantValue24' */
    float32 OutportBufferForVeTTQR_M_SumT_f;/* '<S250>/ConstantValue25' */
    float32 OutportBufferForVeTTQR_M_SumT_d;/* '<S250>/ConstantValue26' */
    float32 OutportBufferForVeTTQR_M_SumT_p;/* '<S250>/ConstantValue28' */
    float32 OutportBufferForVeTTQR_M_SumT_k;/* '<S250>/ConstantValue29' */

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 Gain;                      /* '<S244>/Gain' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 Gain_i;                    /* '<S245>/Gain' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 Gain_f;                    /* '<S246>/Gain' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 Gain_l;                    /* '<S247>/Gain' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 Gain_p;                    /* '<S248>/Gain' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 Gain_c;                    /* '<S249>/Gain' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 Gain_b;                    /* '<S103>/Gain' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 Gain_a;                    /* '<S104>/Gain' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 Gain_l0;                   /* '<S105>/Gain' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 Gain_o;                    /* '<S106>/Gain' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 Sum1;                      /* '<S174>/Sum1' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 Sum2;                      /* '<S174>/Sum2' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 VariantMerge_For_Variant_Source;

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_FcnC;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_Fc_i;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_Fc_a;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_Fc_d;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_Fc_c;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_Fc_m;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_Fc_f;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_Fc_l;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_F_ik;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_Fc_p;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_F_cx;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_Fc_o;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_F_pb;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_Fc_n;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_F_id;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_F_dq;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_Fc_k;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM_F_n2;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 TmpSignalConversionAtTmpVM__iku;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForTTQR_b_SumTrqSt;/* '<S250>/KeTTQR_b_SumTrqStFAInit' */
    boolean OutportBufferForTTQR_b_SumTrqAc;/* '<S250>/KeTTQR_b_SumTrqActFAInit' */
    boolean OutportBufferForTTQR_b_TransTrq;/* '<S250>/ConstantValue27' */
    boolean OutportBufferForTTQR_b_TransT_a;/* '<S250>/ConstantValue21' */
    boolean OutportBufferForVeTTQC_b_EngTrq;/* '<S250>/ConstantValue1' */

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    boolean OutportBufferForVeTTQC_b_EngT_d;
                                      /* '<S101>/KeTTQR_b_EngTrq_Enbl_Rq_TCM' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean Gain_ay;                   /* '<S107>/Gain' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean Logical1;                  /* '<S109>/Logical1' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean TmpSignalConversionAtTmpVM_F_m0;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean TmpSignalConversionAtTmpVM_F_ol;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean TmpSignalConversionAtTmpVM_Fc_j;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean TmpSignalConversionAtTmpVM_F_me;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean TmpSignalConversionAtTmpVM_F_lx;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean TmpSignalConversionAtTmpVM_F_cz;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean TmpSignalConversionAtTmpVM_F_lz;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean VM_Conditional_Signal_TmpVM_Fcn;

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

    TeTRNR_e_TCMGearStat OutportBufferForVeTTQC_e_GrMax_;/* '<S250>/EnumeratedValue3' */
    TeTRNR_e_TCMGearStat OutportBufferForVeTTQC_e_GrMin_;/* '<S250>/EnumeratedValue4' */

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    TeTRNR_e_TCMGearStat OutportBufferForVeTTQC_e_GrMa_h;/* '<S101>/KeTTQR_e_GrMax_Rq' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    TeTRNR_e_TCMGearStat OutportBufferForVeTTQC_e_GrMi_o;/* '<S101>/KeTTQR_e_GrMin_Rq' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

    TeTINR_e_TCM_TrqCntrlModeReq OutportBufferForVeTTQR_e_TCMTrq;/* '<S250>/EnumeratedValue1' */
    TeTINR_e_TCM_TrqCntrlModeReq OutportBufferForVeTTQR_e_TCMT_p;/* '<S250>/EnumeratedValue2' */

#if Rte_SysCon_Variant_TTQR_FUNC

    TeTINR_e_TCM_TrqCntrlModeReq TmpSignalConversionAtTmpVM_F_ow;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeTINR_e_TCM_TrqCntrlModeReq TmpSignalConversionAtTmpVM_F_p1;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeTINR_e_TCM_TrqCntrlModeReq TmpSignalConversionAtTmpVM_F_oj;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeOHSR_e_VLE_DriveStat TmpSignalConversionAtTmpVM_F_ct;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeDTRR_e_SumFWIDFst TmpSignalConversionAtTmpVM_F_iq;
                        /* '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */

#define B_TTQR_AC_T_VARIANT_EXISTS
#endif

}
B_TTQR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_TTQR_ac_T
{

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay3_DSTATE;         /* '<S129>/Unit Delay3' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE;          /* '<S108>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay1_DSTATE;         /* '<S111>/Unit Delay1' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay3_DSTATE_o;       /* '<S130>/Unit Delay3' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_e;        /* '<S111>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay3_DSTATE_i;       /* '<S157>/UnitDelay3' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_k;        /* '<S109>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay1_DSTATE_e;       /* '<S140>/UnitDelay1' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay3_DSTATE_c;       /* '<S158>/UnitDelay3' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_e4[2];    /* '<S235>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay1_DSTATE_d[2];    /* '<S235>/Unit Delay1' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_d[2];     /* '<S228>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay3_DSTATE_iy;      /* '<S228>/Unit Delay3' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_h;        /* '<S216>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_ez;       /* '<S218>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay3_DSTATE_f;       /* '<S218>/Unit Delay3' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_g;        /* '<S217>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_ge;       /* '<S223>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay3_DSTATE_e;       /* '<S223>/Unit Delay3' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_i;        /* '<S140>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC && Rte_SysCon_Variant_TTQR_SumTrqCalc_TiPDCL

    float32 UnitDelay_DSTATE_ia;       /* '<S211>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_f;        /* '<S206>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_gu[2];    /* '<S193>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_kk;       /* '<S192>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_db;       /* '<S180>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_p;        /* '<S170>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_hy;       /* '<S167>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_pq;       /* '<S138>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_ga;       /* '<S135>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay3_DSTATE_k;       /* '<S83>/Unit Delay3' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_ee;       /* '<S7>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_eh;       /* '<S83>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay1_DSTATE_dw;      /* '<S60>/UnitDelay1' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_a;        /* '<S78>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_b;        /* '<S26>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay1_DSTATE_f;       /* '<S28>/UnitDelay1' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 UnitDelay_DSTATE_g0;       /* '<S48>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_f5;       /* '<S188>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_eeg;      /* '<S176>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay1_DSTATE_p;       /* '<S228>/Unit Delay1' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay1_DSTATE_g;       /* '<S218>/Unit Delay1' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay1_DSTATE_fu;      /* '<S223>/Unit Delay1' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_av;       /* '<S229>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_j;        /* '<S213>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC && Rte_SysCon_Variant_TTQR_SumTrqCalc_TiPDCL

    boolean UnitDelay_DSTATE_ei;       /* '<S212>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_jr;       /* '<S207>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_o;        /* '<S168>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_pr;       /* '<S165>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_n;        /* '<S136>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_c;        /* '<S133>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay1_DSTATE_p2;      /* '<S83>/Unit Delay1' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_gf;       /* '<S98>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_gg;       /* '<S97>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_ar;       /* '<S96>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_h5;       /* '<S86>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_l;        /* '<S85>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_d4;       /* '<S84>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_iv;       /* '<S57>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_ac;       /* '<S82>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_fa;       /* '<S60>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_bs;       /* '<S65>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_p0;       /* '<S24>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_kl;       /* '<S52>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_l3;       /* '<S35>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_e1;       /* '<S28>/UnitDelay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_ko;       /* '<S34>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean UnitDelay_DSTATE_m;        /* '<S33>/Unit Delay' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeTINR_e_TCM_TrqCntrlModeReq UnitDelay1_DSTATE_n;/* '<S61>/UnitDelay1' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeTINR_e_TCM_TrqCntrlModeReq UnitDelay1_DSTATE_b;/* '<S29>/UnitDelay1' */

#define DW_TTQR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_TTQR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_TTQR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeTRNR_e_TCMGearStat Constant;/* '<S253>/Constant' */
    const TeTRNR_e_TCMGearStat Constant_k;/* '<S254>/Constant' */
    const TeTINR_e_TCM_TrqCntrlModeReq Constant_m;/* '<S251>/Constant' */
    const TeTINR_e_TCM_TrqCntrlModeReq Constant_n;/* '<S252>/Constant' */
}
ConstB_TTQR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_TTQR_FUNC

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S124>/Vector'
     *   '<S152>/Vector'
     */
    uint32 pooled8[2];

#define CONSTP_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S123>/Vector'
     *   '<S151>/Vector'
     */
    uint32 pooled9[2];

#define CONSTP_TTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S126>/Vector'
     *   '<S154>/Vector'
     */
    uint32 pooled10[2];

#define CONSTP_TTQR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTP_TTQR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstP_TTQR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TTQR
#include "MemMap.h"

extern VAR(B_TTQR_ac_T, TTQR_VAR_INIT) TTQR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TTQR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TTQR
#include "MemMap.h"

extern VAR(DW_TTQR_ac_T, TTQR_VAR_INIT) TTQR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TTQR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_TTQR
#include "MemMap.h"

extern CONST(ConstB_TTQR_ac_T, TTQR_VAR_INIT) TTQR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_TTQR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TTQR
#include "MemMap.h"

extern CONST(ConstP_TTQR_ac_T, TTQR_VAR_INIT) TTQR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_TTQR
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
 * '<Root>' : 'TTQR_ac'
 * '<S1>'   : 'TTQR_ac/TTQR_MedTEB2'
 * '<S2>'   : 'TTQR_ac/TTQR_MedTEB3'
 * '<S3>'   : 'TTQR_ac/TTQR_PwrOn'
 * '<S4>'   : 'TTQR_ac/TTQR_MedTEB2/TTQC_PassThrough'
 * '<S5>'   : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast'
 * '<S6>'   : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow'
 * '<S7>'   : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd'
 * '<S8>'   : 'TTQR_ac/TTQR_MedTEB2/TTQC_PassThrough/SetBlock1'
 * '<S9>'   : 'TTQR_ac/TTQR_MedTEB2/TTQC_PassThrough/SetBlock10'
 * '<S10>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_PassThrough/SetBlock11'
 * '<S11>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_PassThrough/SetBlock12'
 * '<S12>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_PassThrough/SetBlock2'
 * '<S13>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_PassThrough/SetBlock5'
 * '<S14>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_PassThrough/SetBlock6'
 * '<S15>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_PassThrough/SetBlock8'
 * '<S16>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_PassThrough/SetBlock9'
 * '<S17>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/BooleanSetBlock'
 * '<S18>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/DocBlock'
 * '<S19>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/EnumSetBlock'
 * '<S20>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/EnumeratedValue'
 * '<S21>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/EnumeratedValue1'
 * '<S22>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/EnumeratedValue2'
 * '<S23>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/KeTTQR_M_TransTrqReq_Dsbl'
 * '<S24>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/Latch'
 * '<S25>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/SetBlock'
 * '<S26>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_HoldTransTrqReq'
 * '<S27>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_Limited'
 * '<S28>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_StepOutRamp'
 * '<S29>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_SynchTINR_Fst'
 * '<S30>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/Latch/EnumeratedValue2'
 * '<S31>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/Latch/EnumeratedValue3'
 * '<S32>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/Latch/KeTTQR_M_TCMTrqCntrlMdFstDB'
 * '<S33>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/Latch/SignalLatchOnWithReset'
 * '<S34>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_HoldTransTrqReq/EdgeFalling'
 * '<S35>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_HoldTransTrqReq/FlipFlopSR_Blk'
 * '<S36>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_Limited/DocBlock'
 * '<S37>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_Limited/EnumeratedValue1'
 * '<S38>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_Limited/KeTTQR_b_TransTrqReq_LmtEnbl'
 * '<S39>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_Limited/KtTTQR_M_TransTrqReq_LmtTbl'
 * '<S40>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_Limited/SetBlock'
 * '<S41>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_StepOutRamp/DocBlock'
 * '<S42>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_StepOutRamp/EnumeratedValue1'
 * '<S43>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_StepOutRamp/KeTTQR_M_RgnBrkAxleTrqReq4SEMLm'
 * '<S44>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_StepOutRamp/KeTTQR_M_TransTrqReq_Dsbl'
 * '<S45>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_StepOutRamp/KeTTQR_M_TransTrq_IncStep'
 * '<S46>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_StepOutRamp/KeTTQR_Pct_LV1_PedalRampExit'
 * '<S47>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_StepOutRamp/KeTTQR_b_HCPFstTrqReqEnbl'
 * '<S48>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_ProcessTransTrqReq_StepOutRamp/UnitDelayResetEnabled'
 * '<S49>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_SynchTINR_Fst/EnumeratedValue1'
 * '<S50>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_SynchTINR_Fst/EnumeratedValue3'
 * '<S51>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_SynchTINR_Fst/EnumeratedValue4'
 * '<S52>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqFast/TTQC_SynchTINR_Fst/FlipFlopSR_Blk'
 * '<S53>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/BooleanSetBlock'
 * '<S54>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/DocBlock'
 * '<S55>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/EnumSetBlock'
 * '<S56>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/KeTTQR_M_TransTrqReq_Dsbl'
 * '<S57>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/Latch'
 * '<S58>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/SetBlock'
 * '<S59>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_Limited'
 * '<S60>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_StepOutRamp'
 * '<S61>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_SynchTINR_Slw'
 * '<S62>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/Latch/EnumeratedValue2'
 * '<S63>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/Latch/EnumeratedValue3'
 * '<S64>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/Latch/KeTTQR_M_TCMTrqCntrlMdSlwDB'
 * '<S65>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/Latch/SignalLatchOnWithReset'
 * '<S66>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_Limited/DocBlock'
 * '<S67>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_Limited/EnumeratedValue1'
 * '<S68>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_Limited/KeTTQR_b_TransTrqReq_LmtEnbl'
 * '<S69>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_Limited/KtTTQR_M_TransTrqReq_LmtTbl'
 * '<S70>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_Limited/SetBlock'
 * '<S71>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_StepOutRamp/DocBlock'
 * '<S72>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_StepOutRamp/EnumeratedValue1'
 * '<S73>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_StepOutRamp/KeTTQR_M_RgnBrkAxleTrqReq4SEMLm'
 * '<S74>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_StepOutRamp/KeTTQR_M_TransTrqReq_Dsbl'
 * '<S75>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_StepOutRamp/KeTTQR_M_TransTrq_IncStep'
 * '<S76>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_StepOutRamp/KeTTQR_Pct_LV1_PedalRampExit'
 * '<S77>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_StepOutRamp/KeTTQR_b_HCPSlwTrqReqEnbl'
 * '<S78>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_ProcessTransTrqReq_StepOutRamp/UnitDelayResetEnabled'
 * '<S79>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_SynchTINR_Slw/EnumeratedValue1'
 * '<S80>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_SynchTINR_Slw/EnumeratedValue3'
 * '<S81>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_SynchTINR_Slw/EnumeratedValue4'
 * '<S82>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_ProcessTCMSumTrqReqSlow/TTQC_SynchTINR_Slw/FlipFlopSR_Blk'
 * '<S83>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/Blend_x_yTerm_TimeBased'
 * '<S84>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/EdgeBi'
 * '<S85>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/EdgeFalling3'
 * '<S86>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/EdgeFalling4'
 * '<S87>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/HeTTQR_M_SumMinTrqDsrd'
 * '<S88>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/HeTTQR_b_SumMinTrqDsrdCAN'
 * '<S89>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/HeTTQR_t_dT'
 * '<S90>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/KeTTQR_b_SumMaxTrqDerateSpdSel'
 * '<S91>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/KeTTQR_t_SumMaxTrqRmpRt_Fst'
 * '<S92>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/KeTTQR_t_SumMaxTrqRmpRt_Slw'
 * '<S93>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/KtTTQR_M_SumTrqTbl_SpdFtn'
 * '<S94>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/SetBlock'
 * '<S95>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/SetBlock1'
 * '<S96>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/SignalLatchOnWithReset3'
 * '<S97>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/SignalLatchOnWithReset4'
 * '<S98>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/SignalLatchOnWithReset5'
 * '<S99>'  : 'TTQR_ac/TTQR_MedTEB2/TTQC_SumMaxTrqDsrd/Blend_x_yTerm_TimeBased/Protected Division1'
 * '<S100>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc'
 * '<S101>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits'
 * '<S102>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/DocBlock'
 * '<S103>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/SetBlock'
 * '<S104>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/SetBlock1'
 * '<S105>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/SetBlock2'
 * '<S106>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/SetBlock3'
 * '<S107>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/SetBlock4'
 * '<S108>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand'
 * '<S109>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM'
 * '<S110>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs'
 * '<S111>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM'
 * '<S112>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_HTDR_CmndTLF'
 * '<S113>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/AllwUndershoot'
 * '<S114>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/DocBlock'
 * '<S115>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/Enumerated Value'
 * '<S116>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/Enumerated Value1'
 * '<S117>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/KeTTQR_k_SEMBlndMult1Dflt'
 * '<S118>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/KeTTQR_k_SEMBlndMult1LimMax'
 * '<S119>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/KeTTQR_k_SEMBlndMult1LimMin'
 * '<S120>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/KeTTQR_k_SEMBlndMult2Dflt'
 * '<S121>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/KeTTQR_k_SEMBlndMult2LimMax'
 * '<S122>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/KeTTQR_k_SEMBlndMult2LimMin'
 * '<S123>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/KtTTQR_k_SEMBlndFxTrqReqDec'
 * '<S124>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/KtTTQR_k_SEMBlndFxTrqReqInc'
 * '<S125>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/KtTTQR_k_SEMBlndOutFxTiBsd'
 * '<S126>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/KtTTQR_k_SEMBlndOutFxTqDeltaBsd'
 * '<S127>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/Limiter1'
 * '<S128>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/Limiter2'
 * '<S129>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/TimerBlndIn'
 * '<S130>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/TimerBlndOut'
 * '<S131>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/AllwUndershoot/Enumerated Value2'
 * '<S132>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/AllwUndershoot/KaTTQR_b_AllwUndrsht'
 * '<S133>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/TimerBlndIn/EdgeRising1'
 * '<S134>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/TimerBlndIn/HeTTQR_t_dT'
 * '<S135>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/TimerBlndIn/Stop Watch Reset Enabled1'
 * '<S136>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/TimerBlndOut/EdgeRising1'
 * '<S137>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/TimerBlndOut/HeTTQR_t_dT'
 * '<S138>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_LoadTrqCommand/TTQC_BlendCalc_SEM/TimerBlndOut/Stop Watch Reset Enabled1'
 * '<S139>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/DocBlock'
 * '<S140>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM'
 * '<S141>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/AllwUndershoot'
 * '<S142>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/DocBlock'
 * '<S143>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/EnumeratedValue'
 * '<S144>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/EnumeratedValue1'
 * '<S145>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/KeTTQR_k_SEMBlndMult1Dflt'
 * '<S146>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/KeTTQR_k_SEMBlndMult1LimMax'
 * '<S147>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/KeTTQR_k_SEMBlndMult1LimMin'
 * '<S148>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/KeTTQR_k_SEMBlndMult2Dflt'
 * '<S149>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/KeTTQR_k_SEMBlndMult2LimMax'
 * '<S150>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/KeTTQR_k_SEMBlndMult2LimMin'
 * '<S151>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/KtTTQR_k_SEMBlndFxTrqReqDec'
 * '<S152>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/KtTTQR_k_SEMBlndFxTrqReqInc'
 * '<S153>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/KtTTQR_k_SEMBlndOutFxTiBsd'
 * '<S154>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/KtTTQR_k_SEMBlndOutFxTqDeltaBsd'
 * '<S155>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/Limiter1'
 * '<S156>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/Limiter2'
 * '<S157>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/TimerBlndIn'
 * '<S158>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/TimerBlndOut'
 * '<S159>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/AllwUndershoot/DocBlock'
 * '<S160>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/AllwUndershoot/EnumeratedValue1'
 * '<S161>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/AllwUndershoot/EnumeratedValue2'
 * '<S162>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/AllwUndershoot/KaTTQR_b_AllwSuperCreep'
 * '<S163>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/AllwUndershoot/KaTTQR_b_AllwUndrsht'
 * '<S164>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/AllwUndershoot/KeTTQR_b_BlndSuperCreep'
 * '<S165>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/TimerBlndIn/EdgeRising1'
 * '<S166>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/TimerBlndIn/HeTTQR_t_dT'
 * '<S167>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/TimerBlndIn/StopWatchResetEnabled1'
 * '<S168>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/TimerBlndOut/EdgeRising1'
 * '<S169>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/TimerBlndOut/HeTTQR_t_dT'
 * '<S170>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqAct_SEM/TTQC_BlendCalc_SEM/TimerBlndOut/StopWatchResetEnabled1'
 * '<S171>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/DocBlock'
 * '<S172>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/HeTTQR_b_EngP1Act_TiSlct'
 * '<S173>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/KeTTQR_r_G2_SumTrqCalcFromTa'
 * '<S174>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_EngP1SumTrqCalc'
 * '<S175>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr'
 * '<S176>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_TiArb'
 * '<S177>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_EngP1SumTrqCalc/KeTTQR_b_EngP1SumTrqActSubITerm'
 * '<S178>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_EngP1SumTrqCalc/KeTTQR_b_MtrASubITerm'
 * '<S179>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_EngP1SumTrqCalc/TTQC_GrdMtrA_TrqReq'
 * '<S180>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_EngP1SumTrqCalc/TTQC_GrdMtrA_TrqReq/GradientLimiter'
 * '<S181>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_EngP1SumTrqCalc/TTQC_GrdMtrA_TrqReq/HeTTQR_t_dT'
 * '<S182>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_EngP1SumTrqCalc/TTQC_GrdMtrA_TrqReq/KeTTQR_dM_GradNegMtrA_TrqReq'
 * '<S183>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_EngP1SumTrqCalc/TTQC_GrdMtrA_TrqReq/KeTTQR_dM_GradPosMtrA_TrqReq'
 * '<S184>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_EngP1SumTrqCalc/TTQC_GrdMtrA_TrqReq/GradientLimiter/Limiter'
 * '<S185>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/DocBlock'
 * '<S186>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/HeTTQR_t_dT'
 * '<S187>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_FltAftrClchStatChange'
 * '<S188>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_StateInfo'
 * '<S189>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SumTrqStatic'
 * '<S190>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SumTrqStatic1'
 * '<S191>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend'
 * '<S192>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_FltAftrClchStatChange/Accumulator_Reset'
 * '<S193>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_FltAftrClchStatChange/C2_SumTrqStatic_LPFilt'
 * '<S194>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_FltAftrClchStatChange/KtTTQR_k_SumTrqStaticStChFilt'
 * '<S195>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_FltAftrClchStatChange/SetBlock1'
 * '<S196>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_FltAftrClchStatChange/SetBlock2'
 * '<S197>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_StateInfo/EnumeratedValue1'
 * '<S198>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_StateInfo/EnumeratedValue2'
 * '<S199>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_StateInfo/EnumeratedValue3'
 * '<S200>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_StateInfo/KeTTQR_b_C2VirtualElementEnbl'
 * '<S201>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_StateInfo/KeTTQR_b_CoeffBsdClsLoopSlct'
 * '<S202>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SumTrqStatic/HeTTQR_t_dT'
 * '<S203>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SumTrqStatic/KeTTQR_t_SumTrqStaticFADtctTmDly'
 * '<S204>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SumTrqStatic/SetBlock'
 * '<S205>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SumTrqStatic/SetBlock1'
 * '<S206>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SumTrqStatic/TurnOnDelayTime'
 * '<S207>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SumTrqStatic/TurnOnDelayTime/EdgeRising'
 * '<S208>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SumTrqStatic1/HeTTQR_t_dT'
 * '<S209>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SumTrqStatic1/KeTTQR_t_SumTrqStaticFADtctTmDly'
 * '<S210>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SumTrqStatic1/SetBlock'
 * '<S211>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SumTrqStatic1/TurnOnDelayTime'
 * '<S212>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SumTrqStatic1/TurnOnDelayTime/EdgeRising'
 * '<S213>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/EdgeBi'
 * '<S214>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/KaTTQR_b_AllwSuperCreep'
 * '<S215>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/KeTTQR_r_M2_EngCLFact'
 * '<S216>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/TTQC_Blnd_EngineCloseLoop'
 * '<S217>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/TTQC_Blnd_NC_CloseLoop'
 * '<S218>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/TTQC_Blnd_EngineCloseLoop/Blend_x_yTerm_TimeBased'
 * '<S219>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/TTQC_Blnd_EngineCloseLoop/HeTTQR_t_dT'
 * '<S220>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/TTQC_Blnd_EngineCloseLoop/KeTTQR_t_BlndInSprCreep'
 * '<S221>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/TTQC_Blnd_EngineCloseLoop/KeTTQR_t_BlndOutSprCreep'
 * '<S222>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/TTQC_Blnd_EngineCloseLoop/Blend_x_yTerm_TimeBased/Protected Division1'
 * '<S223>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/TTQC_Blnd_NC_CloseLoop/Blend_x_yTerm_TimeBased'
 * '<S224>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/TTQC_Blnd_NC_CloseLoop/HeTTQR_t_dT'
 * '<S225>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/TTQC_Blnd_NC_CloseLoop/KeTTQR_t_BlndInSprCreep'
 * '<S226>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/TTQC_Blnd_NC_CloseLoop/KeTTQR_t_BlndOutSprCreep'
 * '<S227>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_SumTrqArbtr/TTQC_SuperCreepBlend/TTQC_Blnd_NC_CloseLoop/Blend_x_yTerm_TimeBased/Protected Division1'
 * '<S228>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_TiArb/Blend_x_yTerm_TimeBased'
 * '<S229>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_TiArb/EdgeBi1'
 * '<S230>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_TiArb/HaTTQR_b_EnblTiSnsd4Strt'
 * '<S231>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_TiArb/HeTTQR_t_dT'
 * '<S232>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_TiArb/KeTTQR_t_SnsdTiFltRmp'
 * '<S233>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_TiArb/KeTTQR_t_TiRmp'
 * '<S234>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_TiArb/SetBlock1'
 * '<S235>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_TiArb/UnitDelayResetEnabled1'
 * '<S236>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqCalc/TTQC_SumTrqStatic_Calcs/TTQC_TiArb/Blend_x_yTerm_TimeBased/Protected Division1'
 * '<S237>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits/EnumeratedValue1'
 * '<S238>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits/EnumeratedValue2'
 * '<S239>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits/EnumeratedValue3'
 * '<S240>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits/EnumeratedValue4'
 * '<S241>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits/KeTTQR_b_EngTrq_Enbl_Rq_TCM'
 * '<S242>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits/KeTTQR_e_GrMax_Rq'
 * '<S243>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits/KeTTQR_e_GrMin_Rq'
 * '<S244>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits/SetBlock'
 * '<S245>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits/SetBlock1'
 * '<S246>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits/SetBlock2'
 * '<S247>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits/SetBlock3'
 * '<S248>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits/SetBlock4'
 * '<S249>' : 'TTQR_ac/TTQR_MedTEB3/TTQC_SumTrqLimits/SetBlock5'
 * '<S250>' : 'TTQR_ac/TTQR_PwrOn/InitTTQI_Output'
 * '<S251>' : 'TTQR_ac/TTQR_PwrOn/InitTTQI_Output/EnumeratedValue1'
 * '<S252>' : 'TTQR_ac/TTQR_PwrOn/InitTTQI_Output/EnumeratedValue2'
 * '<S253>' : 'TTQR_ac/TTQR_PwrOn/InitTTQI_Output/EnumeratedValue3'
 * '<S254>' : 'TTQR_ac/TTQR_PwrOn/InitTTQI_Output/EnumeratedValue4'
 * '<S255>' : 'TTQR_ac/TTQR_PwrOn/InitTTQI_Output/KeTTQR_b_SumTrqActFAInit'
 * '<S256>' : 'TTQR_ac/TTQR_PwrOn/InitTTQI_Output/KeTTQR_b_SumTrqStFAInit'
 */
#endif                                 /* RTW_HEADER_TTQR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
