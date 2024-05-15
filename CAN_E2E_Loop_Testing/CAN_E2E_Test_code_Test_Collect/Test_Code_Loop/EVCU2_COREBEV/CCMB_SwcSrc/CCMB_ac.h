/*
 * File: CCMB_ac.h
 *
 * Code generated for Simulink model 'CCMB_ac'.
 *
 * Model version                  : 1.347
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:13:53 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CCMB_ac_h_
#define RTW_HEADER_CCMB_ac_h_
#include "Rte_Type.h"
#ifndef CCMB_ac_COMMON_INCLUDES_
#define CCMB_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CCMB.h"
#endif                                 /* CCMB_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* MW_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */
#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_CCMB_BLUEN
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CCMB_ac/CCMB_10ms/10ms_VariantOptions' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CCMB_ac/CCMB_10ms/10ms_VariantOptions'"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_CCMB_BLUEN
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CCMB_ac/Init/Init_VariantOptions' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CCMB_ac/Init/Init_VariantOptions'"
#endif

/* MW_END_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CCMB_ac_T
{

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE;          /* '<S849>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_p;        /* '<S841>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_f;        /* '<S833>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_j;        /* '<S825>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_fo;       /* '<S817>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_c;        /* '<S809>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_g;        /* '<S801>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_cv;       /* '<S793>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_gb;       /* '<S785>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_fk;       /* '<S777>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_cl;       /* '<S769>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_a;        /* '<S761>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_i;        /* '<S753>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_l;        /* '<S745>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_k;        /* '<S737>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_fom;      /* '<S729>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_o;        /* '<S721>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_n;        /* '<S713>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_px;       /* '<S705>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_cd;       /* '<S697>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_jn;       /* '<S689>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_jn4;      /* '<S681>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_oo;       /* '<S673>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_ad;       /* '<S665>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_ij;       /* '<S657>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_kh;       /* '<S649>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_f0;       /* '<S641>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_ax;       /* '<S633>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_PEGASUS

    boolean UnitDelay_DSTATE_h;        /* '<S625>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_jw;       /* '<S588>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_nr;       /* '<S580>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_om;       /* '<S572>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_po;       /* '<S564>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_axk;      /* '<S556>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_i1;       /* '<S548>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_hw;       /* '<S540>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_ie;       /* '<S532>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_pr;       /* '<S524>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_k0;       /* '<S516>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_e;        /* '<S508>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_jc;       /* '<S500>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_cj;       /* '<S492>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_fs;       /* '<S484>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_et;       /* '<S476>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_b;        /* '<S468>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_fb;       /* '<S460>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_ii;       /* '<S452>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_cq;       /* '<S444>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_d;        /* '<S436>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV_MY24

    boolean UnitDelay_DSTATE_kv;       /* '<S428>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_c5;       /* '<S399>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_dw;       /* '<S391>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_bd;       /* '<S383>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_nv;       /* '<S375>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_p3;       /* '<S367>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_ps;       /* '<S359>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_kd;       /* '<S351>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_e4;       /* '<S343>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_nf;       /* '<S335>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_ks;       /* '<S327>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_eu;       /* '<S319>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_jm;       /* '<S311>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_ff;       /* '<S303>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_oy;       /* '<S295>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_m;        /* '<S287>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_pd;       /* '<S279>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_bz;       /* '<S271>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_c1;       /* '<S263>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_cb;       /* '<S255>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_ch;       /* '<S247>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_km;       /* '<S239>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_COREBEV

    boolean UnitDelay_DSTATE_go;       /* '<S231>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_k3;       /* '<S201>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_kg;       /* '<S193>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_eo;       /* '<S185>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_pk;       /* '<S177>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_iik;      /* '<S169>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_is;       /* '<S161>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_jf;       /* '<S153>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_bf;       /* '<S145>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_ge;       /* '<S137>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_ol;       /* '<S129>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_cr;       /* '<S121>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_a1;       /* '<S113>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_hs;       /* '<S105>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_nt;       /* '<S97>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_jk;       /* '<S89>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_jp;       /* '<S81>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_gp;       /* '<S73>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_hl;       /* '<S65>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_g1;       /* '<S57>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_cvd;      /* '<S49>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_eh;       /* '<S41>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CCMB_BLUEN

    boolean UnitDelay_DSTATE_ej;       /* '<S33>/Unit Delay' */

