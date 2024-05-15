/*
 * File: IDCR_ac.h
 *
 * Code generated for Simulink model 'IDCR_ac'.
 *
 * Model version                  : 9.533
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:07:53 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_IDCR_ac_h_
#define RTW_HEADER_IDCR_ac_h_
#include "Rte_Type.h"
#ifndef IDCR_ac_COMMON_INCLUDES_
#define IDCR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_IDCR.h"
#endif                                 /* IDCR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S101>/FsftIDCR_cmp_ISO15118_EVSETimeStampChrt' */
typedef struct
{
    boolean LeIDCR_b_EVSE_Service1_Free_FA_out;
                          /* '<S101>/FsftIDCR_cmp_ISO15118_EVSETimeStampChrt' */
}
B_FsftIDCR_cmp_ISO15118_EVSETimeStampC_T;

/* Block signals for system '<S136>/FsftIDCR_e_V2XInterlockStsChrt' */
typedef struct
{
    boolean LeIDCR_b_V2XInterlockStsFA_out;
                                   /* '<S136>/FsftIDCR_e_V2XInterlockStsChrt' */
}
B_FsftIDCR_e_V2XInterlockStsChrt_IDCR__T;

/* Block signals (default storage) */
typedef struct tag_B_IDCR_ac_T
{
    uint32 LeIDCR_g_HVCMS_EVSEID_out; /* '<S340>/PokeIDCR_g_HVCMS_EVSEIDChrt' */
    uint32 OutportBufferForHVCMS_EVSEID_Init;/* '<S529>/Constant Value93' */
    float32 IBS_I_Batt_Init_write_IRV; /* '<Root>/Merge_25' */
    float32 IBS_I_Batt_2_Init_write_IRV;/* '<Root>/Merge_37' */
    float32 LeIDCR_t_IBS_BattTemp_out;/* '<S346>/PokeIDCR_t_IBS_BattTempChrt' */
    float32 LeIDCR_f_V2XFrequency_out;/* '<S339>/PokeIDCR_f_V2XFrequencyChrt' */
    float32 LeIDCR_U_V2XLVFeed_out;    /* '<S212>/PokeIDCR_U_V2XLVFeedChrt' */
    float32 LeIDCR_U_V2XInVoltage_out;/* '<S211>/PokeIDCR_U_V2XInVoltageChrt' */
    float32 LeIDCR_U_OBC_Prox_out;     /* '<S209>/PokeIDCR_U_OBC_ProxChrt' */
    float32 LeIDCR_U_IBS_BattVolt_out;/* '<S208>/PokeIDCR_U_IBS_BattVoltChrt' */
    float32 LeIDCR_U_EVSE_ThrshldVoltage_out;
                               /* '<S207>/PokeIDCR_U_EVSE_ThrshldVoltageChrt' */
    float32 LeIDCR_U_EVSEOutputVolt_out;
                                    /* '<S206>/PokeIDCR_U_EVSEOutputVoltChrt' */
    float32 LeIDCR_U_EVSEMinVoltLmt_out;
                                    /* '<S205>/PokeIDCR_U_EVSEMinVoltLmtChrt' */
    float32 LeIDCR_U_EVSEMaxVoltLmt_out;
                                    /* '<S204>/PokeIDCR_U_EVSEMaxVoltLmtChrt' */
    float32 LeIDCR_U_EVRDesVSetP_out;  /* '<S203>/PokeIDCR_U_EVRDesVSetPChrt' */
    float32 LeIDCR_U_DCInVoltage_out;  /* '<S202>/PokeIDCR_U_DCInVoltageChrt' */
    float32 LeIDCR_U_AcOutVoltage_out;/* '<S200>/PokeIDCR_U_AcOutVoltageChrt' */
    float32 LeIDCR_U_APM_LV_Voltage_out;
                                    /* '<S198>/PokeIDCR_U_APM_LV_VoltageChrt' */
    float32 LeIDCR_U_APM_HvVsetPFdbk_out;
                                   /* '<S197>/PokeIDCR_U_APM_HvVsetPFdbkChrt' */
    float32 LeIDCR_U_APM_HV_Voltage_out;
                                    /* '<S196>/PokeIDCR_U_APM_HV_VoltageChrt' */
    float32 LeIDCR_U_ACOutVoltage3_out;
                                     /* '<S192>/PokeIDCR_U_ACOutVoltage3Chrt' */
    float32 LeIDCR_U_ACOutVoltage2_out;
                                     /* '<S191>/PokeIDCR_U_ACOutVoltage2Chrt' */
    float32 LeIDCR_U_ACOutVoltage1_out;
                                     /* '<S190>/PokeIDCR_U_ACOutVoltage1Chrt' */
    float32 LeIDCR_T_Temp2_out;        /* '<S189>/PokeIDCR_T_Temp2Chrt' */
    float32 LeIDCR_T_Temp1_out;        /* '<S188>/PokeIDCR_T_Temp1Chrt' */
    float32 LeIDCR_T_APM_TempColdPlate_out;
                                 /* '<S187>/PokeIDCR_T_APM_TempColdPlateChrt' */
    float32 LeIDCR_Pct_UtilPctOfDCDC_out;
                                   /* '<S185>/PokeIDCR_Pct_UtilPctOfDCDCChrt' */
    float32 LeIDCR_Pct_IBS_BattSOC_out;
                                     /* '<S184>/PokeIDCR_Pct_IBS_BattSOCChrt' */
    float32 LeIDCR_P_EVSEMaxPwrLmt_out;
                                     /* '<S182>/PokeIDCR_P_EVSEMaxPwrLmtChrt' */
    float32 LeIDCR_P_AvailablePower_out;
                                    /* '<S181>/PokeIDCR_P_AvailablePowerChrt' */
    float32 LeIDCR_P_APM_OutputPower_out;
                                   /* '<S179>/PokeIDCR_P_APM_OutputPowerChrt' */
    float32 LeIDCR_I_V2XInCurrent_out;/* '<S175>/PokeIDCR_I_V2XInCurrentChrt' */
    float32 LeIDCR_I_V2L_DischargeCurrent_out;
                              /* '<S174>/PokeIDCR_I_V2L_DischargeCurrentChrt' */
    float32 LeIDCR_I_IBS_I_Batt_2_out;/* '<S171>/PokeIDCR_I_IBS_I_Batt_2Chrt' */
    float32 LeIDCR_I_IBS_I_Batt_out;   /* '<S170>/PokeIDCR_I_IBS_I_BattChrt' */
    float32 LeIDCR_I_EVSEPeakCurrRip_out;
                                   /* '<S169>/PokeIDCR_I_EVSEPeakCurrRipChrt' */
    float32 LeIDCR_I_EVSEOutputCurr_out;
                                    /* '<S168>/PokeIDCR_I_EVSEOutputCurrChrt' */
    float32 LeIDCR_I_EVSEMinCurrLmt_out;
                                    /* '<S167>/PokeIDCR_I_EVSEMinCurrLmtChrt' */
    float32 LeIDCR_I_EVSEMaxCurrLmt_out;
                                    /* '<S166>/PokeIDCR_I_EVSEMaxCurrLmtChrt' */
    float32 LeIDCR_I_EVSECurr_RegTol_out;
                                   /* '<S165>/PokeIDCR_I_EVSECurr_RegTolChrt' */
    float32 LeIDCR_I_DCInCurrent_out;  /* '<S164>/PokeIDCR_I_DCInCurrentChrt' */
    float32 LeIDCR_I_AcOutCurrent_out;/* '<S160>/PokeIDCR_I_AcOutCurrentChrt' */
    float32 LeIDCR_I_APM_LV_Current_out;
                                    /* '<S159>/PokeIDCR_I_APM_LV_CurrentChrt' */
    float32 LeIDCR_I_ACOutCurrent3_out;
                                     /* '<S154>/PokeIDCR_I_ACOutCurrent3Chrt' */
    float32 LeIDCR_I_ACOutCurrent2_out;
                                     /* '<S153>/PokeIDCR_I_ACOutCurrent2Chrt' */
    float32 LeIDCR_I_ACOutCurrent1_out;
                                     /* '<S152>/PokeIDCR_I_ACOutCurrent1Chrt' */
    float32 LeIDCR_E_EVSE_EnrgyToBeDlvrd_out;
                               /* '<S151>/PokeIDCR_E_EVSE_EnrgyToBeDlvrdChrt' */
    float32 OutportBufferForVeIDCR_I_IBS_I_Batt_Out_;/* '<S531>/Const1' */
    float32 OutportBufferForVeIDCR_I_IBS_I_Converted;/* '<S531>/Const4' */
    float32 OutportBufferForEVSE_NotificationMaxDela;/* '<S530>/Constant Value11' */
    float32 OutportBufferForEVSE_SASPmax;/* '<S530>/Constant Value4' */
    float32 OutportBufferForV2L_DischargeCurrent;/* '<S532>/Constant Value31' */
    float32 OutportBufferForV2L_DischargeVoltage;/* '<S532>/Constant Value2' */
    float32 OutportBufferForACOutCurrent1;/* '<S532>/Constant Value6' */
    float32 OutportBufferForACOutCurrent2;/* '<S532>/Constant Value17' */
    float32 OutportBufferForACOutCurrent3;/* '<S532>/Constant Value19' */
    float32 OutportBufferForACOutVoltage1;/* '<S532>/Constant Value21' */
    float32 OutportBufferForACOutVoltage2;/* '<S532>/Constant Value23' */
    float32 OutportBufferForACOutVoltage3;/* '<S532>/Constant Value25' */
    float32 OutportBufferForDCInCurrent;/* '<S532>/Constant Value26' */
    float32 OutportBufferForDCInVoltage;/* '<S532>/Constant Value28' */
    float32 OutportBufferForV2XFrequency;/* '<S532>/Constant Value32' */
    float32 OutportBufferForAcOutCurrent;/* '<S532>/Constant Value36' */
    float32 OutportBufferForAcOutVoltage;/* '<S532>/Constant Value40' */
    float32 OutportBufferForAvailablePower;/* '<S532>/Constant Value42' */
    float32 OutportBufferForV2XInCurrent;/* '<S532>/Constant Value50' */
    float32 OutportBufferForV2XInVoltage;/* '<S532>/Constant Value52' */
    float32 OutportBufferForV2XLVFeed; /* '<S532>/Constant Value55' */
    float32 OutportBufferForEVSEOutputCurr;/* '<S527>/Constant Value' */
    float32 OutportBufferForEVSEOutputVolt;/* '<S527>/Constant Value4' */
    float32 OutportBufferForEVSE_EnrgyToBeDlvrd;/* '<S527>/Constant Value8' */
    float32 OutportBufferForEVSEMaxPwrLmt;/* '<S527>/Constant Value10' */
    float32 OutportBufferForEVSECurr_RegTol;/* '<S527>/Constant Value12' */
    float32 OutportBufferForEVSEPeakCurrRip;/* '<S527>/Constant Value14' */
    float32 OutportBufferForEVSEMaxCurrLmt;/* '<S527>/Constant Value16' */
    float32 OutportBufferForEVSEMaxVoltLmt;/* '<S527>/Constant Value18' */
    float32 OutportBufferForEVSEMinCurrLmt;/* '<S527>/Constant Value20' */
    float32 OutportBufferForEVSEMinVoltLmt;/* '<S527>/Constant Value22' */
    float32 OutportBufferForEVSE_ThrshldVoltage_Init;/* '<S527>/Constant Value49' */
    float32 OutportBufferForIDCRgSPDtyCycReq_Init;/* '<S526>/Constant Value24' */
    float32 OutportBufferForAPM_HeatPlateTemp_Init;
                                   /* '<S526>/KeIDCR_T_APM_HeatPlateTempDflt' */
    float32 OutportBufferForAPM_LvIsetPFdbk_Init;/* '<S526>/Constant Value27' */
    float32 OutportBufferForIdcHvSetPFdbk_Init;/* '<S526>/Constant Value1' */
    float32 OutportBufferForAPM_HV_Voltage_Init;/* '<S526>/Constant Value2' */
    float32 OutportBufferForAPM_HvVsetPFdbk_Init;/* '<S526>/Constant Value30' */
    float32 OutportBufferForAPM_OutputPower_Init;/* '<S526>/Constant Value4' */
    float32 OutportBufferForAPM_InputPower_Init;/* '<S526>/Constant Value34' */
    float32 OutportBufferForAPM_HV_Current_Init;/* '<S526>/Constant Value37' */
    float32 OutportBufferForAPM_LV_Voltage_Init;/* '<S526>/Constant Value26' */
    float32 OutportBufferForAPM_LV_Current_Init;/* '<S526>/Constant Value35' */
    float32 OutportBufferForAPM_PwrLoss_Init;/* '<S526>/Constant Value18' */
    float32 OutportBufferForEVRDesVSetP_Init;/* '<S526>/Constant Value41' */
    float32 OutportBufferForVdcHvFdbk_Init;/* '<S526>/Constant Value36' */
    float32 OutportBufferForAPM_OutletCoolantTemp_In;/* '<S526>/Constant Value40' */
    float32 OutportBufferForAPM_DeratingPower_Init;/* '<S526>/Constant Value14' */
    float32 OutportBufferForIBS_BattTemp_Init;/* '<S526>/Constant Value42' */
    float32 OutportBufferForIBS_BattVolt_Init;/* '<S526>/Constant Value43' */
    float32 OutportBufferForIBS_BattSOC_Init;/* '<S526>/Constant Value22' */
    float32 OutportBufferForIBS2_BattTemp_Init;/* '<S526>/Constant Value53' */
    float32 OutportBufferForAPMTemp1_Init;/* '<S526>/Constant Value20' */
    float32 OutportBufferForAPMTemp2_Init;/* '<S526>/Constant Value19' */
    float32 OutportBufferForUtilPctOfDCDC_Init;/* '<S526>/Constant Value45' */
    float32 OutportBufferForIBS_I_Batt_Init;/* '<S526>/Constant Value52' */
    float32 OutportBufferForIBS_I_Batt_2_Init;/* '<S526>/Constant Value50' */
    float32 OutportBufferForISO15118_NotificationMax;/* '<S526>/Constant Value21' */
    float32 OutportBufferForChrgCurrentInput_Init;/* '<S529>/Constant Value34' */
    float32 OutportBufferForJ1772InputCrntAval_Init;/* '<S529>/Constant Value37' */
    float32 OutportBufferForBattSide_Curr_Init;/* '<S529>/Constant Value18' */
    float32 OutportBufferForChrgCrntAvail_Init;/* '<S529>/Constant Value41' */
    float32 OutportBufferForAC_InputVltOBCM_Init;/* '<S529>/Constant Value22' */
    float32 OutportBufferForBattSideVolt_Init;/* '<S529>/Constant Value53' */
    float32 OutportBufferForAC_Side_Curr_Init;/* '<S529>/Constant Value52' */
    float32 OutportBufferForPct_SOC_REM_Setpt_Init;/* '<S529>/Constant Value28' */
    float32 OutportBufferForACSideVolt_L2_Init;/* '<S529>/Constant Value24' */
    float32 OutportBufferForACSideVolt_L3_Init;/* '<S529>/Constant Value27' */
    float32 OutportBufferForACSideCurr_L2_Init;/* '<S529>/Constant Value40' */
    float32 OutportBufferForACSideCurr_L3_Init;/* '<S529>/Constant Value42' */
    float32 OutportBufferForOBC_Prox_Init;/* '<S529>/Constant Value51' */
    float32 OutportBufferForISO15118_EVSETimeStamp_I;/* '<S529>/Constant Value68' */
    float32 Merge1;                    /* '<S509>/Merge1' */
    uint16 LeIDCR_f_AcOutFrequency_out;
                                    /* '<S336>/PokeIDCR_f_AcOutFrequencyChrt' */
    uint16 OutportBufferForV2L_Output_Frequency;/* '<S532>/Constant Value3' */
    uint16 OutportBufferForV2L_Pilot_Frequency;/* '<S532>/Constant Value4' */
    uint16 OutportBufferForAcOutFrequency;/* '<S532>/Constant Value38' */
    uint16 OutportBufferForService_ID; /* '<S527>/Constant Value27' */
    uint16 OutportBufferForISO15118_ServiceID_Init;/* '<S526>/Constant Value66' */
    uint16 OutportBufferForEVSE_Accepted_Protocol_I;/* '<S529>/Constant Value71' */
    sint16 OutportBufferForAPM_DeratingReason_Init;/* '<S526>/Constant Value39' */
    sint16 OutportBufferForIBS_BattVoltSts_Init;/* '<S526>/Constant Value23' */
    sint16 OutportBufferForJ1772Stat_Init;/* '<S529>/Constant Value59' */
    sint16 OutportBufferForOBCM_Charger_Ready_Init;/* '<S529>/Constant Value57' */
    uint8 LeIDCR_f_ACOutFreq_out;      /* '<S335>/PokeIDCR_f_ACOutFreqChrt' */
    uint8 OutportBufferForSAScheduleTupleID;/* '<S530>/Constant Value13' */
    uint8 OutportBufferForACOutFreq;   /* '<S532>/Constant Value1' */
    uint8 OutportBufferForAPMSts_Init; /* '<S526>/Constant Value51' */
    uint8 OutportBufferForISO15118_SAScheduleTuple;/* '<S526>/Constant Value62' */
    uint8 OutportBufferForISO15118_SchemaID_Init;/* '<S526>/Constant Value64' */
    uint8 OutportBufferForISO15118_VersionNumMajor;/* '<S526>/Constant Value70' */
    uint8 OutportBufferForISO15118_VersionNumMinor;/* '<S526>/Constant Value72' */
    boolean VeIDCR_b_IBS_BattSOCFA_write_IRV;/* '<Root>/Merge_20' */
    boolean VeIDCR_b_IBS_b_BattFA_write_IRV;/* '<Root>/Merge_26' */
    boolean VeIDCR_b_IBS_b_BattSgnl_Rcvd_write_IRV;/* '<Root>/Merge_27' */
    boolean VeIDCR_b_IBS_b_Batt_2FA_write_IRV;/* '<Root>/Merge_38' */
    boolean VeIDCR_b_IBS_b_Batt_2Sgnl_Rcvd_write_IRV;/* '<Root>/Merge_39' */
    boolean VeIDCR_b_IBS_Current_StatusFA_write_IRV;/* '<Root>/Merge_31_Irv' */
    boolean VeIDCR_b_IBS_I_RANGEFA_write_IRV;/* '<Root>/Merge_29_Irv' */
    boolean IBS_BattSOCAcc_Init_IRV_IRV;/* '<Root>/Merge_244' */
    boolean LeIDCR_b_IBS_BattTempSgnl_Rcvd;
                                      /* '<S346>/PokeIDCR_t_IBS_BattTempChrt' */
    boolean LeIDCR_b_V2X_EVSE_Service_5_V2H_out;
                            /* '<S269>/PokeIDCR_b_V2X_EVSE_Service_5_V2HChrt' */
    boolean LeIDCR_b_V2X_EVSE_Service_5_Free_out;
                           /* '<S268>/PokeIDCR_b_V2X_EVSE_Service_5_FreeChrt' */
    boolean LeIDCR_b_V2XSts_out;       /* '<S267>/PokeIDCR_b_V2XStsChrt' */
    boolean LeIDCR_b_V2XFailSts_out;   /* '<S266>/PokeIDCR_b_V2XFailStsChrt' */
    boolean LeIDCR_b_V2XDerateSts_out;/* '<S265>/PokeIDCR_b_V2XDerateStsChrt' */
    boolean LeIDCR_b_PlugAndChargeReq_out;
                                  /* '<S260>/PokeIDCR_b_PlugAndChargeReqChrt' */
    boolean LeIDCR_b_PlugAndCharge_Sgnl_Rcvd;
                                  /* '<S260>/PokeIDCR_b_PlugAndChargeReqChrt' */
    boolean LeIDCR_b_J1772_S2_Status_out;
                                   /* '<S255>/PokeIDCR_b_J1772_S2_StatusChrt' */
    boolean LeIDCR_b_IDCM_Wakeup_HCP_out;
                                   /* '<S253>/PokeIDCR_b_IDCM_Wakeup_HCPChrt' */
    boolean LeIDCR_b_IDCM_GFCI_FaultSts_out;
                                /* '<S252>/PokeIDCR_b_IDCM_GFCI_FaultStsChrt' */
    boolean LeIDCR_b_EVSE_EnergizingState_FA_out;
                              /* '<S229>/PokeIDCR_b_EVSE_EnergizingStateChrt' */
    boolean LeIDCR_b_EVSE_ChargingSystemError_FA_out;
                          /* '<S228>/PokeIDCR_b_EVSE_ChargingSystemErrorChrt' */
    boolean LeIDCR_b_DC_Isolation_Disable_Cmd_out;
                          /* '<S221>/PokeIDCR_b_DC_Isolation_Disable_CmdChrt' */
    boolean LeIDCR_b_IBS_b_Batt_2Sgnl_Rcvd;
                                      /* '<S171>/PokeIDCR_I_IBS_I_Batt_2Chrt' */
    boolean LeIDCR_b_IBS_b_BattSgnl_Rcvd;/* '<S170>/PokeIDCR_I_IBS_I_BattChrt' */
    boolean OutportBufferForVeIDCR_b_IBS_I_Batt_FA_O;/* '<S531>/Const2' */
    boolean OutportBufferForVeIDCR_b_IBS_I_Batt_Sgnl;/* '<S531>/Const3' */
    boolean OutportBufferForVeIDCR_b_IBS_I_Converted;/* '<S531>/Const5' */
    boolean OutportBufferForTLS_Offered;/* '<S530>/Constant Value' */
    boolean OutportBufferForTLS_ConnectionFA;/* '<S530>/Constant Value1' */
    boolean OutportBufferForEVSE_Supported_ISO1;/* '<S530>/Constant Value5' */
    boolean OutportBufferForEVSE_Supported_DIN;/* '<S530>/Constant Value8' */
    boolean OutportBufferForEVSE_OfferedPaymentContr;/* '<S530>/Constant Value6' */
    boolean OutportBufferForEVSE_OfferedPaymentEIM;/* '<S530>/Constant Value9' */
    boolean OutportBufferForEVSE_Service2_Certificat;/* '<S530>/Constant Value2' */
    boolean OutportBufferForEVSE_NotificationFA;/* '<S530>/Constant Value10' */
    boolean OutportBufferForEVSE_NotificationMaxDe_f;/* '<S530>/Constant Value3' */
    boolean OutportBufferForReceiptRequired;/* '<S530>/Constant Value12' */
    boolean OutportBufferForReceiptRequired_FA;/* '<S530>/Constant Value18' */
    boolean OutportBufferForEVSE_SASPmaxFA;/* '<S530>/Constant Value7' */
    boolean OutportBufferForSAScheduleTupleIDFA;/* '<S530>/Constant Value14' */
    boolean OutportBufferForPlugAndChargeReq_Init;/* '<S530>/Constant Value15' */
    boolean OutportBufferForPlugAndChargeReqFA_Init;/* '<S530>/Constant Value16' */
    boolean OutportBufferForPlugAndChargeReq_SgnlRcv;/* '<S530>/Constant Value17' */
    boolean OutportBufferForV2L_Detected;/* '<S532>/Constant Value' */
    boolean OutportBufferForV2L_DetectedFA;/* '<S532>/Constant Value7' */
    boolean OutportBufferForV2L_DischargeCurrentFA;/* '<S532>/Constant Value8' */
    boolean OutportBufferForV2L_DischargeDeratingRsn;/* '<S532>/Constant Value9' */
    boolean OutportBufferForV2L_DischargeVoltageFA;/* '<S532>/Constant Value10' */
    boolean OutportBufferForV2L_Output_FrequencyFA;/* '<S532>/Constant Value11' */
    boolean OutportBufferForV2L_Pilot_FrequencyFA;/* '<S532>/Constant Value12' */
    boolean OutportBufferForV2L_DischargeFailStsFA;/* '<S532>/Constant Value13' */
    boolean OutportBufferForV2L_DischargeFaultRsnFA;/* '<S532>/Constant Value14' */
    boolean OutportBufferForACOutFreqFA;/* '<S532>/Constant Value5' */
    boolean OutportBufferForOutCurrent1FA;/* '<S532>/Constant Value15' */
    boolean OutportBufferForOutCurrent2FA;/* '<S532>/Constant Value16' */
    boolean OutportBufferForOutCurrent3FA;/* '<S532>/Constant Value18' */
    boolean OutportBufferForACOutVoltage1FA;/* '<S532>/Constant Value20' */
    boolean OutportBufferForACOutVoltage2FA;/* '<S532>/Constant Value22' */
    boolean OutportBufferForACOutVoltage3FA;/* '<S532>/Constant Value24' */
    boolean OutportBufferForDCInCurrentFA;/* '<S532>/Constant Value27' */
    boolean OutportBufferForDCInVoltageFA;/* '<S532>/Constant Value29' */
    boolean OutportBufferForDschrgFaultStsFA;/* '<S532>/Constant Value30' */
    boolean OutportBufferForV2XFrequencyFA;/* '<S532>/Constant Value33' */
    boolean OutportBufferForV2XSts;    /* '<S532>/Constant Value34' */
    boolean OutportBufferForV2XStsFA;  /* '<S532>/Constant Value35' */
    boolean OutportBufferForAcOutCurrentFA;/* '<S532>/Constant Value37' */
    boolean OutportBufferForAcOutFrequencyFA;/* '<S532>/Constant Value39' */
    boolean OutportBufferForAcOutVoltageFA;/* '<S532>/Constant Value41' */
    boolean OutportBufferForAvailablePowerFA;/* '<S532>/Constant Value43' */
    boolean OutportBufferForV2XDerateRsnFA;/* '<S532>/Constant Value44' */
    boolean OutportBufferForV2XDerateSts;/* '<S532>/Constant Value45' */
    boolean OutportBufferForV2XDerateStsFA;/* '<S532>/Constant Value46' */
    boolean OutportBufferForV2XFailSts;/* '<S532>/Constant Value47' */
    boolean OutportBufferForV2XFailStsFA;/* '<S532>/Constant Value48' */
    boolean OutportBufferForV2XFaultRsnFA;/* '<S532>/Constant Value49' */
    boolean OutportBufferForV2XInCurrentFA;/* '<S532>/Constant Value51' */
    boolean OutportBufferForV2XInVoltageFA;/* '<S532>/Constant Value53' */
    boolean OutportBufferForV2XInterlockStsFA;/* '<S532>/Constant Value54' */
    boolean OutportBufferForV2XLVFeedFA;/* '<S532>/Constant Value56' */
    boolean OutportBufferForV2XModeFeedbackFA;/* '<S532>/Constant Value57' */
    boolean OutportBufferForHVIL_A_Failed_Init;/* '<S528>/Constant Value' */
    boolean OutportBufferForHVIL_B_Failed_Init;/* '<S528>/Constant Value31' */
    boolean OutportBufferForHVIL_C_Failed_Init;/* '<S528>/Constant Value1' */
    boolean OutportBufferForDC_TimeOut;/* '<S527>/Constant Value2' */
    boolean OutportBufferForEVSECurrLmtAchvd;/* '<S527>/Constant Value1' */
    boolean OutportBufferForEVSEOutputCurr_FA;/* '<S527>/Constant Value3' */
    boolean OutportBufferForEVSEOutputVolt_FA;/* '<S527>/Constant Value5' */
    boolean OutportBufferForEVSEPwrLmtAchvd;/* '<S527>/Constant Value6' */
    boolean OutportBufferForEVSEVoltLmtAchvd;/* '<S527>/Constant Value7' */
    boolean OutportBufferForEVSE_EnrgyToBeDlvrd_FA;/* '<S527>/Constant Value9' */
    boolean OutportBufferForEVSEMaxPwrLmt_FA;/* '<S527>/Constant Value11' */
    boolean OutportBufferForEVSECurr_RegTol_FA;/* '<S527>/Constant Value13' */
    boolean OutportBufferForEVSEPeakCurrRip_FA;/* '<S527>/Constant Value15' */
    boolean OutportBufferForEVSEMaxCurrLmt_FA;/* '<S527>/Constant Value17' */
    boolean OutportBufferForEVSEMaxVoltLmt_FA;/* '<S527>/Constant Value19' */
    boolean OutportBufferForEVSEMinCurrLmt_FA;/* '<S527>/Constant Value21' */
    boolean OutportBufferForEVSEMinVoltLmt_FA;/* '<S527>/Constant Value23' */
    boolean OutportBufferForEVSE_FreeService;/* '<S527>/Constant Value24' */
    boolean OutportBufferForEVSEProcessing;/* '<S527>/Constant Value25' */
    boolean OutportBufferForIDCM_DCCA; /* '<S527>/Constant Value26' */
    boolean OutportBufferForResponse_Code_FA;/* '<S527>/Constant Value28' */
    boolean OutportBufferForTxMsgRequest_FA;/* '<S527>/Constant Value29' */
    boolean OutportBufferForEVSEIsolSts_FA;/* '<S527>/Constant Value30' */
    boolean OutportBufferForOffrdEnrgyTxType_FA;/* '<S527>/Constant Value31' */
    boolean OutportBufferForOffrdPayOptn_FA;/* '<S527>/Constant Value32' */
    boolean OutportBufferForSDP_Sts_FA;/* '<S527>/Constant Value33' */
    boolean OutportBufferForSLACSts_FA;/* '<S527>/Constant Value34' */
    boolean OutportBufferForSupProtoNm_FA;/* '<S527>/Constant Value35' */
    boolean OutportBufferForSupSchemaID_FA;/* '<S527>/Constant Value36' */
    boolean OutportBufferForSupVerNumMajor_FA;/* '<S527>/Constant Value37' */
    boolean OutportBufferForSupVerNumMinor_FA;/* '<S527>/Constant Value38' */
    boolean OutportBufferForEVCC_FailureRsn_FA;/* '<S527>/Constant Value39' */
    boolean OutportBufferForEVCC_FailureSts;/* '<S527>/Constant Value40' */
    boolean OutportBufferForEVCC_FailureSts_FA;/* '<S527>/Constant Value43' */
    boolean OutportBufferForTCPCommTerminated;/* '<S527>/Constant Value41' */
    boolean OutportBufferForTxMsgResponse_FA;/* '<S527>/Constant Value42' */
    boolean OutportBufferForEVSE_CHAdeMOProtocol_FA_;/* '<S527>/Constant Value44' */
    boolean OutportBufferForEVSE_ChargingSystemError;/* '<S527>/Constant Value45' */
    boolean OutportBufferForEVSE_ChargingSystemErr_d;/* '<S527>/Constant Value46' */
    boolean OutportBufferForEVSE_EnergizingState_Ini;/* '<S527>/Constant Value47' */
    boolean OutportBufferForEVSE_EnergizingState_FA_;/* '<S527>/Constant Value48' */
    boolean OutportBufferForEVSE_ThrshldVoltage_FA_I;/* '<S527>/Constant Value50' */
    boolean OutportBufferForAPM_HeatPlateTempFA_Init;/* '<S526>/Constant Value31' */
    boolean OutportBufferForAPM_LvIsetPFdbkFA_Init;/* '<S526>/Constant Value32' */
    boolean OutportBufferForIdcHvSetPFdbkFA_Init;/* '<S526>/Constant Value33' */
    boolean OutportBufferForAPM_HV_VoltageFA_Init;/* '<S526>/Constant Value3' */
    boolean OutportBufferForAPM_OutputPowerFA_Init;/* '<S526>/Constant Value5' */
    boolean OutportBufferForAPM_InputPowerFA_Init;/* '<S526>/Constant Value11' */
    boolean OutportBufferForAPM_HV_CurrentFA_Init;/* '<S526>/Constant Value10' */
    boolean OutportBufferForAPM_LV_VoltageFA_Init;/* '<S526>/Constant Value9' */
    boolean OutportBufferForAPM_LV_CurrentFA_Init;/* '<S526>/Constant Value8' */
    boolean OutportBufferForAPM_PwrLossFA_Init;/* '<S526>/Constant Value7' */
    boolean OutportBufferForEVRDesVSetPFA_Init;/* '<S526>/Constant Value6' */
    boolean OutportBufferForIBS_BattSocAcc_Init;/* '<S526>/Constant Value58' */
    boolean OutportBufferForAPMTemp1_FA_Init;/* '<S526>/Constant Value44' */
    boolean OutportBufferForAPMTemp2_FA_Init;/* '<S526>/Constant Value25' */
    boolean OutportBufferForUtilPctOfDCDC_FA_Init;/* '<S526>/Constant Value29' */
    boolean OutportBufferForHvTooHighIStatus_Init;/* '<S526>/Constant Value12' */
    boolean OutportBufferForHvTooLowVStatus_Init;/* '<S526>/Constant Value28' */
    boolean OutportBufferForHvOverVStatus_Init;/* '<S526>/Constant Value48' */
    boolean OutportBufferForLvTooHighIStatus_Init;/* '<S526>/Constant Value38' */
    boolean OutportBufferForLvTooLowVStatus_Init;/* '<S526>/Constant Value46' */
    boolean OutportBufferForLvHighVStatus_Init;/* '<S526>/Constant Value47' */
    boolean OutportBufferForIBS_BattTemp_FA_Init;/* '<S526>/Constant Value13' */
    boolean OutportBufferForIBS_BattTemp_SgnlRcvd_In;/* '<S526>/Constant Value15' */
    boolean OutportBufferForIBS_Volt_FA_Init;/* '<S526>/Constant Value16' */
    boolean OutportBufferForIBS_BattTemp_SOC_FA_Init;/* '<S526>/Constant Value17' */
    boolean OutportBufferForAPM_HvVsetPFdbk_FA_Init;/* '<S526>/Constant Value49' */
    boolean OutportBufferForIBS_I_Batt_FA_Init;/* '<S526>/Constant Value54' */
    boolean OutportBufferForIBS_I_Batt_SnglRcvd_Init;/* '<S526>/Constant Value55' */
    boolean OutportBufferForIBS_I_Batt_2_FA_Init;/* '<S526>/Constant Value60' */
    boolean OutportBufferForIBS_I_Batt_2_SnglRcvd_In;/* '<S526>/Constant Value61' */
    boolean OutportBufferForIBS_I_RANGE_FA_Init;/* '<S526>/Constant Value56' */
    boolean OutportBufferForIBS_Current_Status_FA_In;/* '<S526>/Constant Value57' */
    boolean OutportBufferForAPM2InterlockSts_FA_Init;/* '<S526>/Constant' */
    boolean OutportBufferForAPM3InterlockSts_FA_Init;/* '<S526>/Constant1' */
    boolean OutportBufferForAPMFailureType_FA_Init;/* '<S526>/Constant2' */
    boolean OutportBufferForISO15118_NotificationM_l;/* '<S526>/Constant Value59' */
    boolean OutportBufferForISO15118_ResponseCode_FA;/* '<S526>/Constant3' */
    boolean OutportBufferForISO15118_SAScheduleTup_d;/* '<S526>/Constant Value63' */
    boolean OutportBufferForISO15118_SchemaID_FA_Ini;/* '<S526>/Constant Value65' */
    boolean OutportBufferForISO15118_ServiceID_FA_In;/* '<S526>/Constant Value67' */
    boolean OutportBufferForISO15118_TLS_Offered_Ini;/* '<S526>/Constant Value68' */
    boolean OutportBufferForISO15118_TLS_Offered_FA_;/* '<S526>/Constant Value69' */
    boolean OutportBufferForISO15118_TLS_Status_FA_I;/* '<S526>/Constant4' */
    boolean OutportBufferForISO15118_VersionNumMaj_f;/* '<S526>/Constant Value71' */
    boolean OutportBufferForISO15118_VersionNumMin_e;/* '<S526>/Constant Value73' */
    boolean OutportBufferForChrgFailStsFA_Init;/* '<S529>/Constant Value' */
    boolean OutportBufferForJ1772_S2_Status_Init;/* '<S529>/Constant Value31' */
    boolean OutportBufferForJ1772_S2_StatusFA_Init;/* '<S529>/Constant Value1' */
    boolean OutportBufferForChrgFail_On_OBCM_Init;/* '<S529>/Constant Value32' */
    boolean OutportBufferForChrgFail_On_OBCMFA_Init;/* '<S529>/Constant Value2' */
    boolean OutportBufferForStatusACPresent_Init;/* '<S529>/Constant Value33' */
    boolean OutportBufferForStatusACPresentFA_Init;/* '<S529>/Constant Value3' */
    boolean OutportBufferForChrgCurrentFAInput_Init;/* '<S529>/Constant Value4' */
    boolean OutportBufferForChgEnblSts_Init;/* '<S529>/Constant Value35' */
    boolean OutportBufferForChgEnblStsFA_Init;/* '<S529>/Constant Value5' */
    boolean OutportBufferForAC_LnHi_Init;/* '<S529>/Constant Value36' */
    boolean OutportBufferForAC_LnHiFA_Init;/* '<S529>/Constant Value11' */
    boolean OutportBufferForJ1772InputCrntAvalFA_Ini;/* '<S529>/Constant Value10' */
    boolean OutportBufferForBattNotDetctd_Init;/* '<S529>/Constant Value26' */
    boolean OutportBufferForBattNotDetctdFA_Init;/* '<S529>/Constant Value9' */
    boolean OutportBufferForAC_LnLow_Init;/* '<S529>/Constant Value39' */
    boolean OutportBufferForAC_LnLowFA_Init;/* '<S529>/Constant Value8' */
    boolean OutportBufferForBattSide_CurrFA_Init;/* '<S529>/Constant Value7' */
    boolean OutportBufferForChrgCrntAvailFA_Init;/* '<S529>/Constant Value6' */
    boolean OutportBufferForEVSE_PilotStat_OBCMFA_In;/* '<S529>/Constant Value13' */
    boolean OutportBufferForProxStatFA_Init;/* '<S529>/Constant Value14' */
    boolean OutportBufferForJ1772StatFA_Init;/* '<S529>/Constant Value15' */
    boolean OutportBufferForChrgrModeStat_OBCMFA_Ini;/* '<S529>/Constant Value16' */
    boolean OutportBufferForOBCM_Charger_ReadyFA_Ini;/* '<S529>/Constant Value17' */
    boolean OutportBufferForChrgEnblOBCM_Init;/* '<S529>/Constant Value56' */
    boolean OutportBufferForChrgEnblOBCMFA_Init;/* '<S529>/Constant Value23' */
    boolean OutportBufferForAC_InputVltOBCMFA_Init;/* '<S529>/Constant Value21' */
    boolean OutportBufferForBattSideVoltFA_Init;/* '<S529>/Constant Value20' */
    boolean OutportBufferForAC_Side_CurrFA_Init;/* '<S529>/Constant Value19' */
    boolean OutportBufferForRdyForChrgFA_Init;/* '<S529>/Constant Value25' */
    boolean OutportBufferForBalMd_Init;/* '<S529>/Constant Value38' */
    boolean OutportBufferForBalMdFA_Init;/* '<S529>/Constant Value29' */
    boolean OutportBufferForSOC_REM_SetptFA_Init;/* '<S529>/Constant Value12' */
    boolean OutportBufferForACSideVolt_L2FA_Init;/* '<S529>/Constant Value43' */
    boolean OutportBufferForACSideVolt_L3FA_Init;/* '<S529>/Constant Value45' */
    boolean OutportBufferForOBCM_HVILStsFA_Init;/* '<S529>/Constant Value44' */
    boolean OutportBufferForEVSer_On_OBCM_Init;/* '<S529>/Constant Value30' */
    boolean OutportBufferForOBCM_Timeout_Init;/* '<S529>/Constant Value46' */
    boolean OutportBufferForOBCM_Timeout_FA_Init;/* '<S529>/Constant Value76' */
    boolean OutportBufferForChrgr_FaultStatesFA_Init;/* '<S529>/Constant Value47' */
    boolean OutportBufferForTxGBTMsgRequestFA_Init;/* '<S529>/Constant Value48' */
    boolean OutportBufferForTxGBTMsgResponseFA_Init;/* '<S529>/Constant Value49' */
    boolean OutportBufferForGBT_EVSEChrgPermitting_I;/* '<S529>/Constant Value50' */
    boolean OutportBufferForOBC_ProxFA_Init;/* '<S529>/Constant Value54' */
    boolean OutportBufferForEVSE_Offered_AC_Single_P;/* '<S529>/Constant Value55' */
    boolean OutportBufferForEVSE_Offered_AC_Single_d;/* '<S529>/Constant Value58' */
    boolean OutportBufferForEVSE_Offered_AC_Three_Ph;/* '<S529>/Constant Value60' */
    boolean OutportBufferForEVSE_Offered_AC_Three__p;/* '<S529>/Constant Value61' */
    boolean OutportBufferForEVSE_Offered_DC_Extended;/* '<S529>/Constant Value62' */
    boolean OutportBufferForEVSE_Offered_DC_Extend_f;/* '<S529>/Constant Value63' */
    boolean OutportBufferForEVSE_Service1_Charging_I;/* '<S529>/Constant Value64' */
    boolean OutportBufferForEVSE_Service1_Charging_F;/* '<S529>/Constant Value65' */
    boolean OutportBufferForEVSE_Service1_Free_Init;/* '<S529>/Constant Value66' */
    boolean OutportBufferForEVSE_Service1_Free_FA_In;/* '<S529>/Constant Value67' */
    boolean OutportBufferForISO15118_EVSETimeStamp_F;/* '<S529>/Constant Value69' */
    boolean OutportBufferForISO15118_MessageResponse;/* '<S529>/Constant Value70' */
    boolean OutportBufferForEVSE_Accepted_ProtocolFA;/* '<S529>/Constant Value72' */
    boolean OutportBufferForEVSE_OfferedService_FA_I;/* '<S529>/Constant Value73' */
    boolean OutportBufferForEVSE_ChrgStopControl_FA_;/* '<S529>/Constant Value74' */
    boolean OutportBufferForEVSE_Error_FA_Init;/* '<S529>/Constant Value75' */
    boolean OutportBufferForIDCM_GFCI_Fault_Status_I;/* '<S529>/Constant Value77' */
    boolean OutportBufferForIDCM_GFCI_Fault_Status_F;/* '<S529>/Constant Value78' */
    boolean OutportBufferForCharger_WeldingDetectAva;/* '<S529>/Constant Value79' */
    boolean OutportBufferForExtChargerSts_FA_Init;/* '<S529>/Constant Value80' */
    boolean OutportBufferForOBCM_CP1Sts_FA_Init;/* '<S529>/Constant Value81' */
    boolean OutportBufferForOBCM_CP2Sts_FA_Init;/* '<S529>/Constant Value82' */
    boolean OutportBufferForOBCM_CP3Sts_FA_Init;/* '<S529>/Constant Value83' */
    boolean OutportBufferForOBCM_CSSts_FA_Init;/* '<S529>/Constant Value84' */
    boolean OutportBufferForV2X_EVSE_Service_5_Free_;/* '<S529>/Constant Value85' */
    boolean OutportBufferForV2X_EVSE_Service_5_Fre_j;/* '<S529>/Constant Value86' */
    boolean OutportBufferForIDCM_Wakeup_HCP_Init;/* '<S529>/Constant Value87' */
    boolean OutportBufferForIDCM_Wakeup_HCP_FA_Init;/* '<S529>/Constant Value88' */
    boolean OutportBufferForDC_Isolation_Disable_Cmd;/* '<S529>/Constant Value89' */
    boolean OutportBufferForDC_Isolation_Disable_C_b;/* '<S529>/Constant Value90' */
    boolean OutportBufferForV2X_EVSE_Service_5_V2H_I;/* '<S529>/Constant Value91' */
    boolean OutportBufferForV2X_EVSE_Service_5_V2H_F;/* '<S529>/Constant Value92' */
    boolean OutportBufferForHVCMS_EVSEID_FA_Init;/* '<S529>/Constant Value94' */
    TeVTLR_e_DisChrgFailSts LeIDCR_e_V2L_DischargeFailSts_out;
                              /* '<S328>/PokeIDCR_e_V2L_DischargeFailStsChrt' */
    TeVTLR_e_DisChrgFailSts LeIDCR_e_DschrgFaultSts_out;
                                    /* '<S285>/PokeIDCR_e_DschrgFaultStsChrt' */
    TeVTLR_e_DisChrgFailSts OutportBufferForV2L_DischargeFailSts;/* '<S532>/Enumerated_Constant3' */
    TeVTLR_e_DisChrgFailSts OutportBufferForDschrgFaultSts;/* '<S532>/Enumerated_Constant1' */
    TeODCR_e_IO_CntrlSt OutportBufferForDVC_APMSts_Init;/* '<S526>/Enumerated_Constant6' */
    TeOBCR_e_ProxStat_OBCM OutportBufferForProxStat_Init;/* '<S529>/KeIDCR_e_Init_ProxStat' */
    TeOBCR_e_EVSE_PilotStat_OBCM OutportBufferForEVSE_PilotStat_OBCM_Init;/* '<S529>/Enumerated_Constant3' */
    TeOBCR_e_ChrgrModeStat_OBCM OutportBufferForChrgrModeStat_OBCM_Init;/* '<S529>/Enumerated_Constant4' */
    TeOBCR_e_ChrgFailSts OutportBufferForChrgFailSts_Init;/* '<S529>/Enumerated_Constant2' */
    TeIDCR_e_V2X_ModeFeedback LeIDCR_e_V2XModeFeedback_out;
                                   /* '<S333>/PokeIDCR_e_V2XModeFeedbackChrt' */
    TeIDCR_e_V2X_ModeFeedback OutportBufferForV2XModeFeedback;/* '<S532>/Enumerated_Constant7' */
    TeIDCR_e_V2X_FaultRsn LeIDCR_e_V2XFaultRsn_out;/* '<S331>/PokeIDCR_e_V2XFaultRsnChrt' */
    TeIDCR_e_V2X_FaultRsn OutportBufferForV2XFaultRsn;/* '<S532>/Enumerated_Constant5' */
    TeIDCR_e_V2L_DischargeFaultRsn LeIDCR_e_V2L_DischargeFaultRsn_out;
                             /* '<S329>/PokeIDCR_e_V2L_DischargeFaultRsnChrt' */
    TeIDCR_e_V2L_DischargeFaultRsn OutportBufferForV2L_DischargeFaultRsn;/* '<S532>/Enumerated_Constant2' */
    TeIDCR_e_V2L_DischargeDeratingRsn LeIDCR_e_V2XDerateRsn_out;
                                      /* '<S330>/PokeIDCR_e_V2XDerateRsnChrt' */
    TeIDCR_e_V2L_DischargeDeratingRsn OutportBufferForV2L_DischargeDeratingR_p;/* '<S532>/Enumerated_Constant' */
    TeIDCR_e_V2L_DischargeDeratingRsn OutportBufferForV2XDerateRsn;/* '<S532>/Enumerated_Constant4' */
    TeIDCR_e_TxMsgSt LeIDCR_e_TxMessageResponse_out;
                                 /* '<S326>/PokeIDCR_e_TxMessageResponseChrt' */
    TeIDCR_e_TxMsgSt LeIDCR_e_TxMessageRequest_out;
                                  /* '<S325>/PokeIDCR_e_TxMessageRequestChrt' */
    TeIDCR_e_TxMsgSt OutportBufferForTxMsgRequest;/* '<S527>/Enumerated_Constant1' */
    TeIDCR_e_TxMsgSt OutportBufferForTxMsgResponse;/* '<S527>/Enumerated_Constant13' */
    TeIDCR_e_TxGBTMessageResponse LeIDCR_e_TxGBTMsgResponse_out;
                                  /* '<S324>/PokeIDCR_e_TxGBTMsgResponseChrt' */
    TeIDCR_e_TxGBTMessageResponse OutportBufferForTxGBTMsgResponse_Init;/* '<S529>/Enumerated_Constant9' */
    TeIDCR_e_TxGBTMessageRequest LeIDCR_e_TxGBTMsgRequest_out;
                                   /* '<S323>/PokeIDCR_e_TxGBTMsgRequestChrt' */
    TeIDCR_e_TxGBTMessageRequest OutportBufferForTxGBTMsgRequest_Init;/* '<S529>/Enumerated_Constant7' */
    TeIDCR_e_TLS_Connection OutportBufferForTLS_Connection;/* '<S530>/Enumerated_Constant3' */
    TeIDCR_e_TLS_Connection OutportBufferForISO15118_TLS_Status_Init;/* '<S526>/EnumeratedConstant4' */
    TeIDCR_e_SLACSts OutportBufferForSLACSts;/* '<S527>/Enumerated_Constant7' */
    TeIDCR_e_SDP_Sts OutportBufferForSDP_Sts;/* '<S527>/Enumerated_Constant6' */
    TeIDCR_e_RC LeIDCR_e_Resp_Code_out;/* '<S316>/PokeIDCR_e_Resp_CodeChrt' */
    TeIDCR_e_RC OutportBufferForResponse_Code;/* '<S527>/Enumerated_Constant' */
    TeIDCR_e_Prox_GBT OutportBufferForProx_GBT_Init;/* '<S529>/Enumerated_Constant6' */
    TeIDCR_e_Plug_and_Charge OutportBufferForPROXY_Plug_and_Charge;/* '<S530>/Enumerated_Constant2' */
    TeIDCR_e_OffrdPayOptn OutportBufferForOffrdPayOptn;/* '<S527>/Enumerated_Constant14' */
    TeIDCR_e_OffrdEnrgyTxType OutportBufferForOffrdEnrgyTxType;/* '<S527>/Enumerated_Constant4' */
    TeIDCR_e_OBCM_Charger_Ready OutportBufferForOBCM_Chrgr_Rdy;/* '<S529>/Enumerated_Constant1' */
    TeIDCR_e_OBCM_CSSts LeIDCR_e_OBCM_CSSts_out;/* '<S309>/PokeIDCR_e_OBCM_CSStsChrt' */
    TeIDCR_e_OBCM_CSSts OutportBufferForOBCM_CSSts_Init;/* '<S529>/Enumerated_Constant19' */
    TeIDCR_e_OBCM_CP3Sts LeIDCR_e_OBCM_CP3Sts_out;/* '<S308>/PokeIDCR_e_OBCM_CP3StsChrt' */
    TeIDCR_e_OBCM_CP3Sts OutportBufferForOBCM_CP3Sts_Init;/* '<S529>/Enumerated_Constant18' */
    TeIDCR_e_OBCM_CP2Sts LeIDCR_e_OBCM_CP2Sts_out;/* '<S307>/PokeIDCR_e_OBCM_CP2StsChrt' */
    TeIDCR_e_OBCM_CP2Sts OutportBufferForOBCM_CP2Sts_Init;/* '<S529>/Enumerated_Constant17' */
    TeIDCR_e_OBCM_CP1Sts LeIDCR_e_OBCM_CP1Sts_out;/* '<S306>/PokeIDCR_e_OBCM_CP1StsChrt' */
    TeIDCR_e_OBCM_CP1Sts OutportBufferForOBCM_CP1Sts_Init;/* '<S529>/Enumerated_Constant16' */
    TeIDCR_e_MessageResponse OutportBufferForISO15118_MessageRespon_b;/* '<S529>/Enumerated_Constant10' */
    TeIDCR_e_ISOResponseCode OutportBufferForISO15118_ResponseCode_In;/* '<S526>/EnumeratedConstant3' */
    TeIDCR_e_ExtChargerSts LeIDCR_e_ExtChargerSts_out;
                                     /* '<S296>/PokeIDCR_e_ExtChargerStsChrt' */
    TeIDCR_e_ExtChargerSts OutportBufferForExtChargerSts_Init;/* '<S529>/Enumerated_Constant15' */
    TeIDCR_e_EVSE_OfferedService LeIDCR_e_EVSE_OfferedService_out;
                               /* '<S293>/PokeIDCR_e_EVSE_OfferedServiceChrt' */
    TeIDCR_e_EVSE_OfferedService OutportBufferForEVSE_OfferedService_Init;/* '<S529>/Enumerated_Constant11' */
    TeIDCR_e_EVSE_Error OutportBufferForEVSE_Error_Init;/* '<S529>/Enumerated_Constant13' */
    TeIDCR_e_EVSE_ChrgStopControl OutportBufferForEVSE_ChrgStopControl_Ini;/* '<S529>/Enumerated_Constant12' */
    TeIDCR_e_EVSEStsCode OutportBufferForEVSEStsCode;/* '<S527>/Enumerated_Constant3' */
    TeIDCR_e_EVSENotification OutportBufferForEVSE_Notification;/* '<S530>/Enumerated_Constant1' */
    TeIDCR_e_EVSEIsolSts LeIDCR_e_EVSEIsolSts_out;/* '<S287>/PokeIDCR_e_EVSEIsolStsChrt' */
    TeIDCR_e_EVSEIsolSts OutportBufferForEVSEIsolSts;/* '<S527>/Enumerated_Constant2' */
    TeIDCR_e_EVCCFailRsn LeIDCR_e_EVCC_FailureRsn_out;
                                   /* '<S286>/PokeIDCR_e_EVCC_FailureRsnChrt' */
    TeIDCR_e_EVCCFailRsn OutportBufferForEVCC_FailureRsn;/* '<S527>/Enumerated Constant18' */
    TeIDCR_e_Charger_WeldDetAvail LeIDCR_e_Charger_WeldingDetectAvail_out;
                        /* '<S281>/PokeIDCR_e_Charger_WeldingDetectAvailChrt' */
    TeIDCR_e_Charger_WeldDetAvail OutportBufferForCharger_WeldingDetectA_m;/* '<S529>/Enumerated_Constant14' */
    TeIDCR_e_Charger_FaultStates LeIDCR_e_Chrgr_FaultStates_out;
                                 /* '<S284>/PokeIDCR_e_Chrgr_FaultStatesChrt' */
    TeIDCR_e_Charger_FaultStates OutportBufferForChrgr_FaultStates_Init;/* '<S529>/Enumerated_Constant5' */
    TeIDCR_e_CHAdeMOPrtcl LeIDCR_e_EVSE_CHAdeMOProtocol_out;
                              /* '<S289>/PokeIDCR_e_EVSE_CHAdeMOProtocolChrt' */
    TeIDCR_e_CHAdeMOPrtcl OutportBufferForEVSE_CHAdeMOProtocol_Ini;/* '<S527>/Enumerated_Constant5' */
    TeHVTR_e_HV_IntrlkStat LeIDCR_e_V2XInterlockSts_out;
                                   /* '<S332>/PokeIDCR_e_V2XInterlockStsChrt' */
    TeHVTR_e_HV_IntrlkStat LeIDCR_e_APM3InterlockSts_out;
                                  /* '<S274>/PokeIDCR_e_APM3InterlockStsChrt' */
    TeHVTR_e_HV_IntrlkStat LeIDCR_e_APM2InterlockSts_out;
                                  /* '<S273>/PokeIDCR_e_APM2InterlockStsChrt' */
    TeHVTR_e_HV_IntrlkStat OutportBufferForV2XInterlockSts;/* '<S532>/Enumerated_Constant6' */
    TeHVTR_e_HV_IntrlkStat OutportBufferForAPM2InterlockSts_Init;/* '<S526>/EnumeratedConstant' */
    TeHVTR_e_HV_IntrlkStat OutportBufferForAPM3InterlockSts_Init;/* '<S526>/EnumeratedConstant1' */
    TeHVTR_e_HV_IntrlkStat OutportBufferForOBCM_HVILSts_Init;/* '<S529>/Enumerated_Constant8' */
    TeGENR_e_IBS_I_Range IBS_I_RANGE_Init_write_IRV;/* '<Root>/Merge_28_Irv' */
    TeGENR_e_IBS_I_Range OutportBufferForIBS_I_RANGE_Init;/* '<S526>/Enumerated_Constant7' */
    TeGENR_e_IBS_Current_Status IBS_Current_Status_Init_write_IRV;/* '<Root>/Merge_30_Irv' */
    TeGENR_e_IBS_Current_Status OutportBufferForIBS_Current_Status_Init;/* '<S526>/Enumerated_Constant8' */
    TeGENR_e_IBS_BattTempSts OutportBufferForIBS_BattTempSts_Init;/* '<S526>/Enumerated_Constant4' */
    TeGENR_e_DeratingModeStatus OutportBufferForAPM_DeratingModeStatus_I;/* '<S526>/Enumerated_Constant5' */
    TeGENR_e_APM_OperMode OutportBufferForstModeRqAPM_Init;/* '<S526>/Enumerated_Constant3' */
    TeGENR_e_APM_FailureType OutportBufferForAPMFailureType;/* '<S526>/Enumerated_Constant' */
    TeGENR_e_APM_FailureModeStatus OutportBufferForAPM_FailureModeStatus_In;/* '<S526>/Enumerated_Constant2' */
    TeGENR_e_APM_FailureModeStatus OutportBufferForAPM_FailureReason_Init;/* '<S526>/Enumerated_Constant1' */
    TeBPCR_e_ThrmlRnawy_WarnSts OutportBufferForAPM_ThermalRunaway_Init;/* '<S526>/EnumeratedConstant2' */
    B_FsftIDCR_cmp_ISO15118_EVSETimeStampC_T
        sf_FsftIDCR_b_EVSE_Service1_FreeChrt;
                                 /* '<S67>/FsftIDCR_b_EVSE_Service1_FreeChrt' */
    B_FsftIDCR_e_V2XInterlockStsChrt_IDCR__T sf_FsftIDCR_e_V2XModeFeedbackChrt;
                                   /* '<S137>/FsftIDCR_e_V2XModeFeedbackChrt' */
    B_FsftIDCR_e_V2XInterlockStsChrt_IDCR__T sf_FsftIDCR_e_V2XInterlockStsChrt;
                                   /* '<S136>/FsftIDCR_e_V2XInterlockStsChrt' */
    B_FsftIDCR_cmp_ISO15118_EVSETimeStampC_T
        sf_FsftIDCR_cmp_ISO15118_EVSETimeStampCh;
                          /* '<S101>/FsftIDCR_cmp_ISO15118_EVSETimeStampChrt' */
}
B_IDCR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const uint32 ConstantValue93;      /* '<S529>/Constant Value93' */
    const float32 Const1;              /* '<S531>/Const1' */
    const float32 Const4;              /* '<S531>/Const4' */
    const float32 ConstantValue11;     /* '<S530>/Constant Value11' */
    const float32 ConstantValue4;      /* '<S530>/Constant Value4' */
    const float32 ConstantValue31;     /* '<S532>/Constant Value31' */
    const float32 ConstantValue2;      /* '<S532>/Constant Value2' */
    const float32 ConstantValue6;      /* '<S532>/Constant Value6' */
    const float32 ConstantValue17;     /* '<S532>/Constant Value17' */
    const float32 ConstantValue19;     /* '<S532>/Constant Value19' */
    const float32 ConstantValue21;     /* '<S532>/Constant Value21' */
    const float32 ConstantValue23;     /* '<S532>/Constant Value23' */
    const float32 ConstantValue25;     /* '<S532>/Constant Value25' */
    const float32 ConstantValue26;     /* '<S532>/Constant Value26' */
    const float32 ConstantValue28;     /* '<S532>/Constant Value28' */
    const float32 ConstantValue32;     /* '<S532>/Constant Value32' */
    const float32 ConstantValue36;     /* '<S532>/Constant Value36' */
    const float32 ConstantValue40;     /* '<S532>/Constant Value40' */
    const float32 ConstantValue42;     /* '<S532>/Constant Value42' */
    const float32 ConstantValue50;     /* '<S532>/Constant Value50' */
    const float32 ConstantValue52;     /* '<S532>/Constant Value52' */
    const float32 ConstantValue55;     /* '<S532>/Constant Value55' */
    const float32 ConstantValue;       /* '<S527>/Constant Value' */
    const float32 ConstantValue4_k;    /* '<S527>/Constant Value4' */
    const float32 ConstantValue8;      /* '<S527>/Constant Value8' */
    const float32 ConstantValue10;     /* '<S527>/Constant Value10' */
    const float32 ConstantValue12;     /* '<S527>/Constant Value12' */
    const float32 ConstantValue14;     /* '<S527>/Constant Value14' */
    const float32 ConstantValue16;     /* '<S527>/Constant Value16' */
    const float32 ConstantValue18;     /* '<S527>/Constant Value18' */
    const float32 ConstantValue20;     /* '<S527>/Constant Value20' */
    const float32 ConstantValue22;     /* '<S527>/Constant Value22' */
    const float32 ConstantValue49;     /* '<S527>/Constant Value49' */
    const float32 ConstantValue24;     /* '<S526>/Constant Value24' */
    const float32 ConstantValue27;     /* '<S526>/Constant Value27' */
    const float32 ConstantValue1;      /* '<S526>/Constant Value1' */
    const float32 ConstantValue2_j;    /* '<S526>/Constant Value2' */
    const float32 ConstantValue30;     /* '<S526>/Constant Value30' */
    const float32 ConstantValue4_c;    /* '<S526>/Constant Value4' */
    const float32 ConstantValue34;     /* '<S526>/Constant Value34' */
    const float32 ConstantValue37;     /* '<S526>/Constant Value37' */
    const float32 ConstantValue26_a;   /* '<S526>/Constant Value26' */
    const float32 ConstantValue35;     /* '<S526>/Constant Value35' */
    const float32 ConstantValue18_d;   /* '<S526>/Constant Value18' */
    const float32 ConstantValue41;     /* '<S526>/Constant Value41' */
    const float32 ConstantValue36_m;   /* '<S526>/Constant Value36' */
    const float32 ConstantValue40_n;   /* '<S526>/Constant Value40' */
    const float32 ConstantValue14_e;   /* '<S526>/Constant Value14' */
    const float32 ConstantValue42_m;   /* '<S526>/Constant Value42' */
    const float32 ConstantValue43;     /* '<S526>/Constant Value43' */
    const float32 ConstantValue22_d;   /* '<S526>/Constant Value22' */
    const float32 ConstantValue53;     /* '<S526>/Constant Value53' */
    const float32 ConstantValue20_g;   /* '<S526>/Constant Value20' */
    const float32 ConstantValue19_b;   /* '<S526>/Constant Value19' */
    const float32 ConstantValue45;     /* '<S526>/Constant Value45' */
    const float32 ConstantValue52_d;   /* '<S526>/Constant Value52' */
    const float32 ConstantValue50_c;   /* '<S526>/Constant Value50' */
    const float32 ConstantValue21_c;   /* '<S526>/Constant Value21' */
    const float32 ConstantValue34_n;   /* '<S529>/Constant Value34' */
    const float32 ConstantValue37_n;   /* '<S529>/Constant Value37' */
    const float32 ConstantValue18_h;   /* '<S529>/Constant Value18' */
    const float32 ConstantValue41_g;   /* '<S529>/Constant Value41' */
    const float32 ConstantValue22_h;   /* '<S529>/Constant Value22' */
    const float32 ConstantValue53_c;   /* '<S529>/Constant Value53' */
    const float32 ConstantValue52_n;   /* '<S529>/Constant Value52' */
    const float32 ConstantValue28_k;   /* '<S529>/Constant Value28' */
    const float32 ConstantValue24_g;   /* '<S529>/Constant Value24' */
    const float32 ConstantValue27_k;   /* '<S529>/Constant Value27' */
    const float32 ConstantValue40_nx;  /* '<S529>/Constant Value40' */
    const float32 ConstantValue42_l;   /* '<S529>/Constant Value42' */
    const float32 ConstantValue51;     /* '<S529>/Constant Value51' */
    const float32 ConstantValue68;     /* '<S529>/Constant Value68' */
    const uint16 ConstantValue3;       /* '<S532>/Constant Value3' */
    const uint16 ConstantValue4_cl;    /* '<S532>/Constant Value4' */
    const uint16 ConstantValue38;      /* '<S532>/Constant Value38' */
    const uint16 ConstantValue27_f;    /* '<S527>/Constant Value27' */
    const uint16 ConstantValue66;      /* '<S526>/Constant Value66' */
    const uint16 ConstantValue71;      /* '<S529>/Constant Value71' */
    const sint16 ConstantValue39;      /* '<S526>/Constant Value39' */
    const sint16 ConstantValue23_a;    /* '<S526>/Constant Value23' */
    const sint16 ConstantValue59;      /* '<S529>/Constant Value59' */
    const sint16 ConstantValue57;      /* '<S529>/Constant Value57' */
    const uint8 ConstantValue13;       /* '<S530>/Constant Value13' */
    const uint8 ConstantValue1_n;      /* '<S532>/Constant Value1' */
    const uint8 ConstantValue51_j;     /* '<S526>/Constant Value51' */
    const uint8 ConstantValue62;       /* '<S526>/Constant Value62' */
    const uint8 ConstantValue64;       /* '<S526>/Constant Value64' */
    const uint8 ConstantValue70;       /* '<S526>/Constant Value70' */
    const uint8 ConstantValue72;       /* '<S526>/Constant Value72' */
    const boolean Const2;              /* '<S531>/Const2' */
    const boolean Const3;              /* '<S531>/Const3' */
    const boolean Const5;              /* '<S531>/Const5' */
    const boolean ConstantValue_d;     /* '<S530>/Constant Value' */
    const boolean ConstantValue1_h;    /* '<S530>/Constant Value1' */
    const boolean ConstantValue5;      /* '<S530>/Constant Value5' */
    const boolean ConstantValue8_h;    /* '<S530>/Constant Value8' */
    const boolean ConstantValue6_c;    /* '<S530>/Constant Value6' */
    const boolean ConstantValue9;      /* '<S530>/Constant Value9' */
    const boolean ConstantValue2_h;    /* '<S530>/Constant Value2' */
    const boolean ConstantValue10_i;   /* '<S530>/Constant Value10' */
    const boolean ConstantValue3_n;    /* '<S530>/Constant Value3' */
    const boolean ConstantValue12_e;   /* '<S530>/Constant Value12' */
    const boolean ConstantValue18_j;   /* '<S530>/Constant Value18' */
    const boolean ConstantValue7;      /* '<S530>/Constant Value7' */
    const boolean ConstantValue14_c;   /* '<S530>/Constant Value14' */
    const boolean ConstantValue15;     /* '<S530>/Constant Value15' */
    const boolean ConstantValue16_f;   /* '<S530>/Constant Value16' */
    const boolean ConstantValue17_p;   /* '<S530>/Constant Value17' */
    const boolean ConstantValue_m;     /* '<S532>/Constant Value' */
    const boolean ConstantValue7_a;    /* '<S532>/Constant Value7' */
    const boolean ConstantValue8_g;    /* '<S532>/Constant Value8' */
    const boolean ConstantValue9_j;    /* '<S532>/Constant Value9' */
    const boolean ConstantValue10_ib;  /* '<S532>/Constant Value10' */
    const boolean ConstantValue11_j;   /* '<S532>/Constant Value11' */
    const boolean ConstantValue12_b;   /* '<S532>/Constant Value12' */
    const boolean ConstantValue13_n;   /* '<S532>/Constant Value13' */
    const boolean ConstantValue14_g;   /* '<S532>/Constant Value14' */
    const boolean ConstantValue5_j;    /* '<S532>/Constant Value5' */
    const boolean ConstantValue15_a;   /* '<S532>/Constant Value15' */
    const boolean ConstantValue16_d;   /* '<S532>/Constant Value16' */
    const boolean ConstantValue18_e;   /* '<S532>/Constant Value18' */
    const boolean ConstantValue20_o;   /* '<S532>/Constant Value20' */
    const boolean ConstantValue22_j;   /* '<S532>/Constant Value22' */
    const boolean ConstantValue24_m;   /* '<S532>/Constant Value24' */
    const boolean ConstantValue27_i;   /* '<S532>/Constant Value27' */
    const boolean ConstantValue29;     /* '<S532>/Constant Value29' */
    const boolean ConstantValue30_a;   /* '<S532>/Constant Value30' */
    const boolean ConstantValue33;     /* '<S532>/Constant Value33' */
    const boolean ConstantValue34_i;   /* '<S532>/Constant Value34' */
    const boolean ConstantValue35_k;   /* '<S532>/Constant Value35' */
    const boolean ConstantValue37_e;   /* '<S532>/Constant Value37' */
    const boolean ConstantValue39_k;   /* '<S532>/Constant Value39' */
    const boolean ConstantValue41_i;   /* '<S532>/Constant Value41' */
    const boolean ConstantValue43_d;   /* '<S532>/Constant Value43' */
    const boolean ConstantValue44;     /* '<S532>/Constant Value44' */
    const boolean ConstantValue45_g;   /* '<S532>/Constant Value45' */
    const boolean ConstantValue46;     /* '<S532>/Constant Value46' */
    const boolean ConstantValue47;     /* '<S532>/Constant Value47' */
    const boolean ConstantValue48;     /* '<S532>/Constant Value48' */
    const boolean ConstantValue49_d;   /* '<S532>/Constant Value49' */
    const boolean ConstantValue51_f;   /* '<S532>/Constant Value51' */
    const boolean ConstantValue53_p;   /* '<S532>/Constant Value53' */
    const boolean ConstantValue54;     /* '<S532>/Constant Value54' */
    const boolean ConstantValue56;     /* '<S532>/Constant Value56' */
    const boolean ConstantValue57_o;   /* '<S532>/Constant Value57' */
    const boolean ConstantValue_i;     /* '<S528>/Constant Value' */
    const boolean ConstantValue31_n;   /* '<S528>/Constant Value31' */
    const boolean ConstantValue1_o;    /* '<S528>/Constant Value1' */
    const boolean ConstantValue2_k;    /* '<S527>/Constant Value2' */
    const boolean ConstantValue1_c;    /* '<S527>/Constant Value1' */
    const boolean ConstantValue3_b;    /* '<S527>/Constant Value3' */
    const boolean ConstantValue5_d;    /* '<S527>/Constant Value5' */
    const boolean ConstantValue6_i;    /* '<S527>/Constant Value6' */
    const boolean ConstantValue7_i;    /* '<S527>/Constant Value7' */
    const boolean ConstantValue9_h;    /* '<S527>/Constant Value9' */
    const boolean ConstantValue11_p;   /* '<S527>/Constant Value11' */
    const boolean ConstantValue13_j;   /* '<S527>/Constant Value13' */
    const boolean ConstantValue15_ay;  /* '<S527>/Constant Value15' */
    const boolean ConstantValue17_n;   /* '<S527>/Constant Value17' */
    const boolean ConstantValue19_p;   /* '<S527>/Constant Value19' */
    const boolean ConstantValue21_h;   /* '<S527>/Constant Value21' */
    const boolean ConstantValue23_k;   /* '<S527>/Constant Value23' */
    const boolean ConstantValue24_g1;  /* '<S527>/Constant Value24' */
    const boolean ConstantValue25_g;   /* '<S527>/Constant Value25' */
    const boolean ConstantValue26_p;   /* '<S527>/Constant Value26' */
    const boolean ConstantValue28_b;   /* '<S527>/Constant Value28' */
    const boolean ConstantValue29_p;   /* '<S527>/Constant Value29' */
    const boolean ConstantValue30_p;   /* '<S527>/Constant Value30' */
    const boolean ConstantValue31_p;   /* '<S527>/Constant Value31' */
    const boolean ConstantValue32_d;   /* '<S527>/Constant Value32' */
    const boolean ConstantValue33_o;   /* '<S527>/Constant Value33' */
    const boolean ConstantValue34_nt;  /* '<S527>/Constant Value34' */
    const boolean ConstantValue35_g;   /* '<S527>/Constant Value35' */
    const boolean ConstantValue36_l;   /* '<S527>/Constant Value36' */
    const boolean ConstantValue37_f;   /* '<S527>/Constant Value37' */
    const boolean ConstantValue38_j;   /* '<S527>/Constant Value38' */
    const boolean ConstantValue39_g;   /* '<S527>/Constant Value39' */
    const boolean ConstantValue40_i;   /* '<S527>/Constant Value40' */
    const boolean ConstantValue43_h;   /* '<S527>/Constant Value43' */
    const boolean ConstantValue41_p;   /* '<S527>/Constant Value41' */
    const boolean ConstantValue42_a;   /* '<S527>/Constant Value42' */
    const boolean ConstantValue44_e;   /* '<S527>/Constant Value44' */
    const boolean ConstantValue45_k;   /* '<S527>/Constant Value45' */
    const boolean ConstantValue46_h;   /* '<S527>/Constant Value46' */
    const boolean ConstantValue47_b;   /* '<S527>/Constant Value47' */
    const boolean ConstantValue48_d;   /* '<S527>/Constant Value48' */
    const boolean ConstantValue50_c5;  /* '<S527>/Constant Value50' */
    const boolean ConstantValue31_d;   /* '<S526>/Constant Value31' */
    const boolean ConstantValue32_o;   /* '<S526>/Constant Value32' */
    const boolean ConstantValue33_i;   /* '<S526>/Constant Value33' */
    const boolean ConstantValue3_k;    /* '<S526>/Constant Value3' */
    const boolean ConstantValue5_a;    /* '<S526>/Constant Value5' */
    const boolean ConstantValue11_b;   /* '<S526>/Constant Value11' */
    const boolean ConstantValue10_p;   /* '<S526>/Constant Value10' */
    const boolean ConstantValue9_m;    /* '<S526>/Constant Value9' */
    const boolean ConstantValue8_b;    /* '<S526>/Constant Value8' */
    const boolean ConstantValue7_c;    /* '<S526>/Constant Value7' */
    const boolean ConstantValue6_p;    /* '<S526>/Constant Value6' */
    const boolean ConstantValue58;     /* '<S526>/Constant Value58' */
    const boolean ConstantValue44_ey;  /* '<S526>/Constant Value44' */
    const boolean ConstantValue25_p;   /* '<S526>/Constant Value25' */
    const boolean ConstantValue29_d;   /* '<S526>/Constant Value29' */
    const boolean ConstantValue12_eu;  /* '<S526>/Constant Value12' */
    const boolean ConstantValue28_o;   /* '<S526>/Constant Value28' */
    const boolean ConstantValue48_a;   /* '<S526>/Constant Value48' */
    const boolean ConstantValue38_m;   /* '<S526>/Constant Value38' */
    const boolean ConstantValue46_e;   /* '<S526>/Constant Value46' */
    const boolean ConstantValue47_c;   /* '<S526>/Constant Value47' */
    const boolean ConstantValue13_h;   /* '<S526>/Constant Value13' */
    const boolean ConstantValue15_m;   /* '<S526>/Constant Value15' */
    const boolean ConstantValue16_dz;  /* '<S526>/Constant Value16' */
    const boolean ConstantValue17_o;   /* '<S526>/Constant Value17' */
    const boolean ConstantValue49_a;   /* '<S526>/Constant Value49' */
    const boolean ConstantValue54_d;   /* '<S526>/Constant Value54' */
    const boolean ConstantValue55_g;   /* '<S526>/Constant Value55' */
    const boolean ConstantValue60;     /* '<S526>/Constant Value60' */
    const boolean ConstantValue61;     /* '<S526>/Constant Value61' */
    const boolean ConstantValue56_l;   /* '<S526>/Constant Value56' */
    const boolean ConstantValue57_h;   /* '<S526>/Constant Value57' */
    const boolean Constant;            /* '<S526>/Constant' */
    const boolean Constant1;           /* '<S526>/Constant1' */
    const boolean Constant2;           /* '<S526>/Constant2' */
    const boolean ConstantValue59_p;   /* '<S526>/Constant Value59' */
    const boolean Constant3;           /* '<S526>/Constant3' */
    const boolean ConstantValue63;     /* '<S526>/Constant Value63' */
    const boolean ConstantValue65;     /* '<S526>/Constant Value65' */
    const boolean ConstantValue67;     /* '<S526>/Constant Value67' */
    const boolean ConstantValue68_h;   /* '<S526>/Constant Value68' */
    const boolean ConstantValue69;     /* '<S526>/Constant Value69' */
    const boolean Constant4;           /* '<S526>/Constant4' */
    const boolean ConstantValue71_i;   /* '<S526>/Constant Value71' */
    const boolean ConstantValue73;     /* '<S526>/Constant Value73' */
    const boolean ConstantValue_n;     /* '<S529>/Constant Value' */
    const boolean ConstantValue31_dl;  /* '<S529>/Constant Value31' */
    const boolean ConstantValue1_or;   /* '<S529>/Constant Value1' */
    const boolean ConstantValue32_a;   /* '<S529>/Constant Value32' */
    const boolean ConstantValue2_p;    /* '<S529>/Constant Value2' */
    const boolean ConstantValue33_h;   /* '<S529>/Constant Value33' */
    const boolean ConstantValue3_d;    /* '<S529>/Constant Value3' */
    const boolean ConstantValue4_j;    /* '<S529>/Constant Value4' */
    const boolean ConstantValue35_h;   /* '<S529>/Constant Value35' */
    const boolean ConstantValue5_n;    /* '<S529>/Constant Value5' */
    const boolean ConstantValue36_p;   /* '<S529>/Constant Value36' */
    const boolean ConstantValue11_f;   /* '<S529>/Constant Value11' */
    const boolean ConstantValue10_l;   /* '<S529>/Constant Value10' */
    const boolean ConstantValue26_c;   /* '<S529>/Constant Value26' */
    const boolean ConstantValue9_i;    /* '<S529>/Constant Value9' */
    const boolean ConstantValue39_l;   /* '<S529>/Constant Value39' */
    const boolean ConstantValue8_f;    /* '<S529>/Constant Value8' */
    const boolean ConstantValue7_k;    /* '<S529>/Constant Value7' */
    const boolean ConstantValue6_co;   /* '<S529>/Constant Value6' */
    const boolean ConstantValue13_nl;  /* '<S529>/Constant Value13' */
    const boolean ConstantValue14_m;   /* '<S529>/Constant Value14' */
    const boolean ConstantValue15_e;   /* '<S529>/Constant Value15' */
    const boolean ConstantValue16_n;   /* '<S529>/Constant Value16' */
    const boolean ConstantValue17_a;   /* '<S529>/Constant Value17' */
    const boolean ConstantValue56_f;   /* '<S529>/Constant Value56' */
    const boolean ConstantValue23_l;   /* '<S529>/Constant Value23' */
    const boolean ConstantValue21_n;   /* '<S529>/Constant Value21' */
    const boolean ConstantValue20_d;   /* '<S529>/Constant Value20' */
    const boolean ConstantValue19_j;   /* '<S529>/Constant Value19' */
    const boolean ConstantValue25_pq;  /* '<S529>/Constant Value25' */
    const boolean ConstantValue38_i;   /* '<S529>/Constant Value38' */
    const boolean ConstantValue29_pa;  /* '<S529>/Constant Value29' */
    const boolean ConstantValue12_h;   /* '<S529>/Constant Value12' */
    const boolean ConstantValue43_o;   /* '<S529>/Constant Value43' */
    const boolean ConstantValue45_f;   /* '<S529>/Constant Value45' */
    const boolean ConstantValue44_d;   /* '<S529>/Constant Value44' */
    const boolean ConstantValue30_au;  /* '<S529>/Constant Value30' */
    const boolean ConstantValue46_i;   /* '<S529>/Constant Value46' */
    const boolean ConstantValue76;     /* '<S529>/Constant Value76' */
    const boolean ConstantValue47_e;   /* '<S529>/Constant Value47' */
    const boolean ConstantValue48_b;   /* '<S529>/Constant Value48' */
    const boolean ConstantValue49_j;   /* '<S529>/Constant Value49' */
    const boolean ConstantValue50_g;   /* '<S529>/Constant Value50' */
    const boolean ConstantValue54_n;   /* '<S529>/Constant Value54' */
    const boolean ConstantValue55_m;   /* '<S529>/Constant Value55' */
    const boolean ConstantValue58_k;   /* '<S529>/Constant Value58' */
    const boolean ConstantValue60_h;   /* '<S529>/Constant Value60' */
    const boolean ConstantValue61_n;   /* '<S529>/Constant Value61' */
    const boolean ConstantValue62_c;   /* '<S529>/Constant Value62' */
    const boolean ConstantValue63_h;   /* '<S529>/Constant Value63' */
    const boolean ConstantValue64_b;   /* '<S529>/Constant Value64' */
    const boolean ConstantValue65_l;   /* '<S529>/Constant Value65' */
    const boolean ConstantValue66_g;   /* '<S529>/Constant Value66' */
    const boolean ConstantValue67_n;   /* '<S529>/Constant Value67' */
    const boolean ConstantValue69_g;   /* '<S529>/Constant Value69' */
    const boolean ConstantValue70_l;   /* '<S529>/Constant Value70' */
    const boolean ConstantValue72_j;   /* '<S529>/Constant Value72' */
    const boolean ConstantValue73_k;   /* '<S529>/Constant Value73' */
    const boolean ConstantValue74;     /* '<S529>/Constant Value74' */
    const boolean ConstantValue75;     /* '<S529>/Constant Value75' */
    const boolean ConstantValue77;     /* '<S529>/Constant Value77' */
    const boolean ConstantValue78;     /* '<S529>/Constant Value78' */
    const boolean ConstantValue79;     /* '<S529>/Constant Value79' */
    const boolean ConstantValue80;     /* '<S529>/Constant Value80' */
    const boolean ConstantValue81;     /* '<S529>/Constant Value81' */
    const boolean ConstantValue82;     /* '<S529>/Constant Value82' */
    const boolean ConstantValue83;     /* '<S529>/Constant Value83' */
    const boolean ConstantValue84;     /* '<S529>/Constant Value84' */
    const boolean ConstantValue85;     /* '<S529>/Constant Value85' */
    const boolean ConstantValue86;     /* '<S529>/Constant Value86' */
    const boolean ConstantValue87;     /* '<S529>/Constant Value87' */
    const boolean ConstantValue88;     /* '<S529>/Constant Value88' */
    const boolean ConstantValue89;     /* '<S529>/Constant Value89' */
    const boolean ConstantValue90;     /* '<S529>/Constant Value90' */
    const boolean ConstantValue91;     /* '<S529>/Constant Value91' */
    const boolean ConstantValue92;     /* '<S529>/Constant Value92' */
    const boolean ConstantValue94;     /* '<S529>/Constant Value94' */
    const TeVTLR_e_DisChrgFailSts Constant_c;/* '<S589>/Constant' */
    const TeVTLR_e_DisChrgFailSts Constant_p;/* '<S587>/Constant' */
    const TeODCR_e_IO_CntrlSt Constant_j;/* '<S544>/Constant' */
    const TeOBCR_e_EVSE_PilotStat_OBCM Constant_o;/* '<S575>/Constant' */
    const TeOBCR_e_ChrgrModeStat_OBCM Constant_k;/* '<S576>/Constant' */
    const TeOBCR_e_ChrgFailSts Constant_h;/* '<S574>/Constant' */
    const TeIDCR_e_V2X_ModeFeedback Constant_e;/* '<S593>/Constant' */
    const TeIDCR_e_V2X_FaultRsn Constant_d;/* '<S591>/Constant' */
    const TeIDCR_e_V2L_DischargeFaultRsn Constant_pg;/* '<S588>/Constant' */
    const TeIDCR_e_V2L_DischargeDeratingRsn Constant_n;/* '<S586>/Constant' */
    const TeIDCR_e_V2L_DischargeDeratingRsn Constant_m;/* '<S590>/Constant' */
    const TeIDCR_e_TxMsgSt Constant_nw;/* '<S554>/Constant' */
    const TeIDCR_e_TxMsgSt Constant_po;/* '<S555>/Constant' */
    const TeIDCR_e_TxGBTMessageResponse Constant_l;/* '<S581>/Constant' */
    const TeIDCR_e_TxGBTMessageRequest Constant_km;/* '<S579>/Constant' */
    const TeIDCR_e_TLS_Connection Constant_f;/* '<S585>/Constant' */
    const TeIDCR_e_TLS_Connection Constant_b;/* '<S537>/Constant' */
    const TeIDCR_e_SLACSts Constant_hx;/* '<S562>/Constant' */
    const TeIDCR_e_SDP_Sts Constant_h3;/* '<S561>/Constant' */
    const TeIDCR_e_RC Constant_a;      /* '<S553>/Constant' */
    const TeIDCR_e_Prox_GBT Constant_dm;/* '<S578>/Constant' */
    const TeIDCR_e_Plug_and_Charge Constant_i;/* '<S584>/Constant' */
    const TeIDCR_e_OffrdPayOptn Constant_oy;/* '<S556>/Constant' */
    const TeIDCR_e_OffrdEnrgyTxType Constant_dj;/* '<S559>/Constant' */
    const TeIDCR_e_OBCM_Charger_Ready Constant_dt;/* '<S563>/Constant' */
    const TeIDCR_e_OBCM_CSSts Constant_ml;/* '<S573>/Constant' */
    const TeIDCR_e_OBCM_CP3Sts Constant_dw;/* '<S572>/Constant' */
    const TeIDCR_e_OBCM_CP2Sts Constant_i1;/* '<S571>/Constant' */
    const TeIDCR_e_OBCM_CP1Sts Constant_ex;/* '<S570>/Constant' */
    const TeIDCR_e_MessageResponse Constant_jg;/* '<S564>/Constant' */
    const TeIDCR_e_ISOResponseCode Constant_dq;/* '<S536>/Constant' */
    const TeIDCR_e_ExtChargerSts Constant_ao;/* '<S569>/Constant' */
    const TeIDCR_e_EVSE_OfferedService Constant_k1;/* '<S565>/Constant' */
    const TeIDCR_e_EVSE_Error Constant_m2;/* '<S567>/Constant' */
    const TeIDCR_e_EVSE_ChrgStopControl Constant_pe;/* '<S566>/Constant' */
    const TeIDCR_e_EVSEStsCode Constant_nr;/* '<S558>/Constant' */
    const TeIDCR_e_EVSENotification Constant_kv;/* '<S583>/Constant' */
    const TeIDCR_e_EVSEIsolSts Constant_ob;/* '<S557>/Constant' */
    const TeIDCR_e_EVCCFailRsn Constant_e0;/* '<S550>/Constant' */
    const TeIDCR_e_Charger_WeldDetAvail Constant_g;/* '<S568>/Constant' */
    const TeIDCR_e_Charger_FaultStates Constant_ap;/* '<S577>/Constant' */
    const TeIDCR_e_CHAdeMOPrtcl Constant_j4;/* '<S560>/Constant' */
    const TeHVTR_e_HV_IntrlkStat Constant_mg;/* '<S592>/Constant' */
    const TeHVTR_e_HV_IntrlkStat Constant_lt;/* '<S533>/Constant' */
    const TeHVTR_e_HV_IntrlkStat Constant_pj;/* '<S534>/Constant' */
    const TeHVTR_e_HV_IntrlkStat Constant_lf;/* '<S580>/Constant' */
    const TeGENR_e_IBS_I_Range Constant_ov;/* '<S545>/Constant' */
    const TeGENR_e_IBS_Current_Status Constant_mgm;/* '<S546>/Constant' */
    const TeGENR_e_IBS_BattTempSts Constant_og;/* '<S542>/Constant' */
    const TeGENR_e_DeratingModeStatus Constant_ar;/* '<S543>/Constant' */
    const TeGENR_e_APM_OperMode Constant_d4;/* '<S541>/Constant' */
    const TeGENR_e_APM_FailureType Constant_a5;/* '<S538>/Constant' */
    const TeGENR_e_APM_FailureModeStatus Constant_hk;/* '<S540>/Constant' */
    const TeGENR_e_APM_FailureModeStatus Constant_ab;/* '<S539>/Constant' */
    const TeBPCR_e_ThrmlRnawy_WarnSts Constant_ij;/* '<S535>/Constant' */
}
ConstB_IDCR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_IDCR
#include "MemMap.h"

