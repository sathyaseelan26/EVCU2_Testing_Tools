/*
 * File: CCTR_ac.h
 *
 * Code generated for Simulink model 'CCTR_ac'.
 *
 * Model version                  : 9.54
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:14:31 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CCTR_ac_h_
#define RTW_HEADER_CCTR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef CCTR_ac_COMMON_INCLUDES_
#define CCTR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CCTR.h"
#endif                                 /* CCTR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_CCTR_ac_T
{

#if Rte_SysCon_Variant_CCTR_3

    float32 LeCCTR_M_ACCTrq_BSM_out;   /* '<S13>/PokeCCTR_M_ACCTrq_BSMChrt' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    float32 OutportBufferForVeCCTR_v_CcVehSpd;/* '<S361>/Constant Value' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    float32 OutportBufferForVeCCTR_v_CcCntrlSpd;/* '<S361>/Constant Value1' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    float32 OutportBufferForVeCCTR_P_CcPIDTerm;/* '<S361>/Constant Value2' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    float32 OutportBufferForVeCCTR_P_CcDesiredPwr;/* '<S361>/Constant Value3' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    float32 OutportBufferForVeCCTR_v_CcSetSpd;/* '<S361>/Constant Value4' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    float32 OutportBufferForVeCCTR_v_CcCntrlSpdClust;/* '<S361>/Constant Value5' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    float32 OutportBufferForVeCCTR_v_CcCntrlSpdClu_m;/* '<S361>/Constant Value6' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    float32 OutportBufferForVeCCTR_e_ECMWARN;/* '<S361>/Constant Value8' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

    float32 OutportBufferForACC_Trq_BSM;/* '<S359>/Constant Value6' */

#if Rte_SysCon_Variant_CCTR_3

    float32 CC_PID_TERM;               /* '<S43>/CC_PID_TERM' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 OutportBufferForVeCCTR_t_CCTR_dT;

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    uint8 OutportBufferForVeCCTR_e_Lv1CrusCanState;/* '<S361>/Constant Value9' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean LeCCTR_b_ACCTrqEnabled_BSM_out;
                                  /* '<S15>/PokeCCTR_b_ACCTrqEnabled_BSMChrt' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    boolean OutportBufferForVeCCTR_b_CcEngaged;/* '<S361>/FALSE Constant' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    boolean OutportBufferForVeCCTR_b_CcLampSts;/* '<S361>/FALSE Constant1' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    boolean OutportBufferForVeCCTR_b_CcEnabled;/* '<S361>/FALSE Constant2' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    boolean OutportBufferForVeCCTR_b_Lv1CrusSwStuckF;/* '<S361>/FALSE Constant3' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    boolean OutportBufferForVeCCTR_b_Lv1CrusOffReq;/* '<S361>/FALSE Constant4' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    boolean OutportBufferForVeCCTR_b_CcAccelSts;/* '<S361>/FALSE Constant9' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    boolean OutportBufferForVeCCTR_b_CcDecelSts;/* '<S361>/FALSE Constant10' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    boolean OutportBufferForVeCCTR_b_CcCancelSw;/* '<S361>/FALSE Constant11' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    boolean OutportBufferForVeCCTR_b_CcResumeSw;/* '<S361>/FALSE Constant12' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    boolean OutportBufferForVeCCTR_b_CcInhEngage;/* '<S361>/FALSE Constant21' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    boolean OutportBufferForVeCCTR_b_ACC_TrqEnabled_;/* '<S361>/FALSE Constant5' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_4

    boolean OutportBufferForVeCCTR_b_ACC_TrqEnable_f;/* '<S361>/FALSE Constant19' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean OutportBufferForCC_Accel_Sts;/* '<S359>/FALSE Constant4' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForCC_AccelStsFA;/* '<S359>/FALSE Constant7' */

#if Rte_SysCon_Variant_CCTR_3

    boolean OutportBufferForCC_Cancel_Swtch;/* '<S359>/FALSE Constant1' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForCC_CancelSwtchFA;/* '<S359>/FALSE Constant8' */
    boolean OutportBufferForCC_OnOff_Sts;/* '<S359>/FALSE Constant2' */
    boolean OutportBufferForCC_OnOffStsFA;/* '<S359>/FALSE Constant9' */

#if Rte_SysCon_Variant_CCTR_3

    boolean OutportBufferForCC_CoastDecelSts;/* '<S359>/FALSE Constant3' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForCC_CoastDecelStsFA;/* '<S359>/FALSE Constant10' */

#if Rte_SysCon_Variant_CCTR_3

    boolean OutportBufferForCC_ResumeSwtch;/* '<S359>/FALSE Constant5' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForCC_ResumeSwtchFA;/* '<S359>/FALSE Constant16' */

