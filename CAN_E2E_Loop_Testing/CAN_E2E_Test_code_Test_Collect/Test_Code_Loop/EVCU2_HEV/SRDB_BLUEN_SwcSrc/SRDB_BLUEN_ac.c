/*
 * File: SRDB_BLUEN_ac.c
 *
 * Code generated for Simulink model 'SRDB_BLUEN_ac'.
 *
 * Model version                  : 1.122
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:52:34 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SRDB_BLUEN_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_SRDB_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, SRDB_BLUEN_VAR_INIT) KeSRDB_b_RedundancyEnbl = 1;/* Referenced by: '<S19>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_SRDB_BLUEN
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SRDB_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_APM_CtrlSts_Fbk_RedundancyCmd;/* '<S38>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_APM_FailureReason_RedundancyCmd;/* '<S42>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_APM_FailureType_RedundancyCmd;/* '<S46>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_APM_HV_V_Fbk_RedundancyCmd;/* '<S50>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_APM_LV_V_Fbk_RedundancyCmd;/* '<S54>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_BPCM_CntctrsMidTrmOpeningWarn_RedundancyCmd;/* '<S58>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_BPCM_CntctrsShtTrmOpeningWarn_RedundancyCmd;/* '<S62>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_BPCM_HV_Current_RedundancyCmd;/* '<S66>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_BPCM_HV_InternalVoltage_RedundancyCmd;/* '<S70>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_BPCM_HV_SOC_RedundancyCmd;/* '<S74>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_BPCM_HV_Temperature_Max_RedundancyCmd;/* '<S78>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_BPCM_HV_Temperature_Min_RedundancyCmd;/* '<S82>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_BPCM_HV_Trac_Bus_Sts_RedundancyCmd;/* '<S86>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_MCPA_Temp_RedundancyCmd;/* '<S90>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_PIM_A_6SO_Status_RedundancyCmd;/* '<S94>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_PIM_A_HV_CnctrOpn_Req_RedundancyCmd;/* '<S98>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_PIM_A_Invrtr_State_RedundancyCmd;/* '<S102>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_PIM_A_MaxTorq_RedundancyCmd;/* '<S106>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_PIM_A_MinTorq_RedundancyCmd;/* '<S110>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_PIM_A_RPM_RedundancyCmd;/* '<S114>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_PIM_A_RPM_V_RedundancyCmd;/* '<S118>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_PIM_A_Torque_Achieved_RedundancyCmd;/* '<S122>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_PIM_A_Torque_Achieved_V_RedundancyCmd;/* '<S126>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_PIM_B_HV_CnctrOpn_Req_RedundancyCmd;/* '<S130>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_PIM_B_Invrtr_State_RedundancyCmd;/* '<S134>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_PIM_B_MaxTorq_RedundancyCmd;/* '<S138>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_PIM_B_MinTorq_RedundancyCmd;/* '<S142>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_PIM_B_RPM_RedundancyCmd;/* '<S146>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT) VeSRDB_b_PIM_B_RPM_V_RedundancyCmd;/* '<S150>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_PIM_B_Torque_Achieved_RedundancyCmd;/* '<S154>/Chart' */
static VAR(boolean, SRDB_BLUEN_VAR_INIT)
    VeSRDB_b_PIM_B_Torque_Achieved_V_RedundancyCmd;/* '<S158>/Chart' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SRDB_BLUEN
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, SRDB_BLUEN_CODE) SRDB_BLUEN_FastTEF(void) /* Explicit Task: FastTEF */
{
    /* local block i/o variables */
    float32 rtb_TmpSignalConversionAtVeSR2B;
    float32 rtb_TmpSignalConversionAtVeSR_h;
    float32 rtb_TmpSignalConversionAtVeSR_m;
    float32 rtb_TmpSignalConversionAtVeS_mr;
    float32 rtb_TmpSignalConversionAtVeS_hg;
    float32 rtb_TmpSignalConversionAtVeSR_b;
    float32 rtb_TmpSignalConversionAtVeSR_k;
    float32 rtb_TmpSignalConversionAtVeS_mi;
    float32 rtb_TmpSignalConversionAtVeSR_d;
    float32 rtb_TmpSignalConversionAtVeSR_i;
    float32 rtb_TmpSignalConversionAtVeS_bc;
    float32 rtb_TmpSignalConversionAtVeS_bb;
    float32 rtb_TmpSignalConversionAtVeSR_a;
    float32 rtb_TmpSignalConversionAtVeS_km;
    float32 rtb_TmpSignalConversionAtVeSR_l;
    float32 rtb_TmpSignalConversionAtVeS_k0;
    float32 rtb_TmpSignalConversionAtVeSR_j;
    float32 rtb_TmpSignalConversionAtVeSR_n;
    float32 rtb_TmpSignalConversionAtVeSR_g;
    float32 rtb_TmpSignalConversionAtVeS_ln;
    float32 rtb_TmpSignalConversionAtVeSR_p;
    float32 rtb_TmpSignalConversionAtVeS_i3;
    float32 rtb_TmpSignalConversionAtVeS_iz;
    float32 rtb_TmpSignalConversionAtVeS_nd;
    float32 rtb_TmpSignalConversionAtVeS_ad;
    float32 rtb_TmpSignalConversionAtVeS_kc;
    float32 rtb_TmpSignalConversionAtVeSR_o;
    float32 rtb_TmpSignalConversionAtVeSR_f;
    float32 rtb_TmpSignalConversionAtVeS_k4;
    float32 rtb_TmpSignalConversionAtVeS_nq;
    float32 rtb_TmpSignalConversionAtVeS_k3;
    float32 rtb_TmpSignalConversionAtVeS_lx;
    uint8 rtb_TmpSignalConversionAtVeSR_e;
    uint8 rtb_TmpSignalConversionAtVe_i3c;
    uint8 rtb_TmpSignalConversionAtVeS_kk;
    uint8 rtb_TmpSignalConversionAtVeS_jh;
    uint8 rtb_TmpSignalConversionAtVeS_al;
    uint8 rtb_TmpSignalConversionAtVeS_eg;
    uint8 rtb_TmpSignalConversionAtVeS_n4;
    uint8 rtb_TmpSignalConversionAtVe_lxv;
    uint8 rtb_TmpSignalConversionAtVeS_h1;
    uint8 rtb_TmpSignalConversionAtVeS_e5;
    uint8 rtb_TmpSignalConversionAtVeS_hd;
    uint8 rtb_TmpSignalConversionAtVeS_ld;
    uint8 rtb_TmpSignalConversionAtVeS_l3;
    uint8 rtb_TmpSignalConversionAtVeS_fl;
    uint8 rtb_TmpSignalConversionAtVeSR_c;
    uint8 rtb_TmpSignalConversionAtVeS_ht;
    uint8 rtb_TmpSignalConversionAtVeS_in;
    uint8 rtb_TmpSignalConversionAtVeS_fs;
    uint8 rtb_TmpSignalConversionAtVeS_mw;
    uint8 rtb_TmpSignalConversionAtVeS_na;
    uint8 rtb_TmpSignalConversionAtVe_mr1;
    uint8 rtb_TmpSignalConversionAtVeS_ce;
    uint8 rtb_TmpSignalConversionAtVeS_el;
    uint8 rtb_TmpSignalConversionAtVeS_n3;
    uint8 rtb_TmpSignalConversionAtVe_bcb;
    uint8 rtb_TmpSignalConversionAtVeS_bx;
    uint8 rtb_TmpSignalConversionAtVeS_f1;
    uint8 rtb_TmpSignalConversionAtVeS_l4;
    uint8 rtb_TmpSignalConversionAtVeS_fe;
    uint8 rtb_TmpSignalConversionAtVeS_lz;
    uint8 rtb_TmpSignalConversionAtVe_lx3;
    uint8 rtb_TmpSignalConversionAtVeS_kx;
    uint8 rtb_TmpSignalConversionAtVeS_ox;
    uint8 rtb_TmpSignalConversionAtVeS_bh;
    uint8 rtb_TmpSignalConversionAtVe_dtb;
    uint8 rtb_TmpSignalConversionAtVeS_jd;
    uint8 rtb_TmpSignalConversionAtVeS_cq;
    uint8 rtb_TmpSignalConversionAtVe_fld;
    uint8 rtb_TmpSignalConversionAtVeS_as;
    uint8 rtb_TmpSignalConversionAtVeS_pc;
    uint8 rtb_TmpSignalConversionAtVeS_ex;
    uint8 rtb_TmpSignalConversionAtVeS_ix;
    uint8 rtb_TmpSignalConversionAtVeS_ph;
    uint8 rtb_TmpSignalConversionAtVeS_mk;
    uint8 rtb_TmpSignalConversionAtVeS_kb;
    uint8 rtb_TmpSignalConversionAtVeS_a4;
    uint8 rtb_TmpSignalConversionAtVeS_mb;
    uint8 rtb_TmpSignalConversionAtVe_d40;
    uint8 rtb_TmpSignalConversionAtVeS_iw;
    uint8 rtb_TmpSignalConversionAtVeS_ib;
    uint8 rtb_TmpSignalConversionAtVeS_g4;
    uint8 rtb_TmpSignalConversionAtVeS_li;
    uint8 rtb_TmpSignalConversionAtVeS_od;
    uint8 rtb_TmpSignalConversionAtVeS_et;
    uint8 rtb_TmpSignalConversionAtVeS_j0;
    uint8 rtb_TmpSignalConversionAtVeS_im;
    uint8 rtb_TmpSignalConversionAtVeS_a0;
    uint8 rtb_TmpSignalConversionAtVeS_hp;
    uint8 rtb_TmpSignalConversionAtVeS_nt;
    uint8 rtb_TmpSignalConversionAtVeS_gh;
    uint8 rtb_TmpSignalConversionAtVeS_pq;
    uint8 rtb_TmpSignalConversionAtVeS_p2;
    uint8 rtb_TmpSignalConversionAtVe_ixa;
    uint8 rtb_TmpSignalConversionAtVeS_on;
    uint8 rtb_TmpSignalConversionAtVe_gcq;
    uint8 rtb_TmpSignalConversionAtVeS_a3;
    uint8 rtb_TmpSignalConversionAtVeS_hm;
    uint8 rtb_TmpSignalConversionAtVeS_oj;
    uint8 rtb_TmpSignalConversionAtVe_pu0;
    uint8 rtb_TmpSignalConversionAtVe_h1z;
    uint8 rtb_TmpSignalConversionAtVeS_me;
    uint8 rtb_TmpSignalConversionAtVeS_nu;
    uint8 rtb_TmpSignalConversionAtVeS_b0;
    uint8 rtb_TmpSignalConversionAtVeS_ol;
    uint8 rtb_TmpSignalConversionAtVe_lx1;
    uint8 rtb_TmpSignalConversionAtVeS_c4;
    boolean rtb_TmpSignalConversionAtVeS_oa;
    boolean rtb_TmpSignalConversionAtVeS_am;
    boolean rtb_TmpSignalConversionAtVeS_pb;
    boolean rtb_TmpSignalConversionAtVeS_dk;
    boolean rtb_TmpSignalConversionAtVeS_ii;
    boolean rtb_TmpSignalConversionAtVeS_jx;
    boolean rtb_TmpSignalConversionAtVe_nfi;
    boolean rtb_TmpSignalConversionAtVeS_oq;
    boolean rtb_TmpSignalConversionAtVeS_jk;
    boolean rtb_TmpSignalConversionAtVeS_ah;
    boolean rtb_TmpSignalConversionAtVeS_lu;
    boolean rtb_TmpSignalConversionAtVeS_md;
    boolean rtb_TmpSignalConversionAtVe_iii;
    boolean rtb_TmpSignalConversionAtVeS_bi;
    boolean rtb_TmpSignalConversionAtVe_brg;
    boolean rtb_TmpSignalConversionAtVeS_g5;
    uint8 rtb_TmpSignalConversionAtVeS_ab;
    uint8 rtb_TmpSignalConversionAtVeS_aq;
    uint8 rtb_TmpSignalConversionAtVeS_b5;
    uint8 rtb_TmpSignalConversionAtVeS_be;
    uint8 rtb_TmpSignalConversionAtVeS_bo;
    uint8 rtb_TmpSignalConversionAtVeS_bs;
    uint8 rtb_TmpSignalConversionAtVeS_cr;
    uint8 rtb_TmpSignalConversionAtVeS_d0;
    uint8 rtb_TmpSignalConversionAtVeS_d4;
    uint8 rtb_TmpSignalConversionAtVeS_di;
    uint8 rtb_TmpSignalConversionAtVeS_du;
    uint8 rtb_TmpSignalConversionAtVeS_dv;
    uint8 rtb_TmpSignalConversionAtVeS_e4;
    uint8 rtb_TmpSignalConversionAtVeS_ez;
    uint8 rtb_TmpSignalConversionAtVeS_f4;
    uint8 rtb_TmpSignalConversionAtVeS_fj;
    uint8 rtb_TmpSignalConversionAtVeS_fq;
    uint8 rtb_TmpSignalConversionAtVeS_ft;
    uint8 rtb_TmpSignalConversionAtVeS_fv;
    uint8 rtb_TmpSignalConversionAtVeS_gb;
    uint8 rtb_TmpSignalConversionAtVeS_gz;
    uint8 rtb_TmpSignalConversionAtVeS_he;
    uint8 rtb_TmpSignalConversionAtVeS_hw;
    uint8 rtb_TmpSignalConversionAtVeS_hz;
    uint8 rtb_TmpSignalConversionAtVeS_i5;
    uint8 rtb_TmpSignalConversionAtVeS_ie;
    uint8 rtb_TmpSignalConversionAtVeS_if;
    uint8 rtb_TmpSignalConversionAtVeS_ij;
    uint8 rtb_TmpSignalConversionAtVeS_j1;
    uint8 rtb_TmpSignalConversionAtVeS_jm;
    uint8 rtb_TmpSignalConversionAtVeS_jv;
    uint8 rtb_TmpSignalConversionAtVeS_kf;
    uint8 rtb_TmpSignalConversionAtVeS_ko;
    uint8 rtb_TmpSignalConversionAtVeS_ky;
    uint8 rtb_TmpSignalConversionAtVeS_lo;
    uint8 rtb_TmpSignalConversionAtVeS_lw;
    uint8 rtb_TmpSignalConversionAtVeS_mj;
    uint8 rtb_TmpSignalConversionAtVeS_mt;
    uint8 rtb_TmpSignalConversionAtVeS_mu;
    uint8 rtb_TmpSignalConversionAtVeS_o1;
    uint8 rtb_TmpSignalConversionAtVeS_of;
    uint8 rtb_TmpSignalConversionAtVeS_og;
    uint8 rtb_TmpSignalConversionAtVeS_oh;
    uint8 rtb_TmpSignalConversionAtVeS_ot;
    uint8 rtb_TmpSignalConversionAtVeS_pa;
    uint8 rtb_TmpSignalConversionAtVeS_pe;
    uint8 rtb_TmpSignalConversionAtVeS_ps;
    uint8 rtb_TmpSignalConversionAtVeS_py;
    uint8 rtb_TmpSignalConversionAtVe_aer;
    uint8 rtb_TmpSignalConversionAtVe_c3z;
    uint8 rtb_TmpSignalConversionAtVe_dpi;
    uint8 rtb_TmpSignalConversionAtVe_dqj;
    uint8 rtb_TmpSignalConversionAtVe_dxj;
    uint8 rtb_TmpSignalConversionAtVe_hao;
    uint8 rtb_TmpSignalConversionAtVe_ikc;
    uint8 rtb_TmpSignalConversionAtVe_ipz;
    uint8 rtb_TmpSignalConversionAtVe_kb4;
    uint8 rtb_TmpSignalConversionAtVe_kfj;
    uint8 rtb_TmpSignalConversionAtVe_kko;
    uint8 rtb_TmpSignalConversionAtVe_m5n;
    uint8 rtb_TmpSignalConversionAtVe_pfr;
    uint8 rtb_TmpSignalConversionAtVe_pje;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_CtrlSts_Fbk_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_CtrlSts_Fbk_FD11'
     */
    rtb_TmpSignalConversionAtVe_i3c =
        Rte_Read_VeSR2B_y_APM_CtrlSts_Fbk_FD11_Value
        (&rtb_TmpSignalConversionAtVeSR_e);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_CtrlSts_Fbk_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_CtrlSts_Fbk_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_CtrlSts_Fbk_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ij);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_CtrlSts_Fbk_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_CtrlSts_Fbk_FD5'
     */
    rtb_TmpSignalConversionAtVeS_jh =
        Rte_Read_VeSR2B_y_APM_CtrlSts_Fbk_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_kk);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_CtrlSts_Fbk_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_CtrlSts_Fbk_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_CtrlSts_Fbk_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_pe);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_FailureReason_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_FailureReason_FD11'
     */
    rtb_TmpSignalConversionAtVeS_eg =
        Rte_Read_VeSR2B_y_APM_FailureReason_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_al);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_FailureReason_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_FailureReason_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_FailureReason_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_lw);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_FailureReason_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_FailureReason_FD5'
     */
    rtb_TmpSignalConversionAtVe_lxv =
        Rte_Read_VeSR2B_y_APM_FailureReason_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_n4);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_FailureReason_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_FailureReason_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_FailureReason_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ko);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_FailureType_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_FailureType_FD11'
     */
    rtb_TmpSignalConversionAtVeS_e5 =
        Rte_Read_VeSR2B_y_APM_FailureType_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_h1);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_FailureType_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_FailureType_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_FailureType_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_kfj);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_FailureType_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_FailureType_FD5'
     */
    rtb_TmpSignalConversionAtVeS_ld =
        Rte_Read_VeSR2B_y_APM_FailureType_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_hd);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_FailureType_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_FailureType_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_FailureType_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_c3z);

    /* SignalConversion generated from: '<S2>/VeSR2B_U_APM_HV_V_Fbk_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_U_APM_HV_V_Fbk_FD11'
     */
    rtb_TmpSignalConversionAtVeS_l3 = Rte_Read_VeSR2B_U_APM_HV_V_Fbk_FD11_Value(
        &rtb_TmpSignalConversionAtVeSR2B);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_HV_V_Fbk_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_HV_V_Fbk_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_HV_V_Fbk_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_fj);

    /* SignalConversion generated from: '<S2>/VeSR2B_U_APM_HV_V_Fbk_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_U_APM_HV_V_Fbk_FD5'
     */
    rtb_TmpSignalConversionAtVeS_fl = Rte_Read_VeSR2B_U_APM_HV_V_Fbk_FD5_Value
        (&rtb_TmpSignalConversionAtVeSR_h);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_HV_V_Fbk_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_HV_V_Fbk_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_HV_V_Fbk_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ot);

    /* SignalConversion generated from: '<S2>/VeSR2B_U_APM_LV_V_Fbk_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_U_APM_LV_V_Fbk_FD11'
     */
    rtb_TmpSignalConversionAtVeSR_c = Rte_Read_VeSR2B_U_APM_LV_V_Fbk_FD11_Value(
        &rtb_TmpSignalConversionAtVeSR_m);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_LV_V_Fbk_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_LV_V_Fbk_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_LV_V_Fbk_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_if);

    /* SignalConversion generated from: '<S2>/VeSR2B_U_APM_LV_V_Fbk_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_U_APM_LV_V_Fbk_FD5'
     */
    rtb_TmpSignalConversionAtVeS_ht = Rte_Read_VeSR2B_U_APM_LV_V_Fbk_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_mr);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_LV_V_Fbk_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_LV_V_Fbk_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_LV_V_Fbk_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_aer);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_BPCMCntctrsMTOWrn_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_b_BPCMCntctrsMTOWrn_FD11'
     */
    rtb_TmpSignalConversionAtVeS_in =
        Rte_Read_VeSR2B_b_BPCMCntctrsMTOWrn_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_oa);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCMCntctrsMTOWrn_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCMCntctrsMTOWrn_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCMCntctrsMTOWrn_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_ipz);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_BPCMCntctrsMTOpWrn_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_BPCMCntctrsMTOpWrn_FD5'
     */
    rtb_TmpSignalConversionAtVeS_fs =
        Rte_Read_VeSR2B_b_BPCMCntctrsMTOpWrn_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_am);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCMCntctrsMTOpWrn_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCMCntctrsMTOpWrn_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCMCntctrsMTOpWrn_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_fv);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_BPCMCntctrsSTOWrn_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_b_BPCMCntctrsSTOWrn_FD11'
     */
    rtb_TmpSignalConversionAtVeS_mw =
        Rte_Read_VeSR2B_b_BPCMCntctrsSTOWrn_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_pb);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCMCntctrsSTOWrn_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCMCntctrsSTOWrn_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCMCntctrsSTOWrn_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_bs);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_BPCMCntctrsSTOpWrn_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_BPCMCntctrsSTOpWrn_FD5'
     */
    rtb_TmpSignalConversionAtVeS_na =
        Rte_Read_VeSR2B_b_BPCMCntctrsSTOpWrn_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_dk);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCMCntctrsSTOpWrn_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCMCntctrsSTOpWrn_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCMCntctrsSTOpWrn_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ez);

    /* SignalConversion generated from: '<S2>/VeSR2B_I_BPCM_HV_Current_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_I_BPCM_HV_Current_FD11'
     */
    rtb_TmpSignalConversionAtVe_mr1 =
        Rte_Read_VeSR2B_I_BPCM_HV_Current_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_hg);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_Current_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_Current_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_Current_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_hz);

    /* SignalConversion generated from: '<S2>/VeSR2B_I_BPCM_HV_Current_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_I_BPCM_HV_Current_FD5'
     */
    rtb_TmpSignalConversionAtVeS_ce =
        Rte_Read_VeSR2B_I_BPCM_HV_Current_FD5_Value
        (&rtb_TmpSignalConversionAtVeSR_b);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_Current_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_Current_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_Current_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_hao);

    /* SignalConversion generated from: '<S2>/VeSR2B_U_BPCM_HV_IntVolt_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_U_BPCM_HV_IntVolt_FD11'
     */
    rtb_TmpSignalConversionAtVeS_el =
        Rte_Read_VeSR2B_U_BPCM_HV_IntVolt_FD11_Value
        (&rtb_TmpSignalConversionAtVeSR_k);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_IntVolt_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_IntVolt_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_IntVolt_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_gb);

    /* SignalConversion generated from: '<S2>/VeSR2B_U_BPCM_HV_IntVolt_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_U_BPCM_HV_IntVolt_FD5'
     */
    rtb_TmpSignalConversionAtVeS_n3 =
        Rte_Read_VeSR2B_U_BPCM_HV_IntVolt_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_mi);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_IntVolt_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_IntVolt_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_IntVolt_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_hw);

    /* SignalConversion generated from: '<S2>/VeSR2B_Pct_BPCM_HV_SOC_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_Pct_BPCM_HV_SOC_FD11'
     */
    rtb_TmpSignalConversionAtVe_bcb = Rte_Read_VeSR2B_Pct_BPCM_HV_SOC_FD11_Value
        (&rtb_TmpSignalConversionAtVeSR_d);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_SOC_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_SOC_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_SOC_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ps);

    /* SignalConversion generated from: '<S2>/VeSR2B_Pct_BPCM_HV_SOC_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_Pct_BPCM_HV_SOC_FD5'
     */
    rtb_TmpSignalConversionAtVeS_bx = Rte_Read_VeSR2B_Pct_BPCM_HV_SOC_FD5_Value(
        &rtb_TmpSignalConversionAtVeSR_i);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_SOC_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_SOC_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_SOC_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_d4);

    /* SignalConversion generated from: '<S2>/VeSR2B_T_BPCM_HV_Temp_Max_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_T_BPCM_HV_Temp_Max_FD11'
     */
    rtb_TmpSignalConversionAtVeS_f1 =
        Rte_Read_VeSR2B_T_BPCM_HV_Temp_Max_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_bc);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_Temp_Max_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_Temp_Max_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_Temp_Max_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_kb4);

    /* SignalConversion generated from: '<S2>/VeSR2B_T_BPCM_HV_Temp_Max_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_T_BPCM_HV_Temp_Max_FD5'
     */
    rtb_TmpSignalConversionAtVeS_l4 =
        Rte_Read_VeSR2B_T_BPCM_HV_Temp_Max_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_bb);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_Temp_Max_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_Temp_Max_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_Temp_Max_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ft);

    /* SignalConversion generated from: '<S2>/VeSR2B_T_BPCM_HV_Temp_Min_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_T_BPCM_HV_Temp_Min_FD11'
     */
    rtb_TmpSignalConversionAtVeS_fe =
        Rte_Read_VeSR2B_T_BPCM_HV_Temp_Min_FD11_Value
        (&rtb_TmpSignalConversionAtVeSR_a);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_Temp_Min_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_Temp_Min_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_Temp_Min_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_mu);

    /* SignalConversion generated from: '<S2>/VeSR2B_T_BPCM_HV_Temp_Min_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_T_BPCM_HV_Temp_Min_FD5'
     */
    rtb_TmpSignalConversionAtVeS_lz =
        Rte_Read_VeSR2B_T_BPCM_HV_Temp_Min_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_km);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_Temp_Min_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_Temp_Min_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_Temp_Min_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_pa);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_TracBusStsFD11' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_TracBusStsFD11'
     */
    rtb_TmpSignalConversionAtVeS_kx =
        Rte_Read_VeSR2B_y_BPCM_HV_TracBusStsFD11_Value
        (&rtb_TmpSignalConversionAtVe_lx3);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_TracBusStsFD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_TracBusStsFD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_TracBusStsFD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_jv);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_TracBusSts_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_TracBusSts_FD5'
     */
    rtb_TmpSignalConversionAtVeS_bh =
        Rte_Read_VeSR2B_y_BPCM_HV_TracBusSts_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_ox);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_TracBusSts_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_TracBusSts_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_TracBusSts_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_mj);

    /* SignalConversion generated from: '<S2>/VeSR2B_T_MCPA_Temp_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_T_MCPA_Temp_FD11'
     */
    rtb_TmpSignalConversionAtVe_dtb = Rte_Read_VeSR2B_T_MCPA_Temp_FD11_Value
        (&rtb_TmpSignalConversionAtVeSR_l);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_Temp_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_Temp_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_Temp_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_kko);

    /* SignalConversion generated from: '<S2>/VeSR2B_T_MCPA_Temp_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_T_MCPA_Temp_FD5'
     */
    rtb_TmpSignalConversionAtVeS_jd = Rte_Read_VeSR2B_T_MCPA_Temp_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_k0);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_Temp_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_Temp_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_Temp_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ab);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_6SO_Status_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_6SO_Status_FD11'
     */
    rtb_TmpSignalConversionAtVe_fld =
        Rte_Read_VeSR2B_y_PIM_A_6SO_Status_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_cq);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_6SO_Status_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_6SO_Status_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_6SO_Status_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_gz);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_6SO_Status_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_6SO_Status_FD5'
     */
    rtb_TmpSignalConversionAtVeS_pc =
        Rte_Read_VeSR2B_y_PIM_A_6SO_Status_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_as);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_6SO_Status_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_6SO_Status_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_6SO_Status_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_jm);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_PIMA_HV_CnctrOpnRqFD11' incorporates:
     *  Inport: '<Root>/VeSR2B_b_PIMA_HV_CnctrOpnRqFD11'
     */
    rtb_TmpSignalConversionAtVeS_ex =
        Rte_Read_VeSR2B_b_PIMA_HV_CnctrOpnRqFD11_Value
        (&rtb_TmpSignalConversionAtVeS_ii);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIMA_HV_CnctrOpnRqFD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIMA_HV_CnctrOpnRqFD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIMA_HV_CnctrOpnRqFD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_py);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_PIMA_HVCnctrOpnReq_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_PIMA_HVCnctrOpnReq_FD5'
     */
    rtb_TmpSignalConversionAtVeS_ix =
        Rte_Read_VeSR2B_b_PIMA_HVCnctrOpnReq_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_jx);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIMA_HVCnctrOpnReq_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIMA_HVCnctrOpnReq_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIMA_HVCnctrOpnReq_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_of);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_Invrtr_St_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_Invrtr_St_FD11'
     */
    rtb_TmpSignalConversionAtVeS_mk =
        Rte_Read_VeSR2B_y_PIM_A_Invrtr_St_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_ph);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_Invrtr_St_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_Invrtr_St_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_Invrtr_St_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_oh);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_Invrtr_State_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_Invrtr_State_FD5'
     */
    rtb_TmpSignalConversionAtVeS_a4 =
        Rte_Read_VeSR2B_y_PIM_A_Invrtr_State_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_kb);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_Invrtr_State_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_Invrtr_State_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_Invrtr_State_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_cr);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_PIM_A_MaxTorq_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_M_PIM_A_MaxTorq_FD11'
     */
    rtb_TmpSignalConversionAtVeS_mb = Rte_Read_VeSR2B_M_PIM_A_MaxTorq_FD11_Value
        (&rtb_TmpSignalConversionAtVeSR_j);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_MaxTorq_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_MaxTorq_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_MaxTorq_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_lo);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_PIM_A_MaxTorq_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_PIM_A_MaxTorq_FD5'
     */
    rtb_TmpSignalConversionAtVe_d40 = Rte_Read_VeSR2B_M_PIM_A_MaxTorq_FD5_Value(
        &rtb_TmpSignalConversionAtVeSR_n);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_MaxTorq_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_MaxTorq_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_MaxTorq_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_b5);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_PIM_A_MinTorq_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_M_PIM_A_MinTorq_FD11'
     */
    rtb_TmpSignalConversionAtVeS_iw = Rte_Read_VeSR2B_M_PIM_A_MinTorq_FD11_Value
        (&rtb_TmpSignalConversionAtVeSR_g);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_MinTorq_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_MinTorq_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_MinTorq_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_dxj);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_PIM_A_MinTorq_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_PIM_A_MinTorq_FD5'
     */
    rtb_TmpSignalConversionAtVeS_ib = Rte_Read_VeSR2B_M_PIM_A_MinTorq_FD5_Value(
        &rtb_TmpSignalConversionAtVeS_ln);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_MinTorq_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_MinTorq_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_MinTorq_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_fq);

    /* SignalConversion generated from: '<S2>/VeSR2B_n_PIM_A_RPM_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_n_PIM_A_RPM_FD11'
     */
    rtb_TmpSignalConversionAtVeS_g4 = Rte_Read_VeSR2B_n_PIM_A_RPM_FD11_Value
        (&rtb_TmpSignalConversionAtVeSR_p);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_RPM_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_RPM_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_RPM_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_m5n);

    /* SignalConversion generated from: '<S2>/VeSR2B_n_PIM_A_RPM_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_n_PIM_A_RPM_FD5'
     */
    rtb_TmpSignalConversionAtVeS_li = Rte_Read_VeSR2B_n_PIM_A_RPM_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_i3);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_RPM_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_RPM_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_RPM_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_dv);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_PIM_A_RPM_V_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_b_PIM_A_RPM_V_FD11'
     */
    rtb_TmpSignalConversionAtVeS_od = Rte_Read_VeSR2B_b_PIM_A_RPM_V_FD11_Value
        (&rtb_TmpSignalConversionAtVe_nfi);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_RPM_V_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_RPM_V_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_RPM_V_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_di);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_PIM_A_RPM_V_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_PIM_A_RPM_V_FD5'
     */
    rtb_TmpSignalConversionAtVeS_et = Rte_Read_VeSR2B_b_PIM_A_RPM_V_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_oq);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_RPM_V_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_RPM_V_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_RPM_V_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_f4);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_PIM_A_Trq_Achvd_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_M_PIM_A_Trq_Achvd_FD11'
     */
    rtb_TmpSignalConversionAtVeS_j0 =
        Rte_Read_VeSR2B_M_PIM_A_Trq_Achvd_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_iz);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_Trq_Achvd_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_Trq_Achvd_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_Trq_Achvd_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ie);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_PIM_A_Torque_Achvd_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_PIM_A_Torque_Achvd_FD5'
     */
    rtb_TmpSignalConversionAtVeS_im =
        Rte_Read_VeSR2B_M_PIM_A_Torque_Achvd_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_nd);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_Torque_Achvd_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_Torque_Achvd_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_Torque_Achvd_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_pfr);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_PIM_A_TrqAchvd_V_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_b_PIM_A_TrqAchvd_V_FD11'
     */
    rtb_TmpSignalConversionAtVeS_a0 =
        Rte_Read_VeSR2B_b_PIM_A_TrqAchvd_V_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_jk);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_TrqAchvd_V_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_TrqAchvd_V_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_TrqAchvd_V_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_e4);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_PIM_A_Trq_Achvd_V_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_PIM_A_Trq_Achvd_V_FD5'
     */
    rtb_TmpSignalConversionAtVeS_hp =
        Rte_Read_VeSR2B_b_PIM_A_Trq_Achvd_V_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_ah);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_A_Trq_Achvd_V_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_A_Trq_Achvd_V_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_A_Trq_Achvd_V_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_mt);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_PIMB_HV_CnctrOpnRqFD11' incorporates:
     *  Inport: '<Root>/VeSR2B_b_PIMB_HV_CnctrOpnRqFD11'
     */
    rtb_TmpSignalConversionAtVeS_nt =
        Rte_Read_VeSR2B_b_PIMB_HV_CnctrOpnRqFD11_Value
        (&rtb_TmpSignalConversionAtVeS_lu);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIMB_HV_CnctrOpnRqFD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIMB_HV_CnctrOpnRqFD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIMB_HV_CnctrOpnRqFD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_dpi);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_PIMB_HVCnctrOpnReq_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_PIMB_HVCnctrOpnReq_FD5'
     */
    rtb_TmpSignalConversionAtVeS_gh =
        Rte_Read_VeSR2B_b_PIMB_HVCnctrOpnReq_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_md);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIMB_HVCnctrOpnReq_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIMB_HVCnctrOpnReq_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIMB_HVCnctrOpnReq_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_j1);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_Invrtr_St_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_Invrtr_St_FD11'
     */
    rtb_TmpSignalConversionAtVeS_p2 =
        Rte_Read_VeSR2B_y_PIM_B_Invrtr_St_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_pq);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_Invrtr_St_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_Invrtr_St_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_Invrtr_St_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_bo);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_Invrtr_State_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_Invrtr_State_FD5'
     */
    rtb_TmpSignalConversionAtVeS_on =
        Rte_Read_VeSR2B_y_PIM_B_Invrtr_State_FD5_Value
        (&rtb_TmpSignalConversionAtVe_ixa);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_Invrtr_State_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_Invrtr_State_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_Invrtr_State_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_o1);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_PIM_B_MaxTorq_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_M_PIM_B_MaxTorq_FD11'
     */
    rtb_TmpSignalConversionAtVe_gcq = Rte_Read_VeSR2B_M_PIM_B_MaxTorq_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_ad);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_MaxTorq_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_MaxTorq_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_MaxTorq_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ky);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_PIM_B_MaxTorq_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_PIM_B_MaxTorq_FD5'
     */
    rtb_TmpSignalConversionAtVeS_a3 = Rte_Read_VeSR2B_M_PIM_B_MaxTorq_FD5_Value(
        &rtb_TmpSignalConversionAtVeS_kc);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_MaxTorq_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_MaxTorq_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_MaxTorq_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_i5);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_PIM_B_MinTorq_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_M_PIM_B_MinTorq_FD11'
     */
    rtb_TmpSignalConversionAtVeS_hm = Rte_Read_VeSR2B_M_PIM_B_MinTorq_FD11_Value
        (&rtb_TmpSignalConversionAtVeSR_o);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_MinTorq_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_MinTorq_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_MinTorq_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_pje);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_PIM_B_MinTorq_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_PIM_B_MinTorq_FD5'
     */
    rtb_TmpSignalConversionAtVeS_oj = Rte_Read_VeSR2B_M_PIM_B_MinTorq_FD5_Value(
        &rtb_TmpSignalConversionAtVeSR_f);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_MinTorq_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_MinTorq_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_MinTorq_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_ikc);

    /* SignalConversion generated from: '<S2>/VeSR2B_n_PIM_B_RPM_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_n_PIM_B_RPM_FD11'
     */
    rtb_TmpSignalConversionAtVe_pu0 = Rte_Read_VeSR2B_n_PIM_B_RPM_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_k4);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_RPM_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_RPM_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_RPM_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_og);

    /* SignalConversion generated from: '<S2>/VeSR2B_n_PIM_B_RPM_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_n_PIM_B_RPM_FD5'
     */
    rtb_TmpSignalConversionAtVe_h1z = Rte_Read_VeSR2B_n_PIM_B_RPM_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_nq);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_RPM_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_RPM_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_RPM_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_be);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_PIM_B_RPM_V_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_b_PIM_B_RPM_V_FD11'
     */
    rtb_TmpSignalConversionAtVeS_me = Rte_Read_VeSR2B_b_PIM_B_RPM_V_FD11_Value
        (&rtb_TmpSignalConversionAtVe_iii);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_RPM_V_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_RPM_V_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_RPM_V_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_d0);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_PIM_B_RPM_V_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_PIM_B_RPM_V_FD5'
     */
    rtb_TmpSignalConversionAtVeS_nu = Rte_Read_VeSR2B_b_PIM_B_RPM_V_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_bi);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_RPM_V_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_RPM_V_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_RPM_V_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_kf);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_PIM_B_Trq_Achvd_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_M_PIM_B_Trq_Achvd_FD11'
     */
    rtb_TmpSignalConversionAtVeS_b0 =
        Rte_Read_VeSR2B_M_PIM_B_Trq_Achvd_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_k3);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_Trq_Achvd_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_Trq_Achvd_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_Trq_Achvd_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_he);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_PIM_B_Torque_Achvd_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_PIM_B_Torque_Achvd_FD5'
     */
    rtb_TmpSignalConversionAtVeS_ol =
        Rte_Read_VeSR2B_M_PIM_B_Torque_Achvd_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_lx);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_Torque_Achvd_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_Torque_Achvd_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_Torque_Achvd_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_dqj);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_PIM_B_TrqAchvd_V_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_b_PIM_B_TrqAchvd_V_FD11'
     */
    rtb_TmpSignalConversionAtVe_lx1 =
        Rte_Read_VeSR2B_b_PIM_B_TrqAchvd_V_FD11_Value
        (&rtb_TmpSignalConversionAtVe_brg);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_TrqAchvd_V_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_TrqAchvd_V_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_TrqAchvd_V_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_du);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_PIM_B_Trq_Achvd_V_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_PIM_B_Trq_Achvd_V_FD5'
     */
    rtb_TmpSignalConversionAtVeS_c4 =
        Rte_Read_VeSR2B_b_PIM_B_Trq_Achvd_V_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_g5);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_PIM_B_Trq_Achvd_V_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_PIM_B_Trq_Achvd_V_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_PIM_B_Trq_Achvd_V_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_aq);

    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SRDB_FUNC_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S3>/SRDB_FUNC_FastTEF_StartCheckpoint ' */
    Rte_Call_SRDB_FUNC_FastTEF_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt1'
     */
    /* Chart: '<S38>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S41>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_ij) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVe_i3c) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_jh) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_pe) & 7U) != 0U)))
    {
        /* Transition: '<S41>:191' */
        /* Transition: '<S41>:111' */
        /* Use Secondary */
        VeSRDB_b_APM_CtrlSts_Fbk_RedundancyCmd = true;

        /* Transition: '<S41>:113' */
    }
    else
    {
        /* Transition: '<S41>:117' */
        /* Use Primary */
        VeSRDB_b_APM_CtrlSts_Fbk_RedundancyCmd = false;
    }

    /* End of Chart: '<S38>/Chart' */

    /* Switch: '<S40>/Switch1' */
    /* Transition: '<S41>:107' */
    if (VeSRDB_b_APM_CtrlSts_Fbk_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_ij = rtb_TmpSignalConversionAtVeS_pe;
    }

    /* End of Switch: '<S40>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2APM_CtrlStsFbk_FA' incorporates:
     *  Constant: '<S39>/Constant'
     *  RelationalOperator: '<S39>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2APM_CtrlStsFbk_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_ij) != 0);

    /* Switch: '<S40>/Switch' */
    if (VeSRDB_b_APM_CtrlSts_Fbk_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2APM_CtrlStsFbk' incorporates:
         *  DataTypeConversion: '<S6>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2APM_CtrlStsFbk_Value((uint16)
            rtb_TmpSignalConversionAtVeS_kk);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2APM_CtrlStsFbk' incorporates:
         *  DataTypeConversion: '<S6>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2APM_CtrlStsFbk_Value((uint16)
            rtb_TmpSignalConversionAtVeSR_e);
    }

    /* End of Switch: '<S40>/Switch' */

    /* Chart: '<S42>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S45>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_lw) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_eg) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVe_lxv) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_ko) & 7U) != 0U)))
    {
        /* Transition: '<S45>:191' */
        /* Transition: '<S45>:111' */
        /* Use Secondary */
        VeSRDB_b_APM_FailureReason_RedundancyCmd = true;

        /* Transition: '<S45>:113' */
    }
    else
    {
        /* Transition: '<S45>:117' */
        /* Use Primary */
        VeSRDB_b_APM_FailureReason_RedundancyCmd = false;
    }

    /* End of Chart: '<S42>/Chart' */

    /* Switch: '<S44>/Switch1' */
    /* Transition: '<S45>:107' */
    if (VeSRDB_b_APM_FailureReason_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_lw = rtb_TmpSignalConversionAtVeS_ko;
    }

    /* End of Switch: '<S44>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2APM_FailureReason_FA' incorporates:
     *  Constant: '<S43>/Constant'
     *  RelationalOperator: '<S43>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2APM_FailureReason_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_lw) != 0);

    /* Switch: '<S44>/Switch' */
    if (VeSRDB_b_APM_FailureReason_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2APM_FailureReason' incorporates:
         *  DataTypeConversion: '<S7>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2APM_FailureReason_Value
            (rtb_TmpSignalConversionAtVeS_n4);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2APM_FailureReason' incorporates:
         *  DataTypeConversion: '<S7>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2APM_FailureReason_Value
            (rtb_TmpSignalConversionAtVeS_al);
    }

    /* End of Switch: '<S44>/Switch' */

    /* Chart: '<S46>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S49>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_kfj) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_e5) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_ld) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVe_c3z) & 7U) != 0U)))
    {
        /* Transition: '<S49>:191' */
        /* Transition: '<S49>:111' */
        /* Use Secondary */
        VeSRDB_b_APM_FailureType_RedundancyCmd = true;

        /* Transition: '<S49>:113' */
    }
    else
    {
        /* Transition: '<S49>:117' */
        /* Use Primary */
        VeSRDB_b_APM_FailureType_RedundancyCmd = false;
    }

    /* End of Chart: '<S46>/Chart' */

    /* Switch: '<S48>/Switch1' */
    /* Transition: '<S49>:107' */
    if (VeSRDB_b_APM_FailureType_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_kfj = rtb_TmpSignalConversionAtVe_c3z;
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2APM_FailureType_FA' incorporates:
     *  Constant: '<S47>/Constant'
     *  RelationalOperator: '<S47>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2APM_FailureType_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_kfj) != 0);

    /* Switch: '<S48>/Switch' */
    if (VeSRDB_b_APM_FailureType_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2APM_FailureType' incorporates:
         *  DataTypeConversion: '<S8>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2APM_FailureType_Value
            (rtb_TmpSignalConversionAtVeS_hd);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2APM_FailureType' incorporates:
         *  DataTypeConversion: '<S8>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2APM_FailureType_Value
            (rtb_TmpSignalConversionAtVeS_h1);
    }

    /* End of Switch: '<S48>/Switch' */

    /* Chart: '<S50>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S53>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_fj) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_l3) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_fl) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_ot) & 7U) != 0U)))
    {
        /* Transition: '<S53>:191' */
        /* Transition: '<S53>:111' */
        /* Use Secondary */
        VeSRDB_b_APM_HV_V_Fbk_RedundancyCmd = true;

        /* Transition: '<S53>:113' */
    }
    else
    {
        /* Transition: '<S53>:117' */
        /* Use Primary */
        VeSRDB_b_APM_HV_V_Fbk_RedundancyCmd = false;
    }

    /* End of Chart: '<S50>/Chart' */

    /* Switch: '<S52>/Switch1' */
    /* Transition: '<S53>:107' */
    if (VeSRDB_b_APM_HV_V_Fbk_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_fj = rtb_TmpSignalConversionAtVeS_ot;
    }

    /* End of Switch: '<S52>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2APM_HVBatVlt_FA' incorporates:
     *  Constant: '<S51>/Constant'
     *  RelationalOperator: '<S51>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2APM_HVBatVlt_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_fj) != 0);

    /* Switch: '<S52>/Switch' */
    if (VeSRDB_b_APM_HV_V_Fbk_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_U_Lv2APM_HVBatVlt' incorporates:
         *  DataTypeConversion: '<S9>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_U_Lv2APM_HVBatVlt_Value
            (rtb_TmpSignalConversionAtVeSR_h);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_U_Lv2APM_HVBatVlt' incorporates:
         *  DataTypeConversion: '<S9>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_U_Lv2APM_HVBatVlt_Value
            (rtb_TmpSignalConversionAtVeSR2B);
    }

    /* End of Switch: '<S52>/Switch' */

    /* Chart: '<S54>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S57>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_if) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeSR_c) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_ht) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVe_aer) & 7U) != 0U)))
    {
        /* Transition: '<S57>:191' */
        /* Transition: '<S57>:111' */
        /* Use Secondary */
        VeSRDB_b_APM_LV_V_Fbk_RedundancyCmd = true;

        /* Transition: '<S57>:113' */
    }
    else
    {
        /* Transition: '<S57>:117' */
        /* Use Primary */
        VeSRDB_b_APM_LV_V_Fbk_RedundancyCmd = false;
    }

    /* End of Chart: '<S54>/Chart' */

    /* Switch: '<S56>/Switch1' */
    /* Transition: '<S57>:107' */
    if (VeSRDB_b_APM_LV_V_Fbk_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_if = rtb_TmpSignalConversionAtVe_aer;
    }

    /* End of Switch: '<S56>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2LV_BatVlt_FA' incorporates:
     *  Constant: '<S55>/Constant'
     *  RelationalOperator: '<S55>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2LV_BatVlt_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_if) != 0);

    /* Switch: '<S56>/Switch' */
    if (VeSRDB_b_APM_LV_V_Fbk_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_U_Lv2LV_BatVlt' incorporates:
         *  DataTypeConversion: '<S10>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_U_Lv2LV_BatVlt_Value
            (rtb_TmpSignalConversionAtVeS_mr);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_U_Lv2LV_BatVlt' incorporates:
         *  DataTypeConversion: '<S10>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_U_Lv2LV_BatVlt_Value
            (rtb_TmpSignalConversionAtVeSR_m);
    }

    /* End of Switch: '<S56>/Switch' */

    /* Chart: '<S58>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S61>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_ipz) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_in) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_fs) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_fv) & 7U) != 0U)))
    {
        /* Transition: '<S61>:191' */
        /* Transition: '<S61>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_CntctrsMidTrmOpeningWarn_RedundancyCmd = true;

        /* Transition: '<S61>:113' */
    }
    else
    {
        /* Transition: '<S61>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_CntctrsMidTrmOpeningWarn_RedundancyCmd = false;
    }

    /* End of Chart: '<S58>/Chart' */

    /* Switch: '<S60>/Switch1' */
    /* Transition: '<S61>:107' */
    if (VeSRDB_b_BPCM_CntctrsMidTrmOpeningWarn_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_ipz = rtb_TmpSignalConversionAtVeS_fv;
    }

    /* End of Switch: '<S60>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrReq_FA' incorporates:
     *  Constant: '<S59>/Constant'
     *  RelationalOperator: '<S59>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrReq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_ipz) != 0);

    /* Switch: '<S60>/Switch' */
    if (VeSRDB_b_BPCM_CntctrsMidTrmOpeningWarn_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrReq' incorporates:
         *  DataTypeConversion: '<S11>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrReq_Value
            (rtb_TmpSignalConversionAtVeS_am);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrReq' incorporates:
         *  DataTypeConversion: '<S11>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrReq_Value
            (rtb_TmpSignalConversionAtVeS_oa);
    }

    /* End of Switch: '<S60>/Switch' */

    /* Chart: '<S62>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S65>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_bs) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_mw) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_na) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_ez) & 7U) != 0U)))
    {
        /* Transition: '<S65>:191' */
        /* Transition: '<S65>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_CntctrsShtTrmOpeningWarn_RedundancyCmd = true;

        /* Transition: '<S65>:113' */
    }
    else
    {
        /* Transition: '<S65>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_CntctrsShtTrmOpeningWarn_RedundancyCmd = false;
    }

    /* End of Chart: '<S62>/Chart' */

    /* Switch: '<S64>/Switch1' */
    /* Transition: '<S65>:107' */
    if (VeSRDB_b_BPCM_CntctrsShtTrmOpeningWarn_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_bs = rtb_TmpSignalConversionAtVeS_ez;
    }

    /* End of Switch: '<S64>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrOpn_FA' incorporates:
     *  Constant: '<S63>/Constant'
     *  RelationalOperator: '<S63>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrOpn_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_bs) != 0);

    /* Switch: '<S64>/Switch' */
    if (VeSRDB_b_BPCM_CntctrsShtTrmOpeningWarn_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrOpn' incorporates:
         *  DataTypeConversion: '<S12>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrOpn_Value
            (rtb_TmpSignalConversionAtVeS_dk);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrOpn' incorporates:
         *  DataTypeConversion: '<S12>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrOpn_Value
            (rtb_TmpSignalConversionAtVeS_pb);
    }

    /* End of Switch: '<S64>/Switch' */

    /* Chart: '<S66>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S69>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_hz) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVe_mr1) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_ce) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVe_hao) & 7U) != 0U)))
    {
        /* Transition: '<S69>:191' */
        /* Transition: '<S69>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_HV_Current_RedundancyCmd = true;

        /* Transition: '<S69>:113' */
    }
    else
    {
        /* Transition: '<S69>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_HV_Current_RedundancyCmd = false;
    }

    /* End of Chart: '<S66>/Chart' */

    /* Switch: '<S68>/Switch1' */
    /* Transition: '<S69>:107' */
    if (VeSRDB_b_BPCM_HV_Current_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_hz = rtb_TmpSignalConversionAtVe_hao;
    }

    /* End of Switch: '<S68>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCrnt_FA' incorporates:
     *  Constant: '<S67>/Constant'
     *  RelationalOperator: '<S67>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatCrnt_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_hz) != 0);

    /* Switch: '<S68>/Switch' */
    if (VeSRDB_b_BPCM_HV_Current_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_I_Lv2HV_BatCrnt' incorporates:
         *  DataTypeConversion: '<S13>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_I_Lv2HV_BatCrnt_Value
            (rtb_TmpSignalConversionAtVeSR_b);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_I_Lv2HV_BatCrnt' incorporates:
         *  DataTypeConversion: '<S13>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_I_Lv2HV_BatCrnt_Value
            (rtb_TmpSignalConversionAtVeS_hg);
    }

    /* End of Switch: '<S68>/Switch' */

    /* Chart: '<S70>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S73>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_gb) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_el) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_n3) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_hw) & 7U) != 0U)))
    {
        /* Transition: '<S73>:191' */
        /* Transition: '<S73>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_HV_InternalVoltage_RedundancyCmd = true;

        /* Transition: '<S73>:113' */
    }
    else
    {
        /* Transition: '<S73>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_HV_InternalVoltage_RedundancyCmd = false;
    }

    /* End of Chart: '<S70>/Chart' */

    /* Switch: '<S72>/Switch1' */
    /* Transition: '<S73>:107' */
    if (VeSRDB_b_BPCM_HV_InternalVoltage_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_gb = rtb_TmpSignalConversionAtVeS_hw;
    }

    /* End of Switch: '<S72>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatVlt_FA' incorporates:
     *  Constant: '<S71>/Constant'
     *  RelationalOperator: '<S71>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatVlt_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_gb) != 0);

    /* Switch: '<S72>/Switch' */
    if (VeSRDB_b_BPCM_HV_InternalVoltage_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_U_Lv2HV_BatVlt' incorporates:
         *  DataTypeConversion: '<S14>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_U_Lv2HV_BatVlt_Value
            (rtb_TmpSignalConversionAtVeS_mi);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_U_Lv2HV_BatVlt' incorporates:
         *  DataTypeConversion: '<S14>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_U_Lv2HV_BatVlt_Value
            (rtb_TmpSignalConversionAtVeSR_k);
    }

    /* End of Switch: '<S72>/Switch' */

    /* Chart: '<S74>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S77>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_ps) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVe_bcb) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_bx) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_d4) & 7U) != 0U)))
    {
        /* Transition: '<S77>:191' */
        /* Transition: '<S77>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_HV_SOC_RedundancyCmd = true;

        /* Transition: '<S77>:113' */
    }
    else
    {
        /* Transition: '<S77>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_HV_SOC_RedundancyCmd = false;
    }

    /* End of Chart: '<S74>/Chart' */

    /* Switch: '<S76>/Switch1' */
    /* Transition: '<S77>:107' */
    if (VeSRDB_b_BPCM_HV_SOC_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_ps = rtb_TmpSignalConversionAtVeS_d4;
    }

    /* End of Switch: '<S76>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatSOC_FA' incorporates:
     *  Constant: '<S75>/Constant'
     *  RelationalOperator: '<S75>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatSOC_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_ps) != 0);

    /* Switch: '<S76>/Switch' */
    if (VeSRDB_b_BPCM_HV_SOC_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_Pct_Lv2HV_BatSOC' incorporates:
         *  DataTypeConversion: '<S15>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_Pct_Lv2HV_BatSOC_Value
            (rtb_TmpSignalConversionAtVeSR_i);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_Pct_Lv2HV_BatSOC' incorporates:
         *  DataTypeConversion: '<S15>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_Pct_Lv2HV_BatSOC_Value
            (rtb_TmpSignalConversionAtVeSR_d);
    }

    /* End of Switch: '<S76>/Switch' */

    /* Chart: '<S78>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S81>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_kb4) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_f1) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_l4) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_ft) & 7U) != 0U)))
    {
        /* Transition: '<S81>:191' */
        /* Transition: '<S81>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_HV_Temperature_Max_RedundancyCmd = true;

        /* Transition: '<S81>:113' */
    }
    else
    {
        /* Transition: '<S81>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_HV_Temperature_Max_RedundancyCmd = false;
    }

    /* End of Chart: '<S78>/Chart' */

    /* Switch: '<S80>/Switch1' */
    /* Transition: '<S81>:107' */
    if (VeSRDB_b_BPCM_HV_Temperature_Max_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_kb4 = rtb_TmpSignalConversionAtVeS_ft;
    }

    /* End of Switch: '<S80>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatModTempMax_FA' incorporates:
     *  Constant: '<S79>/Constant'
     *  RelationalOperator: '<S79>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatModTempMax_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_kb4) != 0);

    /* Switch: '<S80>/Switch' */
    if (VeSRDB_b_BPCM_HV_Temperature_Max_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_T_Lv2HV_BatModTempMax' incorporates:
         *  DataTypeConversion: '<S16>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_T_Lv2HV_BatModTempMax_Value
            (rtb_TmpSignalConversionAtVeS_bb);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_T_Lv2HV_BatModTempMax' incorporates:
         *  DataTypeConversion: '<S16>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_T_Lv2HV_BatModTempMax_Value
            (rtb_TmpSignalConversionAtVeS_bc);
    }

    /* End of Switch: '<S80>/Switch' */

    /* Chart: '<S82>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S85>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_mu) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_fe) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_lz) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_pa) & 7U) != 0U)))
    {
        /* Transition: '<S85>:191' */
        /* Transition: '<S85>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_HV_Temperature_Min_RedundancyCmd = true;

        /* Transition: '<S85>:113' */
    }
    else
    {
        /* Transition: '<S85>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_HV_Temperature_Min_RedundancyCmd = false;
    }

    /* End of Chart: '<S82>/Chart' */

    /* Switch: '<S84>/Switch1' */
    /* Transition: '<S85>:107' */
    if (VeSRDB_b_BPCM_HV_Temperature_Min_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_mu = rtb_TmpSignalConversionAtVeS_pa;
    }

    /* End of Switch: '<S84>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatModTempMin_FA' incorporates:
     *  Constant: '<S83>/Constant'
     *  RelationalOperator: '<S83>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatModTempMin_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_mu) != 0);

    /* Switch: '<S84>/Switch' */
    if (VeSRDB_b_BPCM_HV_Temperature_Min_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_T_Lv2HV_BatModTempMin' incorporates:
         *  DataTypeConversion: '<S17>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_T_Lv2HV_BatModTempMin_Value
            (rtb_TmpSignalConversionAtVeS_km);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_T_Lv2HV_BatModTempMin' incorporates:
         *  DataTypeConversion: '<S17>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_T_Lv2HV_BatModTempMin_Value
            (rtb_TmpSignalConversionAtVeSR_a);
    }

    /* End of Switch: '<S84>/Switch' */

    /* Chart: '<S86>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S89>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_jv) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_kx) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_bh) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_mj) & 7U) != 0U)))
    {
        /* Transition: '<S89>:191' */
        /* Transition: '<S89>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_HV_Trac_Bus_Sts_RedundancyCmd = true;

        /* Transition: '<S89>:113' */
    }
    else
    {
        /* Transition: '<S89>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_HV_Trac_Bus_Sts_RedundancyCmd = false;
    }

    /* End of Chart: '<S86>/Chart' */

    /* Switch: '<S88>/Switch1' */
    /* Transition: '<S89>:107' */
    if (VeSRDB_b_BPCM_HV_Trac_Bus_Sts_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_jv = rtb_TmpSignalConversionAtVeS_mj;
    }

    /* End of Switch: '<S88>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrStat_FA' incorporates:
     *  Constant: '<S87>/Constant'
     *  RelationalOperator: '<S87>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrStat_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_jv) != 0);

    /* Switch: '<S88>/Switch' */
    if (VeSRDB_b_BPCM_HV_Trac_Bus_Sts_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2HV_BatCntctrStat' incorporates:
         *  DataTypeConversion: '<S18>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2HV_BatCntctrStat_Value((uint16)
            rtb_TmpSignalConversionAtVeS_ox);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2HV_BatCntctrStat' incorporates:
         *  DataTypeConversion: '<S18>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2HV_BatCntctrStat_Value((uint16)
            rtb_TmpSignalConversionAtVe_lx3);
    }

    /* End of Switch: '<S88>/Switch' */

    /* Chart: '<S90>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S93>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_kko) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVe_dtb) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_jd) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_ab) & 7U) != 0U)))
    {
        /* Transition: '<S93>:191' */
        /* Transition: '<S93>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPA_Temp_RedundancyCmd = true;

        /* Transition: '<S93>:113' */
    }
    else
    {
        /* Transition: '<S93>:117' */
        /* Use Primary */
        VeSRDB_b_MCPA_Temp_RedundancyCmd = false;
    }

    /* End of Chart: '<S90>/Chart' */

    /* Switch: '<S92>/Switch1' */
    /* Transition: '<S93>:107' */
    if (VeSRDB_b_MCPA_Temp_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_kko = rtb_TmpSignalConversionAtVeS_ab;
    }

    /* End of Switch: '<S92>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MCPA_Temp_FA' incorporates:
     *  Constant: '<S91>/Constant'
     *  RelationalOperator: '<S91>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MCPA_Temp_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_kko) != 0);

    /* Switch: '<S92>/Switch' */
    if (VeSRDB_b_MCPA_Temp_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_T_Lv2MCPA_Temp' incorporates:
         *  DataTypeConversion: '<S20>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_T_Lv2MCPA_Temp_Value
            (rtb_TmpSignalConversionAtVeS_k0);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_T_Lv2MCPA_Temp' incorporates:
         *  DataTypeConversion: '<S20>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_T_Lv2MCPA_Temp_Value
            (rtb_TmpSignalConversionAtVeSR_l);
    }

    /* End of Switch: '<S92>/Switch' */

    /* Chart: '<S94>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S97>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_gz) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVe_fld) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_pc) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_jm) & 7U) != 0U)))
    {
        /* Transition: '<S97>:191' */
        /* Transition: '<S97>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_A_6SO_Status_RedundancyCmd = true;

        /* Transition: '<S97>:113' */
    }
    else
    {
        /* Transition: '<S97>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_A_6SO_Status_RedundancyCmd = false;
    }

    /* End of Chart: '<S94>/Chart' */

    /* Switch: '<S96>/Switch' */
    /* Transition: '<S97>:107' */
    if (VeSRDB_b_PIM_A_6SO_Status_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2MtrA_6SOEnbl' incorporates:
         *  DataTypeConversion: '<S21>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2MtrA_6SOEnbl_Value
            (rtb_TmpSignalConversionAtVeS_as);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2MtrA_6SOEnbl' incorporates:
         *  DataTypeConversion: '<S21>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2MtrA_6SOEnbl_Value
            (rtb_TmpSignalConversionAtVeS_cq);
    }

    /* End of Switch: '<S96>/Switch' */

    /* Chart: '<S98>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S101>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_py) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_ex) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_ix) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_of) & 7U) != 0U)))
    {
        /* Transition: '<S101>:191' */
        /* Transition: '<S101>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_A_HV_CnctrOpn_Req_RedundancyCmd = true;

        /* Transition: '<S101>:113' */
    }
    else
    {
        /* Transition: '<S101>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_A_HV_CnctrOpn_Req_RedundancyCmd = false;
    }

    /* End of Chart: '<S98>/Chart' */

    /* Switch: '<S100>/Switch1' */
    /* Transition: '<S101>:107' */
    if (VeSRDB_b_PIM_A_HV_CnctrOpn_Req_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_py = rtb_TmpSignalConversionAtVeS_of;
    }

    /* End of Switch: '<S100>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq_FA' incorporates:
     *  Constant: '<S99>/Constant'
     *  RelationalOperator: '<S99>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_py) != 0);

    /* Switch: '<S100>/Switch' */
    if (VeSRDB_b_PIM_A_HV_CnctrOpn_Req_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq' incorporates:
         *  DataTypeConversion: '<S22>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq_Value
            (rtb_TmpSignalConversionAtVeS_jx);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq' incorporates:
         *  DataTypeConversion: '<S22>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq_Value
            (rtb_TmpSignalConversionAtVeS_ii);
    }

    /* End of Switch: '<S100>/Switch' */

    /* Chart: '<S102>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S105>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_oh) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_mk) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_a4) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_cr) & 7U) != 0U)))
    {
        /* Transition: '<S105>:191' */
        /* Transition: '<S105>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_A_Invrtr_State_RedundancyCmd = true;

        /* Transition: '<S105>:113' */
    }
    else
    {
        /* Transition: '<S105>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_A_Invrtr_State_RedundancyCmd = false;
    }

    /* End of Chart: '<S102>/Chart' */

    /* Switch: '<S104>/Switch1' */
    /* Transition: '<S105>:107' */
    if (VeSRDB_b_PIM_A_Invrtr_State_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_oh = rtb_TmpSignalConversionAtVeS_cr;
    }

    /* End of Switch: '<S104>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_InvrtrSts_FA' incorporates:
     *  Constant: '<S103>/Constant'
     *  RelationalOperator: '<S103>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrA_InvrtrSts_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_oh) != 0);

    /* Switch: '<S104>/Switch' */
    if (VeSRDB_b_PIM_A_Invrtr_State_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2MtrA_InvrtrSts' incorporates:
         *  DataTypeConversion: '<S23>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2MtrA_InvrtrSts_Value
            (rtb_TmpSignalConversionAtVeS_kb);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2MtrA_InvrtrSts' incorporates:
         *  DataTypeConversion: '<S23>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2MtrA_InvrtrSts_Value
            (rtb_TmpSignalConversionAtVeS_ph);
    }

    /* End of Switch: '<S104>/Switch' */

    /* Chart: '<S106>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S109>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_lo) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_mb) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVe_d40) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_b5) & 7U) != 0U)))
    {
        /* Transition: '<S109>:191' */
        /* Transition: '<S109>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_A_MaxTorq_RedundancyCmd = true;

        /* Transition: '<S109>:113' */
    }
    else
    {
        /* Transition: '<S109>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_A_MaxTorq_RedundancyCmd = false;
    }

    /* End of Chart: '<S106>/Chart' */

    /* Switch: '<S108>/Switch1' */
    /* Transition: '<S109>:107' */
    if (VeSRDB_b_PIM_A_MaxTorq_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_lo = rtb_TmpSignalConversionAtVeS_b5;
    }

    /* End of Switch: '<S108>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_MaxTrq_FA' incorporates:
     *  Constant: '<S107>/Constant'
     *  RelationalOperator: '<S107>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrA_MaxTrq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_lo) != 0);

    /* Switch: '<S108>/Switch' */
    if (VeSRDB_b_PIM_A_MaxTorq_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_MaxTrq' incorporates:
         *  DataTypeConversion: '<S24>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_MaxTrq_Value
            (rtb_TmpSignalConversionAtVeSR_n);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_MaxTrq' incorporates:
         *  DataTypeConversion: '<S24>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_MaxTrq_Value
            (rtb_TmpSignalConversionAtVeSR_j);
    }

    /* End of Switch: '<S108>/Switch' */

    /* Chart: '<S110>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S113>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_dxj) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_iw) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_ib) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_fq) & 7U) != 0U)))
    {
        /* Transition: '<S113>:191' */
        /* Transition: '<S113>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_A_MinTorq_RedundancyCmd = true;

        /* Transition: '<S113>:113' */
    }
    else
    {
        /* Transition: '<S113>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_A_MinTorq_RedundancyCmd = false;
    }

    /* End of Chart: '<S110>/Chart' */

    /* Switch: '<S112>/Switch1' */
    /* Transition: '<S113>:107' */
    if (VeSRDB_b_PIM_A_MinTorq_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_dxj = rtb_TmpSignalConversionAtVeS_fq;
    }

    /* End of Switch: '<S112>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_MinTrq_FA' incorporates:
     *  Constant: '<S111>/Constant'
     *  RelationalOperator: '<S111>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrA_MinTrq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_dxj) != 0);

    /* Switch: '<S112>/Switch' */
    if (VeSRDB_b_PIM_A_MinTorq_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_MinTrq' incorporates:
         *  DataTypeConversion: '<S25>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_MinTrq_Value
            (rtb_TmpSignalConversionAtVeS_ln);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_MinTrq' incorporates:
         *  DataTypeConversion: '<S25>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_MinTrq_Value
            (rtb_TmpSignalConversionAtVeSR_g);
    }

    /* End of Switch: '<S112>/Switch' */

    /* Chart: '<S114>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S117>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_m5n) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_g4) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_li) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_dv) & 7U) != 0U)))
    {
        /* Transition: '<S117>:191' */
        /* Transition: '<S117>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_A_RPM_RedundancyCmd = true;

        /* Transition: '<S117>:113' */
    }
    else
    {
        /* Transition: '<S117>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_A_RPM_RedundancyCmd = false;
    }

    /* End of Chart: '<S114>/Chart' */

    /* Switch: '<S116>/Switch1' */
    /* Transition: '<S117>:107' */
    if (VeSRDB_b_PIM_A_RPM_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_m5n = rtb_TmpSignalConversionAtVeS_dv;
    }

    /* End of Switch: '<S116>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_Spd_FA' incorporates:
     *  Constant: '<S115>/Constant'
     *  RelationalOperator: '<S115>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrA_Spd_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_m5n) != 0);

    /* Switch: '<S116>/Switch' */
    if (VeSRDB_b_PIM_A_RPM_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_n_Lv2MtrA_Spd' incorporates:
         *  DataTypeConversion: '<S26>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_n_Lv2MtrA_Spd_Value
            (rtb_TmpSignalConversionAtVeS_i3);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_n_Lv2MtrA_Spd' incorporates:
         *  DataTypeConversion: '<S26>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_n_Lv2MtrA_Spd_Value
            (rtb_TmpSignalConversionAtVeSR_p);
    }

    /* End of Switch: '<S116>/Switch' */

    /* Chart: '<S118>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S121>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_di) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_od) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_et) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_f4) & 7U) != 0U)))
    {
        /* Transition: '<S121>:191' */
        /* Transition: '<S121>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_A_RPM_V_RedundancyCmd = true;

        /* Transition: '<S121>:113' */
    }
    else
    {
        /* Transition: '<S121>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_A_RPM_V_RedundancyCmd = false;
    }

    /* End of Chart: '<S118>/Chart' */

    /* Switch: '<S120>/Switch' */
    /* Transition: '<S121>:107' */
    if (VeSRDB_b_PIM_A_RPM_V_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_Spd_Vld' incorporates:
         *  DataTypeConversion: '<S27>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrA_Spd_Vld_Value
            (rtb_TmpSignalConversionAtVeS_oq);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_Spd_Vld' incorporates:
         *  DataTypeConversion: '<S27>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrA_Spd_Vld_Value
            (rtb_TmpSignalConversionAtVe_nfi);
    }

    /* End of Switch: '<S120>/Switch' */

    /* Chart: '<S122>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S125>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_ie) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_j0) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_im) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVe_pfr) & 7U) != 0U)))
    {
        /* Transition: '<S125>:191' */
        /* Transition: '<S125>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_A_Torque_Achieved_RedundancyCmd = true;

        /* Transition: '<S125>:113' */
    }
    else
    {
        /* Transition: '<S125>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_A_Torque_Achieved_RedundancyCmd = false;
    }

    /* End of Chart: '<S122>/Chart' */

    /* Switch: '<S124>/Switch1' */
    /* Transition: '<S125>:107' */
    if (VeSRDB_b_PIM_A_Torque_Achieved_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_ie = rtb_TmpSignalConversionAtVe_pfr;
    }

    /* End of Switch: '<S124>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_TrqAchieved_FA' incorporates:
     *  Constant: '<S123>/Constant'
     *  RelationalOperator: '<S123>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrA_TrqAchieved_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_ie) != 0);

    /* Switch: '<S124>/Switch' */
    if (VeSRDB_b_PIM_A_Torque_Achieved_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_TrqAchieved' incorporates:
         *  DataTypeConversion: '<S28>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_TrqAchieved_Value
            (rtb_TmpSignalConversionAtVeS_nd);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_TrqAchieved' incorporates:
         *  DataTypeConversion: '<S28>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_TrqAchieved_Value
            (rtb_TmpSignalConversionAtVeS_iz);
    }

    /* End of Switch: '<S124>/Switch' */

    /* Chart: '<S126>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S129>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_e4) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_a0) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_hp) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_mt) & 7U) != 0U)))
    {
        /* Transition: '<S129>:191' */
        /* Transition: '<S129>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_A_Torque_Achieved_V_RedundancyCmd = true;

        /* Transition: '<S129>:113' */
    }
    else
    {
        /* Transition: '<S129>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_A_Torque_Achieved_V_RedundancyCmd = false;
    }

    /* End of Chart: '<S126>/Chart' */

    /* Switch: '<S128>/Switch' */
    /* Transition: '<S129>:107' */
    if (VeSRDB_b_PIM_A_Torque_Achieved_V_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_TrqAchieved_Vld' incorporates:
         *  DataTypeConversion: '<S29>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrA_TrqAchieved_Vld_Value
            (rtb_TmpSignalConversionAtVeS_ah);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_TrqAchieved_Vld' incorporates:
         *  DataTypeConversion: '<S29>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrA_TrqAchieved_Vld_Value
            (rtb_TmpSignalConversionAtVeS_jk);
    }

    /* End of Switch: '<S128>/Switch' */

    /* Chart: '<S130>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S133>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_dpi) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_nt) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_gh) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_j1) & 7U) != 0U)))
    {
        /* Transition: '<S133>:191' */
        /* Transition: '<S133>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_B_HV_CnctrOpn_Req_RedundancyCmd = true;

        /* Transition: '<S133>:113' */
    }
    else
    {
        /* Transition: '<S133>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_B_HV_CnctrOpn_Req_RedundancyCmd = false;
    }

    /* End of Chart: '<S130>/Chart' */

    /* Switch: '<S132>/Switch1' */
    /* Transition: '<S133>:107' */
    if (VeSRDB_b_PIM_B_HV_CnctrOpn_Req_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_dpi = rtb_TmpSignalConversionAtVeS_j1;
    }

    /* End of Switch: '<S132>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq_FA' incorporates:
     *  Constant: '<S131>/Constant'
     *  RelationalOperator: '<S131>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_dpi) != 0);

    /* Switch: '<S132>/Switch' */
    if (VeSRDB_b_PIM_B_HV_CnctrOpn_Req_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq' incorporates:
         *  DataTypeConversion: '<S30>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq_Value
            (rtb_TmpSignalConversionAtVeS_md);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq' incorporates:
         *  DataTypeConversion: '<S30>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq_Value
            (rtb_TmpSignalConversionAtVeS_lu);
    }

    /* End of Switch: '<S132>/Switch' */

    /* Chart: '<S134>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S137>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_bo) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_p2) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_on) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_o1) & 7U) != 0U)))
    {
        /* Transition: '<S137>:191' */
        /* Transition: '<S137>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_B_Invrtr_State_RedundancyCmd = true;

        /* Transition: '<S137>:113' */
    }
    else
    {
        /* Transition: '<S137>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_B_Invrtr_State_RedundancyCmd = false;
    }

    /* End of Chart: '<S134>/Chart' */

    /* Switch: '<S136>/Switch1' */
    /* Transition: '<S137>:107' */
    if (VeSRDB_b_PIM_B_Invrtr_State_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_bo = rtb_TmpSignalConversionAtVeS_o1;
    }

    /* End of Switch: '<S136>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_InvrtrSts_FA' incorporates:
     *  Constant: '<S135>/Constant'
     *  RelationalOperator: '<S135>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrB_InvrtrSts_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_bo) != 0);

    /* Switch: '<S136>/Switch' */
    if (VeSRDB_b_PIM_B_Invrtr_State_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2MtrB_InvrtrSts' incorporates:
         *  DataTypeConversion: '<S31>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2MtrB_InvrtrSts_Value
            (rtb_TmpSignalConversionAtVe_ixa);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2MtrB_InvrtrSts' incorporates:
         *  DataTypeConversion: '<S31>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2MtrB_InvrtrSts_Value
            (rtb_TmpSignalConversionAtVeS_pq);
    }

    /* End of Switch: '<S136>/Switch' */

    /* Chart: '<S138>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S141>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_ky) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVe_gcq) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_a3) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_i5) & 7U) != 0U)))
    {
        /* Transition: '<S141>:191' */
        /* Transition: '<S141>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_B_MaxTorq_RedundancyCmd = true;

        /* Transition: '<S141>:113' */
    }
    else
    {
        /* Transition: '<S141>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_B_MaxTorq_RedundancyCmd = false;
    }

    /* End of Chart: '<S138>/Chart' */

    /* Switch: '<S140>/Switch1' */
    /* Transition: '<S141>:107' */
    if (VeSRDB_b_PIM_B_MaxTorq_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_ky = rtb_TmpSignalConversionAtVeS_i5;
    }

    /* End of Switch: '<S140>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_MaxTrq_FA' incorporates:
     *  Constant: '<S139>/Constant'
     *  RelationalOperator: '<S139>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrB_MaxTrq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_ky) != 0);

    /* Switch: '<S140>/Switch' */
    if (VeSRDB_b_PIM_B_MaxTorq_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_MaxTrq' incorporates:
         *  DataTypeConversion: '<S32>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_MaxTrq_Value
            (rtb_TmpSignalConversionAtVeS_kc);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_MaxTrq' incorporates:
         *  DataTypeConversion: '<S32>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_MaxTrq_Value
            (rtb_TmpSignalConversionAtVeS_ad);
    }

    /* End of Switch: '<S140>/Switch' */

    /* Chart: '<S142>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S145>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_pje) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_hm) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_oj) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVe_ikc) & 7U) != 0U)))
    {
        /* Transition: '<S145>:191' */
        /* Transition: '<S145>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_B_MinTorq_RedundancyCmd = true;

        /* Transition: '<S145>:113' */
    }
    else
    {
        /* Transition: '<S145>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_B_MinTorq_RedundancyCmd = false;
    }

    /* End of Chart: '<S142>/Chart' */

    /* Switch: '<S144>/Switch1' */
    /* Transition: '<S145>:107' */
    if (VeSRDB_b_PIM_B_MinTorq_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_pje = rtb_TmpSignalConversionAtVe_ikc;
    }

    /* End of Switch: '<S144>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_MinTrq_FA' incorporates:
     *  Constant: '<S143>/Constant'
     *  RelationalOperator: '<S143>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrB_MinTrq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_pje) != 0);

    /* Switch: '<S144>/Switch' */
    if (VeSRDB_b_PIM_B_MinTorq_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_MinTrq' incorporates:
         *  DataTypeConversion: '<S33>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_MinTrq_Value
            (rtb_TmpSignalConversionAtVeSR_f);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_MinTrq' incorporates:
         *  DataTypeConversion: '<S33>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_MinTrq_Value
            (rtb_TmpSignalConversionAtVeSR_o);
    }

    /* End of Switch: '<S144>/Switch' */

    /* Chart: '<S146>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S149>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_og) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVe_pu0) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVe_h1z) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_be) & 7U) != 0U)))
    {
        /* Transition: '<S149>:191' */
        /* Transition: '<S149>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_B_RPM_RedundancyCmd = true;

        /* Transition: '<S149>:113' */
    }
    else
    {
        /* Transition: '<S149>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_B_RPM_RedundancyCmd = false;
    }

    /* End of Chart: '<S146>/Chart' */

    /* Switch: '<S148>/Switch1' */
    /* Transition: '<S149>:107' */
    if (VeSRDB_b_PIM_B_RPM_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_og = rtb_TmpSignalConversionAtVeS_be;
    }

    /* End of Switch: '<S148>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_Spd_FA' incorporates:
     *  Constant: '<S147>/Constant'
     *  RelationalOperator: '<S147>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrB_Spd_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_og) != 0);

    /* Switch: '<S148>/Switch' */
    if (VeSRDB_b_PIM_B_RPM_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_n_Lv2MtrB_Spd' incorporates:
         *  DataTypeConversion: '<S34>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_n_Lv2MtrB_Spd_Value
            (rtb_TmpSignalConversionAtVeS_nq);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_n_Lv2MtrB_Spd' incorporates:
         *  DataTypeConversion: '<S34>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_n_Lv2MtrB_Spd_Value
            (rtb_TmpSignalConversionAtVeS_k4);
    }

    /* End of Switch: '<S148>/Switch' */

    /* Chart: '<S150>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S153>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_d0) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_me) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_nu) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_kf) & 7U) != 0U)))
    {
        /* Transition: '<S153>:191' */
        /* Transition: '<S153>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_B_RPM_V_RedundancyCmd = true;

        /* Transition: '<S153>:113' */
    }
    else
    {
        /* Transition: '<S153>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_B_RPM_V_RedundancyCmd = false;
    }

    /* End of Chart: '<S150>/Chart' */

    /* Switch: '<S152>/Switch' */
    /* Transition: '<S153>:107' */
    if (VeSRDB_b_PIM_B_RPM_V_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_Spd_Vld' incorporates:
         *  DataTypeConversion: '<S35>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrB_Spd_Vld_Value
            (rtb_TmpSignalConversionAtVeS_bi);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_Spd_Vld' incorporates:
         *  DataTypeConversion: '<S35>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrB_Spd_Vld_Value
            (rtb_TmpSignalConversionAtVe_iii);
    }

    /* End of Switch: '<S152>/Switch' */

    /* Chart: '<S154>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S157>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_he) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_b0) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_ol) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVe_dqj) & 7U) != 0U)))
    {
        /* Transition: '<S157>:191' */
        /* Transition: '<S157>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_B_Torque_Achieved_RedundancyCmd = true;

        /* Transition: '<S157>:113' */
    }
    else
    {
        /* Transition: '<S157>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_B_Torque_Achieved_RedundancyCmd = false;
    }

    /* End of Chart: '<S154>/Chart' */

    /* Switch: '<S156>/Switch1' */
    /* Transition: '<S157>:107' */
    if (VeSRDB_b_PIM_B_Torque_Achieved_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_he = rtb_TmpSignalConversionAtVe_dqj;
    }

    /* End of Switch: '<S156>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_TrqAchieved_FA' incorporates:
     *  Constant: '<S155>/Constant'
     *  RelationalOperator: '<S155>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrB_TrqAchieved_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_he) != 0);

    /* Switch: '<S156>/Switch' */
    if (VeSRDB_b_PIM_B_Torque_Achieved_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_TrqAchieved' incorporates:
         *  DataTypeConversion: '<S36>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_TrqAchieved_Value
            (rtb_TmpSignalConversionAtVeS_lx);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_TrqAchieved' incorporates:
         *  DataTypeConversion: '<S36>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_TrqAchieved_Value
            (rtb_TmpSignalConversionAtVeS_k3);
    }

    /* End of Switch: '<S156>/Switch' */

    /* Chart: '<S158>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S161>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_du) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVe_lx1) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_c4) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_aq) & 7U) != 0U)))
    {
        /* Transition: '<S161>:191' */
        /* Transition: '<S161>:111' */
        /* Use Secondary */
        VeSRDB_b_PIM_B_Torque_Achieved_V_RedundancyCmd = true;

        /* Transition: '<S161>:113' */
    }
    else
    {
        /* Transition: '<S161>:117' */
        /* Use Primary */
        VeSRDB_b_PIM_B_Torque_Achieved_V_RedundancyCmd = false;
    }

    /* End of Chart: '<S158>/Chart' */

    /* Switch: '<S160>/Switch' */
    /* Transition: '<S161>:107' */
    if (VeSRDB_b_PIM_B_Torque_Achieved_V_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_TrqAchieved_Vld' incorporates:
         *  DataTypeConversion: '<S37>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrB_TrqAchieved_Vld_Value
            (rtb_TmpSignalConversionAtVeS_g5);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_TrqAchieved_Vld' incorporates:
         *  DataTypeConversion: '<S37>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrB_TrqAchieved_Vld_Value
            (rtb_TmpSignalConversionAtVe_brg);
    }

    /* End of Switch: '<S160>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */

    /* Outputs for Atomic SubSystem: '<S2>/SRDB_FUNC_FastTEF_StopCheckpoint' */
    /* FunctionCaller: '<S4>/SRDB_FUNC_FastTEF_StopCheckpoint ' */
    Rte_Call_SRDB_FUNC_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S2>/SRDB_FUNC_FastTEF_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, SRDB_BLUEN_CODE) SRDB_BLUEN_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
