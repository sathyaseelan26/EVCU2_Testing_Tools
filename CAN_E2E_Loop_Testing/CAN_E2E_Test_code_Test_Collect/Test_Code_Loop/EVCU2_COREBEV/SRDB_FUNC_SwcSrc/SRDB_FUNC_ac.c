/*
 * File: SRDB_FUNC_ac.c
 *
 * Code generated for Simulink model 'SRDB_FUNC_ac'.
 *
 * Model version                  : 1.201
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:41:55 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SRDB_FUNC_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_SRDB_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, SRDB_FUNC_VAR_INIT) KeSRDB_b_RedundancyEnbl = 1;/* Referenced by: '<S19>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_SRDB_FUNC
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SRDB_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_APM_CtrlSts_Fbk_RedundancyCmd;/* '<S43>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_APM_FailureReason_RedundancyCmd;/* '<S47>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_APM_FailureType_RedundancyCmd;/* '<S51>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_APM_HV_V_Fbk_RedundancyCmd;/* '<S55>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_APM_LV_V_Fbk_RedundancyCmd;/* '<S59>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_BPCM_CntctrsMidTrmOpeningWarn_RedundancyCmd;/* '<S63>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_BPCM_CntctrsShtTrmOpeningWarn_RedundancyCmd;/* '<S67>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_BPCM_HV_Current_RedundancyCmd;/* '<S71>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_BPCM_HV_InternalVoltage_RedundancyCmd;/* '<S75>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_BPCM_HV_SOC_RedundancyCmd;/* '<S79>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_BPCM_HV_Temperature_Max_RedundancyCmd;/* '<S83>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_BPCM_HV_Temperature_Min_RedundancyCmd;/* '<S87>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_BPCM_HV_Trac_Bus_Sts_RedundancyCmd;/* '<S91>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_MCPA_HV_CnctrOpn_Req_P_RedundancyCmd;/* '<S95>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_MCPA_MaxTorq_P_RedundancyCmd;/* '<S99>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_MCPA_MinTorq_P_RedundancyCmd;/* '<S103>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_MCPA_RPM_P_RedundancyCmd;/* '<S107>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_MCPA_RPM_V_P_RedundancyCmd;/* '<S111>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_MCPA_Temp_P_RedundancyCmd;/* '<S115>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_MCPA_TorqAchieved_AEMD_P_RedundancyCmd;/* '<S119>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_MCPA_TorqAchieved_AEMD_V_P_RedundancyCmd;/* '<S123>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_MCPA_Torque_Achieved_P_RedundancyCmd;/* '<S127>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_MCPA_Torque_Achieved_V_P_RedundancyCmd;/* '<S131>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_MCPB_HV_CnctrOpn_Req_P_RedundancyCmd;/* '<S135>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_MCPB_MaxTorq_P_RedundancyCmd;/* '<S139>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_MCPB_MinTorq_P_RedundancyCmd;/* '<S143>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_MCPB_MtrIndex_P_RedundancyCmd;/* '<S147>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_MCPB_RPM_P_RedundancyCmd;/* '<S151>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_MCPB_RPM_V_P_RedundancyCmd;/* '<S155>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_MCPB_Temp_P_RedundancyCmd;/* '<S159>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_MCPB_TorqAchieved_AEMD_P_RedundancyCmd;/* '<S163>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_MCPB_TorqAchieved_AEMD_V_P_RedundancyCmd;/* '<S167>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_MCPB_Torque_Achieved_P_RedundancyCmd;/* '<S171>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_MCPB_Torque_Achieved_V_P_RedundancyCmd;/* '<S175>/Chart' */
static VAR(boolean, SRDB_FUNC_VAR_INIT) VeSRDB_b_ProximitySts_RedundancyCmd;/* '<S179>/Chart' */

#if Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq || Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq_FA

static VAR(boolean, SRDB_FUNC_VAR_INIT)
    VeSRDB_b_SGCP_HV_CnctrOpn_Req_P_RedundancyCmd;/* '<S183>/Chart' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SRDB_FUNC
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, SRDB_FUNC_CODE) SRDB_FUNC_FastTEF(void) /* Explicit Task: FastTEF */
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
    float32 rtb_TmpSignalConversionAtVeS_ke;
    float32 rtb_TmpSignalConversionAtVeSR_g;
    float32 rtb_TmpSignalConversionAtVeSR_e;
    float32 rtb_TmpSignalConversionAtVeS_b0;
    float32 rtb_TmpSignalConversionAtVeSR_j;
    float32 rtb_TmpSignalConversionAtVeSR_f;
    float32 rtb_TmpSignalConversionAtVeSR_n;
    float32 rtb_TmpSignalConversionAtVeS_gd;
    float32 rtb_TmpSignalConversionAtVeS_aa;
    float32 rtb_TmpSignalConversionAtVeSR_l;
    float32 rtb_TmpSignalConversionAtVeS_dd;
    float32 rtb_TmpSignalConversionAtVeS_f3;
    float32 rtb_TmpSignalConversionAtVeSR_c;
    float32 rtb_TmpSignalConversionAtVeS_g4;
    float32 rtb_TmpSignalConversionAtVeS_f0;
    float32 rtb_TmpSignalConversionAtVeSR_p;
    float32 rtb_TmpSignalConversionAtVeS_ce;
    float32 rtb_TmpSignalConversionAtVeS_ih;
    float32 rtb_TmpSignalConversionAtVeS_ik;
    float32 rtb_TmpSignalConversionAtVeS_go;
    float32 rtb_TmpSignalConversionAtVeS_m3;
    float32 rtb_TmpSignalConversionAtVeS_nb;
    float32 rtb_TmpSignalConversionAtVeS_dr;
    float32 rtb_TmpSignalConversionAtVeS_at;

#if Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq || Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq_FA

    uint8 rtb_TmpSignalConversionAtVeS_il;

#endif

#if Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq || Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq_FA

    uint8 rtb_TmpSignalConversionAtVeS_hc;

#endif

    uint8 rtb_TmpSignalConversionAtVeS_eb;
    uint8 rtb_TmpSignalConversionAtVeS_i3;
    uint8 rtb_TmpSignalConversionAtVeS_kk;
    uint8 rtb_TmpSignalConversionAtVeS_jh;
    uint8 rtb_TmpSignalConversionAtVeS_al;
    uint8 rtb_TmpSignalConversionAtVeS_eg;
    uint8 rtb_TmpSignalConversionAtVeS_n4;
    uint8 rtb_TmpSignalConversionAtVeS_lx;
    uint8 rtb_TmpSignalConversionAtVeS_h1;
    uint8 rtb_TmpSignalConversionAtVeS_e5;
    uint8 rtb_TmpSignalConversionAtVeS_hd;
    uint8 rtb_TmpSignalConversionAtVeS_ld;
    uint8 rtb_TmpSignalConversionAtVeS_l3;
    uint8 rtb_TmpSignalConversionAtVeS_fl;
    uint8 rtb_TmpSignalConversionAtVeS_cu;
    uint8 rtb_TmpSignalConversionAtVeS_ht;
    uint8 rtb_TmpSignalConversionAtVeS_in;
    uint8 rtb_TmpSignalConversionAtVeS_he;
    uint8 rtb_TmpSignalConversionAtVeS_mw;
    uint8 rtb_TmpSignalConversionAtVeS_ds;
    uint8 rtb_TmpSignalConversionAtVe_mr1;
    uint8 rtb_TmpSignalConversionAtVe_cet;
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
    uint8 rtb_TmpSignalConversionAtVeS_ee;
    uint8 rtb_TmpSignalConversionAtVeS_fx;
    uint8 rtb_TmpSignalConversionAtVeS_pm;
    uint8 rtb_TmpSignalConversionAtVeS_ev;
    uint8 rtb_TmpSignalConversionAtVeS_oj;
    uint8 rtb_TmpSignalConversionAtVeS_a4;
    uint8 rtb_TmpSignalConversionAtVeS_md;
    uint8 rtb_TmpSignalConversionAtVe_h1y;
    uint8 rtb_TmpSignalConversionAtVeS_ay;
    uint8 rtb_TmpSignalConversionAtVeS_ja;
    uint8 rtb_TmpSignalConversionAtVeS_ao;
    uint8 rtb_TmpSignalConversionAtVeS_pw;
    uint8 rtb_TmpSignalConversionAtVeS_hp;
    uint8 rtb_TmpSignalConversionAtVeS_pr;
    uint8 rtb_TmpSignalConversionAtVeS_gh;
    uint8 rtb_TmpSignalConversionAtVe_mdi;
    uint8 rtb_TmpSignalConversionAtVeS_ie;
    uint8 rtb_TmpSignalConversionAtVeS_az;
    uint8 rtb_TmpSignalConversionAtVeS_py;
    uint8 rtb_TmpSignalConversionAtVe_bwm;
    uint8 rtb_TmpSignalConversionAtVeS_od;
    uint8 rtb_TmpSignalConversionAtVe_ems;
    uint8 rtb_TmpSignalConversionAtVeS_fr;
    uint8 rtb_TmpSignalConversionAtVeS_es;
    uint8 rtb_TmpSignalConversionAtVeS_kc;
    uint8 rtb_TmpSignalConversionAtVeS_iw;
    uint8 rtb_TmpSignalConversionAtVeS_af;
    uint8 rtb_TmpSignalConversionAtVeS_ga;
    uint8 rtb_TmpSignalConversionAtVeS_h2;
    uint8 rtb_TmpSignalConversionAtVeS_cl;
    uint8 rtb_TmpSignalConversionAtVeS_bo;
    uint8 rtb_TmpSignalConversionAtVe_afi;
    uint8 rtb_TmpSignalConversionAtVe_lsb;
    uint8 rtb_TmpSignalConversionAtVeS_hu;
    uint8 rtb_TmpSignalConversionAtVeS_nx;
    uint8 rtb_TmpSignalConversionAtVeS_jj;
    uint8 rtb_TmpSignalConversionAtVeS_fk;
    uint8 rtb_TmpSignalConversionAtVeS_i1;
    uint8 rtb_TmpSignalConversionAtVe_egt;
    uint8 rtb_TmpSignalConversionAtVeS_k2;
    uint8 rtb_TmpSignalConversionAtVeS_lf;
    uint8 rtb_TmpSignalConversionAtVeS_pz;
    uint8 rtb_TmpSignalConversionAtVeS_gw;
    uint8 rtb_TmpSignalConversionAtVeS_gy;
    uint8 rtb_TmpSignalConversionAtVeS_hy;
    uint8 rtb_TmpSignalConversionAtVeS_dp;
    uint8 rtb_TmpSignalConversionAtVeS_bi;
    uint8 rtb_TmpSignalConversionAtVeS_mm;
    uint8 rtb_TmpSignalConversionAtVeS_jk;
    uint8 rtb_TmpSignalConversionAtVeS_gv;

#if Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq || Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq_FA

    boolean rtb_TmpSignalConversionAtVeS_po;

#endif

#if Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq || Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq_FA

    boolean rtb_TmpSignalConversionAtVeS_cf;

