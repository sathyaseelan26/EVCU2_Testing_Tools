/*
 * File: OBCR_ac.h
 *
 * Code generated for Simulink model 'OBCR_ac'.
 *
 * Model version                  : 9.571
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:35:24 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_OBCR_ac_h_
#define RTW_HEADER_OBCR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef OBCR_ac_COMMON_INCLUDES_
#define OBCR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_OBCR.h"
#endif                                 /* OBCR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S345>/Stateflow Chart' */
typedef struct
{
    float32 P_out;                     /* '<S345>/Stateflow Chart' */
    float32 VeOBCR_t_Therm_StateTimer; /* '<S345>/Stateflow Chart' */
}
B_StateflowChart_OBCR_ac_T;

/* Block states (default storage) for system '<S345>/Stateflow Chart' */
typedef struct
{
    uint8 is_active_c35_OBCR_ac;       /* '<S345>/Stateflow Chart' */
    uint8 is_c35_OBCR_ac;              /* '<S345>/Stateflow Chart' */
}
DW_StateflowChart_OBCR_ac_T;

/* Block signals (default storage) */
typedef struct tag_B_OBCR_ac_T
{
    float32 OutportBufferForVeOBCR_I_MaxAll;/* '<S870>/Const3' */
    float32 OutportBufferForVeOBCR_U_MinAll;/* '<S870>/Const4' */
    float32 OutportBufferForVeOBCR_U_MaxAll;/* '<S870>/Const5' */
    float32 OutportBufferForVeOBCR_I_MaxA_p;/* '<S870>/Const6' */
    float32 OutportBufferForVeOBCR_I_ChrgCr;/* '<S870>/Const7' */
    float32 OutportBufferForVeOBCR_U_ChrgVl;/* '<S870>/Const8' */
    float32 OutportBufferForVeOBCR_P_AvalPw;/* '<S870>/Const14' */
    float32 OutportBufferForVeOBCR_Pct_Targ;/* '<S870>/Const15' */
    float32 OutportBufferForVeOBCR_I_BattSi;/* '<S870>/Const18' */
    float32 OutportBufferForVeOBCR_P_Est_Po;/* '<S870>/Const33' */
    float32 OutportBufferForVeOBCR_I_EVMax_;/* '<S870>/Const39' */
    float32 OutportBufferForVeOBCR_P_EVMax_;/* '<S870>/Const40' */
    float32 OutportBufferForVeOBCR_U_EVMax_;/* '<S870>/Const41' */
    float32 OutportBufferForVeOBCR_E_EVEner;/* '<S870>/Const42' */
    float32 OutportBufferForVeOBCR_E_EVEn_d;/* '<S870>/Const43' */
    float32 OutportBufferForVeOBCR_U_EV_DCT;/* '<S870>/Const46' */
    float32 OutportBufferForVeOBCR_t_RemTim;/* '<S870>/Const50' */
    float32 OutportBufferForVeOBCR_t_EstTim;/* '<S870>/Const64' */
    float32 OutportBufferForVeOBCR_t_EstT_f;/* '<S870>/Const65' */
    float32 OutportBufferForVeOBCR_I_MaxA_d;/* '<S870>/Const66' */
    float32 OutportBufferForVeOBCR_I_ChrgCu;/* '<S870>/Const68' */
    float32 OutportBufferForVeOBCR_Pct_Batt;/* '<S870>/Const76' */
    float32 OutportBufferForVeOBCR_P_PLS_Pw;/* '<S870>/Const84' */
    float32 OutportBufferForVeOBCR_P_PLS__k;/* '<S870>/Const85' */
    float32 OutportBufferForVeOBCR_P_PLS__h;/* '<S870>/Const86' */
    float32 OutportBufferForVeOBCR_P_PLS__b;/* '<S870>/Const87' */
    float32 OutportBufferForVeOBCR_P_PLS_ks;/* '<S870>/Const88' */
    float32 OutportBufferForVeOBCR_T_GBT_Ma;/* '<S870>/Const89' */
    float32 OutportBufferForVeOBCR_t_RemT_h;/* '<S870>/Const102' */
    float32 OutportBufferForVeOBCR_P_EVSEPw;/* '<S870>/Const147' */
    float32 OutportBufferForVeOBCR_P_Powert;/* '<S870>/Const148' */
    float32 OutportBufferForVeOBCR_q_Batter;/* '<S870>/Const149' */
    float32 OutportBufferForVeOBCR_P_ActCha;/* '<S870>/Const150' */
    float32 OutportBufferForVeOBCR_P_ActC_g;/* '<S870>/Const151' */

#if Rte_SysCon_Variant_OBCR_1

    float32 TmpSignalConversionAtVeIDCR_I_J;/* '<S1>/VeIDCR_I_J1772InputCrntAval' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 TmpSignalConversionAtVeIDCR_U_A;/* '<S1>/VeIDCR_U_AC_InputVltOBCM' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

    float32 VeOBCR_U_MinAllowableBattVolt;
                                      /* '<S7>/KeOBCR_U_MinAllowableBattVolt' */
    float32 VeOBCR_U_MaxAllowableBattVolt;
                                      /* '<S7>/KeOBCR_U_MaxAllowableBattVolt' */
    float32 VeOBCR_I_MaxAllowableCrntBatt;/* '<S7>/KeOBCR_I_MaxAlwdBatCurr' */

#if Rte_SysCon_Variant_OBCR_2

    float32 Switch1;                   /* '<S607>/Switch1' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 Switch1_e;                 /* '<S132>/Switch1' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 Switch;                    /* '<S132>/Switch' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 VeOBCR_E_EVEnergyReq;      /* '<S135>/Product' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 Switch_k;                  /* '<S107>/Switch' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 Switch1_m;                 /* '<S335>/Switch1' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 Switch1_h;                 /* '<S595>/Switch1' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 OutportBufferForActChargeLim;

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 OutportBufferForActChargePwr;

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 OutportBufferForEVSEPwr;

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 OutportBufferForEnergyToBatt;

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 OutportBufferForTotalBattCap;

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 VeOBCR_t_InStateTimerCLSD; /* '<S444>/ChargingLevelDet' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 Switch_p;                  /* '<S156>/Switch' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 Switch_n;                  /* '<S155>/Switch' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 MinMax1;                   /* '<S164>/MinMax1' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 MinMax2;                   /* '<S164>/MinMax2' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 MinMax1_c;                 /* '<S165>/MinMax1' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 MinMax2_o;                 /* '<S165>/MinMax2' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 Switch2;                   /* '<S223>/Switch2' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 MinMax1_i;                 /* '<S223>/MinMax1' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 MinMax2_m;                 /* '<S223>/MinMax2' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 Sum3;                      /* '<S252>/Sum3' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 Sum3_j;                    /* '<S251>/Sum3' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

    uint16 OutportBufferForVeOBCR_K_Select;/* '<S870>/Const51' */
    uint16 OutportBufferForVeOBCR_k_MaxEnt;/* '<S870>/Const159' */
    uint16 OutportBufferForVeOBCR_d_Servic;/* '<S870>/Const160' */
    uint16 VeOBCR_d_ServiceScope;      /* '<S7>/Constant Value2' */
    sint16 OutportBufferForVeOBCR_k_ChrgSy;/* '<S870>/Const16' */
    sint16 OutportBufferForVeOBCR_e_Servic;/* '<S870>/Const35' */
    sint16 OutportBufferForVeOBCR_e_SelEnr;/* '<S870>/Const36' */
    sint16 OutportBufferForVeOBCR_e_HCP_EV;/* '<S870>/Const38' */
    sint16 OutportBufferForVeOBCR_K_Chargi;/* '<S870>/Const57' */
    sint16 OutportBufferForVeOBCR_K_Char_p;/* '<S870>/Const58' */
    sint16 OutportBufferForVeOBCR_K_Char_c;/* '<S870>/Const59' */
    sint16 OutportBufferForVeOBCR_K_Char_d;/* '<S870>/Const60' */
    sint16 OutportBufferForVeOBCR_K_Char_m;/* '<S870>/Const61' */
    sint16 OutportBufferForVeOBCR_Cnt_Plug;/* '<S870>/Const103' */
    sint16 OutportBufferForVaOBCR_Cnt_Plug[15];
    sint16 OutportBufferForVeOBCR_Cnt_Init;/* '<S870>/Const136' */
    sint16 OutportBufferForVaOBCR_k_InitCh[7];
    sint16 OutportBufferForVeOBCR_Cnt_NCR_;/* '<S870>/Const145' */

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch1_e1;                 /* '<S558>/Switch1' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch10;                   /* '<S558>/Switch10' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch12;                   /* '<S558>/Switch12' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch13;                   /* '<S558>/Switch13' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch14;                   /* '<S558>/Switch14' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch15;                   /* '<S558>/Switch15' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch16;                   /* '<S558>/Switch16' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch2_f;                  /* '<S558>/Switch2' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch3;                    /* '<S558>/Switch3' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch4;                    /* '<S558>/Switch4' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch5;                    /* '<S558>/Switch5' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch6;                    /* '<S558>/Switch6' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch7;                    /* '<S558>/Switch7' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch8;                    /* '<S558>/Switch8' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Switch9;                    /* '<S558>/Switch9' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 SignalConversion[7];        /* '<S25>/Signal Conversion' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 Gain_e3;                    /* '<S20>/Gain' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 VeOBCR_k_ChargingLevelState;/* '<S444>/ChargingLevelDet' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 NCR;                        /* '<S15>/Charging_MainSF' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

    uint8 OutportBufferForVeOBCR_k_ChrgPo;/* '<S870>/Const63' */
    boolean OutportBufferForVeOBCR_b_EnblCh;/* '<S870>/Const9' */
    boolean OutportBufferForVeOBCR_b_CloseS;/* '<S870>/Const10' */
    boolean OutportBufferForVeOBCR_b_RdyFor;/* '<S870>/Const12' */
    boolean OutportBufferForVeOBCR_b_Enable;/* '<S870>/Const17' */
    boolean OutportBufferForVeOBCR_b_Charge;/* '<S870>/Const19' */
    boolean OutportBufferForVeOBCR_b_HMIR_M;/* '<S870>/Const20' */
    boolean OutportBufferForVeOBCR_b_HMIR_i;/* '<S870>/Const21' */
    boolean OutportBufferForVeOBCR_b_Secure;/* '<S870>/Const22' */
    boolean OutportBufferForVeOBCR_b_HMIR_b;/* '<S870>/Const24' */
    boolean OutportBufferForVeOBCR_b_DVC_Ch;/* '<S870>/Const25' */
    boolean OutportBufferForVeOBCR_b_Lock_S;/* '<S870>/Const26' */
    boolean OutportBufferForVeOBCR_b_ChrgPo;/* '<S870>/Const27' */
    boolean OutportBufferForVeOBCR_b_SmartE;/* '<S870>/Const28' */
    boolean OutportBufferForVeOBCR_b_ValidP;/* '<S870>/Const29' */
    boolean OutportBufferForVeOBCR_b_Relock;/* '<S870>/Const30' */
    boolean OutportBufferForVeOBCR_b_ChrgSy;/* '<S870>/Const31' */
    boolean OutportBufferForVeOBCR_b_Plugge;/* '<S870>/Const32' */
    boolean OutportBufferForVeOBCR_b_HMI_iv;/* '<S870>/Const34' */
    boolean OutportBufferForVeOBCR_b_EVRead;/* '<S870>/Const37' */
    boolean OutportBufferForVeOBCR_b_DC_Iso;/* '<S870>/Const44' */
    boolean OutportBufferForVeOBCR_b_WeldCh;/* '<S870>/Const47' */
    boolean OutportBufferForVeOBCR_b_RdyToC;/* '<S870>/Const48' */
    boolean OutportBufferForVeOBCR_b_Chargi;/* '<S870>/Const49' */
    boolean OutportBufferForVeOBCR_b_HCP_Se;/* '<S870>/Const53' */
    boolean OutportBufferForVeOBCR_b_Chrg_e;/* '<S870>/Const62' */
    boolean OutportBufferForVeOBCR_b_DCChrg;/* '<S870>/Const69' */
    boolean OutportBufferForVeOBCR_b_CPIM_E;/* '<S870>/Const74' */
    boolean OutportBufferForVeOBCR_b_CPIM_O;/* '<S870>/Const75' */
    boolean OutportBufferForVeOBCR_b_BattOv;/* '<S870>/Const77' */
    boolean OutportBufferForVeOBCR_b_BattUn;/* '<S870>/Const78' */
    boolean OutportBufferForVeOBCR_b_DCGBTR;/* '<S870>/Const81' */
    boolean OutportBufferForVeOBCR_b_DCGBTE;/* '<S870>/Const82' */
    boolean OutportBufferForVeOBCR_b_Enab_o;/* '<S870>/Const92' */
    boolean OutportBufferForVeOBCR_b_Secu_o;/* '<S870>/Const93' */
    boolean OutportBufferForVeOBCR_b_BPCM_R;/* '<S870>/Const95' */
    boolean OutportBufferForVeOBCR_b_Select;/* '<S870>/Const97' */
    boolean OutportBufferForVeOBCR_b_RacePr;/* '<S870>/Const101' */
    boolean OutportBufferForVeOBCR_b_ChrgrL;/* '<S870>/Const119' */
    boolean OutportBufferForVeOBCR_b_PlugIn;/* '<S870>/Const120' */
    boolean OutportBufferForVaOBCR_b_NCR_Si[15];
    boolean OutportBufferForVeOBCR_b_Enab_e;/* '<S870>/Const137' */
    boolean OutportBufferForVeOBCR_b_EnblDs;/* '<S870>/Const146' */
    boolean OutportBufferForVeOBCR_b_ActCha;/* '<S870>/Const152' */
    boolean OutportBufferForVeOBCR_b_ActC_l;/* '<S870>/Const153' */
    boolean OutportBufferForVeOBCR_b_PnCFai;/* '<S870>/Const154' */
    boolean OutportBufferForVeOBCR_b_PnCRet;/* '<S870>/Const155' */
    boolean OutportBufferForChrgSysFault_EE;/* '<S871>/Constant Value1' */

#if Rte_SysCon_Variant_OBCR_1

    boolean TmpSignalConversionAtVeIDCR_b_J;/* '<S1>/VeIDCR_b_J1772_S2_Status' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean TmpSignalConversionAtVeVTLR_b_A;/* '<S1>/VeVTLR_b_ACSwSts' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical1_b;                /* '<S22>/Logical1' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical6;                  /* '<S541>/Logical6' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical13;                 /* '<S10>/Logical13' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean VeOBCR_b_SecureConnEstI;   /* '<S541>/Logical1' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean VeOBCR_b_EnableCharge;     /* '<S24>/Logical' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical4;                  /* '<S105>/Logical4' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean VeOBCR_b_SmartEVSE;        /* '<S583>/Logical3' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Merge_2_l;                 /* '<S10>/Merge_2' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Merge_4_m;                 /* '<S10>/Merge_4' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Merge_5_a;                 /* '<S10>/Merge_5' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Gain_o;                    /* '<S441>/Gain' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical10;                 /* '<S24>/Logical10' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical11;                 /* '<S24>/Logical11' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical12;                 /* '<S24>/Logical12' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical13_c;               /* '<S24>/Logical13' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical14;                 /* '<S24>/Logical14' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical15;                 /* '<S24>/Logical15' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical16;                 /* '<S24>/Logical16' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical17;                 /* '<S24>/Logical17' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical22;                 /* '<S24>/Logical22' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical24;                 /* '<S24>/Logical24' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical5;                  /* '<S24>/Logical5' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical6_e;                /* '<S24>/Logical6' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical7;                  /* '<S24>/Logical7' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical8;                  /* '<S24>/Logical8' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Logical9;                  /* '<S24>/Logical9' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay;                 /* '<S24>/Unit Delay' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Gain_ah;                   /* '<S19>/Gain' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Gain_jv;                   /* '<S21>/Gain' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean OutportBufferForActChargeLimFA;

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean OutportBufferForActChargePwrFA;

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean ChrgPort_BCM_Cmd_In;       /* '<S4>/ChrgPort_BCM_Cmd_In' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean AND_i;                     /* '<S442>/AND' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Flag;                      /* '<S444>/ChargingLevelDet' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean OBCM_ChrgEnblRq;           /* '<S15>/Charging_MainSF' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean S2_Cmd;                    /* '<S15>/Charging_MainSF' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean RdyForShtDwn;              /* '<S15>/Charging_MainSF' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean ChargingComplete;          /* '<S15>/Charging_MainSF' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Gain_eg;                   /* '<S18>/Gain' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean Gain_k1;                   /* '<S17>/Gain' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

    TeSRAR_e_SysShtDwnTyp OutportBufferForVeOBCR_e_ChrgSy;/* '<S870>/Const13' */
    TeSRAR_e_SysShtDwnTyp VeOBCR_e_ChrgSysShtDwnFlt;/* '<S7>/Enumerated Value1' */
    TeOBCR_e_SOCReachedBST OutportBufferForVeOBCR_e_SOCRch;/* '<S870>/Const80' */
    TeOBCR_e_PwrLimReq OutportBufferForVeOBCR_e_PwrLev;/* '<S870>/Const94' */
    TeOBCR_e_ProtocolPriority OutportBufferForVeOBCR_e_Protoc;/* '<S870>/Const156' */
    TeOBCR_e_ProtocolPriority OutportBufferForVeOBCR_e_Prot_j;/* '<S870>/Const157' */
    TeOBCR_e_ProtocolPriority OutportBufferForVeOBCR_e_Prot_h;/* '<S870>/Const158' */
    TeOBCR_e_MaxCellVoltRchdBST OutportBufferForVeOBCR_e_MaxCel;/* '<S870>/Const83' */
    TeOBCR_e_HVCM_SelPaymentOptn OutportBufferForVeOBCR_e_SelPay;/* '<S870>/Const52' */
    TeOBCR_e_HVCM_SelAppProtocol OutportBufferForVeOBCR_e_Select;/* '<S870>/Const96' */
    TeOBCR_e_HVBattBalReq OutportBufferForVeOBCR_e_HVBatt;/* '<S870>/Const11' */
    TeOBCR_e_HCP_DC_Retry OutportBufferForVeOBCR_e_HCP_DC;/* '<S870>/Const54' */
    TeOBCR_e_DC_ChrgTypeCmd OutportBufferForVeOBCR_e_DC_Chr;/* '<S870>/Const99' */
    TeOBCR_e_DCCntctrCmd OutportBufferForVeOBCR_e_DC_Cnt;/* '<S870>/Const45' */
    TeOBCR_e_DCChrg_TestSts OutportBufferForVeOBCR_e_DCChrg;/* '<S870>/Const56' */
    TeOBCR_e_ChrgrTrsfMethodReq OutportBufferForVeOBCR_e_ChrgrT;/* '<S870>/Const2' */
    TeOBCR_e_ChrgrTrsfMethodReq VeOBCR_e_ChrgrTrsfMethodReq;/* '<S7>/Enumerated Value' */
    TeOBCR_e_ChrgrModeCmd_OBCM OutportBufferForVeOBCR_e_ChrgrM;/* '<S870>/Const1' */

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChrgrModeCmd_OBCM DataTypeConversion_ko;/* '<S13>/DataTypeConversion' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChrgrModeCmd_OBCM OBCM_MdRq;/* '<S15>/Charging_MainSF' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

    TeOBCR_e_ChrgrInterruptBST OutportBufferForVeOBCR_e_GBT_Ch;/* '<S870>/Const91' */
    TeOBCR_e_ChrgSysStat OutportBufferForVeOBCR_e_Chrg_a;/* '<S870>/Const67' */

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChrgSysStat Merge_3;      /* '<S8>/Merge_3' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChrgSysStat DataTypeConversion_ch;/* '<S12>/DataTypeConversion' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChrgSysStat ChrgSysStat;  /* '<S15>/Charging_MainSF' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

    TeOBCR_e_ChrgPort_Req OutportBufferForVeOBCR_e_ChrgPo;/* '<S870>/Const23' */
    TeOBCR_e_ChrgCurrStatus OutportBufferForVeOBCR_e_ChrgCu;/* '<S870>/Const71' */
    TeOBCR_e_ChrgCntrlMthd OutportBufferForVeOBCR_e_GBT__a;/* '<S870>/Const90' */

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChargingSystemSts Merge_24;/* '<S10>/Merge_24' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChargingSystemSts VeOBCR_e_ChargingSystemStsO;/* '<S445>/ChrgingSysStsDet' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChargingLevel Merge_1_p;  /* '<S10>/Merge_1' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

    TeOBCR_e_ChargeportLock_Sts OutportBufferForVeOBCR_e_Charge;/* '<S870>/Const100' */
    TeOBCR_e_ChargeType OutportBufferForVeOBCR_e_Char_n;/* '<S870>/Const55' */

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChargeType Switch1_a;     /* '<S35>/Switch1' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

    TeOBCR_e_ChargeProgress OutportBufferForVeOBCR_e_Char_f;/* '<S870>/Const98' */
    TeOBCR_e_ChargeProgress TmpSignalConversionAtVeDCCR_e_C;
    TeOBCR_e_CellVoltageStatus OutportBufferForVeOBCR_e_CellVo;/* '<S870>/Const70' */
    TeOBCR_e_BattTempStatus OutportBufferForVeOBCR_e_BattTe;/* '<S870>/Const72' */
    TeOBCR_e_BattSOCStatus OutportBufferForVeOBCR_e_SOC_OO;/* '<S870>/Const73' */
    TeOBCR_e_BattPckVoltRchdBST OutportBufferForVeOBCR_e_BattPc;/* '<S870>/Const79' */

#if Rte_SysCon_Variant_OBCR_2

    B_StateflowChart_OBCR_ac_T sf_StateflowChart_j;/* '<S617>/Stateflow Chart' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    B_StateflowChart_OBCR_ac_T sf_StateflowChart;/* '<S345>/Stateflow Chart' */

#define B_OBCR_AC_T_VARIANT_EXISTS
#endif

}
B_OBCR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_OBCR_ac_T
{

#if Rte_SysCon_Variant_OBCR_2

    float32 UnitDelay_DSTATE;          /* '<S656>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_2

    float32 UnitDelay_DSTATE_h;        /* '<S643>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_2

    float32 UnitDelay_DSTATE_c;        /* '<S638>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_f;        /* '<S442>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_d;        /* '<S421>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_h4;       /* '<S408>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_fa;       /* '<S402>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_m;        /* '<S380>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_g;        /* '<S347>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_ml;       /* '<S322>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_h2;       /* '<S307>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 x2_DSTATE;                 /* '<S288>/x2' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 temp_DSTATE;               /* '<S288>/temp' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 x2_DSTATE_a;               /* '<S287>/x2' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 temp_DSTATE_e;             /* '<S287>/temp' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 x2_DSTATE_n;               /* '<S286>/x2' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 temp_DSTATE_h;             /* '<S286>/temp' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay4_DSTATE;         /* '<S158>/Unit Delay4' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay3_DSTATE;         /* '<S158>/Unit Delay3' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_j;        /* '<S158>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay4_DSTATE_i;       /* '<S157>/Unit Delay4' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay3_DSTATE_c;       /* '<S157>/Unit Delay3' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_b;        /* '<S157>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_o;        /* '<S194>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_bl;       /* '<S193>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_gi;       /* '<S167>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_k;        /* '<S166>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_cf;       /* '<S252>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_kc;       /* '<S251>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 UnitDelay_DSTATE_a;        /* '<S130>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

    float32 UnitDelay_DSTATE_mf;       /* '<S663>/Unit Delay' */

#if Rte_SysCon_Variant_OBCR_1

    float32 B2;                        /* '<S445>/ChrgingSysStsDet' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 VeOBCR_t_InStateTime;      /* '<S445>/ChrgingSysStsDet' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 temp;                      /* '<S445>/ChrgingSysStsDet' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 sum;                       /* '<S289>/Chart' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 average;                   /* '<S289>/Chart' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint16 UnitDelay7_DSTATE;          /* '<S444>/Unit Delay7' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_2

    uint16 UnitDelay_DSTATE_a4;        /* '<S654>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_h1;        /* '<S586>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_hf;        /* '<S585>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_e;         /* '<S572>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_l;         /* '<S561>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_ok;        /* '<S560>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_i;         /* '<S525>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_hk;        /* '<S507>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_n;         /* '<S506>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_h3;        /* '<S493>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_j5;        /* '<S492>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_nk;        /* '<S491>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_a5;        /* '<S419>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_br;        /* '<S376>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_gk;        /* '<S354>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_i5;        /* '<S163>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_iq;        /* '<S221>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_os;        /* '<S216>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_ms;        /* '<S97>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_iw;        /* '<S101>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_gr;        /* '<S88>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_p;         /* '<S53>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 UnitDelay_DSTATE_nq;        /* '<S26>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 count;                      /* '<S289>/Chart' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint16 prior_window_size;          /* '<S289>/Chart' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_2

    boolean UnitDelay_DSTATE_h1p;      /* '<S655>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_2

    boolean UnitDelay_DSTATE_kw;       /* '<S629>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_2

    boolean UnitDelay1_DSTATE;         /* '<S638>/Unit Delay1' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay1_DSTATE_j;       /* '<S24>/Unit Delay1' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean IntegerDelay_DSTATE;       /* '<S10>/Integer Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay2_DSTATE;         /* '<S105>/Unit Delay2' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ci;       /* '<S24>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_l1;       /* '<S589>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ai;       /* '<S588>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ck;       /* '<S587>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_af;       /* '<S582>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_as;       /* '<S573>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_or;       /* '<S563>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_df;       /* '<S562>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_od;       /* '<S526>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_pd;       /* '<S524>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_cr;       /* '<S509>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ii;       /* '<S508>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ei;       /* '<S496>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_gj;       /* '<S495>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_gz;       /* '<S494>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_by;       /* '<S490>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ab;       /* '<S489>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_oe;       /* '<S482>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_pa;       /* '<S481>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_eg;       /* '<S420>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_nkp;      /* '<S393>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay1_DSTATE_e;       /* '<S402>/Unit Delay1' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_bc;       /* '<S386>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_lq;       /* '<S356>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_cf2;      /* '<S323>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_oe0;      /* '<S305>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_nn;       /* '<S300>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_c1;       /* '<S292>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ag;       /* '<S274>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_nr;       /* '<S273>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ng;       /* '<S272>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_pn;       /* '<S271>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_dd;       /* '<S266>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_pk;       /* '<S160>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay1_DSTATE_n;       /* '<S158>/Unit Delay1' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_a4q;      /* '<S222>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_d1;       /* '<S220>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ej;       /* '<S219>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ec;       /* '<S218>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay1_DSTATE_nz;      /* '<S157>/Unit Delay1' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_aiy;      /* '<S217>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_n2;       /* '<S215>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_f3;       /* '<S214>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_jm;       /* '<S213>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_hu;       /* '<S168>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ad;       /* '<S144>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_e2;       /* '<S143>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_kl;       /* '<S129>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_blf;      /* '<S113>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_hj;       /* '<S112>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ln;       /* '<S111>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_lo;       /* '<S98>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_le;       /* '<S15>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_bd;       /* '<S102>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ao;       /* '<S89>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_pg;       /* '<S87>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_mi;       /* '<S70>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_pb;       /* '<S69>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_j2;       /* '<S62>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_bll;      /* '<S56>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_jz;       /* '<S55>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_abv;      /* '<S40>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean UnitDelay_DSTATE_ot;       /* '<S39>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChrgSysStat IntegerDelay1_DSTATE;/* '<S10>/Integer Delay1' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChrgSysStat UnitDelay3_DSTATE_h;/* '<S25>/Unit Delay3' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChargingLevel UnitDelay_DSTATE_lx;/* '<S105>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChargingLevel UnitDelay1_DSTATE_a;/* '<S105>/Unit Delay1' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChargingLevel UnitDelay_DSTATE_iir;/* '<S479>/Unit Delay' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    TeVTLR_e_DschrgSysSts UnitDelay3_DSTATE_hp;/* '<S105>/Unit Delay3' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint8 If2_ActiveSubsystem;         /* '<S132>/If2' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    sint8 If1_ActiveSubsystem;         /* '<S132>/If1' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

    uint8 StatusByte_LostCommBCCM;     /* '<Root>/DS_StatusByte_LostCommBCCM' */
    uint8 StatusByte_LostCommIDCM;     /* '<Root>/DS_StatusByte_LostCommIDCM' */
    uint8 StatusByte_LostCommOBCM;     /* '<Root>/DS_StatusByte_LostCommOBCM' */
    uint8 StatusByte_LostComm_IDCM_CANC11;
                               /* '<Root>/DS_StatusByte_LostComm_IDCM_CANC11' */

#if Rte_SysCon_Variant_OBCR_1

    uint8 is_active_c44_OBCR_ac;       /* '<S445>/ChrgingSysStsDet' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint8 is_c44_OBCR_ac;              /* '<S445>/ChrgingSysStsDet' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint8 is_active_c55_OBCR_ac;       /* '<S444>/ChargingLevelDet' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint8 is_c55_OBCR_ac;              /* '<S444>/ChargingLevelDet' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint8 is_active_c1_OBCR_ac;        /* '<S15>/Charging_MainSF' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint8 is_c1_OBCR_ac;               /* '<S15>/Charging_MainSF' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint8 is_ChargeTypeState;          /* '<S15>/Charging_MainSF' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    uint8 is_AC;                       /* '<S15>/Charging_MainSF' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

    boolean NeOBCR_b_GoodConnEst;      /* '<Root>/DSM_NeOBCR_b_GoodConnEst' */
    boolean NeOBCR_b_Lvl1Latch;        /* '<Root>/DSM_NeOBCR_b_Lvl1Latch' */
    boolean NeOBCR_b_Lvl2Latch;        /* '<Root>/DSM_NeOBCR_b_Lvl2Latch' */
    boolean NeOBCR_b_SmartEvse_Detected;
                                  /* '<Root>/DSM_NeOBCR_b_SmartEvse_Detected' */

#if Rte_SysCon_Variant_OBCR_1

    boolean B1;                        /* '<S445>/ChrgingSysStsDet' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean B3;                        /* '<S445>/ChrgingSysStsDet' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean B0;                        /* '<S444>/ChargingLevelDet' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean B1_l;                      /* '<S444>/ChargingLevelDet' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean B2_c;                      /* '<S444>/ChargingLevelDet' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean B3_c;                      /* '<S444>/ChargingLevelDet' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean first_pass_complete;       /* '<S289>/Chart' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_2

    DW_StateflowChart_OBCR_ac_T sf_StateflowChart_j;/* '<S617>/Stateflow Chart' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OBCR_1

    DW_StateflowChart_OBCR_ac_T sf_StateflowChart;/* '<S345>/Stateflow Chart' */

#define DW_OBCR_AC_T_VARIANT_EXISTS
#endif

}
DW_OBCR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const sint16 Const104;             /* '<S870>/Const104' */
    const sint16 Const105;             /* '<S870>/Const105' */
    const sint16 Const106;             /* '<S870>/Const106' */
    const sint16 Const107;             /* '<S870>/Const107' */
    const sint16 Const108;             /* '<S870>/Const108' */
    const sint16 Const109;             /* '<S870>/Const109' */
    const sint16 Const110;             /* '<S870>/Const110' */
    const sint16 Const111;             /* '<S870>/Const111' */
    const sint16 Const112;             /* '<S870>/Const112' */
    const sint16 Const113;             /* '<S870>/Const113' */
    const sint16 Const114;             /* '<S870>/Const114' */
    const sint16 Const115;             /* '<S870>/Const115' */
    const sint16 Const116;             /* '<S870>/Const116' */
    const sint16 Const117;             /* '<S870>/Const117' */
    const sint16 Const118;             /* '<S870>/Const118' */
    const sint16 Const138;             /* '<S870>/Const138' */
    const sint16 Const139;             /* '<S870>/Const139' */
    const sint16 Const140;             /* '<S870>/Const140' */
    const sint16 Const141;             /* '<S870>/Const141' */
    const sint16 Const142;             /* '<S870>/Const142' */
    const sint16 Const143;             /* '<S870>/Const143' */
    const sint16 Const144;             /* '<S870>/Const144' */

