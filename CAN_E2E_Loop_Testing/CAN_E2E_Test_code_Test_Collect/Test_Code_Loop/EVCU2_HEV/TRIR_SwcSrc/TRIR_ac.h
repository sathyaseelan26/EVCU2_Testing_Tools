/*
 * File: TRIR_ac.h
 *
 * Code generated for Simulink model 'TRIR_ac'.
 *
 * Model version                  : 9.161
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:51:52 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TRIR_ac_h_
#define RTW_HEADER_TRIR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef TRIR_ac_COMMON_INCLUDES_
#define TRIR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_TRIR.h"
#endif                                 /* TRIR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block states (default storage) for system '<S138>/CANSignalProcessing' */
typedef struct
{
    float32 UnitDelay_DSTATE;          /* '<S152>/Unit Delay' */
    float32 UnitDelay_DSTATE_c;        /* '<S155>/Unit Delay' */
    boolean UnitDelay_DSTATE_k;        /* '<S156>/Unit Delay' */
}
DW_CANSignalProcessing_TRIR_ac_T;

/* Block signals (default storage) */
typedef struct tag_B_TRIR_ac_T
{
    float32 LeTRIR_T_SDS_ClntTmpIn_Tgt_out;
                                  /* '<S33>/PokeTRIR_T_SDS_ClntTmpIn_TgtChrt' */
    float32 LeTRIR_T_SDS_ClntTmpIn_Act_out;
                                  /* '<S32>/PokeTRIR_T_SDS_ClntTmpIn_ActChrt' */
    float32 LeTRIR_T_HtrCorClnt_TmpOut_out;
                                  /* '<S31>/PokeTRIR_T_HtrCorClnt_TmpOutChrt' */
    float32 LeTRIR_T_HtmpRadCool_TmpOut_out;
                                 /* '<S30>/PokeTRIR_T_HtmpRadCool_TmpOutChrt' */
    float32 LeTRIR_T_HtmpRadCool_TmpIn_out;
                                  /* '<S29>/PokeTRIR_T_HtmpRadCool_TmpInChrt' */
    float32 LeTRIR_T_HeatExCool_TmpOut_out;
                                  /* '<S28>/PokeTRIR_T_HeatExCool_TmpOutChrt' */

#if !Rte_SysCon_Variant_TRIR_2

    float32 LeTRIR_T_HV_BatClntTmp_Out_out;
                                  /* '<S27>/PokeTRIR_T_HV_BatClntTmp_OutChrt' */

#define B_TRIR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_TRIR_1

    float32 LeTRIR_T_HV_BatClntTmp_In_out;
                                   /* '<S26>/PokeTRIR_T_HV_BatClntTmp_InChrt' */

#define B_TRIR_AC_T_VARIANT_EXISTS
#endif

    float32 LeTRIR_T_HV_BatClntTmp2_Out_out;
                                 /* '<S25>/PokeTRIR_T_HV_BatClntTmp2_OutChrt' */
    float32 LeTRIR_T_HV_BatClntTmp2_In_out;
                                  /* '<S24>/PokeTRIR_T_HV_BatClntTmp2_InChrt' */
    float32 LeTRIR_Pct_AirHtwPwrTgt_out;
                                     /* '<S23>/PokeTRIR_Pct_AirHtwPwrTgtChrt' */
    float32 LeTRIR_P_SDS_HV_PwrAvg_out;
                                      /* '<S22>/PokeTRIR_P_SDS_HV_PwrAvgChrt' */
    float32 OutportBufferForVeTRIR_T_HV_BatClntTmp_I;
                                   /* '<S324>/KeTRIR_T_HV_BatClntTmp_In_INIT' */
    float32 OutportBufferForVeTRIR_T_HV_BatClntTmpOu;
                                  /* '<S324>/KeTRIR_T_HV_BatClntTmp_out_INIT' */
    float32 OutportBufferForVeTRIR_T_HV_BatClntTmp2_;
                                  /* '<S324>/KeTRIR_T_HV_BatClntTmp2_In_INIT' */
    float32 OutportBufferForVeTRIR_T_HV_BatClntTmp_p;
                                 /* '<S324>/KeTRIR_T_HV_BatClntTmp2_out_INIT' */
    float32 OutportBufferForVeTRIR_U_BatBotlClnt_LoL;/* '<S324>/Const9' */
    float32 OutportBufferForVeTRIR_T_HtrCorClnt_TmpI;/* '<S324>/Const11' */
    float32 OutportBufferForVeTRIR_T_HtrCorClnt_TmpO;/* '<S324>/Const16' */
    float32 OutportBufferForVeTRIR_Pct_AirHtrPwrTgt_;/* '<S324>/Const13' */
    float32 OutportBufferForVeTRIR_T_HtmpRadCool_Tmp;/* '<S324>/Const18' */
    float32 OutportBufferForVeTRIR_T_HtmpRadCool_T_m;/* '<S324>/Const20' */
    float32 OutportBufferForVeTRIR_T_HeatExCool_TmpO;/* '<S324>/Const22' */
    float32 OutportBufferForVeTRIR_P_SDS_HV_PwrAvgRa;/* '<S324>/Const24' */
    float32 OutportBufferForVeTRIR_T_SDS_ClntTmpIn_A;/* '<S324>/Const27' */
    float32 OutportBufferForVeTRIR_T_SDS_ClntTmpIn_T;/* '<S324>/Const30' */
    float32 OutportBufferForHV_BatClntTmp2_In_INIT_w;/* '<S323>/Battery_INITs' */
    float32 OutportBufferForHV_BatClntTmp2_In_Prev_I;/* '<S323>/Battery_INITs' */
    float32 OutportBufferForHV_BatClntTmp2_Out_INIT_;/* '<S323>/Battery_INITs' */
    float32 OutportBufferForHV_BatClntTmp2_Out_Prev_;/* '<S323>/Battery_INITs' */
    float32 OutportBufferForHV_BatClntTmp_In_INIT_wr;/* '<S323>/Battery_INITs' */
    float32 OutportBufferForHV_BatClntTmp_In_Prev_IN;/* '<S323>/Battery_INITs' */
    float32 OutportBufferForHV_BatClntTmp_Out_INIT_w;/* '<S323>/Battery_INITs' */
    float32 OutportBufferForHV_BatClntTmp_Out_Prev_I;/* '<S323>/Battery_INITs' */
    float32 OutportBufferForAirHtrPwrTgt_INIT_write;/* '<S323>/Cabin_INITs' */
    float32 OutportBufferForHeatExCool_TmpOut_INIT_w;/* '<S323>/Cabin_INITs' */
    float32 OutportBufferForHtmpRadCool_TmpIn_INIT_w;/* '<S323>/Cabin_INITs' */
    float32 OutportBufferForHtmpRadCool_TmpOut_INIT_;/* '<S323>/Cabin_INITs' */
    float32 OutportBufferForHtrCorClnt_TmpOut_INIT_w;/* '<S323>/Cabin_INITs' */
    float32 OutportBufferForSDS_ClntTmpIn_Act_INIT_w;/* '<S323>/EVA_INITs' */
    float32 OutportBufferForSDS_ClntTmpIn_Tgt_INIT_w;/* '<S323>/EVA_INITs' */
    float32 OutportBufferForSDS_HV_PwrAvg_INIT_write;/* '<S323>/EVA_INITs' */
    sint16 OutportBufferForVeTRIR_Cnt_MC_RHSC2_Cool;/* '<S324>/Const39' */
    sint16 OutportBufferForMC_RHSC2_Cooling_INIT_wr;/* '<S323>/EVA_INITs' */
    boolean LeTRIR_b_SDS_MaxCoolingReqSgnl_Rcvd;
                                  /* '<S62>/PokeTRIR_e_SDS_MaxCoolingReqChrt' */
    boolean LeTRIR_b_SDS_ActualStateSgnl_Rcvd;
                                    /* '<S61>/PokeTRIR_e_SDS_ActualStateChrt' */
    boolean LeTRIR_b_AHP_EnblReq_out;  /* '<S34>/PokeTRIR_b_AHP_EnblReqChrt' */
    boolean LeTRIR_b_SDS_ClntTmpIn_TgtSgnl_Rcvd;
                                  /* '<S33>/PokeTRIR_T_SDS_ClntTmpIn_TgtChrt' */
    boolean LeTRIR_b_SDS_ClntTmpIn_ActSgnl_Rcvd;
                                  /* '<S32>/PokeTRIR_T_SDS_ClntTmpIn_ActChrt' */
    boolean LeTRIR_b_SDS_HV_PwrAvgSgnl_Rcvd;
                                      /* '<S22>/PokeTRIR_P_SDS_HV_PwrAvgChrt' */
    boolean OutportBufferForVeTRIR_b_HV_BatClntTmp_I;/* '<S324>/Const2' */
    boolean OutportBufferForVeTRIR_b_HV_BatClntTmp_O;/* '<S324>/Const4' */
    boolean OutportBufferForVeTRIR_b_HV_BatClntTmp2_;/* '<S324>/Const6' */
    boolean OutportBufferForVeTRIR_b_HV_BatClntTmp_c;/* '<S324>/Const8' */
    boolean OutportBufferForVeTRIR_b_BatBotlClntLoLv;/* '<S324>/Const10' */
    boolean OutportBufferForVeTRIR_b_HtrCorClnt_TmpI;/* '<S324>/Const12' */
    boolean OutportBufferForVeTRIR_b_HtrCorClnt_TmpO;/* '<S324>/Const17' */
    boolean OutportBufferForVeTRIR_b_AHP_EnblReq_Out;/* '<S324>/Const15' */
    boolean OutportBufferForVeTRIR_b_AirHtrPwrTgt_FA;/* '<S324>/Const14' */
    boolean OutportBufferForVeTRIR_b_HtmpRadCool_Tmp;/* '<S324>/Const19' */
    boolean OutportBufferForVeTRIR_b_HtmpRadCool_T_e;/* '<S324>/Const21' */
    boolean OutportBufferForVeTRIR_b_HeatExCool_TmpO;/* '<S324>/Const23' */
    boolean OutportBufferForVeTRIR_b_SDS_HV_PwrAvgRa;/* '<S324>/Const25' */
    boolean OutportBufferForVeTRIR_b_SDS_HV_PwrAvgRc;/* '<S324>/Const26' */
    boolean OutportBufferForVeTRIR_b_SDS_ClntTmpIn_A;/* '<S324>/Const28' */
    boolean OutportBufferForVeTRIR_b_SDS_ClntTmpIn_b;/* '<S324>/Const29' */
    boolean OutportBufferForVeTRIR_b_SDS_ActualState;/* '<S324>/Const34' */
    boolean OutportBufferForVeTRIR_b_SDS_ActualSta_p;/* '<S324>/Const35' */
    boolean OutportBufferForVeTRIR_b_SDS_MaxCoolingR;/* '<S324>/Const37' */
    boolean OutportBufferForVeTRIR_b_SDS_MaxCoolin_n;/* '<S324>/Const38' */
    boolean OutportBufferForVeTRIR_b_SDS_ClntTmpIn_T;/* '<S324>/Const31' */
    boolean OutportBufferForVeTRIR_b_SDS_ClntTmpIn_m;/* '<S324>/Const32' */
    boolean OutportBufferForVeTRIR_b_SCCActv_Out_Ini;/* '<S324>/Const40' */
    boolean OutportBufferForVeTRIR_b_HVACECOModeSts_;/* '<S324>/Const43' */
    boolean OutportBufferForVeTRIR_b_ClimateInfo_FA_;/* '<S324>/Const53' */
    boolean OutportBufferForVeTRIR_b_KeepHotColdButt;/* '<S324>/Const44' */
    boolean OutportBufferForVeTRIR_b_KeepHotColdBu_k;/* '<S324>/Const45' */
    boolean OutportBufferForVeTRIR_b_Comfort_EnblAct;/* '<S324>/Const46' */
    boolean OutportBufferForVeTRIR_b_Comfort_EnblA_g;/* '<S324>/Const47' */
    boolean OutportBufferForVeTRIR_b_TrunkStatus_Out;/* '<S324>/Const48' */
    boolean OutportBufferForVeTRIR_b_TrunkStatus_FA_;/* '<S324>/Const49' */
    boolean OutportBufferForVeTRIR_b_LoadShed_Out_In;/* '<S324>/Const50' */
    boolean OutportBufferForVeTRIR_b_LoadShed_FA_Out;/* '<S324>/Const51' */
    boolean OutportBufferForVeTRIR_b_HSW_Sts_FA_Out_;/* '<S324>/Const59' */
    boolean OutportBufferForVeTRIR_b_HSW_Fail_Out_In;/* '<S324>/Const60' */
    boolean OutportBufferForVeTRIR_b_FL_HS_Fail_Out_;/* '<S324>/Const61' */
    boolean OutportBufferForVeTRIR_b_FR_HS_Fail_Out_;/* '<S324>/Const62' */
    boolean OutportBufferForVeTRIR_b_RL_HS_Fail_Out_;/* '<S324>/Const63' */
    boolean OutportBufferForVeTRIR_b_RR_HS_Fail_Out_;/* '<S324>/Const64' */
    boolean OutportBufferForVeTRIR_b_FL_VS_Fail_Out_;/* '<S324>/Const65' */
    boolean OutportBufferForVeTRIR_b_FR_VS_Fail_Out_;/* '<S324>/Const66' */
    boolean OutportBufferForVeTRIR_b_RL_VS_Fail_Out_;/* '<S324>/Const67' */
    boolean OutportBufferForVeTRIR_b_RR_VS_Fail_Out_;/* '<S324>/Const68' */
    boolean OutportBufferForFL_HS_Fail_INIT_write;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForFL_VS_Fail_INIT_write;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForFR_HS_Fail_INIT_write;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForFR_VS_Fail_INIT_write;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForHSW_Fail_INIT_write;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForHSW_Sts_FA_INIT_write;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForHV_BatClntTmp2_In_FA_INI;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForHV_BatClntTmp2_Out_FA_IN;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForHV_BatClntTmp_In_FA_INIT;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForHV_BatClntTmp_Out_FA_INI;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForRL_HS_Fail_INIT_write;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForRL_VS_Fail_INIT_write;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForRR_HS_Fail_INIT_write;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForRR_VS_Fail_INIT_write;/* '<S323>/Battery_INITs' */
    boolean OutportBufferForAHP_EnblReq_FA_INIT_writ;/* '<S323>/Cabin_INITs' */
    boolean OutportBufferForAHP_EnblReq_INIT_write;/* '<S323>/Cabin_INITs' */
    boolean OutportBufferForAirHtrPwrTgtFA_INIT_writ;/* '<S323>/Cabin_INITs' */
    boolean OutportBufferForHeatExCool_TmpOut_FA_INI;/* '<S323>/Cabin_INITs' */
    boolean OutportBufferForHtmpRadCool_TmpIn_FA_INI;/* '<S323>/Cabin_INITs' */
    boolean OutportBufferForHtmpRadCool_TmpOut_FA_IN;/* '<S323>/Cabin_INITs' */
    boolean OutportBufferForHtrCorClnt_TmpOut_FA_INI;/* '<S323>/Cabin_INITs' */
    boolean OutportBufferForSDS_ActualState_FA_INIT_;/* '<S323>/EVA_INITs' */
    boolean OutportBufferForSDS_ActualState_Rcvd_INI;/* '<S323>/EVA_INITs' */
    boolean OutportBufferForSDS_ClntTmpIn_Act_FA_INI;/* '<S323>/EVA_INITs' */
    boolean OutportBufferForSDS_ClntTmpIn_Act_Rcvd_I;/* '<S323>/EVA_INITs' */
    boolean OutportBufferForSDS_ClntTmpIn_Tgt_FA_INI;/* '<S323>/EVA_INITs' */
    boolean OutportBufferForSDS_ClntTmpIn_Tgt_Rcvd_I;/* '<S323>/EVA_INITs' */
    boolean OutportBufferForSDS_HV_PwrAvg_FA_INIT_wr;/* '<S323>/EVA_INITs' */
    boolean OutportBufferForSDS_HV_PwrAvg_Rcvd_INIT_;/* '<S323>/EVA_INITs' */
    boolean OutportBufferForSDS_MaxCoolingReq_FA_INI;/* '<S323>/EVA_INITs' */
    boolean OutportBufferForSDS_MaxCoolingReq_Rcvd_I;/* '<S323>/EVA_INITs' */
    boolean OutportBufferForClimateInfo_FA_INIT_writ;/* '<S323>/PreCond_INITs' */
    boolean OutportBufferForHVACECOModeSts_FA_INIT_w;/* '<S323>/PreCond_INITs' */
    boolean OutportBufferForSCCActv_Init_write;/* '<S323>/PreCond_INITs' */
    boolean OutportBufferForComfort_EnblAct_FA_INIT_;/* '<S323>/PostCond_INITs' */
    boolean OutportBufferForComfort_EnblAct_INIT_wri;/* '<S323>/PostCond_INITs' */
    boolean OutportBufferForKeepHotColdButtonStatus_;/* '<S323>/PostCond_INITs' */
    boolean OutportBufferForKeepHotColdButtonStatu_j;/* '<S323>/PostCond_INITs' */
    boolean OutportBufferForLoadShed_FA_INIT_write;/* '<S323>/PostCond_INITs' */
    boolean OutportBufferForLoadShed_INIT_write;/* '<S323>/PostCond_INITs' */
    boolean OutportBufferForTrunkStatus_FA_INIT_writ;/* '<S323>/PostCond_INITs' */
    boolean OutportBufferForTrunkStatus_INIT_write;/* '<S323>/PostCond_INITs' */
    TeTRIR_e_SDS_ActualState LeTRIR_e_SDS_ActualState_out;
                                    /* '<S61>/PokeTRIR_e_SDS_ActualStateChrt' */
    TeTRIR_e_SDS_ActualState OutportBufferForVeTRIR_e_SDS_ActualState;/* '<S324>/Const33' */
    TeTRIR_e_SDS_ActualState OutportBufferForSDS_ActualState_INIT_wri;/* '<S323>/EVA_INITs' */
    TeTRIR_e_HVAC_State LeTRIR_e_HVACPrecCondSts_out;
                                    /* '<S56>/PokeTRIR_e_HVACPrecCondStsChrt' */
    TeTRIR_e_HVAC_State OutportBufferForVeTRIR_e_HVACSt_Out_Init;/* '<S324>/Const41' */
    TeTRIR_e_HVAC_State OutportBufferForHVACPrecCondSts_Init_wri;/* '<S323>/PreCond_INITs' */
    TeTRIR_e_HVAC_ECO_State LeTRIR_e_HVACECOModeSts_out;
                                     /* '<S55>/PokeTRIR_e_HVACECOModeStsChrt' */
    TeTRIR_e_HVAC_ECO_State OutportBufferForVeTRIR_e_HVACECOModeSts_;/* '<S324>/Const42' */
    TeTRIR_e_HVAC_ECO_State OutportBufferForHVACECOModeSts_INIT_writ;/* '<S323>/PreCond_INITs' */
    TeTRIR_e_HCP_MaxCoolingReq LeTRIR_e_SDS_MaxCoolingReq_out;
                                  /* '<S62>/PokeTRIR_e_SDS_MaxCoolingReqChrt' */
    TeTRIR_e_HCP_MaxCoolingReq OutportBufferForVeTRIR_e_SDS_MaxCoolingR;/* '<S324>/Const36' */
    TeTRIR_e_HCP_MaxCoolingReq OutportBufferForSDS_MaxCoolingReq_INIT_w;/* '<S323>/EVA_INITs' */

#if Rte_SysCon_Variant_TRIR_3

    TeTRIR_e_ClimateSts LeTRIR_e_HSW_Sts_out;/* '<S54>/PokeTRIR_e_HSW_StsChrt' */

#define B_TRIR_AC_T_VARIANT_EXISTS
#endif

    TeTRIR_e_ClimateSts OutportBufferForVeTRIR_e_HSW_Sts_Out_Ini;/* '<S324>/Const1' */
    TeTRIR_e_ClimateSts OutportBufferForVeTRIR_e_FL_HS_Sts_Out_I;/* '<S324>/Const3' */
    TeTRIR_e_ClimateSts OutportBufferForVeTRIR_e_FR_HS_Sts_Out_I;/* '<S324>/Const5' */
    TeTRIR_e_ClimateSts OutportBufferForVeTRIR_e_RL_HS_Sts_Out_I;/* '<S324>/Const7' */
    TeTRIR_e_ClimateSts OutportBufferForVeTRIR_e_RR_HS_Sts_Out_I;/* '<S324>/Const54' */
    TeTRIR_e_ClimateSts OutportBufferForVeTRIR_e_FL_VS_Sts_Out_I;/* '<S324>/Const55' */
    TeTRIR_e_ClimateSts OutportBufferForVeTRIR_e_FR_VS_Sts_Out_I;/* '<S324>/Const56' */
    TeTRIR_e_ClimateSts OutportBufferForVeTRIR_e_RL_VS_Sts_Out_I;/* '<S324>/Const57' */
    TeTRIR_e_ClimateSts OutportBufferForVeTRIR_e_RR_VS_Sts_Out_I;/* '<S324>/Const58' */
    TeTRIR_e_ClimateSts OutportBufferForFL_HS_Sts_INIT_write;/* '<S323>/Battery_INITs' */
    TeTRIR_e_ClimateSts OutportBufferForFL_VS_Sts_INIT_write;/* '<S323>/Battery_INITs' */
    TeTRIR_e_ClimateSts OutportBufferForFR_HS_Sts_INIT_write;/* '<S323>/Battery_INITs' */
    TeTRIR_e_ClimateSts OutportBufferForFR_VS_Sts_INIT_write;/* '<S323>/Battery_INITs' */
    TeTRIR_e_ClimateSts OutportBufferForHSW_Sts_INIT_write;/* '<S323>/Battery_INITs' */
    TeTRIR_e_ClimateSts OutportBufferForRL_HS_Sts_INIT_write;/* '<S323>/Battery_INITs' */
    TeTRIR_e_ClimateSts OutportBufferForRL_VS_Sts_INIT_write;/* '<S323>/Battery_INITs' */
    TeTRIR_e_ClimateSts OutportBufferForRR_HS_Sts_INIT_write;/* '<S323>/Battery_INITs' */
    TeTRIR_e_ClimateSts OutportBufferForRR_VS_Sts_INIT_write;/* '<S323>/Battery_INITs' */
    TeTRIR_e_ClimateInfo LeTRIR_e_ClimateInfo_out;/* '<S49>/PokeTRIR_e_ClimateInfoChrt' */
    TeTRIR_e_ClimateInfo OutportBufferForVeTRIR_e_ClimateInfo_Out;/* '<S324>/Const52' */
    TeTRIR_e_ClimateInfo OutportBufferForClimateInfo_INIT_write;/* '<S323>/PreCond_INITs' */
}
B_TRIR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_TRIR_ac_T
{
    float32 UnitDelay_DSTATE;          /* '<S137>/Unit Delay' */
    float32 UnitDelay_DSTATE_j;        /* '<S139>/Unit Delay' */
    float32 UnitDelay_DSTATE_a;        /* '<S177>/Unit Delay' */

#if Rte_SysCon_Variant_TRIR_2

    float32 UnitDelay_DSTATE_n;        /* '<S173>/Unit Delay' */

#define DW_TRIR_AC_T_VARIANT_EXISTS
#endif

    float32 UnitDelay_DSTATE_k;        /* '<S163>/Unit Delay' */

#if Rte_SysCon_Variant_TRIR_1

    float32 UnitDelay_DSTATE_m;        /* '<S158>/Unit Delay' */

#define DW_TRIR_AC_T_VARIANT_EXISTS
#endif

    float32 UnitDelay_DSTATE_l;        /* '<S148>/Unit Delay' */
    boolean UnitDelay_DSTATE_e;        /* '<S178>/Unit Delay' */

#if Rte_SysCon_Variant_TRIR_2

    boolean UnitDelay_DSTATE_d;        /* '<S174>/Unit Delay' */

#define DW_TRIR_AC_T_VARIANT_EXISTS
#endif

    boolean UnitDelay_DSTATE_i;        /* '<S164>/Unit Delay' */

#if Rte_SysCon_Variant_TRIR_1

    boolean UnitDelay_DSTATE_c;        /* '<S159>/Unit Delay' */

#define DW_TRIR_AC_T_VARIANT_EXISTS
#endif

    boolean UnitDelay_DSTATE_id;       /* '<S149>/Unit Delay' */

#if !Rte_SysCon_Variant_TRIR_2

    DW_CANSignalProcessing_TRIR_ac_T CANSignalProcessing_e;/* '<S140>/CANSignalProcessing' */

#define DW_TRIR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_TRIR_1

    DW_CANSignalProcessing_TRIR_ac_T CANSignalProcessing;/* '<S138>/CANSignalProcessing' */

#define DW_TRIR_AC_T_VARIANT_EXISTS
#endif

}
DW_TRIR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeTRIR_e_SDS_ActualState Const33;/* '<S324>/Const33' */
    const TeTRIR_e_HVAC_State Const41; /* '<S324>/Const41' */
    const TeTRIR_e_HVAC_ECO_State Const42;/* '<S324>/Const42' */
    const TeTRIR_e_HCP_MaxCoolingReq Const36;/* '<S324>/Const36' */
    const TeTRIR_e_ClimateSts Const1;  /* '<S324>/Const1' */
    const TeTRIR_e_ClimateSts Const3;  /* '<S324>/Const3' */
    const TeTRIR_e_ClimateSts Const5;  /* '<S324>/Const5' */
    const TeTRIR_e_ClimateSts Const7;  /* '<S324>/Const7' */
    const TeTRIR_e_ClimateSts Const54; /* '<S324>/Const54' */
    const TeTRIR_e_ClimateSts Const55; /* '<S324>/Const55' */
    const TeTRIR_e_ClimateSts Const56; /* '<S324>/Const56' */
    const TeTRIR_e_ClimateSts Const57; /* '<S324>/Const57' */
    const TeTRIR_e_ClimateSts Const58; /* '<S324>/Const58' */
    const TeTRIR_e_ClimateInfo Const52;/* '<S324>/Const52' */
}
ConstB_TRIR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRIR
#include "MemMap.h"