#if Rte_SysCon_Variant_CCTR_3

    boolean OutportBufferForCC_SetSwtch;/* '<S359>/FALSE Constant6' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForCC_SetSwtchFA;/* '<S359>/FALSE Constant11' */
    boolean OutportBufferForCC_FailSts;/* '<S359>/FALSE Constant12' */
    boolean OutportBufferForCC_FailStsFA;/* '<S359>/FALSE Constant13' */
    boolean OutportBufferForACC_Trq_BSM_FA;/* '<S359>/FALSE Constant14' */
    boolean OutportBufferForACC_TrqEnabled_BSM;/* '<S359>/FALSE Constant' */
    boolean OutportBufferForACC_TrqEnabled_BSMFA;/* '<S359>/FALSE Constant19' */

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay5;                /* '<S23>/Unit Delay5' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean OutportBufferForESCFailSts_OFF;

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean OutportBufferForVeCCTI_b_isM182;

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean OutportBufferForCC_5Unit_AccelDecel_Enab;

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean PrevOnOffSts;              /* '<S24>/CcModeDeterm' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

    TeDFIB_e_FaultDebounceStatus OutportBufferForVeCCTR_e_FaultSts_SpdCnt;/* '<S362>/Const' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeCCTR_e_FaultSts_SpdC_b;/* '<S362>/Const1' */

#if Rte_SysCon_Variant_CCTR_3

    TeDFIB_e_FaultDebounceStatus Merge_i;/* '<S282>/Merge' */

#define B_CCTR_AC_T_VARIANT_EXISTS
#endif

}
B_CCTR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CCTR_ac_T
{

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay_DSTATE;          /* '<S26>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay3_DSTATE;         /* '<S26>/Unit Delay3' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay_DSTATE_a;        /* '<S232>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay_DSTATE_n;        /* '<S243>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay1_DSTATE_j;       /* '<S228>/Unit Delay1' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay_DSTATE_k;        /* '<S233>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay1_DSTATE_h;       /* '<S171>/Unit Delay1' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay3_DSTATE_h;       /* '<S168>/Unit Delay3' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay1_DSTATE_m;       /* '<S168>/Unit Delay1' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay1_DSTATE_k;       /* '<S79>/Unit Delay1' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay3_DSTATE_k;       /* '<S79>/Unit Delay3' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay2_DSTATE_j;       /* '<S84>/Unit Delay2' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay2_DSTATE_h;       /* '<S38>/Unit Delay2' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 FixPtUnitDelay_DSTATE;     /* '<S36>/FixPt Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay_DSTATE_at;       /* '<S43>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay2_DSTATE_p;       /* '<S252>/Unit Delay2' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 UnitDelay_DSTATE_dm;       /* '<S309>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 CC_ECM_WARN_Temp;          /* '<S84>/Cruise_Control_HMI' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    float32 CC_ECM_WARN_TMR;           /* '<S84>/Cruise_Control_HMI' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    uint16 UnitDelay_DSTATE_n2;        /* '<S173>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

    uint16 NeCCTR_Cnt_SpdCntrlSw1_MFOP;
                            /* '<Root>/DSM_NeCCTR_Cnt_OEXV_TempElctrFlt_MFOP' */

#if Rte_SysCon_Variant_CCTR_3

    uint16 Count;                      /* '<S24>/CcModeDeterm' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    uint8 UnitDelay_DSTATE_g;          /* '<S251>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay5_DSTATE;         /* '<S26>/Unit Delay5' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay5_DSTATE_g;       /* '<S23>/Unit Delay5' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_b;        /* '<S241>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_mn;       /* '<S240>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_mc;       /* '<S239>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_mct;      /* '<S229>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_lm;       /* '<S235>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_nu;       /* '<S218>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_pu;       /* '<S217>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_kk;       /* '<S216>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_f;        /* '<S215>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_ls;       /* '<S214>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_bb;       /* '<S213>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_h;        /* '<S212>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_c;        /* '<S211>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_jn;       /* '<S210>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_ey;       /* '<S187>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_gz;       /* '<S186>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_hb;       /* '<S185>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_dx;       /* '<S184>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_o;        /* '<S183>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_ot;       /* '<S182>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_la;       /* '<S181>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_cs;       /* '<S168>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_ft;       /* '<S180>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_pg;       /* '<S174>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay4_DSTATE_n;       /* '<S79>/Unit Delay4' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean FixPtUnitDelay1_DSTATE_m;  /* '<S79>/FixPt Unit Delay1' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay5_DSTATE_c;       /* '<S79>/Unit Delay5' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay3_DSTATE_c;       /* '<S159>/Unit Delay3' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_kl;       /* '<S134>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_j0;       /* '<S125>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_dh;       /* '<S124>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_dr;       /* '<S123>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_bd;       /* '<S117>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_eq;       /* '<S116>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_aa;       /* '<S115>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_gi;       /* '<S114>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_m2;       /* '<S113>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_hh;       /* '<S112>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_ae;       /* '<S92>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_nx;       /* '<S91>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_bz;       /* '<S90>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_oe;       /* '<S41>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_ie;       /* '<S283>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay1_DSTATE_d;       /* '<S283>/Unit Delay1' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay1_DSTATE_ky;      /* '<S24>/Unit Delay1' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay1_DSTATE_kl;      /* '<S252>/Unit Delay1' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_gj;       /* '<S334>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_dmc;      /* '<S333>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_lh;       /* '<S330>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_fi;       /* '<S312>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_na;       /* '<S311>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    boolean UnitDelay_DSTATE_mv;       /* '<S284>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    TeASLR_e_HDC_Status UnitDelay_DSTATE_om;/* '<S254>/Unit Delay' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    uint8 Temp;                        /* '<S24>/CcModeDeterm' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    uint8 Temp1;                       /* '<S24>/CcModeDeterm' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    uint8 is_active_c2_CCTR_ac;        /* '<S250>/InvldCcBttnTrans' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    uint8 is_c2_CCTR_ac;               /* '<S250>/InvldCcBttnTrans' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCTR_3

    uint8 NoPress;                     /* '<S250>/InvldCcBttnTrans' */

#define DW_CCTR_AC_T_VARIANT_EXISTS
#endif

}
DW_CCTR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeDFIB_e_FaultDebounceStatus Constant;/* '<S364>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_b;/* '<S365>/Constant' */
}
ConstB_CCTR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CCTR
#include "MemMap.h"