#if Rte_SysCon_Variant_OBCR_1

    const sint16 Switch2_n;            /* '<S25>/Switch2' */

#define CONSTB_OBCR_AC_T_VARIANT_EXISTS
#endif

    const boolean Const121;            /* '<S870>/Const121' */
    const boolean Const122;            /* '<S870>/Const122' */
    const boolean Const123;            /* '<S870>/Const123' */
    const boolean Const124;            /* '<S870>/Const124' */
    const boolean Const125;            /* '<S870>/Const125' */
    const boolean Const126;            /* '<S870>/Const126' */
    const boolean Const127;            /* '<S870>/Const127' */
    const boolean Const128;            /* '<S870>/Const128' */
    const boolean Const129;            /* '<S870>/Const129' */
    const boolean Const130;            /* '<S870>/Const130' */
    const boolean Const131;            /* '<S870>/Const131' */
    const boolean Const132;            /* '<S870>/Const132' */
    const boolean Const133;            /* '<S870>/Const133' */
    const boolean Const134;            /* '<S870>/Const134' */
    const boolean Const135;            /* '<S870>/Const135' */
    const TeSRAR_e_SysShtDwnTyp Const13;/* '<S870>/Const13' */
    const TeSRAR_e_SysShtDwnTyp Constant;/* '<S757>/Constant' */
    const TeOBCR_e_SOCReachedBST Const80;/* '<S870>/Const80' */
    const TeOBCR_e_PwrLimReq Const94;  /* '<S870>/Const94' */
    const TeOBCR_e_ProtocolPriority Const156;/* '<S870>/Const156' */
    const TeOBCR_e_ProtocolPriority Const157;/* '<S870>/Const157' */
    const TeOBCR_e_ProtocolPriority Const158;/* '<S870>/Const158' */
    const TeOBCR_e_MaxCellVoltRchdBST Const83;/* '<S870>/Const83' */
    const TeOBCR_e_HVCM_SelPaymentOptn Const52;/* '<S870>/Const52' */
    const TeOBCR_e_HVCM_SelAppProtocol Const96;/* '<S870>/Const96' */
    const TeOBCR_e_HVBattBalReq Const11;/* '<S870>/Const11' */
    const TeOBCR_e_HCP_DC_Retry Const54;/* '<S870>/Const54' */
    const TeOBCR_e_DC_ChrgTypeCmd Const99;/* '<S870>/Const99' */
    const TeOBCR_e_DCCntctrCmd Const45;/* '<S870>/Const45' */
    const TeOBCR_e_DCChrg_TestSts Const56;/* '<S870>/Const56' */
    const TeOBCR_e_ChrgrTrsfMethodReq Const2;/* '<S870>/Const2' */
    const TeOBCR_e_ChrgrTrsfMethodReq Constant_h;/* '<S756>/Constant' */
    const TeOBCR_e_ChrgrModeCmd_OBCM Const1;/* '<S870>/Const1' */
    const TeOBCR_e_ChrgrInterruptBST Const91;/* '<S870>/Const91' */
    const TeOBCR_e_ChrgSysStat Const67;/* '<S870>/Const67' */
    const TeOBCR_e_ChrgPort_Req Const23;/* '<S870>/Const23' */
    const TeOBCR_e_ChrgCurrStatus Const71;/* '<S870>/Const71' */
    const TeOBCR_e_ChrgCntrlMthd Const90;/* '<S870>/Const90' */
    const TeOBCR_e_ChargeportLock_Sts Const100;/* '<S870>/Const100' */
    const TeOBCR_e_ChargeType Const55; /* '<S870>/Const55' */

