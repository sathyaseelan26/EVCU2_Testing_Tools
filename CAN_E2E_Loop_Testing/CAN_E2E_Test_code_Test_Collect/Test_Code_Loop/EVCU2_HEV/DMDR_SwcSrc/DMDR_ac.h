/*
 * File: DMDR_ac.h
 *
 * Code generated for Simulink model 'DMDR_ac'.
 *
 * Model version                  : 9.509
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:24:14 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DMDR_ac_h_
#define RTW_HEADER_DMDR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef DMDR_ac_COMMON_INCLUDES_
#define DMDR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_DMDR.h"
#endif                                 /* DMDR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_DMDR_ac_T
{
    uint32 VariantMerge_For_Variant_Source_VariantS;
    uint32 VariantMerge_For_Variant_Source_Varian_c;

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    float32 OutportBufferForVeDMDR_Pct_SOCTarget;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    float32 VeDMDR_t_StateTimer;       /* '<S392>/Drive_Modes' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 Gain;                      /* '<S19>/Gain' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 BatSOC_in;                 /* '<S322>/BatSOC_in' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 VeDMDR_t_StateTimer_j;     /* '<S25>/Drive_Modes1' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

    float32 VariantMerge_For_Variant_Source_Varia_cr;

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    uint16 OutportBufferForVeDMDR_d_ESaveActvDenied;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    uint16 OutportBufferForVeDMDR_d_ESaveDeniedRsn;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    uint16 OutportBufferForVeDMDR_d_EVDeniedRsn;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    uint16 OutportBufferForVeDMDR_d_EcoDeniedRsn;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    uint16 DrvMdState;                 /* '<S392>/Drive_Modes' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint16 Gain_j;                     /* '<S9>/Gain' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint16 Gain_i;                     /* '<S10>/Gain' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint16 Gain_o;                     /* '<S11>/Gain' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint16 Gain_b;                     /* '<S12>/Gain' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint16 DrvMdState_a;               /* '<S25>/Drive_Modes1' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

    uint16 VariantMerge_For_Variant_Source_Varian_g;

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    sint16 DrvMdSts;                   /* '<S392>/Drive_Modes' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

    uint8 OutportBufferForTerrainMdIndex_write;/* '<S421>/Const5' */

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    uint8 OutportBufferForVeDMDR_i_DrvMdArbIdx;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint8 Selector2_c;                 /* '<S24>/Selector2' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeDMDR_b_DrvMdInhibit_Ou;/* '<S421>/Const1' */
    boolean OutportBufferForInhibit_DriveMode_write;/* '<S421>/Const4' */

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    boolean OutportBufferForEcoDenied_NF;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    boolean OutportBufferForVeDMDR_b_ESaveDenied;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    boolean OutportBufferForVeDMDR_b_EVDenied;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    boolean OutportBufferForVeDMDR_b_EngOnEVHMI;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    boolean OutportBufferForVeDMDR_b_EngOnEVLED;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    boolean OutportBufferForVeDMDR_b_EngOnWOTRsnFina;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    boolean OutportBufferForVeDMDR_b_EngOnWOTRsnRaw;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    boolean OutportBufferForVeDMDR_b_HybridDenied;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    boolean OutportBufferForVeDMDR_b_SportDenied;/* '<S420>/DMDO_Initialization_NF' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    boolean VeDMDR_b_EcoModeDenied;    /* '<S392>/Drive_Modes' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    boolean VeDMDR_b_BlinkStatePassed; /* '<S392>/Drive_Modes' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean Switch1;                   /* '<S39>/Switch1' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean VeDMDC_b_ESaveModeDenied;  /* '<S24>/Switch' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean Switch1_p;                 /* '<S41>/Switch1' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean Gain_d;                    /* '<S15>/Gain' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean Gain_is;                   /* '<S16>/Gain' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean Gain_j0;                   /* '<S17>/Gain' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean Gain_c;                    /* '<S18>/Gain' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean Gain_kd;                   /* '<S20>/Gain' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean Gain_a;                    /* '<S21>/Gain' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean VeDMDR_b_EVModeDenied;     /* '<S25>/Drive_Modes1' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean VeDMDR_b_HybModeDenied;    /* '<S25>/Drive_Modes1' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean VeDMDR_b_ESaveModeDenied;  /* '<S25>/Drive_Modes1' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean VeDMDR_b_SportModeDenied;  /* '<S25>/Drive_Modes1' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean VeDMDR_b_EcoModeDenied_i;  /* '<S25>/Drive_Modes1' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

    boolean VariantMerge_For_Variant_Source_Varian_h;
    boolean VariantMerge_For_Variant_Source_Varian_a;
    boolean VariantMerge_For_Variant_Source_Varian_k;

#if !Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean FALSEConstant;             /* '<S5>/FALSE Constant' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

    TeTMDR_e_TrrnMd OutportBufferForTerrainMd_write;/* '<S421>/Const2' */
    TeTMDR_e_TrrnMd VariantMerge_For_Variant_Source_Varia_gh;
    TeTMDR_e_LockLowSt VariantMerge_For_Variant_Source_Varian_i;
    TePLTR_e_ShipingMode OutportBufferForShippingMd_write;/* '<S421>/Const' */
    TeDMIR_e_DriveStyleSts OutportBufferForDrvStyleSts_write;/* '<S421>/Const3' */

