/*
 * File: HSWR_ac.h
 *
 * Code generated for Simulink model 'HSWR_ac'.
 *
 * Model version                  : 9.167
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:50:22 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HSWR_ac_h_
#define RTW_HEADER_HSWR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef HSWR_ac_COMMON_INCLUDES_
#define HSWR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_HSWR.h"
#endif                                 /* HSWR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_HSWR_ac_T
{

#if Rte_SysCon_Variant_HSWR_4

    float32 OutportBufferForVeHSWR_U_BntAjrRwVlStsVo;
                                  /* '<S374>/KeHSWR_U_BntAjrRwVlStsVolt_Init' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    float32 VM_Conditional_Signal_TmpVM_FcnCallSubsy;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if (!Rte_SysCon_Variant_HSWR_2 && !Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    float32 VM_Conditional_Signal_TmpVM_FcnCallSub_f;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

    sint16 OutportBufferForVeHSWR_e_CBC_BntAjrRwVlS;
                               /* '<S373>/KeHSWR_i_CBC_BntAjrRwVlSts_NF_Dial' */

#if Rte_SysCon_Variant_HSWR_4

    sint16 OutportBufferForVeHSWR_e_CBC_BntAjrRwV_d;
                                  /* '<S374>/KeHSWR_i_CBC_BntAjrRwVlSts_Init' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if (!(!Rte_SysCon_Variant_HSWR_7) && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_7 && Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4)

    sint16 VM_Conditional_Signal_TmpVM_FcnCallSub_o;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 TmpSignalConversionAtTmpVM_FcnCallSubsys;
                         /* '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 TmpSignalConversionAtTmpVM_FcnCallSubs_e;
                         /* '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 TmpSignalConversionAtTmpVM_FcnCallSubs_c;
                         /* '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 TmpSignalConversionAtTmpVM_FcnCallSub_cr;
                         /* '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 TmpSignalConversionAtTmpVM_FcnCallSubs_i;
                         /* '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 TmpSignalConversionAtTmpVM_FcnCallSubs_m;
                         /* '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 TmpSignalConversionAtTmpVM_FcnCallSubs_p;
                         /* '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 TmpSignalConversionAtTmpVM_FcnCallSub_p3;
                         /* '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 TmpSignalConversionAtTmpVM_FcnCallSub_el;
                         /* '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 TmpSignalConversionAtTmpVM_FcnCallSub_m1;
                         /* '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 TmpSignalConversionAtTmpVM_FcnCallSub_mt;
                         /* '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 TmpSignalConversionAtTmpVM_FcnCallSub_em;
                         /* '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeHSWR_b_ECMHoodOpen_Out;/* '<S373>/Const1' */
    boolean OutportBufferForSec_Hood_Sts_outwrite;/* '<S373>/Const21' */
    boolean OutportBufferForLeHSWC_b_InitHoodStatus;/* '<S373>/FALSEConstant' */

#if Rte_SysCon_Variant_HSWR_4

    boolean OutportBufferForVeHSWR_b_CBC_BntAjrRwVlS;/* '<S374>/FALSEConstant1' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean OutportBufferForVeHSWR_b_BntAjrRwVlStsVo;/* '<S374>/FALSEConstant3' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean OutportBufferForPrimaryHoodFault_write;/* '<S374>/Constww' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean OutportBufferForSecondaryHoodFault_write;/* '<S374>/Const10' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean OutportBufferForCBC_Hood_Sts_write;/* '<S374>/Const11' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean OutportBufferForSec_Hood_Sts_write;/* '<S374>/Const12' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if (!(!Rte_SysCon_Variant_HSWR_7) && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_7 && Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4)

    boolean VM_Conditional_Signal_TmpVM_FcnCallSub_j;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean VM_Conditional_Signal_TmpVM_FcnCallSub_l;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean VM_Conditional_Signal_TmpVM_FcnCallSu_oe;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if (!Rte_SysCon_Variant_HSWR_1 && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_1 && Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4)

    boolean VM_Conditional_Signal_TmpVM_FcnCallSu_jp;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if (!Rte_SysCon_Variant_HSWR_2 && !Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    boolean VM_Conditional_Signal_TmpVM_FcnCallSu_o5;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if (!Rte_SysCon_Variant_HSWR_2 && !Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    boolean VM_Conditional_Signal_TmpVM_FcnCallSub_p;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if (!Rte_SysCon_Variant_HSWR_2 && !Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    boolean VM_Conditional_Signal_TmpVM_FcnCallSu_ob;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean In1;                       /* '<S99>/In1' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    TeHSWR_e_HoodStatusVolt OutportBufferForBntAjrRwVlStsVoltRng_wri;/* '<S374>/Const13' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if (!Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_7 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4 && Rte_SysCon_Variant_HSWR_7)

    TeHSWR_e_HoodStatusVolt VM_Conditional_Signal_TmpVM_FcnCallSub_k;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    TeHSWR_e_HoodStatus OutportBufferForVeHSWR_e_RedntHdStat;/* '<S374>/KeHSWR_e_RedntHdStat_Init' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

    TeHSWR_e_HCPHoodAjarSts OutportBufferForLeHSWC_e_InitHCPHoodAjar;/* '<S373>/Enumerated_Constant2' */