#if Rte_SysCon_Variant_OBCR_1

    const TeOBCR_e_ChargeType Switch3_k;/* '<S35>/Switch3' */

#define CONSTB_OBCR_AC_T_VARIANT_EXISTS
#endif

    const TeOBCR_e_ChargeProgress Const98;/* '<S870>/Const98' */
    const TeOBCR_e_CellVoltageStatus Const70;/* '<S870>/Const70' */
    const TeOBCR_e_BattTempStatus Const72;/* '<S870>/Const72' */
    const TeOBCR_e_BattSOCStatus Const73;/* '<S870>/Const73' */
    const TeOBCR_e_BattPckVoltRchdBST Const79;/* '<S870>/Const79' */
}
ConstB_OBCR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S642>/Vector'
     *   '<S406>/Vector'
     */
    uint32 pooled12[2];

#define CONSTP_OBCR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTP_OBCR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstP_OBCR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_OBCR
#include "MemMap.h"

extern VAR(B_OBCR_ac_T, OBCR_VAR_INIT) OBCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_OBCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_OBCR
#include "MemMap.h"

extern VAR(DW_OBCR_ac_T, OBCR_VAR_INIT) OBCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_OBCR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_OBCR
#include "MemMap.h"

extern CONST(ConstB_OBCR_ac_T, OBCR_VAR_INIT) OBCR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_OBCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_OBCR
#include "MemMap.h"

