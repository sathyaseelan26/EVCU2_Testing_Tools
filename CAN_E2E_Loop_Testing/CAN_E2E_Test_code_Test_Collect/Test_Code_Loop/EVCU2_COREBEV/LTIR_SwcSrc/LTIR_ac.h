/*
 * File: LTIR_ac.h
 *
 * Code generated for Simulink model 'LTIR_ac'.
 *
 * Model version                  : 9.1079
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:28:34 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LTIR_ac_h_
#define RTW_HEADER_LTIR_ac_h_
#include "Rte_Type.h"
#ifndef LTIR_ac_COMMON_INCLUDES_
#define LTIR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_LTIR.h"
#endif                                 /* LTIR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* MW_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */
#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_LTIR_Enbl_BRAIN
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_LTIR_Enbl_P2GEN4
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source', 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source12', 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source3', 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source36' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_LTIR_ACC_WhlTrqEnbld_CANC
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_LTIR_Enbl_CADM
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source1' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source1'"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_LTIR_Enbl_CADM
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_LTIR_Enbl_P2GEN4
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source10' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source10'"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_LTIR_ACC_Eng_CANC
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_LTIR_Enbl_BRAIN
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source11' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source11'"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_LTIR_Enbl_BLUEN
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_LTIR_Enbl_P2GEN4
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source2', 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source35', 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source4', 'LTIR_ac/LTIR_FastTEF/LTIC/VariantSource7' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source2' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_LTIR_Enbl_BLUEN
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_LTIR_Enbl_ESM
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source54', 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source55' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source54' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_LTIR_Enbl_CANC2
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_LTIR_Enbl_P2GEN4
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source57' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source57'"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_LTIR_Enbl_EPT
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_LTIR_Enbl_P2GEN4
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source9' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'LTIR_ac/LTIR_FastTEF/LTIC/Variant Source9'"
#endif

