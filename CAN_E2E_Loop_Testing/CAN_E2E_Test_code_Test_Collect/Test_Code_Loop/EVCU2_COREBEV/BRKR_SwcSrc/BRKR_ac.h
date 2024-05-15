/*
 * File: BRKR_ac.h
 *
 * Code generated for Simulink model 'BRKR_ac'.
 *
 * Model version                  : 9.179
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:11:09 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BRKR_ac_h_
#define RTW_HEADER_BRKR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef BRKR_ac_COMMON_INCLUDES_
#define BRKR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_BRKR.h"
#endif                                 /* BRKR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S24>/FsftBRKR_b_VehicleStandStillStsChrt' */
typedef struct
{
    boolean LeBRKR_b_VehicleStandStillStsFA_j;
                               /* '<S24>/FsftBRKR_b_VehicleStandStillStsChrt' */
}
B_FsftBRKR_b_VehicleStandStillStsChrt__T;

/* Block signals (default storage) */
typedef struct tag_B_BRKR_ac_T
{
    float32 LeBRKR_pbar_BrakePedalPressure_out;
                              /* '<S78>/PokeBRKR_pbar_BrakePedalPressureChrt' */
    float32 LeBRKR_l_BrkPedalTravel_out;
                                     /* '<S77>/PokeBRKR_l_BrkPedalTravelChrt' */
    float32 LeBRKR_U_Brake_NO_out;     /* '<S39>/PokeBRKR_U_Brake_NOChrt' */
    float32 LeBRKR_Pct_BrkTravelSts_out;
                                     /* '<S38>/PokeBRKR_Pct_BrkTravelStsChrt' */
    float32 LeBRKR_Pct_BrkTravelSt_C2CAN_out;
                                /* '<S37>/PokeBRKR_Pct_BrkTravelSt_C2CANChrt' */
    float32 LeBRKR_P_BrkPrss_out;      /* '<S36>/PokeBRKR_P_BrkPrssChrt' */
    float32 OutportBufferForVeBRKR_Pct_OneBrkBoxPdlP;/* '<S231>/Const33' */
    float32 OutportBufferForBrkPedalTravel_Init;/* '<S230>/Constant Value' */
    float32 OutportBufferForBrkPrss_Init;/* '<S230>/Initialize ESR_SW1' */
    float32 OutportBufferForBrakeAna_NO_Init;/* '<S230>/Constant Value7' */
    float32 OutportBufferForBrkTravelSts_Init;/* '<S230>/Constant Value6' */
    float32 OutportBufferForBrkTravelSts_C2CAN_Init;/* '<S230>/Constant Value1' */
    float32 OutportBufferForVeBRKR_pbar_BrakePedalPr;/* '<S230>/Initialize ESR_SW2' */
    boolean LeBRKR_b_ReqSSC_IdlDst_out;
                                      /* '<S74>/PokeBRKR_e_ReqSSC_IdlDstChrt' */
    boolean LeBRKR_b_BrkPedalStat2_C2CANSgnl_Rcvd;
                                /* '<S68>/PokeBRKR_e_BrkPedalStat2_C2CANChrt' */
    boolean LeBRKR_b_VehicleStandStillSts_Out;
                               /* '<S58>/PokeBRKR_b_VehicleStandStillStsChrt' */
    boolean LeBRKR_b_MSRActive_out;    /* '<S57>/PokeBRKR_b_MSRActiveChrt' */
    boolean LeBRKR_b_ESCIntervention_out;
                                    /* '<S51>/PokeBRKR_b_ESCInterventionChrt' */
    boolean LeBRKR_b_ESCActive_out;    /* '<S49>/PokeBRKR_b_ESCActiveChrt' */
    boolean LeBRKR_b_BrkTmpSts_Out;    /* '<S47>/PokeBRKR_b_BrkTmpStsChrt' */
    boolean LeBRKR_b_BrkMinTrqIntrvntn_out;
                                  /* '<S45>/PokeBRKR_b_BrkMinTrqIntrvntnChrt' */
    boolean LeBRKR_b_BrkMaxTrqIntrvntn_out;
                                  /* '<S44>/PokeBRKR_b_BrkMaxTrqIntrvntnChrt' */
    boolean LeBRKR_b_AeCoastReady_out; /* '<S43>/PokeBRKR_b_AeCoastReadyChrt' */
    boolean LeBRKR_b_ASRActive_out;    /* '<S42>/PokeBRKR_b_ASRActiveChrt' */
    boolean LeBRKR_b_Brake_NOSgnl_Rcvd;/* '<S39>/PokeBRKR_U_Brake_NOChrt' */
    boolean LeBRKR_b_BrkTravelSt_C2CANSgnl_Rcvd;
                                /* '<S37>/PokeBRKR_Pct_BrkTravelSt_C2CANChrt' */
    boolean OutportBufferForVeBRKR_b_BrkPedalStat2FA;/* '<S231>/Const2' */
    boolean OutportBufferForVeBRKR_b_BrkPedalDscrtIn;/* '<S231>/Const4' */
    boolean OutportBufferForVeBRKR_b_ImpndSkid_Out_I;/* '<S231>/Const5' */
    boolean OutportBufferForVeBRKR_b_AeCoastSwitchSt;/* '<S231>/Const7' */
    boolean OutportBufferForVeBRKR_b_AeCoastReady_Ou;/* '<S231>/Const8' */
    boolean OutportBufferForVeBRKR_b_AeCoastReadyFA_;/* '<S231>/Const9' */
    boolean OutportBufferForVeBRKR_b_AeCoastSwitch_k;/* '<S231>/Const10' */
    boolean OutportBufferForVeBRKR_b_AeCoastSwitch_e;/* '<S231>/Const11' */
    boolean OutportBufferForVeBRKR_b_EmsMlfAtv_Out_I;/* '<S231>/Const12' */
    boolean OutportBufferForVeBRKR_b_EmsMlfAtvFA_Out;/* '<S231>/Const13' */
    boolean OutportBufferForVeBRKR_b_AeCoastBtnCircu;/* '<S231>/Const14' */
    boolean OutportBufferForVeBRKR_b_AeCoastBtnCir_e;/* '<S231>/Const15' */
    boolean OutportBufferForVeBRKR_b_AeCoastBtnDiagF;/* '<S231>/Const18' */
    boolean OutportBufferForVeBRKR_b_HillHoldActive_;/* '<S231>/Const19' */
    boolean OutportBufferForVeBRKR_b_HillHoldFailSts;/* '<S231>/Const20' */
    boolean OutportBufferForVeBRKR_b_AeCoastSwitchFA;/* '<S231>/Const22' */
    boolean OutportBufferForVeBRKR_b_ShortToGround_O;/* '<S231>/Const24' */
    boolean OutportBufferForVeBRKR_b_ShortToPower_Ou;/* '<S231>/Const25' */
    boolean OutportBufferForVeBRKR_b_ShortToOpen_Out;/* '<S231>/Const26' */
    boolean OutportBufferForVeBRKR_b_AeCoastBtnCir_n;/* '<S231>/Const27' */
    boolean OutportBufferForVeBRKR_b_AeCoastBtnCi_ec;/* '<S231>/Const28' */
    boolean OutportBufferForVeBRKR_b_AeCoastBtnCi_nu;/* '<S231>/Const29' */
    boolean OutportBufferForVeBRKR_b_AeCoastBtnCir_a;/* '<S231>/Const30' */
    boolean OutportBufferForVeBRKR_b_OneBrkBoxPdlPos;/* '<S231>/Const34' */
    boolean OutportBufferForImpndSkid_Init;/* '<S230>/FALSE Constant1' */
    boolean OutportBufferForBrkPedalTravelFA_Init;/* '<S230>/FALSE Constant4' */
    boolean OutportBufferForBrkPedalStat2FA_Init;/* '<S230>/FALSE Constant5' */
    boolean OutportBufferForBrkPedalStsFA_Init;/* '<S230>/FALSE Constant37' */
    boolean OutportBufferForBrkPedalDscrtInptFA_Init;/* '<S230>/FALSE Constant3' */
    boolean OutportBufferForABSActive; /* '<S230>/FALSE Constant6' */
    boolean OutportBufferForABSActiveFA;/* '<S230>/FALSE Constant2' */
    boolean OutportBufferForBrkPrssFA_Init;/* '<S230>/FALSE Constant7' */
    boolean OutportBufferForAHH_Ready_StatusFA_init;
                                 /* '<S230>/KeBRKR_b_AHH_Ready_StatusFA_Init' */
    boolean OutportBufferForAeCoastReady_Init;/* '<S230>/FALSE Constant8' */
    boolean OutportBufferForAeCoastReadyFA_Init;/* '<S230>/FALSE Constant12' */
    boolean OutportBufferForAeCoastSwitchStatFAInit;
                                 /* '<S230>/KeBRKR_b_AeCoastSwitchStatFAInit' */
    boolean OutportBufferForAeCoastSwitchC1StatFAIni;
                               /* '<S230>/KeBRKR_b_AeCoastSwitchC1StatFAInit' */
    boolean OutportBufferForAeCoastSwitchC2StatFAIni;
                               /* '<S230>/KeBRKR_b_AeCoastSwitchC2StatFAInit' */
    boolean OutportBufferForEmsMlfAtvInit;/* '<S230>/FALSE Constant10' */
    boolean OutportBufferForEmsMlfAtvFAInit;/* '<S230>/FALSE Constant11' */
    boolean OutportBufferForMSR_Active_Init;/* '<S230>/FALSE Constant9' */
    boolean OutportBufferForMSR_ActiveFA_Init;/* '<S230>/FALSE Constant14' */
    boolean OutportBufferForASR_Active_Init;/* '<S230>/FALSE Constant13' */
    boolean OutportBufferForASR_ActiveFA_Init;/* '<S230>/FALSE Constant16' */
    boolean OutportBufferForBrake_NO_FA_Init;/* '<S230>/FALSE Constant15' */
    boolean OutportBufferForBrkTravelSts_FA_Init;/* '<S230>/FALSE Constant17' */
    boolean OutportBufferForBSMComFailInit_C1CANFA;/* '<S230>/FALSE Constant19' */
    boolean OutportBufferForBSMComFailInit_C2CANFA;/* '<S230>/FALSE Constant20' */
    boolean OutportBufferForESCActive; /* '<S230>/FALSE Constant21' */
    boolean OutportBufferForESCActiveFA;/* '<S230>/FALSE Constant18' */
    boolean OutportBufferForABSFailSts;/* '<S230>/FALSE Constant23' */
    boolean OutportBufferForESCFailSts;/* '<S230>/FALSE Constant22' */
    boolean OutportBufferForESCFailStsFA;/* '<S230>/FALSE Constant45' */
    boolean OutportBufferForHillHoldActive;/* '<S230>/FALSE Constant24' */
    boolean OutportBufferForHillHoldActiveFA;/* '<S230>/FALSE Constant25' */
    boolean OutportBufferForHillHoldFailSts;/* '<S230>/FALSE Constant26' */
    boolean OutportBufferForHillHoldFailStsFA;/* '<S230>/FALSE Constant27' */
    boolean OutportBufferForAeCoastSwitchFAInit;
                                     /* '<S230>/KeBRKR_b_AeCoastSwitchFAInit' */
    boolean OutportBufferForOPD_Hold_Status_FA_Init;/* '<S230>/FALSE Constant28' */
    boolean OutportBufferForCMMIntervention_Init;/* '<S230>/FALSE Constant29' */
    boolean OutportBufferForFunctionSts_Init;/* '<S230>/FALSE Constant30' */
    boolean OutportBufferForBrkMaxTrqIntrvntn;/* '<S230>/FALSE Constant31' */
    boolean OutportBufferForBrkMinTrqIntrvntn;/* '<S230>/FALSE Constant32' */
    boolean OutportBufferForBrkMaxTrqIntrvntnFA;/* '<S230>/FALSE Constant33' */
    boolean OutportBufferForBrkMinTrqIntrvntnFA;/* '<S230>/FALSE Constant34' */
    boolean OutportBufferForReqSSC_IdlDst;/* '<S230>/FALSE Constant35' */
    boolean OutportBufferForExtBrkReqOffFAInit;/* '<S230>/FALSE Constant38' */
    boolean OutportBufferForBrkPdlFltInit;/* '<S230>/FALSE Constant40' */
    boolean OutportBufferForBrkPdlFltInitFA;/* '<S230>/FALSE Constant41' */
    boolean OutportBufferForBrkPedalStat2_C2CANSR_In;/* '<S230>/FALSE Constant39' */
    boolean OutportBufferForBrake_NO_SR_Init;/* '<S230>/FALSE Constant42' */
    boolean OutportBufferForBrkTravelSts_C2CANSR_Ini;/* '<S230>/FALSE Constant43' */
    boolean OutportBufferForBrkPedalStat2_C2CANFA_In;/* '<S230>/FALSE Constant46' */
    boolean OutportBufferForBrkTravelSts_C2CANFA_Ini;/* '<S230>/FALSE Constant47' */
    boolean OutportBufferForESCIntervention_Init;/* '<S230>/FALSE Constant51' */
    boolean OutportBufferForVehicleStandStillSts_Ini;/* '<S230>/FALSE Constant36' */
    boolean OutportBufferForVehicleStandStillStsFA_I;/* '<S230>/FALSE Constant44' */
    boolean OutportBufferForNot_OK_To_RaceFA_Init;/* '<S230>/FALSE_Constant49' */
    boolean OutportBufferForBrkTempSts_Init;/* '<S230>/FALSE_Constant48' */
    boolean OutportBufferForBrkTempStsFA_Init;/* '<S230>/FALSE_Constant53' */
    boolean VariantMergeForOutportVeBRKD_b_AeCoastBt;
    boolean VariantMergeForOutportVeBRKD_b_AeCoast_e;
    boolean VariantMergeForOutportVeBRKD_b_AeCoast_b;
    boolean VariantMergeForOutportVeBRKD_b_ShortToGr;
    boolean VariantMergeForOutportVeBRKD_b_ShortToOp;
    boolean VariantMergeForOutportVeBRKD_b_ShortToPo;
    boolean VariantMergeForOutportVeBRKR_b_AeCoastBt;
    boolean VariantMergeForOutportVeBRKR_b_AeCoast_m;
    boolean VariantMergeForOutportVeBRKR_b_AeCoast_g;
    boolean VariantMergeForOutportVeBRKR_b_AeCoast_o;
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeBRKR_e_FaultSts_RgnCnt;/* '<S231>/Constt' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeBRKR_e_FaultSts_RgnC_l;/* '<S231>/Const31' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeBRKR_e_FaultSts_RgnC_j;/* '<S231>/Const32' */
    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportVeBRKD_e_FaultSts_;
    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportVeBRKR_e_FaultSts_;
    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportVeBRKR_e_FaultSt_n;
    TeBRKR_e_WhlSlpSt OutportBufferForWhlSlpSt_Init;/* '<S230>/Enumerated_Constant1' */
    TeBRKR_e_ShiftInhibit OutportBufferForShiftInhibit_Init;/* '<S230>/Enumerated_Constant' */
    TeBRKR_e_OPDHoldStatus OutportBufferForOPD_Hold_Status_Init;
                                      /* '<S230>/KeBRKR_e_OPDHoldStatus_Init' */
    TeBRKR_e_Not_OK_To_Race LeBRKR_e_Not_OK_To_Race_Out;
                                     /* '<S72>/PokeBRKR_e_Not_OK_To_RaceChrt' */
    TeBRKR_e_Not_OK_To_Race OutportBufferForNot_OK_To_Race_Init;/* '<S230>/EnumeratedConstant' */
    TeBRKR_e_ExtBrkReqOff OutportBufferForExtBrkReqOffInit;/* '<S230>/Enumerated_Constant5' */
    TeBRKR_e_ExtBrkReqOff OutportBufferForExtTCSReqOffInit;/* '<S230>/Enumerated_Constant6' */
    TeBRKR_e_BrkPdl_Stat LeBRKR_e_BrkPedalDscrtInpt_out;
                                  /* '<S66>/PokeBRKR_e_BrkPedalDscrtInptChrt' */
    TeBRKR_e_BrkPdl_Stat OutportBufferForVeBRKR_e_BrkPedalStat2_O;/* '<S231>/Const1' */
    TeBRKR_e_BrkPdl_Stat OutportBufferForVeBRKR_e_BrkPedalDscrtIn;/* '<S231>/Const3' */
    TeBRKR_e_BrkPdl_Stat OutportBufferForBrkPedalStat2_Init;/* '<S230>/Enumerated_Constant2' */
    TeBRKR_e_BrkPdl_Stat OutportBufferForBrkPedalSts_Init;/* '<S230>/Enumerated_Constant4' */
    TeBRKR_e_BrkPdl_Stat OutportBufferForBrkPedalDscrtInpt_Init;/* '<S230>/Enumerated_Constant3' */
    TeBRKR_e_BrkPdl_Stat OutportBufferForBrkPedalStat2_C2CAN_Init;/* '<S230>/Enumerated_Constant7' */
    TeBRKR_e_BrakeSrc OutportBufferForVeBRKR_e_BrakeSrc_Out_In;/* '<S231>/Const23' */
    TeBRKR_e_BSMComFail_C2CAN OutportBufferForBSMComFailInit_C2CAN;
                                    /* '<S230>/KeBRKR_e_BSMComFailInit_C2CAN' */
    TeBRKR_e_BSMComFail_C1CAN OutportBufferForBSMComFailInit_C1CAN;
                                    /* '<S230>/KeBRKR_e_BSMComFailInit_C1CAN' */
    TeBRKR_e_AeCoastSwitchStat OutportBufferForVeBRKR_e_AeCoastSwitchSt;/* '<S231>/Const6' */
    TeBRKR_e_AeCoastSwitchStat OutportBufferForVeBRKR_e_AeCoastSwitch_i;/* '<S231>/Const16' */
    TeBRKR_e_AeCoastSwitchStat OutportBufferForVeBRKR_e_AeCoastSwitc_i4;/* '<S231>/Const17' */
    TeBRKR_e_AeCoastSwitchStat OutportBufferForVeBRKR_e_AeCoastSwitch_O;/* '<S231>/Const21' */
    TeBRKR_e_AeCoastSwitchStat OutportBufferForAeCoastSwitchStatInit;
                                   /* '<S230>/KeBRKR_e_AeCoastSwitchStatInit' */
    TeBRKR_e_AeCoastSwitchStat OutportBufferForAeCoastSwitchC1StatInit;
                                 /* '<S230>/KeBRKR_e_AeCoastSwitchC1StatInit' */
    TeBRKR_e_AeCoastSwitchStat OutportBufferForAeCoastSwitchC2StatInit;
                                 /* '<S230>/KeBRKR_e_AeCoastSwitchC2StatInit' */
    TeBRKR_e_AeCoastSwitchStat OutportBufferForAeCoastSwitchInit;/* '<S230>/KeBRKR_e_AeCoastSwitchInit' */
    TeBRKR_e_AHH_ReadyStatus OutportBufferForAHH_Ready_Status_init;
                                   /* '<S230>/KeBRKR_e_AHH_Ready_Status_Init' */
    B_FsftBRKR_b_VehicleStandStillStsChrt__T sf_FsftBRKR_e_Not_OK_To_RaceChrt;
                                     /* '<S33>/FsftBRKR_e_Not_OK_To_RaceChrt' */
    B_FsftBRKR_b_VehicleStandStillStsChrt__T
        sf_FsftBRKR_b_VehicleStandStillStsChrt;
                               /* '<S24>/FsftBRKR_b_VehicleStandStillStsChrt' */
}
B_BRKR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_BRKR_ac_T
{
    uint16 UnitDelay_DSTATE;           /* '<S152>/Unit Delay' */

#if Rte_SysCon_Variant_BRKR_1

    boolean UnitDelay_DSTATE_b;        /* '<S137>/Unit Delay' */

#define DW_BRKR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKR_1

    boolean UnitDelay_DSTATE_e;        /* '<S130>/Unit Delay' */

#define DW_BRKR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKR_1

    boolean UnitDelay_DSTATE_g;        /* '<S123>/Unit Delay' */

#define DW_BRKR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKR_1

    boolean UnitDelay_DSTATE_d;        /* '<S92>/Unit Delay' */

#define DW_BRKR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKR_1

    boolean UnitDelay_DSTATE_n;        /* '<S91>/Unit Delay' */

#define DW_BRKR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKR_1

    boolean UnitDelay_DSTATE_h;        /* '<S90>/Unit Delay' */

#define DW_BRKR_AC_T_VARIANT_EXISTS
#endif

    boolean UnitDelay_DSTATE_hc;       /* '<S81>/Unit Delay' */
    boolean UnitDelay_DSTATE_n0;       /* '<S153>/Unit Delay' */
    boolean UnitDelay_DSTATE_e4;       /* '<S148>/Unit Delay' */
    boolean UnitDelay_DSTATE_hw;       /* '<S163>/Unit Delay' */
    boolean UnitDelay_DSTATE_gl;       /* '<S182>/Unit Delay' */
    boolean UnitDelay_DSTATE_j;        /* '<S190>/Unit Delay' */
    uint8 StatusByte_LostCommBCM;      /* '<Root>/DS_StatusByte_LostCommBCM' */

#if Rte_SysCon_Variant_BRKR_1

    uint8 is_active_c72_BRKR_ac;       /* '<S87>/P25BC_Diag' */

#define DW_BRKR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKR_1

    uint8 is_DEBOUNCE;                 /* '<S87>/P25BC_Diag' */

#define DW_BRKR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKR_1

    uint8 is_active_c70_BRKR_ac;       /* '<S87>/P25BB_Diag' */

#define DW_BRKR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKR_1

    uint8 is_DEBOUNCE_k;               /* '<S87>/P25BB_Diag' */

#define DW_BRKR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKR_1

    uint8 is_active_c69_BRKR_ac;       /* '<S87>/P25BA_Diag' */

#define DW_BRKR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKR_1

    uint8 is_c69_BRKR_ac;              /* '<S87>/P25BA_Diag' */

#define DW_BRKR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BRKR_1

    uint8 is_DEBOUNCE_c;               /* '<S87>/P25BA_Diag' */

#define DW_BRKR_AC_T_VARIANT_EXISTS
#endif

}
DW_BRKR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeDFIB_e_FaultDebounceStatus Constant;/* '<S256>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_b;/* '<S254>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_bd;/* '<S255>/Constant' */
    const TeBRKR_e_WhlSlpSt Constant_g;/* '<S234>/Constant' */
    const TeBRKR_e_ShiftInhibit Constant_i;/* '<S233>/Constant' */
    const TeBRKR_e_Not_OK_To_Race Constant_j;/* '<S232>/Constant' */
    const TeBRKR_e_ExtBrkReqOff Constant_jh;/* '<S238>/Constant' */
    const TeBRKR_e_ExtBrkReqOff Constant_g1;/* '<S239>/Constant' */
    const TeBRKR_e_BrkPdl_Stat Const1; /* '<S231>/Const1' */
    const TeBRKR_e_BrkPdl_Stat Const3; /* '<S231>/Const3' */
    const TeBRKR_e_BrkPdl_Stat Constant_h;/* '<S235>/Constant' */
    const TeBRKR_e_BrkPdl_Stat Constant_k;/* '<S237>/Constant' */
    const TeBRKR_e_BrkPdl_Stat Constant_hr;/* '<S236>/Constant' */
    const TeBRKR_e_BrkPdl_Stat Constant_bx;/* '<S240>/Constant' */
    const TeBRKR_e_BrakeSrc Const23;   /* '<S231>/Const23' */
    const TeBRKR_e_AeCoastSwitchStat Const6;/* '<S231>/Const6' */
    const TeBRKR_e_AeCoastSwitchStat Const16;/* '<S231>/Const16' */
    const TeBRKR_e_AeCoastSwitchStat Const17;/* '<S231>/Const17' */
    const TeBRKR_e_AeCoastSwitchStat Const21;/* '<S231>/Const21' */
}
ConstB_BRKR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BRKR
#include "MemMap.h"