#endif

    boolean rtb_TmpSignalConversionAtVeS_oa;
    boolean rtb_TmpSignalConversionAtVe_pwa;
    boolean rtb_TmpSignalConversionAtVeS_pb;
    boolean rtb_TmpSignalConversionAtVe_bi3;
    boolean rtb_TmpSignalConversionAtVe_ayu;
    boolean rtb_TmpSignalConversionAtVeS_ni;
    boolean rtb_TmpSignalConversionAtVe_bol;
    boolean rtb_TmpSignalConversionAtVe_nyc;
    boolean rtb_TmpSignalConversionAtVe_ml4;
    boolean rtb_TmpSignalConversionAtVeS_mz;
    boolean rtb_TmpSignalConversionAtVe_ake;
    boolean rtb_TmpSignalConversionAtVeS_jc;
    boolean rtb_TmpSignalConversionAtVeS_ma;
    boolean rtb_TmpSignalConversionAtVeS_kp;
    boolean rtb_TmpSignalConversionAtVeS_mh;
    boolean rtb_TmpSignalConversionAtVeS_ln;
    boolean rtb_TmpSignalConversionAtVe_mlv;
    boolean rtb_TmpSignalConversionAtVeS_hk;
    boolean rtb_TmpSignalConversionAtVeS_gr;
    boolean rtb_TmpSignalConversionAtVeS_o1;
    boolean rtb_Compare;

#if Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq || Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq_FA

    boolean rtb_DataTypeConversion;

#endif

    uint8 rtb_TmpSignalConversionAtVeSR_o;
    uint8 rtb_TmpSignalConversionAtVeS_ac;
    uint8 rtb_TmpSignalConversionAtVeS_ah;
    uint8 rtb_TmpSignalConversionAtVeS_an;
    uint8 rtb_TmpSignalConversionAtVeS_bd;
    uint8 rtb_TmpSignalConversionAtVeS_bf;
    uint8 rtb_TmpSignalConversionAtVeS_bm;
    uint8 rtb_TmpSignalConversionAtVeS_by;
    uint8 rtb_TmpSignalConversionAtVeS_cr;
    uint8 rtb_TmpSignalConversionAtVeS_cz;
    uint8 rtb_TmpSignalConversionAtVeS_dc;
    uint8 rtb_TmpSignalConversionAtVeS_dm;
    uint8 rtb_TmpSignalConversionAtVeS_dn;
    uint8 rtb_TmpSignalConversionAtVeS_do;
    uint8 rtb_TmpSignalConversionAtVeS_dy;
    uint8 rtb_TmpSignalConversionAtVeS_e0;
    uint8 rtb_TmpSignalConversionAtVeS_ec;
    uint8 rtb_TmpSignalConversionAtVeS_et;
    uint8 rtb_TmpSignalConversionAtVeS_f2;
    uint8 rtb_TmpSignalConversionAtVeS_fw;
    uint8 rtb_TmpSignalConversionAtVeS_g3;
    uint8 rtb_TmpSignalConversionAtVeS_ge;
    uint8 rtb_TmpSignalConversionAtVeS_hv;
    uint8 rtb_TmpSignalConversionAtVeS_ij;
    uint8 rtb_TmpSignalConversionAtVeS_it;
    uint8 rtb_TmpSignalConversionAtVeS_iz;
    uint8 rtb_TmpSignalConversionAtVeS_jn;
    uint8 rtb_TmpSignalConversionAtVeS_ju;
    uint8 rtb_TmpSignalConversionAtVeS_jy;
    uint8 rtb_TmpSignalConversionAtVeS_ki;
    uint8 rtb_TmpSignalConversionAtVeS_ko;
    uint8 rtb_TmpSignalConversionAtVeS_lk;
    uint8 rtb_TmpSignalConversionAtVeS_lp;
    uint8 rtb_TmpSignalConversionAtVeS_lw;
    uint8 rtb_TmpSignalConversionAtVeS_m4;
    uint8 rtb_TmpSignalConversionAtVeS_mg;
    uint8 rtb_TmpSignalConversionAtVeS_mk;
    uint8 rtb_TmpSignalConversionAtVeS_ng;
    uint8 rtb_TmpSignalConversionAtVeS_nq;
    uint8 rtb_TmpSignalConversionAtVeS_p4;
    uint8 rtb_TmpSignalConversionAtVeS_pc;
    uint8 rtb_TmpSignalConversionAtVeS_pe;
    uint8 rtb_TmpSignalConversionAtVeS_ph;
    uint8 rtb_TmpSignalConversionAtVeS_pv;
    uint8 rtb_TmpSignalConversionAtVe_a1q;
    uint8 rtb_TmpSignalConversionAtVe_bnf;
    uint8 rtb_TmpSignalConversionAtVe_cxe;
    uint8 rtb_TmpSignalConversionAtVe_d2i;
    uint8 rtb_TmpSignalConversionAtVe_dwm;
    uint8 rtb_TmpSignalConversionAtVe_e03;
    uint8 rtb_TmpSignalConversionAtVe_icf;
    uint8 rtb_TmpSignalConversionAtVe_iqs;
    uint8 rtb_TmpSignalConversionAtVe_kfd;
    uint8 rtb_TmpSignalConversionAtVe_lua;
    uint8 rtb_TmpSignalConversionAtVe_md1;
    uint8 rtb_TmpSignalConversionAtVe_mi2;
    uint8 rtb_TmpSignalConversionAtVe_o2l;
    uint8 rtb_TmpSignalConversionAtVe_o43;

#if Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq || Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq_FA

    uint8 rtb_TmpSignalConversionAtVe_lsn;

#endif

#if Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq || Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq_FA

    uint8 rtb_TmpSignalConversionAtVe_p0d;

#endif

    uint8 rtb_TmpSignalConversionAtVeS_ae;
    uint8 rtb_TmpSignalConversionAtVeS_ba;
    uint8 rtb_TmpSignalConversionAtVeS_fa;
    uint8 rtb_TmpSignalConversionAtVeS_h5;
    uint8 rtb_TmpSignalConversionAtVeS_kh;
    uint8 rtb_TmpSignalConversionAtVeS_mt;
    uint8 rtb_TmpSignalConversionAtVeS_nh;
    uint8 rtb_TmpSignalConversionAtVeS_ow;
    uint8 rtb_TmpSignalConversionAtVe_acz;
    uint8 rtb_TmpSignalConversionAtVe_cpr;
    uint8 rtb_TmpSignalConversionAtVe_ev1;
    uint8 rtb_TmpSignalConversionAtVe_gzb;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* SignalConversion generated from: '<S2>/VeSR2B_b_SGCP_HV_CnctrOpn_Req_P_FD16' incorporates:
     *  SignalConversion generated from: '<S2>/VeSR2B_b_SGCP_HV_CnctrOpn_Req_P_FD5'
     *  SignalConversion generated from: '<S2>/VeSR2B_y_SGCP_HV_CnctrOpn_Req_P_FD16_SigSts'
     *  SignalConversion generated from: '<S2>/VeSR2B_y_SGCP_HV_CnctrOpn_Req_P_FD5_SigSts'
     */
#if Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq || Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq_FA

    /* SignalConversion generated from: '<S2>/VeSR2B_b_SGCP_HV_CnctrOpn_Req_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_b_SGCP_HV_CnctrOpn_Req_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_il =
        Rte_Read_VeSR2B_b_SGCP_HV_CnctrOpn_Req_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeS_po);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_SGCP_HV_CnctrOpn_Req_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_SGCP_HV_CnctrOpn_Req_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_SGCP_HV_CnctrOpn_Req_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_p0d);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_SGCP_HV_CnctrOpn_Req_P_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_SGCP_HVCnctrOpnReqPFD5'
     */
    rtb_TmpSignalConversionAtVeS_hc =
        Rte_Read_VeSR2B_b_SGCP_HVCnctrOpnReqPFD5_Value
        (&rtb_TmpSignalConversionAtVeS_cf);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_SGCP_HV_CnctrOpn_Req_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_SGCP_HVCnctrOpnReqPFD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_SGCP_HVCnctrOpnReqPFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_lsn);

