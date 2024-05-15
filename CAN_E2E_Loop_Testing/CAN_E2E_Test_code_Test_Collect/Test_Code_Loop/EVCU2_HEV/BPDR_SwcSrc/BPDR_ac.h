/*
 * File: BPDR_ac.h
 *
 * Code generated for Simulink model 'BPDR_ac'.
 *
 * Model version                  : 9.98
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:08:53 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BPDR_ac_h_
#define RTW_HEADER_BPDR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef BPDR_ac_COMMON_INCLUDES_
#define BPDR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_BPDR.h"
#endif                                 /* BPDR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_BPDR_ac_T
{
    float32 OutportBufferForVeBPDR_phi_PosSlipIntegr;/* '<S257>/Const1' */
    float32 OutportBufferForVeBPDR_phi_NegSlipIntegr;/* '<S257>/Const2' */
    float32 OutportBufferForVeBPDR_M_BeltCapMaxCorre;/* '<S257>/Const3' */
    float32 OutportBufferForVeBPDR_M_BeltCapMinCorre;/* '<S257>/Const4' */
    float32 VariantMergeForOutportBeltCapMaxCorrecti;
    float32 VariantMergeForOutportBeltCapMinCorrecti;

#if Rte_SysCon_Variant_BPDR_1

    float32 VeBCPR_n_BeltSlipSpd;      /* '<S5>/VeBCPR_n_BeltSlipSpd' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 VeBCPR_n_BeltSlipSpdFilt;  /* '<S5>/VeBCPR_n_BeltSlipSpdFilt' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 VeHTDR_M_MtrA_TorqCmnd;    /* '<S5>/VeHTDR_M_MtrA_TorqCmnd' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 VeBCPR_n_Ni_BCPR;          /* '<S5>/VeBCPR_n_Ni_BCPR' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 VeBCPR_M_BeltCapMinBPDR;   /* '<S5>/VeBCPR_M_BeltCapMinBPDR' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 VeBCPR_M_BeltCapMaxBPDR;   /* '<S5>/VeBCPR_M_BeltCapMaxBPDR' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 VeBCPR_M_BeltTrqMinHTDR_Rot;/* '<S5>/VeBCPR_M_BeltTrqMinHTDR_Rot' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 VeBCPR_M_BeltTrqMaxHTDR_Rot;/* '<S5>/VeBCPR_M_BeltTrqMaxHTDR_Rot' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 VeMTIR_M_MtrA_TorqAchieved;/* '<S5>/VeMTIR_M_MtrA_TorqAchieved' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeBPDR_b_PosSlipDetected;/* '<S257>/Const5' */
    boolean OutportBufferForVeBPDR_b_BeltSlipFltInht;/* '<S257>/Const6' */
    boolean OutportBufferForVeBPDR_b_NrStartsWSlipFl;/* '<S257>/Const7' */
    boolean OutportBufferForVeBPDR_b_BeltSlipFltDtct;/* '<S257>/Const8' */
    boolean VariantMergeForOutportBeltSlipFltDtct;
    boolean VariantMergeForOutportBeltSlipFltInhtSta;
    boolean VariantMergeForOutportNrStartsWSlipFltIn;
    boolean VariantMergeForOutportPosSlipLtchForFail;