#define DW_CCMB_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_CCMB_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_CCMB_ac_T;

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CCMB
#include "MemMap.h"

extern VAR(DW_CCMB_ac_T, CCMB_VAR_INIT) CCMB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CCMB
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
 * '<Root>' : 'CCMB_ac'
 * '<S1>'   : 'CCMB_ac/CCMB_10ms'
 * '<S2>'   : 'CCMB_ac/Init'
 * '<S3>'   : 'CCMB_ac/CCMB_10ms/10ms_Common'
 * '<S4>'   : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions'
 * '<S5>'   : 'CCMB_ac/CCMB_10ms/10ms_Common/ResetCountsFOMs'
 * '<S6>'   : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN'
 * '<S7>'   : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV'
 * '<S8>'   : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24'
 * '<S9>'   : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS'
 * '<S10>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BPCM'
 * '<S11>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BSM'
 * '<S12>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_DMPI'
 * '<S13>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_PBWM'
 * '<S14>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_SGCP'
 * '<S15>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_AGSM'
 * '<S16>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_BPCM'
 * '<S17>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_DMPI'
 * '<S18>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_ECM'
 * '<S19>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_PBWM'
 * '<S20>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_BSM'
 * '<S21>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ESP'
 * '<S22>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ORC'
 * '<S23>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD16_SGCP'
 * '<S24>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_BCM'
 * '<S25>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_CADM'
 * '<S26>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_DTCM'
 * '<S27>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_IPC'
 * '<S28>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_RHFM'
 * '<S29>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_BPCM'
 * '<S30>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_DMPI'
 * '<S31>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_ECM'
 * '<S32>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BPCM/ DiagCommDualCommFaultReport'
 * '<S33>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S34>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Init'
 * '<S35>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S36>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S37>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S38>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S39>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S40>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BSM/ DiagCommDualCommFaultReport'
 * '<S41>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BSM/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S42>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BSM/ DiagCommDualCommFaultReport/Init'
 * '<S43>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BSM/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S44>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BSM/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S45>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BSM/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S46>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BSM/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S47>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_BSM/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S48>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_DMPI/ DiagCommDualCommFaultReport'
 * '<S49>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_DMPI/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S50>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_DMPI/ DiagCommDualCommFaultReport/Init'
 * '<S51>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_DMPI/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S52>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_DMPI/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S53>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_DMPI/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S54>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_DMPI/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S55>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_DMPI/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S56>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_PBWM/ DiagCommDualCommFaultReport'
 * '<S57>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_PBWM/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S58>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_PBWM/ DiagCommDualCommFaultReport/Init'
 * '<S59>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_PBWM/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S60>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_PBWM/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S61>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_PBWM/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S62>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_PBWM/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S63>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_PBWM/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S64>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_SGCP/ DiagCommDualCommFaultReport'
 * '<S65>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S66>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/Init'
 * '<S67>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S68>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S69>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S70>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S71>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S72>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_AGSM/ DiagCommImplFaultReportCRCMC'
 * '<S73>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_AGSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S74>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_AGSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S75>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S76>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S77>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_AGSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S78>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S79>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S80>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_BPCM/ DiagCommImplFaultReportCRCMC'
 * '<S81>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_BPCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S82>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S83>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S84>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S85>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S86>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S87>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S88>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_DMPI/ DiagCommImplFaultReportCRCMC'
 * '<S89>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_DMPI/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S90>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_DMPI/ DiagCommImplFaultReportCRCMC/Init'
 * '<S91>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_DMPI/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S92>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_DMPI/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S93>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_DMPI/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S94>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_DMPI/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S95>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_DMPI/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S96>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_ECM/ DiagCommImplFaultReportCRCMC'
 * '<S97>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_ECM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S98>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_ECM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S99>'  : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_ECM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S100>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_ECM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S101>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_ECM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S102>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_ECM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S103>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_ECM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S104>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_PBWM/ DiagCommImplFaultReportCRCMC'
 * '<S105>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_PBWM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S106>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_PBWM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S107>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_PBWM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S108>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_PBWM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S109>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_PBWM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S110>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_PBWM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S111>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD11_PBWM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S112>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_BSM/ DiagCommImplFaultReportCRCMC'
 * '<S113>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_BSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S114>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_BSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S115>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S116>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S117>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_BSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S118>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S119>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S120>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ESP/ DiagCommImplFaultReportCRCMC'
 * '<S121>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ESP/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S122>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ESP/ DiagCommImplFaultReportCRCMC/Init'
 * '<S123>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ESP/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S124>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ESP/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S125>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ESP/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S126>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ESP/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S127>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ESP/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S128>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ORC/ DiagCommImplFaultReportCRCMC'
 * '<S129>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ORC/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S130>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ORC/ DiagCommImplFaultReportCRCMC/Init'
 * '<S131>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S132>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S133>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ORC/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S134>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S135>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S136>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD16_SGCP/ DiagCommImplFaultReportCRCMC'
 * '<S137>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD16_SGCP/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S138>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD16_SGCP/ DiagCommImplFaultReportCRCMC/Init'
 * '<S139>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD16_SGCP/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S140>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD16_SGCP/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S141>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD16_SGCP/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S142>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD16_SGCP/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S143>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD16_SGCP/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S144>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_BCM/ DiagCommImplFaultReportCRCMC'
 * '<S145>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_BCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S146>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_BCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S147>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S148>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S149>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_BCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S150>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S151>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S152>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_CADM/ DiagCommImplFaultReportCRCMC'
 * '<S153>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_CADM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S154>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_CADM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S155>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S156>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S157>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_CADM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S158>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S159>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S160>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_DTCM/ DiagCommImplFaultReportCRCMC'
 * '<S161>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_DTCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S162>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_DTCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S163>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_DTCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S164>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_DTCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S165>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_DTCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S166>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_DTCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S167>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_DTCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S168>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_IPC/ DiagCommImplFaultReportCRCMC'
 * '<S169>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_IPC/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S170>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_IPC/ DiagCommImplFaultReportCRCMC/Init'
 * '<S171>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S172>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S173>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_IPC/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S174>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S175>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S176>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_RHFM/ DiagCommImplFaultReportCRCMC'
 * '<S177>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_RHFM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S178>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_RHFM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S179>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_RHFM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S180>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_RHFM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S181>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_RHFM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S182>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_RHFM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S183>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD3_RHFM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S184>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_BPCM/ DiagCommImplFaultReportCRCMC'
 * '<S185>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_BPCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S186>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S187>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S188>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S189>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S190>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S191>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S192>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_DMPI/ DiagCommImplFaultReportCRCMC'
 * '<S193>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_DMPI/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S194>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_DMPI/ DiagCommImplFaultReportCRCMC/Init'
 * '<S195>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_DMPI/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S196>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_DMPI/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S197>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_DMPI/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S198>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_DMPI/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S199>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_DMPI/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S200>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_ECM/ DiagCommImplFaultReportCRCMC'
 * '<S201>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_ECM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S202>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_ECM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S203>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_ECM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S204>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_ECM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S205>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_ECM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S206>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_ECM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S207>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/BLUEN/FD5_ECM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S208>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_AGSM'
 * '<S209>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_BPCM'
 * '<S210>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_IDCM'
 * '<S211>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPA'
 * '<S212>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPB'
 * '<S213>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_BPCM'
 * '<S214>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_IDCM'
 * '<S215>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_BSM'
 * '<S216>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_CADM'
 * '<S217>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_ORC'
 * '<S218>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_AGSM'
 * '<S219>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPA'
 * '<S220>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPB'
 * '<S221>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_AGSM'
 * '<S222>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BCM'
 * '<S223>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BSM'
 * '<S224>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_CADM'
 * '<S225>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_IPC'
 * '<S226>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_BPCM'
 * '<S227>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_IDCM'
 * '<S228>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPA'
 * '<S229>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPB'
 * '<S230>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_AGSM/ DiagCommDualCommFaultReport'
 * '<S231>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S232>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Init'
 * '<S233>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S234>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S235>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S236>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S237>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S238>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_BPCM/ DiagCommDualCommFaultReport'
 * '<S239>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S240>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Init'
 * '<S241>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S242>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S243>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S244>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S245>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S246>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_IDCM/ DiagCommDualCommFaultReport'
 * '<S247>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S248>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Init'
 * '<S249>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S250>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S251>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S252>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S253>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S254>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPA/ DiagCommDualCommFaultReport'
 * '<S255>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S256>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Init'
 * '<S257>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S258>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S259>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S260>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S261>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S262>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPB/ DiagCommDualCommFaultReport'
 * '<S263>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S264>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Init'
 * '<S265>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S266>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S267>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S268>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S269>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S270>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_BPCM/ DiagCommImplFaultReportCRCMC'
 * '<S271>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_BPCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S272>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S273>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S274>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S275>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S276>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S277>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S278>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_IDCM/ DiagCommImplFaultReportCRCMC'
 * '<S279>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_IDCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S280>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S281>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S282>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S283>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S284>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S285>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S286>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_BSM/ DiagCommImplFaultReportCRCMC'
 * '<S287>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_BSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S288>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_BSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S289>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S290>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S291>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_BSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S292>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S293>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S294>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_CADM/ DiagCommImplFaultReportCRCMC'
 * '<S295>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_CADM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S296>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_CADM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S297>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_CADM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S298>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_CADM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S299>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_CADM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S300>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_CADM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S301>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_CADM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S302>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_ORC/ DiagCommImplFaultReportCRCMC'
 * '<S303>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_ORC/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S304>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_ORC/ DiagCommImplFaultReportCRCMC/Init'
 * '<S305>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S306>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S307>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_ORC/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S308>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S309>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S310>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_AGSM/ DiagCommImplFaultReportCRCMC'
 * '<S311>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_AGSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S312>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S313>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S314>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S315>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S316>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S317>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S318>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPA/ DiagCommImplFaultReportCRCMC'
 * '<S319>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPA/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S320>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Init'
 * '<S321>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S322>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S323>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S324>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S325>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S326>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPB/ DiagCommImplFaultReportCRCMC'
 * '<S327>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPB/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S328>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Init'
 * '<S329>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S330>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S331>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S332>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S333>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S334>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_AGSM/ DiagCommImplFaultReportCRCMC'
 * '<S335>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_AGSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S336>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S337>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S338>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S339>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S340>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S341>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S342>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BCM/ DiagCommImplFaultReportCRCMC'
 * '<S343>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S344>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S345>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S346>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S347>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S348>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S349>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S350>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BSM/ DiagCommImplFaultReportCRCMC'
 * '<S351>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S352>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S353>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S354>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S355>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S356>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S357>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S358>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_CADM/ DiagCommImplFaultReportCRCMC'
 * '<S359>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_CADM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S360>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_CADM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S361>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S362>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S363>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_CADM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S364>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S365>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S366>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_IPC/ DiagCommImplFaultReportCRCMC'
 * '<S367>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_IPC/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S368>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_IPC/ DiagCommImplFaultReportCRCMC/Init'
 * '<S369>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S370>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S371>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_IPC/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S372>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S373>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S374>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_BPCM/ DiagCommImplFaultReportCRCMC'
 * '<S375>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_BPCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S376>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S377>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S378>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S379>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S380>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S381>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S382>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_IDCM/ DiagCommImplFaultReportCRCMC'
 * '<S383>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_IDCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S384>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S385>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S386>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S387>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S388>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S389>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S390>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPA/ DiagCommImplFaultReportCRCMC'
 * '<S391>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPA/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S392>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Init'
 * '<S393>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S394>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S395>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S396>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S397>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S398>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPB/ DiagCommImplFaultReportCRCMC'
 * '<S399>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPB/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S400>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Init'
 * '<S401>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S402>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S403>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S404>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S405>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S406>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_AGSM'
 * '<S407>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_BPCM'
 * '<S408>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_IDCM'
 * '<S409>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPA'
 * '<S410>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPB'
 * '<S411>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_BPCM'
 * '<S412>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_IDCM'
 * '<S413>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_BSM'
 * '<S414>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_ORC'
 * '<S415>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_AGSM'
 * '<S416>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPA'
 * '<S417>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPB'
 * '<S418>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_AGSM'
 * '<S419>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BCM'
 * '<S420>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BSM'
 * '<S421>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_CADM'
 * '<S422>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_IPC'
 * '<S423>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_BPCM'
 * '<S424>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_IDCM'
 * '<S425>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPA'
 * '<S426>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPB'
 * '<S427>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_AGSM/ DiagCommDualCommFaultReport'
 * '<S428>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S429>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Init'
 * '<S430>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S431>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S432>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S433>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S434>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S435>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_BPCM/ DiagCommDualCommFaultReport'
 * '<S436>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S437>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Init'
 * '<S438>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S439>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S440>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S441>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S442>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S443>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_IDCM/ DiagCommDualCommFaultReport'
 * '<S444>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S445>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Init'
 * '<S446>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S447>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S448>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S449>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S450>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S451>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPA/ DiagCommDualCommFaultReport'
 * '<S452>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S453>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Init'
 * '<S454>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S455>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S456>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S457>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S458>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S459>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPB/ DiagCommDualCommFaultReport'
 * '<S460>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S461>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Init'
 * '<S462>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S463>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S464>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S465>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S466>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S467>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_BPCM/ DiagCommImplFaultReportCRCMC'
 * '<S468>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_BPCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S469>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S470>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S471>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S472>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S473>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S474>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S475>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_IDCM/ DiagCommImplFaultReportCRCMC'
 * '<S476>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_IDCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S477>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S478>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S479>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S480>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S481>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S482>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S483>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_BSM/ DiagCommImplFaultReportCRCMC'
 * '<S484>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_BSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S485>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_BSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S486>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S487>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S488>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_BSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S489>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S490>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S491>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_ORC/ DiagCommImplFaultReportCRCMC'
 * '<S492>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_ORC/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S493>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_ORC/ DiagCommImplFaultReportCRCMC/Init'
 * '<S494>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S495>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S496>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_ORC/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S497>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S498>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S499>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_AGSM/ DiagCommImplFaultReportCRCMC'
 * '<S500>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_AGSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S501>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S502>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S503>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S504>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S505>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S506>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S507>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPA/ DiagCommImplFaultReportCRCMC'
 * '<S508>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPA/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S509>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Init'
 * '<S510>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S511>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S512>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S513>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S514>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S515>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPB/ DiagCommImplFaultReportCRCMC'
 * '<S516>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPB/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S517>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Init'
 * '<S518>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S519>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S520>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S521>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S522>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S523>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_AGSM/ DiagCommImplFaultReportCRCMC'
 * '<S524>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_AGSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S525>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S526>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S527>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S528>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S529>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S530>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S531>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BCM/ DiagCommImplFaultReportCRCMC'
 * '<S532>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S533>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S534>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S535>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S536>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S537>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S538>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S539>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BSM/ DiagCommImplFaultReportCRCMC'
 * '<S540>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S541>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S542>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S543>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S544>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S545>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S546>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S547>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_CADM/ DiagCommImplFaultReportCRCMC'
 * '<S548>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_CADM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S549>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_CADM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S550>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S551>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S552>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_CADM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S553>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S554>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S555>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_IPC/ DiagCommImplFaultReportCRCMC'
 * '<S556>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_IPC/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S557>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_IPC/ DiagCommImplFaultReportCRCMC/Init'
 * '<S558>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S559>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S560>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_IPC/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S561>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S562>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S563>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_BPCM/ DiagCommImplFaultReportCRCMC'
 * '<S564>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_BPCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S565>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S566>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S567>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S568>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S569>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S570>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S571>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_IDCM/ DiagCommImplFaultReportCRCMC'
 * '<S572>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_IDCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S573>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S574>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S575>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S576>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S577>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S578>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S579>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPA/ DiagCommImplFaultReportCRCMC'
 * '<S580>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPA/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S581>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Init'
 * '<S582>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S583>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S584>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S585>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S586>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S587>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPB/ DiagCommImplFaultReportCRCMC'
 * '<S588>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPB/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S589>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Init'
 * '<S590>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S591>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S592>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S593>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S594>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/COREBEV_MY24/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S595>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_AGSM'
 * '<S596>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_BPCM'
 * '<S597>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_ECM'
 * '<S598>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_IDCM'
 * '<S599>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPA'
 * '<S600>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPB'
 * '<S601>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_SGCP'
 * '<S602>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_BPCM'
 * '<S603>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_IDCM'
 * '<S604>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_BSM'
 * '<S605>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_CADM'
 * '<S606>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_ORC'
 * '<S607>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_AGSM'
 * '<S608>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_ECM'
 * '<S609>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPA'
 * '<S610>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPB'
 * '<S611>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_SGCP'
 * '<S612>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_AGSM'
 * '<S613>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BCM'
 * '<S614>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BSM'
 * '<S615>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_CADM'
 * '<S616>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_ECM'
 * '<S617>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_IPC'
 * '<S618>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_BPCM'
 * '<S619>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_ECM'
 * '<S620>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_IDCM'
 * '<S621>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPA'
 * '<S622>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPB'
 * '<S623>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_SGCP'
 * '<S624>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_AGSM/ DiagCommDualCommFaultReport'
 * '<S625>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S626>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Init'
 * '<S627>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S628>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S629>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S630>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S631>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_AGSM/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S632>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_BPCM/ DiagCommDualCommFaultReport'
 * '<S633>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S634>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Init'
 * '<S635>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S636>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S637>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S638>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S639>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_BPCM/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S640>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_ECM/ DiagCommDualCommFaultReport'
 * '<S641>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_ECM/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S642>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_ECM/ DiagCommDualCommFaultReport/Init'
 * '<S643>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_ECM/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S644>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_ECM/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S645>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_ECM/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S646>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_ECM/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S647>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_ECM/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S648>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_IDCM/ DiagCommDualCommFaultReport'
 * '<S649>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S650>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Init'
 * '<S651>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S652>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S653>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S654>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S655>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_IDCM/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S656>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPA/ DiagCommDualCommFaultReport'
 * '<S657>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S658>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Init'
 * '<S659>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S660>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S661>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S662>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S663>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPA/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S664>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPB/ DiagCommDualCommFaultReport'
 * '<S665>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S666>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Init'
 * '<S667>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S668>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S669>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S670>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S671>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_MCPB/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S672>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_SGCP/ DiagCommDualCommFaultReport'
 * '<S673>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/EdgeFalling1'
 * '<S674>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/Init'
 * '<S675>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/Report Test Failed'
 * '<S676>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/Report Test Passed'
 * '<S677>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/Init/Enumerated Constant16'
 * '<S678>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/Report Test Failed/Enumerated Constant16'
 * '<S679>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/DualCommFailure_SGCP/ DiagCommDualCommFaultReport/Report Test Passed/Enumerated Constant16'
 * '<S680>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_BPCM/ DiagCommImplFaultReportCRCMC'
 * '<S681>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_BPCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S682>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S683>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S684>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S685>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S686>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S687>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S688>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_IDCM/ DiagCommImplFaultReportCRCMC'
 * '<S689>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_IDCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S690>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S691>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S692>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S693>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S694>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S695>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD11_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S696>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_BSM/ DiagCommImplFaultReportCRCMC'
 * '<S697>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_BSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S698>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_BSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S699>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S700>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S701>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_BSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S702>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S703>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S704>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_CADM/ DiagCommImplFaultReportCRCMC'
 * '<S705>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_CADM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S706>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_CADM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S707>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_CADM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S708>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_CADM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S709>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_CADM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S710>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_CADM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S711>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_CADM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S712>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_ORC/ DiagCommImplFaultReportCRCMC'
 * '<S713>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_ORC/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S714>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_ORC/ DiagCommImplFaultReportCRCMC/Init'
 * '<S715>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S716>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S717>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_ORC/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S718>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S719>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD14_ORC/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S720>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_AGSM/ DiagCommImplFaultReportCRCMC'
 * '<S721>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_AGSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S722>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S723>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S724>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S725>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S726>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S727>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S728>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_ECM/ DiagCommImplFaultReportCRCMC'
 * '<S729>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_ECM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S730>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_ECM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S731>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_ECM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S732>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_ECM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S733>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_ECM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S734>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_ECM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S735>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_ECM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S736>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPA/ DiagCommImplFaultReportCRCMC'
 * '<S737>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPA/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S738>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Init'
 * '<S739>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S740>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S741>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S742>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S743>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S744>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPB/ DiagCommImplFaultReportCRCMC'
 * '<S745>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPB/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S746>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Init'
 * '<S747>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S748>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S749>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S750>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S751>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S752>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_SGCP/ DiagCommImplFaultReportCRCMC'
 * '<S753>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_SGCP/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S754>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_SGCP/ DiagCommImplFaultReportCRCMC/Init'
 * '<S755>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_SGCP/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S756>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_SGCP/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S757>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_SGCP/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S758>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_SGCP/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S759>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD16_SGCP/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S760>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_AGSM/ DiagCommImplFaultReportCRCMC'
 * '<S761>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_AGSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S762>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S763>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S764>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S765>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S766>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S767>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_AGSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S768>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BCM/ DiagCommImplFaultReportCRCMC'
 * '<S769>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S770>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S771>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S772>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S773>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S774>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S775>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S776>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BSM/ DiagCommImplFaultReportCRCMC'
 * '<S777>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BSM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S778>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BSM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S779>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S780>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S781>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BSM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S782>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BSM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S783>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_BSM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S784>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_CADM/ DiagCommImplFaultReportCRCMC'
 * '<S785>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_CADM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S786>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_CADM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S787>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S788>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S789>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_CADM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S790>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S791>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_CADM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S792>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_ECM/ DiagCommImplFaultReportCRCMC'
 * '<S793>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_ECM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S794>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_ECM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S795>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_ECM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S796>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_ECM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S797>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_ECM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S798>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_ECM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S799>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_ECM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S800>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_IPC/ DiagCommImplFaultReportCRCMC'
 * '<S801>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_IPC/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S802>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_IPC/ DiagCommImplFaultReportCRCMC/Init'
 * '<S803>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S804>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S805>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_IPC/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S806>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S807>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD3_IPC/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S808>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_BPCM/ DiagCommImplFaultReportCRCMC'
 * '<S809>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_BPCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S810>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S811>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S812>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S813>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S814>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S815>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_BPCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S816>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_ECM/ DiagCommImplFaultReportCRCMC'
 * '<S817>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_ECM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S818>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_ECM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S819>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_ECM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S820>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_ECM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S821>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_ECM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S822>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_ECM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S823>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_ECM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S824>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_IDCM/ DiagCommImplFaultReportCRCMC'
 * '<S825>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_IDCM/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S826>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Init'
 * '<S827>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S828>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S829>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S830>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S831>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_IDCM/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S832>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPA/ DiagCommImplFaultReportCRCMC'
 * '<S833>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPA/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S834>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Init'
 * '<S835>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S836>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S837>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S838>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S839>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPA/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S840>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPB/ DiagCommImplFaultReportCRCMC'
 * '<S841>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPB/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S842>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Init'
 * '<S843>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S844>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S845>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S846>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S847>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_MCPB/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S848>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_SGCP/ DiagCommImplFaultReportCRCMC'
 * '<S849>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_SGCP/ DiagCommImplFaultReportCRCMC/EdgeFalling1'
 * '<S850>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_SGCP/ DiagCommImplFaultReportCRCMC/Init'
 * '<S851>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_SGCP/ DiagCommImplFaultReportCRCMC/Report Test Failed'
 * '<S852>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_SGCP/ DiagCommImplFaultReportCRCMC/Report Test Passed'
 * '<S853>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_SGCP/ DiagCommImplFaultReportCRCMC/Init/Enumerated Constant16'
 * '<S854>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_SGCP/ DiagCommImplFaultReportCRCMC/Report Test Failed/Enumerated Constant16'
 * '<S855>' : 'CCMB_ac/CCMB_10ms/10ms_VariantOptions/PEGASUS/FD5_SGCP/ DiagCommImplFaultReportCRCMC/Report Test Passed/Enumerated Constant16'
 * '<S856>' : 'CCMB_ac/Init/Init_VariantOptions'
 * '<S857>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN'
 * '<S858>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV'
 * '<S859>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS'
 * '<S860>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant1'
 * '<S861>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant10'
 * '<S862>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant11'
 * '<S863>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant12'
 * '<S864>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant13'
 * '<S865>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant14'
 * '<S866>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant15'
 * '<S867>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant16'
 * '<S868>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant17'
 * '<S869>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant18'
 * '<S870>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant19'
 * '<S871>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant2'
 * '<S872>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant20'
 * '<S873>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant21'
 * '<S874>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant22'
 * '<S875>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant23'
 * '<S876>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant24'
 * '<S877>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant25'
 * '<S878>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant26'
 * '<S879>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant27'
 * '<S880>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant28'
 * '<S881>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant29'
 * '<S882>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant3'
 * '<S883>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant30'
 * '<S884>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant31'
 * '<S885>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant32'
 * '<S886>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant33'
 * '<S887>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant34'
 * '<S888>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant35'
 * '<S889>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant36'
 * '<S890>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant37'
 * '<S891>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant38'
 * '<S892>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant39'
 * '<S893>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant4'
 * '<S894>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant5'
 * '<S895>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant6'
 * '<S896>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant7'
 * '<S897>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant8'
 * '<S898>' : 'CCMB_ac/Init/Init_VariantOptions/BLUEN/Enumerated_Constant9'
 * '<S899>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant1'
 * '<S900>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant10'
 * '<S901>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant11'
 * '<S902>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant12'
 * '<S903>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant13'
 * '<S904>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant14'
 * '<S905>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant15'
 * '<S906>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant16'
 * '<S907>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant17'
 * '<S908>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant18'
 * '<S909>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant19'
 * '<S910>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant2'
 * '<S911>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant20'
 * '<S912>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant21'
 * '<S913>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant22'
 * '<S914>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant3'
 * '<S915>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant4'
 * '<S916>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant5'
 * '<S917>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant6'
 * '<S918>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant7'
 * '<S919>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant8'
 * '<S920>' : 'CCMB_ac/Init/Init_VariantOptions/COREBEV/Enumerated_Constant9'
 * '<S921>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant1'
 * '<S922>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant10'
 * '<S923>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant11'
 * '<S924>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant12'
 * '<S925>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant13'
 * '<S926>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant14'
 * '<S927>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant15'
 * '<S928>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant16'
 * '<S929>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant17'
 * '<S930>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant18'
 * '<S931>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant19'
 * '<S932>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant2'
 * '<S933>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant20'
 * '<S934>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant21'
 * '<S935>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant22'
 * '<S936>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant23'
 * '<S937>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant24'
 * '<S938>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant25'
 * '<S939>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant26'
 * '<S940>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant27'
 * '<S941>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant28'
 * '<S942>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant29'
 * '<S943>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant3'
 * '<S944>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant4'
 * '<S945>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant5'
 * '<S946>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant6'
 * '<S947>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant7'
 * '<S948>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant8'
 * '<S949>' : 'CCMB_ac/Init/Init_VariantOptions/PEGASUS/Enumerated_Constant9'
 */
#endif                                 /* RTW_HEADER_CCMB_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
