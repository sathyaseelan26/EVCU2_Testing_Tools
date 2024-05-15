/*
 * File: BPCR_ac.h
 *
 * Code generated for Simulink model 'BPCR_ac'.
 *
 * Model version                  : 9.246
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:11:26 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BPCR_ac_h_
#define RTW_HEADER_BPCR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef BPCR_ac_COMMON_INCLUDES_
#define BPCR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_BPCR.h"
#endif                                 /* BPCR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S35>/FsftBPCR_b_HV_BatCurrString2Chrt' */
typedef struct
{
    boolean LeBPCR_b_HV_Current_String2_FA_out;
                                  /* '<S35>/FsftBPCR_b_HV_BatCurrString2Chrt' */
}
B_FsftBPCR_b_HV_BatCurrString2Chrt_BPC_T;

/* Block signals (default storage) */
typedef struct tag_B_BPCR_ac_T
{
    uint32 BSW_PWMCntctrTmr_write_IRV; /* '<Root>/Merge_81' */
    uint32 LeBPCR_t_HVBatRealTimeClock_out;
                                /* '<S160>/PokeBPCR_t_HVBatRealTimeClockChrt' */
    uint32 OutportBufferForHVBatRealTimeClock;
                                 /* '<S546>/KeBPCR_t_HVBatRealTimeClock_Init' */
    uint32 OutportBufferForBSW_PWMCntctrTmr;/* '<S546>/Constant Value' */
    float32 CellVoltHighThrsh_write_IRV;/* '<Root>/Merge_118_Irv' */
    float32 CellVoltLowThrsh_write_IRV;/* '<Root>/Merge_115_Irv' */
    float32 HV_BatModVoltMax_write_IRV;/* '<Root>/Merge_143_Irv' */
    float32 HV_BatModVoltMin_write_IRV;/* '<Root>/Merge_152_Irv' */
    float32 CntctrCntrl_PWM_write_IRV; /* '<Root>/Merge_69' */
    float32 HVBatChrgPowET_Init_write_IRV;/* '<Root>/Merge_25_Irv' */
    float32 HVBatChrgPowLT_Init_write_IRV;/* '<Root>/Merge_26_Irv' */
    float32 HVBatChrgPowST_Init_write_IRV;/* '<Root>/Merge_15_Irv' */
    float32 HVBatDschrgPowET_Init_write_IRV;/* '<Root>/Merge_18_Irv' */
    float32 HVBatDschrgPowLT_Init_write_IRV;/* '<Root>/Merge_21_Irv' */
    float32 HVBatDschrgPowST_Init_write_IRV;/* '<Root>/Merge_23_Irv' */
    float32 TracBat_EChrgPowLong_write_IRV;/* '<Root>/Merge_70_Irv' */
    float32 HVBatPackSOC_Init_write_IRV;/* '<Root>/Merge_16_Irv' */
    float32 HV_BatModTempAvg_write_IRV;/* '<Root>/Merge_114' */
    float32 HV_BatModTempMax_write_IRV;/* '<Root>/Merge_154' */
    float32 HV_BatModTempMin_write_IRV;/* '<Root>/Merge_109' */
    float32 LeBPCR_U_OCVMinCellVoltage_out;
                                 /* '<S104>/PokeBPCR_U_OCVMinCellVoltageChrt' */
    float32 LeBPCR_U_OCVMaxCellVoltage_out;
                                 /* '<S103>/PokeBPCR_U_OCVMaxCellVoltageChrt' */
    float32 LeBPCR_U_OCVAveCellVoltage_out;
                                 /* '<S102>/PokeBPCR_U_OCVAveCellVoltageChrt' */
    float32 LeBPCR_U_MinPkVltAlld_out;/* '<S101>/PokeBPCR_U_MinPkVltAlldChrt' */
    float32 LeBPCR_U_MinCellVltAlld_out;
                                    /* '<S100>/PokeBPCR_U_MinCellVltAlldChrt' */
    float32 LeBPCR_U_MaxPkVltAlld_out; /* '<S99>/PokeBPCR_U_MaxPkVltAlldChrt' */
    float32 LeBPCR_U_MaxCellVltAlld_out;
                                     /* '<S98>/PokeBPCR_U_MaxCellVltAlldChrt' */
    float32 LeBPCR_U_HV_InternalVoltage_out;
                                    /* '<S96>/PokeBPCR_U_HV_InternalVoltChrt' */
    float32 LeBPCR_U_HV_BatVolt_out;   /* '<S93>/PokeBPCR_U_HV_BatVoltChrt' */
    float32 LeBPCR_U_HV_BatModVoltMin_out;
                                   /* '<S92>/PokeBPCR_U_HV_BatModVoltMinChrt' */
    float32 LeBPCR_U_HV_BatModVoltMax_out;
                                   /* '<S91>/PokeBPCR_U_HV_BatModVoltMaxChrt' */
    float32 LeBPCR_U_HV_BatModVoltAvg_out;
                                   /* '<S90>/PokeBPCR_U_HV_BatModVoltAvgChrt' */
    float32 LeBPCR_U_CellVoltLowThrsh_out;
                                   /* '<S89>/PokeBPCR_U_CellVoltLowThrshChrt' */
    float32 LeBPCR_U_CellVoltHighThrsh_out;
                                  /* '<S88>/PokeBPCR_U_CellVoltHighThrshChrt' */
    float32 LeBPCR_T_HV_BatModTempMin_out;
                                   /* '<S87>/PokeBPCR_T_HV_BatModTempMinChrt' */
    float32 LeBPCR_T_HV_BatModTempMax_out;
                                   /* '<S86>/PokeBPCR_T_HV_BatModTempMaxChrt' */
    float32 LeBPCR_T_HV_BatModTempAvg_out;
                                   /* '<S85>/PokeBPCR_T_HV_BatModTempAvgChrt' */
    float32 LeBPCR_T_HVBatClgOutletTemp_out;
                                 /* '<S84>/PokeBPCR_T_HVBatClgOutletTempChrt' */
    float32 LeBPCR_Pct_HV_BatPackSOC_out;
                                    /* '<S80>/PokeBPCR_Pct_HV_BatPackSOCChrt' */
    float32 LeBPCR_P_TracBat_EChrgPowLong_out;
                               /* '<S76>/PokeBPCR_P_TracBat_EChrgPowLongChrt' */
    float32 LeBPCR_P_HV_BatDschrgPwrST_out;
                                  /* '<S75>/PokeBPCR_P_HV_BatDschrgPwrSTChrt' */
    float32 LeBPCR_P_HV_BatDschrgPwrLT_out;
                                  /* '<S74>/PokeBPCR_P_HV_BatDschrgPwrLTChrt' */
    float32 LeBPCR_P_HV_BatDschrgPwrET_out;
                                  /* '<S73>/PokeBPCR_P_HV_BatDschrgPwrETChrt' */
    float32 LeBPCR_P_HV_BatChrgPwrST_out;
                                    /* '<S72>/PokeBPCR_P_HV_BatChrgPwrSTChrt' */
    float32 LeBPCR_P_HV_BatChrgPwrLT_out;
                                    /* '<S71>/PokeBPCR_P_HV_BatChrgPwrLTChrt' */
    float32 LeBPCR_P_HV_BatChrgPwrET_out;
                                    /* '<S70>/PokeBPCR_P_HV_BatChrgPwrETChrt' */
    float32 LeBPCR_I_HV_Current_String2_out;
                                  /* '<S67>/PokeBPCR_I_HV_BatCurrString2Chrt' */
    float32 LeBPCR_I_HV_BatCurr_out;   /* '<S66>/PokeBPCR_I_HV_BatCurrChrt' */
    float32 LeBPCR_DC_CntctrCntrl_PWM_out;
                                   /* '<S65>/PokeBPCR_DC_CntctrCntrl_PWMChrt' */
    float32 LeBPCR_t_HVBattCntctrOpnTm_out;
                                 /* '<S162>/PokeBPCR_t_HVBattCntctrOpnTmChrt' */
    float32 LeBPCR_q_RemainingAmpHrCap_out;
                                 /* '<S158>/PokeBPCR_q_RemainingAmpHrCapChrt' */
    float32 LeBPCR_q_FullAmpHrCap_out;/* '<S157>/PokeBPCR_q_FullAmpHrCapChrt' */
    float32 LeBPCR_Z_MinCellDischargeImpedance_out;
                         /* '<S109>/PokeBPCR_Z_MinCellDischargeImpedanceChrt' */
    float32 LeBPCR_Z_MaxCellDischargeImpedance_out;
                         /* '<S107>/PokeBPCR_Z_MaxCellDischargeImpedanceChrt' */
    float32 OutportBufferForVeBPCR_T_HV_BatModTempMa;/* '<S549>/Const1' */
    float32 OutportBufferForVeBPCR_T_HV_BatModTempMi;/* '<S549>/Const2' */
    float32 OutportBufferForVeBPCR_T_HV_BatModTempAv;/* '<S549>/Const3' */
    float32 OutportBufferForVeBPCR_T_HV_BatModTemp_j;/* '<S549>/Const27' */
    float32 OutportBufferForVeBPCR_T_HV_BatModTemp_p;/* '<S549>/Const28' */
    float32 OutportBufferForVeBPCR_P_HV_BatDschrgPwr;/* '<S549>/Const30' */
    float32 OutportBufferForVeBPCR_P_HV_BatChrgPwrLT;/* '<S549>/Const32' */
    float32 OutportBufferForVeBPCR_P_HV_BatDschrgP_f;/* '<S549>/Const34' */
    float32 OutportBufferForVeBPCR_P_HV_BatChrgPwrET;/* '<S549>/Const36' */
    float32 OutportBufferForVeBPCR_P_HV_BatDschrgP_j;/* '<S549>/Const38' */
    float32 OutportBufferForVeBPCR_P_HV_BatChrgPwrST;/* '<S549>/Const40' */
    float32 OutportBufferForVeBPCR_U_CellVoltOVThrsh;/* '<S549>/Const41' */
    float32 OutportBufferForVeBPCR_U_CellVoltUVThrsh;/* '<S549>/Const42' */
    float32 OutportBufferForVeBPCR_Pct_HV_BatPackSOC;/* '<S549>/Const48' */
    float32 OutportBufferForVeBPCR_P_TracBat_EChrgPo;/* '<S549>/Const51' */
    float32 OutportBufferForVeBPCI_U_BatVoltModMinAr;/* '<S549>/Const53' */
    float32 OutportBufferForVeBPCI_U_BatVoltModMaxAr;/* '<S549>/Const54' */
    float32 OutportBufferForVeBPCR_T_HV_BatModTemp_f;/* '<S549>/Const55' */
    float32 OutportBufferForVeBPCR_T_HV_BatModTemp_i;/* '<S549>/Const56' */
    float32 OutportBufferForHVBatDschrgPowET_Init;
                                  /* '<S544>/KeBPCR_P_HV_BatDschrgPwrET_Init' */
    float32 OutportBufferForHVBatDschrgPowLT_Init;
                                  /* '<S544>/KeBPCR_P_HV_BatDschrgPwrLT_Init' */
    float32 OutportBufferForHVBatDschrgPowST_Init;
                                  /* '<S544>/KeBPCR_P_HV_BatDschrgPwrST_Init' */
    float32 OutportBufferForHVBatChrgPowET_Init;
                                    /* '<S544>/KeBPCR_P_HV_BatChrgPwrET_Init' */
    float32 OutportBufferForHVBatChrgPowLT_Init;
                                    /* '<S544>/KeBPCR_P_HV_BatChrgPwrLT_Init' */
    float32 OutportBufferForHVBatChrgPowST_Init;
                                    /* '<S544>/KeBPCR_P_HV_BatChrgPwrST_Init' */
    float32 OutportBufferForHVBatPackSOC_Init;
                                    /* '<S544>/KeBPCR_Pct_HV_BatPackSOC_Init' */
    float32 OutportBufferForFullAmpHrCap_Init;/* '<S544>/KeBPCR_q_FullAmpHrCap_Init' */
    float32 OutportBufferForHVBattCntctrOpnTm;/* '<S546>/KeBPCR_t_HVBattCntctrOpnTm' */
    float32 OutportBufferForPrechrgPnltyTimer;/* '<S546>/KeBPCR_t_PrechrgPnltyTimer' */
    float32 OutportBufferForHVBatSleepTime;/* '<S546>/KeBPCR_t_HVBatSleepTime' */
    float32 OutportBufferForHVBatSOH_Init;/* '<S546>/Constant Value7' */
    float32 OutportBufferForHVBatSOHLow;
                                      /* '<S546>/KeBPCR_Pct_HVBatSOHLow_Init' */
    float32 OutportBufferForCntctrCntrl_PWM;/* '<S546>/KeBPCR_DC_CntctrCntrl_PWM' */
    float32 OutportBufferForTracBat_EChrgPowLong;
                                    /* '<S546>/KeBPCR_P_TracBat_EChrgPowLong' */
    float32 OutportBufferForRemAmpHrCap_Init;/* '<S546>/Constant Value4' */
    float32 OutportBufferForHV_BatCurr;/* '<S547>/KeBPCI_I_HV_BatCurrDflt' */
    float32 OutportBufferForHV_BatVolt;/* '<S547>/KeBPCI_U_HV_BatVoltDflt' */
    float32 OutportBufferForHV_BatModVoltMax;
                                    /* '<S547>/KeBPCI_U_HV_BatModVoltMaxDflt' */
    float32 OutportBufferForHV_BatModVoltMin;
                                    /* '<S547>/KeBPCI_U_HV_BatModVoltMinDflt' */
    float32 OutportBufferForHV_BatModVoltAvg;
                                    /* '<S547>/KeBPCI_U_HV_BatModVoltAvgDflt' */
    float32 OutportBufferForCellVoltLowThrsh;
                                    /* '<S547>/KeBPCI_U_CellVoltLowThrshDflt' */
    float32 OutportBufferForCellVoltHighThrsh;
                                   /* '<S547>/KeBPCI_U_CellVoltHighThrshDflt' */
    float32 OutportBufferForOCVMinCellVoltage;
                                   /* '<S547>/KeBPCI_U_OCVMinCellVoltageDflt' */
    float32 OutportBufferForOCVMaxCellVoltage;
                                   /* '<S547>/KeBPCI_U_OCVMaxCellVoltageDflt' */
    float32 OutportBufferForOCVAvgCellVoltage;
                                   /* '<S547>/KeBPCI_U_OCVAvgCellVoltageDflt' */
    float32 OutportBufferForMaxCellDschargeImpedance;
                            /* '<S547>/KeBPCI_U_MaxCellDschargeImpedanceDflt' */
    float32 OutportBufferForMinCellDschargeImpedance;
                            /* '<S547>/KeBPCI_U_MinCellDschargeImpedanceDflt' */
    float32 OutportBufferForMaxCellVltAlldDflt;
                                      /* '<S547>/KeBPCR_U_MaxCellVltAlldDflt' */
    float32 OutportBufferForMinCellVltAlldDflt;
                                      /* '<S547>/KeBPCR_U_MinCellVltAlldDflt' */
    float32 OutportBufferForMaxPkVltAlldDflt;/* '<S547>/KeBPCR_U_MaxPkVltAlldDflt' */
    float32 OutportBufferForMinPkVltAlldDflt;/* '<S547>/KeBPCR_U_MinPkVltAlldDflt' */
    float32 OutportBufferForHVBatClgOutletTemp;
                                     /* '<S547>/KeBPCR_T_HVBatClgOutlet_Init' */
    float32 OutportBufferForMaxChrgCurrAlwd;/* '<S547>/Constant Value7' */
    float32 OutportBufferForBusBarTempInit;/* '<S547>/KeBPCR_T_BusBarTempInit' */
    float32 OutportBufferForBDUBusBarTempInit;/* '<S547>/KeBPCR_T_BDUBusBarTempInit' */
    float32 OutportBufferForHV_InternalStringVolt1;
                             /* '<S547>/KeBPCR_U_HV_InternalStringVolt1_Init' */
    float32 OutportBufferForHV_InternalStringVolt2;
                             /* '<S547>/KeBPCR_U_HV_InternalStringVolt2_Init' */
    float32 OutportBufferForHV_SeriesVolt;
                                      /* '<S547>/KeBPCR_U_HV_SeriesVolt_Init' */
    float32 OutportBufferForHV_Current_String2;/* '<S547>/SCALAR_BLK' */
    float32 OutportBufferForHV_InternalVoltage;
                            /* '<S547>/KeBPCR_U_BPCM_HV_InternalVoltage_Init' */
    float32 SignalConversion_h;        /* '<S387>/Signal Conversion' */
    sint16 LeBPCR_cnt_HVBatt_ModNumMinTmp_out;
                             /* '<S136>/PokeBPCR_cnt_HVBatt_ModNumMinTmpChrt' */
    sint16 LeBPCR_cnt_HVBatt_ModNumMaxTmp_out;
                             /* '<S135>/PokeBPCR_cnt_HVBatt_ModNumMaxTmpChrt' */
    sint16 OutportBufferForHVBat_NumMaxVlt;/* '<S547>/KeBPCR_Cnt_HVBat_NumMaxVlt' */
    sint16 OutportBufferForHVBat_NumMinVlt;/* '<S547>/KeBPCR_Cnt_HVBat_NumMinVlt' */
    sint16 OutportBufferForHVBat_ModNumMinTmp;
                                    /* '<S547>/KeBPCR_Cnt_HVBat_ModNumMinTmp' */
    sint16 OutportBufferForHVBat_ModNumMaxTmp;
                                    /* '<S547>/KeBPCR_Cnt_HVBat_ModNumMaxTmp' */
    uint8 BSW_PWMTmrRcvd_write_IRV;    /* '<Root>/Merge_66' */
    uint8 LeBPCR_Cnt_BSW_PWMTmrRcvd;
                                  /* '<S159>/PokeBPCR_t_BSW_PWMCntctrTmrChrt' */
    uint8 LeBPCR_e_HVBatRdy;           /* '<S121>/PokeBPCR_b_HVBatRdyChrt' */
    uint8 OutportBufferForHVBatRdy;    /* '<S546>/Constant Value2' */
    uint8 OutportBufferForBSW_PWMTmrRcvd;/* '<S546>/Constant Value3' */
    boolean HV_BatCurrFA_write_IRV;    /* '<Root>/Merge_120_Irv' */
    boolean TracBat_EChrgPowLongV_write_IRV;/* '<Root>/Merge_71_Irv' */
    boolean CellVoltHighThrshFAInit_write_IRV;/* '<Root>/Merge_145_Irv' */
    boolean CellVoltLowThrshFAInit_write_IRV;/* '<Root>/Merge_146_Irv' */
    boolean HV_BatModVoltMaxFA_write_IRV;/* '<Root>/Merge_107_Irv' */
    boolean HV_BatModVoltMinFA_write_IRV;/* '<Root>/Merge_151_Irv' */
    boolean VeBPCR_b_HVBatCntrWeld_ImpdOpnSgnl_Rcvd_;/* '<Root>/Merge_95' */
    boolean HV_BatRdySgnl_Rcvd_write_IRV;/* '<Root>/Merge_62' */
    boolean HVBatChrgPowET_FA_Init_write_IRV;/* '<Root>/Merge_24_Irv' */
    boolean VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_write_;/* '<Root>/Merge_40_Irv' */
    boolean HVBatChrgPowLT_FA_Init_write_IRV;/* '<Root>/Merge_27_Irv' */
    boolean VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_write_;/* '<Root>/Merge_42_Irv' */
    boolean HVBatChrgPowST_FA_Init_write_IRV;/* '<Root>/Merge_14_Irv' */
    boolean VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_write_;/* '<Root>/Merge_30_Irv' */
    boolean HVBatDschrgPowET_FA_Init_write_IRV;/* '<Root>/Merge_13_Irv' */
    boolean VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_writ;/* '<Root>/Merge_35_Irv' */
    boolean HVBatDschrgPowLT_FA_Init_write_IRV;/* '<Root>/Merge_20_Irv' */
    boolean VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_writ;/* '<Root>/Merge_36_Irv' */
    boolean HVBatDschrgPowST_FA_Init_write_IRV;/* '<Root>/Merge_22_Irv' */
    boolean VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_writ;/* '<Root>/Merge_37_Irv' */
    boolean HV_BatModTempAvgFA_write_IRV;/* '<Root>/Merge_113_Irv' */
    boolean VeBPCR_b_HV_BatModTempAvgSgnl_Rcvd_write;/* '<Root>/Merge_186' */
    boolean HV_BatModTempMaxFA_write_IRV;/* '<Root>/Merge_153_Irv' */
    boolean VeBPCR_b_HV_BatModTempMaxSgnl_Rcvd_write;/* '<Root>/Merge_184' */
    boolean HV_BatModTempMinFA_write_IRV;/* '<Root>/Merge_108_Irv' */
    boolean VeBPCR_b_HV_BatModTempMinSgnl_Rcvd_write;/* '<Root>/Merge_185' */
    boolean HVBatPackSOC_FA_Init_write_IRV;/* '<Root>/Merge_17_Irv' */
    boolean VeBPCR_b_HV_BatPackSOCSgnl_Rcvd_write_IR;/* '<Root>/Merge_32_Irv' */
    boolean HVBat_ThrmlRnawy_WarnFA_Init_write_IRV;/* '<Root>/Merge_77' */
    boolean HV_BatCntctrStatFA_write_IRV;/* '<Root>/Merge_85' */
    boolean HEVOnRqBPCM_write_IRV;     /* '<Root>/Merge_61_Irv' */
    boolean HVBatRdy_Init_write_IRV;   /* '<Root>/Merge_78' */
    boolean HV_BatCntctrOpenPending_write_IRV;/* '<Root>/Merge_84' */
    boolean HV_BatCntctrOpenReq_write_IRV;/* '<Root>/Merge_67' */
    boolean MILOnRqBPCM_Init_write_IRV;/* '<Root>/Merge_74' */
    boolean PwrLimON_IRV;              /* '<Root>/Merge_54' */
    boolean LeBPCR_b_HV_BatModTempMinSgnl_Rcvd;
                                   /* '<S87>/PokeBPCR_T_HV_BatModTempMinChrt' */
    boolean LeBPCR_b_HV_BatModTempMaxSgnl_Rcvd;
                                   /* '<S86>/PokeBPCR_T_HV_BatModTempMaxChrt' */
    boolean LeBPCR_b_HV_BatModTempAvgSgnl_Rcvd;
                                   /* '<S85>/PokeBPCR_T_HV_BatModTempAvgChrt' */
    boolean LeBPCR_b_HV_BatPackSOCSgnl_Rcvd;
                                    /* '<S80>/PokeBPCR_Pct_HV_BatPackSOCChrt' */
    boolean LeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd;
                                  /* '<S75>/PokeBPCR_P_HV_BatDschrgPwrSTChrt' */
    boolean LeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd;
                                  /* '<S74>/PokeBPCR_P_HV_BatDschrgPwrLTChrt' */
    boolean LeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd;
                                  /* '<S73>/PokeBPCR_P_HV_BatDschrgPwrETChrt' */
    boolean LeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd;
                                    /* '<S72>/PokeBPCR_P_HV_BatChrgPwrSTChrt' */
    boolean LeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd;
                                    /* '<S71>/PokeBPCR_P_HV_BatChrgPwrLTChrt' */
    boolean LeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd;
                                    /* '<S70>/PokeBPCR_P_HV_BatChrgPwrETChrt' */
    boolean LeBPCR_b_BPCM_LOC_BatClntHtrSgnl_Rcvd;
                               /* '<S141>/PokeBPCR_e_BPCM_LOC_BatClntHtrChrt' */
    boolean LeBPCR_b_BPCM_LOC_BCPSgnl_Rcvd;
                                      /* '<S140>/PokeBPCR_e_BPCM_LOC_BCPChrt' */
    boolean LeBPCR_b_BPCM_LIN_BusOffSgnl_Rcvd;
                                   /* '<S139>/PokeBPCR_e_BPCM_LIN_BusOffChrt' */
    boolean LeBPCR_b_HVBatRdy_out;     /* '<S121>/PokeBPCR_b_HVBatRdyChrt' */
    boolean LeBPCR_b_HVBatRdySgnl_Rcvd;/* '<S121>/PokeBPCR_b_HVBatRdyChrt' */
    boolean OutportBufferForVeBPCR_b_HV_BatCntctrSta;/* '<S549>/Const5' */
    boolean OutportBufferForVeBPCR_b_HV_BatCntctrOpe;/* '<S549>/Const6' */
    boolean OutportBufferForVeBPCR_b_HV_BatCntctrO_m;/* '<S549>/Const7' */
    boolean OutportBufferForVeBPCR_b_HVBatRdy_Out_In;/* '<S549>/Const8' */
    boolean OutportBufferForVeBPCR_b_HEVOnRqBPCM_Deb;/* '<S549>/Const9' */
    boolean OutportBufferForVeBPCR_b_BPCM_OVActv_Out;/* '<S549>/Const10' */
    boolean OutportBufferForVeBPCR_b_BPCM_UVActv_Out;/* '<S549>/Const11' */
    boolean OutportBufferForVeBPCR_b_Flst_HVBatCntrW;/* '<S549>/Const12' */
    boolean OutportBufferForVeBPCR_b_HVBatCntrWeld_I;/* '<S549>/Const13' */
    boolean OutportBufferForVeBPCR_b_BPCM_LIN_BusOff;/* '<S549>/Const14' */
    boolean OutportBufferForVeBPCR_b_BPCM_LIN_BusO_f;/* '<S549>/Const15' */
    boolean OutportBufferForVeBPCR_b_BPCM_LOC_BCP_FA;/* '<S549>/Const16' */
    boolean OutportBufferForVeBPCR_b_BPCM_LOC_BCP_Sg;/* '<S549>/Const17' */
    boolean OutportBufferForVeBPCR_b_BPCM_LOC_BatCln;/* '<S549>/Const18' */
    boolean OutportBufferForVeBPCR_b_BPCM_LOC_BatC_e;/* '<S549>/Const19' */
    boolean OutportBufferForVeBPCR_b_HV_BatDschrgPwr;/* '<S549>/Const20' */
    boolean OutportBufferForVeBPCR_b_HV_BatDschrgP_m;/* '<S549>/Const21' */
    boolean OutportBufferForVeBPCR_b_HV_BatDschrgP_l;/* '<S549>/Const22' */
    boolean OutportBufferForVeBPCR_b_HV_BatChrgPwrET;/* '<S549>/Const23' */
    boolean OutportBufferForVeBPCR_b_HV_BatChrgPwrLT;/* '<S549>/Const24' */
    boolean OutportBufferForVeBPCR_b_HV_BatChrgPwrST;/* '<S549>/Const25' */
    boolean OutportBufferForVeBPCR_b_HV_BatPackSOC_S;/* '<S549>/Const26' */
    boolean OutportBufferForVeBPCR_b_HV_BatDschrg_mg;/* '<S549>/Const29' */
    boolean OutportBufferForVeBPCR_b_HV_BatChrgPwr_h;/* '<S549>/Const31' */
    boolean OutportBufferForVeBPCR_b_HV_BatDschrg_mw;/* '<S549>/Const33' */
    boolean OutportBufferForVeBPCR_b_HV_BatChrgPw_hc;/* '<S549>/Const35' */
    boolean OutportBufferForVeBPCR_b_HV_BatDschrgP_c;/* '<S549>/Const37' */
    boolean OutportBufferForVeBPCR_b_HV_BatChrgPwr_g;/* '<S549>/Const39' */
    boolean OutportBufferForVeBPCR_b_HV_BatCurrSFA_O;/* '<S549>/Const43' */
    boolean OutportBufferForVeBPCR_b_HV_BatPackSOC_j;/* '<S549>/Const44' */
    boolean OutportBufferForVeBPCR_b_HV_BatVoltModMa;/* '<S549>/Const45' */
    boolean OutportBufferForVeBPCR_b_CmdBatPwrLimSFA;/* '<S549>/Const46' */
    boolean OutportBufferForVeBPCR_b_HV_BatMaxModTmp;/* '<S549>/Const47' */
    boolean OutportBufferForVeBPCR_b_MIL_OnRq_BPCM_D;/* '<S549>/Const49' */
    boolean OutportBufferForVeBPCR_b_ThrmlRnawyFlg_O;/* '<S549>/Const50' */
    boolean OutportBufferForVeBPCR_b_BatShtOffFlg_Ou;/* '<S549>/Const52' */
    boolean OutportBufferForVeBPCR_b_PWMBlankAct_wri;/* '<S549>/Const' */
    boolean VariantMerge_For_Variant_Source_Variant;
    boolean OutportBufferForHVBat_DC_CntctrOpn;/* '<S543>/Constant Value' */
    boolean OutportBufferForHVBat_DC_CntctrReq;/* '<S543>/Constant Value1' */
    boolean OutportBufferForDC_IsolSts;/* '<S543>/Constant Value2' */
    boolean OutportBufferForHVBat_DC_CntctrStat_FA;/* '<S543>/Constant Value3' */
    boolean OutportBufferForStkOpnChkCmpl;/* '<S543>/Constant Value4' */
    boolean OutportBufferForDCIsolStsFA;/* '<S543>/Constant Value5' */
    boolean OutportBufferForHVBatDschrgPowET_FA_Init;/* '<S544>/FALSE Constant' */
    boolean OutportBufferForHVBatDschrgPowLT_FA_Init;/* '<S544>/FALSE Constant1' */
    boolean OutportBufferForHVBatDschrgPowST_FA_Init;/* '<S544>/FALSE Constant2' */
    boolean OutportBufferForHVBatChrgPowET_FA_Init;/* '<S544>/FALSE Constant3' */
    boolean OutportBufferForHVBatChrgPowLT_FA_Init;/* '<S544>/FALSE Constant4' */
    boolean OutportBufferForHVBatChrgPowST_FA_Init;/* '<S544>/FALSE Constant5' */
    boolean OutportBufferForHVBatPackSOC_FA_Init;/* '<S544>/FALSE Constant6' */
    boolean OutportBufferForVeBPCR_b_PWMTimerOOR_Ini;/* '<S542>/FALSE Constant2' */
    boolean OutportBufferForHV_BatCntctrStatFA;
                                      /* '<S546>/KeBPCR_b_HV_BatCntctrStatFA' */
    boolean OutportBufferForHV_BatInrlkStatFA;/* '<S546>/KeBPCR_b_HV_BatInrlkStatFA' */
    boolean OutportBufferForHV_BatCntctrOpenReq;
                                     /* '<S546>/KeBPCR_b_HV_BatCntctrOpenReq' */
    boolean OutportBufferForHV_BatCntctrOpenPending;
                                 /* '<S546>/KeBPCR_b_HV_BatCntctrOpenPending' */
    boolean OutportBufferForHVBatPerWUThermal;/* '<S546>/KeBPCR_b_HVBatPerWUThermal' */
    boolean OutportBufferForHVBatPerWakeUp;/* '<S546>/KeBPCR_b_HVBatPerWakeUp' */
    boolean OutportBufferForPwrLimON;  /* '<S546>/KeBPCR_b_PwrLimON' */
    boolean OutportBufferForHVBat_RTC_FA;/* '<S546>/KeBPCR_b_HVBat_RTC_V_Init' */
    boolean OutportBufferForHVBatIntrlkIntrnlStatFA;
                            /* '<S546>/KeBPCR_b_HVBatIntrlkIntrnlStatFA_Init' */
    boolean OutportBufferForHEVOnRqBPCM;/* '<S546>/KeBPCR_b_HEVOnRqBPCM_Init' */
    boolean OutportBufferForHVBatRdy_Init;/* '<S546>/KeBPCR_b_HV_BatRdy_Init' */
    boolean OutportBufferForHV_BatRdySgnl_Rcvd;
                                      /* '<S546>/KeBPCR_b_HV_BatRdySgnl_Rcvd' */
    boolean OutportBufferForCntctrCntrl_PWM_FA;
                                      /* '<S546>/KeBPCR_b_CntctrCntrl_PWM_FA' */
    boolean OutportBufferForTracBat_EChrgPowLongV;
                                   /* '<S546>/KeBPCR_b_TracBat_EChrgPowLongV' */
    boolean OutportBufferForHVBatPerWU12VChrg;/* '<S546>/FALSE Constant1' */
    boolean OutportBufferForChargingStat_BPCMFA;/* '<S546>/FALSE Constant' */
    boolean OutportBufferForRemAmpHrCapFA_Init;/* '<S546>/FALSE Constant2' */
    boolean OutportBufferForMILOnRqBPCM_Init;/* '<S546>/FALSE Constant3' */
    boolean OutportBufferForHVBat_ThrmlRnawy_WarnFA_;/* '<S546>/FALSE Constant4' */
    boolean OutportBufferForBPCM_Comm_Fail_FA_Init;/* '<S546>/FALSE Constant5' */
    boolean OutportBufferForHVTracBatCntctrConfigFA;/* '<S546>/FALSE Constant6' */
    boolean OutportBufferForHVDcChargeTypeStatFA;/* '<S546>/FALSE Constant7' */
    boolean OutportBufferForHV_AuxLoadOffReq;
                                   /* '<S546>/KeBPCR_b_HV_AuxLoadOffReq_Init' */
    boolean OutportBufferForHV_AuxLoadOffReqFA;/* '<S546>/FALSE Constant14' */
    boolean OutportBufferForHV_BatCurrFA;/* '<S547>/FALSE Constant2' */
    boolean OutportBufferForHV_BatVoltFA;/* '<S547>/FALSE Constant1' */
    boolean OutportBufferForHV_BatModVoltMaxFA;/* '<S547>/FALSE Constant3' */
    boolean OutportBufferForHV_BatModVoltMinFA;/* '<S547>/FALSE Constant4' */
    boolean OutportBufferForHV_BatModVoltAvgFA;/* '<S547>/FALSE Constant8' */
    boolean OutportBufferForHV_BatModTempMaxFA;/* '<S547>/FALSE Constant5' */
    boolean OutportBufferForHV_BatModTempMinFA;/* '<S547>/FALSE Constant6' */
    boolean OutportBufferForHV_BatModTempAvgFA;/* '<S547>/FALSE Constant9' */
    boolean OutportBufferForCellVoltLowThrshFAInit;/* '<S547>/FALSE Constant23' */
    boolean OutportBufferForCellVoltHighThrshFAInit;/* '<S547>/FALSE Constant24' */
    boolean OutportBufferForOCVMinCellVoltage_FA;/* '<S547>/FALSE Constant11' */
    boolean OutportBufferForOCVMaxCellVoltage_FA;/* '<S547>/FALSE Constant12' */
    boolean OutportBufferForOCVAvgCellVoltage_FA;/* '<S547>/FALSE Constant13' */
    boolean OutportBufferForMaxCellDschargeImpedan_b;/* '<S547>/FALSE Constant16' */
    boolean OutportBufferForMinCellDschargeImpedan_o;/* '<S547>/FALSE Constant17' */
    boolean OutportBufferForMaxCellVltAlldDflt_FA;/* '<S547>/FALSE Constant19' */
    boolean OutportBufferForMinCellVltAlldDflt_FA;/* '<S547>/FALSE Constant20' */
    boolean OutportBufferForMaxPkVltAlldDflt_FA;/* '<S547>/FALSE Constant21' */
    boolean OutportBufferForMinPkVltAlldDflt_FA;/* '<S547>/FALSE Constant22' */
    boolean OutportBufferForHVBatClgOutletTempFA;
                               /* '<S547>/KeBPCR_b_HVBatClgOutletTempFA_Init' */
    boolean OutportBufferForMaxChgCurrAlwdFA;/* '<S547>/FALSE Constant' */
    boolean OutportBufferForHV_InternalStringVolt1FA;/* '<S547>/FALSE Constant7' */
    boolean OutportBufferForHV_InternalStringVolt2FA;/* '<S547>/FALSE Constant10' */
    boolean OutportBufferForHV_SeriesVoltFA;/* '<S547>/FALSE Constant15' */
    boolean OutportBufferForHV_Current_String2_FA;/* '<S547>/FALSE Constant14' */
    boolean OutportBufferForHV_InternalVoltage_FA;/* '<S547>/FALSE Constant18' */
    boolean VariantMerge_For_Variant_Source_Variant_;
    boolean VariantMerge_For_Variant_Source_Varian_g;
    boolean VariantMerge_For_Variant_Source_Varian_i;
    TeSRAR_e_CommFail LeBPCR_e_BPCM_Comm_Fail_out;
                                    /* '<S138>/PokeBPCR_e_BPCM_Comm_FailChrt' */
    TeSRAR_e_CommFail OutportBufferForBPCM_Comm_Fail_Init;/* '<S546>/Enumerated_Constant2' */
    TeOBCR_e_ChargingStat_BPCM OutportBufferForChargingStat_BPCM;/* '<S546>/Enumerated_Constant1' */
    TeHVTR_e_HV_IsolStat OutportBufferForHV_BatIsolStat;/* '<S546>/KeBPCR_e_HV_BatIsolStat' */
    TeHVTR_e_HV_IntrlkStat OutportBufferForHV_BatInrlkStat;/* '<S546>/KeBPCR_e_HV_BatInrlkStat' */
    TeHVTR_e_HV_BatCntctrStat HV_BatCntctrStat_write_IRV;/* '<Root>/Merge_57' */
    TeHVTR_e_HV_BatCntctrStat LeBPCR_e_HV_BatCntctrStat_out;
                                  /* '<S148>/PokeBPCR_e_HV_BatCntctrStatChrt' */
    TeHVTR_e_HV_BatCntctrStat OutportBufferForVeBPCR_e_HV_BatCntctrSta;/* '<S549>/Const4' */
    TeHVTR_e_HV_BatCntctrStat OutportBufferForHV_BatCntctrStat;/* '<S546>/KeBPCR_e_HV_BatCntctrStat' */
    TeHMIR_e_PwrtrnHV_IsolStat OutportBufferForPwrtrnHV_IsolStat;/* '<S546>/KeBPCR_e_PwrtrnHV_IsolStat' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeBPCR_e_FaultSts_HybBat;/* '<S549>/Const57' */

#if Rte_SysCon_Variant_BPCR_3

    TeDFIB_e_FaultDebounceStatus Merge_d;/* '<S285>/Merge' */

#define B_BPCR_AC_T_VARIANT_EXISTS
#endif

    TeBPCR_e_ThrmlRnawy_WarnSts HVBat_ThrmlRnawy_Warn_Init_write_IRV;/* '<Root>/Merge_76' */
    TeBPCR_e_ThrmlRnawy_WarnSts LeBPCR_e_ThrmlRnawy_Warn_out;
                                   /* '<S155>/PokeBPCR_e_ThrmlRnawy_WarnChrt' */
    TeBPCR_e_ThrmlRnawy_WarnSts OutportBufferForHVBat_ThrmlRnawy_Warn_In;/* '<S546>/Enumerated_Constant' */
    TeBPCR_e_PWMDecoded_CntctrSts OutportBufferForVeBPCR_e_PWMDecodedCntct;/* '<S542>/KeBPCR_e_PWMCntctrSts_Init' */
    TeBPCR_e_PWMDecoded_CntctrSts VariantMerge_For_Variant_Source_Varian_h;
    TeBPCR_e_LOC_BatClntHtr LeBPCR_e_BPCM_LOC_BatClntHtr_out;
                               /* '<S141>/PokeBPCR_e_BPCM_LOC_BatClntHtrChrt' */
    TeBPCR_e_LOC_BatClntHtr OutportBufferForBPCM_LOC_BatClntHtr;
                                /* '<S546>/KeBPCR_e_BPCM_LOC_BatClntHtr_Init' */
    TeBPCR_e_LOC_BCP LeBPCR_e_BPCM_LOC_BCP_out;
                                      /* '<S140>/PokeBPCR_e_BPCM_LOC_BCPChrt' */
    TeBPCR_e_LOC_BCP OutportBufferForBPCM_LOC_BCP;/* '<S546>/KeBPCR_e_BPCM_LOC_BCP_Init' */
    TeBPCR_e_LIN_BusOff LeBPCR_e_BPCM_LIN_BusOff_out;
                                   /* '<S139>/PokeBPCR_e_BPCM_LIN_BusOffChrt' */
    TeBPCR_e_LIN_BusOff OutportBufferForBPCM_LIN_BusOff;
                                    /* '<S546>/KeBPCR_e_BPCM_LIN_BusOff_Init' */
    TeBPCR_e_HV_IsolStat_raw OutportBufferForHV_BatIsolStat_raw;
                             /* '<S546>/KeBPCR_e_HVBatIntrlkIntrnlStat_Init1' */
    TeBPCR_e_HVTracBatCntctrConfig OutportBufferForHVTracBatCntctrConfig;
                              /* '<S546>/KeBPCR_e_HVTracBatCntctrConfig_Init' */
    TeBPCR_e_HVDcChargeTypeStat OutportBufferForHVDcChargeTypeStat;
                                 /* '<S546>/KeBPCR_e_HVDcChargeTypeStat_Init' */
    TeBPCR_e_HVBatIntrlk_InternalStat OutportBufferForHVBatIntrlkIntrnlStat;
                              /* '<S546>/KeBPCR_e_HVBatIntrlkIntrnlStat_Init' */
    TeBPCR_e_HVBatCntrWeld_ImpdOpn HVBatCntrWeld_ImpdOpn_write_IRV;/* '<Root>/Merge_64' */
    TeBPCR_e_HVBatCntrWeld_ImpdOpn OutportBufferForHVBatCntrWeld_ImpdOpn;
                              /* '<S546>/KeBPCR_e_Init_HVBatCntrWeld_ImpdOpn' */
    TeBPCR_e_DCIsolSts OutportBufferForDCIsolSts;/* '<S543>/Enumerated_Constant2' */
    TeBPCR_e_DCCntctrSts LeBPCR_e_HVBat_DC_CntctrStat_out;
                               /* '<S147>/PokeBPCR_e_HVBat_DC_CntctrStatChrt' */
    TeBPCR_e_DCCntctrSts OutportBufferForHVBat_DC_CntctrStat;/* '<S543>/Enumerated_Constant1' */
    TeBPCR_e_BPCMShtDwnRdy OutportBufferForBPCMShtDwnRdy;/* '<S546>/KeBPCR_e_BPCMShtDwnRdy' */
    B_FsftBPCR_b_HV_BatCurrString2Chrt_BPC_T sf_FsftBPCR_b_HV_InternalVoltChrt;
                                    /* '<S46>/FsftBPCR_b_HV_InternalVoltChrt' */
    B_FsftBPCR_b_HV_BatCurrString2Chrt_BPC_T sf_FsftBPCR_b_HV_BatCurrString2Chrt;
                                  /* '<S35>/FsftBPCR_b_HV_BatCurrString2Chrt' */
}
B_BPCR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_BPCR_ac_T
{
    float32 UnitDelay4_DSTATE;         /* '<S388>/Unit Delay4' */
    float32 UnitDelay1_DSTATE;         /* '<S518>/Unit Delay1' */
    float32 UnitDelay_DSTATE_f;        /* '<S518>/Unit Delay' */
    float32 UnitDelay_DSTATE_d;        /* '<S532>/Unit Delay' */
    float32 UnitDelay2_DSTATE;         /* '<S473>/Unit Delay2' */
    float32 UnitDelay_DSTATE_fd;       /* '<S479>/Unit Delay' */

#if Rte_SysCon_Variant_BPCR_3

    float32 UnitDelay_DSTATE_j;        /* '<S284>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    float32 UnitDelay_DSTATE_m0;       /* '<S182>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

    float32 NeBPCR_T_BatModTmp;        /* '<Root>/DSM_1' */
    float32 DeBPCR_P_HV_BatDschrgPwrST;/* '<Root>/DSM_10' */
    float32 DeBPCR_Pct_HV_BatSOC_DS;   /* '<Root>/DSM_4' */
    float32 DeBPCR_P_HV_BatChrgPwrST;  /* '<Root>/DSM_5' */
    float32 DeBPCR_P_HV_BatChrgPwrET;  /* '<Root>/DSM_6' */
    float32 DeBPCR_P_HV_BatChrgPwrLT;  /* '<Root>/DSM_7' */
    float32 DeBPCR_P_HV_BatDschrgPwrLT;/* '<Root>/DSM_8' */
    float32 DeBPCR_P_HV_BatDschrgPwrET;/* '<Root>/DSM_9' */
    uint16 UnitDelay_DSTATE_k;         /* '<S475>/Unit Delay' */
    uint16 UnitDelay_DSTATE_c;         /* '<S474>/Unit Delay' */
    uint16 UnitDelay_DSTATE_m3;        /* '<S458>/Unit Delay' */
    uint16 UnitDelay_DSTATE_o;         /* '<S447>/Unit Delay' */
    uint16 UnitDelay_DSTATE_g;         /* '<S446>/Unit Delay' */
    uint16 UnitDelay_DSTATE_dj;        /* '<S445>/Unit Delay' */
    uint16 UnitDelay_DSTATE_h;         /* '<S444>/Unit Delay' */
    uint16 UnitDelay_DSTATE_gx;        /* '<S404>/Unit Delay' */
    uint16 UnitDelay_DSTATE_e;         /* '<S403>/Unit Delay' */
    uint16 UnitDelay_DSTATE_k0;        /* '<S402>/Unit Delay' */
    uint16 UnitDelay_DSTATE_eo;        /* '<S401>/Unit Delay' */
    uint16 UnitDelay_DSTATE_n;         /* '<S400>/Unit Delay' */
    uint16 UnitDelay_DSTATE_oo;        /* '<S399>/Unit Delay' */

#if Rte_SysCon_Variant_BPCR_5

    uint16 UnitDelay_DSTATE_iz;        /* '<S328>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

    uint16 UnitDelay_DSTATE_l;         /* '<S319>/Unit Delay' */
    uint16 FixPtUnitDelay1_DSTATE;     /* '<S268>/FixPt Unit Delay1' */
    uint16 FixPtUnitDelay1_DSTATE_c;   /* '<S264>/FixPt Unit Delay1' */
    uint16 FixPtUnitDelay1_DSTATE_e;   /* '<S260>/FixPt Unit Delay1' */
    uint16 UnitDelay_DSTATE_fy;        /* '<S343>/Unit Delay' */
    uint16 UnitDelay_DSTATE_md;        /* '<S342>/Unit Delay' */
    uint16 UnitDelay_DSTATE_ib;        /* '<S341>/Unit Delay' */
    uint16 UnitDelay_DSTATE_ok;        /* '<S340>/Unit Delay' */
    uint16 UnitDelay_DSTATE_di;        /* '<S361>/Unit Delay' */
    uint16 UnitDelay_DSTATE_ii;        /* '<S358>/Unit Delay' */
    uint16 UnitDelay_DSTATE_mc;        /* '<S354>/Unit Delay' */
    uint16 UnitDelay_DSTATE_a;         /* '<S350>/Unit Delay' */
    uint16 UnitDelay_DSTATE_io;        /* '<S346>/Unit Delay' */

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    uint16 UnitDelay_DSTATE_ol;        /* '<S189>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    uint16 UnitDelay_DSTATE_fds;       /* '<S188>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

    uint16 NeBPCR_Cnt_PWMCntctrStMFOP;
                                   /* '<Root>/DSM_NeBPCR_Cnt_PWMCntctrStMFOP' */
    uint8 FixPtUnitDelay2_DSTATE;      /* '<S268>/FixPt Unit Delay2' */
    uint8 FixPtUnitDelay2_DSTATE_g;    /* '<S267>/FixPt Unit Delay2' */
    uint8 FixPtUnitDelay2_DSTATE_d;    /* '<S264>/FixPt Unit Delay2' */
    uint8 FixPtUnitDelay2_DSTATE_p;    /* '<S263>/FixPt Unit Delay2' */
    uint8 FixPtUnitDelay2_DSTATE_dd;   /* '<S260>/FixPt Unit Delay2' */
    uint8 FixPtUnitDelay2_DSTATE_a;    /* '<S259>/FixPt Unit Delay2' */
    uint8 UnitDelay_DSTATE_nv;         /* '<S179>/Unit Delay' */
    boolean UnitDelay_DSTATE_m2;       /* '<S500>/Unit Delay' */
    boolean UnitDelay_DSTATE_fh;       /* '<S494>/Unit Delay' */
    boolean UnitDelay_DSTATE_cy;       /* '<S520>/Unit Delay' */
    boolean UnitDelay_DSTATE_k3;       /* '<S499>/Unit Delay' */
    boolean UnitDelay4_DSTATE_k;       /* '<S473>/Unit Delay4' */
    boolean UnitDelay_DSTATE_ku;       /* '<S484>/Unit Delay' */
    boolean UnitDelay_DSTATE_ma;       /* '<S483>/Unit Delay' */
    boolean UnitDelay_DSTATE_hl;       /* '<S478>/Unit Delay' */
    boolean UnitDelay_DSTATE_gb;       /* '<S480>/Unit Delay' */
    boolean UnitDelay_DSTATE_hc;       /* '<S459>/Unit Delay' */
    boolean UnitDelay_DSTATE_oz;       /* '<S451>/Unit Delay' */
    boolean UnitDelay_DSTATE_iy;       /* '<S450>/Unit Delay' */
    boolean UnitDelay_DSTATE_nd;       /* '<S449>/Unit Delay' */
    boolean UnitDelay_DSTATE_fc;       /* '<S448>/Unit Delay' */
    boolean UnitDelay_DSTATE_ce;       /* '<S410>/Unit Delay' */
    boolean UnitDelay_DSTATE_jq;       /* '<S409>/Unit Delay' */
    boolean UnitDelay_DSTATE_nh;       /* '<S408>/Unit Delay' */
    boolean UnitDelay_DSTATE_f4;       /* '<S407>/Unit Delay' */
    boolean UnitDelay_DSTATE_e0;       /* '<S406>/Unit Delay' */
    boolean UnitDelay_DSTATE_jo;       /* '<S405>/Unit Delay' */

#if Rte_SysCon_Variant_BPCR_3

    boolean UnitDelay_DSTATE_kv;       /* '<S287>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_3

    boolean UnitDelay1_DSTATE_a;       /* '<S287>/Unit Delay1' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_3

    boolean UnitDelay_DSTATE_hu;       /* '<S288>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_3

    boolean UnitDelay_DSTATE_j3;       /* '<S286>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_5

    boolean UnitDelay_DSTATE_in;       /* '<S329>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_3

    boolean UnitDelay1_DSTATE_b;       /* '<S242>/Unit Delay1' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

    boolean UnitDelay2_DSTATE_h;       /* '<S242>/Unit Delay2' */
    boolean UnitDelay_DSTATE_h3;       /* '<S304>/Unit Delay' */
    boolean UnitDelay_DSTATE_nt;       /* '<S322>/Unit Delay' */
    boolean UnitDelay_DSTATE_b;        /* '<S320>/Unit Delay' */
    boolean UnitDelay3_DSTATE;         /* '<S249>/Unit Delay3' */
    boolean UnitDelay1_DSTATE_bx;      /* '<S249>/Unit Delay1' */
    boolean FixPtUnitDelay1_DSTATE_j;  /* '<S267>/FixPt Unit Delay1' */
    boolean UnitDelay_DSTATE_ar;       /* '<S266>/Unit Delay' */
    boolean UnitDelay_DSTATE_mg;       /* '<S265>/Unit Delay' */
    boolean UnitDelay3_DSTATE_j;       /* '<S248>/Unit Delay3' */
    boolean UnitDelay1_DSTATE_f;       /* '<S248>/Unit Delay1' */
    boolean FixPtUnitDelay1_DSTATE_l;  /* '<S263>/FixPt Unit Delay1' */
    boolean UnitDelay_DSTATE_ef;       /* '<S262>/Unit Delay' */
    boolean UnitDelay_DSTATE_jl;       /* '<S261>/Unit Delay' */
    boolean UnitDelay3_DSTATE_f;       /* '<S247>/Unit Delay3' */
    boolean UnitDelay1_DSTATE_n;       /* '<S247>/Unit Delay1' */
    boolean FixPtUnitDelay1_DSTATE_m;  /* '<S259>/FixPt Unit Delay1' */
    boolean UnitDelay_DSTATE_f2;       /* '<S258>/Unit Delay' */
    boolean UnitDelay_DSTATE_gq;       /* '<S257>/Unit Delay' */
    boolean UnitDelay_DSTATE_p;        /* '<S370>/Unit Delay' */
    boolean UnitDelay_DSTATE_hg;       /* '<S369>/Unit Delay' */
    boolean UnitDelay_DSTATE_o2;       /* '<S368>/Unit Delay' */
    boolean UnitDelay_DSTATE_i4;       /* '<S367>/Unit Delay' */
    boolean UnitDelay_DSTATE_ex;       /* '<S362>/Unit Delay' */
    boolean UnitDelay_DSTATE_gp;       /* '<S359>/Unit Delay' */
    boolean UnitDelay_DSTATE_au;       /* '<S355>/Unit Delay' */
    boolean UnitDelay_DSTATE_fe;       /* '<S351>/Unit Delay' */
    boolean UnitDelay_DSTATE_mo;       /* '<S347>/Unit Delay' */

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    boolean UnitDelay_DSTATE_gr;       /* '<S238>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    boolean UnitDelay1_DSTATE_d;       /* '<S238>/Unit Delay1' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_3

    boolean UnitDelay2_DSTATE_e;       /* '<S187>/Unit Delay2' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    boolean UnitDelay_DSTATE_fq;       /* '<S234>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    boolean UnitDelay_DSTATE_oh;       /* '<S233>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_3

    boolean UnitDelay_DSTATE_b4;       /* '<S232>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    boolean UnitDelay2_DSTATE_b;       /* '<S182>/Unit Delay2' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    boolean UnitDelay_DSTATE_ie;       /* '<S190>/Unit Delay' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_BPCR_3

    TeBPCR_e_PWMDecoded_CntctrSts UnitDelay1_DSTATE_i;/* '<S180>/Unit Delay1' */

#define DW_BPCR_AC_T_VARIANT_EXISTS
#endif

    TeHVTR_e_HV_BatCntctrStat UnitDelay_DSTATE_dd;/* '<S242>/Unit Delay' */
    uint8 StatusByte_LosCommBECM_A;   /* '<Root>/DS_StatusByte_LosCommBECM_A' */
    uint8 StatusByte_LosCommBECM_A_CANC11;
                               /* '<Root>/DS_StatusByte_LosCommBECM_A_CANC11' */
    boolean NeBPCR_b_HV_BatRdy;        /* '<Root>/DSM_2' */
    boolean NeBPCR_b_HV_BatPackSOC_FA_Ovrd;/* '<Root>/DSM_3' */
    TeDFIB_e_FaultDebounceStatus VeBPCR_e_FaultSts_HybBatPosConConCirPer;
                       /* '<Root>/DS_VeBPCR_e_FaultSts_HybBatPosConConCirPer' */
}
DW_BPCR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const uint32 ConstantValue;        /* '<S546>/Constant Value' */
    const float32 Const1;              /* '<S549>/Const1' */
    const float32 Const2;              /* '<S549>/Const2' */
    const float32 Const3;              /* '<S549>/Const3' */
    const float32 Const27;             /* '<S549>/Const27' */
    const float32 Const28;             /* '<S549>/Const28' */
    const float32 Const30;             /* '<S549>/Const30' */
    const float32 Const32;             /* '<S549>/Const32' */
    const float32 Const34;             /* '<S549>/Const34' */
    const float32 Const36;             /* '<S549>/Const36' */
    const float32 Const38;             /* '<S549>/Const38' */
    const float32 Const40;             /* '<S549>/Const40' */
    const float32 Const41;             /* '<S549>/Const41' */
    const float32 Const42;             /* '<S549>/Const42' */
    const float32 Const48;             /* '<S549>/Const48' */
    const float32 Const51;             /* '<S549>/Const51' */
    const float32 Const53;             /* '<S549>/Const53' */
    const float32 Const54;             /* '<S549>/Const54' */
    const float32 Const55;             /* '<S549>/Const55' */
    const float32 Const56;             /* '<S549>/Const56' */
    const float32 ConstantValue7;      /* '<S546>/Constant Value7' */
    const float32 ConstantValue4;      /* '<S546>/Constant Value4' */
    const float32 ConstantValue7_g;    /* '<S547>/Constant Value7' */
    const uint8 ConstantValue2;        /* '<S546>/Constant Value2' */
    const uint8 ConstantValue3;        /* '<S546>/Constant Value3' */
    const boolean Const5;              /* '<S549>/Const5' */
    const boolean Const6;              /* '<S549>/Const6' */
    const boolean Const7;              /* '<S549>/Const7' */
    const boolean Const8;              /* '<S549>/Const8' */
    const boolean Const9;              /* '<S549>/Const9' */
    const boolean Const10;             /* '<S549>/Const10' */
    const boolean Const11;             /* '<S549>/Const11' */
    const boolean Const12;             /* '<S549>/Const12' */
    const boolean Const13;             /* '<S549>/Const13' */
    const boolean Const14;             /* '<S549>/Const14' */
    const boolean Const15;             /* '<S549>/Const15' */
    const boolean Const16;             /* '<S549>/Const16' */
    const boolean Const17;             /* '<S549>/Const17' */
    const boolean Const18;             /* '<S549>/Const18' */
    const boolean Const19;             /* '<S549>/Const19' */
    const boolean Const20;             /* '<S549>/Const20' */
    const boolean Const21;             /* '<S549>/Const21' */
    const boolean Const22;             /* '<S549>/Const22' */
    const boolean Const23;             /* '<S549>/Const23' */
    const boolean Const24;             /* '<S549>/Const24' */
    const boolean Const25;             /* '<S549>/Const25' */
    const boolean Const26;             /* '<S549>/Const26' */
    const boolean Const29;             /* '<S549>/Const29' */
    const boolean Const31;             /* '<S549>/Const31' */
    const boolean Const33;             /* '<S549>/Const33' */
    const boolean Const35;             /* '<S549>/Const35' */
    const boolean Const37;             /* '<S549>/Const37' */
    const boolean Const39;             /* '<S549>/Const39' */
    const boolean Const43;             /* '<S549>/Const43' */
    const boolean Const44;             /* '<S549>/Const44' */
    const boolean Const45;             /* '<S549>/Const45' */
    const boolean Const46;             /* '<S549>/Const46' */
    const boolean Const47;             /* '<S549>/Const47' */
    const boolean Const49;             /* '<S549>/Const49' */
    const boolean Const50;             /* '<S549>/Const50' */
    const boolean Const52;             /* '<S549>/Const52' */
    const boolean Const;               /* '<S549>/Const' */
    const boolean ConstantValue_o;     /* '<S543>/Constant Value' */
    const boolean ConstantValue1;      /* '<S543>/Constant Value1' */
    const boolean ConstantValue2_p;    /* '<S543>/Constant Value2' */
    const boolean ConstantValue3_k;    /* '<S543>/Constant Value3' */
    const boolean ConstantValue4_e;    /* '<S543>/Constant Value4' */
    const boolean ConstantValue5;      /* '<S543>/Constant Value5' */
    const boolean FALSEConstant;       /* '<S544>/FALSE Constant' */
    const boolean FALSEConstant1;      /* '<S544>/FALSE Constant1' */
    const boolean FALSEConstant2;      /* '<S544>/FALSE Constant2' */
    const boolean FALSEConstant3;      /* '<S544>/FALSE Constant3' */
    const boolean FALSEConstant4;      /* '<S544>/FALSE Constant4' */
    const boolean FALSEConstant5;      /* '<S544>/FALSE Constant5' */
    const boolean FALSEConstant6;      /* '<S544>/FALSE Constant6' */
    const boolean FALSEConstant2_b;    /* '<S542>/FALSE Constant2' */
    const boolean FALSEConstant1_l;    /* '<S546>/FALSE Constant1' */
    const boolean FALSEConstant_n;     /* '<S546>/FALSE Constant' */
    const boolean FALSEConstant2_p;    /* '<S546>/FALSE Constant2' */
    const boolean FALSEConstant3_m;    /* '<S546>/FALSE Constant3' */
    const boolean FALSEConstant4_i;    /* '<S546>/FALSE Constant4' */
    const boolean FALSEConstant5_b;    /* '<S546>/FALSE Constant5' */
    const boolean FALSEConstant6_l;    /* '<S546>/FALSE Constant6' */
    const boolean FALSEConstant7;      /* '<S546>/FALSE Constant7' */
    const boolean FALSEConstant14;     /* '<S546>/FALSE Constant14' */
    const boolean FALSEConstant2_g;    /* '<S547>/FALSE Constant2' */
    const boolean FALSEConstant1_h;    /* '<S547>/FALSE Constant1' */
    const boolean FALSEConstant3_mp;   /* '<S547>/FALSE Constant3' */
    const boolean FALSEConstant4_e;    /* '<S547>/FALSE Constant4' */
    const boolean FALSEConstant8;      /* '<S547>/FALSE Constant8' */
    const boolean FALSEConstant5_a;    /* '<S547>/FALSE Constant5' */
    const boolean FALSEConstant6_k;    /* '<S547>/FALSE Constant6' */
    const boolean FALSEConstant9;      /* '<S547>/FALSE Constant9' */
    const boolean FALSEConstant23;     /* '<S547>/FALSE Constant23' */
    const boolean FALSEConstant24;     /* '<S547>/FALSE Constant24' */
    const boolean FALSEConstant11;     /* '<S547>/FALSE Constant11' */
    const boolean FALSEConstant12;     /* '<S547>/FALSE Constant12' */
    const boolean FALSEConstant13;     /* '<S547>/FALSE Constant13' */
    const boolean FALSEConstant16;     /* '<S547>/FALSE Constant16' */
    const boolean FALSEConstant17;     /* '<S547>/FALSE Constant17' */
    const boolean FALSEConstant19;     /* '<S547>/FALSE Constant19' */
    const boolean FALSEConstant20;     /* '<S547>/FALSE Constant20' */
    const boolean FALSEConstant21;     /* '<S547>/FALSE Constant21' */
    const boolean FALSEConstant22;     /* '<S547>/FALSE Constant22' */
    const boolean FALSEConstant_e;     /* '<S547>/FALSE Constant' */
    const boolean FALSEConstant7_k;    /* '<S547>/FALSE Constant7' */
    const boolean FALSEConstant10;     /* '<S547>/FALSE Constant10' */
    const boolean FALSEConstant15;     /* '<S547>/FALSE Constant15' */
    const boolean FALSEConstant14_i;   /* '<S547>/FALSE Constant14' */
    const boolean FALSEConstant18;     /* '<S547>/FALSE Constant18' */
    const TeSRAR_e_CommFail Constant;  /* '<S575>/Constant' */
    const TeOBCR_e_ChargingStat_BPCM Constant_c;/* '<S574>/Constant' */
    const TeHVTR_e_HV_BatCntctrStat Const4;/* '<S549>/Const4' */
    const TeDFIB_e_FaultDebounceStatus Constant_co;/* '<S642>/Constant' */
    const TeBPCR_e_ThrmlRnawy_WarnSts Constant_h;/* '<S573>/Constant' */
    const TeBPCR_e_DCIsolSts Constant_hi;/* '<S562>/Constant' */
    const TeBPCR_e_DCCntctrSts Constant_i;/* '<S561>/Constant' */
}
ConstB_BPCR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPCR
#include "MemMap.h"