#if Rte_SysCon_Variant_BPDR_1

    boolean VeBCPR_b_BeltSlipSpd_FA;   /* '<S5>/VeBCPR_b_BeltSlipSpd_FA' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean VeESPR_b_BuffrCrnkDiagFailing;
                                      /* '<S5>/VeESPR_b_BuffrCrnkDiagFailing' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean VeBCPR_b_PosSlipDetected;  /* '<S5>/VeBCPR_b_PosSlipDetected' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean VeBCPR_b_NegSlipDetected;  /* '<S5>/VeBCPR_b_NegSlipDetected' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean VeDFIR_b_DsblDiagFailSafe; /* '<S5>/VeDFIR_b_DsblDiagFailSafe' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean VeDFIR_b_PostCodeClrDiagDsbl;/* '<S5>/VeDFIR_b_PostCodeClrDiagDsbl' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean VeBCPR_b_BeltSlipTrigger;  /* '<S5>/VeBCPR_b_BeltSlipTrigger' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    TeTISR_e_InpSpdDfltSource VeTISR_e_InpSpdSource;/* '<S5>/VeTISR_e_InpSpdSource' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    TePMDR_e_PowerMode VePMDR_e_PMM_PowerMode;/* '<S5>/VePMDR_e_PMM_PowerMode' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    TeESSR_e_EngStrtStpMd VeESSR_e_EngStrtStpMd;/* '<S5>/VeESSR_e_EngStrtStpMd' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    TeESSR_e_EngStartStopSt VeESSR_e_EngStartStopSt;/* '<S5>/VeESSR_e_EngStartStopSt' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    TeESPR_e_EngSpdStatus VeESPR_e_EngineSpeedStatus;/* '<S5>/VeESPR_e_EngineSpeedStatus' */

#define B_BPDR_AC_T_VARIANT_EXISTS
#endif

    TeDFIB_e_FaultDebounceStatus OutportBufferForVeBPDR_e_FaultSts_Hybrid;/* '<S257>/Const' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeBPDR_e_FaultSts_Starte;/* '<S257>/Const9' */
    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportVeBPDR_e_FaultSts_;
    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportVeBPDR_e_FaultSt_c;
}
B_BPDR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_BPDR_ac_T
{

#if Rte_SysCon_Variant_BPDR_1

    float32 UnitDelay_DSTATE;          /* '<S155>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 UnitDelay_DSTATE_c;        /* '<S154>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 UnitDelay_DSTATE_p;        /* '<S153>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 UnitDelay_DSTATE_ps;       /* '<S152>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 UnitDelay_DSTATE_i;        /* '<S124>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 UnitDelay_DSTATE_d;        /* '<S94>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 UnitDelay_DSTATE_b;        /* '<S74>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 UnitDelay_DSTATE_f;        /* '<S44>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

    float32 NeBPDR_phi_NegSlipIntegrated;/* '<Root>/DSM_1' */
    float32 NeBPDR_phi_PosSlipIntegrated;/* '<Root>/DSM_2' */

#if Rte_SysCon_Variant_BPDR_1

    uint16 UnitDelay_DSTATE_ee;        /* '<S228>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    uint16 UnitDelay_DSTATE_h1;        /* '<S227>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    uint16 UnitDelay_DSTATE_l;         /* '<S226>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    uint16 UnitDelay_DSTATE_j0;        /* '<S225>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

    uint16 NeBPDR_Cnt_BeltSlip_MFOP; /* '<Root>/DSM_NeBPDR_Cnt_BeltSlip_MFOP' */

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_k;        /* '<S164>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay2_DSTATE_n;       /* '<S15>/Unit Delay2' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_m;        /* '<S15>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_ne;       /* '<S162>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay2_DSTATE_k;       /* '<S17>/Unit Delay2' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_gh;       /* '<S17>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay7_DSTATE;         /* '<S13>/Unit Delay7' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_l1;       /* '<S178>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_nl;       /* '<S217>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay1_DSTATE_gi;      /* '<S217>/Unit Delay1' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay2_DSTATE_b;       /* '<S178>/Unit Delay2' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_nh;       /* '<S218>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay1_DSTATE_j;       /* '<S218>/Unit Delay1' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_bl;       /* '<S234>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay1_DSTATE_n;       /* '<S234>/Unit Delay1' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_bx;       /* '<S235>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_p3;       /* '<S219>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_ma;       /* '<S215>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_bd;       /* '<S214>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_pu;       /* '<S213>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_dm;       /* '<S212>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_jv;       /* '<S201>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_ej;       /* '<S200>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_dd;       /* '<S199>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_jb;       /* '<S192>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_gy;       /* '<S191>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_bn;       /* '<S163>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_ab;       /* '<S161>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_mc;       /* '<S140>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_gq;       /* '<S139>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_mh;       /* '<S138>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_ip;       /* '<S137>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_id;       /* '<S136>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_co;       /* '<S135>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_a1;       /* '<S125>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_b2;       /* '<S123>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_ig;       /* '<S122>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_hc;       /* '<S108>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_ho;       /* '<S107>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_n2;       /* '<S106>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_ddl;      /* '<S105>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_bw;       /* '<S95>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_nf;       /* '<S77>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_ch;       /* '<S75>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_d4;       /* '<S73>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_fj;       /* '<S72>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_ko;       /* '<S58>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_p5;       /* '<S57>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_a4;       /* '<S56>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_kf;       /* '<S55>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_aq;       /* '<S45>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean UnitDelay_DSTATE_lk;       /* '<S27>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPDR_1

    TeESSR_e_EngStartStopSt UnitDelay_DSTATE_o;/* '<S216>/Unit Delay' */

#define DW_BPDR_AC_T_VARIANT_EXISTS
#endif

    uint8 StatusByte_LostCommECM_A_BusB;
                                 /* '<Root>/DS_StatusByte_LostCommECM_A_BusB' */
    uint8 StatusByte_LostCommECM_PCM_A;
                                  /* '<Root>/DS_StatusByte_LostCommECM_PCM_A' */
}
DW_BPDR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeDFIB_e_FaultDebounceStatus Constant;/* '<S258>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_b;/* '<S259>/Constant' */
}
ConstB_BPDR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPDR
#include "MemMap.h"