extern VAR(B_TRIR_ac_T, TRIR_VAR_INIT) TRIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRIR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRIR
#include "MemMap.h"

extern VAR(DW_TRIR_ac_T, TRIR_VAR_INIT) TRIR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRIR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_TRIR
#include "MemMap.h"

extern CONST(ConstB_TRIR_ac_T, TRIR_VAR_INIT) TRIR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_TRIR
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
 * '<Root>' : 'TRIR_ac'
 * '<S1>'   : 'TRIR_ac/FsftTRIR_Pct_AirHtwPwrTgt'
 * '<S2>'   : 'TRIR_ac/FsftTRIR_T_HV_BatClntTmp2Out'
 * '<S3>'   : 'TRIR_ac/FsftTRIR_T_HV_BatClntTmp2_In'
 * '<S4>'   : 'TRIR_ac/FsftTRIR_T_HV_BatClntTmpOut'
 * '<S5>'   : 'TRIR_ac/FsftTRIR_T_HV_BatClntTmp_In'
 * '<S6>'   : 'TRIR_ac/FsftTRIR_T_SDS_ClntTmpIn_Act'
 * '<S7>'   : 'TRIR_ac/FsftTRIR_b_AHP_EnblReq'
 * '<S8>'   : 'TRIR_ac/FsftTRIR_b_BCM_Comfort_EnblAct'
 * '<S9>'   : 'TRIR_ac/FsftTRIR_b_ClimateInfo'
 * '<S10>'  : 'TRIR_ac/FsftTRIR_b_ETM_KeepHotColdButtonStatus'
 * '<S11>'  : 'TRIR_ac/FsftTRIR_b_HSW_Sts'
 * '<S12>'  : 'TRIR_ac/FsftTRIR_b_HVACECOModeSts'
 * '<S13>'  : 'TRIR_ac/FsftTRIR_b_HVACPrecCondSts'
 * '<S14>'  : 'TRIR_ac/FsftTRIR_b_HeatExCool_TmpOut'
 * '<S15>'  : 'TRIR_ac/FsftTRIR_b_HtmpRadCool_TmpIn'
 * '<S16>'  : 'TRIR_ac/FsftTRIR_b_HtmpRadCool_TmpOut'
 * '<S17>'  : 'TRIR_ac/FsftTRIR_b_HtrCorClnt_TmpOut'
 * '<S18>'  : 'TRIR_ac/FsftTRIR_b_LoadShed'
 * '<S19>'  : 'TRIR_ac/FsftTRIR_b_SCCActv'
 * '<S20>'  : 'TRIR_ac/FsftTRIR_b_TrunkStatus'
 * '<S21>'  : 'TRIR_ac/PokeTRIR_Cnt_MC_RHSC2_Cooling'
 * '<S22>'  : 'TRIR_ac/PokeTRIR_P_SDS_HV_PwrAvg'
 * '<S23>'  : 'TRIR_ac/PokeTRIR_Pct_AirHtwPwrTgt'
 * '<S24>'  : 'TRIR_ac/PokeTRIR_T_HV_BatClntTmp2_In'
 * '<S25>'  : 'TRIR_ac/PokeTRIR_T_HV_BatClntTmp2_Out'
 * '<S26>'  : 'TRIR_ac/PokeTRIR_T_HV_BatClntTmp_In'
 * '<S27>'  : 'TRIR_ac/PokeTRIR_T_HV_BatClntTmp_Out'
 * '<S28>'  : 'TRIR_ac/PokeTRIR_T_HeatExCool_TmpOut'
 * '<S29>'  : 'TRIR_ac/PokeTRIR_T_HtmpRadCool_TmpIn'
 * '<S30>'  : 'TRIR_ac/PokeTRIR_T_HtmpRadCool_TmpOut'
 * '<S31>'  : 'TRIR_ac/PokeTRIR_T_HtrCorClnt_TmpOut'
 * '<S32>'  : 'TRIR_ac/PokeTRIR_T_SDS_ClntTmpIn_Act'
 * '<S33>'  : 'TRIR_ac/PokeTRIR_T_SDS_ClntTmpIn_Tgt'
 * '<S34>'  : 'TRIR_ac/PokeTRIR_b_AHP_EnblReq'
 * '<S35>'  : 'TRIR_ac/PokeTRIR_b_BCM_Comfort_EnblAct'
 * '<S36>'  : 'TRIR_ac/PokeTRIR_b_ETM_KeepHotColdButtonStatus'
 * '<S37>'  : 'TRIR_ac/PokeTRIR_b_FL_HS_Fail'
 * '<S38>'  : 'TRIR_ac/PokeTRIR_b_FL_VS_Fail'
 * '<S39>'  : 'TRIR_ac/PokeTRIR_b_FR_HS_Fail'
 * '<S40>'  : 'TRIR_ac/PokeTRIR_b_FR_VS_Fail'
 * '<S41>'  : 'TRIR_ac/PokeTRIR_b_HSW_Fail'
 * '<S42>'  : 'TRIR_ac/PokeTRIR_b_LoadShed'
 * '<S43>'  : 'TRIR_ac/PokeTRIR_b_RL_HS_Fail'
 * '<S44>'  : 'TRIR_ac/PokeTRIR_b_RL_VS_Fail'
 * '<S45>'  : 'TRIR_ac/PokeTRIR_b_RR_HS_Fail'
 * '<S46>'  : 'TRIR_ac/PokeTRIR_b_RR_VS_Fail'
 * '<S47>'  : 'TRIR_ac/PokeTRIR_b_SCCActv'
 * '<S48>'  : 'TRIR_ac/PokeTRIR_b_TrunkStatus'
 * '<S49>'  : 'TRIR_ac/PokeTRIR_e_ClimateInfo'
 * '<S50>'  : 'TRIR_ac/PokeTRIR_e_FL_HS_Sts'
 * '<S51>'  : 'TRIR_ac/PokeTRIR_e_FL_VS_Sts'
 * '<S52>'  : 'TRIR_ac/PokeTRIR_e_FR_HS_Sts'
 * '<S53>'  : 'TRIR_ac/PokeTRIR_e_FR_VS_Sts'
 * '<S54>'  : 'TRIR_ac/PokeTRIR_e_HSW_Sts'
 * '<S55>'  : 'TRIR_ac/PokeTRIR_e_HVACECOModeSts'
 * '<S56>'  : 'TRIR_ac/PokeTRIR_e_HVACPrecCondSts'
 * '<S57>'  : 'TRIR_ac/PokeTRIR_e_RL_HS_Sts'
 * '<S58>'  : 'TRIR_ac/PokeTRIR_e_RL_VS_Sts'
 * '<S59>'  : 'TRIR_ac/PokeTRIR_e_RR_HS_Sts'
 * '<S60>'  : 'TRIR_ac/PokeTRIR_e_RR_VS_Sts'
 * '<S61>'  : 'TRIR_ac/PokeTRIR_e_SDS_ActualState'
 * '<S62>'  : 'TRIR_ac/PokeTRIR_e_SDS_MaxCoolingReq'
 * '<S63>'  : 'TRIR_ac/TRIR_MedTEH'
 * '<S64>'  : 'TRIR_ac/TRIR_PwrOn'
 * '<S65>'  : 'TRIR_ac/TmotTRIR_T_SDS_ClntTmpIn_Act'
 * '<S66>'  : 'TRIR_ac/TmotTRIR_b_HVACPrecCondSts'
 * '<S67>'  : 'TRIR_ac/TmotTRIR_b_SCCActv'
 * '<S68>'  : 'TRIR_ac/FsftTRIR_Pct_AirHtwPwrTgt/FsftTRIR_Pct_AirHtwPwrTgtChrt'
 * '<S69>'  : 'TRIR_ac/FsftTRIR_T_HV_BatClntTmp2Out/FsftTRIR_T_HV_BatClntTmp2OutChrt'
 * '<S70>'  : 'TRIR_ac/FsftTRIR_T_HV_BatClntTmp2_In/FsftTRIR_T_HV_BatClntTmp2_InChrt'
 * '<S71>'  : 'TRIR_ac/FsftTRIR_T_HV_BatClntTmpOut/FsftTRIR_T_HV_BatClntTmpOutChrt'
 * '<S72>'  : 'TRIR_ac/FsftTRIR_T_HV_BatClntTmp_In/FsftTRIR_T_HV_BatClntTmp_InChrt'
 * '<S73>'  : 'TRIR_ac/FsftTRIR_T_SDS_ClntTmpIn_Act/FsftTRIR_T_SDS_ClntTmpIn_ActChrt'
 * '<S74>'  : 'TRIR_ac/FsftTRIR_b_AHP_EnblReq/FsftTRIR_b_AHP_EnblReqChrt'
 * '<S75>'  : 'TRIR_ac/FsftTRIR_b_BCM_Comfort_EnblAct/FsftTRIR_b_BCM_Comfort_EnblActChrt'
 * '<S76>'  : 'TRIR_ac/FsftTRIR_b_ClimateInfo/FsftTRIR_b_ClimateInfoChrt'
 * '<S77>'  : 'TRIR_ac/FsftTRIR_b_ETM_KeepHotColdButtonStatus/FsftTRIR_b_ETM_KeepHotColdButtonStatusChrt'
 * '<S78>'  : 'TRIR_ac/FsftTRIR_b_HSW_Sts/FsftTRIR_b_HSW_StsChrt'
 * '<S79>'  : 'TRIR_ac/FsftTRIR_b_HVACECOModeSts/FsftTRIR_b_HVACECOModeStsChrt'
 * '<S80>'  : 'TRIR_ac/FsftTRIR_b_HVACPrecCondSts/FsftTRIR_b_HVACPrecCondStsChrt'
 * '<S81>'  : 'TRIR_ac/FsftTRIR_b_HeatExCool_TmpOut/FsftTRIR_b_HeatExCool_TmpOutChrt'
 * '<S82>'  : 'TRIR_ac/FsftTRIR_b_HtmpRadCool_TmpIn/FsftTRIR_b_HtmpRadCool_TmpInChrt'
 * '<S83>'  : 'TRIR_ac/FsftTRIR_b_HtmpRadCool_TmpOut/FsftTRIR_b_HtmpRadCool_TmpOutChrt'
 * '<S84>'  : 'TRIR_ac/FsftTRIR_b_HtrCorClnt_TmpOut/FsftTRIR_b_HtrCorClnt_TmpOutChrt'
 * '<S85>'  : 'TRIR_ac/FsftTRIR_b_LoadShed/FsftTRIR_b_LoadShedChrt'
 * '<S86>'  : 'TRIR_ac/FsftTRIR_b_SCCActv/FsftTRIR_b_SCCActvChrt'
 * '<S87>'  : 'TRIR_ac/FsftTRIR_b_TrunkStatus/FsftTRIR_b_TrunkStatusChrt'
 * '<S88>'  : 'TRIR_ac/PokeTRIR_Cnt_MC_RHSC2_Cooling/PokeTRIR_Cnt_MC_RHSC2_CoolingChrt'
 * '<S89>'  : 'TRIR_ac/PokeTRIR_P_SDS_HV_PwrAvg/PokeTRIR_P_SDS_HV_PwrAvgChrt'
 * '<S90>'  : 'TRIR_ac/PokeTRIR_Pct_AirHtwPwrTgt/PokeTRIR_Pct_AirHtwPwrTgtChrt'
 * '<S91>'  : 'TRIR_ac/PokeTRIR_T_HV_BatClntTmp2_In/PokeTRIR_T_HV_BatClntTmp2_InChrt'
 * '<S92>'  : 'TRIR_ac/PokeTRIR_T_HV_BatClntTmp2_Out/PokeTRIR_T_HV_BatClntTmp2_OutChrt'
 * '<S93>'  : 'TRIR_ac/PokeTRIR_T_HV_BatClntTmp_In/PokeTRIR_T_HV_BatClntTmp_InChrt'
 * '<S94>'  : 'TRIR_ac/PokeTRIR_T_HV_BatClntTmp_Out/PokeTRIR_T_HV_BatClntTmp_OutChrt'
 * '<S95>'  : 'TRIR_ac/PokeTRIR_T_HeatExCool_TmpOut/PokeTRIR_T_HeatExCool_TmpOutChrt'
 * '<S96>'  : 'TRIR_ac/PokeTRIR_T_HtmpRadCool_TmpIn/PokeTRIR_T_HtmpRadCool_TmpInChrt'
 * '<S97>'  : 'TRIR_ac/PokeTRIR_T_HtmpRadCool_TmpOut/PokeTRIR_T_HtmpRadCool_TmpOutChrt'
 * '<S98>'  : 'TRIR_ac/PokeTRIR_T_HtrCorClnt_TmpOut/PokeTRIR_T_HtrCorClnt_TmpOutChrt'
 * '<S99>'  : 'TRIR_ac/PokeTRIR_T_SDS_ClntTmpIn_Act/PokeTRIR_T_SDS_ClntTmpIn_ActChrt'
 * '<S100>' : 'TRIR_ac/PokeTRIR_T_SDS_ClntTmpIn_Tgt/PokeTRIR_T_SDS_ClntTmpIn_TgtChrt'
 * '<S101>' : 'TRIR_ac/PokeTRIR_b_AHP_EnblReq/PokeTRIR_b_AHP_EnblReqChrt'
 * '<S102>' : 'TRIR_ac/PokeTRIR_b_BCM_Comfort_EnblAct/PokeTRIR_b_BCM_Comfort_EnblActChrt'
 * '<S103>' : 'TRIR_ac/PokeTRIR_b_ETM_KeepHotColdButtonStatus/PokeTRIR_b_ETM_KeepHotColdButtonStatusChrt'
 * '<S104>' : 'TRIR_ac/PokeTRIR_b_FL_HS_Fail/PokeTRIR_b_FL_HS_FailChrt'
 * '<S105>' : 'TRIR_ac/PokeTRIR_b_FL_VS_Fail/PokeTRIR_b_FL_VS_FailChrt'
 * '<S106>' : 'TRIR_ac/PokeTRIR_b_FR_HS_Fail/PokeTRIR_b_FR_HS_FailChrt'
 * '<S107>' : 'TRIR_ac/PokeTRIR_b_FR_VS_Fail/PokeTRIR_b_FR_VS_FailChrt'
 * '<S108>' : 'TRIR_ac/PokeTRIR_b_HSW_Fail/PokeTRIR_b_HSW_FailChrt'
 * '<S109>' : 'TRIR_ac/PokeTRIR_b_LoadShed/PokeTRIR_b_LoadShedChrt'
 * '<S110>' : 'TRIR_ac/PokeTRIR_b_RL_HS_Fail/PokeTRIR_b_RL_HS_FailChrt'
 * '<S111>' : 'TRIR_ac/PokeTRIR_b_RL_VS_Fail/PokeTRIR_b_RL_VS_FailChrt'
 * '<S112>' : 'TRIR_ac/PokeTRIR_b_RR_HS_Fail/PokeTRIR_b_RR_HS_FailChrt'
 * '<S113>' : 'TRIR_ac/PokeTRIR_b_RR_VS_Fail/PokeTRIR_b_RR_VS_FailChrt'
 * '<S114>' : 'TRIR_ac/PokeTRIR_b_SCCActv/PokeTRIR_b_SCCActvChrt'
 * '<S115>' : 'TRIR_ac/PokeTRIR_b_TrunkStatus/PokeTRIR_b_TrunkStatusChrt'
 * '<S116>' : 'TRIR_ac/PokeTRIR_e_ClimateInfo/PokeTRIR_e_ClimateInfoChrt'
 * '<S117>' : 'TRIR_ac/PokeTRIR_e_FL_HS_Sts/PokeTRIR_e_FL_HS_StsChrt'
 * '<S118>' : 'TRIR_ac/PokeTRIR_e_FL_VS_Sts/PokeTRIR_e_FL_VS_StsChrt'
 * '<S119>' : 'TRIR_ac/PokeTRIR_e_FR_HS_Sts/PokeTRIR_e_FR_HS_StsChrt'
 * '<S120>' : 'TRIR_ac/PokeTRIR_e_FR_VS_Sts/PokeTRIR_e_FR_VS_StsChrt'
 * '<S121>' : 'TRIR_ac/PokeTRIR_e_HSW_Sts/PokeTRIR_e_HSW_StsChrt'
 * '<S122>' : 'TRIR_ac/PokeTRIR_e_HVACECOModeSts/PokeTRIR_e_HVACECOModeStsChrt'
 * '<S123>' : 'TRIR_ac/PokeTRIR_e_HVACPrecCondSts/PokeTRIR_e_HVACPrecCondStsChrt'
 * '<S124>' : 'TRIR_ac/PokeTRIR_e_RL_HS_Sts/PokeTRIR_e_RL_HS_StsChrt'
 * '<S125>' : 'TRIR_ac/PokeTRIR_e_RL_VS_Sts/PokeTRIR_e_RL_VS_StsChrt'
 * '<S126>' : 'TRIR_ac/PokeTRIR_e_RR_HS_Sts/PokeTRIR_e_RR_HS_StsChrt'
 * '<S127>' : 'TRIR_ac/PokeTRIR_e_RR_VS_Sts/PokeTRIR_e_RR_VS_StsChrt'
 * '<S128>' : 'TRIR_ac/PokeTRIR_e_SDS_ActualState/PokeTRIR_e_SDS_ActualStateChrt'
 * '<S129>' : 'TRIR_ac/PokeTRIR_e_SDS_MaxCoolingReq/PokeTRIR_e_SDS_MaxCoolingReqChrt'
 * '<S130>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs'
 * '<S131>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs'
 * '<S132>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs'
 * '<S133>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs'
 * '<S134>' : 'TRIR_ac/TRIR_MedTEH/PreConditioningInputs'
 * '<S135>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing'
 * '<S136>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides'
 * '<S137>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS2_SignalProcessing'
 * '<S138>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS_SignalProcessing'
 * '<S139>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS2_SignalProcessing'
 * '<S140>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS_SignalProcessing'
 * '<S141>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTS_INITCounter'
 * '<S142>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/KeTRIR_k_BTIS_LPF'
 * '<S143>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/KeTRIR_k_BTOS_LPF'
 * '<S144>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/KeTRIR_t_BTS_Debounce'
 * '<S145>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/KeTRIR_t_KeepBTS_INITs'
 * '<S146>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS2_SignalProcessing/HeTRIR_t_MedTEH'
 * '<S147>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS2_SignalProcessing/SWITCH_UP'
 * '<S148>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS2_SignalProcessing/Turn On Delay Time'
 * '<S149>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS2_SignalProcessing/Turn On Delay Time/EdgeRising'
 * '<S150>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS_SignalProcessing/CANSignalProcessing'
 * '<S151>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS_SignalProcessing/HWIOSignalProcessing'
 * '<S152>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS_SignalProcessing/CANSignalProcessing/Debounce'
 * '<S153>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS_SignalProcessing/CANSignalProcessing/Debounce/HeTRIR_t_MedTEH'
 * '<S154>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS_SignalProcessing/CANSignalProcessing/Debounce/SWITCH_UP'
 * '<S155>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS_SignalProcessing/CANSignalProcessing/Debounce/Turn On Delay Time'
 * '<S156>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS_SignalProcessing/CANSignalProcessing/Debounce/Turn On Delay Time/EdgeRising'
 * '<S157>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS_SignalProcessing/HWIOSignalProcessing/LPF'
 * '<S158>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS_SignalProcessing/HWIOSignalProcessing/LPF/Digital Lowpass Reset Enabled'
 * '<S159>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS_SignalProcessing/HWIOSignalProcessing/LPF/EdgeBi'
 * '<S160>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTIS_SignalProcessing/HWIOSignalProcessing/LPF/SWITCH_UP'
 * '<S161>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS2_SignalProcessing/HeTRIR_t_MedTEH'
 * '<S162>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS2_SignalProcessing/SWITCH_UP'
 * '<S163>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS2_SignalProcessing/Turn On Delay Time'
 * '<S164>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS2_SignalProcessing/Turn On Delay Time/EdgeRising'
 * '<S165>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS_SignalProcessing/CANSignalProcessing'
 * '<S166>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS_SignalProcessing/HWIOSignalProcessing'
 * '<S167>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS_SignalProcessing/CANSignalProcessing/Debounce'
 * '<S168>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS_SignalProcessing/CANSignalProcessing/Debounce/HeTRIR_t_MedTEH'
 * '<S169>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS_SignalProcessing/CANSignalProcessing/Debounce/SWITCH_UP'
 * '<S170>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS_SignalProcessing/CANSignalProcessing/Debounce/Turn On Delay Time'
 * '<S171>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS_SignalProcessing/CANSignalProcessing/Debounce/Turn On Delay Time/EdgeRising'
 * '<S172>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS_SignalProcessing/HWIOSignalProcessing/LPF'
 * '<S173>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS_SignalProcessing/HWIOSignalProcessing/LPF/Digital Lowpass Reset Enabled'
 * '<S174>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS_SignalProcessing/HWIOSignalProcessing/LPF/EdgeBi'
 * '<S175>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTOS_SignalProcessing/HWIOSignalProcessing/LPF/SWITCH_UP'
 * '<S176>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTS_INITCounter/HeTRIR_t_MedTEH'
 * '<S177>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTS_INITCounter/Turn On Delay Time'
 * '<S178>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/BTS_SignalProcessing/BTS_INITCounter/Turn On Delay Time/EdgeRising'
 * '<S179>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_T_HV_BatClntTmp2_In_D'
 * '<S180>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_T_HV_BatClntTmp2_Out_D'
 * '<S181>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_T_HV_BatClntTmp_In_D'
 * '<S182>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_T_HV_BatClntTmp_Out_D'
 * '<S183>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_U_BatBotlClnt_LoLvl_D'
 * '<S184>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_BatBotlClntLoLvl_OC_D'
 * '<S185>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_BatBotlClntLoLvl_OC_SD'
 * '<S186>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_BatBotlClnt_LoLvl_SD'
 * '<S187>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_HV_BatClntTmp2_In_FA_D'
 * '<S188>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_HV_BatClntTmp2_In_FA_SD'
 * '<S189>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_HV_BatClntTmp2_In_SD'
 * '<S190>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_HV_BatClntTmp2_Out_FA_D'
 * '<S191>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_HV_BatClntTmp2_Out_FA_SD'
 * '<S192>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_HV_BatClntTmp2_Out_SD'
 * '<S193>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_HV_BatClntTmp_In_FA_D'
 * '<S194>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_HV_BatClntTmp_In_FA_SD'
 * '<S195>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_HV_BatClntTmp_In_SD'
 * '<S196>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_HV_BatClntTmp_Out_FA_D'
 * '<S197>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_HV_BatClntTmp_Out_FA_SD'
 * '<S198>' : 'TRIR_ac/TRIR_MedTEH/BatteryInputs/Overrides/KeTRIR_b_HV_BatClntTmp_Out_SD'
 * '<S199>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_Pct_AirHtrPwrTgt_D'
 * '<S200>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_T_HeatExCool_TmpOut_D'
 * '<S201>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_T_HtmpRadCool_TmpIn_D'
 * '<S202>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_T_HtmpRadCool_TmpOut_D'
 * '<S203>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_T_HtrCorClnt_TmpIn_D'
 * '<S204>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_T_HtrCorClnt_TmpOut_D'
 * '<S205>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_AHP_EnblReq_FA_D'
 * '<S206>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_AHP_EnblReq_FA_SD'
 * '<S207>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_AirHtrPwrTgt_FA_D'
 * '<S208>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_AirHtrPwrTgt_FA_SD'
 * '<S209>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_AirHtrPwrTgt_SD'
 * '<S210>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_D'
 * '<S211>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD'
 * '<S212>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD1'
 * '<S213>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD10'
 * '<S214>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD11'
 * '<S215>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD12'
 * '<S216>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD13'
 * '<S217>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD14'
 * '<S218>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD15'
 * '<S219>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD16'
 * '<S220>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD17'
 * '<S221>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD18'
 * '<S222>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD19'
 * '<S223>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD2'
 * '<S224>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD20'
 * '<S225>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD21'
 * '<S226>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD22'
 * '<S227>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD23'
 * '<S228>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD24'
 * '<S229>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD25'
 * '<S230>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD26'
 * '<S231>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD27'
 * '<S232>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD28'
 * '<S233>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD29'
 * '<S234>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD3'
 * '<S235>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD30'
 * '<S236>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD31'
 * '<S237>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD32'
 * '<S238>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD33'
 * '<S239>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD34'
 * '<S240>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD35'
 * '<S241>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD36'
 * '<S242>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD37'
 * '<S243>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD38'
 * '<S244>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD4'
 * '<S245>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD5'
 * '<S246>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD6'
 * '<S247>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD7'
 * '<S248>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD8'
 * '<S249>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_FA_SD9'
 * '<S250>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HeatExCool_TmpOut_SD'
 * '<S251>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HtmpRadCool_TmpIn_FA_D'
 * '<S252>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HtmpRadCool_TmpIn_FA_SD'
 * '<S253>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HtmpRadCool_TmpIn_SD'
 * '<S254>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HtmpRadCool_TmpOut_FA_D'
 * '<S255>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HtmpRadCool_TmpOut_FA_SD'
 * '<S256>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HtmpRadCool_TmpOut_SD'
 * '<S257>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HtrCorClnt_TmpIn_FA_D'
 * '<S258>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HtrCorClnt_TmpIn_FA_SD'
 * '<S259>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HtrCorClnt_TmpIn_SD'
 * '<S260>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HtrCorClnt_TmpOut_FA_D'
 * '<S261>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HtrCorClnt_TmpOut_FA_SD'
 * '<S262>' : 'TRIR_ac/TRIR_MedTEH/CabinTempInputs/KeTRIR_b_HtrCorClnt_TmpOut_SD'
 * '<S263>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_Cnt_MC_RHSC2_Cooling_D'
 * '<S264>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_P_SDS_HV_PwrAvgRaw_D'
 * '<S265>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_T_SDS_ClntTmpIn_Act_D'
 * '<S266>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_T_SDS_ClntTmpIn_Tgt_D'
 * '<S267>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_MC_RHSC2_Cooling_SD'
 * '<S268>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ActualState_FA_D'
 * '<S269>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ActualState_FA_SD'
 * '<S270>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ActualState_Rcvd_D'
 * '<S271>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ActualState_Rcvd_SD'
 * '<S272>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ActualState_SD'
 * '<S273>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ClntTmpIn_Act_FA_D'
 * '<S274>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ClntTmpIn_Act_FA_SD'
 * '<S275>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_D'
 * '<S276>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_SD'
 * '<S277>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ClntTmpIn_Act_SD'
 * '<S278>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ClntTmpIn_Tgt_FA_D'
 * '<S279>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ClntTmpIn_Tgt_FA_SD'
 * '<S280>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_D'
 * '<S281>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_SD'
 * '<S282>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_ClntTmpIn_Tgt_SD'
 * '<S283>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_HV_PwrAvgRaw_SD'
 * '<S284>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_HV_PwrAvg_FA_D'
 * '<S285>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_HV_PwrAvg_FA_SD'
 * '<S286>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_HV_PwrAvg_Rcvd_D'
 * '<S287>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_HV_PwrAvg_Rcvd_SD'
 * '<S288>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_MaxCoolingReq_FA_D'
 * '<S289>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_MaxCoolingReq_FA_SD'
 * '<S290>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_MaxCoolingReq_Rcvd_D'
 * '<S291>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_MaxCoolingReq_Rcvd_SD'
 * '<S292>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_b_SDS_MaxCoolingReq_SD'
 * '<S293>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_e_SDS_ActualState_D'
 * '<S294>' : 'TRIR_ac/TRIR_MedTEH/EVAInputs/KeTRIR_e_SDS_MaxCoolingReq_D'
 * '<S295>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_Comfort_EnblAct_D'
 * '<S296>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_Comfort_EnblAct_FA_D'
 * '<S297>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_Comfort_EnblAct_FA_SD'
 * '<S298>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_Comfort_EnblAct_SD'
 * '<S299>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_KeepHotColdButtonStatus_D'
 * '<S300>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_KeepHotColdButtonStatus_FA_D'
 * '<S301>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_KeepHotColdButtonStatus_FA_SD'
 * '<S302>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_KeepHotColdButtonStatus_SD'
 * '<S303>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_LoadShed_D'
 * '<S304>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_LoadShed_FA_D'
 * '<S305>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_LoadShed_FA_SD'
 * '<S306>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_LoadShed_SD'
 * '<S307>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_TrunkStatus_D'
 * '<S308>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_TrunkStatus_FA_D'
 * '<S309>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_TrunkStatus_FA_SD'
 * '<S310>' : 'TRIR_ac/TRIR_MedTEH/PostConditioningInputs/KeTRIR_b_TrunkStatus_SD'
 * '<S311>' : 'TRIR_ac/TRIR_MedTEH/PreConditioningInputs/KeTRIR_b_ClimateInfo_FA_D'
 * '<S312>' : 'TRIR_ac/TRIR_MedTEH/PreConditioningInputs/KeTRIR_b_ClimateInfo_FA_SD'
 * '<S313>' : 'TRIR_ac/TRIR_MedTEH/PreConditioningInputs/KeTRIR_b_ClimateInfo_SD'
 * '<S314>' : 'TRIR_ac/TRIR_MedTEH/PreConditioningInputs/KeTRIR_b_HVACECOModeSts_FA_D'
 * '<S315>' : 'TRIR_ac/TRIR_MedTEH/PreConditioningInputs/KeTRIR_b_HVACECOModeSts_FA_SD'
 * '<S316>' : 'TRIR_ac/TRIR_MedTEH/PreConditioningInputs/KeTRIR_b_HVACECOModeSts_SD'
 * '<S317>' : 'TRIR_ac/TRIR_MedTEH/PreConditioningInputs/KeTRIR_b_HVAC_St_SD'
 * '<S318>' : 'TRIR_ac/TRIR_MedTEH/PreConditioningInputs/KeTRIR_b_SCCActv_D'
 * '<S319>' : 'TRIR_ac/TRIR_MedTEH/PreConditioningInputs/KeTRIR_b_SCCActv_SD'
 * '<S320>' : 'TRIR_ac/TRIR_MedTEH/PreConditioningInputs/KeTRIR_e_ClimateInfo_D'
 * '<S321>' : 'TRIR_ac/TRIR_MedTEH/PreConditioningInputs/KeTRIR_e_HVACECOModeSts_D'
 * '<S322>' : 'TRIR_ac/TRIR_MedTEH/PreConditioningInputs/KeTRIR_e_HVAC_St_D'
 * '<S323>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init'
 * '<S324>' : 'TRIR_ac/TRIR_PwrOn/Out_Init'
 * '<S325>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs'
 * '<S326>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Cabin_INITs'
 * '<S327>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs'
 * '<S328>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PostCond_INITs'
 * '<S329>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PreCond_INITs'
 * '<S330>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_In_INIT'
 * '<S331>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT'
 * '<S332>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT1'
 * '<S333>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT10'
 * '<S334>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT11'
 * '<S335>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT12'
 * '<S336>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT13'
 * '<S337>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT14'
 * '<S338>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT15'
 * '<S339>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT16'
 * '<S340>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT17'
 * '<S341>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT18'
 * '<S342>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT2'
 * '<S343>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT3'
 * '<S344>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT4'
 * '<S345>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT5'
 * '<S346>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT6'
 * '<S347>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT7'
 * '<S348>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT8'
 * '<S349>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp2_Out_INIT9'
 * '<S350>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp_In_INIT'
 * '<S351>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_T_HV_BatClntTmp_Out_INIT'
 * '<S352>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_b_HV_BatClntTmp2_In_FA_INIT'
 * '<S353>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_b_HV_BatClntTmp2_Out_FA_INIT'
 * '<S354>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_b_HV_BatClntTmp2_Out_FA_INIT1'
 * '<S355>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_b_HV_BatClntTmp_In_FA_INIT'
 * '<S356>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Battery_INITs/KeTRIR_b_HV_BatClntTmp_Out_FA_INIT'
 * '<S357>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Cabin_INITs/KeTRIR_Pct_AirHtrPwrTgt_INIT'
 * '<S358>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Cabin_INITs/KeTRIR_T_HeatExCool_TmpOut_INIT'
 * '<S359>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Cabin_INITs/KeTRIR_T_HtmpRadCool_TmpIn_INIT'
 * '<S360>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Cabin_INITs/KeTRIR_T_HtmpRadCool_TmpOut_INIT'
 * '<S361>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Cabin_INITs/KeTRIR_T_HtrCorClnt_TmpOut_INIT'
 * '<S362>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Cabin_INITs/KeTRIR_b_AHP_EnblReq_FA_INIT'
 * '<S363>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Cabin_INITs/KeTRIR_b_AHP_EnblReq_INIT'
 * '<S364>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Cabin_INITs/KeTRIR_b_AirHtrPwrTgtFA_INIT'
 * '<S365>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Cabin_INITs/KeTRIR_b_HeatExCool_TmpOut_FA_INIT'
 * '<S366>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Cabin_INITs/KeTRIR_b_HtmpRadCool_TmpIn_FA_INIT'
 * '<S367>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Cabin_INITs/KeTRIR_b_HtmpRadCool_TmpOut_FA_INIT'
 * '<S368>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/Cabin_INITs/KeTRIR_b_HtrCorClnt_TmpOut_FA_INIT'
 * '<S369>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_Cnt_MC_RHSC2_Cooling_INIT'
 * '<S370>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_P_SDS_HV_PwrAvg_INIT'
 * '<S371>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_T_SDS_ClntTmpIn_Act_INIT'
 * '<S372>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_T_SDS_ClntTmpIn_Tgt_INIT'
 * '<S373>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_b_SDS_ActualState_FA_INIT'
 * '<S374>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_b_SDS_ActualState_Rcvd_INIT'
 * '<S375>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_b_SDS_ClntTmpIn_Act_FA_INIT'
 * '<S376>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_b_SDS_ClntTmpIn_Act_Rcvd_INIT'
 * '<S377>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_b_SDS_ClntTmpIn_Tgt_FA_INIT'
 * '<S378>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_b_SDS_ClntTmpIn_Tgt_Rcvd_INIT'
 * '<S379>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_b_SDS_HV_PwrAvg_FA_INIT'
 * '<S380>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_b_SDS_HV_PwrAvg_Rcvd_INIT'
 * '<S381>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_b_SDS_MaxCoolingReq_FA_INIT'
 * '<S382>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_b_SDS_MaxCoolingReq_Rcvd_INIT'
 * '<S383>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_e_SDS_ActualState_INIT'
 * '<S384>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/EVA_INITs/KeTRIR_e_SDS_MaxCoolingReq_INIT'
 * '<S385>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PostCond_INITs/KeTRIR_b_Comfort_EnblAct_FA_INIT'
 * '<S386>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PostCond_INITs/KeTRIR_b_Comfort_EnblAct_INIT'
 * '<S387>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PostCond_INITs/KeTRIR_b_KeepHotColdButtonStatus_FA_INIT'
 * '<S388>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PostCond_INITs/KeTRIR_b_KeepHotColdButtonStatus_INIT'
 * '<S389>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PostCond_INITs/KeTRIR_b_LoadShed_FA_INIT'
 * '<S390>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PostCond_INITs/KeTRIR_b_LoadShed_INIT'
 * '<S391>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PostCond_INITs/KeTRIR_b_TrunkStatus_FA_INIT'
 * '<S392>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PostCond_INITs/KeTRIR_b_TrunkStatus_INIT'
 * '<S393>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PreCond_INITs/KeTRIR_b_ClimateInfo_FA_INIT'
 * '<S394>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PreCond_INITs/KeTRIR_b_HVACECOModeSts_FA_INIT'
 * '<S395>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PreCond_INITs/KeTRIR_b_HVACPrecCondStsFA_Init'
 * '<S396>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PreCond_INITs/KeTRIR_b_HVACPrecCondStsSgnlRcvd_Init'
 * '<S397>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PreCond_INITs/KeTRIR_b_SCCActvSgnlRcvd_Init'
 * '<S398>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PreCond_INITs/KeTRIR_b_SCCActv_Init'
 * '<S399>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PreCond_INITs/KeTRIR_e_ClimateInfo_INIT'
 * '<S400>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PreCond_INITs/KeTRIR_e_HVACECOModeSts_INIT'
 * '<S401>' : 'TRIR_ac/TRIR_PwrOn/IRV_Init/PreCond_INITs/KeTRIR_e_HVACPrecCondSts_Init'
 * '<S402>' : 'TRIR_ac/TRIR_PwrOn/Out_Init/KeTRIR_T_HV_BatClntTmp2_In_INIT'
 * '<S403>' : 'TRIR_ac/TRIR_PwrOn/Out_Init/KeTRIR_T_HV_BatClntTmp2_out_INIT'
 * '<S404>' : 'TRIR_ac/TRIR_PwrOn/Out_Init/KeTRIR_T_HV_BatClntTmp_In_INIT'
 * '<S405>' : 'TRIR_ac/TRIR_PwrOn/Out_Init/KeTRIR_T_HV_BatClntTmp_out_INIT'
 * '<S406>' : 'TRIR_ac/TmotTRIR_T_SDS_ClntTmpIn_Act/TmotTRIR_T_SDS_ClntTmpIn_ActChrt'
 * '<S407>' : 'TRIR_ac/TmotTRIR_b_HVACPrecCondSts/TmotTRIR_b_HVACPrecCondStsChrt'
 * '<S408>' : 'TRIR_ac/TmotTRIR_b_SCCActv/TmotTRIR_b_SCCActvChrt'
 */
#endif                                 /* RTW_HEADER_TRIR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