extern VAR(B_BPCR_ac_T, BPCR_VAR_INIT) BPCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPCR
#include "MemMap.h"

extern VAR(DW_BPCR_ac_T, BPCR_VAR_INIT) BPCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPCR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_BPCR
#include "MemMap.h"

extern CONST(ConstB_BPCR_ac_T, BPCR_VAR_INIT) BPCR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_BPCR
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
 * '<Root>' : 'BPCR_ac'
 * '<S1>'   : 'BPCR_ac/BPCR_FastTEF'
 * '<S2>'   : 'BPCR_ac/BPCR_MedTEB'
 * '<S3>'   : 'BPCR_ac/BPCR_MedTEH'
 * '<S4>'   : 'BPCR_ac/BPCR_PwrOff'
 * '<S5>'   : 'BPCR_ac/BPCR_PwrOn'
 * '<S6>'   : 'BPCR_ac/FsftBPCR_I_HV_BatCurr'
 * '<S7>'   : 'BPCR_ac/FsftBPCR_I_MaxChgCurrAlwd'
 * '<S8>'   : 'BPCR_ac/FsftBPCR_P_TracBat_EChrgPowLong'
 * '<S9>'   : 'BPCR_ac/FsftBPCR_R_HV_BatImped'
 * '<S10>'  : 'BPCR_ac/FsftBPCR_U_CellVoltHighThrsh'
 * '<S11>'  : 'BPCR_ac/FsftBPCR_U_CellVoltLowThrsh'
 * '<S12>'  : 'BPCR_ac/FsftBPCR_U_HV_BatModVoltAvg'
 * '<S13>'  : 'BPCR_ac/FsftBPCR_U_HV_BatModVoltMax'
 * '<S14>'  : 'BPCR_ac/FsftBPCR_U_HV_BatModVoltMin'
 * '<S15>'  : 'BPCR_ac/FsftBPCR_U_HV_BatVolt'
 * '<S16>'  : 'BPCR_ac/FsftBPCR_U_MaxCellVltAlld'
 * '<S17>'  : 'BPCR_ac/FsftBPCR_U_MaxPkVltAlld'
 * '<S18>'  : 'BPCR_ac/FsftBPCR_U_MinCellVltAlld'
 * '<S19>'  : 'BPCR_ac/FsftBPCR_U_MinPkVltAlld'
 * '<S20>'  : 'BPCR_ac/FsftBPCR_U_OCVAveCellVoltage'
 * '<S21>'  : 'BPCR_ac/FsftBPCR_U_OCVMaxCellVoltage'
 * '<S22>'  : 'BPCR_ac/FsftBPCR_U_OCVMinCellVoltage'
 * '<S23>'  : 'BPCR_ac/FsftBPCR_Z_MaxCellDischargeImpedance'
 * '<S24>'  : 'BPCR_ac/FsftBPCR_Z_MinCellDischargeImpedance'
 * '<S25>'  : 'BPCR_ac/FsftBPCR_b_BPCM_LIN_BusOff'
 * '<S26>'  : 'BPCR_ac/FsftBPCR_b_BPCM_LOC_BCP'
 * '<S27>'  : 'BPCR_ac/FsftBPCR_b_BPCM_LOC_BatClntHtr'
 * '<S28>'  : 'BPCR_ac/FsftBPCR_b_HVBatCntrWeld_ImpdOpn'
 * '<S29>'  : 'BPCR_ac/FsftBPCR_b_HVBatRdy'
 * '<S30>'  : 'BPCR_ac/FsftBPCR_b_HVBat_DC_CntctrStat'
 * '<S31>'  : 'BPCR_ac/FsftBPCR_b_HV_AuxLoadOffReq'
 * '<S32>'  : 'BPCR_ac/FsftBPCR_b_HV_BatChrgPwrET'
 * '<S33>'  : 'BPCR_ac/FsftBPCR_b_HV_BatChrgPwrLT'
 * '<S34>'  : 'BPCR_ac/FsftBPCR_b_HV_BatChrgPwrST'
 * '<S35>'  : 'BPCR_ac/FsftBPCR_b_HV_BatCurrString2'
 * '<S36>'  : 'BPCR_ac/FsftBPCR_b_HV_BatDschrgPwrET'
 * '<S37>'  : 'BPCR_ac/FsftBPCR_b_HV_BatDschrgPwrLT'
 * '<S38>'  : 'BPCR_ac/FsftBPCR_b_HV_BatDschrgPwrST'
 * '<S39>'  : 'BPCR_ac/FsftBPCR_b_HV_BatModTempAvg'
 * '<S40>'  : 'BPCR_ac/FsftBPCR_b_HV_BatModTempMax'
 * '<S41>'  : 'BPCR_ac/FsftBPCR_b_HV_BatModTempMin'
 * '<S42>'  : 'BPCR_ac/FsftBPCR_b_HV_BatPackSOC'
 * '<S43>'  : 'BPCR_ac/FsftBPCR_b_HV_DcChargeTypeStat'
 * '<S44>'  : 'BPCR_ac/FsftBPCR_b_HV_InternalStringVolt1'
 * '<S45>'  : 'BPCR_ac/FsftBPCR_b_HV_InternalStringVolt2'
 * '<S46>'  : 'BPCR_ac/FsftBPCR_b_HV_InternalVolt'
 * '<S47>'  : 'BPCR_ac/FsftBPCR_b_HV_SeriesVolt'
 * '<S48>'  : 'BPCR_ac/FsftBPCR_b_HV_TracBatCntctrConfig'
 * '<S49>'  : 'BPCR_ac/FsftBPCR_b_ThrmlRnawy_Warn'
 * '<S50>'  : 'BPCR_ac/FsftBPCR_cnt_HVBatt_ModNumMaxTmp'
 * '<S51>'  : 'BPCR_ac/FsftBPCR_cnt_HVBatt_ModNumMinTmp'
 * '<S52>'  : 'BPCR_ac/FsftBPCR_e_BPCM_Comm_Fail'
 * '<S53>'  : 'BPCR_ac/FsftBPCR_e_ChargingStat_BPCM'
 * '<S54>'  : 'BPCR_ac/FsftBPCR_e_DCIsolSts'
 * '<S55>'  : 'BPCR_ac/FsftBPCR_e_HVBatIntrlkIntrnlStat'
 * '<S56>'  : 'BPCR_ac/FsftBPCR_e_HV_BatCntctrStat'
 * '<S57>'  : 'BPCR_ac/FsftBPCR_e_HV_BatInrlkStat'
 * '<S58>'  : 'BPCR_ac/FsftBPCR_e_HV_BatIsolStat'
 * '<S59>'  : 'BPCR_ac/FsftBPCR_q_FullAmpHrCap'
 * '<S60>'  : 'BPCR_ac/FsftBPCR_q_RemainingAmpHrCap'
 * '<S61>'  : 'BPCR_ac/FsftBPCR_t_HVBatRealTimeClock'
 * '<S62>'  : 'BPCR_ac/FsftBPCR_t_HVBattCntctrOpnTm'
 * '<S63>'  : 'BPCR_ac/PokeBPCR_Cnt_HVBatt_NumMaxVlt'
 * '<S64>'  : 'BPCR_ac/PokeBPCR_Cnt_HVBatt_NumMinVlt'
 * '<S65>'  : 'BPCR_ac/PokeBPCR_DC_CntctrCntrl_PWM'
 * '<S66>'  : 'BPCR_ac/PokeBPCR_I_HV_BatCurr'
 * '<S67>'  : 'BPCR_ac/PokeBPCR_I_HV_BatCurrString2'
 * '<S68>'  : 'BPCR_ac/PokeBPCR_I_MaxChgCurrAlwd'
 * '<S69>'  : 'BPCR_ac/PokeBPCR_I_MaxDisChgCurrAlwd'
 * '<S70>'  : 'BPCR_ac/PokeBPCR_P_HV_BatChrgPwrET'
 * '<S71>'  : 'BPCR_ac/PokeBPCR_P_HV_BatChrgPwrLT'
 * '<S72>'  : 'BPCR_ac/PokeBPCR_P_HV_BatChrgPwrST'
 * '<S73>'  : 'BPCR_ac/PokeBPCR_P_HV_BatDschrgPwrET'
 * '<S74>'  : 'BPCR_ac/PokeBPCR_P_HV_BatDschrgPwrLT'
 * '<S75>'  : 'BPCR_ac/PokeBPCR_P_HV_BatDschrgPwrST'
 * '<S76>'  : 'BPCR_ac/PokeBPCR_P_TracBat_EChrgPowLong'
 * '<S77>'  : 'BPCR_ac/PokeBPCR_Pct_ContctCntrlVerif'
 * '<S78>'  : 'BPCR_ac/PokeBPCR_Pct_HVBatSOH'
 * '<S79>'  : 'BPCR_ac/PokeBPCR_Pct_HVBatSOHLow'
 * '<S80>'  : 'BPCR_ac/PokeBPCR_Pct_HV_BatPackSOC'
 * '<S81>'  : 'BPCR_ac/PokeBPCR_R_HV_BatImped'
 * '<S82>'  : 'BPCR_ac/PokeBPCR_T_BDUBusBarTemp'
 * '<S83>'  : 'BPCR_ac/PokeBPCR_T_BusBarTemp'
 * '<S84>'  : 'BPCR_ac/PokeBPCR_T_HVBatClgOutletTemp'
 * '<S85>'  : 'BPCR_ac/PokeBPCR_T_HV_BatModTempAvg'
 * '<S86>'  : 'BPCR_ac/PokeBPCR_T_HV_BatModTempMax'
 * '<S87>'  : 'BPCR_ac/PokeBPCR_T_HV_BatModTempMin'
 * '<S88>'  : 'BPCR_ac/PokeBPCR_U_CellVoltHighThrsh'
 * '<S89>'  : 'BPCR_ac/PokeBPCR_U_CellVoltLowThrsh'
 * '<S90>'  : 'BPCR_ac/PokeBPCR_U_HV_BatModVoltAvg'
 * '<S91>'  : 'BPCR_ac/PokeBPCR_U_HV_BatModVoltMax'
 * '<S92>'  : 'BPCR_ac/PokeBPCR_U_HV_BatModVoltMin'
 * '<S93>'  : 'BPCR_ac/PokeBPCR_U_HV_BatVolt'
 * '<S94>'  : 'BPCR_ac/PokeBPCR_U_HV_InternalStringVolt1'
 * '<S95>'  : 'BPCR_ac/PokeBPCR_U_HV_InternalStringVolt2'
 * '<S96>'  : 'BPCR_ac/PokeBPCR_U_HV_InternalVolt'
 * '<S97>'  : 'BPCR_ac/PokeBPCR_U_HV_SeriesVolt'
 * '<S98>'  : 'BPCR_ac/PokeBPCR_U_MaxCellVltAlld'
 * '<S99>'  : 'BPCR_ac/PokeBPCR_U_MaxPkVltAlld'
 * '<S100>' : 'BPCR_ac/PokeBPCR_U_MinCellVltAlld'
 * '<S101>' : 'BPCR_ac/PokeBPCR_U_MinPkVltAlld'
 * '<S102>' : 'BPCR_ac/PokeBPCR_U_OCVAveCellVoltage'
 * '<S103>' : 'BPCR_ac/PokeBPCR_U_OCVMaxCellVoltage'
 * '<S104>' : 'BPCR_ac/PokeBPCR_U_OCVMinCellVoltage'
 * '<S105>' : 'BPCR_ac/PokeBPCR_U_OCVPckVoltage'
 * '<S106>' : 'BPCR_ac/PokeBPCR_Z_MaxCellChargeImpedance'
 * '<S107>' : 'BPCR_ac/PokeBPCR_Z_MaxCellDischargeImpedance'
 * '<S108>' : 'BPCR_ac/PokeBPCR_Z_MinCellChargeImpedance'
 * '<S109>' : 'BPCR_ac/PokeBPCR_Z_MinCellDischargeImpedance'
 * '<S110>' : 'BPCR_ac/PokeBPCR_b_BalMd'
 * '<S111>' : 'BPCR_ac/PokeBPCR_b_CellVoltImbalance'
 * '<S112>' : 'BPCR_ac/PokeBPCR_b_ChrgFail_On_BPCM'
 * '<S113>' : 'BPCR_ac/PokeBPCR_b_DC_Isolation_Sts'
 * '<S114>' : 'BPCR_ac/PokeBPCR_b_EVSer_On_BPCM'
 * '<S115>' : 'BPCR_ac/PokeBPCR_b_HBCNC_LV_LO'
 * '<S116>' : 'BPCR_ac/PokeBPCR_b_HEVOnRqBPCM'
 * '<S117>' : 'BPCR_ac/PokeBPCR_b_HVBatPerWU12VChrg'
 * '<S118>' : 'BPCR_ac/PokeBPCR_b_HVBatPerWUBal'
 * '<S119>' : 'BPCR_ac/PokeBPCR_b_HVBatPerWUCharge'
 * '<S120>' : 'BPCR_ac/PokeBPCR_b_HVBatPerWUThermal'
 * '<S121>' : 'BPCR_ac/PokeBPCR_b_HVBatRdy'
 * '<S122>' : 'BPCR_ac/PokeBPCR_b_HVBatRdyForChrg'
 * '<S123>' : 'BPCR_ac/PokeBPCR_b_HVBat_DC_CntctrOpn'
 * '<S124>' : 'BPCR_ac/PokeBPCR_b_HVBat_DC_CntctrReq'
 * '<S125>' : 'BPCR_ac/PokeBPCR_b_HVBat_Real_Time_Clock_V'
 * '<S126>' : 'BPCR_ac/PokeBPCR_b_HVBattPerWakeUp'
 * '<S127>' : 'BPCR_ac/PokeBPCR_b_HV_AuxLoadOffReq'
 * '<S128>' : 'BPCR_ac/PokeBPCR_b_HV_BatCntctrOpenPending'
 * '<S129>' : 'BPCR_ac/PokeBPCR_b_HV_BatCntctrOpenReq'
 * '<S130>' : 'BPCR_ac/PokeBPCR_b_HV_BatDriveRdy'
 * '<S131>' : 'BPCR_ac/PokeBPCR_b_MIL_OnRq_BPCM'
 * '<S132>' : 'BPCR_ac/PokeBPCR_b_PwrLimON'
 * '<S133>' : 'BPCR_ac/PokeBPCR_b_StkOpnChkCmpl'
 * '<S134>' : 'BPCR_ac/PokeBPCR_cnt_BatteryModel'
 * '<S135>' : 'BPCR_ac/PokeBPCR_cnt_HVBatt_ModNumMaxTmp'
 * '<S136>' : 'BPCR_ac/PokeBPCR_cnt_HVBatt_ModNumMinTmp'
 * '<S137>' : 'BPCR_ac/PokeBPCR_e_BPCMShtDwnRdy'
 * '<S138>' : 'BPCR_ac/PokeBPCR_e_BPCM_Comm_Fail'
 * '<S139>' : 'BPCR_ac/PokeBPCR_e_BPCM_LIN_BusOff'
 * '<S140>' : 'BPCR_ac/PokeBPCR_e_BPCM_LOC_BCP'
 * '<S141>' : 'BPCR_ac/PokeBPCR_e_BPCM_LOC_BatClntHtr'
 * '<S142>' : 'BPCR_ac/PokeBPCR_e_ChargingStat_BPCM'
 * '<S143>' : 'BPCR_ac/PokeBPCR_e_DCIsolSts'
 * '<S144>' : 'BPCR_ac/PokeBPCR_e_HVBatCntrWeld_ImpdOpn'
 * '<S145>' : 'BPCR_ac/PokeBPCR_e_HVBatIntrlkIntrnlStat'
 * '<S146>' : 'BPCR_ac/PokeBPCR_e_HVBatPerWU_Rsn'
 * '<S147>' : 'BPCR_ac/PokeBPCR_e_HVBat_DC_CntctrStat'
 * '<S148>' : 'BPCR_ac/PokeBPCR_e_HV_BatCntctrStat'
 * '<S149>' : 'BPCR_ac/PokeBPCR_e_HV_BatInrlkStat'
 * '<S150>' : 'BPCR_ac/PokeBPCR_e_HV_BatIsolStat'
 * '<S151>' : 'BPCR_ac/PokeBPCR_e_HV_DcChargeTypeStat'
 * '<S152>' : 'BPCR_ac/PokeBPCR_e_HV_TracBatCntctrConfig'
 * '<S153>' : 'BPCR_ac/PokeBPCR_e_PowerModeState'
 * '<S154>' : 'BPCR_ac/PokeBPCR_e_PwrtrnHV_IsolStat'
 * '<S155>' : 'BPCR_ac/PokeBPCR_e_ThrmlRnawy_Warn'
 * '<S156>' : 'BPCR_ac/PokeBPCR_i_DC_Isolation_Sts_M182'
 * '<S157>' : 'BPCR_ac/PokeBPCR_q_FullAmpHrCap'
 * '<S158>' : 'BPCR_ac/PokeBPCR_q_RemainingAmpHrCap'
 * '<S159>' : 'BPCR_ac/PokeBPCR_t_BSW_PWMCntctrTmr'
 * '<S160>' : 'BPCR_ac/PokeBPCR_t_HVBatRealTimeClock'
 * '<S161>' : 'BPCR_ac/PokeBPCR_t_HVBatSleepTime'
 * '<S162>' : 'BPCR_ac/PokeBPCR_t_HVBattCntctrOpnTm'
 * '<S163>' : 'BPCR_ac/PokeBPCR_t_PrechrgPnltyTimer'
 * '<S164>' : 'BPCR_ac/TmotBPCR_b_HVBatCntrWeld_ImpdOpn'
 * '<S165>' : 'BPCR_ac/TmotBPCR_b_HVBatRdy'
 * '<S166>' : 'BPCR_ac/TmotBPCR_b_HV_BatChrgPwrET'
 * '<S167>' : 'BPCR_ac/TmotBPCR_b_HV_BatChrgPwrLT'
 * '<S168>' : 'BPCR_ac/TmotBPCR_b_HV_BatChrgPwrST'
 * '<S169>' : 'BPCR_ac/TmotBPCR_b_HV_BatDschrgPwrET'
 * '<S170>' : 'BPCR_ac/TmotBPCR_b_HV_BatDschrgPwrLT'
 * '<S171>' : 'BPCR_ac/TmotBPCR_b_HV_BatDschrgPwrST'
 * '<S172>' : 'BPCR_ac/TmotBPCR_b_HV_BatModTempAvg'
 * '<S173>' : 'BPCR_ac/TmotBPCR_b_HV_BatModTempMax'
 * '<S174>' : 'BPCR_ac/TmotBPCR_b_HV_BatModTempMin'
 * '<S175>' : 'BPCR_ac/TmotBPCR_b_HV_BatPackSOC'
 * '<S176>' : 'BPCR_ac/TmotBPCR_e_BPCM_LIN_BusOff'
 * '<S177>' : 'BPCR_ac/TmotBPCR_e_BPCM_LOC_BCP'
 * '<S178>' : 'BPCR_ac/TmotBPCR_e_BPCM_LOC_BatClntHtr'
 * '<S179>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM'
 * '<S180>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem'
 * '<S181>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem1'
 * '<S182>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/BPCC_PWMBlanking'
 * '<S183>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr'
 * '<S184>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1'
 * '<S185>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/Enum Set Block'
 * '<S186>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/KeBPCR_b_UseBSWPWMTimer'
 * '<S187>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/Subsystem'
 * '<S188>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/BPCC_PWMBlanking/Count Down  Reset Enabled'
 * '<S189>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/BPCC_PWMBlanking/Count Down  Reset Enabled1'
 * '<S190>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/BPCC_PWMBlanking/EdgeFalling'
 * '<S191>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/BPCC_PWMBlanking/KeBPCR_Cnt_PWMBlnkngDeactTime'
 * '<S192>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/BPCC_PWMBlanking/KeBPCR_Cnt_PWMBlnkngPeriod'
 * '<S193>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/BPCC_PWMBlanking/KeBPCR_DC_PWMCmdThrshForBlnkng'
 * '<S194>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/ClosedInterval'
 * '<S195>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/ClosedInterval1'
 * '<S196>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/ClosedInterval2'
 * '<S197>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/ClosedInterval3'
 * '<S198>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/ClosedStatus'
 * '<S199>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/Default'
 * '<S200>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/KeBPCR_t_PWM_TLow1Max'
 * '<S201>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/KeBPCR_t_PWM_TLow1Min'
 * '<S202>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/KeBPCR_t_PWM_TLow2Max'
 * '<S203>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/KeBPCR_t_PWM_TLow2Min'
 * '<S204>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/KeBPCR_t_PWM_TLow3Max'
 * '<S205>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/KeBPCR_t_PWM_TLow3Min'
 * '<S206>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/KeBPCR_t_PWM_TLow4Max'
 * '<S207>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/KeBPCR_t_PWM_TLow4Min'
 * '<S208>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/Ok2Close'
 * '<S209>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/OpenStatus'
 * '<S210>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/OpnReq'
 * '<S211>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/ClosedStatus/KeBPCR_e_PWMDecodedCntctrSts3'
 * '<S212>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/Ok2Close/KeBPCR_e_PWMDecodedCntctrSts4'
 * '<S213>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/OpenStatus/KeBPCR_e_PWMDecodedCntctrSts2'
 * '<S214>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr/OpnReq/KeBPCR_e_PWMDecodedCntctrSts1'
 * '<S215>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/ClosedStatus'
 * '<S216>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/Default'
 * '<S217>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/KeBPCR_Cnt_PWM_TLow1Max'
 * '<S218>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/KeBPCR_Cnt_PWM_TLow1Min'
 * '<S219>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/KeBPCR_Cnt_PWM_TLow2Max'
 * '<S220>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/KeBPCR_Cnt_PWM_TLow2Min'
 * '<S221>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/KeBPCR_Cnt_PWM_TLow3Max'
 * '<S222>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/KeBPCR_Cnt_PWM_TLow3Min'
 * '<S223>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/KeBPCR_Cnt_PWM_TLow4Max'
 * '<S224>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/KeBPCR_Cnt_PWM_TLow4Min'
 * '<S225>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/Ok2Close'
 * '<S226>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/OpenStatus'
 * '<S227>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/OpnReq'
 * '<S228>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/ClosedStatus/KeBPCR_e_PWMDecodedCntctrSts3'
 * '<S229>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/Ok2Close/KeBPCR_e_PWMDecodedCntctrSts4'
 * '<S230>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/OpenStatus/KeBPCR_e_PWMDecodedCntctrSts2'
 * '<S231>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/DecodeTmr1/OpnReq/KeBPCR_e_PWMDecodedCntctrSts1'
 * '<S232>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/Subsystem/EdgeFalling'
 * '<S233>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/Subsystem/EdgeFalling2'
 * '<S234>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/Subsystem/EdgeRising'
 * '<S235>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/Subsystem/KeBPCR_DC_PWMDecoded_DutyCycle'
 * '<S236>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/Subsystem/KeBPCR_t_DecodePWM_Tmr'
 * '<S237>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/Subsystem/Stop Watch Reset Enabled'
 * '<S238>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem/Subsystem/Unit Delay Reset Enabled1'
 * '<S239>' : 'BPCR_ac/BPCR_FastTEF/BPCC_DecodePWM/Subsystem1/KeBPCR_e_PWMCntctrSts_Init'
 * '<S240>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy'
 * '<S241>' : 'BPCR_ac/BPCR_MedTEB/BPCD'
 * '<S242>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb'
 * '<S243>' : 'BPCR_ac/BPCR_MedTEB/BatShtOff'
 * '<S244>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess'
 * '<S245>' : 'BPCR_ac/BPCR_MedTEB/Process_12p5ms_InputTask'
 * '<S246>' : 'BPCR_ac/BPCR_MedTEB/ThrmlRnawyWarn_Arb'
 * '<S247>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce1'
 * '<S248>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce2'
 * '<S249>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce3'
 * '<S250>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/KeBPCR_Cnt_HVBatRdyDebounce'
 * '<S251>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/KeBPCR_Cnt_OVDebounce'
 * '<S252>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/KeBPCR_Cnt_UVDebounce'
 * '<S253>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/KeBPCR_b_CheckOV'
 * '<S254>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/KeBPCR_b_CheckUV'
 * '<S255>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/KeBPCR_b_HVBatCntctr_OpnPndgOvrd'
 * '<S256>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/KeBPCR_b_HVBatCntctr_OpnPndgVal'
 * '<S257>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce1/EdgeBi'
 * '<S258>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce1/Signal Latch On With Reset'
 * '<S259>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce1/Unit Delay External IC'
 * '<S260>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce1/Unit Delay Reset Enabled'
 * '<S261>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce2/EdgeBi'
 * '<S262>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce2/Signal Latch On With Reset'
 * '<S263>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce2/Unit Delay External IC'
 * '<S264>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce2/Unit Delay Reset Enabled'
 * '<S265>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce3/EdgeBi'
 * '<S266>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce3/Signal Latch On With Reset'
 * '<S267>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce3/Unit Delay External IC'
 * '<S268>' : 'BPCR_ac/BPCR_MedTEB/BPCC_HVBatRdy/Debounce3/Unit Delay Reset Enabled'
 * '<S269>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem'
 * '<S270>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/Enumerated_Constant'
 * '<S271>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/Enumerated_Constant1'
 * '<S272>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/KeBPCR_Cnt_PWMdetSmpLim'
 * '<S273>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/KeBPCR_Cnt_PWMdetectFailLim'
 * '<S274>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/KeBPCR_DC_PWMOffset'
 * '<S275>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/KeBPCR_DC_PWMtollerance'
 * '<S276>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/KeBPCR_b_EnblP0ADA_Diag'
 * '<S277>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/KeBPCR_b_EnblPWMCntctrCtrlDTC'
 * '<S278>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/KeBPCR_b_HybBatPosConConCirPer_LtchEnbl'
 * '<S279>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/KeBPCR_b_UseOORforDTC'
 * '<S280>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/KeBPCR_t_PWMmaxWaitTime'
 * '<S281>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/KeBPCR_t_dtRaster'
 * '<S282>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/ResetCountsFOMs'
 * '<S283>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/Subsystem'
 * '<S284>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/Turn On Delay Time'
 * '<S285>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2'
 * '<S286>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/Turn On Delay Time/EdgeRising'
 * '<S287>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/BaseXofY'
 * '<S288>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/EdgeFalling1'
 * '<S289>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/Enumerated Constant16'
 * '<S290>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/Fail'
 * '<S291>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/Init'
 * '<S292>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/Pass'
 * '<S293>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/UpdateMFOP'
 * '<S294>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S295>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S296>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/Fail/Enumerated Constant16'
 * '<S297>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/Init/Enumerated Constant16'
 * '<S298>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/Pass/Enumerated Constant16'
 * '<S299>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S300>' : 'BPCR_ac/BPCR_MedTEB/BPCD/Subsystem/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S301>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem'
 * '<S302>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem1'
 * '<S303>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem2'
 * '<S304>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem3'
 * '<S305>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/KeBPCR_b_BPCMRedundantCAN'
 * '<S306>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/KeBPCR_b_BatCntctrOpnRq_Ovrd'
 * '<S307>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/KeBPCR_b_BatCntctrOpnRq_Val'
 * '<S308>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/KeBPCR_b_UseCANCntctrSts'
 * '<S309>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/getFaultActiveAndTestCompleted'
 * '<S310>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/getFaultActiveAndTestCompleted1'
 * '<S311>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem1/Enumerated_Constant1'
 * '<S312>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem1/Enumerated_Constant3'
 * '<S313>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem1/Enumerated_Constant4'
 * '<S314>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem1/Enumerated_Constant6'
 * '<S315>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem1/Enumerated_Constant7'
 * '<S316>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem1/IfThenElseifElse'
 * '<S317>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem2/KeBPCR_b_BatCntctrOpnRq_Cal'
 * '<S318>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem2/KeBPCR_b_BatCntctrStat_FA_Cal'
 * '<S319>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem3/Counter Reset  Enabled '
 * '<S320>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem3/EdgeFalling'
 * '<S321>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem3/KtBPCR_Cnt_HVCntctrOpReqCntr'
 * '<S322>' : 'BPCR_ac/BPCR_MedTEB/BatCntctr_Arb/If Action Subsystem3/Signal Latch On With Reset'
 * '<S323>' : 'BPCR_ac/BPCR_MedTEB/BatShtOff/If Action Subsystem'
 * '<S324>' : 'BPCR_ac/BPCR_MedTEB/BatShtOff/If Action Subsystem/Enumerated_Constant'
 * '<S325>' : 'BPCR_ac/BPCR_MedTEB/BatShtOff/If Action Subsystem/Enumerated_Constant1'
 * '<S326>' : 'BPCR_ac/BPCR_MedTEB/BatShtOff/If Action Subsystem/Enumerated_Constant2'
 * '<S327>' : 'BPCR_ac/BPCR_MedTEB/BatShtOff/If Action Subsystem/KeBPCR_Cnt_BatShtOffFlg_Debounce'
 * '<S328>' : 'BPCR_ac/BPCR_MedTEB/BatShtOff/If Action Subsystem/Turn On Delay Sample1'
 * '<S329>' : 'BPCR_ac/BPCR_MedTEB/BatShtOff/If Action Subsystem/Turn On Delay Sample1/EdgeRising'
 * '<S330>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/KeBPCR_Cnt_HEVOnReqBPCM_OffDebounce'
 * '<S331>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/KeBPCR_Cnt_HEVOnReqBPCM_OnDebounce'
 * '<S332>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/KeBPCR_Cnt_MILOnReqBPCM_OffDebounce'
 * '<S333>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/KeBPCR_Cnt_MILOnReqBPCM_OnDebounce'
 * '<S334>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/PwrLimON_Override'
 * '<S335>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempAvg'
 * '<S336>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempMax'
 * '<S337>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempMin'
 * '<S338>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatRdy'
 * '<S339>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Tmot_HVBatCntrWeld_ImpdOpn'
 * '<S340>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Turn Off Delay Sample'
 * '<S341>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Turn Off Delay Sample1'
 * '<S342>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Turn On Delay Sample'
 * '<S343>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Turn On Delay Sample1'
 * '<S344>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/PwrLimON_Override/SCALAR_BLK'
 * '<S345>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/PwrLimON_Override/SCALAR_BLK1'
 * '<S346>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempAvg/Count Down  Reset Enabled2'
 * '<S347>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempAvg/EdgeRising2'
 * '<S348>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempAvg/KeBPCI_Cnt_HV_BatModTempAvgWaitTme'
 * '<S349>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempAvg/KeBPCI_T_HV_BatModTempAvgDflt'
 * '<S350>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempMax/Count Down  Reset Enabled1'
 * '<S351>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempMax/EdgeRising1'
 * '<S352>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempMax/KeBPCI_Cnt_HV_BatModTempMaxWaitTme'
 * '<S353>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempMax/KeBPCI_T_HV_BatModTempMaxDflt'
 * '<S354>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempMin/Count Down  Reset Enabled1'
 * '<S355>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempMin/EdgeRising1'
 * '<S356>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempMin/KeBPCI_Cnt_HV_BatModTempMinWaitTme'
 * '<S357>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatModTempMin/KeBPCI_T_HV_BatModTempMinDflt'
 * '<S358>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatRdy/Count Down  Reset Enabled2'
 * '<S359>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatRdy/EdgeRising'
 * '<S360>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/TimedOut_HV_BatRdy/KeBPCI_Cnt_HV_BatRdyWaitTme'
 * '<S361>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Tmot_HVBatCntrWeld_ImpdOpn/Count Down  Reset Enabled1'
 * '<S362>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Tmot_HVBatCntrWeld_ImpdOpn/EdgeRising1'
 * '<S363>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Tmot_HVBatCntrWeld_ImpdOpn/Enumerated_Constant7'
 * '<S364>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Tmot_HVBatCntrWeld_ImpdOpn/Enumerated_Constant8'
 * '<S365>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Tmot_HVBatCntrWeld_ImpdOpn/KeBPCR_Cnt_HVBatCntrWeld_ImpdOpn'
 * '<S366>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Tmot_HVBatCntrWeld_ImpdOpn/KeBPCR_e_HVBatCntrWeld_ImpdOpn'
 * '<S367>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Turn Off Delay Sample/EdgeFalling1'
 * '<S368>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Turn Off Delay Sample1/EdgeFalling1'
 * '<S369>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Turn On Delay Sample/EdgeRising'
 * '<S370>' : 'BPCR_ac/BPCR_MedTEB/Debounce_TimeOutprocess/Turn On Delay Sample1/EdgeRising'
 * '<S371>' : 'BPCR_ac/BPCR_MedTEB/Process_12p5ms_InputTask/Bit Selector14'
 * '<S372>' : 'BPCR_ac/BPCR_MedTEB/Process_12p5ms_InputTask/Bit Selector3'
 * '<S373>' : 'BPCR_ac/BPCR_MedTEB/Process_12p5ms_InputTask/KeBPCR_U_BatVoltModMaxArbOvrd'
 * '<S374>' : 'BPCR_ac/BPCR_MedTEB/Process_12p5ms_InputTask/KeBPCR_U_BatVoltModMinArbOvrd'
 * '<S375>' : 'BPCR_ac/BPCR_MedTEB/Process_12p5ms_InputTask/KeBPCR_b_BatVolt_Use12p5'
 * '<S376>' : 'BPCR_ac/BPCR_MedTEB/Process_12p5ms_InputTask/KeBPCR_d_InputOvrdEnbl_OVUV'
 * '<S377>' : 'BPCR_ac/BPCR_MedTEB/ThrmlRnawyWarn_Arb/If Action Subsystem'
 * '<S378>' : 'BPCR_ac/BPCR_MedTEB/ThrmlRnawyWarn_Arb/If Action Subsystem1'
 * '<S379>' : 'BPCR_ac/BPCR_MedTEB/ThrmlRnawyWarn_Arb/If Action Subsystem2'
 * '<S380>' : 'BPCR_ac/BPCR_MedTEB/ThrmlRnawyWarn_Arb/KeBPCR_b_BPCMRedundantCAN'
 * '<S381>' : 'BPCR_ac/BPCR_MedTEB/ThrmlRnawyWarn_Arb/KeBPCR_b_PWMThrmlRnawyEn'
 * '<S382>' : 'BPCR_ac/BPCR_MedTEB/ThrmlRnawyWarn_Arb/getFaultActiveAndTestCompleted'
 * '<S383>' : 'BPCR_ac/BPCR_MedTEB/ThrmlRnawyWarn_Arb/getFaultActiveAndTestCompleted1'
 * '<S384>' : 'BPCR_ac/BPCR_MedTEB/ThrmlRnawyWarn_Arb/If Action Subsystem/Enumerated_Constant'
 * '<S385>' : 'BPCR_ac/BPCR_MedTEB/ThrmlRnawyWarn_Arb/If Action Subsystem1/Enumerated_Constant1'
 * '<S386>' : 'BPCR_ac/BPCR_MedTEB/ThrmlRnawyWarn_Arb/If Action Subsystem2/KeBPCR_b_ThrmlRnawyFlg_NoSrc'
 * '<S387>' : 'BPCR_ac/BPCR_MedTEH/Arbitration'
 * '<S388>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC'
 * '<S389>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Current_Override'
 * '<S390>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override'
 * '<S391>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA'
 * '<S392>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/SOC_Override'
 * '<S393>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override'
 * '<S394>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Variable_Override'
 * '<S395>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Voltage_Override'
 * '<S396>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Current_Override/KeBPCR_I_HV_BatCurrArbOvrd'
 * '<S397>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Current_Override/KeBPCR_b_CurrFAOvrd'
 * '<S398>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Current_Override/KeBPCR_b_CurrOvrd'
 * '<S399>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/Count Down  Reset Enabled'
 * '<S400>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/Count Down  Reset Enabled1'
 * '<S401>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/Count Down  Reset Enabled2'
 * '<S402>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/Count Down  Reset Enabled3'
 * '<S403>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/Count Down  Reset Enabled4'
 * '<S404>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/Count Down  Reset Enabled5'
 * '<S405>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/EdgeRising1'
 * '<S406>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/EdgeRising2'
 * '<S407>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/EdgeRising3'
 * '<S408>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/EdgeRising4'
 * '<S409>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/EdgeRising5'
 * '<S410>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/EdgeRising6'
 * '<S411>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_Cnt_HV_BatChrgPwrET_SgnlWaitTme'
 * '<S412>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_Cnt_HV_BatChrgPwrLT_SgnlWaitTme'
 * '<S413>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_Cnt_HV_BatChrgPwrST_SgnlWaitTme'
 * '<S414>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_Cnt_HV_BatDschrgPwrET_SgnlWaitTme'
 * '<S415>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_Cnt_HV_BatDschrgPwrLT_SgnlWaitTme'
 * '<S416>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_Cnt_HV_BatDschrgPwrST_SgnlWaitTme'
 * '<S417>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_P_HybBatDefMaxChrgPwrET'
 * '<S418>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_P_HybBatDefMaxChrgPwrLT'
 * '<S419>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_P_HybBatDefMaxChrgPwrST'
 * '<S420>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_P_HybBatDefMaxDschrgPwrET'
 * '<S421>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_P_HybBatDefMaxDschrgPwrLT'
 * '<S422>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_P_HybBatDefMaxDschrgPwrST'
 * '<S423>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_P_TracBat_EChrgPowLongMod_Val'
 * '<S424>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_P_TracBat_EChrgPowLongVal'
 * '<S425>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_HybBatDefMaxChrgPwrETAndFAOvrd'
 * '<S426>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_HybBatDefMaxChrgPwrETOvrd'
 * '<S427>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_HybBatDefMaxChrgPwrLTAndFAOvrd'
 * '<S428>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_HybBatDefMaxChrgPwrLTOvrd'
 * '<S429>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_HybBatDefMaxChrgPwrSTAndFAOvrd'
 * '<S430>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_HybBatDefMaxChrgPwrSTOvrd'
 * '<S431>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_HybBatDefMaxDschrgPwrETAndFAOvrd'
 * '<S432>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_HybBatDefMaxDschrgPwrETOvrd'
 * '<S433>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_HybBatDefMaxDschrgPwrLTAndFAOvrd'
 * '<S434>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_HybBatDefMaxDschrgPwrLTOvrd'
 * '<S435>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_HybBatDefMaxDschrgPwrSTAndFAOvrd'
 * '<S436>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_HybBatDefMaxDschrgPwrSTOvrd'
 * '<S437>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_TracBat_EChrgPowLongMod_Ovrd'
 * '<S438>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Power_Override/KeBPCR_b_TracBat_EChrgPowLongOvrd'
 * '<S439>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA/KeBPCR_Cnt_BatMaxModTmpFA_Dur'
 * '<S440>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA/KeBPCR_Cnt_BatPackSOC_FA_Dur'
 * '<S441>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA/KeBPCR_Cnt_BatVoltModMaxFA_Dur'
 * '<S442>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA/KeBPCR_Cnt_HV_BatCurrFA_Dur'
 * '<S443>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA/KeBPCR_b_BatPackSOC_Test'
 * '<S444>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA/Turn On Delay Sample'
 * '<S445>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA/Turn On Delay Sample1'
 * '<S446>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA/Turn On Delay Sample2'
 * '<S447>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA/Turn On Delay Sample3'
 * '<S448>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA/Turn On Delay Sample/EdgeRising'
 * '<S449>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA/Turn On Delay Sample1/EdgeRising'
 * '<S450>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA/Turn On Delay Sample2/EdgeRising'
 * '<S451>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Process_BatPackSFA/Turn On Delay Sample3/EdgeRising'
 * '<S452>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/SOC_Override/KeBPCR_Pct_BatPackSOCOvrd'
 * '<S453>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/SOC_Override/KeBPCR_Pct_SOC_Offset'
 * '<S454>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/SOC_Override/KeBPCR_b_BatPackSOCAndFAOvrd'
 * '<S455>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/SOC_Override/KeBPCR_b_BatPackSOCOvrd'
 * '<S456>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/SOC_Override/SOC_FA_Ovrd_WrtEn'
 * '<S457>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/SOC_Override/TimeOut_SOC'
 * '<S458>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/SOC_Override/TimeOut_SOC/Count Down  Reset Enabled'
 * '<S459>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/SOC_Override/TimeOut_SOC/EdgeRising1'
 * '<S460>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/SOC_Override/TimeOut_SOC/KeBPCR_Cnt_HV_BatPackSOC_SgnlWaitTme'
 * '<S461>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/BatModTempWrtngEn'
 * '<S462>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/IfThenElse6'
 * '<S463>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/KeBPCI_Cnt_HV_BatModTempMaxWaitTme100ms'
 * '<S464>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/KeBPCI_Cnt_HV_BatModTempMinWaitTme100ms'
 * '<S465>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/KeBPCI_b_BatModTempStrgAlwysEn'
 * '<S466>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/KeBPCR_T_DefBatModTmp'
 * '<S467>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/KeBPCR_T_HVBatDefMaxModTmp'
 * '<S468>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/KeBPCR_T_HVBatDefMinModTmp'
 * '<S469>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/KeBPCR_b_HVBatDefMaxModTmpAndFAOvrd'
 * '<S470>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/KeBPCR_b_HVBatDefMaxModTmpOvrd'
 * '<S471>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/KeBPCR_b_HVBatDefMinModTmpAndFAOvrd'
 * '<S472>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/KeBPCR_b_HVBatDefMinModTmpOvrd'
 * '<S473>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/Temp_Filter'
 * '<S474>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/Turn On Delay Sample'
 * '<S475>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/Turn On Delay Sample1'
 * '<S476>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/Temp_Filter/If Action Subsystem'
 * '<S477>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/Temp_Filter/If Action Subsystem1'
 * '<S478>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/Temp_Filter/Signal Latch On'
 * '<S479>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/Temp_Filter/If Action Subsystem/Digital Lowpass Reset Enabled'
 * '<S480>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/Temp_Filter/If Action Subsystem/EdgeRising'
 * '<S481>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/Temp_Filter/If Action Subsystem/KeBPCR_T_Temp_Filter'
 * '<S482>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/Temp_Filter/If Action Subsystem/Set Block'
 * '<S483>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/Turn On Delay Sample/EdgeRising'
 * '<S484>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Temperature_Override/Turn On Delay Sample1/EdgeRising'
 * '<S485>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Variable_Override/KeBPCR_U_OVThrshMinLim'
 * '<S486>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Variable_Override/KeBPCR_U_UVThrshMaxLim'
 * '<S487>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Variable_Override/KeBPCR_b_DevCalUseOVCal'
 * '<S488>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Variable_Override/KeBPCR_b_DevCalUseUVCal'
 * '<S489>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Variable_Override/KtBPCR_U_OVThrshCal'
 * '<S490>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Variable_Override/KtBPCR_U_UVThrshCal'
 * '<S491>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Voltage_Override/KeBPCR_b_HV_BatVoltModMaxFAOvrd'
 * '<S492>' : 'BPCR_ac/BPCR_MedTEH/Arbitration/Voltage_Override/KeBPCR_b_HV_BatVoltModMaxFAOvrdEnbl'
 * '<S493>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Activation'
 * '<S494>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/EdgeRising1'
 * '<S495>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering'
 * '<S496>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Initial_SOC'
 * '<S497>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA'
 * '<S498>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_from_BPCM'
 * '<S499>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Activation/EdgeRising3'
 * '<S500>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/EdgeRising'
 * '<S501>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/IfThenElse'
 * '<S502>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/IfThenElseif'
 * '<S503>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/KeBPCR_K_CapFactor_Slope'
 * '<S504>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/KeBPCR_Pct_CATL_CS_SOC'
 * '<S505>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/KeBPCR_Pct_CATL_Ct_SOC'
 * '<S506>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/KeBPCR_Pct_CATL_Top_SOC'
 * '<S507>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/KeBPCR_Pct_HV_BatSOC_Max'
 * '<S508>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/KeBPCR_Pct_HV_BatSOC_Min'
 * '<S509>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/KeBPCR_Pct_LG_MaxSOC'
 * '<S510>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/KeBPCR_Pct_LG_MinSOC'
 * '<S511>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/KeBPCR_Pct_SOCMaxStepChg'
 * '<S512>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/KeBPCR_b_UseCATLSOC'
 * '<S513>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/Limiter'
 * '<S514>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/Limiter1'
 * '<S515>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Filtering/Limiter2'
 * '<S516>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Initial_SOC/KeBPCR_Pct_SOC_Default'
 * '<S517>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/Initial_SOC/KeBPCR_b_SDCmptPrev'
 * '<S518>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_Extreme_20Pct_80Pct'
 * '<S519>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_based_on_Current_Integration'
 * '<S520>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_Extreme_20Pct_80Pct/EdgeRising1'
 * '<S521>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_Extreme_20Pct_80Pct/KeBPCR_I_CurrHiSOC'
 * '<S522>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_Extreme_20Pct_80Pct/KeBPCR_I_CurrLoSOC'
 * '<S523>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_Extreme_20Pct_80Pct/KeBPCR_Pct_ExtrmHiSOC'
 * '<S524>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_Extreme_20Pct_80Pct/KeBPCR_Pct_ExtrmLoSOC'
 * '<S525>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_Extreme_20Pct_80Pct/KeBPCR_Pct_HiSOCThsld'
 * '<S526>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_Extreme_20Pct_80Pct/KeBPCR_Pct_LoSOCThsld'
 * '<S527>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_Extreme_20Pct_80Pct/KeBPCR_b_SOCExtrmEnbl'
 * '<S528>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_Extreme_20Pct_80Pct/KeBPCR_t_BaseTime'
 * '<S529>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_Extreme_20Pct_80Pct/KeBPCR_t_SOCExtrmDebounce'
 * '<S530>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_Extreme_20Pct_80Pct/KtBPCR_U_VMaxThsld'
 * '<S531>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_Extreme_20Pct_80Pct/KtBPCR_U_VMinThsld'
 * '<S532>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_based_on_Current_Integration/Accumulator Reset Enabled Limited'
 * '<S533>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_based_on_Current_Integration/KeBPCR_q_BatPackCap'
 * '<S534>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_based_on_Current_Integration/KeBPCR_t_BaseTime'
 * '<S535>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_based_on_Current_Integration/Protected Division'
 * '<S536>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_based_on_Current_Integration/Set Block'
 * '<S537>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_at_FA/SOC_based_on_Current_Integration/Accumulator Reset Enabled Limited/Limiter'
 * '<S538>' : 'BPCR_ac/BPCR_MedTEH/ProcBatPackSOC/SOC_from_BPCM/Set Block'
 * '<S539>' : 'BPCR_ac/BPCR_PwrOn/BatModTempInit'
 * '<S540>' : 'BPCR_ac/BPCR_PwrOn/DSM_Init'
 * '<S541>' : 'BPCR_ac/BPCR_PwrOn/Init_12p5ms_InputTask'
 * '<S542>' : 'BPCR_ac/BPCR_PwrOn/Init_BPCC_DecodePWM'
 * '<S543>' : 'BPCR_ac/BPCR_PwrOn/Init_DCCntctr'
 * '<S544>' : 'BPCR_ac/BPCR_PwrOn/Init_PowerLimits'
 * '<S545>' : 'BPCR_ac/BPCR_PwrOn/Init_SOC'
 * '<S546>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState'
 * '<S547>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp'
 * '<S548>' : 'BPCR_ac/BPCR_PwrOn/SOC_FA_Ovrd_Init'
 * '<S549>' : 'BPCR_ac/BPCR_PwrOn/Sub_Out_Init'
 * '<S550>' : 'BPCR_ac/BPCR_PwrOn/DSM_Init/KeBPCR_P_HV_BatChrgPwrET_Dflt'
 * '<S551>' : 'BPCR_ac/BPCR_PwrOn/DSM_Init/KeBPCR_P_HV_BatChrgPwrLT_Dflt'
 * '<S552>' : 'BPCR_ac/BPCR_PwrOn/DSM_Init/KeBPCR_P_HV_BatChrgPwrST_Dflt'
 * '<S553>' : 'BPCR_ac/BPCR_PwrOn/DSM_Init/KeBPCR_P_HV_BatDschrgPwrET_Dflt'
 * '<S554>' : 'BPCR_ac/BPCR_PwrOn/DSM_Init/KeBPCR_P_HV_BatDschrgPwrLT_Dflt'
 * '<S555>' : 'BPCR_ac/BPCR_PwrOn/DSM_Init/KeBPCR_P_HV_BatDschrgPwrST_Dflt'
 * '<S556>' : 'BPCR_ac/BPCR_PwrOn/DSM_Init/KeBPCR_Pct_HV_BatPackSOC_Dflt'
 * '<S557>' : 'BPCR_ac/BPCR_PwrOn/DSM_Init/KeBPCR_T_BatModTmp_Dflt'
 * '<S558>' : 'BPCR_ac/BPCR_PwrOn/Init_12p5ms_InputTask/Set Block'
 * '<S559>' : 'BPCR_ac/BPCR_PwrOn/Init_12p5ms_InputTask/Set Block1'
 * '<S560>' : 'BPCR_ac/BPCR_PwrOn/Init_BPCC_DecodePWM/KeBPCR_e_PWMCntctrSts_Init'
 * '<S561>' : 'BPCR_ac/BPCR_PwrOn/Init_DCCntctr/Enumerated_Constant1'
 * '<S562>' : 'BPCR_ac/BPCR_PwrOn/Init_DCCntctr/Enumerated_Constant2'
 * '<S563>' : 'BPCR_ac/BPCR_PwrOn/Init_PowerLimits/KeBPCR_P_HV_BatChrgPwrET_Init'
 * '<S564>' : 'BPCR_ac/BPCR_PwrOn/Init_PowerLimits/KeBPCR_P_HV_BatChrgPwrLT_Init'
 * '<S565>' : 'BPCR_ac/BPCR_PwrOn/Init_PowerLimits/KeBPCR_P_HV_BatChrgPwrST_Init'
 * '<S566>' : 'BPCR_ac/BPCR_PwrOn/Init_PowerLimits/KeBPCR_P_HV_BatDschrgPwrET_Init'
 * '<S567>' : 'BPCR_ac/BPCR_PwrOn/Init_PowerLimits/KeBPCR_P_HV_BatDschrgPwrLT_Init'
 * '<S568>' : 'BPCR_ac/BPCR_PwrOn/Init_PowerLimits/KeBPCR_P_HV_BatDschrgPwrST_Init'
 * '<S569>' : 'BPCR_ac/BPCR_PwrOn/Init_PowerLimits/KeBPCR_Pct_HV_BatPackSOC_Init'
 * '<S570>' : 'BPCR_ac/BPCR_PwrOn/Init_PowerLimits/KeBPCR_q_FullAmpHrCap_Init'
 * '<S571>' : 'BPCR_ac/BPCR_PwrOn/Init_SOC/KeBPCR_Pct_SOC_Default'
 * '<S572>' : 'BPCR_ac/BPCR_PwrOn/Init_SOC/KeBPCR_b_SOCInitOvrd'
 * '<S573>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/Enumerated_Constant'
 * '<S574>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/Enumerated_Constant1'
 * '<S575>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/Enumerated_Constant2'
 * '<S576>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_DC_CntctrCntrl_PWM'
 * '<S577>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_P_TracBat_EChrgPowLong'
 * '<S578>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_Pct_HVBatSOHLow_Init'
 * '<S579>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_CntctrCntrl_PWM_FA'
 * '<S580>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_HEVOnRqBPCM_Init'
 * '<S581>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_HVBatIntrlkIntrnlStatFA_Init'
 * '<S582>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_HVBatPerWUThermal'
 * '<S583>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_HVBatPerWakeUp'
 * '<S584>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_HVBat_RTC_V_Init'
 * '<S585>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_HV_AuxLoadOffReq_Init'
 * '<S586>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_HV_BatCntctrOpenPending'
 * '<S587>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_HV_BatCntctrOpenReq'
 * '<S588>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_HV_BatCntctrStatFA'
 * '<S589>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_HV_BatInrlkStatFA'
 * '<S590>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_HV_BatRdySgnl_Rcvd'
 * '<S591>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_HV_BatRdy_Init'
 * '<S592>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_HV_BatRdy_NVRAM_Init'
 * '<S593>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_PwrLimON'
 * '<S594>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_b_TracBat_EChrgPowLongV'
 * '<S595>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_e_BPCMShtDwnRdy'
 * '<S596>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_e_BPCM_LIN_BusOff_Init'
 * '<S597>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_e_BPCM_LOC_BCP_Init'
 * '<S598>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_e_BPCM_LOC_BatClntHtr_Init'
 * '<S599>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_e_HVBatIntrlkIntrnlStat_Init'
 * '<S600>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_e_HVBatIntrlkIntrnlStat_Init1'
 * '<S601>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_e_HVDcChargeTypeStat_Init'
 * '<S602>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_e_HVTracBatCntctrConfig_Init'
 * '<S603>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_e_HV_BatCntctrStat'
 * '<S604>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_e_HV_BatInrlkStat'
 * '<S605>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_e_HV_BatIsolStat'
 * '<S606>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_e_Init_HVBatCntrWeld_ImpdOpn'
 * '<S607>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_e_PwrtrnHV_IsolStat'
 * '<S608>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_t_HVBatRealTimeClock_Init'
 * '<S609>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_t_HVBatSleepTime'
 * '<S610>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_t_HVBattCntctrOpnTm'
 * '<S611>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/KeBPCR_t_PrechrgPnltyTimer'
 * '<S612>' : 'BPCR_ac/BPCR_PwrOn/Init_SystemState/Set Block1'
 * '<S613>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCI_I_HV_BatCurrDflt'
 * '<S614>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCI_U_CellVoltHighThrshDflt'
 * '<S615>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCI_U_CellVoltLowThrshDflt'
 * '<S616>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCI_U_HV_BatModVoltAvgDflt'
 * '<S617>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCI_U_HV_BatModVoltMaxDflt'
 * '<S618>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCI_U_HV_BatModVoltMinDflt'
 * '<S619>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCI_U_HV_BatVoltDflt'
 * '<S620>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCI_U_MaxCellDschargeImpedanceDflt'
 * '<S621>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCI_U_MinCellDschargeImpedanceDflt'
 * '<S622>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCI_U_OCVAvgCellVoltageDflt'
 * '<S623>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCI_U_OCVMaxCellVoltageDflt'
 * '<S624>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCI_U_OCVMinCellVoltageDflt'
 * '<S625>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_Cnt_HVBat_ModNumMaxTmp'
 * '<S626>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_Cnt_HVBat_ModNumMinTmp'
 * '<S627>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_Cnt_HVBat_NumMaxVlt'
 * '<S628>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_Cnt_HVBat_NumMinVlt'
 * '<S629>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_T_BDUBusBarTempInit'
 * '<S630>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_T_BusBarTempInit'
 * '<S631>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_T_HVBatClgOutlet_Init'
 * '<S632>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_U_BPCM_HV_InternalVoltage_Init'
 * '<S633>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_U_HV_InternalStringVolt1_Init'
 * '<S634>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_U_HV_InternalStringVolt2_Init'
 * '<S635>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_U_HV_SeriesVolt_Init'
 * '<S636>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_U_MaxCellVltAlldDflt'
 * '<S637>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_U_MaxPkVltAlldDflt'
 * '<S638>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_U_MinCellVltAlldDflt'
 * '<S639>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_U_MinPkVltAlldDflt'
 * '<S640>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/KeBPCR_b_HVBatClgOutletTempFA_Init'
 * '<S641>' : 'BPCR_ac/BPCR_PwrOn/Init_VoltageCurrentTemp/SCALAR_BLK'
 * '<S642>' : 'BPCR_ac/BPCR_PwrOn/Sub_Out_Init/Const57'
 * '<S643>' : 'BPCR_ac/FsftBPCR_I_HV_BatCurr/FsftBPCR_I_HV_BatCurrChrt'
 * '<S644>' : 'BPCR_ac/FsftBPCR_I_MaxChgCurrAlwd/FsftBPCR_I_MaxChgCurrAlwdChrt'
 * '<S645>' : 'BPCR_ac/FsftBPCR_P_TracBat_EChrgPowLong/FsftBPCR_P_TracBat_EChrgPowLongChrt'
 * '<S646>' : 'BPCR_ac/FsftBPCR_R_HV_BatImped/FsftBPCR_R_HV_BatImpedChrt'
 * '<S647>' : 'BPCR_ac/FsftBPCR_U_CellVoltHighThrsh/FsftBPCR_U_CellVoltHighThrshChrt'
 * '<S648>' : 'BPCR_ac/FsftBPCR_U_CellVoltLowThrsh/FsftBPCR_U_CellVoltLowThrshChrt'
 * '<S649>' : 'BPCR_ac/FsftBPCR_U_HV_BatModVoltAvg/FsftBPCR_U_HV_BatModVoltAvgChrt'
 * '<S650>' : 'BPCR_ac/FsftBPCR_U_HV_BatModVoltMax/FsftBPCR_U_HV_BatModVoltMaxChrt'
 * '<S651>' : 'BPCR_ac/FsftBPCR_U_HV_BatModVoltMin/FsftBPCR_U_HV_BatModVoltMinChrt'
 * '<S652>' : 'BPCR_ac/FsftBPCR_U_HV_BatVolt/FsftBPCR_U_HV_BatVoltChrt'
 * '<S653>' : 'BPCR_ac/FsftBPCR_U_MaxCellVltAlld/FsftBPCR_U_MaxCellVltAlldChrt'
 * '<S654>' : 'BPCR_ac/FsftBPCR_U_MaxPkVltAlld/FsftBPCR_U_MaxPkVltAlldChrt'
 * '<S655>' : 'BPCR_ac/FsftBPCR_U_MinCellVltAlld/FsftBPCR_U_MinCellVltAlldChrt'
 * '<S656>' : 'BPCR_ac/FsftBPCR_U_MinPkVltAlld/FsftBPCR_U_MinPkVltAlldChrt'
 * '<S657>' : 'BPCR_ac/FsftBPCR_U_OCVAveCellVoltage/FsftBPCR_U_OCVAveCellVoltageChrt'
 * '<S658>' : 'BPCR_ac/FsftBPCR_U_OCVMaxCellVoltage/FsftBPCR_U_OCVMaxCellVoltageChrt'
 * '<S659>' : 'BPCR_ac/FsftBPCR_U_OCVMinCellVoltage/FsftBPCR_U_OCVMinCellVoltageChrt'
 * '<S660>' : 'BPCR_ac/FsftBPCR_Z_MaxCellDischargeImpedance/FsftBPCR_Z_MaxCellDischargeImpedanceChrt'
 * '<S661>' : 'BPCR_ac/FsftBPCR_Z_MinCellDischargeImpedance/FsftBPCR_Z_MinCellDischargeImpedanceChrt'
 * '<S662>' : 'BPCR_ac/FsftBPCR_b_BPCM_LIN_BusOff/FsftBPCR_b_BPCM_LIN_BusOffChrt'
 * '<S663>' : 'BPCR_ac/FsftBPCR_b_BPCM_LOC_BCP/FsftBPCR_b_BPCM_LOC_BCPChrt'
 * '<S664>' : 'BPCR_ac/FsftBPCR_b_BPCM_LOC_BatClntHtr/FsftBPCR_b_BPCM_LOC_BatClntHtrChrt'
 * '<S665>' : 'BPCR_ac/FsftBPCR_b_HVBatCntrWeld_ImpdOpn/FsftBPCR_b_HVBatCntrWeld_ImpdOpnChrt'
 * '<S666>' : 'BPCR_ac/FsftBPCR_b_HVBatRdy/FsftBPCR_b_HVBatRdyChrt'
 * '<S667>' : 'BPCR_ac/FsftBPCR_b_HVBat_DC_CntctrStat/FsftBPCR_b_HVBat_DC_CntctrStatChrt'
 * '<S668>' : 'BPCR_ac/FsftBPCR_b_HV_AuxLoadOffReq/FsftBPCR_b_HV_AuxLoadOffReqChrt'
 * '<S669>' : 'BPCR_ac/FsftBPCR_b_HV_BatChrgPwrET/FsftBPCR_b_HV_BatChrgPwrETChrt'
 * '<S670>' : 'BPCR_ac/FsftBPCR_b_HV_BatChrgPwrLT/FsftBPCR_b_HV_BatChrgPwrLTChrt'
 * '<S671>' : 'BPCR_ac/FsftBPCR_b_HV_BatChrgPwrST/FsftBPCR_b_HV_BatChrgPwrSTChrt'
 * '<S672>' : 'BPCR_ac/FsftBPCR_b_HV_BatCurrString2/FsftBPCR_b_HV_BatCurrString2Chrt'
 * '<S673>' : 'BPCR_ac/FsftBPCR_b_HV_BatDschrgPwrET/FsftBPCR_b_HV_BatDschrgPwrETChrt'
 * '<S674>' : 'BPCR_ac/FsftBPCR_b_HV_BatDschrgPwrLT/FsftBPCR_b_HV_BatDschrgPwrLTChrt'
 * '<S675>' : 'BPCR_ac/FsftBPCR_b_HV_BatDschrgPwrST/FsftBPCR_b_HV_BatDschrgPwrSTChrt'
 * '<S676>' : 'BPCR_ac/FsftBPCR_b_HV_BatModTempAvg/FsftBPCR_b_HV_BatModTempAvgChrt'
 * '<S677>' : 'BPCR_ac/FsftBPCR_b_HV_BatModTempMax/FsftBPCR_b_HV_BatModTempMaxChrt'
 * '<S678>' : 'BPCR_ac/FsftBPCR_b_HV_BatModTempMin/FsftBPCR_b_HV_BatModTempMinChrt'
 * '<S679>' : 'BPCR_ac/FsftBPCR_b_HV_BatPackSOC/FsftBPCR_b_HV_BatPackSOCChrt'
 * '<S680>' : 'BPCR_ac/FsftBPCR_b_HV_DcChargeTypeStat/FsftBPCR_b_HV_DcChargeTypeStatChrt'
 * '<S681>' : 'BPCR_ac/FsftBPCR_b_HV_InternalStringVolt1/FsftBPCR_b_HV_InternalStringVolt1chrt'
 * '<S682>' : 'BPCR_ac/FsftBPCR_b_HV_InternalStringVolt2/FsftBPCR_b_HV_InternalStringVolt2Chrt'
 * '<S683>' : 'BPCR_ac/FsftBPCR_b_HV_InternalVolt/FsftBPCR_b_HV_InternalVoltChrt'
 * '<S684>' : 'BPCR_ac/FsftBPCR_b_HV_SeriesVolt/FsftBPCR_b_HV_SeriesVoltChrt'
 * '<S685>' : 'BPCR_ac/FsftBPCR_b_HV_TracBatCntctrConfig/FsftBPCR_b_HV_TracBatCntctrConfigChrt'
 * '<S686>' : 'BPCR_ac/FsftBPCR_b_ThrmlRnawy_Warn/FsftBPCR_b_ThrmlRnawy_WarnChrt'
 * '<S687>' : 'BPCR_ac/FsftBPCR_cnt_HVBatt_ModNumMaxTmp/FsftBPCR_cnt_HVBatt_ModNumMaxTmpChrt'
 * '<S688>' : 'BPCR_ac/FsftBPCR_cnt_HVBatt_ModNumMinTmp/FsftBPCR_cnt_HVBatt_ModNumMinTmpChrt'
 * '<S689>' : 'BPCR_ac/FsftBPCR_e_BPCM_Comm_Fail/FsftBPCR_e_BPCM_Comm_FailChrt'
 * '<S690>' : 'BPCR_ac/FsftBPCR_e_ChargingStat_BPCM/FsftBPCR_e_ChargingStat_BPCMChrt'
 * '<S691>' : 'BPCR_ac/FsftBPCR_e_DCIsolSts/FsftBPCR_e_DCIsolStsChrt'
 * '<S692>' : 'BPCR_ac/FsftBPCR_e_HVBatIntrlkIntrnlStat/FsftBPCR_e_HVBatIntrlkIntrnlStatChrt'
 * '<S693>' : 'BPCR_ac/FsftBPCR_e_HV_BatCntctrStat/FsftBPCR_e_HV_BatCntctrStatChrt'
 * '<S694>' : 'BPCR_ac/FsftBPCR_e_HV_BatInrlkStat/FsftBPCR_e_HV_BatInrlkStatChrt'
 * '<S695>' : 'BPCR_ac/FsftBPCR_e_HV_BatIsolStat/FsftBPCR_e_HV_BatIsolStatChrt'
 * '<S696>' : 'BPCR_ac/FsftBPCR_q_FullAmpHrCap/FsftBPCR_q_FullAmpHrCapChrt'
 * '<S697>' : 'BPCR_ac/FsftBPCR_q_RemainingAmpHrCap/FsftBPCR_q_RemainingAmpHrCapChrt'
 * '<S698>' : 'BPCR_ac/FsftBPCR_t_HVBatRealTimeClock/FsftBPCR_t_HVBatRealTimeClockChrt'
 * '<S699>' : 'BPCR_ac/FsftBPCR_t_HVBattCntctrOpnTm/FsftBPCR_t_HVBattCntctrOpnTmChrt'
 * '<S700>' : 'BPCR_ac/PokeBPCR_Cnt_HVBatt_NumMaxVlt/PokeBPCR_Cnt_HVBatt_NumMaxVltChrt'
 * '<S701>' : 'BPCR_ac/PokeBPCR_Cnt_HVBatt_NumMinVlt/PokeBPCR_Cnt_HVBatt_NumMinVltChrt'
 * '<S702>' : 'BPCR_ac/PokeBPCR_DC_CntctrCntrl_PWM/PokeBPCR_DC_CntctrCntrl_PWMChrt'
 * '<S703>' : 'BPCR_ac/PokeBPCR_I_HV_BatCurr/PokeBPCR_I_HV_BatCurrChrt'
 * '<S704>' : 'BPCR_ac/PokeBPCR_I_HV_BatCurrString2/PokeBPCR_I_HV_BatCurrString2Chrt'
 * '<S705>' : 'BPCR_ac/PokeBPCR_I_MaxChgCurrAlwd/PokeBPCR_I_MaxChgCurrAlwdChrt'
 * '<S706>' : 'BPCR_ac/PokeBPCR_I_MaxDisChgCurrAlwd/PokeBPCR_I_MaxDisChgCurrAlwdChrt'
 * '<S707>' : 'BPCR_ac/PokeBPCR_P_HV_BatChrgPwrET/PokeBPCR_P_HV_BatChrgPwrETChrt'
 * '<S708>' : 'BPCR_ac/PokeBPCR_P_HV_BatChrgPwrLT/PokeBPCR_P_HV_BatChrgPwrLTChrt'
 * '<S709>' : 'BPCR_ac/PokeBPCR_P_HV_BatChrgPwrST/PokeBPCR_P_HV_BatChrgPwrSTChrt'
 * '<S710>' : 'BPCR_ac/PokeBPCR_P_HV_BatDschrgPwrET/PokeBPCR_P_HV_BatDschrgPwrETChrt'
 * '<S711>' : 'BPCR_ac/PokeBPCR_P_HV_BatDschrgPwrLT/PokeBPCR_P_HV_BatDschrgPwrLTChrt'
 * '<S712>' : 'BPCR_ac/PokeBPCR_P_HV_BatDschrgPwrST/PokeBPCR_P_HV_BatDschrgPwrSTChrt'
 * '<S713>' : 'BPCR_ac/PokeBPCR_P_TracBat_EChrgPowLong/PokeBPCR_P_TracBat_EChrgPowLongChrt'
 * '<S714>' : 'BPCR_ac/PokeBPCR_Pct_ContctCntrlVerif/PokeBPCR_Pct_ContctCntrlVerifChrt'
 * '<S715>' : 'BPCR_ac/PokeBPCR_Pct_HVBatSOH/PokeBPCR_Pct_HVBatSOHChrt'
 * '<S716>' : 'BPCR_ac/PokeBPCR_Pct_HVBatSOHLow/PokeBPCR_Pct_HVBatSOHLowChrt'
 * '<S717>' : 'BPCR_ac/PokeBPCR_Pct_HV_BatPackSOC/PokeBPCR_Pct_HV_BatPackSOCChrt'
 * '<S718>' : 'BPCR_ac/PokeBPCR_R_HV_BatImped/PokeBPCR_R_HV_BatImpedChrt'
 * '<S719>' : 'BPCR_ac/PokeBPCR_T_BDUBusBarTemp/PokeBPCR_T_BDUBusBarTempChrt'
 * '<S720>' : 'BPCR_ac/PokeBPCR_T_BusBarTemp/PokeBPCR_T_BusBarTempChrt'
 * '<S721>' : 'BPCR_ac/PokeBPCR_T_HVBatClgOutletTemp/PokeBPCR_T_HVBatClgOutletTempChrt'
 * '<S722>' : 'BPCR_ac/PokeBPCR_T_HV_BatModTempAvg/PokeBPCR_T_HV_BatModTempAvgChrt'
 * '<S723>' : 'BPCR_ac/PokeBPCR_T_HV_BatModTempMax/PokeBPCR_T_HV_BatModTempMaxChrt'
 * '<S724>' : 'BPCR_ac/PokeBPCR_T_HV_BatModTempMin/PokeBPCR_T_HV_BatModTempMinChrt'
 * '<S725>' : 'BPCR_ac/PokeBPCR_U_CellVoltHighThrsh/PokeBPCR_U_CellVoltHighThrshChrt'
 * '<S726>' : 'BPCR_ac/PokeBPCR_U_CellVoltLowThrsh/PokeBPCR_U_CellVoltLowThrshChrt'
 * '<S727>' : 'BPCR_ac/PokeBPCR_U_HV_BatModVoltAvg/PokeBPCR_U_HV_BatModVoltAvgChrt'
 * '<S728>' : 'BPCR_ac/PokeBPCR_U_HV_BatModVoltMax/PokeBPCR_U_HV_BatModVoltMaxChrt'
 * '<S729>' : 'BPCR_ac/PokeBPCR_U_HV_BatModVoltMin/PokeBPCR_U_HV_BatModVoltMinChrt'
 * '<S730>' : 'BPCR_ac/PokeBPCR_U_HV_BatVolt/PokeBPCR_U_HV_BatVoltChrt'
 * '<S731>' : 'BPCR_ac/PokeBPCR_U_HV_InternalStringVolt1/PokeBPCR_U_HV_InternalStringVolt1Chrt'
 * '<S732>' : 'BPCR_ac/PokeBPCR_U_HV_InternalStringVolt2/PokeBPCR_U_HV_InternalStringVolt2Chrt'
 * '<S733>' : 'BPCR_ac/PokeBPCR_U_HV_InternalVolt/PokeBPCR_U_HV_InternalVoltChrt'
 * '<S734>' : 'BPCR_ac/PokeBPCR_U_HV_SeriesVolt/PokeBPCR_U_HV_SeriesVoltChrt'
 * '<S735>' : 'BPCR_ac/PokeBPCR_U_MaxCellVltAlld/PokeBPCR_U_MaxCellVltAlldChrt'
 * '<S736>' : 'BPCR_ac/PokeBPCR_U_MaxPkVltAlld/PokeBPCR_U_MaxPkVltAlldChrt'
 * '<S737>' : 'BPCR_ac/PokeBPCR_U_MinCellVltAlld/PokeBPCR_U_MinCellVltAlldChrt'
 * '<S738>' : 'BPCR_ac/PokeBPCR_U_MinPkVltAlld/PokeBPCR_U_MinPkVltAlldChrt'
 * '<S739>' : 'BPCR_ac/PokeBPCR_U_OCVAveCellVoltage/PokeBPCR_U_OCVAveCellVoltageChrt'
 * '<S740>' : 'BPCR_ac/PokeBPCR_U_OCVMaxCellVoltage/PokeBPCR_U_OCVMaxCellVoltageChrt'
 * '<S741>' : 'BPCR_ac/PokeBPCR_U_OCVMinCellVoltage/PokeBPCR_U_OCVMinCellVoltageChrt'
 * '<S742>' : 'BPCR_ac/PokeBPCR_U_OCVPckVoltage/PokeBPCR_U_OCVPckVoltageChrt'
 * '<S743>' : 'BPCR_ac/PokeBPCR_Z_MaxCellChargeImpedance/PokeBPCR_Z_MaxCellChargeImpedanceChrt'
 * '<S744>' : 'BPCR_ac/PokeBPCR_Z_MaxCellDischargeImpedance/PokeBPCR_Z_MaxCellDischargeImpedanceChrt'
 * '<S745>' : 'BPCR_ac/PokeBPCR_Z_MinCellChargeImpedance/PokeBPCR_Z_MinCellChargeImpedanceChrt'
 * '<S746>' : 'BPCR_ac/PokeBPCR_Z_MinCellDischargeImpedance/PokeBPCR_Z_MinCellDischargeImpedanceChrt'
 * '<S747>' : 'BPCR_ac/PokeBPCR_b_BalMd/PokeBPCR_b_BalMdChrt'
 * '<S748>' : 'BPCR_ac/PokeBPCR_b_CellVoltImbalance/PokeBPCR_b_CellVoltImbalanceChrt'
 * '<S749>' : 'BPCR_ac/PokeBPCR_b_ChrgFail_On_BPCM/PokeBPCR_b_ChrgFail_On_BPCMChrt'
 * '<S750>' : 'BPCR_ac/PokeBPCR_b_DC_Isolation_Sts/PokeBPCR_b_DC_Isolation_StsChrt'
 * '<S751>' : 'BPCR_ac/PokeBPCR_b_EVSer_On_BPCM/PokeBPCR_b_EVSer_On_BPCMChrt'
 * '<S752>' : 'BPCR_ac/PokeBPCR_b_HBCNC_LV_LO/PokeBPCR_b_HBCNC_LV_LOChrt'
 * '<S753>' : 'BPCR_ac/PokeBPCR_b_HEVOnRqBPCM/PokeBPCR_b_HEVOnRqBPCMChrt'
 * '<S754>' : 'BPCR_ac/PokeBPCR_b_HVBatPerWU12VChrg/PokeBPCR_b_HVBatPerWU12VChrgChrt'
 * '<S755>' : 'BPCR_ac/PokeBPCR_b_HVBatPerWUBal/PokeBPCR_b_HVBatPerWUBalChrt'
 * '<S756>' : 'BPCR_ac/PokeBPCR_b_HVBatPerWUCharge/PokeBPCR_b_HVBatPerWUChargeChrt'
 * '<S757>' : 'BPCR_ac/PokeBPCR_b_HVBatPerWUThermal/PokeBPCR_b_HVBatPerWUThermalChrt'
 * '<S758>' : 'BPCR_ac/PokeBPCR_b_HVBatRdy/PokeBPCR_b_HVBatRdyChrt'
 * '<S759>' : 'BPCR_ac/PokeBPCR_b_HVBatRdyForChrg/PokeBPCR_b_HVBatRdyForChrgChrt'
 * '<S760>' : 'BPCR_ac/PokeBPCR_b_HVBat_DC_CntctrOpn/PokeBPCR_b_HVBat_DC_CntctrOpnChrt'
 * '<S761>' : 'BPCR_ac/PokeBPCR_b_HVBat_DC_CntctrReq/PokeBPCR_b_HVBat_DC_CntctrReqChrt'
 * '<S762>' : 'BPCR_ac/PokeBPCR_b_HVBat_Real_Time_Clock_V/PokeBPCR_b_HVBat_Real_Time_Clock_VChrt'
 * '<S763>' : 'BPCR_ac/PokeBPCR_b_HVBattPerWakeUp/PokeBPCR_b_HVBattPerWakeUpChrt'
 * '<S764>' : 'BPCR_ac/PokeBPCR_b_HV_AuxLoadOffReq/PokeBPCR_b_HV_AuxLoadOffReqChrt'
 * '<S765>' : 'BPCR_ac/PokeBPCR_b_HV_BatCntctrOpenPending/PokeBPCR_b_HV_BatCntctrOpenPendingChrt'
 * '<S766>' : 'BPCR_ac/PokeBPCR_b_HV_BatCntctrOpenReq/PokeBPCR_b_HV_BatCntctrOpenReqChrt'
 * '<S767>' : 'BPCR_ac/PokeBPCR_b_HV_BatDriveRdy/PokeBPCR_b_HV_BatDriveRdyChrt'
 * '<S768>' : 'BPCR_ac/PokeBPCR_b_MIL_OnRq_BPCM/PokeBPCR_b_MIL_OnRq_BPCMChrt'
 * '<S769>' : 'BPCR_ac/PokeBPCR_b_PwrLimON/PokeBPCR_b_PwrLimONChrt'
 * '<S770>' : 'BPCR_ac/PokeBPCR_b_StkOpnChkCmpl/PokeBPCR_b_StkOpnChkCmplChrt'
 * '<S771>' : 'BPCR_ac/PokeBPCR_cnt_BatteryModel/PokeBPCR_cnt_BatteryModelChrt'
 * '<S772>' : 'BPCR_ac/PokeBPCR_cnt_HVBatt_ModNumMaxTmp/PokeBPCR_cnt_HVBatt_ModNumMaxTmpChrt'
 * '<S773>' : 'BPCR_ac/PokeBPCR_cnt_HVBatt_ModNumMinTmp/PokeBPCR_cnt_HVBatt_ModNumMinTmpChrt'
 * '<S774>' : 'BPCR_ac/PokeBPCR_e_BPCMShtDwnRdy/PokeBPCR_e_BPCMShtDwnRdyChrt'
 * '<S775>' : 'BPCR_ac/PokeBPCR_e_BPCM_Comm_Fail/KaBPCR_e_BPCM_Comm_Fail_Map'
 * '<S776>' : 'BPCR_ac/PokeBPCR_e_BPCM_Comm_Fail/PokeBPCR_e_BPCM_Comm_FailChrt'
 * '<S777>' : 'BPCR_ac/PokeBPCR_e_BPCM_LIN_BusOff/PokeBPCR_e_BPCM_LIN_BusOffChrt'
 * '<S778>' : 'BPCR_ac/PokeBPCR_e_BPCM_LOC_BCP/PokeBPCR_e_BPCM_LOC_BCPChrt'
 * '<S779>' : 'BPCR_ac/PokeBPCR_e_BPCM_LOC_BatClntHtr/PokeBPCR_e_BPCM_LOC_BatClntHtrChrt'
 * '<S780>' : 'BPCR_ac/PokeBPCR_e_ChargingStat_BPCM/PokeBPCR_e_ChargingStat_BPCMChrt'
 * '<S781>' : 'BPCR_ac/PokeBPCR_e_DCIsolSts/PokeBPCR_e_DCIsolStsChrt'
 * '<S782>' : 'BPCR_ac/PokeBPCR_e_HVBatCntrWeld_ImpdOpn/HaBPCR_e_HVBatCntrWeld_ImpOpn_Map'
 * '<S783>' : 'BPCR_ac/PokeBPCR_e_HVBatCntrWeld_ImpdOpn/PokeBPCR_e_HVBatCntrWeld_ImpdOpnChrt'
 * '<S784>' : 'BPCR_ac/PokeBPCR_e_HVBatIntrlkIntrnlStat/PokeBPCR_e_HVBatIntrlkIntrnlStatChrt'
 * '<S785>' : 'BPCR_ac/PokeBPCR_e_HVBatPerWU_Rsn/PokeBPCR_e_HVBatPerWU_RsnChrt'
 * '<S786>' : 'BPCR_ac/PokeBPCR_e_HVBat_DC_CntctrStat/HaBPCR_e_HVBat_DC_CntctrStat_Map'
 * '<S787>' : 'BPCR_ac/PokeBPCR_e_HVBat_DC_CntctrStat/PokeBPCR_e_HVBat_DC_CntctrStatChrt'
 * '<S788>' : 'BPCR_ac/PokeBPCR_e_HV_BatCntctrStat/HaBPCR_e_HV_CntctrStat_Map'
 * '<S789>' : 'BPCR_ac/PokeBPCR_e_HV_BatCntctrStat/PokeBPCR_e_HV_BatCntctrStatChrt'
 * '<S790>' : 'BPCR_ac/PokeBPCR_e_HV_BatInrlkStat/PokeBPCR_e_HV_BatInrlkStatChrt'
 * '<S791>' : 'BPCR_ac/PokeBPCR_e_HV_BatIsolStat/HaBPCR_e_HV_BatIsolStat_Map'
 * '<S792>' : 'BPCR_ac/PokeBPCR_e_HV_BatIsolStat/PokeBPCR_e_HV_BatIsolStatChrt'
 * '<S793>' : 'BPCR_ac/PokeBPCR_e_HV_DcChargeTypeStat/PokeBPCR_e_HV_DcChargeTypeStatChrt'
 * '<S794>' : 'BPCR_ac/PokeBPCR_e_HV_TracBatCntctrConfig/PokeBPCR_e_HV_TracBatCntctrConfigChrt'
 * '<S795>' : 'BPCR_ac/PokeBPCR_e_PowerModeState/PokeBPCR_e_PowerModeStateChrt'
 * '<S796>' : 'BPCR_ac/PokeBPCR_e_PwrtrnHV_IsolStat/PokeBPCR_e_PwrtrnHV_IsolStatChrt'
 * '<S797>' : 'BPCR_ac/PokeBPCR_e_ThrmlRnawy_Warn/HaBPCR_e_ThrmlRnawy_Warn_Map'
 * '<S798>' : 'BPCR_ac/PokeBPCR_e_ThrmlRnawy_Warn/PokeBPCR_e_ThrmlRnawy_WarnChrt'
 * '<S799>' : 'BPCR_ac/PokeBPCR_i_DC_Isolation_Sts_M182/KeBPCR_i_DC_IsolationStsDis'
 * '<S800>' : 'BPCR_ac/PokeBPCR_i_DC_Isolation_Sts_M182/PokeBPCR_i_DC_Isolation_Sts_M182Chrt'
 * '<S801>' : 'BPCR_ac/PokeBPCR_q_FullAmpHrCap/PokeBPCR_q_FullAmpHrCapChrt'
 * '<S802>' : 'BPCR_ac/PokeBPCR_q_RemainingAmpHrCap/PokeBPCR_q_RemainingAmpHrCapChrt'
 * '<S803>' : 'BPCR_ac/PokeBPCR_t_BSW_PWMCntctrTmr/PokeBPCR_t_BSW_PWMCntctrTmrChrt'
 * '<S804>' : 'BPCR_ac/PokeBPCR_t_HVBatRealTimeClock/PokeBPCR_t_HVBatRealTimeClockChrt'
 * '<S805>' : 'BPCR_ac/PokeBPCR_t_HVBatSleepTime/PokeBPCR_t_HVBatSleepTimeChrt'
 * '<S806>' : 'BPCR_ac/PokeBPCR_t_HVBattCntctrOpnTm/PokeBPCR_t_HVBattCntctrOpnTmChrt'
 * '<S807>' : 'BPCR_ac/PokeBPCR_t_PrechrgPnltyTimer/PokeBPCR_t_PrechrgPnltyTimerChrt'
 * '<S808>' : 'BPCR_ac/TmotBPCR_b_HVBatCntrWeld_ImpdOpn/TmotBPCR_b_HVBatCntrWeld_ImpdOpnChrt'
 * '<S809>' : 'BPCR_ac/TmotBPCR_b_HVBatRdy/TmotBPCR_b_HVBatRdyChrt'
 * '<S810>' : 'BPCR_ac/TmotBPCR_b_HV_BatChrgPwrET/TmotBPCR_b_HV_BatChrgPwrETChrt'
 * '<S811>' : 'BPCR_ac/TmotBPCR_b_HV_BatChrgPwrLT/TmotBPCR_b_HV_BatChrgPwrLTChrt'
 * '<S812>' : 'BPCR_ac/TmotBPCR_b_HV_BatChrgPwrST/TmotBPCR_b_HV_BatChrgPwrSTChrt'
 * '<S813>' : 'BPCR_ac/TmotBPCR_b_HV_BatDschrgPwrET/TmotBPCR_b_HV_BatDschrgPwrETChrt'
 * '<S814>' : 'BPCR_ac/TmotBPCR_b_HV_BatDschrgPwrLT/TmotBPCR_b_HV_BatDschrgPwrLTChrt'
 * '<S815>' : 'BPCR_ac/TmotBPCR_b_HV_BatDschrgPwrST/TmotBPCR_b_HV_BatDschrgPwrSTChrt'
 * '<S816>' : 'BPCR_ac/TmotBPCR_b_HV_BatModTempAvg/TmotBPCR_b_HV_BatModTempAvgChrt'
 * '<S817>' : 'BPCR_ac/TmotBPCR_b_HV_BatModTempMax/TmotBPCR_b_HV_BatModTempMaxChrt'
 * '<S818>' : 'BPCR_ac/TmotBPCR_b_HV_BatModTempMin/TmotBPCR_b_HV_BatModTempMinChrt'
 * '<S819>' : 'BPCR_ac/TmotBPCR_b_HV_BatPackSOC/TmotBPCR_b_HV_BatPackSOCChrt'
 * '<S820>' : 'BPCR_ac/TmotBPCR_e_BPCM_LIN_BusOff/TmotBPCR_e_BPCM_LIN_BusOffChrt'
 * '<S821>' : 'BPCR_ac/TmotBPCR_e_BPCM_LOC_BCP/TmotBPCR_e_BPCM_LOC_BCPChrt'
 * '<S822>' : 'BPCR_ac/TmotBPCR_e_BPCM_LOC_BatClntHtr/TmotBPCR_e_BPCM_LOC_BatClntHtrChrt'
 */
#endif                                 /* RTW_HEADER_BPCR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
