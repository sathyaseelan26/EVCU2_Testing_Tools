/*
 * File: BPSR_ac.h
 *
 * Code generated for Simulink model 'BPSR_ac'.
 *
 * Model version                  : 9.59
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:09:22 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BPSR_ac_h_
#define RTW_HEADER_BPSR_ac_h_
#include <math.h>
#include <string.h>
#include "Rte_Type.h"
#ifndef BPSR_ac_COMMON_INCLUDES_
#define BPSR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_BPSR.h"
#endif                                 /* BPSR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_BPSR_ac_T
{
    float32 VeBPSI_U_BrakePedalVoltRaw_Init_write_IR;/* '<Root>/Merge_4' */
    float32 VeBPSI_Pct_BrakePedalPct_Init_write_IRV;/* '<Root>/Merge_2' */

#if Rte_SysCon_Variant_BPSR_1

    float32 LeBPSR_pct_BrakePedalPct_out;
                                     /* '<S8>/PokeBPSR_pct_BrakePedalPctChrt' */

#define B_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    float32 OutportBufferForVeBPSI_U_BrakePedalVoltR;/* '<S183>/Constant Value4' */

#define B_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    float32 OutportBufferForVeBPSI_Pct_BrakePedalPct;/* '<S183>/Constant Value1' */

#define B_BPSR_AC_T_VARIANT_EXISTS
#endif

    float32 OutportBufferForVeBPSO_Pct_BrakePedalPct;/* '<S181>/Constant Value' */
    float32 OutportBufferForVeBPSO_U_BrakePedalVoltR;/* '<S181>/Constant Value4' */

#if Rte_SysCon_Variant_BPSR_1

    float32 Switch;                    /* '<S9>/Switch' */

#define B_BPSR_AC_T_VARIANT_EXISTS
#endif

    boolean VeBPSI_b_BrakePedalVoltRawFA_Init_write_;/* '<Root>/Merge_5' */
    boolean VeBPSI_b_BrkPedalPctFA_Init_write_IRV;/* '<Root>/Merge_3' */
    boolean VeBPSI_b_BrkPdlSensA2DFailure_Init_write;/* '<Root>/Merge_1' */

#if Rte_SysCon_Variant_BPSR_1

    boolean OutportBufferForVeBPSI_b_BrkPdlSensA2DFa;/* '<S183>/FALSEConstant1' */

#define B_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean OutportBufferForVeBPSI_b_BrakePedalVoltR;/* '<S183>/FALSEConstant5' */

#define B_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean OutportBufferForVeBPSI_b_BrkPedalPctFA_I;/* '<S183>/FALSEConstant2' */

#define B_BPSR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeBPSR_b_BrkPdlSensorFai;/* '<S181>/FALSE Constant' */

#if Rte_SysCon_Variant_BPSR_1

    boolean OutportBufferForUseQickLrnRestPos;/* '<S10>/KeBPSR_b_UseQickLrnRestPos' */

#define B_BPSR_AC_T_VARIANT_EXISTS
#endif

    TeDFIB_e_FaultDebounceStatus OutportBufferForVeBPSR_e_FaultSts_BrkPdl;/* '<S184>/Const' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeBPSR_e_FaultSts_BrkP_d;/* '<S184>/Const1' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeBPSR_e_FaultSts_BrkP_i;/* '<S184>/Const2' */

#if Rte_SysCon_Variant_BPSR_1

    TeDFIB_e_FaultDebounceStatus Merge;/* '<S98>/Merge' */

#define B_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    TeDFIB_e_FaultDebounceStatus Merge_h;/* '<S121>/Merge' */

#define B_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    TeDFIB_e_FaultDebounceStatus Merge_j;/* '<S120>/Merge' */