extern VAR(B_BRKR_ac_T, BRKR_VAR_INIT) BRKR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BRKR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BRKR
#include "MemMap.h"

extern VAR(DW_BRKR_ac_T, BRKR_VAR_INIT) BRKR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BRKR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_BRKR
#include "MemMap.h"

extern CONST(ConstB_BRKR_ac_T, BRKR_VAR_INIT) BRKR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_BRKR
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
 * '<Root>' : 'BRKR_ac'
 * '<S1>'   : 'BRKR_ac/BRKR_MedTEB'
 * '<S2>'   : 'BRKR_ac/BRKR_PwrOn'
 * '<S3>'   : 'BRKR_ac/FsftBRKR_P_BrkPrss'
 * '<S4>'   : 'BRKR_ac/FsftBRKR_b_ABSActive'
 * '<S5>'   : 'BRKR_ac/FsftBRKR_b_ASRActive'
 * '<S6>'   : 'BRKR_ac/FsftBRKR_b_AeCoastReady'
 * '<S7>'   : 'BRKR_ac/FsftBRKR_b_BrkMaxTrqIntrvntn'
 * '<S8>'   : 'BRKR_ac/FsftBRKR_b_BrkMinTrqIntrvntn'
 * '<S9>'   : 'BRKR_ac/FsftBRKR_b_BrkPdlFlt'
 * '<S10>'  : 'BRKR_ac/FsftBRKR_b_BrkPedalDscrtInpt'
 * '<S11>'  : 'BRKR_ac/FsftBRKR_b_BrkPedalStat2'
 * '<S12>'  : 'BRKR_ac/FsftBRKR_b_BrkPedalStat2_C2CAN'
 * '<S13>'  : 'BRKR_ac/FsftBRKR_b_BrkPedalSts'
 * '<S14>'  : 'BRKR_ac/FsftBRKR_b_BrkTmpSts'
 * '<S15>'  : 'BRKR_ac/FsftBRKR_b_BrkTravelSts'
 * '<S16>'  : 'BRKR_ac/FsftBRKR_b_BrkTravelSts_C2CAN'
 * '<S17>'  : 'BRKR_ac/FsftBRKR_b_ESCActive'
 * '<S18>'  : 'BRKR_ac/FsftBRKR_b_ESCFailSts'
 * '<S19>'  : 'BRKR_ac/FsftBRKR_b_ESCIntervention'
 * '<S20>'  : 'BRKR_ac/FsftBRKR_b_EmsMlfAtv'
 * '<S21>'  : 'BRKR_ac/FsftBRKR_b_HillHoldActive'
 * '<S22>'  : 'BRKR_ac/FsftBRKR_b_HillHoldFailSts'
 * '<S23>'  : 'BRKR_ac/FsftBRKR_b_MSRActive'
 * '<S24>'  : 'BRKR_ac/FsftBRKR_b_VehicleStandStillSts'
 * '<S25>'  : 'BRKR_ac/FsftBRKR_e_AHH_Ready_Status'
 * '<S26>'  : 'BRKR_ac/FsftBRKR_e_AeCoastSwitch'
 * '<S27>'  : 'BRKR_ac/FsftBRKR_e_AeCoastSwitchStat'
 * '<S28>'  : 'BRKR_ac/FsftBRKR_e_AeCoastSwitchStatC1'
 * '<S29>'  : 'BRKR_ac/FsftBRKR_e_AeCoastSwitchStatC2'
 * '<S30>'  : 'BRKR_ac/FsftBRKR_e_BSMComFailDflt_C1CAN'
 * '<S31>'  : 'BRKR_ac/FsftBRKR_e_BSMComFailDflt_C2CAN'
 * '<S32>'  : 'BRKR_ac/FsftBRKR_e_ExtBrkReqOff'
 * '<S33>'  : 'BRKR_ac/FsftBRKR_e_Not_OK_To_Race'
 * '<S34>'  : 'BRKR_ac/FsftBRKR_e_OPDHoldStatus'
 * '<S35>'  : 'BRKR_ac/FsftBRKR_pbar_BrakePedalPressure'
 * '<S36>'  : 'BRKR_ac/PokeBRKR_P_BrkPrss'
 * '<S37>'  : 'BRKR_ac/PokeBRKR_Pct_BrkTravelSt_C2CAN'
 * '<S38>'  : 'BRKR_ac/PokeBRKR_Pct_BrkTravelSts'
 * '<S39>'  : 'BRKR_ac/PokeBRKR_U_Brake_NO'
 * '<S40>'  : 'BRKR_ac/PokeBRKR_b_ABSActive'
 * '<S41>'  : 'BRKR_ac/PokeBRKR_b_ABSFailSts'
 * '<S42>'  : 'BRKR_ac/PokeBRKR_b_ASRActive'
 * '<S43>'  : 'BRKR_ac/PokeBRKR_b_AeCoastReady'
 * '<S44>'  : 'BRKR_ac/PokeBRKR_b_BrkMaxTrqIntrvntn'
 * '<S45>'  : 'BRKR_ac/PokeBRKR_b_BrkMinTrqIntrvntn'
 * '<S46>'  : 'BRKR_ac/PokeBRKR_b_BrkPdlFlt'
 * '<S47>'  : 'BRKR_ac/PokeBRKR_b_BrkTmpSts'
 * '<S48>'  : 'BRKR_ac/PokeBRKR_b_CMMIntervention'
 * '<S49>'  : 'BRKR_ac/PokeBRKR_b_ESCActive'
 * '<S50>'  : 'BRKR_ac/PokeBRKR_b_ESCFailSts'
 * '<S51>'  : 'BRKR_ac/PokeBRKR_b_ESCIntervention'
 * '<S52>'  : 'BRKR_ac/PokeBRKR_b_EmsMlfAtv'
 * '<S53>'  : 'BRKR_ac/PokeBRKR_b_FunctionSts'
 * '<S54>'  : 'BRKR_ac/PokeBRKR_b_HillHoldActive'
 * '<S55>'  : 'BRKR_ac/PokeBRKR_b_HillHoldFailSts'
 * '<S56>'  : 'BRKR_ac/PokeBRKR_b_ImpndSkid'
 * '<S57>'  : 'BRKR_ac/PokeBRKR_b_MSRActive'
 * '<S58>'  : 'BRKR_ac/PokeBRKR_b_VehicleStandStillSts'
 * '<S59>'  : 'BRKR_ac/PokeBRKR_e_AHH_Ready_Status'
 * '<S60>'  : 'BRKR_ac/PokeBRKR_e_AeCoastSwitch'
 * '<S61>'  : 'BRKR_ac/PokeBRKR_e_AeCoastSwitchStat'
 * '<S62>'  : 'BRKR_ac/PokeBRKR_e_AeCoastSwitchStatC1'
 * '<S63>'  : 'BRKR_ac/PokeBRKR_e_AeCoastSwitchStatC2'
 * '<S64>'  : 'BRKR_ac/PokeBRKR_e_BSMComFail_C1CAN'
 * '<S65>'  : 'BRKR_ac/PokeBRKR_e_BSMComFail_C2CAN'
 * '<S66>'  : 'BRKR_ac/PokeBRKR_e_BrkPedalDscrtInpt'
 * '<S67>'  : 'BRKR_ac/PokeBRKR_e_BrkPedalStat2'
 * '<S68>'  : 'BRKR_ac/PokeBRKR_e_BrkPedalStat2_C2CAN'
 * '<S69>'  : 'BRKR_ac/PokeBRKR_e_BrkPedalSts'
 * '<S70>'  : 'BRKR_ac/PokeBRKR_e_ExtBrkReqOff'
 * '<S71>'  : 'BRKR_ac/PokeBRKR_e_ExtTcsReqOff'
 * '<S72>'  : 'BRKR_ac/PokeBRKR_e_Not_OK_To_Race'
 * '<S73>'  : 'BRKR_ac/PokeBRKR_e_OPDHoldStatus'
 * '<S74>'  : 'BRKR_ac/PokeBRKR_e_ReqSSC_IdlDst'
 * '<S75>'  : 'BRKR_ac/PokeBRKR_e_ShiftInhibit'
 * '<S76>'  : 'BRKR_ac/PokeBRKR_e_WhlSlpSt'
 * '<S77>'  : 'BRKR_ac/PokeBRKR_l_BrkPedalTravel'
 * '<S78>'  : 'BRKR_ac/PokeBRKR_pbar_BrakePedalPressure'
 * '<S79>'  : 'BRKR_ac/BRKR_MedTEB/DID568_Renaming'
 * '<S80>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic'
 * '<S81>'  : 'BRKR_ac/BRKR_MedTEB/HillHolder'
 * '<S82>'  : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal'
 * '<S83>'  : 'BRKR_ac/BRKR_MedTEB/InputOverrides'
 * '<S84>'  : 'BRKR_ac/BRKR_MedTEB/DID568_Renaming/KeBRKR_b_Only1Contact'
 * '<S85>'  : 'BRKR_ac/BRKR_MedTEB/DID568_Renaming/KeBRKR_e_AeCoastSwitchC2StatInit'
 * '<S86>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic'
 * '<S87>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic'
 * '<S88>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_DiagnosticStub'
 * '<S89>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/DocBlock'
 * '<S90>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/EdgeFalling1'
 * '<S91>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/EdgeFalling2'
 * '<S92>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/EdgeFalling4'
 * '<S93>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/Enumerated Value1'
 * '<S94>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/Enumerated Value12'
 * '<S95>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/Enumerated Value13'
 * '<S96>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/Enumerated Value14'
 * '<S97>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/Enumerated Value2'
 * '<S98>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/Enumerated Value3'
 * '<S99>'  : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/Enumerated Value4'
 * '<S100>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/Enumerated Value6'
 * '<S101>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/Enumerated Value7'
 * '<S102>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/Enumerated Value8'
 * '<S103>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/EvtInfo_LostCommBCM_FaultActiveTOC_1'
 * '<S104>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/HeBRKR_t_MedTEB'
 * '<S105>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/KeBRKR_b_DiagTest'
 * '<S106>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/KeBRKR_b_EnaAeCoastDiag'
 * '<S107>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/KeBRKR_b_EnaComDiag'
 * '<S108>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/KeBRKR_b_Only1Contact'
 * '<S109>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/KeBRKR_t_DiagBtnDiffActv'
 * '<S110>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/KeBRKR_t_P25BA_FailTimerLim'
 * '<S111>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/KeBRKR_t_P25BA_PassTimerLim'
 * '<S112>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/KeBRKR_t_TiDebounceHeal'
 * '<S113>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/KeBRKR_t_TiDebounceSet'
 * '<S114>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BA_Diag'
 * '<S115>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BB_Diag'
 * '<S116>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/P25BC_Diag'
 * '<S117>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts'
 * '<S118>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts1'
 * '<S119>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts2'
 * '<S120>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/getStatusByte1'
 * '<S121>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/getStatusByte2'
 * '<S122>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/getStatusByte3'
 * '<S123>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts/EdgeFalling1'
 * '<S124>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts/Fail'
 * '<S125>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts/Init'
 * '<S126>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts/Pass'
 * '<S127>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts/Fail/Enumerated Constant16'
 * '<S128>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts/Init/Enumerated Constant16'
 * '<S129>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts/Pass/Enumerated Constant16'
 * '<S130>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts1/EdgeFalling1'
 * '<S131>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts1/Fail'
 * '<S132>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts1/Init'
 * '<S133>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts1/Pass'
 * '<S134>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts1/Fail/Enumerated Constant16'
 * '<S135>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts1/Init/Enumerated Constant16'
 * '<S136>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts1/Pass/Enumerated Constant16'
 * '<S137>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts2/EdgeFalling1'
 * '<S138>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts2/Fail'
 * '<S139>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts2/Init'
 * '<S140>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts2/Pass'
 * '<S141>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts2/Fail/Enumerated Constant16'
 * '<S142>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts2/Init/Enumerated Constant16'
 * '<S143>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_Diagnostic/SetFaultSts2/Pass/Enumerated Constant16'
 * '<S144>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_DiagnosticStub/EnumeratedConstant1'
 * '<S145>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_DiagnosticStub/EnumeratedConstant16'
 * '<S146>' : 'BRKR_ac/BRKR_MedTEB/Diagnostic/eCoasting_Diagnostic/eCoasting_DiagnosticStub/EnumeratedConstant2'
 * '<S147>' : 'BRKR_ac/BRKR_MedTEB/HillHolder/DocBlock'
 * '<S148>' : 'BRKR_ac/BRKR_MedTEB/HillHolder/EdgeRising'
 * '<S149>' : 'BRKR_ac/BRKR_MedTEB/HillHolder/KeBRKR_n_RstHillHold'
 * '<S150>' : 'BRKR_ac/BRKR_MedTEB/HillHolder/KeBRKR_phi_HillHoldSlopeThrsh'
 * '<S151>' : 'BRKR_ac/BRKR_MedTEB/HillHolder/KeBRKR_v_HillHoldRelThrsh'
 * '<S152>' : 'BRKR_ac/BRKR_MedTEB/HillHolder/Turn Off Delay Sample1'
 * '<S153>' : 'BRKR_ac/BRKR_MedTEB/HillHolder/Turn Off Delay Sample1/EdgeFalling'
 * '<S154>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/DocBlock'
 * '<S155>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Enumerated Value'
 * '<S156>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Enumerated Value2'
 * '<S157>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/KeBRKR_b_Only1Contact'
 * '<S158>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/KeBRKR_b_P4Equipped'
 * '<S159>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/KeBRKR_b_UseImpndSkidCAN'
 * '<S160>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/One_contact_button_P1P2_WL'
 * '<S161>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/One_contact_button_P1P4'
 * '<S162>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb'
 * '<S163>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Signal Latch On With Reset'
 * '<S164>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Two_contact_button_P1P2'
 * '<S165>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/One_contact_button_P1P2_WL/Enum Set Block'
 * '<S166>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/One_contact_button_P1P2_WL/KaBRKR_e_AeCoastSwitchConvert'
 * '<S167>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/AnaBrk_Switch_Normally_Open'
 * '<S168>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Pedal_Dscrt'
 * '<S169>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Pedal_Status'
 * '<S170>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Travel_Status'
 * '<S171>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Unknown'
 * '<S172>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/DigBrk_Switch_Normally_Open'
 * '<S173>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/DocBlock'
 * '<S174>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/HeBRKR_b_BrkPosSourceSelFromBPSR'
 * '<S175>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/KeBRKR_b_UseBrkPedalDscrtInpt'
 * '<S176>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/KeBRKR_b_UseBrkPedalStsSrc'
 * '<S177>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/KeBRKR_b_UseBrkTravelStsSrc'
 * '<S178>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/KeBRKR_b_UseHwBrkSrc'
 * '<S179>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/AnaBrk_Switch_Normally_Open/Enumerated_Constant'
 * '<S180>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/AnaBrk_Switch_Normally_Open/Enumerated_Constant1'
 * '<S181>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/AnaBrk_Switch_Normally_Open/Enumerated_Constant4'
 * '<S182>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/AnaBrk_Switch_Normally_Open/Hysteresis2'
 * '<S183>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/AnaBrk_Switch_Normally_Open/KeBRKR_U_Brake_NO_LSP'
 * '<S184>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/AnaBrk_Switch_Normally_Open/KeBRKR_U_Brake_NO_RSP'
 * '<S185>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Pedal_Dscrt/Enumerated_Constant'
 * '<S186>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Pedal_Status/Enumerated_Constant'
 * '<S187>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Travel_Status/Enumerated_Constant'
 * '<S188>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Travel_Status/Enumerated_Constant2'
 * '<S189>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Travel_Status/Enumerated_Constant3'
 * '<S190>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Travel_Status/Hysteresis1'
 * '<S191>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Travel_Status/KeBRKR_Pct_BrkTravelSts_LSP'
 * '<S192>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Travel_Status/KeBRKR_Pct_BrkTravelSts_RSP'
 * '<S193>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Unknown/Enumerated_Constant'
 * '<S194>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/Brake_Unknown/Enumerated_Constant1'
 * '<S195>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/DigBrk_Switch_Normally_Open/Enumerated_Constant'
 * '<S196>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/DigBrk_Switch_Normally_Open/Enumerated_Constant2'
 * '<S197>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Program_Based_Brk_Arb/DigBrk_Switch_Normally_Open/Enumerated_Constant3'
 * '<S198>' : 'BRKR_ac/BRKR_MedTEB/ImpendingSkidSignal/Two_contact_button_P1P2/Enumerated Value1'
 * '<S199>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/HeBRKR_b_EmsMlfAtvFAOvrrd'
 * '<S200>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/HeBRKR_b_EmsMlfAtvOvrrd'
 * '<S201>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastReadyFAOvrrd'
 * '<S202>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastReadyFAOvrrdVal'
 * '<S203>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastReadyOvrrd'
 * '<S204>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastReadyOvrrdVal'
 * '<S205>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastSwitchFAOvrrd'
 * '<S206>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastSwitchFAOvrrdVal'
 * '<S207>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastSwitchOvrrd'
 * '<S208>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastSwitchStC1FAOvrrd'
 * '<S209>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastSwitchStC1FAOvrrdVal'
 * '<S210>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastSwitchStatC1Ovrrd'
 * '<S211>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastSwitchStatC2FAOvrrd'
 * '<S212>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastSwitchStatC2FAOvrrdVal'
 * '<S213>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastSwitchStatC2Ovrrd'
 * '<S214>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastSwitchStatFAOvrrd'
 * '<S215>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastSwitchStatFAOvrrdVal'
 * '<S216>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_AeCoastSwitchStatOvrrd'
 * '<S217>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_BrkPdl_P1P4_GC'
 * '<S218>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_EmsMlfAtvFAOvrrdVal'
 * '<S219>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_EmsMlfAtvOvrrdVal'
 * '<S220>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_HillHoldActvOvrrd'
 * '<S221>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_HillHoldActvOvrrdVal'
 * '<S222>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_HillHoldFailStsOvrrd'
 * '<S223>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_HillHoldFailStsOvrrdVal'
 * '<S224>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_ImpndSkidOvrrd'
 * '<S225>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_b_ImpndSkidOvrrdVal'
 * '<S226>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_e_AeCoastSwitchOvrrdVal'
 * '<S227>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_e_AeCoastSwitchStatC1OvrrdVal'
 * '<S228>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_e_AeCoastSwitchStatC2OvrrdVal'
 * '<S229>' : 'BRKR_ac/BRKR_MedTEB/InputOverrides/KeBRKR_e_AeCoastSwitchStatOvrrdVal'
 * '<S230>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI'
 * '<S231>' : 'BRKR_ac/BRKR_PwrOn/Sub_Out_Init'
 * '<S232>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/EnumeratedConstant'
 * '<S233>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/Enumerated_Constant'
 * '<S234>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/Enumerated_Constant1'
 * '<S235>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/Enumerated_Constant2'
 * '<S236>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/Enumerated_Constant3'
 * '<S237>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/Enumerated_Constant4'
 * '<S238>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/Enumerated_Constant5'
 * '<S239>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/Enumerated_Constant6'
 * '<S240>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/Enumerated_Constant7'
 * '<S241>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/KeBRKR_b_AHH_Ready_StatusFA_Init'
 * '<S242>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/KeBRKR_b_AeCoastSwitchC1StatFAInit'
 * '<S243>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/KeBRKR_b_AeCoastSwitchC2StatFAInit'
 * '<S244>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/KeBRKR_b_AeCoastSwitchFAInit'
 * '<S245>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/KeBRKR_b_AeCoastSwitchStatFAInit'
 * '<S246>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/KeBRKR_e_AHH_Ready_Status_Init'
 * '<S247>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/KeBRKR_e_AeCoastSwitchC1StatInit'
 * '<S248>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/KeBRKR_e_AeCoastSwitchC2StatInit'
 * '<S249>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/KeBRKR_e_AeCoastSwitchInit'
 * '<S250>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/KeBRKR_e_AeCoastSwitchStatInit'
 * '<S251>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/KeBRKR_e_BSMComFailInit_C1CAN'
 * '<S252>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/KeBRKR_e_BSMComFailInit_C2CAN'
 * '<S253>' : 'BRKR_ac/BRKR_PwrOn/Init_BRKI/KeBRKR_e_OPDHoldStatus_Init'
 * '<S254>' : 'BRKR_ac/BRKR_PwrOn/Sub_Out_Init/Const31'
 * '<S255>' : 'BRKR_ac/BRKR_PwrOn/Sub_Out_Init/Const32'
 * '<S256>' : 'BRKR_ac/BRKR_PwrOn/Sub_Out_Init/Constt'
 * '<S257>' : 'BRKR_ac/FsftBRKR_P_BrkPrss/FsftBRKR_P_BrkPrssChrt'
 * '<S258>' : 'BRKR_ac/FsftBRKR_b_ABSActive/FsftBRKR_b_ABSActiveChrt'
 * '<S259>' : 'BRKR_ac/FsftBRKR_b_ASRActive/FsftBRKR_b_ASRActiveChrt'
 * '<S260>' : 'BRKR_ac/FsftBRKR_b_AeCoastReady/FsftBRKR_b_AeCoastReadyChrt'
 * '<S261>' : 'BRKR_ac/FsftBRKR_b_BrkMaxTrqIntrvntn/FsftBRKR_b_BrkMaxTrqIntrvntnChrt'
 * '<S262>' : 'BRKR_ac/FsftBRKR_b_BrkMinTrqIntrvntn/FsftBRKR_b_BrkMinTrqIntrvntnChrt'
 * '<S263>' : 'BRKR_ac/FsftBRKR_b_BrkPdlFlt/FsftBRKR_b_BrkPdlFltChrt'
 * '<S264>' : 'BRKR_ac/FsftBRKR_b_BrkPedalDscrtInpt/FsftBRKR_b_BrkPedalDscrtInptChrt'
 * '<S265>' : 'BRKR_ac/FsftBRKR_b_BrkPedalStat2/FsftBRKR_b_BrkPedalStat2Chrt'
 * '<S266>' : 'BRKR_ac/FsftBRKR_b_BrkPedalStat2_C2CAN/FsftBRKR_b_BrkPedalStat2_C2CANChrt'
 * '<S267>' : 'BRKR_ac/FsftBRKR_b_BrkPedalSts/FsftBRKR_b_BrkPedalStsChrt'
 * '<S268>' : 'BRKR_ac/FsftBRKR_b_BrkTmpSts/FsftBRKR_b_BrkTmpStsChrt'
 * '<S269>' : 'BRKR_ac/FsftBRKR_b_BrkTravelSts/FsftBRKR_b_BrkTravelStsChrt'
 * '<S270>' : 'BRKR_ac/FsftBRKR_b_BrkTravelSts_C2CAN/FsftBRKR_b_BrkTravelSts_C2CANChrt'
 * '<S271>' : 'BRKR_ac/FsftBRKR_b_ESCActive/FsftBRKR_b_ESCActiveChrt'
 * '<S272>' : 'BRKR_ac/FsftBRKR_b_ESCFailSts/FsftBRKR_b_ESCFailStsChrt'
 * '<S273>' : 'BRKR_ac/FsftBRKR_b_ESCIntervention/FsftBRKR_b_ESCInterventionChrt'
 * '<S274>' : 'BRKR_ac/FsftBRKR_b_EmsMlfAtv/FsftBRKR_b_EmsMlfAtvChrt'
 * '<S275>' : 'BRKR_ac/FsftBRKR_b_HillHoldActive/FsftBRKR_b_HillHoldActiveChrt'
 * '<S276>' : 'BRKR_ac/FsftBRKR_b_HillHoldFailSts/FsftBRKR_b_HillHoldFailStsChrt'
 * '<S277>' : 'BRKR_ac/FsftBRKR_b_MSRActive/FsftBRKR_b_MSRActiveChrt'
 * '<S278>' : 'BRKR_ac/FsftBRKR_b_VehicleStandStillSts/FsftBRKR_b_VehicleStandStillStsChrt'
 * '<S279>' : 'BRKR_ac/FsftBRKR_e_AHH_Ready_Status/FsftBRKR_e_AHH_Ready_StatusChrt'
 * '<S280>' : 'BRKR_ac/FsftBRKR_e_AeCoastSwitch/FsftBRKR_e_AeCoastSwitchChrt'
 * '<S281>' : 'BRKR_ac/FsftBRKR_e_AeCoastSwitchStat/FsftBRKR_e_AeCoastSwitchStatChrt'
 * '<S282>' : 'BRKR_ac/FsftBRKR_e_AeCoastSwitchStatC1/FsftBRKR_e_AeCoastSwitchStatC1Chrt'
 * '<S283>' : 'BRKR_ac/FsftBRKR_e_AeCoastSwitchStatC2/FsftBRKR_e_AeCoastSwitchStatC2Chrt'
 * '<S284>' : 'BRKR_ac/FsftBRKR_e_BSMComFailDflt_C1CAN/FsftBRKR_e_BSMComFailDflt_C1CANChrt'
 * '<S285>' : 'BRKR_ac/FsftBRKR_e_BSMComFailDflt_C2CAN/FsftBRKR_e_BSMComFailDflt_C2CANChrt'
 * '<S286>' : 'BRKR_ac/FsftBRKR_e_ExtBrkReqOff/FsftBRKR_e_ExtBrkReqOffChrt'
 * '<S287>' : 'BRKR_ac/FsftBRKR_e_Not_OK_To_Race/FsftBRKR_e_Not_OK_To_RaceChrt'
 * '<S288>' : 'BRKR_ac/FsftBRKR_e_OPDHoldStatus/FsftBRKR_e_OPDHoldStatusChrt'
 * '<S289>' : 'BRKR_ac/FsftBRKR_pbar_BrakePedalPressure/FsftBRKR_pbar_BrakePedalPressureChrt'
 * '<S290>' : 'BRKR_ac/PokeBRKR_P_BrkPrss/PokeBRKR_P_BrkPrssChrt'
 * '<S291>' : 'BRKR_ac/PokeBRKR_Pct_BrkTravelSt_C2CAN/PokeBRKR_Pct_BrkTravelSt_C2CANChrt'
 * '<S292>' : 'BRKR_ac/PokeBRKR_Pct_BrkTravelSts/PokeBRKR_Pct_BrkTravelStsChrt'
 * '<S293>' : 'BRKR_ac/PokeBRKR_U_Brake_NO/PokeBRKR_U_Brake_NOChrt'
 * '<S294>' : 'BRKR_ac/PokeBRKR_b_ABSActive/PokeBRKR_b_ABSActiveChrt'
 * '<S295>' : 'BRKR_ac/PokeBRKR_b_ABSFailSts/PokeBRKR_b_ABSFailStsChrt'
 * '<S296>' : 'BRKR_ac/PokeBRKR_b_ASRActive/PokeBRKR_b_ASRActiveChrt'
 * '<S297>' : 'BRKR_ac/PokeBRKR_b_AeCoastReady/PokeBRKR_b_AeCoastReadyChrt'
 * '<S298>' : 'BRKR_ac/PokeBRKR_b_BrkMaxTrqIntrvntn/PokeBRKR_b_BrkMaxTrqIntrvntnChrt'
 * '<S299>' : 'BRKR_ac/PokeBRKR_b_BrkMinTrqIntrvntn/PokeBRKR_b_BrkMinTrqIntrvntnChrt'
 * '<S300>' : 'BRKR_ac/PokeBRKR_b_BrkPdlFlt/PokeBRKR_b_BrkPdlFltChrt'
 * '<S301>' : 'BRKR_ac/PokeBRKR_b_BrkTmpSts/PokeBRKR_b_BrkTmpStsChrt'
 * '<S302>' : 'BRKR_ac/PokeBRKR_b_CMMIntervention/PokeBRKR_b_CMMInterventionChrt'
 * '<S303>' : 'BRKR_ac/PokeBRKR_b_ESCActive/PokeBRKR_b_ESCActiveChrt'
 * '<S304>' : 'BRKR_ac/PokeBRKR_b_ESCFailSts/PokeBRKR_b_ESCFailStsChrt'
 * '<S305>' : 'BRKR_ac/PokeBRKR_b_ESCIntervention/PokeBRKR_b_ESCInterventionChrt'
 * '<S306>' : 'BRKR_ac/PokeBRKR_b_EmsMlfAtv/PokeBRKR_b_EmsMlfAtvChrt'
 * '<S307>' : 'BRKR_ac/PokeBRKR_b_FunctionSts/PokeBRKR_b_FunctionStsChrt'
 * '<S308>' : 'BRKR_ac/PokeBRKR_b_HillHoldActive/PokeBRKR_b_HillHoldActiveChrt'
 * '<S309>' : 'BRKR_ac/PokeBRKR_b_HillHoldFailSts/PokeBRKR_b_HillHoldFailStsChrt'
 * '<S310>' : 'BRKR_ac/PokeBRKR_b_ImpndSkid/PokeBRKR_b_ImpndSkidChrt'
 * '<S311>' : 'BRKR_ac/PokeBRKR_b_MSRActive/PokeBRKR_b_MSRActiveChrt'
 * '<S312>' : 'BRKR_ac/PokeBRKR_b_VehicleStandStillSts/PokeBRKR_b_VehicleStandStillStsChrt'
 * '<S313>' : 'BRKR_ac/PokeBRKR_e_AHH_Ready_Status/KaBRKR_e_AHH_Ready_Status_Map'
 * '<S314>' : 'BRKR_ac/PokeBRKR_e_AHH_Ready_Status/PokeBRKR_e_AHH_Ready_StatusChrt'
 * '<S315>' : 'BRKR_ac/PokeBRKR_e_AeCoastSwitch/PokeBRKR_e_AeCoastSwitchChrt'
 * '<S316>' : 'BRKR_ac/PokeBRKR_e_AeCoastSwitchStat/PokeBRKR_e_AeCoastSwitchStatChrt'
 * '<S317>' : 'BRKR_ac/PokeBRKR_e_AeCoastSwitchStatC1/PokeBRKR_e_AeCoastSwitchStatC1Chrt'
 * '<S318>' : 'BRKR_ac/PokeBRKR_e_AeCoastSwitchStatC2/PokeBRKR_e_AeCoastSwitchStatC2Chrt'
 * '<S319>' : 'BRKR_ac/PokeBRKR_e_BSMComFail_C1CAN/KaBRKR_e_BSMComFail_C1'
 * '<S320>' : 'BRKR_ac/PokeBRKR_e_BSMComFail_C1CAN/KeBRKR_e_BSMComFailDflt_C1CAN'
 * '<S321>' : 'BRKR_ac/PokeBRKR_e_BSMComFail_C1CAN/PokeBRKR_e_BSMComFail_C1CANChrt'
 * '<S322>' : 'BRKR_ac/PokeBRKR_e_BSMComFail_C2CAN/KaBRKR_e_BSMComFail_C2'
 * '<S323>' : 'BRKR_ac/PokeBRKR_e_BSMComFail_C2CAN/PokeBRKR_e_BSMComFail_C2CANChrt'
 * '<S324>' : 'BRKR_ac/PokeBRKR_e_BrkPedalDscrtInpt/KaBRKR_e_BrkPdl_Stat_Map'
 * '<S325>' : 'BRKR_ac/PokeBRKR_e_BrkPedalDscrtInpt/PokeBRKR_e_BrkPedalDscrtInptChrt'
 * '<S326>' : 'BRKR_ac/PokeBRKR_e_BrkPedalStat2/PokeBRKR_e_BrkPedalStat2Chrt'
 * '<S327>' : 'BRKR_ac/PokeBRKR_e_BrkPedalStat2_C2CAN/PokeBRKR_e_BrkPedalStat2_C2CANChrt'
 * '<S328>' : 'BRKR_ac/PokeBRKR_e_BrkPedalSts/PokeBRKR_e_BrkPedalStsChrt'
 * '<S329>' : 'BRKR_ac/PokeBRKR_e_ExtBrkReqOff/PokeBRKR_e_ExtBrkReqOffChrt'
 * '<S330>' : 'BRKR_ac/PokeBRKR_e_ExtTcsReqOff/PokeBRKR_e_ExtTcsReqOffChrt'
 * '<S331>' : 'BRKR_ac/PokeBRKR_e_Not_OK_To_Race/PokeBRKR_e_Not_OK_To_RaceChrt'
 * '<S332>' : 'BRKR_ac/PokeBRKR_e_OPDHoldStatus/PokeBRKR_e_OPDHoldStatusChrt'
 * '<S333>' : 'BRKR_ac/PokeBRKR_e_ReqSSC_IdlDst/KaBRKR_b_SSC_Status_Map'
 * '<S334>' : 'BRKR_ac/PokeBRKR_e_ReqSSC_IdlDst/PokeBRKR_e_ReqSSC_IdlDstChrt'
 * '<S335>' : 'BRKR_ac/PokeBRKR_e_ShiftInhibit/KaBRKR_e_ShiftInhibit_Map'
 * '<S336>' : 'BRKR_ac/PokeBRKR_e_ShiftInhibit/PokeBRKR_e_ShiftInhibitChrt'
 * '<S337>' : 'BRKR_ac/PokeBRKR_e_WhlSlpSt/KaBRKR_e_WhlSlpSt_Map'
 * '<S338>' : 'BRKR_ac/PokeBRKR_e_WhlSlpSt/PokeBRKR_e_WhlSlpStChrt'
 * '<S339>' : 'BRKR_ac/PokeBRKR_l_BrkPedalTravel/PokeBRKR_l_BrkPedalTravelChrt'
 * '<S340>' : 'BRKR_ac/PokeBRKR_pbar_BrakePedalPressure/PokeBRKR_pbar_BrakePedalPressureChrt'
 */
#endif                                 /* RTW_HEADER_BRKR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