extern VAR(B_BPDR_ac_T, BPDR_VAR_INIT) BPDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPDR
#include "MemMap.h"

extern VAR(DW_BPDR_ac_T, BPDR_VAR_INIT) BPDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPDR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_BPDR
#include "MemMap.h"

extern CONST(ConstB_BPDR_ac_T, BPDR_VAR_INIT) BPDR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_BPDR
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
 * '<Root>' : 'BPDR_ac'
 * '<S1>'   : 'BPDR_ac/BPDR_MedTED'
 * '<S2>'   : 'BPDR_ac/BPDR_PwrOff'
 * '<S3>'   : 'BPDR_ac/BPDR_PwrOn'
 * '<S4>'   : 'BPDR_ac/PokeBPDR_b_RstSlipAdaption'
 * '<S5>'   : 'BPDR_ac/BPDR_MedTED/BPDI_Input'
 * '<S6>'   : 'BPDR_ac/BPDR_MedTED/Diagnostic'
 * '<S7>'   : 'BPDR_ac/BPDR_MedTED/Output'
 * '<S8>'   : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag'
 * '<S9>'   : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag'
 * '<S10>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiagStub'
 * '<S11>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn'
 * '<S12>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry'
 * '<S13>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode'
 * '<S14>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp'
 * '<S15>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag'
 * '<S16>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp'
 * '<S17>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag'
 * '<S18>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_SlipComputation_Trigger'
 * '<S19>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BeltSlipLearnDeactivaton'
 * '<S20>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/Boolean Set Block'
 * '<S21>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/Boolean Set Block1'
 * '<S22>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/Enumerated Value3'
 * '<S23>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/Enumerated Value4'
 * '<S24>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/IfThenElse'
 * '<S25>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/KeBPDR_b_UseRawBeltSlipForBeltDiag'
 * '<S26>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/DeadBand'
 * '<S27>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/EdgeRising1'
 * '<S28>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/HeBPDR_t_MedTED'
 * '<S29>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/IfThenElse'
 * '<S30>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/KeBPDR_Cf_ConvertRPMtoRPS'
 * '<S31>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/KeBPDR_Cf_ConvertRevToDeg'
 * '<S32>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/KeBPDR_M_MaxHDTRNegTqLimForBltMissDet'
 * '<S33>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/KeBPDR_k_NegBeltSlipFilterCoeff'
 * '<S34>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/KeBPDR_n_NegBeltSlip_MaxVal'
 * '<S35>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/KeBPDR_n_NegBeltSlip_MinVal'
 * '<S36>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/KeBPDR_n_NegSlipDeadBandMax'
 * '<S37>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/KeBPDR_n_NegSlipDeadBandMinStrtStop'
 * '<S38>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/KeBPDR_t_BltMissNegDetDly'
 * '<S39>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/KtBPDR_n_NegSlipDeadBandMin'
 * '<S40>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/KtBPDR_scl_NegSlipActTrqRatio'
 * '<S41>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/KtBPDR_scl_NegSlipActTrqRatioLoTq'
 * '<S42>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/Limiter'
 * '<S43>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/LowPass'
 * '<S44>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/Turn On Delay Time'
 * '<S45>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipComp/Turn On Delay Time/EdgeRising'
 * '<S46>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Accumulator Reset'
 * '<S47>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Constant Value10'
 * '<S48>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Constant Value3'
 * '<S49>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Constant Value4'
 * '<S50>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Constant Value5'
 * '<S51>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Constant Value6'
 * '<S52>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Constant Value7'
 * '<S53>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Constant Value8'
 * '<S54>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Constant Value9'
 * '<S55>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/EdgeFalling'
 * '<S56>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/EdgeRising1'
 * '<S57>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/EdgeRising2'
 * '<S58>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/EdgeRising4'
 * '<S59>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/HeBPDR_t_MedTED'
 * '<S60>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/KeBPDR_b_EnblNegSlipDiag'
 * '<S61>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/KeBPDR_b_EnblNegSlipDiag1'
 * '<S62>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/KeBPDR_b_NVRAMNegSlipRstOvrd'
 * '<S63>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/KeBPDR_b_RstSlipBufCrkFaildAtStart'
 * '<S64>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/KeBPDR_phi_NVRAMNegSlipRstOvrdVal'
 * '<S65>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/KeBPDR_t_NegSlipFreezeDly'
 * '<S66>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/KtBPDR_M_NegSlipCorrectedTrq'
 * '<S67>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/KtBPDR_M_NegSlipCorrectedTrq1'
 * '<S68>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/ResetPokeOutput'
 * '<S69>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/SWITCH_UP'
 * '<S70>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/SWITCH_UP1'
 * '<S71>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Set Block'
 * '<S72>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Signal Latch On With Reset1'
 * '<S73>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Signal Latch On With Reset4'
 * '<S74>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Turn Off Delay Time'
 * '<S75>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_NegSlipDiag/Turn Off Delay Time/EdgeFalling1'
 * '<S76>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/DeadBand'
 * '<S77>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/EdgeRising1'
 * '<S78>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/HeBPDR_t_MedTED'
 * '<S79>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/IfThenElse'
 * '<S80>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/KeBPDR_Cf_ConvertRPMtoRPS'
 * '<S81>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/KeBPDR_Cf_ConvertRevToDeg'
 * '<S82>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/KeBPDR_M_MinHDTRPosTqLimForBltMissDet'
 * '<S83>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/KeBPDR_k_PosBeltSlipFilterCoeff'
 * '<S84>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/KeBPDR_n_PosBeltSlip_MaxVal'
 * '<S85>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/KeBPDR_n_PosBeltSlip_MinVal'
 * '<S86>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/KeBPDR_n_PosSlipDeadBandMaxStrtStop'
 * '<S87>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/KeBPDR_n_PosSlipDeadBandMin'
 * '<S88>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/KeBPDR_t_BltMissPosDetDly'
 * '<S89>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/KtBPDR_n_PosSlipDeadBandMax'
 * '<S90>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/KtBPDR_scl_PosSlipActTrqRatio'
 * '<S91>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/KtBPDR_scl_PosSlipActTrqRatioLoTq'
 * '<S92>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/Limiter'
 * '<S93>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/LowPass'
 * '<S94>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/Turn On Delay Time'
 * '<S95>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipComp/Turn On Delay Time/EdgeRising'
 * '<S96>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Accumulator Reset'
 * '<S97>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Constant Value10'
 * '<S98>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Constant Value3'
 * '<S99>'  : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Constant Value4'
 * '<S100>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Constant Value5'
 * '<S101>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Constant Value6'
 * '<S102>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Constant Value7'
 * '<S103>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Constant Value8'
 * '<S104>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Constant Value9'
 * '<S105>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/EdgeFalling'
 * '<S106>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/EdgeRising1'
 * '<S107>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/EdgeRising2'
 * '<S108>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/EdgeRising4'
 * '<S109>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/HeBPDR_t_MedTED'
 * '<S110>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/KeBPDR_b_EnblPosSlipDiag'
 * '<S111>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/KeBPDR_b_EnblPosSlipDiag1'
 * '<S112>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/KeBPDR_b_NVRAMPosSlipRstOvrd'
 * '<S113>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/KeBPDR_b_RstSlipBufCrkFaildAtStart'
 * '<S114>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/KeBPDR_phi_NVRAMPosSlipRstOvrdVal'
 * '<S115>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/KeBPDR_t_PosSlipFreezeDly'
 * '<S116>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/KtBPDR_M_PosSlipCorrectedTrq'
 * '<S117>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/KtBPDR_M_PosSlipCorrectedTrq1'
 * '<S118>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/ResetPokeOutput'
 * '<S119>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/SWITCH_UP'
 * '<S120>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/SWITCH_UP1'
 * '<S121>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Set Block'
 * '<S122>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Signal Latch On With Reset1'
 * '<S123>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Signal Latch On With Reset4'
 * '<S124>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Turn Off Delay Time'
 * '<S125>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_PosSlipDiag/Turn Off Delay Time/EdgeFalling1'
 * '<S126>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_SlipComputation_Trigger/EvtInfo_LostCommECM_A_BusB_FaultActiveTOC_1'
 * '<S127>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_SlipComputation_Trigger/EvtInfo_LostCommECM_PCM_A_FaultActiveTOC_2'
 * '<S128>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_SlipComputation_Trigger/KeBPDR_b_EnaLosCommECMChk'
 * '<S129>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BPDR_SlipComputation_Trigger/KeBPDR_b_LOC_ECMAtlantis_Slct'
 * '<S130>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BeltSlipLearnDeactivaton/KaBPDR_b_EngStrtStpStBeltLearnNotAllwd'
 * '<S131>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapCrrctn/BeltSlipLearnDeactivaton/KaBPDR_b_EngStrtStpStBeltUnlearnNotAllwd'
 * '<S132>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/BPDR_UnlearnDisable'
 * '<S133>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/DoNothing'
 * '<S134>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/DoNothing1'
 * '<S135>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/EdgeRising'
 * '<S136>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/EdgeRising1'
 * '<S137>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/EdgeRising2'
 * '<S138>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/EdgeRising3'
 * '<S139>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/EdgeRising4'
 * '<S140>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/EdgeRising5'
 * '<S141>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/HeBPDR_t_MedTED'
 * '<S142>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/KeBPDR_K_NegSlipCapTh'
 * '<S143>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/KeBPDR_K_PosSlipCapTh'
 * '<S144>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/KeBPDR_t_DbncNegSlipTrqCap'
 * '<S145>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/KeBPDR_t_DbncPosSlipTrqCap'
 * '<S146>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/KtBPDR_phi_NegSlipRecovery'
 * '<S147>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/KtBPDR_phi_PosSlipRecovery'
 * '<S148>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/Negative_Capacity_Recovery'
 * '<S149>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/Positive_Capacity_Recovery'
 * '<S150>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/Signal Latch On With Reset'
 * '<S151>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/Signal Latch On With Reset1'
 * '<S152>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/Stop_Watch_Reset_Enabled'
 * '<S153>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/Stop_Watch_Reset_Enabled1'
 * '<S154>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/Unit Delay Reset Enabled'
 * '<S155>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/Unit Delay Reset Enabled1'
 * '<S156>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/UnitDelay'
 * '<S157>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/UnitDelay1'
 * '<S158>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/BPDR_UnlearnDisable/CeTISR_e_EngSpeedFromCAN'
 * '<S159>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/Negative_Capacity_Recovery/Limiter'
 * '<S160>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/Positive_Capacity_Recovery/Limiter'
 * '<S161>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/UnitDelay/EdgeRising4'
 * '<S162>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/UnitDelay/Unit Delay Reset Enabled2'
 * '<S163>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/UnitDelay1/EdgeRising4'
 * '<S164>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_BeltCapRcvry/UnitDelay1/Unit Delay Reset Enabled2'
 * '<S165>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/EnblCndtn_P0A92'
 * '<S166>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/FailCndtn_P0A92'
 * '<S167>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/KeBPDR_Cnt_BeltSlipFailLmt'
 * '<S168>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/KeBPDR_Cnt_BeltSlipPassLmt'
 * '<S169>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/KeBPDR_Cnt_BeltSlipSmplLmt'
 * '<S170>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/KeBPDR_Cnt_P0A92_FailCnt'
 * '<S171>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/KeBPDR_Cnt_P0A92_SmpCnt'
 * '<S172>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/KeBPDR_b_EnblStartWSlipDiag'
 * '<S173>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/KeBPDR_b_HybridGenPerf_Slip_LtchEnbl'
 * '<S174>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/KeBPDR_b_IUMPR_P0A92_Enb'
 * '<S175>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/KeBPDR_b_StarterGenMechPerf_Slip_LtchEnbl'
 * '<S176>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/ResetCounts'
 * '<S177>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt'
 * '<S178>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail'
 * '<S179>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2'
 * '<S180>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/EnblCndtn_P0A92/Enumerated Value3'
 * '<S181>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/EnblCndtn_P0A92/EvtInfo_LostCommECM_A_BusB_FaultActiveTOC_3'
 * '<S182>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/EnblCndtn_P0A92/EvtInfo_LostCommECM_PCM_A_FaultActiveTOC_4'
 * '<S183>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/EnblCndtn_P0A92/KeBPDR_M_MtrATrqThrshld'
 * '<S184>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/EnblCndtn_P0A92/KeBPDR_b_EnaLosCommECMChk'
 * '<S185>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/EnblCndtn_P0A92/KeBPDR_b_LOC_ECMAtlantis_Slct'
 * '<S186>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/EnblCndtn_P0A92/KeBPDR_b_P0A92_EngStsOvrd'
 * '<S187>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/EnblCndtn_P0A92/KeBPDR_b_P0A92_MtrTrqOvrd'
 * '<S188>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/EnblCndtn_P0A92/KeBPDR_b_P0A92_SlipSpdOvrd'
 * '<S189>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/EnblCndtn_P0A92/KeBPDR_b_P0A92_SpdValidVOvrd'
 * '<S190>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/EnblCndtn_P0A92/KeBPDR_n_BeltSlipSpdThrshld'
 * '<S191>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/FailCndtn_P0A92/Hysteresis'
 * '<S192>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/FailCndtn_P0A92/Hysteresis1'
 * '<S193>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/FailCndtn_P0A92/KeBPDR_M_NegSlipCorrectedTrqThLSP'
 * '<S194>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/FailCndtn_P0A92/KeBPDR_M_NegSlipCorrectedTrqThRSP'
 * '<S195>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/FailCndtn_P0A92/KeBPDR_M_PosSlipCorrectedTrqThLSP'
 * '<S196>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/FailCndtn_P0A92/KeBPDR_M_PosSlipCorrectedTrqThRSP'
 * '<S197>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/FailCndtn_P0A92/KeBPDR_b_EnblNegSlipDiag'
 * '<S198>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/FailCndtn_P0A92/KeBPDR_b_EnblPosSlipDiag'
 * '<S199>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/EdgeRising1'
 * '<S200>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/EdgeRising2'
 * '<S201>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/EdgeRising3'
 * '<S202>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/Enumerated Value'
 * '<S203>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/Enumerated Value1'
 * '<S204>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/Enumerated Value2'
 * '<S205>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/Enumerated Value3'
 * '<S206>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/Enumerated Value4'
 * '<S207>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/Enumerated Value5'
 * '<S208>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/Enumerated Value6'
 * '<S209>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/KaBPDR_b_AutoStartStForFail'
 * '<S210>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/KaBPDR_b_AutoStartStForPass'
 * '<S211>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/KaBPDR_b_EngStrtStpMdForFail'
 * '<S212>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/Signal Latch On With Reset1'
 * '<S213>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/Signal Latch On With Reset2'
 * '<S214>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/Signal Latch On With Reset3'
 * '<S215>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/Signal Latch On With Reset4'
 * '<S216>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/SlipAtEngStartCnt/Unit Delay Reset Enabled'
 * '<S217>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/BaseXofY_Fail'
 * '<S218>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/BaseXofY_Pass'
 * '<S219>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/EdgeFalling1'
 * '<S220>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/Enumerated Constant1'
 * '<S221>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/Fail'
 * '<S222>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/Init'
 * '<S223>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/Pass'
 * '<S224>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/UpdateMFOP'
 * '<S225>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/BaseXofY_Fail/Counter Reset  Enabled '
 * '<S226>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/BaseXofY_Fail/Counter Reset  Enabled 1'
 * '<S227>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/BaseXofY_Pass/Counter Reset  Enabled '
 * '<S228>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/BaseXofY_Pass/Counter Reset  Enabled 1'
 * '<S229>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/Fail/Enumerated Constant16'
 * '<S230>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/Init/Enumerated Constant16'
 * '<S231>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/Pass/Enumerated Constant16'
 * '<S232>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/UpdateMFOP/Max Fails on Pass FOM'
 * '<S233>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XoY_PassFail/UpdateMFOP/ResetLogic'
 * '<S234>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/BaseXofY'
 * '<S235>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/EdgeFalling1'
 * '<S236>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/Enumerated Constant16'
 * '<S237>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/Fail'
 * '<S238>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/Init'
 * '<S239>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/Pass'
 * '<S240>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/UpdateMFOP'
 * '<S241>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S242>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S243>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/Fail/Enumerated Constant16'
 * '<S244>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/Init/Enumerated Constant16'
 * '<S245>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/Pass/Enumerated Constant16'
 * '<S246>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S247>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiag/BPDR_SetDiagCode/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S248>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiagStub/Enumerated_Constant_1'
 * '<S249>' : 'BPDR_ac/BPDR_MedTED/Diagnostic/BeltSlipDiag/BeltSlipDiagStub/Enumerated_Constant_16'
 * '<S250>' : 'BPDR_ac/BPDR_MedTED/Output/SetBlock1'
 * '<S251>' : 'BPDR_ac/BPDR_MedTED/Output/SetBlock16'
 * '<S252>' : 'BPDR_ac/BPDR_MedTED/Output/SetBlock2'
 * '<S253>' : 'BPDR_ac/BPDR_MedTED/Output/SetBlock21'
 * '<S254>' : 'BPDR_ac/BPDR_MedTED/Output/SetBlock22'
 * '<S255>' : 'BPDR_ac/BPDR_MedTED/Output/SetBlock3'
 * '<S256>' : 'BPDR_ac/BPDR_PwrOn/DSM_Init'
 * '<S257>' : 'BPDR_ac/BPDR_PwrOn/Sub_Out_Init'
 * '<S258>' : 'BPDR_ac/BPDR_PwrOn/Sub_Out_Init/Const'
 * '<S259>' : 'BPDR_ac/BPDR_PwrOn/Sub_Out_Init/Const9'
 * '<S260>' : 'BPDR_ac/PokeBPDR_b_RstSlipAdaption/PokeBPDR_b_RstSlipAdaptionChrt'
 */
#endif                                 /* RTW_HEADER_BPDR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