#define B_BPSR_AC_T_VARIANT_EXISTS
#endif

}
B_BPSR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_BPSR_ac_T
{

#if Rte_SysCon_Variant_BPSR_1

    float32 UnitDelay_DSTATE;          /* '<S10>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    float32 UnitDelay_DSTATE_f;        /* '<S18>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    float32 UnitDelay_DSTATE_o;        /* '<S17>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    uint16 UnitDelay_DSTATE_i;         /* '<S48>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    uint16 UnitDelay_DSTATE_c;         /* '<S150>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    uint16 UnitDelay_DSTATE_l;         /* '<S149>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    uint16 UnitDelay_DSTATE_j;         /* '<S136>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    uint16 UnitDelay_DSTATE_ii;        /* '<S135>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    uint16 UnitDelay_DSTATE_b2;        /* '<S107>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    uint16 UnitDelay_DSTATE_e;         /* '<S106>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    uint16 UnitDelay_DSTATE_g;         /* '<S93>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    uint16 UnitDelay_DSTATE_a;         /* '<S92>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

    uint16 NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP;
                            /* '<Root>/DSM_NeBPSD_Cnt_BrkPdlLvlOneCktHi_MFOP' */
    uint16 NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP;
                            /* '<Root>/DSM_NeBPSD_Cnt_BrkPdlLvlOneCktLo_MFOP' */
    uint16 NeBPSD_Cnt_BrkPdlSnsPerf_MFOP;
                                /* '<Root>/DSM_NeBPSD_Cnt_BrkPdlSnsPerf_MFOP' */

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_ls;       /* '<S49>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_ay;       /* '<S99>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay1_DSTATE;         /* '<S99>/Unit Delay1' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_gh;       /* '<S66>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_ia;       /* '<S69>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_d;        /* '<S180>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_p;        /* '<S160>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_bv;       /* '<S159>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_ec;       /* '<S128>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay1_DSTATE_m;       /* '<S128>/Unit Delay1' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_be;       /* '<S142>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay1_DSTATE_f;       /* '<S142>/Unit Delay1' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_cx;       /* '<S143>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_fg;       /* '<S129>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_pe;       /* '<S100>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_dl;       /* '<S95>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_jj;       /* '<S94>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_k;        /* '<S91>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_ct;       /* '<S81>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_l4;       /* '<S80>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_ib;       /* '<S72>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    boolean UnitDelay_DSTATE_kw;       /* '<S71>/Unit Delay' */

#define DW_BPSR_AC_T_VARIANT_EXISTS
#endif

}
DW_BPSR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_BPSR_1

    const float32 ConstantValue4;      /* '<S183>/Constant Value4' */

#define CONSTB_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    const float32 ConstantValue1;      /* '<S183>/Constant Value1' */

#define CONSTB_BPSR_AC_T_VARIANT_EXISTS
#endif

    const float32 ConstantValue;       /* '<S181>/Constant Value' */
    const float32 ConstantValue4_o;    /* '<S181>/Constant Value4' */

#if Rte_SysCon_Variant_BPSR_1

    const boolean FALSEConstant1;      /* '<S183>/FALSEConstant1' */

#define CONSTB_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    const boolean FALSEConstant5;      /* '<S183>/FALSEConstant5' */

#define CONSTB_BPSR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPSR_1

    const boolean FALSEConstant2;      /* '<S183>/FALSEConstant2' */

#define CONSTB_BPSR_AC_T_VARIANT_EXISTS
#endif

    const boolean FALSEConstant;       /* '<S181>/FALSE Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant;/* '<S186>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_l;/* '<S187>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_f;/* '<S188>/Constant' */
}
ConstB_BPSR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_BPSR_1

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S31>/Vector'
     */
    uint32 Vector_maxIndex[2];

#define CONSTP_BPSR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTP_BPSR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstP_BPSR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPSR
#include "MemMap.h"

extern VAR(B_BPSR_ac_T, BPSR_VAR_INIT) BPSR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPSR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPSR
#include "MemMap.h"

extern VAR(DW_BPSR_ac_T, BPSR_VAR_INIT) BPSR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPSR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_BPSR
#include "MemMap.h"

extern CONST(ConstB_BPSR_ac_T, BPSR_VAR_INIT) BPSR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_BPSR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_BPSR
#include "MemMap.h"