#endif

    /* End of SignalConversion generated from: '<S2>/VeSR2B_b_SGCP_HV_CnctrOpn_Req_P_FD16' */

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_CtrlSts_Fbk_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_CtrlSts_Fbk_FD11'
     */
    rtb_TmpSignalConversionAtVeS_i3 =
        Rte_Read_VeSR2B_y_APM_CtrlSts_Fbk_FD11_Value
        (&rtb_TmpSignalConversionAtVeS_eb);

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
    rtb_TmpSignalConversionAtVeS_lx =
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
        (&rtb_TmpSignalConversionAtVeS_ac);

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
        (&rtb_TmpSignalConversionAtVeS_mk);

    /* SignalConversion generated from: '<S2>/VeSR2B_U_APM_HV_V_Fbk_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_U_APM_HV_V_Fbk_FD11'
     */
    rtb_TmpSignalConversionAtVeS_l3 = Rte_Read_VeSR2B_U_APM_HV_V_Fbk_FD11_Value(
        &rtb_TmpSignalConversionAtVeSR2B);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_HV_V_Fbk_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_HV_V_Fbk_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_HV_V_Fbk_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_pv);

    /* SignalConversion generated from: '<S2>/VeSR2B_U_APM_HV_V_Fbk_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_U_APM_HV_V_Fbk_FD5'
     */
    rtb_TmpSignalConversionAtVeS_fl = Rte_Read_VeSR2B_U_APM_HV_V_Fbk_FD5_Value
        (&rtb_TmpSignalConversionAtVeSR_h);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_HV_V_Fbk_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_HV_V_Fbk_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_HV_V_Fbk_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_hv);

    /* SignalConversion generated from: '<S2>/VeSR2B_U_APM_LV_V_Fbk_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_U_APM_LV_V_Fbk_FD11'
     */
    rtb_TmpSignalConversionAtVeS_cu = Rte_Read_VeSR2B_U_APM_LV_V_Fbk_FD11_Value(
        &rtb_TmpSignalConversionAtVeSR_m);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_LV_V_Fbk_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_LV_V_Fbk_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_LV_V_Fbk_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_lua);

    /* SignalConversion generated from: '<S2>/VeSR2B_U_APM_LV_V_Fbk_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_U_APM_LV_V_Fbk_FD5'
     */
    rtb_TmpSignalConversionAtVeS_ht = Rte_Read_VeSR2B_U_APM_LV_V_Fbk_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_mr);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_APM_LV_V_Fbk_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_APM_LV_V_Fbk_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_APM_LV_V_Fbk_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ah);

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
        (&rtb_TmpSignalConversionAtVeS_ng);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_BPCMCntctrsMTOWrn_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_BPCMCntctrsMTOWrn_FD5'
     */
    rtb_TmpSignalConversionAtVeS_he =
        Rte_Read_VeSR2B_b_BPCMCntctrsMTOWrn_FD5_Value
        (&rtb_TmpSignalConversionAtVe_pwa);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCMCntctrsMTOWrn_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCMCntctrsMTOWrn_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCMCntctrsMTOWrn_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeSR_o);

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
        (&rtb_TmpSignalConversionAtVe_iqs);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_BPCMCntctrsSTOWrn_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_BPCMCntctrsSTOWrn_FD5'
     */
    rtb_TmpSignalConversionAtVeS_ds =
        Rte_Read_VeSR2B_b_BPCMCntctrsSTOWrn_FD5_Value
        (&rtb_TmpSignalConversionAtVe_bi3);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCMCntctrsSTOWrn_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCMCntctrsSTOWrn_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCMCntctrsSTOWrn_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_an);

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
        (&rtb_TmpSignalConversionAtVeS_pc);

    /* SignalConversion generated from: '<S2>/VeSR2B_I_BPCM_HV_Current_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_I_BPCM_HV_Current_FD5'
     */
    rtb_TmpSignalConversionAtVe_cet =
        Rte_Read_VeSR2B_I_BPCM_HV_Current_FD5_Value
        (&rtb_TmpSignalConversionAtVeSR_b);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_Current_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_Current_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_Current_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_bd);

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
        (&rtb_TmpSignalConversionAtVe_o43);

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
        (&rtb_TmpSignalConversionAtVe_dwm);

    /* SignalConversion generated from: '<S2>/VeSR2B_Pct_BPCM_HV_SOC_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_Pct_BPCM_HV_SOC_FD11'
     */
    rtb_TmpSignalConversionAtVe_bcb = Rte_Read_VeSR2B_Pct_BPCM_HV_SOC_FD11_Value
        (&rtb_TmpSignalConversionAtVeSR_d);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_SOC_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_SOC_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_SOC_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_dn);

    /* SignalConversion generated from: '<S2>/VeSR2B_Pct_BPCM_HV_SOC_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_Pct_BPCM_HV_SOC_FD5'
     */
    rtb_TmpSignalConversionAtVeS_bx = Rte_Read_VeSR2B_Pct_BPCM_HV_SOC_FD5_Value(
        &rtb_TmpSignalConversionAtVeSR_i);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_SOC_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_SOC_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_SOC_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_o2l);

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
        (&rtb_TmpSignalConversionAtVeS_dm);

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
        (&rtb_TmpSignalConversionAtVeS_ki);

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
        (&rtb_TmpSignalConversionAtVe_mi2);

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
        (&rtb_TmpSignalConversionAtVeS_do);

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
        (&rtb_TmpSignalConversionAtVeS_iz);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_TracBusStsFD5' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_TracBusStsFD5'
     */
    rtb_TmpSignalConversionAtVeS_fx =
        Rte_Read_VeSR2B_y_BPCM_HV_TracBusStsFD5_Value
        (&rtb_TmpSignalConversionAtVeS_ee);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_BPCM_HV_TracBusStsFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_BPCM_HV_TracBusStsFD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_BPCM_HV_TracBusStsFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_nq);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_ProximitySts_FD11' incorporates:
     *  Inport: '<Root>/VeSR2B_y_ProximitySts_FD11'
     */
    rtb_TmpSignalConversionAtVeS_ev = Rte_Read_VeSR2B_y_ProximitySts_FD11_Value(
        &rtb_TmpSignalConversionAtVeS_pm);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_ProximitySts_FD11_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_ProximitySts_FD11_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_ProximitySts_FD11_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_kfd);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_ProximitySts_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_y_ProximitySts_FD5'
     */
    rtb_TmpSignalConversionAtVeS_a4 = Rte_Read_VeSR2B_y_ProximitySts_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_oj);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_ProximitySts_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_ProximitySts_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_ProximitySts_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_lp);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPA_HV_CnctrOpn_Req_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPA_HV_CnctrOpn_Req_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_md =
        Rte_Read_VeSR2B_b_MCPA_HV_CnctrOpn_Req_P_FD16_Value
        (&rtb_TmpSignalConversionAtVe_ayu);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_HV_CnctrOpn_Req_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_HV_CnctrOpn_Req_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_HV_CnctrOpn_Req_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_mg);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPA_HV_CnctrOpnRqPFD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPA_HV_CnctrOpnRqPFD5'
     */
    rtb_TmpSignalConversionAtVe_h1y =
        Rte_Read_VeSR2B_b_MCPA_HV_CnctrOpnRqPFD5_Value
        (&rtb_TmpSignalConversionAtVeS_ni);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_HV_CnctrOpnRqPFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_HV_CnctrOpnRqPFD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_HV_CnctrOpnRqPFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_bm);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPA_MaxTorq_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPA_MaxTorq_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_ay =
        Rte_Read_VeSR2B_M_MCPA_MaxTorq_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeS_ke);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_MaxTorq_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_MaxTorq_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_MaxTorq_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_jn);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPA_MaxTorq_P_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPA_MaxTorq_P_FD5'
     */
    rtb_TmpSignalConversionAtVeS_ja = Rte_Read_VeSR2B_M_MCPA_MaxTorq_P_FD5_Value
        (&rtb_TmpSignalConversionAtVeSR_g);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_MaxTorq_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_MaxTorq_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_MaxTorq_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_e03);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPA_MinTorq_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPA_MinTorq_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_ao =
        Rte_Read_VeSR2B_M_MCPA_MinTorq_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeSR_e);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_MinTorq_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_MinTorq_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_MinTorq_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_md1);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPA_MinTorq_P_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPA_MinTorq_P_FD5'
     */
    rtb_TmpSignalConversionAtVeS_pw = Rte_Read_VeSR2B_M_MCPA_MinTorq_P_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_b0);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_MinTorq_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_MinTorq_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_MinTorq_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_by);

    /* SignalConversion generated from: '<S2>/VeSR2B_n_MCPA_RPM_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_n_MCPA_RPM_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_hp = Rte_Read_VeSR2B_n_MCPA_RPM_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeSR_j);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_RPM_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_RPM_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_RPM_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_cxe);

    /* SignalConversion generated from: '<S2>/VeSR2B_n_MCPA_RPM_P_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_n_MCPA_RPM_P_FD5'
     */
    rtb_TmpSignalConversionAtVeS_pr = Rte_Read_VeSR2B_n_MCPA_RPM_P_FD5_Value
        (&rtb_TmpSignalConversionAtVeSR_f);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_RPM_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_RPM_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_RPM_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_lk);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPA_RPM_V_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPA_RPM_V_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_gh = Rte_Read_VeSR2B_b_MCPA_RPM_V_P_FD16_Value(
        &rtb_TmpSignalConversionAtVe_bol);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_RPM_V_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_RPM_V_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_RPM_V_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ba);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPA_RPM_V_P_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPA_RPM_V_P_FD5'
     */
    rtb_TmpSignalConversionAtVe_mdi = Rte_Read_VeSR2B_b_MCPA_RPM_V_P_FD5_Value
        (&rtb_TmpSignalConversionAtVe_nyc);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_RPM_V_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_RPM_V_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_RPM_V_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_ev1);

    /* SignalConversion generated from: '<S2>/VeSR2B_T_MCPA_Temp_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_T_MCPA_Temp_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_ie = Rte_Read_VeSR2B_T_MCPA_Temp_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeSR_n);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_Temp_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_Temp_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_Temp_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_icf);

    /* SignalConversion generated from: '<S2>/VeSR2B_T_MCPA_Temp_P_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_T_MCPA_Temp_P_FD5'
     */
    rtb_TmpSignalConversionAtVeS_az = Rte_Read_VeSR2B_T_MCPA_Temp_P_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_gd);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_Temp_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_Temp_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_Temp_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_cr);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPA_TorqAchved_AEMD_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPA_TorqAchved_AEMD_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_py =
        Rte_Read_VeSR2B_M_MCPA_TorqAchved_AEMD_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeS_aa);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_TorqAchved_AEMD_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_TorqAchved_AEMD_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_TorqAchved_AEMD_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_bf);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPA_TrqAchvdAEMDPFD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPA_TrqAchvdAEMDPFD5'
     */
    rtb_TmpSignalConversionAtVe_bwm =
        Rte_Read_VeSR2B_M_MCPA_TrqAchvdAEMDPFD5_Value
        (&rtb_TmpSignalConversionAtVeSR_l);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_TrqAchvdAEMDPFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_TrqAchvdAEMDPFD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_TrqAchvdAEMDPFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_d2i);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPA_TrqAchvd_AEMD_V_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPA_TrqAchvd_AEMD_V_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_od =
        Rte_Read_VeSR2B_b_MCPA_TrqAchvd_AEMD_V_P_FD16_Value
        (&rtb_TmpSignalConversionAtVe_ml4);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_TrqAchvd_AEMD_V_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_TrqAchvd_AEMD_V_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_TrqAchvd_AEMD_V_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_h5);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPA_TrqAchvdAEMDVPFD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPA_TrqAchvdAEMDVPFD5'
     */
    rtb_TmpSignalConversionAtVe_ems =
        Rte_Read_VeSR2B_b_MCPA_TrqAchvdAEMDVPFD5_Value
        (&rtb_TmpSignalConversionAtVeS_mz);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_TrqAchvdAEMDVPFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_TrqAchvdAEMDVPFD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_TrqAchvdAEMDVPFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_nh);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPA_Torque_Achieved_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPA_Torque_Achieved_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_fr =
        Rte_Read_VeSR2B_M_MCPA_Torque_Achieved_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeS_dd);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_Torque_Achieved_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_Torque_Achieved_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_Torque_Achieved_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ec);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPA_Torque_AchvdPFD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPA_Torque_AchvdPFD5'
     */
    rtb_TmpSignalConversionAtVeS_es =
        Rte_Read_VeSR2B_M_MCPA_Torque_AchvdPFD5_Value
        (&rtb_TmpSignalConversionAtVeS_f3);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_Torque_AchvdPFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_Torque_AchvdPFD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_Torque_AchvdPFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_cz);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPA_Torque_Achved_V_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPA_Torque_Achved_V_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_kc =
        Rte_Read_VeSR2B_b_MCPA_Torque_Achved_V_P_FD16_Value
        (&rtb_TmpSignalConversionAtVe_ake);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_Torque_Achved_V_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_Torque_Achved_V_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_Torque_Achved_V_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ae);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPA_Trque_AchvdVPFD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPA_Trque_AchvdVPFD5'
     */
    rtb_TmpSignalConversionAtVeS_iw =
        Rte_Read_VeSR2B_b_MCPA_Trque_AchvdVPFD5_Value
        (&rtb_TmpSignalConversionAtVeS_jc);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPA_Trque_AchvdVPFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPA_Trque_AchvdVPFD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPA_Trque_AchvdVPFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ow);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPB_HV_CnctrOpn_Req_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPB_HV_CnctrOpn_Req_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_af =
        Rte_Read_VeSR2B_b_MCPB_HV_CnctrOpn_Req_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeS_ma);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_HV_CnctrOpn_Req_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_HV_CnctrOpn_Req_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_HV_CnctrOpn_Req_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_dc);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPB_HV_CnctrOpnRqPFD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPB_HV_CnctrOpnRqPFD5'
     */
    rtb_TmpSignalConversionAtVeS_ga =
        Rte_Read_VeSR2B_b_MCPB_HV_CnctrOpnRqPFD5_Value
        (&rtb_TmpSignalConversionAtVeS_kp);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_HV_CnctrOpnRqPFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_HV_CnctrOpnRqPFD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_HV_CnctrOpnRqPFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_jy);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPB_MaxTorq_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPB_MaxTorq_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_h2 =
        Rte_Read_VeSR2B_M_MCPB_MaxTorq_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeSR_c);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_MaxTorq_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_MaxTorq_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_MaxTorq_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_f2);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPB_MaxTorq_P_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPB_MaxTorq_P_FD5'
     */
    rtb_TmpSignalConversionAtVeS_cl = Rte_Read_VeSR2B_M_MCPB_MaxTorq_P_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_g4);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_MaxTorq_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_MaxTorq_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_MaxTorq_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_et);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPB_MinTorq_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPB_MinTorq_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_bo =
        Rte_Read_VeSR2B_M_MCPB_MinTorq_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeS_f0);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_MinTorq_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_MinTorq_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_MinTorq_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_m4);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPB_MinTorq_P_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPB_MinTorq_P_FD5'
     */
    rtb_TmpSignalConversionAtVe_afi = Rte_Read_VeSR2B_M_MCPB_MinTorq_P_FD5_Value
        (&rtb_TmpSignalConversionAtVeSR_p);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_MinTorq_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_MinTorq_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_MinTorq_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_e0);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_MtrIndex_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_MtrIndex_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_hu =
        Rte_Read_VeSR2B_y_MCPB_MtrIndex_P_FD16_Value
        (&rtb_TmpSignalConversionAtVe_lsb);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_MtrIndex_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_MtrIndex_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_MtrIndex_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_bnf);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_MtrIndex_P_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_MtrIndex_P_FD5'
     */
    rtb_TmpSignalConversionAtVeS_jj =
        Rte_Read_VeSR2B_y_MCPB_MtrIndex_P_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_nx);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_MtrIndex_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_MtrIndex_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_MtrIndex_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ju);

    /* SignalConversion generated from: '<S2>/VeSR2B_n_MCPB_RPM_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_n_MCPB_RPM_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_fk = Rte_Read_VeSR2B_n_MCPB_RPM_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeS_ce);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_RPM_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_RPM_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_RPM_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_p4);

    /* SignalConversion generated from: '<S2>/VeSR2B_n_MCPB_RPM_P_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_n_MCPB_RPM_P_FD5'
     */
    rtb_TmpSignalConversionAtVeS_i1 = Rte_Read_VeSR2B_n_MCPB_RPM_P_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_ih);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_RPM_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_RPM_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_RPM_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_it);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPB_RPM_V_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPB_RPM_V_P_FD16'
     */
    rtb_TmpSignalConversionAtVe_egt = Rte_Read_VeSR2B_b_MCPB_RPM_V_P_FD16_Value(
        &rtb_TmpSignalConversionAtVeS_mh);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_RPM_V_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_RPM_V_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_RPM_V_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_gzb);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPB_RPM_V_P_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPB_RPM_V_P_FD5'
     */
    rtb_TmpSignalConversionAtVeS_k2 = Rte_Read_VeSR2B_b_MCPB_RPM_V_P_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_ln);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_RPM_V_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_RPM_V_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_RPM_V_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_fa);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_Temp_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_Temp_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_lf = Rte_Read_VeSR2B_y_MCPB_Temp_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeS_ik);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_Temp_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_Temp_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_Temp_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_g3);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_Temp_P_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_Temp_P_FD5'
     */
    rtb_TmpSignalConversionAtVeS_pz = Rte_Read_VeSR2B_y_MCPB_Temp_P_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_go);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_Temp_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_Temp_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_Temp_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_dy);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPB_TorqAchved_AEMD_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPB_TorqAchved_AEMD_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_gw =
        Rte_Read_VeSR2B_M_MCPB_TorqAchved_AEMD_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeS_m3);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_TorqAchved_AEMD_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_TorqAchved_AEMD_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_TorqAchved_AEMD_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_fw);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPB_TrqAchvd_AEMDPFD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPB_TrqAchvd_AEMDPFD5'
     */
    rtb_TmpSignalConversionAtVeS_gy =
        Rte_Read_VeSR2B_M_MCPB_TrqAchvd_AEMDPFD5_Value
        (&rtb_TmpSignalConversionAtVeS_nb);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_TrqAchvd_AEMDPFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_TrqAchvd_AEMDPFD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_TrqAchvd_AEMDPFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ph);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPB_TrqAchvd_AEMD_V_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPB_TrqAchvd_AEMD_V_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_hy =
        Rte_Read_VeSR2B_b_MCPB_TrqAchvd_AEMD_V_P_FD16_Value
        (&rtb_TmpSignalConversionAtVe_mlv);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_TrqAchvd_AEMD_V_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_TrqAchvd_AEMD_V_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_TrqAchvd_AEMD_V_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_mt);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPB_TrqAchvdAEMDVPFD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPB_TrqAchvdAEMDVPFD5'
     */
    rtb_TmpSignalConversionAtVeS_dp =
        Rte_Read_VeSR2B_b_MCPB_TrqAchvdAEMDVPFD5_Value
        (&rtb_TmpSignalConversionAtVeS_hk);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_TrqAchvdAEMDVPFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_TrqAchvdAEMDVPFD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_TrqAchvdAEMDVPFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_kh);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPB_Torque_Achieved_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPB_Torque_Achieved_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_bi =
        Rte_Read_VeSR2B_M_MCPB_Torque_Achieved_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeS_dr);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_Torque_Achieved_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_Torque_Achieved_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_Torque_Achieved_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_a1q);

    /* SignalConversion generated from: '<S2>/VeSR2B_M_MCPB_Trq_Achved_P_FD5' incorporates:
     *  Inport: '<Root>/VeSR2B_M_MCPB_Trq_Achved_P_FD5'
     */
    rtb_TmpSignalConversionAtVeS_mm =
        Rte_Read_VeSR2B_M_MCPB_Trq_Achved_P_FD5_Value
        (&rtb_TmpSignalConversionAtVeS_at);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_Trq_Achved_P_FD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_Trq_Achved_P_FD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_Trq_Achved_P_FD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVeS_ge);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPB_Torque_Achved_V_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPB_Torque_Achved_V_P_FD16'
     */
    rtb_TmpSignalConversionAtVeS_jk =
        Rte_Read_VeSR2B_b_MCPB_Torque_Achved_V_P_FD16_Value
        (&rtb_TmpSignalConversionAtVeS_gr);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_Torque_Achved_V_P_FD16_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_Torque_Achved_V_P_FD16_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_Torque_Achved_V_P_FD16_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_acz);

    /* SignalConversion generated from: '<S2>/VeSR2B_b_MCPB_Trq_Achved_V_PFD5' incorporates:
     *  Inport: '<Root>/VeSR2B_b_MCPB_Trq_Achved_V_PFD5'
     */
    rtb_TmpSignalConversionAtVeS_gv =
        Rte_Read_VeSR2B_b_MCPB_Trq_Achved_V_PFD5_Value
        (&rtb_TmpSignalConversionAtVeS_o1);

    /* SignalConversion generated from: '<S2>/VeSR2B_y_MCPB_Trq_Achved_V_PFD5_SigSts' incorporates:
     *  Inport: '<Root>/VeSR2B_y_MCPB_Trq_Achved_V_PFD5_SigSts'
     */
    (void)Rte_Read_VeSR2B_y_MCPB_Trq_Achved_V_PFD5_SigSts_Value
        (&rtb_TmpSignalConversionAtVe_cpr);

    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SRDB_FUNC_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S3>/SRDB_FUNC_FastTEF_StartCheckpoint ' */
    Rte_Call_SRDB_FUNC_FastTEF_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt1'
     */
    /* Chart: '<S43>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S46>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_ij) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_i3) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_jh) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_pe) & 7U) != 0U)))
    {
        /* Transition: '<S46>:191' */
        /* Transition: '<S46>:111' */
        /* Use Secondary */
        VeSRDB_b_APM_CtrlSts_Fbk_RedundancyCmd = true;

        /* Transition: '<S46>:113' */
    }
    else
    {
        /* Transition: '<S46>:117' */
        /* Use Primary */
        VeSRDB_b_APM_CtrlSts_Fbk_RedundancyCmd = false;
    }

    /* End of Chart: '<S43>/Chart' */

    /* Switch: '<S45>/Switch1' */
    /* Transition: '<S46>:107' */
    if (VeSRDB_b_APM_CtrlSts_Fbk_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_ij = rtb_TmpSignalConversionAtVeS_pe;
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2APM_CtrlStsFbk_FA' incorporates:
     *  Constant: '<S44>/Constant'
     *  RelationalOperator: '<S44>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2APM_CtrlStsFbk_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_ij) != 0);

    /* Switch: '<S45>/Switch' */
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
            rtb_TmpSignalConversionAtVeS_eb);
    }

    /* End of Switch: '<S45>/Switch' */

    /* Chart: '<S47>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S50>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_lw) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_eg) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_lx) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_ko) & 7U) != 0U)))
    {
        /* Transition: '<S50>:191' */
        /* Transition: '<S50>:111' */
        /* Use Secondary */
        VeSRDB_b_APM_FailureReason_RedundancyCmd = true;

        /* Transition: '<S50>:113' */
    }
    else
    {
        /* Transition: '<S50>:117' */
        /* Use Primary */
        VeSRDB_b_APM_FailureReason_RedundancyCmd = false;
    }

    /* End of Chart: '<S47>/Chart' */

    /* Switch: '<S49>/Switch1' */
    /* Transition: '<S50>:107' */
    if (VeSRDB_b_APM_FailureReason_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_lw = rtb_TmpSignalConversionAtVeS_ko;
    }

    /* End of Switch: '<S49>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2APM_FailureReason_FA' incorporates:
     *  Constant: '<S48>/Constant'
     *  RelationalOperator: '<S48>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2APM_FailureReason_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_lw) != 0);

    /* Switch: '<S49>/Switch' */
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

    /* End of Switch: '<S49>/Switch' */

    /* Chart: '<S51>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S54>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_ac) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_e5) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_ld) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_mk) & 7U) != 0U)))
    {
        /* Transition: '<S54>:191' */
        /* Transition: '<S54>:111' */
        /* Use Secondary */
        VeSRDB_b_APM_FailureType_RedundancyCmd = true;

        /* Transition: '<S54>:113' */
    }
    else
    {
        /* Transition: '<S54>:117' */
        /* Use Primary */
        VeSRDB_b_APM_FailureType_RedundancyCmd = false;
    }

    /* End of Chart: '<S51>/Chart' */

    /* Switch: '<S53>/Switch1' */
    /* Transition: '<S54>:107' */
    if (VeSRDB_b_APM_FailureType_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_ac = rtb_TmpSignalConversionAtVeS_mk;
    }

    /* End of Switch: '<S53>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2APM_FailureType_FA' incorporates:
     *  Constant: '<S52>/Constant'
     *  RelationalOperator: '<S52>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2APM_FailureType_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_ac) != 0);

    /* Switch: '<S53>/Switch' */
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

    /* End of Switch: '<S53>/Switch' */

    /* Chart: '<S55>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S58>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_pv) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_l3) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_fl) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_hv) & 7U) != 0U)))
    {
        /* Transition: '<S58>:191' */
        /* Transition: '<S58>:111' */
        /* Use Secondary */
        VeSRDB_b_APM_HV_V_Fbk_RedundancyCmd = true;

        /* Transition: '<S58>:113' */
    }
    else
    {
        /* Transition: '<S58>:117' */
        /* Use Primary */
        VeSRDB_b_APM_HV_V_Fbk_RedundancyCmd = false;
    }

    /* End of Chart: '<S55>/Chart' */

    /* Switch: '<S57>/Switch1' */
    /* Transition: '<S58>:107' */
    if (VeSRDB_b_APM_HV_V_Fbk_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_pv = rtb_TmpSignalConversionAtVeS_hv;
    }

    /* End of Switch: '<S57>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2APM_HVBatVlt_FA' incorporates:
     *  Constant: '<S56>/Constant'
     *  RelationalOperator: '<S56>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2APM_HVBatVlt_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_pv) != 0);

    /* Switch: '<S57>/Switch' */
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

    /* End of Switch: '<S57>/Switch' */

    /* Chart: '<S59>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S62>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_lua) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_cu) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_ht) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_ah) & 7U) != 0U)))
    {
        /* Transition: '<S62>:191' */
        /* Transition: '<S62>:111' */
        /* Use Secondary */
        VeSRDB_b_APM_LV_V_Fbk_RedundancyCmd = true;

        /* Transition: '<S62>:113' */
    }
    else
    {
        /* Transition: '<S62>:117' */
        /* Use Primary */
        VeSRDB_b_APM_LV_V_Fbk_RedundancyCmd = false;
    }

    /* End of Chart: '<S59>/Chart' */

    /* Switch: '<S61>/Switch1' */
    /* Transition: '<S62>:107' */
    if (VeSRDB_b_APM_LV_V_Fbk_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_lua = rtb_TmpSignalConversionAtVeS_ah;
    }

    /* End of Switch: '<S61>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2LV_BatVlt_FA' incorporates:
     *  Constant: '<S60>/Constant'
     *  RelationalOperator: '<S60>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2LV_BatVlt_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_lua) != 0);

    /* Switch: '<S61>/Switch' */
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

    /* End of Switch: '<S61>/Switch' */

    /* Chart: '<S63>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S66>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_ng) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_in) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_he) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeSR_o) & 7U) != 0U)))
    {
        /* Transition: '<S66>:191' */
        /* Transition: '<S66>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_CntctrsMidTrmOpeningWarn_RedundancyCmd = true;

        /* Transition: '<S66>:113' */
    }
    else
    {
        /* Transition: '<S66>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_CntctrsMidTrmOpeningWarn_RedundancyCmd = false;
    }

    /* End of Chart: '<S63>/Chart' */

    /* Switch: '<S65>/Switch1' */
    /* Transition: '<S66>:107' */
    if (VeSRDB_b_BPCM_CntctrsMidTrmOpeningWarn_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_ng = rtb_TmpSignalConversionAtVeSR_o;
    }

    /* End of Switch: '<S65>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrReq_FA' incorporates:
     *  Constant: '<S64>/Constant'
     *  RelationalOperator: '<S64>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrReq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_ng) != 0);

    /* Switch: '<S65>/Switch' */
    if (VeSRDB_b_BPCM_CntctrsMidTrmOpeningWarn_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrReq' incorporates:
         *  DataTypeConversion: '<S11>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrReq_Value
            (rtb_TmpSignalConversionAtVe_pwa);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrReq' incorporates:
         *  DataTypeConversion: '<S11>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrReq_Value
            (rtb_TmpSignalConversionAtVeS_oa);
    }

    /* End of Switch: '<S65>/Switch' */

    /* Chart: '<S67>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S70>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_iqs) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_mw) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_ds) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_an) & 7U) != 0U)))
    {
        /* Transition: '<S70>:191' */
        /* Transition: '<S70>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_CntctrsShtTrmOpeningWarn_RedundancyCmd = true;

        /* Transition: '<S70>:113' */
    }
    else
    {
        /* Transition: '<S70>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_CntctrsShtTrmOpeningWarn_RedundancyCmd = false;
    }

    /* End of Chart: '<S67>/Chart' */

    /* Switch: '<S69>/Switch1' */
    /* Transition: '<S70>:107' */
    if (VeSRDB_b_BPCM_CntctrsShtTrmOpeningWarn_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_iqs = rtb_TmpSignalConversionAtVeS_an;
    }

    /* End of Switch: '<S69>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrOpn_FA' incorporates:
     *  Constant: '<S68>/Constant'
     *  RelationalOperator: '<S68>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrOpn_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_iqs) != 0);

    /* Switch: '<S69>/Switch' */
    if (VeSRDB_b_BPCM_CntctrsShtTrmOpeningWarn_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrOpn' incorporates:
         *  DataTypeConversion: '<S12>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrOpn_Value
            (rtb_TmpSignalConversionAtVe_bi3);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrOpn' incorporates:
         *  DataTypeConversion: '<S12>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrOpn_Value
            (rtb_TmpSignalConversionAtVeS_pb);
    }

    /* End of Switch: '<S69>/Switch' */

    /* Chart: '<S71>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S74>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_pc) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVe_mr1) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVe_cet) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_bd) & 7U) != 0U)))
    {
        /* Transition: '<S74>:191' */
        /* Transition: '<S74>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_HV_Current_RedundancyCmd = true;

        /* Transition: '<S74>:113' */
    }
    else
    {
        /* Transition: '<S74>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_HV_Current_RedundancyCmd = false;
    }

    /* End of Chart: '<S71>/Chart' */

    /* Switch: '<S73>/Switch1' */
    /* Transition: '<S74>:107' */
    if (VeSRDB_b_BPCM_HV_Current_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_pc = rtb_TmpSignalConversionAtVeS_bd;
    }

    /* End of Switch: '<S73>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCrnt_FA' incorporates:
     *  Constant: '<S72>/Constant'
     *  RelationalOperator: '<S72>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatCrnt_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_pc) != 0);

    /* Switch: '<S73>/Switch' */
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

    /* End of Switch: '<S73>/Switch' */

    /* Chart: '<S75>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S78>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_o43) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_el) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_n3) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVe_dwm) & 7U) != 0U)))
    {
        /* Transition: '<S78>:191' */
        /* Transition: '<S78>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_HV_InternalVoltage_RedundancyCmd = true;

        /* Transition: '<S78>:113' */
    }
    else
    {
        /* Transition: '<S78>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_HV_InternalVoltage_RedundancyCmd = false;
    }

    /* End of Chart: '<S75>/Chart' */

    /* Switch: '<S77>/Switch1' */
    /* Transition: '<S78>:107' */
    if (VeSRDB_b_BPCM_HV_InternalVoltage_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_o43 = rtb_TmpSignalConversionAtVe_dwm;
    }

    /* End of Switch: '<S77>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatVlt_FA' incorporates:
     *  Constant: '<S76>/Constant'
     *  RelationalOperator: '<S76>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatVlt_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_o43) != 0);

    /* Switch: '<S77>/Switch' */
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

    /* End of Switch: '<S77>/Switch' */

    /* Chart: '<S79>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S82>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_dn) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVe_bcb) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_bx) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVe_o2l) & 7U) != 0U)))
    {
        /* Transition: '<S82>:191' */
        /* Transition: '<S82>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_HV_SOC_RedundancyCmd = true;

        /* Transition: '<S82>:113' */
    }
    else
    {
        /* Transition: '<S82>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_HV_SOC_RedundancyCmd = false;
    }

    /* End of Chart: '<S79>/Chart' */

    /* Switch: '<S81>/Switch1' */
    /* Transition: '<S82>:107' */
    if (VeSRDB_b_BPCM_HV_SOC_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_dn = rtb_TmpSignalConversionAtVe_o2l;
    }

    /* End of Switch: '<S81>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatSOC_FA' incorporates:
     *  Constant: '<S80>/Constant'
     *  RelationalOperator: '<S80>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatSOC_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_dn) != 0);

    /* Switch: '<S81>/Switch' */
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

    /* End of Switch: '<S81>/Switch' */

    /* Chart: '<S83>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S86>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_dm) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_f1) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_l4) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_ki) & 7U) != 0U)))
    {
        /* Transition: '<S86>:191' */
        /* Transition: '<S86>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_HV_Temperature_Max_RedundancyCmd = true;

        /* Transition: '<S86>:113' */
    }
    else
    {
        /* Transition: '<S86>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_HV_Temperature_Max_RedundancyCmd = false;
    }

    /* End of Chart: '<S83>/Chart' */

    /* Switch: '<S85>/Switch1' */
    /* Transition: '<S86>:107' */
    if (VeSRDB_b_BPCM_HV_Temperature_Max_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_dm = rtb_TmpSignalConversionAtVeS_ki;
    }

    /* End of Switch: '<S85>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatModTempMax_FA' incorporates:
     *  Constant: '<S84>/Constant'
     *  RelationalOperator: '<S84>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatModTempMax_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_dm) != 0);

    /* Switch: '<S85>/Switch' */
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

    /* End of Switch: '<S85>/Switch' */

    /* Chart: '<S87>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S90>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_mi2) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_fe) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_lz) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_do) & 7U) != 0U)))
    {
        /* Transition: '<S90>:191' */
        /* Transition: '<S90>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_HV_Temperature_Min_RedundancyCmd = true;

        /* Transition: '<S90>:113' */
    }
    else
    {
        /* Transition: '<S90>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_HV_Temperature_Min_RedundancyCmd = false;
    }

    /* End of Chart: '<S87>/Chart' */

    /* Switch: '<S89>/Switch1' */
    /* Transition: '<S90>:107' */
    if (VeSRDB_b_BPCM_HV_Temperature_Min_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_mi2 = rtb_TmpSignalConversionAtVeS_do;
    }

    /* End of Switch: '<S89>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatModTempMin_FA' incorporates:
     *  Constant: '<S88>/Constant'
     *  RelationalOperator: '<S88>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatModTempMin_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_mi2) != 0);

    /* Switch: '<S89>/Switch' */
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

    /* End of Switch: '<S89>/Switch' */

    /* Chart: '<S91>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S94>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_iz) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_kx) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_fx) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_nq) & 7U) != 0U)))
    {
        /* Transition: '<S94>:191' */
        /* Transition: '<S94>:111' */
        /* Use Secondary */
        VeSRDB_b_BPCM_HV_Trac_Bus_Sts_RedundancyCmd = true;

        /* Transition: '<S94>:113' */
    }
    else
    {
        /* Transition: '<S94>:117' */
        /* Use Primary */
        VeSRDB_b_BPCM_HV_Trac_Bus_Sts_RedundancyCmd = false;
    }

    /* End of Chart: '<S91>/Chart' */

    /* Switch: '<S93>/Switch1' */
    /* Transition: '<S94>:107' */
    if (VeSRDB_b_BPCM_HV_Trac_Bus_Sts_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_iz = rtb_TmpSignalConversionAtVeS_nq;
    }

    /* End of Switch: '<S93>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrStat_FA' incorporates:
     *  Constant: '<S92>/Constant'
     *  RelationalOperator: '<S92>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2HV_BatCntctrStat_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_iz) != 0);

    /* Switch: '<S93>/Switch' */
    if (VeSRDB_b_BPCM_HV_Trac_Bus_Sts_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2HV_BatCntctrStat' incorporates:
         *  DataTypeConversion: '<S18>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2HV_BatCntctrStat_Value((uint16)
            rtb_TmpSignalConversionAtVeS_ee);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2HV_BatCntctrStat' incorporates:
         *  DataTypeConversion: '<S18>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2HV_BatCntctrStat_Value((uint16)
            rtb_TmpSignalConversionAtVe_lx3);
    }

    /* End of Switch: '<S93>/Switch' */

    /* Chart: '<S95>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S98>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_mg) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_md) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVe_h1y) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_bm) & 7U) != 0U)))
    {
        /* Transition: '<S98>:191' */
        /* Transition: '<S98>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPA_HV_CnctrOpn_Req_P_RedundancyCmd = true;

        /* Transition: '<S98>:113' */
    }
    else
    {
        /* Transition: '<S98>:117' */
        /* Use Primary */
        VeSRDB_b_MCPA_HV_CnctrOpn_Req_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S95>/Chart' */

    /* Switch: '<S97>/Switch1' */
    /* Transition: '<S98>:107' */
    if (VeSRDB_b_MCPA_HV_CnctrOpn_Req_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_mg = rtb_TmpSignalConversionAtVeS_bm;
    }

    /* End of Switch: '<S97>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq_FA' incorporates:
     *  Constant: '<S96>/Constant'
     *  RelationalOperator: '<S96>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_mg) != 0);

    /* Switch: '<S97>/Switch' */
    if (VeSRDB_b_MCPA_HV_CnctrOpn_Req_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq' incorporates:
         *  DataTypeConversion: '<S20>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq_Value
            (rtb_TmpSignalConversionAtVeS_ni);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq' incorporates:
         *  DataTypeConversion: '<S20>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq_Value
            (rtb_TmpSignalConversionAtVe_ayu);
    }

    /* End of Switch: '<S97>/Switch' */

    /* Chart: '<S99>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S102>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_jn) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_ay) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_ja) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVe_e03) & 7U) != 0U)))
    {
        /* Transition: '<S102>:191' */
        /* Transition: '<S102>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPA_MaxTorq_P_RedundancyCmd = true;

        /* Transition: '<S102>:113' */
    }
    else
    {
        /* Transition: '<S102>:117' */
        /* Use Primary */
        VeSRDB_b_MCPA_MaxTorq_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S99>/Chart' */

    /* Switch: '<S101>/Switch1' */
    /* Transition: '<S102>:107' */
    if (VeSRDB_b_MCPA_MaxTorq_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_jn = rtb_TmpSignalConversionAtVe_e03;
    }

    /* End of Switch: '<S101>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_MaxTrq_FA' incorporates:
     *  Constant: '<S100>/Constant'
     *  RelationalOperator: '<S100>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrA_MaxTrq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_jn) != 0);

    /* Switch: '<S101>/Switch' */
    if (VeSRDB_b_MCPA_MaxTorq_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_MaxTrq' incorporates:
         *  DataTypeConversion: '<S21>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_MaxTrq_Value
            (rtb_TmpSignalConversionAtVeSR_g);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_MaxTrq' incorporates:
         *  DataTypeConversion: '<S21>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_MaxTrq_Value
            (rtb_TmpSignalConversionAtVeS_ke);
    }

    /* End of Switch: '<S101>/Switch' */

    /* Chart: '<S103>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S106>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_md1) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_ao) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_pw) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_by) & 7U) != 0U)))
    {
        /* Transition: '<S106>:191' */
        /* Transition: '<S106>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPA_MinTorq_P_RedundancyCmd = true;

        /* Transition: '<S106>:113' */
    }
    else
    {
        /* Transition: '<S106>:117' */
        /* Use Primary */
        VeSRDB_b_MCPA_MinTorq_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S103>/Chart' */

    /* Switch: '<S105>/Switch1' */
    /* Transition: '<S106>:107' */
    if (VeSRDB_b_MCPA_MinTorq_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_md1 = rtb_TmpSignalConversionAtVeS_by;
    }

    /* End of Switch: '<S105>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_MinTrq_FA' incorporates:
     *  Constant: '<S104>/Constant'
     *  RelationalOperator: '<S104>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrA_MinTrq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_md1) != 0);

    /* Switch: '<S105>/Switch' */
    if (VeSRDB_b_MCPA_MinTorq_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_MinTrq' incorporates:
         *  DataTypeConversion: '<S22>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_MinTrq_Value
            (rtb_TmpSignalConversionAtVeS_b0);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_MinTrq' incorporates:
         *  DataTypeConversion: '<S22>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_MinTrq_Value
            (rtb_TmpSignalConversionAtVeSR_e);
    }

    /* End of Switch: '<S105>/Switch' */

    /* Chart: '<S107>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S110>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_cxe) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_hp) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_pr) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_lk) & 7U) != 0U)))
    {
        /* Transition: '<S110>:191' */
        /* Transition: '<S110>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPA_RPM_P_RedundancyCmd = true;

        /* Transition: '<S110>:113' */
    }
    else
    {
        /* Transition: '<S110>:117' */
        /* Use Primary */
        VeSRDB_b_MCPA_RPM_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S107>/Chart' */

    /* Switch: '<S109>/Switch1' */
    /* Transition: '<S110>:107' */
    if (VeSRDB_b_MCPA_RPM_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_cxe = rtb_TmpSignalConversionAtVeS_lk;
    }

    /* End of Switch: '<S109>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_Spd_FA' incorporates:
     *  Constant: '<S108>/Constant'
     *  RelationalOperator: '<S108>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrA_Spd_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_cxe) != 0);

    /* Switch: '<S109>/Switch' */
    if (VeSRDB_b_MCPA_RPM_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_n_Lv2MtrA_Spd' incorporates:
         *  DataTypeConversion: '<S23>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_n_Lv2MtrA_Spd_Value
            (rtb_TmpSignalConversionAtVeSR_f);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_n_Lv2MtrA_Spd' incorporates:
         *  DataTypeConversion: '<S23>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_n_Lv2MtrA_Spd_Value
            (rtb_TmpSignalConversionAtVeSR_j);
    }

    /* End of Switch: '<S109>/Switch' */

    /* Chart: '<S111>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S114>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_ba) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_gh) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVe_mdi) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVe_ev1) & 7U) != 0U)))
    {
        /* Transition: '<S114>:191' */
        /* Transition: '<S114>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPA_RPM_V_P_RedundancyCmd = true;

        /* Transition: '<S114>:113' */
    }
    else
    {
        /* Transition: '<S114>:117' */
        /* Use Primary */
        VeSRDB_b_MCPA_RPM_V_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S111>/Chart' */

    /* Switch: '<S113>/Switch' */
    /* Transition: '<S114>:107' */
    if (VeSRDB_b_MCPA_RPM_V_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_Spd_Vld' incorporates:
         *  DataTypeConversion: '<S24>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrA_Spd_Vld_Value
            (rtb_TmpSignalConversionAtVe_nyc);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_Spd_Vld' incorporates:
         *  DataTypeConversion: '<S24>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrA_Spd_Vld_Value
            (rtb_TmpSignalConversionAtVe_bol);
    }

    /* End of Switch: '<S113>/Switch' */

    /* Chart: '<S115>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S118>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_icf) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_ie) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_az) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_cr) & 7U) != 0U)))
    {
        /* Transition: '<S118>:191' */
        /* Transition: '<S118>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPA_Temp_P_RedundancyCmd = true;

        /* Transition: '<S118>:113' */
    }
    else
    {
        /* Transition: '<S118>:117' */
        /* Use Primary */
        VeSRDB_b_MCPA_Temp_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S115>/Chart' */

    /* Switch: '<S117>/Switch1' */
    /* Transition: '<S118>:107' */
    if (VeSRDB_b_MCPA_Temp_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_icf = rtb_TmpSignalConversionAtVeS_cr;
    }

    /* End of Switch: '<S117>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MCPA_Temp_FA' incorporates:
     *  Constant: '<S116>/Constant'
     *  RelationalOperator: '<S116>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MCPA_Temp_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_icf) != 0);

    /* Switch: '<S117>/Switch' */
    if (VeSRDB_b_MCPA_Temp_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_T_Lv2MCPA_Temp' incorporates:
         *  DataTypeConversion: '<S25>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_T_Lv2MCPA_Temp_Value
            (rtb_TmpSignalConversionAtVeS_gd);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_T_Lv2MCPA_Temp' incorporates:
         *  DataTypeConversion: '<S25>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_T_Lv2MCPA_Temp_Value
            (rtb_TmpSignalConversionAtVeSR_n);
    }

    /* End of Switch: '<S117>/Switch' */

    /* Chart: '<S119>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S122>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_bf) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_py) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVe_bwm) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVe_d2i) & 7U) != 0U)))
    {
        /* Transition: '<S122>:191' */
        /* Transition: '<S122>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPA_TorqAchieved_AEMD_P_RedundancyCmd = true;

        /* Transition: '<S122>:113' */
    }
    else
    {
        /* Transition: '<S122>:117' */
        /* Use Primary */
        VeSRDB_b_MCPA_TorqAchieved_AEMD_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S119>/Chart' */

    /* Switch: '<S121>/Switch1' */
    /* Transition: '<S122>:107' */
    if (VeSRDB_b_MCPA_TorqAchieved_AEMD_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_bf = rtb_TmpSignalConversionAtVe_d2i;
    }

    /* End of Switch: '<S121>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_TrqAchieved_FA' incorporates:
     *  Constant: '<S120>/Constant'
     *  RelationalOperator: '<S120>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrA_TrqAchieved_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_bf) != 0);

    /* Switch: '<S121>/Switch' */
    if (VeSRDB_b_MCPA_TorqAchieved_AEMD_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_TrqAchieved' incorporates:
         *  DataTypeConversion: '<S26>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_TrqAchieved_Value
            (rtb_TmpSignalConversionAtVeSR_l);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_TrqAchieved' incorporates:
         *  DataTypeConversion: '<S26>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_TrqAchieved_Value
            (rtb_TmpSignalConversionAtVeS_aa);
    }

    /* End of Switch: '<S121>/Switch' */

    /* Chart: '<S123>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S126>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_h5) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_od) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVe_ems) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_nh) & 7U) != 0U)))
    {
        /* Transition: '<S126>:191' */
        /* Transition: '<S126>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPA_TorqAchieved_AEMD_V_P_RedundancyCmd = true;

        /* Transition: '<S126>:113' */
    }
    else
    {
        /* Transition: '<S126>:117' */
        /* Use Primary */
        VeSRDB_b_MCPA_TorqAchieved_AEMD_V_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S123>/Chart' */

    /* Switch: '<S125>/Switch' */
    /* Transition: '<S126>:107' */
    if (VeSRDB_b_MCPA_TorqAchieved_AEMD_V_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_TrqAchieved_Vld' incorporates:
         *  DataTypeConversion: '<S27>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrA_TrqAchieved_Vld_Value
            (rtb_TmpSignalConversionAtVeS_mz);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_TrqAchieved_Vld' incorporates:
         *  DataTypeConversion: '<S27>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrA_TrqAchieved_Vld_Value
            (rtb_TmpSignalConversionAtVe_ml4);
    }

    /* End of Switch: '<S125>/Switch' */

    /* Chart: '<S127>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S130>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_ec) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_fr) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_es) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_cz) & 7U) != 0U)))
    {
        /* Transition: '<S130>:191' */
        /* Transition: '<S130>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPA_Torque_Achieved_P_RedundancyCmd = true;

        /* Transition: '<S130>:113' */
    }
    else
    {
        /* Transition: '<S130>:117' */
        /* Use Primary */
        VeSRDB_b_MCPA_Torque_Achieved_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S127>/Chart' */

    /* Switch: '<S129>/Switch1' */
    /* Transition: '<S130>:107' */
    if (VeSRDB_b_MCPA_Torque_Achieved_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_ec = rtb_TmpSignalConversionAtVeS_cz;
    }

    /* End of Switch: '<S129>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_TrqAchieved_NoAEMD_FA' incorporates:
     *  Constant: '<S128>/Constant'
     *  RelationalOperator: '<S128>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrA_TrqAchieved_NoAEMD_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_ec) != 0);

    /* Switch: '<S129>/Switch' */
    if (VeSRDB_b_MCPA_Torque_Achieved_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_TrqAchieved_NoAEMD' incorporates:
         *  DataTypeConversion: '<S28>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_TrqAchieved_NoAEMD_Value
            (rtb_TmpSignalConversionAtVeS_f3);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrA_TrqAchieved_NoAEMD' incorporates:
         *  DataTypeConversion: '<S28>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrA_TrqAchieved_NoAEMD_Value
            (rtb_TmpSignalConversionAtVeS_dd);
    }

    /* End of Switch: '<S129>/Switch' */

    /* Chart: '<S131>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S134>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_ae) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_kc) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_iw) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_ow) & 7U) != 0U)))
    {
        /* Transition: '<S134>:191' */
        /* Transition: '<S134>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPA_Torque_Achieved_V_P_RedundancyCmd = true;

        /* Transition: '<S134>:113' */
    }
    else
    {
        /* Transition: '<S134>:117' */
        /* Use Primary */
        VeSRDB_b_MCPA_Torque_Achieved_V_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S131>/Chart' */

    /* Switch: '<S133>/Switch' */
    /* Transition: '<S134>:107' */
    if (VeSRDB_b_MCPA_Torque_Achieved_V_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_TrqAchieved_NoAEMD_Vld' incorporates:
         *  DataTypeConversion: '<S29>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrA_TrqAchieved_NoAEMD_Vld_Value
            (rtb_TmpSignalConversionAtVeS_jc);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrA_TrqAchieved_NoAEMD_Vld' incorporates:
         *  DataTypeConversion: '<S29>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrA_TrqAchieved_NoAEMD_Vld_Value
            (rtb_TmpSignalConversionAtVe_ake);
    }

    /* End of Switch: '<S133>/Switch' */

    /* Chart: '<S135>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S138>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_dc) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_af) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_ga) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_jy) & 7U) != 0U)))
    {
        /* Transition: '<S138>:191' */
        /* Transition: '<S138>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPB_HV_CnctrOpn_Req_P_RedundancyCmd = true;

        /* Transition: '<S138>:113' */
    }
    else
    {
        /* Transition: '<S138>:117' */
        /* Use Primary */
        VeSRDB_b_MCPB_HV_CnctrOpn_Req_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S135>/Chart' */

    /* Switch: '<S137>/Switch1' */
    /* Transition: '<S138>:107' */
    if (VeSRDB_b_MCPB_HV_CnctrOpn_Req_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_dc = rtb_TmpSignalConversionAtVeS_jy;
    }

    /* End of Switch: '<S137>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq_FA' incorporates:
     *  Constant: '<S136>/Constant'
     *  RelationalOperator: '<S136>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_dc) != 0);

    /* Switch: '<S137>/Switch' */
    if (VeSRDB_b_MCPB_HV_CnctrOpn_Req_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq' incorporates:
         *  DataTypeConversion: '<S30>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq_Value
            (rtb_TmpSignalConversionAtVeS_kp);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq' incorporates:
         *  DataTypeConversion: '<S30>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq_Value
            (rtb_TmpSignalConversionAtVeS_ma);
    }

    /* End of Switch: '<S137>/Switch' */

    /* Chart: '<S139>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S142>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_f2) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_h2) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_cl) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_et) & 7U) != 0U)))
    {
        /* Transition: '<S142>:191' */
        /* Transition: '<S142>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPB_MaxTorq_P_RedundancyCmd = true;

        /* Transition: '<S142>:113' */
    }
    else
    {
        /* Transition: '<S142>:117' */
        /* Use Primary */
        VeSRDB_b_MCPB_MaxTorq_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S139>/Chart' */

    /* Switch: '<S141>/Switch1' */
    /* Transition: '<S142>:107' */
    if (VeSRDB_b_MCPB_MaxTorq_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_f2 = rtb_TmpSignalConversionAtVeS_et;
    }

    /* End of Switch: '<S141>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_MaxTrq_FA' incorporates:
     *  Constant: '<S140>/Constant'
     *  RelationalOperator: '<S140>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrB_MaxTrq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_f2) != 0);

    /* Switch: '<S141>/Switch' */
    if (VeSRDB_b_MCPB_MaxTorq_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_MaxTrq' incorporates:
         *  DataTypeConversion: '<S31>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_MaxTrq_Value
            (rtb_TmpSignalConversionAtVeS_g4);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_MaxTrq' incorporates:
         *  DataTypeConversion: '<S31>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_MaxTrq_Value
            (rtb_TmpSignalConversionAtVeSR_c);
    }

    /* End of Switch: '<S141>/Switch' */

    /* Chart: '<S143>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S146>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_m4) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_bo) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVe_afi) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_e0) & 7U) != 0U)))
    {
        /* Transition: '<S146>:191' */
        /* Transition: '<S146>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPB_MinTorq_P_RedundancyCmd = true;

        /* Transition: '<S146>:113' */
    }
    else
    {
        /* Transition: '<S146>:117' */
        /* Use Primary */
        VeSRDB_b_MCPB_MinTorq_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S143>/Chart' */

    /* Switch: '<S145>/Switch1' */
    /* Transition: '<S146>:107' */
    if (VeSRDB_b_MCPB_MinTorq_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_m4 = rtb_TmpSignalConversionAtVeS_e0;
    }

    /* End of Switch: '<S145>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_MinTrq_FA' incorporates:
     *  Constant: '<S144>/Constant'
     *  RelationalOperator: '<S144>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrB_MinTrq_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_m4) != 0);

    /* Switch: '<S145>/Switch' */
    if (VeSRDB_b_MCPB_MinTorq_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_MinTrq' incorporates:
         *  DataTypeConversion: '<S32>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_MinTrq_Value
            (rtb_TmpSignalConversionAtVeSR_p);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_MinTrq' incorporates:
         *  DataTypeConversion: '<S32>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_MinTrq_Value
            (rtb_TmpSignalConversionAtVeS_f0);
    }

    /* End of Switch: '<S145>/Switch' */

    /* Chart: '<S147>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S150>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_bnf) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_hu) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_jj) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_ju) & 7U) != 0U)))
    {
        /* Transition: '<S150>:191' */
        /* Transition: '<S150>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPB_MtrIndex_P_RedundancyCmd = true;

        /* Transition: '<S150>:113' */
    }
    else
    {
        /* Transition: '<S150>:117' */
        /* Use Primary */
        VeSRDB_b_MCPB_MtrIndex_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S147>/Chart' */

    /* Switch: '<S149>/Switch1' */
    /* Transition: '<S150>:107' */
    if (VeSRDB_b_MCPB_MtrIndex_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_bnf = rtb_TmpSignalConversionAtVeS_ju;
    }

    /* End of Switch: '<S149>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MCPB_MtrIndex_P_FA' incorporates:
     *  Constant: '<S148>/Constant'
     *  RelationalOperator: '<S148>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MCPB_MtrIndex_P_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_bnf) != 0);

    /* Switch: '<S149>/Switch' */
    if (VeSRDB_b_MCPB_MtrIndex_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_y_Lv2MCPB_MtrIndex_P' incorporates:
         *  DataTypeConversion: '<S33>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_y_Lv2MCPB_MtrIndex_P_Value((uint16)
            rtb_TmpSignalConversionAtVeS_nx);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_y_Lv2MCPB_MtrIndex_P' incorporates:
         *  DataTypeConversion: '<S33>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_y_Lv2MCPB_MtrIndex_P_Value((uint16)
            rtb_TmpSignalConversionAtVe_lsb);
    }

    /* End of Switch: '<S149>/Switch' */

    /* Chart: '<S151>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S154>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_p4) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_fk) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_i1) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_it) & 7U) != 0U)))
    {
        /* Transition: '<S154>:191' */
        /* Transition: '<S154>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPB_RPM_P_RedundancyCmd = true;

        /* Transition: '<S154>:113' */
    }
    else
    {
        /* Transition: '<S154>:117' */
        /* Use Primary */
        VeSRDB_b_MCPB_RPM_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S151>/Chart' */

    /* Switch: '<S153>/Switch1' */
    /* Transition: '<S154>:107' */
    if (VeSRDB_b_MCPB_RPM_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_p4 = rtb_TmpSignalConversionAtVeS_it;
    }

    /* End of Switch: '<S153>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_Spd_FA' incorporates:
     *  Constant: '<S152>/Constant'
     *  RelationalOperator: '<S152>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrB_Spd_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_p4) != 0);

    /* Switch: '<S153>/Switch' */
    if (VeSRDB_b_MCPB_RPM_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_n_Lv2MtrB_Spd' incorporates:
         *  DataTypeConversion: '<S34>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_n_Lv2MtrB_Spd_Value
            (rtb_TmpSignalConversionAtVeS_ih);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_n_Lv2MtrB_Spd' incorporates:
         *  DataTypeConversion: '<S34>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_n_Lv2MtrB_Spd_Value
            (rtb_TmpSignalConversionAtVeS_ce);
    }

    /* End of Switch: '<S153>/Switch' */

    /* Chart: '<S155>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S158>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_gzb) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVe_egt) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_k2) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_fa) & 7U) != 0U)))
    {
        /* Transition: '<S158>:191' */
        /* Transition: '<S158>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPB_RPM_V_P_RedundancyCmd = true;

        /* Transition: '<S158>:113' */
    }
    else
    {
        /* Transition: '<S158>:117' */
        /* Use Primary */
        VeSRDB_b_MCPB_RPM_V_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S155>/Chart' */

    /* Switch: '<S157>/Switch' */
    /* Transition: '<S158>:107' */
    if (VeSRDB_b_MCPB_RPM_V_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_Spd_Vld' incorporates:
         *  DataTypeConversion: '<S35>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrB_Spd_Vld_Value
            (rtb_TmpSignalConversionAtVeS_ln);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_Spd_Vld' incorporates:
         *  DataTypeConversion: '<S35>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrB_Spd_Vld_Value
            (rtb_TmpSignalConversionAtVeS_mh);
    }

    /* End of Switch: '<S157>/Switch' */

    /* Chart: '<S159>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S162>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_g3) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_lf) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_pz) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_dy) & 7U) != 0U)))
    {
        /* Transition: '<S162>:191' */
        /* Transition: '<S162>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPB_Temp_P_RedundancyCmd = true;

        /* Transition: '<S162>:113' */
    }
    else
    {
        /* Transition: '<S162>:117' */
        /* Use Primary */
        VeSRDB_b_MCPB_Temp_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S159>/Chart' */

    /* Switch: '<S161>/Switch1' */
    /* Transition: '<S162>:107' */
    if (VeSRDB_b_MCPB_Temp_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_g3 = rtb_TmpSignalConversionAtVeS_dy;
    }

    /* End of Switch: '<S161>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MCPB_Temp_FA' incorporates:
     *  Constant: '<S160>/Constant'
     *  RelationalOperator: '<S160>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MCPB_Temp_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_g3) != 0);

    /* Switch: '<S161>/Switch' */
    if (VeSRDB_b_MCPB_Temp_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_T_Lv2MCPB_Temp' incorporates:
         *  DataTypeConversion: '<S36>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_T_Lv2MCPB_Temp_Value
            (rtb_TmpSignalConversionAtVeS_go);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_T_Lv2MCPB_Temp' incorporates:
         *  DataTypeConversion: '<S36>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_T_Lv2MCPB_Temp_Value
            (rtb_TmpSignalConversionAtVeS_ik);
    }

    /* End of Switch: '<S161>/Switch' */

    /* Chart: '<S163>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S166>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_fw) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_gw) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_gy) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_ph) & 7U) != 0U)))
    {
        /* Transition: '<S166>:191' */
        /* Transition: '<S166>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPB_TorqAchieved_AEMD_P_RedundancyCmd = true;

        /* Transition: '<S166>:113' */
    }
    else
    {
        /* Transition: '<S166>:117' */
        /* Use Primary */
        VeSRDB_b_MCPB_TorqAchieved_AEMD_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S163>/Chart' */

    /* Switch: '<S165>/Switch1' */
    /* Transition: '<S166>:107' */
    if (VeSRDB_b_MCPB_TorqAchieved_AEMD_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVeS_fw = rtb_TmpSignalConversionAtVeS_ph;
    }

    /* End of Switch: '<S165>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_TrqAchieved_FA' incorporates:
     *  Constant: '<S164>/Constant'
     *  RelationalOperator: '<S164>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrB_TrqAchieved_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVeS_fw) != 0);

    /* Switch: '<S165>/Switch' */
    if (VeSRDB_b_MCPB_TorqAchieved_AEMD_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_TrqAchieved' incorporates:
         *  DataTypeConversion: '<S37>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_TrqAchieved_Value
            (rtb_TmpSignalConversionAtVeS_nb);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_TrqAchieved' incorporates:
         *  DataTypeConversion: '<S37>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_TrqAchieved_Value
            (rtb_TmpSignalConversionAtVeS_m3);
    }

    /* End of Switch: '<S165>/Switch' */

    /* Chart: '<S167>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S170>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVeS_mt) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_hy) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_dp) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_kh) & 7U) != 0U)))
    {
        /* Transition: '<S170>:191' */
        /* Transition: '<S170>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPB_TorqAchieved_AEMD_V_P_RedundancyCmd = true;

        /* Transition: '<S170>:113' */
    }
    else
    {
        /* Transition: '<S170>:117' */
        /* Use Primary */
        VeSRDB_b_MCPB_TorqAchieved_AEMD_V_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S167>/Chart' */

    /* Switch: '<S169>/Switch' */
    /* Transition: '<S170>:107' */
    if (VeSRDB_b_MCPB_TorqAchieved_AEMD_V_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_TrqAchieved_Vld' incorporates:
         *  DataTypeConversion: '<S38>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrB_TrqAchieved_Vld_Value
            (rtb_TmpSignalConversionAtVeS_hk);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_TrqAchieved_Vld' incorporates:
         *  DataTypeConversion: '<S38>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_b_Lv2MtrB_TrqAchieved_Vld_Value
            (rtb_TmpSignalConversionAtVe_mlv);
    }

    /* End of Switch: '<S169>/Switch' */

    /* Chart: '<S171>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S174>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_a1q) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_bi) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_mm) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_ge) & 7U) != 0U)))
    {
        /* Transition: '<S174>:191' */
        /* Transition: '<S174>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPB_Torque_Achieved_P_RedundancyCmd = true;

        /* Transition: '<S174>:113' */
    }
    else
    {
        /* Transition: '<S174>:117' */
        /* Use Primary */
        VeSRDB_b_MCPB_Torque_Achieved_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S171>/Chart' */

    /* Switch: '<S173>/Switch1' */
    /* Transition: '<S174>:107' */
    if (VeSRDB_b_MCPB_Torque_Achieved_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_a1q = rtb_TmpSignalConversionAtVeS_ge;
    }

    /* End of Switch: '<S173>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_TrqAchieved_NoAEMD_FA' incorporates:
     *  Constant: '<S172>/Constant'
     *  RelationalOperator: '<S172>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrB_TrqAchieved_NoAEMD_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_a1q) != 0);

    /* Switch: '<S173>/Switch' */
    if (VeSRDB_b_MCPB_Torque_Achieved_P_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_TrqAchieved_NoAEMD' incorporates:
         *  DataTypeConversion: '<S39>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_TrqAchieved_NoAEMD_Value
            (rtb_TmpSignalConversionAtVeS_at);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_M_Lv2MtrB_TrqAchieved_NoAEMD' incorporates:
         *  DataTypeConversion: '<S39>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_M_Lv2MtrB_TrqAchieved_NoAEMD_Value
            (rtb_TmpSignalConversionAtVeS_dr);
    }

    /* End of Switch: '<S173>/Switch' */

    /* Chart: '<S175>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S178>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_acz) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_jk) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_gv) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVe_cpr) & 7U) != 0U)))
    {
        /* Transition: '<S178>:191' */
        /* Transition: '<S178>:111' */
        /* Use Secondary */
        VeSRDB_b_MCPB_Torque_Achieved_V_P_RedundancyCmd = true;

        /* Transition: '<S178>:113' */
    }
    else
    {
        /* Transition: '<S178>:117' */
        /* Use Primary */
        VeSRDB_b_MCPB_Torque_Achieved_V_P_RedundancyCmd = false;
    }

    /* End of Chart: '<S175>/Chart' */

    /* Switch: '<S177>/Switch' */
    /* Transition: '<S178>:107' */
    if (VeSRDB_b_MCPB_Torque_Achieved_V_P_RedundancyCmd)
    {
        /* RelationalOperator: '<S184>/Compare' */
        rtb_Compare = rtb_TmpSignalConversionAtVeS_o1;
    }
    else
    {
        /* RelationalOperator: '<S184>/Compare' */
        rtb_Compare = rtb_TmpSignalConversionAtVeS_gr;
    }

    /* End of Switch: '<S177>/Switch' */

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrB_TrqAchieved_NoAEMD_Vld' incorporates:
     *  DataTypeConversion: '<S40>/Data Type Conversion'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrB_TrqAchieved_NoAEMD_Vld_Value(rtb_Compare);

    /* Chart: '<S179>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     */
    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S182>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_kfd) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_ev) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_a4) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVeS_lp) & 7U) != 0U)))
    {
        /* Transition: '<S182>:191' */
        /* Transition: '<S182>:111' */
        /* Use Secondary */
        VeSRDB_b_ProximitySts_RedundancyCmd = true;

        /* Transition: '<S182>:113' */
    }
    else
    {
        /* Transition: '<S182>:117' */
        /* Use Primary */
        VeSRDB_b_ProximitySts_RedundancyCmd = false;
    }

    /* End of Chart: '<S179>/Chart' */

    /* Switch: '<S181>/Switch1' */
    /* Transition: '<S182>:107' */
    if (VeSRDB_b_ProximitySts_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_kfd = rtb_TmpSignalConversionAtVeS_lp;
    }

    /* End of Switch: '<S181>/Switch1' */

    /* Outport: '<Root>/VeSCMR_b_Lv2ProxStat_FA' incorporates:
     *  Constant: '<S180>/Constant'
     *  RelationalOperator: '<S180>/Compare'
     */
    (void)Rte_Write_VeSCMR_b_Lv2ProxStat_FA_Value(((sint32)
        rtb_TmpSignalConversionAtVe_kfd) != 0);

    /* Switch: '<S181>/Switch' */
    if (VeSRDB_b_ProximitySts_RedundancyCmd)
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2ProxStat' incorporates:
         *  DataTypeConversion: '<S41>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2ProxStat_Value((TeGSMR_e_ProxStat)
            rtb_TmpSignalConversionAtVeS_oj);
    }
    else
    {
        /* Outport: '<Root>/VeSCMR_e_Lv2ProxStat' incorporates:
         *  DataTypeConversion: '<S41>/Data Type Conversion'
         */
        (void)Rte_Write_VeSCMR_e_Lv2ProxStat_Value((TeGSMR_e_ProxStat)
            rtb_TmpSignalConversionAtVeS_pm);
    }

    /* End of Switch: '<S181>/Switch' */

    /* Chart: '<S183>/Chart' incorporates:
     *  Constant: '<S19>/Calib'
     *  RelationalOperator: '<S184>/Compare'
     *  Switch: '<S185>/Switch'
     *  Switch: '<S185>/Switch1'
     */