extern CONST(ConstP_OBCR_ac_T, OBCR_VAR_INIT) OBCR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_OBCR
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
 * '<Root>' : 'OBCR_ac'
 * '<S1>'   : 'OBCR_ac/OBCR_FUNC_MedTED'
 * '<S2>'   : 'OBCR_ac/OBCR_FUNC_PwrOff'
 * '<S3>'   : 'OBCR_ac/OBCR_FUNC_PwrOn'
 * '<S4>'   : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC'
 * '<S5>'   : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV'
 * '<S6>'   : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI'
 * '<S7>'   : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc'
 * '<S8>'   : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF'
 * '<S9>'   : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc'
 * '<S10>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat'
 * '<S11>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge'
 * '<S12>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/Enum Set Block'
 * '<S13>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/Enum Set Block1'
 * '<S14>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/S2Cmd_ShtDwnDly'
 * '<S15>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/SF'
 * '<S16>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/SF1'
 * '<S17>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/Set Block1'
 * '<S18>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/Set Block15'
 * '<S19>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/Set Block2'
 * '<S20>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/Set Block5'
 * '<S21>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/Set Block6'
 * '<S22>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det'
 * '<S23>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks'
 * '<S24>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/EnblChrg'
 * '<S25>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks'
 * '<S26>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/Counter Reset  Enabled '
 * '<S27>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/Enumerated Value'
 * '<S28>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/Enumerated_Constant'
 * '<S29>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/Enumerated_Constant3'
 * '<S30>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/Enumerated_Constant4'
 * '<S31>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/Enumerated_Constant5'
 * '<S32>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/Enumerated_Constant6'
 * '<S33>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/Enumerated_Constant7'
 * '<S34>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/HeOBCR_b_EnableDCGBT'
 * '<S35>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/IfThenElseifElse1'
 * '<S36>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/KeOBCR_Cnt_DCMaxCommTime'
 * '<S37>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/KeOBCR_b_ChrgTypeEnblInfldMd'
 * '<S38>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/KeOBCR_e_InterMarketsSelection'
 * '<S39>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/Signal Latch On With Reset'
 * '<S40>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/ChargeType_Det/Signal Latch On With Reset1'
 * '<S41>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/Enumerated Value'
 * '<S42>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/Enumerated Value1'
 * '<S43>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/Enumerated Value2'
 * '<S44>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/Enumerated Value3'
 * '<S45>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/Enumerated Value5'
 * '<S46>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/Enumerated_Constant1'
 * '<S47>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/IfThenElseif'
 * '<S48>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/KeOBCR_Cnt_Cntctrbypass_Delay'
 * '<S49>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/KeOBCR_b_HoodAjarNoCharge1'
 * '<S50>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/KeOBCR_b_IgnoreHoodAjarCond'
 * '<S51>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/KeOBCR_b_SwtchblBttryPckEnbl'
 * '<S52>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/KeOBCR_e_InterMarketsSelection'
 * '<S53>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/Turn Off Delay Sample'
 * '<S54>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/contctrstat'
 * '<S55>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/Checks/Turn Off Delay Sample/EdgeFalling'
 * '<S56>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/EnblChrg/EdgeRising3'
 * '<S57>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/EnblChrg/Enumerated Value4'
 * '<S58>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/EnblChrg/Enumerated_Constant3'
 * '<S59>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/EnblChrg/Enumerated_Constant4'
 * '<S60>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/EnblChrg/Enumerated_Constant5'
 * '<S61>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/EnblChrg/KeOBCR_b_ChrgCmpltSecConn_Enbl'
 * '<S62>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/EnblChrg/Signal Latch On With Reset'
 * '<S63>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/Enumerated Value'
 * '<S64>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/Enumerated Value1'
 * '<S65>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/Enumerated Value2'
 * '<S66>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/Enumerated Value3'
 * '<S67>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/Enumerated Value4'
 * '<S68>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/Enumerated_Constant'
 * '<S69>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/Hysteresis'
 * '<S70>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/Hysteresis1'
 * '<S71>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/IfThenElseif'
 * '<S72>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_Cnt_Dbnc_ChrgShpMdSOC'
 * '<S73>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_Pct_IPSOCSetPt_HystTol'
 * '<S74>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_Pct_MaxSOC2StopChrgInit'
 * '<S75>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_Pct_NoInitChargeSOCMinHigh'
 * '<S76>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_Pct_NoInitChargeSOCMinLow'
 * '<S77>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_Pct_REMSOCSetPt_HystTol'
 * '<S78>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_Pct_SOCSetPt_IP'
 * '<S79>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_Pct_SOCSetPt_REMLogMode'
 * '<S80>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_T_NoInitChargeTempMax'
 * '<S81>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_T_NoInitChargeTempMin'
 * '<S82>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_U_MaxVlt2StopChrgInit'
 * '<S83>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_b_EnbPlugInChrgShipMd'
 * '<S84>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_b_EnblPlugInChrgPlantMd'
 * '<S85>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_b_Use_IPSOCSetPt'
 * '<S86>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/KeOBCR_b_Use_REMSOCSetPt'
 * '<S87>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/Signal Latch On With Reset1'
 * '<S88>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/Turn On Delay Sample1'
 * '<S89>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/EnableCharge/InitChecks/Turn On Delay Sample1/EdgeRising'
 * '<S90>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/S2Cmd_ShtDwnDly/Enumerated_Constant1'
 * '<S91>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/S2Cmd_ShtDwnDly/Enumerated_Constant2'
 * '<S92>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/S2Cmd_ShtDwnDly/Enumerated_Constant3'
 * '<S93>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/S2Cmd_ShtDwnDly/KeOBCR_Cnt_Rdy4ShtDwnDbnc'
 * '<S94>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/S2Cmd_ShtDwnDly/KeOBCR_b_EnblDlydShtDwn'
 * '<S95>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/S2Cmd_ShtDwnDly/KeOBCR_b_V2X_Selection'
 * '<S96>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/S2Cmd_ShtDwnDly/Subsystem1'
 * '<S97>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/S2Cmd_ShtDwnDly/Turn On Delay Sample'
 * '<S98>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/S2Cmd_ShtDwnDly/Turn On Delay Sample/EdgeRising'
 * '<S99>'  : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/SF/Charging_MainSF'
 * '<S100>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/SF/KeOBCR_Cnt_ACSwitchResponse'
 * '<S101>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/SF/Turn Off Delay Sample'
 * '<S102>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/SF/Turn Off Delay Sample/EdgeFalling'
 * '<S103>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/SF1/Enumerated_Constant1'
 * '<S104>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Main_SF/SF1/Enumerated_Constant2'
 * '<S105>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C'
 * '<S106>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc'
 * '<S107>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det'
 * '<S108>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det1'
 * '<S109>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det2'
 * '<S110>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget'
 * '<S111>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/EdgeRising'
 * '<S112>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/EdgeRising1'
 * '<S113>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/EdgeRising2'
 * '<S114>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/Enumerated Value'
 * '<S115>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/Enumerated Value1'
 * '<S116>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/Enumerated Value2'
 * '<S117>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/Enumerated Value3'
 * '<S118>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/Enumerated Value4'
 * '<S119>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/Enumerated Value5'
 * '<S120>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/Enumerated Value6'
 * '<S121>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/Enumerated Value7'
 * '<S122>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/Enumerated_Constant1'
 * '<S123>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/Enumerated_Constant2'
 * '<S124>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/Enumerated_Constant3'
 * '<S125>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/HeOBCR_t_dT'
 * '<S126>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/KeOBCR_b_EnableCANC_China'
 * '<S127>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/KeOBCR_e_InterMarketsSelection'
 * '<S128>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/KeOBCR_t_CAN_CUpTime'
 * '<S129>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/Signal Latch On With Reset'
 * '<S130>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/CAN_C/Stop Watch Reset Enabled'
 * '<S131>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/BatCapCalc'
 * '<S132>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst'
 * '<S133>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/DCTempAdjCurrFlow'
 * '<S134>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering'
 * '<S135>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/SignalProcessing'
 * '<S136>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/TempAdjCurrFlow'
 * '<S137>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/BatCapCalc/KeOBCR_Pct_UnusedUpperSOCBand'
 * '<S138>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst'
 * '<S139>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/DCCON'
 * '<S140>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/DCCON100'
 * '<S141>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/DCNC100'
 * '<S142>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/DCNotCon'
 * '<S143>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/EdgeRising1'
 * '<S144>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/EdgeRising2'
 * '<S145>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/KeOBCR_Cnt_ConChrgTimeEstDly'
 * '<S146>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/KeOBCR_Pct_DCChrg_80Thrsh'
 * '<S147>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/KeOBCR_k_DiffFactorMergeLvl1'
 * '<S148>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/KeOBCR_k_DiffFactorMergeLvl2'
 * '<S149>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/KeOBCR_k_TimeFactorMergeLvl1'
 * '<S150>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/KeOBCR_k_TimeFactorMergeLvl2'
 * '<S151>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/KeOBCR_t_MaxEstTimeDC_100'
 * '<S152>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/KeOBCR_t_MaxEstTimeDC_80'
 * '<S153>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/KeOBCR_t_MinErrMergeCmptLvl1'
 * '<S154>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/KeOBCR_t_MinErrMergeCmptLvl2'
 * '<S155>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Limiter1'
 * '<S156>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Limiter2'
 * '<S157>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Merge2'
 * '<S158>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Merge3'
 * '<S159>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst'
 * '<S160>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Signal Latch On With Reset'
 * '<S161>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Subsystem'
 * '<S162>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Subsystem1'
 * '<S163>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Turn On Delay Sample'
 * '<S164>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst'
 * '<S165>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst'
 * '<S166>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/GradientLimiter'
 * '<S167>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/GradientLimiter1'
 * '<S168>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/Hysteresis'
 * '<S169>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_I_DfltLvlOneCrnt'
 * '<S170>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_I_DfltLvlTwoCrnt'
 * '<S171>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_K_AddLevelOneFactorCap'
 * '<S172>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_K_AddLevelTwoFactorCap'
 * '<S173>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_K_CellVltHysLevel'
 * '<S174>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_U_MaxAlwdCellVltLvl1'
 * '<S175>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_b_AddLevelOneFactorMul'
 * '<S176>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_k_AddLevelOneFactorMul'
 * '<S177>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_t_AddLevelOneFactor1'
 * '<S178>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_t_AddLevelTwoFactor'
 * '<S179>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_t_Level1TimeEstGradNeg'
 * '<S180>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_t_Level1TimeEstGradPos'
 * '<S181>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_t_Level2TimeEstGradNeg'
 * '<S182>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_t_Level2TimeEstGradPos'
 * '<S183>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_t_Lvl1ChrgTimeFinal'
 * '<S184>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KeOBCR_t_Lvl2ChrgTimeFinal'
 * '<S185>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KtOBCR_t_ChrgCurrAvlFacLvl1'
 * '<S186>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/KtOBCR_t_ChrgCurrAvlFacLvl2'
 * '<S187>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/Protected Division'
 * '<S188>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/Protected Division1'
 * '<S189>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/Protected Division2'
 * '<S190>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/Protected Division3'
 * '<S191>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/GradientLimiter/Limiter'
 * '<S192>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/AC_ChrgTimeEst/GradientLimiter1/Limiter'
 * '<S193>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/GradientLimiter'
 * '<S194>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/GradientLimiter1'
 * '<S195>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/KaOBCR_I_DefaultDCCurrent'
 * '<S196>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/KaOBCR_k_CurrentScalingFactor'
 * '<S197>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/KaOBCR_k_CurrentScalingYIntrcpt'
 * '<S198>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/KeOBCR_I_DCCurrentThresh'
 * '<S199>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/KeOBCR_I_MinDefaultDCCurrent'
 * '<S200>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/KeOBCR_K_ChrgTimeEst_NegGrd'
 * '<S201>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/KeOBCR_K_ChrgTimeEst_PosGrd'
 * '<S202>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/KeOBCR_K_ChrgTimeEst_TimeScale'
 * '<S203>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/KeOBCR_t_DCChargeTimeFinal100'
 * '<S204>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/KeOBCR_t_DCChargeTimeFinal80'
 * '<S205>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/KtOBCR_k_DCHighSOCFactor'
 * '<S206>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/KtOBCR_k_SOCIndex_Select'
 * '<S207>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/Limiter1'
 * '<S208>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/Protected Division1'
 * '<S209>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/Protected Division2'
 * '<S210>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/Protected Division5'
 * '<S211>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/GradientLimiter/Limiter'
 * '<S212>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/ConChrgTimeEst/DC_ChrgTimeEst/GradientLimiter1/Limiter'
 * '<S213>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Merge2/EdgeRising'
 * '<S214>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Merge2/EdgeRising1'
 * '<S215>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Merge2/Signal Latch On With Reset'
 * '<S216>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Merge2/Turn On Delay Sample'
 * '<S217>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Merge2/Turn On Delay Sample/EdgeRising'
 * '<S218>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Merge3/EdgeRising'
 * '<S219>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Merge3/EdgeRising1'
 * '<S220>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Merge3/Signal Latch On With Reset'
 * '<S221>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Merge3/Turn On Delay Sample'
 * '<S222>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Merge3/Turn On Delay Sample/EdgeRising'
 * '<S223>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC'
 * '<S224>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC'
 * '<S225>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/Enumerated Value1'
 * '<S226>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/Enumerated Value2'
 * '<S227>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/Enumerated Value3'
 * '<S228>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/Enumerated Value4'
 * '<S229>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/IfThenElseif'
 * '<S230>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/IfThenElseif1'
 * '<S231>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KaOBCR_k_LvlPerc'
 * '<S232>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_I_DfltLvlOneCrnt_NotConn'
 * '<S233>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_I_DfltLvlTwoCrnt_NotConn'
 * '<S234>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_I_Lv1Crnt_NotConn_China'
 * '<S235>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_I_Lv1Crnt_NotConn_EMEA'
 * '<S236>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_I_Lv2Crnt_NotConn_China'
 * '<S237>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_I_Lv2Crnt_NotConn_EMEA'
 * '<S238>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_I_MinChrgCurr'
 * '<S239>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_K_AddLevelOneFactorCap'
 * '<S240>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_K_AddLevelTwoFactorCap'
 * '<S241>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_b_AddLevelOneFactorMul'
 * '<S242>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_e_InterMarketsSelection'
 * '<S243>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_k_AddLevelOneFactorMul'
 * '<S244>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_t_AddLv1Factor_NotConn'
 * '<S245>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_t_AddLvl2Factor_NotConn'
 * '<S246>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/KeOBCR_t_NotConnectedMinTime'
 * '<S247>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/Protected Division'
 * '<S248>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/Protected Division1'
 * '<S249>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/Protected Division2'
 * '<S250>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/AC_ChrgTimeEst_NC/Protected Division3'
 * '<S251>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/GradientLimiter2'
 * '<S252>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/GradientLimiter3'
 * '<S253>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/KaOBCR_I_DefaultDCCurrent'
 * '<S254>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/KaOBCR_k_CurrentScalingFactor'
 * '<S255>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/KaOBCR_k_CurrentScalingYIntrcpt'
 * '<S256>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/KeOBCR_K_ChrgTimeEst_NegGrd'
 * '<S257>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/KeOBCR_K_ChrgTimeEst_PosGrd'
 * '<S258>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/KeOBCR_K_ChrgTimeEst_TimeScale'
 * '<S259>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/KtOBCR_k_DCHighSOCFactor'
 * '<S260>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/Limiter3'
 * '<S261>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/Protected Division3'
 * '<S262>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/Protected Division4'
 * '<S263>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/Protected Division5'
 * '<S264>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/GradientLimiter2/Limiter'
 * '<S265>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/NConn_ChrgTimeEst/DC_ChrgTimeEst_NC/GradientLimiter3/Limiter'
 * '<S266>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/ChargeTimeEst/Turn On Delay Sample/EdgeRising'
 * '<S267>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/DCTempAdjCurrFlow/KeOBCR_k_DCTempFactor_Default'
 * '<S268>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/DCTempAdjCurrFlow/KtOBCR_k_DCTempFactor_Window'
 * '<S269>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/DCTempAdjCurrFlow/KtOBCR_k_SOCIndex_Select'
 * '<S270>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/DCTempAdjCurrFlow/Limiter'
 * '<S271>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/EdgeRising'
 * '<S272>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/EdgeRising1'
 * '<S273>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/EdgeRising2'
 * '<S274>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/EdgeRising3'
 * '<S275>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/HeOBCR_t_dT'
 * '<S276>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/KaOBCR_k_LvlPerc'
 * '<S277>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/KeOBCR_I_MinChrgCurr'
 * '<S278>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/KeOBCR_K_BattTemp_FilterTimeConst1'
 * '<S279>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/KeOBCR_K_BattTemp_FilterTimeConst2'
 * '<S280>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/KeOBCR_K_ChrgCurrAval_FilterTimeConst_D'
 * '<S281>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/KeOBCR_K_ChrgCurrAval_FilterTimeConst_T'
 * '<S282>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/KeOBCR_K_DCCurr_FiltWindowSize'
 * '<S283>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/KeOBCR_K_SOC_FilterTimeConst1'
 * '<S284>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/KeOBCR_K_SOC_FilterTimeConst2'
 * '<S285>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/KeOBCR_b_ChrgCrntFltRstSel'
 * '<S286>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/Lowpass Second Order Enabled'
 * '<S287>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/Lowpass Second Order Enabled1'
 * '<S288>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/Lowpass Second Order Enabled2'
 * '<S289>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/Windowed Average'
 * '<S290>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/Windowed Average/Chart'
 * '<S291>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/Windowed Average/Limiter'
 * '<S292>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/SignalProcessing/EdgeFalling'
 * '<S293>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/SignalProcessing/Enumerated Value'
 * '<S294>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/SignalProcessing/Enumerated Value1'
 * '<S295>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/SignalProcessing/Enumerated_Constant'
 * '<S296>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/SignalProcessing/Enumerated_Constant1'
 * '<S297>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/SignalProcessing/Enumerated_Constant2'
 * '<S298>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/SignalProcessing/KeOBCR_U_HVBatt_NominalVolt'
 * '<S299>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/SignalProcessing/KtOBCR_K_SOC2TimeFactor'
 * '<S300>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/SignalProcessing/Signal Latch On With Reset'
 * '<S301>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/TempAdjCurrFlow/KeOBCR_K_ChargTimeCalFactor'
 * '<S302>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/TempAdjCurrFlow/KtOBCR_k_BattChrgCrntLimitTime'
 * '<S303>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/TempAdjCurrFlow/Limiter'
 * '<S304>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/TempAdjCurrFlow/Protected Division'
 * '<S305>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det/EdgeRising'
 * '<S306>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det/Enumerated Value'
 * '<S307>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det/GradientLimiter'
 * '<S308>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det/IfThenElse'
 * '<S309>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det/KeOBCR_Pct_TargetSOC'
 * '<S310>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det/KeOBCR_k_GradDropTargSOC'
 * '<S311>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det/GradientLimiter/Limiter'
 * '<S312>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det1/Enumerated_Constant1'
 * '<S313>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det1/Enumerated_Constant2'
 * '<S314>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det1/Racc_Prep_Active'
 * '<S315>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det1/Race_Prep_Inactive'
 * '<S316>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det1/Racc_Prep_Active/Enumerated_Constant'
 * '<S317>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det1/Racc_Prep_Active/Enumerated_Constant1'
 * '<S318>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det1/Racc_Prep_Active/Enumerated_Constant3'
 * '<S319>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det1/Racc_Prep_Active/HeOBCR_t_dT'
 * '<S320>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det1/Racc_Prep_Active/KeOBCR_Pct_RaceprepSOClimit'
 * '<S321>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det1/Racc_Prep_Active/KeOBCR_t_RaceprepSOCChkDelay'
 * '<S322>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det1/Racc_Prep_Active/Turn On Delay Time'
 * '<S323>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det1/Racc_Prep_Active/Turn On Delay Time/EdgeRising'
 * '<S324>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det2/KeOBCR_P_TestActChargeLim'
 * '<S325>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det2/KeOBCR_P_TestActChargePower'
 * '<S326>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det2/KeOBCR_P_TestEVSEPwr'
 * '<S327>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det2/KeOBCR_P_TestPowertoBattery'
 * '<S328>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det2/KeOBCR_b_TestActChargeLimFA'
 * '<S329>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det2/KeOBCR_b_TestActChargePwrFA'
 * '<S330>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/TargetSOC_Det2/KeOBCR_q_TestTotalBattCap'
 * '<S331>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/EngPwr_APwr_Blend'
 * '<S332>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Enumerated_Constant'
 * '<S333>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/I_Batt'
 * '<S334>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/IfThenElseif'
 * '<S335>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/IfThenElseif3'
 * '<S336>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/KeOBCR_P_AvalPwrForThmrVal'
 * '<S337>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/KeOBCR_P_DfltEng_PwrBdgt'
 * '<S338>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/KeOBCR_b_AvalPwrForThmrEnbl'
 * '<S339>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/KeOBCR_b_UseECT_PwrBdgt'
 * '<S340>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/KeOBCR_b_isBEV'
 * '<S341>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/KtOBCR_P_ECT_PwrBdgt'
 * '<S342>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic'
 * '<S343>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations'
 * '<S344>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Status_Det'
 * '<S345>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Therm_Hyst'
 * '<S346>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/EngPwr_APwr_Blend/Enumerated_Constant2'
 * '<S347>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/EngPwr_APwr_Blend/GradientLimiter'
 * '<S348>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/EngPwr_APwr_Blend/KeOBCR_Cnt_ECTPwrBdgtDbnc_PPMd'
 * '<S349>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/EngPwr_APwr_Blend/KeOBCR_P_ECTPwrBdgtTh_PPMd'
 * '<S350>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/EngPwr_APwr_Blend/KeOBCR_P_NewHyst_MaxOut'
 * '<S351>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/EngPwr_APwr_Blend/KeOBCR_P_ThrmlBdgt_LD_PPMd'
 * '<S352>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/EngPwr_APwr_Blend/KeOBCR_P_ThrmlBdgt_LU_PPMd'
 * '<S353>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/EngPwr_APwr_Blend/KeOBCR_b_Allw_PPMd_PwrBudgetBlend'
 * '<S354>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/EngPwr_APwr_Blend/Turn On Delay Sample'
 * '<S355>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/EngPwr_APwr_Blend/GradientLimiter/Limiter'
 * '<S356>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/EngPwr_APwr_Blend/Turn On Delay Sample/EdgeRising'
 * '<S357>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/I_Batt/Enumerated Value2'
 * '<S358>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/I_Batt/Enumerated_Constant'
 * '<S359>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/I_Batt/Enumerated_Constant2'
 * '<S360>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/I_Batt/KeOBCR_I_CurrOffset_EstPwrBdgt'
 * '<S361>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/I_Batt/KeOBCR_P_NewHyst_MaxOut'
 * '<S362>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/I_Batt/KeOBCR_b_UseMinCurr_EstPwrBdgt'
 * '<S363>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/I_Batt/KtOBCR_k_MaxPower_SOC'
 * '<S364>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/I_Batt/KtOBCR_k_MaxPower_Temp'
 * '<S365>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/I_Batt/Protected Division'
 * '<S366>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/I_Batt/SCALAR_BLK'
 * '<S367>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Enumerated_Constant'
 * '<S368>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/KeOBCR_Cnt_SOCLoDbnc_ThrmlBdgt'
 * '<S369>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/KeOBCR_P_EngCrank'
 * '<S370>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/KeOBCR_Pct_PSA_ThrmlBdgt_SOCThrsh'
 * '<S371>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/KeOBCR_b_EnblModThrmlBdgt'
 * '<S372>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/KeOBCR_b_UseBPLT_PwrBdgt'
 * '<S373>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Modify_ThrmlBudget'
 * '<S374>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/PassThrough'
 * '<S375>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Pass_APower_EVMode'
 * '<S376>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Turn On Delay Sample1'
 * '<S377>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Enumerated_Constant/Enum_SET2'
 * '<S378>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Enumerated_Constant/Enumerated Constant'
 * '<S379>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Enumerated_Constant/Enum_SET2/Subsystem'
 * '<S380>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Modify_ThrmlBudget/Digital Lowpass Reset Enabled1'
 * '<S381>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Modify_ThrmlBudget/KeOBCR_P_MinThrmlBdgt'
 * '<S382>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Modify_ThrmlBudget/KeOBCR_P_MtrGenThrsh'
 * '<S383>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Modify_ThrmlBudget/KeOBCR_k_ThrmlBdgtOfstFiltCoef'
 * '<S384>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Modify_ThrmlBudget/KtOBCR_P_ThrmlBdgt_OfstwMtr'
 * '<S385>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Modify_ThrmlBudget/KtOBCR_P_ThrmlBdgt_OfstwoMtr'
 * '<S386>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/ModThrmlLogic/Turn On Delay Sample1/EdgeRising'
 * '<S387>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/APower_Calc'
 * '<S388>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg'
 * '<S389>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/PwrToThrm'
 * '<S390>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/APower_Calc/KeOBCR_b_UseAccCurrent'
 * '<S391>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/APower_Calc/KeOBCR_b_UseMinCurr_EstPwrBdgt'
 * '<S392>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling'
 * '<S393>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/EdgeRising'
 * '<S394>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/Enumerated Value2'
 * '<S395>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/IfThenElse'
 * '<S396>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/KeOBCR_P_MaxPwr2ModBdgt'
 * '<S397>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/KeOBCR_P_MinPwr2ModBdgt'
 * '<S398>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/KeOBCR_P_Thermal_Offset'
 * '<S399>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/KeOBCR_T_MinTemp2ModPwrBdgt'
 * '<S400>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/OpenInterval'
 * '<S401>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling/DocBlock'
 * '<S402>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling/GenCycle'
 * '<S403>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling/HeOBCR_t_dT'
 * '<S404>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling/KeOBCR_P_AddnPwrtoBdgt'
 * '<S405>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling/KeOBCR_t_CondChrgCycTmPeriod'
 * '<S406>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling/KtOBCR_r_ThermCondDutyCycle'
 * '<S407>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/PwrToThrm/Enumerated_Constant'
 * '<S408>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/PwrToThrm/GradientLimiter2'
 * '<S409>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/PwrToThrm/KeOBCR_P_AvalPwrForThmrNeg'
 * '<S410>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/PwrToThrm/KeOBCR_P_AvalPwrForThmrPos'
 * '<S411>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/PwrToThrm/KtOBCR_k_ThermalProfile'
 * '<S412>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Power_Calculations/PwrToThrm/GradientLimiter2/Limiter'
 * '<S413>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Status_Det/Enumerated Value'
 * '<S414>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Status_Det/Enumerated Value1'
 * '<S415>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Status_Det/Enumerated Value2'
 * '<S416>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Status_Det/Enumerated Value3'
 * '<S417>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Status_Det/Enumerated Value4'
 * '<S418>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Status_Det/KeOBCR_Cnt_PwrBdgt_Dbnc_PSA'
 * '<S419>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Status_Det/Turn On Delay Sample'
 * '<S420>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Status_Det/Turn On Delay Sample/EdgeRising'
 * '<S421>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Therm_Hyst/GradientLimiter'
 * '<S422>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Therm_Hyst/KeOBCR_P_NewHyst_MaxOut'
 * '<S423>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Therm_Hyst/KeOBCR_P_Thermal_Hys_LD'
 * '<S424>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Therm_Hyst/KeOBCR_P_Thermal_Hys_LU'
 * '<S425>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Therm_Hyst/Set Block'
 * '<S426>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Therm_Hyst/Stateflow Chart'
 * '<S427>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Therm_Hyst/GradientLimiter/Limiter'
 * '<S428>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev'
 * '<S429>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev1'
 * '<S430>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Enumerated Value'
 * '<S431>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Enumerated Value2'
 * '<S432>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Enumerated Value3'
 * '<S433>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Enumerated Value5'
 * '<S434>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Enumerated Value6'
 * '<S435>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Enumerated_Constant'
 * '<S436>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Enumerated_Constant1'
 * '<S437>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/HeOBCR_t_dT'
 * '<S438>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/KeOBCR_b_EnblPlgInFlg'
 * '<S439>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/KeOBCR_t_UnplugFlgDbncTmr'
 * '<S440>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst'
 * '<S441>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Set Block'
 * '<S442>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Turn Off Delay Time'
 * '<S443>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets'
 * '<S444>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet'
 * '<S445>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet'
 * '<S446>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/Enum Set Block'
 * '<S447>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/Enum Set Block1'
 * '<S448>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/Enum Set Block2'
 * '<S449>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/HeOBCR_b_LOCIDCMSecBus'
 * '<S450>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/HeOBCR_b_LOC_BCCM'
 * '<S451>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/KeOBCR_b_LOC_IDCM'
 * '<S452>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/KeOBCR_b_LOC_OBCM'
 * '<S453>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/Set Block'
 * '<S454>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/Set Block1'
 * '<S455>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/Set Block2'
 * '<S456>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/Set Block3'
 * '<S457>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/getFaultActiveAndTestCompleted'
 * '<S458>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/getFaultActiveAndTestCompleted1'
 * '<S459>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/getFaultActiveAndTestCompleted2'
 * '<S460>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/getFaultActiveAndTestCompleted3'
 * '<S461>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChargingLevelDet'
 * '<S462>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChrgLevel'
 * '<S463>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Enum Set Block'
 * '<S464>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Enum Set Block1'
 * '<S465>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active'
 * '<S466>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock'
 * '<S467>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Set Block'
 * '<S468>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Set Block2'
 * '<S469>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Set Block3'
 * '<S470>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet'
 * '<S471>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChrgLevel/Enumerated Value1'
 * '<S472>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChrgLevel/Enumerated Value2'
 * '<S473>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChrgLevel/Enumerated Value3'
 * '<S474>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChrgLevel/Enumerated Value4'
 * '<S475>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChrgLevel/Enumerated Value5'
 * '<S476>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChrgLevel/Enumerated Value6'
 * '<S477>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChrgLevel/Enumerated Value7'
 * '<S478>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChrgLevel/Enumerated Value8'
 * '<S479>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChrgLevel/IfThenElseif'
 * '<S480>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChrgLevel/KeOBCR_k_DCChrgPrtPPI'
 * '<S481>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/Hysteresis'
 * '<S482>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/Hysteresis1'
 * '<S483>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/KeOBCR_Cnt_DbncInputVoltSigCnt'
 * '<S484>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/KeOBCR_Cnt_DbncRstChargLvl'
 * '<S485>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/KeOBCR_U_LSP_VoltageLvl'
 * '<S486>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/KeOBCR_U_LSP_VoltageLvl1'
 * '<S487>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/KeOBCR_U_RSP_VoltageLvl'
 * '<S488>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/KeOBCR_U_RSP_VoltageLvl1'
 * '<S489>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/Signal Latch On With Reset'
 * '<S490>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/Signal Latch On With Reset2'
 * '<S491>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/Turn On Delay Sample'
 * '<S492>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/Turn On Delay Sample1'
 * '<S493>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/Turn On Delay Sample2'
 * '<S494>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/Turn On Delay Sample/EdgeRising'
 * '<S495>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/Turn On Delay Sample1/EdgeRising'
 * '<S496>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/Lv1_Lv2_Active/Turn On Delay Sample2/EdgeRising'
 * '<S497>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock/Enumerated_Constant'
 * '<S498>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock/Enumerated_Constant1'
 * '<S499>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock/Enumerated_Constant4'
 * '<S500>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock/Enumerated_Constant6'
 * '<S501>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock/Enumerated_Constant7'
 * '<S502>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock/KeOBCR_Cnt_DbncPlugInLock'
 * '<S503>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock/KeOBCR_Cnt_DlyPlugInLock'
 * '<S504>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock/KeOBCR_I_MinJ1772ICA'
 * '<S505>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock/KeOBCR_U_MinValue2TrgrPPI'
 * '<S506>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock/Turn Off Delay Sample1'
 * '<S507>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock/Turn On Delay Sample3'
 * '<S508>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock/Turn Off Delay Sample1/EdgeFalling1'
 * '<S509>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/SecurePlug_Lock/Turn On Delay Sample3/EdgeRising'
 * '<S510>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/Enumerated_Constant'
 * '<S511>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/Enumerated_Constant1'
 * '<S512>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/Enumerated_Constant10'
 * '<S513>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/Enumerated_Constant2'
 * '<S514>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/Enumerated_Constant4'
 * '<S515>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/Enumerated_Constant6'
 * '<S516>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/Enumerated_Constant8'
 * '<S517>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/Enumerated_Constant9'
 * '<S518>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/KeOBCR_Cnt_DbncTimePlugInVldCn1'
 * '<S519>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/KeOBCR_I_MinJ1772ICA'
 * '<S520>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/KeOBCR_U_MinValue2TrgrPPI'
 * '<S521>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/KeOBCR_b_IgnoreFltVehSpd'
 * '<S522>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/KeOBCR_e_PMMPowerMd_VldPlgIn'
 * '<S523>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/KeOBCR_v_VehicleSpdPPI_Rprted'
 * '<S524>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/Signal Latch On With Reset1'
 * '<S525>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/Turn On Delay Sample3'
 * '<S526>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ValidPluginDet/Turn On Delay Sample3/EdgeRising'
 * '<S527>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet/ChrgingSysStsDet'
 * '<S528>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet/Enum Set Block'
 * '<S529>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet/Enum Set Block1'
 * '<S530>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet/Enum Set Block2'
 * '<S531>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet/Enumerated Value'
 * '<S532>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet/Enumerated Value1'
 * '<S533>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet/KeOBCR_b_ChargSysStsOvrd'
 * '<S534>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet/KeOBCR_b_ChrgSysStsOvrdNtChrging'
 * '<S535>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet/KeOBCR_k_ChargingSts'
 * '<S536>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev1/Enumerated_Constant'
 * '<S537>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev1/Enumerated_Constant1'
 * '<S538>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev1/Enumerated_Constant2'
 * '<S539>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/HeOBCR_t_dT'
 * '<S540>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys'
 * '<S541>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/SecureConn'
 * '<S542>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE'
 * '<S543>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value1'
 * '<S544>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value10'
 * '<S545>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value11'
 * '<S546>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value12'
 * '<S547>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value13'
 * '<S548>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value14'
 * '<S549>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value2'
 * '<S550>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value3'
 * '<S551>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value4'
 * '<S552>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value5'
 * '<S553>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value6'
 * '<S554>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value7'
 * '<S555>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value8'
 * '<S556>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Enumerated Value9'
 * '<S557>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/IfThenElseif'
 * '<S558>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/IfThenElseif1'
 * '<S559>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/KeOBCR_Cnt_DbncPlugInReason'
 * '<S560>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Turn On Delay Sample'
 * '<S561>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Turn On Delay Sample1'
 * '<S562>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Turn On Delay Sample/EdgeRising'
 * '<S563>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/PlugInReasonSubSys/Turn On Delay Sample1/EdgeRising'
 * '<S564>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/SecureConn/Enumerated Value1'
 * '<S565>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/SecureConn/Enumerated Value2'
 * '<S566>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/SecureConn/Enumerated Value3'
 * '<S567>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/SecureConn/Enumerated Value4'
 * '<S568>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/SecureConn/Enumerated_Constant'
 * '<S569>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/SecureConn/Enumerated_Constant2'
 * '<S570>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/SecureConn/KeOBCR_Cnt_SecureConnV2L_Dbnc'
 * '<S571>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/SecureConn/KeOBCR_I_MinJ1772ICA'
 * '<S572>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/SecureConn/Turn On Delay Sample'
 * '<S573>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/SecureConn/Turn On Delay Sample/EdgeRising'
 * '<S574>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/Enumerated Value'
 * '<S575>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/Enumerated Value4'
 * '<S576>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/Enumerated Value5'
 * '<S577>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/Enumerated_Constant1'
 * '<S578>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/KeOBCR_t_SmrtEvse_DetDbncTime'
 * '<S579>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/KeOBCR_t_UnplugDbncTimeRst'
 * '<S580>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/Protected Division'
 * '<S581>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/Protected Division1'
 * '<S582>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/Signal Latch On With Reset'
 * '<S583>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/SmartEvseRead'
 * '<S584>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/SmartEvseWrite'
 * '<S585>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/Turn On Delay Sample'
 * '<S586>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/Turn On Delay Sample1'
 * '<S587>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/Turn On Delay Sample/EdgeRising'
 * '<S588>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Secure_ConnEst/Smart_EVSE/Turn On Delay Sample1/EdgeRising'
 * '<S589>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/Turn Off Delay Time/EdgeFalling'
 * '<S590>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets/Enumerated Value'
 * '<S591>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets/Enumerated Value1'
 * '<S592>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets/Enumerated Value2'
 * '<S593>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets/Enumerated Value3'
 * '<S594>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets/Enumerated Value4'
 * '<S595>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets/IfThenElseif'
 * '<S596>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets/KeOBCR_I_MaxAlwdCurrAC_China'
 * '<S597>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets/KeOBCR_I_MaxAlwdCurrAC_Def1'
 * '<S598>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets/KeOBCR_I_MaxAlwdCurrAC_Def2'
 * '<S599>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets/KeOBCR_I_MaxAlwdCurrAC_Eu'
 * '<S600>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets/KeOBCR_I_MaxAlwdCurrAC_JA'
 * '<S601>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets/KeOBCR_I_MaxAlwdCurrAC_NA'
 * '<S602>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC/PlugInStat/WorldMarkets/KeOBCR_e_InterMarketsSelection'
 * '<S603>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Enumerated Value1'
 * '<S604>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Enumerated Value4'
 * '<S605>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/I_Batt'
 * '<S606>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/IfThenElseif'
 * '<S607>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/IfThenElseif3'
 * '<S608>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/KeOBCR_P_AvalPwrForThmrVal'
 * '<S609>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/KeOBCR_P_DfltEng_PwrBdgt'
 * '<S610>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/KeOBCR_P_EngCrank'
 * '<S611>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/KeOBCR_b_AvalPwrForThmrEnbl'
 * '<S612>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/KeOBCR_b_UseECT_PwrBdgt'
 * '<S613>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/KeOBCR_b_isBEV'
 * '<S614>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/KtOBCR_P_ECT_PwrBdgt'
 * '<S615>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations'
 * '<S616>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Status_Det'
 * '<S617>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Therm_Hyst'
 * '<S618>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/I_Batt/Enumerated Value2'
 * '<S619>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/I_Batt/KeOBCR_I_CurrOffset_EstPwrBdgt'
 * '<S620>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/I_Batt/KeOBCR_P_NewHyst_MaxOut'
 * '<S621>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/I_Batt/KtOBCR_k_MaxPower_SOC'
 * '<S622>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/I_Batt/KtOBCR_k_MaxPower_Temp'
 * '<S623>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/I_Batt/Protected Division'
 * '<S624>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/APower_Calc'
 * '<S625>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg'
 * '<S626>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/PwrToThrm'
 * '<S627>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/APower_Calc/KeOBCR_b_UseAccCurrent'
 * '<S628>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling'
 * '<S629>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/EdgeRising'
 * '<S630>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/Enumerated Value2'
 * '<S631>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/IfThenElse'
 * '<S632>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/KeOBCR_P_MaxPwr2ModBdgt'
 * '<S633>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/KeOBCR_P_MinPwr2ModBdgt'
 * '<S634>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/KeOBCR_P_Thermal_Offset'
 * '<S635>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/KeOBCR_T_MinTemp2ModPwrBdgt'
 * '<S636>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/OpenInterval'
 * '<S637>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling/DocBlock'
 * '<S638>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling/GenCycle'
 * '<S639>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling/HeOBCR_t_dT'
 * '<S640>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling/KeOBCR_P_AddnPwrtoBdgt'
 * '<S641>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling/KeOBCR_t_CondChrgCycTmPeriod'
 * '<S642>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/CycThermBudg/Cond_Chrg_Cycling/KtOBCR_r_ThermCondDutyCycle'
 * '<S643>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/PwrToThrm/GradientLimiter2'
 * '<S644>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/PwrToThrm/KeOBCR_P_AvalPwrForThmrNeg'
 * '<S645>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/PwrToThrm/KeOBCR_P_AvalPwrForThmrPos'
 * '<S646>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/PwrToThrm/KtOBCR_k_ThermalProfile'
 * '<S647>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Power_Calculations/PwrToThrm/GradientLimiter2/Limiter'
 * '<S648>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Status_Det/Enumerated Value'
 * '<S649>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Status_Det/Enumerated Value1'
 * '<S650>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Status_Det/Enumerated Value2'
 * '<S651>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Status_Det/Enumerated Value3'
 * '<S652>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Status_Det/Enumerated Value4'
 * '<S653>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Status_Det/KeOBCR_Cnt_PwrBdgt_Dbnc_PSA'
 * '<S654>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Status_Det/Turn On Delay Sample'
 * '<S655>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Status_Det/Turn On Delay Sample/EdgeRising'
 * '<S656>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Therm_Hyst/GradientLimiter'
 * '<S657>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Therm_Hyst/KeOBCR_P_NewHyst_MaxOut'
 * '<S658>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Therm_Hyst/KeOBCR_P_Thermal_Hys_LD'
 * '<S659>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Therm_Hyst/KeOBCR_P_Thermal_Hys_LU'
 * '<S660>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Therm_Hyst/Set Block'
 * '<S661>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Therm_Hyst/Stateflow Chart'
 * '<S662>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCC_HEV/Therm_Hyst/GradientLimiter/Limiter'
 * '<S663>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/Digital Lowpass Reset Enabled'
 * '<S664>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_I_AccCurrVal'
 * '<S665>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_I_EVSECurr_RegTolOvrdVal'
 * '<S666>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_I_EVSEOutputCurrOvrdVal'
 * '<S667>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_I_EVSEPeakCurrRipOvrdVal'
 * '<S668>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_AccCurrOvrd'
 * '<S669>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_BPCM_ChrgStatOvrd'
 * '<S670>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_CabPrecDny_BattCond_Ovrd'
 * '<S671>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_CabPrecDny_BattCond_Val'
 * '<S672>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_ChargeReqOvrd'
 * '<S673>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_ChargeReqOvrdVal'
 * '<S674>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_DschrgOBCMdRq'
 * '<S675>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_DschrgS2CmdOvrd'
 * '<S676>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_DschrgS2CmdVal'
 * '<S677>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_DschrgSysSts'
 * '<S678>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_EVSECurr_RegTolOvrd'
 * '<S679>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_EVSEOutputCurrOvrd'
 * '<S680>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_EVSEPeakCurrRipOvrd'
 * '<S681>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_EVSE_PilotStat_Ovrd'
 * '<S682>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_EVSE_ProxStat_Ovrd'
 * '<S683>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_FullAmpHrCap_Ovrd'
 * '<S684>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HVBat_DC_CntctrOpnOvrd'
 * '<S685>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HVBat_DC_CntctrOpnOvrdVal'
 * '<S686>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HVBat_DC_CntctrReqOvrd'
 * '<S687>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HVBat_DC_CntctrReqOvrdVal'
 * '<S688>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HVPerWUTherm_Ovrd'
 * '<S689>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HVPerWUTherm_Val'
 * '<S690>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HV_AuxLoadOffReqovrd'
 * '<S691>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HV_AuxLoadOffReqovrdVal'
 * '<S692>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HV_BatCntctrOpenPendingOvrd'
 * '<S693>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HV_BatCntctrOpenPendingVal'
 * '<S694>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HV_BatCntctrOpnRqOvrd'
 * '<S695>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HV_BatCntctrOpnRqOvrdVal'
 * '<S696>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HV_TracBatCntctrConfigovrd'
 * '<S697>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HoodAjarOvrd'
 * '<S698>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_HoodAjarVal'
 * '<S699>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_IDCM_DCCAOvrd'
 * '<S700>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_IDCM_DCCAOvrdVal'
 * '<S701>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_InFieldMdOvrd'
 * '<S702>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_InFieldMdVal'
 * '<S703>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_OBCM_ChrgEnblStsOvrd'
 * '<S704>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_OBCM_ChrgEnblStsVal'
 * '<S705>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_PSAOvrd'
 * '<S706>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_PSAVal'
 * '<S707>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_Prox_GBT'
 * '<S708>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_SLACStsOvrd'
 * '<S709>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_ShipMdOvrd'
 * '<S710>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_THMR_HoodCondOvrd'
 * '<S711>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_THMR_HoodCondVal'
 * '<S712>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_THMR_Rdy4ShtDwn'
 * '<S713>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_THMR_RdyOvrd'
 * '<S714>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_TxGBTMsgRequest'
 * '<S715>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_TxGBTMsgResponse'
 * '<S716>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_V2L_DetectedOvrd'
 * '<S717>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_b_V2L_DetectedVal'
 * '<S718>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_e_BPCM_ChrgStatVal'
 * '<S719>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_e_DschrgOBCMdRq'
 * '<S720>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_e_DschrgSysSts'
 * '<S721>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_e_EVSE_PilotStat_Val'
 * '<S722>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_e_EVSE_ProxStat_Val'
 * '<S723>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_e_HV_TracBatCntctrConfigovrdVal'
 * '<S724>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_e_Prox_GBT'
 * '<S725>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_e_SLACStsOvrdVal'
 * '<S726>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_e_ShipMdOvrdVal'
 * '<S727>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_e_TxGBTMsgRequest'
 * '<S728>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_e_TxGBTMsgResponse'
 * '<S729>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_k_LPF_MaxCellVoltCoef'
 * '<S730>' : 'OBCR_ac/OBCR_FUNC_MedTED/OBCI/KeOBCR_q_FullAmpHrCap_Val'
 * '<S731>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block'
 * '<S732>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block1'
 * '<S733>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block10'
 * '<S734>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block11'
 * '<S735>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block12'
 * '<S736>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block13'
 * '<S737>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block14'
 * '<S738>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block15'
 * '<S739>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block16'
 * '<S740>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block17'
 * '<S741>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block18'
 * '<S742>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block19'
 * '<S743>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block2'
 * '<S744>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block20'
 * '<S745>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block21'
 * '<S746>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block22'
 * '<S747>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block23'
 * '<S748>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block24'
 * '<S749>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block3'
 * '<S750>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block4'
 * '<S751>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block5'
 * '<S752>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block6'
 * '<S753>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block7'
 * '<S754>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block8'
 * '<S755>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enum Set Block9'
 * '<S756>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enumerated Value'
 * '<S757>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Enumerated Value1'
 * '<S758>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/KeOBCR_I_MaxAlwdBatCurr'
 * '<S759>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/KeOBCR_U_MaxAllowableBattVolt'
 * '<S760>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/KeOBCR_U_MinAllowableBattVolt'
 * '<S761>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock'
 * '<S762>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block'
 * '<S763>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block1'
 * '<S764>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block10'
 * '<S765>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block11'
 * '<S766>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block12'
 * '<S767>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block13'
 * '<S768>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block14'
 * '<S769>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block15'
 * '<S770>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block16'
 * '<S771>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block17'
 * '<S772>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block18'
 * '<S773>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block19'
 * '<S774>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block2'
 * '<S775>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block20'
 * '<S776>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block21'
 * '<S777>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block22'
 * '<S778>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block23'
 * '<S779>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block24'
 * '<S780>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block25'
 * '<S781>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block26'
 * '<S782>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block27'
 * '<S783>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block28'
 * '<S784>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block3'
 * '<S785>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block30'
 * '<S786>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block31'
 * '<S787>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block32'
 * '<S788>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block33'
 * '<S789>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block34'
 * '<S790>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block36'
 * '<S791>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block37'
 * '<S792>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block38'
 * '<S793>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block39'
 * '<S794>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block4'
 * '<S795>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block40'
 * '<S796>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block41'
 * '<S797>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block42'
 * '<S798>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block43'
 * '<S799>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block44'
 * '<S800>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block45'
 * '<S801>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block46'
 * '<S802>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block47'
 * '<S803>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block48'
 * '<S804>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block49'
 * '<S805>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block5'
 * '<S806>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block50'
 * '<S807>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block51'
 * '<S808>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block54'
 * '<S809>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block56'
 * '<S810>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block57'
 * '<S811>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block58'
 * '<S812>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block59'
 * '<S813>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block6'
 * '<S814>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block60'
 * '<S815>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block62'
 * '<S816>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block63'
 * '<S817>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block64'
 * '<S818>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block65'
 * '<S819>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block67'
 * '<S820>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block69'
 * '<S821>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block7'
 * '<S822>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block74'
 * '<S823>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block75'
 * '<S824>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block76'
 * '<S825>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block77'
 * '<S826>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block78'
 * '<S827>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block79'
 * '<S828>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block8'
 * '<S829>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block80'
 * '<S830>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block81'
 * '<S831>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block85'
 * '<S832>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block89'
 * '<S833>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block9'
 * '<S834>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block90'
 * '<S835>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block91'
 * '<S836>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block92'
 * '<S837>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block93'
 * '<S838>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block94'
 * '<S839>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block95'
 * '<S840>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block96'
 * '<S841>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block97'
 * '<S842>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block98'
 * '<S843>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/Set Block99'
 * '<S844>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/Enumerated Value2'
 * '<S845>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/Enumerated_Constant1'
 * '<S846>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/Enumerated_Constant2'
 * '<S847>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_ChargingLevelOvrd'
 * '<S848>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_ChrgPort_BCM_Ovrd'
 * '<S849>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_ChrgPort_BCM_Val'
 * '<S850>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_ChrgngCmpltOvrd'
 * '<S851>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_ChrgngCmpltOvrdVal'
 * '<S852>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_ChrgrModeReq'
 * '<S853>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_CloseS2Cntctr_Ovrd'
 * '<S854>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_CloseS2Cntctr_OvrdVal'
 * '<S855>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_DCEst100_Ovrd'
 * '<S856>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_DCEst80_Ovrd'
 * '<S857>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_HCP_DC_RetryOvrd'
 * '<S858>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_OBCM_EnblChrgOvrd'
 * '<S859>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_OBCM_EnblChrgOvrdValue'
 * '<S860>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_RacePrepBattLvlStsOvrd'
 * '<S861>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_RacePrepBattLvlStsOvrdVal'
 * '<S862>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_b_V2X_Selection'
 * '<S863>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_e_ChargingLevel'
 * '<S864>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_e_ChrgrModeReq'
 * '<S865>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_e_HCP_DC_RetryOvrdVal'
 * '<S866>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_k_EstTmConvFactor'
 * '<S867>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_t_DCEst100_Val'
 * '<S868>' : 'OBCR_ac/OBCR_FUNC_MedTED/Output_Proc/OverrideBlock/KeOBCR_t_DCEst80_Val'
 * '<S869>' : 'OBCR_ac/OBCR_FUNC_PwrOn/DSM_Init'
 * '<S870>' : 'OBCR_ac/OBCR_FUNC_PwrOn/Sub_Out_Init'
 * '<S871>' : 'OBCR_ac/OBCR_FUNC_PwrOn/Subsystem1'
 * '<S872>' : 'OBCR_ac/OBCR_FUNC_PwrOn/Sub_Out_Init/Enumerated Value'
 * '<S873>' : 'OBCR_ac/OBCR_FUNC_PwrOn/Sub_Out_Init/HeOBCR_b_EnableDCGBT'
 * '<S874>' : 'OBCR_ac/OBCR_FUNC_PwrOn/Sub_Out_Init/KeOBCR_e_InterMarketsSelection'
 * '<S875>' : 'OBCR_ac/OBCR_FUNC_PwrOn/Subsystem1/Enum Set Block1'
 * '<S876>' : 'OBCR_ac/OBCR_FUNC_PwrOn/Subsystem1/Enum Set Block3'
 */
#endif                                 /* RTW_HEADER_OBCR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