#if Rte_SysCon_Variant_HSWR_4

    TeHSWR_e_ECMHoodStatus LeHSWR_e_ECMHoodAjar_out;/* '<S11>/PokeHSWR_e_ECMHoodAjarChrt' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    TeHSWR_e_ECMHoodStatus OutportBufferForVeHSWR_e_ECMHoodAjar;/* '<S374>/KeHSWR_e_ECMHoodAjar_Init' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    TeHSWR_e_Dbg_Status OutportBufferForVeHSWR_e_Dbg_CBC_BntAjrR;/* '<S374>/Enumerated_Constant2' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    TeHSWR_e_Dbg_Status OutportBufferForVeHSWR_e_Dbg_ECMHoodAjar;/* '<S374>/Enumerated_Constant4' */

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if (!(!Rte_SysCon_Variant_HSWR_7) && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_7 && Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4)

    TeHSWR_e_Dbg_Status VM_Conditional_Signal_TmpVM_FcnCallSub_e;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

    TeDFIB_e_FaultDebounceStatus OutportBufferForVeHSWR_e_FaultSts_EngHoo;/* '<S373>/Const14' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeHSWR_e_FaultSts_EngH_k;/* '<S373>/Const15' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeHSWR_e_FaultSts_EngH_i;/* '<S373>/Const16' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeHSWR_e_FaultSts_EngH_e;/* '<S373>/Const17' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeHSWR_e_FaultSts_EngH_g;/* '<S373>/Const18' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeHSWR_e_FaultSts_EngH_l;/* '<S373>/Const19' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeHSWR_e_FaultSts_EngH_d;/* '<S373>/Const20' */

#if Rte_SysCon_Variant_HSWR_4

    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportFaultSts_EngHoodSw;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportFaultSts_EngHood_j;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportFaultSts_EngHood_f;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportFaultSts_EngHood_o;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportFaultSts_EngHoo_os;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportFaultSts_EngHood_b;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportFaultSts_EngHoo_f1;

#define B_HSWR_AC_T_VARIANT_EXISTS
#endif

}
B_HSWR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_HSWR_ac_T
{

#if Rte_SysCon_Variant_HSWR_4

    uint16 UnitDelay_DSTATE_b;         /* '<S97>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint16 NeHSWD_Cnt_CBC_FaultHigh_MFOP;
                                /* '<Root>/DSM_NeHSWD_Cnt_CBC_FaultHigh_MFOP' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint16 NeHSWD_Cnt_CBC_FaultLow_MFOP;
                                 /* '<Root>/DSM_NeHSWD_Cnt_CBC_FaultLow_MFOP' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint16 NeHSWD_Cnt_CBC_Range_MFOP;
                                    /* '<Root>/DSM_NeHSWD_Cnt_CBC_Range_MFOP' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint16 NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP;
                           /* '<Root>/DSM_NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint16 NeHSWD_Cnt_SecBnt_CircuitLow_MFOP;
                            /* '<Root>/DSM_NeHSWD_Cnt_SecBnt_CircuitLow_MFOP' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint16 NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP;
                           /* '<Root>/DSM_NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint16 NeHSWD_Cnt_SecBnt_Correlation_MFOP;
                           /* '<Root>/DSM_NeHSWD_Cnt_SecBnt_Correlation_MFOP' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_a;        /* '<S347>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay1_DSTATE;         /* '<S347>/Unit Delay1' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_la;       /* '<S348>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_g;        /* '<S310>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay1_DSTATE_a;       /* '<S310>/Unit Delay1' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_fz;       /* '<S311>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_hj;       /* '<S283>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay1_DSTATE_n;       /* '<S283>/Unit Delay1' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_gk;       /* '<S284>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_ag;       /* '<S256>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay1_DSTATE_j;       /* '<S256>/Unit Delay1' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_ow;       /* '<S257>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_i;        /* '<S218>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay1_DSTATE_na;      /* '<S218>/Unit Delay1' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_e;        /* '<S219>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_ec;       /* '<S179>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay1_DSTATE_p;       /* '<S179>/Unit Delay1' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_pj;       /* '<S180>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_nm;       /* '<S140>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay1_DSTATE_h;       /* '<S140>/Unit Delay1' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_gt;       /* '<S141>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay2_DSTATE;         /* '<S95>/Unit Delay2' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_ed;       /* '<S95>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_pq;       /* '<S98>/Unit Delay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay2_DSTATE_o;       /* '<S18>/Unit Delay2' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay1_DSTATE_nm;      /* '<S18>/UnitDelay1' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean UnitDelay_DSTATE_ft;       /* '<S18>/UnitDelay' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

    uint8 StatusByte_AAT_SnsrPerf;     /* '<Root>/DS_StatusByte_AAT_SnsrPerf' */

#if Rte_SysCon_Variant_HSWR_4

    uint8 StatusByte_EngHoodSw2AjDrv;
                                    /* '<Root>/DS_StatusByte_EngHoodSw2AjDrv' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 StatusByte_EngHoodSw2CktHi;
                                    /* '<Root>/DS_StatusByte_EngHoodSw2CktHi' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 StatusByte_EngHoodSw2CktLo;
                                    /* '<Root>/DS_StatusByte_EngHoodSw2CktLo' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 StatusByte_EngHoodSwCktHi; /* '<Root>/DS_StatusByte_EngHoodSwCktHi' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 StatusByte_EngHoodSwCktLo; /* '<Root>/DS_StatusByte_EngHoodSwCktLo' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 StatusByte_EngHoodSwCktRngPerf;
                                /* '<Root>/DS_StatusByte_EngHoodSwCktRngPerf' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 StatusByte_HiSpdCANCommBus;
                                    /* '<Root>/DS_StatusByte_HiSpdCANCommBus' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 StatusByte_LostCommBCM;      /* '<Root>/DS_StatusByte_LostCommBCM' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 StatusByte_EngHoodSwCorr;    /* '<Root>/DataStoreDS_EngHoodSwCorr' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 StatusByte_InvData_BCM;      /* '<Root>/DataStoreMemory' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 StatusByte_HiSpdFD_CAN3CommBus;/* '<Root>/DataStoreMemory1' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    uint8 StatusByte_HiSpdFD_CAN3CommBusPerf;/* '<Root>/DataStoreMemory2' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean BeHSWR_b_ECMHdStatSaved;  /* '<Root>/DSM_BeHSWR_b_ECMHdStatSaved' */

#define DW_HSWR_AC_T_VARIANT_EXISTS
#endif

}
DW_HSWR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_HSWR_4

    const TeHSWR_e_HoodStatusVolt Constant;/* '<S394>/Constant' */