extern VAR(B_IDCR_ac_T, IDCR_VAR_INIT) IDCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_IDCR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_IDCR
#include "MemMap.h"

extern CONST(ConstB_IDCR_ac_T, IDCR_VAR_INIT) IDCR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_IDCR
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
 * '<Root>' : 'IDCR_ac'
 * '<S1>'   : 'IDCR_ac/FsftIDCR_E_EVSE_EnrgyToBeDlvrd'
 * '<S2>'   : 'IDCR_ac/FsftIDCR_I_ACOutCurrent1'
 * '<S3>'   : 'IDCR_ac/FsftIDCR_I_ACOutCurrent2'
 * '<S4>'   : 'IDCR_ac/FsftIDCR_I_ACOutCurrent3'
 * '<S5>'   : 'IDCR_ac/FsftIDCR_I_ACSideCurr_L2'
 * '<S6>'   : 'IDCR_ac/FsftIDCR_I_ACSideCurr_L3'
 * '<S7>'   : 'IDCR_ac/FsftIDCR_I_AC_Side_Curr'
 * '<S8>'   : 'IDCR_ac/FsftIDCR_I_APM_HV_Current'
 * '<S9>'   : 'IDCR_ac/FsftIDCR_I_APM_LV_Current'
 * '<S10>'  : 'IDCR_ac/FsftIDCR_I_AcOutCurrent'
 * '<S11>'  : 'IDCR_ac/FsftIDCR_I_BattSide_Curr'
 * '<S12>'  : 'IDCR_ac/FsftIDCR_I_ChrgCrntAvail'
 * '<S13>'  : 'IDCR_ac/FsftIDCR_I_ChrgCurrent'
 * '<S14>'  : 'IDCR_ac/FsftIDCR_I_DCInCurrent'
 * '<S15>'  : 'IDCR_ac/FsftIDCR_I_EVSECurr_RegTol'
 * '<S16>'  : 'IDCR_ac/FsftIDCR_I_EVSEMaxCurrLmt'
 * '<S17>'  : 'IDCR_ac/FsftIDCR_I_EVSEMinCurrLmt'
 * '<S18>'  : 'IDCR_ac/FsftIDCR_I_EVSEOutputCurr'
 * '<S19>'  : 'IDCR_ac/FsftIDCR_I_EVSEPeakCurrRip'
 * '<S20>'  : 'IDCR_ac/FsftIDCR_I_IdcHvSetPFdbk'
 * '<S21>'  : 'IDCR_ac/FsftIDCR_I_J1772InputCrntAval'
 * '<S22>'  : 'IDCR_ac/FsftIDCR_I_V2L_DischargeCurrent'
 * '<S23>'  : 'IDCR_ac/FsftIDCR_I_V2XInCurrent'
 * '<S24>'  : 'IDCR_ac/FsftIDCR_P_APM_InputPower'
 * '<S25>'  : 'IDCR_ac/FsftIDCR_P_APM_OutputPower'
 * '<S26>'  : 'IDCR_ac/FsftIDCR_P_APM_PwrLoss'
 * '<S27>'  : 'IDCR_ac/FsftIDCR_P_AvailablePower'
 * '<S28>'  : 'IDCR_ac/FsftIDCR_P_EVSEMaxPwrLmt'
 * '<S29>'  : 'IDCR_ac/FsftIDCR_Pct_GenRgSPDtyCycReq'
 * '<S30>'  : 'IDCR_ac/FsftIDCR_Pct_IBS_BattSOC'
 * '<S31>'  : 'IDCR_ac/FsftIDCR_Pct_UtilPctOfDCDC'
 * '<S32>'  : 'IDCR_ac/FsftIDCR_T_APM_TempColdPlate'
 * '<S33>'  : 'IDCR_ac/FsftIDCR_T_Temp1'
 * '<S34>'  : 'IDCR_ac/FsftIDCR_T_Temp2'
 * '<S35>'  : 'IDCR_ac/FsftIDCR_U_ACOutVoltage1'
 * '<S36>'  : 'IDCR_ac/FsftIDCR_U_ACOutVoltage2'
 * '<S37>'  : 'IDCR_ac/FsftIDCR_U_ACOutVoltage3'
 * '<S38>'  : 'IDCR_ac/FsftIDCR_U_ACSideVolt_L2'
 * '<S39>'  : 'IDCR_ac/FsftIDCR_U_ACSideVolt_L3'
 * '<S40>'  : 'IDCR_ac/FsftIDCR_U_AC_InputVltOBCM'
 * '<S41>'  : 'IDCR_ac/FsftIDCR_U_APM_HV_Voltage'
 * '<S42>'  : 'IDCR_ac/FsftIDCR_U_APM_HvVsetPFdbk'
 * '<S43>'  : 'IDCR_ac/FsftIDCR_U_APM_LV_Voltage'
 * '<S44>'  : 'IDCR_ac/FsftIDCR_U_APM_LvIsetPFdbk'
 * '<S45>'  : 'IDCR_ac/FsftIDCR_U_AcOutVoltage'
 * '<S46>'  : 'IDCR_ac/FsftIDCR_U_BattSideVolt'
 * '<S47>'  : 'IDCR_ac/FsftIDCR_U_DCInVoltage'
 * '<S48>'  : 'IDCR_ac/FsftIDCR_U_EVRDesVSetP'
 * '<S49>'  : 'IDCR_ac/FsftIDCR_U_EVSEMaxVoltLmt'
 * '<S50>'  : 'IDCR_ac/FsftIDCR_U_EVSEMinVoltLmt'
 * '<S51>'  : 'IDCR_ac/FsftIDCR_U_EVSEOutputVolt'
 * '<S52>'  : 'IDCR_ac/FsftIDCR_U_EVSE_ThrshldVoltage'
 * '<S53>'  : 'IDCR_ac/FsftIDCR_U_IBS_BattVolt'
 * '<S54>'  : 'IDCR_ac/FsftIDCR_U_OBC_Prox'
 * '<S55>'  : 'IDCR_ac/FsftIDCR_U_V2XInVoltage'
 * '<S56>'  : 'IDCR_ac/FsftIDCR_U_V2XLVFeed'
 * '<S57>'  : 'IDCR_ac/FsftIDCR_W_EVSE_SASPmax'
 * '<S58>'  : 'IDCR_ac/FsftIDCR_b_DC_Isolation_Disable_Cmd'
 * '<S59>'  : 'IDCR_ac/FsftIDCR_b_EVCC_FailureSts'
 * '<S60>'  : 'IDCR_ac/FsftIDCR_b_EVSEIsolSts'
 * '<S61>'  : 'IDCR_ac/FsftIDCR_b_EVSE_ChargingSystemError'
 * '<S62>'  : 'IDCR_ac/FsftIDCR_b_EVSE_EnergizingState'
 * '<S63>'  : 'IDCR_ac/FsftIDCR_b_EVSE_Offered_AC_Single_Phase'
 * '<S64>'  : 'IDCR_ac/FsftIDCR_b_EVSE_Offered_AC_Three_Phase'
 * '<S65>'  : 'IDCR_ac/FsftIDCR_b_EVSE_Offered_DC_Extended'
 * '<S66>'  : 'IDCR_ac/FsftIDCR_b_EVSE_Service1_Charging'
 * '<S67>'  : 'IDCR_ac/FsftIDCR_b_EVSE_Service1_Free'
 * '<S68>'  : 'IDCR_ac/FsftIDCR_b_IBS_BattTemp'
 * '<S69>'  : 'IDCR_ac/FsftIDCR_b_IBS_b_Batt'
 * '<S70>'  : 'IDCR_ac/FsftIDCR_b_IBS_b_Batt_2'
 * '<S71>'  : 'IDCR_ac/FsftIDCR_b_IDCM_GFCI_FaultSts'
 * '<S72>'  : 'IDCR_ac/FsftIDCR_b_IDCM_Wakeup_HCP'
 * '<S73>'  : 'IDCR_ac/FsftIDCR_b_ISO15118_TLS_Offered'
 * '<S74>'  : 'IDCR_ac/FsftIDCR_b_J1772_S2_StatusFA'
 * '<S75>'  : 'IDCR_ac/FsftIDCR_b_OBCM_Timeout'
 * '<S76>'  : 'IDCR_ac/FsftIDCR_b_OffrdEnrgyTxType'
 * '<S77>'  : 'IDCR_ac/FsftIDCR_b_OffrdPayOptn'
 * '<S78>'  : 'IDCR_ac/FsftIDCR_b_PlugAndChargeReq'
 * '<S79>'  : 'IDCR_ac/FsftIDCR_b_ReceiptRequired'
 * '<S80>'  : 'IDCR_ac/FsftIDCR_b_Resp_Code'
 * '<S81>'  : 'IDCR_ac/FsftIDCR_b_SDP_Sts'
 * '<S82>'  : 'IDCR_ac/FsftIDCR_b_SLAC_Sts'
 * '<S83>'  : 'IDCR_ac/FsftIDCR_b_SupProtoNm'
 * '<S84>'  : 'IDCR_ac/FsftIDCR_b_SupSchemaID'
 * '<S85>'  : 'IDCR_ac/FsftIDCR_b_SupVerNumMajor'
 * '<S86>'  : 'IDCR_ac/FsftIDCR_b_SupVerNumMinor'
 * '<S87>'  : 'IDCR_ac/FsftIDCR_b_TxMessageRequest'
 * '<S88>'  : 'IDCR_ac/FsftIDCR_b_TxMessageResponse'
 * '<S89>'  : 'IDCR_ac/FsftIDCR_b_V2L_Detected'
 * '<S90>'  : 'IDCR_ac/FsftIDCR_b_V2L_DischargeDeratingRsn'
 * '<S91>'  : 'IDCR_ac/FsftIDCR_b_V2L_DischargeFailSts'
 * '<S92>'  : 'IDCR_ac/FsftIDCR_b_V2L_DischargeFaultRsn'
 * '<S93>'  : 'IDCR_ac/FsftIDCR_b_V2L_DischargeVoltage'
 * '<S94>'  : 'IDCR_ac/FsftIDCR_b_V2L_Output_Frequency'
 * '<S95>'  : 'IDCR_ac/FsftIDCR_b_V2L_Pilot_Frequency'
 * '<S96>'  : 'IDCR_ac/FsftIDCR_b_V2XDerateSts'
 * '<S97>'  : 'IDCR_ac/FsftIDCR_b_V2XFailSts'
 * '<S98>'  : 'IDCR_ac/FsftIDCR_b_V2XSts'
 * '<S99>'  : 'IDCR_ac/FsftIDCR_b_V2X_EVSE_Service_5_Free'
 * '<S100>' : 'IDCR_ac/FsftIDCR_b_V2X_EVSE_Service_5_V2H'
 * '<S101>' : 'IDCR_ac/FsftIDCR_cmp_ISO15118_EVSETimeStamp'
 * '<S102>' : 'IDCR_ac/FsftIDCR_d_EVSE_Accepted_Protocol'
 * '<S103>' : 'IDCR_ac/FsftIDCR_d_ISO15118_ServiceID'
 * '<S104>' : 'IDCR_ac/FsftIDCR_e_APM2InterlockSts'
 * '<S105>' : 'IDCR_ac/FsftIDCR_e_APM3InterlockSts'
 * '<S106>' : 'IDCR_ac/FsftIDCR_e_Charger_WeldingDetectAvail'
 * '<S107>' : 'IDCR_ac/FsftIDCR_e_ChrgrModeStat_OBCM'
 * '<S108>' : 'IDCR_ac/FsftIDCR_e_Chrgr_FaultStates'
 * '<S109>' : 'IDCR_ac/FsftIDCR_e_DschrgFaultSts'
 * '<S110>' : 'IDCR_ac/FsftIDCR_e_EVCC_FailureRsn'
 * '<S111>' : 'IDCR_ac/FsftIDCR_e_EVSE_CHAdeMOProtocol'
 * '<S112>' : 'IDCR_ac/FsftIDCR_e_EVSE_ChrgStopControl'
 * '<S113>' : 'IDCR_ac/FsftIDCR_e_EVSE_Error'
 * '<S114>' : 'IDCR_ac/FsftIDCR_e_EVSE_Notification'
 * '<S115>' : 'IDCR_ac/FsftIDCR_e_EVSE_OfferedService'
 * '<S116>' : 'IDCR_ac/FsftIDCR_e_EVSE_PilotStat_OBCM'
 * '<S117>' : 'IDCR_ac/FsftIDCR_e_EVSE_TLS_CONNECTION'
 * '<S118>' : 'IDCR_ac/FsftIDCR_e_ExtChargerSts'
 * '<S119>' : 'IDCR_ac/FsftIDCR_e_IBS_Current_Status'
 * '<S120>' : 'IDCR_ac/FsftIDCR_e_IBS_I_RANGE'
 * '<S121>' : 'IDCR_ac/FsftIDCR_e_ISO15118_MessageResponse'
 * '<S122>' : 'IDCR_ac/FsftIDCR_e_ISO15118_ResponseCode'
 * '<S123>' : 'IDCR_ac/FsftIDCR_e_ISO15118_TLS_Status'
 * '<S124>' : 'IDCR_ac/FsftIDCR_e_J1772Stat'
 * '<S125>' : 'IDCR_ac/FsftIDCR_e_OBCM_CP1Sts'
 * '<S126>' : 'IDCR_ac/FsftIDCR_e_OBCM_CP2Sts'
 * '<S127>' : 'IDCR_ac/FsftIDCR_e_OBCM_CP3Sts'
 * '<S128>' : 'IDCR_ac/FsftIDCR_e_OBCM_CSSts'
 * '<S129>' : 'IDCR_ac/FsftIDCR_e_OBCM_Charger_Ready'
 * '<S130>' : 'IDCR_ac/FsftIDCR_e_OBCM_HVILSts'
 * '<S131>' : 'IDCR_ac/FsftIDCR_e_ProxStat'
 * '<S132>' : 'IDCR_ac/FsftIDCR_e_TxGBTMsgRequest'
 * '<S133>' : 'IDCR_ac/FsftIDCR_e_TxGBTMsgResponse'
 * '<S134>' : 'IDCR_ac/FsftIDCR_e_V2XDerateRsn'
 * '<S135>' : 'IDCR_ac/FsftIDCR_e_V2XFaultRsn'
 * '<S136>' : 'IDCR_ac/FsftIDCR_e_V2XInterlockSts'
 * '<S137>' : 'IDCR_ac/FsftIDCR_e_V2XModeFeedback'
 * '<S138>' : 'IDCR_ac/FsftIDCR_f_ACOutFreq'
 * '<S139>' : 'IDCR_ac/FsftIDCR_f_AcOutFrequency'
 * '<S140>' : 'IDCR_ac/FsftIDCR_f_V2XFrequency'
 * '<S141>' : 'IDCR_ac/FsftIDCR_g_HVCMS_EVSEID'
 * '<S142>' : 'IDCR_ac/FsftIDCR_i_ISO15118_SAScheduleTupleID'
 * '<S143>' : 'IDCR_ac/FsftIDCR_i_SAScheduleTupleID'
 * '<S144>' : 'IDCR_ac/FsftIDCR_t_EVSE_NotificationMaxDelay'
 * '<S145>' : 'IDCR_ac/FsftIDCR_t_ISO15118_NotificationMaxDelay'
 * '<S146>' : 'IDCR_ac/FsftIDCR_y_ISO15118_SchemaID'
 * '<S147>' : 'IDCR_ac/FsftIDCR_y_ISO15118_VersionNumMajor'
 * '<S148>' : 'IDCR_ac/FsftIDCR_y_ISO15118_VersionNumMinor'
 * '<S149>' : 'IDCR_ac/IDCR_MedTED'
 * '<S150>' : 'IDCR_ac/IDCR_PwrOn'
 * '<S151>' : 'IDCR_ac/PokeIDCR_E_EVSE_EnrgyToBeDlvrd'
 * '<S152>' : 'IDCR_ac/PokeIDCR_I_ACOutCurrent1'
 * '<S153>' : 'IDCR_ac/PokeIDCR_I_ACOutCurrent2'
 * '<S154>' : 'IDCR_ac/PokeIDCR_I_ACOutCurrent3'
 * '<S155>' : 'IDCR_ac/PokeIDCR_I_ACSideCurr_L2'
 * '<S156>' : 'IDCR_ac/PokeIDCR_I_ACSideCurr_L3'
 * '<S157>' : 'IDCR_ac/PokeIDCR_I_AC_Side_Curr'
 * '<S158>' : 'IDCR_ac/PokeIDCR_I_APM_HV_Current'
 * '<S159>' : 'IDCR_ac/PokeIDCR_I_APM_LV_Current'
 * '<S160>' : 'IDCR_ac/PokeIDCR_I_AcOutCurrent'
 * '<S161>' : 'IDCR_ac/PokeIDCR_I_BattSide_Curr'
 * '<S162>' : 'IDCR_ac/PokeIDCR_I_ChrgCrntAvail'
 * '<S163>' : 'IDCR_ac/PokeIDCR_I_ChrgCurrent'
 * '<S164>' : 'IDCR_ac/PokeIDCR_I_DCInCurrent'
 * '<S165>' : 'IDCR_ac/PokeIDCR_I_EVSECurr_RegTol'
 * '<S166>' : 'IDCR_ac/PokeIDCR_I_EVSEMaxCurrLmt'
 * '<S167>' : 'IDCR_ac/PokeIDCR_I_EVSEMinCurrLmt'
 * '<S168>' : 'IDCR_ac/PokeIDCR_I_EVSEOutputCurr'
 * '<S169>' : 'IDCR_ac/PokeIDCR_I_EVSEPeakCurrRip'
 * '<S170>' : 'IDCR_ac/PokeIDCR_I_IBS_I_Batt'
 * '<S171>' : 'IDCR_ac/PokeIDCR_I_IBS_I_Batt_2'
 * '<S172>' : 'IDCR_ac/PokeIDCR_I_IdcHvSetPFdbk'
 * '<S173>' : 'IDCR_ac/PokeIDCR_I_J1772InputCrntAval'
 * '<S174>' : 'IDCR_ac/PokeIDCR_I_V2L_DischargeCurrent'
 * '<S175>' : 'IDCR_ac/PokeIDCR_I_V2XInCurrent'
 * '<S176>' : 'IDCR_ac/PokeIDCR_K_Service_ID'
 * '<S177>' : 'IDCR_ac/PokeIDCR_P_APM_DeratingPower'
 * '<S178>' : 'IDCR_ac/PokeIDCR_P_APM_InputPower'
 * '<S179>' : 'IDCR_ac/PokeIDCR_P_APM_OutputPower'
 * '<S180>' : 'IDCR_ac/PokeIDCR_P_APM_PwrLoss'
 * '<S181>' : 'IDCR_ac/PokeIDCR_P_AvailablePower'
 * '<S182>' : 'IDCR_ac/PokeIDCR_P_EVSEMaxPwrLmt'
 * '<S183>' : 'IDCR_ac/PokeIDCR_Pct_GenRgSPDtyCycReq'
 * '<S184>' : 'IDCR_ac/PokeIDCR_Pct_IBS_BattSOC'
 * '<S185>' : 'IDCR_ac/PokeIDCR_Pct_UtilPctOfDCDC'
 * '<S186>' : 'IDCR_ac/PokeIDCR_T_APM_OutletCoolantTemp'
 * '<S187>' : 'IDCR_ac/PokeIDCR_T_APM_TempColdPlate'
 * '<S188>' : 'IDCR_ac/PokeIDCR_T_Temp1'
 * '<S189>' : 'IDCR_ac/PokeIDCR_T_Temp2'
 * '<S190>' : 'IDCR_ac/PokeIDCR_U_ACOutVoltage1'
 * '<S191>' : 'IDCR_ac/PokeIDCR_U_ACOutVoltage2'
 * '<S192>' : 'IDCR_ac/PokeIDCR_U_ACOutVoltage3'
 * '<S193>' : 'IDCR_ac/PokeIDCR_U_ACSideVolt_L2'
 * '<S194>' : 'IDCR_ac/PokeIDCR_U_ACSideVolt_L3'
 * '<S195>' : 'IDCR_ac/PokeIDCR_U_AC_InputVltOBCM'
 * '<S196>' : 'IDCR_ac/PokeIDCR_U_APM_HV_Voltage'
 * '<S197>' : 'IDCR_ac/PokeIDCR_U_APM_HvVsetPFdbk'
 * '<S198>' : 'IDCR_ac/PokeIDCR_U_APM_LV_Voltage'
 * '<S199>' : 'IDCR_ac/PokeIDCR_U_APM_LvIsetPFdbk'
 * '<S200>' : 'IDCR_ac/PokeIDCR_U_AcOutVoltage'
 * '<S201>' : 'IDCR_ac/PokeIDCR_U_BattSideVolt'
 * '<S202>' : 'IDCR_ac/PokeIDCR_U_DCInVoltage'
 * '<S203>' : 'IDCR_ac/PokeIDCR_U_EVRDesVSetP'
 * '<S204>' : 'IDCR_ac/PokeIDCR_U_EVSEMaxVoltLmt'
 * '<S205>' : 'IDCR_ac/PokeIDCR_U_EVSEMinVoltLmt'
 * '<S206>' : 'IDCR_ac/PokeIDCR_U_EVSEOutputVolt'
 * '<S207>' : 'IDCR_ac/PokeIDCR_U_EVSE_ThrshldVoltage'
 * '<S208>' : 'IDCR_ac/PokeIDCR_U_IBS_BattVolt'
 * '<S209>' : 'IDCR_ac/PokeIDCR_U_OBC_Prox'
 * '<S210>' : 'IDCR_ac/PokeIDCR_U_V2L_DischargeVoltage'
 * '<S211>' : 'IDCR_ac/PokeIDCR_U_V2XInVoltage'
 * '<S212>' : 'IDCR_ac/PokeIDCR_U_V2XLVFeed'
 * '<S213>' : 'IDCR_ac/PokeIDCR_U_VdcHvFdbk'
 * '<S214>' : 'IDCR_ac/PokeIDCR_W_EVSE_SASPmax'
 * '<S215>' : 'IDCR_ac/PokeIDCR_b_AC_LnHi'
 * '<S216>' : 'IDCR_ac/PokeIDCR_b_AC_LnLow'
 * '<S217>' : 'IDCR_ac/PokeIDCR_b_BattNotDetctd'
 * '<S218>' : 'IDCR_ac/PokeIDCR_b_ChgEnblSts'
 * '<S219>' : 'IDCR_ac/PokeIDCR_b_ChrgEnblOBCM'
 * '<S220>' : 'IDCR_ac/PokeIDCR_b_ChrgFail_On_OBCM'
 * '<S221>' : 'IDCR_ac/PokeIDCR_b_DC_Isolation_Disable_Cmd'
 * '<S222>' : 'IDCR_ac/PokeIDCR_b_DC_TimeOut'
 * '<S223>' : 'IDCR_ac/PokeIDCR_b_EVCC_FailureSts'
 * '<S224>' : 'IDCR_ac/PokeIDCR_b_EVSECurrLmtAchvd'
 * '<S225>' : 'IDCR_ac/PokeIDCR_b_EVSEProcessing'
 * '<S226>' : 'IDCR_ac/PokeIDCR_b_EVSEPwrLmtAchvd'
 * '<S227>' : 'IDCR_ac/PokeIDCR_b_EVSEVoltLmtAchvd'
 * '<S228>' : 'IDCR_ac/PokeIDCR_b_EVSE_ChargingSystemError'
 * '<S229>' : 'IDCR_ac/PokeIDCR_b_EVSE_EnergizingState'
 * '<S230>' : 'IDCR_ac/PokeIDCR_b_EVSE_FreeService'
 * '<S231>' : 'IDCR_ac/PokeIDCR_b_EVSE_OfferedPaymentContract'
 * '<S232>' : 'IDCR_ac/PokeIDCR_b_EVSE_OfferedPaymentEIM'
 * '<S233>' : 'IDCR_ac/PokeIDCR_b_EVSE_Offered_AC_Single_Phase'
 * '<S234>' : 'IDCR_ac/PokeIDCR_b_EVSE_Offered_AC_Three_Phase'
 * '<S235>' : 'IDCR_ac/PokeIDCR_b_EVSE_Offered_DC_Extended'
 * '<S236>' : 'IDCR_ac/PokeIDCR_b_EVSE_Service1_Charging'
 * '<S237>' : 'IDCR_ac/PokeIDCR_b_EVSE_Service1_Free'
 * '<S238>' : 'IDCR_ac/PokeIDCR_b_EVSE_Service2_Certificate'
 * '<S239>' : 'IDCR_ac/PokeIDCR_b_EVSE_Supported_DIN'
 * '<S240>' : 'IDCR_ac/PokeIDCR_b_EVSE_Supported_ISO1'
 * '<S241>' : 'IDCR_ac/PokeIDCR_b_EVSE_TLS_OFFERED'
 * '<S242>' : 'IDCR_ac/PokeIDCR_b_EVSer_On_OBCM'
 * '<S243>' : 'IDCR_ac/PokeIDCR_b_GBT_EVSE_Charge_Permitting'
 * '<S244>' : 'IDCR_ac/PokeIDCR_b_HVBatPerWU12VChrg'
 * '<S245>' : 'IDCR_ac/PokeIDCR_b_HVIL_A_Failed'
 * '<S246>' : 'IDCR_ac/PokeIDCR_b_HVIL_B_Failed'
 * '<S247>' : 'IDCR_ac/PokeIDCR_b_HVIL_C_Failed'
 * '<S248>' : 'IDCR_ac/PokeIDCR_b_HvOverVStatus'
 * '<S249>' : 'IDCR_ac/PokeIDCR_b_HvTooHighIStatus'
 * '<S250>' : 'IDCR_ac/PokeIDCR_b_HvTooLowVStatus'
 * '<S251>' : 'IDCR_ac/PokeIDCR_b_IDCM_DCCA'
 * '<S252>' : 'IDCR_ac/PokeIDCR_b_IDCM_GFCI_FaultSts'
 * '<S253>' : 'IDCR_ac/PokeIDCR_b_IDCM_Wakeup_HCP'
 * '<S254>' : 'IDCR_ac/PokeIDCR_b_ISO15118_TLS_Offered'
 * '<S255>' : 'IDCR_ac/PokeIDCR_b_J1772_S2_Status'
 * '<S256>' : 'IDCR_ac/PokeIDCR_b_LvHighVStatus'
 * '<S257>' : 'IDCR_ac/PokeIDCR_b_LvTooHighIStatus'
 * '<S258>' : 'IDCR_ac/PokeIDCR_b_LvTooLowVStatus'
 * '<S259>' : 'IDCR_ac/PokeIDCR_b_OBCM_Timeout'
 * '<S260>' : 'IDCR_ac/PokeIDCR_b_PlugAndChargeReq'
 * '<S261>' : 'IDCR_ac/PokeIDCR_b_ReceiptRequired'
 * '<S262>' : 'IDCR_ac/PokeIDCR_b_StatusACPresent'
 * '<S263>' : 'IDCR_ac/PokeIDCR_b_TCPCommTerminated'
 * '<S264>' : 'IDCR_ac/PokeIDCR_b_V2L_Detected'
 * '<S265>' : 'IDCR_ac/PokeIDCR_b_V2XDerateSts'
 * '<S266>' : 'IDCR_ac/PokeIDCR_b_V2XFailSts'
 * '<S267>' : 'IDCR_ac/PokeIDCR_b_V2XSts'
 * '<S268>' : 'IDCR_ac/PokeIDCR_b_V2X_EVSE_Service_5_Free'
 * '<S269>' : 'IDCR_ac/PokeIDCR_b_V2X_EVSE_Service_5_V2H'
 * '<S270>' : 'IDCR_ac/PokeIDCR_cmp_ISO15118_EVSETimeStamp'
 * '<S271>' : 'IDCR_ac/PokeIDCR_d_EVSE_Accepted_Protocol'
 * '<S272>' : 'IDCR_ac/PokeIDCR_d_ISO15118_ServiceID'
 * '<S273>' : 'IDCR_ac/PokeIDCR_e_APM2InterlockSts'
 * '<S274>' : 'IDCR_ac/PokeIDCR_e_APM3InterlockSts'
 * '<S275>' : 'IDCR_ac/PokeIDCR_e_APM_DeratingModeStatus'
 * '<S276>' : 'IDCR_ac/PokeIDCR_e_APM_DeratingReason'
 * '<S277>' : 'IDCR_ac/PokeIDCR_e_APM_FailureModeStatus'
 * '<S278>' : 'IDCR_ac/PokeIDCR_e_APM_FailureReason'
 * '<S279>' : 'IDCR_ac/PokeIDCR_e_APM_FailureType'
 * '<S280>' : 'IDCR_ac/PokeIDCR_e_APM_ThermalRunaway'
 * '<S281>' : 'IDCR_ac/PokeIDCR_e_Charger_WeldingDetectAvail'
 * '<S282>' : 'IDCR_ac/PokeIDCR_e_ChrgFailSts'
 * '<S283>' : 'IDCR_ac/PokeIDCR_e_ChrgrModeStat_OBCM'
 * '<S284>' : 'IDCR_ac/PokeIDCR_e_Chrgr_FaultStates'
 * '<S285>' : 'IDCR_ac/PokeIDCR_e_DschrgFaultSts'
 * '<S286>' : 'IDCR_ac/PokeIDCR_e_EVCC_FailureRsn'
 * '<S287>' : 'IDCR_ac/PokeIDCR_e_EVSEIsolSts'
 * '<S288>' : 'IDCR_ac/PokeIDCR_e_EVSEStsCode'
 * '<S289>' : 'IDCR_ac/PokeIDCR_e_EVSE_CHAdeMOProtocol'
 * '<S290>' : 'IDCR_ac/PokeIDCR_e_EVSE_ChrgStopControl'
 * '<S291>' : 'IDCR_ac/PokeIDCR_e_EVSE_Error'
 * '<S292>' : 'IDCR_ac/PokeIDCR_e_EVSE_Notification'
 * '<S293>' : 'IDCR_ac/PokeIDCR_e_EVSE_OfferedService'
 * '<S294>' : 'IDCR_ac/PokeIDCR_e_EVSE_PilotStat_OBCM'
 * '<S295>' : 'IDCR_ac/PokeIDCR_e_EVSE_TLS_CONNECTION'
 * '<S296>' : 'IDCR_ac/PokeIDCR_e_ExtChargerSts'
 * '<S297>' : 'IDCR_ac/PokeIDCR_e_IBS_BattSocAcc'
 * '<S298>' : 'IDCR_ac/PokeIDCR_e_IBS_BattTempSts'
 * '<S299>' : 'IDCR_ac/PokeIDCR_e_IBS_BattVoltSts'
 * '<S300>' : 'IDCR_ac/PokeIDCR_e_IBS_Current_Status'
 * '<S301>' : 'IDCR_ac/PokeIDCR_e_IBS_I_RANGE'
 * '<S302>' : 'IDCR_ac/PokeIDCR_e_ISO15118_MessageResponse'
 * '<S303>' : 'IDCR_ac/PokeIDCR_e_ISO15118_ResponseCode'
 * '<S304>' : 'IDCR_ac/PokeIDCR_e_ISO15118_TLS_Status'
 * '<S305>' : 'IDCR_ac/PokeIDCR_e_J1772Stat'
 * '<S306>' : 'IDCR_ac/PokeIDCR_e_OBCM_CP1Sts'
 * '<S307>' : 'IDCR_ac/PokeIDCR_e_OBCM_CP2Sts'
 * '<S308>' : 'IDCR_ac/PokeIDCR_e_OBCM_CP3Sts'
 * '<S309>' : 'IDCR_ac/PokeIDCR_e_OBCM_CSSts'
 * '<S310>' : 'IDCR_ac/PokeIDCR_e_OBCM_Charger_Ready'
 * '<S311>' : 'IDCR_ac/PokeIDCR_e_OBCM_HVILSts'
 * '<S312>' : 'IDCR_ac/PokeIDCR_e_OffrdEnrgyTxType'
 * '<S313>' : 'IDCR_ac/PokeIDCR_e_OffrdPayOptn'
 * '<S314>' : 'IDCR_ac/PokeIDCR_e_ProxStat'
 * '<S315>' : 'IDCR_ac/PokeIDCR_e_Prox_GBT'
 * '<S316>' : 'IDCR_ac/PokeIDCR_e_Resp_Code'
 * '<S317>' : 'IDCR_ac/PokeIDCR_e_SDP_Sts'
 * '<S318>' : 'IDCR_ac/PokeIDCR_e_SLAC_Sts'
 * '<S319>' : 'IDCR_ac/PokeIDCR_e_SupProtoNm'
 * '<S320>' : 'IDCR_ac/PokeIDCR_e_SupSchemaID'
 * '<S321>' : 'IDCR_ac/PokeIDCR_e_SupVerNumMajor'
 * '<S322>' : 'IDCR_ac/PokeIDCR_e_SupVerNumMinor'
 * '<S323>' : 'IDCR_ac/PokeIDCR_e_TxGBTMsgRequest'
 * '<S324>' : 'IDCR_ac/PokeIDCR_e_TxGBTMsgResponse'
 * '<S325>' : 'IDCR_ac/PokeIDCR_e_TxMessageRequest'
 * '<S326>' : 'IDCR_ac/PokeIDCR_e_TxMessageResponse'
 * '<S327>' : 'IDCR_ac/PokeIDCR_e_V2L_DischargeDeratingRsn'
 * '<S328>' : 'IDCR_ac/PokeIDCR_e_V2L_DischargeFailSts'
 * '<S329>' : 'IDCR_ac/PokeIDCR_e_V2L_DischargeFaultRsn'
 * '<S330>' : 'IDCR_ac/PokeIDCR_e_V2XDerateRsn'
 * '<S331>' : 'IDCR_ac/PokeIDCR_e_V2XFaultRsn'
 * '<S332>' : 'IDCR_ac/PokeIDCR_e_V2XInterlockSts'
 * '<S333>' : 'IDCR_ac/PokeIDCR_e_V2XModeFeedback'
 * '<S334>' : 'IDCR_ac/PokeIDCR_e_stModeRqAPM'
 * '<S335>' : 'IDCR_ac/PokeIDCR_f_ACOutFreq'
 * '<S336>' : 'IDCR_ac/PokeIDCR_f_AcOutFrequency'
 * '<S337>' : 'IDCR_ac/PokeIDCR_f_V2L_Output_Frequency'
 * '<S338>' : 'IDCR_ac/PokeIDCR_f_V2L_Pilot_Frequency'
 * '<S339>' : 'IDCR_ac/PokeIDCR_f_V2XFrequency'
 * '<S340>' : 'IDCR_ac/PokeIDCR_g_HVCMS_EVSEID'
 * '<S341>' : 'IDCR_ac/PokeIDCR_i_IDCM_DCCA_M182'
 * '<S342>' : 'IDCR_ac/PokeIDCR_i_ISO15118_SAScheduleTupleID'
 * '<S343>' : 'IDCR_ac/PokeIDCR_i_SAScheduleTupleID'
 * '<S344>' : 'IDCR_ac/PokeIDCR_t_EVSE_NotificationMaxDelay'
 * '<S345>' : 'IDCR_ac/PokeIDCR_t_IBS2_BattTemp'
 * '<S346>' : 'IDCR_ac/PokeIDCR_t_IBS_BattTemp'
 * '<S347>' : 'IDCR_ac/PokeIDCR_t_ISO15118_NotificationMaxDelay'
 * '<S348>' : 'IDCR_ac/PokeIDCR_y_ISO15118_SchemaID'
 * '<S349>' : 'IDCR_ac/PokeIDCR_y_ISO15118_VersionNumMajor'
 * '<S350>' : 'IDCR_ac/PokeIDCR_y_ISO15118_VersionNumMinor'
 * '<S351>' : 'IDCR_ac/Runnable_APM_Status'
 * '<S352>' : 'IDCR_ac/TmotIDCR_I_IBS_I_Batt'
 * '<S353>' : 'IDCR_ac/TmotIDCR_I_IBS_I_Batt_2'
 * '<S354>' : 'IDCR_ac/TmotIDCR_b_IBS_BattTemp'
 * '<S355>' : 'IDCR_ac/TmotIDCR_b_PlugAndChargeReq'
 * '<S356>' : 'IDCR_ac/FsftIDCR_E_EVSE_EnrgyToBeDlvrd/FsftIDCR_E_EVSE_EnrgyToBeDlvrdChrt'
 * '<S357>' : 'IDCR_ac/FsftIDCR_I_ACOutCurrent1/FsftIDCR_I_ACOutCurrent1Chrt'
 * '<S358>' : 'IDCR_ac/FsftIDCR_I_ACOutCurrent2/FsftIDCR_I_ACOutCurrent2Chrt'
 * '<S359>' : 'IDCR_ac/FsftIDCR_I_ACOutCurrent3/FsftIDCR_I_ACOutCurrent3Chrt'
 * '<S360>' : 'IDCR_ac/FsftIDCR_I_ACSideCurr_L2/FsftIDCR_I_ACSideCurr_L2Chrt'
 * '<S361>' : 'IDCR_ac/FsftIDCR_I_ACSideCurr_L3/FsftIDCR_I_ACSideCurr_L3Chrt'
 * '<S362>' : 'IDCR_ac/FsftIDCR_I_AC_Side_Curr/FsftIDCR_I_AC_Side_CurrChrt'
 * '<S363>' : 'IDCR_ac/FsftIDCR_I_APM_HV_Current/FsftIDCR_I_APM_HV_CurrentChrt'
 * '<S364>' : 'IDCR_ac/FsftIDCR_I_APM_LV_Current/FsftIDCR_I_APM_LV_CurrentChrt'
 * '<S365>' : 'IDCR_ac/FsftIDCR_I_AcOutCurrent/FsftIDCR_I_AcOutCurrentChrt'
 * '<S366>' : 'IDCR_ac/FsftIDCR_I_BattSide_Curr/FsftIDCR_I_BattSide_CurrChrt'
 * '<S367>' : 'IDCR_ac/FsftIDCR_I_ChrgCrntAvail/FsftIDCR_I_ChrgCrntAvailChrt'
 * '<S368>' : 'IDCR_ac/FsftIDCR_I_ChrgCurrent/FsftIDCR_I_ChrgCurrentChrt'
 * '<S369>' : 'IDCR_ac/FsftIDCR_I_DCInCurrent/FsftIDCR_I_DCInCurrentChrt'
 * '<S370>' : 'IDCR_ac/FsftIDCR_I_EVSECurr_RegTol/FsftIDCR_I_EVSECurr_RegTolChrt'
 * '<S371>' : 'IDCR_ac/FsftIDCR_I_EVSEMaxCurrLmt/FsftIDCR_I_EVSEMaxCurrLmtChrt'
 * '<S372>' : 'IDCR_ac/FsftIDCR_I_EVSEMinCurrLmt/FsftIDCR_I_EVSEMinCurrLmtChrt'
 * '<S373>' : 'IDCR_ac/FsftIDCR_I_EVSEOutputCurr/FsftIDCR_I_EVSEOutputCurrChrt'
 * '<S374>' : 'IDCR_ac/FsftIDCR_I_EVSEPeakCurrRip/FsftIDCR_I_EVSEPeakCurrRipChrt'
 * '<S375>' : 'IDCR_ac/FsftIDCR_I_IdcHvSetPFdbk/FsftIDCR_I_IdcHvSetPFdbkChrt'
 * '<S376>' : 'IDCR_ac/FsftIDCR_I_J1772InputCrntAval/FsftIDCR_I_J1772InputCrntAvalChrt'
 * '<S377>' : 'IDCR_ac/FsftIDCR_I_V2L_DischargeCurrent/FsftIDCR_I_V2L_DischargeCurrentChrt'
 * '<S378>' : 'IDCR_ac/FsftIDCR_I_V2XInCurrent/FsftIDCR_I_V2XInCurrentChrt'
 * '<S379>' : 'IDCR_ac/FsftIDCR_P_APM_InputPower/FsftIDCR_P_APM_InputPowerChrt'
 * '<S380>' : 'IDCR_ac/FsftIDCR_P_APM_OutputPower/FsftIDCR_P_APM_OutputPowerChrt'
 * '<S381>' : 'IDCR_ac/FsftIDCR_P_APM_PwrLoss/FsftIDCR_P_APM_PwrLossChrt'
 * '<S382>' : 'IDCR_ac/FsftIDCR_P_AvailablePower/FsftIDCR_P_AvailablePowerChrt'
 * '<S383>' : 'IDCR_ac/FsftIDCR_P_EVSEMaxPwrLmt/FsftIDCR_P_EVSEMaxPwrLmtChrt'
 * '<S384>' : 'IDCR_ac/FsftIDCR_Pct_GenRgSPDtyCycReq/FsftIDCR_Pct_GenRgSPDtyCycReqChrt'
 * '<S385>' : 'IDCR_ac/FsftIDCR_Pct_IBS_BattSOC/FsftIDCR_Pct_IBS_BattSOCChrt'
 * '<S386>' : 'IDCR_ac/FsftIDCR_Pct_UtilPctOfDCDC/FsftIDCR_Pct_UtilPctOfDCDCChrt'
 * '<S387>' : 'IDCR_ac/FsftIDCR_T_APM_TempColdPlate/FsftIDCR_T_APM_TempColdPlateChrt'
 * '<S388>' : 'IDCR_ac/FsftIDCR_T_Temp1/FsftIDCR_T_Temp1Chrt'
 * '<S389>' : 'IDCR_ac/FsftIDCR_T_Temp2/FsftIDCR_T_Temp2Chrt'
 * '<S390>' : 'IDCR_ac/FsftIDCR_U_ACOutVoltage1/FsftIDCR_U_ACOutVoltage1Chrt'
 * '<S391>' : 'IDCR_ac/FsftIDCR_U_ACOutVoltage2/FsftIDCR_U_ACOutVoltage2Chrt'
 * '<S392>' : 'IDCR_ac/FsftIDCR_U_ACOutVoltage3/FsftIDCR_U_ACOutVoltage3Chrt'
 * '<S393>' : 'IDCR_ac/FsftIDCR_U_ACSideVolt_L2/FsftIDCR_U_ACSideVolt_L2Chrt'
 * '<S394>' : 'IDCR_ac/FsftIDCR_U_ACSideVolt_L3/FsftIDCR_U_ACSideVolt_L3Chrt'
 * '<S395>' : 'IDCR_ac/FsftIDCR_U_AC_InputVltOBCM/FsftIDCR_U_AC_InputVltOBCMChrt'
 * '<S396>' : 'IDCR_ac/FsftIDCR_U_APM_HV_Voltage/FsftIDCR_U_APM_HV_VoltageChrt'
 * '<S397>' : 'IDCR_ac/FsftIDCR_U_APM_HvVsetPFdbk/FsftIDCR_U_APM_HvVsetPFdbkChrt'
 * '<S398>' : 'IDCR_ac/FsftIDCR_U_APM_LV_Voltage/FsftIDCR_U_APM_LV_VoltageChrt'
 * '<S399>' : 'IDCR_ac/FsftIDCR_U_APM_LvIsetPFdbk/FsftIDCR_U_APM_LvIsetPFdbkChrt'
 * '<S400>' : 'IDCR_ac/FsftIDCR_U_AcOutVoltage/FsftIDCR_U_AcOutVoltageChrt'
 * '<S401>' : 'IDCR_ac/FsftIDCR_U_BattSideVolt/FsftIDCR_U_BattSideVoltChrt'
 * '<S402>' : 'IDCR_ac/FsftIDCR_U_DCInVoltage/FsftIDCR_U_DCInVoltageChrt'
 * '<S403>' : 'IDCR_ac/FsftIDCR_U_EVRDesVSetP/FsftIDCR_U_EVRDesVSetPChrt'
 * '<S404>' : 'IDCR_ac/FsftIDCR_U_EVSEMaxVoltLmt/FsftIDCR_U_EVSEMaxVoltLmtChrt'
 * '<S405>' : 'IDCR_ac/FsftIDCR_U_EVSEMinVoltLmt/FsftIDCR_U_EVSEMinVoltLmtChrt'
 * '<S406>' : 'IDCR_ac/FsftIDCR_U_EVSEOutputVolt/FsftIDCR_U_EVSEOutputVoltChrt'
 * '<S407>' : 'IDCR_ac/FsftIDCR_U_EVSE_ThrshldVoltage/FsftIDCR_U_EVSE_ThrshldVoltageChrt'
 * '<S408>' : 'IDCR_ac/FsftIDCR_U_IBS_BattVolt/FsftIDCR_U_IBS_BattVoltChrt'
 * '<S409>' : 'IDCR_ac/FsftIDCR_U_OBC_Prox/FsftIDCR_U_OBC_ProxChrt'
 * '<S410>' : 'IDCR_ac/FsftIDCR_U_V2XInVoltage/FsftIDCR_U_V2XInVoltageChrt'
 * '<S411>' : 'IDCR_ac/FsftIDCR_U_V2XLVFeed/FsftIDCR_U_V2XLVFeedChrt'
 * '<S412>' : 'IDCR_ac/FsftIDCR_W_EVSE_SASPmax/FsftIDCR_W_EVSE_SASPmaxChrt'
 * '<S413>' : 'IDCR_ac/FsftIDCR_b_DC_Isolation_Disable_Cmd/FsftIDCR_b_DC_Isolation_Disable_CmdChrt'
 * '<S414>' : 'IDCR_ac/FsftIDCR_b_EVCC_FailureSts/FsftIDCR_b_EVCC_FailureStsChrt'
 * '<S415>' : 'IDCR_ac/FsftIDCR_b_EVSEIsolSts/FsftIDCR_b_EVSEIsolStsChrt'
 * '<S416>' : 'IDCR_ac/FsftIDCR_b_EVSE_ChargingSystemError/FsftIDCR_b_EVSE_ChargingSystemErrorChrt'
 * '<S417>' : 'IDCR_ac/FsftIDCR_b_EVSE_EnergizingState/FsftIDCR_b_EVSE_EnergizingStateChrt'
 * '<S418>' : 'IDCR_ac/FsftIDCR_b_EVSE_Offered_AC_Single_Phase/FsftIDCR_b_EVSE_Offered_AC_Single_PhaseChrt'
 * '<S419>' : 'IDCR_ac/FsftIDCR_b_EVSE_Offered_AC_Three_Phase/FsftIDCR_b_EVSE_Offered_AC_Three_PhaseChrt'
 * '<S420>' : 'IDCR_ac/FsftIDCR_b_EVSE_Offered_DC_Extended/FsftIDCR_b_EVSE_Offered_DC_ExtendedChrt'
 * '<S421>' : 'IDCR_ac/FsftIDCR_b_EVSE_Service1_Charging/FsftIDCR_b_EVSE_Service1_ChargingChrt'
 * '<S422>' : 'IDCR_ac/FsftIDCR_b_EVSE_Service1_Free/FsftIDCR_b_EVSE_Service1_FreeChrt'
 * '<S423>' : 'IDCR_ac/FsftIDCR_b_IBS_BattTemp/FsftIDCR_b_IBS_BattTempChrt'
 * '<S424>' : 'IDCR_ac/FsftIDCR_b_IBS_b_Batt/FsftIDCR_b_IBS_b_BattChrt'
 * '<S425>' : 'IDCR_ac/FsftIDCR_b_IBS_b_Batt_2/FsftIDCR_b_IBS_b_Batt_2Chrt'
 * '<S426>' : 'IDCR_ac/FsftIDCR_b_IDCM_GFCI_FaultSts/FsftIDCR_b_IDCM_GFCI_FaultStsChrt'
 * '<S427>' : 'IDCR_ac/FsftIDCR_b_IDCM_Wakeup_HCP/FsftIDCR_b_IDCM_Wakeup_HCPChrt'
 * '<S428>' : 'IDCR_ac/FsftIDCR_b_ISO15118_TLS_Offered/FsftIDCR_b_ISO15118_TLS_OfferedChrt'
 * '<S429>' : 'IDCR_ac/FsftIDCR_b_J1772_S2_StatusFA/FsftIDCR_b_J1772_S2_StatusFAChrt'
 * '<S430>' : 'IDCR_ac/FsftIDCR_b_OBCM_Timeout/FsftIDCR_b_OBCM_TimeoutChrt'
 * '<S431>' : 'IDCR_ac/FsftIDCR_b_OffrdEnrgyTxType/FsftIDCR_b_OffrdEnrgyTxTypeChrt'
 * '<S432>' : 'IDCR_ac/FsftIDCR_b_OffrdPayOptn/FsftIDCR_b_OffrdPayOptnChrt'
 * '<S433>' : 'IDCR_ac/FsftIDCR_b_PlugAndChargeReq/FsftIDCR_b_PlugAndChargeReqChrt'
 * '<S434>' : 'IDCR_ac/FsftIDCR_b_ReceiptRequired/FsftIDCR_b_ReceiptRequiredChrt'
 * '<S435>' : 'IDCR_ac/FsftIDCR_b_Resp_Code/FsftIDCR_b_Resp_CodeChrt'
 * '<S436>' : 'IDCR_ac/FsftIDCR_b_SDP_Sts/FsftIDCR_b_SDP_StsChrt'
 * '<S437>' : 'IDCR_ac/FsftIDCR_b_SLAC_Sts/FsftIDCR_b_SLAC_StsChrt'
 * '<S438>' : 'IDCR_ac/FsftIDCR_b_SupProtoNm/FsftIDCR_b_SupProtoNmChrt'
 * '<S439>' : 'IDCR_ac/FsftIDCR_b_SupSchemaID/FsftIDCR_b_SupSchemaIDChrt'
 * '<S440>' : 'IDCR_ac/FsftIDCR_b_SupVerNumMajor/FsftIDCR_b_SupVerNumMajorChrt'
 * '<S441>' : 'IDCR_ac/FsftIDCR_b_SupVerNumMinor/FsftIDCR_b_SupVerNumMinorChrt'
 * '<S442>' : 'IDCR_ac/FsftIDCR_b_TxMessageRequest/FsftIDCR_b_TxMessageRequestChrt'
 * '<S443>' : 'IDCR_ac/FsftIDCR_b_TxMessageResponse/FsftIDCR_b_TxMessageResponseChrt'
 * '<S444>' : 'IDCR_ac/FsftIDCR_b_V2L_Detected/FsftIDCR_b_V2L_DetectedChrt'
 * '<S445>' : 'IDCR_ac/FsftIDCR_b_V2L_DischargeDeratingRsn/FsftIDCR_b_V2L_DischargeDeratingRsnChrt'
 * '<S446>' : 'IDCR_ac/FsftIDCR_b_V2L_DischargeFailSts/FsftIDCR_b_V2L_DischargeFailStsChrt'
 * '<S447>' : 'IDCR_ac/FsftIDCR_b_V2L_DischargeFaultRsn/FsftIDCR_b_V2L_DischargeFaultRsnChrt'
 * '<S448>' : 'IDCR_ac/FsftIDCR_b_V2L_DischargeVoltage/FsftIDCR_b_V2L_DischargeVoltageChrt'
 * '<S449>' : 'IDCR_ac/FsftIDCR_b_V2L_Output_Frequency/FsftIDCR_b_V2L_Output_FrequencyChrt'
 * '<S450>' : 'IDCR_ac/FsftIDCR_b_V2L_Pilot_Frequency/FsftIDCR_b_V2L_Pilot_FrequencyChrt'
 * '<S451>' : 'IDCR_ac/FsftIDCR_b_V2XDerateSts/FsftIDCR_b_V2XDerateStsChrt'
 * '<S452>' : 'IDCR_ac/FsftIDCR_b_V2XFailSts/FsftIDCR_b_V2XFailStsChrt'
 * '<S453>' : 'IDCR_ac/FsftIDCR_b_V2XSts/FsftIDCR_b_V2XStsChrt'
 * '<S454>' : 'IDCR_ac/FsftIDCR_b_V2X_EVSE_Service_5_Free/FsftIDCR_b_V2X_EVSE_Service_5_FreeChrt'
 * '<S455>' : 'IDCR_ac/FsftIDCR_b_V2X_EVSE_Service_5_V2H/FsftIDCR_b_V2X_EVSE_Service_5_V2HChrt'
 * '<S456>' : 'IDCR_ac/FsftIDCR_cmp_ISO15118_EVSETimeStamp/FsftIDCR_cmp_ISO15118_EVSETimeStampChrt'
 * '<S457>' : 'IDCR_ac/FsftIDCR_d_EVSE_Accepted_Protocol/FsftIDCR_d_EVSE_Accepted_ProtocolChrt'
 * '<S458>' : 'IDCR_ac/FsftIDCR_d_ISO15118_ServiceID/FsftIDCR_d_ISO15118_ServiceIDChrt'
 * '<S459>' : 'IDCR_ac/FsftIDCR_e_APM2InterlockSts/FsftIDCR_e_APM2InterlockStsChrt'
 * '<S460>' : 'IDCR_ac/FsftIDCR_e_APM3InterlockSts/FsftIDCR_e_APM3InterlockStsChrt'
 * '<S461>' : 'IDCR_ac/FsftIDCR_e_Charger_WeldingDetectAvail/FsftIDCR_e_Charger_WeldingDetectAvailChrt'
 * '<S462>' : 'IDCR_ac/FsftIDCR_e_ChrgrModeStat_OBCM/FsftIDCR_e_ChrgrModeStat_OBCMChrt'
 * '<S463>' : 'IDCR_ac/FsftIDCR_e_Chrgr_FaultStates/FsftIDCR_e_Chrgr_FaultStatesChrt'
 * '<S464>' : 'IDCR_ac/FsftIDCR_e_DschrgFaultSts/FsftIDCR_e_DschrgFaultStsChrt'
 * '<S465>' : 'IDCR_ac/FsftIDCR_e_EVCC_FailureRsn/FsftIDCR_e_EVCC_FailureRsnChrt'
 * '<S466>' : 'IDCR_ac/FsftIDCR_e_EVSE_CHAdeMOProtocol/FsftIDCR_e_EVSE_CHAdeMOProtocolChrt'
 * '<S467>' : 'IDCR_ac/FsftIDCR_e_EVSE_ChrgStopControl/FsftIDCR_e_EVSE_ChrgStopControlChrt'
 * '<S468>' : 'IDCR_ac/FsftIDCR_e_EVSE_Error/FsftIDCR_e_EVSE_ErrorChrt'
 * '<S469>' : 'IDCR_ac/FsftIDCR_e_EVSE_Notification/FsftIDCR_e_EVSE_NotificationChrt'
 * '<S470>' : 'IDCR_ac/FsftIDCR_e_EVSE_OfferedService/FsftIDCR_e_EVSE_OfferedServiceChrt'
 * '<S471>' : 'IDCR_ac/FsftIDCR_e_EVSE_PilotStat_OBCM/FsftIDCR_e_EVSE_PilotStat_OBCMChrt'
 * '<S472>' : 'IDCR_ac/FsftIDCR_e_EVSE_TLS_CONNECTION/FsftIDCR_e_EVSE_TLS_CONNECTIONChrt'
 * '<S473>' : 'IDCR_ac/FsftIDCR_e_ExtChargerSts/FsftIDCR_e_ExtChargerStsChrt'
 * '<S474>' : 'IDCR_ac/FsftIDCR_e_IBS_Current_Status/FsftIDCR_e_IBS_Current_StatusChrt'
 * '<S475>' : 'IDCR_ac/FsftIDCR_e_IBS_I_RANGE/FsftIDCR_e_IBS_I_RANGEChrt'
 * '<S476>' : 'IDCR_ac/FsftIDCR_e_ISO15118_MessageResponse/FsftIDCR_e_ISO15118_MessageResponseChrt'
 * '<S477>' : 'IDCR_ac/FsftIDCR_e_ISO15118_ResponseCode/FsftIDCR_e_ISO15118_ResponseCodeChrt'
 * '<S478>' : 'IDCR_ac/FsftIDCR_e_ISO15118_TLS_Status/FsftIDCR_e_ISO15118_TLS_StatusChrt'
 * '<S479>' : 'IDCR_ac/FsftIDCR_e_J1772Stat/FsftIDCR_e_J1772StatChrt'
 * '<S480>' : 'IDCR_ac/FsftIDCR_e_OBCM_CP1Sts/FsftIDCR_e_OBCM_CP1StsChrt'
 * '<S481>' : 'IDCR_ac/FsftIDCR_e_OBCM_CP2Sts/FsftIDCR_e_OBCM_CP2StsChrt'
 * '<S482>' : 'IDCR_ac/FsftIDCR_e_OBCM_CP3Sts/FsftIDCR_e_OBCM_CP3StsChrt'
 * '<S483>' : 'IDCR_ac/FsftIDCR_e_OBCM_CSSts/FsftIDCR_e_OBCM_CSStsChrt'
 * '<S484>' : 'IDCR_ac/FsftIDCR_e_OBCM_Charger_Ready/FsftIDCR_e_OBCM_Charger_ReadyChrt'
 * '<S485>' : 'IDCR_ac/FsftIDCR_e_OBCM_HVILSts/FsftIDCR_e_OBCM_HVILStsChrt'
 * '<S486>' : 'IDCR_ac/FsftIDCR_e_ProxStat/FsftIDCR_e_ProxStatChrt'
 * '<S487>' : 'IDCR_ac/FsftIDCR_e_TxGBTMsgRequest/FsftIDCR_e_TxGBTMsgRequestChrt'
 * '<S488>' : 'IDCR_ac/FsftIDCR_e_TxGBTMsgResponse/FsftIDCR_e_TxGBTMsgResponseChrt'
 * '<S489>' : 'IDCR_ac/FsftIDCR_e_V2XDerateRsn/FsftIDCR_e_V2XDerateRsnChrt'
 * '<S490>' : 'IDCR_ac/FsftIDCR_e_V2XFaultRsn/FsftIDCR_e_V2XFaultRsnChrt'
 * '<S491>' : 'IDCR_ac/FsftIDCR_e_V2XInterlockSts/FsftIDCR_e_V2XInterlockStsChrt'
 * '<S492>' : 'IDCR_ac/FsftIDCR_e_V2XModeFeedback/FsftIDCR_e_V2XModeFeedbackChrt'
 * '<S493>' : 'IDCR_ac/FsftIDCR_f_ACOutFreq/FsftIDCR_f_ACOutFreqChrt'
 * '<S494>' : 'IDCR_ac/FsftIDCR_f_AcOutFrequency/FsftIDCR_f_AcOutFrequencyChrt'
 * '<S495>' : 'IDCR_ac/FsftIDCR_f_V2XFrequency/FsftIDCR_f_V2XFrequencyChrt'
 * '<S496>' : 'IDCR_ac/FsftIDCR_g_HVCMS_EVSEID/FsftIDCR_g_HVCMS_EVSEIDChrt'
 * '<S497>' : 'IDCR_ac/FsftIDCR_i_ISO15118_SAScheduleTupleID/FsftIDCR_i_ISO15118_SAScheduleTupleIDChrt'
 * '<S498>' : 'IDCR_ac/FsftIDCR_i_SAScheduleTupleID/FsftIDCR_i_SAScheduleTupleIDChrt'
 * '<S499>' : 'IDCR_ac/FsftIDCR_t_EVSE_NotificationMaxDelay/FsftIDCR_t_EVSE_NotificationMaxDelayChrt'
 * '<S500>' : 'IDCR_ac/FsftIDCR_t_ISO15118_NotificationMaxDelay/FsftIDCR_t_ISO15118_NotificationMaxDelayChrt'
 * '<S501>' : 'IDCR_ac/FsftIDCR_y_ISO15118_SchemaID/FsftIDCR_b_ISO15118_SchemaIDChrt'
 * '<S502>' : 'IDCR_ac/FsftIDCR_y_ISO15118_VersionNumMajor/FsftIDCR_y_VersionNumMajorChrt'
 * '<S503>' : 'IDCR_ac/FsftIDCR_y_ISO15118_VersionNumMinor/FsftIDCR_y_ISO15118_VersionNumMinorChrt'
 * '<S504>' : 'IDCR_ac/IDCR_MedTED/BattSocAccuracy_for_ESS'
 * '<S505>' : 'IDCR_ac/IDCR_MedTED/IBattConv'
 * '<S506>' : 'IDCR_ac/IDCR_MedTED/Proxi'
 * '<S507>' : 'IDCR_ac/IDCR_MedTED/BattSocAccuracy_for_ESS/SCALAR_BLK'
 * '<S508>' : 'IDCR_ac/IDCR_MedTED/IBattConv/Enumerated_Constant'
 * '<S509>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv'
 * '<S510>' : 'IDCR_ac/IDCR_MedTED/IBattConv/KeIDCR_b_IBS_I_Batt_P1P4_GC'
 * '<S511>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/Enumerated_Constant1'
 * '<S512>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/Enumerated_Constant2'
 * '<S513>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/Enumerated_Constant3'
 * '<S514>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/IBatt'
 * '<S515>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/KeIDCR_b_IBSSgnlConvRequired'
 * '<S516>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/Range_I1'
 * '<S517>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/Range_I1500'
 * '<S518>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/Range_I200'
 * '<S519>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/Range_I1/KeIDCR_I_IBSSgnlDvidrI1'
 * '<S520>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/Range_I1/KeIDCR_I_IBSSgnlOffSetI1'
 * '<S521>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/Range_I1500/KeIDCR_I_IBSSgnlDvidrI1500'
 * '<S522>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/Range_I1500/KeIDCR_I_IBSSgnlOffSetI1500'
 * '<S523>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/Range_I200/KeIDCR_I_IBSSgnlDvidrI200'
 * '<S524>' : 'IDCR_ac/IDCR_MedTED/IBattConv/IBattConv/Range_I200/KeIDCR_I_IBSSgnlOffSetI200'
 * '<S525>' : 'IDCR_ac/IDCR_MedTED/Proxi/Enum Set Block'
 * '<S526>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock'
 * '<S527>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock'
 * '<S528>' : 'IDCR_ac/IDCR_PwrOn/HVIL__InitBlock'
 * '<S529>' : 'IDCR_ac/IDCR_PwrOn/InitBlock'
 * '<S530>' : 'IDCR_ac/IDCR_PwrOn/PnC__InitBlock'
 * '<S531>' : 'IDCR_ac/IDCR_PwrOn/Sub_Out_Init'
 * '<S532>' : 'IDCR_ac/IDCR_PwrOn/V2L__InitBlock'
 * '<S533>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/EnumeratedConstant'
 * '<S534>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/EnumeratedConstant1'
 * '<S535>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/EnumeratedConstant2'
 * '<S536>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/EnumeratedConstant3'
 * '<S537>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/EnumeratedConstant4'
 * '<S538>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/Enumerated_Constant'
 * '<S539>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/Enumerated_Constant1'
 * '<S540>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/Enumerated_Constant2'
 * '<S541>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/Enumerated_Constant3'
 * '<S542>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/Enumerated_Constant4'
 * '<S543>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/Enumerated_Constant5'
 * '<S544>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/Enumerated_Constant6'
 * '<S545>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/Enumerated_Constant7'
 * '<S546>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/Enumerated_Constant8'
 * '<S547>' : 'IDCR_ac/IDCR_PwrOn/APM_Interface__InitBlock/KeIDCR_T_APM_HeatPlateTempDflt'
 * '<S548>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated Constant16'
 * '<S549>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated Constant17'
 * '<S550>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated Constant18'
 * '<S551>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated Constant26'
 * '<S552>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated Constant27'
 * '<S553>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated_Constant'
 * '<S554>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated_Constant1'
 * '<S555>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated_Constant13'
 * '<S556>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated_Constant14'
 * '<S557>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated_Constant2'
 * '<S558>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated_Constant3'
 * '<S559>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated_Constant4'
 * '<S560>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated_Constant5'
 * '<S561>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated_Constant6'
 * '<S562>' : 'IDCR_ac/IDCR_PwrOn/EVCC__InitBlock/Enumerated_Constant7'
 * '<S563>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant1'
 * '<S564>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant10'
 * '<S565>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant11'
 * '<S566>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant12'
 * '<S567>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant13'
 * '<S568>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant14'
 * '<S569>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant15'
 * '<S570>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant16'
 * '<S571>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant17'
 * '<S572>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant18'
 * '<S573>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant19'
 * '<S574>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant2'
 * '<S575>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant3'
 * '<S576>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant4'
 * '<S577>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant5'
 * '<S578>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant6'
 * '<S579>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant7'
 * '<S580>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant8'
 * '<S581>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/Enumerated_Constant9'
 * '<S582>' : 'IDCR_ac/IDCR_PwrOn/InitBlock/KeIDCR_e_Init_ProxStat'
 * '<S583>' : 'IDCR_ac/IDCR_PwrOn/PnC__InitBlock/Enumerated_Constant1'
 * '<S584>' : 'IDCR_ac/IDCR_PwrOn/PnC__InitBlock/Enumerated_Constant2'
 * '<S585>' : 'IDCR_ac/IDCR_PwrOn/PnC__InitBlock/Enumerated_Constant3'
 * '<S586>' : 'IDCR_ac/IDCR_PwrOn/V2L__InitBlock/Enumerated_Constant'
 * '<S587>' : 'IDCR_ac/IDCR_PwrOn/V2L__InitBlock/Enumerated_Constant1'
 * '<S588>' : 'IDCR_ac/IDCR_PwrOn/V2L__InitBlock/Enumerated_Constant2'
 * '<S589>' : 'IDCR_ac/IDCR_PwrOn/V2L__InitBlock/Enumerated_Constant3'
 * '<S590>' : 'IDCR_ac/IDCR_PwrOn/V2L__InitBlock/Enumerated_Constant4'
 * '<S591>' : 'IDCR_ac/IDCR_PwrOn/V2L__InitBlock/Enumerated_Constant5'
 * '<S592>' : 'IDCR_ac/IDCR_PwrOn/V2L__InitBlock/Enumerated_Constant6'
 * '<S593>' : 'IDCR_ac/IDCR_PwrOn/V2L__InitBlock/Enumerated_Constant7'
 * '<S594>' : 'IDCR_ac/PokeIDCR_E_EVSE_EnrgyToBeDlvrd/PokeIDCR_E_EVSE_EnrgyToBeDlvrdChrt'
 * '<S595>' : 'IDCR_ac/PokeIDCR_I_ACOutCurrent1/PokeIDCR_I_ACOutCurrent1Chrt'
 * '<S596>' : 'IDCR_ac/PokeIDCR_I_ACOutCurrent2/PokeIDCR_I_ACOutCurrent2Chrt'
 * '<S597>' : 'IDCR_ac/PokeIDCR_I_ACOutCurrent3/PokeIDCR_I_ACOutCurrent3Chrt'
 * '<S598>' : 'IDCR_ac/PokeIDCR_I_ACSideCurr_L2/PokeIDCR_I_ACSideCurr_L2Chrt'
 * '<S599>' : 'IDCR_ac/PokeIDCR_I_ACSideCurr_L3/PokeIDCR_I_ACSideCurr_L3Chrt'
 * '<S600>' : 'IDCR_ac/PokeIDCR_I_AC_Side_Curr/PokeIDCR_I_AC_Side_CurrChrt'
 * '<S601>' : 'IDCR_ac/PokeIDCR_I_APM_HV_Current/PokeIDCR_I_APM_HV_CurrentChrt'
 * '<S602>' : 'IDCR_ac/PokeIDCR_I_APM_LV_Current/PokeIDCR_I_APM_LV_CurrentChrt'
 * '<S603>' : 'IDCR_ac/PokeIDCR_I_AcOutCurrent/PokeIDCR_I_AcOutCurrentChrt'
 * '<S604>' : 'IDCR_ac/PokeIDCR_I_BattSide_Curr/PokeIDCR_I_BattSide_CurrChrt'
 * '<S605>' : 'IDCR_ac/PokeIDCR_I_ChrgCrntAvail/PokeIDCR_I_ChrgCrntAvailChrt'
 * '<S606>' : 'IDCR_ac/PokeIDCR_I_ChrgCurrent/PokeIDCR_I_ChrgCurrentChrt'
 * '<S607>' : 'IDCR_ac/PokeIDCR_I_DCInCurrent/PokeIDCR_I_DCInCurrentChrt'
 * '<S608>' : 'IDCR_ac/PokeIDCR_I_EVSECurr_RegTol/PokeIDCR_I_EVSECurr_RegTolChrt'
 * '<S609>' : 'IDCR_ac/PokeIDCR_I_EVSEMaxCurrLmt/PokeIDCR_I_EVSEMaxCurrLmtChrt'
 * '<S610>' : 'IDCR_ac/PokeIDCR_I_EVSEMinCurrLmt/PokeIDCR_I_EVSEMinCurrLmtChrt'
 * '<S611>' : 'IDCR_ac/PokeIDCR_I_EVSEOutputCurr/PokeIDCR_I_EVSEOutputCurrChrt'
 * '<S612>' : 'IDCR_ac/PokeIDCR_I_EVSEPeakCurrRip/PokeIDCR_I_EVSEPeakCurrRipChrt'
 * '<S613>' : 'IDCR_ac/PokeIDCR_I_IBS_I_Batt/PokeIDCR_I_IBS_I_BattChrt'
 * '<S614>' : 'IDCR_ac/PokeIDCR_I_IBS_I_Batt_2/PokeIDCR_I_IBS_I_Batt_2Chrt'
 * '<S615>' : 'IDCR_ac/PokeIDCR_I_IdcHvSetPFdbk/PokeIDCR_I_IdcHvSetPFdbkChrt'
 * '<S616>' : 'IDCR_ac/PokeIDCR_I_J1772InputCrntAval/PokeIDCR_I_J1772InputCrntAvalChrt'
 * '<S617>' : 'IDCR_ac/PokeIDCR_I_V2L_DischargeCurrent/PokeIDCR_I_V2L_DischargeCurrentChrt'
 * '<S618>' : 'IDCR_ac/PokeIDCR_I_V2XInCurrent/PokeIDCR_I_V2XInCurrentChrt'
 * '<S619>' : 'IDCR_ac/PokeIDCR_K_Service_ID/PokeIDCR_K_Service_IDChrt'
 * '<S620>' : 'IDCR_ac/PokeIDCR_P_APM_DeratingPower/PokeIDCR_P_APM_DeratingPowerChrt'
 * '<S621>' : 'IDCR_ac/PokeIDCR_P_APM_InputPower/PokeIDCR_P_APM_InputPowerChrt'
 * '<S622>' : 'IDCR_ac/PokeIDCR_P_APM_OutputPower/PokeIDCR_P_APM_OutputPowerChrt'
 * '<S623>' : 'IDCR_ac/PokeIDCR_P_APM_PwrLoss/PokeIDCR_P_APM_PwrLossChrt'
 * '<S624>' : 'IDCR_ac/PokeIDCR_P_AvailablePower/PokeIDCR_P_AvailablePowerChrt'
 * '<S625>' : 'IDCR_ac/PokeIDCR_P_EVSEMaxPwrLmt/PokeIDCR_P_EVSEMaxPwrLmtChrt'
 * '<S626>' : 'IDCR_ac/PokeIDCR_Pct_GenRgSPDtyCycReq/PokeIDCR_Pct_GenRgSPDtyCycReqChrt'
 * '<S627>' : 'IDCR_ac/PokeIDCR_Pct_IBS_BattSOC/PokeIDCR_Pct_IBS_BattSOCChrt'
 * '<S628>' : 'IDCR_ac/PokeIDCR_Pct_UtilPctOfDCDC/PokeIDCR_Pct_UtilPctOfDCDCChrt'
 * '<S629>' : 'IDCR_ac/PokeIDCR_T_APM_OutletCoolantTemp/PokeIDCR_T_APM_OutletCoolantTempChrt'
 * '<S630>' : 'IDCR_ac/PokeIDCR_T_APM_TempColdPlate/PokeIDCR_T_APM_TempColdPlateChrt'
 * '<S631>' : 'IDCR_ac/PokeIDCR_T_Temp1/PokeIDCR_T_Temp1Chrt'
 * '<S632>' : 'IDCR_ac/PokeIDCR_T_Temp2/PokeIDCR_T_Temp2Chrt'
 * '<S633>' : 'IDCR_ac/PokeIDCR_U_ACOutVoltage1/PokeIDCR_U_ACOutVoltage1Chrt'
 * '<S634>' : 'IDCR_ac/PokeIDCR_U_ACOutVoltage2/PokeIDCR_U_ACOutVoltage2Chrt'
 * '<S635>' : 'IDCR_ac/PokeIDCR_U_ACOutVoltage3/PokeIDCR_U_ACOutVoltage3Chrt'
 * '<S636>' : 'IDCR_ac/PokeIDCR_U_ACSideVolt_L2/PokeIDCR_U_ACSideVolt_L2Chrt'
 * '<S637>' : 'IDCR_ac/PokeIDCR_U_ACSideVolt_L3/PokeIDCR_U_ACSideVolt_L3Chrt'
 * '<S638>' : 'IDCR_ac/PokeIDCR_U_AC_InputVltOBCM/PokeIDCR_U_AC_InputVltOBCMChrt'
 * '<S639>' : 'IDCR_ac/PokeIDCR_U_APM_HV_Voltage/PokeIDCR_U_APM_HV_VoltageChrt'
 * '<S640>' : 'IDCR_ac/PokeIDCR_U_APM_HvVsetPFdbk/PokeIDCR_U_APM_HvVsetPFdbkChrt'
 * '<S641>' : 'IDCR_ac/PokeIDCR_U_APM_LV_Voltage/PokeIDCR_U_APM_LV_VoltageChrt'
 * '<S642>' : 'IDCR_ac/PokeIDCR_U_APM_LvIsetPFdbk/PokeIDCR_U_APM_LvIsetPFdbkChrt'
 * '<S643>' : 'IDCR_ac/PokeIDCR_U_AcOutVoltage/PokeIDCR_U_AcOutVoltageChrt'
 * '<S644>' : 'IDCR_ac/PokeIDCR_U_BattSideVolt/PokeIDCR_U_BattSideVoltChrt'
 * '<S645>' : 'IDCR_ac/PokeIDCR_U_DCInVoltage/PokeIDCR_U_DCInVoltageChrt'
 * '<S646>' : 'IDCR_ac/PokeIDCR_U_EVRDesVSetP/PokeIDCR_U_EVRDesVSetPChrt'
 * '<S647>' : 'IDCR_ac/PokeIDCR_U_EVSEMaxVoltLmt/PokeIDCR_U_EVSEMaxVoltLmtChrt'
 * '<S648>' : 'IDCR_ac/PokeIDCR_U_EVSEMinVoltLmt/PokeIDCR_U_EVSEMinVoltLmtChrt'
 * '<S649>' : 'IDCR_ac/PokeIDCR_U_EVSEOutputVolt/PokeIDCR_U_EVSEOutputVoltChrt'
 * '<S650>' : 'IDCR_ac/PokeIDCR_U_EVSE_ThrshldVoltage/PokeIDCR_U_EVSE_ThrshldVoltageChrt'
 * '<S651>' : 'IDCR_ac/PokeIDCR_U_IBS_BattVolt/PokeIDCR_U_IBS_BattVoltChrt'
 * '<S652>' : 'IDCR_ac/PokeIDCR_U_OBC_Prox/PokeIDCR_U_OBC_ProxChrt'
 * '<S653>' : 'IDCR_ac/PokeIDCR_U_V2L_DischargeVoltage/PokeIDCR_U_V2L_DischargeVoltageChrt'
 * '<S654>' : 'IDCR_ac/PokeIDCR_U_V2XInVoltage/PokeIDCR_U_V2XInVoltageChrt'
 * '<S655>' : 'IDCR_ac/PokeIDCR_U_V2XLVFeed/PokeIDCR_U_V2XLVFeedChrt'
 * '<S656>' : 'IDCR_ac/PokeIDCR_U_VdcHvFdbk/PokeIDCR_U_VdcHvFdbkChrt'
 * '<S657>' : 'IDCR_ac/PokeIDCR_W_EVSE_SASPmax/PokeIDCR_W_EVSE_SASPmaxChrt'
 * '<S658>' : 'IDCR_ac/PokeIDCR_b_AC_LnHi/KeIDCR_b_AC_LnHi_Inverted'
 * '<S659>' : 'IDCR_ac/PokeIDCR_b_AC_LnHi/PokeIDCR_b_AC_LnHiChrt'
 * '<S660>' : 'IDCR_ac/PokeIDCR_b_AC_LnLow/KeIDCR_b_AC_LnLow_Inverted'
 * '<S661>' : 'IDCR_ac/PokeIDCR_b_AC_LnLow/PokeIDCR_b_AC_LnLowChrt'
 * '<S662>' : 'IDCR_ac/PokeIDCR_b_BattNotDetctd/PokeIDCR_b_BattNotDetctdChrt'
 * '<S663>' : 'IDCR_ac/PokeIDCR_b_ChgEnblSts/PokeIDCR_b_ChgEnblStsChrt'
 * '<S664>' : 'IDCR_ac/PokeIDCR_b_ChrgEnblOBCM/PokeIDCR_b_ChrgEnblOBCMChrt'
 * '<S665>' : 'IDCR_ac/PokeIDCR_b_ChrgFail_On_OBCM/PokeIDCR_b_ChrgFail_On_OBCMChrt'
 * '<S666>' : 'IDCR_ac/PokeIDCR_b_DC_Isolation_Disable_Cmd/PokeIDCR_b_DC_Isolation_Disable_CmdChrt'
 * '<S667>' : 'IDCR_ac/PokeIDCR_b_DC_TimeOut/PokeIDCR_b_DC_TimeOutChrt'
 * '<S668>' : 'IDCR_ac/PokeIDCR_b_EVCC_FailureSts/PokeIDCR_b_EVCC_FailureStsChrt'
 * '<S669>' : 'IDCR_ac/PokeIDCR_b_EVSECurrLmtAchvd/KaIDCR_b_EVSELmtAchvd_Map'
 * '<S670>' : 'IDCR_ac/PokeIDCR_b_EVSECurrLmtAchvd/PokeIDCR_b_EVSECurrLmtAchvdChrt'
 * '<S671>' : 'IDCR_ac/PokeIDCR_b_EVSEProcessing/PokeIDCR_b_EVSEProcessingChrt'
 * '<S672>' : 'IDCR_ac/PokeIDCR_b_EVSEPwrLmtAchvd/KaIDCR_b_EVSELmtAchvd_Map'
 * '<S673>' : 'IDCR_ac/PokeIDCR_b_EVSEPwrLmtAchvd/PokeIDCR_b_EVSEPwrLmtAchvdChrt'
 * '<S674>' : 'IDCR_ac/PokeIDCR_b_EVSEVoltLmtAchvd/KaIDCR_b_EVSELmtAchvd_Map'
 * '<S675>' : 'IDCR_ac/PokeIDCR_b_EVSEVoltLmtAchvd/PokeIDCR_b_EVSEVoltLmtAchvdChrt'
 * '<S676>' : 'IDCR_ac/PokeIDCR_b_EVSE_ChargingSystemError/PokeIDCR_b_EVSE_ChargingSystemErrorChrt'
 * '<S677>' : 'IDCR_ac/PokeIDCR_b_EVSE_EnergizingState/PokeIDCR_b_EVSE_EnergizingStateChrt'
 * '<S678>' : 'IDCR_ac/PokeIDCR_b_EVSE_FreeService/PokeIDCR_b_EVSE_FreeServiceChrt'
 * '<S679>' : 'IDCR_ac/PokeIDCR_b_EVSE_OfferedPaymentContract/PokeIDCR_b_EVSE_OfferedPaymentContractChrt'
 * '<S680>' : 'IDCR_ac/PokeIDCR_b_EVSE_OfferedPaymentEIM/PokeIDCR_b_EVSE_OfferedPaymentEIMChrt'
 * '<S681>' : 'IDCR_ac/PokeIDCR_b_EVSE_Offered_AC_Single_Phase/PokeIDCR_b_EVSE_Offered_AC_Single_PhaseChrt'
 * '<S682>' : 'IDCR_ac/PokeIDCR_b_EVSE_Offered_AC_Three_Phase/PokeIDCR_b_EVSE_Offered_AC_Three_PhaseChrt'
 * '<S683>' : 'IDCR_ac/PokeIDCR_b_EVSE_Offered_DC_Extended/PokeIDCR_b_EVSE_Offered_DC_ExtendedChrt'
 * '<S684>' : 'IDCR_ac/PokeIDCR_b_EVSE_Service1_Charging/PokeIDCR_b_EVSE_Service1_ChargingChrt'
 * '<S685>' : 'IDCR_ac/PokeIDCR_b_EVSE_Service1_Free/PokeIDCR_b_EVSE_Service1_FreeChrt'
 * '<S686>' : 'IDCR_ac/PokeIDCR_b_EVSE_Service2_Certificate/PokeIDCR_b_EVSE_Service2_CertificateChrt'
 * '<S687>' : 'IDCR_ac/PokeIDCR_b_EVSE_Supported_DIN/PokeIDCR_b_EVSE_Supported_DINChrt'
 * '<S688>' : 'IDCR_ac/PokeIDCR_b_EVSE_Supported_ISO1/PokeIDCR_b_EVSE_Supported_ISO1Chrt'
 * '<S689>' : 'IDCR_ac/PokeIDCR_b_EVSE_TLS_OFFERED/PokeIDCR_b_EVSE_TLS_OFFEREDChrt'
 * '<S690>' : 'IDCR_ac/PokeIDCR_b_EVSer_On_OBCM/PokeIDCR_b_EVSer_On_OBCMChrt'
 * '<S691>' : 'IDCR_ac/PokeIDCR_b_GBT_EVSE_Charge_Permitting/PokeIDCR_b_GBT_EVSE_Charge_PermittingChrt'
 * '<S692>' : 'IDCR_ac/PokeIDCR_b_HVBatPerWU12VChrg/PokeIDCR_b_HVBatPerWU12VChrgChrt'
 * '<S693>' : 'IDCR_ac/PokeIDCR_b_HVIL_A_Failed/PokeIDCR_b_HVIL_A_FailedChrt'
 * '<S694>' : 'IDCR_ac/PokeIDCR_b_HVIL_B_Failed/PokeIDCR_b_HVIL_B_FailedChrt'
 * '<S695>' : 'IDCR_ac/PokeIDCR_b_HVIL_C_Failed/PokeIDCR_b_HVIL_C_FailedChrt'
 * '<S696>' : 'IDCR_ac/PokeIDCR_b_HvOverVStatus/PokeIDCR_b_HvOverVStatusChrt'
 * '<S697>' : 'IDCR_ac/PokeIDCR_b_HvTooHighIStatus/PokeIDCR_b_HvTooHighIStatusChrt'
 * '<S698>' : 'IDCR_ac/PokeIDCR_b_HvTooLowVStatus/PokeIDCR_b_HvTooLowVStatusChrt'
 * '<S699>' : 'IDCR_ac/PokeIDCR_b_IDCM_DCCA/PokeIDCR_b_IDCM_DCCAChrt'
 * '<S700>' : 'IDCR_ac/PokeIDCR_b_IDCM_GFCI_FaultSts/PokeIDCR_b_IDCM_GFCI_FaultStsChrt'
 * '<S701>' : 'IDCR_ac/PokeIDCR_b_IDCM_Wakeup_HCP/PokeIDCR_b_IDCM_Wakeup_HCPChrt'
 * '<S702>' : 'IDCR_ac/PokeIDCR_b_ISO15118_TLS_Offered/PokeIDCR_b_ISO15118_TLS_OfferedChrt'
 * '<S703>' : 'IDCR_ac/PokeIDCR_b_J1772_S2_Status/PokeIDCR_b_J1772_S2_StatusChrt'
 * '<S704>' : 'IDCR_ac/PokeIDCR_b_LvHighVStatus/PokeIDCR_b_LvHighVStatusChrt'
 * '<S705>' : 'IDCR_ac/PokeIDCR_b_LvTooHighIStatus/PokeIDCR_b_LvTooHighIStatusChrt'
 * '<S706>' : 'IDCR_ac/PokeIDCR_b_LvTooLowVStatus/PokeIDCR_b_LvTooLowVStatusChrt'
 * '<S707>' : 'IDCR_ac/PokeIDCR_b_OBCM_Timeout/PokeIDCR_b_OBCM_TimeoutChrt'
 * '<S708>' : 'IDCR_ac/PokeIDCR_b_PlugAndChargeReq/PokeIDCR_b_PlugAndChargeReqChrt'
 * '<S709>' : 'IDCR_ac/PokeIDCR_b_ReceiptRequired/PokeIDCR_b_ReceiptRequiredChrt'
 * '<S710>' : 'IDCR_ac/PokeIDCR_b_StatusACPresent/PokeIDCR_b_StatusACPresentChrt'
 * '<S711>' : 'IDCR_ac/PokeIDCR_b_TCPCommTerminated/PokeIDCR_b_TCPCommTerminatedChrt'
 * '<S712>' : 'IDCR_ac/PokeIDCR_b_V2L_Detected/PokeIDCR_b_V2L_DetectedChrt'
 * '<S713>' : 'IDCR_ac/PokeIDCR_b_V2XDerateSts/PokeIDCR_b_V2XDerateStsChrt'
 * '<S714>' : 'IDCR_ac/PokeIDCR_b_V2XFailSts/PokeIDCR_b_V2XFailStsChrt'
 * '<S715>' : 'IDCR_ac/PokeIDCR_b_V2XSts/PokeIDCR_b_V2XStsChrt'
 * '<S716>' : 'IDCR_ac/PokeIDCR_b_V2X_EVSE_Service_5_Free/PokeIDCR_b_V2X_EVSE_Service_5_FreeChrt'
 * '<S717>' : 'IDCR_ac/PokeIDCR_b_V2X_EVSE_Service_5_V2H/PokeIDCR_b_V2X_EVSE_Service_5_V2HChrt'
 * '<S718>' : 'IDCR_ac/PokeIDCR_cmp_ISO15118_EVSETimeStamp/PokeIDCR_cmp_ISO15118_EVSETimeStampChrt'
 * '<S719>' : 'IDCR_ac/PokeIDCR_d_EVSE_Accepted_Protocol/PokeIDCR_d_EVSE_Accepted_ProtocolChrt'
 * '<S720>' : 'IDCR_ac/PokeIDCR_d_ISO15118_ServiceID/PokeIDCR_d_ISO15118_ServiceIDChrt'
 * '<S721>' : 'IDCR_ac/PokeIDCR_e_APM2InterlockSts/PokeIDCR_e_APM2InterlockStsChrt'
 * '<S722>' : 'IDCR_ac/PokeIDCR_e_APM3InterlockSts/PokeIDCR_e_APM3InterlockStsChrt'
 * '<S723>' : 'IDCR_ac/PokeIDCR_e_APM_DeratingModeStatus/PokeIDCR_e_APM_DeratingModeStatusChrt'
 * '<S724>' : 'IDCR_ac/PokeIDCR_e_APM_DeratingReason/PokeIDCR_e_APM_DeratingReasonChrt'
 * '<S725>' : 'IDCR_ac/PokeIDCR_e_APM_FailureModeStatus/PokeIDCR_e_APM_FailureModeStatusChrt'
 * '<S726>' : 'IDCR_ac/PokeIDCR_e_APM_FailureReason/PokeIDCR_e_APM_FailureReasonChrt'
 * '<S727>' : 'IDCR_ac/PokeIDCR_e_APM_FailureType/PokeIDCR_e_APM_FailureTypeChrt'
 * '<S728>' : 'IDCR_ac/PokeIDCR_e_APM_ThermalRunaway/PokeIDCR_e_APM_ThermalRunawayChrt'
 * '<S729>' : 'IDCR_ac/PokeIDCR_e_Charger_WeldingDetectAvail/PokeIDCR_e_Charger_WeldingDetectAvailChrt'
 * '<S730>' : 'IDCR_ac/PokeIDCR_e_ChrgFailSts/PokeIDCR_e_ChrgFailStsChrt'
 * '<S731>' : 'IDCR_ac/PokeIDCR_e_ChrgrModeStat_OBCM/PokeIDCR_e_ChrgrModeStat_OBCMChrt'
 * '<S732>' : 'IDCR_ac/PokeIDCR_e_Chrgr_FaultStates/PokeIDCR_e_Chrgr_FaultStatesChrt'
 * '<S733>' : 'IDCR_ac/PokeIDCR_e_DschrgFaultSts/PokeIDCR_e_DschrgFaultStsChrt'
 * '<S734>' : 'IDCR_ac/PokeIDCR_e_EVCC_FailureRsn/PokeIDCR_e_EVCC_FailureRsnChrt'
 * '<S735>' : 'IDCR_ac/PokeIDCR_e_EVSEIsolSts/KaIDCR_e_EVSEIsolSts_Map'
 * '<S736>' : 'IDCR_ac/PokeIDCR_e_EVSEIsolSts/PokeIDCR_e_EVSEIsolStsChrt'
 * '<S737>' : 'IDCR_ac/PokeIDCR_e_EVSEStsCode/PokeIDCR_e_EVSEStsCodeChrt'
 * '<S738>' : 'IDCR_ac/PokeIDCR_e_EVSE_CHAdeMOProtocol/PokeIDCR_e_EVSE_CHAdeMOProtocolChrt'
 * '<S739>' : 'IDCR_ac/PokeIDCR_e_EVSE_ChrgStopControl/PokeIDCR_e_EVSE_ChrgStopControlChrt'
 * '<S740>' : 'IDCR_ac/PokeIDCR_e_EVSE_Error/PokeIDCR_e_EVSE_ErrorChrt'
 * '<S741>' : 'IDCR_ac/PokeIDCR_e_EVSE_Notification/PokeIDCR_e_EVSE_NotificationChrt'
 * '<S742>' : 'IDCR_ac/PokeIDCR_e_EVSE_OfferedService/PokeIDCR_e_EVSE_OfferedServiceChrt'
 * '<S743>' : 'IDCR_ac/PokeIDCR_e_EVSE_PilotStat_OBCM/PokeIDCR_e_EVSE_PilotStat_OBCMChrt'
 * '<S744>' : 'IDCR_ac/PokeIDCR_e_EVSE_TLS_CONNECTION/PokeIDCR_e_EVSE_TLS_CONNECTIONChrt'
 * '<S745>' : 'IDCR_ac/PokeIDCR_e_ExtChargerSts/PokeIDCR_e_ExtChargerStsChrt'
 * '<S746>' : 'IDCR_ac/PokeIDCR_e_IBS_BattSocAcc/PokeIDCR_e_IBS_BattSocAccChrt'
 * '<S747>' : 'IDCR_ac/PokeIDCR_e_IBS_BattSocAcc/SCALAR_BLK'
 * '<S748>' : 'IDCR_ac/PokeIDCR_e_IBS_BattTempSts/PokeIDCR_e_IBS_BattTempStsChrt'
 * '<S749>' : 'IDCR_ac/PokeIDCR_e_IBS_BattVoltSts/PokeIDCR_e_IBS_BattVoltStsChrt'
 * '<S750>' : 'IDCR_ac/PokeIDCR_e_IBS_Current_Status/PokeIDCR_e_IBS_Current_StatusChrt'
 * '<S751>' : 'IDCR_ac/PokeIDCR_e_IBS_I_RANGE/PokeIDCR_e_IBS_I_RANGEChrt'
 * '<S752>' : 'IDCR_ac/PokeIDCR_e_ISO15118_MessageResponse/PokeIDCR_e_ISO15118_MessageResponseChrt'
 * '<S753>' : 'IDCR_ac/PokeIDCR_e_ISO15118_ResponseCode/PokeIDCR_e_ISO15118_ResponseCodeChrt'
 * '<S754>' : 'IDCR_ac/PokeIDCR_e_ISO15118_TLS_Status/PokeIDCR_e_ISO15118_TLS_StatusChrt'
 * '<S755>' : 'IDCR_ac/PokeIDCR_e_J1772Stat/PokeIDCR_e_J1772StatChrt'
 * '<S756>' : 'IDCR_ac/PokeIDCR_e_OBCM_CP1Sts/PokeIDCR_e_OBCM_CP1StsChrt'
 * '<S757>' : 'IDCR_ac/PokeIDCR_e_OBCM_CP2Sts/PokeIDCR_e_OBCM_CP2StsChrt'
 * '<S758>' : 'IDCR_ac/PokeIDCR_e_OBCM_CP3Sts/PokeIDCR_e_OBCM_CP3StsChrt'
 * '<S759>' : 'IDCR_ac/PokeIDCR_e_OBCM_CSSts/PokeIDCR_e_OBCM_CSStsChrt'
 * '<S760>' : 'IDCR_ac/PokeIDCR_e_OBCM_Charger_Ready/PokeIDCR_e_OBCM_Charger_ReadyChrt'
 * '<S761>' : 'IDCR_ac/PokeIDCR_e_OBCM_HVILSts/PokeIDCR_e_OBCM_HVILStsChrt'
 * '<S762>' : 'IDCR_ac/PokeIDCR_e_OffrdEnrgyTxType/PokeIDCR_e_OffrdEnrgyTxTypeChrt'
 * '<S763>' : 'IDCR_ac/PokeIDCR_e_OffrdPayOptn/PokeIDCR_e_OffrdPayOptnChrt'
 * '<S764>' : 'IDCR_ac/PokeIDCR_e_ProxStat/PokeIDCR_e_ProxStatChrt'
 * '<S765>' : 'IDCR_ac/PokeIDCR_e_Prox_GBT/PokeIDCR_e_Prox_GBTChrt'
 * '<S766>' : 'IDCR_ac/PokeIDCR_e_Resp_Code/PokeIDCR_e_Resp_CodeChrt'
 * '<S767>' : 'IDCR_ac/PokeIDCR_e_SDP_Sts/KaIDCR_e_SDPSts_Map'
 * '<S768>' : 'IDCR_ac/PokeIDCR_e_SDP_Sts/PokeIDCR_e_SDP_StsChrt'
 * '<S769>' : 'IDCR_ac/PokeIDCR_e_SLAC_Sts/KaIDCR_e_SLACSts_Map'
 * '<S770>' : 'IDCR_ac/PokeIDCR_e_SLAC_Sts/PokeIDCR_e_SLAC_StsChrt'
 * '<S771>' : 'IDCR_ac/PokeIDCR_e_SupProtoNm/PokeIDCR_e_SupProtoNmChrt'
 * '<S772>' : 'IDCR_ac/PokeIDCR_e_SupSchemaID/PokeIDCR_e_SupSchemaIDChrt'
 * '<S773>' : 'IDCR_ac/PokeIDCR_e_SupVerNumMajor/PokeIDCR_e_SupVerNumMajorChrt'
 * '<S774>' : 'IDCR_ac/PokeIDCR_e_SupVerNumMinor/PokeIDCR_e_SupVerNumMinorChrt'
 * '<S775>' : 'IDCR_ac/PokeIDCR_e_TxGBTMsgRequest/PokeIDCR_e_TxGBTMsgRequestChrt'
 * '<S776>' : 'IDCR_ac/PokeIDCR_e_TxGBTMsgResponse/PokeIDCR_e_TxGBTMsgResponseChrt'
 * '<S777>' : 'IDCR_ac/PokeIDCR_e_TxMessageRequest/KaIDCR_e_TxMessRq_Map'
 * '<S778>' : 'IDCR_ac/PokeIDCR_e_TxMessageRequest/PokeIDCR_e_TxMessageRequestChrt'
 * '<S779>' : 'IDCR_ac/PokeIDCR_e_TxMessageResponse/PokeIDCR_e_TxMessageResponseChrt'
 * '<S780>' : 'IDCR_ac/PokeIDCR_e_V2L_DischargeDeratingRsn/PokeIDCR_e_V2L_DischargeDeratingRsnChrt'
 * '<S781>' : 'IDCR_ac/PokeIDCR_e_V2L_DischargeFailSts/PokeIDCR_e_V2L_DischargeFailStsChrt'
 * '<S782>' : 'IDCR_ac/PokeIDCR_e_V2L_DischargeFaultRsn/PokeIDCR_e_V2L_DischargeFaultRsnChrt'
 * '<S783>' : 'IDCR_ac/PokeIDCR_e_V2XDerateRsn/PokeIDCR_e_V2XDerateRsnChrt'
 * '<S784>' : 'IDCR_ac/PokeIDCR_e_V2XFaultRsn/PokeIDCR_e_V2XFaultRsnChrt'
 * '<S785>' : 'IDCR_ac/PokeIDCR_e_V2XInterlockSts/PokeIDCR_e_V2XInterlockStsChrt'
 * '<S786>' : 'IDCR_ac/PokeIDCR_e_V2XModeFeedback/PokeIDCR_e_V2XModeFeedbackChrt'
 * '<S787>' : 'IDCR_ac/PokeIDCR_e_stModeRqAPM/PokeIDCR_e_stModeRqAPMChrt'
 * '<S788>' : 'IDCR_ac/PokeIDCR_f_ACOutFreq/PokeIDCR_f_ACOutFreqChrt'
 * '<S789>' : 'IDCR_ac/PokeIDCR_f_AcOutFrequency/PokeIDCR_f_AcOutFrequencyChrt'
 * '<S790>' : 'IDCR_ac/PokeIDCR_f_V2L_Output_Frequency/PokeIDCR_f_V2L_Output_FrequencyChrt'
 * '<S791>' : 'IDCR_ac/PokeIDCR_f_V2L_Pilot_Frequency/PokeIDCR_f_V2L_Pilot_FrequencyChrt'
 * '<S792>' : 'IDCR_ac/PokeIDCR_f_V2XFrequency/PokeIDCR_f_V2XFrequencyChrt'
 * '<S793>' : 'IDCR_ac/PokeIDCR_g_HVCMS_EVSEID/PokeIDCR_g_HVCMS_EVSEIDChrt'
 * '<S794>' : 'IDCR_ac/PokeIDCR_i_IDCM_DCCA_M182/KeIDCR_i_IDCM_DCCA_HLC'
 * '<S795>' : 'IDCR_ac/PokeIDCR_i_IDCM_DCCA_M182/PokeIDCR_i_IDCM_DCCA_M182Chrt'
 * '<S796>' : 'IDCR_ac/PokeIDCR_i_ISO15118_SAScheduleTupleID/PokeIDCR_i_ISO15118_SAScheduleTupleIDChrt'
 * '<S797>' : 'IDCR_ac/PokeIDCR_i_SAScheduleTupleID/PokeIDCR_i_SAScheduleTupleIDChrt'
 * '<S798>' : 'IDCR_ac/PokeIDCR_t_EVSE_NotificationMaxDelay/PokeIDCR_t_EVSE_NotificationMaxDelayChrt'
 * '<S799>' : 'IDCR_ac/PokeIDCR_t_IBS2_BattTemp/PokeIDCR_t_IBS2_BattTempChrt'
 * '<S800>' : 'IDCR_ac/PokeIDCR_t_IBS_BattTemp/PokeIDCR_t_IBS_BattTempChrt'
 * '<S801>' : 'IDCR_ac/PokeIDCR_t_ISO15118_NotificationMaxDelay/PokeIDCR_t_ISO15118_NotificationMaxDelayChrt'
 * '<S802>' : 'IDCR_ac/PokeIDCR_y_ISO15118_SchemaID/PokeIDCR_y_ISO15118_SchemaIDChrt'
 * '<S803>' : 'IDCR_ac/PokeIDCR_y_ISO15118_VersionNumMajor/PokeIDCR_y_VersionNumMajorChrt'
 * '<S804>' : 'IDCR_ac/PokeIDCR_y_ISO15118_VersionNumMinor/PokeIDCR_y_ISO15118_VersionNumMinorChrt'
 * '<S805>' : 'IDCR_ac/Runnable_APM_Status/Enum'
 * '<S806>' : 'IDCR_ac/Runnable_APM_Status/Enum1'
 * '<S807>' : 'IDCR_ac/Runnable_APM_Status/Enum2'
 * '<S808>' : 'IDCR_ac/Runnable_APM_Status/Enum3'
 * '<S809>' : 'IDCR_ac/Runnable_APM_Status/Enum4'
 * '<S810>' : 'IDCR_ac/Runnable_APM_Status/Enum5'
 * '<S811>' : 'IDCR_ac/Runnable_APM_Status/Enum6'
 * '<S812>' : 'IDCR_ac/TmotIDCR_I_IBS_I_Batt/TmotIDCR_I_IBS_I_BattChrt'
 * '<S813>' : 'IDCR_ac/TmotIDCR_I_IBS_I_Batt_2/TmotIDCR_I_IBS_I_Batt_2Chrt'
 * '<S814>' : 'IDCR_ac/TmotIDCR_b_IBS_BattTemp/TmotIDCR_b_IBS_BattTempChrt'
 * '<S815>' : 'IDCR_ac/TmotIDCR_b_PlugAndChargeReq/TmotIDCR_b_PlugAndChargeReqChrt'
 */
#endif                                 /* RTW_HEADER_IDCR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