/* MW_END_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_LTIR_ac_T
{
    float32 OutportBufferForVeLTIR_M_Lv2Mtr;/* '<S167>/Constant1' */
    float32 OutportBufferForVeLTIR_Pct_Lv2B;/* '<S167>/Constant15' */
    float32 OutportBufferForVeLTIR_M_Lv2Brk;/* '<S167>/Constant17' */
    float32 OutportBufferForVeLTIR_M_Lv2B_b;/* '<S167>/Constant18' */
    float32 OutportBufferForVeLTIR_p_Lv2Bra;/* '<S167>/Constant25' */
    float32 OutportBufferForVeLTIR_n_Lv2Whl;/* '<S167>/Constant27' */
    float32 OutportBufferForVeLTIR_n_Lv2W_o;/* '<S167>/Constant28' */
    float32 VariantMerge_For_Variant_Source;
    float32 VariantMerge_For_Variant_Sour_g;
    float32 VariantMerge_For_Variant_Sour_a;
    float32 VariantMerge_For_Variant_Sou_gs;
    float32 VariantMerge_For_Variant_Sour_c;
    float32 VariantMerge_For_Variant_Sou_a4;
    uint16 OutportBufferForVeLTIR_e_Lv2Brk;/* '<S167>/Constant26' */
    uint16 VariantMerge_For_Variant_Sour_j;
    boolean OutportBufferForVeLTIR_b_Lv2Key;/* '<S167>/Const2' */
    boolean OutportBufferForVeLTIR_b_Lv2Mtr;/* '<S167>/Const6' */
    boolean OutportBufferForVeLTIR_b_Lv2Veh;/* '<S167>/Const7' */
    boolean OutportBufferForVeLTIR_b_Lv2V_l;/* '<S167>/Const8' */
    boolean OutportBufferForVeLTIR_b_Lv2M_f;/* '<S167>/Const9' */
    boolean OutportBufferForVeLTIR_b_Lv2LV_;/* '<S167>/Const10' */
    boolean OutportBufferForVeLTIR_b_Lv2HV_;/* '<S167>/Const11' */
    boolean OutportBufferForVeLTIR_b_Lv2H_m;/* '<S167>/Const12' */
    boolean OutportBufferForVeLTIR_b_Lv2H_e;/* '<S167>/Const13' */
    boolean OutportBufferForVeLTIR_b_Lv2H_l;/* '<S167>/Const14' */
    boolean OutportBufferForVeLTIR_b_Lv2Drv;/* '<S167>/Const15' */
    boolean OutportBufferForVeLTIR_b_Lv2Brk;/* '<S167>/Const16' */
    boolean OutportBufferForVeLTIR_b_OPDHol;/* '<S167>/Const17' */
    boolean OutportBufferForVeLTIR_b_Lv2Rgn;/* '<S167>/Const18' */
    boolean OutportBufferForVeLTIR_b_ESCInt;/* '<S167>/Const19' */
    boolean OutportBufferForVeLTIR_b_WhlTrq;/* '<S167>/Const20' */
    boolean OutportBufferForVeLTIR_b_CmndTo;/* '<S167>/Const21' */
    boolean OutportBufferForVeLTIR_b_DrvrIn;/* '<S167>/Const22' */
    boolean OutportBufferForVeLTIR_b_DriveS;/* '<S167>/Const23' */
    boolean OutportBufferForVeLTIR_b_AeCoas;/* '<S167>/Const24' */
    boolean OutportBufferForVeLTIR_b_Lv2B_l;/* '<S167>/Const25' */
    boolean OutportBufferForVeLTIR_b_Lv2ACC;/* '<S167>/Const26' */
    boolean OutportBufferForVeLTIR_b_Lv2Whl;/* '<S167>/Const27' */
    boolean OutportBufferForVeLTIR_b_Lv2W_o;/* '<S167>/Const28' */
    boolean OutportBufferForVeLTIR_b_Lv2W_g;/* '<S167>/Const29' */
    boolean OutportBufferForVeLTIR_b_Lv2_oe;/* '<S167>/Const30' */
    boolean OutportBufferForVeLTIR_b_Lv2Spe;/* '<S167>/Const32' */
    boolean OutportBufferForVeLTIR_b_Lv2SCC;/* '<S167>/Const33' */
    boolean OutportBufferForVeLTIR_b_Lv2D_l;/* '<S167>/Const34' */
    boolean OutportBufferForVeLTIR_b_Lv2B_h;/* '<S167>/Const35' */
    boolean OutportBufferForVeLTIR_b_Lv2B_b;/* '<S167>/Const36' */
    boolean OutportBufferForVeLTIR_b_Lv2B_i;/* '<S167>/Const37' */
    boolean OutportBufferForVeLTIR_b_Lv2W_f;/* '<S167>/Const38' */
    boolean OutportBufferForVeLTIR_b_Lv2W_m;/* '<S167>/Const39' */
    boolean OutportBufferForVeLTIR_b_Lv2W_h;/* '<S167>/Const40' */
    boolean OutportBufferForVeLTIR_b_Lv2W_k;/* '<S167>/Const41' */
    boolean OutportBufferForVeLTIR_b_Lv2EPB;/* '<S167>/Const42' */
    boolean OutportBufferForVeLTIR_b_Lv2A_c;/* '<S167>/Const43' */
    boolean OutportBufferForVeLTIR_b_Lv2APM;/* '<S167>/Const44' */
    boolean OutportBufferForVeLTIR_b_Lv2_em;/* '<S167>/Const45' */
    boolean OutportBufferForVeLTIR_b_Lv2H_o;/* '<S167>/Const46' */
    boolean OutportBufferForVeLTIR_b_Lv2M_p;/* '<S167>/Const47' */
    boolean OutportBufferForVeLTIR_b_Lv2M_l;/* '<S167>/Const48' */
    boolean OutportBufferForVeLTIR_b_Lv2MCP;/* '<S167>/Const49' */
    boolean OutportBufferForVeLTIR_b_Lv2_lp;/* '<S167>/Const50' */
    boolean OutportBufferForVeLTIR_b_Lv2M_g;/* '<S167>/Const51' */
    boolean OutportBufferForVeLTIR_b_Lv2B_m;/* '<S167>/Const52' */
    boolean OutportBufferForVeLTIR_b_Lv2ESC;/* '<S167>/Const53' */
    boolean OutportBufferForVeLTIR_b_Lv2E_n;/* '<S167>/Const54' */
    boolean OutportBufferForVeLTIR_b_Lv2Rmt;/* '<S167>/Const55' */
    boolean OutportBufferForVeLTIR_b_Lv2A_a;/* '<S167>/Const56' */
    boolean OutportBufferForVeLTIR_b_Lv2A_k;/* '<S167>/Const57' */
    boolean OutportBufferForVeLTIR_b_Lv2A_e;/* '<S167>/Const58' */
    boolean OutportBufferForVeLTIR_b_Lv2H_h;/* '<S167>/Const59' */
    boolean OutportBufferForVeLTIR_b_Lv2A_l;/* '<S167>/Const60' */
    boolean OutportBufferForVeLTIR_b_Lv2_ep;/* '<S167>/Const61' */
    boolean OutportBufferForVeLTIR_b_Lv2_iq;/* '<S167>/Const62' */
    boolean OutportBufferForVeLTIR_b_Lv2M_d;/* '<S167>/Const63' */
    boolean OutportBufferForVeLTIR_b_Lv2M_o;/* '<S167>/Const64' */
    boolean OutportBufferForVeLTIR_b_Lv2M_m;/* '<S167>/Const65' */
    boolean OutportBufferForVeLTIR_b_Lv2M_n;/* '<S167>/Const66' */
    boolean OutportBufferForVeLTIR_b_Lv2H_d;/* '<S167>/Const4' */
    boolean OutportBufferForVeLTIR_b_Lv2Pro;/* '<S167>/Const5' */
    boolean OutportBufferForVeLTIR_b_Lv2ASR;/* '<S167>/Const67' */
    boolean OutportBufferForVeLTIR_b_Lv2S_n;/* '<S167>/Constant2' */
    boolean OutportBufferForVeLTIR_b_Lv2Glo;/* '<S167>/Constant4' */
    boolean OutportBufferForVeLTIR_b_Lv2Trn;/* '<S167>/Constant5' */
    boolean OutportBufferForVeLTIR_b_Lv2G_b;/* '<S167>/Constant6' */
    boolean OutportBufferForVeLTIR_b_Lv2Frn;/* '<S167>/Constant' */
    boolean OutportBufferForVeLTIR_b_Lv2RrA;/* '<S167>/Constant3' */
    boolean OutportBufferForVeLTIR_b_Lv2ESS;/* '<S167>/Constant7' */
    boolean OutportBufferForVeLTIR_b_Lv2A_f;/* '<S167>/Constant8' */
    boolean OutportBufferForVeLTIR_b_Lv2F_f;/* '<S167>/Constant9' */
    boolean OutportBufferForVeLTIR_b_Lv2R_l;/* '<S167>/Constant10' */
    boolean OutportBufferForVeLTIR_b_Lv2AHH;/* '<S167>/Constant11' */
    boolean OutportBufferForVeLTIR_b_Lv2Imp;/* '<S167>/Constant12' */
    boolean OutportBufferForVeLTIR_b_Lv2M_b;/* '<S167>/Constant13' */
    boolean OutportBufferForVeLTIR_b_Lv2Eng;/* '<S167>/Constant14' */
    boolean OutportBufferForVeLTIR_b_Lv2B_e;/* '<S167>/Constant16' */
    boolean OutportBufferForVeLTIR_b_Lv2B_j;/* '<S167>/Constant19' */
    boolean OutportBufferForVeLTIR_b_Lv2_ln;/* '<S167>/Constant20' */
    boolean OutportBufferForVeLTIR_b_Lv2Bra;/* '<S167>/Constant21' */
    boolean OutportBufferForVeLTIR_b_Lv2_ea;/* '<S167>/Constant22' */
    boolean OutportBufferForVeLTIR_b_Lv2PRN;/* '<S167>/Constant23' */
    boolean OutportBufferForVeLTIR_b_Lv2P_a;/* '<S167>/Constant24' */
    boolean OutportBufferForVeLTIR_b_Lv2_ho;/* '<S167>/Constant29' */
    boolean OutportBufferForVeLTIR_b_Lv2_h5;/* '<S167>/Constant30' */
    boolean OutportBufferForVeLTIR_b_Lv2F_h;/* '<S167>/Constant31' */
    boolean OutportBufferForVeLTIR_b_Lv2_fv;/* '<S167>/Constant32' */
    boolean OutportBufferForVeLTIR_b_Lv2R_j;/* '<S167>/Constant33' */
    boolean OutportBufferForVeLTIR_b_Lv2R_g;/* '<S167>/Constant34' */
    boolean OutportBufferForVeLTIR_b_Lv2F_p;/* '<S167>/Constant35' */
    boolean OutportBufferForVeLTIR_b_Lv2_hu;/* '<S167>/Constant36' */
    boolean OutportBufferForVeLTIR_b_Lv2_g3;/* '<S167>/Constant37' */
    boolean OutportBufferForVeLTIR_b_Lv2R_o;/* '<S167>/Constant38' */
    boolean OutportBufferForVeLTIR_b_Lv2_nt;/* '<S167>/Constant39' */
    boolean OutportBufferForVeLTIR_b_Lv2_f4;/* '<S167>/Constant40' */
    boolean OutportBufferForVeLTIR_b_Lv2M_c;/* '<S167>/Constant41' */
    boolean OutportBufferForVeLTIR_b_Lv2_cn;/* '<S167>/Constant42' */
    boolean OutportBufferForVeLTIR_b_Lv2Par;/* '<S167>/Constant43' */
    boolean OutportBufferForVeLTIR_b_Lv2_no;/* '<S167>/Constant44' */
    boolean OutportBufferForVeLTIR_b_Lv2E_i;/* '<S167>/Constant45' */
    boolean OutportBufferForVeLTIR_b_Lv2EVR;/* '<S167>/Constant46' */
    boolean OutportBufferForVeLTIR_b_Lv2Sum;/* '<S167>/Constant47' */
    boolean OutportBufferForVeLTIR_b_Lv2S_b;/* '<S167>/Constant48' */
    boolean VariantMerge_For_Variant_Sour_p;
    boolean VariantMerge_For_Variant_Sou_ab;
    boolean VariantMerge_For_Variant_Sour_h;
    boolean VariantMerge_For_Variant_Sou_j2;
    boolean VariantMerge_For_Variant_Sour_d;
    boolean VariantMerge_For_Variant_Sou_jb;
    boolean VariantMerge_For_Variant_Sou_cp;
    boolean VariantMerge_For_Variant_Sou_hl;
    boolean VariantMerge_For_Variant_Sour_k;
    boolean VariantMerge_For_Variant_Sou_hy;
    boolean VariantMerge_For_Variant_Sou_gx;
    boolean VariantMerge_For_Variant_Sour_e;
    boolean VariantMerge_For_Variant_Sour_b;
    boolean VariantMerge_For_Variant_Sou_p3;
    boolean VariantMerge_For_Variant_Sou_h2;
    boolean VariantMerge_For_Variant_Sou_cs;
    boolean VariantMerge_For_Variant_Sou_g1;
    boolean VariantMerge_For_Variant_Sour_m;
    boolean VariantMerge_For_Variant_Sou_ge;
    boolean VariantMerge_For_Variant_Sou_kw;
    boolean VariantMerge_For_Variant_Sour_i;
    boolean VariantMerge_For_Variant_Sou_ij;
    boolean VariantMerge_For_Variant_Sou_m5;
    boolean VariantMerge_For_Variant_Sou_di;
    boolean VariantMerge_For_Variant_Sou_my;
    boolean VariantMerge_For_Variant_Sou_mu;
    boolean VariantMerge_For_Variant_Sou_cl;
    boolean VariantMerge_For_Variant_Sour_o;
    boolean VariantMerge_For_Variant_Sou_gi;
    boolean VariantMerge_For_Variant_Sou_jo;
    boolean VariantMerge_For_Variant_So_hlk;
    boolean VariantMerge_For_Variant_Sou_kt;
    boolean VariantMerge_For_Variant_Sou_pl;
    boolean VariantMerge_For_Variant_Sou_iz;
    boolean VariantMerge_For_Variant_Sou_by;
    boolean VariantMerge_For_Variant_Sour_f;
    boolean VariantMerge_For_Variant_Sou_kn;
    boolean VariantMerge_For_Variant_Sou_pw;
    boolean VariantMerge_For_Variant_Sou_he;
    boolean VariantMerge_For_Variant_Sou_h3;
    boolean VariantMerge_For_Variant_Sour_l;
    boolean VariantMerge_For_Variant_Sou_oq;
    boolean VariantMerge_For_Variant_Sou_gb;
    boolean VariantMerge_For_Variant_Sou_ke;
    boolean VariantMerge_For_Variant_Sou_gr;
    boolean VariantMerge_For_Variant_Sou_hz;
    boolean VariantMerge_For_Variant_Sou_og;
    boolean VariantMerge_For_Variant_Sou_b3;
    boolean VariantMerge_For_Variant_Sou_cv;
    boolean VariantMerge_For_Variant_So_pwc;
    boolean VariantMerge_For_Variant_Sou_b0;
    boolean VariantMerge_For_Variant_Sou_l3;
    boolean VariantMerge_For_Variant_Sou_bh;
    boolean VariantMerge_For_Variant_Sou_hb;
    boolean VariantMerge_For_Variant_Sou_hn;
    boolean VariantMerge_For_Variant_Sou_p1;
    boolean VariantMerge_For_Variant_Sou_ib;
    boolean VariantMerge_For_Variant_Sou_lg;
    boolean VariantMerge_For_Variant_Sou_iv;
    boolean VariantMerge_For_Variant_Sou_e0;
    boolean VariantMerge_For_Variant_Sou_bw;
    boolean VariantMerge_For_Variant_Sou_md;
    boolean VariantMerge_For_Variant_So_lg5;
    boolean VariantMerge_For_Variant_Sou_co;
    boolean VariantMerge_For_Variant_Sou_jf;
    boolean VariantMerge_For_Variant_Sou_jk;
    boolean VariantMerge_For_Variant_Sour_n;
    boolean VariantMerge_For_Variant_Sou_pc;
    boolean VariantMerge_For_Variant_Sou_ob;
    boolean VariantMerge_For_Variant_Sou_nr;
    boolean VariantMerge_For_Variant_Sou_dx;
    boolean VariantMerge_For_Variant_Sou_ao;
    boolean VariantMerge_For_Variant_Sou_lq;
    boolean VariantMerge_For_Variant_Sou_p5;
    boolean VariantMerge_For_Variant_Sou_ny;
    boolean VariantMerge_For_Variant_So_izt;
    boolean VariantMerge_For_Variant_So_p3u;
    boolean VariantMerge_For_Variant_Sou_mo;
    boolean VariantMerge_For_Variant_So_cps;
    boolean VariantMerge_For_Variant_Sou_ne;
    boolean VariantMerge_For_Variant_Sou_kr;
    boolean VariantMerge_For_Variant_Sou_pa;
    boolean VariantMerge_For_Variant_Sou_ov;
    boolean VariantMerge_For_Variant_Sou_ot;
    boolean VariantMerge_For_Variant_Sou_ha;
    boolean VariantMerge_For_Variant_Sou_k3;
    boolean VariantMerge_For_Variant_Sou_mg;
    boolean VariantMerge_For_Variant_Sou_dn;
    boolean VariantMerge_For_Variant_Sou_pd;
    boolean VariantMerge_For_Variant_Sou_py;
    boolean VariantMerge_For_Variant_Sou_ar;
    boolean VariantMerge_For_Variant_Sou_ok;
    boolean VariantMerge_For_Variant_Sou_fd;
    boolean VariantMerge_For_Variant_Sou_mh;
    boolean VariantMerge_For_Variant_So_p5x;
    boolean VariantMerge_For_Variant_Sou_ow;
    TeLTIR_e_KeySts OutportBufferForVeLTIR_e_Lv2Key;/* '<S167>/Enumerated_Constant1' */
    TeHTDR_e_SwitchMd OutportBufferForVeLTIR_e_Lv2Mtr;/* '<S167>/Enumerated_Constant' */
}
B_LTIR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeLTIR_e_KeySts Constant_b;  /* '<S169>/Constant' */
    const TeHTDR_e_SwitchMd Constant_d;/* '<S168>/Constant' */
}
ConstB_LTIR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LTIR
#include "MemMap.h"