#define CONSTB_HSWR_AC_T_VARIANT_EXISTS
#endif

    const TeHSWR_e_HCPHoodAjarSts Constant_k;/* '<S382>/Constant' */

#if Rte_SysCon_Variant_HSWR_4

    const TeHSWR_e_Dbg_Status Constant_d;/* '<S396>/Constant' */

#define CONSTB_HSWR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSWR_4

    const TeHSWR_e_Dbg_Status Constant_g;/* '<S397>/Constant' */

#define CONSTB_HSWR_AC_T_VARIANT_EXISTS
#endif

    const TeDFIB_e_FaultDebounceStatus Constant_o;/* '<S375>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_ok;/* '<S376>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_e;/* '<S377>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_h;/* '<S378>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_f;/* '<S379>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_i;/* '<S380>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_de;/* '<S381>/Constant' */
}
ConstB_HSWR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSWR
#include "MemMap.h"

extern VAR(B_HSWR_ac_T, HSWR_VAR_INIT) HSWR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSWR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSWR
#include "MemMap.h"

extern VAR(DW_HSWR_ac_T, HSWR_VAR_INIT) HSWR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSWR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_HSWR
#include "MemMap.h"

extern CONST(ConstB_HSWR_ac_T, HSWR_VAR_INIT) HSWR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_HSWR
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
 * '<Root>' : 'HSWR_ac'
 * '<S1>'   : 'HSWR_ac/FsftHSWR_b_CBC_BntAjrRwVlStsVolt'
 * '<S2>'   : 'HSWR_ac/FsftHSWR_e_CBC_BntAjrRwVlSts'
 * '<S3>'   : 'HSWR_ac/FsftHSWR_e_ECMHoodAjar'
 * '<S4>'   : 'HSWR_ac/FsftHSWR_e_RedntHdSwStat'
 * '<S5>'   : 'HSWR_ac/HSWR_MedTEB'
 * '<S6>'   : 'HSWR_ac/HSWR_MedTEH'
 * '<S7>'   : 'HSWR_ac/HSWR_PwrOff'
 * '<S8>'   : 'HSWR_ac/HSWR_PwrOn'
 * '<S9>'   : 'HSWR_ac/PokeHSWR_U_CBC_BntAjrRwVlStsVolt'
 * '<S10>'  : 'HSWR_ac/PokeHSWR_e_CBC_BntAjrRwVlSts'
 * '<S11>'  : 'HSWR_ac/PokeHSWR_e_ECMHoodAjar'
 * '<S12>'  : 'HSWR_ac/PokeHSWR_e_RedntHdSwStat'
 * '<S13>'  : 'HSWR_ac/TmotHSWR_b_ECMHoodAjar'
 * '<S14>'  : 'HSWR_ac/FsftHSWR_b_CBC_BntAjrRwVlStsVolt/FsftHSWR_b_CBC_BntAjrRwVlStsVoltChrt'
 * '<S15>'  : 'HSWR_ac/FsftHSWR_e_CBC_BntAjrRwVlSts/FsftHSWR_e_CBC_BntAjrRwVlStsChrt'
 * '<S16>'  : 'HSWR_ac/FsftHSWR_e_ECMHoodAjar/FsftHSWR_e_ECMHoodAjarChrt'
 * '<S17>'  : 'HSWR_ac/FsftHSWR_e_RedntHdSwStat/FsftHSWR_e_RedntHdSwStatChrt'
 * '<S18>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb'
 * '<S19>'  : 'HSWR_ac/HSWR_MedTEB/Input_Debounced'
 * '<S20>'  : 'HSWR_ac/HSWR_MedTEB/Trigger'
 * '<S21>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval'
 * '<S22>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/EnabledSubsystem'
 * '<S23>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/Enumerated_Constant'
 * '<S24>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/Enumerated_Constant1'
 * '<S25>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/Enumerated_Constant2'
 * '<S26>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/Enumerated_Constant3'
 * '<S27>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/Enumerated_Constant4'
 * '<S28>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/Enumerated_Constant5'
 * '<S29>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/HCPHoodAjarSts_Det'
 * '<S30>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/KeHSWR_b_ECMHdAjarOvrdEnbl'
 * '<S31>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/KeHSWR_b_ECMHdAjarOvrdVal'
 * '<S32>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/KeHSWR_b_ECMHdStatSaved_Fsft'
 * '<S33>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/KeHSWR_b_SingleSwitchECMAsleepOvrdEnbl'
 * '<S34>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/KeHSWR_b_SingleSwitchECMClosedVal'
 * '<S35>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/KeHSWR_e_SingleSwitchECMAsleepOvrdVal'
 * '<S36>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/MReportModelInfo'
 * '<S37>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/SechoodSts_Eval'
 * '<S38>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/EnumeratedConstant10'
 * '<S39>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/EnumeratedConstant3'
 * '<S40>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/EnumeratedConstant4'
 * '<S41>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/EnumeratedConstant5'
 * '<S42>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/EnumeratedConstant6'
 * '<S43>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/EnumeratedConstant7'
 * '<S44>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/EnumeratedConstant8'
 * '<S45>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/EnumeratedConstant9'
 * '<S46>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Enumerated_Constant6'
 * '<S47>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/KeHSWR_b_CBCHdStOvrdEnbl'
 * '<S48>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/KeHSWR_b_Enbl_K8_Pgrm'
 * '<S49>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/KeHSWR_b_Enbl_Old_Impl'
 * '<S50>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/KeHSWR_b_Enbl_RU_Pgrm'
 * '<S51>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/KeHSWR_b_Enbl_Volt_Impl'
 * '<S52>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/KeHSWR_b_New_Poke_Sel'
 * '<S53>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/KeHSWR_i_CBCHdStOvrdVal'
 * '<S54>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem'
 * '<S55>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/Enumerated_Constant'
 * '<S56>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/Enumerated_Constant1'
 * '<S57>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/Enumerated_Constant2'
 * '<S58>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/Enumerated_Constant3'
 * '<S59>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/Enumerated_Constant4'
 * '<S60>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/Enumerated_Constant5'
 * '<S61>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/Enumerated_Constant6'
 * '<S62>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/IfThenElse1'
 * '<S63>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/IfThenElse2'
 * '<S64>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/IfThenElse3'
 * '<S65>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/IfThenElse4'
 * '<S66>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/IfThenElse5'
 * '<S67>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/IfThenElse7'
 * '<S68>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/KeHSWR_U_HoodClosed_Max'
 * '<S69>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/KeHSWR_U_HoodClosed_Min'
 * '<S70>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/KeHSWR_U_HoodOpen_Max'
 * '<S71>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/KeHSWR_U_HoodOpen_Min'
 * '<S72>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/KeHSWR_U_OpenCircuit_Max'
 * '<S73>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/KeHSWR_U_OpenCircuit_Min'
 * '<S74>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/KeHSWR_U_Performance_Max'
 * '<S75>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/KeHSWR_U_Performance_Min'
 * '<S76>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/KeHSWR_U_ShortToGround_Max'
 * '<S77>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/CBChoodSts_Eval/Subsystem/KeHSWR_U_ShortToGround_Min'
 * '<S78>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/HCPHoodAjarSts_Det/Enumerated_Constant1'
 * '<S79>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/HCPHoodAjarSts_Det/Enumerated_Constant2'
 * '<S80>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/HCPHoodAjarSts_Det/Enumerated_Constant4'
 * '<S81>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/HCPHoodAjarSts_Det/IfThenElse1'
 * '<S82>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/HCPHoodAjarSts_Det/IfThenElse2'
 * '<S83>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/SechoodSts_Eval/Enumerated_Constant1'
 * '<S84>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/SechoodSts_Eval/Enumerated_Constant2'
 * '<S85>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/SechoodSts_Eval/Enumerated_Constant4'
 * '<S86>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/SechoodSts_Eval/IfThenElse1'
 * '<S87>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/SechoodSts_Eval/IfThenElse2'
 * '<S88>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/SechoodSts_Eval/KeHSWR_U_SecBntClosedMax'
 * '<S89>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/SechoodSts_Eval/KeHSWR_U_SecBntClosedMin'
 * '<S90>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/SechoodSts_Eval/KeHSWR_U_SecBntOpenedMax'
 * '<S91>'  : 'HSWR_ac/HSWR_MedTEB/HdSwStat_Arb/SechoodSts_Eval/KeHSWR_U_SecBntOpenedMin'
 * '<S92>'  : 'HSWR_ac/HSWR_MedTEB/Input_Debounced/Debounce'
 * '<S93>'  : 'HSWR_ac/HSWR_MedTEB/Input_Debounced/KeHSWR_b_EnableDbncBntAjrVISts'
 * '<S94>'  : 'HSWR_ac/HSWR_MedTEB/Input_Debounced/No_Debounce'
 * '<S95>'  : 'HSWR_ac/HSWR_MedTEB/Input_Debounced/Debounce/IfActionSubsystem'
 * '<S96>'  : 'HSWR_ac/HSWR_MedTEB/Input_Debounced/Debounce/KeHSWR_t_DbncTimeBntAjrVISts'
 * '<S97>'  : 'HSWR_ac/HSWR_MedTEB/Input_Debounced/Debounce/IfActionSubsystem/CounterResetEnabled'
 * '<S98>'  : 'HSWR_ac/HSWR_MedTEB/Input_Debounced/Debounce/IfActionSubsystem/EdgeRising2'
 * '<S99>'  : 'HSWR_ac/HSWR_MedTEB/Input_Debounced/Debounce/IfActionSubsystem/Subsystem2'
 * '<S100>' : 'HSWR_ac/HSWR_MedTEB/Trigger/KeHSWR_b_SingleSwitchECMOpen_D'
 * '<S101>' : 'HSWR_ac/HSWR_MedTEB/Trigger/KeHSWR_b_SingleSwitchECMOpen_SD'
 * '<S102>' : 'HSWR_ac/HSWR_MedTEB/Trigger/SetBlock'
 * '<S103>' : 'HSWR_ac/HSWR_MedTEH/HSWD'
 * '<S104>' : 'HSWR_ac/HSWR_MedTEH/Input_Overrides'
 * '<S105>' : 'HSWR_ac/HSWR_MedTEH/HSWD/DocBlock'
 * '<S106>' : 'HSWR_ac/HSWR_MedTEH/HSWD/LoEnable_ResetCounts'
 * '<S107>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch'
 * '<S108>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch'
 * '<S109>' : 'HSWR_ac/HSWR_MedTEH/HSWD/Voltage_In_Range'
 * '<S110>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PriHoodFltStub'
 * '<S111>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch'
 * '<S112>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PriHoodFltStub/Enumerated Constant1'
 * '<S113>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PriHoodFltStub/Enumerated Constant16'
 * '<S114>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PriHoodFltStub/Enumerated Constant2'
 * '<S115>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng'
 * '<S116>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low'
 * '<S117>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High'
 * '<S118>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Enabling'
 * '<S119>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Fault_Check'
 * '<S120>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y'
 * '<S121>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Enabling/EvtInfo_EngHoodSwCktHi_FaultActiveTOC_4'
 * '<S122>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Enabling/EvtInfo_EngHoodSwCktLo_FaultActiveTOC_5'
 * '<S123>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Enabling/EvtInfo_HiSpdCANCommBus_FaultActiveTOC_3'
 * '<S124>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Enabling/EvtInfo_InvData_BCM_FaultActiveTOC_6'
 * '<S125>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Enabling/EvtInfo_LostCommBCM_FaultActiveTOC_1'
 * '<S126>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Enabling/KeHSWD_b_EnblNewBusOffChck'
 * '<S127>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Enabling/KeHSWD_b_Enbl_CBC_Range'
 * '<S128>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Enabling/SWITCH_UP'
 * '<S129>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Enabling/getFaultActiveAndTestCompleted'
 * '<S130>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Enabling/getFaultActiveAndTestCompleted1'
 * '<S131>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Fault_Check/EnumeratedConstant32'
 * '<S132>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Fault_Check/EnumeratedValue1'
 * '<S133>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Fault_Check/Enumerated_Constant6'
 * '<S134>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/Fault_Check/KeHSWD_b_CktRng_SNAEnbl'
 * '<S135>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/KeHSWD_Cnt_CBC_HdAjar_PerFail'
 * '<S136>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/KeHSWD_Cnt_CBC_HdAjar_PerSmp'
 * '<S137>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/KeHSWD_b_EngHoodSwCktRngPerf_LtchEnbl'
 * '<S138>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2'
 * '<S139>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/getStatusByte'
 * '<S140>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/BaseXofY'
 * '<S141>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/EdgeFalling1'
 * '<S142>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/Enumerated Constant16'
 * '<S143>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/Fail'
 * '<S144>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/Init'
 * '<S145>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/Pass'
 * '<S146>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/UpdateMFOP'
 * '<S147>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S148>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S149>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/Fail/Enumerated Constant16'
 * '<S150>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/Init/Enumerated Constant16'
 * '<S151>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/Pass/Enumerated Constant16'
 * '<S152>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S153>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257D_CBC_Cir_Rng/X_out_of_Y/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S154>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Enabling'
 * '<S155>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Fault_Check'
 * '<S156>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y'
 * '<S157>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Enabling/EvtInfo_EngHoodSwCktHi_FaultActiveTOC_12'
 * '<S158>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Enabling/EvtInfo_EngHoodSwCktRngPerf_FaultActiveTOC_10'
 * '<S159>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Enabling/EvtInfo_HiSpdCANCommBus_FaultActiveTOC_11'
 * '<S160>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Enabling/EvtInfo_InvData_BCM_FaultActiveTOC_13'
 * '<S161>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Enabling/EvtInfo_LostCommBCM_FaultActiveTOC_9'
 * '<S162>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Enabling/KeHSWD_b_EnblNewBusOffChck'
 * '<S163>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Enabling/KeHSWD_b_Enbl_CBC_Fault_Low'
 * '<S164>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Enabling/KeHSWD_b_Enbl_P257D_Check'
 * '<S165>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Enabling/SWITCH_UP'
 * '<S166>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Enabling/getFaultActiveAndTestCompleted'
 * '<S167>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Enabling/getFaultActiveAndTestCompleted1'
 * '<S168>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Fault_Check/EnumeratedConstant34'
 * '<S169>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Fault_Check/EnumeratedConstant35'
 * '<S170>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Fault_Check/EnumeratedConstant36'
 * '<S171>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Fault_Check/EnumeratedConstant37'
 * '<S172>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Fault_Check/EnumeratedConstant38'
 * '<S173>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/Fault_Check/Enumerated_Constant6'
 * '<S174>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/KeHSWD_Cnt_CBC_HdAjar_LoFail'
 * '<S175>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/KeHSWD_Cnt_CBC_HdAjar_LoSmp'
 * '<S176>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/KeHSWD_b_EngHoodSwCktLo_LtchEnbl'
 * '<S177>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2'
 * '<S178>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/getStatusByte'
 * '<S179>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/BaseXofY'
 * '<S180>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/EdgeFalling1'
 * '<S181>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/Enumerated Constant16'
 * '<S182>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/Fail'
 * '<S183>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/Init'
 * '<S184>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/Pass'
 * '<S185>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/UpdateMFOP'
 * '<S186>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S187>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S188>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/Fail/Enumerated Constant16'
 * '<S189>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/Init/Enumerated Constant16'
 * '<S190>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/Pass/Enumerated Constant16'
 * '<S191>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S192>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257E_CBC_Flt_Low/X_out_of_Y/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S193>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Enabling'
 * '<S194>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Fault_Check'
 * '<S195>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y'
 * '<S196>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Enabling/EvtInfo_EngHoodSwCktLo_FaultActiveTOC_20'
 * '<S197>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Enabling/EvtInfo_EngHoodSwCktRngPerf_FaultActiveTOC_17'
 * '<S198>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Enabling/EvtInfo_HiSpdCANCommBus_FaultActiveTOC_18'
 * '<S199>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Enabling/EvtInfo_InvData_BCM_FaultActiveTOC_19'
 * '<S200>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Enabling/EvtInfo_LostCommBCM_FaultActiveTOC_16'
 * '<S201>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Enabling/KeHSWD_b_EnblNewBusOffChck'
 * '<S202>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Enabling/KeHSWD_b_Enbl_CBC_Fault_High'
 * '<S203>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Enabling/KeHSWD_b_Enbl_P257D_Check'
 * '<S204>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Enabling/SWITCH_UP'
 * '<S205>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Enabling/getFaultActiveAndTestCompleted'
 * '<S206>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Enabling/getFaultActiveAndTestCompleted1'
 * '<S207>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Fault_Check/EnumeratedConstant40'
 * '<S208>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Fault_Check/EnumeratedConstant41'
 * '<S209>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Fault_Check/EnumeratedConstant42'
 * '<S210>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Fault_Check/EnumeratedConstant43'
 * '<S211>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Fault_Check/EnumeratedConstant44'
 * '<S212>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/Fault_Check/Enumerated_Constant6'
 * '<S213>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/KeHSWD_Cnt_CBC_HdAjar_HiFail'
 * '<S214>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/KeHSWD_Cnt_CBC_HdAjar_HiSmp'
 * '<S215>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/KeHSWD_b_EngHoodSwCktHi_LtchEnbl'
 * '<S216>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2'
 * '<S217>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/getStatusByte'
 * '<S218>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/BaseXofY'
 * '<S219>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/EdgeFalling1'
 * '<S220>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/Enumerated Constant16'
 * '<S221>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/Fail'
 * '<S222>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/Init'
 * '<S223>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/Pass'
 * '<S224>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/UpdateMFOP'
 * '<S225>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S226>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S227>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/Fail/Enumerated Constant16'
 * '<S228>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/Init/Enumerated Constant16'
 * '<S229>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/Pass/Enumerated Constant16'
 * '<S230>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S231>' : 'HSWR_ac/HSWR_MedTEH/HSWD/PrimaryHoodSwitch/PrimaryHoodSwitch/P257F_CBC_Flt_High/X_out_of_Y/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S232>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecHoodFltStub'
 * '<S233>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch'
 * '<S234>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecHoodFltStub/Enumerated Constant1'
 * '<S235>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecHoodFltStub/Enumerated Constant16'
 * '<S236>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecHoodFltStub/Enumerated Constant2'
 * '<S237>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecHoodFltStub/Enumerated Constant3'
 * '<S238>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf'
 * '<S239>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low'
 * '<S240>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High'
 * '<S241>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check'
 * '<S242>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/Enabling'
 * '<S243>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/Fault_Check'
 * '<S244>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y'
 * '<S245>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/Enabling/EvtInfo_EngHoodSw2CktHi_FaultActiveTOC_24'
 * '<S246>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/Enabling/EvtInfo_EngHoodSw2CktLo_FaultActiveTOC_23'
 * '<S247>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/Enabling/KeHSWD_b_EnblOvrd_SecBnt_Circuit_Perf'
 * '<S248>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/Enabling/KeHSWD_b_Enbl_SecBnt_Circuit_Perf'
 * '<S249>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/Fault_Check/KeHSWR_U_SecBnt_Performance_Max'
 * '<S250>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/Fault_Check/KeHSWR_U_SecBnt_Performance_Min'
 * '<S251>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/KeHSWD_Cnt_SecBnt_PrfFail'
 * '<S252>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/KeHSWD_Cnt_SecBnt_PrfSmp'
 * '<S253>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/KeHSWD_b_EngHoodSw2AjDrv_LtchEnbl'
 * '<S254>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2'
 * '<S255>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/getStatusByte'
 * '<S256>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/BaseXofY'
 * '<S257>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/EdgeFalling1'
 * '<S258>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/Enumerated Constant16'
 * '<S259>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/Fail'
 * '<S260>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/Init'
 * '<S261>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/Pass'
 * '<S262>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/UpdateMFOP'
 * '<S263>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S264>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S265>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/Fail/Enumerated Constant16'
 * '<S266>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/Init/Enumerated Constant16'
 * '<S267>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/Pass/Enumerated Constant16'
 * '<S268>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S269>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152C_SecHood_Perf/X_out_of_Y/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S270>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/Enabling'
 * '<S271>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/Fault_Check'
 * '<S272>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y'
 * '<S273>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/Enabling/EvtInfo_EngHoodSw2CktHi_FaultActiveTOC_27'
 * '<S274>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/Enabling/KeHSWD_b_EnblOvrd_SecBnt_Circuit_Low'
 * '<S275>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/Enabling/KeHSWD_b_Enbl_SecBnt_Circuit_Low'
 * '<S276>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/Fault_Check/KeHSWR_U_SecBnt_ShortedLow_Max'
 * '<S277>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/Fault_Check/KeHSWR_U_SecBnt_ShortedLow_Min'
 * '<S278>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/KeHSWD_Cnt_SecBnt_LoFail'
 * '<S279>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/KeHSWD_Cnt_SecBnt_LoSmp'
 * '<S280>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/KeHSWD_b_EngHoodSw2CktLo_LtchEnbl'
 * '<S281>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2'
 * '<S282>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/getStatusByte'
 * '<S283>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/BaseXofY'
 * '<S284>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/EdgeFalling1'
 * '<S285>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/Enumerated Constant16'
 * '<S286>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/Fail'
 * '<S287>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/Init'
 * '<S288>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/Pass'
 * '<S289>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/UpdateMFOP'
 * '<S290>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S291>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S292>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/Fail/Enumerated Constant16'
 * '<S293>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/Init/Enumerated Constant16'
 * '<S294>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/Pass/Enumerated Constant16'
 * '<S295>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S296>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152D_SecHood_Low/X_out_of_Y/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S297>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/Enabling'
 * '<S298>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/Fault_Check'
 * '<S299>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y'
 * '<S300>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/Enabling/EvtInfo_EngHoodSw2CktLo_FaultActiveTOC_30'
 * '<S301>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/Enabling/KeHSWD_b_EnblOvrd_SecBnt_Circuit_High'
 * '<S302>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/Enabling/KeHSWD_b_Enbl_SecBnt_Circuit_High'
 * '<S303>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/Fault_Check/KeHSWR_U_SecBnt_ShortedHigh_Max'
 * '<S304>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/Fault_Check/KeHSWR_U_SecBnt_ShortedHigh_Min'
 * '<S305>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/KeHSWD_Cnt_SecBnt_HiFail'
 * '<S306>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/KeHSWD_Cnt_SecBnt_HiSmp'
 * '<S307>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/KeHSWD_b_EngHoodSw2CktHi_LtchEnbl'
 * '<S308>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2'
 * '<S309>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/getStatusByte'
 * '<S310>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/BaseXofY'
 * '<S311>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/EdgeFalling1'
 * '<S312>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/Enumerated Constant16'
 * '<S313>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/Fail'
 * '<S314>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/Init'
 * '<S315>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/Pass'
 * '<S316>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/UpdateMFOP'
 * '<S317>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S318>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S319>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/Fail/Enumerated Constant16'
 * '<S320>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/Init/Enumerated Constant16'
 * '<S321>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/Pass/Enumerated Constant16'
 * '<S322>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S323>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152E_SecHood_High/X_out_of_Y/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S324>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling'
 * '<S325>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Fault_Check'
 * '<S326>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y'
 * '<S327>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/EvtInfo_EngHoodSw2AjDrv_FaultActiveTOC_39'
 * '<S328>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/EvtInfo_EngHoodSw2CktHi_FaultActiveTOC_41'
 * '<S329>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/EvtInfo_EngHoodSw2CktLo_FaultActiveTOC_40'
 * '<S330>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/EvtInfo_EngHoodSwCktHi_FaultActiveTOC_38'
 * '<S331>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/EvtInfo_EngHoodSwCktLo_FaultActiveTOC_37'
 * '<S332>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/EvtInfo_EngHoodSwCktRngPerf_FaultActiveTOC_36'
 * '<S333>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/EvtInfo_HiSpdCANCommBus_FaultActiveTOC_35'
 * '<S334>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/EvtInfo_InvData_BCM_FaultActiveTOC_33'
 * '<S335>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/EvtInfo_LostCommBCM_FaultActiveTOC_34'
 * '<S336>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/KeHSWD_b_EnblNewBusOffChck'
 * '<S337>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/KeHSWD_b_EnblOvrd_CBCSec_Correlation_Check'
 * '<S338>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/KeHSWD_b_Enbl_CBCSec_Correlation_Check'
 * '<S339>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/SWITCH_UP'
 * '<S340>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/getFaultActiveAndTestCompleted'
 * '<S341>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/Enabling/getFaultActiveAndTestCompleted1'
 * '<S342>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/KeHSWD_Cnt_CBCSec_CcFail'
 * '<S343>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/KeHSWD_Cnt_CBCSec_CcSmp'
 * '<S344>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/KeHSWD_b_EngHoodSwCorr_LtchEnbl'
 * '<S345>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2'
 * '<S346>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/getStatusByte'
 * '<S347>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/BaseXofY'
 * '<S348>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/EdgeFalling1'
 * '<S349>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/Enumerated Constant16'
 * '<S350>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/Fail'
 * '<S351>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/Init'
 * '<S352>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/Pass'
 * '<S353>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/UpdateMFOP'
 * '<S354>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S355>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S356>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/Fail/Enumerated Constant16'
 * '<S357>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/Init/Enumerated Constant16'
 * '<S358>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/Pass/Enumerated Constant16'
 * '<S359>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S360>' : 'HSWR_ac/HSWR_MedTEH/HSWD/SecodaryHoodSwitch/SecodaryHoodSwitch/P152F_Corr_Check/X_out_of_Y/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S361>' : 'HSWR_ac/HSWR_MedTEH/HSWD/Voltage_In_Range/KeHSWD_U_SysVolt_Max'
 * '<S362>' : 'HSWR_ac/HSWR_MedTEH/HSWD/Voltage_In_Range/KeHSWD_U_SysVolt_Min'
 * '<S363>' : 'HSWR_ac/HSWR_MedTEH/HSWD/Voltage_In_Range/KeHSWD_b_SysVoltEnbl'
 * '<S364>' : 'HSWR_ac/HSWR_MedTEH/Input_Overrides/KeHSWR_U_SysVolt_D'
 * '<S365>' : 'HSWR_ac/HSWR_MedTEH/Input_Overrides/KeHSWR_b_DsblFailSafe_D'
 * '<S366>' : 'HSWR_ac/HSWR_MedTEH/Input_Overrides/KeHSWR_b_DsblFailSafe_SD'
 * '<S367>' : 'HSWR_ac/HSWR_MedTEH/Input_Overrides/KeHSWR_b_IsDiagGlobalConditionsValid_D'
 * '<S368>' : 'HSWR_ac/HSWR_MedTEH/Input_Overrides/KeHSWR_b_IsDiagGlobalConditionsValid_SD'
 * '<S369>' : 'HSWR_ac/HSWR_MedTEH/Input_Overrides/KeHSWR_b_PostCodeClrDiagDsbl_D'
 * '<S370>' : 'HSWR_ac/HSWR_MedTEH/Input_Overrides/KeHSWR_b_PostCodeClrDiagDsbl_SD'
 * '<S371>' : 'HSWR_ac/HSWR_MedTEH/Input_Overrides/KeHSWR_b_SysVolt_SD'
 * '<S372>' : 'HSWR_ac/HSWR_PwrOn/DSM_Init'
 * '<S373>' : 'HSWR_ac/HSWR_PwrOn/InitOutput'
 * '<S374>' : 'HSWR_ac/HSWR_PwrOn/Initialize_HSWI_IRVs'
 * '<S375>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/Const14'
 * '<S376>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/Const15'
 * '<S377>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/Const16'
 * '<S378>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/Const17'
 * '<S379>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/Const18'
 * '<S380>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/Const19'
 * '<S381>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/Const20'
 * '<S382>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/Enumerated_Constant2'
 * '<S383>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/HSWR_NF_Output'
 * '<S384>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/KeHSWR_i_CBC_BntAjrRwVlSts_NF_Dial'
 * '<S385>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/HSWR_NF_Output/BooleanSetBlock1'
 * '<S386>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/HSWR_NF_Output/BooleanSetBlock3'
 * '<S387>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/HSWR_NF_Output/BooleanSetBlock4'
 * '<S388>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/HSWR_NF_Output/BooleanSetBlock5'
 * '<S389>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/HSWR_NF_Output/BooleanSetBlock6'
 * '<S390>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/HSWR_NF_Output/EnumSetBlock'
 * '<S391>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/HSWR_NF_Output/EnumSetBlock1'
 * '<S392>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/HSWR_NF_Output/EnumeratedValue'
 * '<S393>' : 'HSWR_ac/HSWR_PwrOn/InitOutput/HSWR_NF_Output/EnumeratedValue1'
 * '<S394>' : 'HSWR_ac/HSWR_PwrOn/Initialize_HSWI_IRVs/Const13'
 * '<S395>' : 'HSWR_ac/HSWR_PwrOn/Initialize_HSWI_IRVs/Enumerated_Constant1'
 * '<S396>' : 'HSWR_ac/HSWR_PwrOn/Initialize_HSWI_IRVs/Enumerated_Constant2'
 * '<S397>' : 'HSWR_ac/HSWR_PwrOn/Initialize_HSWI_IRVs/Enumerated_Constant4'
 * '<S398>' : 'HSWR_ac/HSWR_PwrOn/Initialize_HSWI_IRVs/KeHSWR_U_BntAjrRwVlStsVolt_Init'
 * '<S399>' : 'HSWR_ac/HSWR_PwrOn/Initialize_HSWI_IRVs/KeHSWR_e_ECMHoodAjar_Init'
 * '<S400>' : 'HSWR_ac/HSWR_PwrOn/Initialize_HSWI_IRVs/KeHSWR_e_RedntHdStat_Init'
 * '<S401>' : 'HSWR_ac/HSWR_PwrOn/Initialize_HSWI_IRVs/KeHSWR_i_CBC_BntAjrRwVlSts_Init'
 * '<S402>' : 'HSWR_ac/PokeHSWR_U_CBC_BntAjrRwVlStsVolt/PokeHSWR_U_CBC_BntAjrRwVlStsVoltChrt'
 * '<S403>' : 'HSWR_ac/PokeHSWR_e_CBC_BntAjrRwVlSts/KaHSWR_i_CBC_BntAjrRwVlSts_Map'
 * '<S404>' : 'HSWR_ac/PokeHSWR_e_CBC_BntAjrRwVlSts/PokeHSWR_e_CBC_BntAjrRwVlStsChrt'
 * '<S405>' : 'HSWR_ac/PokeHSWR_e_ECMHoodAjar/KaHSWR_e_ECMHoodAjar_Map'
 * '<S406>' : 'HSWR_ac/PokeHSWR_e_ECMHoodAjar/PokeHSWR_e_ECMHoodAjarChrt'
 * '<S407>' : 'HSWR_ac/PokeHSWR_e_RedntHdSwStat/KaHSWR_e_HdSwtch_St_Map'
 * '<S408>' : 'HSWR_ac/PokeHSWR_e_RedntHdSwStat/PokeHSWR_e_RedntHdSwStatChrt'
 * '<S409>' : 'HSWR_ac/TmotHSWR_b_ECMHoodAjar/TmotHSWR_b_ECMHoodAjarChrt'
 */
#endif                                 /* RTW_HEADER_HSWR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