#if Rte_SysCon_Variant_DMDR_TurtleMdDsbld

    TeDMDR_e_TurtleMdSts VeDMDR_e_TurtleMd_Init;/* '<S419>/Enumerated_Constant1' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

    TeDMDR_e_TurtleMdSts VeDMDR_e_TurtleMdArb;/* '<S6>/Merge' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    TeDMDR_e_DrvMd DataTypeConversion; /* '<S424>/DataTypeConversion' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncDsbld

    TeDMDR_e_DrvMd DataTypeConversion_j;/* '<S425>/DataTypeConversion' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    TeDMDR_e_DrvMd VeDMDC_e_DrvMdInt;  /* '<S26>/Switch4' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    TeDMDR_e_DrvMd DataTypeConversion_b;/* '<S14>/DataTypeConversion' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    TeDMDR_e_DrvMd DrvMdSts_p;         /* '<S25>/Drive_Modes1' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    TeDMDR_e_DrvMd DrvMdInt;           /* '<S25>/Drive_Modes1' */

#define B_DMDR_AC_T_VARIANT_EXISTS
#endif

    TeBACR_e_HEVCharge_State VeBACR_e_ChargeSustn;/* '<S5>/VeBACR_e_ChargeSustn' */
}
B_DMDR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_DMDR_ac_T
{

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 UnitDelay1_DSTATE;         /* '<S25>/Unit Delay1' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 UnitDelay_DSTATE_f;        /* '<S301>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 UnitDelay_DSTATE_h;        /* '<S238>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 UnitDelay_DSTATE_b;        /* '<S209>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 UnitDelay_DSTATE_k;        /* '<S208>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 UnitDelay_DSTATE_ke;       /* '<S191>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 UnitDelay_DSTATE_be;       /* '<S190>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 UnitDelay_DSTATE_ba;       /* '<S169>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 UnitDelay_DSTATE_fm;       /* '<S128>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 UnitDelay_DSTATE_l;        /* '<S53>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld || Rte_SysCon_Variant_DMDR_FuncEnbld

    float32 VeDMDR_t_StateTimer;       /* '<Root>/DSM_6' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint16 UnitDelay_DSTATE_d;         /* '<S68>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint16 UnitDelay_DSTATE_bw;        /* '<S69>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

    boolean UnitDelay_DSTATE_j;        /* '<S368>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

    boolean UnitDelay_DSTATE_k4;       /* '<S367>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

    boolean UnitDelay_DSTATE_bb;       /* '<S366>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

    boolean UnitDelay_DSTATE_fs;       /* '<S365>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_d5;       /* '<S162>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_lb;       /* '<S325>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_lc;       /* '<S296>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_m;        /* '<S239>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_i;        /* '<S219>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_lm;       /* '<S211>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_fu;       /* '<S210>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_c;        /* '<S193>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_iw;       /* '<S192>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_p;        /* '<S170>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_co;       /* '<S133>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_fp;       /* '<S129>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_e;        /* '<S118>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_bi;       /* '<S77>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_g;        /* '<S72>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_fq;       /* '<S71>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_da;       /* '<S70>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean UnitDelay_DSTATE_ju;       /* '<S54>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    TeDMDR_e_DrvMd UnitDelay_DSTATE_a; /* '<S13>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    TeDMDR_e_DrvMd UnitDelay_DSTATE_mc;/* '<S82>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    TeDMDR_e_DrvMd UnitDelay_DSTATE_f3;/* '<S26>/Unit Delay' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    uint8 is_active_c3_DMDR_ac;        /* '<S392>/Drive_Modes' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    uint8 is_BEVDriveModes;            /* '<S392>/Drive_Modes' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    uint8 is_Eco;                      /* '<S392>/Drive_Modes' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    uint8 is_Normal;                   /* '<S392>/Drive_Modes' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint8 is_active_c1_DMDR_ac;        /* '<S25>/Drive_Modes1' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint8 is_c1_DMDR_ac;               /* '<S25>/Drive_Modes1' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint8 is_DriveModeActive;          /* '<S25>/Drive_Modes1' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint8 is_Sport;                    /* '<S25>/Drive_Modes1' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint8 is_ESave;                    /* '<S25>/Drive_Modes1' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint8 is_Eco_b;                    /* '<S25>/Drive_Modes1' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint8 is_EV;                       /* '<S25>/Drive_Modes1' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    uint8 is_Hybrid;                   /* '<S25>/Drive_Modes1' */

#define DW_DMDR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_DMDR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_DMDR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeTMDR_e_TrrnMd Constant;    /* '<S428>/Constant' */
    const TePLTR_e_ShipingMode Constant_k;/* '<S427>/Constant' */
    const TeDMIR_e_DriveStyleSts Constant_f;/* '<S429>/Constant' */

#if Rte_SysCon_Variant_DMDR_TurtleMdDsbld

    const TeDMDR_e_TurtleMdSts Constant_c;/* '<S422>/Constant' */

#define CONSTB_DMDR_AC_T_VARIANT_EXISTS
#endif

}
ConstB_DMDR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMDR
#include "MemMap.h"