extern VAR(B_CCTR_ac_T, CCTR_VAR_INIT) CCTR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CCTR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CCTR
#include "MemMap.h"

extern VAR(DW_CCTR_ac_T, CCTR_VAR_INIT) CCTR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CCTR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_CCTR
#include "MemMap.h"

extern CONST(ConstB_CCTR_ac_T, CCTR_VAR_INIT) CCTR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_CCTR
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
 * '<Root>' : 'CCTR_ac'
 * '<S1>'   : 'CCTR_ac/CCTR_MedTEB'
 * '<S2>'   : 'CCTR_ac/CCTR_PwrOff'
 * '<S3>'   : 'CCTR_ac/CCTR_PwrOn'
 * '<S4>'   : 'CCTR_ac/FsftCCTR_M_ACCTrq_BSM'
 * '<S5>'   : 'CCTR_ac/FsftCCTR_b_ACCTrqEnabled_BSM'
 * '<S6>'   : 'CCTR_ac/FsftCCTR_b_CcAccelSts'
 * '<S7>'   : 'CCTR_ac/FsftCCTR_b_CcCancelSw'
 * '<S8>'   : 'CCTR_ac/FsftCCTR_b_CcDecelSts'
 * '<S9>'   : 'CCTR_ac/FsftCCTR_b_CcFailSts'
 * '<S10>'  : 'CCTR_ac/FsftCCTR_b_CcOnOffSts'
 * '<S11>'  : 'CCTR_ac/FsftCCTR_b_CcResumeSw'
 * '<S12>'  : 'CCTR_ac/FsftCCTR_b_CcSetSw'
 * '<S13>'  : 'CCTR_ac/PokeCCTR_M_ACCTrq_BSM'
 * '<S14>'  : 'CCTR_ac/PokeCCTR_b_ACCEngaged'
 * '<S15>'  : 'CCTR_ac/PokeCCTR_b_ACCTrqEnabled_BSM'
 * '<S16>'  : 'CCTR_ac/PokeCCTR_b_CcAccelSts'
 * '<S17>'  : 'CCTR_ac/PokeCCTR_b_CcCancelSw'
 * '<S18>'  : 'CCTR_ac/PokeCCTR_b_CcDecelSts'
 * '<S19>'  : 'CCTR_ac/PokeCCTR_b_CcFailSts'
 * '<S20>'  : 'CCTR_ac/PokeCCTR_b_CcOnOffSts'
 * '<S21>'  : 'CCTR_ac/PokeCCTR_b_CcResumeSw'
 * '<S22>'  : 'CCTR_ac/PokeCCTR_b_CcSetSw'
 * '<S23>'  : 'CCTR_ac/CCTR_MedTEB/CCTC'
 * '<S24>'  : 'CCTR_ac/CCTR_MedTEB/CruiseCANState'
 * '<S25>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq'
 * '<S26>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic'
 * '<S27>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Set Block'
 * '<S28>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Set Block1'
 * '<S29>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Set Block2'
 * '<S30>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Set Block3'
 * '<S31>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Set Block4'
 * '<S32>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Set Block5'
 * '<S33>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Set Block6'
 * '<S34>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Set Block7'
 * '<S35>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Set Block8'
 * '<S36>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID'
 * '<S37>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/Feedforward'
 * '<S38>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/Vehicle_Accel'
 * '<S39>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/AccelRes_Blend'
 * '<S40>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_D_Gain'
 * '<S41>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_I_Gain'
 * '<S42>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_P_Gain'
 * '<S43>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CcPID_TermAdditn'
 * '<S44>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/Tap_Blend'
 * '<S45>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/AccelRes_Blend/KeCCTR_K_CcAccGainBlndDec'
 * '<S46>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/AccelRes_Blend/KeCCTR_K_CcAccGainBlndInc'
 * '<S47>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/AccelRes_Blend/KeCCTR_K_CcResumGainBlndDec'
 * '<S48>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/AccelRes_Blend/KeCCTR_K_CcResumGainBlndInc'
 * '<S49>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/AccelRes_Blend/Limiter1'
 * '<S50>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_D_Gain/KeCCTR_K_CcDGainCal'
 * '<S51>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_D_Gain/KeCCTR_K_CcResumAccDGain'
 * '<S52>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_D_Gain/KeCCTR_K_CcTapDGain'
 * '<S53>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_D_Gain/KeCCTR_P_CcDTermLowerLimit'
 * '<S54>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_D_Gain/KeCCTR_P_CcDTermUpperLimit'
 * '<S55>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_I_Gain/KeCCTR_P_CcITermLowerLimit'
 * '<S56>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_I_Gain/KeCCTR_P_CcITermUpperLimit'
 * '<S57>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_I_Gain/KeCCTR_P_CcMaxPwrOffset'
 * '<S58>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_I_Gain/KeCCTR_P_CcMinPwrOffset'
 * '<S59>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_I_Gain/KeCCTR_v_CcIFrzVehSpdThres'
 * '<S60>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_I_Gain/KtCCTR_K_CcIGainTbl'
 * '<S61>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_I_Gain/KtCCTR_K_CcResumAccIGainTbl'
 * '<S62>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_I_Gain/KtCCTR_K_CcTapIGainTbl'
 * '<S63>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_I_Gain/Signal Latch On With Reset'
 * '<S64>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_P_Gain/KeCCTR_P_CcPTermLowerLimit'
 * '<S65>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_P_Gain/KeCCTR_P_CcPTermUpperLimit'
 * '<S66>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_P_Gain/KtCCTR_K_CcPGainTbl'
 * '<S67>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_P_Gain/KtCCTR_K_CcResumAccPGainTbl'
 * '<S68>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/CC_P_Gain/KtCCTR_K_CcTapPGainTbl'
 * '<S69>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/Tap_Blend/KeCCTR_K_CcTapGainBlndDec'
 * '<S70>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/Tap_Blend/KeCCTR_K_CcTapGainBlndInc'
 * '<S71>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/CcClosdLoop_PID/Tap_Blend/Limiter1'
 * '<S72>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/Feedforward/I_Term_Feedforwrd'
 * '<S73>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/Feedforward/KtCCTR_P_CcRoadLoadFfPwrTbl'
 * '<S74>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/Feedforward/I_Term_Feedforwrd/KeCCTR_K_CcSetAccelerationGain'
 * '<S75>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/Feedforward/I_Term_Feedforwrd/KeCCTR_K_PtcWhlTrqToPwrFctr'
 * '<S76>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/Feedforward/I_Term_Feedforwrd/KeCCTR_a_CcSetAccelerationThres'
 * '<S77>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/Vehicle_Accel/Digital Lowpass Reset Enabled'
 * '<S78>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/Cc_DesiredTrq/Vehicle_Accel/KeCCTR_k_CcAccFltrConst'
 * '<S79>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic'
 * '<S80>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point'
 * '<S81>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr'
 * '<S82>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Calc_CcEnabled'
 * '<S83>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Calc_CcEngd'
 * '<S84>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcHMIConditions'
 * '<S85>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter'
 * '<S86>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Enable'
 * '<S87>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd'
 * '<S88>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Switch_Timers'
 * '<S89>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Calc_CcEnabled/Set Block'
 * '<S90>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Calc_CcEnabled/Signal Latch On With Reset'
 * '<S91>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Calc_CcEngd/EdgeRising'
 * '<S92>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Calc_CcEngd/Signal Latch On With Reset'
 * '<S93>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcHMIConditions/Cruise_Control_HMI'
 * '<S94>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcHMIConditions/Enumerated_Constant'
 * '<S95>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcHMIConditions/KeASLR_b_ASLInstantActivationEnable'
 * '<S96>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcHMIConditions/KeCCTR_t_EcmWarnTmrLmt'
 * '<S97>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Accel_ModeDeterm'
 * '<S98>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Cancel_ModeDeterm'
 * '<S99>'  : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Coast_ModeDeterm'
 * '<S100>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/FlagsGen'
 * '<S101>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/OnOff_ModeDeterm'
 * '<S102>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Resume_BlendDeterm'
 * '<S103>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Resume_ModeDeterm'
 * '<S104>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Set_ModeDeterm'
 * '<S105>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/TapDwn_ActvDeterm'
 * '<S106>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/TapDwn_ModeDeterm'
 * '<S107>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/TapUp_ModeDeterm'
 * '<S108>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Tap_ModeDeterm'
 * '<S109>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Accel_ModeDeterm/KeCCTR_t_CcAccelTime'
 * '<S110>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Accel_ModeDeterm/KeCCTR_t_tExit_Acc'
 * '<S111>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Coast_ModeDeterm/KeCCTR_t_CcCoastTime'
 * '<S112>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/FlagsGen/EdgeFalling'
 * '<S113>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/FlagsGen/EdgeFalling1'
 * '<S114>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/FlagsGen/EdgeFalling2'
 * '<S115>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/FlagsGen/EdgeRising'
 * '<S116>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/FlagsGen/EdgeRising1'
 * '<S117>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/FlagsGen/EdgeRising2'
 * '<S118>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/OnOff_ModeDeterm/KeCCTR_b_ONOFFModDetBCMOvrrd'
 * '<S119>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Resume_BlendDeterm/KeCCTR_v_CcResumEndSpdThres'
 * '<S120>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Resume_BlendDeterm/Signal Latch On With Reset'
 * '<S121>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Resume_ModeDeterm/Signal Latch On With Reset'
 * '<S122>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Resume_ModeDeterm/Signal Latch On With Reset1'
 * '<S123>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Set_ModeDeterm/EdgeFalling'
 * '<S124>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Set_ModeDeterm/EdgeFalling1'
 * '<S125>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Set_ModeDeterm/EdgeFalling2'
 * '<S126>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Set_ModeDeterm/KeCCTR_b_OverrideStoreFlag'
 * '<S127>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Set_ModeDeterm/KeCCTR_b_ResumeSet'
 * '<S128>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Set_ModeDeterm/KeCCTR_v_Cc4BSwLatchedDrOvClrErr'
 * '<S129>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Set_ModeDeterm/KeCCTR_v_Cc4BSwTapDnUSpdErrThresh'
 * '<S130>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Set_ModeDeterm/KeCCTR_v_OverrideThrs'
 * '<S131>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Set_ModeDeterm/KeCCTR_v_VDiff1'
 * '<S132>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Set_ModeDeterm/KeCCTR_v_VDiff2'
 * '<S133>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Set_ModeDeterm/Signal Latch On With Reset'
 * '<S134>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Set_ModeDeterm/Signal Latch On With Reset1'
 * '<S135>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/TapDwn_ActvDeterm/Signal Latch On With Reset'
 * '<S136>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Tap_ModeDeterm/KeCCTR_v_CcTapEndSpdThres'
 * '<S137>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/CcModeValidDeter/Tap_ModeDeterm/Signal Latch On With Reset'
 * '<S138>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Enable/Enumerated_Constant'
 * '<S139>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Enable/Enumerated_Constant1'
 * '<S140>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Enable/Enumerated_Constant2'
 * '<S141>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/BEV332_IEng'
 * '<S142>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/M182_IEng'
 * '<S143>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/BEV332_IEng/Enumerated Value'
 * '<S144>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/BEV332_IEng/Enumerated Value1'
 * '<S145>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/BEV332_IEng/Enumerated Value2'
 * '<S146>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/BEV332_IEng/Set Block1'
 * '<S147>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/BEV332_IEng/Set Block2'
 * '<S148>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/BEV332_IEng/Set Block3'
 * '<S149>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/M182_IEng/Enumerated Value'
 * '<S150>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/M182_IEng/Enumerated Value1'
 * '<S151>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/M182_IEng/Enumerated Value2'
 * '<S152>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/M182_IEng/Enumerated_Constant'
 * '<S153>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/M182_IEng/Enumerated_Constant1'
 * '<S154>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/M182_IEng/Enumerated_Constant2'
 * '<S155>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/M182_IEng/Set Block'
 * '<S156>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/M182_IEng/Set Block1'
 * '<S157>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Inh_Engd/M182_IEng/Set Block2'
 * '<S158>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Switch_Timers/AccelDecelUntTmr'
 * '<S159>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Switch_Timers/AccelSwtchTmr'
 * '<S160>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Switch_Timers/BrakeSwtchTmr'
 * '<S161>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Switch_Timers/CancelSwtchTmr'
 * '<S162>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Switch_Timers/CoastTmr'
 * '<S163>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Switch_Timers/OnOffSwtchTmr'
 * '<S164>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Switch_Timers/PN_SwtchTmr'
 * '<S165>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Switch_Timers/AccelDecelUntTmr/KeCCTR_t_CcUnitIncDecTmrLmt'
 * '<S166>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Switch_Timers/PN_SwtchTmr/Enumerated Value'
 * '<S167>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_EnabLogic/Switch_Timers/PN_SwtchTmr/Enumerated Value1'
 * '<S168>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/CcSetPointCAN_Msg'
 * '<S169>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/CntrlSpd_Reset'
 * '<S170>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Control_Speed'
 * '<S171>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng'
 * '<S172>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed'
 * '<S173>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/CcSetPointCAN_Msg/Counter Reset  Enabled '
 * '<S174>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/CcSetPointCAN_Msg/EdgeRising'
 * '<S175>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/CcSetPointCAN_Msg/IfThenElseifElse'
 * '<S176>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/CcSetPointCAN_Msg/KeCCTR_Cnt_SetSpdDisp'
 * '<S177>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/CcSetPointCAN_Msg/KeCCTR_b_EnblSetSpdDisp'
 * '<S178>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/CcSetPointCAN_Msg/KeCCTR_b_Enblvehspddisp'
 * '<S179>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/CcSetPointCAN_Msg/KeCCTR_v_SetSpdDispMult'
 * '<S180>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/CcSetPointCAN_Msg/Signal Latch On With Reset'
 * '<S181>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Control_Speed/EdgeFalling'
 * '<S182>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Control_Speed/EdgeRising'
 * '<S183>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Control_Speed/EdgeRising1'
 * '<S184>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Control_Speed/EdgeRising2'
 * '<S185>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/EdgeRising'
 * '<S186>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/EdgeRising1'
 * '<S187>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/EdgeRising2'
 * '<S188>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel'
 * '<S189>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/KeCCTR_v_CcAccelSetSpdInc'
 * '<S190>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/KeCCTR_v_CcCoastCntrlSpdDec'
 * '<S191>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/KeCCTR_v_CcUnitStepKPH'
 * '<S192>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/KeCCTR_v_CcUnitStepMPH'
 * '<S193>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/BEV332_IEng'
 * '<S194>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/M182_IEng'
 * '<S195>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/BEV332_IEng/KeCCTR_v_CcResumCntrlSpdDec'
 * '<S196>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/BEV332_IEng/KeCCTR_v_CcResumCntrlSpdInc'
 * '<S197>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/BEV332_IEng/KeCCTR_v_CcTapCntrlSpdDec'
 * '<S198>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/BEV332_IEng/KeCCTR_v_CcTapCntrlSpdInc'
 * '<S199>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/M182_IEng/Enumerated_Constant'
 * '<S200>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/M182_IEng/IfThenElse'
 * '<S201>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/M182_IEng/IfThenElse1'
 * '<S202>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/M182_IEng/KtCCTR_v_CcResumeCtrlSpdDec'
 * '<S203>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/M182_IEng/KtCCTR_v_CcResumeCtrlSpdDecSport'
 * '<S204>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/M182_IEng/KtCCTR_v_CcResumeCtrlSpdInc'
 * '<S205>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/M182_IEng/KtCCTR_v_CcResumeCtrlSpdIncSport'
 * '<S206>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/M182_IEng/KtCCTR_v_CcTapCtrlSpdDec'
 * '<S207>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/M182_IEng/KtCCTR_v_CcTapCtrlSpdDecSport'
 * '<S208>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/M182_IEng/KtCCTR_v_CcTapCtrlSpdInc'
 * '<S209>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/SetPoint_Rampng/ID_Sel/M182_IEng/KtCCTR_v_CcTapCtrlSpdIncSport'
 * '<S210>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/EdgeFalling'
 * '<S211>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/EdgeFalling1'
 * '<S212>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/EdgeFalling2'
 * '<S213>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/EdgeFalling3'
 * '<S214>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/EdgeRising1'
 * '<S215>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/EdgeRising2'
 * '<S216>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/EdgeRising3'
 * '<S217>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/EdgeRising4'
 * '<S218>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/EdgeRising5'
 * '<S219>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/KeCCTR_v_CcTapDwnDec_KPH'
 * '<S220>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/KeCCTR_v_CcTapDwnDec_MPH'
 * '<S221>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/KeCCTR_v_CcTapUpInc_KPH'
 * '<S222>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/KeCCTR_v_CcTapUpInc_MPH'
 * '<S223>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/KeCCTR_v_SpdHysAccelStrat'
 * '<S224>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/KeCCTR_v_SpdHysCoastStrat'
 * '<S225>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/Limiter'
 * '<S226>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/Limiter1'
 * '<S227>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_Set_Point/Set_Speed/Signal Latch On With Reset'
 * '<S228>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/CC_Error_Calc'
 * '<S229>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/EdgeFalling'
 * '<S230>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/I_Term_Reset'
 * '<S231>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/KeCCTR_b_IResetSetMdDelay'
 * '<S232>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/VehSpd_Calc'
 * '<S233>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/CC_Error_Calc/Error_Filtering'
 * '<S234>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/CC_Error_Calc/Error_Filtering/Digital Lowpass Reset Enabled'
 * '<S235>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/CC_Error_Calc/Error_Filtering/EdgeFalling'
 * '<S236>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/CC_Error_Calc/Error_Filtering/KeCCTR_k_CcVehSpdErrHiSpdFltCnst'
 * '<S237>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/CC_Error_Calc/Error_Filtering/KeCCTR_k_CcVehSpdErrLoSpdFltCnst'
 * '<S238>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/CC_Error_Calc/Error_Filtering/KeCCTR_v_CcVehSpdErrFltCnstThres'
 * '<S239>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/I_Term_Reset/EdgeFalling'
 * '<S240>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/I_Term_Reset/EdgeFalling1'
 * '<S241>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/I_Term_Reset/EdgeRising1'
 * '<S242>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/I_Term_Reset/KeCCTR_b_IResetInhResCoast'
 * '<S243>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/VehSpd_Calc/Digital Lowpass Reset Enabled'
 * '<S244>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/VehSpd_Calc/KeCCTR_k_CcHiSpdFltrConst'
 * '<S245>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/VehSpd_Calc/KeCCTR_k_CcLowSpdFltrConst'
 * '<S246>' : 'CCTR_ac/CCTR_MedTEB/CCTC/CruiseCtrlLogic/CC_VehWhlPwr/VehSpd_Calc/KeCCTR_v_CcVehSpdResolutionThres'
 * '<S247>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/ACCTrqEnbldSel'
 * '<S248>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Brk_Pdl_Sts_Logic'
 * '<S249>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts'
 * '<S250>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnInvldTrans'
 * '<S251>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStabltyChek'
 * '<S252>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch'
 * '<S253>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcModeDeterm'
 * '<S254>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/FAeCancel'
 * '<S255>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/HeCCTR_b_isM182'
 * '<S256>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/HeCCTR_b_isX250'
 * '<S257>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Inst_Actvation'
 * '<S258>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/KeCCTR_Cnt_Lv1CrusOnOffSwMinCnts'
 * '<S259>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/KeCCTR_b_Cc5UnitAccelDecelEnabl'
 * '<S260>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/KeCCTR_b_ESCFailSts_OFF'
 * '<S261>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/KeCCTR_t_12p5dt'
 * '<S262>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Set Block'
 * '<S263>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Set Block1'
 * '<S264>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Set Block2'
 * '<S265>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Set Block3'
 * '<S266>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Set Block4'
 * '<S267>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Set Block5'
 * '<S268>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Set Block6'
 * '<S269>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1'
 * '<S270>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/VehSpdBiasCalc'
 * '<S271>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/ACCTrqEnbldSel/Enumerated_Constant1'
 * '<S272>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/ACCTrqEnbldSel/Enumerated_Constant2'
 * '<S273>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/ACCTrqEnbldSel/Enumerated_Constant3'
 * '<S274>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/ACCTrqEnbldSel/KeCCTR_b_BSMTrqEnbld_Selector'
 * '<S275>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Brk_Pdl_Sts_Logic/Enumerated Value1'
 * '<S276>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Brk_Pdl_Sts_Logic/Enumerated Value2'
 * '<S277>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Brk_Pdl_Sts_Logic/IfThenElseifElse2'
 * '<S278>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/Enable_ResetCounts'
 * '<S279>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/KeCCTR_Cnt_SpdCntrlSw1_FailCnt'
 * '<S280>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/KeCCTR_Cnt_SpdCntrlSw1_SmpCnt'
 * '<S281>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/KeCCTR_b_SpdCntrlSw1_LtchEnbl'
 * '<S282>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2'
 * '<S283>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/BaseXofY'
 * '<S284>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/EdgeFalling1'
 * '<S285>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/Enumerated Constant16'
 * '<S286>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/Fail'
 * '<S287>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/Init'
 * '<S288>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/Pass'
 * '<S289>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/UpdateMFOP'
 * '<S290>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S291>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S292>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/Fail/Enumerated Constant16'
 * '<S293>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/Init/Enumerated Constant16'
 * '<S294>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/Pass/Enumerated Constant16'
 * '<S295>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S296>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CCFailSts/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S297>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnInvldTrans/CcBttnPrityMap'
 * '<S298>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnInvldTrans/InvldCcBttnTrans'
 * '<S299>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStabltyChek/KeCCTR_Cnt_Lv1CrusSwMinCnts'
 * '<S300>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStabltyChek/KeCCTR_Cnt_Lv1CrusSwStateCntrMax'
 * '<S301>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStabltyChek/Limiter1'
 * '<S302>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/KeCCTR_Cnt_Lv1CrusSwAccelLimCnts'
 * '<S303>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/KeCCTR_Cnt_Lv1CrusSwNPMissCntrLim'
 * '<S304>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/KeCCTR_Cnt_Lv1CrusSwStuckCnts'
 * '<S305>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/KeCCTR_b_CrusSwStuckRevSts'
 * '<S306>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/KeCCTR_scl_Lv1CrusStateStuckLim'
 * '<S307>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/KeCCTR_scl_Lv1CrusSwNPStateEnabl'
 * '<S308>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/KeCCTR_t_CcOnOffSwOnTime'
 * '<S309>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/Stop Watch Reset Trigger Enabled'
 * '<S310>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/Subsystem'
 * '<S311>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/Stop Watch Reset Trigger Enabled/EdgeRising'
 * '<S312>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/Subsystem/EdgeFalling1'
 * '<S313>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/Subsystem/Fail'
 * '<S314>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/Subsystem/Init'
 * '<S315>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/Subsystem/Pass'
 * '<S316>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/Subsystem/Fail/Enumerated Constant16'
 * '<S317>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/Subsystem/Init/Enumerated Constant16'
 * '<S318>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/CcBttnStuckSwitch/Subsystem/Pass/Enumerated Constant16'
 * '<S319>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/FAeCancel/Enumerated_Constant'
 * '<S320>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/FAeCancel/Enumerated_Constant1'
 * '<S321>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/FAeCancel/Enumerated_Constant2'
 * '<S322>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/FAeCancel/Enumerated_Constant3'
 * '<S323>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/FAeCancel/Enumerated_Constant4'
 * '<S324>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/FAeCancel/Enumerated_Constant5'
 * '<S325>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/FAeCancel/Enumerated_Constant6'
 * '<S326>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/FAeCancel/Enumerated_Constant7'
 * '<S327>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/FAeCancel/Enumerated_Constant8'
 * '<S328>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/FAeCancel/KeCCTR_b_CCLogicCheck'
 * '<S329>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/FAeCancel/getFaultActiveAndTestCompleted'
 * '<S330>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Inst_Actvation/EdgeRising1'
 * '<S331>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Inst_Actvation/InstActFalse'
 * '<S332>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Inst_Actvation/KeCCTR_b_CCInstantActivationEnable'
 * '<S333>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Inst_Actvation/InstActFalse/EdgeFalling'
 * '<S334>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Inst_Actvation/InstActFalse/Signal Latch On With Reset'
 * '<S335>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_CC_Accel_Active'
 * '<S336>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_CC_Accel_Ovrrd_Enab'
 * '<S337>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_CC_Cancel_Active'
 * '<S338>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_CC_Cancel_Ovrrd_Enab'
 * '<S339>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_CC_CoastDecel_Active'
 * '<S340>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_CC_CoastDecel_Ovrrd_Enab'
 * '<S341>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_CC_OnOff_Active'
 * '<S342>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_CC_OnOff_Ovrrd_Enab'
 * '<S343>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_CC_Resume_Active'
 * '<S344>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_CC_Resume_Ovrrd_Enab'
 * '<S345>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_CC_SetSwtch_Active'
 * '<S346>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_CC_SetSwtch_Ovrrd_Enab'
 * '<S347>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_LV2CrusOffOvvrd_Enab'
 * '<S348>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/Subsystem1/KeCCTR_b_LV2CrusOffOvvrd_Inactive'
 * '<S349>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/VehSpdBiasCalc/KeCCTR_v_CcKphMax'
 * '<S350>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/VehSpdBiasCalc/KeCCTR_v_CcKphMin'
 * '<S351>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/VehSpdBiasCalc/KeCCTR_v_CcKphMinRes'
 * '<S352>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/VehSpdBiasCalc/KeCCTR_v_CcMphMax'
 * '<S353>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/VehSpdBiasCalc/KeCCTR_v_CcMphMin'
 * '<S354>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/VehSpdBiasCalc/KeCCTR_v_CcMphMinRes'
 * '<S355>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/VehSpdBiasCalc/KeCCTR_v_CcSetKphMax'
 * '<S356>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/VehSpdBiasCalc/KeCCTR_v_CcSetKphMin'
 * '<S357>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/VehSpdBiasCalc/KeCCTR_v_CcSetMphMax'
 * '<S358>' : 'CCTR_ac/CCTR_MedTEB/CruiseCANState/VehSpdBiasCalc/KeCCTR_v_CcSetMphMin'
 * '<S359>' : 'CCTR_ac/CCTR_PwrOn/CCTI_Init'
 * '<S360>' : 'CCTR_ac/CCTR_PwrOn/DSM_Init'
 * '<S361>' : 'CCTR_ac/CCTR_PwrOn/NF_Stubs'
 * '<S362>' : 'CCTR_ac/CCTR_PwrOn/Sub_Out_Init'
 * '<S363>' : 'CCTR_ac/CCTR_PwrOn/NF_Stubs/DocBlock'
 * '<S364>' : 'CCTR_ac/CCTR_PwrOn/Sub_Out_Init/Const'
 * '<S365>' : 'CCTR_ac/CCTR_PwrOn/Sub_Out_Init/Const1'
 * '<S366>' : 'CCTR_ac/FsftCCTR_M_ACCTrq_BSM/FsftCCTR_M_ACCTrq_BSMChrt'
 * '<S367>' : 'CCTR_ac/FsftCCTR_b_ACCTrqEnabled_BSM/FsftCCTR_b_ACCTrqEnabled_BSMChrt'
 * '<S368>' : 'CCTR_ac/FsftCCTR_b_CcAccelSts/FsftCCTR_b_CcAccelStsChrt'
 * '<S369>' : 'CCTR_ac/FsftCCTR_b_CcCancelSw/FsftCCTR_b_CcCancelSwChrt'
 * '<S370>' : 'CCTR_ac/FsftCCTR_b_CcDecelSts/FsftCCTR_b_CcDecelStsChrt'
 * '<S371>' : 'CCTR_ac/FsftCCTR_b_CcFailSts/FsftCCTR_b_CcFailStsChrt'
 * '<S372>' : 'CCTR_ac/FsftCCTR_b_CcOnOffSts/FsftCCTR_b_CcOnOffStsChrt'
 * '<S373>' : 'CCTR_ac/FsftCCTR_b_CcResumeSw/FsftCCTR_b_CcResumeSwChrt'
 * '<S374>' : 'CCTR_ac/FsftCCTR_b_CcSetSw/FsftCCTR_b_CcSetSwChrt'
 * '<S375>' : 'CCTR_ac/PokeCCTR_M_ACCTrq_BSM/PokeCCTR_M_ACCTrq_BSMChrt'
 * '<S376>' : 'CCTR_ac/PokeCCTR_b_ACCEngaged/PokeCCTR_b_ACCEngagedChrt'
 * '<S377>' : 'CCTR_ac/PokeCCTR_b_ACCTrqEnabled_BSM/PokeCCTR_b_ACCTrqEnabled_BSMChrt'
 * '<S378>' : 'CCTR_ac/PokeCCTR_b_CcAccelSts/PokeCCTR_b_CcAccelStsChrt'
 * '<S379>' : 'CCTR_ac/PokeCCTR_b_CcCancelSw/PokeCCTR_b_CcCancelSwChrt'
 * '<S380>' : 'CCTR_ac/PokeCCTR_b_CcDecelSts/PokeCCTR_b_CcDecelStsChrt'
 * '<S381>' : 'CCTR_ac/PokeCCTR_b_CcFailSts/PokeCCTR_b_CcFailStsChrt'
 * '<S382>' : 'CCTR_ac/PokeCCTR_b_CcOnOffSts/PokeCCTR_b_CcOnOffStsChrt'
 * '<S383>' : 'CCTR_ac/PokeCCTR_b_CcResumeSw/PokeCCTR_b_CcResumeSwChrt'
 * '<S384>' : 'CCTR_ac/PokeCCTR_b_CcSetSw/PokeCCTR_b_CcSetSwChrt'
 */
#endif                                 /* RTW_HEADER_CCTR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