extern VAR(B_LTIR_ac_T, LTIR_VAR_INIT) LTIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LTIR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_LTIR
#include "MemMap.h"

extern CONST(ConstB_LTIR_ac_T, LTIR_VAR_INIT) LTIR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_LTIR
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
 * '<Root>' : 'LTIR_ac'
 * '<S1>'   : 'LTIR_ac/LTIR_FastTEF'
 * '<S2>'   : 'LTIR_ac/LTIR_PwrOn'
 * '<S3>'   : 'LTIR_ac/LTIR_FastTEF/LTIC'
 * '<S4>'   : 'LTIR_ac/LTIR_FastTEF/LTII'
 * '<S5>'   : 'LTIR_ac/LTIR_FastTEF/LTIR_FastTEF_StartCheckpoint'
 * '<S6>'   : 'LTIR_ac/LTIR_FastTEF/LTIR_FastTEF_StopCheckpoint'
 * '<S7>'   : 'LTIR_ac/LTIR_FastTEF/LTIC/Chart1'
 * '<S8>'   : 'LTIR_ac/LTIR_FastTEF/LTIC/Enum_Set_Block1'
 * '<S9>'   : 'LTIR_ac/LTIR_FastTEF/LTIC/HeLTIR_b_SpeedUnitSwitchEnbl'
 * '<S10>'  : 'LTIR_ac/LTIR_FastTEF/LTIC/KaLTIR_e_KeySts_Map'
 * '<S11>'  : 'LTIR_ac/LTIR_FastTEF/LTIC/KeLTIR_b_MtrMdCmnd_Slct'
 * '<S12>'  : 'LTIR_ac/LTIR_FastTEF/LTIC/KeLTIR_b_MtrTrqCmnd_Slct'
 * '<S13>'  : 'LTIR_ac/LTIR_FastTEF/LTIC/KeLTIR_b_Select_BCM_KeySts'
 * '<S14>'  : 'LTIR_ac/LTIR_FastTEF/LTIC/Model_Info2'
 * '<S15>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock'
 * '<S16>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock1'
 * '<S17>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock10'
 * '<S18>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock11'
 * '<S19>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock12'
 * '<S20>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock13'
 * '<S21>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock14'
 * '<S22>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock15'
 * '<S23>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock16'
 * '<S24>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock17'
 * '<S25>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock18'
 * '<S26>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock19'
 * '<S27>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock2'
 * '<S28>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock20'
 * '<S29>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock21'
 * '<S30>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock22'
 * '<S31>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock23'
 * '<S32>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock24'
 * '<S33>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock25'
 * '<S34>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock26'
 * '<S35>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock27'
 * '<S36>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock28'
 * '<S37>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock29'
 * '<S38>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock3'
 * '<S39>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock30'
 * '<S40>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock31'
 * '<S41>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock32'
 * '<S42>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock33'
 * '<S43>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock34'
 * '<S44>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock35'
 * '<S45>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock36'
 * '<S46>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock37'
 * '<S47>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock38'
 * '<S48>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock39'
 * '<S49>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock4'
 * '<S50>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock40'
 * '<S51>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock41'
 * '<S52>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock42'
 * '<S53>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock5'
 * '<S54>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock6'
 * '<S55>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock7'
 * '<S56>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock8'
 * '<S57>'  : 'LTIR_ac/LTIR_FastTEF/LTII/BooleanSetBlock9'
 * '<S58>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block'
 * '<S59>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block1'
 * '<S60>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block10'
 * '<S61>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block100'
 * '<S62>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block101'
 * '<S63>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block102'
 * '<S64>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block103'
 * '<S65>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block104'
 * '<S66>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block105'
 * '<S67>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block11'
 * '<S68>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block12'
 * '<S69>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block13'
 * '<S70>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block14'
 * '<S71>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block15'
 * '<S72>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block16'
 * '<S73>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block17'
 * '<S74>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block18'
 * '<S75>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block19'
 * '<S76>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block2'
 * '<S77>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block20'
 * '<S78>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block21'
 * '<S79>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block22'
 * '<S80>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block23'
 * '<S81>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block24'
 * '<S82>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block25'
 * '<S83>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block26'
 * '<S84>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block27'
 * '<S85>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block28'
 * '<S86>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block29'
 * '<S87>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block3'
 * '<S88>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block30'
 * '<S89>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block31'
 * '<S90>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block32'
 * '<S91>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block33'
 * '<S92>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block34'
 * '<S93>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block35'
 * '<S94>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block36'
 * '<S95>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block37'
 * '<S96>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block38'
 * '<S97>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block39'
 * '<S98>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block4'
 * '<S99>'  : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block40'
 * '<S100>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block41'
 * '<S101>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block42'
 * '<S102>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block43'
 * '<S103>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block44'
 * '<S104>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block45'
 * '<S105>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block46'
 * '<S106>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block47'
 * '<S107>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block48'
 * '<S108>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block49'
 * '<S109>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block5'
 * '<S110>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block50'
 * '<S111>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block51'
 * '<S112>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block52'
 * '<S113>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block53'
 * '<S114>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block54'
 * '<S115>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block55'
 * '<S116>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block56'
 * '<S117>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block57'
 * '<S118>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block58'
 * '<S119>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block59'
 * '<S120>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block6'
 * '<S121>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block60'
 * '<S122>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block61'
 * '<S123>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block62'
 * '<S124>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block63'
 * '<S125>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block64'
 * '<S126>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block65'
 * '<S127>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block66'
 * '<S128>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block67'
 * '<S129>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block68'
 * '<S130>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block69'
 * '<S131>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block7'
 * '<S132>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block70'
 * '<S133>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block71'
 * '<S134>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block72'
 * '<S135>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block73'
 * '<S136>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block74'
 * '<S137>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block75'
 * '<S138>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block76'
 * '<S139>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block77'
 * '<S140>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block78'
 * '<S141>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block79'
 * '<S142>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block8'
 * '<S143>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block80'
 * '<S144>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block81'
 * '<S145>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block82'
 * '<S146>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block83'
 * '<S147>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block84'
 * '<S148>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block85'
 * '<S149>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block86'
 * '<S150>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block87'
 * '<S151>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block88'
 * '<S152>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block89'
 * '<S153>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block9'
 * '<S154>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block90'
 * '<S155>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block91'
 * '<S156>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block92'
 * '<S157>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block93'
 * '<S158>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block94'
 * '<S159>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block95'
 * '<S160>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block96'
 * '<S161>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block97'
 * '<S162>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block98'
 * '<S163>' : 'LTIR_ac/LTIR_FastTEF/LTII/Boolean_Set_Block99'
 * '<S164>' : 'LTIR_ac/LTIR_FastTEF/LTII/Enum_Set_Block'
 * '<S165>' : 'LTIR_ac/LTIR_FastTEF/LTII/Enum_Set_Block1'
 * '<S166>' : 'LTIR_ac/LTIR_FastTEF/LTII/Enum_Set_Block2'
 * '<S167>' : 'LTIR_ac/LTIR_PwrOn/Sub_Out_Init'
 * '<S168>' : 'LTIR_ac/LTIR_PwrOn/Sub_Out_Init/Enumerated_Constant'
 * '<S169>' : 'LTIR_ac/LTIR_PwrOn/Sub_Out_Init/Enumerated_Constant1'
 */
#endif                                 /* RTW_HEADER_LTIR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