extern VAR(B_DMDR_ac_T, DMDR_VAR_INIT) DMDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMDR
#include "MemMap.h"

extern VAR(DW_DMDR_ac_T, DMDR_VAR_INIT) DMDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMDR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_DMDR
#include "MemMap.h"

extern CONST(ConstB_DMDR_ac_T, DMDR_VAR_INIT) DMDR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_DMDR
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
 * '<Root>' : 'DMDR_ac'
 * '<S1>'   : 'DMDR_ac/DMDR_MedTED'
 * '<S2>'   : 'DMDR_ac/DMDR_MedTEH'
 * '<S3>'   : 'DMDR_ac/DMDR_PwrOn'
 * '<S4>'   : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC'
 * '<S5>'   : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs'
 * '<S6>'   : 'DMDR_ac/DMDR_MedTED/TurtleMd'
 * '<S7>'   : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func'
 * '<S8>'   : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DocBlock'
 * '<S9>'   : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/SetBlock1'
 * '<S10>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/SetBlock2'
 * '<S11>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/SetBlock3'
 * '<S12>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/SetBlock4'
 * '<S13>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck'
 * '<S14>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/EnumSetBlock'
 * '<S15>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/SetBlock'
 * '<S16>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/SetBlock1'
 * '<S17>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/SetBlock2'
 * '<S18>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/SetBlock3'
 * '<S19>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/SetBlock4'
 * '<S20>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/SetBlock5'
 * '<S21>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/SetBlock6'
 * '<S22>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits'
 * '<S23>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DocBlock'
 * '<S24>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides'
 * '<S25>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Drive_Modes'
 * '<S26>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DrvMDIntLatch'
 * '<S27>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Active_Arb'
 * '<S28>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd'
 * '<S29>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd'
 * '<S30>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Eco_Allwd'
 * '<S31>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Hybrid_Allwd'
 * '<S32>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/PushToAMode'
 * '<S33>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/RemStopDrvMd'
 * '<S34>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Sport_Allwd'
 * '<S35>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/DocBlock'
 * '<S36>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/HeDMDR_t_MedTED_dT'
 * '<S37>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/IfThenElse'
 * '<S38>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/IfThenElse1'
 * '<S39>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/IfThenElse2'
 * '<S40>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/IfThenElse3'
 * '<S41>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/IfThenElse4'
 * '<S42>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/KaDMDR_i_DrvMdArbIndex'
 * '<S43>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/KeDMDR_b_ArbDrvMdOvrrd'
 * '<S44>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/KeDMDR_b_ESaveMdDeniedOvrrd'
 * '<S45>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/KeDMDR_b_ESaveMdDeniedOvrrdVal'
 * '<S46>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/KeDMDR_b_EVMdDeniedOvrrd'
 * '<S47>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/KeDMDR_b_EVMdDeniedOvrrdVal'
 * '<S48>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/KeDMDR_b_HybMdDeniedOvrrd'
 * '<S49>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/KeDMDR_b_HybMdDeniedOvrrdVal'
 * '<S50>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/KeDMDR_b_SportMdDeniedOvrrd'
 * '<S51>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/KeDMDR_b_SportMdDeniedOvrrdVal'
 * '<S52>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/KeDMDR_e_ArbDrvMdOvrrVal'
 * '<S53>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/TurnOffDelayTime'
 * '<S54>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DriveModeOverrides/TurnOffDelayTime/EdgeFalling'
 * '<S55>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Drive_Modes/DocBlock'
 * '<S56>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Drive_Modes/Drive_Modes1'
 * '<S57>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Drive_Modes/HeDMDR_t_MedTED_dT'
 * '<S58>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Drive_Modes/KeDMDR_b_UseEVEngOnBlnkTimer'
 * '<S59>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Drive_Modes/KeDMDR_t_AccptWtTime'
 * '<S60>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Drive_Modes/KeDMDR_t_StayInBlinkState'
 * '<S61>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Drive_Modes/SetBlock1'
 * '<S62>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Drive_Modes/SetBlock2'
 * '<S63>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DrvMDIntLatch/DrvMdDbnc'
 * '<S64>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DrvMDIntLatch/Enumerated Value'
 * '<S65>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DrvMDIntLatch/Enumerated Value1'
 * '<S66>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DrvMDIntLatch/KeDMDR_Cnt_PPDefaultMdOnDelaySample'
 * '<S67>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DrvMDIntLatch/KeDMDR_e_InitDrvMd'
 * '<S68>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DrvMDIntLatch/Turn On Delay Sample'
 * '<S69>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DrvMDIntLatch/DrvMdDbnc/Count Down  Reset Enabled'
 * '<S70>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DrvMDIntLatch/DrvMdDbnc/EdgeRising1'
 * '<S71>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/DrvMDIntLatch/Turn On Delay Sample/EdgeRising'
 * '<S72>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Active_Arb/EdgeRising'
 * '<S73>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Active_Arb/Enumerated Value'
 * '<S74>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Active_Arb/Enumerated Value1'
 * '<S75>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Active_Arb/HeDMDR_b_REEVEnbld'
 * '<S76>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Active_Arb/KeDMDR_Pct_FixedEsvActvTrgtSOC'
 * '<S77>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Active_Arb/Signal Latch Off With Reset'
 * '<S78>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/DocBlock'
 * '<S79>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd'
 * '<S80>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration'
 * '<S81>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/DocBlock'
 * '<S82>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn'
 * '<S83>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/IfThenElse'
 * '<S84>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/KeDMDR_b_ESaveAllwdOvrrd'
 * '<S85>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/KeDMDR_b_ESaveAllwdOvrrdVal'
 * '<S86>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/STTR_Reason_Evaluation'
 * '<S87>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation'
 * '<S88>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Bit Clear'
 * '<S89>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Bit Clear1'
 * '<S90>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Bit Clear2'
 * '<S91>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Bit Clear3'
 * '<S92>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Bit Clear4'
 * '<S93>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Bit Clear5'
 * '<S94>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Bit Set'
 * '<S95>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Bit Set1'
 * '<S96>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Bit Set2'
 * '<S97>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Bit Set3'
 * '<S98>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Bit Set4'
 * '<S99>'  : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Bit Set5'
 * '<S100>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Enumerated Value1'
 * '<S101>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Enumerated Value2'
 * '<S102>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Enumerated Value3'
 * '<S103>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Enumerated Value4'
 * '<S104>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Enumerated Value5'
 * '<S105>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Enumerated Value6'
 * '<S106>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Enumerated Value7'
 * '<S107>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Enumerated Value8'
 * '<S108>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/Enumerated Value9'
 * '<S109>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/KeDMDR_b_ESaveDenEVSportMsg'
 * '<S110>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/KeDMDR_b_ESaveRockDenMsg'
 * '<S111>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/KeDMDR_b_ESaveSandDenMsg'
 * '<S112>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/KeDMDR_b_ESaveSnowDenMsg'
 * '<S113>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/ESaveDeniedRsn/KeDMDR_b_ESaveSportDenMsg'
 * '<S114>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/STTR_Reason_Evaluation/DocBlock'
 * '<S115>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/STTR_Reason_Evaluation/KeDMDR_g_ESaveModeTempInhibitMaskVal'
 * '<S116>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/STTR_Reason_Evaluation/KeDMDR_g_ESaveModeTempInhibitMaskVal2'
 * '<S117>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation/DocBlock'
 * '<S118>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation/EdgeRising1'
 * '<S119>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation/Enumerated Value8'
 * '<S120>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation/HeDMDR_t_MedTED_dT'
 * '<S121>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation/IfThenElse'
 * '<S122>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation/IfThenElse3'
 * '<S123>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation/KaDMDR_b_TCaseTrrnMdESaveAllwdRaw'
 * '<S124>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation/KaDMDR_b_TCaseTrrnMdEsaveAllwd'
 * '<S125>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation/KeDMDR_b_ESaveAllwdTerrainOvrrd'
 * '<S126>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation/KeDMDR_b_ESaveAllwdTerrainOvrrdVal'
 * '<S127>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation/KeDMDR_t_MaxECMTrnMdSwitchTime'
 * '<S128>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation/TurnOffDelayTime'
 * '<S129>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESaveAllwd/Terrain_Mode_Evaluation/TurnOffDelayTime/EdgeFalling'
 * '<S130>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/ESaveActiveDenied'
 * '<S131>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/Enumerated Value3'
 * '<S132>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/Enumerated Value4'
 * '<S133>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/Hysteresis'
 * '<S134>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/KeDMDR_P_EchrgPwrLngLim'
 * '<S135>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/KeDMDR_P_EchrgPwrLngLimHyst'
 * '<S136>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/KeDMDR_b_AllwManInESaveActv'
 * '<S137>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/KeDMDR_b_EnblDrvTrrnCmbntn'
 * '<S138>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/ESaveActiveDenied/Bit Clear'
 * '<S139>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/ESaveActiveDenied/Bit Clear1'
 * '<S140>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/ESaveActiveDenied/Bit Clear2'
 * '<S141>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/ESaveActiveDenied/Bit Clear3'
 * '<S142>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/ESaveActiveDenied/Bit Set'
 * '<S143>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/ESaveActiveDenied/Bit Set1'
 * '<S144>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/ESaveActiveDenied/Bit Set2'
 * '<S145>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/ESave_Allwd/ESave_Active_Arbitration/ESaveActiveDenied/Bit Set3'
 * '<S146>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/BlinkTimer'
 * '<S147>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/DocBlock'
 * '<S148>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd'
 * '<S149>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason'
 * '<S150>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/BlinkTimer/Enumerated Value'
 * '<S151>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/BlinkTimer/HeDMDR_t_MedTED_dT'
 * '<S152>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/BlinkTimer/StopWatchResetEnabled'
 * '<S153>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/DocBlock'
 * '<S154>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ECMEngMainStsSync'
 * '<S155>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/IfThenElse3'
 * '<S156>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/KeDMDR_b_DenyEV'
 * '<S157>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/KeDMDR_b_EVAllwdOvrrd'
 * '<S158>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/KeDMDR_b_EVAllwdOvrrdVal'
 * '<S159>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ManualMode'
 * '<S160>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/MaxEngRunTime'
 * '<S161>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/RemedialStop'
 * '<S162>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation'
 * '<S163>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TempEVInhibit'
 * '<S164>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation'
 * '<S165>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TowHaulEvaluation'
 * '<S166>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ECMEngMainStsSync/Compare To Zero'
 * '<S167>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ECMEngMainStsSync/HeDMDR_t_MedTED_dT'
 * '<S168>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ECMEngMainStsSync/KeDMDR_t_ECMAllwEVSyncDelay'
 * '<S169>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ECMEngMainStsSync/Turn Off Delay Time'
 * '<S170>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ECMEngMainStsSync/Turn Off Delay Time/EdgeFalling'
 * '<S171>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ManualMode/Bit Clear1'
 * '<S172>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ManualMode/Bit Clear4'
 * '<S173>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ManualMode/Bit Set1'
 * '<S174>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ManualMode/Bit Set4'
 * '<S175>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ManualMode/Enumerated Value1'
 * '<S176>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ManualMode/Enumerated Value4'
 * '<S177>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ManualMode/IfThenElse1'
 * '<S178>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ManualMode/IfThenElse3'
 * '<S179>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ManualMode/KeDMDR_b_DNATipHMIEna'
 * '<S180>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ManualMode/KeDMDR_b_EVManLockDenMsg'
 * '<S181>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ManualMode/KeDMDR_b_EVManLowDenMsg'
 * '<S182>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/ManualMode/KeDMDR_b_ManualMdAllwInEV'
 * '<S183>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/MaxEngRunTime/DocBlock'
 * '<S184>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/MaxEngRunTime/Enumerated Value1'
 * '<S185>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/MaxEngRunTime/Enumerated Value2'
 * '<S186>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/MaxEngRunTime/HeDMDR_t_MedTED_dT'
 * '<S187>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/MaxEngRunTime/KeDMDR_b_EnblEngOnInEV'
 * '<S188>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/MaxEngRunTime/KeDMDR_t_LatchEngMaxTimeRsn'
 * '<S189>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/MaxEngRunTime/KeDMDR_t_MaxEngOnTimeEVMode'
 * '<S190>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/MaxEngRunTime/TurnOffDelayTime'
 * '<S191>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/MaxEngRunTime/TurnOnDelayTime'
 * '<S192>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/MaxEngRunTime/TurnOffDelayTime/EdgeFalling'
 * '<S193>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/MaxEngRunTime/TurnOnDelayTime/EdgeRising'
 * '<S194>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/RemedialStop/Enumerated Value'
 * '<S195>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/RemedialStop/IfThenElse3'
 * '<S196>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/RemedialStop/KeDMDR_b_DenyEVMdRemedialStop'
 * '<S197>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/DocBlock'
 * '<S198>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/Enumerated Value'
 * '<S199>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/Enumerated Value1'
 * '<S200>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/HeDMDR_t_MedTED_dT'
 * '<S201>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/KeDMDR_d_EVModeInhibitDrivability'
 * '<S202>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/KeDMDR_d_EVModeInhibitWOT'
 * '<S203>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/KeDMDR_g_EVModeInhibit2AcceptVal'
 * '<S204>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/KeDMDR_g_EVModeInhibitAcceptVal'
 * '<S205>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/KeDMDR_g_EVModeInhibitGraceTime'
 * '<S206>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/KeDMDR_t_EngOnAllwdWOT'
 * '<S207>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/KeDMDR_t_LatchWOTRsn'
 * '<S208>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/TurnOffDelayTime'
 * '<S209>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/TurnOnDelayTime'
 * '<S210>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/TurnOffDelayTime/EdgeFalling'
 * '<S211>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/STTR_Reason_Evaluation/TurnOnDelayTime/EdgeRising'
 * '<S212>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TempEVInhibit/DocBlock'
 * '<S213>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TempEVInhibit/KeDMDR_b_NoTempEVInbitCheck'
 * '<S214>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/Bit Clear1'
 * '<S215>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/Bit Clear4'
 * '<S216>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/Bit Set1'
 * '<S217>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/Bit Set4'
 * '<S218>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/DocBlock'
 * '<S219>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/EdgeRising'
 * '<S220>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/Enumerated Value1'
 * '<S221>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/Enumerated Value2'
 * '<S222>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/Enumerated Value3'
 * '<S223>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/Enumerated Value4'
 * '<S224>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/Enumerated Value5'
 * '<S225>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/Enumerated Value6'
 * '<S226>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/Enumerated Value7'
 * '<S227>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/Enumerated Value8'
 * '<S228>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/HeDMDR_t_MedTED_dT'
 * '<S229>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/IfThenElse1'
 * '<S230>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/IfThenElse3'
 * '<S231>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/KaDMDR_b_TCaseTrrnMdEVAllwd'
 * '<S232>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/KaDMDR_b_TCaseTrrnMdEVAllwdRaw'
 * '<S233>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/KeDMDR_b_ESaveSportDenMsg'
 * '<S234>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/KeDMDR_b_EVAllwdTerrainOvrrdV'
 * '<S235>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/KeDMDR_b_EVAllwdTerrainOvrrdVal'
 * '<S236>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/KeDMDR_b_EVLockDenMsg'
 * '<S237>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/KeDMDR_t_MaxECMTrnMdSwitchTime'
 * '<S238>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/TurnOffDelayTime'
 * '<S239>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TerrainModeEvaluation/TurnOffDelayTime/EdgeFalling'
 * '<S240>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVAllwd/TowHaulEvaluation/DocBlock'
 * '<S241>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitClear'
 * '<S242>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitClear1'
 * '<S243>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitClear2'
 * '<S244>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitClear3'
 * '<S245>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitClear4'
 * '<S246>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitClear5'
 * '<S247>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitClear6'
 * '<S248>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitClear7'
 * '<S249>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitClear9'
 * '<S250>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitSet'
 * '<S251>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitSet1'
 * '<S252>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitSet2'
 * '<S253>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitSet3'
 * '<S254>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitSet4'
 * '<S255>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitSet5'
 * '<S256>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitSet6'
 * '<S257>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitSet7'
 * '<S258>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/BitSet9'
 * '<S259>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/DocBlock'
 * '<S260>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/Enumerated Value'
 * '<S261>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/Enumerated Value1'
 * '<S262>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/Enumerated Value2'
 * '<S263>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/KeDMDR_d_EVModeTempInhibitMtrBLimit'
 * '<S264>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/KeDMDR_g_EVModeOptPerInhibit2MaskVal'
 * '<S265>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/KeDMDR_g_EVModeOptPerInhibitMaskVal'
 * '<S266>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/KeDMDR_g_EVModeSOCInhibitMaskVal'
 * '<S267>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/KeDMDR_g_EVModeTempInhibit2MaskVal'
 * '<S268>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/KeDMDR_g_EVModeTempInhibitMaskVal'
 * '<S269>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/KeDMDR_g_EVModeThermalInhibitMaskVal'
 * '<S270>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/SetBlock1'
 * '<S271>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/EV_Allwd/EVNotAvailReason/SetBlock2'
 * '<S272>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Eco_Allwd/EcoDenyReason'
 * '<S273>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Eco_Allwd/Enumerated Constant'
 * '<S274>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Eco_Allwd/EcoDenyReason/Bit Clear'
 * '<S275>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Eco_Allwd/EcoDenyReason/Bit Clear1'
 * '<S276>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Eco_Allwd/EcoDenyReason/Bit Clear2'
 * '<S277>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Eco_Allwd/EcoDenyReason/Bit Set'
 * '<S278>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Eco_Allwd/EcoDenyReason/Bit Set1'
 * '<S279>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Eco_Allwd/EcoDenyReason/Bit Set2'
 * '<S280>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Hybrid_Allwd/DocBlock'
 * '<S281>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Hybrid_Allwd/KeDMDR_b_HybDrvMdAllwd'
 * '<S282>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/PushToAMode/DocBlock'
 * '<S283>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/PushToAMode/KeDMDR_b_GoDirectHybDrvMd'
 * '<S284>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/RemStopDrvMd/KeDMDR_b_UseRemedialStopForDrvMd'
 * '<S285>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Sport_Allwd/DocBlock'
 * '<S286>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Sport_Allwd/Enumerated Value'
 * '<S287>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Sport_Allwd/Enumerated Value2'
 * '<S288>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Sport_Allwd/IfThenElse3'
 * '<S289>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Sport_Allwd/KeDMDR_b_ByPassSportAllwdForHornet'
 * '<S290>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Sport_Allwd/KeDMDR_b_DenySportMdRemedialStop'
 * '<S291>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Sport_Allwd/KeDMDR_b_NoSportMd'
 * '<S292>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Sport_Allwd/KeDMDR_b_SportInAllLeverPstns'
 * '<S293>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/DocBlock'
 * '<S294>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Active'
 * '<S295>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Passive'
 * '<S296>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/EdgeRising'
 * '<S297>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Enumerated Value'
 * '<S298>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Enumerated Value1'
 * '<S299>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Enumerated Value2'
 * '<S300>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Enumerated Value4'
 * '<S301>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/GradientLimiter'
 * '<S302>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/IfThenElse1'
 * '<S303>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/IfThenElse3'
 * '<S304>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/KeDMDR_Cnt_TargetSOC_BlendInRate'
 * '<S305>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/KeDMDR_Cnt_TargetSOC_BlendOutRate'
 * '<S306>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/KeDMDR_Pct_SOCTargetMax'
 * '<S307>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/KeDMDR_Pct_SOCTargetMin'
 * '<S308>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/KeDMDR_Pct_SOCTargetOvrrdVal'
 * '<S309>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/KeDMDR_b_SOCInSportNotDefault'
 * '<S310>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/KeDMDR_b_SOCTargetOvrrd'
 * '<S311>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/KeDMDR_b_UseTargetSOCCalValue'
 * '<S312>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Limiter1'
 * '<S313>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Limiter2'
 * '<S314>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Non_ESave'
 * '<S315>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Sport'
 * '<S316>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Active/DocBlock'
 * '<S317>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Active/KeDMDR_Pct_ActualSOCOffsetESaveAggrMd'
 * '<S318>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Active/KeDMDR_Pct_FixedEsvActvTrgtSOC'
 * '<S319>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Active/KeDMDR_b_EnblRcvHMISOCRng'
 * '<S320>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Active/KtDMDR_Pct_DispSOCTarget'
 * '<S321>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Passive/DocBlock'
 * '<S322>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Passive/IfActionSubsystem'
 * '<S323>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Passive/KeDMDR_Pct_ActualSOCOffsetESavePassiveMd'
 * '<S324>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Passive/ResetTargetSOC'
 * '<S325>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Passive/ResetTargetSOC/EdgeRising1'
 * '<S326>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Passive/ResetTargetSOC/KeDMDR_Pct_SOCIncrease'
 * '<S327>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/ESave_Passive/ResetTargetSOC/KeDMDR_b_EnblNwSOCTrgtRst'
 * '<S328>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/GradientLimiter/Limiter'
 * '<S329>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Non_ESave/DocBlock'
 * '<S330>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Non_ESave/KeDMDR_Pct_ActualSOCOffsetDefault'
 * '<S331>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Non_ESave/KeDMDR_Pct_TargetSOCDefault'
 * '<S332>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Sport/DocBlock'
 * '<S333>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Sport/KeDMDR_Pct_ActualSOCOffsetSportMd'
 * '<S334>' : 'DMDR_ac/DMDR_MedTED/DMDC_FUNC/DMDC_Func/Target_SOC_PBattLimits/Sport/KeDMDR_Pct_TargetSOCSport'
 * '<S335>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/IfThenElse1'
 * '<S336>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/IfThenElse10'
 * '<S337>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/IfThenElse2'
 * '<S338>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/IfThenElse4'
 * '<S339>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/IfThenElse5'
 * '<S340>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/IfThenElse6'
 * '<S341>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/IfThenElse7'
 * '<S342>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/IfThenElse8'
 * '<S343>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/IfThenElse9'
 * '<S344>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_P_BattCTMinLimOvrrdVal'
 * '<S345>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_b_AllwEVECMOvrrd'
 * '<S346>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_b_AllwEVECMOvrrdVal'
 * '<S347>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_b_BattCTMinLimOvrrd'
 * '<S348>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_b_DrivabilityRsnOvrrd'
 * '<S349>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_b_EVModeInhibit2Ovrrd'
 * '<S350>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_b_EVModeInhibitOvrrd'
 * '<S351>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_b_EnblOppositeBattCTPwr'
 * '<S352>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_b_ManualModeOvrrd'
 * '<S353>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_b_ManualModeOvrrdVal'
 * '<S354>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_b_TCaseStOvrrd'
 * '<S355>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_b_TowHaulVal'
 * '<S356>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_b_TrrnMdOvrrd'
 * '<S357>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_d_DrivabilityRsnOvrrdVal'
 * '<S358>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_e_TCaseStOvrrdVal'
 * '<S359>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_e_TrrnMdOvrrdVal'
 * '<S360>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_g_EVModeInhibit2OvrrdVal'
 * '<S361>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/KeDMDR_g_EVModeInhibitOvrrdVal'
 * '<S362>' : 'DMDR_ac/DMDR_MedTED/DMDR_Inputs/SetBlock'
 * '<S363>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/Enumerated Value'
 * '<S364>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/HeDMDR_b_REEVEnbld'
 * '<S365>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/Hysteresis'
 * '<S366>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/Hysteresis1'
 * '<S367>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/Hysteresis2'
 * '<S368>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/Hysteresis3'
 * '<S369>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/IfThenElse'
 * '<S370>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/KeDMDR_l_EstRng_TrtlMd2_LSP'
 * '<S371>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/KeDMDR_l_EstRng_TrtlMd2_RSP'
 * '<S372>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/KeDMDR_l_EstRng_TrtlMd3_LSP'
 * '<S373>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/KeDMDR_l_EstRng_TrtlMd3_RSP'
 * '<S374>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/KeDMDR_l_EstRng_TrtlMd4_LSP'
 * '<S375>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/KeDMDR_l_EstRng_TrtlMd4_RSP'
 * '<S376>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/KeDMDR_l_TurtleMd_LSP'
 * '<S377>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/KeDMDR_l_TurtleMd_RSP'
 * '<S378>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/TurtleMd1'
 * '<S379>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/TurtleMd2'
 * '<S380>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/TurtleMd3'
 * '<S381>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/TurtleMd4'
 * '<S382>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/TurtleMdNo'
 * '<S383>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/TurtleMd1/Enumerated_Constant6'
 * '<S384>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/TurtleMd2/Enumerated_Constant5'
 * '<S385>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/TurtleMd3/Enumerated_Constant3'
 * '<S386>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/TurtleMd4/Enumerated_Constant2'
 * '<S387>' : 'DMDR_ac/DMDR_MedTED/TurtleMd/TurtleMdNo/Enumerated_Constant1'
 * '<S388>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb'
 * '<S389>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes'
 * '<S390>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/SetBlock4'
 * '<S391>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdArbitration'
 * '<S392>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdDetermination'
 * '<S393>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/DrvStyleStsArbitration'
 * '<S394>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/Eco_Allwd'
 * '<S395>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/Enumerated Value'
 * '<S396>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/HeDMDR_b_Enbl_DrvMdInhibit'
 * '<S397>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/HeDMDR_b_Enbl_ShipMdDrvMd'
 * '<S398>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdArbitration/Enumerated_Constant1'
 * '<S399>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdArbitration/HaDMDR_e_DrvStylSts_Map'
 * '<S400>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdArbitration/KaDMDR_i_DrvMdArbIndex'
 * '<S401>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdDetermination/Drive_Modes'
 * '<S402>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdDetermination/HeDMDR_t_MedTEH_dT'
 * '<S403>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdDetermination/KeDMDR_b_EnblDrvStylMap'
 * '<S404>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdDetermination/KeDMDR_t_StayInBlinkState'
 * '<S405>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdDetermination/SetBlock1'
 * '<S406>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/DrvStyleStsArbitration/EnumeratedConstant'
 * '<S407>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/DrvStyleStsArbitration/EnumeratedConstant1'
 * '<S408>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/Eco_Allwd/EcoDenyReason'
 * '<S409>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/Eco_Allwd/SRARInhibitDriveMd'
 * '<S410>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/Eco_Allwd/TrrnMdReson'
 * '<S411>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/Eco_Allwd/EcoDenyReason/Bit Clear'
 * '<S412>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/Eco_Allwd/EcoDenyReason/Bit Clear1'
 * '<S413>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/Eco_Allwd/EcoDenyReason/Bit Clear2'
 * '<S414>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/Eco_Allwd/EcoDenyReason/Bit Set'
 * '<S415>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/Eco_Allwd/EcoDenyReason/Bit Set1'
 * '<S416>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/Eco_Allwd/EcoDenyReason/Bit Set2'
 * '<S417>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/Eco_Allwd/SRARInhibitDriveMd/HeDMDR_b_Enbl_DrvMdInhibit'
 * '<S418>' : 'DMDR_ac/DMDR_MedTEH/DrvMdArb/BEVDriveModes/Eco_Allwd/TrrnMdReson/KaDMDR_b_TrnDrvMdCmbAllwdBEV'
 * '<S419>' : 'DMDR_ac/DMDR_PwrOn/BEV_NF'
 * '<S420>' : 'DMDR_ac/DMDR_PwrOn/DMDC_NF'
 * '<S421>' : 'DMDR_ac/DMDR_PwrOn/Sub_Out_Init'
 * '<S422>' : 'DMDR_ac/DMDR_PwrOn/BEV_NF/Enumerated_Constant1'
 * '<S423>' : 'DMDR_ac/DMDR_PwrOn/DMDC_NF/DMDO_Initialization_NF'
 * '<S424>' : 'DMDR_ac/DMDR_PwrOn/DMDC_NF/DMDO_Initialization_NF/Enum Set Block1'
 * '<S425>' : 'DMDR_ac/DMDR_PwrOn/DMDC_NF/DMDO_Initialization_NF/Enum Set Block2'
 * '<S426>' : 'DMDR_ac/DMDR_PwrOn/DMDC_NF/DMDO_Initialization_NF/Enumerated_Constant'
 * '<S427>' : 'DMDR_ac/DMDR_PwrOn/Sub_Out_Init/Const'
 * '<S428>' : 'DMDR_ac/DMDR_PwrOn/Sub_Out_Init/Const2'
 * '<S429>' : 'DMDR_ac/DMDR_PwrOn/Sub_Out_Init/Const3'
 */
#endif                                 /* RTW_HEADER_DMDR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
