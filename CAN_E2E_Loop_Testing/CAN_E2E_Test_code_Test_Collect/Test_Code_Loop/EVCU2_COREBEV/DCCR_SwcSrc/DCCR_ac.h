/*
 * File: DCCR_ac.h
 *
 * Code generated for Simulink model 'DCCR_ac'.
 *
 * Model version                  : 9.1156
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:22:49 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DCCR_ac_h_
#define RTW_HEADER_DCCR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef DCCR_ac_COMMON_INCLUDES_
#define DCCR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_DCCR.h"
#endif                                 /* DCCR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_DCCR_ac_T
{

#if Rte_SysCon_Variant_DCCR_1

    float32 VeDCCR_t_DCChrgTestTimer;  /* '<S12>/DCChrg_EOL' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 DCGBTStateTimer;           /* '<S11>/DC_GBT' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 DCGBTChargeTimer;          /* '<S11>/DC_GBT' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 DC_StateTimer;             /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 DC_ChargeTimer;            /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 Max_Entries_SAScheduleTuple;/* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 SelectedServiceId;          /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    sint16 DCexitReason;               /* '<S11>/DC_GBT' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    sint16 ShtdwnTypeGBT;              /* '<S11>/DC_GBT' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    sint16 ServiceCategory;            /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    sint16 SelectedEnergyTransferType; /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    sint16 DCexitReason_j;             /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    sint16 ShtDwnType;                 /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 DCTestSts;                   /* '<S12>/DCChrg_EOL' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 EOL_ExitRsn;                 /* '<S12>/DCChrg_EOL' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 PnC_RetryCnt;                /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean TmpSignalConversionAtVeHPMR_b_B;

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean TmpSignalConversionAtVeIDCR_b_J;

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean TmpSignalConversionAtVeOBCR_b_E;

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean TmpSignalConversionAtVeOBCR_b_j;

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean EOL_Flag;                  /* '<S12>/DCChrg_EOL' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean GBT_ReadyToCharge;         /* '<S11>/DC_GBT' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean DCChargeInitialization;    /* '<S11>/DC_GBT' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean GBT_EVCharge_Permitting;   /* '<S11>/DC_GBT' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean EVReady;                   /* '<S11>/DC_GBT' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean EVReady_c;                 /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean J1772_S2_Close;            /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean DC_Isolation_Cmd;          /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean ReadyToChargeState;        /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean HCP_SessionStopCmd;        /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean HCP_WeldChckComplete;      /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean DCChargeInit;              /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean HVCM_SelectedSecProtocol;  /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean NoRetryFlag;               /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean PnCFailure;                /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean PnCRetryFail;              /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean V2H_MaxCurrPwrLim_NegVa;   /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean V2X_HVCMS_SlctdEnergyTransfType;/* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_HVCM_SelPaymentOptn HVCM_SelectedPaymentOptn;/* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_HVCM_SelAppProtocol HVCM_SelectedAppProtocol;/* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_DCGBTChrgSysStat DCGBTChrgSysStat;/* '<S11>/DC_GBT' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_DCCntctrCmd DC_CntctrCmd; /* '<S11>/DC_GBT' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_DCCntctrCmd DC_CntctrCmd_e;/* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_DCChrgStat DCChrgStat;    /* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_ChargeProgress ChargeProgress;/* '<S11>/DC_Charging' */

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    TeHVTR_e_HV_BatCntctrStat TmpSignalConversionAtVeBPCR_e_H;

#define B_DCCR_AC_T_VARIANT_EXISTS
#endif