#if Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq || Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq_FA

    /* Gateway: ArbtrLogic_Redundancy_Protected/Chart */
    /* During: ArbtrLogic_Redundancy_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Redundancy_Protected/Chart */
    /* Transition: '<S186>:99' */
    /*  Below conditions should be TRUE to switch to the Secondary:
       1. Redundancy is Enabled
       2. Confirmed issue on the Primary or no information received from the Primary
       3. Information is available from Secondary (Confirmed issue on the Secondary or error status is different from RTE NEVER Received on Secondary) */
    if (((KeSRDB_b_RedundancyEnbl) && (((((uint32)
             rtb_TmpSignalConversionAtVe_p0d) & 7U) != 0U) || (((sint32)
            rtb_TmpSignalConversionAtVeS_il) == 133))) && ((((sint32)
            rtb_TmpSignalConversionAtVeS_hc) != 133) || ((((uint32)
            rtb_TmpSignalConversionAtVe_lsn) & 7U) != 0U)))
    {
        /* Transition: '<S186>:191' */
        /* Transition: '<S186>:111' */
        /* Use Secondary */
        VeSRDB_b_SGCP_HV_CnctrOpn_Req_P_RedundancyCmd = true;

        /* Transition: '<S186>:113' */
    }
    else
    {
        /* Transition: '<S186>:117' */
        /* Use Primary */
        VeSRDB_b_SGCP_HV_CnctrOpn_Req_P_RedundancyCmd = false;
    }

    /* Transition: '<S186>:107' */
    if (VeSRDB_b_SGCP_HV_CnctrOpn_Req_P_RedundancyCmd)
    {
        rtb_TmpSignalConversionAtVe_p0d = rtb_TmpSignalConversionAtVe_lsn;

        /* DataTypeConversion: '<S42>/Data Type Conversion' */
        rtb_DataTypeConversion = rtb_TmpSignalConversionAtVeS_cf;
    }
    else
    {
        /* DataTypeConversion: '<S42>/Data Type Conversion' */
        rtb_DataTypeConversion = rtb_TmpSignalConversionAtVeS_po;
    }

    /* RelationalOperator: '<S184>/Compare' incorporates:
     *  Constant: '<S184>/Constant'
     *  Constant: '<S19>/Calib'
     */
    rtb_Compare = (((sint32)rtb_TmpSignalConversionAtVe_p0d) != 0);

