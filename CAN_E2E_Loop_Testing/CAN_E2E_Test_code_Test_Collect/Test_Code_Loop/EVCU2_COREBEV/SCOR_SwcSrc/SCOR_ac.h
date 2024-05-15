/*
 * File: SCOR_ac.h
 *
 * Code generated for Simulink model 'SCOR_ac'.
 *
 * Model version                  : 9.159
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:57:33 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SCOR_ac_h_
#define RTW_HEADER_SCOR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef SCOR_ac_COMMON_INCLUDES_
#define SCOR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_SCOR.h"
#endif                                 /* SCOR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block states (default storage) for system '<S864>/Enable' */
typedef struct
{
    float32 UnitDelay1_DSTATE;         /* '<S943>/Unit Delay1' */
    sint16 UnitDelay_DSTATE;           /* '<S943>/Unit Delay' */
    boolean UnitDelay2_DSTATE;         /* '<S943>/Unit Delay2' */
}
DW_Enable_SCOR_ac_T;

/* Block signals (default storage) */
typedef struct tag_B_SCOR_ac_T
{
    float32 OutportBufferForVeSCOR_Pct_TtlP;/* '<S5>/Const3' */
    float32 LaSCOR_n_InitMtrBSpdDsrdN[9];/* '<S4>/HaSCOR_n_InitMtrBSpdDsrdN' */
    float32 LaSCOR_M_ToMaxMaxMA[9];    /* '<S4>/HaSCOR_M_InitInputToMaxMaxMA' */
    float32 LaSCOR_M_ToMaxMaxN[9];     /* '<S4>/HaSCOR_M_InitInputToMaxMaxN' */
    float32 LeSCOR_M_EVToMaxwStrtRsrv;/* '<S4>/HeSCOR_M_InitEVToMaxwStrtRsrv' */
    float32 LaSCOR_M_InitOptInputTorqMA[9];/* '<S4>/HaSCOR_M_InitOptInputTorqMA' */
    float32 LaSCOR_M_InitOptInputTorqMB[9];/* '<S4>/HaSCOR_M_InitOptInputTorqMB' */
    float32 OutportBufferForLeSCOR_P_InitFC;/* '<S4>/Constant Value1' */
    float32 VariantMergeForOutportOptNC1_MB[9];
    float32 VariantMergeForOutportOptNC2_MB[9];
    float32 VariantMergeForOutportOptNi_MB[9];

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    float32 VariantMerge_For_Variant_Source;

#define B_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    float32 VariantMerge_For_Variant_Sour_d;

#define B_SCOR_AC_T_VARIANT_EXISTS
#endif

    float32 VariantMerge_For_Variant_Sour_n;
    float32 Merge1;                    /* '<S351>/Merge1' */
    float32 Merge11;                   /* '<S351>/Merge11' */
    float32 Merge12;                   /* '<S351>/Merge12' */
    float32 Merge13;                   /* '<S351>/Merge13' */
    float32 Merge3;                    /* '<S351>/Merge3' */
    float32 Merge9;                    /* '<S351>/Merge9' */
    float32 ArrayAssignment15[9];      /* '<S831>/Array Assignment15' */
    float32 ArrayAssignment29[9];      /* '<S831>/Array Assignment29' */
    float32 Gain_e3;                   /* '<S851>/Gain' */
    float32 Gain_ej;                   /* '<S853>/Gain' */
    float32 Gain_kz;                   /* '<S859>/Gain' */
    float32 Gain_gg;                   /* '<S860>/Gain' */
    float32 ArrayAssignment15_d[9];    /* '<S832>/Array Assignment15' */
    float32 ArrayAssignment29_e[9];    /* '<S832>/Array Assignment29' */
    float32 Gain_h1;                   /* '<S965>/Gain' */
    float32 Gain_hd;                   /* '<S967>/Gain' */
    float32 Gain_kq;                   /* '<S973>/Gain' */
    float32 Gain_dy;                   /* '<S974>/Gain' */
    float32 ArrayAssignment29_l[9];    /* '<S833>/Array Assignment29' */
    float32 Gain_ng;                   /* '<S1079>/Gain' */
    float32 Gain_f2;                   /* '<S1081>/Gain' */
    float32 Gain_c5;                   /* '<S1087>/Gain' */
    float32 Gain_b2;                   /* '<S1088>/Gain' */
    float32 ArrayAssignment15_f[9];    /* '<S834>/Array Assignment15' */
    float32 ArrayAssignment29_c[9];    /* '<S834>/Array Assignment29' */
    float32 Gain_mq;                   /* '<S1193>/Gain' */
    float32 Gain_hr;                   /* '<S1195>/Gain' */
    float32 Gain_k4;                   /* '<S1201>/Gain' */
    float32 Gain_lc;                   /* '<S1202>/Gain' */
    float32 ArrayAssignment29_g[9];    /* '<S835>/Array Assignment29' */
    float32 Gain_aqq;                  /* '<S1307>/Gain' */
    float32 Gain_h5;                   /* '<S1309>/Gain' */
    float32 Gain_hf;                   /* '<S1315>/Gain' */
    float32 Gain_dk;                   /* '<S1316>/Gain' */
    float32 ArrayAssignment29_m[9];    /* '<S836>/Array Assignment29' */
    float32 Gain_dl;                   /* '<S1421>/Gain' */
    float32 Gain_ef;                   /* '<S1423>/Gain' */
    float32 Gain_n1;                   /* '<S1429>/Gain' */
    float32 Gain_fm;                   /* '<S1430>/Gain' */
    float32 ArrayAssignment29_i[9];    /* '<S837>/Array Assignment29' */
    float32 Gain_fg;                   /* '<S1535>/Gain' */
    float32 Gain_ae;                   /* '<S1544>/Gain' */
    float32 ArrayAssignment15_n[9];    /* '<S838>/Array Assignment15' */
    float32 ArrayAssignment29_l5[9];   /* '<S838>/Array Assignment29' */
    float32 Gain_h5r;                  /* '<S1649>/Gain' */
    float32 Gain_fx;                   /* '<S1651>/Gain' */
    float32 Gain_lu;                   /* '<S1657>/Gain' */
    float32 Gain_f4;                   /* '<S1658>/Gain' */
    float32 VariantMergeForOutportToMaxwStr;
    float32 VariantMergeForOutportToMaxwS_m;
    float32 VariantMergeForOutportLaSCOC_P_[6];

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    float32 Merge2[9];                 /* '<S369>/Merge2' */

#define B_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    float32 Merge[9];                  /* '<S369>/Merge' */

#define B_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    float32 Merge1_i[9];               /* '<S369>/Merge1' */

#define B_SCOR_AC_T_VARIANT_EXISTS
#endif

    float32 VariantMergeForOutportEngLoss_N[9];
    float32 VariantMergeForOutportNbOpt_N[9];
    float32 VariantMergeForOutportNiOpt_N[9];
    float32 Gain_jnd;                  /* '<S263>/Gain' */
    float32 Gain_hg;                   /* '<S275>/Gain' */
    float32 Gain_kt;                   /* '<S284>/Gain' */
    float32 Gain_o3;                   /* '<S286>/Gain' */
    float32 Gain_fo;                   /* '<S288>/Gain' */
    float32 Gain_lr;                   /* '<S265>/Gain' */
    float32 Gain_gb;                   /* '<S267>/Gain' */
    float32 Gain_io;                   /* '<S271>/Gain' */
    float32 Gain_c5d;                  /* '<S276>/Gain' */
    float32 Gain_px;                   /* '<S273>/Gain' */
    float32 Gain_eo;                   /* '<S278>/Gain' */
    float32 Gain_af;                   /* '<S269>/Gain' */
    float32 Gain_m3;                   /* '<S281>/Gain' */
    float32 Gain_og;                   /* '<S282>/Gain' */
    float32 Gain_j4[6];                /* '<S280>/Gain' */
    sint16 Gain_cx;                    /* '<S208>/Gain' */
    sint16 Gain_bb;                    /* '<S200>/Gain' */
    sint16 Gain_fe;                    /* '<S192>/Gain' */
    sint16 Gain_bs;                    /* '<S184>/Gain' */
    sint16 Gain_mz5;                   /* '<S852>/Gain' */
    sint16 Gain_iw;                    /* '<S854>/Gain' */
    sint16 Gain_dd;                    /* '<S856>/Gain' */
    sint16 Gain_fcn[2];                /* '<S858>/Gain' */
    sint16 Gain_n5;                    /* '<S861>/Gain' */
    sint16 Gain_mb;                    /* '<S966>/Gain' */
    sint16 Gain_ec;                    /* '<S968>/Gain' */
    sint16 Gain_k0;                    /* '<S970>/Gain' */
    sint16 Gain_o5[2];                 /* '<S972>/Gain' */
    sint16 Gain_mt;                    /* '<S975>/Gain' */
    sint16 Gain_gkt;                   /* '<S1080>/Gain' */
    sint16 Gain_mv;                    /* '<S1082>/Gain' */
    sint16 Gain_ek;                    /* '<S1084>/Gain' */
    sint16 Gain_ge[2];                 /* '<S1086>/Gain' */
    sint16 Gain_os;                    /* '<S1089>/Gain' */
    sint16 Gain_hz;                    /* '<S1194>/Gain' */
    sint16 Gain_or;                    /* '<S1196>/Gain' */
    sint16 Gain_joi;                   /* '<S1198>/Gain' */
    sint16 Gain_bj[2];                 /* '<S1200>/Gain' */
    sint16 Gain_ps;                    /* '<S1203>/Gain' */
    sint16 Gain_kq2;                   /* '<S1308>/Gain' */
    sint16 Gain_oc;                    /* '<S1310>/Gain' */
    sint16 Gain_cv;                    /* '<S1312>/Gain' */
    sint16 Gain_lz[2];                 /* '<S1314>/Gain' */
    sint16 Gain_lrt;                   /* '<S1317>/Gain' */
    sint16 Gain_e5;                    /* '<S1422>/Gain' */
    sint16 Gain_kr;                    /* '<S1424>/Gain' */
    sint16 Gain_b3;                    /* '<S1426>/Gain' */
    sint16 Gain_ds[2];                 /* '<S1428>/Gain' */
    sint16 Gain_iu;                    /* '<S1431>/Gain' */
    sint16 Gain_a4;                    /* '<S1536>/Gain' */
    sint16 Gain_ic;                    /* '<S1540>/Gain' */
    sint16 Gain_am[2];                 /* '<S1542>/Gain' */
    sint16 Gain_lf;                    /* '<S1650>/Gain' */
    sint16 Gain_jh;                    /* '<S1652>/Gain' */
    sint16 Gain_fq;                    /* '<S1654>/Gain' */
    sint16 Gain_jw[2];                 /* '<S1656>/Gain' */
    sint16 Gain_gl;                    /* '<S1659>/Gain' */

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    sint16 Gain_hy;                    /* '<S805>/Gain' */

#define B_SCOR_AC_T_VARIANT_EXISTS
#endif

    sint16 Gain_fp;                    /* '<S264>/Gain' */
    sint16 Gain_nv;                    /* '<S283>/Gain' */
    sint16 Gain_c5h;                   /* '<S285>/Gain' */
    sint16 Gain_ku;                    /* '<S287>/Gain' */
    sint16 Gain_bt;                    /* '<S289>/Gain' */
    sint16 Gain_fme;                   /* '<S266>/Gain' */
    sint16 Gain_dr;                    /* '<S268>/Gain' */
    sint16 Gain_fq1;                   /* '<S272>/Gain' */
    sint16 Gain_nr;                    /* '<S277>/Gain' */
    sint16 Gain_psc;                   /* '<S274>/Gain' */
    sint16 Gain_g5;                    /* '<S279>/Gain' */
    sint16 Gain_nvg;                   /* '<S270>/Gain' */
    boolean OutportBufferForVeSCOR_b_TLC_Re;/* '<S5>/Const1' */
    boolean OutportBufferForVeSCOR_b_DsrdRn;/* '<S5>/Const2' */
    boolean OutportBufferForVeSCOR_b_Dsrd_i;/* '<S5>/Const5' */
    boolean OutportBufferForLeSCOR_b_InitRe;/* '<S4>/Constant Value7' */
    boolean Gain_fr;                   /* '<S855>/Gain' */
    boolean Gain_cj;                   /* '<S969>/Gain' */
    boolean VariantMergeForOutportToMaxwS_j;
    boolean VariantMergeForOutportToMaxwS_n;
    TeSCOR_e_OptRng_SG OutportBufferForVeSCOR_e_RngDsr;/* '<S5>/Const4' */
    TeSCOR_e_OptGear_SG Selector;      /* '<S76>/Selector' */
    TeSCOR_e_OptGear_SG Selector1;     /* '<S76>/Selector1' */
    TeSCOR_e_OptGear_SG Selector2;     /* '<S76>/Selector2' */
}
B_SCOR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_SCOR_ac_T
{
    float32 UnitDelay1_DSTATE;         /* '<S213>/Unit Delay1' */
    float32 UnitDelay1_DSTATE_b;       /* '<S203>/Unit Delay1' */
    float32 UnitDelay1_DSTATE_n;       /* '<S195>/Unit Delay1' */
    float32 UnitDelay1_DSTATE_d;       /* '<S187>/Unit Delay1' */
    float32 UnitDelay1_DSTATE_f;       /* '<S179>/Unit Delay1' */
    float32 UnitDelay_DSTATE;          /* '<S95>/Unit Delay' */
    float32 UnitDelay_DSTATE_c;        /* '<S94>/Unit Delay' */
    float32 UnitDelay_DSTATE_g;        /* '<S96>/Unit Delay' */
    float32 UnitDelay1_DSTATE_o;       /* '<S357>/Unit Delay1' */

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    float32 UnitDelay7_DSTATE[9];      /* '<S229>/Unit Delay7' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    float32 UnitDelay6_DSTATE[9];      /* '<S229>/Unit Delay6' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    float32 UnitDelay5_DSTATE[9];      /* '<S229>/Unit Delay5' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    float32 UnitDelay16_DSTATE[9];     /* '<S229>/Unit Delay16' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    float32 UnitDelay2_DSTATE[9];      /* '<S229>/Unit Delay2' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    float32 UnitDelay4_DSTATE[9];      /* '<S229>/Unit Delay4' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    float32 UnitDelay3_DSTATE[9];      /* '<S229>/Unit Delay3' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    float32 UnitDelay1_DSTATE_nw[9];   /* '<S229>/Unit Delay1' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

    float32 UnitDelay_DSTATE_ck;       /* '<S1848>/Unit Delay' */
    float32 UnitDelay_DSTATE_e;        /* '<S1847>/Unit Delay' */
    float32 UnitDelay_DSTATE_f;        /* '<S1846>/Unit Delay' */
    float32 UnitDelay1_DSTATE_i;       /* '<S831>/Unit Delay1' */
    float32 UnitDelay6_DSTATE_g;       /* '<S831>/Unit Delay6' */
    float32 UnitDelay9_DSTATE;         /* '<S831>/Unit Delay9' */
    float32 UnitDelay4_DSTATE_k;       /* '<S831>/Unit Delay4' */
    float32 UnitDelay1_DSTATE_k;       /* '<S832>/Unit Delay1' */
    float32 UnitDelay6_DSTATE_i;       /* '<S832>/Unit Delay6' */
    float32 UnitDelay9_DSTATE_c;       /* '<S832>/Unit Delay9' */
    float32 UnitDelay4_DSTATE_e;       /* '<S832>/Unit Delay4' */
    float32 UnitDelay1_DSTATE_h;       /* '<S833>/Unit Delay1' */
    float32 UnitDelay6_DSTATE_d;       /* '<S833>/Unit Delay6' */
    float32 UnitDelay9_DSTATE_a;       /* '<S833>/Unit Delay9' */
    float32 UnitDelay4_DSTATE_eq;      /* '<S833>/Unit Delay4' */
    float32 UnitDelay1_DSTATE_kn;      /* '<S834>/Unit Delay1' */
    float32 UnitDelay6_DSTATE_a;       /* '<S834>/Unit Delay6' */
    float32 UnitDelay9_DSTATE_n;       /* '<S834>/Unit Delay9' */
    float32 UnitDelay4_DSTATE_o;       /* '<S834>/Unit Delay4' */
    float32 UnitDelay1_DSTATE_e;       /* '<S835>/Unit Delay1' */
    float32 UnitDelay6_DSTATE_m;       /* '<S835>/Unit Delay6' */
    float32 UnitDelay9_DSTATE_i;       /* '<S835>/Unit Delay9' */
    float32 UnitDelay4_DSTATE_h;       /* '<S835>/Unit Delay4' */
    float32 UnitDelay1_DSTATE_l;       /* '<S836>/Unit Delay1' */
    float32 UnitDelay6_DSTATE_ak;      /* '<S836>/Unit Delay6' */
    float32 UnitDelay9_DSTATE_l;       /* '<S836>/Unit Delay9' */
    float32 UnitDelay4_DSTATE_h0;      /* '<S836>/Unit Delay4' */
    float32 UnitDelay1_DSTATE_id;      /* '<S837>/Unit Delay1' */
    float32 UnitDelay6_DSTATE_d3;      /* '<S837>/Unit Delay6' */
    float32 UnitDelay9_DSTATE_o;       /* '<S837>/Unit Delay9' */
    float32 UnitDelay4_DSTATE_k0;      /* '<S837>/Unit Delay4' */
    float32 UnitDelay1_DSTATE_c;       /* '<S838>/Unit Delay1' */
    float32 UnitDelay6_DSTATE_il;      /* '<S838>/Unit Delay6' */
    float32 UnitDelay9_DSTATE_m;       /* '<S838>/Unit Delay9' */
    float32 UnitDelay4_DSTATE_n;       /* '<S838>/Unit Delay4' */

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    float32 UnitDelay_DSTATE_o;        /* '<S363>/Unit Delay' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    float32 UnitDelay1_DSTATE_ii;      /* '<S800>/Unit Delay1' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    float32 UnitDelay1_DSTATE_dr;      /* '<S792>/Unit Delay1' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    float32 UnitDelay_DSTATE_fl;       /* '<S648>/Unit Delay' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    float32 UnitDelay_DSTATE_j;        /* '<S646>/Unit Delay' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

    sint16 UnitDelay_DSTATE_cu;        /* '<S60>/Unit Delay' */
    sint16 UnitDelay_DSTATE_k;         /* '<S213>/Unit Delay' */
    sint16 UnitDelay_DSTATE_c1;        /* '<S203>/Unit Delay' */
    sint16 UnitDelay_DSTATE_ca;        /* '<S195>/Unit Delay' */
    sint16 UnitDelay_DSTATE_gu;        /* '<S187>/Unit Delay' */
    sint16 UnitDelay_DSTATE_l;         /* '<S179>/Unit Delay' */
    sint16 UnitDelay3_DSTATE_b;        /* '<S357>/Unit Delay3' */
    sint16 UnitDelay2_DSTATE_m;        /* '<S357>/Unit Delay2' */
    sint16 UnitDelay14_DSTATE[2];      /* '<S229>/Unit Delay14' */
    sint16 UnitDelay13_DSTATE[2];      /* '<S229>/Unit Delay13' */
    sint16 UnitDelay12_DSTATE[2];      /* '<S229>/Unit Delay12' */
    sint16 UnitDelay15_DSTATE[2];      /* '<S229>/Unit Delay15' */
    sint16 UnitDelay9_DSTATE_oj[2];    /* '<S229>/Unit Delay9' */
    sint16 UnitDelay11_DSTATE[2];      /* '<S229>/Unit Delay11' */
    sint16 UnitDelay10_DSTATE[2];      /* '<S229>/Unit Delay10' */
    sint16 UnitDelay8_DSTATE[2];       /* '<S229>/Unit Delay8' */
    sint16 UnitDelay_DSTATE_ga;        /* '<S831>/Unit Delay' */
    sint16 UnitDelay7_DSTATE_j;        /* '<S831>/Unit Delay7' */
    sint16 UnitDelay10_DSTATE_g;       /* '<S831>/Unit Delay10' */
    sint16 UnitDelay3_DSTATE_l;        /* '<S831>/Unit Delay3' */
    sint16 UnitDelay_DSTATE_fz;        /* '<S832>/Unit Delay' */
    sint16 UnitDelay7_DSTATE_ju;       /* '<S832>/Unit Delay7' */
    sint16 UnitDelay10_DSTATE_e;       /* '<S832>/Unit Delay10' */
    sint16 UnitDelay3_DSTATE_p;        /* '<S832>/Unit Delay3' */
    sint16 UnitDelay_DSTATE_lf;        /* '<S833>/Unit Delay' */
    sint16 UnitDelay7_DSTATE_j2;       /* '<S833>/Unit Delay7' */
    sint16 UnitDelay10_DSTATE_l;       /* '<S833>/Unit Delay10' */
    sint16 UnitDelay3_DSTATE_e;        /* '<S833>/Unit Delay3' */
    sint16 UnitDelay_DSTATE_d;         /* '<S834>/Unit Delay' */
    sint16 UnitDelay7_DSTATE_g;        /* '<S834>/Unit Delay7' */
    sint16 UnitDelay10_DSTATE_b;       /* '<S834>/Unit Delay10' */
    sint16 UnitDelay3_DSTATE_i;        /* '<S834>/Unit Delay3' */
    sint16 UnitDelay_DSTATE_h;         /* '<S835>/Unit Delay' */
    sint16 UnitDelay7_DSTATE_p;        /* '<S835>/Unit Delay7' */
    sint16 UnitDelay10_DSTATE_h;       /* '<S835>/Unit Delay10' */
    sint16 UnitDelay3_DSTATE_g;        /* '<S835>/Unit Delay3' */
    sint16 UnitDelay_DSTATE_i;         /* '<S836>/Unit Delay' */
    sint16 UnitDelay7_DSTATE_n;        /* '<S836>/Unit Delay7' */
    sint16 UnitDelay10_DSTATE_n;       /* '<S836>/Unit Delay10' */
    sint16 UnitDelay3_DSTATE_a;        /* '<S836>/Unit Delay3' */
    sint16 UnitDelay_DSTATE_i3;        /* '<S837>/Unit Delay' */
    sint16 UnitDelay7_DSTATE_f;        /* '<S837>/Unit Delay7' */
    sint16 UnitDelay3_DSTATE_d;        /* '<S837>/Unit Delay3' */
    sint16 UnitDelay_DSTATE_op;        /* '<S838>/Unit Delay' */
    sint16 UnitDelay7_DSTATE_nt;       /* '<S838>/Unit Delay7' */
    sint16 UnitDelay10_DSTATE_j;       /* '<S838>/Unit Delay10' */
    sint16 UnitDelay3_DSTATE_h;        /* '<S838>/Unit Delay3' */

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay6_DSTATE_m1;       /* '<S1680>/Unit Delay6' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay7_DSTATE_k;        /* '<S1680>/Unit Delay7' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay6_DSTATE_j;        /* '<S1566>/Unit Delay6' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay7_DSTATE_fc;       /* '<S1566>/Unit Delay7' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay6_DSTATE_dx;       /* '<S1452>/Unit Delay6' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay7_DSTATE_h;        /* '<S1452>/Unit Delay7' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay6_DSTATE_mi;       /* '<S1338>/Unit Delay6' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay7_DSTATE_e;        /* '<S1338>/Unit Delay7' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay6_DSTATE_k;        /* '<S1224>/Unit Delay6' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay7_DSTATE_hi;       /* '<S1224>/Unit Delay7' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay6_DSTATE_n;        /* '<S1110>/Unit Delay6' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay7_DSTATE_em;       /* '<S1110>/Unit Delay7' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay6_DSTATE_o;        /* '<S996>/Unit Delay6' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay7_DSTATE_a;        /* '<S996>/Unit Delay7' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay6_DSTATE_mz;       /* '<S882>/Unit Delay6' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_OptBatPwrBrkEnbl

    sint16 UnitDelay7_DSTATE_pk;       /* '<S882>/Unit Delay7' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    sint16 UnitDelay_DSTATE_g0;        /* '<S800>/Unit Delay' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    sint16 UnitDelay_DSTATE_n;         /* '<S792>/Unit Delay' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

    uint16 UnitDelay_DSTATE_or;        /* '<S1855>/Unit Delay' */
    boolean UnitDelay2_DSTATE_e;       /* '<S213>/Unit Delay2' */
    boolean UnitDelay2_DSTATE_k;       /* '<S203>/Unit Delay2' */
    boolean UnitDelay2_DSTATE_b;       /* '<S195>/Unit Delay2' */
    boolean UnitDelay2_DSTATE_j;       /* '<S187>/Unit Delay2' */
    boolean UnitDelay2_DSTATE_n;       /* '<S179>/Unit Delay2' */
    boolean UnitDelay_DSTATE_cv;       /* '<S101>/Unit Delay' */
    boolean UnitDelay_DSTATE_jp;       /* '<S100>/Unit Delay' */
    boolean UnitDelay_DSTATE_a0;       /* '<S93>/Unit Delay' */
    boolean UnitDelay_DSTATE_e2;       /* '<S92>/Unit Delay' */
    boolean UnitDelay_DSTATE_gj;       /* '<S79>/Unit Delay' */
    boolean UnitDelay_DSTATE_m;        /* '<S78>/Unit Delay' */
    boolean UnitDelay_DSTATE_ph;       /* '<S357>/Unit Delay' */
    boolean UnitDelay_DSTATE_d4;       /* '<S1860>/Unit Delay' */
    boolean UnitDelay_DSTATE_fj;       /* '<S1859>/Unit Delay' */
    boolean UnitDelay_DSTATE_b;        /* '<S1858>/Unit Delay' */
    boolean UnitDelay_DSTATE_kn;       /* '<S1857>/Unit Delay' */
    boolean UnitDelay2_DSTATE_o;       /* '<S831>/Unit Delay2' */
    boolean UnitDelay8_DSTATE_c;       /* '<S831>/Unit Delay8' */
    boolean UnitDelay5_DSTATE_d;       /* '<S831>/Unit Delay5' */
    boolean UnitDelay2_DSTATE_d;       /* '<S832>/Unit Delay2' */
    boolean UnitDelay8_DSTATE_c4;      /* '<S832>/Unit Delay8' */
    boolean UnitDelay5_DSTATE_l;       /* '<S832>/Unit Delay5' */
    boolean UnitDelay2_DSTATE_m2;      /* '<S833>/Unit Delay2' */
    boolean UnitDelay8_DSTATE_h;       /* '<S833>/Unit Delay8' */
    boolean UnitDelay5_DSTATE_de;      /* '<S833>/Unit Delay5' */
    boolean UnitDelay2_DSTATE_mx;      /* '<S834>/Unit Delay2' */
    boolean UnitDelay8_DSTATE_o;       /* '<S834>/Unit Delay8' */
    boolean UnitDelay5_DSTATE_g;       /* '<S834>/Unit Delay5' */
    boolean UnitDelay2_DSTATE_j1;      /* '<S835>/Unit Delay2' */
    boolean UnitDelay8_DSTATE_h4;      /* '<S835>/Unit Delay8' */
    boolean UnitDelay5_DSTATE_k;       /* '<S835>/Unit Delay5' */
    boolean UnitDelay2_DSTATE_mg;      /* '<S836>/Unit Delay2' */
    boolean UnitDelay8_DSTATE_cu;      /* '<S836>/Unit Delay8' */
    boolean UnitDelay5_DSTATE_f;       /* '<S836>/Unit Delay5' */
    boolean UnitDelay2_DSTATE_mr;      /* '<S837>/Unit Delay2' */
    boolean UnitDelay8_DSTATE_d;       /* '<S837>/Unit Delay8' */
    boolean UnitDelay5_DSTATE_fz;      /* '<S837>/Unit Delay5' */
    boolean UnitDelay2_DSTATE_nn;      /* '<S838>/Unit Delay2' */
    boolean UnitDelay8_DSTATE_e;       /* '<S838>/Unit Delay8' */
    boolean UnitDelay5_DSTATE_kz;      /* '<S838>/Unit Delay5' */

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    boolean UnitDelay2_DSTATE_ls;      /* '<S800>/Unit Delay2' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    boolean UnitDelay2_DSTATE_i;       /* '<S792>/Unit Delay2' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    boolean UnitDelay_DSTATE_fy;       /* '<S655>/Unit Delay' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    boolean UnitDelay_DSTATE_me;       /* '<S654>/Unit Delay' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    boolean UnitDelay_DSTATE_ep;       /* '<S647>/Unit Delay' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    boolean UnitDelay_DSTATE_ew;       /* '<S645>/Unit Delay' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_SCOR_EnblStratNRGHyst

    boolean UnitDelay_DSTATE_mf;       /* '<S641>/Unit Delay' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

    boolean UnitDelay_DSTATE_p1;       /* '<S293>/Unit Delay' */
    boolean UnitDelay_DSTATE_k5;       /* '<S292>/Unit Delay' */

#if Rte_SysCon_Variant_OPTR_EnblEVToMaxwStrtRsrv

    DW_Enable_SCOR_ac_T Enable_a;      /* '<S978>/Enable' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OPTR_EnblEVToMaxwStrtRsrv

    DW_Enable_SCOR_ac_T Enable_e;      /* '<S864>/Enable' */

#define DW_SCOR_AC_T_VARIANT_EXISTS
#endif

}
DW_SCOR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeSCOR_e_OptRng_SG Const4;   /* '<S5>/Const4' */
}
ConstB_SCOR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S1876>/Vector'
     *   '<S1877>/Vector'
     */
    uint32 pooled5[2];

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S89>/Vector'
     *   '<S90>/Vector'
     */
    uint32 pooled6[2];
}
ConstP_SCOR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SCOR
#include "MemMap.h"