#ifndef B_DCCR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
B_DCCR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_DCCR_ac_T
{

#if Rte_SysCon_Variant_DCCR_1

    float32 UnitDelay2_DSTATE;         /* '<S34>/Unit Delay2' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 UnitDelay3_DSTATE;         /* '<S34>/Unit Delay3' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 UnitDelay1_DSTATE;         /* '<S34>/Unit Delay1' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 UnitDelay_DSTATE;          /* '<S97>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 UnitDelay_DSTATE_m;        /* '<S291>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 NeDCCR_E_TECharge;         /* '<Root>/DSM_NeOBCR_E_TECharge' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 NeDCCR_E_TEDischarge;      /* '<Root>/DSM_NeOBCR_E_TEDischarge' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_p;         /* '<S227>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_h;         /* '<S219>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_o;         /* '<S218>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_ox;        /* '<S217>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_a;         /* '<S216>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_mh;        /* '<S215>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_c;         /* '<S153>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_k;         /* '<S152>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_f;         /* '<S151>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_g;         /* '<S150>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_kz;        /* '<S149>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_ka;        /* '<S148>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_hf;        /* '<S147>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_f3;        /* '<S146>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_b;         /* '<S94>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 UnitDelay_DSTATE_ku;        /* '<S93>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    sint16 ShtdwnType;                 /* '<S11>/DC_Charging' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 VeOBCR_Cnt_DCEOL_SgnlRcvd_Prev;/* '<S12>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 VeOBCR_Cnt_DCEOL_SgnlRcvd_Pre_c;/* '<S12>/Unit Delay1' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay4_DSTATE;         /* '<S34>/Unit Delay4' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay1_DSTATE_n;       /* '<S11>/Unit Delay1' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay5_DSTATE;         /* '<S71>/Unit Delay5' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay3_DSTATE_h;       /* '<S12>/Unit Delay3' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay3_DSTATE_b;       /* '<S11>/Unit Delay3' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_bc;       /* '<S229>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_j;        /* '<S224>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_d;        /* '<S223>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_cw;       /* '<S222>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_l;        /* '<S221>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_i;        /* '<S220>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_jx;       /* '<S163>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_n;        /* '<S162>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_e;        /* '<S161>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_ow;       /* '<S160>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_eh;       /* '<S159>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_c0;       /* '<S158>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_lt;       /* '<S157>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_jf;       /* '<S156>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_ml;       /* '<S145>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_ec;       /* '<S98>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_cy;       /* '<S96>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_m5;       /* '<S95>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_co;       /* '<S92>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean UnitDelay_DSTATE_jn;       /* '<S91>/Unit Delay' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_DCChrgStat UnitDelay2_DSTATE_e;/* '<S11>/Unit Delay2' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_ChrgSysStat UnitDelay4_DSTATE_o;/* '<S11>/Unit Delay4' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_ChrgSysStat UnitDelay5_DSTATE_n;/* '<S11>/Unit Delay5' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 is_active_c9_DCCR_ac;        /* '<S12>/DCChrg_EOL' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 is_c9_DCCR_ac;               /* '<S12>/DCChrg_EOL' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 is_active_c13_DCCR_ac;       /* '<S11>/DC_GBT' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 is_c13_DCCR_ac;              /* '<S11>/DC_GBT' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 is_GBTShutdown;              /* '<S11>/DC_GBT' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 is_GBTCommunication;         /* '<S11>/DC_GBT' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 is_active_c3_DCCR_ac;        /* '<S11>/DC_Charging' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 is_c3_DCCR_ac;               /* '<S11>/DC_Charging' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 is_SHUTDOWN;                 /* '<S11>/DC_Charging' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 is_Protocol_Selection;       /* '<S11>/DC_Charging' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 is_Initi_isol_prechrg;       /* '<S11>/DC_Charging' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 is_PnC_Init_Isol_Prechrg;    /* '<S11>/DC_Charging' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 PnC_abortReason;             /* '<S11>/DC_Charging' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean checkEVSEst;               /* '<S11>/DC_Charging' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean checkS2;                   /* '<S11>/DC_Charging' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean V2GMode_EMEA_prev;         /* '<S11>/DC_Charging' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean V2GMode_EMEA_start;        /* '<S11>/DC_Charging' */

#define DW_DCCR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_DCCR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_DCCR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DCCR
#include "MemMap.h"

extern VAR(B_DCCR_ac_T, DCCR_VAR_INIT) DCCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DCCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DCCR
#include "MemMap.h"

extern VAR(DW_DCCR_ac_T, DCCR_VAR_INIT) DCCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DCCR
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
 * '<Root>' : 'DCCR_ac'
 * '<S1>'   : 'DCCR_ac/DCCR_MedTED'
 * '<S2>'   : 'DCCR_ac/DCCR_PwrOff'
 * '<S3>'   : 'DCCR_ac/DCCR_PwrOn'
 * '<S4>'   : 'DCCR_ac/DCCR_MedTED/DCCC'
 * '<S5>'   : 'DCCR_ac/DCCR_MedTED/DCCI'
 * '<S6>'   : 'DCCR_ac/DCCR_MedTED/Output_Proc'
 * '<S7>'   : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging'
 * '<S8>'   : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues'
 * '<S9>'   : 'DCCR_ac/DCCR_MedTED/DCCC/Enumerated_Constant5'
 * '<S10>'  : 'DCCR_ac/DCCR_MedTED/DCCC/KeDCCR_b_EnblDCChrg'
 * '<S11>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging'
 * '<S12>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF'
 * '<S13>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Enum Set Block1'
 * '<S14>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Enum Set Block11'
 * '<S15>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Enum Set Block13'
 * '<S16>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Enum Set Block14'
 * '<S17>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Enum Set Block8'
 * '<S18>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Set Block1'
 * '<S19>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Set Block10'
 * '<S20>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Set Block11'
 * '<S21>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Set Block12'
 * '<S22>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Set Block13'
 * '<S23>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Set Block2'
 * '<S24>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Set Block3'
 * '<S25>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Set Block4'
 * '<S26>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Set Block5'
 * '<S27>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Set Block6'
 * '<S28>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Set Block7'
 * '<S29>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Set Block8'
 * '<S30>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/Set Block9'
 * '<S31>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Charging_Protocol_Priority'
 * '<S32>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd'
 * '<S33>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Charging'
 * '<S34>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk'
 * '<S35>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_GBT'
 * '<S36>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits'
 * '<S37>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EV_V2G_Signals'
 * '<S38>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Enum Set Block'
 * '<S39>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Enum Set Block1'
 * '<S40>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Enum Set Block2'
 * '<S41>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Enum Set Block3'
 * '<S42>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Enumerated_Constant'
 * '<S43>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Enumerated_Constant1'
 * '<S44>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Enumerated_Constant2'
 * '<S45>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals'
 * '<S46>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/KeDCCR_b_DCChrgInit_Enbl'
 * '<S47>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/KeDCCR_k_ServiceCategory'
 * '<S48>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block1'
 * '<S49>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block10'
 * '<S50>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block11'
 * '<S51>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block12'
 * '<S52>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block13'
 * '<S53>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block14'
 * '<S54>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block15'
 * '<S55>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block16'
 * '<S56>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block17'
 * '<S57>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block18'
 * '<S58>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block19'
 * '<S59>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block2'
 * '<S60>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block20'
 * '<S61>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block21'
 * '<S62>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block22'
 * '<S63>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block23'
 * '<S64>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block3'
 * '<S65>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block4'
 * '<S66>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block5'
 * '<S67>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block6'
 * '<S68>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block7'
 * '<S69>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block8'
 * '<S70>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Set Block9'
 * '<S71>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing'
 * '<S72>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Charging_Protocol_Priority/KeDCCR_e_ProtocolPriority1'
 * '<S73>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Charging_Protocol_Priority/KeDCCR_e_ProtocolPriority2'
 * '<S74>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/Charging_Protocol_Priority/KeDCCR_e_ProtocolPriority3'
 * '<S75>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/ClosedInterval'
 * '<S76>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/ClosedInterval1'
 * '<S77>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/Enumerated_Constant11'
 * '<S78>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/Enumerated_Constant3'
 * '<S79>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/Enumerated_Constant4'
 * '<S80>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/Enumerated_Constant5'
 * '<S81>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/IfThenElseif'
 * '<S82>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/KeDCCR_Cnt_EVSEVoltInterval_Dbnc'
 * '<S83>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/KeDCCR_Cnt_EVSEVoltInterval_Dbnc1'
 * '<S84>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/KeDCCR_U_EVSE400VInterval_MN'
 * '<S85>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/KeDCCR_U_EVSE400VInterval_MX'
 * '<S86>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/KeDCCR_U_EVSE800VInterval_MN'
 * '<S87>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/KeDCCR_U_EVSE800VInterval_MX'
 * '<S88>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/KeDCCR_b_SwtchblBttryPckEnbl'
 * '<S89>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/KeDCCR_e_DC_ChrgTypeCmd_Def'
 * '<S90>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/KeDCCR_e_DC_ChrgTypeCmd_Def1'
 * '<S91>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/Signal Latch On With Reset'
 * '<S92>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/Signal Latch On With Reset1'
 * '<S93>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/Turn On Delay Sample'
 * '<S94>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/Turn On Delay Sample1'
 * '<S95>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/Turn On Delay Sample/EdgeRising'
 * '<S96>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_ChargeTypeCmd/Turn On Delay Sample1/EdgeRising'
 * '<S97>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Digital Lowpass Reset Enabled1'
 * '<S98>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/EdgeRising'
 * '<S99>'  : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/EnergyCounter'
 * '<S100>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Enumerated_Constant'
 * '<S101>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Enumerated_Constant1'
 * '<S102>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Enumerated_Constant3'
 * '<S103>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Enumerated_Constant4'
 * '<S104>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/HeDCCR_t_dT'
 * '<S105>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/IfThenElseif'
 * '<S106>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/IfThenElseifElse'
 * '<S107>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_Cnt_CurrentLimitDebounce'
 * '<S108>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_Cnt_DINVoltDiff_Delay'
 * '<S109>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_Cnt_Dbnc_DCBusCurr'
 * '<S110>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_Cnt_Dbnc_DmdExcdCurr'
 * '<S111>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_Cnt_Dbnc_DmdExcdVolt'
 * '<S112>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_Cnt_Dbnc_EVSEMaxCrntLimV2G'
 * '<S113>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_Cnt_ISOVoltDiff_Delay'
 * '<S114>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_I_CrntOffsetSensErr'
 * '<S115>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_I_DC_CurrToleranceMin'
 * '<S116>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_I_DC_CurrToleranceThresh'
 * '<S117>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_I_DC_EmergCurrPresent'
 * '<S118>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_I_DC_MinCurrentPresent'
 * '<S119>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_K_DCTargetVoltCoeff'
 * '<S120>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_Pct_HVBatSOH_V2GEnblLimit'
 * '<S121>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_Pct_HVBatSOH_V2GLim'
 * '<S122>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_Pct_V2GSOCLowerLim'
 * '<S123>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_Pct_V2GSOCUpperLim'
 * '<S124>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_U_DC_MaxVoltDiff'
 * '<S125>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_U_EVSE_OutputVLimit'
 * '<S126>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_U_HVBatVoltOffSet'
 * '<S127>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_U_ISO_MaxVoltDiff'
 * '<S128>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_U_MaxAllowableBattVolt'
 * '<S129>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_U_MaxAllowableBattVolt_400V'
 * '<S130>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_U_MaxAllowableBattVolt_800V'
 * '<S131>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_U_MaxAllowableBattVolt_null'
 * '<S132>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_b_EVSE_OutputVChk'
 * '<S133>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_b_EnableV2GFeature'
 * '<S134>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_b_EnblChrgCounter'
 * '<S135>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_b_LogisticModeOvrd'
 * '<S136>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_b_ResetV2GPerfInhibTime'
 * '<S137>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_b_ResetV2GTimer'
 * '<S138>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_b_SwtchblBttryPckEnbl'
 * '<S139>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_k_DC_IECCurrTolerance'
 * '<S140>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_k_DC_J1772CurrTolerance'
 * '<S141>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_k_DC_VoltTolerance'
 * '<S142>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_t_V2GLimPerfTO'
 * '<S143>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/KeDCCR_t_V2GTotalTimeLim'
 * '<S144>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/OpenInterval'
 * '<S145>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Signal Latch On With Reset'
 * '<S146>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample'
 * '<S147>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample1'
 * '<S148>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample2'
 * '<S149>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample3'
 * '<S150>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample4'
 * '<S151>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample5'
 * '<S152>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample6'
 * '<S153>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample7'
 * '<S154>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Digital Lowpass Reset Enabled1/Limiter'
 * '<S155>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/EnergyCounter/HeDCCR_t_dT'
 * '<S156>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample/EdgeRising'
 * '<S157>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample1/EdgeRising'
 * '<S158>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample2/EdgeRising'
 * '<S159>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample3/EdgeRising'
 * '<S160>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample4/EdgeRising'
 * '<S161>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample5/EdgeRising'
 * '<S162>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample6/EdgeRising'
 * '<S163>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Curr_Volt_Chk/Turn On Delay Sample7/EdgeRising'
 * '<S164>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/EVLimits_DCChrgType400'
 * '<S165>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/EVLimits_DCChrgType800'
 * '<S166>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/EVLimits_DCChrgTypenull'
 * '<S167>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/KeDCCR_E_EVEnergyCapacity'
 * '<S168>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/KeDCCR_P_EVMax_P_Limit'
 * '<S169>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/KeDCCR_P_V2H_EVMax_P_Limit'
 * '<S170>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/KeDCCR_P_V2H_EVMax_P_LmtDef'
 * '<S171>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/KeDCCR_U_EVMax_V_Limit'
 * '<S172>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/KeDCCR_b_SwtchblBttryPckEnbl'
 * '<S173>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/EVLimits_DCChrgType400/KeDCCR_E_EVEnergyCapacity_400V'
 * '<S174>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/EVLimits_DCChrgType400/KeDCCR_P_EVMax_P_Limit_400V'
 * '<S175>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/EVLimits_DCChrgType400/KeDCCR_U_EVMax_V_Limit_400V'
 * '<S176>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/EVLimits_DCChrgType800/KeDCCR_E_EVEnergyCapacity_800V'
 * '<S177>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/EVLimits_DCChrgType800/KeDCCR_P_EVMax_P_Limit_800V'
 * '<S178>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/EVLimits_DCChrgType800/KeDCCR_U_EVMax_V_Limit_800V'
 * '<S179>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/EVLimits_DCChrgTypenull/KeDCCR_E_EVEnergyCapacity_null'
 * '<S180>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/EVLimits_DCChrgTypenull/KeDCCR_P_EVMax_P_Limit_null'
 * '<S181>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EVLimits/EVLimits_DCChrgTypenull/KeDCCR_U_EVMax_V_Limit_null'
 * '<S182>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EV_V2G_Signals/KeDCCR_I_EVMax_I_Limit'
 * '<S183>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EV_V2G_Signals/KeDCCR_I_MaxDischrgCurr'
 * '<S184>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EV_V2G_Signals/KeDCCR_I_V2GPerfLimDischrgCurr'
 * '<S185>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EV_V2G_Signals/KeDCCR_k_EVErrorCode'
 * '<S186>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/EV_V2G_Signals/Protected Division'
 * '<S187>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/Enumerated_Constant'
 * '<S188>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/Enumerated_Constant1'
 * '<S189>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/Enumerated_Constant10'
 * '<S190>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/Enumerated_Constant11'
 * '<S191>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/Enumerated_Constant2'
 * '<S192>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/Enumerated_Constant3'
 * '<S193>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/Enumerated_Constant4'
 * '<S194>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/Enumerated_Constant5'
 * '<S195>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/Enumerated_Constant6'
 * '<S196>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/Enumerated_Constant7'
 * '<S197>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/Enumerated_Constant8'
 * '<S198>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/Enumerated_Constant9'
 * '<S199>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/IfThenElseifElse'
 * '<S200>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/IfThenElseifElse1'
 * '<S201>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/IfThenElseifElse2'
 * '<S202>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/KeDCCR_I_MaxBattChrgCurr'
 * '<S203>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/KeDCCR_Pct_BattFullSOC'
 * '<S204>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/KeDCCR_Pct_GBTBattMaxSOC'
 * '<S205>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/KeDCCR_Pct_GBTBattMinSOC'
 * '<S206>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/KeDCCR_T_BattTempMaxGBT'
 * '<S207>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/KeDCCR_T_BattTempMinGBT'
 * '<S208>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/KeDCCR_T_GBTMaxBattTempAllwd'
 * '<S209>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/KeDCCR_U_BattCellMaxGBT'
 * '<S210>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/GBT_Signals/KeDCCR_U_BattCellMinGBT'
 * '<S211>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/KeDCCR_Cnt_Dbnc_EVSELimAchivd'
 * '<S212>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/KeDCCR_Cnt_Dbnc_EVSEMaxCrntLimV2H'
 * '<S213>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/KeDCCR_Cnt_Dbnc_EVSEMaxPwrLimV2H'
 * '<S214>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/KeDCCR_b_EnblStkOpnChk'
 * '<S215>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/Turn On Delay Sample'
 * '<S216>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/Turn On Delay Sample1'
 * '<S217>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/Turn On Delay Sample2'
 * '<S218>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/Turn On Delay Sample3'
 * '<S219>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/Turn On Delay Sample4'
 * '<S220>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/Turn On Delay Sample/EdgeRising'
 * '<S221>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/Turn On Delay Sample1/EdgeRising'
 * '<S222>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/Turn On Delay Sample2/EdgeRising'
 * '<S223>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/Turn On Delay Sample3/EdgeRising'
 * '<S224>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_Charging/SignalProcessing/Turn On Delay Sample4/EdgeRising'
 * '<S225>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/B604ProgRnTm'
 * '<S226>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/ClosedInterval'
 * '<S227>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/Counter Reset  Enabled '
 * '<S228>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/DCChrg_EOL'
 * '<S229>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/EdgeRising'
 * '<S230>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/Enumerated Constant133'
 * '<S231>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/Enumerated_Constant'
 * '<S232>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/HeDCCR_t_dT'
 * '<S233>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/IfThenElse'
 * '<S234>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/KeDCCR_Cnt_DCChrgTest_atEOL'
 * '<S235>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/KeDCCR_I_DCChrgCrntTest_MaxLim'
 * '<S236>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/KeDCCR_I_DCChrgCrntTest_MinLim'
 * '<S237>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/KeDCCR_I_DCChrgTestCrnt'
 * '<S238>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/KeDCCR_b_EOL_DVC_Ovrd'
 * '<S239>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/KeDCCR_k_EOL_DVC_OvrdVal'
 * '<S240>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/Set Block'
 * '<S241>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/Set Block1'
 * '<S242>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/Set Block2'
 * '<S243>' : 'DCCR_ac/DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/Set Block3'
 * '<S244>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block1'
 * '<S245>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block10'
 * '<S246>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block11'
 * '<S247>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block12'
 * '<S248>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block13'
 * '<S249>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block14'
 * '<S250>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block15'
 * '<S251>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block16'
 * '<S252>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block17'
 * '<S253>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block2'
 * '<S254>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block3'
 * '<S255>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block4'
 * '<S256>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block5'
 * '<S257>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block6'
 * '<S258>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block7'
 * '<S259>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block8'
 * '<S260>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/Enum Set Block9'
 * '<S261>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue1'
 * '<S262>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue10'
 * '<S263>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue11'
 * '<S264>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue12'
 * '<S265>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue13'
 * '<S266>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue14'
 * '<S267>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue15'
 * '<S268>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue16'
 * '<S269>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue17'
 * '<S270>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue2'
 * '<S271>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue3'
 * '<S272>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue4'
 * '<S273>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue5'
 * '<S274>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue6'
 * '<S275>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue7'
 * '<S276>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue8'
 * '<S277>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/EnumeratedValue9'
 * '<S278>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/KeDCCR_E_DC_EVEnergyCapacity'
 * '<S279>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/KeDCCR_I_DCChrgEOL_TestSts'
 * '<S280>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/KeDCCR_I_DC_EVMax_I_Limit'
 * '<S281>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/KeDCCR_K_DC_DCExitRsn_SF'
 * '<S282>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/KeDCCR_K_DC_HCP_EVErrorCode'
 * '<S283>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/KeDCCR_K_DC_SelectedServiceID'
 * '<S284>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/KeDCCR_K_DC_Service_Category'
 * '<S285>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/KeDCCR_K_DC_SlctdEnergyTrsfrTyp'
 * '<S286>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/KeDCCR_P_DC_EVMax_P_Limit'
 * '<S287>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/KeDCCR_Pct_DC_GBT_BattFullSOC'
 * '<S288>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/KeDCCR_T_DC_GBT_MaxBattTempAllwd'
 * '<S289>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/KeDCCR_U_DC_EVMax_V_Limit'
 * '<S290>' : 'DCCR_ac/DCCR_MedTED/DCCC/DefaultsValues/KeDCCR_U_DC_EV_DCTargetVoltage'
 * '<S291>' : 'DCCR_ac/DCCR_MedTED/DCCI/Digital Lowpass Reset Enabled'
 * '<S292>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_I_EVSEMaxCurrLmtOvrdVal'
 * '<S293>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_I_EVSEOutputCurrOvrdVal'
 * '<S294>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_I_HV_AccCurrOvrdVal'
 * '<S295>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_K_Service_IDOvrdVal'
 * '<S296>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_Pct_HVBatSOHOvrdVal'
 * '<S297>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_U_EVSEMaxVoltLmtOvrdVal'
 * '<S298>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_U_EVSEOutputVoltOvrdVal'
 * '<S299>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_BPCM_ChrgStatOvrd'
 * '<S300>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_ChargeReqOvrd'
 * '<S301>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_ChargeReqOvrdVal'
 * '<S302>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_Chrgr_FaultStates'
 * '<S303>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_DCIsolStsOvrd'
 * '<S304>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_DC_Isolation_StsOvrd'
 * '<S305>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_DC_Isolation_StsOvrdVal'
 * '<S306>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_DcChargeTypeStatovrd'
 * '<S307>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVCCFailStsOvrd'
 * '<S308>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVCCFailStsOvrdVal'
 * '<S309>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSECurrLmtAchvdOvrd'
 * '<S310>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSECurrLmtAchvdOvrdVal'
 * '<S311>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEIsolStsOvrd'
 * '<S312>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEMaxCurrLmtOvrd'
 * '<S313>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEMaxVoltLmtOvrdVal'
 * '<S314>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEOutputCurrOvrd'
 * '<S315>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEOutputVoltOvrd'
 * '<S316>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEProcessingOvrd'
 * '<S317>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEProcessingOvrdVal'
 * '<S318>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEPwrLmtAchvdOvrd'
 * '<S319>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEPwrLmtAchvdOvrdVal'
 * '<S320>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEStsCodeOvrd'
 * '<S321>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEVoltLmtAchvdOvrd'
 * '<S322>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEVoltLmtAchvdOvrdVal'
 * '<S323>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEfreeServOvrd'
 * '<S324>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEfreeServOvrdVal'
 * '<S325>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEnotificOvrd'
 * '<S326>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEsupportsDINovrd'
 * '<S327>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEsupportsDINovrdVal'
 * '<S328>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEsupportsISO1ovrd'
 * '<S329>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_EVSEsupportsISO1ovrdVal'
 * '<S330>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_GBT_EVSEChrgPermittingOvrd'
 * '<S331>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_GBT_EVSEChrgPermittingVal'
 * '<S332>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_HVBatSOHOvrd'
 * '<S333>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_HVBat_DC_CntctrOpnOvrd'
 * '<S334>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_HVBat_DC_CntctrOpnOvrdVal'
 * '<S335>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_HVBat_DC_CntctrReqOvrd'
 * '<S336>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_HVBat_DC_CntctrReqOvrdVal'
 * '<S337>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_HVBat_DC_CntctrStatOvrd'
 * '<S338>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_HV_AccCurrOvrd'
 * '<S339>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_HV_BatCntctrOpnRqOvrd'
 * '<S340>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_HV_BatCntctrOpnRqOvrdVal'
 * '<S341>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_IDCM_DCCAOvrd'
 * '<S342>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_IDCM_DCCAOvrdVal'
 * '<S343>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_InFieldMdOvrd'
 * '<S344>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_InFieldMdVal'
 * '<S345>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_OBCM_TimeOut'
 * '<S346>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_OBCM_TimeOutVal'
 * '<S347>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_OfferedPaymContrOvrd'
 * '<S348>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_OfferedPaymContrOvrdVal'
 * '<S349>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_OfferedPaymEIMOvrd'
 * '<S350>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_OfferedPaymEIMOvrdVal'
 * '<S351>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_OffrdEnrgyTxTypeOvrd'
 * '<S352>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_OffrdPaymOptionOvrd'
 * '<S353>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_PnCPROXIOvrd'
 * '<S354>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_Resp_CodeOvrd'
 * '<S355>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_SDP_StsOvrd'
 * '<S356>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_SLACStsOvrd'
 * '<S357>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_Service2CertOvrd'
 * '<S358>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_Service2CertOvrdVal'
 * '<S359>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_Service_IDOvrd'
 * '<S360>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_ShipMdOvrd'
 * '<S361>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_StkOpnChkCmpl'
 * '<S362>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_StkOpnChkCmplVal'
 * '<S363>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_TCPCommTerminatedOvrd'
 * '<S364>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_TCPCommTerminatedVal'
 * '<S365>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_TLSconnectionOvrd'
 * '<S366>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_TLSofferedOvrd'
 * '<S367>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_TLSofferedOvrdVal'
 * '<S368>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_TimeOutOvrd'
 * '<S369>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_TimeOutOvrdVal'
 * '<S370>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_TxGBTMsgResponse'
 * '<S371>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_TxMsgSelector'
 * '<S372>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_b_TxMsgStatOvrd'
 * '<S373>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_BPCM_ChrgStatVal'
 * '<S374>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_Chrgr_FaultStates'
 * '<S375>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_DCIsolStsVal'
 * '<S376>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_DcChargeTypeStatovrdVal'
 * '<S377>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_EVSEIsolStsOvrdVal'
 * '<S378>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_EVSEStsCodeOvrdVal'
 * '<S379>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_EVSEnotificOvrdVal'
 * '<S380>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_HVBat_DC_CntctrStatOvrdVal'
 * '<S381>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_OffrdEnrgyTxTypeOvrdVal'
 * '<S382>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_OffrdPaymOptionVal'
 * '<S383>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_PnCPROXIOvrdVal'
 * '<S384>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_Resp_CodeOvrdVal'
 * '<S385>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_SDP_StsOvrdVal'
 * '<S386>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_SLACStsOvrdVal'
 * '<S387>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_ShipMdOvrdVal'
 * '<S388>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_TLSconnectionOvrdVal'
 * '<S389>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_TxGBTMsgResponse'
 * '<S390>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_e_TxMsgStatOvrdVal'
 * '<S391>' : 'DCCR_ac/DCCR_MedTED/DCCI/KeDCCR_k_LPF_MaxCellVoltCoef'
 * '<S392>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block1'
 * '<S393>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block10'
 * '<S394>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block12'
 * '<S395>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block13'
 * '<S396>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block15'
 * '<S397>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block16'
 * '<S398>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block17'
 * '<S399>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block2'
 * '<S400>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block3'
 * '<S401>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block4'
 * '<S402>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block5'
 * '<S403>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block6'
 * '<S404>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block7'
 * '<S405>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block8'
 * '<S406>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Enum Set Block9'
 * '<S407>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock'
 * '<S408>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block1'
 * '<S409>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block10'
 * '<S410>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block11'
 * '<S411>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block2'
 * '<S412>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block20'
 * '<S413>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block23'
 * '<S414>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block24'
 * '<S415>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block25'
 * '<S416>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block26'
 * '<S417>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block28'
 * '<S418>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block29'
 * '<S419>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block3'
 * '<S420>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block30'
 * '<S421>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block31'
 * '<S422>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block32'
 * '<S423>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block33'
 * '<S424>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block34'
 * '<S425>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block4'
 * '<S426>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block43'
 * '<S427>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block5'
 * '<S428>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block6'
 * '<S429>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block7'
 * '<S430>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block8'
 * '<S431>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/Set Block9'
 * '<S432>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_K_SelSrvcIDOvrdVal'
 * '<S433>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_U_EV_DCTargetVoltOvrdVal'
 * '<S434>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_DCChrgInitialization_Ovrd'
 * '<S435>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_DCChrgInitialization_Val'
 * '<S436>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_DC_ChrgTypeCmdOvrd'
 * '<S437>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_DC_CntctrCmdOvrd'
 * '<S438>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_DC_Isolation_CmdOvrd'
 * '<S439>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_DC_Isolation_CmdOvrdVal'
 * '<S440>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_EVReadyOvrd'
 * '<S441>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_EVReadyOvrdVal'
 * '<S442>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_EV_DCTargetVoltOvrd'
 * '<S443>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_HCP_EVErrorCodeOvrd'
 * '<S444>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_RdyToChrgStOvrd'
 * '<S445>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_RdyToChrgStOvrdVal'
 * '<S446>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_SelEnrgyTxTypeOvrd'
 * '<S447>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_SelSrvcIDOvrd'
 * '<S448>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_SessionStpCmdOvrd'
 * '<S449>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_SessionStpCmdOvrdVal'
 * '<S450>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_SrvcCategoryOvrd'
 * '<S451>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_WldChkCompleteOvrd'
 * '<S452>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_b_WldChkCompleteOvrdVal'
 * '<S453>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_e_DC_ChrgTypeCmdOvrdVal'
 * '<S454>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_e_DC_CntctrCmdOvrdVal'
 * '<S455>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_k_HCP_EVErrorCodeOvrdVal'
 * '<S456>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_k_SelEnrgyTxTypeOvrdVal'
 * '<S457>' : 'DCCR_ac/DCCR_MedTED/Output_Proc/OverrideBlock/KeDCCR_k_SrvcCategoryOvrdVal'
 * '<S458>' : 'DCCR_ac/DCCR_PwrOn/Variant Subsystem'
 * '<S459>' : 'DCCR_ac/DCCR_PwrOn/Variant Subsystem/Subsystem'
 * '<S460>' : 'DCCR_ac/DCCR_PwrOn/Variant Subsystem/Subsystem1'
 * '<S461>' : 'DCCR_ac/DCCR_PwrOn/Variant Subsystem/Subsystem/DCC_Init'
 * '<S462>' : 'DCCR_ac/DCCR_PwrOn/Variant Subsystem/Subsystem/DSM_Init'
 * '<S463>' : 'DCCR_ac/DCCR_PwrOn/Variant Subsystem/Subsystem/Sub_Out_Init'
 */
#endif                                 /* RTW_HEADER_DCCR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