#endif

    /* End of Chart: '<S183>/Chart' */

    /* SignalConversion generated from: '<S5>/Variant Source8' */
#if Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrCFlt_HV_CntctrOpnRq' */
    (void)Rte_Write_VeSCMR_b_Lv2MtrCFlt_HV_CntctrOpnRq_Value
        (rtb_DataTypeConversion);

#else

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrCFlt_HV_CntctrOpnRq' incorporates:
     *  Constant: '<S5>/Constant8'
     *  SignalConversion generated from: '<S5>/Variant Source8'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrCFlt_HV_CntctrOpnRq_Value(false);

#endif

    /* End of SignalConversion generated from: '<S5>/Variant Source8' */

    /* SignalConversion generated from: '<S5>/Variant Source9' */
#if Rte_SysCon_VrntSRDB_SGCPHVCnctrOpnReqPVeSCMRLv2MtrCFlt_HVCntctrOpnRq_FA

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrCFlt_HV_CntctrOpnRq_FA' */
    (void)Rte_Write_VeSCMR_b_Lv2MtrCFlt_HV_CntctrOpnRq_FA_Value(rtb_Compare);

#else

    /* Outport: '<Root>/VeSCMR_b_Lv2MtrCFlt_HV_CntctrOpnRq_FA' incorporates:
     *  Constant: '<S5>/Constant9'
     *  SignalConversion generated from: '<S5>/Variant Source9'
     */
    (void)Rte_Write_VeSCMR_b_Lv2MtrCFlt_HV_CntctrOpnRq_FA_Value(false);

#endif

    /* End of SignalConversion generated from: '<S5>/Variant Source9' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */

    /* Outputs for Atomic SubSystem: '<S2>/SRDB_FUNC_FastTEF_StopCheckpoint' */
    /* FunctionCaller: '<S4>/SRDB_FUNC_FastTEF_StopCheckpoint ' */
    Rte_Call_SRDB_FUNC_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S2>/SRDB_FUNC_FastTEF_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, SRDB_FUNC_CODE) SRDB_FUNC_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