extern VAR(B_SCOR_ac_T, SCOR_VAR_INIT) SCOR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SCOR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SCOR
#include "MemMap.h"

extern VAR(DW_SCOR_ac_T, SCOR_VAR_INIT) SCOR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SCOR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_SCOR
#include "MemMap.h"

extern CONST(ConstB_SCOR_ac_T, SCOR_VAR_INIT) SCOR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_SCOR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_SCOR
#include "MemMap.h"

extern CONST(ConstP_SCOR_ac_T, SCOR_VAR_INIT) SCOR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_SCOR
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
 * '<Root>' : 'SCOR_ac'
 * '<S1>'   : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn'
 * '<S2>'   : 'SCOR_ac/SCOR_MedTED'
 * '<S3>'   : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd'
 * '<S4>'   : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process'
 * '<S5>'   : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/Sub_Out_Init'
 * '<S6>'   : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd/Enumerated Constant8754'
 * '<S7>'   : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd/Set Block1'
 * '<S8>'   : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd/Set Block10'
 * '<S9>'   : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd/Set Block11'
 * '<S10>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd/Set Block12'
 * '<S11>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd/Set Block2'
 * '<S12>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd/Set Block3'
 * '<S13>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd/Set Block4'
 * '<S14>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd/Set Block5'
 * '<S15>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd/Set Block6'
 * '<S16>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd/Set Block7'
 * '<S17>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd/Set Block8'
 * '<S18>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOI_Init_SGDsrd/Set Block9'
 * '<S19>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Enum Set Block1'
 * '<S20>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Enum Set Block2'
 * '<S21>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Enum Set Block3'
 * '<S22>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Enum Set Block4'
 * '<S23>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Enum Set Block5'
 * '<S24>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Enum Set Block6'
 * '<S25>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Enumerated Constant8752'
 * '<S26>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Enumerated Constant8753'
 * '<S27>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Enumerated Constant8754'
 * '<S28>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/HaOPTR_n_InitInputSpdDsrdMA'
 * '<S29>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/HaOPTR_n_InitInputSpdDsrdMB'
 * '<S30>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/HaOPTR_n_InitInputSpdDsrdN'
 * '<S31>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/HaSCOR_M_InitInputToMaxMaxMA'
 * '<S32>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/HaSCOR_M_InitInputToMaxMaxN'
 * '<S33>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/HaSCOR_M_InitOptInputTorqMA'
 * '<S34>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/HaSCOR_M_InitOptInputTorqMB'
 * '<S35>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/HaSCOR_n_InitMtrBSpdDsrdN'
 * '<S36>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/HeSCOR_M_InitEVToMaxwStrtRsrv'
 * '<S37>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/HeSCOR_e_InitRngSGDsrd'
 * '<S38>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block'
 * '<S39>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block1'
 * '<S40>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block10'
 * '<S41>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block11'
 * '<S42>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block12'
 * '<S43>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block13'
 * '<S44>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block14'
 * '<S45>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block15'
 * '<S46>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block16'
 * '<S47>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block2'
 * '<S48>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block3'
 * '<S49>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block4'
 * '<S50>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block5'
 * '<S51>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block6'
 * '<S52>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block7'
 * '<S53>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block8'
 * '<S54>'  : 'SCOR_ac/SCOR_FUNC_PxPy_PwrOn/SCOO_Init_Process/Set Block9'
 * '<S55>'  : 'SCOR_ac/SCOR_MedTED/Compare To Zero'
 * '<S56>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection'
 * '<S57>'  : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring'
 * '<S58>'  : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals'
 * '<S59>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/Model Info1'
 * '<S60>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection'
 * '<S61>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Enum Set Block1'
 * '<S62>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Enum Set Block10'
 * '<S63>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Enum Set Block11'
 * '<S64>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Enum Set Block12'
 * '<S65>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Enum Set Block13'
 * '<S66>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Enum Set Block2'
 * '<S67>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Enum Set Block3'
 * '<S68>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Enum Set Block4'
 * '<S69>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Enum Set Block5'
 * '<S70>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Enum Set Block6'
 * '<S71>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Enum Set Block7'
 * '<S72>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Enum Set Block8'
 * '<S73>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Enum Set Block9'
 * '<S74>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd'
 * '<S75>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray'
 * '<S76>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection'
 * '<S77>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Subsystem'
 * '<S78>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/EdgeRising'
 * '<S79>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/EdgeRising1'
 * '<S80>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/Enumerated Constant1'
 * '<S81>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/Enumerated Constant2'
 * '<S82>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/Enumerated Constant3'
 * '<S83>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/Enumerated Constant4'
 * '<S84>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/Enumerated Constant5'
 * '<S85>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/Enumerated Constant6'
 * '<S86>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/HeSCOR_t_RngSel_dT'
 * '<S87>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/KaSCOR_P_OffsetPerRngSt_EVAlwd_SG'
 * '<S88>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/KaSCOR_P_OffsetPerRngSt_SeriesMdAlwd_SG'
 * '<S89>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/KtSCOR_t_HoldTime_EV'
 * '<S90>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/KtSCOR_t_HoldTime_SeriesMd'
 * '<S91>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/SCOC_TotalPedalChanges'
 * '<S92>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/Signal Latch On With Reset1'
 * '<S93>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/Signal Latch On With Reset2'
 * '<S94>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/StopWatchResetTriggerEnabled_EV'
 * '<S95>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/StopWatchResetTriggerEnabled_Series'
 * '<S96>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/SCOC_TotalPedalChanges/Digital Lowpass Reset Enabled2'
 * '<S97>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/SCOC_TotalPedalChanges/KeSCOR_k_HoldCurrentRng_AccelPdl_Fltr'
 * '<S98>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/SCOC_TotalPedalChanges/KtSCOR_k_HoldCurrentRng_BrkTrq2PdlFactor'
 * '<S99>'  : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/SCOC_TotalPedalChanges/Protected Division'
 * '<S100>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/StopWatchResetTriggerEnabled_EV/EdgeRising'
 * '<S101>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_Debounce_EVandSeriesMd/StopWatchResetTriggerEnabled_Series/EdgeRising'
 * '<S102>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Constant Value13'
 * '<S103>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant10'
 * '<S104>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant12'
 * '<S105>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant13'
 * '<S106>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant14'
 * '<S107>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant15'
 * '<S108>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant16'
 * '<S109>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant17'
 * '<S110>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant18'
 * '<S111>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant19'
 * '<S112>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant20'
 * '<S113>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant21'
 * '<S114>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant22'
 * '<S115>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant23'
 * '<S116>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant24'
 * '<S117>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant25'
 * '<S118>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant26'
 * '<S119>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant27'
 * '<S120>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant28'
 * '<S121>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant29'
 * '<S122>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant30'
 * '<S123>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant31'
 * '<S124>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant7'
 * '<S125>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant8'
 * '<S126>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/Enumerated Constant9'
 * '<S127>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister'
 * '<S128>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister1'
 * '<S129>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister10'
 * '<S130>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister11'
 * '<S131>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister12'
 * '<S132>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister13'
 * '<S133>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister14'
 * '<S134>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister15'
 * '<S135>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister16'
 * '<S136>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister17'
 * '<S137>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister2'
 * '<S138>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister3'
 * '<S139>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister4'
 * '<S140>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister5'
 * '<S141>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister6'
 * '<S142>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister7'
 * '<S143>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister8'
 * '<S144>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister9'
 * '<S145>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/HaSCOR_b_ParallelEngOnERngSt'
 * '<S146>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/HeSCOR_b_DsblTLCLrnDFSOStChk'
 * '<S147>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/HeSCOR_b_M2TLCLrnAllw'
 * '<S148>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/HeSCOR_b_ReqM2TLCLearnOvrd'
 * '<S149>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/KaSCOR_P_CostOffsetFor_TLC'
 * '<S150>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/KaSCOR_P_OptPwrLossDflt_SG'
 * '<S151>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/KaSCOR_e_SGDsrd_Dflt'
 * '<S152>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister/MATLAB Function'
 * '<S153>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S154>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister10/MATLAB Function'
 * '<S155>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister11/MATLAB Function'
 * '<S156>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister12/MATLAB Function'
 * '<S157>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister13/MATLAB Function'
 * '<S158>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister14/MATLAB Function'
 * '<S159>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister15/MATLAB Function'
 * '<S160>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister16/MATLAB Function'
 * '<S161>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister17/MATLAB Function'
 * '<S162>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister2/MATLAB Function'
 * '<S163>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister3/MATLAB Function'
 * '<S164>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister4/MATLAB Function'
 * '<S165>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister5/MATLAB Function'
 * '<S166>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister6/MATLAB Function'
 * '<S167>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister7/MATLAB Function'
 * '<S168>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister8/MATLAB Function'
 * '<S169>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_PwrLossArray/GetBitFrom16BitRegister9/MATLAB Function'
 * '<S170>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/HeSCOR_e_OptRngSt_Dflt'
 * '<S171>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/HeSCOR_e_OptRngSt_EngOn_Dflt'
 * '<S172>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/HeSCOR_e_ParallelEngOnRngSt_Dflt'
 * '<S173>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd'
 * '<S174>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd_GSI'
 * '<S175>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOn'
 * '<S176>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOpt'
 * '<S177>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/Set Block'
 * '<S178>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/Set Block1'
 * '<S179>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd/If_AnyGear_Allowed'
 * '<S180>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd/If_AnyGear_Allowed/First_Iteration'
 * '<S181>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd/If_AnyGear_Allowed/Index_Selector'
 * '<S182>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd/If_AnyGear_Allowed/KeOPTR_P_DfltOptCost'
 * '<S183>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd/If_AnyGear_Allowed/Set Block'
 * '<S184>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd/If_AnyGear_Allowed/Set Block1'
 * '<S185>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd/If_AnyGear_Allowed/Index_Selector/No_Update'
 * '<S186>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd/If_AnyGear_Allowed/Index_Selector/Update'
 * '<S187>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd_GSI/If_AnyGear_Allowed'
 * '<S188>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd_GSI/If_AnyGear_Allowed/First_Iteration'
 * '<S189>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd_GSI/If_AnyGear_Allowed/Index_Selector'
 * '<S190>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd_GSI/If_AnyGear_Allowed/KeOPTR_P_DfltOptCost'
 * '<S191>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd_GSI/If_AnyGear_Allowed/Set Block'
 * '<S192>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd_GSI/If_AnyGear_Allowed/Set Block1'
 * '<S193>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd_GSI/If_AnyGear_Allowed/Index_Selector/No_Update'
 * '<S194>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeDsrd_GSI/If_AnyGear_Allowed/Index_Selector/Update'
 * '<S195>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOn/If_AnyGear_Allowed'
 * '<S196>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOn/If_AnyGear_Allowed/First_Iteration'
 * '<S197>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOn/If_AnyGear_Allowed/Index_Selector'
 * '<S198>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOn/If_AnyGear_Allowed/KeOPTR_P_DfltOptCost'
 * '<S199>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOn/If_AnyGear_Allowed/Set Block'
 * '<S200>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOn/If_AnyGear_Allowed/Set Block1'
 * '<S201>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOn/If_AnyGear_Allowed/Index_Selector/No_Update'
 * '<S202>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOn/If_AnyGear_Allowed/Index_Selector/Update'
 * '<S203>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOpt/If_AnyGear_Allowed'
 * '<S204>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOpt/If_AnyGear_Allowed/First_Iteration'
 * '<S205>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOpt/If_AnyGear_Allowed/Index_Selector'
 * '<S206>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOpt/If_AnyGear_Allowed/KeOPTR_P_DfltOptCost'
 * '<S207>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOpt/If_AnyGear_Allowed/Set Block'
 * '<S208>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOpt/If_AnyGear_Allowed/Set Block1'
 * '<S209>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOpt/If_AnyGear_Allowed/Index_Selector/No_Update'
 * '<S210>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/SCOC_RangeSelection/SCOC_RangeOpt/If_AnyGear_Allowed/Index_Selector/Update'
 * '<S211>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Subsystem/HeSCOR_e_OptRngSt_Dflt'
 * '<S212>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Subsystem/SCOC_RangeOpt_Raw'
 * '<S213>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Subsystem/SCOC_RangeOpt_Raw/If_AnyGear_Allowed'
 * '<S214>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Subsystem/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/First_Iteration'
 * '<S215>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Subsystem/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/Index_Selector'
 * '<S216>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Subsystem/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/KeOPTR_P_DfltOptCost'
 * '<S217>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Subsystem/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/Set Block'
 * '<S218>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Subsystem/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/Set Block1'
 * '<S219>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Subsystem/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/Index_Selector/No_Update'
 * '<S220>' : 'SCOR_ac/SCOR_MedTED/SCOC_GearSelection/SCOL_Strategic_Gear_Selection/Subsystem/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/Index_Selector/Update'
 * '<S221>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/CostOffsetTrigger'
 * '<S222>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Model Info1'
 * '<S223>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/NRGHystStratDtrmn'
 * '<S224>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/OutputTrigger'
 * '<S225>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions'
 * '<S226>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_EVToMaxStrtRsrv'
 * '<S227>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq'
 * '<S228>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb'
 * '<S229>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel'
 * '<S230>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block1'
 * '<S231>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block10'
 * '<S232>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block11'
 * '<S233>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block12'
 * '<S234>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block13'
 * '<S235>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block14'
 * '<S236>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block15'
 * '<S237>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block16'
 * '<S238>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block17'
 * '<S239>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block18'
 * '<S240>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block19'
 * '<S241>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block2'
 * '<S242>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block20'
 * '<S243>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block3'
 * '<S244>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block4'
 * '<S245>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block5'
 * '<S246>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block6'
 * '<S247>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block7'
 * '<S248>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block8'
 * '<S249>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/Set Block9'
 * '<S250>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/CostOffsetTrigger/Enumerated Constant32'
 * '<S251>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/CostOffsetTrigger/GetBitFrom16BitRegister'
 * '<S252>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/CostOffsetTrigger/GetBitFrom16BitRegister/MATLAB Function'
 * '<S253>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/NRGHystStratDtrmn/KaSCOR_P_WEDStCloseSyncNRG'
 * '<S254>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/NRGHystStratDtrmn/KaSCOR_P_WEDStOpenSyncNRG'
 * '<S255>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/NRGHystStratDtrmn/KaSCOR_n_WEDStSyncNRGNoAxis'
 * '<S256>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/NRGHystStratDtrmn/OPTL_Dynamic1D17pts_Y_Pts'
 * '<S257>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/NRGHystStratDtrmn/OPTL_Dynamic1D17pts_Y_Pts1'
 * '<S258>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/NRGHystStratDtrmn/OPTL_Dynamic1DBSearch16pts_ValAxis'
 * '<S259>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/NRGHystStratDtrmn/OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes '
 * '<S260>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/OutputTrigger/Enumerated Constant41'
 * '<S261>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/OutputTrigger/GetBitFrom16BitRegister'
 * '<S262>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/OutputTrigger/GetBitFrom16BitRegister/MATLAB Function'
 * '<S263>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block'
 * '<S264>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block1'
 * '<S265>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block10'
 * '<S266>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block11'
 * '<S267>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block12'
 * '<S268>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block13'
 * '<S269>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block14'
 * '<S270>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block15'
 * '<S271>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block16'
 * '<S272>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block17'
 * '<S273>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block18'
 * '<S274>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block19'
 * '<S275>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block2'
 * '<S276>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block20'
 * '<S277>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block21'
 * '<S278>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block22'
 * '<S279>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block23'
 * '<S280>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block24'
 * '<S281>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block25'
 * '<S282>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block26'
 * '<S283>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block3'
 * '<S284>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block4'
 * '<S285>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block5'
 * '<S286>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block6'
 * '<S287>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block7'
 * '<S288>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block8'
 * '<S289>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_100ms_OptimumSolutions/Set Block9'
 * '<S290>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_EVToMaxStrtRsrv/SCOC_EVToMaxStrtRsrv'
 * '<S291>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_EVToMaxStrtRsrv/SCOC_EVToMaxStrtRsrv/Enumerated Value1'
 * '<S292>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/Hysteresis1'
 * '<S293>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/Hysteresis3'
 * '<S294>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/KeSCOR_P_FCDsrdPwrBsdReqLSP'
 * '<S295>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/KeSCOR_P_FCDsrdPwrBsdReqRSP'
 * '<S296>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/KeSCOR_P_FCDsrdPwrMaxLim'
 * '<S297>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/KeSCOR_P_FCDsrdPwrMinLim'
 * '<S298>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/KeSCOR_P_FCDsrdPwrOvrdVal'
 * '<S299>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/KeSCOR_P_FCMaxThrmPwrMaxLim'
 * '<S300>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/KeSCOR_P_FCMaxThrmPwrMinLim'
 * '<S301>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/KeSCOR_Pct_dSOCBsdFCReqLSP'
 * '<S302>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/KeSCOR_Pct_dSOCBsdFCReqRSP'
 * '<S303>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/KeSCOR_b_FCDsrdPwrOvrd'
 * '<S304>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/KeSCOR_b_FCReqOvrd'
 * '<S305>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/KeSCOR_b_FCReqOvrdVal'
 * '<S306>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/KtSCOR_P_dSOCFCDsrdPwr'
 * '<S307>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/Limiter1'
 * '<S308>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_FCPSReq/Limiter2'
 * '<S309>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass'
 * '<S310>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable'
 * '<S311>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block1'
 * '<S312>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block10'
 * '<S313>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block11'
 * '<S314>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block12'
 * '<S315>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block13'
 * '<S316>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block14'
 * '<S317>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block15'
 * '<S318>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block16'
 * '<S319>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block17'
 * '<S320>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block18'
 * '<S321>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block19'
 * '<S322>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block2'
 * '<S323>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block3'
 * '<S324>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block4'
 * '<S325>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block5'
 * '<S326>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block6'
 * '<S327>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block7'
 * '<S328>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block8'
 * '<S329>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Bypass/Set Block9'
 * '<S330>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block20'
 * '<S331>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block21'
 * '<S332>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block22'
 * '<S333>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block23'
 * '<S334>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block24'
 * '<S335>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block25'
 * '<S336>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block26'
 * '<S337>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block27'
 * '<S338>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block28'
 * '<S339>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block29'
 * '<S340>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block30'
 * '<S341>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block31'
 * '<S342>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block32'
 * '<S343>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block33'
 * '<S344>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block34'
 * '<S345>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block35'
 * '<S346>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block36'
 * '<S347>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block37'
 * '<S348>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Set Block38'
 * '<S349>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Subsystem1'
 * '<S350>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOC_N_GrA_Arb/Enable/Subsystem2'
 * '<S351>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/BrkOptRngStGrArb'
 * '<S352>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/Enum Set Block1'
 * '<S353>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/Enum Set Block2'
 * '<S354>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis'
 * '<S355>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection'
 * '<S356>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_StgcAlwdArb_Manual'
 * '<S357>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets'
 * '<S358>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets'
 * '<S359>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/BrkOptRngStGrArb/BrkOptGrEnbl'
 * '<S360>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/BrkOptRngStGrArb/BrkOptRngStGrEnbl'
 * '<S361>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/BrkOptRngStGrArb/KeSCOR_b_BrkOptRngStGrEnbl'
 * '<S362>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Bypass'
 * '<S363>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable'
 * '<S364>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Bypass/Enumerated Constant'
 * '<S365>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Bypass/HeSCOR_e_InitRngSGDsrd'
 * '<S366>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/CostOffsetAccum'
 * '<S367>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs'
 * '<S368>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/Passthrough'
 * '<S369>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset'
 * '<S370>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_EBCOIdxDtrmn'
 * '<S371>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst'
 * '<S372>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs'
 * '<S373>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO'
 * '<S374>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/CostOffsetAccum/KaSCOR_r_EBCOFctrRngStGr'
 * '<S375>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/CostOffsetAccum/KeSCOR_b_DsblNRGHystDurBrk'
 * '<S376>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant'
 * '<S377>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant1'
 * '<S378>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant10'
 * '<S379>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant11'
 * '<S380>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant12'
 * '<S381>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant13'
 * '<S382>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant14'
 * '<S383>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant15'
 * '<S384>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant16'
 * '<S385>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant17'
 * '<S386>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant18'
 * '<S387>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant19'
 * '<S388>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant2'
 * '<S389>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant20'
 * '<S390>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant21'
 * '<S391>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant22'
 * '<S392>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant23'
 * '<S393>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant3'
 * '<S394>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant4'
 * '<S395>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant5'
 * '<S396>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant6'
 * '<S397>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant7'
 * '<S398>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant8'
 * '<S399>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Enumerated Constant9'
 * '<S400>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister'
 * '<S401>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister1'
 * '<S402>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister10'
 * '<S403>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister11'
 * '<S404>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister2'
 * '<S405>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister3'
 * '<S406>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister4'
 * '<S407>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister5'
 * '<S408>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister6'
 * '<S409>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister7'
 * '<S410>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister8'
 * '<S411>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister9'
 * '<S412>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/KaSCOR_P_OptPwrLossDflt_SG'
 * '<S413>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/KaSCOR_e_SGDsrd_Dflt'
 * '<S414>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/SCOC_GrA_NArb'
 * '<S415>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem'
 * '<S416>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1'
 * '<S417>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10'
 * '<S418>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11'
 * '<S419>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2'
 * '<S420>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3'
 * '<S421>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4'
 * '<S422>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5'
 * '<S423>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6'
 * '<S424>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7'
 * '<S425>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8'
 * '<S426>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9'
 * '<S427>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister/MATLAB Function'
 * '<S428>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S429>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister10/MATLAB Function'
 * '<S430>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister11/MATLAB Function'
 * '<S431>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister2/MATLAB Function'
 * '<S432>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister3/MATLAB Function'
 * '<S433>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister4/MATLAB Function'
 * '<S434>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister5/MATLAB Function'
 * '<S435>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister6/MATLAB Function'
 * '<S436>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister7/MATLAB Function'
 * '<S437>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister8/MATLAB Function'
 * '<S438>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/GetBitFrom16BitRegister9/MATLAB Function'
 * '<S439>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/SCOC_GrA_NArb/Bypass'
 * '<S440>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/SCOC_GrA_NArb/Enable'
 * '<S441>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/SCOC_GrA_NArb/Bypass/Set Block'
 * '<S442>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/SCOC_GrA_NArb/Bypass/Set Block1'
 * '<S443>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/SCOC_GrA_NArb/Bypass/Set Block2'
 * '<S444>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/SCOC_GrA_NArb/Bypass/Set Block3'
 * '<S445>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/SCOC_GrA_NArb/Enable/Set Block'
 * '<S446>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/SCOC_GrA_NArb/Enable/Set Block1'
 * '<S447>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/SCOC_GrA_NArb/Enable/Set Block2'
 * '<S448>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/SCOC_GrA_NArb/Enable/Set Block3'
 * '<S449>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem'
 * '<S450>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem1'
 * '<S451>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem10'
 * '<S452>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem11'
 * '<S453>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem12'
 * '<S454>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem13'
 * '<S455>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem2'
 * '<S456>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem3'
 * '<S457>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem4'
 * '<S458>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem5'
 * '<S459>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem6'
 * '<S460>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem7'
 * '<S461>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem8'
 * '<S462>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem/If Action Subsystem9'
 * '<S463>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem'
 * '<S464>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem1'
 * '<S465>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem10'
 * '<S466>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem11'
 * '<S467>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem12'
 * '<S468>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem13'
 * '<S469>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem2'
 * '<S470>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem3'
 * '<S471>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem4'
 * '<S472>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem5'
 * '<S473>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem6'
 * '<S474>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem7'
 * '<S475>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem8'
 * '<S476>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem1/If Action Subsystem9'
 * '<S477>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem'
 * '<S478>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem1'
 * '<S479>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem10'
 * '<S480>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem11'
 * '<S481>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem12'
 * '<S482>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem13'
 * '<S483>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem2'
 * '<S484>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem3'
 * '<S485>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem4'
 * '<S486>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem5'
 * '<S487>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem6'
 * '<S488>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem7'
 * '<S489>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem8'
 * '<S490>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem10/If Action Subsystem9'
 * '<S491>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem'
 * '<S492>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem1'
 * '<S493>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem10'
 * '<S494>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem11'
 * '<S495>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem12'
 * '<S496>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem13'
 * '<S497>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem2'
 * '<S498>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem3'
 * '<S499>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem4'
 * '<S500>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem5'
 * '<S501>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem6'
 * '<S502>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem7'
 * '<S503>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem8'
 * '<S504>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem11/If Action Subsystem9'
 * '<S505>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem'
 * '<S506>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem1'
 * '<S507>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem10'
 * '<S508>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem11'
 * '<S509>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem12'
 * '<S510>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem13'
 * '<S511>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem2'
 * '<S512>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem3'
 * '<S513>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem4'
 * '<S514>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem5'
 * '<S515>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem6'
 * '<S516>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem7'
 * '<S517>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem8'
 * '<S518>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem2/If Action Subsystem9'
 * '<S519>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem'
 * '<S520>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem1'
 * '<S521>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem10'
 * '<S522>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem11'
 * '<S523>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem12'
 * '<S524>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem13'
 * '<S525>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem2'
 * '<S526>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem3'
 * '<S527>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem4'
 * '<S528>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem5'
 * '<S529>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem6'
 * '<S530>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem7'
 * '<S531>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem8'
 * '<S532>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem3/If Action Subsystem9'
 * '<S533>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem'
 * '<S534>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem1'
 * '<S535>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem10'
 * '<S536>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem11'
 * '<S537>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem12'
 * '<S538>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem13'
 * '<S539>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem2'
 * '<S540>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem3'
 * '<S541>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem4'
 * '<S542>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem5'
 * '<S543>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem6'
 * '<S544>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem7'
 * '<S545>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem8'
 * '<S546>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem4/If Action Subsystem9'
 * '<S547>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem'
 * '<S548>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem1'
 * '<S549>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem10'
 * '<S550>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem11'
 * '<S551>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem12'
 * '<S552>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem13'
 * '<S553>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem2'
 * '<S554>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem3'
 * '<S555>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem4'
 * '<S556>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem5'
 * '<S557>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem6'
 * '<S558>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem7'
 * '<S559>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem8'
 * '<S560>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem5/If Action Subsystem9'
 * '<S561>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem'
 * '<S562>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem1'
 * '<S563>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem10'
 * '<S564>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem11'
 * '<S565>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem12'
 * '<S566>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem13'
 * '<S567>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem2'
 * '<S568>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem3'
 * '<S569>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem4'
 * '<S570>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem5'
 * '<S571>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem6'
 * '<S572>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem7'
 * '<S573>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem8'
 * '<S574>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem6/If Action Subsystem9'
 * '<S575>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem'
 * '<S576>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem1'
 * '<S577>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem10'
 * '<S578>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem11'
 * '<S579>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem12'
 * '<S580>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem13'
 * '<S581>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem2'
 * '<S582>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem3'
 * '<S583>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem4'
 * '<S584>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem5'
 * '<S585>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem6'
 * '<S586>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem7'
 * '<S587>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem8'
 * '<S588>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem7/If Action Subsystem9'
 * '<S589>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem'
 * '<S590>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem1'
 * '<S591>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem10'
 * '<S592>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem11'
 * '<S593>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem12'
 * '<S594>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem13'
 * '<S595>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem2'
 * '<S596>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem3'
 * '<S597>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem4'
 * '<S598>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem5'
 * '<S599>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem6'
 * '<S600>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem7'
 * '<S601>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem8'
 * '<S602>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem8/If Action Subsystem9'
 * '<S603>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem'
 * '<S604>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem1'
 * '<S605>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem10'
 * '<S606>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem11'
 * '<S607>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem12'
 * '<S608>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem13'
 * '<S609>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem2'
 * '<S610>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem3'
 * '<S611>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem4'
 * '<S612>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem5'
 * '<S613>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem6'
 * '<S614>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem7'
 * '<S615>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem8'
 * '<S616>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/EBCOProcInputs/Subsystem9/If Action Subsystem9'
 * '<S617>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/Enumerated Constant'
 * '<S618>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/Enumerated Constant1'
 * '<S619>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/Enumerated Constant10'
 * '<S620>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/Enumerated Constant11'
 * '<S621>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/Enumerated Constant2'
 * '<S622>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/Enumerated Constant3'
 * '<S623>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/Enumerated Constant4'
 * '<S624>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/Enumerated Constant5'
 * '<S625>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/Enumerated Constant6'
 * '<S626>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/Enumerated Constant7'
 * '<S627>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/Enumerated Constant8'
 * '<S628>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/Enumerated Constant9'
 * '<S629>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/If Action Subsystem'
 * '<S630>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/If Action Subsystem1'
 * '<S631>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/If Action Subsystem10'
 * '<S632>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/If Action Subsystem11'
 * '<S633>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/If Action Subsystem2'
 * '<S634>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/If Action Subsystem3'
 * '<S635>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/If Action Subsystem4'
 * '<S636>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/If Action Subsystem5'
 * '<S637>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/If Action Subsystem6'
 * '<S638>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/If Action Subsystem7'
 * '<S639>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/If Action Subsystem8'
 * '<S640>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOCSelCostOffset/If Action Subsystem9'
 * '<S641>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_EBCOIdxDtrmn/EdgeRising'
 * '<S642>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_EBCOIdxDtrmn/HeSCOR_b_EBCO_Enbl'
 * '<S643>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_EBCOIdxDtrmn/HeSCOR_t_dT'
 * '<S644>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_EBCOIdxDtrmn/KeSCOR_t_EBCOInitDelay'
 * '<S645>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_EBCOIdxDtrmn/Signal Latch On With Reset'
 * '<S646>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_EBCOIdxDtrmn/Turn On Delay Time'
 * '<S647>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_EBCOIdxDtrmn/Turn On Delay Time/EdgeRising'
 * '<S648>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/Accumulator_Reset'
 * '<S649>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/Constant Value1'
 * '<S650>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/Constant Value2'
 * '<S651>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/Constant Value3'
 * '<S652>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/Constant Value4'
 * '<S653>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/DsblSt_to_EnblSt'
 * '<S654>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/EdgeRising'
 * '<S655>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/EdgeRising2'
 * '<S656>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/EnblSt_to_DsblSt'
 * '<S657>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/HaSCOR_e_StratNRGHystState'
 * '<S658>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/KaSCOR_P_OffsetPerRngSt_StratNRGHyst'
 * '<S659>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/KeSCOR_P_StratNRGHystIntg_Factor'
 * '<S660>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/KeSCOR_b_DsblNRGHystDurBrk'
 * '<S661>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SCOC_StgcNRGHyst/Passthrough'
 * '<S662>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Enumerated Constant'
 * '<S663>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Enumerated Constant1'
 * '<S664>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Enumerated Constant2'
 * '<S665>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Enumerated Constant3'
 * '<S666>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Enumerated Constant4'
 * '<S667>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Enumerated Constant5'
 * '<S668>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Enumerated Constant8634'
 * '<S669>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Enumerated Constant8635'
 * '<S670>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Enumerated Constant8636'
 * '<S671>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Enumerated Constant8637'
 * '<S672>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Enumerated Constant8638'
 * '<S673>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Enumerated Constant8639'
 * '<S674>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/GetBitFrom16BitRegister'
 * '<S675>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/GetBitFrom16BitRegister1'
 * '<S676>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/GetBitFrom16BitRegister2'
 * '<S677>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/GetBitFrom16BitRegister3'
 * '<S678>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/GetBitFrom16BitRegister4'
 * '<S679>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/GetBitFrom16BitRegister5'
 * '<S680>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/KaSCOR_P_OptPwrLossDflt_SG'
 * '<S681>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/KaSCOR_e_SGDsrd_Dflt'
 * '<S682>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/SCOC_GrA_NArb'
 * '<S683>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem'
 * '<S684>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1'
 * '<S685>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2'
 * '<S686>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3'
 * '<S687>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4'
 * '<S688>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6'
 * '<S689>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/GetBitFrom16BitRegister/MATLAB Function'
 * '<S690>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S691>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/GetBitFrom16BitRegister2/MATLAB Function'
 * '<S692>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/GetBitFrom16BitRegister3/MATLAB Function'
 * '<S693>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/GetBitFrom16BitRegister4/MATLAB Function'
 * '<S694>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/GetBitFrom16BitRegister5/MATLAB Function'
 * '<S695>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/SCOC_GrA_NArb/Bypass'
 * '<S696>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/SCOC_GrA_NArb/Enable'
 * '<S697>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/SCOC_GrA_NArb/Bypass/Set Block'
 * '<S698>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/SCOC_GrA_NArb/Bypass/Set Block1'
 * '<S699>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/SCOC_GrA_NArb/Bypass/Set Block15'
 * '<S700>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/SCOC_GrA_NArb/Bypass/Set Block2'
 * '<S701>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/SCOC_GrA_NArb/Enable/Set Block'
 * '<S702>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/SCOC_GrA_NArb/Enable/Set Block1'
 * '<S703>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/SCOC_GrA_NArb/Enable/Set Block20'
 * '<S704>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/SCOC_GrA_NArb/Enable/Set Block26'
 * '<S705>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem'
 * '<S706>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem1'
 * '<S707>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem10'
 * '<S708>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem11'
 * '<S709>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem12'
 * '<S710>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem13'
 * '<S711>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem2'
 * '<S712>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem3'
 * '<S713>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem4'
 * '<S714>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem5'
 * '<S715>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem6'
 * '<S716>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem7'
 * '<S717>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem8'
 * '<S718>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem/If Action Subsystem9'
 * '<S719>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem'
 * '<S720>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem1'
 * '<S721>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem10'
 * '<S722>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem11'
 * '<S723>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem12'
 * '<S724>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem13'
 * '<S725>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem2'
 * '<S726>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem3'
 * '<S727>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem4'
 * '<S728>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem5'
 * '<S729>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem6'
 * '<S730>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem7'
 * '<S731>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem8'
 * '<S732>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem1/If Action Subsystem9'
 * '<S733>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem'
 * '<S734>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem1'
 * '<S735>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem10'
 * '<S736>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem11'
 * '<S737>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem12'
 * '<S738>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem13'
 * '<S739>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem2'
 * '<S740>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem3'
 * '<S741>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem4'
 * '<S742>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem5'
 * '<S743>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem6'
 * '<S744>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem7'
 * '<S745>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem8'
 * '<S746>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem2/If Action Subsystem9'
 * '<S747>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem'
 * '<S748>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem1'
 * '<S749>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem10'
 * '<S750>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem11'
 * '<S751>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem12'
 * '<S752>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem13'
 * '<S753>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem2'
 * '<S754>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem3'
 * '<S755>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem4'
 * '<S756>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem5'
 * '<S757>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem6'
 * '<S758>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem7'
 * '<S759>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem8'
 * '<S760>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem3/If Action Subsystem9'
 * '<S761>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem'
 * '<S762>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem1'
 * '<S763>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem10'
 * '<S764>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem11'
 * '<S765>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem12'
 * '<S766>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem13'
 * '<S767>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem2'
 * '<S768>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem3'
 * '<S769>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem4'
 * '<S770>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem5'
 * '<S771>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem6'
 * '<S772>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem7'
 * '<S773>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem8'
 * '<S774>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem4/If Action Subsystem9'
 * '<S775>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem'
 * '<S776>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem1'
 * '<S777>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem10'
 * '<S778>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem11'
 * '<S779>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem12'
 * '<S780>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem13'
 * '<S781>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem2'
 * '<S782>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem3'
 * '<S783>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem4'
 * '<S784>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem5'
 * '<S785>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem6'
 * '<S786>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem7'
 * '<S787>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem8'
 * '<S788>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/SSCOProcInputs/Subsystem6/If Action Subsystem9'
 * '<S789>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/HeSCOR_e_OptRngSt_Dflt'
 * '<S790>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw'
 * '<S791>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw1'
 * '<S792>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw/If_AnyGear_Allowed'
 * '<S793>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/First_Iteration'
 * '<S794>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/Index_Selector'
 * '<S795>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/KeOPTR_P_DfltOptCost'
 * '<S796>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/Set Block'
 * '<S797>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/Set Block1'
 * '<S798>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/Index_Selector/No_Update'
 * '<S799>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw/If_AnyGear_Allowed/Index_Selector/Update'
 * '<S800>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw1/If_AnyGear_Allowed'
 * '<S801>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw1/If_AnyGear_Allowed/First_Iteration'
 * '<S802>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw1/If_AnyGear_Allowed/Index_Selector'
 * '<S803>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw1/If_AnyGear_Allowed/KeOPTR_P_DfltOptCost'
 * '<S804>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw1/If_AnyGear_Allowed/Set Block'
 * '<S805>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw1/If_AnyGear_Allowed/Set Block1'
 * '<S806>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw1/If_AnyGear_Allowed/Index_Selector/No_Update'
 * '<S807>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Energy_Hystresis/Enable/StSelRawEBCO/SCOC_RangeOpt_Raw1/If_AnyGear_Allowed/Index_Selector/Update'
 * '<S808>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/Enumerated Constant8641'
 * '<S809>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/Enumerated Constant8642'
 * '<S810>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/Enumerated Constant8643'
 * '<S811>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/Enumerated Constant8644'
 * '<S812>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/Enumerated Constant8645'
 * '<S813>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/Enumerated Constant8646'
 * '<S814>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/Enumerated Constant8647'
 * '<S815>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/Enumerated Constant8648'
 * '<S816>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/HaOPTR_b_OptBatPwrBrk_EVM_Enbl'
 * '<S817>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/HaOPTR_b_OptBatPwrBrk_EVN_Enbl'
 * '<S818>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/HaOPTR_b_OptBatPwrBrk_Gr_Enbl'
 * '<S819>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/HaOPTR_b_OptBatPwrBrk_MA_Enbl'
 * '<S820>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/HaOPTR_b_OptBatPwrBrk_MB_Enbl'
 * '<S821>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/HaOPTR_b_OptBatPwrBrk_N_Enbl'
 * '<S822>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/HeSCOR_b_UseEVMPbatBrk_EVN'
 * '<S823>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/HeSCOR_b_UseGrPbatBrk_MB'
 * '<S824>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/HeSCOR_b_UseMAPbatBrk_N'
 * '<S825>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/KeSCOR_P_OptBatPwrBrk_EVM_Factor'
 * '<S826>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/KeSCOR_P_OptBatPwrBrk_EVN_Factor'
 * '<S827>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/KeSCOR_P_OptBatPwrBrk_Gr_Factor'
 * '<S828>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/KeSCOR_P_OptBatPwrBrk_MA_Factor'
 * '<S829>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/KeSCOR_P_OptBatPwrBrk_MB_Factor'
 * '<S830>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/KeSCOR_P_OptBatPwrBrk_N_Factor'
 * '<S831>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM'
 * '<S832>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN'
 * '<S833>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr'
 * '<S834>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA'
 * '<S835>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA'
 * '<S836>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB'
 * '<S837>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR'
 * '<S838>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N'
 * '<S839>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/First_Iteration'
 * '<S840>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/First_Iteration2'
 * '<S841>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/First_IterationGSI'
 * '<S842>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/GearSelectorGSI'
 * '<S843>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/GetBitFrom16BitRegister'
 * '<S844>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/GetBitFrom16BitRegister1'
 * '<S845>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/GetBitFrom16BitRegister2'
 * '<S846>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/HeSCOR_b_EBCO_Enbl'
 * '<S847>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Model Info1'
 * '<S848>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOC_AllowedGearSelector'
 * '<S849>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOC_GearSelector2'
 * '<S850>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum'
 * '<S851>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Set Block'
 * '<S852>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Set Block1'
 * '<S853>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Set Block10'
 * '<S854>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Set Block11'
 * '<S855>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Set Block2'
 * '<S856>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Set Block3'
 * '<S857>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Set Block4'
 * '<S858>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Set Block5'
 * '<S859>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Set Block6'
 * '<S860>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Set Block7'
 * '<S861>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Set Block8'
 * '<S862>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Set Block9'
 * '<S863>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1'
 * '<S864>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector'
 * '<S865>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/GearSelectorGSI/No_Update'
 * '<S866>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/GearSelectorGSI/Update'
 * '<S867>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/GetBitFrom16BitRegister/MATLAB Function'
 * '<S868>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S869>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/GetBitFrom16BitRegister2/MATLAB Function'
 * '<S870>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOC_AllowedGearSelector/No_Update'
 * '<S871>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOC_AllowedGearSelector/Update'
 * '<S872>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOC_GearSelector2/No_Update'
 * '<S873>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOC_GearSelector2/No_Update2nd'
 * '<S874>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOC_GearSelector2/Update'
 * '<S875>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOC_GearSelector2/Update2nd'
 * '<S876>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOC_GearSelector2/Update2nd2'
 * '<S877>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Bypass'
 * '<S878>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable'
 * '<S879>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Bypass/Set Block'
 * '<S880>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Bypass/Set Block1'
 * '<S881>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Bypass/Set Block2'
 * '<S882>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable'
 * '<S883>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Passthrough'
 * '<S884>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8733'
 * '<S885>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8734'
 * '<S886>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8735'
 * '<S887>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8736'
 * '<S888>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8737'
 * '<S889>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8738'
 * '<S890>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn'
 * '<S891>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister'
 * '<S892>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1'
 * '<S893>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn'
 * '<S894>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit'
 * '<S895>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1'
 * '<S896>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8739'
 * '<S897>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8740'
 * '<S898>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8741'
 * '<S899>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1'
 * '<S900>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit/MATLAB Function'
 * '<S901>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1/MATLAB Function'
 * '<S902>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem'
 * '<S903>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem1'
 * '<S904>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem10'
 * '<S905>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem11'
 * '<S906>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem12'
 * '<S907>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem13'
 * '<S908>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem2'
 * '<S909>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem3'
 * '<S910>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem4'
 * '<S911>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem5'
 * '<S912>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem6'
 * '<S913>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem7'
 * '<S914>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem8'
 * '<S915>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem9'
 * '<S916>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister/MATLAB Function'
 * '<S917>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S918>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8742'
 * '<S919>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8743'
 * '<S920>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8744'
 * '<S921>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MaxUpdate'
 * '<S922>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MinUpdate'
 * '<S923>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/No_Update'
 * '<S924>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem'
 * '<S925>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem1'
 * '<S926>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem10'
 * '<S927>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem11'
 * '<S928>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem12'
 * '<S929>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem13'
 * '<S930>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem2'
 * '<S931>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem3'
 * '<S932>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem4'
 * '<S933>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem5'
 * '<S934>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem6'
 * '<S935>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem7'
 * '<S936>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem8'
 * '<S937>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/Subsystem1/If Action Subsystem9'
 * '<S938>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Bypass'
 * '<S939>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Enable'
 * '<S940>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Bypass/Set Block'
 * '<S941>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Bypass/Set Block1'
 * '<S942>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Bypass/Set Block2'
 * '<S943>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Enable/Subsystem'
 * '<S944>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Enable/Subsystem/First_Iteration'
 * '<S945>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister'
 * '<S946>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector'
 * '<S947>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Enable/Subsystem/Set Block'
 * '<S948>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Enable/Subsystem/Set Block1'
 * '<S949>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Enable/Subsystem/Set Block2'
 * '<S950>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister/MATLAB Function'
 * '<S951>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/No_Update'
 * '<S952>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVM/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/Update'
 * '<S953>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/First_Iteration'
 * '<S954>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/First_Iteration2'
 * '<S955>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/First_IterationGSI'
 * '<S956>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/GearSelectorGSI'
 * '<S957>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/GetBitFrom16BitRegister'
 * '<S958>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/GetBitFrom16BitRegister1'
 * '<S959>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/GetBitFrom16BitRegister2'
 * '<S960>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/HeSCOR_b_EBCO_Enbl'
 * '<S961>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Model Info1'
 * '<S962>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOC_AllowedGearSelector'
 * '<S963>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOC_GearSelector2'
 * '<S964>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum'
 * '<S965>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Set Block'
 * '<S966>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Set Block1'
 * '<S967>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Set Block10'
 * '<S968>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Set Block11'
 * '<S969>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Set Block2'
 * '<S970>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Set Block3'
 * '<S971>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Set Block4'
 * '<S972>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Set Block5'
 * '<S973>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Set Block6'
 * '<S974>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Set Block7'
 * '<S975>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Set Block8'
 * '<S976>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Set Block9'
 * '<S977>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1'
 * '<S978>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector'
 * '<S979>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/GearSelectorGSI/No_Update'
 * '<S980>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/GearSelectorGSI/Update'
 * '<S981>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/GetBitFrom16BitRegister/MATLAB Function'
 * '<S982>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S983>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/GetBitFrom16BitRegister2/MATLAB Function'
 * '<S984>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOC_AllowedGearSelector/No_Update'
 * '<S985>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOC_AllowedGearSelector/Update'
 * '<S986>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOC_GearSelector2/No_Update'
 * '<S987>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOC_GearSelector2/No_Update2nd'
 * '<S988>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOC_GearSelector2/Update'
 * '<S989>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOC_GearSelector2/Update2nd'
 * '<S990>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOC_GearSelector2/Update2nd2'
 * '<S991>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Bypass'
 * '<S992>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable'
 * '<S993>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Bypass/Set Block'
 * '<S994>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Bypass/Set Block1'
 * '<S995>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Bypass/Set Block2'
 * '<S996>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable'
 * '<S997>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Passthrough'
 * '<S998>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8733'
 * '<S999>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8734'
 * '<S1000>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8735'
 * '<S1001>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8736'
 * '<S1002>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8737'
 * '<S1003>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8738'
 * '<S1004>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn'
 * '<S1005>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister'
 * '<S1006>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1'
 * '<S1007>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn'
 * '<S1008>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit'
 * '<S1009>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1'
 * '<S1010>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8739'
 * '<S1011>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8740'
 * '<S1012>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8741'
 * '<S1013>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1'
 * '<S1014>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit/MATLAB Function'
 * '<S1015>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1/MATLAB Function'
 * '<S1016>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem'
 * '<S1017>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem1'
 * '<S1018>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem10'
 * '<S1019>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem11'
 * '<S1020>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem12'
 * '<S1021>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem13'
 * '<S1022>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem2'
 * '<S1023>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem3'
 * '<S1024>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem4'
 * '<S1025>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem5'
 * '<S1026>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem6'
 * '<S1027>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem7'
 * '<S1028>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem8'
 * '<S1029>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem9'
 * '<S1030>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1031>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S1032>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8742'
 * '<S1033>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8743'
 * '<S1034>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8744'
 * '<S1035>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MaxUpdate'
 * '<S1036>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MinUpdate'
 * '<S1037>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/No_Update'
 * '<S1038>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem'
 * '<S1039>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem1'
 * '<S1040>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem10'
 * '<S1041>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem11'
 * '<S1042>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem12'
 * '<S1043>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem13'
 * '<S1044>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem2'
 * '<S1045>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem3'
 * '<S1046>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem4'
 * '<S1047>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem5'
 * '<S1048>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem6'
 * '<S1049>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem7'
 * '<S1050>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem8'
 * '<S1051>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/Subsystem1/If Action Subsystem9'
 * '<S1052>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Bypass'
 * '<S1053>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Enable'
 * '<S1054>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Bypass/Set Block'
 * '<S1055>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Bypass/Set Block1'
 * '<S1056>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Bypass/Set Block2'
 * '<S1057>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Enable/Subsystem'
 * '<S1058>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Enable/Subsystem/First_Iteration'
 * '<S1059>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister'
 * '<S1060>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector'
 * '<S1061>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Enable/Subsystem/Set Block'
 * '<S1062>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Enable/Subsystem/Set Block1'
 * '<S1063>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Enable/Subsystem/Set Block2'
 * '<S1064>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1065>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/No_Update'
 * '<S1066>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_EVN/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/Update'
 * '<S1067>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/First_Iteration'
 * '<S1068>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/First_Iteration2'
 * '<S1069>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/First_IterationGSI'
 * '<S1070>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/GearSelectorGSI'
 * '<S1071>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/GetBitFrom16BitRegister'
 * '<S1072>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/GetBitFrom16BitRegister1'
 * '<S1073>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/GetBitFrom16BitRegister2'
 * '<S1074>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/HeSCOR_b_EBCO_Enbl'
 * '<S1075>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Model Info1'
 * '<S1076>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOC_AllowedGearSelector'
 * '<S1077>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOC_GearSelector2'
 * '<S1078>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum'
 * '<S1079>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Set Block'
 * '<S1080>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Set Block1'
 * '<S1081>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Set Block10'
 * '<S1082>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Set Block11'
 * '<S1083>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Set Block2'
 * '<S1084>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Set Block3'
 * '<S1085>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Set Block4'
 * '<S1086>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Set Block5'
 * '<S1087>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Set Block6'
 * '<S1088>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Set Block7'
 * '<S1089>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Set Block8'
 * '<S1090>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Set Block9'
 * '<S1091>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1'
 * '<S1092>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector'
 * '<S1093>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/GearSelectorGSI/No_Update'
 * '<S1094>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/GearSelectorGSI/Update'
 * '<S1095>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1096>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S1097>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/GetBitFrom16BitRegister2/MATLAB Function'
 * '<S1098>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOC_AllowedGearSelector/No_Update'
 * '<S1099>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOC_AllowedGearSelector/Update'
 * '<S1100>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOC_GearSelector2/No_Update'
 * '<S1101>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOC_GearSelector2/No_Update2nd'
 * '<S1102>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOC_GearSelector2/Update'
 * '<S1103>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOC_GearSelector2/Update2nd'
 * '<S1104>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOC_GearSelector2/Update2nd2'
 * '<S1105>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Bypass'
 * '<S1106>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable'
 * '<S1107>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Bypass/Set Block'
 * '<S1108>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Bypass/Set Block1'
 * '<S1109>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Bypass/Set Block2'
 * '<S1110>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable'
 * '<S1111>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Passthrough'
 * '<S1112>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8733'
 * '<S1113>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8734'
 * '<S1114>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8735'
 * '<S1115>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8736'
 * '<S1116>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8737'
 * '<S1117>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8738'
 * '<S1118>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn'
 * '<S1119>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister'
 * '<S1120>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1'
 * '<S1121>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn'
 * '<S1122>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit'
 * '<S1123>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1'
 * '<S1124>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8739'
 * '<S1125>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8740'
 * '<S1126>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8741'
 * '<S1127>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1'
 * '<S1128>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit/MATLAB Function'
 * '<S1129>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1/MATLAB Function'
 * '<S1130>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem'
 * '<S1131>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem1'
 * '<S1132>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem10'
 * '<S1133>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem11'
 * '<S1134>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem12'
 * '<S1135>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem13'
 * '<S1136>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem2'
 * '<S1137>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem3'
 * '<S1138>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem4'
 * '<S1139>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem5'
 * '<S1140>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem6'
 * '<S1141>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem7'
 * '<S1142>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem8'
 * '<S1143>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem9'
 * '<S1144>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1145>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S1146>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8742'
 * '<S1147>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8743'
 * '<S1148>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8744'
 * '<S1149>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MaxUpdate'
 * '<S1150>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MinUpdate'
 * '<S1151>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/No_Update'
 * '<S1152>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem'
 * '<S1153>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem1'
 * '<S1154>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem10'
 * '<S1155>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem11'
 * '<S1156>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem12'
 * '<S1157>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem13'
 * '<S1158>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem2'
 * '<S1159>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem3'
 * '<S1160>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem4'
 * '<S1161>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem5'
 * '<S1162>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem6'
 * '<S1163>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem7'
 * '<S1164>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem8'
 * '<S1165>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/Subsystem1/If Action Subsystem9'
 * '<S1166>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Bypass'
 * '<S1167>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Enable'
 * '<S1168>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Bypass/Set Block'
 * '<S1169>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Bypass/Set Block1'
 * '<S1170>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Bypass/Set Block2'
 * '<S1171>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Enable/Subsystem'
 * '<S1172>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Enable/Subsystem/First_Iteration'
 * '<S1173>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister'
 * '<S1174>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector'
 * '<S1175>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Enable/Subsystem/Set Block'
 * '<S1176>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Enable/Subsystem/Set Block1'
 * '<S1177>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Enable/Subsystem/Set Block2'
 * '<S1178>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1179>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/No_Update'
 * '<S1180>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_Gr/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/Update'
 * '<S1181>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/First_Iteration'
 * '<S1182>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/First_Iteration2'
 * '<S1183>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/First_IterationGSI'
 * '<S1184>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/GearSelectorGSI'
 * '<S1185>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/GetBitFrom16BitRegister'
 * '<S1186>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/GetBitFrom16BitRegister1'
 * '<S1187>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/GetBitFrom16BitRegister2'
 * '<S1188>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/HeSCOR_b_EBCO_Enbl'
 * '<S1189>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Model Info1'
 * '<S1190>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOC_AllowedGearSelector'
 * '<S1191>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOC_GearSelector2'
 * '<S1192>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum'
 * '<S1193>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Set Block'
 * '<S1194>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Set Block1'
 * '<S1195>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Set Block10'
 * '<S1196>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Set Block11'
 * '<S1197>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Set Block2'
 * '<S1198>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Set Block3'
 * '<S1199>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Set Block4'
 * '<S1200>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Set Block5'
 * '<S1201>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Set Block6'
 * '<S1202>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Set Block7'
 * '<S1203>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Set Block8'
 * '<S1204>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Set Block9'
 * '<S1205>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1'
 * '<S1206>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector'
 * '<S1207>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/GearSelectorGSI/No_Update'
 * '<S1208>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/GearSelectorGSI/Update'
 * '<S1209>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1210>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S1211>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/GetBitFrom16BitRegister2/MATLAB Function'
 * '<S1212>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOC_AllowedGearSelector/No_Update'
 * '<S1213>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOC_AllowedGearSelector/Update'
 * '<S1214>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOC_GearSelector2/No_Update'
 * '<S1215>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOC_GearSelector2/No_Update2nd'
 * '<S1216>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOC_GearSelector2/Update'
 * '<S1217>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOC_GearSelector2/Update2nd'
 * '<S1218>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOC_GearSelector2/Update2nd2'
 * '<S1219>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Bypass'
 * '<S1220>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable'
 * '<S1221>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Bypass/Set Block'
 * '<S1222>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Bypass/Set Block1'
 * '<S1223>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Bypass/Set Block2'
 * '<S1224>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable'
 * '<S1225>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Passthrough'
 * '<S1226>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8733'
 * '<S1227>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8734'
 * '<S1228>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8735'
 * '<S1229>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8736'
 * '<S1230>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8737'
 * '<S1231>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8738'
 * '<S1232>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn'
 * '<S1233>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister'
 * '<S1234>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1'
 * '<S1235>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn'
 * '<S1236>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit'
 * '<S1237>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1'
 * '<S1238>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8739'
 * '<S1239>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8740'
 * '<S1240>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8741'
 * '<S1241>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1'
 * '<S1242>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit/MATLAB Function'
 * '<S1243>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1/MATLAB Function'
 * '<S1244>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem'
 * '<S1245>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem1'
 * '<S1246>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem10'
 * '<S1247>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem11'
 * '<S1248>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem12'
 * '<S1249>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem13'
 * '<S1250>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem2'
 * '<S1251>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem3'
 * '<S1252>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem4'
 * '<S1253>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem5'
 * '<S1254>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem6'
 * '<S1255>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem7'
 * '<S1256>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem8'
 * '<S1257>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem9'
 * '<S1258>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1259>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S1260>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8742'
 * '<S1261>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8743'
 * '<S1262>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8744'
 * '<S1263>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MaxUpdate'
 * '<S1264>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MinUpdate'
 * '<S1265>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/No_Update'
 * '<S1266>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem'
 * '<S1267>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem1'
 * '<S1268>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem10'
 * '<S1269>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem11'
 * '<S1270>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem12'
 * '<S1271>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem13'
 * '<S1272>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem2'
 * '<S1273>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem3'
 * '<S1274>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem4'
 * '<S1275>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem5'
 * '<S1276>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem6'
 * '<S1277>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem7'
 * '<S1278>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem8'
 * '<S1279>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/Subsystem1/If Action Subsystem9'
 * '<S1280>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Bypass'
 * '<S1281>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Enable'
 * '<S1282>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Bypass/Set Block'
 * '<S1283>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Bypass/Set Block1'
 * '<S1284>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Bypass/Set Block2'
 * '<S1285>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Enable/Subsystem'
 * '<S1286>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Enable/Subsystem/First_Iteration'
 * '<S1287>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister'
 * '<S1288>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector'
 * '<S1289>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Enable/Subsystem/Set Block'
 * '<S1290>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Enable/Subsystem/Set Block1'
 * '<S1291>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Enable/Subsystem/Set Block2'
 * '<S1292>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1293>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/No_Update'
 * '<S1294>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_GrA/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/Update'
 * '<S1295>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/First_Iteration'
 * '<S1296>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/First_Iteration2'
 * '<S1297>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/First_IterationGSI'
 * '<S1298>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/GearSelectorGSI'
 * '<S1299>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/GetBitFrom16BitRegister'
 * '<S1300>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/GetBitFrom16BitRegister1'
 * '<S1301>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/GetBitFrom16BitRegister2'
 * '<S1302>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/HeSCOR_b_EBCO_Enbl'
 * '<S1303>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Model Info1'
 * '<S1304>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOC_AllowedGearSelector'
 * '<S1305>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOC_GearSelector2'
 * '<S1306>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum'
 * '<S1307>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Set Block'
 * '<S1308>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Set Block1'
 * '<S1309>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Set Block10'
 * '<S1310>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Set Block11'
 * '<S1311>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Set Block2'
 * '<S1312>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Set Block3'
 * '<S1313>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Set Block4'
 * '<S1314>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Set Block5'
 * '<S1315>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Set Block6'
 * '<S1316>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Set Block7'
 * '<S1317>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Set Block8'
 * '<S1318>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Set Block9'
 * '<S1319>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1'
 * '<S1320>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector'
 * '<S1321>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/GearSelectorGSI/No_Update'
 * '<S1322>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/GearSelectorGSI/Update'
 * '<S1323>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1324>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S1325>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/GetBitFrom16BitRegister2/MATLAB Function'
 * '<S1326>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOC_AllowedGearSelector/No_Update'
 * '<S1327>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOC_AllowedGearSelector/Update'
 * '<S1328>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOC_GearSelector2/No_Update'
 * '<S1329>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOC_GearSelector2/No_Update2nd'
 * '<S1330>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOC_GearSelector2/Update'
 * '<S1331>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOC_GearSelector2/Update2nd'
 * '<S1332>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOC_GearSelector2/Update2nd2'
 * '<S1333>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Bypass'
 * '<S1334>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable'
 * '<S1335>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Bypass/Set Block'
 * '<S1336>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Bypass/Set Block1'
 * '<S1337>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Bypass/Set Block2'
 * '<S1338>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable'
 * '<S1339>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Passthrough'
 * '<S1340>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8733'
 * '<S1341>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8734'
 * '<S1342>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8735'
 * '<S1343>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8736'
 * '<S1344>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8737'
 * '<S1345>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8738'
 * '<S1346>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn'
 * '<S1347>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister'
 * '<S1348>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1'
 * '<S1349>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn'
 * '<S1350>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit'
 * '<S1351>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1'
 * '<S1352>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8739'
 * '<S1353>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8740'
 * '<S1354>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8741'
 * '<S1355>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1'
 * '<S1356>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit/MATLAB Function'
 * '<S1357>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1/MATLAB Function'
 * '<S1358>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem'
 * '<S1359>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem1'
 * '<S1360>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem10'
 * '<S1361>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem11'
 * '<S1362>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem12'
 * '<S1363>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem13'
 * '<S1364>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem2'
 * '<S1365>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem3'
 * '<S1366>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem4'
 * '<S1367>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem5'
 * '<S1368>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem6'
 * '<S1369>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem7'
 * '<S1370>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem8'
 * '<S1371>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem9'
 * '<S1372>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1373>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S1374>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8742'
 * '<S1375>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8743'
 * '<S1376>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8744'
 * '<S1377>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MaxUpdate'
 * '<S1378>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MinUpdate'
 * '<S1379>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/No_Update'
 * '<S1380>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem'
 * '<S1381>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem1'
 * '<S1382>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem10'
 * '<S1383>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem11'
 * '<S1384>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem12'
 * '<S1385>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem13'
 * '<S1386>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem2'
 * '<S1387>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem3'
 * '<S1388>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem4'
 * '<S1389>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem5'
 * '<S1390>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem6'
 * '<S1391>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem7'
 * '<S1392>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem8'
 * '<S1393>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/Subsystem1/If Action Subsystem9'
 * '<S1394>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Bypass'
 * '<S1395>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Enable'
 * '<S1396>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Bypass/Set Block'
 * '<S1397>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Bypass/Set Block1'
 * '<S1398>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Bypass/Set Block2'
 * '<S1399>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Enable/Subsystem'
 * '<S1400>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Enable/Subsystem/First_Iteration'
 * '<S1401>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister'
 * '<S1402>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector'
 * '<S1403>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Enable/Subsystem/Set Block'
 * '<S1404>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Enable/Subsystem/Set Block1'
 * '<S1405>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Enable/Subsystem/Set Block2'
 * '<S1406>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1407>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/No_Update'
 * '<S1408>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MA/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/Update'
 * '<S1409>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/First_Iteration'
 * '<S1410>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/First_Iteration2'
 * '<S1411>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/First_IterationGSI'
 * '<S1412>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/GearSelectorGSI'
 * '<S1413>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/GetBitFrom16BitRegister'
 * '<S1414>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/GetBitFrom16BitRegister1'
 * '<S1415>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/GetBitFrom16BitRegister2'
 * '<S1416>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/HeSCOR_b_EBCO_Enbl'
 * '<S1417>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Model Info1'
 * '<S1418>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOC_AllowedGearSelector'
 * '<S1419>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOC_GearSelector2'
 * '<S1420>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum'
 * '<S1421>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Set Block'
 * '<S1422>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Set Block1'
 * '<S1423>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Set Block10'
 * '<S1424>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Set Block11'
 * '<S1425>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Set Block2'
 * '<S1426>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Set Block3'
 * '<S1427>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Set Block4'
 * '<S1428>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Set Block5'
 * '<S1429>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Set Block6'
 * '<S1430>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Set Block7'
 * '<S1431>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Set Block8'
 * '<S1432>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Set Block9'
 * '<S1433>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1'
 * '<S1434>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector'
 * '<S1435>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/GearSelectorGSI/No_Update'
 * '<S1436>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/GearSelectorGSI/Update'
 * '<S1437>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1438>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S1439>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/GetBitFrom16BitRegister2/MATLAB Function'
 * '<S1440>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOC_AllowedGearSelector/No_Update'
 * '<S1441>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOC_AllowedGearSelector/Update'
 * '<S1442>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOC_GearSelector2/No_Update'
 * '<S1443>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOC_GearSelector2/No_Update2nd'
 * '<S1444>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOC_GearSelector2/Update'
 * '<S1445>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOC_GearSelector2/Update2nd'
 * '<S1446>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOC_GearSelector2/Update2nd2'
 * '<S1447>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Bypass'
 * '<S1448>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable'
 * '<S1449>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Bypass/Set Block'
 * '<S1450>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Bypass/Set Block1'
 * '<S1451>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Bypass/Set Block2'
 * '<S1452>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable'
 * '<S1453>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Passthrough'
 * '<S1454>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8733'
 * '<S1455>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8734'
 * '<S1456>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8735'
 * '<S1457>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8736'
 * '<S1458>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8737'
 * '<S1459>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8738'
 * '<S1460>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn'
 * '<S1461>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister'
 * '<S1462>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1'
 * '<S1463>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn'
 * '<S1464>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit'
 * '<S1465>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1'
 * '<S1466>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8739'
 * '<S1467>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8740'
 * '<S1468>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8741'
 * '<S1469>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1'
 * '<S1470>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit/MATLAB Function'
 * '<S1471>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1/MATLAB Function'
 * '<S1472>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem'
 * '<S1473>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem1'
 * '<S1474>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem10'
 * '<S1475>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem11'
 * '<S1476>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem12'
 * '<S1477>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem13'
 * '<S1478>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem2'
 * '<S1479>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem3'
 * '<S1480>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem4'
 * '<S1481>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem5'
 * '<S1482>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem6'
 * '<S1483>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem7'
 * '<S1484>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem8'
 * '<S1485>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem9'
 * '<S1486>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1487>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S1488>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8742'
 * '<S1489>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8743'
 * '<S1490>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8744'
 * '<S1491>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MaxUpdate'
 * '<S1492>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MinUpdate'
 * '<S1493>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/No_Update'
 * '<S1494>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem'
 * '<S1495>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem1'
 * '<S1496>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem10'
 * '<S1497>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem11'
 * '<S1498>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem12'
 * '<S1499>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem13'
 * '<S1500>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem2'
 * '<S1501>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem3'
 * '<S1502>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem4'
 * '<S1503>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem5'
 * '<S1504>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem6'
 * '<S1505>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem7'
 * '<S1506>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem8'
 * '<S1507>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/Subsystem1/If Action Subsystem9'
 * '<S1508>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Bypass'
 * '<S1509>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Enable'
 * '<S1510>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Bypass/Set Block'
 * '<S1511>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Bypass/Set Block1'
 * '<S1512>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Bypass/Set Block2'
 * '<S1513>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Enable/Subsystem'
 * '<S1514>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Enable/Subsystem/First_Iteration'
 * '<S1515>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister'
 * '<S1516>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector'
 * '<S1517>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Enable/Subsystem/Set Block'
 * '<S1518>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Enable/Subsystem/Set Block1'
 * '<S1519>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Enable/Subsystem/Set Block2'
 * '<S1520>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1521>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/No_Update'
 * '<S1522>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MB/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/Update'
 * '<S1523>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/First_Iteration'
 * '<S1524>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/First_Iteration2'
 * '<S1525>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/First_IterationGSI'
 * '<S1526>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/GearSelectorGSI'
 * '<S1527>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/GetBitFrom16BitRegister'
 * '<S1528>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/GetBitFrom16BitRegister1'
 * '<S1529>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/GetBitFrom16BitRegister2'
 * '<S1530>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/HeSCOR_b_EBCO_Enbl'
 * '<S1531>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Model Info1'
 * '<S1532>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOC_AllowedGearSelector'
 * '<S1533>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOC_GearSelector2'
 * '<S1534>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum'
 * '<S1535>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Set Block'
 * '<S1536>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Set Block1'
 * '<S1537>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Set Block10'
 * '<S1538>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Set Block11'
 * '<S1539>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Set Block2'
 * '<S1540>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Set Block3'
 * '<S1541>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Set Block4'
 * '<S1542>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Set Block5'
 * '<S1543>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Set Block6'
 * '<S1544>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Set Block7'
 * '<S1545>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Set Block8'
 * '<S1546>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Set Block9'
 * '<S1547>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1'
 * '<S1548>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector'
 * '<S1549>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/GearSelectorGSI/No_Update'
 * '<S1550>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/GearSelectorGSI/Update'
 * '<S1551>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1552>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S1553>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/GetBitFrom16BitRegister2/MATLAB Function'
 * '<S1554>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOC_AllowedGearSelector/No_Update'
 * '<S1555>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOC_AllowedGearSelector/Update'
 * '<S1556>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOC_GearSelector2/No_Update'
 * '<S1557>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOC_GearSelector2/No_Update2nd'
 * '<S1558>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOC_GearSelector2/Update'
 * '<S1559>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOC_GearSelector2/Update2nd'
 * '<S1560>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOC_GearSelector2/Update2nd2'
 * '<S1561>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Bypass'
 * '<S1562>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable'
 * '<S1563>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Bypass/Set Block'
 * '<S1564>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Bypass/Set Block1'
 * '<S1565>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Bypass/Set Block2'
 * '<S1566>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable'
 * '<S1567>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Passthrough'
 * '<S1568>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8733'
 * '<S1569>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8734'
 * '<S1570>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8735'
 * '<S1571>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8736'
 * '<S1572>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8737'
 * '<S1573>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8738'
 * '<S1574>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn'
 * '<S1575>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister'
 * '<S1576>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1'
 * '<S1577>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn'
 * '<S1578>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit'
 * '<S1579>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1'
 * '<S1580>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8739'
 * '<S1581>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8740'
 * '<S1582>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8741'
 * '<S1583>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1'
 * '<S1584>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit/MATLAB Function'
 * '<S1585>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1/MATLAB Function'
 * '<S1586>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem'
 * '<S1587>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem1'
 * '<S1588>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem10'
 * '<S1589>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem11'
 * '<S1590>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem12'
 * '<S1591>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem13'
 * '<S1592>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem2'
 * '<S1593>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem3'
 * '<S1594>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem4'
 * '<S1595>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem5'
 * '<S1596>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem6'
 * '<S1597>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem7'
 * '<S1598>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem8'
 * '<S1599>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem9'
 * '<S1600>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1601>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S1602>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8742'
 * '<S1603>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8743'
 * '<S1604>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8744'
 * '<S1605>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MaxUpdate'
 * '<S1606>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MinUpdate'
 * '<S1607>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/No_Update'
 * '<S1608>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem'
 * '<S1609>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem1'
 * '<S1610>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem10'
 * '<S1611>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem11'
 * '<S1612>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem12'
 * '<S1613>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem13'
 * '<S1614>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem2'
 * '<S1615>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem3'
 * '<S1616>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem4'
 * '<S1617>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem5'
 * '<S1618>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem6'
 * '<S1619>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem7'
 * '<S1620>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem8'
 * '<S1621>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/Subsystem1/If Action Subsystem9'
 * '<S1622>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Bypass'
 * '<S1623>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Enable'
 * '<S1624>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Bypass/Set Block'
 * '<S1625>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Bypass/Set Block1'
 * '<S1626>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Bypass/Set Block2'
 * '<S1627>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Enable/Subsystem'
 * '<S1628>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Enable/Subsystem/First_Iteration'
 * '<S1629>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister'
 * '<S1630>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector'
 * '<S1631>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Enable/Subsystem/Set Block'
 * '<S1632>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Enable/Subsystem/Set Block1'
 * '<S1633>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Enable/Subsystem/Set Block2'
 * '<S1634>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1635>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/No_Update'
 * '<S1636>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_MBNR/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/Update'
 * '<S1637>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/First_Iteration'
 * '<S1638>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/First_Iteration2'
 * '<S1639>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/First_IterationGSI'
 * '<S1640>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/GearSelectorGSI'
 * '<S1641>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/GetBitFrom16BitRegister'
 * '<S1642>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/GetBitFrom16BitRegister1'
 * '<S1643>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/GetBitFrom16BitRegister2'
 * '<S1644>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/HeSCOR_b_EBCO_Enbl'
 * '<S1645>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Model Info1'
 * '<S1646>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOC_AllowedGearSelector'
 * '<S1647>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOC_GearSelector2'
 * '<S1648>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum'
 * '<S1649>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Set Block'
 * '<S1650>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Set Block1'
 * '<S1651>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Set Block10'
 * '<S1652>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Set Block11'
 * '<S1653>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Set Block2'
 * '<S1654>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Set Block3'
 * '<S1655>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Set Block4'
 * '<S1656>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Set Block5'
 * '<S1657>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Set Block6'
 * '<S1658>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Set Block7'
 * '<S1659>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Set Block8'
 * '<S1660>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Set Block9'
 * '<S1661>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1'
 * '<S1662>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector'
 * '<S1663>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/GearSelectorGSI/No_Update'
 * '<S1664>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/GearSelectorGSI/Update'
 * '<S1665>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1666>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S1667>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/GetBitFrom16BitRegister2/MATLAB Function'
 * '<S1668>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOC_AllowedGearSelector/No_Update'
 * '<S1669>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOC_AllowedGearSelector/Update'
 * '<S1670>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOC_GearSelector2/No_Update'
 * '<S1671>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOC_GearSelector2/No_Update2nd'
 * '<S1672>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOC_GearSelector2/Update'
 * '<S1673>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOC_GearSelector2/Update2nd'
 * '<S1674>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOC_GearSelector2/Update2nd2'
 * '<S1675>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Bypass'
 * '<S1676>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable'
 * '<S1677>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Bypass/Set Block'
 * '<S1678>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Bypass/Set Block1'
 * '<S1679>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Bypass/Set Block2'
 * '<S1680>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable'
 * '<S1681>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Passthrough'
 * '<S1682>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8733'
 * '<S1683>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8734'
 * '<S1684>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8735'
 * '<S1685>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8736'
 * '<S1686>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8737'
 * '<S1687>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/Enumerated Constant8738'
 * '<S1688>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn'
 * '<S1689>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister'
 * '<S1690>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1'
 * '<S1691>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn'
 * '<S1692>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit'
 * '<S1693>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1'
 * '<S1694>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8739'
 * '<S1695>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8740'
 * '<S1696>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Enumerated Constant8741'
 * '<S1697>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1'
 * '<S1698>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit/MATLAB Function'
 * '<S1699>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/BitSetClear_16Bit1/MATLAB Function'
 * '<S1700>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem'
 * '<S1701>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem1'
 * '<S1702>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem10'
 * '<S1703>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem11'
 * '<S1704>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem12'
 * '<S1705>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem13'
 * '<S1706>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem2'
 * '<S1707>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem3'
 * '<S1708>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem4'
 * '<S1709>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem5'
 * '<S1710>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem6'
 * '<S1711>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem7'
 * '<S1712>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem8'
 * '<S1713>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/FirstIter_MinMaxGrDtrmn/Subsystem1/If Action Subsystem9'
 * '<S1714>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1715>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/GetBitFrom16BitRegister1/MATLAB Function'
 * '<S1716>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8742'
 * '<S1717>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8743'
 * '<S1718>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/Enumerated Constant8744'
 * '<S1719>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MaxUpdate'
 * '<S1720>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/MinUpdate'
 * '<S1721>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/SCOL_PbatBrk_Accum/Enable/Enable/MinMaxGrDtrmn/No_Update'
 * '<S1722>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem'
 * '<S1723>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem1'
 * '<S1724>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem10'
 * '<S1725>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem11'
 * '<S1726>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem12'
 * '<S1727>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem13'
 * '<S1728>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem2'
 * '<S1729>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem3'
 * '<S1730>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem4'
 * '<S1731>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem5'
 * '<S1732>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem6'
 * '<S1733>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem7'
 * '<S1734>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem8'
 * '<S1735>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/Subsystem1/If Action Subsystem9'
 * '<S1736>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Bypass'
 * '<S1737>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Enable'
 * '<S1738>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Bypass/Set Block'
 * '<S1739>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Bypass/Set Block1'
 * '<S1740>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Bypass/Set Block2'
 * '<S1741>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Enable/Subsystem'
 * '<S1742>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Enable/Subsystem/First_Iteration'
 * '<S1743>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister'
 * '<S1744>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector'
 * '<S1745>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Enable/Subsystem/Set Block'
 * '<S1746>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Enable/Subsystem/Set Block1'
 * '<S1747>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Enable/Subsystem/Set Block2'
 * '<S1748>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Enable/Subsystem/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1749>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/No_Update'
 * '<S1750>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_GearSelection/SCOC_OptGearSel_N/ToMaxGearSelector/Enable/Subsystem/SCOC_ToMaxGearSelector/Update'
 * '<S1751>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_StgcAlwdArb_Manual/BitSetClear_16Bit'
 * '<S1752>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_StgcAlwdArb_Manual/HeOPTR_b_FixedGrDpndntRngSt_EVM'
 * '<S1753>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_StgcAlwdArb_Manual/HeOPTR_b_FixedGrDpndntRngSt_EVN'
 * '<S1754>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_StgcAlwdArb_Manual/HeOPTR_b_FixedGrDpndntRngSt_Gr'
 * '<S1755>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_StgcAlwdArb_Manual/HeOPTR_b_FixedGrDpndntRngSt_MA'
 * '<S1756>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_StgcAlwdArb_Manual/HeOPTR_b_FixedGrDpndntRngSt_MB'
 * '<S1757>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_StgcAlwdArb_Manual/HeOPTR_b_FixedGrDpndntRngSt_N_GA'
 * '<S1758>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_StgcAlwdArb_Manual/BitSetClear_16Bit/MATLAB Function'
 * '<S1759>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_EVM'
 * '<S1760>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_EVN'
 * '<S1761>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_G'
 * '<S1762>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_GrA'
 * '<S1763>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_MA'
 * '<S1764>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_MB'
 * '<S1765>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_N'
 * '<S1766>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk'
 * '<S1767>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerDsrdRangeSt_EVM'
 * '<S1768>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerDsrdRangeSt_EVN'
 * '<S1769>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerDsrdRangeSt_G'
 * '<S1770>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerDsrdRangeSt_GrA'
 * '<S1771>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerDsrdRangeSt_MA'
 * '<S1772>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerDsrdRangeSt_MB'
 * '<S1773>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerDsrdRangeSt_N'
 * '<S1774>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerRangeSt_EVM'
 * '<S1775>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerRangeSt_EVN'
 * '<S1776>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerRangeSt_G'
 * '<S1777>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerRangeSt_GrA'
 * '<S1778>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerRangeSt_MA'
 * '<S1779>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerRangeSt_MB'
 * '<S1780>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KaSCOR_P_CostOffsetPerRangeSt_N'
 * '<S1781>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KeSCOR_P_CTM_CostOffset_G'
 * '<S1782>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KeSCOR_P_CTM_CostOffset_GrA'
 * '<S1783>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KeSCOR_P_CTM_CostOffset_MA'
 * '<S1784>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KeSCOR_P_CTM_CostOffset_MB'
 * '<S1785>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KeSCOR_P_CTM_CostOffset_N'
 * '<S1786>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KeSCOR_P_NiTi_CostOffset_G'
 * '<S1787>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KeSCOR_P_NiTi_CostOffset_GrA'
 * '<S1788>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KeSCOR_P_NiTi_CostOffset_MA'
 * '<S1789>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KeSCOR_P_NiTi_CostOffset_MB'
 * '<S1790>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/KeSCOR_P_NiTi_CostOffset_N'
 * '<S1791>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/SCOCAssignEBCO'
 * '<S1792>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_EVM/KeSCOR_r_CostOffsetFctr_EVM'
 * '<S1793>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_EVM/KeSCOR_r_CostOffsetPerDsrdRngStBias_EVM'
 * '<S1794>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_EVM/KeSCOR_r_CostOffsetPerRngStBias_EVM'
 * '<S1795>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_EVN/KeSCOR_r_CostOffsetFctr_EVN'
 * '<S1796>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_EVN/KeSCOR_r_CostOffsetPerDsrdRngStBias_EVN'
 * '<S1797>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_EVN/KeSCOR_r_CostOffsetPerRngStBias_EVN'
 * '<S1798>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_G/KeSCOR_r_CostOffsetFctr_G'
 * '<S1799>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_G/KeSCOR_r_CostOffsetPerDsrdRngStBias_G'
 * '<S1800>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_G/KeSCOR_r_CostOffsetPerRngStBias_G'
 * '<S1801>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_GrA/KeSCOR_r_CostOffsetFctr_GrA'
 * '<S1802>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_GrA/KeSCOR_r_CostOffsetPerDsrdRngStBias_GrA'
 * '<S1803>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_GrA/KeSCOR_r_CostOffsetPerRngStBias_GrA'
 * '<S1804>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_MA/KeSCOR_r_CostOffsetFctr_MA'
 * '<S1805>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_MA/KeSCOR_r_CostOffsetPerDsrdRngStBias_MA'
 * '<S1806>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_MA/KeSCOR_r_CostOffsetPerRngStBias_MA'
 * '<S1807>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_MB/KeSCOR_r_CostOffsetFctr_MB'
 * '<S1808>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_MB/KeSCOR_r_CostOffsetPerDsrdRngStBias_MB'
 * '<S1809>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_MB/KeSCOR_r_CostOffsetPerRngStBias_MB'
 * '<S1810>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_N/KeSCOR_r_CostOffsetFctr_N'
 * '<S1811>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_N/KeSCOR_r_CostOffsetPerDsrdRngStBias_N'
 * '<S1812>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/CostOffsetBias_N/KeSCOR_r_CostOffsetPerRngStBias_N'
 * '<S1813>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/FixedGrDpndntRngStArray'
 * '<S1814>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/GetBitFrom16BitRegister'
 * '<S1815>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/HeSCOR_b_ChkDsrdStForStgcAllwd'
 * '<S1816>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1'
 * '<S1817>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/FixedGrDpndntRngStArray/HeOPTR_b_FixedGrDpndntRngSt_EVM'
 * '<S1818>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/FixedGrDpndntRngStArray/HeOPTR_b_FixedGrDpndntRngSt_EVN'
 * '<S1819>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/FixedGrDpndntRngStArray/HeOPTR_b_FixedGrDpndntRngSt_Gr'
 * '<S1820>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/FixedGrDpndntRngStArray/HeOPTR_b_FixedGrDpndntRngSt_MA'
 * '<S1821>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/FixedGrDpndntRngStArray/HeOPTR_b_FixedGrDpndntRngSt_MB'
 * '<S1822>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/FixedGrDpndntRngStArray/HeOPTR_b_FixedGrDpndntRngSt_N_GA'
 * '<S1823>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/GetBitFrom16BitRegister/MATLAB Function'
 * '<S1824>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem'
 * '<S1825>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem1'
 * '<S1826>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem10'
 * '<S1827>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem11'
 * '<S1828>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem12'
 * '<S1829>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem13'
 * '<S1830>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem2'
 * '<S1831>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem3'
 * '<S1832>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem4'
 * '<S1833>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem5'
 * '<S1834>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem6'
 * '<S1835>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem7'
 * '<S1836>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem8'
 * '<S1837>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/FinalAllwdDsrdChk/Subsystem1/If Action Subsystem9'
 * '<S1838>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/SCOCAssignEBCO/Enumerated Constant'
 * '<S1839>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/SCOCAssignEBCO/Enumerated Constant1'
 * '<S1840>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/SCOCAssignEBCO/Enumerated Constant2'
 * '<S1841>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/SCOCAssignEBCO/Enumerated Constant3'
 * '<S1842>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/SCOCAssignEBCO/Enumerated Constant4'
 * '<S1843>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/SCOCAssignEBCO/Enumerated Constant5'
 * '<S1844>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/SCOCAssignEBCO/Enumerated Constant6'
 * '<S1845>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOC_Subjective_CostOffsets/SCOCAssignEBCO/KaSCOR_b_EBCOPerRngStEnbl'
 * '<S1846>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/Accumulator_Reset'
 * '<S1847>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/Accumulator_ResetEVNow'
 * '<S1848>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/Accumulator_ResetEVNow1'
 * '<S1849>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/CD_dSOCPBatt_CostOffsets'
 * '<S1850>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/CS_dSOCPBatt_CostOffsets'
 * '<S1851>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/Constant Value1'
 * '<S1852>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/Constant Value2'
 * '<S1853>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/Constant Value3'
 * '<S1854>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/Constant Value7'
 * '<S1855>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/Count Down  Reset Enabled'
 * '<S1856>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/EVNow_PBatt_CostOffsets'
 * '<S1857>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/EdgeRising'
 * '<S1858>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/EdgeRising1'
 * '<S1859>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/EdgeRising2'
 * '<S1860>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/EdgeRising3'
 * '<S1861>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/Enumerated Value'
 * '<S1862>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/KaSCOR_e_ChrgStDrvMdStratSel'
 * '<S1863>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/KeSCOR_Cnt_CDtoCS_Start'
 * '<S1864>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/KeSCOR_P_BatEnrgCost_1stCSStrt'
 * '<S1865>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/KeSCOR_P_OptBatPwr_CD_Factor'
 * '<S1866>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/KeSCOR_P_OptBatPwr_CS_Factor'
 * '<S1867>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/KeSCOR_P_OptBatPwr_EVNow_Factor'
 * '<S1868>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/KeSCOR_Pct_CDtoCS_EngStrtSOC'
 * '<S1869>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/KtSCOR_P_OptBatPwr_CD_Min'
 * '<S1870>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/KtSCOR_P_OptBatPwr_CD_Reset'
 * '<S1871>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/KtSCOR_P_OptBatPwr_CS_Min'
 * '<S1872>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/KtSCOR_P_OptBatPwr_CS_Reset'
 * '<S1873>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/KtSCOR_P_OptBatPwr_EVNow_Min'
 * '<S1874>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/KtSCOR_P_OptBatPwr_EVNow_Reset'
 * '<S1875>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/Model Info1'
 * '<S1876>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/CD_dSOCPBatt_CostOffsets/KtSCOR_P_dSOCPredPBattCostOffset_CD'
 * '<S1877>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/CS_dSOCPBatt_CostOffsets/KtSCOR_P_dSOCPredPBattCostOffset_CS'
 * '<S1878>' : 'SCOR_ac/SCOR_MedTED/SCOC_Main_Control_Ring/SCOL_RngStPreSel/SCOL_EV_ToPo_Offsets/EVNow_PBatt_CostOffsets/KtSCOR_P_dSOCPredPBattCostOffset_EVNow'
 * '<S1879>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Boolean Set Block'
 * '<S1880>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Boolean Set Block1'
 * '<S1881>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Enum Set Block1'
 * '<S1882>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Enum Set Block2'
 * '<S1883>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Enum Set Block3'
 * '<S1884>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Enum Set Block4'
 * '<S1885>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Enum Set Block5'
 * '<S1886>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/SCOO_ArbMBNR'
 * '<S1887>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block1'
 * '<S1888>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block10'
 * '<S1889>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block11'
 * '<S1890>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block12'
 * '<S1891>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block13'
 * '<S1892>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block14'
 * '<S1893>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block2'
 * '<S1894>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block3'
 * '<S1895>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block4'
 * '<S1896>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block5'
 * '<S1897>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block6'
 * '<S1898>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block7'
 * '<S1899>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block8'
 * '<S1900>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/Set Block9'
 * '<S1901>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/SCOO_ArbMBNR/Bypass'
 * '<S1902>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/SCOO_ArbMBNR/Enable'
 * '<S1903>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/SCOO_ArbMBNR/Bypass/Set Block1'
 * '<S1904>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/SCOO_ArbMBNR/Bypass/Set Block15'
 * '<S1905>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/SCOO_ArbMBNR/Bypass/Set Block3'
 * '<S1906>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/SCOO_ArbMBNR/Enable/Set Block2'
 * '<S1907>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/SCOO_ArbMBNR/Enable/Set Block4'
 * '<S1908>' : 'SCOR_ac/SCOR_MedTED/SCOO_Initialized_Signals/SCOO_ArbMBNR/Enable/Set Block5'
 */
#endif                                 /* RTW_HEADER_SCOR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