extern CONST(ConstP_BPSR_ac_T, BPSR_VAR_INIT) BPSR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_BPSR
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
 * '<Root>' : 'BPSR_ac'
 * '<S1>'   : 'BPSR_ac/BPSR_MedTEB'
 * '<S2>'   : 'BPSR_ac/BPSR_PwrOff'
 * '<S3>'   : 'BPSR_ac/BPSR_PwrOn'
 * '<S4>'   : 'BPSR_ac/FsftBPSR_U_BrakePedal_VoltRaw'
 * '<S5>'   : 'BPSR_ac/FsftBPSR_pct_BrakePedalPct'
 * '<S6>'   : 'BPSR_ac/PokeBPSR_U_BrakePedal_VoltRaw'
 * '<S7>'   : 'BPSR_ac/PokeBPSR_b_ECU_A2D_Failure'
 * '<S8>'   : 'BPSR_ac/PokeBPSR_pct_BrakePedalPct'
 * '<S9>'   : 'BPSR_ac/BPSR_MedTEB/BPSI'
 * '<S10>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage'
 * '<S11>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng'
 * '<S12>'  : 'BPSR_ac/BPSR_MedTEB/BPSI/KeBPSR_b_BrakeSrcInputSelect'
 * '<S13>'  : 'BPSR_ac/BPSR_MedTEB/BPSI/KtBPSR_U_VolTransferFunc'
 * '<S14>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/Applied'
 * '<S15>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus'
 * '<S16>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/Digital Lowpass Reset Enabled'
 * '<S17>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/Digital Lowpass Reset Enabled1'
 * '<S18>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/Digital Lowpass Reset Enabled2'
 * '<S19>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/Enumerated Value'
 * '<S20>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/Enumerated Value2'
 * '<S21>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/KeBPSR_U_BrakePdlDeltVoltOvrr'
 * '<S22>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/KeBPSR_U_CalBrkPdlRestPos'
 * '<S23>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/KeBPSR_b_BrakePdlDeltVoltEnblOvrr'
 * '<S24>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/KeBPSR_b_UseBrkSW'
 * '<S25>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/KeBPSR_b_UseCalBrkPdlRestPos'
 * '<S26>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/KeBPSR_b_UseQickLrnRestPos'
 * '<S27>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/KeBPSR_k_BrkPdlSensorFiltCnst'
 * '<S28>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/KtBPSR_Pct_SenTransferFunc'
 * '<S29>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/KtBPSR_U_BrkSWRngLimit'
 * '<S30>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/KtBPSR_k_BrkSWFiltCnst'
 * '<S31>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/KtBPSR_k_BrkVoltFltCoeff'
 * '<S32>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/Limiter1'
 * '<S33>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/NotApplied'
 * '<S34>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/Case1'
 * '<S35>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/Case2'
 * '<S36>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/Case3'
 * '<S37>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/Case4'
 * '<S38>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/Enumerated Value1'
 * '<S39>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/Enumerated Value2'
 * '<S40>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/Enumerated Value3'
 * '<S41>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/Enumerated Value7'
 * '<S42>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/KeBPSR_Cnt_BrkStsNotApplDebSamples'
 * '<S43>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/KeBPSR_Pct_AccelPdlPosThresh'
 * '<S44>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/KeBPSR_T_AmbTempHi'
 * '<S45>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/KeBPSR_T_AmbTempLo'
 * '<S46>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/KeBPSR_a_VehAccelThresh'
 * '<S47>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/KeBPSR_v_VehSpdThresh'
 * '<S48>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/Turn On Delay Sample'
 * '<S49>'  : 'BPSR_ac/BPSR_MedTEB/BrakeVoltSelectANDPedalPercentage/DetermineBrakeStatus/Turn On Delay Sample/EdgeRising'
 * '<S50>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck'
 * '<S51>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest'
 * '<S52>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakePedalVoltRawFA_Calc'
 * '<S53>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B'
 * '<S54>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1'
 * '<S55>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlSensorFail'
 * '<S56>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/CheckEnable'
 * '<S57>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/Enabled Subsystem'
 * '<S58>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/KeBPSD_Cnt_BrkPdlMstrFailLmt'
 * '<S59>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/KeBPSD_Cnt_BrkPdlMstrSmplLmt'
 * '<S60>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/KeBPSD_U_BrkPdlSensorHH'
 * '<S61>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/KeBPSD_U_BrkPdlSensorLL'
 * '<S62>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/KeBPSD_U_LrndBrkPdlSW1Pos'
 * '<S63>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/KeBPSD_b_DiagSystemReenable'
 * '<S64>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/KeBPSD_b_PostCodeClrDiagDsbl'
 * '<S65>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/KeBPSD_b_SenMstrFailFlgEnable'
 * '<S66>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition'
 * '<S67>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/NotPressedCheck'
 * '<S68>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/ResetCountsFOMs'
 * '<S69>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/SenVoltageCheck'
 * '<S70>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck/BrakeAppliedTest'
 * '<S71>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck/EdgeBi'
 * '<S72>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck/EdgeRising'
 * '<S73>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck/KeBPSD_b_BrkApplModeSelect'
 * '<S74>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck/BrakeAppliedTest/BrakeAppliedTestChart'
 * '<S75>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck/BrakeAppliedTest/KeBPSD_Cnt_BrkApplTestFltCtrIMax'
 * '<S76>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck/BrakeAppliedTest/KeBPSD_Cnt_BrkApplTestFltCtrInc'
 * '<S77>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck/BrakeAppliedTest/KeBPSD_Cnt_BrkPdlSensorSWMaxSample'
 * '<S78>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck/BrakeAppliedTest/KeBPSD_U_BrkAppDeltaHi'
 * '<S79>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeAppliedCheck/BrakeAppliedTest/KeBPSD_U_BrkAppDeltaLo'
 * '<S80>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/EdgeRising'
 * '<S81>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/EdgeRising1'
 * '<S82>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/If Action Subsystem'
 * '<S83>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/If Action Subsystem1'
 * '<S84>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/If Action Subsystem2'
 * '<S85>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/KeBPSD_Cnt_BrkNotAppOutRngCntrInc'
 * '<S86>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/KeBPSD_Cnt_BrkNotAppOutRngMaxCntr'
 * '<S87>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/KeBPSD_Cnt_BrkNotAppRngDebSamples'
 * '<S88>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/KeBPSD_U_BrkNotAppDeltaHi'
 * '<S89>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/KeBPSD_U_BrkNotAppDeltaLo'
 * '<S90>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/Limiter2'
 * '<S91>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/Signal Latch On'
 * '<S92>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/Turn On Delay Sample'
 * '<S93>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/Turn On Delay Sample1'
 * '<S94>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/Turn On Delay Sample/EdgeRising'
 * '<S95>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrakeNotAppliedTest/Turn On Delay Sample1/EdgeRising'
 * '<S96>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/KeBPSD_b_BrkPdlPosSnsrPerfEnblDTC'
 * '<S97>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/KeBPSR_b_BrkPdlPosSnsrPerf_LtchEnbl'
 * '<S98>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2'
 * '<S99>'  : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/BaseXofY'
 * '<S100>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/EdgeFalling1'
 * '<S101>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/Enumerated Constant16'
 * '<S102>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/Fail'
 * '<S103>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/Init'
 * '<S104>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/Pass'
 * '<S105>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/UpdateMFOP'
 * '<S106>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S107>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S108>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/Fail/Enumerated Constant16'
 * '<S109>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/Init/Enumerated Constant16'
 * '<S110>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/Pass/Enumerated Constant16'
 * '<S111>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S112>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPerFail_P057B/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S113>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/BrkPdlPosFltLV1'
 * '<S114>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/CountingFlags'
 * '<S115>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/CountingFlags2'
 * '<S116>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/KeBPSD_Cnt_BrkPdlLvlOneFailLmt'
 * '<S117>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/KeBPSD_Cnt_BrkPdlLvlOneSmplLmt'
 * '<S118>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/KeBPSR_b_BrkPdlPosSnsrCktHi_LtchEnbl'
 * '<S119>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/KeBPSR_b_BrkPdlPosSnsrCktLo_LtchEnbl'
 * '<S120>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1'
 * '<S121>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2'
 * '<S122>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/CountingFlags/KeBPSD_b_BrkPdlPosSnsrCktHiEnblDTC'
 * '<S123>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/CountingFlags/KeBPSD_b_SenLv1HiFailFlgEnblOvrr'
 * '<S124>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/CountingFlags/KeBPSD_b_SenLv1HiFailFlgOverride'
 * '<S125>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/CountingFlags2/KeBPSD_b_BrkPdlPosSnsrCktLoEnblDTC'
 * '<S126>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/CountingFlags2/KeBPSD_b_SenLv1LoFailFlgEnblOvrr'
 * '<S127>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/CountingFlags2/KeBPSD_b_SenLv1LoFailFlgOverride'
 * '<S128>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/BaseXofY'
 * '<S129>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/EdgeFalling1'
 * '<S130>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/Enumerated Constant16'
 * '<S131>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/Fail'
 * '<S132>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/Init'
 * '<S133>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/Pass'
 * '<S134>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/UpdateMFOP'
 * '<S135>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/BaseXofY/Counter Reset  Enabled '
 * '<S136>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/BaseXofY/Counter Reset  Enabled 1'
 * '<S137>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/Fail/Enumerated Constant16'
 * '<S138>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/Init/Enumerated Constant16'
 * '<S139>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/Pass/Enumerated Constant16'
 * '<S140>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/UpdateMFOP/Max Fails on Pass FOM'
 * '<S141>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v1/UpdateMFOP/ResetLogic'
 * '<S142>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/BaseXofY'
 * '<S143>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/EdgeFalling1'
 * '<S144>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/Enumerated Constant16'
 * '<S145>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/Fail'
 * '<S146>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/Init'
 * '<S147>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/Pass'
 * '<S148>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/UpdateMFOP'
 * '<S149>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S150>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S151>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/Fail/Enumerated Constant16'
 * '<S152>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/Init/Enumerated Constant16'
 * '<S153>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/Pass/Enumerated Constant16'
 * '<S154>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S155>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlPosSensLV1/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S156>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlSensorFail/KeBPSD_b_SenMstrFailFlgEnblOvrr'
 * '<S157>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/BrkPdlSensorFail/KeBPSD_b_SenMstrFailFlgOverride'
 * '<S158>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/DocBlock'
 * '<S159>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/EdgeRising1'
 * '<S160>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/EdgeRising2'
 * '<S161>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/Enumerated Value3'
 * '<S162>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw'
 * '<S163>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/WriteToEeBPSR_U_LrndBrkPdlRestPos'
 * '<S164>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/WriteToEeBPSR_U_LrndBrkPdlRestPos_Quick'
 * '<S165>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/HeBPSD_t_MedTEB'
 * '<S166>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/KeBPSD_Cnt_LrnRestMaxFailCntr'
 * '<S167>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/KeBPSD_Cnt_LrnRestMaxFailCntrInc'
 * '<S168>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/KeBPSD_Cnt_LrnRestMaxIndxCnt'
 * '<S169>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/KeBPSD_Cnt_LrnRestMinCnts'
 * '<S170>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/KeBPSD_Cnt_LrnRestPosMaxCnts'
 * '<S171>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/KeBPSD_U_LrnRestMaxDelta'
 * '<S172>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/KeBPSD_U_LrnRestPosHi'
 * '<S173>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/KeBPSD_U_LrnRestPosLo'
 * '<S174>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/KeBPSD_t_LrnRestWindTime'
 * '<S175>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/LearnRestPosition/LrnRstPstnSlw/LearnRestPosChart'
 * '<S176>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/NotPressedCheck/Enumerated Value1'
 * '<S177>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/SenVoltageCheck/Counter Reset  Enabled '
 * '<S178>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/SenVoltageCheck/KeBPSD_Cnt_BrkPdlSenVoltRngDebnc'
 * '<S179>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/SenVoltageCheck/Set Block'
 * '<S180>' : 'BPSR_ac/BPSR_MedTEB/BrkPdlSnsrPrcssng/SenVoltageCheck/Signal Latch On'
 * '<S181>' : 'BPSR_ac/BPSR_PwrOn/BPSO_Init'
 * '<S182>' : 'BPSR_ac/BPSR_PwrOn/DSM_Init'
 * '<S183>' : 'BPSR_ac/BPSR_PwrOn/Init_BPSI'
 * '<S184>' : 'BPSR_ac/BPSR_PwrOn/Sub_Out_Init'
 * '<S185>' : 'BPSR_ac/BPSR_PwrOn/Init_BPSI/KeBPSI_U_InitLrndBrkPdlRestPos'
 * '<S186>' : 'BPSR_ac/BPSR_PwrOn/Sub_Out_Init/Const'
 * '<S187>' : 'BPSR_ac/BPSR_PwrOn/Sub_Out_Init/Const1'
 * '<S188>' : 'BPSR_ac/BPSR_PwrOn/Sub_Out_Init/Const2'
 * '<S189>' : 'BPSR_ac/FsftBPSR_U_BrakePedal_VoltRaw/FsftBPSR_U_BrakePedal_VoltRawChrt'
 * '<S190>' : 'BPSR_ac/FsftBPSR_pct_BrakePedalPct/FsftBPSR_pct_BrakePedalPctChrt'
 * '<S191>' : 'BPSR_ac/PokeBPSR_U_BrakePedal_VoltRaw/PokeBPSR_U_BrakePedal_VoltRawChrt'
 * '<S192>' : 'BPSR_ac/PokeBPSR_b_ECU_A2D_Failure/PokeBPSR_b_ECU_A2D_FailureChrt'
 * '<S193>' : 'BPSR_ac/PokeBPSR_pct_BrakePedalPct/PokeBPSR_pct_BrakePedalPctChrt'
 */
#endif                                 /* RTW_HEADER_BPSR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
