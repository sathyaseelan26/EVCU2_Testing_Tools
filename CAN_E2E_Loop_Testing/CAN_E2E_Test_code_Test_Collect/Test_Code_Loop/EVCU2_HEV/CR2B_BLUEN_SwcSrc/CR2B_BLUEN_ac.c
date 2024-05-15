/*
 * File: CR2B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'CR2B_BLUEN_ac'.
 *
 * Model version                  : 1.55
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:50:52 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CR2B_BLUEN_ac.h"



boolean VeCANR_b_OBC_Temp1TO_CR2B_BLUEN_ac_Test_1;
boolean VeCANR_b_OBC_Temp3TO_CR2B_BLUEN_ac_Test_1;
boolean VeCANR_b_OBC_Temp4TO_CR2B_BLUEN_ac_Test_1;
boolean VeCANR_b_OBC_Temp2TO_CR2B_BLUEN_ac_Test_1;



float32 VeCANR_T_OBC_Temp4_CR2B_BLUEN_ac_Test_1;
float32 VeCANR_T_OBC_Temp3_CR2B_BLUEN_ac_Test_1;
float32 VeCANR_T_OBC_Temp2_CR2B_BLUEN_ac_Test_1;
float32 VeCANR_T_OBC_Temp1_CR2B_BLUEN_ac_Test_1;

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CR2B_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, CR2B_BLUEN_VAR_INIT) KeCR2B_b_CanLocStatusBypEnbl
    = 0;                               /* Referenced by: '<S17>/Calib' */
static volatile CONST(TePWMD_e_CanLocStatus, CR2B_BLUEN_VAR_INIT)
    KeCR2B_e_CanLocStatus = CePWMD_e_LOC_Disable;/* Referenced by: '<S18>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_CR2B_BLUEN
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR2B_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCANR_y_OBC_Temp1_CallStatus;/* '<S631>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCANR_y_OBC_Temp2_CallStatus;/* '<S639>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCANR_y_OBC_Temp3_CallStatus;/* '<S647>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCANR_y_OBC_Temp4_CallStatus;/* '<S653>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_CtrlSts_Fbk_CallStatus;/* '<S58>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_CurrLimitMode_CallStatus;/* '<S62>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_DeratingMdSts_CallStatus;/* '<S66>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_DeratingPower_CallStatus;/* '<S70>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_DeratingReasn_CallStatus;/* '<S74>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_EstPwrLoss_CallStatus;/* '<S78>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_FailureReason_CallStatus;/* '<S84>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_FailureType_CallStatus;/* '<S88>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_HV_V_Fbk_CallStatus;/* '<S98>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_HV_y_Fbk_CallStatus;/* '<S92>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_HvOverVStatus_CallStatus;/* '<S104>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_HvVsetPFdbk_CallStatus;/* '<S108>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_IdcHvSetPFdbk_CallStatus;/* '<S114>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_InputPower_CallStatus;/* '<S120>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_LV_V_Fbk_CallStatus;/* '<S132>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_LV_y_Fbk_CallStatus;/* '<S126>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_OutputPower_CallStatus;/* '<S138>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_PSFB_Temp1_CallStatus;/* '<S144>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_PSFB_Temp2_CallStatus;/* '<S150>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_PowerLimMode_CallStatus;/* '<S156>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_TempColdPlate_CallStatus;/* '<S160>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_APM_UtilPctOfDCDC_CallStatus;/* '<S166>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BMS_HV_HiTempThrs_CallStatus;/* '<S191>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BMS_HV_LoTempThrs_CallStatus;/* '<S197>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCMCntctrsMTOWrn_CallStatus;/* '<S231>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCMCntctrsSTOWrn_CallStatus;/* '<S235>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCMInterlockSts_CallStatus;/* '<S340>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCMMaxCelVoltAlwd_CallStatus;/* '<S553>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCMMaxPkVoltAllwd_CallStatus;/* '<S559>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCMMinCelVoltAlwd_CallStatus;/* '<S565>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCMMinPkVoltAllwd_CallStatus;/* '<S571>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_Cell_VoltAvg_CallStatus;/* '<S519>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_Cell_VoltMax_CallStatus;/* '<S525>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_Cell_VoltMin_CallStatus;/* '<S531>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_DCCntctrMTOW_CallStatus;/* '<S346>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_DCCntctrSTOW_CallStatus;/* '<S350>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVBattGFDSts_CallStatus;/* '<S364>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVCelMxDchImp_CallStatus;/* '<S239>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVChrgCurProf_CallStatus;/* '<S251>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVClMinDchImp_CallStatus;/* '<S245>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVNrCelMaxTmp_CallStatus;/* '<S537>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVNrCelMaxVlt_CallStatus;/* '<S541>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVNrCelMinTmp_CallStatus;/* '<S545>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVNrCelMinVlt_CallStatus;/* '<S549>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVOutletTemp_CallStatus;/* '<S401>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVPwrMaxChgLT_CallStatus;/* '<S263>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVPwrMaxChgMT_CallStatus;/* '<S271>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVPwrMaxChgST_CallStatus;/* '<S279>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVPwrMxDchgLT_CallStatus;/* '<S287>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVPwrMxDchgMT_CallStatus;/* '<S295>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVPwrMxDchgST_CallStatus;/* '<S303>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HVTracBusVolt_CallStatus;/* '<S467>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_BalancgMd_CallStatus;/* '<S354>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_BatChrgSts_CallStatus;/* '<S257>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_BattIISts_CallStatus;/* '<S358>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_Capacity_CallStatus;/* '<S371>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_ChrBusSts_CallStatus;/* '<S377>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_Current_CallStatus;/* '<S383>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_DCFC_ISts_CallStatus;/* '<S389>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_InletTemp_CallStatus;/* '<S395>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_SOC_CallStatus;/* '<S407>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_SOH_CallStatus;/* '<S415>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_SOH_Low_CallStatus;/* '<S419>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_Temp_Avg_CallStatus;/* '<S423>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_Temp_Max_CallStatus;/* '<S431>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_Temp_Min_CallStatus;/* '<S439>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_ThermRnway_CallStatus;/* '<S447>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_TracBusSts_CallStatus;/* '<S453>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_HV_TracMaiCS_CallStatus;/* '<S459>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_OCVAvgCelVolt_CallStatus;/* '<S577>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_OCVMaxCelVolt_CallStatus;/* '<S583>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_OCVMinCelVolt_CallStatus;/* '<S589>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BPCM_PwrLimpHmOn_CallStatus;/* '<S473>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BoostCnvrFailrSts_CallStatus;/* '<S1053>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BoostConvRctrTemp_CallStatus;/* '<S1041>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BstConvLwrIGBT_TF_CallStatus;/* '<S1035>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_BstConvUprIGBT_TF_CallStatus;/* '<S1047>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_DMPI_TransmissionTemp_CallStatus;/* '<S1059>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_HEV_OnRq_BPCM_CallStatus;/* '<S203>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_HVBP_BDU_BsbrTemp_CallStatus;/* '<S477>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_HVBP_Busbar_Temp_CallStatus;/* '<S481>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_HVBatCelVoltHiThrs_CallStatus;/* '<S207>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_HVBatCelVoltLoThrs_CallStatus;/* '<S213>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_HVBatCntctOpnTime_CallStatus;/* '<S485>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_HVBatCntctWeldChk_CallStatus;/* '<S491>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_HVBatLastSlept_CallStatus;/* '<S495>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_HVBatReady_CallStatus;/* '<S499>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_ImpactHardwireV_CallStatus;/* '<S180>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_ImpactHardwire_CallStatus;/* '<S174>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_MCPA_InverterTemp_CallStatus;/* '<S920>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_MCPA_ROL_Request_CallStatus;/* '<S928>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_MCPA_Rotor_Temp_CallStatus;/* '<S932>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_MCPA_ServLamp_Req_CallStatus;/* '<S912>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_MCPA_Temp_CallStatus;/* '<S940>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_MCPB_InverterTemp_CallStatus;/* '<S957>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_MCPB_ROL_Request_CallStatus;/* '<S965>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_MCPB_Rotor_Temp_CallStatus;/* '<S969>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_MCPB_ServLamp_Req_CallStatus;/* '<S949>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_MCPB_Temp_CallStatus;/* '<S977>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_Output_Torque_Lim_CallStatus;/* '<S1063>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PCUDrvRdyCmpltnSts_CallStatus;/* '<S1069>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PCU_MaxBoostdVolt_CallStatus;/* '<S1075>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PCU_MaxChrgPwrLmt_CallStatus;/* '<S1081>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT)
    VeCRDB_y_PCU_MaxDchaPwrLmtShrTrm_CallStatus;/* '<S1095>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PCU_MaxDchaPwrLmt_CallStatus;/* '<S1089>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PCU_Tmp_StopFlag_CallStatus;/* '<S1101>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMA_CptySpdDivVlt_CallStatus;/* '<S1157>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMA_DratingFactr_CallStatus;/* '<S1183>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMA_HV_CnctrOpnRq_CallStatus;/* '<S1195>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMA_InterlockSts_CallStatus;/* '<S1201>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMA_MtrMaxCptyTrq_CallStatus;/* '<S1228>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMA_MtrMinCptyTrq_CallStatus;/* '<S1234>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMA_TrqAchvdAEMD_CallStatus;/* '<S1264>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMB_CptySpdDivVlt_CallStatus;/* '<S1321>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMB_DratngFactor_CallStatus;/* '<S1347>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMB_HV_CnctrOpnRq_CallStatus;/* '<S1359>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMB_InterlockSts_CallStatus;/* '<S1367>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMB_MtrMaxCptyTrq_CallStatus;/* '<S1394>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMB_MtrMinCptyTrq_CallStatus;/* '<S1400>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIMB_TrqAchvdAEMD_CallStatus;/* '<S1430>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_3PS_Pos_CallStatus;/* '<S1129>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_6SO_Status_CallStatus;/* '<S1137>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_AccelRaw_CallStatus;/* '<S1143>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_CoolantTemp_CallStatus;/* '<S1151>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_DC_Current_CallStatus;/* '<S1163>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_DC_Voltage_CallStatus;/* '<S1171>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_DerateReasn_CallStatus;/* '<S1179>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_Dschrge_Sts_CallStatus;/* '<S1189>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_Invrtr_St_CallStatus;/* '<S1208>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_MaxTorq_CallStatus;/* '<S1216>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_MinTorq_CallStatus;/* '<S1222>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_RPM_CallStatus;/* '<S1240>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_SPT_Stat_CallStatus;/* '<S1248>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_Spd_Lim_CallStatus;/* '<S1256>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_A_Trq_Achvd_CallStatus;/* '<S1272>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_3PS_Pos_CallStatus;/* '<S1299>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_6SO_Status_CallStatus;/* '<S1307>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_AccelRaw_CallStatus;/* '<S1313>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_DC_Current_CallStatus;/* '<S1327>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_DC_Voltage_CallStatus;/* '<S1335>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_DerateReasn_CallStatus;/* '<S1343>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_Dschrge_Sts_CallStatus;/* '<S1353>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_Invrtr_St_CallStatus;/* '<S1374>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_MaxTorq_CallStatus;/* '<S1382>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_MinTorq_CallStatus;/* '<S1388>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_RPM_CallStatus;/* '<S1406>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_SPT_Stat_CallStatus;/* '<S1414>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_Spd_Lim_CallStatus;/* '<S1422>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PIM_B_Trq_Achvd_CallStatus;/* '<S1438>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_PlockFailSts_CallStatus;/* '<S999>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_Plock_MotorPosSts_CallStatus;/* '<S1005>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_Plock_PosSensor_CallStatus;/* '<S1011>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeCRDB_y_Plock_fdbk_sts_CallStatus;/* '<S1017>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_CatHtgStateActive_CallStatus;/* '<S903>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_CatTempMaint_CallStatus;/* '<S907>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_Crank_Maturing_Fault_CallStatus;/* '<S689>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_CylOff_CallStatus;/* '<S695>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_ECMReq_Remedial_Stop_CallStatus;/* '<S699>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_ECM_AirflowRequest_CallStatus;/* '<S855>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_ETRQ_Mode_CallStatus;/* '<S705>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngActStdyStTorq_FD11_CallStatus;/* '<S709>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngActuatorsStat_CallStatus;/* '<S715>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngAirFlwStdyStTorq_CallStatus;/* '<S719>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngCltTmp_FD11_CallStatus;/* '<S861>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngCmbstnCmnd_CallStatus;/* '<S725>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngDFCO_Allw_CallStatus;/* '<S731>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngDFCO_Req_CallStatus;/* '<S735>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngDFCO_St_CallStatus;/* '<S739>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngLoad_OBD_ePT_CallStatus;/* '<S987>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT)
    VeSR1B_y_EngMinSprkNomCAirTqCap_CallStatus;/* '<S743>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngOffRecom_CallStatus;/* '<S749>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngOffTmPT_CallStatus;/* '<S991>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngOutofFuel_CallStatus;/* '<S867>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngRunCrnkAct_CallStatus;/* '<S753>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngSpdStat_FD11_CallStatus;/* '<S871>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngSysFld_CallStatus;/* '<S759>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngTqACCCapability_CallStatus;/* '<S603>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngTqCapbltMaxOfTq_CallStatus;/* '<S608>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngTqCapbltMinRnTq_CallStatus;/* '<S616>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngTqCapbltyMaxTq_CallStatus;/* '<S612>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngTqCapbltyMinTq_CallStatus;/* '<S620>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngTqCpbltRfEngSpd_CallStatus;/* '<S624>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_EngTrqReserveReq_CallStatus;/* '<S763>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_Feedback_HCP_CallStatus;/* '<S769>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_HybActEngTorqRespTyp_CallStatus;/* '<S775>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_MAP_4_BAR_PHEV_CallStatus;/* '<S779>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_MaxEngSpdCap_CallStatus;/* '<S877>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_MaxOffEngTorqCap_CallStatus;/* '<S785>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_MaxPrdtdEngTorqCap_CallStatus;/* '<S789>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT)
    VeSR1B_y_MinAirFlwMinSprkTrqCap_CallStatus;/* '<S795>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_MinEngSpdCap_CallStatus;/* '<S883>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_MinEngTorqCap_CallStatus;/* '<S801>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_MinImmedEngTorqCap_CallStatus;/* '<S807>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_MinPrdtdEngRunTorqCap_CallStatus;/* '<S813>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_PECP_PumpFlowReq_CallStatus;/* '<S889>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_PT_CrnkAct_CallStatus;/* '<S819>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_PnLimitActvFlg_CallStatus;/* '<S825>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_PnLimitMaxEngTrqCap_CallStatus;/* '<S831>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_RedSpkAuthorityAvbl_CallStatus;/* '<S837>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_ServiceHybSys_CallStatus;/* '<S895>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT)
    VeSR1B_y_ShiftLeverPosnReq_FD11_CallStatus;/* '<S30>/Chart' */
static VAR(uint8, CR2B_BLUEN_VAR_INIT) VeSR1B_y_TLC_LRN_Rq_CallStatus;/* '<S843>/Chart' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR2B_BLUEN
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR2B_BLUEN
#include "MemMap.h"

VAR(B_CR2B_BLUEN_ac_T, CR2B_BLUEN_VAR_INIT) CR2B_BLUEN_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR2B_BLUEN
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, CR2B_BLUEN_CODE) CR2B_BLUEN_FastTEF(void) /* Explicit Task: FastTEF */
{
    /* local block i/o variables */
    uint8 rtb_TmpSignalConversionAtVeSR1B;
    uint8 rtb_TmpSignalConversionAtVeCRDB;
    uint8 rtb_TmpSignalConversionAtVeCR_d;
    uint8 rtb_TmpSignalConversionAtVeCR_c;
    uint8 rtb_TmpSignalConversionAtVeCR_i;
    uint8 rtb_TmpSignalConversionAtVeCR_b;
    uint8 rtb_TmpSignalConversionAtVeC_bx;
    uint8 rtb_TmpSignalConversionAtVeCR_h;
    uint8 rtb_TmpSignalConversionAtVeCR_f;
    uint8 rtb_TmpSignalConversionAtVeC_io;
    uint8 rtb_TmpSignalConversionAtVeCR_p;
    uint8 rtb_TmpSignalConversionAtVeC_h0;
    uint8 rtb_TmpSignalConversionAtVeCR_j;
    uint8 rtb_TmpSignalConversionAtVeC_hz;
    uint8 rtb_TmpSignalConversionAtVeC_hi;
    uint8 rtb_TmpSignalConversionAtVeC_hp;
    uint8 rtb_TmpSignalConversionAtVeC_hd;
    uint8 rtb_TmpSignalConversionAtVeCR_n;
    uint8 rtb_TmpSignalConversionAtVeCR_g;
    uint8 rtb_TmpSignalConversionAtVeC_jp;
    uint8 rtb_TmpSignalConversionAtVeC_jf;
    uint8 rtb_TmpSignalConversionAtVeCR_l;
    uint8 rtb_TmpSignalConversionAtVeC_dh;
    uint8 rtb_TmpSignalConversionAtVeCR_k;
    uint8 rtb_TmpSignalConversionAtVeC_jw;
    uint8 rtb_TmpSignalConversionAtVeCR_e;
    uint8 rtb_TmpSignalConversionAtVeC_hx;
    uint8 rtb_TmpSignalConversionAtVeCR_o;
    uint8 rtb_TmpSignalConversionAtVeC_hv;
    uint8 rtb_TmpSignalConversionAtVeC_f0;
    uint8 rtb_TmpSignalConversionAtVeC_ba;
    uint8 rtb_TmpSignalConversionAtVeC_ei;
    uint8 rtb_TmpSignalConversionAtVeC_cw;
    uint8 rtb_TmpSignalConversionAtVeC_dm;
    uint8 rtb_TmpSignalConversionAtVeC_od;
    uint8 rtb_TmpSignalConversionAtVeC_o4;
    uint8 rtb_TmpSignalConversionAtVeC_ji;
    uint8 rtb_TmpSignalConversionAtVeC_ip;
    uint8 rtb_TmpSignalConversionAtVeC_gx;
    uint8 rtb_TmpSignalConversionAtVeC_ol;
    uint8 rtb_TmpSignalConversionAtVeC_lk;
    uint8 rtb_TmpSignalConversionAtVeC_gj;
    uint8 rtb_TmpSignalConversionAtVeC_dy;
    uint8 rtb_TmpSignalConversionAtVeC_k1;
    uint8 rtb_TmpSignalConversionAtVeC_ej;
    uint8 rtb_TmpSignalConversionAtVeC_cv;
    uint8 rtb_TmpSignalConversionAtVeC_i2;
    uint8 rtb_TmpSignalConversionAtVeC_lj;
    uint8 rtb_TmpSignalConversionAtVeC_is;
    uint8 rtb_TmpSignalConversionAtVeC_kr;
    uint8 rtb_TmpSignalConversionAtVeC_hc;
    uint8 rtb_TmpSignalConversionAtVeCR_a;
    uint8 rtb_TmpSignalConversionAtVeCR_m;
    uint8 rtb_TmpSignalConversionAtVeC_fq;
    uint8 rtb_TmpSignalConversionAtVeC_de;
    uint8 rtb_TmpSignalConversionAtVeC_p1;
    uint8 rtb_TmpSignalConversionAtVeC_i3;
    uint8 rtb_TmpSignalConversionAtVeC_cy;
    uint8 rtb_TmpSignalConversionAtVe_dml;
    uint8 rtb_TmpSignalConversionAtVeC_b0;
    uint8 rtb_TmpSignalConversionAtVeC_nz;
    uint8 rtb_TmpSignalConversionAtVeC_lv;
    uint8 rtb_TmpSignalConversionAtVeC_dq;
    uint8 rtb_TmpSignalConversionAtVeC_cc;
    uint8 rtb_TmpSignalConversionAtVe_jf0;
    uint8 rtb_TmpSignalConversionAtVeC_k5;
    uint8 rtb_TmpSignalConversionAtVeC_by;
    uint8 rtb_TmpSignalConversionAtVeC_ew;
    uint8 rtb_TmpSignalConversionAtVeC_d1;
    uint8 rtb_TmpSignalConversionAtVeC_jm;
    uint8 rtb_TmpSignalConversionAtVeC_iy;
    uint8 rtb_TmpSignalConversionAtVeC_ar;
    uint8 rtb_TmpSignalConversionAtVeC_oc;
    uint8 rtb_TmpSignalConversionAtVeC_hu;
    uint8 rtb_TmpSignalConversionAtVeC_kx;
    uint8 rtb_TmpSignalConversionAtVeC_kk;
    uint8 rtb_TmpSignalConversionAtVeC_iq;
    uint8 rtb_TmpSignalConversionAtVeC_ca;
    uint8 rtb_TmpSignalConversionAtVe_gjj;
    uint8 rtb_TmpSignalConversionAtVeC_gk;
    uint8 rtb_TmpSignalConversionAtVeC_je;
    uint8 rtb_TmpSignalConversionAtVeC_bk;
    uint8 rtb_TmpSignalConversionAtVeC_hb;
    uint8 rtb_TmpSignalConversionAtVeC_fv;
    uint8 rtb_TmpSignalConversionAtVeC_gl;
    uint8 rtb_TmpSignalConversionAtVeSR_g;
    uint8 rtb_TmpSignalConversionAtVeSR_o;
    uint8 rtb_TmpSignalConversionAtVeSR_l;
    uint8 rtb_TmpSignalConversionAtVeSR_f;
    uint8 rtb_TmpSignalConversionAtVeSR_c;
    uint8 rtb_TmpSignalConversionAtVeSR_a;
    uint8 rtb_TmpSignalConversionAtVeCANR;
    uint8 rtb_TmpSignalConversionAtVeCA_n;
    uint8 rtb_TmpSignalConversionAtVeCA_d;
    uint8 rtb_TmpSignalConversionAtVeCA_b;
    uint8 rtb_TmpSignalConversionAtVeS_gw;
    uint8 rtb_TmpSignalConversionAtVeS_fj;
    uint8 rtb_TmpSignalConversionAtVeSR_p;
    uint8 rtb_TmpSignalConversionAtVeS_fo;
    uint8 rtb_TmpSignalConversionAtVeSR_e;
    uint8 rtb_TmpSignalConversionAtVeSR_b;
    uint8 rtb_TmpSignalConversionAtVeSR_k;
    uint8 rtb_TmpSignalConversionAtVeS_e2;
    uint8 rtb_TmpSignalConversionAtVeSR_m;
    uint8 rtb_TmpSignalConversionAtVeS_er;
    uint8 rtb_TmpSignalConversionAtVeS_lw;
    uint8 rtb_TmpSignalConversionAtVeSR_h;
    uint8 rtb_TmpSignalConversionAtVeS_kj;
    uint8 rtb_TmpSignalConversionAtVeS_mf;
    uint8 rtb_TmpSignalConversionAtVeSR_i;
    uint8 rtb_TmpSignalConversionAtVeS_fi;
    uint8 rtb_TmpSignalConversionAtVeS_gm;
    uint8 rtb_TmpSignalConversionAtVeS_p5;
    uint8 rtb_TmpSignalConversionAtVeS_f3;
    uint8 rtb_TmpSignalConversionAtVeS_gd;
    uint8 rtb_TmpSignalConversionAtVeS_lm;
    uint8 rtb_TmpSignalConversionAtVeS_iz;
    uint8 rtb_TmpSignalConversionAtVeSR_j;
    uint8 rtb_TmpSignalConversionAtVeS_py;
    uint8 rtb_TmpSignalConversionAtVeS_bu;
    uint8 rtb_TmpSignalConversionAtVeS_ox;
    uint8 rtb_TmpSignalConversionAtVeS_it;
    uint8 rtb_TmpSignalConversionAtVeS_il;
    uint8 rtb_TmpSignalConversionAtVeS_cu;
    uint8 rtb_TmpSignalConversionAtVeS_gs;
    uint8 rtb_TmpSignalConversionAtVeSR_d;
    uint8 rtb_TmpSignalConversionAtVeS_hz;
    uint8 rtb_TmpSignalConversionAtVeS_jk;
    uint8 rtb_TmpSignalConversionAtVeS_i2;
    uint8 rtb_TmpSignalConversionAtVeS_ks;
    uint8 rtb_TmpSignalConversionAtVeS_h1;
    uint8 rtb_TmpSignalConversionAtVeS_aj;
    uint8 rtb_TmpSignalConversionAtVeS_fc;
    uint8 rtb_TmpSignalConversionAtVeS_l0;
    uint8 rtb_TmpSignalConversionAtVe_fjl;
    uint8 rtb_TmpSignalConversionAtVeC_gh;
    uint8 rtb_TmpSignalConversionAtVeC_e1;
    uint8 rtb_TmpSignalConversionAtVeC_it;
    uint8 rtb_TmpSignalConversionAtVeC_j5;
    uint8 rtb_TmpSignalConversionAtVeC_fz;
    uint8 rtb_TmpSignalConversionAtVe_ol2;
    uint8 rtb_TmpSignalConversionAtVeC_o1;
    uint8 rtb_TmpSignalConversionAtVe_ejc;
    uint8 rtb_TmpSignalConversionAtVeC_b1;
    uint8 rtb_TmpSignalConversionAtVeC_nl;
    uint8 rtb_TmpSignalConversionAtVeS_mn;
    uint8 rtb_TmpSignalConversionAtVeS_in;
    uint8 rtb_TmpSignalConversionAtVeC_ex;
    uint8 rtb_TmpSignalConversionAtVeC_iw;
    uint8 rtb_TmpSignalConversionAtVeC_po;
    uint8 rtb_TmpSignalConversionAtVeC_pc;
    uint8 rtb_TmpSignalConversionAtVeC_lz;
    uint8 rtb_TmpSignalConversionAtVeC_mu;
    uint8 rtb_TmpSignalConversionAtVeC_co;
    uint8 rtb_TmpSignalConversionAtVeC_dk;
    uint8 rtb_TmpSignalConversionAtVeC_op;
    uint8 rtb_TmpSignalConversionAtVe_hv4;
    uint8 rtb_TmpSignalConversionAtVeC_lm;
    uint8 rtb_TmpSignalConversionAtVeC_as;
    uint8 rtb_TmpSignalConversionAtVeC_os;
    uint8 rtb_TmpSignalConversionAtVeC_ap;
    uint8 rtb_TmpSignalConversionAtVeC_pm;
    uint8 rtb_TmpSignalConversionAtVeC_cg;
    uint8 rtb_TmpSignalConversionAtVeC_fi;
    uint8 rtb_TmpSignalConversionAtVeC_eb;
    uint8 rtb_TmpSignalConversionAtVeC_a5;
    uint8 rtb_TmpSignalConversionAtVeC_ab;
    uint8 rtb_TmpSignalConversionAtVeC_be;
    uint8 rtb_TmpSignalConversionAtVeC_lp;
    uint8 rtb_TmpSignalConversionAtVeC_b5;
    uint8 rtb_TmpSignalConversionAtVeC_nu;
    uint8 rtb_TmpSignalConversionAtVeC_ml;
    uint8 rtb_TmpSignalConversionAtVeC_lu;
    uint8 rtb_TmpSignalConversionAtVeC_c1;
    uint8 rtb_TmpSignalConversionAtVe_ars;
    uint8 rtb_TmpSignalConversionAtVeC_eg;
    uint8 rtb_TmpSignalConversionAtVe_i2v;
    uint8 rtb_TmpSignalConversionAtVeC_jg;
    uint8 rtb_TmpSignalConversionAtVe_ip5;
    uint8 rtb_TmpSignalConversionAtVeC_jl;
    uint8 rtb_TmpSignalConversionAtVeC_df;
    uint8 rtb_TmpSignalConversionAtVeC_em;
    uint8 rtb_TmpSignalConversionAtVeC_dx;
    uint8 rtb_TmpSignalConversionAtVeC_dn;
    uint8 rtb_TmpSignalConversionAtVeC_ak;
    uint8 rtb_TmpSignalConversionAtVeC_bo;
    uint8 rtb_TmpSignalConversionAtVeC_jk;
    uint8 rtb_TmpSignalConversionAtVeC_bd;
    uint8 rtb_TmpSignalConversionAtVeC_dr;
    uint8 rtb_TmpSignalConversionAtVeC_bn;
    uint8 rtb_TmpSignalConversionAtVeC_d4;
    uint8 rtb_TmpSignalConversionAtVeC_la;
    uint8 rtb_TmpSignalConversionAtVeC_md;
    uint8 rtb_TmpSignalConversionAtVeC_nj;
    uint8 rtb_TmpSignalConversionAtVeC_pi;
    uint8 rtb_TmpSignalConversionAtVe_o12;
    uint8 rtb_TmpSignalConversionAtVeC_am;
    uint8 rtb_TmpSignalConversionAtVeC_d3;
    uint8 rtb_TmpSignalConversionAtVeC_bw;
    uint8 rtb_TmpSignalConversionAtVe_kkl;
    uint8 rtb_TmpSignalConversionAtVeC_kv;
    uint8 rtb_TmpSignalConversionAtVe_b1m;
    uint8 rtb_TmpSignalConversionAtVe_dmj;
    uint8 rtb_TmpSignalConversionAtVeC_le;
    uint8 rtb_TmpSignalConversionAtVeC_b3;
    uint8 rtb_TmpSignalConversionAtVeC_bl;
    TePWMD_e_CanLocStatus rtb_Switch;
    uint8 tmpRead;
    uint8 tmpRead_0;
    uint8 tmpRead_1;
    uint8 tmpRead_10;
    uint8 tmpRead_11;
    uint8 tmpRead_12;
    uint8 tmpRead_13;
    uint8 tmpRead_14;
    uint8 tmpRead_15;
    uint8 tmpRead_16;
    uint8 tmpRead_17;
    uint8 tmpRead_18;
    uint8 tmpRead_19;
    uint8 tmpRead_1a;
    uint8 tmpRead_1b;
    uint8 tmpRead_1c;
    uint8 tmpRead_1d;
    uint8 tmpRead_1e;
    uint8 tmpRead_1f;
    uint8 tmpRead_1g;
    uint8 tmpRead_1h;
    uint8 tmpRead_1i;
    uint8 tmpRead_1j;
    uint8 tmpRead_1k;
    uint8 tmpRead_1l;
    uint8 tmpRead_1m;
    uint8 tmpRead_1n;
    uint8 tmpRead_1o;
    uint8 tmpRead_1p;
    uint8 tmpRead_1q;
    uint8 tmpRead_1r;
    uint8 tmpRead_1s;
    uint8 tmpRead_1t;
    uint8 tmpRead_1u;
    uint8 tmpRead_1v;
    uint8 tmpRead_1w;
    uint8 tmpRead_1x;
    uint8 tmpRead_1y;
    uint8 tmpRead_1z;
    uint8 tmpRead_2;
    uint8 tmpRead_20;
    uint8 tmpRead_21;
    uint8 tmpRead_22;
    uint8 tmpRead_23;
    uint8 tmpRead_24;
    uint8 tmpRead_25;
    uint8 tmpRead_26;
    uint8 tmpRead_27;
    uint8 tmpRead_28;
    uint8 tmpRead_29;
    uint8 tmpRead_2a;
    uint8 tmpRead_2b;
    uint8 tmpRead_2c;
    uint8 tmpRead_2d;
    uint8 tmpRead_2e;
    uint8 tmpRead_2f;
    uint8 tmpRead_2g;
    uint8 tmpRead_2h;
    uint8 tmpRead_2i;
    uint8 tmpRead_2j;
    uint8 tmpRead_2k;
    uint8 tmpRead_2l;
    uint8 tmpRead_2m;
    uint8 tmpRead_2n;
    uint8 tmpRead_2o;
    uint8 tmpRead_2p;
    uint8 tmpRead_2q;
    uint8 tmpRead_2r;
    uint8 tmpRead_2s;
    uint8 tmpRead_2t;
    uint8 tmpRead_2u;
    uint8 tmpRead_2v;
    uint8 tmpRead_2w;
    uint8 tmpRead_2x;
    uint8 tmpRead_2y;
    uint8 tmpRead_2z;
    uint8 tmpRead_3;
    uint8 tmpRead_30;
    uint8 tmpRead_31;
    uint8 tmpRead_32;
    uint8 tmpRead_33;
    uint8 tmpRead_34;
    uint8 tmpRead_35;
    uint8 tmpRead_36;
    uint8 tmpRead_37;
    uint8 tmpRead_38;
    uint8 tmpRead_39;
    uint8 tmpRead_3a;
    uint8 tmpRead_3b;
    uint8 tmpRead_3c;
    uint8 tmpRead_3d;
    uint8 tmpRead_3e;
    uint8 tmpRead_3f;
    uint8 tmpRead_3g;
    uint8 tmpRead_3h;
    uint8 tmpRead_3i;
    uint8 tmpRead_3j;
    uint8 tmpRead_3k;
    uint8 tmpRead_3l;
    uint8 tmpRead_3m;
    uint8 tmpRead_3n;
    uint8 tmpRead_3o;
    uint8 tmpRead_3p;
    uint8 tmpRead_3q;
    uint8 tmpRead_3r;
    uint8 tmpRead_3s;
    uint8 tmpRead_3t;
    uint8 tmpRead_3u;
    uint8 tmpRead_3v;
    uint8 tmpRead_3w;
    uint8 tmpRead_3x;
    uint8 tmpRead_3y;
    uint8 tmpRead_3z;
    uint8 tmpRead_4;
    uint8 tmpRead_40;
    uint8 tmpRead_41;
    uint8 tmpRead_42;
    uint8 tmpRead_43;
    uint8 tmpRead_44;
    uint8 tmpRead_45;
    uint8 tmpRead_46;
    uint8 tmpRead_47;
    uint8 tmpRead_48;
    uint8 tmpRead_49;
    uint8 tmpRead_4a;
    uint8 tmpRead_4b;
    uint8 tmpRead_4c;
    uint8 tmpRead_4d;
    uint8 tmpRead_4e;
    uint8 tmpRead_4f;
    uint8 tmpRead_4g;
    uint8 tmpRead_4h;
    uint8 tmpRead_4i;
    uint8 tmpRead_4j;
    uint8 tmpRead_4k;
    uint8 tmpRead_4l;
    uint8 tmpRead_4m;
    uint8 tmpRead_4n;
    uint8 tmpRead_4o;
    uint8 tmpRead_4p;
    uint8 tmpRead_4q;
    uint8 tmpRead_4r;
    uint8 tmpRead_4s;
    uint8 tmpRead_4t;
    uint8 tmpRead_4u;
    uint8 tmpRead_4v;
    uint8 tmpRead_4w;
    uint8 tmpRead_4x;
    uint8 tmpRead_4y;
    uint8 tmpRead_4z;
    uint8 tmpRead_5;
    uint8 tmpRead_50;
    uint8 tmpRead_51;
    uint8 tmpRead_52;
    uint8 tmpRead_53;
    uint8 tmpRead_54;
    uint8 tmpRead_55;
    uint8 tmpRead_56;
    uint8 tmpRead_57;
    uint8 tmpRead_58;
    uint8 tmpRead_59;
    uint8 tmpRead_5a;
    uint8 tmpRead_5b;
    uint8 tmpRead_5c;
    uint8 tmpRead_5d;
    uint8 tmpRead_5e;
    uint8 tmpRead_5f;
    uint8 tmpRead_5u;
    uint8 tmpRead_5v;
    uint8 tmpRead_5w;
    uint8 tmpRead_5x;
    uint8 tmpRead_5y;
    uint8 tmpRead_5z;
    uint8 tmpRead_6;
    uint8 tmpRead_7;
    uint8 tmpRead_8;
    uint8 tmpRead_9;
    uint8 tmpRead_a;
    uint8 tmpRead_b;
    uint8 tmpRead_c;
    uint8 tmpRead_d;
    uint8 tmpRead_e;
    uint8 tmpRead_f;
    uint8 tmpRead_g;
    uint8 tmpRead_h;
    uint8 tmpRead_i;
    uint8 tmpRead_j;
    uint8 tmpRead_k;
    uint8 tmpRead_l;
    uint8 tmpRead_m;
    uint8 tmpRead_n;
    uint8 tmpRead_o;
    uint8 tmpRead_p;
    uint8 tmpRead_q;
    uint8 tmpRead_r;
    uint8 tmpRead_s;
    uint8 tmpRead_t;
    uint8 tmpRead_u;
    uint8 tmpRead_v;
    uint8 tmpRead_w;
    uint8 tmpRead_x;
    uint8 tmpRead_y;
    uint8 tmpRead_z;
    boolean FA_out_bv;
    boolean FA_out_dv;
    boolean FA_out_ec3;
    boolean FA_out_go;
    boolean FA_out_h3;
    boolean FA_out_ih;
    boolean FA_out_ja;
    boolean FA_out_n;
    boolean FA_out_nj;
    boolean FA_out_o;
    boolean FA_out_om;
    boolean FA_out_p5;
    boolean FA_out_p5t;
    boolean guard1 = false;
    boolean rtb_RelationalOperator1;
    boolean tmpRead_5g;
    boolean tmpRead_5h;
    boolean tmpRead_5i;
    boolean tmpRead_5j;
    boolean tmpRead_5k;
    boolean tmpRead_5l;
    boolean tmpRead_5m;
    boolean tmpRead_5n;
    boolean tmpRead_5o;
    boolean tmpRead_5p;
    boolean tmpRead_5q;
    boolean tmpRead_5r;
    boolean tmpRead_5s;
    boolean tmpRead_5t;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* SignalConversion generated from: '<S2>/VeSR1B_e_ShiftLeverPosnReq_FD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ShiftLeverPosnReq_FD11_ErrSts'
     */
    rtb_TmpSignalConversionAtVeSR1B =
        Rte_Read_VeSR1B_y_ShiftLeverPosnReq_FD11_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_S);

    /* Switch: '<S28>/Switch' incorporates:
     *  Constant: '<S17>/Calib'
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    if (KeCR2B_b_CanLocStatusBypEnbl)
    {
        /* Switch: '<S28>/Switch' incorporates:
         *  Constant: '<S18>/Calib'
         */
        rtb_Switch = KeCR2B_e_CanLocStatus;
    }
    else
    {
        (void)Rte_Read_VeCANR_e_CanLocEnblStatus_VeCANR_e_CanLocEnblStatus
            (&tmpRead);

        /* Switch: '<S28>/Switch' incorporates:
         *  DataTypeConversion: '<S2>/Data Type Conversion'
         *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
         */
        rtb_Switch = (TePWMD_e_CanLocStatus)tmpRead;
    }

    /* End of Switch: '<S28>/Switch' */

    /* RelationalOperator: '<S2>/Relational Operator1' incorporates:
     *  Constant: '<S15>/Constant'
     */
    rtb_RelationalOperator1 = (((uint32)rtb_Switch) != CePWMD_e_LOC_Disable);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ShiftLeverPosnReq_FD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S33>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ShiftLeverPosnReq_FD11_SigSts_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S30>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_0) & 3U) != 0U)
    {
        /* Transition: '<S33>:100' */
        /* Transition: '<S33>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S33>:104' */
        /*  MM */
        if ((((uint32)tmpRead_0) & 4U) != 0U)
        {
            /* Transition: '<S33>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S33>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S33>:110' */
                /* Call Tmot */
                VeSR1B_y_ShiftLeverPosnReq_FD11_CallStatus = 3U;

                /* Event: '<S33>:40' */
                /* Transition: '<S33>:115' */
                /* Transition: '<S33>:114' */
            }
        }
        else
        {
            /* Transition: '<S33>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR1B) == 133)
            {
                /* Transition: '<S33>:95' */
                /* Transition: '<S33>:116' */
                /* Call Nothing */
                VeSR1B_y_ShiftLeverPosnReq_FD11_CallStatus = 4U;

                /* Transition: '<S33>:114' */
            }
            else
            {
                /* Transition: '<S33>:120' */
                if ((((uint32)tmpRead_0) & 8U) != 0U)
                {
                    /* Transition: '<S33>:122' */
                    /* Transition: '<S33>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S33>:126' */
                }
                else
                {
                    /* Transition: '<S33>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S33>:117' */
                /* Call Poke */
                VeSR1B_y_ShiftLeverPosnReq_FD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S29>/Poke' */
                /* FunctionCaller: '<S35>/Function Caller' */
                /* Event: '<S33>:38' */
                Rte_Call_PokePLTR_e_Scndry_TransShiftPstn_PokePLTR_e_Scndry_TransShiftPstn
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_S, FA_out_ih);

                /* End of Outputs for SubSystem: '<S29>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S33>:111' */
        /* Call Fsft */
        VeSR1B_y_ShiftLeverPosnReq_FD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S29>/Fsft' */
        /* FunctionCaller: '<S34>/Function Caller' */
        /* Event: '<S33>:39' */
        Rte_Call_FsftPLTR_b_Scndry_TransShiftPstn_FsftPLTR_b_Scndry_TransShiftPstn
            ();

        /* End of Outputs for SubSystem: '<S29>/Fsft' */
        /* Transition: '<S33>:113' */
        /* Transition: '<S33>:115' */
        /* Transition: '<S33>:114' */
    }

    /* End of Chart: '<S30>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_CtrlSts_Fbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_CtrlSts_Fbk_ErrSts'
     */
    /* Transition: '<S33>:107' */
    rtb_TmpSignalConversionAtVeCRDB = Rte_Read_VeCRDB_y_APM_CtrlSts_Fbk_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_CtrlSts_Fbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S60>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_CtrlSts_Fbk_SigSts_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S58>/Chart' */
    if ((((uint32)tmpRead_1) & 3U) != 0U)
    {
        /* Transition: '<S60>:100' */
        /* Transition: '<S60>:103' */
        /* Transition: '<S60>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_CtrlSts_Fbk_CallStatus = 2U;

        /* Event: '<S60>:39' */
        /* Transition: '<S60>:113' */
        /* Transition: '<S60>:115' */
        /* Transition: '<S60>:114' */
    }
    else
    {
        /* Transition: '<S60>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1) & 4U) != 0U)
        {
            /* Transition: '<S60>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S60>:88' */
                /* Transition: '<S60>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_CtrlSts_Fbk_CallStatus = 2U;

                /* Event: '<S60>:39' */
                /* Transition: '<S60>:113' */
                /* Transition: '<S60>:115' */
                /* Transition: '<S60>:114' */
            }
            else
            {
                /* Transition: '<S60>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_CtrlSts_Fbk_CallStatus = 3U;

                /* Event: '<S60>:40' */
                /* Transition: '<S60>:115' */
                /* Transition: '<S60>:114' */
            }
        }
        else
        {
            /* Transition: '<S60>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCRDB) == 133)
            {
                /* Transition: '<S60>:95' */
                /* Transition: '<S60>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_CtrlSts_Fbk_CallStatus = 4U;

                /* Transition: '<S60>:114' */
            }
            else
            {
                /* Transition: '<S60>:120' */
                /* Transition: '<S60>:117' */
                /* Call Poke */
                VeCRDB_y_APM_CtrlSts_Fbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S36>/Poke' */
                /* FunctionCaller: '<S61>/Function Caller' */
                /* Event: '<S60>:38' */
                Rte_Call_PokeIDCR_e_stModeRqAPM_PokeIDCR_e_stModeRqAPM
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_A);

                /* End of Outputs for SubSystem: '<S36>/Poke' */
            }
        }
    }

    /* End of Chart: '<S58>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_CurrLimitMode_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_CurrLimitMode_ErrSts'
     */
    /* Transition: '<S60>:107' */
    rtb_TmpSignalConversionAtVeCR_d = Rte_Read_VeCRDB_b_APM_CurrLimitMode_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_CurrLimitMode_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S64>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_CurrLimitMode_SigSts_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S62>/Chart' */
    if ((((uint32)tmpRead_2) & 3U) != 0U)
    {
        /* Transition: '<S64>:100' */
        /* Transition: '<S64>:103' */
        /* Transition: '<S64>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_CurrLimitMode_CallStatus = 2U;

        /* Event: '<S64>:39' */
        /* Transition: '<S64>:113' */
        /* Transition: '<S64>:115' */
        /* Transition: '<S64>:114' */
    }
    else
    {
        /* Transition: '<S64>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2) & 4U) != 0U)
        {
            /* Transition: '<S64>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S64>:88' */
                /* Transition: '<S64>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_CurrLimitMode_CallStatus = 2U;

                /* Event: '<S64>:39' */
                /* Transition: '<S64>:113' */
                /* Transition: '<S64>:115' */
                /* Transition: '<S64>:114' */
            }
            else
            {
                /* Transition: '<S64>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_CurrLimitMode_CallStatus = 3U;

                /* Event: '<S64>:40' */
                /* Transition: '<S64>:115' */
                /* Transition: '<S64>:114' */
            }
        }
        else
        {
            /* Transition: '<S64>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_d) == 133)
            {
                /* Transition: '<S64>:95' */
                /* Transition: '<S64>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_CurrLimitMode_CallStatus = 4U;

                /* Transition: '<S64>:114' */
            }
            else
            {
                /* Transition: '<S64>:120' */
                /* Transition: '<S64>:117' */
                /* Call Poke */
                VeCRDB_y_APM_CurrLimitMode_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S37>/Poke' */
                /* FunctionCaller: '<S65>/Function Caller' */
                /* Event: '<S64>:38' */
                Rte_Call_PokeIDCR_b_HvTooHighIStatus_PokeIDCR_b_HvTooHighIStatus
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_A);

                /* End of Outputs for SubSystem: '<S37>/Poke' */
            }
        }
    }

    /* End of Chart: '<S62>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_DeratingMdSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_DeratingMdSts_ErrSts'
     */
    /* Transition: '<S64>:107' */
    rtb_TmpSignalConversionAtVeCR_c = Rte_Read_VeCRDB_y_APM_DeratingMdSts_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_DeratingMdSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S68>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_DeratingMdSts_SigSts_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S66>/Chart' */
    if ((((uint32)tmpRead_3) & 3U) != 0U)
    {
        /* Transition: '<S68>:100' */
        /* Transition: '<S68>:103' */
        /* Transition: '<S68>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_DeratingMdSts_CallStatus = 2U;

        /* Event: '<S68>:39' */
        /* Transition: '<S68>:113' */
        /* Transition: '<S68>:115' */
        /* Transition: '<S68>:114' */
    }
    else
    {
        /* Transition: '<S68>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3) & 4U) != 0U)
        {
            /* Transition: '<S68>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S68>:88' */
                /* Transition: '<S68>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_DeratingMdSts_CallStatus = 2U;

                /* Event: '<S68>:39' */
                /* Transition: '<S68>:113' */
                /* Transition: '<S68>:115' */
                /* Transition: '<S68>:114' */
            }
            else
            {
                /* Transition: '<S68>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_DeratingMdSts_CallStatus = 3U;

                /* Event: '<S68>:40' */
                /* Transition: '<S68>:115' */
                /* Transition: '<S68>:114' */
            }
        }
        else
        {
            /* Transition: '<S68>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_c) == 133)
            {
                /* Transition: '<S68>:95' */
                /* Transition: '<S68>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_DeratingMdSts_CallStatus = 4U;

                /* Transition: '<S68>:114' */
            }
            else
            {
                /* Transition: '<S68>:120' */
                /* Transition: '<S68>:117' */
                /* Call Poke */
                VeCRDB_y_APM_DeratingMdSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S38>/Poke' */
                /* FunctionCaller: '<S69>/Function Caller' */
                /* Event: '<S68>:38' */
                Rte_Call_PokeIDCR_e_APM_DeratingModeStatus_PokeIDCR_e_APM_DeratingModeStatus
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_l);

                /* End of Outputs for SubSystem: '<S38>/Poke' */
            }
        }
    }

    /* End of Chart: '<S66>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_DeratingPower_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_DeratingPower_ErrSts'
     */
    /* Transition: '<S68>:107' */
    rtb_TmpSignalConversionAtVeCR_i = Rte_Read_VeCRDB_W_APM_DeratingPower_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_W_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_DeratingPower_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S72>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_DeratingPower_SigSts_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S70>/Chart' */
    if ((((uint32)tmpRead_4) & 3U) != 0U)
    {
        /* Transition: '<S72>:100' */
        /* Transition: '<S72>:103' */
        /* Transition: '<S72>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_DeratingPower_CallStatus = 2U;

        /* Event: '<S72>:39' */
        /* Transition: '<S72>:113' */
        /* Transition: '<S72>:115' */
        /* Transition: '<S72>:114' */
    }
    else
    {
        /* Transition: '<S72>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4) & 4U) != 0U)
        {
            /* Transition: '<S72>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S72>:88' */
                /* Transition: '<S72>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_DeratingPower_CallStatus = 2U;

                /* Event: '<S72>:39' */
                /* Transition: '<S72>:113' */
                /* Transition: '<S72>:115' */
                /* Transition: '<S72>:114' */
            }
            else
            {
                /* Transition: '<S72>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_DeratingPower_CallStatus = 3U;

                /* Event: '<S72>:40' */
                /* Transition: '<S72>:115' */
                /* Transition: '<S72>:114' */
            }
        }
        else
        {
            /* Transition: '<S72>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_i) == 133)
            {
                /* Transition: '<S72>:95' */
                /* Transition: '<S72>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_DeratingPower_CallStatus = 4U;

                /* Transition: '<S72>:114' */
            }
            else
            {
                /* Transition: '<S72>:120' */
                /* Transition: '<S72>:117' */
                /* Call Poke */
                VeCRDB_y_APM_DeratingPower_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S39>/Poke' */
                /* FunctionCaller: '<S73>/Function Caller' */
                /* Event: '<S72>:38' */
                Rte_Call_PokeIDCR_P_APM_DeratingPower_PokeIDCR_P_APM_DeratingPower
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_W_A);

                /* End of Outputs for SubSystem: '<S39>/Poke' */
            }
        }
    }

    /* End of Chart: '<S70>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_DeratingReasn_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_DeratingReasn_ErrSts'
     */
    /* Transition: '<S72>:107' */
    rtb_TmpSignalConversionAtVeCR_b = Rte_Read_VeCRDB_y_APM_DeratingReasn_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__lt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_DeratingReasn_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S76>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_DeratingReasn_SigSts_Value(&tmpRead_5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S74>/Chart' */
    if ((((uint32)tmpRead_5) & 3U) != 0U)
    {
        /* Transition: '<S76>:100' */
        /* Transition: '<S76>:103' */
        /* Transition: '<S76>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_DeratingReasn_CallStatus = 2U;

        /* Event: '<S76>:39' */
        /* Transition: '<S76>:113' */
        /* Transition: '<S76>:115' */
        /* Transition: '<S76>:114' */
    }
    else
    {
        /* Transition: '<S76>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5) & 4U) != 0U)
        {
            /* Transition: '<S76>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S76>:88' */
                /* Transition: '<S76>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_DeratingReasn_CallStatus = 2U;

                /* Event: '<S76>:39' */
                /* Transition: '<S76>:113' */
                /* Transition: '<S76>:115' */
                /* Transition: '<S76>:114' */
            }
            else
            {
                /* Transition: '<S76>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_DeratingReasn_CallStatus = 3U;

                /* Event: '<S76>:40' */
                /* Transition: '<S76>:115' */
                /* Transition: '<S76>:114' */
            }
        }
        else
        {
            /* Transition: '<S76>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_b) == 133)
            {
                /* Transition: '<S76>:95' */
                /* Transition: '<S76>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_DeratingReasn_CallStatus = 4U;

                /* Transition: '<S76>:114' */
            }
            else
            {
                /* Transition: '<S76>:120' */
                /* Transition: '<S76>:117' */
                /* Call Poke */
                VeCRDB_y_APM_DeratingReasn_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S40>/Poke' */
                /* FunctionCaller: '<S77>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S77>/Data Type Conversion'
                 */
                /* Event: '<S76>:38' */
                Rte_Call_PokeIDCR_e_APM_DeratingReason_PokeIDCR_e_APM_DeratingReason
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__lt);

                /* End of Outputs for SubSystem: '<S40>/Poke' */
            }
        }
    }

    /* End of Chart: '<S74>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_EstPwrLoss_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_EstPwrLoss_ErrSts'
     */
    /* Transition: '<S76>:107' */
    rtb_TmpSignalConversionAtVeC_bx = Rte_Read_VeCRDB_W_APM_EstPwrLoss_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_W_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_EstPwrLoss_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S81>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_EstPwrLoss_SigSts_Value(&tmpRead_6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S78>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_6) & 3U) != 0U)
    {
        /* Transition: '<S81>:100' */
        /* Transition: '<S81>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S81>:104' */
        /*  MM */
        if ((((uint32)tmpRead_6) & 4U) != 0U)
        {
            /* Transition: '<S81>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S81>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S81>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_EstPwrLoss_CallStatus = 3U;

                /* Event: '<S81>:40' */
                /* Transition: '<S81>:115' */
                /* Transition: '<S81>:114' */
            }
        }
        else
        {
            /* Transition: '<S81>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bx) == 133)
            {
                /* Transition: '<S81>:95' */
                /* Transition: '<S81>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_EstPwrLoss_CallStatus = 4U;

                /* Transition: '<S81>:114' */
            }
            else
            {
                /* Transition: '<S81>:120' */
                if ((((uint32)tmpRead_6) & 8U) != 0U)
                {
                    /* Transition: '<S81>:122' */
                    /* Transition: '<S81>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S81>:126' */
                }
                else
                {
                    /* Transition: '<S81>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S81>:117' */
                /* Call Poke */
                VeCRDB_y_APM_EstPwrLoss_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S41>/Poke' */
                /* FunctionCaller: '<S83>/Function Caller' */
                /* Event: '<S81>:38' */
                Rte_Call_PokeIDCR_P_APM_PwrLoss_PokeIDCR_P_APM_PwrLoss
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_W_h, FA_out_ih);

                /* End of Outputs for SubSystem: '<S41>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S81>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_EstPwrLoss_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S41>/Fsft' */
        /* FunctionCaller: '<S82>/Function Caller' */
        /* Event: '<S81>:39' */
        Rte_Call_FsftIDCR_P_APM_PwrLoss_FsftIDCR_P_APM_PwrLoss();

        /* End of Outputs for SubSystem: '<S41>/Fsft' */
        /* Transition: '<S81>:113' */
        /* Transition: '<S81>:115' */
        /* Transition: '<S81>:114' */
    }

    /* End of Chart: '<S78>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_FailureReason_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_FailureReason_ErrSts'
     */
    /* Transition: '<S81>:107' */
    rtb_TmpSignalConversionAtVeCR_h = Rte_Read_VeCRDB_y_APM_FailureReason_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_FailureReason_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S86>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_FailureReason_SigSts_Value(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S84>/Chart' */
    if ((((uint32)tmpRead_7) & 3U) != 0U)
    {
        /* Transition: '<S86>:100' */
        /* Transition: '<S86>:103' */
        /* Transition: '<S86>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_FailureReason_CallStatus = 2U;

        /* Event: '<S86>:39' */
        /* Transition: '<S86>:113' */
        /* Transition: '<S86>:115' */
        /* Transition: '<S86>:114' */
    }
    else
    {
        /* Transition: '<S86>:104' */
        /*  MM */
        if ((((uint32)tmpRead_7) & 4U) != 0U)
        {
            /* Transition: '<S86>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S86>:88' */
                /* Transition: '<S86>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_FailureReason_CallStatus = 2U;

                /* Event: '<S86>:39' */
                /* Transition: '<S86>:113' */
                /* Transition: '<S86>:115' */
                /* Transition: '<S86>:114' */
            }
            else
            {
                /* Transition: '<S86>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_FailureReason_CallStatus = 3U;

                /* Event: '<S86>:40' */
                /* Transition: '<S86>:115' */
                /* Transition: '<S86>:114' */
            }
        }
        else
        {
            /* Transition: '<S86>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_h) == 133)
            {
                /* Transition: '<S86>:95' */
                /* Transition: '<S86>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_FailureReason_CallStatus = 4U;

                /* Transition: '<S86>:114' */
            }
            else
            {
                /* Transition: '<S86>:120' */
                /* Transition: '<S86>:117' */
                /* Call Poke */
                VeCRDB_y_APM_FailureReason_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S42>/Poke' */
                /* FunctionCaller: '<S87>/Function Caller' */
                /* Event: '<S86>:38' */
                Rte_Call_PokeIDCR_e_APM_FailureReason_PokeIDCR_e_APM_FailureReason
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_p);

                /* End of Outputs for SubSystem: '<S42>/Poke' */
            }
        }
    }

    /* End of Chart: '<S84>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_FailureType_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_FailureType_ErrSts'
     */
    /* Transition: '<S86>:107' */
    rtb_TmpSignalConversionAtVeCR_f = Rte_Read_VeCRDB_y_APM_FailureType_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__jg);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_FailureType_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S90>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_FailureType_SigSts_Value(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S88>/Chart' */
    if ((((uint32)tmpRead_8) & 3U) != 0U)
    {
        /* Transition: '<S90>:100' */
        /* Transition: '<S90>:103' */
        /* Transition: '<S90>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_FailureType_CallStatus = 2U;

        /* Event: '<S90>:39' */
        /* Transition: '<S90>:113' */
        /* Transition: '<S90>:115' */
        /* Transition: '<S90>:114' */
    }
    else
    {
        /* Transition: '<S90>:104' */
        /*  MM */
        if ((((uint32)tmpRead_8) & 4U) != 0U)
        {
            /* Transition: '<S90>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S90>:88' */
                /* Transition: '<S90>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_FailureType_CallStatus = 2U;

                /* Event: '<S90>:39' */
                /* Transition: '<S90>:113' */
                /* Transition: '<S90>:115' */
                /* Transition: '<S90>:114' */
            }
            else
            {
                /* Transition: '<S90>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_FailureType_CallStatus = 3U;

                /* Event: '<S90>:40' */
                /* Transition: '<S90>:115' */
                /* Transition: '<S90>:114' */
            }
        }
        else
        {
            /* Transition: '<S90>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_f) == 133)
            {
                /* Transition: '<S90>:95' */
                /* Transition: '<S90>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_FailureType_CallStatus = 4U;

                /* Transition: '<S90>:114' */
            }
            else
            {
                /* Transition: '<S90>:120' */
                if ((((uint32)tmpRead_8) & 8U) != 0U)
                {
                    /* Transition: '<S90>:122' */
                    /* Transition: '<S90>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S90>:126' */
                }
                else
                {
                    /* Transition: '<S90>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S90>:117' */
                /* Call Poke */
                VeCRDB_y_APM_FailureType_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S43>/Poke' */
                /* FunctionCaller: '<S91>/Function Caller' */
                /* Event: '<S90>:38' */
                Rte_Call_PokeIDCR_e_APM_FailureType_PokeIDCR_e_APM_FailureType
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__jg, FA_out_ih);

                /* End of Outputs for SubSystem: '<S43>/Poke' */
            }
        }
    }

    /* End of Chart: '<S88>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_HV_I_Fbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_HV_I_Fbk_ErrSts'
     */
    /* Transition: '<S90>:107' */
    rtb_TmpSignalConversionAtVeC_io = Rte_Read_VeCRDB_I_APM_HV_I_Fbk_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_I_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_HV_I_Fbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S95>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_HV_I_Fbk_SigSts_Value(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S92>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_9) & 3U) != 0U)
    {
        /* Transition: '<S95>:100' */
        /* Transition: '<S95>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S95>:104' */
        /*  MM */
        if ((((uint32)tmpRead_9) & 4U) != 0U)
        {
            /* Transition: '<S95>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S95>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S95>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_HV_y_Fbk_CallStatus = 3U;

                /* Event: '<S95>:40' */
                /* Transition: '<S95>:115' */
                /* Transition: '<S95>:114' */
            }
        }
        else
        {
            /* Transition: '<S95>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_io) == 133)
            {
                /* Transition: '<S95>:95' */
                /* Transition: '<S95>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_HV_y_Fbk_CallStatus = 4U;

                /* Transition: '<S95>:114' */
            }
            else
            {
                /* Transition: '<S95>:120' */
                if ((((uint32)tmpRead_9) & 8U) != 0U)
                {
                    /* Transition: '<S95>:122' */
                    /* Transition: '<S95>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S95>:126' */
                }
                else
                {
                    /* Transition: '<S95>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S95>:117' */
                /* Call Poke */
                VeCRDB_y_APM_HV_y_Fbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S44>/Poke' */
                /* FunctionCaller: '<S97>/Function Caller' */
                /* Event: '<S95>:38' */
                Rte_Call_PokeIDCR_I_APM_HV_Current_PokeIDCR_I_APM_HV_Current
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_I_A, FA_out_ih);

                /* End of Outputs for SubSystem: '<S44>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S95>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_HV_y_Fbk_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S44>/Fsft' */
        /* FunctionCaller: '<S96>/Function Caller' */
        /* Event: '<S95>:39' */
        Rte_Call_FsftIDCR_I_APM_HV_Current_FsftIDCR_I_APM_HV_Current();

        /* End of Outputs for SubSystem: '<S44>/Fsft' */
        /* Transition: '<S95>:113' */
        /* Transition: '<S95>:115' */
        /* Transition: '<S95>:114' */
    }

    /* End of Chart: '<S92>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_HV_V_Fbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_HV_V_Fbk_ErrSts'
     */
    /* Transition: '<S95>:107' */
    rtb_TmpSignalConversionAtVeCR_p = Rte_Read_VeCRDB_U_APM_HV_V_Fbk_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_HV_V_Fbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S101>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_HV_V_Fbk_SigSts_Value(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S98>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_a) & 3U) != 0U)
    {
        /* Transition: '<S101>:100' */
        /* Transition: '<S101>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S101>:104' */
        /*  MM */
        if ((((uint32)tmpRead_a) & 4U) != 0U)
        {
            /* Transition: '<S101>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S101>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S101>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_HV_V_Fbk_CallStatus = 3U;

                /* Event: '<S101>:40' */
                /* Transition: '<S101>:115' */
                /* Transition: '<S101>:114' */
            }
        }
        else
        {
            /* Transition: '<S101>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_p) == 133)
            {
                /* Transition: '<S101>:95' */
                /* Transition: '<S101>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_HV_V_Fbk_CallStatus = 4U;

                /* Transition: '<S101>:114' */
            }
            else
            {
                /* Transition: '<S101>:120' */
                if ((((uint32)tmpRead_a) & 8U) != 0U)
                {
                    /* Transition: '<S101>:122' */
                    /* Transition: '<S101>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S101>:126' */
                }
                else
                {
                    /* Transition: '<S101>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S101>:117' */
                /* Call Poke */
                VeCRDB_y_APM_HV_V_Fbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S45>/Poke' */
                /* FunctionCaller: '<S103>/Function Caller' */
                /* Event: '<S101>:38' */
                Rte_Call_PokeIDCR_U_APM_HV_Voltage_PokeIDCR_U_APM_HV_Voltage
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_A, FA_out_ih);

                /* End of Outputs for SubSystem: '<S45>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S101>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_HV_V_Fbk_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S45>/Fsft' */
        /* FunctionCaller: '<S102>/Function Caller' */
        /* Event: '<S101>:39' */
        Rte_Call_FsftIDCR_U_APM_HV_Voltage_FsftIDCR_U_APM_HV_Voltage();

        /* End of Outputs for SubSystem: '<S45>/Fsft' */
        /* Transition: '<S101>:113' */
        /* Transition: '<S101>:115' */
        /* Transition: '<S101>:114' */
    }

    /* End of Chart: '<S98>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_HvOverVStatus_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_HvOverVStatus_ErrSts'
     */
    /* Transition: '<S101>:107' */
    rtb_TmpSignalConversionAtVeC_h0 = Rte_Read_VeCRDB_b_APM_HvOverVStatus_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_HvOverVStatus_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S106>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_HvOverVStatus_SigSts_Value(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S104>/Chart' */
    if ((((uint32)tmpRead_b) & 3U) != 0U)
    {
        /* Transition: '<S106>:100' */
        /* Transition: '<S106>:103' */
        /* Transition: '<S106>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_HvOverVStatus_CallStatus = 2U;

        /* Event: '<S106>:39' */
        /* Transition: '<S106>:113' */
        /* Transition: '<S106>:115' */
        /* Transition: '<S106>:114' */
    }
    else
    {
        /* Transition: '<S106>:104' */
        /*  MM */
        if ((((uint32)tmpRead_b) & 4U) != 0U)
        {
            /* Transition: '<S106>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S106>:88' */
                /* Transition: '<S106>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_HvOverVStatus_CallStatus = 2U;

                /* Event: '<S106>:39' */
                /* Transition: '<S106>:113' */
                /* Transition: '<S106>:115' */
                /* Transition: '<S106>:114' */
            }
            else
            {
                /* Transition: '<S106>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_HvOverVStatus_CallStatus = 3U;

                /* Event: '<S106>:40' */
                /* Transition: '<S106>:115' */
                /* Transition: '<S106>:114' */
            }
        }
        else
        {
            /* Transition: '<S106>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_h0) == 133)
            {
                /* Transition: '<S106>:95' */
                /* Transition: '<S106>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_HvOverVStatus_CallStatus = 4U;

                /* Transition: '<S106>:114' */
            }
            else
            {
                /* Transition: '<S106>:120' */
                /* Transition: '<S106>:117' */
                /* Call Poke */
                VeCRDB_y_APM_HvOverVStatus_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S46>/Poke' */
                /* FunctionCaller: '<S107>/Function Caller' */
                /* Event: '<S106>:38' */
                Rte_Call_PokeIDCR_b_HvOverVStatus_PokeIDCR_b_HvOverVStatus
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_m);

                /* End of Outputs for SubSystem: '<S46>/Poke' */
            }
        }
    }

    /* End of Chart: '<S104>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_HvVsetPFdbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_HvVsetPFdbk_ErrSts'
     */
    /* Transition: '<S106>:107' */
    rtb_TmpSignalConversionAtVeCR_j = Rte_Read_VeCRDB_U_APM_HvVsetPFdbk_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_HvVsetPFdbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S111>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_HvVsetPFdbk_SigSts_Value(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S108>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_c) & 3U) != 0U)
    {
        /* Transition: '<S111>:100' */
        /* Transition: '<S111>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S111>:104' */
        /*  MM */
        if ((((uint32)tmpRead_c) & 4U) != 0U)
        {
            /* Transition: '<S111>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S111>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S111>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_HvVsetPFdbk_CallStatus = 3U;

                /* Event: '<S111>:40' */
                /* Transition: '<S111>:115' */
                /* Transition: '<S111>:114' */
            }
        }
        else
        {
            /* Transition: '<S111>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_j) == 133)
            {
                /* Transition: '<S111>:95' */
                /* Transition: '<S111>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_HvVsetPFdbk_CallStatus = 4U;

                /* Transition: '<S111>:114' */
            }
            else
            {
                /* Transition: '<S111>:120' */
                if ((((uint32)tmpRead_c) & 8U) != 0U)
                {
                    /* Transition: '<S111>:122' */
                    /* Transition: '<S111>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S111>:126' */
                }
                else
                {
                    /* Transition: '<S111>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S111>:117' */
                /* Call Poke */
                VeCRDB_y_APM_HvVsetPFdbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S47>/Poke' */
                /* FunctionCaller: '<S113>/Function Caller' */
                /* Event: '<S111>:38' */
                Rte_Call_PokeIDCR_U_APM_HvVsetPFdbk_PokeIDCR_U_APM_HvVsetPFdbk
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_l, FA_out_ih);

                /* End of Outputs for SubSystem: '<S47>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S111>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_HvVsetPFdbk_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S47>/Fsft' */
        /* FunctionCaller: '<S112>/Function Caller' */
        /* Event: '<S111>:39' */
        Rte_Call_FsftIDCR_U_APM_HvVsetPFdbk_FsftIDCR_U_APM_HvVsetPFdbk();

        /* End of Outputs for SubSystem: '<S47>/Fsft' */
        /* Transition: '<S111>:113' */
        /* Transition: '<S111>:115' */
        /* Transition: '<S111>:114' */
    }

    /* End of Chart: '<S108>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_IdcHvSetPFdbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_IdcHvSetPFdbk_ErrSts'
     */
    /* Transition: '<S111>:107' */
    rtb_TmpSignalConversionAtVeC_hz = Rte_Read_VeCRDB_I_APM_IdcHvSetPFdbk_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_I_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_IdcHvSetPFdbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S117>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_IdcHvSetPFdbk_SigSts_Value(&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S114>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_d) & 3U) != 0U)
    {
        /* Transition: '<S117>:100' */
        /* Transition: '<S117>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S117>:104' */
        /*  MM */
        if ((((uint32)tmpRead_d) & 4U) != 0U)
        {
            /* Transition: '<S117>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S117>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S117>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_IdcHvSetPFdbk_CallStatus = 3U;

                /* Event: '<S117>:40' */
                /* Transition: '<S117>:115' */
                /* Transition: '<S117>:114' */
            }
        }
        else
        {
            /* Transition: '<S117>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hz) == 133)
            {
                /* Transition: '<S117>:95' */
                /* Transition: '<S117>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_IdcHvSetPFdbk_CallStatus = 4U;

                /* Transition: '<S117>:114' */
            }
            else
            {
                /* Transition: '<S117>:120' */
                if ((((uint32)tmpRead_d) & 8U) != 0U)
                {
                    /* Transition: '<S117>:122' */
                    /* Transition: '<S117>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S117>:126' */
                }
                else
                {
                    /* Transition: '<S117>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S117>:117' */
                /* Call Poke */
                VeCRDB_y_APM_IdcHvSetPFdbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S48>/Poke' */
                /* FunctionCaller: '<S119>/Function Caller' */
                /* Event: '<S117>:38' */
                Rte_Call_PokeIDCR_I_IdcHvSetPFdbk_PokeIDCR_I_IdcHvSetPFdbk
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_I_f, FA_out_ih);

                /* End of Outputs for SubSystem: '<S48>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S117>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_IdcHvSetPFdbk_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S48>/Fsft' */
        /* FunctionCaller: '<S118>/Function Caller' */
        /* Event: '<S117>:39' */
        Rte_Call_FsftIDCR_I_IdcHvSetPFdbk_FsftIDCR_I_IdcHvSetPFdbk();

        /* End of Outputs for SubSystem: '<S48>/Fsft' */
        /* Transition: '<S117>:113' */
        /* Transition: '<S117>:115' */
        /* Transition: '<S117>:114' */
    }

    /* End of Chart: '<S114>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_InputPower_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_InputPower_ErrSts'
     */
    /* Transition: '<S117>:107' */
    rtb_TmpSignalConversionAtVeC_hi = Rte_Read_VeCRDB_W_APM_InputPower_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_W_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_InputPower_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S123>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_InputPower_SigSts_Value(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S120>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_e) & 3U) != 0U)
    {
        /* Transition: '<S123>:100' */
        /* Transition: '<S123>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S123>:104' */
        /*  MM */
        if ((((uint32)tmpRead_e) & 4U) != 0U)
        {
            /* Transition: '<S123>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S123>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S123>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_InputPower_CallStatus = 3U;

                /* Event: '<S123>:40' */
                /* Transition: '<S123>:115' */
                /* Transition: '<S123>:114' */
            }
        }
        else
        {
            /* Transition: '<S123>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hi) == 133)
            {
                /* Transition: '<S123>:95' */
                /* Transition: '<S123>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_InputPower_CallStatus = 4U;

                /* Transition: '<S123>:114' */
            }
            else
            {
                /* Transition: '<S123>:120' */
                if ((((uint32)tmpRead_e) & 8U) != 0U)
                {
                    /* Transition: '<S123>:122' */
                    /* Transition: '<S123>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S123>:126' */
                }
                else
                {
                    /* Transition: '<S123>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S123>:117' */
                /* Call Poke */
                VeCRDB_y_APM_InputPower_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S49>/Poke' */
                /* FunctionCaller: '<S125>/Function Caller' */
                /* Event: '<S123>:38' */
                Rte_Call_PokeIDCR_P_APM_InputPower_PokeIDCR_P_APM_InputPower
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_W_i, FA_out_ih);

                /* End of Outputs for SubSystem: '<S49>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S123>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_InputPower_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S49>/Fsft' */
        /* FunctionCaller: '<S124>/Function Caller' */
        /* Event: '<S123>:39' */
        Rte_Call_FsftIDCR_P_APM_InputPower_FsftIDCR_P_APM_InputPower();

        /* End of Outputs for SubSystem: '<S49>/Fsft' */
        /* Transition: '<S123>:113' */
        /* Transition: '<S123>:115' */
        /* Transition: '<S123>:114' */
    }

    /* End of Chart: '<S120>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_LV_I_Fbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_LV_I_Fbk_ErrSts'
     */
    /* Transition: '<S123>:107' */
    rtb_TmpSignalConversionAtVeC_hp = Rte_Read_VeCRDB_I_APM_LV_I_Fbk_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_I_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_LV_I_Fbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S129>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_LV_I_Fbk_SigSts_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S126>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_f) & 3U) != 0U)
    {
        /* Transition: '<S129>:100' */
        /* Transition: '<S129>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S129>:104' */
        /*  MM */
        if ((((uint32)tmpRead_f) & 4U) != 0U)
        {
            /* Transition: '<S129>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S129>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S129>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_LV_y_Fbk_CallStatus = 3U;

                /* Event: '<S129>:40' */
                /* Transition: '<S129>:115' */
                /* Transition: '<S129>:114' */
            }
        }
        else
        {
            /* Transition: '<S129>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hp) == 133)
            {
                /* Transition: '<S129>:95' */
                /* Transition: '<S129>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_LV_y_Fbk_CallStatus = 4U;

                /* Transition: '<S129>:114' */
            }
            else
            {
                /* Transition: '<S129>:120' */
                if ((((uint32)tmpRead_f) & 8U) != 0U)
                {
                    /* Transition: '<S129>:122' */
                    /* Transition: '<S129>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S129>:126' */
                }
                else
                {
                    /* Transition: '<S129>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S129>:117' */
                /* Call Poke */
                VeCRDB_y_APM_LV_y_Fbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S50>/Poke' */
                /* FunctionCaller: '<S131>/Function Caller' */
                /* Event: '<S129>:38' */
                Rte_Call_PokeIDCR_I_APM_LV_Current_PokeIDCR_I_APM_LV_Current
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_I_c, FA_out_ih);

                /* End of Outputs for SubSystem: '<S50>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S129>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_LV_y_Fbk_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S50>/Fsft' */
        /* FunctionCaller: '<S130>/Function Caller' */
        /* Event: '<S129>:39' */
        Rte_Call_FsftIDCR_I_APM_LV_Current_FsftIDCR_I_APM_LV_Current();

        /* End of Outputs for SubSystem: '<S50>/Fsft' */
        /* Transition: '<S129>:113' */
        /* Transition: '<S129>:115' */
        /* Transition: '<S129>:114' */
    }

    /* End of Chart: '<S126>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_LV_V_Fbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_LV_V_Fbk_ErrSts'
     */
    /* Transition: '<S129>:107' */
    rtb_TmpSignalConversionAtVeC_hd = Rte_Read_VeCRDB_U_APM_LV_V_Fbk_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_LV_V_Fbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S135>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_LV_V_Fbk_SigSts_Value(&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S132>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_g) & 3U) != 0U)
    {
        /* Transition: '<S135>:100' */
        /* Transition: '<S135>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S135>:104' */
        /*  MM */
        if ((((uint32)tmpRead_g) & 4U) != 0U)
        {
            /* Transition: '<S135>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S135>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S135>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_LV_V_Fbk_CallStatus = 3U;

                /* Event: '<S135>:40' */
                /* Transition: '<S135>:115' */
                /* Transition: '<S135>:114' */
            }
        }
        else
        {
            /* Transition: '<S135>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hd) == 133)
            {
                /* Transition: '<S135>:95' */
                /* Transition: '<S135>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_LV_V_Fbk_CallStatus = 4U;

                /* Transition: '<S135>:114' */
            }
            else
            {
                /* Transition: '<S135>:120' */
                if ((((uint32)tmpRead_g) & 8U) != 0U)
                {
                    /* Transition: '<S135>:122' */
                    /* Transition: '<S135>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S135>:126' */
                }
                else
                {
                    /* Transition: '<S135>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S135>:117' */
                /* Call Poke */
                VeCRDB_y_APM_LV_V_Fbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S51>/Poke' */
                /* FunctionCaller: '<S137>/Function Caller' */
                /* Event: '<S135>:38' */
                Rte_Call_PokeIDCR_U_APM_LV_Voltage_PokeIDCR_U_APM_LV_Voltage
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_g, FA_out_ih);

                /* End of Outputs for SubSystem: '<S51>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S135>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_LV_V_Fbk_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S51>/Fsft' */
        /* FunctionCaller: '<S136>/Function Caller' */
        /* Event: '<S135>:39' */
        Rte_Call_FsftIDCR_U_APM_LV_Voltage_FsftIDCR_U_APM_LV_Voltage();

        /* End of Outputs for SubSystem: '<S51>/Fsft' */
        /* Transition: '<S135>:113' */
        /* Transition: '<S135>:115' */
        /* Transition: '<S135>:114' */
    }

    /* End of Chart: '<S132>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_OutputPower_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_OutputPower_ErrSts'
     */
    /* Transition: '<S135>:107' */
    rtb_TmpSignalConversionAtVeCR_n = Rte_Read_VeCRDB_W_APM_OutputPower_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_W_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_OutputPower_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S141>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_OutputPower_SigSts_Value(&tmpRead_h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S138>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_h) & 3U) != 0U)
    {
        /* Transition: '<S141>:100' */
        /* Transition: '<S141>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S141>:104' */
        /*  MM */
        if ((((uint32)tmpRead_h) & 4U) != 0U)
        {
            /* Transition: '<S141>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S141>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S141>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_OutputPower_CallStatus = 3U;

                /* Event: '<S141>:40' */
                /* Transition: '<S141>:115' */
                /* Transition: '<S141>:114' */
            }
        }
        else
        {
            /* Transition: '<S141>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_n) == 133)
            {
                /* Transition: '<S141>:95' */
                /* Transition: '<S141>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_OutputPower_CallStatus = 4U;

                /* Transition: '<S141>:114' */
            }
            else
            {
                /* Transition: '<S141>:120' */
                if ((((uint32)tmpRead_h) & 8U) != 0U)
                {
                    /* Transition: '<S141>:122' */
                    /* Transition: '<S141>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S141>:126' */
                }
                else
                {
                    /* Transition: '<S141>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S141>:117' */
                /* Call Poke */
                VeCRDB_y_APM_OutputPower_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S52>/Poke' */
                /* FunctionCaller: '<S143>/Function Caller' */
                /* Event: '<S141>:38' */
                Rte_Call_PokeIDCR_P_APM_OutputPower_PokeIDCR_P_APM_OutputPower
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_W_c, FA_out_ih);

                /* End of Outputs for SubSystem: '<S52>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S141>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_OutputPower_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S52>/Fsft' */
        /* FunctionCaller: '<S142>/Function Caller' */
        /* Event: '<S141>:39' */
        Rte_Call_FsftIDCR_P_APM_OutputPower_FsftIDCR_P_APM_OutputPower();

        /* End of Outputs for SubSystem: '<S52>/Fsft' */
        /* Transition: '<S141>:113' */
        /* Transition: '<S141>:115' */
        /* Transition: '<S141>:114' */
    }

    /* End of Chart: '<S138>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_PSFB_Temp1_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_PSFB_Temp1_ErrSts'
     */
    /* Transition: '<S141>:107' */
    rtb_TmpSignalConversionAtVeCR_g = Rte_Read_VeCRDB_T_APM_PSFB_Temp1_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_PSFB_Temp1_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S147>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_PSFB_Temp1_SigSts_Value(&tmpRead_i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S144>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_i) & 3U) != 0U)
    {
        /* Transition: '<S147>:100' */
        /* Transition: '<S147>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S147>:104' */
        /*  MM */
        if ((((uint32)tmpRead_i) & 4U) != 0U)
        {
            /* Transition: '<S147>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S147>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S147>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_PSFB_Temp1_CallStatus = 3U;

                /* Event: '<S147>:40' */
                /* Transition: '<S147>:115' */
                /* Transition: '<S147>:114' */
            }
        }
        else
        {
            /* Transition: '<S147>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_g) == 133)
            {
                /* Transition: '<S147>:95' */
                /* Transition: '<S147>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_PSFB_Temp1_CallStatus = 4U;

                /* Transition: '<S147>:114' */
            }
            else
            {
                /* Transition: '<S147>:120' */
                if ((((uint32)tmpRead_i) & 8U) != 0U)
                {
                    /* Transition: '<S147>:122' */
                    /* Transition: '<S147>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S147>:126' */
                }
                else
                {
                    /* Transition: '<S147>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S147>:117' */
                /* Call Poke */
                VeCRDB_y_APM_PSFB_Temp1_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S53>/Poke' */
                /* FunctionCaller: '<S149>/Function Caller' */
                /* Event: '<S147>:38' */
                Rte_Call_PokeIDCR_T_Temp1_PokeIDCR_T_Temp1
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_A, FA_out_ih);

                /* End of Outputs for SubSystem: '<S53>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S147>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_PSFB_Temp1_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S53>/Fsft' */
        /* FunctionCaller: '<S148>/Function Caller' */
        /* Event: '<S147>:39' */
        Rte_Call_FsftIDCR_T_Temp1_FsftIDCR_T_Temp1();

        /* End of Outputs for SubSystem: '<S53>/Fsft' */
        /* Transition: '<S147>:113' */
        /* Transition: '<S147>:115' */
        /* Transition: '<S147>:114' */
    }

    /* End of Chart: '<S144>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_PSFB_Temp2_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_PSFB_Temp2_ErrSts'
     */
    /* Transition: '<S147>:107' */
    rtb_TmpSignalConversionAtVeC_jp = Rte_Read_VeCRDB_T_APM_PSFB_Temp2_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_PSFB_Temp2_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S153>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_PSFB_Temp2_SigSts_Value(&tmpRead_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S150>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_j) & 3U) != 0U)
    {
        /* Transition: '<S153>:100' */
        /* Transition: '<S153>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S153>:104' */
        /*  MM */
        if ((((uint32)tmpRead_j) & 4U) != 0U)
        {
            /* Transition: '<S153>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S153>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S153>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_PSFB_Temp2_CallStatus = 3U;

                /* Event: '<S153>:40' */
                /* Transition: '<S153>:115' */
                /* Transition: '<S153>:114' */
            }
        }
        else
        {
            /* Transition: '<S153>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jp) == 133)
            {
                /* Transition: '<S153>:95' */
                /* Transition: '<S153>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_PSFB_Temp2_CallStatus = 4U;

                /* Transition: '<S153>:114' */
            }
            else
            {
                /* Transition: '<S153>:120' */
                if ((((uint32)tmpRead_j) & 8U) != 0U)
                {
                    /* Transition: '<S153>:122' */
                    /* Transition: '<S153>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S153>:126' */
                }
                else
                {
                    /* Transition: '<S153>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S153>:117' */
                /* Call Poke */
                VeCRDB_y_APM_PSFB_Temp2_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S54>/Poke' */
                /* FunctionCaller: '<S155>/Function Caller' */
                /* Event: '<S153>:38' */
                Rte_Call_PokeIDCR_T_Temp2_PokeIDCR_T_Temp2
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_b, FA_out_ih);

                /* End of Outputs for SubSystem: '<S54>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S153>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_PSFB_Temp2_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S54>/Fsft' */
        /* FunctionCaller: '<S154>/Function Caller' */
        /* Event: '<S153>:39' */
        Rte_Call_FsftIDCR_T_Temp2_FsftIDCR_T_Temp2();

        /* End of Outputs for SubSystem: '<S54>/Fsft' */
        /* Transition: '<S153>:113' */
        /* Transition: '<S153>:115' */
        /* Transition: '<S153>:114' */
    }

    /* End of Chart: '<S150>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_PowerLimMode_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_PowerLimMode_ErrSts'
     */
    /* Transition: '<S153>:107' */
    rtb_TmpSignalConversionAtVeC_jf = Rte_Read_VeCRDB_b_APM_PowerLimMode_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_PowerLimMode_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S158>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_PowerLimMode_SigSts_Value(&tmpRead_k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S156>/Chart' */
    if ((((uint32)tmpRead_k) & 3U) != 0U)
    {
        /* Transition: '<S158>:100' */
        /* Transition: '<S158>:103' */
        /* Transition: '<S158>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_PowerLimMode_CallStatus = 2U;

        /* Event: '<S158>:39' */
        /* Transition: '<S158>:113' */
        /* Transition: '<S158>:115' */
        /* Transition: '<S158>:114' */
    }
    else
    {
        /* Transition: '<S158>:104' */
        /*  MM */
        if ((((uint32)tmpRead_k) & 4U) != 0U)
        {
            /* Transition: '<S158>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S158>:88' */
                /* Transition: '<S158>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_PowerLimMode_CallStatus = 2U;

                /* Event: '<S158>:39' */
                /* Transition: '<S158>:113' */
                /* Transition: '<S158>:115' */
                /* Transition: '<S158>:114' */
            }
            else
            {
                /* Transition: '<S158>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_PowerLimMode_CallStatus = 3U;

                /* Event: '<S158>:40' */
                /* Transition: '<S158>:115' */
                /* Transition: '<S158>:114' */
            }
        }
        else
        {
            /* Transition: '<S158>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jf) == 133)
            {
                /* Transition: '<S158>:95' */
                /* Transition: '<S158>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_PowerLimMode_CallStatus = 4U;

                /* Transition: '<S158>:114' */
            }
            else
            {
                /* Transition: '<S158>:120' */
                /* Transition: '<S158>:117' */
                /* Call Poke */
                VeCRDB_y_APM_PowerLimMode_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S55>/Poke' */
                /* FunctionCaller: '<S159>/Function Caller' */
                /* Event: '<S158>:38' */
                Rte_Call_PokeIDCR_b_HvTooLowVStatus_PokeIDCR_b_HvTooLowVStatus
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_p);

                /* End of Outputs for SubSystem: '<S55>/Poke' */
            }
        }
    }

    /* End of Chart: '<S156>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_TempColdPlate_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_TempColdPlate_ErrSts'
     */
    /* Transition: '<S158>:107' */
    rtb_TmpSignalConversionAtVeCR_l = Rte_Read_VeCRDB_T_APM_TempColdPlate_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__bt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_TempColdPlate_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S163>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_TempColdPlate_SigSts_Value(&tmpRead_l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S160>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_l) & 3U) != 0U)
    {
        /* Transition: '<S163>:100' */
        /* Transition: '<S163>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S163>:104' */
        /*  MM */
        if ((((uint32)tmpRead_l) & 4U) != 0U)
        {
            /* Transition: '<S163>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S163>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S163>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_TempColdPlate_CallStatus = 3U;

                /* Event: '<S163>:40' */
                /* Transition: '<S163>:115' */
                /* Transition: '<S163>:114' */
            }
        }
        else
        {
            /* Transition: '<S163>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_l) == 133)
            {
                /* Transition: '<S163>:95' */
                /* Transition: '<S163>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_TempColdPlate_CallStatus = 4U;

                /* Transition: '<S163>:114' */
            }
            else
            {
                /* Transition: '<S163>:120' */
                if ((((uint32)tmpRead_l) & 8U) != 0U)
                {
                    /* Transition: '<S163>:122' */
                    /* Transition: '<S163>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S163>:126' */
                }
                else
                {
                    /* Transition: '<S163>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S163>:117' */
                /* Call Poke */
                VeCRDB_y_APM_TempColdPlate_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S56>/Poke' */
                /* FunctionCaller: '<S165>/Function Caller' */
                /* Event: '<S163>:38' */
                Rte_Call_PokeIDCR_T_APM_TempColdPlate_PokeIDCR_T_APM_TempColdPlate
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__bt, FA_out_ih);

                /* End of Outputs for SubSystem: '<S56>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S163>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_TempColdPlate_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S56>/Fsft' */
        /* FunctionCaller: '<S164>/Function Caller' */
        /* Event: '<S163>:39' */
        Rte_Call_FsftIDCR_T_APM_TempColdPlate_FsftIDCR_T_APM_TempColdPlate();

        /* End of Outputs for SubSystem: '<S56>/Fsft' */
        /* Transition: '<S163>:113' */
        /* Transition: '<S163>:115' */
        /* Transition: '<S163>:114' */
    }

    /* End of Chart: '<S160>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_UtilPctOfDCDC_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_UtilPctOfDCDC_ErrSts'
     */
    /* Transition: '<S163>:107' */
    rtb_TmpSignalConversionAtVeC_dh =
        Rte_Read_VeCRDB_Pct_APM_UtilPctOfDCDC_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_Pct);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_APM_UtilPctOfDCDC_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S169>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_UtilPctOfDCDC_SigSts_Value(&tmpRead_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S166>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_m) & 3U) != 0U)
    {
        /* Transition: '<S169>:100' */
        /* Transition: '<S169>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S169>:104' */
        /*  MM */
        if ((((uint32)tmpRead_m) & 4U) != 0U)
        {
            /* Transition: '<S169>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S169>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S169>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_UtilPctOfDCDC_CallStatus = 3U;

                /* Event: '<S169>:40' */
                /* Transition: '<S169>:115' */
                /* Transition: '<S169>:114' */
            }
        }
        else
        {
            /* Transition: '<S169>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dh) == 133)
            {
                /* Transition: '<S169>:95' */
                /* Transition: '<S169>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_UtilPctOfDCDC_CallStatus = 4U;

                /* Transition: '<S169>:114' */
            }
            else
            {
                /* Transition: '<S169>:120' */
                if ((((uint32)tmpRead_m) & 8U) != 0U)
                {
                    /* Transition: '<S169>:122' */
                    /* Transition: '<S169>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S169>:126' */
                }
                else
                {
                    /* Transition: '<S169>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S169>:117' */
                /* Call Poke */
                VeCRDB_y_APM_UtilPctOfDCDC_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S57>/Poke' */
                /* FunctionCaller: '<S171>/Function Caller' */
                /* Event: '<S169>:38' */
                Rte_Call_PokeIDCR_Pct_UtilPctOfDCDC_PokeIDCR_Pct_UtilPctOfDCDC
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_Pct, FA_out_ih);

                /* End of Outputs for SubSystem: '<S57>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S169>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_UtilPctOfDCDC_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S57>/Fsft' */
        /* FunctionCaller: '<S170>/Function Caller' */
        /* Event: '<S169>:39' */
        Rte_Call_FsftIDCR_Pct_UtilPctOfDCDC_FsftIDCR_Pct_UtilPctOfDCDC();

        /* End of Outputs for SubSystem: '<S57>/Fsft' */
        /* Transition: '<S169>:113' */
        /* Transition: '<S169>:115' */
        /* Transition: '<S169>:114' */
    }

    /* End of Chart: '<S166>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ImpactHardwire_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ImpactHardwire_ErrSts'
     */
    /* Transition: '<S169>:107' */
    rtb_TmpSignalConversionAtVeCR_k = Rte_Read_VeCRDB_b_ImpactHardwire_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_ImpactHardwire_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S177>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ImpactHardwire_SigSts_Value(&tmpRead_n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S174>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_n) & 3U) != 0U)
    {
        /* Transition: '<S177>:100' */
        /* Transition: '<S177>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S177>:104' */
        /*  MM */
        if ((((uint32)tmpRead_n) & 4U) != 0U)
        {
            /* Transition: '<S177>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S177>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S177>:110' */
                /* Call Tmot */
                VeCRDB_y_ImpactHardwire_CallStatus = 3U;

                /* Event: '<S177>:40' */
                /* Transition: '<S177>:115' */
                /* Transition: '<S177>:114' */
            }
        }
        else
        {
            /* Transition: '<S177>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_k) == 133)
            {
                /* Transition: '<S177>:95' */
                /* Transition: '<S177>:116' */
                /* Call Nothing */
                VeCRDB_y_ImpactHardwire_CallStatus = 4U;

                /* Transition: '<S177>:114' */
            }
            else
            {
                /* Transition: '<S177>:120' */
                /* Transition: '<S177>:117' */
                /* Call Poke */
                VeCRDB_y_ImpactHardwire_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S172>/Poke' */
                /* FunctionCaller: '<S179>/Function Caller' */
                /* Event: '<S177>:38' */
                Rte_Call_PokeIMPR_b_ImpactHardwire_PokeIMPR_b_ImpactHardwire
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_I);

                /* End of Outputs for SubSystem: '<S172>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S177>:111' */
        /* Call Fsft */
        VeCRDB_y_ImpactHardwire_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S172>/Fsft' */
        /* FunctionCaller: '<S178>/Function Caller' */
        /* Event: '<S177>:39' */
        Rte_Call_FsftIMPR_b_ImpactHardwire_FsftIMPR_b_ImpactHardwire();

        /* End of Outputs for SubSystem: '<S172>/Fsft' */
        /* Transition: '<S177>:113' */
        /* Transition: '<S177>:115' */
        /* Transition: '<S177>:114' */
    }

    /* End of Chart: '<S174>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ImpactHardwireV_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ImpactHardwireV_ErrSts'
     */
    /* Transition: '<S177>:107' */
    rtb_TmpSignalConversionAtVeC_jw = Rte_Read_VeCRDB_b_ImpactHardwireV_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_ImpactHardwireV_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S183>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ImpactHardwireV_SigSts_Value(&tmpRead_o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S180>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_o) & 3U) != 0U)
    {
        /* Transition: '<S183>:100' */
        /* Transition: '<S183>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S183>:104' */
        /*  MM */
        if ((((uint32)tmpRead_o) & 4U) != 0U)
        {
            /* Transition: '<S183>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S183>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S183>:110' */
                /* Call Tmot */
                VeCRDB_y_ImpactHardwireV_CallStatus = 3U;

                /* Event: '<S183>:40' */
                /* Transition: '<S183>:115' */
                /* Transition: '<S183>:114' */
            }
        }
        else
        {
            /* Transition: '<S183>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jw) == 133)
            {
                /* Transition: '<S183>:95' */
                /* Transition: '<S183>:116' */
                /* Call Nothing */
                VeCRDB_y_ImpactHardwireV_CallStatus = 4U;

                /* Transition: '<S183>:114' */
            }
            else
            {
                /* Transition: '<S183>:120' */
                /* Transition: '<S183>:117' */
                /* Call Poke */
                VeCRDB_y_ImpactHardwireV_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S173>/Poke' */
                /* FunctionCaller: '<S185>/Function Caller' */
                /* Event: '<S183>:38' */
                Rte_Call_PokeIMPR_b_ImpactHardwireV_PokeIMPR_b_ImpactHardwireV
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_n);

                /* End of Outputs for SubSystem: '<S173>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S183>:111' */
        /* Call Fsft */
        VeCRDB_y_ImpactHardwireV_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S173>/Fsft' */
        /* FunctionCaller: '<S184>/Function Caller' */
        /* Event: '<S183>:39' */
        Rte_Call_FsftIMPR_b_ImpactHardwireV_FsftIMPR_b_ImpactHardwireV();

        /* End of Outputs for SubSystem: '<S173>/Fsft' */
        /* Transition: '<S183>:113' */
        /* Transition: '<S183>:115' */
        /* Transition: '<S183>:114' */
    }

    /* End of Chart: '<S180>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BMS_HV_HiTempThrs_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BMS_HV_HiTempThrs_ErrSts'
     */
    /* Transition: '<S183>:107' */
    rtb_TmpSignalConversionAtVeCR_e = Rte_Read_VeCRDB_T_BMS_HV_HiTempThrs_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BMS_HV_HiTempThrs_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S194>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BMS_HV_HiTempThrs_SigSts_Value(&tmpRead_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S191>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_p) & 3U) != 0U)
    {
        /* Transition: '<S194>:100' */
        /* Transition: '<S194>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S194>:104' */
        /*  MM */
        if ((((uint32)tmpRead_p) & 4U) != 0U)
        {
            /* Transition: '<S194>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S194>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S194>:110' */
                /* Call Tmot */
                VeCRDB_y_BMS_HV_HiTempThrs_CallStatus = 3U;

                /* Event: '<S194>:40' */
                /* Transition: '<S194>:115' */
                /* Transition: '<S194>:114' */
            }
        }
        else
        {
            /* Transition: '<S194>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_e) == 133)
            {
                /* Transition: '<S194>:95' */
                /* Transition: '<S194>:116' */
                /* Call Nothing */
                VeCRDB_y_BMS_HV_HiTempThrs_CallStatus = 4U;

                /* Transition: '<S194>:114' */
            }
            else
            {
                /* Transition: '<S194>:120' */
                if ((((uint32)tmpRead_p) & 8U) != 0U)
                {
                    /* Transition: '<S194>:122' */
                    /* Transition: '<S194>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S194>:126' */
                }
                else
                {
                    /* Transition: '<S194>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S194>:117' */
                /* Call Poke */
                VeCRDB_y_BMS_HV_HiTempThrs_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S186>/Poke' */
                /* FunctionCaller: '<S196>/Function Caller' */
                /* Event: '<S194>:38' */
                Rte_Call_PokeTMIR_T_HV_BatHghTmp_Thrsh_PokeTMIR_T_HV_BatHghTmp_Thrsh
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_B, FA_out_ih);

                /* End of Outputs for SubSystem: '<S186>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S194>:111' */
        /* Call Fsft */
        VeCRDB_y_BMS_HV_HiTempThrs_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S186>/Fsft' */
        /* FunctionCaller: '<S195>/Function Caller' */
        /* Event: '<S194>:39' */
        Rte_Call_FsftTMIR_T_HV_BatHghTmp_Thrsh_FsftTMIR_T_HV_BatHghTmp_Thrsh();

        /* End of Outputs for SubSystem: '<S186>/Fsft' */
        /* Transition: '<S194>:113' */
        /* Transition: '<S194>:115' */
        /* Transition: '<S194>:114' */
    }

    /* End of Chart: '<S191>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BMS_HV_LoTempThrs_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BMS_HV_LoTempThrs_ErrSts'
     */
    /* Transition: '<S194>:107' */
    rtb_TmpSignalConversionAtVeC_hx = Rte_Read_VeCRDB_T_BMS_HV_LoTempThrs_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BMS_HV_LoTempThrs_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S200>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BMS_HV_LoTempThrs_SigSts_Value(&tmpRead_q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S197>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_q) & 3U) != 0U)
    {
        /* Transition: '<S200>:100' */
        /* Transition: '<S200>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S200>:104' */
        /*  MM */
        if ((((uint32)tmpRead_q) & 4U) != 0U)
        {
            /* Transition: '<S200>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S200>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S200>:110' */
                /* Call Tmot */
                VeCRDB_y_BMS_HV_LoTempThrs_CallStatus = 3U;

                /* Event: '<S200>:40' */
                /* Transition: '<S200>:115' */
                /* Transition: '<S200>:114' */
            }
        }
        else
        {
            /* Transition: '<S200>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hx) == 133)
            {
                /* Transition: '<S200>:95' */
                /* Transition: '<S200>:116' */
                /* Call Nothing */
                VeCRDB_y_BMS_HV_LoTempThrs_CallStatus = 4U;

                /* Transition: '<S200>:114' */
            }
            else
            {
                /* Transition: '<S200>:120' */
                if ((((uint32)tmpRead_q) & 8U) != 0U)
                {
                    /* Transition: '<S200>:122' */
                    /* Transition: '<S200>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S200>:126' */
                }
                else
                {
                    /* Transition: '<S200>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S200>:117' */
                /* Call Poke */
                VeCRDB_y_BMS_HV_LoTempThrs_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S187>/Poke' */
                /* FunctionCaller: '<S202>/Function Caller' */
                /* Event: '<S200>:38' */
                Rte_Call_PokeTMIR_T_HV_BatLowTmp_Thrsh_PokeTMIR_T_HV_BatLowTmp_Thrsh
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_l, FA_out_ih);

                /* End of Outputs for SubSystem: '<S187>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S200>:111' */
        /* Call Fsft */
        VeCRDB_y_BMS_HV_LoTempThrs_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S187>/Fsft' */
        /* FunctionCaller: '<S201>/Function Caller' */
        /* Event: '<S200>:39' */
        Rte_Call_FsftTMIR_T_HV_BatLowTmp_Thrsh_FsftTMIR_T_HV_BatLowTmp_Thrsh();

        /* End of Outputs for SubSystem: '<S187>/Fsft' */
        /* Transition: '<S200>:113' */
        /* Transition: '<S200>:115' */
        /* Transition: '<S200>:114' */
    }

    /* End of Chart: '<S197>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HEV_OnRq_BPCM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HEV_OnRq_BPCM_ErrSts'
     */
    /* Transition: '<S200>:107' */
    rtb_TmpSignalConversionAtVeCR_o = Rte_Read_VeCRDB_b_HEV_OnRq_BPCM_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_HEV_OnRq_BPCM_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S205>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HEV_OnRq_BPCM_SigSts_Value(&tmpRead_r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S203>/Chart' */
    if ((((uint32)tmpRead_r) & 3U) != 0U)
    {
        /* Transition: '<S205>:100' */
        /* Transition: '<S205>:103' */
        /* Transition: '<S205>:111' */
        /* Call Fsft */
        VeCRDB_y_HEV_OnRq_BPCM_CallStatus = 2U;

        /* Event: '<S205>:39' */
        /* Transition: '<S205>:113' */
        /* Transition: '<S205>:115' */
        /* Transition: '<S205>:114' */
    }
    else
    {
        /* Transition: '<S205>:104' */
        /*  MM */
        if ((((uint32)tmpRead_r) & 4U) != 0U)
        {
            /* Transition: '<S205>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S205>:88' */
                /* Transition: '<S205>:111' */
                /* Call Fsft */
                VeCRDB_y_HEV_OnRq_BPCM_CallStatus = 2U;

                /* Event: '<S205>:39' */
                /* Transition: '<S205>:113' */
                /* Transition: '<S205>:115' */
                /* Transition: '<S205>:114' */
            }
            else
            {
                /* Transition: '<S205>:110' */
                /* Call Tmot */
                VeCRDB_y_HEV_OnRq_BPCM_CallStatus = 3U;

                /* Event: '<S205>:40' */
                /* Transition: '<S205>:115' */
                /* Transition: '<S205>:114' */
            }
        }
        else
        {
            /* Transition: '<S205>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_o) == 133)
            {
                /* Transition: '<S205>:95' */
                /* Transition: '<S205>:116' */
                /* Call Nothing */
                VeCRDB_y_HEV_OnRq_BPCM_CallStatus = 4U;

                /* Transition: '<S205>:114' */
            }
            else
            {
                /* Transition: '<S205>:120' */
                /* Transition: '<S205>:117' */
                /* Call Poke */
                VeCRDB_y_HEV_OnRq_BPCM_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S188>/Poke' */
                /* FunctionCaller: '<S206>/Function Caller' */
                /* Event: '<S205>:38' */
                Rte_Call_PokeBPCR_b_HEVOnRqBPCM_PokeBPCR_b_HEVOnRqBPCM
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_H);

                /* End of Outputs for SubSystem: '<S188>/Poke' */
            }
        }
    }

    /* End of Chart: '<S203>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBatCelVoltHiThrs_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBatCelVoltHiThrs_ErrSts'
     */
    /* Transition: '<S205>:107' */
    rtb_TmpSignalConversionAtVeC_hv = Rte_Read_VeCRDB_h_HVBatCelVoltHiThrs_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_h_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_HVBatCelVoltHiThrs_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S210>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBatCelVoltHiThrs_SigSts_Value(&tmpRead_s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S207>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_s) & 3U) != 0U)
    {
        /* Transition: '<S210>:100' */
        /* Transition: '<S210>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S210>:104' */
        /*  MM */
        if ((((uint32)tmpRead_s) & 4U) != 0U)
        {
            /* Transition: '<S210>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S210>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S210>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBatCelVoltHiThrs_CallStatus = 3U;

                /* Event: '<S210>:40' */
                /* Transition: '<S210>:115' */
                /* Transition: '<S210>:114' */
            }
        }
        else
        {
            /* Transition: '<S210>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hv) == 133)
            {
                /* Transition: '<S210>:95' */
                /* Transition: '<S210>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBatCelVoltHiThrs_CallStatus = 4U;

                /* Transition: '<S210>:114' */
            }
            else
            {
                /* Transition: '<S210>:120' */
                if ((((uint32)tmpRead_s) & 8U) != 0U)
                {
                    /* Transition: '<S210>:122' */
                    /* Transition: '<S210>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S210>:126' */
                }
                else
                {
                    /* Transition: '<S210>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S210>:117' */
                /* Call Poke */
                VeCRDB_y_HVBatCelVoltHiThrs_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S189>/Poke' */
                /* FunctionCaller: '<S212>/Function Caller' */
                /* Event: '<S210>:38' */
                Rte_Call_PokeBPCR_U_CellVoltHighThrsh_PokeBPCR_U_CellVoltHighThrsh
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_h_H, FA_out_ih);

                /* End of Outputs for SubSystem: '<S189>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S210>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBatCelVoltHiThrs_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S189>/Fsft' */
        /* FunctionCaller: '<S211>/Function Caller' */
        /* Event: '<S210>:39' */
        Rte_Call_FsftBPCR_U_CellVoltHighThrsh_FsftBPCR_U_CellVoltHighThrsh();

        /* End of Outputs for SubSystem: '<S189>/Fsft' */
        /* Transition: '<S210>:113' */
        /* Transition: '<S210>:115' */
        /* Transition: '<S210>:114' */
    }

    /* End of Chart: '<S207>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBatCelVoltLoThrs_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBatCelVoltLoThrs_ErrSts'
     */
    /* Transition: '<S210>:107' */
    rtb_TmpSignalConversionAtVeC_f0 = Rte_Read_VeCRDB_h_HVBatCelVoltLoThrs_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_h_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_HVBatCelVoltLoThrs_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S216>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBatCelVoltLoThrs_SigSts_Value(&tmpRead_t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S213>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_t) & 3U) != 0U)
    {
        /* Transition: '<S216>:100' */
        /* Transition: '<S216>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S216>:104' */
        /*  MM */
        if ((((uint32)tmpRead_t) & 4U) != 0U)
        {
            /* Transition: '<S216>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S216>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S216>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBatCelVoltLoThrs_CallStatus = 3U;

                /* Event: '<S216>:40' */
                /* Transition: '<S216>:115' */
                /* Transition: '<S216>:114' */
            }
        }
        else
        {
            /* Transition: '<S216>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_f0) == 133)
            {
                /* Transition: '<S216>:95' */
                /* Transition: '<S216>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBatCelVoltLoThrs_CallStatus = 4U;

                /* Transition: '<S216>:114' */
            }
            else
            {
                /* Transition: '<S216>:120' */
                /* Transition: '<S216>:117' */
                /* Call Poke */
                VeCRDB_y_HVBatCelVoltLoThrs_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S190>/Poke' */
                /* FunctionCaller: '<S218>/Function Caller' incorporates:
                 *  Constant: '<S218>/Constant'
                 */
                /* Event: '<S216>:38' */
                Rte_Call_PokeBPCR_U_CellVoltLowThrsh_PokeBPCR_U_CellVoltLowThrsh
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_h_a, false);

                /* End of Outputs for SubSystem: '<S190>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S216>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBatCelVoltLoThrs_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S190>/Fsft' */
        /* FunctionCaller: '<S217>/Function Caller' */
        /* Event: '<S216>:39' */
        Rte_Call_FsftBPCR_U_CellVoltLowThrsh_FsftBPCR_U_CellVoltLowThrsh();

        /* End of Outputs for SubSystem: '<S190>/Fsft' */
        /* Transition: '<S216>:113' */
        /* Transition: '<S216>:115' */
        /* Transition: '<S216>:114' */
    }

    /* End of Chart: '<S213>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMCntctrsMTOWrn_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMCntctrsMTOWrn_ErrSts'
     */
    /* Transition: '<S216>:107' */
    rtb_TmpSignalConversionAtVeC_ba = Rte_Read_VeCRDB_b_BPCMCntctrsMTOWrn_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCMCntctrsMTOWrn_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S233>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMCntctrsMTOWrn_SigSts_Value(&tmpRead_u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S231>/Chart' */
    if ((((uint32)tmpRead_u) & 3U) != 0U)
    {
        /* Transition: '<S233>:100' */
        /* Transition: '<S233>:103' */
        /* Transition: '<S233>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMCntctrsMTOWrn_CallStatus = 2U;

        /* Event: '<S233>:39' */
        /* Transition: '<S233>:113' */
        /* Transition: '<S233>:115' */
        /* Transition: '<S233>:114' */
    }
    else
    {
        /* Transition: '<S233>:104' */
        /*  MM */
        if ((((uint32)tmpRead_u) & 4U) != 0U)
        {
            /* Transition: '<S233>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S233>:88' */
                /* Transition: '<S233>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCMCntctrsMTOWrn_CallStatus = 2U;

                /* Event: '<S233>:39' */
                /* Transition: '<S233>:113' */
                /* Transition: '<S233>:115' */
                /* Transition: '<S233>:114' */
            }
            else
            {
                /* Transition: '<S233>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMCntctrsMTOWrn_CallStatus = 3U;

                /* Event: '<S233>:40' */
                /* Transition: '<S233>:115' */
                /* Transition: '<S233>:114' */
            }
        }
        else
        {
            /* Transition: '<S233>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ba) == 133)
            {
                /* Transition: '<S233>:95' */
                /* Transition: '<S233>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMCntctrsMTOWrn_CallStatus = 4U;

                /* Transition: '<S233>:114' */
            }
            else
            {
                /* Transition: '<S233>:120' */
                /* Transition: '<S233>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMCntctrsMTOWrn_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S219>/Poke' */
                /* FunctionCaller: '<S234>/Function Caller' */
                /* Event: '<S233>:38' */
                Rte_Call_PokeBPCR_b_HV_BatCntctrOpenPending_PokeBPCR_b_HV_BatCntctrOpenPending
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_B);

                /* End of Outputs for SubSystem: '<S219>/Poke' */
            }
        }
    }

    /* End of Chart: '<S231>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMCntctrsSTOWrn_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMCntctrsSTOWrn_ErrSts'
     */
    /* Transition: '<S233>:107' */
    rtb_TmpSignalConversionAtVeC_ei = Rte_Read_VeCRDB_b_BPCMCntctrsSTOWrn_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_n3z);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCMCntctrsSTOWrn_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S237>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMCntctrsSTOWrn_SigSts_Value(&tmpRead_v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S235>/Chart' */
    if ((((uint32)tmpRead_v) & 3U) != 0U)
    {
        /* Transition: '<S237>:100' */
        /* Transition: '<S237>:103' */
        /* Transition: '<S237>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMCntctrsSTOWrn_CallStatus = 2U;

        /* Event: '<S237>:39' */
        /* Transition: '<S237>:113' */
        /* Transition: '<S237>:115' */
        /* Transition: '<S237>:114' */
    }
    else
    {
        /* Transition: '<S237>:104' */
        /*  MM */
        if ((((uint32)tmpRead_v) & 4U) != 0U)
        {
            /* Transition: '<S237>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S237>:88' */
                /* Transition: '<S237>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCMCntctrsSTOWrn_CallStatus = 2U;

                /* Event: '<S237>:39' */
                /* Transition: '<S237>:113' */
                /* Transition: '<S237>:115' */
                /* Transition: '<S237>:114' */
            }
            else
            {
                /* Transition: '<S237>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMCntctrsSTOWrn_CallStatus = 3U;

                /* Event: '<S237>:40' */
                /* Transition: '<S237>:115' */
                /* Transition: '<S237>:114' */
            }
        }
        else
        {
            /* Transition: '<S237>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ei) == 133)
            {
                /* Transition: '<S237>:95' */
                /* Transition: '<S237>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMCntctrsSTOWrn_CallStatus = 4U;

                /* Transition: '<S237>:114' */
            }
            else
            {
                /* Transition: '<S237>:120' */
                /* Transition: '<S237>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMCntctrsSTOWrn_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S220>/Poke' */
                /* FunctionCaller: '<S238>/Function Caller' */
                /* Event: '<S237>:38' */
                Rte_Call_PokeBPCR_b_HV_BatCntctrOpenReq_PokeBPCR_b_HV_BatCntctrOpenReq
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_n3z);

                /* End of Outputs for SubSystem: '<S220>/Poke' */
            }
        }
    }

    /* End of Chart: '<S235>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVCelMxDchImp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVCelMxDchImp_ErrSts'
     */
    /* Transition: '<S237>:107' */
    rtb_TmpSignalConversionAtVeC_cw =
        Rte_Read_VeCRDB_dT_BPCM_HVCelMxDchImp_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_dT_);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVCelMxDchImp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S242>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVCelMxDchImp_SigSts_Value(&tmpRead_w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S239>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_w) & 3U) != 0U)
    {
        /* Transition: '<S242>:100' */
        /* Transition: '<S242>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S242>:104' */
        /*  MM */
        if ((((uint32)tmpRead_w) & 4U) != 0U)
        {
            /* Transition: '<S242>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S242>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S242>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVCelMxDchImp_CallStatus = 3U;

                /* Event: '<S242>:40' */
                /* Transition: '<S242>:115' */
                /* Transition: '<S242>:114' */
            }
        }
        else
        {
            /* Transition: '<S242>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_cw) == 133)
            {
                /* Transition: '<S242>:95' */
                /* Transition: '<S242>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVCelMxDchImp_CallStatus = 4U;

                /* Transition: '<S242>:114' */
            }
            else
            {
                /* Transition: '<S242>:120' */
                if ((((uint32)tmpRead_w) & 8U) != 0U)
                {
                    /* Transition: '<S242>:122' */
                    /* Transition: '<S242>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S242>:126' */
                }
                else
                {
                    /* Transition: '<S242>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S242>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVCelMxDchImp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S221>/Poke' */
                /* FunctionCaller: '<S244>/Function Caller' */
                /* Event: '<S242>:38' */
                Rte_Call_PokeBPCR_Z_MaxCellDischargeImpedance_PokeBPCR_Z_MaxCellDischargeImpedance
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_dT_, FA_out_ih);

                /* End of Outputs for SubSystem: '<S221>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S242>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVCelMxDchImp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S221>/Fsft' */
        /* FunctionCaller: '<S243>/Function Caller' */
        /* Event: '<S242>:39' */
        Rte_Call_FsftBPCR_Z_MaxCellDischargeImpedance_FsftBPCR_Z_MaxCellDischargeImpedance
            ();

        /* End of Outputs for SubSystem: '<S221>/Fsft' */
        /* Transition: '<S242>:113' */
        /* Transition: '<S242>:115' */
        /* Transition: '<S242>:114' */
    }

    /* End of Chart: '<S239>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVClMinDchImp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVClMinDchImp_ErrSts'
     */
    /* Transition: '<S242>:107' */
    rtb_TmpSignalConversionAtVeC_dm =
        Rte_Read_VeCRDB_dT_BPCM_HVClMinDchImp_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_d_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVClMinDchImp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S248>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVClMinDchImp_SigSts_Value(&tmpRead_x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S245>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_x) & 3U) != 0U)
    {
        /* Transition: '<S248>:100' */
        /* Transition: '<S248>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S248>:104' */
        /*  MM */
        if ((((uint32)tmpRead_x) & 4U) != 0U)
        {
            /* Transition: '<S248>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S248>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S248>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVClMinDchImp_CallStatus = 3U;

                /* Event: '<S248>:40' */
                /* Transition: '<S248>:115' */
                /* Transition: '<S248>:114' */
            }
        }
        else
        {
            /* Transition: '<S248>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dm) == 133)
            {
                /* Transition: '<S248>:95' */
                /* Transition: '<S248>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVClMinDchImp_CallStatus = 4U;

                /* Transition: '<S248>:114' */
            }
            else
            {
                /* Transition: '<S248>:120' */
                if ((((uint32)tmpRead_x) & 8U) != 0U)
                {
                    /* Transition: '<S248>:122' */
                    /* Transition: '<S248>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S248>:126' */
                }
                else
                {
                    /* Transition: '<S248>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S248>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVClMinDchImp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S222>/Poke' */
                /* FunctionCaller: '<S250>/Function Caller' */
                /* Event: '<S248>:38' */
                Rte_Call_PokeBPCR_Z_MinCellDischargeImpedance_PokeBPCR_Z_MinCellDischargeImpedance
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_d_m, FA_out_ih);

                /* End of Outputs for SubSystem: '<S222>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S248>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVClMinDchImp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S222>/Fsft' */
        /* FunctionCaller: '<S249>/Function Caller' */
        /* Event: '<S248>:39' */
        Rte_Call_FsftBPCR_Z_MinCellDischargeImpedance_FsftBPCR_Z_MinCellDischargeImpedance
            ();

        /* End of Outputs for SubSystem: '<S222>/Fsft' */
        /* Transition: '<S248>:113' */
        /* Transition: '<S248>:115' */
        /* Transition: '<S248>:114' */
    }

    /* End of Chart: '<S245>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVChrgCurProf_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVChrgCurProf_ErrSts'
     */
    /* Transition: '<S248>:107' */
    rtb_TmpSignalConversionAtVeC_od = Rte_Read_VeCRDB_I_BPCM_HVChrgCurProf_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_I_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVChrgCurProf_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S254>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVChrgCurProf_SigSts_Value(&tmpRead_y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S251>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_y) & 3U) != 0U)
    {
        /* Transition: '<S254>:100' */
        /* Transition: '<S254>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S254>:104' */
        /*  MM */
        if ((((uint32)tmpRead_y) & 4U) != 0U)
        {
            /* Transition: '<S254>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S254>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S254>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVChrgCurProf_CallStatus = 3U;

                /* Event: '<S254>:40' */
                /* Transition: '<S254>:115' */
                /* Transition: '<S254>:114' */
            }
        }
        else
        {
            /* Transition: '<S254>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_od) == 133)
            {
                /* Transition: '<S254>:95' */
                /* Transition: '<S254>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVChrgCurProf_CallStatus = 4U;

                /* Transition: '<S254>:114' */
            }
            else
            {
                /* Transition: '<S254>:120' */
                if ((((uint32)tmpRead_y) & 8U) != 0U)
                {
                    /* Transition: '<S254>:122' */
                    /* Transition: '<S254>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S254>:126' */
                }
                else
                {
                    /* Transition: '<S254>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S254>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVChrgCurProf_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S223>/Poke' */
                /* FunctionCaller: '<S256>/Function Caller' */
                /* Event: '<S254>:38' */
                Rte_Call_PokeBPCR_I_MaxChgCurrAlwd_PokeBPCR_I_MaxChgCurrAlwd
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_I_B, FA_out_ih);

                /* End of Outputs for SubSystem: '<S223>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S254>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVChrgCurProf_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S223>/Fsft' */
        /* FunctionCaller: '<S255>/Function Caller' */
        /* Event: '<S254>:39' */
        Rte_Call_FsftBPCR_I_MaxChgCurrAlwd_FsftBPCR_I_MaxChgCurrAlwd();

        /* End of Outputs for SubSystem: '<S223>/Fsft' */
        /* Transition: '<S254>:113' */
        /* Transition: '<S254>:115' */
        /* Transition: '<S254>:114' */
    }

    /* End of Chart: '<S251>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_BatChrgSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_BatChrgSts_ErrSts'
     */
    /* Transition: '<S254>:107' */
    rtb_TmpSignalConversionAtVeC_o4 = Rte_Read_VeCRDB_y_BPCM_HV_BatChrgSts_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_BatChrgSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S260>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_BatChrgSts_SigSts_Value(&tmpRead_z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S257>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_z) & 3U) != 0U)
    {
        /* Transition: '<S260>:100' */
        /* Transition: '<S260>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S260>:104' */
        /*  MM */
        if ((((uint32)tmpRead_z) & 4U) != 0U)
        {
            /* Transition: '<S260>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S260>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S260>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_BatChrgSts_CallStatus = 3U;

                /* Event: '<S260>:40' */
                /* Transition: '<S260>:115' */
                /* Transition: '<S260>:114' */
            }
        }
        else
        {
            /* Transition: '<S260>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_o4) == 133)
            {
                /* Transition: '<S260>:95' */
                /* Transition: '<S260>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_BatChrgSts_CallStatus = 4U;

                /* Transition: '<S260>:114' */
            }
            else
            {
                /* Transition: '<S260>:120' */
                if ((((uint32)tmpRead_z) & 8U) != 0U)
                {
                    /* Transition: '<S260>:122' */
                    /* Transition: '<S260>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S260>:126' */
                }
                else
                {
                    /* Transition: '<S260>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S260>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_BatChrgSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S224>/Poke' */
                /* FunctionCaller: '<S262>/Function Caller' */
                /* Event: '<S260>:38' */
                Rte_Call_PokeBPCR_e_ChargingStat_BPCM_PokeBPCR_e_ChargingStat_BPCM
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_f, FA_out_ih);

                /* End of Outputs for SubSystem: '<S224>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S260>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_BatChrgSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S224>/Fsft' */
        /* FunctionCaller: '<S261>/Function Caller' */
        /* Event: '<S260>:39' */
        Rte_Call_FsftBPCR_e_ChargingStat_BPCM_FsftBPCR_e_ChargingStat_BPCM();

        /* End of Outputs for SubSystem: '<S224>/Fsft' */
        /* Transition: '<S260>:113' */
        /* Transition: '<S260>:115' */
        /* Transition: '<S260>:114' */
    }

    /* End of Chart: '<S257>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVPwrMaxChgLT_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVPwrMaxChgLT_ErrSts'
     */
    /* Transition: '<S260>:107' */
    rtb_TmpSignalConversionAtVeC_ji = Rte_Read_VeCRDB_P_BPCM_HVPwrMaxChgLT_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMaxChgLT_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S267>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMaxChgLT_SigSts_Value(&tmpRead_10);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S263>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_10) & 3U) != 0U)
    {
        /* Transition: '<S267>:100' */
        /* Transition: '<S267>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S267>:104' */
        /*  MM */
        if ((((uint32)tmpRead_10) & 4U) != 0U)
        {
            /* Transition: '<S267>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S267>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S267>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVPwrMaxChgLT_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S225>/Tmot' */
                /* FunctionCaller: '<S270>/Function Caller' */
                /* Event: '<S267>:40' */
                Rte_Call_TmotBPCR_b_HV_BatChrgPwrET_TmotBPCR_b_HV_BatChrgPwrET();

                /* End of Outputs for SubSystem: '<S225>/Tmot' */
                /* Transition: '<S267>:115' */
                /* Transition: '<S267>:114' */
            }
        }
        else
        {
            /* Transition: '<S267>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ji) == 133)
            {
                /* Transition: '<S267>:95' */
                /* Transition: '<S267>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVPwrMaxChgLT_CallStatus = 4U;

                /* Transition: '<S267>:114' */
            }
            else
            {
                /* Transition: '<S267>:120' */
                if ((((uint32)tmpRead_10) & 8U) != 0U)
                {
                    /* Transition: '<S267>:122' */
                    /* Transition: '<S267>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S267>:126' */
                }
                else
                {
                    /* Transition: '<S267>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S267>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVPwrMaxChgLT_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S225>/Poke' */
                /* FunctionCaller: '<S269>/Function Caller' */
                /* Event: '<S267>:38' */
                Rte_Call_PokeBPCR_P_HV_BatChrgPwrET_PokeBPCR_P_HV_BatChrgPwrET
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_B, FA_out_ih);

                /* End of Outputs for SubSystem: '<S225>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S267>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVPwrMaxChgLT_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S225>/Fsft' */
        /* FunctionCaller: '<S268>/Function Caller' */
        /* Event: '<S267>:39' */
        Rte_Call_FsftBPCR_b_HV_BatChrgPwrET_FsftBPCR_b_HV_BatChrgPwrET();

        /* End of Outputs for SubSystem: '<S225>/Fsft' */
        /* Transition: '<S267>:113' */
        /* Transition: '<S267>:115' */
        /* Transition: '<S267>:114' */
    }

    /* End of Chart: '<S263>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVPwrMaxChgMT_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVPwrMaxChgMT_ErrSts'
     */
    /* Transition: '<S267>:107' */
    rtb_TmpSignalConversionAtVeC_ip = Rte_Read_VeCRDB_P_BPCM_HVPwrMaxChgMT_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMaxChgMT_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S275>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMaxChgMT_SigSts_Value(&tmpRead_11);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S271>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_11) & 3U) != 0U)
    {
        /* Transition: '<S275>:100' */
        /* Transition: '<S275>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S275>:104' */
        /*  MM */
        if ((((uint32)tmpRead_11) & 4U) != 0U)
        {
            /* Transition: '<S275>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S275>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S275>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVPwrMaxChgMT_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S226>/Tmot' */
                /* FunctionCaller: '<S278>/Function Caller' */
                /* Event: '<S275>:40' */
                Rte_Call_TmotBPCR_b_HV_BatChrgPwrLT_TmotBPCR_b_HV_BatChrgPwrLT();

                /* End of Outputs for SubSystem: '<S226>/Tmot' */
                /* Transition: '<S275>:115' */
                /* Transition: '<S275>:114' */
            }
        }
        else
        {
            /* Transition: '<S275>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ip) == 133)
            {
                /* Transition: '<S275>:95' */
                /* Transition: '<S275>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVPwrMaxChgMT_CallStatus = 4U;

                /* Transition: '<S275>:114' */
            }
            else
            {
                /* Transition: '<S275>:120' */
                if ((((uint32)tmpRead_11) & 8U) != 0U)
                {
                    /* Transition: '<S275>:122' */
                    /* Transition: '<S275>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S275>:126' */
                }
                else
                {
                    /* Transition: '<S275>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S275>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVPwrMaxChgMT_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S226>/Poke' */
                /* FunctionCaller: '<S277>/Function Caller' */
                /* Event: '<S275>:38' */
                Rte_Call_PokeBPCR_P_HV_BatChrgPwrLT_PokeBPCR_P_HV_BatChrgPwrLT
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_k, FA_out_ih);

                /* End of Outputs for SubSystem: '<S226>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S275>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVPwrMaxChgMT_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S226>/Fsft' */
        /* FunctionCaller: '<S276>/Function Caller' */
        /* Event: '<S275>:39' */
        Rte_Call_FsftBPCR_b_HV_BatChrgPwrLT_FsftBPCR_b_HV_BatChrgPwrLT();

        /* End of Outputs for SubSystem: '<S226>/Fsft' */
        /* Transition: '<S275>:113' */
        /* Transition: '<S275>:115' */
        /* Transition: '<S275>:114' */
    }

    /* End of Chart: '<S271>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVPwrMaxChgST_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVPwrMaxChgST_ErrSts'
     */
    /* Transition: '<S275>:107' */
    rtb_TmpSignalConversionAtVeC_gx = Rte_Read_VeCRDB_P_BPCM_HVPwrMaxChgST_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMaxChgST_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S283>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMaxChgST_SigSts_Value(&tmpRead_12);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S279>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_12) & 3U) != 0U)
    {
        /* Transition: '<S283>:100' */
        /* Transition: '<S283>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S283>:104' */
        /*  MM */
        if ((((uint32)tmpRead_12) & 4U) != 0U)
        {
            /* Transition: '<S283>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S283>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S283>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVPwrMaxChgST_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S227>/Tmot' */
                /* FunctionCaller: '<S286>/Function Caller' */
                /* Event: '<S283>:40' */
                Rte_Call_TmotBPCR_b_HV_BatChrgPwrST_TmotBPCR_b_HV_BatChrgPwrST();

                /* End of Outputs for SubSystem: '<S227>/Tmot' */
                /* Transition: '<S283>:115' */
                /* Transition: '<S283>:114' */
            }
        }
        else
        {
            /* Transition: '<S283>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_gx) == 133)
            {
                /* Transition: '<S283>:95' */
                /* Transition: '<S283>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVPwrMaxChgST_CallStatus = 4U;

                /* Transition: '<S283>:114' */
            }
            else
            {
                /* Transition: '<S283>:120' */
                if ((((uint32)tmpRead_12) & 8U) != 0U)
                {
                    /* Transition: '<S283>:122' */
                    /* Transition: '<S283>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S283>:126' */
                }
                else
                {
                    /* Transition: '<S283>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S283>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVPwrMaxChgST_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S227>/Poke' */
                /* FunctionCaller: '<S285>/Function Caller' */
                /* Event: '<S283>:38' */
                Rte_Call_PokeBPCR_P_HV_BatChrgPwrST_PokeBPCR_P_HV_BatChrgPwrST
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_n, FA_out_ih);

                /* End of Outputs for SubSystem: '<S227>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S283>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVPwrMaxChgST_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S227>/Fsft' */
        /* FunctionCaller: '<S284>/Function Caller' */
        /* Event: '<S283>:39' */
        Rte_Call_FsftBPCR_b_HV_BatChrgPwrST_FsftBPCR_b_HV_BatChrgPwrST();

        /* End of Outputs for SubSystem: '<S227>/Fsft' */
        /* Transition: '<S283>:113' */
        /* Transition: '<S283>:115' */
        /* Transition: '<S283>:114' */
    }

    /* End of Chart: '<S279>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVPwrMxDchgLT_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVPwrMxDchgLT_ErrSts'
     */
    /* Transition: '<S283>:107' */
    rtb_TmpSignalConversionAtVeC_ol = Rte_Read_VeCRDB_P_BPCM_HVPwrMxDchgLT_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMxDchgLT_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S291>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMxDchgLT_SigSts_Value(&tmpRead_13);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S287>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_13) & 3U) != 0U)
    {
        /* Transition: '<S291>:100' */
        /* Transition: '<S291>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S291>:104' */
        /*  MM */
        if ((((uint32)tmpRead_13) & 4U) != 0U)
        {
            /* Transition: '<S291>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S291>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S291>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVPwrMxDchgLT_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S228>/Tmot' */
                /* FunctionCaller: '<S294>/Function Caller' */
                /* Event: '<S291>:40' */
                Rte_Call_TmotBPCR_b_HV_BatDschrgPwrET_TmotBPCR_b_HV_BatDschrgPwrET
                    ();

                /* End of Outputs for SubSystem: '<S228>/Tmot' */
                /* Transition: '<S291>:115' */
                /* Transition: '<S291>:114' */
            }
        }
        else
        {
            /* Transition: '<S291>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ol) == 133)
            {
                /* Transition: '<S291>:95' */
                /* Transition: '<S291>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVPwrMxDchgLT_CallStatus = 4U;

                /* Transition: '<S291>:114' */
            }
            else
            {
                /* Transition: '<S291>:120' */
                if ((((uint32)tmpRead_13) & 8U) != 0U)
                {
                    /* Transition: '<S291>:122' */
                    /* Transition: '<S291>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S291>:126' */
                }
                else
                {
                    /* Transition: '<S291>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S291>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVPwrMxDchgLT_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S228>/Poke' */
                /* FunctionCaller: '<S293>/Function Caller' */
                /* Event: '<S291>:38' */
                Rte_Call_PokeBPCR_P_HV_BatDschrgPwrET_PokeBPCR_P_HV_BatDschrgPwrET
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_e, FA_out_ih);

                /* End of Outputs for SubSystem: '<S228>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S291>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVPwrMxDchgLT_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S228>/Fsft' */
        /* FunctionCaller: '<S292>/Function Caller' */
        /* Event: '<S291>:39' */
        Rte_Call_FsftBPCR_b_HV_BatDschrgPwrET_FsftBPCR_b_HV_BatDschrgPwrET();

        /* End of Outputs for SubSystem: '<S228>/Fsft' */
        /* Transition: '<S291>:113' */
        /* Transition: '<S291>:115' */
        /* Transition: '<S291>:114' */
    }

    /* End of Chart: '<S287>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVPwrMxDchgMT_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVPwrMxDchgMT_ErrSts'
     */
    /* Transition: '<S291>:107' */
    rtb_TmpSignalConversionAtVeC_lk = Rte_Read_VeCRDB_P_BPCM_HVPwrMxDchgMT_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMxDchgMT_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S299>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMxDchgMT_SigSts_Value(&tmpRead_14);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S295>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_14) & 3U) != 0U)
    {
        /* Transition: '<S299>:100' */
        /* Transition: '<S299>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S299>:104' */
        /*  MM */
        if ((((uint32)tmpRead_14) & 4U) != 0U)
        {
            /* Transition: '<S299>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S299>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S299>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVPwrMxDchgMT_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S229>/Tmot' */
                /* FunctionCaller: '<S302>/Function Caller' */
                /* Event: '<S299>:40' */
                Rte_Call_TmotBPCR_b_HV_BatDschrgPwrLT_TmotBPCR_b_HV_BatDschrgPwrLT
                    ();

                /* End of Outputs for SubSystem: '<S229>/Tmot' */
                /* Transition: '<S299>:115' */
                /* Transition: '<S299>:114' */
            }
        }
        else
        {
            /* Transition: '<S299>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lk) == 133)
            {
                /* Transition: '<S299>:95' */
                /* Transition: '<S299>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVPwrMxDchgMT_CallStatus = 4U;

                /* Transition: '<S299>:114' */
            }
            else
            {
                /* Transition: '<S299>:120' */
                if ((((uint32)tmpRead_14) & 8U) != 0U)
                {
                    /* Transition: '<S299>:122' */
                    /* Transition: '<S299>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S299>:126' */
                }
                else
                {
                    /* Transition: '<S299>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S299>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVPwrMxDchgMT_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S229>/Poke' */
                /* FunctionCaller: '<S301>/Function Caller' */
                /* Event: '<S299>:38' */
                Rte_Call_PokeBPCR_P_HV_BatDschrgPwrLT_PokeBPCR_P_HV_BatDschrgPwrLT
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_d, FA_out_ih);

                /* End of Outputs for SubSystem: '<S229>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S299>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVPwrMxDchgMT_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S229>/Fsft' */
        /* FunctionCaller: '<S300>/Function Caller' */
        /* Event: '<S299>:39' */
        Rte_Call_FsftBPCR_b_HV_BatDschrgPwrLT_FsftBPCR_b_HV_BatDschrgPwrLT();

        /* End of Outputs for SubSystem: '<S229>/Fsft' */
        /* Transition: '<S299>:113' */
        /* Transition: '<S299>:115' */
        /* Transition: '<S299>:114' */
    }

    /* End of Chart: '<S295>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVPwrMxDchgST_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVPwrMxDchgST_ErrSts'
     */
    /* Transition: '<S299>:107' */
    rtb_TmpSignalConversionAtVeC_gj = Rte_Read_VeCRDB_P_BPCM_HVPwrMxDchgST_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMxDchgST_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S307>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMxDchgST_SigSts_Value(&tmpRead_15);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S303>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_15) & 3U) != 0U)
    {
        /* Transition: '<S307>:100' */
        /* Transition: '<S307>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S307>:104' */
        /*  MM */
        if ((((uint32)tmpRead_15) & 4U) != 0U)
        {
            /* Transition: '<S307>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S307>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S307>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVPwrMxDchgST_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S230>/Tmot' */
                /* FunctionCaller: '<S310>/Function Caller' */
                /* Event: '<S307>:40' */
                Rte_Call_TmotBPCR_b_HV_BatDschrgPwrST_TmotBPCR_b_HV_BatDschrgPwrST
                    ();

                /* End of Outputs for SubSystem: '<S230>/Tmot' */
                /* Transition: '<S307>:115' */
                /* Transition: '<S307>:114' */
            }
        }
        else
        {
            /* Transition: '<S307>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_gj) == 133)
            {
                /* Transition: '<S307>:95' */
                /* Transition: '<S307>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVPwrMxDchgST_CallStatus = 4U;

                /* Transition: '<S307>:114' */
            }
            else
            {
                /* Transition: '<S307>:120' */
                if ((((uint32)tmpRead_15) & 8U) != 0U)
                {
                    /* Transition: '<S307>:122' */
                    /* Transition: '<S307>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S307>:126' */
                }
                else
                {
                    /* Transition: '<S307>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S307>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVPwrMxDchgST_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S230>/Poke' */
                /* FunctionCaller: '<S309>/Function Caller' */
                /* Event: '<S307>:38' */
                Rte_Call_PokeBPCR_P_HV_BatDschrgPwrST_PokeBPCR_P_HV_BatDschrgPwrST
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_b, FA_out_ih);

                /* End of Outputs for SubSystem: '<S230>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S307>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVPwrMxDchgST_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S230>/Fsft' */
        /* FunctionCaller: '<S308>/Function Caller' */
        /* Event: '<S307>:39' */
        Rte_Call_FsftBPCR_b_HV_BatDschrgPwrST_FsftBPCR_b_HV_BatDschrgPwrST();

        /* End of Outputs for SubSystem: '<S230>/Fsft' */
        /* Transition: '<S307>:113' */
        /* Transition: '<S307>:115' */
        /* Transition: '<S307>:114' */
    }

    /* End of Chart: '<S303>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMInterlockSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMInterlockSts_ErrSts'
     */
    /* Transition: '<S307>:107' */
    rtb_TmpSignalConversionAtVeC_dy = Rte_Read_VeCRDB_y_BPCMInterlockSts_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCMInterlockSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S343>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMInterlockSts_SigSts_Value(&tmpRead_16);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S340>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_16) & 3U) != 0U)
    {
        /* Transition: '<S343>:100' */
        /* Transition: '<S343>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S343>:104' */
        /*  MM */
        if ((((uint32)tmpRead_16) & 4U) != 0U)
        {
            /* Transition: '<S343>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S343>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S343>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMInterlockSts_CallStatus = 3U;

                /* Event: '<S343>:40' */
                /* Transition: '<S343>:115' */
                /* Transition: '<S343>:114' */
            }
        }
        else
        {
            /* Transition: '<S343>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dy) == 133)
            {
                /* Transition: '<S343>:95' */
                /* Transition: '<S343>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMInterlockSts_CallStatus = 4U;

                /* Transition: '<S343>:114' */
            }
            else
            {
                /* Transition: '<S343>:120' */
                /* Transition: '<S343>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMInterlockSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S311>/Poke' */
                /* FunctionCaller: '<S345>/Function Caller' */
                /* Event: '<S343>:38' */
                Rte_Call_PokeBPCR_e_HV_BatInrlkStat_PokeBPCR_e_HV_BatInrlkStat
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_i);

                /* End of Outputs for SubSystem: '<S311>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S343>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMInterlockSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S311>/Fsft' */
        /* FunctionCaller: '<S344>/Function Caller' */
        /* Event: '<S343>:39' */
        Rte_Call_FsftBPCR_e_HV_BatInrlkStat_FsftBPCR_e_HV_BatInrlkStat();

        /* End of Outputs for SubSystem: '<S311>/Fsft' */
        /* Transition: '<S343>:113' */
        /* Transition: '<S343>:115' */
        /* Transition: '<S343>:114' */
    }

    /* End of Chart: '<S340>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_DCCntctrMTOW_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_DCCntctrMTOW_ErrSts'
     */
    /* Transition: '<S343>:107' */
    rtb_TmpSignalConversionAtVeC_k1 = Rte_Read_VeCRDB_b_BPCM_DCCntctrMTOW_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__pk);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_DCCntctrMTOW_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S348>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_DCCntctrMTOW_SigSts_Value(&tmpRead_17);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S346>/Chart' */
    if ((((uint32)tmpRead_17) & 3U) != 0U)
    {
        /* Transition: '<S348>:100' */
        /* Transition: '<S348>:103' */
        /* Transition: '<S348>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_DCCntctrMTOW_CallStatus = 2U;

        /* Event: '<S348>:39' */
        /* Transition: '<S348>:113' */
        /* Transition: '<S348>:115' */
        /* Transition: '<S348>:114' */
    }
    else
    {
        /* Transition: '<S348>:104' */
        /*  MM */
        if ((((uint32)tmpRead_17) & 4U) != 0U)
        {
            /* Transition: '<S348>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S348>:88' */
                /* Transition: '<S348>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_DCCntctrMTOW_CallStatus = 2U;

                /* Event: '<S348>:39' */
                /* Transition: '<S348>:113' */
                /* Transition: '<S348>:115' */
                /* Transition: '<S348>:114' */
            }
            else
            {
                /* Transition: '<S348>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_DCCntctrMTOW_CallStatus = 3U;

                /* Event: '<S348>:40' */
                /* Transition: '<S348>:115' */
                /* Transition: '<S348>:114' */
            }
        }
        else
        {
            /* Transition: '<S348>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_k1) == 133)
            {
                /* Transition: '<S348>:95' */
                /* Transition: '<S348>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_DCCntctrMTOW_CallStatus = 4U;

                /* Transition: '<S348>:114' */
            }
            else
            {
                /* Transition: '<S348>:120' */
                /* Transition: '<S348>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_DCCntctrMTOW_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S312>/Poke' */
                /* FunctionCaller: '<S349>/Function Caller' */
                /* Event: '<S348>:38' */
                Rte_Call_PokeBPCR_b_HVBat_DC_CntctrReq_PokeBPCR_b_HVBat_DC_CntctrReq
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__pk);

                /* End of Outputs for SubSystem: '<S312>/Poke' */
            }
        }
    }

    /* End of Chart: '<S346>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_DCCntctrSTOW_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_DCCntctrSTOW_ErrSts'
     */
    /* Transition: '<S348>:107' */
    rtb_TmpSignalConversionAtVeC_ej = Rte_Read_VeCRDB_b_BPCM_DCCntctrSTOW_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_DCCntctrSTOW_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S352>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_DCCntctrSTOW_SigSts_Value(&tmpRead_18);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S350>/Chart' */
    if ((((uint32)tmpRead_18) & 3U) != 0U)
    {
        /* Transition: '<S352>:100' */
        /* Transition: '<S352>:103' */
        /* Transition: '<S352>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_DCCntctrSTOW_CallStatus = 2U;

        /* Event: '<S352>:39' */
        /* Transition: '<S352>:113' */
        /* Transition: '<S352>:115' */
        /* Transition: '<S352>:114' */
    }
    else
    {
        /* Transition: '<S352>:104' */
        /*  MM */
        if ((((uint32)tmpRead_18) & 4U) != 0U)
        {
            /* Transition: '<S352>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S352>:88' */
                /* Transition: '<S352>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_DCCntctrSTOW_CallStatus = 2U;

                /* Event: '<S352>:39' */
                /* Transition: '<S352>:113' */
                /* Transition: '<S352>:115' */
                /* Transition: '<S352>:114' */
            }
            else
            {
                /* Transition: '<S352>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_DCCntctrSTOW_CallStatus = 3U;

                /* Event: '<S352>:40' */
                /* Transition: '<S352>:115' */
                /* Transition: '<S352>:114' */
            }
        }
        else
        {
            /* Transition: '<S352>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ej) == 133)
            {
                /* Transition: '<S352>:95' */
                /* Transition: '<S352>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_DCCntctrSTOW_CallStatus = 4U;

                /* Transition: '<S352>:114' */
            }
            else
            {
                /* Transition: '<S352>:120' */
                /* Transition: '<S352>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_DCCntctrSTOW_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S313>/Poke' */
                /* FunctionCaller: '<S353>/Function Caller' */
                /* Event: '<S352>:38' */
                Rte_Call_PokeBPCR_b_HVBat_DC_CntctrOpn_PokeBPCR_b_HVBat_DC_CntctrOpn
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_g);

                /* End of Outputs for SubSystem: '<S313>/Poke' */
            }
        }
    }

    /* End of Chart: '<S350>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_BalancgMd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_BalancgMd_ErrSts'
     */
    /* Transition: '<S352>:107' */
    rtb_TmpSignalConversionAtVeC_cv = Rte_Read_VeCRDB_y_BPCM_HV_BalancgMd_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__ly);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_BalancgMd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S356>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_BalancgMd_SigSts_Value(&tmpRead_19);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S354>/Chart' */
    if ((((uint32)tmpRead_19) & 3U) != 0U)
    {
        /* Transition: '<S356>:100' */
        /* Transition: '<S356>:103' */
        /* Transition: '<S356>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_BalancgMd_CallStatus = 2U;

        /* Event: '<S356>:39' */
        /* Transition: '<S356>:113' */
        /* Transition: '<S356>:115' */
        /* Transition: '<S356>:114' */
    }
    else
    {
        /* Transition: '<S356>:104' */
        /*  MM */
        if ((((uint32)tmpRead_19) & 4U) != 0U)
        {
            /* Transition: '<S356>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S356>:88' */
                /* Transition: '<S356>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HV_BalancgMd_CallStatus = 2U;

                /* Event: '<S356>:39' */
                /* Transition: '<S356>:113' */
                /* Transition: '<S356>:115' */
                /* Transition: '<S356>:114' */
            }
            else
            {
                /* Transition: '<S356>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_BalancgMd_CallStatus = 3U;

                /* Event: '<S356>:40' */
                /* Transition: '<S356>:115' */
                /* Transition: '<S356>:114' */
            }
        }
        else
        {
            /* Transition: '<S356>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_cv) == 133)
            {
                /* Transition: '<S356>:95' */
                /* Transition: '<S356>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_BalancgMd_CallStatus = 4U;

                /* Transition: '<S356>:114' */
            }
            else
            {
                /* Transition: '<S356>:120' */
                /* Transition: '<S356>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_BalancgMd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S314>/Poke' */
                /* FunctionCaller: '<S357>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S357>/Data Type Conversion'
                 */
                /* Event: '<S356>:38' */
                Rte_Call_PokeBPCR_b_BalMd_PokeBPCR_b_BalMd((((sint32)
                    CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__ly) != 0) ? 1 :
                    0);

                /* End of Outputs for SubSystem: '<S314>/Poke' */
            }
        }
    }

    /* End of Chart: '<S354>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_BattIISts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_BattIISts_ErrSts'
     */
    /* Transition: '<S356>:107' */
    rtb_TmpSignalConversionAtVeC_i2 = Rte_Read_VeCRDB_y_BPCM_HV_BattIISts_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__pd);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_BattIISts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S361>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_BattIISts_SigSts_Value(&tmpRead_1a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S358>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1a) & 3U) != 0U)
    {
        /* Transition: '<S361>:100' */
        /* Transition: '<S361>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S361>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1a) & 4U) != 0U)
        {
            /* Transition: '<S361>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S361>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S361>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_BattIISts_CallStatus = 3U;

                /* Event: '<S361>:40' */
                /* Transition: '<S361>:115' */
                /* Transition: '<S361>:114' */
            }
        }
        else
        {
            /* Transition: '<S361>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_i2) == 133)
            {
                /* Transition: '<S361>:95' */
                /* Transition: '<S361>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_BattIISts_CallStatus = 4U;

                /* Transition: '<S361>:114' */
            }
            else
            {
                /* Transition: '<S361>:120' */
                /* Transition: '<S361>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_BattIISts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S315>/Poke' */
                /* FunctionCaller: '<S363>/Function Caller' */
                /* Event: '<S361>:38' */
                Rte_Call_PokeBPCR_e_HVBatIntrlkIntrnlStat_PokeBPCR_e_HVBatIntrlkIntrnlStat
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__pd);

                /* End of Outputs for SubSystem: '<S315>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S361>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_BattIISts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S315>/Fsft' */
        /* FunctionCaller: '<S362>/Function Caller' */
        /* Event: '<S361>:39' */
        Rte_Call_FsftBPCR_e_HVBatIntrlkIntrnlStat_FsftBPCR_e_HVBatIntrlkIntrnlStat
            ();

        /* End of Outputs for SubSystem: '<S315>/Fsft' */
        /* Transition: '<S361>:113' */
        /* Transition: '<S361>:115' */
        /* Transition: '<S361>:114' */
    }

    /* End of Chart: '<S358>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVBattGFDSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVBattGFDSts_ErrSts'
     */
    /* Transition: '<S361>:107' */
    rtb_TmpSignalConversionAtVeC_lj = Rte_Read_VeCRDB_y_BPCM_HVBattGFDSts_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__a3);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVBattGFDSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S367>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVBattGFDSts_SigSts_Value(&tmpRead_1b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S364>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1b) & 3U) != 0U)
    {
        /* Transition: '<S367>:100' */
        /* Transition: '<S367>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S367>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1b) & 4U) != 0U)
        {
            /* Transition: '<S367>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S367>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S367>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVBattGFDSts_CallStatus = 3U;

                /* Event: '<S367>:40' */
                /* Transition: '<S367>:115' */
                /* Transition: '<S367>:114' */
            }
        }
        else
        {
            /* Transition: '<S367>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lj) == 133)
            {
                /* Transition: '<S367>:95' */
                /* Transition: '<S367>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVBattGFDSts_CallStatus = 4U;

                /* Transition: '<S367>:114' */
            }
            else
            {
                /* Transition: '<S367>:120' */
                /* Transition: '<S367>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVBattGFDSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S316>/Poke' */
                /* FunctionCaller: '<S369>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S369>/Data Type Conversion'
                 */
                /* Event: '<S367>:38' */
                Rte_Call_PokeBPCR_e_HV_BatIsolStat_PokeBPCR_e_HV_BatIsolStat
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__a3);

                /* FunctionCaller: '<S370>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S370>/Data Type Conversion'
                 */
                Rte_Call_PokeBPCR_i_DC_Isolation_Sts_M182_PokeBPCR_i_DC_Isolation_Sts_M182
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__a3);

                /* End of Outputs for SubSystem: '<S316>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S367>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVBattGFDSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S316>/Fsft' */
        /* FunctionCaller: '<S368>/Function Caller' */
        /* Event: '<S367>:39' */
        Rte_Call_FsftBPCR_e_HV_BatIsolStat_FsftBPCR_e_HV_BatIsolStat();

        /* End of Outputs for SubSystem: '<S316>/Fsft' */
        /* Transition: '<S367>:113' */
        /* Transition: '<S367>:115' */
        /* Transition: '<S367>:114' */
    }

    /* End of Chart: '<S364>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_Capacity_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_Capacity_ErrSts'
     */
    /* Transition: '<S367>:107' */
    rtb_TmpSignalConversionAtVeC_is =
        Rte_Read_VeCRDB_qAhr_BPCM_HV_Capacity_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_qAh);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_Capacity_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S374>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Capacity_SigSts_Value(&tmpRead_1c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S371>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1c) & 3U) != 0U)
    {
        /* Transition: '<S374>:100' */
        /* Transition: '<S374>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S374>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1c) & 4U) != 0U)
        {
            /* Transition: '<S374>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S374>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S374>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_Capacity_CallStatus = 3U;

                /* Event: '<S374>:40' */
                /* Transition: '<S374>:115' */
                /* Transition: '<S374>:114' */
            }
        }
        else
        {
            /* Transition: '<S374>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_is) == 133)
            {
                /* Transition: '<S374>:95' */
                /* Transition: '<S374>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_Capacity_CallStatus = 4U;

                /* Transition: '<S374>:114' */
            }
            else
            {
                /* Transition: '<S374>:120' */
                if ((((uint32)tmpRead_1c) & 8U) != 0U)
                {
                    /* Transition: '<S374>:122' */
                    /* Transition: '<S374>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S374>:126' */
                }
                else
                {
                    /* Transition: '<S374>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S374>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_Capacity_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S317>/Poke' */
                /* FunctionCaller: '<S376>/Function Caller' */
                /* Event: '<S374>:38' */
                Rte_Call_PokeBPCR_q_FullAmpHrCap_PokeBPCR_q_FullAmpHrCap
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_qAh, FA_out_ih);

                /* End of Outputs for SubSystem: '<S317>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S374>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_Capacity_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S317>/Fsft' */
        /* FunctionCaller: '<S375>/Function Caller' */
        /* Event: '<S374>:39' */
        Rte_Call_FsftBPCR_q_FullAmpHrCap_FsftBPCR_q_FullAmpHrCap();

        /* End of Outputs for SubSystem: '<S317>/Fsft' */
        /* Transition: '<S374>:113' */
        /* Transition: '<S374>:115' */
        /* Transition: '<S374>:114' */
    }

    /* End of Chart: '<S371>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_ChrBusSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_ChrBusSts_ErrSts'
     */
    /* Transition: '<S374>:107' */
    rtb_TmpSignalConversionAtVeC_kr = Rte_Read_VeCRDB_y_BPCM_HV_ChrBusSts_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__ij);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_ChrBusSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S380>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_ChrBusSts_SigSts_Value(&tmpRead_1d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S377>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1d) & 3U) != 0U)
    {
        /* Transition: '<S380>:100' */
        /* Transition: '<S380>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S380>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1d) & 4U) != 0U)
        {
            /* Transition: '<S380>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S380>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S380>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_ChrBusSts_CallStatus = 3U;

                /* Event: '<S380>:40' */
                /* Transition: '<S380>:115' */
                /* Transition: '<S380>:114' */
            }
        }
        else
        {
            /* Transition: '<S380>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_kr) == 133)
            {
                /* Transition: '<S380>:95' */
                /* Transition: '<S380>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_ChrBusSts_CallStatus = 4U;

                /* Transition: '<S380>:114' */
            }
            else
            {
                /* Transition: '<S380>:120' */
                if ((((uint32)tmpRead_1d) & 8U) != 0U)
                {
                    /* Transition: '<S380>:122' */
                    /* Transition: '<S380>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S380>:126' */
                }
                else
                {
                    /* Transition: '<S380>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S380>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_ChrBusSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S318>/Poke' */
                /* FunctionCaller: '<S382>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S382>/Data Type Conversion'
                 */
                /* Event: '<S380>:38' */
                Rte_Call_PokeBPCR_e_HVBat_DC_CntctrStat_PokeBPCR_e_HVBat_DC_CntctrStat
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__ij,
                     FA_out_ih);

                /* End of Outputs for SubSystem: '<S318>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S380>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_ChrBusSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S318>/Fsft' */
        /* FunctionCaller: '<S381>/Function Caller' */
        /* Event: '<S380>:39' */
        Rte_Call_FsftBPCR_b_HVBat_DC_CntctrStat_FsftBPCR_b_HVBat_DC_CntctrStat();

        /* End of Outputs for SubSystem: '<S318>/Fsft' */
        /* Transition: '<S380>:113' */
        /* Transition: '<S380>:115' */
        /* Transition: '<S380>:114' */
    }

    /* End of Chart: '<S377>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_Current_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_Current_ErrSts'
     */
    /* Transition: '<S380>:107' */
    rtb_TmpSignalConversionAtVeC_hc = Rte_Read_VeCRDB_I_BPCM_HV_Current_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__fr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_Current_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S386>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Current_SigSts_Value(&tmpRead_1e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S383>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1e) & 3U) != 0U)
    {
        /* Transition: '<S386>:100' */
        /* Transition: '<S386>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S386>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1e) & 4U) != 0U)
        {
            /* Transition: '<S386>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S386>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S386>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_Current_CallStatus = 3U;

                /* Event: '<S386>:40' */
                /* Transition: '<S386>:115' */
                /* Transition: '<S386>:114' */
            }
        }
        else
        {
            /* Transition: '<S386>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hc) == 133)
            {
                /* Transition: '<S386>:95' */
                /* Transition: '<S386>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_Current_CallStatus = 4U;

                /* Transition: '<S386>:114' */
            }
            else
            {
                /* Transition: '<S386>:120' */
                if ((((uint32)tmpRead_1e) & 8U) != 0U)
                {
                    /* Transition: '<S386>:122' */
                    /* Transition: '<S386>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S386>:126' */
                }
                else
                {
                    /* Transition: '<S386>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S386>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_Current_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S319>/Poke' */
                /* FunctionCaller: '<S388>/Function Caller' */
                /* Event: '<S386>:38' */
                Rte_Call_PokeBPCR_I_HV_BatCurr_PokeBPCR_I_HV_BatCurr
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__fr, FA_out_ih);

                /* End of Outputs for SubSystem: '<S319>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S386>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_Current_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S319>/Fsft' */
        /* FunctionCaller: '<S387>/Function Caller' */
        /* Event: '<S386>:39' */
        Rte_Call_FsftBPCR_I_HV_BatCurr_FsftBPCR_I_HV_BatCurr();

        /* End of Outputs for SubSystem: '<S319>/Fsft' */
        /* Transition: '<S386>:113' */
        /* Transition: '<S386>:115' */
        /* Transition: '<S386>:114' */
    }

    /* End of Chart: '<S383>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_DCFC_ISts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_DCFC_ISts_ErrSts'
     */
    /* Transition: '<S386>:107' */
    rtb_TmpSignalConversionAtVeCR_a = Rte_Read_VeCRDB_y_BPCM_HV_DCFC_ISts_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_DCFC_ISts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S392>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_DCFC_ISts_SigSts_Value(&tmpRead_1f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S389>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1f) & 3U) != 0U)
    {
        /* Transition: '<S392>:100' */
        /* Transition: '<S392>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S392>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1f) & 4U) != 0U)
        {
            /* Transition: '<S392>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S392>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S392>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_DCFC_ISts_CallStatus = 3U;

                /* Event: '<S392>:40' */
                /* Transition: '<S392>:115' */
                /* Transition: '<S392>:114' */
            }
        }
        else
        {
            /* Transition: '<S392>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_a) == 133)
            {
                /* Transition: '<S392>:95' */
                /* Transition: '<S392>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_DCFC_ISts_CallStatus = 4U;

                /* Transition: '<S392>:114' */
            }
            else
            {
                /* Transition: '<S392>:120' */
                /* Transition: '<S392>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_DCFC_ISts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S320>/Poke' */
                /* FunctionCaller: '<S394>/Function Caller' */
                /* Event: '<S392>:38' */
                Rte_Call_PokeBPCR_e_DCIsolSts_PokeBPCR_e_DCIsolSts
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_c);

                /* End of Outputs for SubSystem: '<S320>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S392>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_DCFC_ISts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S320>/Fsft' */
        /* FunctionCaller: '<S393>/Function Caller' */
        /* Event: '<S392>:39' */
        Rte_Call_FsftBPCR_e_DCIsolSts_FsftBPCR_e_DCIsolSts();

        /* End of Outputs for SubSystem: '<S320>/Fsft' */
        /* Transition: '<S392>:113' */
        /* Transition: '<S392>:115' */
        /* Transition: '<S392>:114' */
    }

    /* End of Chart: '<S389>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_InletTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_InletTemp_ErrSts'
     */
    /* Transition: '<S392>:107' */
    rtb_TmpSignalConversionAtVeCR_m = Rte_Read_VeCRDB_T_BPCM_HV_InletTemp_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_InletTemp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S398>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_InletTemp_SigSts_Value(&tmpRead_1g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S395>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1g) & 3U) != 0U)
    {
        /* Transition: '<S398>:100' */
        /* Transition: '<S398>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S398>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1g) & 4U) != 0U)
        {
            /* Transition: '<S398>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S398>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S398>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_InletTemp_CallStatus = 3U;

                /* Event: '<S398>:40' */
                /* Transition: '<S398>:115' */
                /* Transition: '<S398>:114' */
            }
        }
        else
        {
            /* Transition: '<S398>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_m) == 133)
            {
                /* Transition: '<S398>:95' */
                /* Transition: '<S398>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_InletTemp_CallStatus = 4U;

                /* Transition: '<S398>:114' */
            }
            else
            {
                /* Transition: '<S398>:120' */
                if ((((uint32)tmpRead_1g) & 8U) != 0U)
                {
                    /* Transition: '<S398>:122' */
                    /* Transition: '<S398>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S398>:126' */
                }
                else
                {
                    /* Transition: '<S398>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S398>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_InletTemp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S321>/Poke' */
                /* FunctionCaller: '<S400>/Function Caller' */
                /* Event: '<S398>:38' */
                Rte_Call_PokeTRIR_T_HV_BatClntTmp_In_PokeTRIR_T_HV_BatClntTmp_In
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_n, FA_out_ih);

                /* End of Outputs for SubSystem: '<S321>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S398>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_InletTemp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S321>/Fsft' */
        /* FunctionCaller: '<S399>/Function Caller' */
        /* Event: '<S398>:39' */
        Rte_Call_FsftTRIR_T_HV_BatClntTmp_In_FsftTRIR_T_HV_BatClntTmp_In();

        /* End of Outputs for SubSystem: '<S321>/Fsft' */
        /* Transition: '<S398>:113' */
        /* Transition: '<S398>:115' */
        /* Transition: '<S398>:114' */
    }

    /* End of Chart: '<S395>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVOutletTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVOutletTemp_ErrSts'
     */
    /* Transition: '<S398>:107' */
    rtb_TmpSignalConversionAtVeC_fq = Rte_Read_VeCRDB_T_BPCM_HVOutletTemp_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVOutletTemp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S404>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVOutletTemp_SigSts_Value(&tmpRead_1h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S401>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1h) & 3U) != 0U)
    {
        /* Transition: '<S404>:100' */
        /* Transition: '<S404>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S404>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1h) & 4U) != 0U)
        {
            /* Transition: '<S404>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S404>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S404>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVOutletTemp_CallStatus = 3U;

                /* Event: '<S404>:40' */
                /* Transition: '<S404>:115' */
                /* Transition: '<S404>:114' */
            }
        }
        else
        {
            /* Transition: '<S404>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_fq) == 133)
            {
                /* Transition: '<S404>:95' */
                /* Transition: '<S404>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVOutletTemp_CallStatus = 4U;

                /* Transition: '<S404>:114' */
            }
            else
            {
                /* Transition: '<S404>:120' */
                if ((((uint32)tmpRead_1h) & 8U) != 0U)
                {
                    /* Transition: '<S404>:122' */
                    /* Transition: '<S404>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S404>:126' */
                }
                else
                {
                    /* Transition: '<S404>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S404>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVOutletTemp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S322>/Poke' */
                /* FunctionCaller: '<S406>/Function Caller' */
                /* Event: '<S404>:38' */
                Rte_Call_PokeTRIR_T_HV_BatClntTmp_Out_PokeTRIR_T_HV_BatClntTmp_Out
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_p, FA_out_ih);

                /* End of Outputs for SubSystem: '<S322>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S404>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVOutletTemp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S322>/Fsft' */
        /* FunctionCaller: '<S405>/Function Caller' */
        /* Event: '<S404>:39' */
        Rte_Call_FsftTRIR_T_HV_BatClntTmpOut_FsftTRIR_T_HV_BatClntTmpOut();

        /* End of Outputs for SubSystem: '<S322>/Fsft' */
        /* Transition: '<S404>:113' */
        /* Transition: '<S404>:115' */
        /* Transition: '<S404>:114' */
    }

    /* End of Chart: '<S401>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_SOC_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_SOC_ErrSts'
     */
    /* Transition: '<S404>:107' */
    rtb_TmpSignalConversionAtVeC_de = Rte_Read_VeCRDB_Pct_BPCM_HV_SOC_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_SOC_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S411>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_SOC_SigSts_Value(&tmpRead_1i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S407>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1i) & 3U) != 0U)
    {
        /* Transition: '<S411>:100' */
        /* Transition: '<S411>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S411>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1i) & 4U) != 0U)
        {
            /* Transition: '<S411>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S411>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S411>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_SOC_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S323>/Tmot' */
                /* FunctionCaller: '<S414>/Function Caller' */
                /* Event: '<S411>:40' */
                Rte_Call_TmotBPCR_b_HV_BatPackSOC_TmotBPCR_b_HV_BatPackSOC();

                /* End of Outputs for SubSystem: '<S323>/Tmot' */
                /* Transition: '<S411>:115' */
                /* Transition: '<S411>:114' */
            }
        }
        else
        {
            /* Transition: '<S411>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_de) == 133)
            {
                /* Transition: '<S411>:95' */
                /* Transition: '<S411>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_SOC_CallStatus = 4U;

                /* Transition: '<S411>:114' */
            }
            else
            {
                /* Transition: '<S411>:120' */
                if ((((uint32)tmpRead_1i) & 8U) != 0U)
                {
                    /* Transition: '<S411>:122' */
                    /* Transition: '<S411>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S411>:126' */
                }
                else
                {
                    /* Transition: '<S411>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S411>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_SOC_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S323>/Poke' */
                /* FunctionCaller: '<S413>/Function Caller' */
                /* Event: '<S411>:38' */
                Rte_Call_PokeBPCR_Pct_HV_BatPackSOC_PokeBPCR_Pct_HV_BatPackSOC
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_i, FA_out_ih);

                /* End of Outputs for SubSystem: '<S323>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S411>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_SOC_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S323>/Fsft' */
        /* FunctionCaller: '<S412>/Function Caller' */
        /* Event: '<S411>:39' */
        Rte_Call_FsftBPCR_b_HV_BatPackSOC_FsftBPCR_b_HV_BatPackSOC();

        /* End of Outputs for SubSystem: '<S323>/Fsft' */
        /* Transition: '<S411>:113' */
        /* Transition: '<S411>:115' */
        /* Transition: '<S411>:114' */
    }

    /* End of Chart: '<S407>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_SOH_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_SOH_ErrSts'
     */
    /* Transition: '<S411>:107' */
    rtb_TmpSignalConversionAtVeC_p1 = Rte_Read_VeCRDB_y_BPCM_HV_SOH_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_SOH_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S417>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_SOH_SigSts_Value(&tmpRead_1j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S415>/Chart' */
    if ((((uint32)tmpRead_1j) & 3U) != 0U)
    {
        /* Transition: '<S417>:100' */
        /* Transition: '<S417>:103' */
        /* Transition: '<S417>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_SOH_CallStatus = 2U;

        /* Event: '<S417>:39' */
        /* Transition: '<S417>:113' */
        /* Transition: '<S417>:115' */
        /* Transition: '<S417>:114' */
    }
    else
    {
        /* Transition: '<S417>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1j) & 4U) != 0U)
        {
            /* Transition: '<S417>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S417>:88' */
                /* Transition: '<S417>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HV_SOH_CallStatus = 2U;

                /* Event: '<S417>:39' */
                /* Transition: '<S417>:113' */
                /* Transition: '<S417>:115' */
                /* Transition: '<S417>:114' */
            }
            else
            {
                /* Transition: '<S417>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_SOH_CallStatus = 3U;

                /* Event: '<S417>:40' */
                /* Transition: '<S417>:115' */
                /* Transition: '<S417>:114' */
            }
        }
        else
        {
            /* Transition: '<S417>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_p1) == 133)
            {
                /* Transition: '<S417>:95' */
                /* Transition: '<S417>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_SOH_CallStatus = 4U;

                /* Transition: '<S417>:114' */
            }
            else
            {
                /* Transition: '<S417>:120' */
                /* Transition: '<S417>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_SOH_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S324>/Poke' */
                /* FunctionCaller: '<S418>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S418>/Data Type Conversion'
                 */
                /* Event: '<S417>:38' */
                Rte_Call_PokeBPCR_Pct_HVBatSOH_PokeBPCR_Pct_HVBatSOH((float32)
                    CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_m);

                /* End of Outputs for SubSystem: '<S324>/Poke' */
            }
        }
    }

    /* End of Chart: '<S415>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_SOH_Low_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_SOH_Low_ErrSts'
     */
    /* Transition: '<S417>:107' */
    rtb_TmpSignalConversionAtVeC_i3 = Rte_Read_VeCRDB_y_BPCM_HV_SOH_Low_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__c0);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_SOH_Low_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S421>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_SOH_Low_SigSts_Value(&tmpRead_1k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S419>/Chart' */
    if ((((uint32)tmpRead_1k) & 3U) != 0U)
    {
        /* Transition: '<S421>:100' */
        /* Transition: '<S421>:103' */
        /* Transition: '<S421>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_SOH_Low_CallStatus = 2U;

        /* Event: '<S421>:39' */
        /* Transition: '<S421>:113' */
        /* Transition: '<S421>:115' */
        /* Transition: '<S421>:114' */
    }
    else
    {
        /* Transition: '<S421>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1k) & 4U) != 0U)
        {
            /* Transition: '<S421>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S421>:88' */
                /* Transition: '<S421>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HV_SOH_Low_CallStatus = 2U;

                /* Event: '<S421>:39' */
                /* Transition: '<S421>:113' */
                /* Transition: '<S421>:115' */
                /* Transition: '<S421>:114' */
            }
            else
            {
                /* Transition: '<S421>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_SOH_Low_CallStatus = 3U;

                /* Event: '<S421>:40' */
                /* Transition: '<S421>:115' */
                /* Transition: '<S421>:114' */
            }
        }
        else
        {
            /* Transition: '<S421>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_i3) == 133)
            {
                /* Transition: '<S421>:95' */
                /* Transition: '<S421>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_SOH_Low_CallStatus = 4U;

                /* Transition: '<S421>:114' */
            }
            else
            {
                /* Transition: '<S421>:120' */
                /* Transition: '<S421>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_SOH_Low_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S325>/Poke' */
                /* FunctionCaller: '<S422>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S422>/Data Type Conversion'
                 */
                /* Event: '<S421>:38' */
                Rte_Call_PokeBPCR_Pct_HVBatSOHLow_PokeBPCR_Pct_HVBatSOHLow
                    ((float32)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__c0);

                /* End of Outputs for SubSystem: '<S325>/Poke' */
            }
        }
    }

    /* End of Chart: '<S419>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_Temp_Avg_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_Temp_Avg_ErrSts'
     */
    /* Transition: '<S421>:107' */
    rtb_TmpSignalConversionAtVeC_cy = Rte_Read_VeCRDB_T_BPCM_HV_Temp_Avg_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_Temp_Avg_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S427>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Temp_Avg_SigSts_Value(&tmpRead_1l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S423>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1l) & 3U) != 0U)
    {
        /* Transition: '<S427>:100' */
        /* Transition: '<S427>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S427>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1l) & 4U) != 0U)
        {
            /* Transition: '<S427>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S427>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S427>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_Temp_Avg_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S326>/Tmot' */
                /* FunctionCaller: '<S430>/Function Caller' */
                /* Event: '<S427>:40' */
                Rte_Call_TmotBPCR_b_HV_BatModTempAvg_TmotBPCR_b_HV_BatModTempAvg
                    ();

                /* End of Outputs for SubSystem: '<S326>/Tmot' */
                /* Transition: '<S427>:115' */
                /* Transition: '<S427>:114' */
            }
        }
        else
        {
            /* Transition: '<S427>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_cy) == 133)
            {
                /* Transition: '<S427>:95' */
                /* Transition: '<S427>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_Temp_Avg_CallStatus = 4U;

                /* Transition: '<S427>:114' */
            }
            else
            {
                /* Transition: '<S427>:120' */
                if ((((uint32)tmpRead_1l) & 8U) != 0U)
                {
                    /* Transition: '<S427>:122' */
                    /* Transition: '<S427>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S427>:126' */
                }
                else
                {
                    /* Transition: '<S427>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S427>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_Temp_Avg_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S326>/Poke' */
                /* FunctionCaller: '<S429>/Function Caller' */
                /* Event: '<S427>:38' */
                Rte_Call_PokeBPCR_T_HV_BatModTempAvg_PokeBPCR_T_HV_BatModTempAvg
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_o, FA_out_ih);

                /* End of Outputs for SubSystem: '<S326>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S427>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_Temp_Avg_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S326>/Fsft' */
        /* FunctionCaller: '<S428>/Function Caller' */
        /* Event: '<S427>:39' */
        Rte_Call_FsftBPCR_b_HV_BatModTempAvg_FsftBPCR_b_HV_BatModTempAvg();

        /* End of Outputs for SubSystem: '<S326>/Fsft' */
        /* Transition: '<S427>:113' */
        /* Transition: '<S427>:115' */
        /* Transition: '<S427>:114' */
    }

    /* End of Chart: '<S423>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_Temp_Max_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_Temp_Max_ErrSts'
     */
    /* Transition: '<S427>:107' */
    rtb_TmpSignalConversionAtVe_dml = Rte_Read_VeCRDB_T_BPCM_HV_Temp_Max_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_Temp_Max_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S435>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Temp_Max_SigSts_Value(&tmpRead_1m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S431>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1m) & 3U) != 0U)
    {
        /* Transition: '<S435>:100' */
        /* Transition: '<S435>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S435>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1m) & 4U) != 0U)
        {
            /* Transition: '<S435>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S435>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S435>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_Temp_Max_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S327>/Tmot' */
                /* FunctionCaller: '<S438>/Function Caller' */
                /* Event: '<S435>:40' */
                Rte_Call_TmotBPCR_b_HV_BatModTempMax_TmotBPCR_b_HV_BatModTempMax
                    ();

                /* End of Outputs for SubSystem: '<S327>/Tmot' */
                /* Transition: '<S435>:115' */
                /* Transition: '<S435>:114' */
            }
        }
        else
        {
            /* Transition: '<S435>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_dml) == 133)
            {
                /* Transition: '<S435>:95' */
                /* Transition: '<S435>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_Temp_Max_CallStatus = 4U;

                /* Transition: '<S435>:114' */
            }
            else
            {
                /* Transition: '<S435>:120' */
                if ((((uint32)tmpRead_1m) & 8U) != 0U)
                {
                    /* Transition: '<S435>:122' */
                    /* Transition: '<S435>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S435>:126' */
                }
                else
                {
                    /* Transition: '<S435>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S435>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_Temp_Max_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S327>/Poke' */
                /* FunctionCaller: '<S437>/Function Caller' */
                /* Event: '<S435>:38' */
                Rte_Call_PokeBPCR_T_HV_BatModTempMax_PokeBPCR_T_HV_BatModTempMax
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_a, FA_out_ih);

                /* End of Outputs for SubSystem: '<S327>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S435>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_Temp_Max_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S327>/Fsft' */
        /* FunctionCaller: '<S436>/Function Caller' */
        /* Event: '<S435>:39' */
        Rte_Call_FsftBPCR_b_HV_BatModTempMax_FsftBPCR_b_HV_BatModTempMax();

        /* End of Outputs for SubSystem: '<S327>/Fsft' */
        /* Transition: '<S435>:113' */
        /* Transition: '<S435>:115' */
        /* Transition: '<S435>:114' */
    }

    /* End of Chart: '<S431>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_Temp_Min_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_Temp_Min_ErrSts'
     */
    /* Transition: '<S435>:107' */
    rtb_TmpSignalConversionAtVeC_b0 = Rte_Read_VeCRDB_T_BPCM_HV_Temp_Min_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__lh);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_Temp_Min_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S443>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Temp_Min_SigSts_Value(&tmpRead_1n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S439>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1n) & 3U) != 0U)
    {
        /* Transition: '<S443>:100' */
        /* Transition: '<S443>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S443>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1n) & 4U) != 0U)
        {
            /* Transition: '<S443>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S443>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S443>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_Temp_Min_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S328>/Tmot' */
                /* FunctionCaller: '<S446>/Function Caller' */
                /* Event: '<S443>:40' */
                Rte_Call_TmotBPCR_b_HV_BatModTempMin_TmotBPCR_b_HV_BatModTempMin
                    ();

                /* End of Outputs for SubSystem: '<S328>/Tmot' */
                /* Transition: '<S443>:115' */
                /* Transition: '<S443>:114' */
            }
        }
        else
        {
            /* Transition: '<S443>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_b0) == 133)
            {
                /* Transition: '<S443>:95' */
                /* Transition: '<S443>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_Temp_Min_CallStatus = 4U;

                /* Transition: '<S443>:114' */
            }
            else
            {
                /* Transition: '<S443>:120' */
                if ((((uint32)tmpRead_1n) & 8U) != 0U)
                {
                    /* Transition: '<S443>:122' */
                    /* Transition: '<S443>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S443>:126' */
                }
                else
                {
                    /* Transition: '<S443>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S443>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_Temp_Min_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S328>/Poke' */
                /* FunctionCaller: '<S445>/Function Caller' */
                /* Event: '<S443>:38' */
                Rte_Call_PokeBPCR_T_HV_BatModTempMin_PokeBPCR_T_HV_BatModTempMin
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__lh, FA_out_ih);

                /* End of Outputs for SubSystem: '<S328>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S443>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_Temp_Min_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S328>/Fsft' */
        /* FunctionCaller: '<S444>/Function Caller' */
        /* Event: '<S443>:39' */
        Rte_Call_FsftBPCR_b_HV_BatModTempMin_FsftBPCR_b_HV_BatModTempMin();

        /* End of Outputs for SubSystem: '<S328>/Fsft' */
        /* Transition: '<S443>:113' */
        /* Transition: '<S443>:115' */
        /* Transition: '<S443>:114' */
    }

    /* End of Chart: '<S439>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_ThermRnway_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_ThermRnway_ErrSts'
     */
    /* Transition: '<S443>:107' */
    rtb_TmpSignalConversionAtVeC_nz = Rte_Read_VeCRDB_y_BPCM_HV_ThermRnway_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__mo);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_ThermRnway_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S450>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_ThermRnway_SigSts_Value(&tmpRead_1o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S447>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1o) & 3U) != 0U)
    {
        /* Transition: '<S450>:100' */
        /* Transition: '<S450>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S450>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1o) & 4U) != 0U)
        {
            /* Transition: '<S450>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S450>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S450>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_ThermRnway_CallStatus = 3U;

                /* Event: '<S450>:40' */
                /* Transition: '<S450>:115' */
                /* Transition: '<S450>:114' */
            }
        }
        else
        {
            /* Transition: '<S450>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_nz) == 133)
            {
                /* Transition: '<S450>:95' */
                /* Transition: '<S450>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_ThermRnway_CallStatus = 4U;

                /* Transition: '<S450>:114' */
            }
            else
            {
                /* Transition: '<S450>:120' */
                if ((((uint32)tmpRead_1o) & 8U) != 0U)
                {
                    /* Transition: '<S450>:122' */
                    /* Transition: '<S450>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S450>:126' */
                }
                else
                {
                    /* Transition: '<S450>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S450>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_ThermRnway_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S329>/Poke' */
                /* FunctionCaller: '<S452>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S452>/Data Type Conversion'
                 */
                /* Event: '<S450>:38' */
                Rte_Call_PokeBPCR_e_ThrmlRnawy_Warn_PokeBPCR_e_ThrmlRnawy_Warn
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__mo,
                     FA_out_ih);

                /* End of Outputs for SubSystem: '<S329>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S450>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_ThermRnway_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S329>/Fsft' */
        /* FunctionCaller: '<S451>/Function Caller' */
        /* Event: '<S450>:39' */
        Rte_Call_FsftBPCR_b_ThrmlRnawy_Warn_FsftBPCR_b_ThrmlRnawy_Warn();

        /* End of Outputs for SubSystem: '<S329>/Fsft' */
        /* Transition: '<S450>:113' */
        /* Transition: '<S450>:115' */
        /* Transition: '<S450>:114' */
    }

    /* End of Chart: '<S447>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_TracBusSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_TracBusSts_ErrSts'
     */
    /* Transition: '<S450>:107' */
    rtb_TmpSignalConversionAtVeC_lv = Rte_Read_VeCRDB_y_BPCM_HV_TracBusSts_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__l2);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_TracBusSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S456>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_TracBusSts_SigSts_Value(&tmpRead_1p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S453>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1p) & 3U) != 0U)
    {
        /* Transition: '<S456>:100' */
        /* Transition: '<S456>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S456>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1p) & 4U) != 0U)
        {
            /* Transition: '<S456>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S456>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S456>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_TracBusSts_CallStatus = 3U;

                /* Event: '<S456>:40' */
                /* Transition: '<S456>:115' */
                /* Transition: '<S456>:114' */
            }
        }
        else
        {
            /* Transition: '<S456>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lv) == 133)
            {
                /* Transition: '<S456>:95' */
                /* Transition: '<S456>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_TracBusSts_CallStatus = 4U;

                /* Transition: '<S456>:114' */
            }
            else
            {
                /* Transition: '<S456>:120' */
                if ((((uint32)tmpRead_1p) & 8U) != 0U)
                {
                    /* Transition: '<S456>:122' */
                    /* Transition: '<S456>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S456>:126' */
                }
                else
                {
                    /* Transition: '<S456>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S456>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_TracBusSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S330>/Poke' */
                /* FunctionCaller: '<S458>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S458>/Data Type Conversion'
                 */
                /* Event: '<S456>:38' */
                Rte_Call_PokeBPCR_e_HV_BatCntctrStat_PokeBPCR_e_HV_BatCntctrStat
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__l2,
                     FA_out_ih);

                /* End of Outputs for SubSystem: '<S330>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S456>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_TracBusSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S330>/Fsft' */
        /* FunctionCaller: '<S457>/Function Caller' */
        /* Event: '<S456>:39' */
        Rte_Call_FsftBPCR_e_HV_BatCntctrStat_FsftBPCR_e_HV_BatCntctrStat();

        /* End of Outputs for SubSystem: '<S330>/Fsft' */
        /* Transition: '<S456>:113' */
        /* Transition: '<S456>:115' */
        /* Transition: '<S456>:114' */
    }

    /* End of Chart: '<S453>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_TracMaiCS_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_TracMaiCS_ErrSts'
     */
    /* Transition: '<S456>:107' */
    rtb_TmpSignalConversionAtVeC_dq = Rte_Read_VeCRDB_y_BPCM_HV_TracMaiCS_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_TracMaiCS_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S463>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_TracMaiCS_SigSts_Value(&tmpRead_1q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S459>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1q) & 3U) != 0U)
    {
        /* Transition: '<S463>:100' */
        /* Transition: '<S463>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S463>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1q) & 4U) != 0U)
        {
            /* Transition: '<S463>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S463>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S463>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_TracMaiCS_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S331>/Tmot' */
                /* FunctionCaller: '<S466>/Function Caller' */
                /* Event: '<S463>:40' */
                Rte_Call_TmotBPCR_b_HVBatCntrWeld_ImpdOpn_TmotBPCR_b_HVBatCntrWeld_ImpdOpn
                    ();

                /* End of Outputs for SubSystem: '<S331>/Tmot' */
                /* Transition: '<S463>:115' */
                /* Transition: '<S463>:114' */
            }
        }
        else
        {
            /* Transition: '<S463>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dq) == 133)
            {
                /* Transition: '<S463>:95' */
                /* Transition: '<S463>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_TracMaiCS_CallStatus = 4U;

                /* Transition: '<S463>:114' */
            }
            else
            {
                /* Transition: '<S463>:120' */
                /* Transition: '<S463>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_TracMaiCS_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S331>/Poke' */
                /* FunctionCaller: '<S465>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S465>/Data Type Conversion'
                 */
                /* Event: '<S463>:38' */
                Rte_Call_PokeBPCR_e_HVBatCntrWeld_ImpdOpn_PokeBPCR_e_HVBatCntrWeld_ImpdOpn
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_o);

                /* End of Outputs for SubSystem: '<S331>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S463>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_TracMaiCS_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S331>/Fsft' */
        /* FunctionCaller: '<S464>/Function Caller' */
        /* Event: '<S463>:39' */
        Rte_Call_FsftBPCR_b_HVBatCntrWeld_ImpdOpn_FsftBPCR_b_HVBatCntrWeld_ImpdOpn
            ();

        /* End of Outputs for SubSystem: '<S331>/Fsft' */
        /* Transition: '<S463>:113' */
        /* Transition: '<S463>:115' */
        /* Transition: '<S463>:114' */
    }

    /* End of Chart: '<S459>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVTracBusVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVTracBusVolt_ErrSts'
     */
    /* Transition: '<S463>:107' */
    rtb_TmpSignalConversionAtVeC_cc = Rte_Read_VeCRDB_U_BPCM_HVTracBusVolt_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVTracBusVolt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S470>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVTracBusVolt_SigSts_Value(&tmpRead_1r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S467>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1r) & 3U) != 0U)
    {
        /* Transition: '<S470>:100' */
        /* Transition: '<S470>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S470>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1r) & 4U) != 0U)
        {
            /* Transition: '<S470>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S470>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S470>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVTracBusVolt_CallStatus = 3U;

                /* Event: '<S470>:40' */
                /* Transition: '<S470>:115' */
                /* Transition: '<S470>:114' */
            }
        }
        else
        {
            /* Transition: '<S470>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_cc) == 133)
            {
                /* Transition: '<S470>:95' */
                /* Transition: '<S470>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVTracBusVolt_CallStatus = 4U;

                /* Transition: '<S470>:114' */
            }
            else
            {
                /* Transition: '<S470>:120' */
                if ((((uint32)tmpRead_1r) & 8U) != 0U)
                {
                    /* Transition: '<S470>:122' */
                    /* Transition: '<S470>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S470>:126' */
                }
                else
                {
                    /* Transition: '<S470>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S470>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVTracBusVolt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S332>/Poke' */
                /* FunctionCaller: '<S472>/Function Caller' */
                /* Event: '<S470>:38' */
                Rte_Call_PokeBPCR_U_HV_BatVolt_PokeBPCR_U_HV_BatVolt
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_B, FA_out_ih);

                /* End of Outputs for SubSystem: '<S332>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S470>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVTracBusVolt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S332>/Fsft' */
        /* FunctionCaller: '<S471>/Function Caller' */
        /* Event: '<S470>:39' */
        Rte_Call_FsftBPCR_U_HV_BatVolt_FsftBPCR_U_HV_BatVolt();

        /* End of Outputs for SubSystem: '<S332>/Fsft' */
        /* Transition: '<S470>:113' */
        /* Transition: '<S470>:115' */
        /* Transition: '<S470>:114' */
    }

    /* End of Chart: '<S467>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_PwrLimpHmOn_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_PwrLimpHmOn_ErrSts'
     */
    /* Transition: '<S470>:107' */
    rtb_TmpSignalConversionAtVe_jf0 = Rte_Read_VeCRDB_b_BPCM_PwrLimpHmOn_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__ps);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_PwrLimpHmOn_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S475>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_PwrLimpHmOn_SigSts_Value(&tmpRead_1s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S473>/Chart' */
    if ((((uint32)tmpRead_1s) & 3U) != 0U)
    {
        /* Transition: '<S475>:100' */
        /* Transition: '<S475>:103' */
        /* Transition: '<S475>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_PwrLimpHmOn_CallStatus = 2U;

        /* Event: '<S475>:39' */
        /* Transition: '<S475>:113' */
        /* Transition: '<S475>:115' */
        /* Transition: '<S475>:114' */
    }
    else
    {
        /* Transition: '<S475>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1s) & 4U) != 0U)
        {
            /* Transition: '<S475>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S475>:88' */
                /* Transition: '<S475>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_PwrLimpHmOn_CallStatus = 2U;

                /* Event: '<S475>:39' */
                /* Transition: '<S475>:113' */
                /* Transition: '<S475>:115' */
                /* Transition: '<S475>:114' */
            }
            else
            {
                /* Transition: '<S475>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_PwrLimpHmOn_CallStatus = 3U;

                /* Event: '<S475>:40' */
                /* Transition: '<S475>:115' */
                /* Transition: '<S475>:114' */
            }
        }
        else
        {
            /* Transition: '<S475>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_jf0) == 133)
            {
                /* Transition: '<S475>:95' */
                /* Transition: '<S475>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_PwrLimpHmOn_CallStatus = 4U;

                /* Transition: '<S475>:114' */
            }
            else
            {
                /* Transition: '<S475>:120' */
                /* Transition: '<S475>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_PwrLimpHmOn_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S333>/Poke' */
                /* FunctionCaller: '<S476>/Function Caller' */
                /* Event: '<S475>:38' */
                Rte_Call_PokeBPCR_b_PwrLimON_PokeBPCR_b_PwrLimON
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__ps);

                /* End of Outputs for SubSystem: '<S333>/Poke' */
            }
        }
    }

    /* End of Chart: '<S473>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBP_BDU_BsbrTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBP_BDU_BsbrTemp_ErrSts'
     */
    /* Transition: '<S475>:107' */
    rtb_TmpSignalConversionAtVeC_k5 = Rte_Read_VeCRDB_T_HVBP_BDU_BsbrTemp_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_HVBP_BDU_BsbrTemp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S479>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBP_BDU_BsbrTemp_SigSts_Value(&tmpRead_1t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S477>/Chart' */
    if ((((uint32)tmpRead_1t) & 3U) != 0U)
    {
        /* Transition: '<S479>:100' */
        /* Transition: '<S479>:103' */
        /* Transition: '<S479>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBP_BDU_BsbrTemp_CallStatus = 2U;

        /* Event: '<S479>:39' */
        /* Transition: '<S479>:113' */
        /* Transition: '<S479>:115' */
        /* Transition: '<S479>:114' */
    }
    else
    {
        /* Transition: '<S479>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1t) & 4U) != 0U)
        {
            /* Transition: '<S479>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S479>:88' */
                /* Transition: '<S479>:111' */
                /* Call Fsft */
                VeCRDB_y_HVBP_BDU_BsbrTemp_CallStatus = 2U;

                /* Event: '<S479>:39' */
                /* Transition: '<S479>:113' */
                /* Transition: '<S479>:115' */
                /* Transition: '<S479>:114' */
            }
            else
            {
                /* Transition: '<S479>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBP_BDU_BsbrTemp_CallStatus = 3U;

                /* Event: '<S479>:40' */
                /* Transition: '<S479>:115' */
                /* Transition: '<S479>:114' */
            }
        }
        else
        {
            /* Transition: '<S479>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_k5) == 133)
            {
                /* Transition: '<S479>:95' */
                /* Transition: '<S479>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBP_BDU_BsbrTemp_CallStatus = 4U;

                /* Transition: '<S479>:114' */
            }
            else
            {
                /* Transition: '<S479>:120' */
                /* Transition: '<S479>:117' */
                /* Call Poke */
                VeCRDB_y_HVBP_BDU_BsbrTemp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S334>/Poke' */
                /* FunctionCaller: '<S480>/Function Caller' */
                /* Event: '<S479>:38' */
                Rte_Call_PokeBPCR_T_BDUBusBarTemp_PokeBPCR_T_BDUBusBarTemp
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_H);

                /* End of Outputs for SubSystem: '<S334>/Poke' */
            }
        }
    }

    /* End of Chart: '<S477>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBP_Busbar_Temp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBP_Busbar_Temp_ErrSts'
     */
    /* Transition: '<S479>:107' */
    rtb_TmpSignalConversionAtVeC_by = Rte_Read_VeCRDB_T_HVBP_Busbar_Temp_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_HVBP_Busbar_Temp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S483>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBP_Busbar_Temp_SigSts_Value(&tmpRead_1u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S481>/Chart' */
    if ((((uint32)tmpRead_1u) & 3U) != 0U)
    {
        /* Transition: '<S483>:100' */
        /* Transition: '<S483>:103' */
        /* Transition: '<S483>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBP_Busbar_Temp_CallStatus = 2U;

        /* Event: '<S483>:39' */
        /* Transition: '<S483>:113' */
        /* Transition: '<S483>:115' */
        /* Transition: '<S483>:114' */
    }
    else
    {
        /* Transition: '<S483>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1u) & 4U) != 0U)
        {
            /* Transition: '<S483>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S483>:88' */
                /* Transition: '<S483>:111' */
                /* Call Fsft */
                VeCRDB_y_HVBP_Busbar_Temp_CallStatus = 2U;

                /* Event: '<S483>:39' */
                /* Transition: '<S483>:113' */
                /* Transition: '<S483>:115' */
                /* Transition: '<S483>:114' */
            }
            else
            {
                /* Transition: '<S483>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBP_Busbar_Temp_CallStatus = 3U;

                /* Event: '<S483>:40' */
                /* Transition: '<S483>:115' */
                /* Transition: '<S483>:114' */
            }
        }
        else
        {
            /* Transition: '<S483>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_by) == 133)
            {
                /* Transition: '<S483>:95' */
                /* Transition: '<S483>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBP_Busbar_Temp_CallStatus = 4U;

                /* Transition: '<S483>:114' */
            }
            else
            {
                /* Transition: '<S483>:120' */
                /* Transition: '<S483>:117' */
                /* Call Poke */
                VeCRDB_y_HVBP_Busbar_Temp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S335>/Poke' */
                /* FunctionCaller: '<S484>/Function Caller' */
                /* Event: '<S483>:38' */
                Rte_Call_PokeBPCR_T_BusBarTemp_PokeBPCR_T_BusBarTemp
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_d);

                /* End of Outputs for SubSystem: '<S335>/Poke' */
            }
        }
    }

    /* End of Chart: '<S481>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBatCntctOpnTime_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBatCntctOpnTime_ErrSts'
     */
    /* Transition: '<S483>:107' */
    rtb_TmpSignalConversionAtVeC_ew =
        Rte_Read_VeCRDB_thr_HVBatCntctOpnTime_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_thr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_HVBatCntctOpnTime_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S488>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBatCntctOpnTime_SigSts_Value(&tmpRead_1v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S485>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1v) & 3U) != 0U)
    {
        /* Transition: '<S488>:100' */
        /* Transition: '<S488>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S488>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1v) & 4U) != 0U)
        {
            /* Transition: '<S488>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S488>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S488>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBatCntctOpnTime_CallStatus = 3U;

                /* Event: '<S488>:40' */
                /* Transition: '<S488>:115' */
                /* Transition: '<S488>:114' */
            }
        }
        else
        {
            /* Transition: '<S488>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ew) == 133)
            {
                /* Transition: '<S488>:95' */
                /* Transition: '<S488>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBatCntctOpnTime_CallStatus = 4U;

                /* Transition: '<S488>:114' */
            }
            else
            {
                /* Transition: '<S488>:120' */
                if ((((uint32)tmpRead_1v) & 8U) != 0U)
                {
                    /* Transition: '<S488>:122' */
                    /* Transition: '<S488>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S488>:126' */
                }
                else
                {
                    /* Transition: '<S488>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S488>:117' */
                /* Call Poke */
                VeCRDB_y_HVBatCntctOpnTime_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S336>/Poke' */
                /* FunctionCaller: '<S490>/Function Caller' */
                /* Event: '<S488>:38' */
                Rte_Call_PokeBPCR_t_HVBattCntctrOpnTm_PokeBPCR_t_HVBattCntctrOpnTm
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_thr, FA_out_ih);

                /* End of Outputs for SubSystem: '<S336>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S488>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBatCntctOpnTime_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S336>/Fsft' */
        /* FunctionCaller: '<S489>/Function Caller' */
        /* Event: '<S488>:39' */
        Rte_Call_FsftBPCR_t_HVBattCntctrOpnTm_FsftBPCR_t_HVBattCntctrOpnTm();

        /* End of Outputs for SubSystem: '<S336>/Fsft' */
        /* Transition: '<S488>:113' */
        /* Transition: '<S488>:115' */
        /* Transition: '<S488>:114' */
    }

    /* End of Chart: '<S485>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBatCntctWeldChk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBatCntctWeldChk_ErrSts'
     */
    /* Transition: '<S488>:107' */
    rtb_TmpSignalConversionAtVeC_d1 = Rte_Read_VeCRDB_b_HVBatCntctWeldChk_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__px);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_HVBatCntctWeldChk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S493>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBatCntctWeldChk_SigSts_Value(&tmpRead_1w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S491>/Chart' */
    if ((((uint32)tmpRead_1w) & 3U) != 0U)
    {
        /* Transition: '<S493>:100' */
        /* Transition: '<S493>:103' */
        /* Transition: '<S493>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBatCntctWeldChk_CallStatus = 2U;

        /* Event: '<S493>:39' */
        /* Transition: '<S493>:113' */
        /* Transition: '<S493>:115' */
        /* Transition: '<S493>:114' */
    }
    else
    {
        /* Transition: '<S493>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1w) & 4U) != 0U)
        {
            /* Transition: '<S493>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S493>:88' */
                /* Transition: '<S493>:111' */
                /* Call Fsft */
                VeCRDB_y_HVBatCntctWeldChk_CallStatus = 2U;

                /* Event: '<S493>:39' */
                /* Transition: '<S493>:113' */
                /* Transition: '<S493>:115' */
                /* Transition: '<S493>:114' */
            }
            else
            {
                /* Transition: '<S493>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBatCntctWeldChk_CallStatus = 3U;

                /* Event: '<S493>:40' */
                /* Transition: '<S493>:115' */
                /* Transition: '<S493>:114' */
            }
        }
        else
        {
            /* Transition: '<S493>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_d1) == 133)
            {
                /* Transition: '<S493>:95' */
                /* Transition: '<S493>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBatCntctWeldChk_CallStatus = 4U;

                /* Transition: '<S493>:114' */
            }
            else
            {
                /* Transition: '<S493>:120' */
                /* Transition: '<S493>:117' */
                /* Call Poke */
                VeCRDB_y_HVBatCntctWeldChk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S337>/Poke' */
                /* FunctionCaller: '<S494>/Function Caller' */
                /* Event: '<S493>:38' */
                Rte_Call_PokeBPCR_b_StkOpnChkCmpl_PokeBPCR_b_StkOpnChkCmpl
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__px);

                /* End of Outputs for SubSystem: '<S337>/Poke' */
            }
        }
    }

    /* End of Chart: '<S491>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBatLastSlept_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBatLastSlept_ErrSts'
     */
    /* Transition: '<S493>:107' */
    rtb_TmpSignalConversionAtVeC_jm = Rte_Read_VeCRDB_tdy_HVBatLastSlept_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_tdy);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_HVBatLastSlept_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S497>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBatLastSlept_SigSts_Value(&tmpRead_1x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S495>/Chart' */
    if ((((uint32)tmpRead_1x) & 3U) != 0U)
    {
        /* Transition: '<S497>:100' */
        /* Transition: '<S497>:103' */
        /* Transition: '<S497>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBatLastSlept_CallStatus = 2U;

        /* Event: '<S497>:39' */
        /* Transition: '<S497>:113' */
        /* Transition: '<S497>:115' */
        /* Transition: '<S497>:114' */
    }
    else
    {
        /* Transition: '<S497>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1x) & 4U) != 0U)
        {
            /* Transition: '<S497>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S497>:88' */
                /* Transition: '<S497>:111' */
                /* Call Fsft */
                VeCRDB_y_HVBatLastSlept_CallStatus = 2U;

                /* Event: '<S497>:39' */
                /* Transition: '<S497>:113' */
                /* Transition: '<S497>:115' */
                /* Transition: '<S497>:114' */
            }
            else
            {
                /* Transition: '<S497>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBatLastSlept_CallStatus = 3U;

                /* Event: '<S497>:40' */
                /* Transition: '<S497>:115' */
                /* Transition: '<S497>:114' */
            }
        }
        else
        {
            /* Transition: '<S497>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jm) == 133)
            {
                /* Transition: '<S497>:95' */
                /* Transition: '<S497>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBatLastSlept_CallStatus = 4U;

                /* Transition: '<S497>:114' */
            }
            else
            {
                /* Transition: '<S497>:120' */
                /* Transition: '<S497>:117' */
                /* Call Poke */
                VeCRDB_y_HVBatLastSlept_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S338>/Poke' */
                /* FunctionCaller: '<S498>/Function Caller' */
                /* Event: '<S497>:38' */
                Rte_Call_PokeBPCR_t_HVBatSleepTime_PokeBPCR_t_HVBatSleepTime
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_tdy);

                /* End of Outputs for SubSystem: '<S338>/Poke' */
            }
        }
    }

    /* End of Chart: '<S495>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBatReady_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBatReady_ErrSts'
     */
    /* Transition: '<S497>:107' */
    rtb_TmpSignalConversionAtVeC_iy = Rte_Read_VeCRDB_b_HVBatReady_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_HVBatReady_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S502>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBatReady_SigSts_Value(&tmpRead_1y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S499>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1y) & 3U) != 0U)
    {
        /* Transition: '<S502>:100' */
        /* Transition: '<S502>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S502>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1y) & 4U) != 0U)
        {
            /* Transition: '<S502>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S502>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S502>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBatReady_CallStatus = 3U;

                /* Event: '<S502>:40' */
                /* Transition: '<S502>:115' */
                /* Transition: '<S502>:114' */
            }
        }
        else
        {
            /* Transition: '<S502>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_iy) == 133)
            {
                /* Transition: '<S502>:95' */
                /* Transition: '<S502>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBatReady_CallStatus = 4U;

                /* Transition: '<S502>:114' */
            }
            else
            {
                /* Transition: '<S502>:120' */
                /* Transition: '<S502>:117' */
                /* Call Poke */
                VeCRDB_y_HVBatReady_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S339>/Poke' */
                /* FunctionCaller: '<S504>/Function Caller' incorporates:
                 *  Constant: '<S504>/Constant'
                 */
                /* Event: '<S502>:38' */
                Rte_Call_PokeBPCR_b_HVBatRdy_PokeBPCR_b_HVBatRdy
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_i, false);

                /* End of Outputs for SubSystem: '<S339>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S502>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBatReady_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S339>/Fsft' */
        /* FunctionCaller: '<S503>/Function Caller' */
        /* Event: '<S502>:39' */
        Rte_Call_FsftBPCR_b_HVBatRdy_FsftBPCR_b_HVBatRdy();

        /* End of Outputs for SubSystem: '<S339>/Fsft' */
        /* Transition: '<S502>:113' */
        /* Transition: '<S502>:115' */
        /* Transition: '<S502>:114' */
    }

    /* End of Chart: '<S499>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_Cell_VoltAvg_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_Cell_VoltAvg_ErrSts'
     */
    /* Transition: '<S502>:107' */
    rtb_TmpSignalConversionAtVeC_ar = Rte_Read_VeCRDB_U_BPCM_Cell_VoltAvg_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_Cell_VoltAvg_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S522>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_Cell_VoltAvg_SigSts_Value(&tmpRead_1z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S519>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1z) & 3U) != 0U)
    {
        /* Transition: '<S522>:100' */
        /* Transition: '<S522>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S522>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1z) & 4U) != 0U)
        {
            /* Transition: '<S522>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S522>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S522>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_Cell_VoltAvg_CallStatus = 3U;

                /* Event: '<S522>:40' */
                /* Transition: '<S522>:115' */
                /* Transition: '<S522>:114' */
            }
        }
        else
        {
            /* Transition: '<S522>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ar) == 133)
            {
                /* Transition: '<S522>:95' */
                /* Transition: '<S522>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_Cell_VoltAvg_CallStatus = 4U;

                /* Transition: '<S522>:114' */
            }
            else
            {
                /* Transition: '<S522>:120' */
                if ((((uint32)tmpRead_1z) & 8U) != 0U)
                {
                    /* Transition: '<S522>:122' */
                    /* Transition: '<S522>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S522>:126' */
                }
                else
                {
                    /* Transition: '<S522>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S522>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_Cell_VoltAvg_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S505>/Poke' */
                /* FunctionCaller: '<S524>/Function Caller' */
                /* Event: '<S522>:38' */
                Rte_Call_PokeBPCR_U_HV_BatModVoltAvg_PokeBPCR_U_HV_BatModVoltAvg
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_m, FA_out_ih);

                /* End of Outputs for SubSystem: '<S505>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S522>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_Cell_VoltAvg_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S505>/Fsft' */
        /* FunctionCaller: '<S523>/Function Caller' */
        /* Event: '<S522>:39' */
        Rte_Call_FsftBPCR_U_HV_BatModVoltAvg_FsftBPCR_U_HV_BatModVoltAvg();

        /* End of Outputs for SubSystem: '<S505>/Fsft' */
        /* Transition: '<S522>:113' */
        /* Transition: '<S522>:115' */
        /* Transition: '<S522>:114' */
    }

    /* End of Chart: '<S519>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_Cell_VoltMax_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_Cell_VoltMax_ErrSts'
     */
    /* Transition: '<S522>:107' */
    rtb_TmpSignalConversionAtVeC_oc = Rte_Read_VeCRDB_U_BPCM_Cell_VoltMax_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_Cell_VoltMax_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S528>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_Cell_VoltMax_SigSts_Value(&tmpRead_20);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S525>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_20) & 3U) != 0U)
    {
        /* Transition: '<S528>:100' */
        /* Transition: '<S528>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S528>:104' */
        /*  MM */
        if ((((uint32)tmpRead_20) & 4U) != 0U)
        {
            /* Transition: '<S528>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S528>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S528>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_Cell_VoltMax_CallStatus = 3U;

                /* Event: '<S528>:40' */
                /* Transition: '<S528>:115' */
                /* Transition: '<S528>:114' */
            }
        }
        else
        {
            /* Transition: '<S528>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_oc) == 133)
            {
                /* Transition: '<S528>:95' */
                /* Transition: '<S528>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_Cell_VoltMax_CallStatus = 4U;

                /* Transition: '<S528>:114' */
            }
            else
            {
                /* Transition: '<S528>:120' */
                if ((((uint32)tmpRead_20) & 8U) != 0U)
                {
                    /* Transition: '<S528>:122' */
                    /* Transition: '<S528>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S528>:126' */
                }
                else
                {
                    /* Transition: '<S528>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S528>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_Cell_VoltMax_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S506>/Poke' */
                /* FunctionCaller: '<S530>/Function Caller' */
                /* Event: '<S528>:38' */
                Rte_Call_PokeBPCR_U_HV_BatModVoltMax_PokeBPCR_U_HV_BatModVoltMax
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_a, FA_out_ih);

                /* End of Outputs for SubSystem: '<S506>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S528>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_Cell_VoltMax_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S506>/Fsft' */
        /* FunctionCaller: '<S529>/Function Caller' */
        /* Event: '<S528>:39' */
        Rte_Call_FsftBPCR_U_HV_BatModVoltMax_FsftBPCR_U_HV_BatModVoltMax();

        /* End of Outputs for SubSystem: '<S506>/Fsft' */
        /* Transition: '<S528>:113' */
        /* Transition: '<S528>:115' */
        /* Transition: '<S528>:114' */
    }

    /* End of Chart: '<S525>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_Cell_VoltMin_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_Cell_VoltMin_ErrSts'
     */
    /* Transition: '<S528>:107' */
    rtb_TmpSignalConversionAtVeC_hu = Rte_Read_VeCRDB_U_BPCM_Cell_VoltMin_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_Cell_VoltMin_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S534>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_Cell_VoltMin_SigSts_Value(&tmpRead_21);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S531>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_21) & 3U) != 0U)
    {
        /* Transition: '<S534>:100' */
        /* Transition: '<S534>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S534>:104' */
        /*  MM */
        if ((((uint32)tmpRead_21) & 4U) != 0U)
        {
            /* Transition: '<S534>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S534>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S534>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_Cell_VoltMin_CallStatus = 3U;

                /* Event: '<S534>:40' */
                /* Transition: '<S534>:115' */
                /* Transition: '<S534>:114' */
            }
        }
        else
        {
            /* Transition: '<S534>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hu) == 133)
            {
                /* Transition: '<S534>:95' */
                /* Transition: '<S534>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_Cell_VoltMin_CallStatus = 4U;

                /* Transition: '<S534>:114' */
            }
            else
            {
                /* Transition: '<S534>:120' */
                if ((((uint32)tmpRead_21) & 8U) != 0U)
                {
                    /* Transition: '<S534>:122' */
                    /* Transition: '<S534>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S534>:126' */
                }
                else
                {
                    /* Transition: '<S534>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S534>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_Cell_VoltMin_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S507>/Poke' */
                /* FunctionCaller: '<S536>/Function Caller' */
                /* Event: '<S534>:38' */
                Rte_Call_PokeBPCR_U_HV_BatModVoltMin_PokeBPCR_U_HV_BatModVoltMin
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_h, FA_out_ih);

                /* End of Outputs for SubSystem: '<S507>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S534>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_Cell_VoltMin_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S507>/Fsft' */
        /* FunctionCaller: '<S535>/Function Caller' */
        /* Event: '<S534>:39' */
        Rte_Call_FsftBPCR_U_HV_BatModVoltMin_FsftBPCR_U_HV_BatModVoltMin();

        /* End of Outputs for SubSystem: '<S507>/Fsft' */
        /* Transition: '<S534>:113' */
        /* Transition: '<S534>:115' */
        /* Transition: '<S534>:114' */
    }

    /* End of Chart: '<S531>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVNrCelMaxTmp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVNrCelMaxTmp_ErrSts'
     */
    /* Transition: '<S534>:107' */
    rtb_TmpSignalConversionAtVeC_kx = Rte_Read_VeCRDB_d_BPCM_HVNrCelMaxTmp_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_d_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVNrCelMaxTmp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S539>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVNrCelMaxTmp_SigSts_Value(&tmpRead_22);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S537>/Chart' */
    if ((((uint32)tmpRead_22) & 3U) != 0U)
    {
        /* Transition: '<S539>:100' */
        /* Transition: '<S539>:103' */
        /* Transition: '<S539>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVNrCelMaxTmp_CallStatus = 2U;

        /* Event: '<S539>:39' */
        /* Transition: '<S539>:113' */
        /* Transition: '<S539>:115' */
        /* Transition: '<S539>:114' */
    }
    else
    {
        /* Transition: '<S539>:104' */
        /*  MM */
        if ((((uint32)tmpRead_22) & 4U) != 0U)
        {
            /* Transition: '<S539>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S539>:88' */
                /* Transition: '<S539>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HVNrCelMaxTmp_CallStatus = 2U;

                /* Event: '<S539>:39' */
                /* Transition: '<S539>:113' */
                /* Transition: '<S539>:115' */
                /* Transition: '<S539>:114' */
            }
            else
            {
                /* Transition: '<S539>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVNrCelMaxTmp_CallStatus = 3U;

                /* Event: '<S539>:40' */
                /* Transition: '<S539>:115' */
                /* Transition: '<S539>:114' */
            }
        }
        else
        {
            /* Transition: '<S539>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_kx) == 133)
            {
                /* Transition: '<S539>:95' */
                /* Transition: '<S539>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVNrCelMaxTmp_CallStatus = 4U;

                /* Transition: '<S539>:114' */
            }
            else
            {
                /* Transition: '<S539>:120' */
                if ((((uint32)tmpRead_22) & 8U) != 0U)
                {
                    /* Transition: '<S539>:122' */
                    /* Transition: '<S539>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S539>:126' */
                }
                else
                {
                    /* Transition: '<S539>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S539>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVNrCelMaxTmp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S508>/Poke' */
                /* FunctionCaller: '<S540>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S540>/Data Type Conversion'
                 */
                /* Event: '<S539>:38' */
                Rte_Call_PokeBPCR_cnt_HVBatt_ModNumMaxTmp_PokeBPCR_cnt_HVBatt_ModNumMaxTmp
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_d_B,
                     FA_out_ih);

                /* End of Outputs for SubSystem: '<S508>/Poke' */
            }
        }
    }

    /* End of Chart: '<S537>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVNrCelMaxVlt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVNrCelMaxVlt_ErrSts'
     */
    /* Transition: '<S539>:107' */
    rtb_TmpSignalConversionAtVeC_kk = Rte_Read_VeCRDB_d_BPCM_HVNrCelMaxVlt_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_d_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVNrCelMaxVlt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S543>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVNrCelMaxVlt_SigSts_Value(&tmpRead_23);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S541>/Chart' */
    if ((((uint32)tmpRead_23) & 3U) != 0U)
    {
        /* Transition: '<S543>:100' */
        /* Transition: '<S543>:103' */
        /* Transition: '<S543>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVNrCelMaxVlt_CallStatus = 2U;

        /* Event: '<S543>:39' */
        /* Transition: '<S543>:113' */
        /* Transition: '<S543>:115' */
        /* Transition: '<S543>:114' */
    }
    else
    {
        /* Transition: '<S543>:104' */
        /*  MM */
        if ((((uint32)tmpRead_23) & 4U) != 0U)
        {
            /* Transition: '<S543>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S543>:88' */
                /* Transition: '<S543>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HVNrCelMaxVlt_CallStatus = 2U;

                /* Event: '<S543>:39' */
                /* Transition: '<S543>:113' */
                /* Transition: '<S543>:115' */
                /* Transition: '<S543>:114' */
            }
            else
            {
                /* Transition: '<S543>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVNrCelMaxVlt_CallStatus = 3U;

                /* Event: '<S543>:40' */
                /* Transition: '<S543>:115' */
                /* Transition: '<S543>:114' */
            }
        }
        else
        {
            /* Transition: '<S543>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_kk) == 133)
            {
                /* Transition: '<S543>:95' */
                /* Transition: '<S543>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVNrCelMaxVlt_CallStatus = 4U;

                /* Transition: '<S543>:114' */
            }
            else
            {
                /* Transition: '<S543>:120' */
                /* Transition: '<S543>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVNrCelMaxVlt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S509>/Poke' */
                /* FunctionCaller: '<S544>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S544>/Data Type Conversion'
                 */
                /* Event: '<S543>:38' */
                Rte_Call_PokeBPCR_Cnt_HVBatt_NumMaxVlt_PokeBPCR_Cnt_HVBatt_NumMaxVlt
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_d_d);

                /* End of Outputs for SubSystem: '<S509>/Poke' */
            }
        }
    }

    /* End of Chart: '<S541>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVNrCelMinTmp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVNrCelMinTmp_ErrSts'
     */
    /* Transition: '<S543>:107' */
    rtb_TmpSignalConversionAtVeC_iq = Rte_Read_VeCRDB_d_BPCM_HVNrCelMinTmp_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_d_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVNrCelMinTmp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S547>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVNrCelMinTmp_SigSts_Value(&tmpRead_24);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S545>/Chart' */
    if ((((uint32)tmpRead_24) & 3U) != 0U)
    {
        /* Transition: '<S547>:100' */
        /* Transition: '<S547>:103' */
        /* Transition: '<S547>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVNrCelMinTmp_CallStatus = 2U;

        /* Event: '<S547>:39' */
        /* Transition: '<S547>:113' */
        /* Transition: '<S547>:115' */
        /* Transition: '<S547>:114' */
    }
    else
    {
        /* Transition: '<S547>:104' */
        /*  MM */
        if ((((uint32)tmpRead_24) & 4U) != 0U)
        {
            /* Transition: '<S547>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S547>:88' */
                /* Transition: '<S547>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HVNrCelMinTmp_CallStatus = 2U;

                /* Event: '<S547>:39' */
                /* Transition: '<S547>:113' */
                /* Transition: '<S547>:115' */
                /* Transition: '<S547>:114' */
            }
            else
            {
                /* Transition: '<S547>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVNrCelMinTmp_CallStatus = 3U;

                /* Event: '<S547>:40' */
                /* Transition: '<S547>:115' */
                /* Transition: '<S547>:114' */
            }
        }
        else
        {
            /* Transition: '<S547>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_iq) == 133)
            {
                /* Transition: '<S547>:95' */
                /* Transition: '<S547>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVNrCelMinTmp_CallStatus = 4U;

                /* Transition: '<S547>:114' */
            }
            else
            {
                /* Transition: '<S547>:120' */
                if ((((uint32)tmpRead_24) & 8U) != 0U)
                {
                    /* Transition: '<S547>:122' */
                    /* Transition: '<S547>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S547>:126' */
                }
                else
                {
                    /* Transition: '<S547>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S547>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVNrCelMinTmp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S510>/Poke' */
                /* FunctionCaller: '<S548>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S548>/Data Type Conversion'
                 */
                /* Event: '<S547>:38' */
                Rte_Call_PokeBPCR_cnt_HVBatt_ModNumMinTmp_PokeBPCR_cnt_HVBatt_ModNumMinTmp
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_d_b,
                     FA_out_ih);

                /* End of Outputs for SubSystem: '<S510>/Poke' */
            }
        }
    }

    /* End of Chart: '<S545>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVNrCelMinVlt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVNrCelMinVlt_ErrSts'
     */
    /* Transition: '<S547>:107' */
    rtb_TmpSignalConversionAtVeC_ca = Rte_Read_VeCRDB_d_BPCM_HVNrCelMinVlt_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_d_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVNrCelMinVlt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S551>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVNrCelMinVlt_SigSts_Value(&tmpRead_25);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S549>/Chart' */
    if ((((uint32)tmpRead_25) & 3U) != 0U)
    {
        /* Transition: '<S551>:100' */
        /* Transition: '<S551>:103' */
        /* Transition: '<S551>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVNrCelMinVlt_CallStatus = 2U;

        /* Event: '<S551>:39' */
        /* Transition: '<S551>:113' */
        /* Transition: '<S551>:115' */
        /* Transition: '<S551>:114' */
    }
    else
    {
        /* Transition: '<S551>:104' */
        /*  MM */
        if ((((uint32)tmpRead_25) & 4U) != 0U)
        {
            /* Transition: '<S551>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S551>:88' */
                /* Transition: '<S551>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HVNrCelMinVlt_CallStatus = 2U;

                /* Event: '<S551>:39' */
                /* Transition: '<S551>:113' */
                /* Transition: '<S551>:115' */
                /* Transition: '<S551>:114' */
            }
            else
            {
                /* Transition: '<S551>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVNrCelMinVlt_CallStatus = 3U;

                /* Event: '<S551>:40' */
                /* Transition: '<S551>:115' */
                /* Transition: '<S551>:114' */
            }
        }
        else
        {
            /* Transition: '<S551>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ca) == 133)
            {
                /* Transition: '<S551>:95' */
                /* Transition: '<S551>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVNrCelMinVlt_CallStatus = 4U;

                /* Transition: '<S551>:114' */
            }
            else
            {
                /* Transition: '<S551>:120' */
                /* Transition: '<S551>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVNrCelMinVlt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S511>/Poke' */
                /* FunctionCaller: '<S552>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S552>/Data Type Conversion'
                 */
                /* Event: '<S551>:38' */
                Rte_Call_PokeBPCR_Cnt_HVBatt_NumMinVlt_PokeBPCR_Cnt_HVBatt_NumMinVlt
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_d_i);

                /* End of Outputs for SubSystem: '<S511>/Poke' */
            }
        }
    }

    /* End of Chart: '<S549>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMMaxCelVoltAlwd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMMaxCelVoltAlwd_ErrSts'
     */
    /* Transition: '<S551>:107' */
    rtb_TmpSignalConversionAtVe_gjj = Rte_Read_VeCRDB_U_BPCMMaxCelVoltAlwd_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__ma);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCMMaxCelVoltAlwd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S556>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMMaxCelVoltAlwd_SigSts_Value(&tmpRead_26);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S553>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_26) & 3U) != 0U)
    {
        /* Transition: '<S556>:100' */
        /* Transition: '<S556>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S556>:104' */
        /*  MM */
        if ((((uint32)tmpRead_26) & 4U) != 0U)
        {
            /* Transition: '<S556>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S556>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S556>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMMaxCelVoltAlwd_CallStatus = 3U;

                /* Event: '<S556>:40' */
                /* Transition: '<S556>:115' */
                /* Transition: '<S556>:114' */
            }
        }
        else
        {
            /* Transition: '<S556>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_gjj) == 133)
            {
                /* Transition: '<S556>:95' */
                /* Transition: '<S556>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMMaxCelVoltAlwd_CallStatus = 4U;

                /* Transition: '<S556>:114' */
            }
            else
            {
                /* Transition: '<S556>:120' */
                if ((((uint32)tmpRead_26) & 8U) != 0U)
                {
                    /* Transition: '<S556>:122' */
                    /* Transition: '<S556>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S556>:126' */
                }
                else
                {
                    /* Transition: '<S556>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S556>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMMaxCelVoltAlwd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S512>/Poke' */
                /* FunctionCaller: '<S558>/Function Caller' */
                /* Event: '<S556>:38' */
                Rte_Call_PokeBPCR_U_MaxCellVltAlld_PokeBPCR_U_MaxCellVltAlld
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__ma, FA_out_ih);

                /* End of Outputs for SubSystem: '<S512>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S556>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMMaxCelVoltAlwd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S512>/Fsft' */
        /* FunctionCaller: '<S557>/Function Caller' */
        /* Event: '<S556>:39' */
        Rte_Call_FsftBPCR_U_MaxCellVltAlld_FsftBPCR_U_MaxCellVltAlld();

        /* End of Outputs for SubSystem: '<S512>/Fsft' */
        /* Transition: '<S556>:113' */
        /* Transition: '<S556>:115' */
        /* Transition: '<S556>:114' */
    }

    /* End of Chart: '<S553>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMMaxPkVoltAllwd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMMaxPkVoltAllwd_ErrSts'
     */
    /* Transition: '<S556>:107' */
    rtb_TmpSignalConversionAtVeC_gk = Rte_Read_VeCRDB_U_BPCMMaxPkVoltAllwd_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCMMaxPkVoltAllwd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S562>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMMaxPkVoltAllwd_SigSts_Value(&tmpRead_27);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S559>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_27) & 3U) != 0U)
    {
        /* Transition: '<S562>:100' */
        /* Transition: '<S562>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S562>:104' */
        /*  MM */
        if ((((uint32)tmpRead_27) & 4U) != 0U)
        {
            /* Transition: '<S562>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S562>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S562>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMMaxPkVoltAllwd_CallStatus = 3U;

                /* Event: '<S562>:40' */
                /* Transition: '<S562>:115' */
                /* Transition: '<S562>:114' */
            }
        }
        else
        {
            /* Transition: '<S562>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_gk) == 133)
            {
                /* Transition: '<S562>:95' */
                /* Transition: '<S562>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMMaxPkVoltAllwd_CallStatus = 4U;

                /* Transition: '<S562>:114' */
            }
            else
            {
                /* Transition: '<S562>:120' */
                if ((((uint32)tmpRead_27) & 8U) != 0U)
                {
                    /* Transition: '<S562>:122' */
                    /* Transition: '<S562>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S562>:126' */
                }
                else
                {
                    /* Transition: '<S562>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S562>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMMaxPkVoltAllwd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S513>/Poke' */
                /* FunctionCaller: '<S564>/Function Caller' */
                /* Event: '<S562>:38' */
                Rte_Call_PokeBPCR_U_MaxPkVltAlld_PokeBPCR_U_MaxPkVltAlld
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_f, FA_out_ih);

                /* End of Outputs for SubSystem: '<S513>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S562>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMMaxPkVoltAllwd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S513>/Fsft' */
        /* FunctionCaller: '<S563>/Function Caller' */
        /* Event: '<S562>:39' */
        Rte_Call_FsftBPCR_U_MaxPkVltAlld_FsftBPCR_U_MaxPkVltAlld();

        /* End of Outputs for SubSystem: '<S513>/Fsft' */
        /* Transition: '<S562>:113' */
        /* Transition: '<S562>:115' */
        /* Transition: '<S562>:114' */
    }

    /* End of Chart: '<S559>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMMinCelVoltAlwd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMMinCelVoltAlwd_ErrSts'
     */
    /* Transition: '<S562>:107' */
    rtb_TmpSignalConversionAtVeC_je = Rte_Read_VeCRDB_U_BPCMMinCelVoltAlwd_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCMMinCelVoltAlwd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S568>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMMinCelVoltAlwd_SigSts_Value(&tmpRead_28);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S565>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_28) & 3U) != 0U)
    {
        /* Transition: '<S568>:100' */
        /* Transition: '<S568>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S568>:104' */
        /*  MM */
        if ((((uint32)tmpRead_28) & 4U) != 0U)
        {
            /* Transition: '<S568>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S568>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S568>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMMinCelVoltAlwd_CallStatus = 3U;

                /* Event: '<S568>:40' */
                /* Transition: '<S568>:115' */
                /* Transition: '<S568>:114' */
            }
        }
        else
        {
            /* Transition: '<S568>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_je) == 133)
            {
                /* Transition: '<S568>:95' */
                /* Transition: '<S568>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMMinCelVoltAlwd_CallStatus = 4U;

                /* Transition: '<S568>:114' */
            }
            else
            {
                /* Transition: '<S568>:120' */
                if ((((uint32)tmpRead_28) & 8U) != 0U)
                {
                    /* Transition: '<S568>:122' */
                    /* Transition: '<S568>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S568>:126' */
                }
                else
                {
                    /* Transition: '<S568>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S568>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMMinCelVoltAlwd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S514>/Poke' */
                /* FunctionCaller: '<S570>/Function Caller' */
                /* Event: '<S568>:38' */
                Rte_Call_PokeBPCR_U_MinCellVltAlld_PokeBPCR_U_MinCellVltAlld
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_p, FA_out_ih);

                /* End of Outputs for SubSystem: '<S514>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S568>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMMinCelVoltAlwd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S514>/Fsft' */
        /* FunctionCaller: '<S569>/Function Caller' */
        /* Event: '<S568>:39' */
        Rte_Call_FsftBPCR_U_MinCellVltAlld_FsftBPCR_U_MinCellVltAlld();

        /* End of Outputs for SubSystem: '<S514>/Fsft' */
        /* Transition: '<S568>:113' */
        /* Transition: '<S568>:115' */
        /* Transition: '<S568>:114' */
    }

    /* End of Chart: '<S565>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMMinPkVoltAllwd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMMinPkVoltAllwd_ErrSts'
     */
    /* Transition: '<S568>:107' */
    rtb_TmpSignalConversionAtVeC_bk = Rte_Read_VeCRDB_U_BPCMMinPkVoltAllwd_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCMMinPkVoltAllwd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S574>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMMinPkVoltAllwd_SigSts_Value(&tmpRead_29);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S571>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_29) & 3U) != 0U)
    {
        /* Transition: '<S574>:100' */
        /* Transition: '<S574>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S574>:104' */
        /*  MM */
        if ((((uint32)tmpRead_29) & 4U) != 0U)
        {
            /* Transition: '<S574>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S574>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S574>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMMinPkVoltAllwd_CallStatus = 3U;

                /* Event: '<S574>:40' */
                /* Transition: '<S574>:115' */
                /* Transition: '<S574>:114' */
            }
        }
        else
        {
            /* Transition: '<S574>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bk) == 133)
            {
                /* Transition: '<S574>:95' */
                /* Transition: '<S574>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMMinPkVoltAllwd_CallStatus = 4U;

                /* Transition: '<S574>:114' */
            }
            else
            {
                /* Transition: '<S574>:120' */
                if ((((uint32)tmpRead_29) & 8U) != 0U)
                {
                    /* Transition: '<S574>:122' */
                    /* Transition: '<S574>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S574>:126' */
                }
                else
                {
                    /* Transition: '<S574>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S574>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMMinPkVoltAllwd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S515>/Poke' */
                /* FunctionCaller: '<S576>/Function Caller' */
                /* Event: '<S574>:38' */
                Rte_Call_PokeBPCR_U_MinPkVltAlld_PokeBPCR_U_MinPkVltAlld
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_d, FA_out_ih);

                /* End of Outputs for SubSystem: '<S515>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S574>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMMinPkVoltAllwd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S515>/Fsft' */
        /* FunctionCaller: '<S575>/Function Caller' */
        /* Event: '<S574>:39' */
        Rte_Call_FsftBPCR_U_MinPkVltAlld_FsftBPCR_U_MinPkVltAlld();

        /* End of Outputs for SubSystem: '<S515>/Fsft' */
        /* Transition: '<S574>:113' */
        /* Transition: '<S574>:115' */
        /* Transition: '<S574>:114' */
    }

    /* End of Chart: '<S571>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_OCVAvgCelVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_OCVAvgCelVolt_ErrSts'
     */
    /* Transition: '<S574>:107' */
    rtb_TmpSignalConversionAtVeC_hb = Rte_Read_VeCRDB_U_BPCM_OCVAvgCelVolt_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__lb);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_OCVAvgCelVolt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S580>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_OCVAvgCelVolt_SigSts_Value(&tmpRead_2a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S577>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2a) & 3U) != 0U)
    {
        /* Transition: '<S580>:100' */
        /* Transition: '<S580>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S580>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2a) & 4U) != 0U)
        {
            /* Transition: '<S580>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S580>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S580>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_OCVAvgCelVolt_CallStatus = 3U;

                /* Event: '<S580>:40' */
                /* Transition: '<S580>:115' */
                /* Transition: '<S580>:114' */
            }
        }
        else
        {
            /* Transition: '<S580>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hb) == 133)
            {
                /* Transition: '<S580>:95' */
                /* Transition: '<S580>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_OCVAvgCelVolt_CallStatus = 4U;

                /* Transition: '<S580>:114' */
            }
            else
            {
                /* Transition: '<S580>:120' */
                if ((((uint32)tmpRead_2a) & 8U) != 0U)
                {
                    /* Transition: '<S580>:122' */
                    /* Transition: '<S580>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S580>:126' */
                }
                else
                {
                    /* Transition: '<S580>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S580>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_OCVAvgCelVolt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S516>/Poke' */
                /* FunctionCaller: '<S582>/Function Caller' */
                /* Event: '<S580>:38' */
                Rte_Call_PokeBPCR_U_OCVAveCellVoltage_PokeBPCR_U_OCVAveCellVoltage
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__lb, FA_out_ih);

                /* End of Outputs for SubSystem: '<S516>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S580>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_OCVAvgCelVolt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S516>/Fsft' */
        /* FunctionCaller: '<S581>/Function Caller' */
        /* Event: '<S580>:39' */
        Rte_Call_FsftBPCR_U_OCVAveCellVoltage_FsftBPCR_U_OCVAveCellVoltage();

        /* End of Outputs for SubSystem: '<S516>/Fsft' */
        /* Transition: '<S580>:113' */
        /* Transition: '<S580>:115' */
        /* Transition: '<S580>:114' */
    }

    /* End of Chart: '<S577>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_OCVMaxCelVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_OCVMaxCelVolt_ErrSts'
     */
    /* Transition: '<S580>:107' */
    rtb_TmpSignalConversionAtVeC_fv = Rte_Read_VeCRDB_U_BPCM_OCVMaxCelVolt_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__dt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_OCVMaxCelVolt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S586>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_OCVMaxCelVolt_SigSts_Value(&tmpRead_2b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S583>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2b) & 3U) != 0U)
    {
        /* Transition: '<S586>:100' */
        /* Transition: '<S586>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S586>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2b) & 4U) != 0U)
        {
            /* Transition: '<S586>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S586>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S586>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_OCVMaxCelVolt_CallStatus = 3U;

                /* Event: '<S586>:40' */
                /* Transition: '<S586>:115' */
                /* Transition: '<S586>:114' */
            }
        }
        else
        {
            /* Transition: '<S586>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_fv) == 133)
            {
                /* Transition: '<S586>:95' */
                /* Transition: '<S586>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_OCVMaxCelVolt_CallStatus = 4U;

                /* Transition: '<S586>:114' */
            }
            else
            {
                /* Transition: '<S586>:120' */
                if ((((uint32)tmpRead_2b) & 8U) != 0U)
                {
                    /* Transition: '<S586>:122' */
                    /* Transition: '<S586>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S586>:126' */
                }
                else
                {
                    /* Transition: '<S586>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S586>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_OCVMaxCelVolt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S517>/Poke' */
                /* FunctionCaller: '<S588>/Function Caller' */
                /* Event: '<S586>:38' */
                Rte_Call_PokeBPCR_U_OCVMaxCellVoltage_PokeBPCR_U_OCVMaxCellVoltage
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__dt, FA_out_ih);

                /* End of Outputs for SubSystem: '<S517>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S586>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_OCVMaxCelVolt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S517>/Fsft' */
        /* FunctionCaller: '<S587>/Function Caller' */
        /* Event: '<S586>:39' */
        Rte_Call_FsftBPCR_U_OCVMaxCellVoltage_FsftBPCR_U_OCVMaxCellVoltage();

        /* End of Outputs for SubSystem: '<S517>/Fsft' */
        /* Transition: '<S586>:113' */
        /* Transition: '<S586>:115' */
        /* Transition: '<S586>:114' */
    }

    /* End of Chart: '<S583>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_OCVMinCelVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_OCVMinCelVolt_ErrSts'
     */
    /* Transition: '<S586>:107' */
    rtb_TmpSignalConversionAtVeC_gl = Rte_Read_VeCRDB_U_BPCM_OCVMinCelVolt_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__aq);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_OCVMinCelVolt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S592>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_OCVMinCelVolt_SigSts_Value(&tmpRead_2c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S589>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2c) & 3U) != 0U)
    {
        /* Transition: '<S592>:100' */
        /* Transition: '<S592>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S592>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2c) & 4U) != 0U)
        {
            /* Transition: '<S592>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S592>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S592>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_OCVMinCelVolt_CallStatus = 3U;

                /* Event: '<S592>:40' */
                /* Transition: '<S592>:115' */
                /* Transition: '<S592>:114' */
            }
        }
        else
        {
            /* Transition: '<S592>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_gl) == 133)
            {
                /* Transition: '<S592>:95' */
                /* Transition: '<S592>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_OCVMinCelVolt_CallStatus = 4U;

                /* Transition: '<S592>:114' */
            }
            else
            {
                /* Transition: '<S592>:120' */
                if ((((uint32)tmpRead_2c) & 8U) != 0U)
                {
                    /* Transition: '<S592>:122' */
                    /* Transition: '<S592>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S592>:126' */
                }
                else
                {
                    /* Transition: '<S592>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S592>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_OCVMinCelVolt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S518>/Poke' */
                /* FunctionCaller: '<S594>/Function Caller' */
                /* Event: '<S592>:38' */
                Rte_Call_PokeBPCR_U_OCVMinCellVoltage_PokeBPCR_U_OCVMinCellVoltage
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__aq, FA_out_ih);

                /* End of Outputs for SubSystem: '<S518>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S592>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_OCVMinCelVolt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S518>/Fsft' */
        /* FunctionCaller: '<S593>/Function Caller' */
        /* Event: '<S592>:39' */
        Rte_Call_FsftBPCR_U_OCVMinCellVoltage_FsftBPCR_U_OCVMinCellVoltage();

        /* End of Outputs for SubSystem: '<S518>/Fsft' */
        /* Transition: '<S592>:113' */
        /* Transition: '<S592>:115' */
        /* Transition: '<S592>:114' */
    }

    /* End of Chart: '<S589>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngTorqACCCapability_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngTorqACCCapability_ErrSts'
     */
    /* Transition: '<S592>:107' */
    rtb_TmpSignalConversionAtVeSR_g =
        Rte_Read_VeSR1B_M_EngTorqACCCapability_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_E);

    /* RelationalOperator: '<S2>/Relational Operator' incorporates:
     *  Constant: '<S16>/Constant'
     */
    FA_out_ih = (((uint32)rtb_Switch) == CePWMD_e_LOC_Enable);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngTorqACCCapability_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S606>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngTorqACCCapability_SigSts_Value(&tmpRead_5u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S603>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5u) & 3U) != 0U)
    {
        /* Transition: '<S606>:100' */
        /* Transition: '<S606>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S606>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5u) & 4U) != 0U)
        {
            /* Transition: '<S606>:96' */
            if (FA_out_ih)
            {
                /* Transition: '<S606>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S606>:110' */
                /* Call Tmot */
                VeSR1B_y_EngTqACCCapability_CallStatus = 3U;

                /* Event: '<S606>:40' */
                /* Transition: '<S606>:115' */
                /* Transition: '<S606>:114' */
            }
        }
        else
        {
            /* Transition: '<S606>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_g) == 133)
            {
                /* Transition: '<S606>:95' */
                /* Transition: '<S606>:116' */
                /* Call Nothing */
                VeSR1B_y_EngTqACCCapability_CallStatus = 4U;

                /* Transition: '<S606>:114' */
            }
            else
            {
                /* Transition: '<S606>:120' */
                if ((((uint32)tmpRead_5u) & 8U) != 0U)
                {
                    /* Transition: '<S606>:122' */
                    /* Transition: '<S606>:125' */
                    FA_out_dv = true;

                    /* Transition: '<S606>:126' */
                }
                else
                {
                    /* Transition: '<S606>:124' */
                    FA_out_dv = false;
                }

                /* Transition: '<S606>:117' */
                /* Call Poke */
                VeSR1B_y_EngTqACCCapability_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S602>/Poke' */
                /* FunctionCaller: '<S605>/Function Caller' */
                /* Event: '<S606>:38' */
                Rte_Call_PokeETQR_M_EngTorqACC4Capability_PokeETQR_M_EngTorqACC4Capability
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_E, FA_out_dv);

                /* End of Outputs for SubSystem: '<S602>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S606>:111' */
        /* Call Fsft */
        VeSR1B_y_EngTqACCCapability_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S602>/Fsft' */
        /* FunctionCaller: '<S604>/Function Caller' */
        /* Event: '<S606>:39' */
        Rte_Call_FsftETQR_M_EngTorqACC4Capability_FsftETQR_M_EngTorqACC4Capability
            ();

        /* End of Outputs for SubSystem: '<S602>/Fsft' */
        /* Transition: '<S606>:113' */
        /* Transition: '<S606>:115' */
        /* Transition: '<S606>:114' */
    }

    /* End of Chart: '<S603>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngTrqCapbltyMaxOffTrq_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngTrqCapbltyMaxOffTrq_ErrSts'
     */
    /* Transition: '<S606>:107' */
    rtb_TmpSignalConversionAtVeSR_o =
        Rte_Read_VeSR1B_M_EngTrqCapbltyMaxOffTrq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_b);

    /* SignalConversion generated from: '<S2>/VeSR1B_y_EngTorqCapbltyFrmCntr' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngTorqCapbltyFrmCntr'
     */
    (void)Rte_Read_VeSR1B_y_EngTorqCapbltyFrmCntr_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_E);

    /* SignalConversion generated from: '<S2>/VeSR1B_b_EngTqCapbltEngOpMd' incorporates:
     *  Inport: '<Root>/VeSR1B_b_EngTqCapbltEngOpMd'
     */
    (void)Rte_Read_VeSR1B_b_EngTqCapbltEngOpMd_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngTrqCapbltyMaxOffTrq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S610>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngTrqCapbltyMaxOffTrq_SigSts_Value(&tmpRead_5v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S608>/Chart' */
    if ((((uint32)tmpRead_5v) & 3U) != 0U)
    {
        /* Transition: '<S610>:100' */
        /* Transition: '<S610>:103' */
        /* Transition: '<S610>:111' */
        /* Call Fsft */
        VeSR1B_y_EngTqCapbltMaxOfTq_CallStatus = 2U;

        /* Event: '<S610>:39' */
        /* Transition: '<S610>:113' */
        /* Transition: '<S610>:115' */
        /* Transition: '<S610>:114' */
    }
    else
    {
        /* Transition: '<S610>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5v) & 4U) != 0U)
        {
            /* Transition: '<S610>:96' */
            if (FA_out_ih)
            {
                /* Transition: '<S610>:88' */
                /* Transition: '<S610>:111' */
                /* Call Fsft */
                VeSR1B_y_EngTqCapbltMaxOfTq_CallStatus = 2U;

                /* Event: '<S610>:39' */
                /* Transition: '<S610>:113' */
                /* Transition: '<S610>:115' */
                /* Transition: '<S610>:114' */
            }
            else
            {
                /* Transition: '<S610>:110' */
                /* Call Tmot */
                VeSR1B_y_EngTqCapbltMaxOfTq_CallStatus = 3U;

                /* Event: '<S610>:40' */
                /* Transition: '<S610>:115' */
                /* Transition: '<S610>:114' */
            }
        }
        else
        {
            /* Transition: '<S610>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_o) == 133)
            {
                /* Transition: '<S610>:95' */
                /* Transition: '<S610>:116' */
                /* Call Nothing */
                VeSR1B_y_EngTqCapbltMaxOfTq_CallStatus = 4U;

                /* Transition: '<S610>:114' */
            }
            else
            {
                /* Transition: '<S610>:120' */
                if ((((uint32)tmpRead_5v) & 8U) != 0U)
                {
                    /* Transition: '<S610>:122' */
                    /* Transition: '<S610>:125' */
                    FA_out_dv = true;

                    /* Transition: '<S610>:126' */
                }
                else
                {
                    /* Transition: '<S610>:124' */
                    FA_out_dv = false;
                }

                /* Transition: '<S610>:117' */
                /* Call Poke */
                VeSR1B_y_EngTqCapbltMaxOfTq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S607>/Poke' */
                /* FunctionCaller: '<S609>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S609>/Data Type Conversion1'
                 */
                /* Event: '<S610>:38' */
                Rte_Call_PokeETQR_M_MinDragCapability_PokeETQR_M_MinDragCapability
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_b, (sint16)
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_E,
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_E, FA_out_dv);

                /* End of Outputs for SubSystem: '<S607>/Poke' */
            }
        }
    }

    /* End of Chart: '<S608>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngTorqCapbltyMaxTorq_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngTorqCapbltyMaxTorq_ErrSts'
     */
    /* Transition: '<S610>:107' */
    rtb_TmpSignalConversionAtVeSR_l =
        Rte_Read_VeSR1B_M_EngTorqCapbltyMaxTorq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngTorqCapbltyMaxTorq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S614>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngTorqCapbltyMaxTorq_SigSts_Value(&tmpRead_5w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S612>/Chart' */
    if ((((uint32)tmpRead_5w) & 3U) != 0U)
    {
        /* Transition: '<S614>:100' */
        /* Transition: '<S614>:103' */
        /* Transition: '<S614>:111' */
        /* Call Fsft */
        VeSR1B_y_EngTqCapbltyMaxTq_CallStatus = 2U;

        /* Event: '<S614>:39' */
        /* Transition: '<S614>:113' */
        /* Transition: '<S614>:115' */
        /* Transition: '<S614>:114' */
    }
    else
    {
        /* Transition: '<S614>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5w) & 4U) != 0U)
        {
            /* Transition: '<S614>:96' */
            if (FA_out_ih)
            {
                /* Transition: '<S614>:88' */
                /* Transition: '<S614>:111' */
                /* Call Fsft */
                VeSR1B_y_EngTqCapbltyMaxTq_CallStatus = 2U;

                /* Event: '<S614>:39' */
                /* Transition: '<S614>:113' */
                /* Transition: '<S614>:115' */
                /* Transition: '<S614>:114' */
            }
            else
            {
                /* Transition: '<S614>:110' */
                /* Call Tmot */
                VeSR1B_y_EngTqCapbltyMaxTq_CallStatus = 3U;

                /* Event: '<S614>:40' */
                /* Transition: '<S614>:115' */
                /* Transition: '<S614>:114' */
            }
        }
        else
        {
            /* Transition: '<S614>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_l) == 133)
            {
                /* Transition: '<S614>:95' */
                /* Transition: '<S614>:116' */
                /* Call Nothing */
                VeSR1B_y_EngTqCapbltyMaxTq_CallStatus = 4U;

                /* Transition: '<S614>:114' */
            }
            else
            {
                /* Transition: '<S614>:120' */
                if ((((uint32)tmpRead_5w) & 8U) != 0U)
                {
                    /* Transition: '<S614>:122' */
                    /* Transition: '<S614>:125' */
                    FA_out_dv = true;

                    /* Transition: '<S614>:126' */
                }
                else
                {
                    /* Transition: '<S614>:124' */
                    FA_out_dv = false;
                }

                /* Transition: '<S614>:117' */
                /* Call Poke */
                VeSR1B_y_EngTqCapbltyMaxTq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S611>/Poke' */
                /* FunctionCaller: '<S613>/Function Caller1' incorporates:
                 *  DataTypeConversion: '<S613>/Data Type Conversion2'
                 */
                /* Event: '<S614>:38' */
                Rte_Call_PokeETQR_M_EngCapabilityMax_PokeETQR_M_EngCapabilityMax
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_c, (sint16)
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_E,
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_E, FA_out_dv);

                /* End of Outputs for SubSystem: '<S611>/Poke' */
            }
        }
    }

    /* End of Chart: '<S612>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngTrqCapbltyMinRunTrq_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngTrqCapbltyMinRunTrq_ErrSts'
     */
    /* Transition: '<S614>:107' */
    rtb_TmpSignalConversionAtVeSR_f =
        Rte_Read_VeSR1B_M_EngTrqCapbltyMinRunTrq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngTrqCapbltyMinRunTrq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S618>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngTrqCapbltyMinRunTrq_SigSts_Value(&tmpRead_5x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S616>/Chart' */
    if ((((uint32)tmpRead_5x) & 3U) != 0U)
    {
        /* Transition: '<S618>:100' */
        /* Transition: '<S618>:103' */
        /* Transition: '<S618>:111' */
        /* Call Fsft */
        VeSR1B_y_EngTqCapbltMinRnTq_CallStatus = 2U;

        /* Event: '<S618>:39' */
        /* Transition: '<S618>:113' */
        /* Transition: '<S618>:115' */
        /* Transition: '<S618>:114' */
    }
    else
    {
        /* Transition: '<S618>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5x) & 4U) != 0U)
        {
            /* Transition: '<S618>:96' */
            if (FA_out_ih)
            {
                /* Transition: '<S618>:88' */
                /* Transition: '<S618>:111' */
                /* Call Fsft */
                VeSR1B_y_EngTqCapbltMinRnTq_CallStatus = 2U;

                /* Event: '<S618>:39' */
                /* Transition: '<S618>:113' */
                /* Transition: '<S618>:115' */
                /* Transition: '<S618>:114' */
            }
            else
            {
                /* Transition: '<S618>:110' */
                /* Call Tmot */
                VeSR1B_y_EngTqCapbltMinRnTq_CallStatus = 3U;

                /* Event: '<S618>:40' */
                /* Transition: '<S618>:115' */
                /* Transition: '<S618>:114' */
            }
        }
        else
        {
            /* Transition: '<S618>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_f) == 133)
            {
                /* Transition: '<S618>:95' */
                /* Transition: '<S618>:116' */
                /* Call Nothing */
                VeSR1B_y_EngTqCapbltMinRnTq_CallStatus = 4U;

                /* Transition: '<S618>:114' */
            }
            else
            {
                /* Transition: '<S618>:120' */
                if ((((uint32)tmpRead_5x) & 8U) != 0U)
                {
                    /* Transition: '<S618>:122' */
                    /* Transition: '<S618>:125' */
                    FA_out_dv = true;

                    /* Transition: '<S618>:126' */
                }
                else
                {
                    /* Transition: '<S618>:124' */
                    FA_out_dv = false;
                }

                /* Transition: '<S618>:117' */
                /* Call Poke */
                VeSR1B_y_EngTqCapbltMinRnTq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S615>/Poke' */
                /* FunctionCaller: '<S617>/Function Caller1' incorporates:
                 *  DataTypeConversion: '<S617>/Data Type Conversion2'
                 */
                /* Event: '<S618>:38' */
                Rte_Call_PokeETQR_M_EngCapabilityMinRun_PokeETQR_M_EngCapabilityMinRun
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_d, (sint16)
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_E,
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_E, FA_out_dv);

                /* End of Outputs for SubSystem: '<S615>/Poke' */
            }
        }
    }

    /* End of Chart: '<S616>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngTorqCapbltyMinTorq_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngTorqCapbltyMinTorq_ErrSts'
     */
    /* Transition: '<S618>:107' */
    rtb_TmpSignalConversionAtVeSR_c =
        Rte_Read_VeSR1B_M_EngTorqCapbltyMinTorq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngTorqCapbltyMinTorq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S622>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngTorqCapbltyMinTorq_SigSts_Value(&tmpRead_5y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S620>/Chart' */
    if ((((uint32)tmpRead_5y) & 3U) != 0U)
    {
        /* Transition: '<S622>:100' */
        /* Transition: '<S622>:103' */
        /* Transition: '<S622>:111' */
        /* Call Fsft */
        VeSR1B_y_EngTqCapbltyMinTq_CallStatus = 2U;

        /* Event: '<S622>:39' */
        /* Transition: '<S622>:113' */
        /* Transition: '<S622>:115' */
        /* Transition: '<S622>:114' */
    }
    else
    {
        /* Transition: '<S622>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5y) & 4U) != 0U)
        {
            /* Transition: '<S622>:96' */
            if (FA_out_ih)
            {
                /* Transition: '<S622>:88' */
                /* Transition: '<S622>:111' */
                /* Call Fsft */
                VeSR1B_y_EngTqCapbltyMinTq_CallStatus = 2U;

                /* Event: '<S622>:39' */
                /* Transition: '<S622>:113' */
                /* Transition: '<S622>:115' */
                /* Transition: '<S622>:114' */
            }
            else
            {
                /* Transition: '<S622>:110' */
                /* Call Tmot */
                VeSR1B_y_EngTqCapbltyMinTq_CallStatus = 3U;

                /* Event: '<S622>:40' */
                /* Transition: '<S622>:115' */
                /* Transition: '<S622>:114' */
            }
        }
        else
        {
            /* Transition: '<S622>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_c) == 133)
            {
                /* Transition: '<S622>:95' */
                /* Transition: '<S622>:116' */
                /* Call Nothing */
                VeSR1B_y_EngTqCapbltyMinTq_CallStatus = 4U;

                /* Transition: '<S622>:114' */
            }
            else
            {
                /* Transition: '<S622>:120' */
                if ((((uint32)tmpRead_5y) & 8U) != 0U)
                {
                    /* Transition: '<S622>:122' */
                    /* Transition: '<S622>:125' */
                    FA_out_dv = true;

                    /* Transition: '<S622>:126' */
                }
                else
                {
                    /* Transition: '<S622>:124' */
                    FA_out_dv = false;
                }

                /* Transition: '<S622>:117' */
                /* Call Poke */
                VeSR1B_y_EngTqCapbltyMinTq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S619>/Poke' */
                /* FunctionCaller: '<S621>/Function Caller1' incorporates:
                 *  DataTypeConversion: '<S621>/Data Type Conversion2'
                 */
                /* Event: '<S622>:38' */
                Rte_Call_PokeETQR_M_EngCapabilityMinOff_PokeETQR_M_EngCapabilityMinOff
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_p, (sint16)
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_E,
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_E, FA_out_dv);

                /* End of Outputs for SubSystem: '<S619>/Poke' */
            }
        }
    }

    /* End of Chart: '<S620>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngTrqCapbltyRefEngSpd_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngTrqCapbltyRefEngSpd_ErrSts'
     */
    /* Transition: '<S622>:107' */
    rtb_TmpSignalConversionAtVeSR_a =
        Rte_Read_VeSR1B_n_EngTrqCapbltyRefEngSpd_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_n_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngTrqCapbltyRefEngSpd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S626>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngTrqCapbltyRefEngSpd_SigSts_Value(&tmpRead_5z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S624>/Chart' */
    if ((((uint32)tmpRead_5z) & 3U) != 0U)
    {
        /* Transition: '<S626>:100' */
        /* Transition: '<S626>:103' */
        /* Transition: '<S626>:111' */
        /* Call Fsft */
        VeSR1B_y_EngTqCpbltRfEngSpd_CallStatus = 2U;

        /* Event: '<S626>:39' */
        /* Transition: '<S626>:113' */
        /* Transition: '<S626>:115' */
        /* Transition: '<S626>:114' */
    }
    else
    {
        /* Transition: '<S626>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5z) & 4U) != 0U)
        {
            /* Transition: '<S626>:96' */
            if (FA_out_ih)
            {
                /* Transition: '<S626>:88' */
                /* Transition: '<S626>:111' */
                /* Call Fsft */
                VeSR1B_y_EngTqCpbltRfEngSpd_CallStatus = 2U;

                /* Event: '<S626>:39' */
                /* Transition: '<S626>:113' */
                /* Transition: '<S626>:115' */
                /* Transition: '<S626>:114' */
            }
            else
            {
                /* Transition: '<S626>:110' */
                /* Call Tmot */
                VeSR1B_y_EngTqCpbltRfEngSpd_CallStatus = 3U;

                /* Event: '<S626>:40' */
                /* Transition: '<S626>:115' */
                /* Transition: '<S626>:114' */
            }
        }
        else
        {
            /* Transition: '<S626>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_a) == 133)
            {
                /* Transition: '<S626>:95' */
                /* Transition: '<S626>:116' */
                /* Call Nothing */
                VeSR1B_y_EngTqCpbltRfEngSpd_CallStatus = 4U;

                /* Transition: '<S626>:114' */
            }
            else
            {
                /* Transition: '<S626>:120' */
                if ((((uint32)tmpRead_5z) & 8U) != 0U)
                {
                    /* Transition: '<S626>:122' */
                    /* Transition: '<S626>:125' */
                    FA_out_ih = true;

                    /* Transition: '<S626>:126' */
                }
                else
                {
                    /* Transition: '<S626>:124' */
                    FA_out_ih = false;
                }

                /* Transition: '<S626>:117' */
                /* Call Poke */
                VeSR1B_y_EngTqCpbltRfEngSpd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S623>/Poke' */
                /* FunctionCaller: '<S625>/Function Caller1' incorporates:
                 *  DataTypeConversion: '<S625>/Data Type Conversion2'
                 */
                /* Event: '<S626>:38' */
                Rte_Call_PokeETQR_n_EngCapability_PokeETQR_n_EngCapability
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_n_E, (sint16)
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_E,
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_E, FA_out_ih);

                /* End of Outputs for SubSystem: '<S623>/Poke' */
            }
        }
    }

    /* End of Chart: '<S624>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_OBC_Temp1_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_OBC_Temp1_ErrSts'
     */
    /* Transition: '<S626>:107' */
    rtb_TmpSignalConversionAtVeCANR =
        Rte_Read_VeCANR_T_OBC_Temp1_VeCANR_T_OBC_Temp1
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_T_O);

VeCANR_T_OBC_Temp1_CR2B_BLUEN_ac_Test_1 = CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_T_O;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCANR_b_OBC_Temp1TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S635>:1' */
    (void)Rte_Read_VeCANR_b_OBC_Temp1TO_VeCANR_b_OBC_Temp1TO(&FA_out_ec3);

VeCANR_b_OBC_Temp1TO_CR2B_BLUEN_ac_Test_1 = FA_out_ec3;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S631>/Chart' */
    if (FA_out_ec3)
    {
        /* Transition: '<S635>:4' */
        if (rtb_RelationalOperator1)
        {
            /* Transition: '<S635>:6' */
            /* Transition: '<S635>:25' */
            /* Call Fsft */
            VeCANR_y_OBC_Temp1_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S627>/Fsft' */
            /* FunctionCaller: '<S636>/Function Caller' */
            /* Event: '<S635>:39' */
            Rte_Call_FsftTMIR_T_OBCMTemp1_FsftTMIR_T_OBCMTemp1();

            /* End of Outputs for SubSystem: '<S627>/Fsft' */
            /* Transition: '<S635>:29' */
        }
        else
        {
            /* Transition: '<S635>:30' */
            /* Call Tmot */
            VeCANR_y_OBC_Temp1_CallStatus = 3U;

            /* Outputs for Function Call SubSystem: '<S627>/Tmot' */
            /* FunctionCaller: '<S638>/Function Caller' */
            /* Event: '<S635>:40' */
            Rte_Call_TmotTMIR_b_OBCMTemp1_TmotTMIR_b_OBCMTemp1();

            /* End of Outputs for SubSystem: '<S627>/Tmot' */
        }

        /* Transition: '<S635>:36' */
        /* Transition: '<S635>:23' */
    }
    else
    {
        /* Transition: '<S635>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCANR) == 133)
        {
            /* Transition: '<S635>:33' */
            /* Transition: '<S635>:35' */
            /* Call Nothing */
            VeCANR_y_OBC_Temp1_CallStatus = 4U;

            /* Transition: '<S635>:23' */
        }
        else
        {
            /* Transition: '<S635>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeCANR) == 1)
            {
                /* Transition: '<S635>:48' */
                /* Transition: '<S635>:53' */
                FA_out_ec3 = true;

                /* Transition: '<S635>:56' */
            }
            else
            {
                /* Transition: '<S635>:52' */
            }

            /* Transition: '<S635>:37' */
            /* Call Poke */
            VeCANR_y_OBC_Temp1_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S627>/Poke' */
            /* FunctionCaller: '<S637>/Function Caller' */
            /* Event: '<S635>:38' */
            Rte_Call_PokeTMIR_T_OBCMTemp1_PokeTMIR_T_OBCMTemp1
                (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_T_O, FA_out_ec3);

            /* End of Outputs for SubSystem: '<S627>/Poke' */
        }
    }

    /* End of Chart: '<S631>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_OBC_Temp2_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_OBC_Temp2_ErrSts'
     */
    /* Transition: '<S635>:19' */
    rtb_TmpSignalConversionAtVeCA_n =
        Rte_Read_VeCANR_T_OBC_Temp2_VeCANR_T_OBC_Temp2
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_T_m);

VeCANR_T_OBC_Temp2_CR2B_BLUEN_ac_Test_1 = CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_T_m;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCANR_b_OBC_Temp2TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S643>:1' */
    (void)Rte_Read_VeCANR_b_OBC_Temp2TO_VeCANR_b_OBC_Temp2TO(&FA_out_p5t);

VeCANR_b_OBC_Temp2TO_CR2B_BLUEN_ac_Test_1 = FA_out_p5t;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S639>/Chart' */
    if (FA_out_p5t)
    {
        /* Transition: '<S643>:4' */
        if (rtb_RelationalOperator1)
        {
            /* Transition: '<S643>:6' */
            /* Transition: '<S643>:25' */
            /* Call Fsft */
            VeCANR_y_OBC_Temp2_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S628>/Fsft' */
            /* FunctionCaller: '<S644>/Function Caller' */
            /* Event: '<S643>:39' */
            Rte_Call_FsftTMIR_T_OBCMTemp2_FsftTMIR_T_OBCMTemp2();

            /* End of Outputs for SubSystem: '<S628>/Fsft' */
            /* Transition: '<S643>:29' */
        }
        else
        {
            /* Transition: '<S643>:30' */
            /* Call Tmot */
            VeCANR_y_OBC_Temp2_CallStatus = 3U;

            /* Outputs for Function Call SubSystem: '<S628>/Tmot' */
            /* FunctionCaller: '<S646>/Function Caller' */
            /* Event: '<S643>:40' */
            Rte_Call_TmotTMIR_b_OBCMTemp2_TmotTMIR_b_OBCMTemp2();

            /* End of Outputs for SubSystem: '<S628>/Tmot' */
        }

        /* Transition: '<S643>:36' */
        /* Transition: '<S643>:23' */
    }
    else
    {
        /* Transition: '<S643>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_n) == 133)
        {
            /* Transition: '<S643>:33' */
            /* Transition: '<S643>:35' */
            /* Call Nothing */
            VeCANR_y_OBC_Temp2_CallStatus = 4U;

            /* Transition: '<S643>:23' */
        }
        else
        {
            /* Transition: '<S643>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeCA_n) == 1)
            {
                /* Transition: '<S643>:48' */
                /* Transition: '<S643>:53' */
                FA_out_p5t = true;

                /* Transition: '<S643>:56' */
            }
            else
            {
                /* Transition: '<S643>:52' */
            }

            /* Transition: '<S643>:37' */
            /* Call Poke */
            VeCANR_y_OBC_Temp2_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S628>/Poke' */
            /* FunctionCaller: '<S645>/Function Caller' */
            /* Event: '<S643>:38' */
            Rte_Call_PokeTMIR_T_OBCMTemp2_PokeTMIR_T_OBCMTemp2
                (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_T_m, FA_out_p5t);

            /* End of Outputs for SubSystem: '<S628>/Poke' */
        }
    }

    /* End of Chart: '<S639>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_OBC_Temp3_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_OBC_Temp3_ErrSts'
     */
    /* Transition: '<S643>:19' */
    rtb_TmpSignalConversionAtVeCA_d =
        Rte_Read_VeCANR_T_OBC_Temp3_VeCANR_T_OBC_Temp3
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_T_j);

VeCANR_T_OBC_Temp3_CR2B_BLUEN_ac_Test_1 = CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_T_j;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCANR_b_OBC_Temp3TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S650>:1' */
    (void)Rte_Read_VeCANR_b_OBC_Temp3TO_VeCANR_b_OBC_Temp3TO(&FA_out_nj);

VeCANR_b_OBC_Temp3TO_CR2B_BLUEN_ac_Test_1 = FA_out_nj;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S647>/Chart' */
    if (FA_out_nj)
    {
        /* Transition: '<S650>:4' */
        if (rtb_RelationalOperator1)
        {
            /* Transition: '<S650>:6' */
            /* Transition: '<S650>:25' */
            /* Call Fsft */
            VeCANR_y_OBC_Temp3_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S629>/Fsft' */
            /* FunctionCaller: '<S651>/Function Caller' */
            /* Event: '<S650>:39' */
            Rte_Call_FsftTMIR_T_OBCMTemp3_FsftTMIR_T_OBCMTemp3();

            /* End of Outputs for SubSystem: '<S629>/Fsft' */
            /* Transition: '<S650>:29' */
        }
        else
        {
            /* Transition: '<S650>:30' */
            /* Call Tmot */
            VeCANR_y_OBC_Temp3_CallStatus = 3U;

            /* Event: '<S650>:40' */
        }

        /* Transition: '<S650>:36' */
        /* Transition: '<S650>:23' */
    }
    else
    {
        /* Transition: '<S650>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_d) == 133)
        {
            /* Transition: '<S650>:33' */
            /* Transition: '<S650>:35' */
            /* Call Nothing */
            VeCANR_y_OBC_Temp3_CallStatus = 4U;

            /* Transition: '<S650>:23' */
        }
        else
        {
            /* Transition: '<S650>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeCA_d) == 1)
            {
                /* Transition: '<S650>:48' */
                /* Transition: '<S650>:53' */
                FA_out_nj = true;

                /* Transition: '<S650>:56' */
            }
            else
            {
                /* Transition: '<S650>:52' */
            }

            /* Transition: '<S650>:37' */
            /* Call Poke */
            VeCANR_y_OBC_Temp3_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S629>/Poke' */
            /* FunctionCaller: '<S652>/Function Caller' */
            /* Event: '<S650>:38' */
            Rte_Call_PokeTMIR_T_OBCMTemp3_PokeTMIR_T_OBCMTemp3
                (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_T_j, FA_out_nj);

            /* End of Outputs for SubSystem: '<S629>/Poke' */
        }
    }

    /* End of Chart: '<S647>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_OBC_Temp4_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_OBC_Temp4_ErrSts'
     */
    /* Transition: '<S650>:19' */
    rtb_TmpSignalConversionAtVeCA_b =
        Rte_Read_VeCANR_T_OBC_Temp4_VeCANR_T_OBC_Temp4
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_T_l);

VeCANR_T_OBC_Temp4_CR2B_BLUEN_ac_Test_1 = CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_T_l;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCANR_b_OBC_Temp4TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S656>:1' */
    (void)Rte_Read_VeCANR_b_OBC_Temp4TO_VeCANR_b_OBC_Temp4TO(&FA_out_om);

VeCANR_b_OBC_Temp4TO_CR2B_BLUEN_ac_Test_1 = FA_out_om;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S653>/Chart' */
    if (FA_out_om)
    {
        /* Transition: '<S656>:4' */
        if (rtb_RelationalOperator1)
        {
            /* Transition: '<S656>:6' */
            /* Transition: '<S656>:25' */
            /* Call Fsft */
            VeCANR_y_OBC_Temp4_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S630>/Fsft' */
            /* FunctionCaller: '<S657>/Function Caller' */
            /* Event: '<S656>:39' */
            Rte_Call_FsftTMIR_T_OBCMTemp4_FsftTMIR_T_OBCMTemp4();

            /* End of Outputs for SubSystem: '<S630>/Fsft' */
            /* Transition: '<S656>:29' */
        }
        else
        {
            /* Transition: '<S656>:30' */
            /* Call Tmot */
            VeCANR_y_OBC_Temp4_CallStatus = 3U;

            /* Event: '<S656>:40' */
        }

        /* Transition: '<S656>:36' */
        /* Transition: '<S656>:23' */
    }
    else
    {
        /* Transition: '<S656>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_b) == 133)
        {
            /* Transition: '<S656>:33' */
            /* Transition: '<S656>:35' */
            /* Call Nothing */
            VeCANR_y_OBC_Temp4_CallStatus = 4U;

            /* Transition: '<S656>:23' */
        }
        else
        {
            /* Transition: '<S656>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeCA_b) == 1)
            {
                /* Transition: '<S656>:48' */
                /* Transition: '<S656>:53' */
                FA_out_om = true;

                /* Transition: '<S656>:56' */
            }
            else
            {
                /* Transition: '<S656>:52' */
            }

            /* Transition: '<S656>:37' */
            /* Call Poke */
            VeCANR_y_OBC_Temp4_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S630>/Poke' */
            /* FunctionCaller: '<S658>/Function Caller' */
            /* Event: '<S656>:38' */
            Rte_Call_PokeTMIR_T_OBCMTemp4_PokeTMIR_T_OBCMTemp4
                (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_T_l, FA_out_om);

            /* End of Outputs for SubSystem: '<S630>/Poke' */
        }
    }

    /* End of Chart: '<S653>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_Crank_Maturing_Fault_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_Crank_Maturing_Fault_ErrSts'
     */
    /* Transition: '<S656>:19' */
    rtb_TmpSignalConversionAtVeS_gw =
        Rte_Read_VeSR1B_b_Crank_Maturing_Fault_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_Crank_Maturing_Fault_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S692>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Crank_Maturing_Fault_SigSts_Value(&tmpRead_2d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S689>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2d) & 3U) != 0U)
    {
        /* Transition: '<S692>:100' */
        /* Transition: '<S692>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S692>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2d) & 4U) != 0U)
        {
            /* Transition: '<S692>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S692>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S692>:110' */
                /* Call Tmot */
                VeSR1B_y_Crank_Maturing_Fault_CallStatus = 3U;

                /* Event: '<S692>:40' */
                /* Transition: '<S692>:115' */
                /* Transition: '<S692>:114' */
            }
        }
        else
        {
            /* Transition: '<S692>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_gw) == 133)
            {
                /* Transition: '<S692>:95' */
                /* Transition: '<S692>:116' */
                /* Call Nothing */
                VeSR1B_y_Crank_Maturing_Fault_CallStatus = 4U;

                /* Transition: '<S692>:114' */
            }
            else
            {
                /* Transition: '<S692>:120' */
                /* Transition: '<S692>:117' */
                /* Call Poke */
                VeSR1B_y_Crank_Maturing_Fault_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S659>/Poke' */
                /* FunctionCaller: '<S694>/Function Caller' */
                /* Event: '<S692>:38' */
                Rte_Call_PokeESPR_b_CrankMaturingFault_PokeESPR_b_CrankMaturingFault
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_C);

                /* End of Outputs for SubSystem: '<S659>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S692>:111' */
        /* Call Fsft */
        VeSR1B_y_Crank_Maturing_Fault_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S659>/Fsft' */
        /* FunctionCaller: '<S693>/Function Caller' */
        /* Event: '<S692>:39' */
        Rte_Call_FsftESPR_b_CrankMaturingFault_FsftESPR_b_CrankMaturingFault();

        /* End of Outputs for SubSystem: '<S659>/Fsft' */
        /* Transition: '<S692>:113' */
        /* Transition: '<S692>:115' */
        /* Transition: '<S692>:114' */
    }

    /* End of Chart: '<S689>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_CylOff_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_CylOff_ErrSts'
     */
    /* Transition: '<S692>:107' */
    rtb_TmpSignalConversionAtVeS_fj = Rte_Read_VeSR1B_b_CylOff_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_CylOff_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S697>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_CylOff_SigSts_Value(&tmpRead_2e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S695>/Chart' */
    if ((((uint32)tmpRead_2e) & 3U) != 0U)
    {
        /* Transition: '<S697>:100' */
        /* Transition: '<S697>:103' */
        /* Transition: '<S697>:111' */
        /* Call Fsft */
        VeSR1B_y_CylOff_CallStatus = 2U;

        /* Event: '<S697>:39' */
        /* Transition: '<S697>:113' */
        /* Transition: '<S697>:115' */
        /* Transition: '<S697>:114' */
    }
    else
    {
        /* Transition: '<S697>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2e) & 4U) != 0U)
        {
            /* Transition: '<S697>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S697>:88' */
                /* Transition: '<S697>:111' */
                /* Call Fsft */
                VeSR1B_y_CylOff_CallStatus = 2U;

                /* Event: '<S697>:39' */
                /* Transition: '<S697>:113' */
                /* Transition: '<S697>:115' */
                /* Transition: '<S697>:114' */
            }
            else
            {
                /* Transition: '<S697>:110' */
                /* Call Tmot */
                VeSR1B_y_CylOff_CallStatus = 3U;

                /* Event: '<S697>:40' */
                /* Transition: '<S697>:115' */
                /* Transition: '<S697>:114' */
            }
        }
        else
        {
            /* Transition: '<S697>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fj) == 133)
            {
                /* Transition: '<S697>:95' */
                /* Transition: '<S697>:116' */
                /* Call Nothing */
                VeSR1B_y_CylOff_CallStatus = 4U;

                /* Transition: '<S697>:114' */
            }
            else
            {
                /* Transition: '<S697>:120' */
                /* Transition: '<S697>:117' */
                /* Call Poke */
                VeSR1B_y_CylOff_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S660>/Poke' */
                /* FunctionCaller: '<S698>/Function Caller' */
                /* Event: '<S697>:38' */
                Rte_Call_PokeENGR_b_ZylAbs_PokeENGR_b_ZylAbs
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_j);

                /* End of Outputs for SubSystem: '<S660>/Poke' */
            }
        }
    }

    /* End of Chart: '<S695>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ECMReq_Remedial_Stop_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ECMReq_Remedial_Stop_ErrSts'
     */
    /* Transition: '<S697>:107' */
    rtb_TmpSignalConversionAtVeSR_p =
        Rte_Read_VeSR1B_y_ECMReq_Remedial_Stop_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ECMReq_Remedial_Stop_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S702>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ECMReq_Remedial_Stop_SigSts_Value(&tmpRead_2f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S699>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2f) & 3U) != 0U)
    {
        /* Transition: '<S702>:100' */
        /* Transition: '<S702>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S702>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2f) & 4U) != 0U)
        {
            /* Transition: '<S702>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S702>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S702>:110' */
                /* Call Tmot */
                VeSR1B_y_ECMReq_Remedial_Stop_CallStatus = 3U;

                /* Event: '<S702>:40' */
                /* Transition: '<S702>:115' */
                /* Transition: '<S702>:114' */
            }
        }
        else
        {
            /* Transition: '<S702>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_p) == 133)
            {
                /* Transition: '<S702>:95' */
                /* Transition: '<S702>:116' */
                /* Call Nothing */
                VeSR1B_y_ECMReq_Remedial_Stop_CallStatus = 4U;

                /* Transition: '<S702>:114' */
            }
            else
            {
                /* Transition: '<S702>:120' */
                if ((((uint32)tmpRead_2f) & 8U) != 0U)
                {
                    /* Transition: '<S702>:122' */
                    /* Transition: '<S702>:125' */
                    FA_out_om = true;

                    /* Transition: '<S702>:126' */
                }
                else
                {
                    /* Transition: '<S702>:124' */
                    FA_out_om = false;
                }

                /* Transition: '<S702>:117' */
                /* Call Poke */
                VeSR1B_y_ECMReq_Remedial_Stop_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S661>/Poke' */
                /* FunctionCaller: '<S704>/Function Caller' */
                /* Event: '<S702>:38' */
                Rte_Call_PokeENGR_e_ECMReqRemStop_PokeENGR_e_ECMReqRemStop
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_i, FA_out_om);

                /* End of Outputs for SubSystem: '<S661>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S702>:111' */
        /* Call Fsft */
        VeSR1B_y_ECMReq_Remedial_Stop_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S661>/Fsft' */
        /* FunctionCaller: '<S703>/Function Caller' */
        /* Event: '<S702>:39' */
        Rte_Call_FsftENGR_b_ECMReqRemStop_FsftENGR_b_ECMReqRemStop();

        /* End of Outputs for SubSystem: '<S661>/Fsft' */
        /* Transition: '<S702>:113' */
        /* Transition: '<S702>:115' */
        /* Transition: '<S702>:114' */
    }

    /* End of Chart: '<S699>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ETRQ_Mode_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ETRQ_Mode_ErrSts'
     */
    /* Transition: '<S702>:107' */
    rtb_TmpSignalConversionAtVeS_fo = Rte_Read_VeSR1B_y_ETRQ_Mode_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ETRQ_Mode_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S707>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ETRQ_Mode_SigSts_Value(&tmpRead_2g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S705>/Chart' */
    if ((((uint32)tmpRead_2g) & 3U) != 0U)
    {
        /* Transition: '<S707>:100' */
        /* Transition: '<S707>:103' */
        /* Transition: '<S707>:111' */
        /* Call Fsft */
        VeSR1B_y_ETRQ_Mode_CallStatus = 2U;

        /* Event: '<S707>:39' */
        /* Transition: '<S707>:113' */
        /* Transition: '<S707>:115' */
        /* Transition: '<S707>:114' */
    }
    else
    {
        /* Transition: '<S707>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2g) & 4U) != 0U)
        {
            /* Transition: '<S707>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S707>:88' */
                /* Transition: '<S707>:111' */
                /* Call Fsft */
                VeSR1B_y_ETRQ_Mode_CallStatus = 2U;

                /* Event: '<S707>:39' */
                /* Transition: '<S707>:113' */
                /* Transition: '<S707>:115' */
                /* Transition: '<S707>:114' */
            }
            else
            {
                /* Transition: '<S707>:110' */
                /* Call Tmot */
                VeSR1B_y_ETRQ_Mode_CallStatus = 3U;

                /* Event: '<S707>:40' */
                /* Transition: '<S707>:115' */
                /* Transition: '<S707>:114' */
            }
        }
        else
        {
            /* Transition: '<S707>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fo) == 133)
            {
                /* Transition: '<S707>:95' */
                /* Transition: '<S707>:116' */
                /* Call Nothing */
                VeSR1B_y_ETRQ_Mode_CallStatus = 4U;

                /* Transition: '<S707>:114' */
            }
            else
            {
                /* Transition: '<S707>:120' */
                if ((((uint32)tmpRead_2g) & 8U) != 0U)
                {
                    /* Transition: '<S707>:122' */
                    /* Transition: '<S707>:125' */
                    FA_out_om = true;

                    /* Transition: '<S707>:126' */
                }
                else
                {
                    /* Transition: '<S707>:124' */
                    FA_out_om = false;
                }

                /* Transition: '<S707>:117' */
                /* Call Poke */
                VeSR1B_y_ETRQ_Mode_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S662>/Poke' */
                /* FunctionCaller: '<S708>/Function Caller' */
                /* Event: '<S707>:38' */
                Rte_Call_PokeENGR_e_ETRQ_Mode_PokeENGR_e_ETRQ_Mode
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_f, FA_out_om);

                /* End of Outputs for SubSystem: '<S662>/Poke' */
            }
        }
    }

    /* End of Chart: '<S705>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngActStdyStTorq_FD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngActStdyStTorq_FD11_ErrSts'
     */
    /* Transition: '<S707>:107' */
    rtb_TmpSignalConversionAtVeSR_e =
        Rte_Read_VeSR1B_M_EngActStdyStTorq_FD11_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__po);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngActStdyStTorq_FD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S712>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngActStdyStTorq_FD11_SigSts_Value(&tmpRead_2h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S709>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_EngActStdyStTorqV_FD11'
     */
    guard1 = false;
    if ((((uint32)tmpRead_2h) & 3U) != 0U)
    {
        /* Transition: '<S712>:100' */
        /* Transition: '<S712>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S712>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2h) & 4U) != 0U)
        {
            /* Transition: '<S712>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S712>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S712>:110' */
                /* Call Tmot */
                VeSR1B_y_EngActStdyStTorq_FD11_CallStatus = 3U;

                /* Event: '<S712>:40' */
                /* Transition: '<S712>:115' */
                /* Transition: '<S712>:114' */
            }
        }
        else
        {
            /* Transition: '<S712>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_e) == 133)
            {
                /* Transition: '<S712>:95' */
                /* Transition: '<S712>:116' */
                /* Call Nothing */
                VeSR1B_y_EngActStdyStTorq_FD11_CallStatus = 4U;

                /* Transition: '<S712>:114' */
            }
            else
            {
                /* Transition: '<S712>:120' */
                (void)Rte_Read_VeSR1B_b_EngActStdyStTorqV_FD11_Value(&FA_out_ja);

                /* Transition: '<S712>:117' */
                /* Call Poke */
                VeSR1B_y_EngActStdyStTorq_FD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S663>/Poke' */
                /* FunctionCaller: '<S714>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_EngActStdyStTorqV_FD11'
                 */
                /* Event: '<S712>:38' */
                Rte_Call_PokeETQR_M_EngTrqActual_PokeETQR_M_EngTrqActual
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__po, FA_out_ja);

                /* End of Outputs for SubSystem: '<S663>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S712>:111' */
        /* Call Fsft */
        VeSR1B_y_EngActStdyStTorq_FD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S663>/Fsft' */
        /* FunctionCaller: '<S713>/Function Caller' */
        /* Event: '<S712>:39' */
        Rte_Call_FsftETQR_M_EngTrqActual_FsftETQR_M_EngTrqActual();

        /* End of Outputs for SubSystem: '<S663>/Fsft' */
        /* Transition: '<S712>:113' */
        /* Transition: '<S712>:115' */
        /* Transition: '<S712>:114' */
    }

    /* End of Chart: '<S709>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngActuatorsStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngActuatorsStat_ErrSts'
     */
    /* Transition: '<S712>:107' */
    rtb_TmpSignalConversionAtVeSR_b = Rte_Read_VeSR1B_y_EngActuatorsStat_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngActuatorsStat_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S717>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngActuatorsStat_SigSts_Value(&tmpRead_2i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S715>/Chart' */
    if ((((uint32)tmpRead_2i) & 3U) != 0U)
    {
        /* Transition: '<S717>:100' */
        /* Transition: '<S717>:103' */
        /* Transition: '<S717>:111' */
        /* Call Fsft */
        VeSR1B_y_EngActuatorsStat_CallStatus = 2U;

        /* Event: '<S717>:39' */
        /* Transition: '<S717>:113' */
        /* Transition: '<S717>:115' */
        /* Transition: '<S717>:114' */
    }
    else
    {
        /* Transition: '<S717>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2i) & 4U) != 0U)
        {
            /* Transition: '<S717>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S717>:88' */
                /* Transition: '<S717>:111' */
                /* Call Fsft */
                VeSR1B_y_EngActuatorsStat_CallStatus = 2U;

                /* Event: '<S717>:39' */
                /* Transition: '<S717>:113' */
                /* Transition: '<S717>:115' */
                /* Transition: '<S717>:114' */
            }
            else
            {
                /* Transition: '<S717>:110' */
                /* Call Tmot */
                VeSR1B_y_EngActuatorsStat_CallStatus = 3U;

                /* Event: '<S717>:40' */
                /* Transition: '<S717>:115' */
                /* Transition: '<S717>:114' */
            }
        }
        else
        {
            /* Transition: '<S717>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_b) == 133)
            {
                /* Transition: '<S717>:95' */
                /* Transition: '<S717>:116' */
                /* Call Nothing */
                VeSR1B_y_EngActuatorsStat_CallStatus = 4U;

                /* Transition: '<S717>:114' */
            }
            else
            {
                /* Transition: '<S717>:120' */
                /* Transition: '<S717>:117' */
                /* Call Poke */
                VeSR1B_y_EngActuatorsStat_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S664>/Poke' */
                /* FunctionCaller: '<S718>/Function Caller' */
                /* Event: '<S717>:38' */
                Rte_Call_PokeENGR_e_Cam_Phsr_Stat_PokeENGR_e_Cam_Phsr_Stat
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_c);

                /* End of Outputs for SubSystem: '<S664>/Poke' */
            }
        }
    }

    /* End of Chart: '<S715>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngAirFlwStdyStTorq_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngAirFlwStdyStTorq_ErrSts'
     */
    /* Transition: '<S717>:107' */
    rtb_TmpSignalConversionAtVeSR_k =
        Rte_Read_VeSR1B_M_EngAirFlwStdyStTorq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__cg);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngAirFlwStdyStTorq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S722>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngAirFlwStdyStTorq_SigSts_Value(&tmpRead_2j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S719>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_EngAirFlwStdyStTorqV'
     */
    guard1 = false;
    if ((((uint32)tmpRead_2j) & 3U) != 0U)
    {
        /* Transition: '<S722>:100' */
        /* Transition: '<S722>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S722>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2j) & 4U) != 0U)
        {
            /* Transition: '<S722>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S722>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S722>:110' */
                /* Call Tmot */
                VeSR1B_y_EngAirFlwStdyStTorq_CallStatus = 3U;

                /* Event: '<S722>:40' */
                /* Transition: '<S722>:115' */
                /* Transition: '<S722>:114' */
            }
        }
        else
        {
            /* Transition: '<S722>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_k) == 133)
            {
                /* Transition: '<S722>:95' */
                /* Transition: '<S722>:116' */
                /* Call Nothing */
                VeSR1B_y_EngAirFlwStdyStTorq_CallStatus = 4U;

                /* Transition: '<S722>:114' */
            }
            else
            {
                /* Transition: '<S722>:120' */
                (void)Rte_Read_VeSR1B_b_EngAirFlwStdyStTorqV_Value(&tmpRead_5g);

                /* Transition: '<S722>:117' */
                /* Call Poke */
                VeSR1B_y_EngAirFlwStdyStTorq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S665>/Poke' */
                /* FunctionCaller: '<S724>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_EngAirFlwStdyStTorqV'
                 */
                /* Event: '<S722>:38' */
                Rte_Call_PokeETQR_M_EngTrqAirflow_PokeETQR_M_EngTrqAirflow
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__cg, tmpRead_5g);

                /* End of Outputs for SubSystem: '<S665>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S722>:111' */
        /* Call Fsft */
        VeSR1B_y_EngAirFlwStdyStTorq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S665>/Fsft' */
        /* FunctionCaller: '<S723>/Function Caller' */
        /* Event: '<S722>:39' */
        Rte_Call_FsftETQR_M_EngTrqAirflow_FsftETQR_M_EngTrqAirflow();

        /* End of Outputs for SubSystem: '<S665>/Fsft' */
        /* Transition: '<S722>:113' */
        /* Transition: '<S722>:115' */
        /* Transition: '<S722>:114' */
    }

    /* End of Chart: '<S719>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngCmbstnCmnd_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngCmbstnCmnd_ErrSts'
     */
    /* Transition: '<S722>:107' */
    rtb_TmpSignalConversionAtVeS_e2 = Rte_Read_VeSR1B_b_EngCmbstnCmnd_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngCmbstnCmnd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S728>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngCmbstnCmnd_SigSts_Value(&tmpRead_2k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S725>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2k) & 3U) != 0U)
    {
        /* Transition: '<S728>:100' */
        /* Transition: '<S728>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S728>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2k) & 4U) != 0U)
        {
            /* Transition: '<S728>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S728>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S728>:110' */
                /* Call Tmot */
                VeSR1B_y_EngCmbstnCmnd_CallStatus = 3U;

                /* Event: '<S728>:40' */
                /* Transition: '<S728>:115' */
                /* Transition: '<S728>:114' */
            }
        }
        else
        {
            /* Transition: '<S728>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_e2) == 133)
            {
                /* Transition: '<S728>:95' */
                /* Transition: '<S728>:116' */
                /* Call Nothing */
                VeSR1B_y_EngCmbstnCmnd_CallStatus = 4U;

                /* Transition: '<S728>:114' */
            }
            else
            {
                /* Transition: '<S728>:120' */
                /* Transition: '<S728>:117' */
                /* Call Poke */
                VeSR1B_y_EngCmbstnCmnd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S666>/Poke' */
                /* FunctionCaller: '<S730>/Function Caller' incorporates:
                 *  Constant: '<S730>/Constant'
                 */
                /* Event: '<S728>:38' */
                Rte_Call_PokeENGR_b_EngCombustionCmnd_PokeENGR_b_EngCombustionCmnd
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_g, false);

                /* End of Outputs for SubSystem: '<S666>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S728>:111' */
        /* Call Fsft */
        VeSR1B_y_EngCmbstnCmnd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S666>/Fsft' */
        /* FunctionCaller: '<S729>/Function Caller' */
        /* Event: '<S728>:39' */
        Rte_Call_FsftENGR_b_EngCombustionCmnd_FsftENGR_b_EngCombustionCmnd();

        /* End of Outputs for SubSystem: '<S666>/Fsft' */
        /* Transition: '<S728>:113' */
        /* Transition: '<S728>:115' */
        /* Transition: '<S728>:114' */
    }

    /* End of Chart: '<S725>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngDFCO_Allw_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngDFCO_Allw_ErrSts'
     */
    /* Transition: '<S728>:107' */
    rtb_TmpSignalConversionAtVeSR_m = Rte_Read_VeSR1B_b_EngDFCO_Allw_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngDFCO_Allw_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S733>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngDFCO_Allw_SigSts_Value(&tmpRead_2l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S731>/Chart' */
    if ((((uint32)tmpRead_2l) & 3U) != 0U)
    {
        /* Transition: '<S733>:100' */
        /* Transition: '<S733>:103' */
        /* Transition: '<S733>:111' */
        /* Call Fsft */
        VeSR1B_y_EngDFCO_Allw_CallStatus = 2U;

        /* Event: '<S733>:39' */
        /* Transition: '<S733>:113' */
        /* Transition: '<S733>:115' */
        /* Transition: '<S733>:114' */
    }
    else
    {
        /* Transition: '<S733>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2l) & 4U) != 0U)
        {
            /* Transition: '<S733>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S733>:88' */
                /* Transition: '<S733>:111' */
                /* Call Fsft */
                VeSR1B_y_EngDFCO_Allw_CallStatus = 2U;

                /* Event: '<S733>:39' */
                /* Transition: '<S733>:113' */
                /* Transition: '<S733>:115' */
                /* Transition: '<S733>:114' */
            }
            else
            {
                /* Transition: '<S733>:110' */
                /* Call Tmot */
                VeSR1B_y_EngDFCO_Allw_CallStatus = 3U;

                /* Event: '<S733>:40' */
                /* Transition: '<S733>:115' */
                /* Transition: '<S733>:114' */
            }
        }
        else
        {
            /* Transition: '<S733>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_m) == 133)
            {
                /* Transition: '<S733>:95' */
                /* Transition: '<S733>:116' */
                /* Call Nothing */
                VeSR1B_y_EngDFCO_Allw_CallStatus = 4U;

                /* Transition: '<S733>:114' */
            }
            else
            {
                /* Transition: '<S733>:120' */
                /* Transition: '<S733>:117' */
                /* Call Poke */
                VeSR1B_y_EngDFCO_Allw_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S667>/Poke' */
                /* FunctionCaller: '<S734>/Function Caller' */
                /* Event: '<S733>:38' */
                Rte_Call_PokeENGR_b_EngDFSO_Allow_PokeENGR_b_EngDFSO_Allow
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_n);

                /* End of Outputs for SubSystem: '<S667>/Poke' */
            }
        }
    }

    /* End of Chart: '<S731>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngDFCO_Req_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngDFCO_Req_ErrSts'
     */
    /* Transition: '<S733>:107' */
    rtb_TmpSignalConversionAtVeS_er = Rte_Read_VeSR1B_b_EngDFCO_Req_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngDFCO_Req_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S737>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngDFCO_Req_SigSts_Value(&tmpRead_2m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S735>/Chart' */
    if ((((uint32)tmpRead_2m) & 3U) != 0U)
    {
        /* Transition: '<S737>:100' */
        /* Transition: '<S737>:103' */
        /* Transition: '<S737>:111' */
        /* Call Fsft */
        VeSR1B_y_EngDFCO_Req_CallStatus = 2U;

        /* Event: '<S737>:39' */
        /* Transition: '<S737>:113' */
        /* Transition: '<S737>:115' */
        /* Transition: '<S737>:114' */
    }
    else
    {
        /* Transition: '<S737>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2m) & 4U) != 0U)
        {
            /* Transition: '<S737>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S737>:88' */
                /* Transition: '<S737>:111' */
                /* Call Fsft */
                VeSR1B_y_EngDFCO_Req_CallStatus = 2U;

                /* Event: '<S737>:39' */
                /* Transition: '<S737>:113' */
                /* Transition: '<S737>:115' */
                /* Transition: '<S737>:114' */
            }
            else
            {
                /* Transition: '<S737>:110' */
                /* Call Tmot */
                VeSR1B_y_EngDFCO_Req_CallStatus = 3U;

                /* Event: '<S737>:40' */
                /* Transition: '<S737>:115' */
                /* Transition: '<S737>:114' */
            }
        }
        else
        {
            /* Transition: '<S737>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_er) == 133)
            {
                /* Transition: '<S737>:95' */
                /* Transition: '<S737>:116' */
                /* Call Nothing */
                VeSR1B_y_EngDFCO_Req_CallStatus = 4U;

                /* Transition: '<S737>:114' */
            }
            else
            {
                /* Transition: '<S737>:120' */
                /* Transition: '<S737>:117' */
                /* Call Poke */
                VeSR1B_y_EngDFCO_Req_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S668>/Poke' */
                /* FunctionCaller: '<S738>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S738>/Data Type Conversion'
                 *  DataTypeConversion: '<S738>/Data Type Conversion1'
                 */
                /* Event: '<S737>:38' */
                Rte_Call_PokeENGR_e_EngDFSO_Req_PokeENGR_e_EngDFSO_Req
                    ((TeENGR_e_EngDFSO_St)
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_h);

                /* End of Outputs for SubSystem: '<S668>/Poke' */
            }
        }
    }

    /* End of Chart: '<S735>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngDFCO_St_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngDFCO_St_ErrSts'
     */
    /* Transition: '<S737>:107' */
    rtb_TmpSignalConversionAtVeS_lw = Rte_Read_VeSR1B_b_EngDFCO_St_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngDFCO_St_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S741>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngDFCO_St_SigSts_Value(&tmpRead_2n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S739>/Chart' */
    if ((((uint32)tmpRead_2n) & 3U) != 0U)
    {
        /* Transition: '<S741>:100' */
        /* Transition: '<S741>:103' */
        /* Transition: '<S741>:111' */
        /* Call Fsft */
        VeSR1B_y_EngDFCO_St_CallStatus = 2U;

        /* Event: '<S741>:39' */
        /* Transition: '<S741>:113' */
        /* Transition: '<S741>:115' */
        /* Transition: '<S741>:114' */
    }
    else
    {
        /* Transition: '<S741>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2n) & 4U) != 0U)
        {
            /* Transition: '<S741>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S741>:88' */
                /* Transition: '<S741>:111' */
                /* Call Fsft */
                VeSR1B_y_EngDFCO_St_CallStatus = 2U;

                /* Event: '<S741>:39' */
                /* Transition: '<S741>:113' */
                /* Transition: '<S741>:115' */
                /* Transition: '<S741>:114' */
            }
            else
            {
                /* Transition: '<S741>:110' */
                /* Call Tmot */
                VeSR1B_y_EngDFCO_St_CallStatus = 3U;

                /* Event: '<S741>:40' */
                /* Transition: '<S741>:115' */
                /* Transition: '<S741>:114' */
            }
        }
        else
        {
            /* Transition: '<S741>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_lw) == 133)
            {
                /* Transition: '<S741>:95' */
                /* Transition: '<S741>:116' */
                /* Call Nothing */
                VeSR1B_y_EngDFCO_St_CallStatus = 4U;

                /* Transition: '<S741>:114' */
            }
            else
            {
                /* Transition: '<S741>:120' */
                /* Transition: '<S741>:117' */
                /* Call Poke */
                VeSR1B_y_EngDFCO_St_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S669>/Poke' */
                /* FunctionCaller: '<S742>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S742>/Data Type Conversion'
                 *  DataTypeConversion: '<S742>/Data Type Conversion1'
                 */
                /* Event: '<S741>:38' */
                Rte_Call_PokeENGR_e_EngDFSO_St_PokeENGR_e_EngDFSO_St
                    ((TeENGR_e_EngDFSO_St)
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_f);

                /* End of Outputs for SubSystem: '<S669>/Poke' */
            }
        }
    }

    /* End of Chart: '<S739>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngMinSprkNomCAirTqCap_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngMinSprkNomCAirTqCap_ErrSts'
     */
    /* Transition: '<S741>:107' */
    rtb_TmpSignalConversionAtVeSR_h =
        Rte_Read_VeSR1B_M_EngMinSprkNomCAirTqCap_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngMinSprkNomCAirTqCap_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S746>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngMinSprkNomCAirTqCap_SigSts_Value(&tmpRead_2o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S743>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2o) & 3U) != 0U)
    {
        /* Transition: '<S746>:100' */
        /* Transition: '<S746>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S746>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2o) & 4U) != 0U)
        {
            /* Transition: '<S746>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S746>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S746>:110' */
                /* Call Tmot */
                VeSR1B_y_EngMinSprkNomCAirTqCap_CallStatus = 3U;

                /* Event: '<S746>:40' */
                /* Transition: '<S746>:115' */
                /* Transition: '<S746>:114' */
            }
        }
        else
        {
            /* Transition: '<S746>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_h) == 133)
            {
                /* Transition: '<S746>:95' */
                /* Transition: '<S746>:116' */
                /* Call Nothing */
                VeSR1B_y_EngMinSprkNomCAirTqCap_CallStatus = 4U;

                /* Transition: '<S746>:114' */
            }
            else
            {
                /* Transition: '<S746>:120' */
                if ((((uint32)tmpRead_2o) & 8U) != 0U)
                {
                    /* Transition: '<S746>:122' */
                    /* Transition: '<S746>:125' */
                    FA_out_ja = true;

                    /* Transition: '<S746>:126' */
                }
                else
                {
                    /* Transition: '<S746>:124' */
                    FA_out_ja = false;
                }

                /* Transition: '<S746>:117' */
                /* Call Poke */
                VeSR1B_y_EngMinSprkNomCAirTqCap_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S670>/Poke' */
                /* FunctionCaller: '<S748>/Function Caller' */
                /* Event: '<S746>:38' */
                Rte_Call_PokeETQR_M_EngCapacityMinRunImmedNom_PokeETQR_M_EngCapacityMinRunImmedNom
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_m, FA_out_ja);

                /* End of Outputs for SubSystem: '<S670>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S746>:111' */
        /* Call Fsft */
        VeSR1B_y_EngMinSprkNomCAirTqCap_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S670>/Fsft' */
        /* FunctionCaller: '<S747>/Function Caller' */
        /* Event: '<S746>:39' */
        Rte_Call_FsftETQR_M_EngCapacityMinRunImmedNom_FsftETQR_M_EngCapacityMinRunImmedNom
            ();

        /* End of Outputs for SubSystem: '<S670>/Fsft' */
        /* Transition: '<S746>:113' */
        /* Transition: '<S746>:115' */
        /* Transition: '<S746>:114' */
    }

    /* End of Chart: '<S743>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngOffRecom_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngOffRecom_ErrSts'
     */
    /* Transition: '<S746>:107' */
    rtb_TmpSignalConversionAtVeS_kj = Rte_Read_VeSR1B_b_EngOffRecom_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__nw);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngOffRecom_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S751>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngOffRecom_SigSts_Value(&tmpRead_2p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S749>/Chart' */
    if ((((uint32)tmpRead_2p) & 3U) != 0U)
    {
        /* Transition: '<S751>:100' */
        /* Transition: '<S751>:103' */
        /* Transition: '<S751>:111' */
        /* Call Fsft */
        VeSR1B_y_EngOffRecom_CallStatus = 2U;

        /* Event: '<S751>:39' */
        /* Transition: '<S751>:113' */
        /* Transition: '<S751>:115' */
        /* Transition: '<S751>:114' */
    }
    else
    {
        /* Transition: '<S751>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2p) & 4U) != 0U)
        {
            /* Transition: '<S751>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S751>:88' */
                /* Transition: '<S751>:111' */
                /* Call Fsft */
                VeSR1B_y_EngOffRecom_CallStatus = 2U;

                /* Event: '<S751>:39' */
                /* Transition: '<S751>:113' */
                /* Transition: '<S751>:115' */
                /* Transition: '<S751>:114' */
            }
            else
            {
                /* Transition: '<S751>:110' */
                /* Call Tmot */
                VeSR1B_y_EngOffRecom_CallStatus = 3U;

                /* Event: '<S751>:40' */
                /* Transition: '<S751>:115' */
                /* Transition: '<S751>:114' */
            }
        }
        else
        {
            /* Transition: '<S751>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_kj) == 133)
            {
                /* Transition: '<S751>:95' */
                /* Transition: '<S751>:116' */
                /* Call Nothing */
                VeSR1B_y_EngOffRecom_CallStatus = 4U;

                /* Transition: '<S751>:114' */
            }
            else
            {
                /* Transition: '<S751>:120' */
                /* Transition: '<S751>:117' */
                /* Call Poke */
                VeSR1B_y_EngOffRecom_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S671>/Poke' */
                /* FunctionCaller: '<S752>/Function Caller' */
                /* Event: '<S751>:38' */
                Rte_Call_PokeENGR_b_EngOffRecom_PokeENGR_b_EngOffRecom
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__nw);

                /* End of Outputs for SubSystem: '<S671>/Poke' */
            }
        }
    }

    /* End of Chart: '<S749>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngRunCrnkAct_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngRunCrnkAct_ErrSts'
     */
    /* Transition: '<S751>:107' */
    rtb_TmpSignalConversionAtVeS_mf = Rte_Read_VeSR1B_b_EngRunCrnkAct_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__gr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngRunCrnkAct_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S756>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngRunCrnkAct_SigSts_Value(&tmpRead_2q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S753>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2q) & 3U) != 0U)
    {
        /* Transition: '<S756>:100' */
        /* Transition: '<S756>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S756>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2q) & 4U) != 0U)
        {
            /* Transition: '<S756>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S756>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S756>:110' */
                /* Call Tmot */
                VeSR1B_y_EngRunCrnkAct_CallStatus = 3U;

                /* Event: '<S756>:40' */
                /* Transition: '<S756>:115' */
                /* Transition: '<S756>:114' */
            }
        }
        else
        {
            /* Transition: '<S756>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_mf) == 133)
            {
                /* Transition: '<S756>:95' */
                /* Transition: '<S756>:116' */
                /* Call Nothing */
                VeSR1B_y_EngRunCrnkAct_CallStatus = 4U;

                /* Transition: '<S756>:114' */
            }
            else
            {
                /* Transition: '<S756>:120' */
                /* Transition: '<S756>:117' */
                /* Call Poke */
                VeSR1B_y_EngRunCrnkAct_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S672>/Poke' */
                /* FunctionCaller: '<S758>/Function Caller' incorporates:
                 *  Constant: '<S758>/Constant'
                 */
                /* Event: '<S756>:38' */
                Rte_Call_PokePMDR_b_RunCrnkActvECM_PokePMDR_b_RunCrnkActvECM
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__gr, false);

                /* End of Outputs for SubSystem: '<S672>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S756>:111' */
        /* Call Fsft */
        VeSR1B_y_EngRunCrnkAct_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S672>/Fsft' */
        /* FunctionCaller: '<S757>/Function Caller' */
        /* Event: '<S756>:39' */
        Rte_Call_FsftPMDR_b_RunCrnkActvECM_FsftPMDR_b_RunCrnkActvECM();

        /* End of Outputs for SubSystem: '<S672>/Fsft' */
        /* Transition: '<S756>:113' */
        /* Transition: '<S756>:115' */
        /* Transition: '<S756>:114' */
    }

    /* End of Chart: '<S753>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngSysFld_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngSysFld_ErrSts'
     */
    /* Transition: '<S756>:107' */
    rtb_TmpSignalConversionAtVeSR_i = Rte_Read_VeSR1B_b_EngSysFld_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngSysFld_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S761>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngSysFld_SigSts_Value(&tmpRead_2r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S759>/Chart' */
    if ((((uint32)tmpRead_2r) & 3U) != 0U)
    {
        /* Transition: '<S761>:100' */
        /* Transition: '<S761>:103' */
        /* Transition: '<S761>:111' */
        /* Call Fsft */
        VeSR1B_y_EngSysFld_CallStatus = 2U;

        /* Event: '<S761>:39' */
        /* Transition: '<S761>:113' */
        /* Transition: '<S761>:115' */
        /* Transition: '<S761>:114' */
    }
    else
    {
        /* Transition: '<S761>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2r) & 4U) != 0U)
        {
            /* Transition: '<S761>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S761>:88' */
                /* Transition: '<S761>:111' */
                /* Call Fsft */
                VeSR1B_y_EngSysFld_CallStatus = 2U;

                /* Event: '<S761>:39' */
                /* Transition: '<S761>:113' */
                /* Transition: '<S761>:115' */
                /* Transition: '<S761>:114' */
            }
            else
            {
                /* Transition: '<S761>:110' */
                /* Call Tmot */
                VeSR1B_y_EngSysFld_CallStatus = 3U;

                /* Event: '<S761>:40' */
                /* Transition: '<S761>:115' */
                /* Transition: '<S761>:114' */
            }
        }
        else
        {
            /* Transition: '<S761>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_i) == 133)
            {
                /* Transition: '<S761>:95' */
                /* Transition: '<S761>:116' */
                /* Call Nothing */
                VeSR1B_y_EngSysFld_CallStatus = 4U;

                /* Transition: '<S761>:114' */
            }
            else
            {
                /* Transition: '<S761>:120' */
                /* Transition: '<S761>:117' */
                /* Call Poke */
                VeSR1B_y_EngSysFld_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S673>/Poke' */
                /* FunctionCaller: '<S762>/Function Caller' */
                /* Event: '<S761>:38' */
                Rte_Call_PokeENGR_b_EngSysDsbld_PokeENGR_b_EngSysDsbld
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_c);

                /* End of Outputs for SubSystem: '<S673>/Poke' */
            }
        }
    }

    /* End of Chart: '<S759>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngTrqReserveReq_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngTrqReserveReq_ErrSts'
     */
    /* Transition: '<S761>:107' */
    rtb_TmpSignalConversionAtVeS_fi = Rte_Read_VeSR1B_M_EngTrqReserveReq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__d1);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngTrqReserveReq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S766>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngTrqReserveReq_SigSts_Value(&tmpRead_2s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S763>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2s) & 3U) != 0U)
    {
        /* Transition: '<S766>:100' */
        /* Transition: '<S766>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S766>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2s) & 4U) != 0U)
        {
            /* Transition: '<S766>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S766>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S766>:110' */
                /* Call Tmot */
                VeSR1B_y_EngTrqReserveReq_CallStatus = 3U;

                /* Event: '<S766>:40' */
                /* Transition: '<S766>:115' */
                /* Transition: '<S766>:114' */
            }
        }
        else
        {
            /* Transition: '<S766>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fi) == 133)
            {
                /* Transition: '<S766>:95' */
                /* Transition: '<S766>:116' */
                /* Call Nothing */
                VeSR1B_y_EngTrqReserveReq_CallStatus = 4U;

                /* Transition: '<S766>:114' */
            }
            else
            {
                /* Transition: '<S766>:120' */
                if ((((uint32)tmpRead_2s) & 8U) != 0U)
                {
                    /* Transition: '<S766>:122' */
                    /* Transition: '<S766>:125' */
                    FA_out_ja = true;

                    /* Transition: '<S766>:126' */
                }
                else
                {
                    /* Transition: '<S766>:124' */
                    FA_out_ja = false;
                }

                /* Transition: '<S766>:117' */
                /* Call Poke */
                VeSR1B_y_EngTrqReserveReq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S674>/Poke' */
                /* FunctionCaller: '<S768>/Function Caller' */
                /* Event: '<S766>:38' */
                Rte_Call_PokeETQR_M_EngTrqReserveReq_PokeETQR_M_EngTrqReserveReq
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__d1, FA_out_ja);

                /* End of Outputs for SubSystem: '<S674>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S766>:111' */
        /* Call Fsft */
        VeSR1B_y_EngTrqReserveReq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S674>/Fsft' */
        /* FunctionCaller: '<S767>/Function Caller' */
        /* Event: '<S766>:39' */
        Rte_Call_FsftETQR_M_EngTrqReserveReq_FsftETQR_M_EngTrqReserveReq();

        /* End of Outputs for SubSystem: '<S674>/Fsft' */
        /* Transition: '<S766>:113' */
        /* Transition: '<S766>:115' */
        /* Transition: '<S766>:114' */
    }

    /* End of Chart: '<S763>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_Feedback_HCP_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_Feedback_HCP_ErrSts'
     */
    /* Transition: '<S766>:107' */
    rtb_TmpSignalConversionAtVeS_gm = Rte_Read_VeSR1B_b_Feedback_HCP_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_F);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_Feedback_HCP_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S772>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Feedback_HCP_SigSts_Value(&tmpRead_2t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S769>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2t) & 3U) != 0U)
    {
        /* Transition: '<S772>:100' */
        /* Transition: '<S772>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S772>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2t) & 4U) != 0U)
        {
            /* Transition: '<S772>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S772>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S772>:110' */
                /* Call Tmot */
                VeSR1B_y_Feedback_HCP_CallStatus = 3U;

                /* Event: '<S772>:40' */
                /* Transition: '<S772>:115' */
                /* Transition: '<S772>:114' */
            }
        }
        else
        {
            /* Transition: '<S772>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_gm) == 133)
            {
                /* Transition: '<S772>:95' */
                /* Transition: '<S772>:116' */
                /* Call Nothing */
                VeSR1B_y_Feedback_HCP_CallStatus = 4U;

                /* Transition: '<S772>:114' */
            }
            else
            {
                /* Transition: '<S772>:120' */
                /* Transition: '<S772>:117' */
                /* Call Poke */
                VeSR1B_y_Feedback_HCP_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S675>/Poke' */
                /* FunctionCaller: '<S774>/Function Caller' */
                /* Event: '<S772>:38' */
                Rte_Call_PokeENGR_b_ECM_Feedback_HCP_PokeENGR_b_ECM_Feedback_HCP
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_F);

                /* End of Outputs for SubSystem: '<S675>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S772>:111' */
        /* Call Fsft */
        VeSR1B_y_Feedback_HCP_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S675>/Fsft' */
        /* FunctionCaller: '<S773>/Function Caller' */
        /* Event: '<S772>:39' */
        Rte_Call_FsftENGR_b_ECM_Feedback_HCP_FsftENGR_b_ECM_Feedback_HCP();

        /* End of Outputs for SubSystem: '<S675>/Fsft' */
        /* Transition: '<S772>:113' */
        /* Transition: '<S772>:115' */
        /* Transition: '<S772>:114' */
    }

    /* End of Chart: '<S769>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_HybActEngTorqRespTyp_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_HybActEngTorqRespTyp_ErrSts'
     */
    /* Transition: '<S772>:107' */
    rtb_TmpSignalConversionAtVeS_p5 =
        Rte_Read_VeSR1B_y_HybActEngTorqRespTyp_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_HybActEngTorqRespTyp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S777>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_HybActEngTorqRespTyp_SigSts_Value(&tmpRead_2u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S775>/Chart' */
    if ((((uint32)tmpRead_2u) & 3U) != 0U)
    {
        /* Transition: '<S777>:100' */
        /* Transition: '<S777>:103' */
        /* Transition: '<S777>:111' */
        /* Call Fsft */
        VeSR1B_y_HybActEngTorqRespTyp_CallStatus = 2U;

        /* Event: '<S777>:39' */
        /* Transition: '<S777>:113' */
        /* Transition: '<S777>:115' */
        /* Transition: '<S777>:114' */
    }
    else
    {
        /* Transition: '<S777>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2u) & 4U) != 0U)
        {
            /* Transition: '<S777>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S777>:88' */
                /* Transition: '<S777>:111' */
                /* Call Fsft */
                VeSR1B_y_HybActEngTorqRespTyp_CallStatus = 2U;

                /* Event: '<S777>:39' */
                /* Transition: '<S777>:113' */
                /* Transition: '<S777>:115' */
                /* Transition: '<S777>:114' */
            }
            else
            {
                /* Transition: '<S777>:110' */
                /* Call Tmot */
                VeSR1B_y_HybActEngTorqRespTyp_CallStatus = 3U;

                /* Event: '<S777>:40' */
                /* Transition: '<S777>:115' */
                /* Transition: '<S777>:114' */
            }
        }
        else
        {
            /* Transition: '<S777>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_p5) == 133)
            {
                /* Transition: '<S777>:95' */
                /* Transition: '<S777>:116' */
                /* Call Nothing */
                VeSR1B_y_HybActEngTorqRespTyp_CallStatus = 4U;

                /* Transition: '<S777>:114' */
            }
            else
            {
                /* Transition: '<S777>:120' */
                /* Transition: '<S777>:117' */
                /* Call Poke */
                VeSR1B_y_HybActEngTorqRespTyp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S676>/Poke' */
                /* FunctionCaller: '<S778>/Function Caller' */
                /* Event: '<S777>:38' */
                Rte_Call_PokeENGR_e_HybActEngTorqRespType_PokeENGR_e_HybActEngTorqRespType
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_H);

                /* End of Outputs for SubSystem: '<S676>/Poke' */
            }
        }
    }

    /* End of Chart: '<S775>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_MAP_4_BAR_PHEV_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_MAP_4_BAR_PHEV_ErrSts'
     */
    /* Transition: '<S777>:107' */
    rtb_TmpSignalConversionAtVeS_f3 = Rte_Read_VeSR1B_p_MAP_4_BAR_PHEV_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_p_M);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_MAP_4_BAR_PHEV_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S782>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MAP_4_BAR_PHEV_SigSts_Value(&tmpRead_2v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S779>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2v) & 3U) != 0U)
    {
        /* Transition: '<S782>:100' */
        /* Transition: '<S782>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S782>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2v) & 4U) != 0U)
        {
            /* Transition: '<S782>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S782>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S782>:110' */
                /* Call Tmot */
                VeSR1B_y_MAP_4_BAR_PHEV_CallStatus = 3U;

                /* Event: '<S782>:40' */
                /* Transition: '<S782>:115' */
                /* Transition: '<S782>:114' */
            }
        }
        else
        {
            /* Transition: '<S782>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_f3) == 133)
            {
                /* Transition: '<S782>:95' */
                /* Transition: '<S782>:116' */
                /* Call Nothing */
                VeSR1B_y_MAP_4_BAR_PHEV_CallStatus = 4U;

                /* Transition: '<S782>:114' */
            }
            else
            {
                /* Transition: '<S782>:120' */
                if ((((uint32)tmpRead_2v) & 8U) != 0U)
                {
                    /* Transition: '<S782>:122' */
                    /* Transition: '<S782>:125' */
                    FA_out_ja = true;

                    /* Transition: '<S782>:126' */
                }
                else
                {
                    /* Transition: '<S782>:124' */
                    FA_out_ja = false;
                }

                /* Transition: '<S782>:117' */
                /* Call Poke */
                VeSR1B_y_MAP_4_BAR_PHEV_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S677>/Poke' */
                /* FunctionCaller: '<S784>/Function Caller' */
                /* Event: '<S782>:38' */
                Rte_Call_PokeENGR_p_EngManfldAbsPrs_PokeENGR_p_EngManfldAbsPrs
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_p_M, FA_out_ja);

                /* End of Outputs for SubSystem: '<S677>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S782>:111' */
        /* Call Fsft */
        VeSR1B_y_MAP_4_BAR_PHEV_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S677>/Fsft' */
        /* FunctionCaller: '<S783>/Function Caller' */
        /* Event: '<S782>:39' */
        Rte_Call_FsftENGR_p_EngManfldAbsPrs_FsftENGR_p_EngManfldAbsPrs();

        /* End of Outputs for SubSystem: '<S677>/Fsft' */
        /* Transition: '<S782>:113' */
        /* Transition: '<S782>:115' */
        /* Transition: '<S782>:114' */
    }

    /* End of Chart: '<S779>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_MaxOffEngTorqCap_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_MaxOffEngTorqCap_ErrSts'
     */
    /* Transition: '<S782>:107' */
    rtb_TmpSignalConversionAtVeS_gd = Rte_Read_VeSR1B_M_MaxOffEngTorqCap_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_M);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_MaxOffEngTorqCap_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S787>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MaxOffEngTorqCap_SigSts_Value(&tmpRead_2w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S785>/Chart' */
    if ((((uint32)tmpRead_2w) & 3U) != 0U)
    {
        /* Transition: '<S787>:100' */
        /* Transition: '<S787>:103' */
        /* Transition: '<S787>:111' */
        /* Call Fsft */
        VeSR1B_y_MaxOffEngTorqCap_CallStatus = 2U;

        /* Event: '<S787>:39' */
        /* Transition: '<S787>:113' */
        /* Transition: '<S787>:115' */
        /* Transition: '<S787>:114' */
    }
    else
    {
        /* Transition: '<S787>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2w) & 4U) != 0U)
        {
            /* Transition: '<S787>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S787>:88' */
                /* Transition: '<S787>:111' */
                /* Call Fsft */
                VeSR1B_y_MaxOffEngTorqCap_CallStatus = 2U;

                /* Event: '<S787>:39' */
                /* Transition: '<S787>:113' */
                /* Transition: '<S787>:115' */
                /* Transition: '<S787>:114' */
            }
            else
            {
                /* Transition: '<S787>:110' */
                /* Call Tmot */
                VeSR1B_y_MaxOffEngTorqCap_CallStatus = 3U;

                /* Event: '<S787>:40' */
                /* Transition: '<S787>:115' */
                /* Transition: '<S787>:114' */
            }
        }
        else
        {
            /* Transition: '<S787>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_gd) == 133)
            {
                /* Transition: '<S787>:95' */
                /* Transition: '<S787>:116' */
                /* Call Nothing */
                VeSR1B_y_MaxOffEngTorqCap_CallStatus = 4U;

                /* Transition: '<S787>:114' */
            }
            else
            {
                /* Transition: '<S787>:120' */
                if ((((uint32)tmpRead_2w) & 8U) != 0U)
                {
                    /* Transition: '<S787>:122' */
                    /* Transition: '<S787>:125' */
                    FA_out_ja = true;

                    /* Transition: '<S787>:126' */
                }
                else
                {
                    /* Transition: '<S787>:124' */
                    FA_out_ja = false;
                }

                /* Transition: '<S787>:117' */
                /* Call Poke */
                VeSR1B_y_MaxOffEngTorqCap_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S678>/Poke' */
                /* FunctionCaller: '<S788>/Function Caller' */
                /* Event: '<S787>:38' */
                Rte_Call_PokeETQR_M_MinDragCapacity_PokeETQR_M_MinDragCapacity
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_M, FA_out_ja);

                /* End of Outputs for SubSystem: '<S678>/Poke' */
            }
        }
    }

    /* End of Chart: '<S785>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_MaxPrdtdEngTorqCap_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_MaxPrdtdEngTorqCap_ErrSts'
     */
    /* Transition: '<S787>:107' */
    rtb_TmpSignalConversionAtVeS_lm = Rte_Read_VeSR1B_M_MaxPrdtdEngTorqCap_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_MaxPrdtdEngTorqCap_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S792>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MaxPrdtdEngTorqCap_SigSts_Value(&tmpRead_2x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S789>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MaxPrdtdEngTorqCapV'
     */
    guard1 = false;
    if ((((uint32)tmpRead_2x) & 3U) != 0U)
    {
        /* Transition: '<S792>:100' */
        /* Transition: '<S792>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S792>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2x) & 4U) != 0U)
        {
            /* Transition: '<S792>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S792>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S792>:110' */
                /* Call Tmot */
                VeSR1B_y_MaxPrdtdEngTorqCap_CallStatus = 3U;

                /* Event: '<S792>:40' */
                /* Transition: '<S792>:115' */
                /* Transition: '<S792>:114' */
            }
        }
        else
        {
            /* Transition: '<S792>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_lm) == 133)
            {
                /* Transition: '<S792>:95' */
                /* Transition: '<S792>:116' */
                /* Call Nothing */
                VeSR1B_y_MaxPrdtdEngTorqCap_CallStatus = 4U;

                /* Transition: '<S792>:114' */
            }
            else
            {
                /* Transition: '<S792>:120' */
                (void)Rte_Read_VeSR1B_b_MaxPrdtdEngTorqCapV_Value(&FA_out_go);

                /* Transition: '<S792>:117' */
                /* Call Poke */
                VeSR1B_y_MaxPrdtdEngTorqCap_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S679>/Poke' */
                /* FunctionCaller: '<S794>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MaxPrdtdEngTorqCapV'
                 */
                /* Event: '<S792>:38' */
                Rte_Call_PokeETQR_M_EngCapacityMax_PokeETQR_M_EngCapacityMax
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_a, FA_out_go);

                /* End of Outputs for SubSystem: '<S679>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S792>:111' */
        /* Call Fsft */
        VeSR1B_y_MaxPrdtdEngTorqCap_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S679>/Fsft' */
        /* FunctionCaller: '<S793>/Function Caller' */
        /* Event: '<S792>:39' */
        Rte_Call_FsftETQR_M_EngCapacityMax_FsftETQR_M_EngCapacityMax();

        /* End of Outputs for SubSystem: '<S679>/Fsft' */
        /* Transition: '<S792>:113' */
        /* Transition: '<S792>:115' */
        /* Transition: '<S792>:114' */
    }

    /* End of Chart: '<S789>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_MinAirFlwMinSprkTrqCap_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_MinAirFlwMinSprkTrqCap_ErrSts'
     */
    /* Transition: '<S792>:107' */
    rtb_TmpSignalConversionAtVeS_iz =
        Rte_Read_VeSR1B_M_MinAirFlwMinSprkTrqCap_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ch);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_MinAirFlwMinSprkTrqCap_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S798>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MinAirFlwMinSprkTrqCap_SigSts_Value(&tmpRead_2y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S795>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MinAirFlwMinSprkTqCapV'
     */
    guard1 = false;
    if ((((uint32)tmpRead_2y) & 3U) != 0U)
    {
        /* Transition: '<S798>:100' */
        /* Transition: '<S798>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S798>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2y) & 4U) != 0U)
        {
            /* Transition: '<S798>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S798>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S798>:110' */
                /* Call Tmot */
                VeSR1B_y_MinAirFlwMinSprkTrqCap_CallStatus = 3U;

                /* Event: '<S798>:40' */
                /* Transition: '<S798>:115' */
                /* Transition: '<S798>:114' */
            }
        }
        else
        {
            /* Transition: '<S798>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_iz) == 133)
            {
                /* Transition: '<S798>:95' */
                /* Transition: '<S798>:116' */
                /* Call Nothing */
                VeSR1B_y_MinAirFlwMinSprkTrqCap_CallStatus = 4U;

                /* Transition: '<S798>:114' */
            }
            else
            {
                /* Transition: '<S798>:120' */
                (void)Rte_Read_VeSR1B_b_MinAirFlwMinSprkTqCapV_Value(&tmpRead_5h);

                /* Transition: '<S798>:117' */
                /* Call Poke */
                VeSR1B_y_MinAirFlwMinSprkTrqCap_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S680>/Poke' */
                /* FunctionCaller: '<S800>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MinAirFlwMinSprkTqCapV'
                 */
                /* Event: '<S798>:38' */
                Rte_Call_PokeETQR_M_MinAirFlowMinSparkCapacity_PokeETQR_M_MinAirFlowMinSparkCapacity
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ch, tmpRead_5h);

                /* End of Outputs for SubSystem: '<S680>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S798>:111' */
        /* Call Fsft */
        VeSR1B_y_MinAirFlwMinSprkTrqCap_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S680>/Fsft' */
        /* FunctionCaller: '<S799>/Function Caller' */
        /* Event: '<S798>:39' */
        Rte_Call_FsftETQR_M_MinAirFlowMinSparkCapacity_FsftETQR_M_MinAirFlowMinSparkCapacity
            ();

        /* End of Outputs for SubSystem: '<S680>/Fsft' */
        /* Transition: '<S798>:113' */
        /* Transition: '<S798>:115' */
        /* Transition: '<S798>:114' */
    }

    /* End of Chart: '<S795>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_MinEngTorqCap_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_MinEngTorqCap_ErrSts'
     */
    /* Transition: '<S798>:107' */
    rtb_TmpSignalConversionAtVeSR_j = Rte_Read_VeSR1B_M_MinEngTorqCap_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_MinEngTorqCap_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S804>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MinEngTorqCap_SigSts_Value(&tmpRead_2z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S801>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MinEngTorqCapV'
     */
    guard1 = false;
    if ((((uint32)tmpRead_2z) & 3U) != 0U)
    {
        /* Transition: '<S804>:100' */
        /* Transition: '<S804>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S804>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2z) & 4U) != 0U)
        {
            /* Transition: '<S804>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S804>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S804>:110' */
                /* Call Tmot */
                VeSR1B_y_MinEngTorqCap_CallStatus = 3U;

                /* Event: '<S804>:40' */
                /* Transition: '<S804>:115' */
                /* Transition: '<S804>:114' */
            }
        }
        else
        {
            /* Transition: '<S804>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_j) == 133)
            {
                /* Transition: '<S804>:95' */
                /* Transition: '<S804>:116' */
                /* Call Nothing */
                VeSR1B_y_MinEngTorqCap_CallStatus = 4U;

                /* Transition: '<S804>:114' */
            }
            else
            {
                /* Transition: '<S804>:120' */
                (void)Rte_Read_VeSR1B_b_MinEngTorqCapV_Value(&tmpRead_5i);

                /* Transition: '<S804>:117' */
                /* Call Poke */
                VeSR1B_y_MinEngTorqCap_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S681>/Poke' */
                /* FunctionCaller: '<S806>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MinEngTorqCapV'
                 */
                /* Event: '<S804>:38' */
                Rte_Call_PokeETQR_M_EngCapacityMinOff_PokeETQR_M_EngCapacityMinOff
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_j, tmpRead_5i);

                /* End of Outputs for SubSystem: '<S681>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S804>:111' */
        /* Call Fsft */
        VeSR1B_y_MinEngTorqCap_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S681>/Fsft' */
        /* FunctionCaller: '<S805>/Function Caller' */
        /* Event: '<S804>:39' */
        Rte_Call_FsftETQR_M_EngCapacityMinOff_FsftETQR_M_EngCapacityMinOff();

        /* End of Outputs for SubSystem: '<S681>/Fsft' */
        /* Transition: '<S804>:113' */
        /* Transition: '<S804>:115' */
        /* Transition: '<S804>:114' */
    }

    /* End of Chart: '<S801>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_MinImmedEngTorqCap_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_MinImmedEngTorqCap_ErrSts'
     */
    /* Transition: '<S804>:107' */
    rtb_TmpSignalConversionAtVeS_py = Rte_Read_VeSR1B_M_MinImmedEngTorqCap_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__jf);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_MinImmedEngTorqCap_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S810>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MinImmedEngTorqCap_SigSts_Value(&tmpRead_30);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S807>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MinImmedEngTorqCapV'
     */
    guard1 = false;
    if ((((uint32)tmpRead_30) & 3U) != 0U)
    {
        /* Transition: '<S810>:100' */
        /* Transition: '<S810>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S810>:104' */
        /*  MM */
        if ((((uint32)tmpRead_30) & 4U) != 0U)
        {
            /* Transition: '<S810>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S810>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S810>:110' */
                /* Call Tmot */
                VeSR1B_y_MinImmedEngTorqCap_CallStatus = 3U;

                /* Event: '<S810>:40' */
                /* Transition: '<S810>:115' */
                /* Transition: '<S810>:114' */
            }
        }
        else
        {
            /* Transition: '<S810>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_py) == 133)
            {
                /* Transition: '<S810>:95' */
                /* Transition: '<S810>:116' */
                /* Call Nothing */
                VeSR1B_y_MinImmedEngTorqCap_CallStatus = 4U;

                /* Transition: '<S810>:114' */
            }
            else
            {
                /* Transition: '<S810>:120' */
                (void)Rte_Read_VeSR1B_b_MinImmedEngTorqCapV_Value(&tmpRead_5j);

                /* Transition: '<S810>:117' */
                /* Call Poke */
                VeSR1B_y_MinImmedEngTorqCap_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S682>/Poke' */
                /* FunctionCaller: '<S812>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MinImmedEngTorqCapV'
                 */
                /* Event: '<S810>:38' */
                Rte_Call_PokeETQR_M_EngCapacityMinRunImmedRed_PokeETQR_M_EngCapacityMinRunImmedRed
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__jf, tmpRead_5j);

                /* End of Outputs for SubSystem: '<S682>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S810>:111' */
        /* Call Fsft */
        VeSR1B_y_MinImmedEngTorqCap_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S682>/Fsft' */
        /* FunctionCaller: '<S811>/Function Caller' */
        /* Event: '<S810>:39' */
        Rte_Call_FsftETQR_M_EngCapacityMinRunImmedRed_FsftETQR_M_EngCapacityMinRunImmedRed
            ();

        /* End of Outputs for SubSystem: '<S682>/Fsft' */
        /* Transition: '<S810>:113' */
        /* Transition: '<S810>:115' */
        /* Transition: '<S810>:114' */
    }

    /* End of Chart: '<S807>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_MinPrdtdEngRunTorqCap_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_MinPrdtdEngRunTorqCap_ErrSts'
     */
    /* Transition: '<S810>:107' */
    rtb_TmpSignalConversionAtVeS_bu =
        Rte_Read_VeSR1B_M_MinPrdtdEngRunTorqCap_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ma);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_MinPrdtdEngRunTorqCap_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S816>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MinPrdtdEngRunTorqCap_SigSts_Value(&tmpRead_31);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S813>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MinPrdtdEngRunTorqCapV'
     */
    guard1 = false;
    if ((((uint32)tmpRead_31) & 3U) != 0U)
    {
        /* Transition: '<S816>:100' */
        /* Transition: '<S816>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S816>:104' */
        /*  MM */
        if ((((uint32)tmpRead_31) & 4U) != 0U)
        {
            /* Transition: '<S816>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S816>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S816>:110' */
                /* Call Tmot */
                VeSR1B_y_MinPrdtdEngRunTorqCap_CallStatus = 3U;

                /* Event: '<S816>:40' */
                /* Transition: '<S816>:115' */
                /* Transition: '<S816>:114' */
            }
        }
        else
        {
            /* Transition: '<S816>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_bu) == 133)
            {
                /* Transition: '<S816>:95' */
                /* Transition: '<S816>:116' */
                /* Call Nothing */
                VeSR1B_y_MinPrdtdEngRunTorqCap_CallStatus = 4U;

                /* Transition: '<S816>:114' */
            }
            else
            {
                /* Transition: '<S816>:120' */
                (void)Rte_Read_VeSR1B_b_MinPrdtdEngRunTorqCapV_Value(&tmpRead_5k);

                /* Transition: '<S816>:117' */
                /* Call Poke */
                VeSR1B_y_MinPrdtdEngRunTorqCap_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S683>/Poke' */
                /* FunctionCaller: '<S818>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MinPrdtdEngRunTorqCapV'
                 */
                /* Event: '<S816>:38' */
                Rte_Call_PokeETQR_M_EngCapacityMinRun_PokeETQR_M_EngCapacityMinRun
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ma, tmpRead_5k);

                /* End of Outputs for SubSystem: '<S683>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S816>:111' */
        /* Call Fsft */
        VeSR1B_y_MinPrdtdEngRunTorqCap_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S683>/Fsft' */
        /* FunctionCaller: '<S817>/Function Caller' */
        /* Event: '<S816>:39' */
        Rte_Call_FsftETQR_M_EngCapacityMinRun_FsftETQR_M_EngCapacityMinRun();

        /* End of Outputs for SubSystem: '<S683>/Fsft' */
        /* Transition: '<S816>:113' */
        /* Transition: '<S816>:115' */
        /* Transition: '<S816>:114' */
    }

    /* End of Chart: '<S813>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_PT_CrnkAct_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_PT_CrnkAct_ErrSts'
     */
    /* Transition: '<S816>:107' */
    rtb_TmpSignalConversionAtVeS_ox = Rte_Read_VeSR1B_b_PT_CrnkAct_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_PT_CrnkAct_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S822>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_PT_CrnkAct_SigSts_Value(&tmpRead_32);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S819>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_32) & 3U) != 0U)
    {
        /* Transition: '<S822>:100' */
        /* Transition: '<S822>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S822>:104' */
        /*  MM */
        if ((((uint32)tmpRead_32) & 4U) != 0U)
        {
            /* Transition: '<S822>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S822>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S822>:110' */
                /* Call Tmot */
                VeSR1B_y_PT_CrnkAct_CallStatus = 3U;

                /* Event: '<S822>:40' */
                /* Transition: '<S822>:115' */
                /* Transition: '<S822>:114' */
            }
        }
        else
        {
            /* Transition: '<S822>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ox) == 133)
            {
                /* Transition: '<S822>:95' */
                /* Transition: '<S822>:116' */
                /* Call Nothing */
                VeSR1B_y_PT_CrnkAct_CallStatus = 4U;

                /* Transition: '<S822>:114' */
            }
            else
            {
                /* Transition: '<S822>:120' */
                /* Transition: '<S822>:117' */
                /* Call Poke */
                VeSR1B_y_PT_CrnkAct_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S684>/Poke' */
                /* FunctionCaller: '<S824>/Function Caller' incorporates:
                 *  Constant: '<S824>/Constant'
                 */
                /* Event: '<S822>:38' */
                Rte_Call_PokePMDR_b_StrtCntrlStOn_PokePMDR_b_StrtCntrlStOn
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_P, false);

                /* End of Outputs for SubSystem: '<S684>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S822>:111' */
        /* Call Fsft */
        VeSR1B_y_PT_CrnkAct_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S684>/Fsft' */
        /* FunctionCaller: '<S823>/Function Caller' */
        /* Event: '<S822>:39' */
        Rte_Call_FsftPMDR_b_StrtCntrlStOn_FsftPMDR_b_StrtCntrlStOn();

        /* End of Outputs for SubSystem: '<S684>/Fsft' */
        /* Transition: '<S822>:113' */
        /* Transition: '<S822>:115' */
        /* Transition: '<S822>:114' */
    }

    /* End of Chart: '<S819>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_PnLimitActvFlg_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_PnLimitActvFlg_ErrSts'
     */
    /* Transition: '<S822>:107' */
    rtb_TmpSignalConversionAtVeS_it = Rte_Read_VeSR1B_b_PnLimitActvFlg_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_PnLimitActvFlg_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S828>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_PnLimitActvFlg_SigSts_Value(&tmpRead_33);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S825>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_33) & 3U) != 0U)
    {
        /* Transition: '<S828>:100' */
        /* Transition: '<S828>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S828>:104' */
        /*  MM */
        if ((((uint32)tmpRead_33) & 4U) != 0U)
        {
            /* Transition: '<S828>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S828>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S828>:110' */
                /* Call Tmot */
                VeSR1B_y_PnLimitActvFlg_CallStatus = 3U;

                /* Event: '<S828>:40' */
                /* Transition: '<S828>:115' */
                /* Transition: '<S828>:114' */
            }
        }
        else
        {
            /* Transition: '<S828>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_it) == 133)
            {
                /* Transition: '<S828>:95' */
                /* Transition: '<S828>:116' */
                /* Call Nothing */
                VeSR1B_y_PnLimitActvFlg_CallStatus = 4U;

                /* Transition: '<S828>:114' */
            }
            else
            {
                /* Transition: '<S828>:120' */
                if ((((uint32)tmpRead_33) & 8U) != 0U)
                {
                    /* Transition: '<S828>:122' */
                    /* Transition: '<S828>:125' */
                    FA_out_go = true;

                    /* Transition: '<S828>:126' */
                }
                else
                {
                    /* Transition: '<S828>:124' */
                    FA_out_go = false;
                }

                /* Transition: '<S828>:117' */
                /* Call Poke */
                VeSR1B_y_PnLimitActvFlg_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S685>/Poke' */
                /* FunctionCaller: '<S830>/Function Caller' */
                /* Event: '<S828>:38' */
                Rte_Call_PokeENGR_b_PnLimitActvFlg_PokeENGR_b_PnLimitActvFlg
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_p, FA_out_go);

                /* End of Outputs for SubSystem: '<S685>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S828>:111' */
        /* Call Fsft */
        VeSR1B_y_PnLimitActvFlg_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S685>/Fsft' */
        /* FunctionCaller: '<S829>/Function Caller' */
        /* Event: '<S828>:39' */
        Rte_Call_FsftENGR_b_PnLimitActvFlg_FsftENGR_b_PnLimitActvFlg();

        /* End of Outputs for SubSystem: '<S685>/Fsft' */
        /* Transition: '<S828>:113' */
        /* Transition: '<S828>:115' */
        /* Transition: '<S828>:114' */
    }

    /* End of Chart: '<S825>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_PnLimitMaxEngTrqCap_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_PnLimitMaxEngTrqCap_ErrSts'
     */
    /* Transition: '<S828>:107' */
    rtb_TmpSignalConversionAtVeS_il =
        Rte_Read_VeSR1B_M_PnLimitMaxEngTrqCap_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_PnLimitMaxEngTrqCap_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S834>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_PnLimitMaxEngTrqCap_SigSts_Value(&tmpRead_34);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S831>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_34) & 3U) != 0U)
    {
        /* Transition: '<S834>:100' */
        /* Transition: '<S834>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S834>:104' */
        /*  MM */
        if ((((uint32)tmpRead_34) & 4U) != 0U)
        {
            /* Transition: '<S834>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S834>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S834>:110' */
                /* Call Tmot */
                VeSR1B_y_PnLimitMaxEngTrqCap_CallStatus = 3U;

                /* Event: '<S834>:40' */
                /* Transition: '<S834>:115' */
                /* Transition: '<S834>:114' */
            }
        }
        else
        {
            /* Transition: '<S834>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_il) == 133)
            {
                /* Transition: '<S834>:95' */
                /* Transition: '<S834>:116' */
                /* Call Nothing */
                VeSR1B_y_PnLimitMaxEngTrqCap_CallStatus = 4U;

                /* Transition: '<S834>:114' */
            }
            else
            {
                /* Transition: '<S834>:120' */
                if ((((uint32)tmpRead_34) & 8U) != 0U)
                {
                    /* Transition: '<S834>:122' */
                    /* Transition: '<S834>:125' */
                    FA_out_go = true;

                    /* Transition: '<S834>:126' */
                }
                else
                {
                    /* Transition: '<S834>:124' */
                    FA_out_go = false;
                }

                /* Transition: '<S834>:117' */
                /* Call Poke */
                VeSR1B_y_PnLimitMaxEngTrqCap_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S686>/Poke' */
                /* FunctionCaller: '<S836>/Function Caller' */
                /* Event: '<S834>:38' */
                Rte_Call_PokeETQR_M_PnLimitMaxEngTrqCap_PokeETQR_M_PnLimitMaxEngTrqCap
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_P, FA_out_go);

                /* End of Outputs for SubSystem: '<S686>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S834>:111' */
        /* Call Fsft */
        VeSR1B_y_PnLimitMaxEngTrqCap_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S686>/Fsft' */
        /* FunctionCaller: '<S835>/Function Caller' */
        /* Event: '<S834>:39' */
        Rte_Call_FsftETQR_M_PnLimitMaxEngTrqCap_FsftETQR_M_PnLimitMaxEngTrqCap();

        /* End of Outputs for SubSystem: '<S686>/Fsft' */
        /* Transition: '<S834>:113' */
        /* Transition: '<S834>:115' */
        /* Transition: '<S834>:114' */
    }

    /* End of Chart: '<S831>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_RedSpkAuthorityAvbl_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_RedSpkAuthorityAvbl_ErrSts'
     */
    /* Transition: '<S834>:107' */
    rtb_TmpSignalConversionAtVeS_cu =
        Rte_Read_VeSR1B_b_RedSpkAuthorityAvbl_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_R);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_RedSpkAuthorityAvbl_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S840>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_RedSpkAuthorityAvbl_SigSts_Value(&tmpRead_35);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S837>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_35) & 3U) != 0U)
    {
        /* Transition: '<S840>:100' */
        /* Transition: '<S840>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S840>:104' */
        /*  MM */
        if ((((uint32)tmpRead_35) & 4U) != 0U)
        {
            /* Transition: '<S840>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S840>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S840>:110' */
                /* Call Tmot */
                VeSR1B_y_RedSpkAuthorityAvbl_CallStatus = 3U;

                /* Event: '<S840>:40' */
                /* Transition: '<S840>:115' */
                /* Transition: '<S840>:114' */
            }
        }
        else
        {
            /* Transition: '<S840>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_cu) == 133)
            {
                /* Transition: '<S840>:95' */
                /* Transition: '<S840>:116' */
                /* Call Nothing */
                VeSR1B_y_RedSpkAuthorityAvbl_CallStatus = 4U;

                /* Transition: '<S840>:114' */
            }
            else
            {
                /* Transition: '<S840>:120' */
                /* Transition: '<S840>:117' */
                /* Call Poke */
                VeSR1B_y_RedSpkAuthorityAvbl_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S687>/Poke' */
                /* FunctionCaller: '<S842>/Function Caller' incorporates:
                 *  Constant: '<S842>/Constant'
                 */
                /* Event: '<S840>:38' */
                Rte_Call_PokeETQR_b_EngCapacityMinRunImmedRedAvail_PokeETQR_b_EngCapacityMinRunImmedRedAvail
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_R, false);

                /* End of Outputs for SubSystem: '<S687>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S840>:111' */
        /* Call Fsft */
        VeSR1B_y_RedSpkAuthorityAvbl_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S687>/Fsft' */
        /* FunctionCaller: '<S841>/Function Caller' */
        /* Event: '<S840>:39' */
        Rte_Call_FsftETQR_b_EngCapacityMinRunImmedRedAvail_FsftETQR_b_EngCapacityMinRunImmedRedAvail
            ();

        /* End of Outputs for SubSystem: '<S687>/Fsft' */
        /* Transition: '<S840>:113' */
        /* Transition: '<S840>:115' */
        /* Transition: '<S840>:114' */
    }

    /* End of Chart: '<S837>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_TLC_LRN_Rq_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_TLC_LRN_Rq_ErrSts'
     */
    /* Transition: '<S840>:107' */
    rtb_TmpSignalConversionAtVeS_gs = Rte_Read_VeSR1B_b_TLC_LRN_Rq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_T);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_TLC_LRN_Rq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S845>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_TLC_LRN_Rq_SigSts_Value(&tmpRead_36);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S843>/Chart' */
    if ((((uint32)tmpRead_36) & 3U) != 0U)
    {
        /* Transition: '<S845>:100' */
        /* Transition: '<S845>:103' */
        /* Transition: '<S845>:111' */
        /* Call Fsft */
        VeSR1B_y_TLC_LRN_Rq_CallStatus = 2U;

        /* Event: '<S845>:39' */
        /* Transition: '<S845>:113' */
        /* Transition: '<S845>:115' */
        /* Transition: '<S845>:114' */
    }
    else
    {
        /* Transition: '<S845>:104' */
        /*  MM */
        if ((((uint32)tmpRead_36) & 4U) != 0U)
        {
            /* Transition: '<S845>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S845>:88' */
                /* Transition: '<S845>:111' */
                /* Call Fsft */
                VeSR1B_y_TLC_LRN_Rq_CallStatus = 2U;

                /* Event: '<S845>:39' */
                /* Transition: '<S845>:113' */
                /* Transition: '<S845>:115' */
                /* Transition: '<S845>:114' */
            }
            else
            {
                /* Transition: '<S845>:110' */
                /* Call Tmot */
                VeSR1B_y_TLC_LRN_Rq_CallStatus = 3U;

                /* Event: '<S845>:40' */
                /* Transition: '<S845>:115' */
                /* Transition: '<S845>:114' */
            }
        }
        else
        {
            /* Transition: '<S845>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_gs) == 133)
            {
                /* Transition: '<S845>:95' */
                /* Transition: '<S845>:116' */
                /* Call Nothing */
                VeSR1B_y_TLC_LRN_Rq_CallStatus = 4U;

                /* Transition: '<S845>:114' */
            }
            else
            {
                /* Transition: '<S845>:120' */
                /* Transition: '<S845>:117' */
                /* Call Poke */
                VeSR1B_y_TLC_LRN_Rq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S688>/Poke' */
                /* FunctionCaller: '<S846>/Function Caller' */
                /* Event: '<S845>:38' */
                Rte_Call_PokeENGR_b_EngTLCLearnReq_PokeENGR_b_EngTLCLearnReq
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_T);

                /* End of Outputs for SubSystem: '<S688>/Poke' */
            }
        }
    }

    /* End of Chart: '<S843>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ECM_AirflowRequest_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ECM_AirflowRequest_ErrSts'
     */
    /* Transition: '<S845>:107' */
    rtb_TmpSignalConversionAtVeSR_d =
        Rte_Read_VeSR1B_Pct_ECM_AirflowRequest_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_Pct);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ECM_AirflowRequest_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S858>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ECM_AirflowRequest_SigSts_Value(&tmpRead_37);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S855>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_37) & 3U) != 0U)
    {
        /* Transition: '<S858>:100' */
        /* Transition: '<S858>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S858>:104' */
        /*  MM */
        if ((((uint32)tmpRead_37) & 4U) != 0U)
        {
            /* Transition: '<S858>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S858>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S858>:110' */
                /* Call Tmot */
                VeSR1B_y_ECM_AirflowRequest_CallStatus = 3U;

                /* Event: '<S858>:40' */
                /* Transition: '<S858>:115' */
                /* Transition: '<S858>:114' */
            }
        }
        else
        {
            /* Transition: '<S858>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_d) == 133)
            {
                /* Transition: '<S858>:95' */
                /* Transition: '<S858>:116' */
                /* Call Nothing */
                VeSR1B_y_ECM_AirflowRequest_CallStatus = 4U;

                /* Transition: '<S858>:114' */
            }
            else
            {
                /* Transition: '<S858>:120' */
                if ((((uint32)tmpRead_37) & 8U) != 0U)
                {
                    /* Transition: '<S858>:122' */
                    /* Transition: '<S858>:125' */
                    FA_out_go = true;

                    /* Transition: '<S858>:126' */
                }
                else
                {
                    /* Transition: '<S858>:124' */
                    FA_out_go = false;
                }

                /* Transition: '<S858>:117' */
                /* Call Poke */
                VeSR1B_y_ECM_AirflowRequest_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S847>/Poke' */
                /* FunctionCaller: '<S860>/Function Caller' */
                /* Event: '<S858>:38' */
                Rte_Call_PokeTAIR_Pct_ECM_AirflowRequest_PokeTAIR_Pct_ECM_AirflowRequest
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_Pct, FA_out_go);

                /* End of Outputs for SubSystem: '<S847>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S858>:111' */
        /* Call Fsft */
        VeSR1B_y_ECM_AirflowRequest_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S847>/Fsft' */
        /* FunctionCaller: '<S859>/Function Caller' */
        /* Event: '<S858>:39' */
        Rte_Call_FsftTAIR_Pct_ECM_AirflowRequest_FsftTAIR_Pct_ECM_AirflowRequest
            ();

        /* End of Outputs for SubSystem: '<S847>/Fsft' */
        /* Transition: '<S858>:113' */
        /* Transition: '<S858>:115' */
        /* Transition: '<S858>:114' */
    }

    /* End of Chart: '<S855>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngCltTmp_FD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngCltTmp_FD11_ErrSts'
     */
    /* Transition: '<S858>:107' */
    rtb_TmpSignalConversionAtVeS_hz = Rte_Read_VeSR1B_T_EngCltTmp_FD11_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngCltTmp_FD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S864>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngCltTmp_FD11_SigSts_Value(&tmpRead_38);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S861>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_EngCltTmpV_FD11'
     */
    guard1 = false;
    if ((((uint32)tmpRead_38) & 3U) != 0U)
    {
        /* Transition: '<S864>:100' */
        /* Transition: '<S864>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S864>:104' */
        /*  MM */
        if ((((uint32)tmpRead_38) & 4U) != 0U)
        {
            /* Transition: '<S864>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S864>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S864>:110' */
                /* Call Tmot */
                VeSR1B_y_EngCltTmp_FD11_CallStatus = 3U;

                /* Event: '<S864>:40' */
                /* Transition: '<S864>:115' */
                /* Transition: '<S864>:114' */
            }
        }
        else
        {
            /* Transition: '<S864>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_hz) == 133)
            {
                /* Transition: '<S864>:95' */
                /* Transition: '<S864>:116' */
                /* Call Nothing */
                VeSR1B_y_EngCltTmp_FD11_CallStatus = 4U;

                /* Transition: '<S864>:114' */
            }
            else
            {
                /* Transition: '<S864>:120' */
                (void)Rte_Read_VeSR1B_b_EngCltTmpV_FD11_Value(&FA_out_p5);

                /* Transition: '<S864>:117' */
                /* Call Poke */
                VeSR1B_y_EngCltTmp_FD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S848>/Poke' */
                /* FunctionCaller: '<S866>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_EngCltTmpV_FD11'
                 */
                /* Event: '<S864>:38' */
                Rte_Call_PokeENGR_T_EngCoolantTemp_PokeENGR_T_EngCoolantTemp
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_E, FA_out_p5);

                /* End of Outputs for SubSystem: '<S848>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S864>:111' */
        /* Call Fsft */
        VeSR1B_y_EngCltTmp_FD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S848>/Fsft' */
        /* FunctionCaller: '<S865>/Function Caller' */
        /* Event: '<S864>:39' */
        Rte_Call_FsftENGR_T_EngCoolantTemp_FsftENGR_T_EngCoolantTemp();

        /* End of Outputs for SubSystem: '<S848>/Fsft' */
        /* Transition: '<S864>:113' */
        /* Transition: '<S864>:115' */
        /* Transition: '<S864>:114' */
    }

    /* End of Chart: '<S861>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngOutofFuel_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngOutofFuel_ErrSts'
     */
    /* Transition: '<S864>:107' */
    rtb_TmpSignalConversionAtVeS_jk = Rte_Read_VeSR1B_b_EngOutofFuel_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngOutofFuel_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S869>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngOutofFuel_SigSts_Value(&tmpRead_39);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S867>/Chart' */
    if ((((uint32)tmpRead_39) & 3U) != 0U)
    {
        /* Transition: '<S869>:100' */
        /* Transition: '<S869>:103' */
        /* Transition: '<S869>:111' */
        /* Call Fsft */
        VeSR1B_y_EngOutofFuel_CallStatus = 2U;

        /* Event: '<S869>:39' */
        /* Transition: '<S869>:113' */
        /* Transition: '<S869>:115' */
        /* Transition: '<S869>:114' */
    }
    else
    {
        /* Transition: '<S869>:104' */
        /*  MM */
        if ((((uint32)tmpRead_39) & 4U) != 0U)
        {
            /* Transition: '<S869>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S869>:88' */
                /* Transition: '<S869>:111' */
                /* Call Fsft */
                VeSR1B_y_EngOutofFuel_CallStatus = 2U;

                /* Event: '<S869>:39' */
                /* Transition: '<S869>:113' */
                /* Transition: '<S869>:115' */
                /* Transition: '<S869>:114' */
            }
            else
            {
                /* Transition: '<S869>:110' */
                /* Call Tmot */
                VeSR1B_y_EngOutofFuel_CallStatus = 3U;

                /* Event: '<S869>:40' */
                /* Transition: '<S869>:115' */
                /* Transition: '<S869>:114' */
            }
        }
        else
        {
            /* Transition: '<S869>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_jk) == 133)
            {
                /* Transition: '<S869>:95' */
                /* Transition: '<S869>:116' */
                /* Call Nothing */
                VeSR1B_y_EngOutofFuel_CallStatus = 4U;

                /* Transition: '<S869>:114' */
            }
            else
            {
                /* Transition: '<S869>:120' */
                /* Transition: '<S869>:117' */
                /* Call Poke */
                VeSR1B_y_EngOutofFuel_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S849>/Poke' */
                /* FunctionCaller: '<S870>/Function Caller' */
                /* Event: '<S869>:38' */
                Rte_Call_PokeENGR_b_EngSysLowFuel_PokeENGR_b_EngSysLowFuel
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_d);

                /* End of Outputs for SubSystem: '<S849>/Poke' */
            }
        }
    }

    /* End of Chart: '<S867>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngSpdStat_FD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngSpdStat_FD11_ErrSts'
     */
    /* Transition: '<S869>:107' */
    rtb_TmpSignalConversionAtVeS_i2 = Rte_Read_VeSR1B_y_EngSpdStat_FD11_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ca);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngSpdStat_FD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S874>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngSpdStat_FD11_SigSts_Value(&tmpRead_3a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S871>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3a) & 3U) != 0U)
    {
        /* Transition: '<S874>:100' */
        /* Transition: '<S874>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S874>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3a) & 4U) != 0U)
        {
            /* Transition: '<S874>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S874>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S874>:110' */
                /* Call Tmot */
                VeSR1B_y_EngSpdStat_FD11_CallStatus = 3U;

                /* Event: '<S874>:40' */
                /* Transition: '<S874>:115' */
                /* Transition: '<S874>:114' */
            }
        }
        else
        {
            /* Transition: '<S874>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_i2) == 133)
            {
                /* Transition: '<S874>:95' */
                /* Transition: '<S874>:116' */
                /* Call Nothing */
                VeSR1B_y_EngSpdStat_FD11_CallStatus = 4U;

                /* Transition: '<S874>:114' */
            }
            else
            {
                /* Transition: '<S874>:120' */
                /* Transition: '<S874>:117' */
                /* Call Poke */
                VeSR1B_y_EngSpdStat_FD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S850>/Poke' */
                /* FunctionCaller: '<S876>/Function Caller' */
                /* Event: '<S874>:38' */
                Rte_Call_PokeESPR_e_EngineSpeedStatus_PokeESPR_e_EngineSpeedStatus
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ca);

                /* End of Outputs for SubSystem: '<S850>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S874>:111' */
        /* Call Fsft */
        VeSR1B_y_EngSpdStat_FD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S850>/Fsft' */
        /* FunctionCaller: '<S875>/Function Caller' */
        /* Event: '<S874>:39' */
        Rte_Call_FsftESPR_e_EngineSpeedStatus_FsftESPR_e_EngineSpeedStatus();

        /* End of Outputs for SubSystem: '<S850>/Fsft' */
        /* Transition: '<S874>:113' */
        /* Transition: '<S874>:115' */
        /* Transition: '<S874>:114' */
    }

    /* End of Chart: '<S871>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_MaxEngSpdCap_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_MaxEngSpdCap_ErrSts'
     */
    /* Transition: '<S874>:107' */
    rtb_TmpSignalConversionAtVeS_ks = Rte_Read_VeSR1B_n_MaxEngSpdCap_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_n_M);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_MaxEngSpdCap_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S880>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MaxEngSpdCap_SigSts_Value(&tmpRead_3b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S877>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3b) & 3U) != 0U)
    {
        /* Transition: '<S880>:100' */
        /* Transition: '<S880>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S880>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3b) & 4U) != 0U)
        {
            /* Transition: '<S880>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S880>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S880>:110' */
                /* Call Tmot */
                VeSR1B_y_MaxEngSpdCap_CallStatus = 3U;

                /* Event: '<S880>:40' */
                /* Transition: '<S880>:115' */
                /* Transition: '<S880>:114' */
            }
        }
        else
        {
            /* Transition: '<S880>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ks) == 133)
            {
                /* Transition: '<S880>:95' */
                /* Transition: '<S880>:116' */
                /* Call Nothing */
                VeSR1B_y_MaxEngSpdCap_CallStatus = 4U;

                /* Transition: '<S880>:114' */
            }
            else
            {
                /* Transition: '<S880>:120' */
                /* Transition: '<S880>:117' */
                /* Call Poke */
                VeSR1B_y_MaxEngSpdCap_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S851>/Poke' */
                /* FunctionCaller: '<S882>/Function Caller' */
                /* Event: '<S880>:38' */
                Rte_Call_PokeESPR_n_EngSpdMaxLim_PokeESPR_n_EngSpdMaxLim
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_n_M);

                /* End of Outputs for SubSystem: '<S851>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S880>:111' */
        /* Call Fsft */
        VeSR1B_y_MaxEngSpdCap_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S851>/Fsft' */
        /* FunctionCaller: '<S881>/Function Caller' */
        /* Event: '<S880>:39' */
        Rte_Call_FsftESPR_n_EngSpdMaxLim_FsftESPR_n_EngSpdMaxLim();

        /* End of Outputs for SubSystem: '<S851>/Fsft' */
        /* Transition: '<S880>:113' */
        /* Transition: '<S880>:115' */
        /* Transition: '<S880>:114' */
    }

    /* End of Chart: '<S877>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_MinEngSpdCap_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_MinEngSpdCap_ErrSts'
     */
    /* Transition: '<S880>:107' */
    rtb_TmpSignalConversionAtVeS_h1 = Rte_Read_VeSR1B_n_MinEngSpdCap_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_n_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_MinEngSpdCap_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S886>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MinEngSpdCap_SigSts_Value(&tmpRead_3c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S883>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3c) & 3U) != 0U)
    {
        /* Transition: '<S886>:100' */
        /* Transition: '<S886>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S886>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3c) & 4U) != 0U)
        {
            /* Transition: '<S886>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S886>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S886>:110' */
                /* Call Tmot */
                VeSR1B_y_MinEngSpdCap_CallStatus = 3U;

                /* Event: '<S886>:40' */
                /* Transition: '<S886>:115' */
                /* Transition: '<S886>:114' */
            }
        }
        else
        {
            /* Transition: '<S886>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_h1) == 133)
            {
                /* Transition: '<S886>:95' */
                /* Transition: '<S886>:116' */
                /* Call Nothing */
                VeSR1B_y_MinEngSpdCap_CallStatus = 4U;

                /* Transition: '<S886>:114' */
            }
            else
            {
                /* Transition: '<S886>:120' */
                /* Transition: '<S886>:117' */
                /* Call Poke */
                VeSR1B_y_MinEngSpdCap_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S852>/Poke' */
                /* FunctionCaller: '<S888>/Function Caller' */
                /* Event: '<S886>:38' */
                Rte_Call_PokeESPR_n_EngSpdMinLim_PokeESPR_n_EngSpdMinLim
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_n_e);

                /* End of Outputs for SubSystem: '<S852>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S886>:111' */
        /* Call Fsft */
        VeSR1B_y_MinEngSpdCap_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S852>/Fsft' */
        /* FunctionCaller: '<S887>/Function Caller' */
        /* Event: '<S886>:39' */
        Rte_Call_FsftESPR_n_EngSpdMinLim_FsftESPR_n_EngSpdMinLim();

        /* End of Outputs for SubSystem: '<S852>/Fsft' */
        /* Transition: '<S886>:113' */
        /* Transition: '<S886>:115' */
        /* Transition: '<S886>:114' */
    }

    /* End of Chart: '<S883>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_PECP_PumpFlowReq_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_PECP_PumpFlowReq_ErrSts'
     */
    /* Transition: '<S886>:107' */
    rtb_TmpSignalConversionAtVeS_aj = Rte_Read_VeSR1B_Pct_PECP_PumpFlowReq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_P_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_PECP_PumpFlowReq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S892>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_PECP_PumpFlowReq_SigSts_Value(&tmpRead_3d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S889>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3d) & 3U) != 0U)
    {
        /* Transition: '<S892>:100' */
        /* Transition: '<S892>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S892>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3d) & 4U) != 0U)
        {
            /* Transition: '<S892>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S892>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S892>:110' */
                /* Call Tmot */
                VeSR1B_y_PECP_PumpFlowReq_CallStatus = 3U;

                /* Event: '<S892>:40' */
                /* Transition: '<S892>:115' */
                /* Transition: '<S892>:114' */
            }
        }
        else
        {
            /* Transition: '<S892>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_aj) == 133)
            {
                /* Transition: '<S892>:95' */
                /* Transition: '<S892>:116' */
                /* Call Nothing */
                VeSR1B_y_PECP_PumpFlowReq_CallStatus = 4U;

                /* Transition: '<S892>:114' */
            }
            else
            {
                /* Transition: '<S892>:120' */
                if ((((uint32)tmpRead_3d) & 8U) != 0U)
                {
                    /* Transition: '<S892>:122' */
                    /* Transition: '<S892>:125' */
                    FA_out_p5 = true;

                    /* Transition: '<S892>:126' */
                }
                else
                {
                    /* Transition: '<S892>:124' */
                    FA_out_p5 = false;
                }

                /* Transition: '<S892>:117' */
                /* Call Poke */
                VeSR1B_y_PECP_PumpFlowReq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S853>/Poke' */
                /* FunctionCaller: '<S894>/Function Caller' */
                /* Event: '<S892>:38' */
                Rte_Call_PokePMIR_Pct_ECM_LTPsvPmpRq_PokePMIR_Pct_ECM_LTPsvPmpRq
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_P_o, FA_out_p5);

                /* End of Outputs for SubSystem: '<S853>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S892>:111' */
        /* Call Fsft */
        VeSR1B_y_PECP_PumpFlowReq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S853>/Fsft' */
        /* FunctionCaller: '<S893>/Function Caller' */
        /* Event: '<S892>:39' */
        Rte_Call_FsftPMIR_b_ECM_LTPsvPmpRq_FsftPMIR_b_ECM_LTPsvPmpRq();

        /* End of Outputs for SubSystem: '<S853>/Fsft' */
        /* Transition: '<S892>:113' */
        /* Transition: '<S892>:115' */
        /* Transition: '<S892>:114' */
    }

    /* End of Chart: '<S889>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ServiceHybSys_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ServiceHybSys_ErrSts'
     */
    /* Transition: '<S892>:107' */
    rtb_TmpSignalConversionAtVeS_fc = Rte_Read_VeSR1B_b_ServiceHybSys_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_S);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ServiceHybSys_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S898>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ServiceHybSys_SigSts_Value(&tmpRead_3e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S895>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3e) & 3U) != 0U)
    {
        /* Transition: '<S898>:100' */
        /* Transition: '<S898>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S898>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3e) & 4U) != 0U)
        {
            /* Transition: '<S898>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S898>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S898>:110' */
                /* Call Tmot */
                VeSR1B_y_ServiceHybSys_CallStatus = 3U;

                /* Event: '<S898>:40' */
                /* Transition: '<S898>:115' */
                /* Transition: '<S898>:114' */
            }
        }
        else
        {
            /* Transition: '<S898>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fc) == 133)
            {
                /* Transition: '<S898>:95' */
                /* Transition: '<S898>:116' */
                /* Call Nothing */
                VeSR1B_y_ServiceHybSys_CallStatus = 4U;

                /* Transition: '<S898>:114' */
            }
            else
            {
                /* Transition: '<S898>:120' */
                /* Transition: '<S898>:117' */
                /* Call Poke */
                VeSR1B_y_ServiceHybSys_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S854>/Poke' */
                /* FunctionCaller: '<S900>/Function Caller' */
                /* Event: '<S898>:38' */
                Rte_Call_PokeHMIR_b_ServiceHybSys_PokeHMIR_b_ServiceHybSys
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_S);

                /* End of Outputs for SubSystem: '<S854>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S898>:111' */
        /* Call Fsft */
        VeSR1B_y_ServiceHybSys_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S854>/Fsft' */
        /* FunctionCaller: '<S899>/Function Caller' */
        /* Event: '<S898>:39' */
        Rte_Call_FsftHMIR_b_ServiceHybSys_FsftHMIR_b_ServiceHybSys();

        /* End of Outputs for SubSystem: '<S854>/Fsft' */
        /* Transition: '<S898>:113' */
        /* Transition: '<S898>:115' */
        /* Transition: '<S898>:114' */
    }

    /* End of Chart: '<S895>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_CatHtgStateActive_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_CatHtgStateActive_ErrSts'
     */
    /* Transition: '<S898>:107' */
    rtb_TmpSignalConversionAtVeS_l0 = Rte_Read_VeSR1B_b_CatHtgStateActive_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__cd);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_CatHtgStateActive_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S905>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_CatHtgStateActive_SigSts_Value(&tmpRead_3f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S903>/Chart' */
    if ((((uint32)tmpRead_3f) & 3U) != 0U)
    {
        /* Transition: '<S905>:100' */
        /* Transition: '<S905>:103' */
        /* Transition: '<S905>:111' */
        /* Call Fsft */
        VeSR1B_y_CatHtgStateActive_CallStatus = 2U;

        /* Event: '<S905>:39' */
        /* Transition: '<S905>:113' */
        /* Transition: '<S905>:115' */
        /* Transition: '<S905>:114' */
    }
    else
    {
        /* Transition: '<S905>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3f) & 4U) != 0U)
        {
            /* Transition: '<S905>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S905>:88' */
                /* Transition: '<S905>:111' */
                /* Call Fsft */
                VeSR1B_y_CatHtgStateActive_CallStatus = 2U;

                /* Event: '<S905>:39' */
                /* Transition: '<S905>:113' */
                /* Transition: '<S905>:115' */
                /* Transition: '<S905>:114' */
            }
            else
            {
                /* Transition: '<S905>:110' */
                /* Call Tmot */
                VeSR1B_y_CatHtgStateActive_CallStatus = 3U;

                /* Event: '<S905>:40' */
                /* Transition: '<S905>:115' */
                /* Transition: '<S905>:114' */
            }
        }
        else
        {
            /* Transition: '<S905>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_l0) == 133)
            {
                /* Transition: '<S905>:95' */
                /* Transition: '<S905>:116' */
                /* Call Nothing */
                VeSR1B_y_CatHtgStateActive_CallStatus = 4U;

                /* Transition: '<S905>:114' */
            }
            else
            {
                /* Transition: '<S905>:120' */
                /* Transition: '<S905>:117' */
                /* Call Poke */
                VeSR1B_y_CatHtgStateActive_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S901>/Poke' */
                /* FunctionCaller: '<S906>/Function Caller' */
                /* Event: '<S905>:38' */
                Rte_Call_PokeENGR_b_CatalystWarmUpEnabled_PokeENGR_b_CatalystWarmUpEnabled
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__cd);

                /* End of Outputs for SubSystem: '<S901>/Poke' */
            }
        }
    }

    /* End of Chart: '<S903>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_CatTempMaint_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_CatTempMaint_ErrSts'
     */
    /* Transition: '<S905>:107' */
    rtb_TmpSignalConversionAtVe_fjl = Rte_Read_VeSR1B_b_CatTempMaint_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_CatTempMaint_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S909>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_CatTempMaint_SigSts_Value(&tmpRead_3g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S907>/Chart' */
    if ((((uint32)tmpRead_3g) & 3U) != 0U)
    {
        /* Transition: '<S909>:100' */
        /* Transition: '<S909>:103' */
        /* Transition: '<S909>:111' */
        /* Call Fsft */
        VeSR1B_y_CatTempMaint_CallStatus = 2U;

        /* Event: '<S909>:39' */
        /* Transition: '<S909>:113' */
        /* Transition: '<S909>:115' */
        /* Transition: '<S909>:114' */
    }
    else
    {
        /* Transition: '<S909>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3g) & 4U) != 0U)
        {
            /* Transition: '<S909>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S909>:88' */
                /* Transition: '<S909>:111' */
                /* Call Fsft */
                VeSR1B_y_CatTempMaint_CallStatus = 2U;

                /* Event: '<S909>:39' */
                /* Transition: '<S909>:113' */
                /* Transition: '<S909>:115' */
                /* Transition: '<S909>:114' */
            }
            else
            {
                /* Transition: '<S909>:110' */
                /* Call Tmot */
                VeSR1B_y_CatTempMaint_CallStatus = 3U;

                /* Event: '<S909>:40' */
                /* Transition: '<S909>:115' */
                /* Transition: '<S909>:114' */
            }
        }
        else
        {
            /* Transition: '<S909>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_fjl) == 133)
            {
                /* Transition: '<S909>:95' */
                /* Transition: '<S909>:116' */
                /* Call Nothing */
                VeSR1B_y_CatTempMaint_CallStatus = 4U;

                /* Transition: '<S909>:114' */
            }
            else
            {
                /* Transition: '<S909>:120' */
                /* Transition: '<S909>:117' */
                /* Call Poke */
                VeSR1B_y_CatTempMaint_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S902>/Poke' */
                /* FunctionCaller: '<S910>/Function Caller' */
                /* Event: '<S909>:38' */
                Rte_Call_PokeENGR_b_CatTempMaintEnabled_PokeENGR_b_CatTempMaintEnabled
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_i);

                /* End of Outputs for SubSystem: '<S902>/Poke' */
            }
        }
    }

    /* End of Chart: '<S907>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPA_ServLamp_Req_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPA_ServLamp_Req_ErrSts'
     */
    /* Transition: '<S909>:107' */
    rtb_TmpSignalConversionAtVeC_gh = Rte_Read_VeCRDB_b_MCPA_ServLamp_Req_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_M);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPA_ServLamp_Req_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S914>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_ServLamp_Req_SigSts_Value(&tmpRead_3h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S912>/Chart' */
    if ((((uint32)tmpRead_3h) & 3U) != 0U)
    {
        /* Transition: '<S914>:100' */
        /* Transition: '<S914>:103' */
        /* Transition: '<S914>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_ServLamp_Req_CallStatus = 2U;

        /* Event: '<S914>:39' */
        /* Transition: '<S914>:113' */
        /* Transition: '<S914>:115' */
        /* Transition: '<S914>:114' */
    }
    else
    {
        /* Transition: '<S914>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3h) & 4U) != 0U)
        {
            /* Transition: '<S914>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S914>:88' */
                /* Transition: '<S914>:111' */
                /* Call Fsft */
                VeCRDB_y_MCPA_ServLamp_Req_CallStatus = 2U;

                /* Event: '<S914>:39' */
                /* Transition: '<S914>:113' */
                /* Transition: '<S914>:115' */
                /* Transition: '<S914>:114' */
            }
            else
            {
                /* Transition: '<S914>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_ServLamp_Req_CallStatus = 3U;

                /* Event: '<S914>:40' */
                /* Transition: '<S914>:115' */
                /* Transition: '<S914>:114' */
            }
        }
        else
        {
            /* Transition: '<S914>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_gh) == 133)
            {
                /* Transition: '<S914>:95' */
                /* Transition: '<S914>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_ServLamp_Req_CallStatus = 4U;

                /* Transition: '<S914>:114' */
            }
            else
            {
                /* Transition: '<S914>:120' */
                /* Transition: '<S914>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_ServLamp_Req_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S911>/Poke' */
                /* FunctionCaller: '<S915>/Function Caller' */
                /* Event: '<S914>:38' */
                Rte_Call_PokeHMIR_b_MCPA_Service_Lamp_Request_PokeHMIR_b_MCPA_Service_Lamp_Request
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_M);

                /* End of Outputs for SubSystem: '<S911>/Poke' */
            }
        }
    }

    /* End of Chart: '<S912>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPA_InverterTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPA_InverterTemp_ErrSts'
     */
    /* Transition: '<S914>:107' */
    rtb_TmpSignalConversionAtVeC_e1 = Rte_Read_VeCRDB_T_MCPA_InverterTemp_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_M);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPA_InverterTemp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S924>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_InverterTemp_SigSts_Value(&tmpRead_3i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S920>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3i) & 3U) != 0U)
    {
        /* Transition: '<S924>:100' */
        /* Transition: '<S924>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S924>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3i) & 4U) != 0U)
        {
            /* Transition: '<S924>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S924>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S924>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_InverterTemp_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S916>/Tmot' */
                /* FunctionCaller: '<S927>/Function Caller' */
                /* Event: '<S924>:40' */
                Rte_Call_TmotINVR_b_MtrA_InvrtrTemp_TmotINVR_b_MtrA_InvrtrTemp();

                /* End of Outputs for SubSystem: '<S916>/Tmot' */
                /* Transition: '<S924>:115' */
                /* Transition: '<S924>:114' */
            }
        }
        else
        {
            /* Transition: '<S924>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_e1) == 133)
            {
                /* Transition: '<S924>:95' */
                /* Transition: '<S924>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_InverterTemp_CallStatus = 4U;

                /* Transition: '<S924>:114' */
            }
            else
            {
                /* Transition: '<S924>:120' */
                if ((((uint32)tmpRead_3i) & 8U) != 0U)
                {
                    /* Transition: '<S924>:122' */
                    /* Transition: '<S924>:125' */
                    FA_out_p5 = true;

                    /* Transition: '<S924>:126' */
                }
                else
                {
                    /* Transition: '<S924>:124' */
                    FA_out_p5 = false;
                }

                /* Transition: '<S924>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_InverterTemp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S916>/Poke' */
                /* FunctionCaller: '<S926>/Function Caller' */
                /* Event: '<S924>:38' */
                Rte_Call_PokeINVR_T_MtrA_InvrtrTemp_PokeINVR_T_MtrA_InvrtrTemp
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_M, FA_out_p5);

                /* End of Outputs for SubSystem: '<S916>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S924>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_InverterTemp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S916>/Fsft' */
        /* FunctionCaller: '<S925>/Function Caller' */
        /* Event: '<S924>:39' */
        Rte_Call_FsftINVR_T_MtrA_InvrtrTemp_FsftINVR_T_MtrA_InvrtrTemp();

        /* End of Outputs for SubSystem: '<S916>/Fsft' */
        /* Transition: '<S924>:113' */
        /* Transition: '<S924>:115' */
        /* Transition: '<S924>:114' */
    }

    /* End of Chart: '<S920>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPA_ROL_Request_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPA_ROL_Request_ErrSts'
     */
    /* Transition: '<S924>:107' */
    rtb_TmpSignalConversionAtVeC_it = Rte_Read_VeCRDB_b_MCPA_ROL_Request_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPA_ROL_Request_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S930>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_ROL_Request_SigSts_Value(&tmpRead_3j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S928>/Chart' */
    if ((((uint32)tmpRead_3j) & 3U) != 0U)
    {
        /* Transition: '<S930>:100' */
        /* Transition: '<S930>:103' */
        /* Transition: '<S930>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_ROL_Request_CallStatus = 2U;

        /* Event: '<S930>:39' */
        /* Transition: '<S930>:113' */
        /* Transition: '<S930>:115' */
        /* Transition: '<S930>:114' */
    }
    else
    {
        /* Transition: '<S930>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3j) & 4U) != 0U)
        {
            /* Transition: '<S930>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S930>:88' */
                /* Transition: '<S930>:111' */
                /* Call Fsft */
                VeCRDB_y_MCPA_ROL_Request_CallStatus = 2U;

                /* Event: '<S930>:39' */
                /* Transition: '<S930>:113' */
                /* Transition: '<S930>:115' */
                /* Transition: '<S930>:114' */
            }
            else
            {
                /* Transition: '<S930>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_ROL_Request_CallStatus = 3U;

                /* Event: '<S930>:40' */
                /* Transition: '<S930>:115' */
                /* Transition: '<S930>:114' */
            }
        }
        else
        {
            /* Transition: '<S930>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_it) == 133)
            {
                /* Transition: '<S930>:95' */
                /* Transition: '<S930>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_ROL_Request_CallStatus = 4U;

                /* Transition: '<S930>:114' */
            }
            else
            {
                /* Transition: '<S930>:120' */
                /* Transition: '<S930>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_ROL_Request_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S917>/Poke' */
                /* FunctionCaller: '<S931>/Function Caller' */
                /* Event: '<S930>:38' */
                Rte_Call_PokeRTMR_b_MCPA_ROL_Request_PokeRTMR_b_MCPA_ROL_Request
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_f);

                /* End of Outputs for SubSystem: '<S917>/Poke' */
            }
        }
    }

    /* End of Chart: '<S928>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPA_Rotor_Temp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPA_Rotor_Temp_ErrSts'
     */
    /* Transition: '<S930>:107' */
    rtb_TmpSignalConversionAtVeC_j5 = Rte_Read_VeCRDB_T_MCPA_Rotor_Temp_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPA_Rotor_Temp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S936>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_Rotor_Temp_SigSts_Value(&tmpRead_3k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S932>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3k) & 3U) != 0U)
    {
        /* Transition: '<S936>:100' */
        /* Transition: '<S936>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S936>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3k) & 4U) != 0U)
        {
            /* Transition: '<S936>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S936>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S936>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_Rotor_Temp_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S918>/Tmot' */
                /* FunctionCaller: '<S939>/Function Caller' */
                /* Event: '<S936>:40' */
                Rte_Call_TmotINVR_b_MtrA_RotrTemp_TmotINVR_b_MtrA_RotrTemp();

                /* End of Outputs for SubSystem: '<S918>/Tmot' */
                /* Transition: '<S936>:115' */
                /* Transition: '<S936>:114' */
            }
        }
        else
        {
            /* Transition: '<S936>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_j5) == 133)
            {
                /* Transition: '<S936>:95' */
                /* Transition: '<S936>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_Rotor_Temp_CallStatus = 4U;

                /* Transition: '<S936>:114' */
            }
            else
            {
                /* Transition: '<S936>:120' */
                if ((((uint32)tmpRead_3k) & 8U) != 0U)
                {
                    /* Transition: '<S936>:122' */
                    /* Transition: '<S936>:125' */
                    FA_out_p5 = true;

                    /* Transition: '<S936>:126' */
                }
                else
                {
                    /* Transition: '<S936>:124' */
                    FA_out_p5 = false;
                }

                /* Transition: '<S936>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_Rotor_Temp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S918>/Poke' */
                /* FunctionCaller: '<S938>/Function Caller' */
                /* Event: '<S936>:38' */
                Rte_Call_PokeINVR_T_MtrA_RotrTemp_PokeINVR_T_MtrA_RotrTemp
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_k, FA_out_p5);

                /* End of Outputs for SubSystem: '<S918>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S936>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_Rotor_Temp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S918>/Fsft' */
        /* FunctionCaller: '<S937>/Function Caller' */
        /* Event: '<S936>:39' */
        Rte_Call_FsftINVR_T_MtrA_RotrTemp_FsftINVR_T_MtrA_RotrTemp();

        /* End of Outputs for SubSystem: '<S918>/Fsft' */
        /* Transition: '<S936>:113' */
        /* Transition: '<S936>:115' */
        /* Transition: '<S936>:114' */
    }

    /* End of Chart: '<S932>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPA_Temp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPA_Temp_ErrSts'
     */
    /* Transition: '<S936>:107' */
    rtb_TmpSignalConversionAtVeC_fz = Rte_Read_VeCRDB_T_MCPA_Temp_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPA_Temp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S944>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_Temp_SigSts_Value(&tmpRead_3l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S940>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3l) & 3U) != 0U)
    {
        /* Transition: '<S944>:100' */
        /* Transition: '<S944>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S944>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3l) & 4U) != 0U)
        {
            /* Transition: '<S944>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S944>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S944>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_Temp_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S919>/Tmot' */
                /* FunctionCaller: '<S947>/Function Caller' */
                /* Event: '<S944>:40' */
                Rte_Call_TmotINVR_b_MtrA_Temp_TmotINVR_b_MtrA_Temp();

                /* End of Outputs for SubSystem: '<S919>/Tmot' */
                /* Transition: '<S944>:115' */
                /* Transition: '<S944>:114' */
            }
        }
        else
        {
            /* Transition: '<S944>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_fz) == 133)
            {
                /* Transition: '<S944>:95' */
                /* Transition: '<S944>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_Temp_CallStatus = 4U;

                /* Transition: '<S944>:114' */
            }
            else
            {
                /* Transition: '<S944>:120' */
                if ((((uint32)tmpRead_3l) & 8U) != 0U)
                {
                    /* Transition: '<S944>:122' */
                    /* Transition: '<S944>:125' */
                    FA_out_p5 = true;

                    /* Transition: '<S944>:126' */
                }
                else
                {
                    /* Transition: '<S944>:124' */
                    FA_out_p5 = false;
                }

                /* Transition: '<S944>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_Temp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S919>/Poke' */
                /* FunctionCaller: '<S946>/Function Caller' */
                /* Event: '<S944>:38' */
                Rte_Call_PokeINVR_T_MtrA_Temp_PokeINVR_T_MtrA_Temp
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_c, FA_out_p5);

                /* End of Outputs for SubSystem: '<S919>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S944>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_Temp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S919>/Fsft' */
        /* FunctionCaller: '<S945>/Function Caller' */
        /* Event: '<S944>:39' */
        Rte_Call_FsftINVR_T_MtrA_Temp_FsftINVR_T_MtrA_Temp();

        /* End of Outputs for SubSystem: '<S919>/Fsft' */
        /* Transition: '<S944>:113' */
        /* Transition: '<S944>:115' */
        /* Transition: '<S944>:114' */
    }

    /* End of Chart: '<S940>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_ServLamp_Req_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_ServLamp_Req_ErrSts'
     */
    /* Transition: '<S944>:107' */
    rtb_TmpSignalConversionAtVe_ol2 = Rte_Read_VeCRDB_b_MCPB_ServLamp_Req_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_ServLamp_Req_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S951>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_ServLamp_Req_SigSts_Value(&tmpRead_3m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S949>/Chart' */
    if ((((uint32)tmpRead_3m) & 3U) != 0U)
    {
        /* Transition: '<S951>:100' */
        /* Transition: '<S951>:103' */
        /* Transition: '<S951>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_ServLamp_Req_CallStatus = 2U;

        /* Event: '<S951>:39' */
        /* Transition: '<S951>:113' */
        /* Transition: '<S951>:115' */
        /* Transition: '<S951>:114' */
    }
    else
    {
        /* Transition: '<S951>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3m) & 4U) != 0U)
        {
            /* Transition: '<S951>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S951>:88' */
                /* Transition: '<S951>:111' */
                /* Call Fsft */
                VeCRDB_y_MCPB_ServLamp_Req_CallStatus = 2U;

                /* Event: '<S951>:39' */
                /* Transition: '<S951>:113' */
                /* Transition: '<S951>:115' */
                /* Transition: '<S951>:114' */
            }
            else
            {
                /* Transition: '<S951>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_ServLamp_Req_CallStatus = 3U;

                /* Event: '<S951>:40' */
                /* Transition: '<S951>:115' */
                /* Transition: '<S951>:114' */
            }
        }
        else
        {
            /* Transition: '<S951>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_ol2) == 133)
            {
                /* Transition: '<S951>:95' */
                /* Transition: '<S951>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_ServLamp_Req_CallStatus = 4U;

                /* Transition: '<S951>:114' */
            }
            else
            {
                /* Transition: '<S951>:120' */
                /* Transition: '<S951>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_ServLamp_Req_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S948>/Poke' */
                /* FunctionCaller: '<S952>/Function Caller' */
                /* Event: '<S951>:38' */
                Rte_Call_PokeHMIR_b_MCPB_Service_Lamp_Request_PokeHMIR_b_MCPB_Service_Lamp_Request
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_b);

                /* End of Outputs for SubSystem: '<S948>/Poke' */
            }
        }
    }

    /* End of Chart: '<S949>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_InverterTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_InverterTemp_ErrSts'
     */
    /* Transition: '<S951>:107' */
    rtb_TmpSignalConversionAtVeC_o1 = Rte_Read_VeCRDB_T_MCPB_InverterTemp_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__dl);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_InverterTemp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S961>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_InverterTemp_SigSts_Value(&tmpRead_3n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S957>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3n) & 3U) != 0U)
    {
        /* Transition: '<S961>:100' */
        /* Transition: '<S961>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S961>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3n) & 4U) != 0U)
        {
            /* Transition: '<S961>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S961>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S961>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_InverterTemp_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S953>/Tmot' */
                /* FunctionCaller: '<S964>/Function Caller' */
                /* Event: '<S961>:40' */
                Rte_Call_TmotINVR_b_MtrB_InvrtrTemp_TmotINVR_b_MtrB_InvrtrTemp();

                /* End of Outputs for SubSystem: '<S953>/Tmot' */
                /* Transition: '<S961>:115' */
                /* Transition: '<S961>:114' */
            }
        }
        else
        {
            /* Transition: '<S961>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_o1) == 133)
            {
                /* Transition: '<S961>:95' */
                /* Transition: '<S961>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_InverterTemp_CallStatus = 4U;

                /* Transition: '<S961>:114' */
            }
            else
            {
                /* Transition: '<S961>:120' */
                if ((((uint32)tmpRead_3n) & 8U) != 0U)
                {
                    /* Transition: '<S961>:122' */
                    /* Transition: '<S961>:125' */
                    FA_out_p5 = true;

                    /* Transition: '<S961>:126' */
                }
                else
                {
                    /* Transition: '<S961>:124' */
                    FA_out_p5 = false;
                }

                /* Transition: '<S961>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_InverterTemp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S953>/Poke' */
                /* FunctionCaller: '<S963>/Function Caller' */
                /* Event: '<S961>:38' */
                Rte_Call_PokeINVR_T_MtrB_InvrtrTemp_PokeINVR_T_MtrB_InvrtrTemp
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__dl, FA_out_p5);

                /* End of Outputs for SubSystem: '<S953>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S961>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_InverterTemp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S953>/Fsft' */
        /* FunctionCaller: '<S962>/Function Caller' */
        /* Event: '<S961>:39' */
        Rte_Call_FsftINVR_T_MtrB_InvrtrTemp_FsftINVR_T_MtrB_InvrtrTemp();

        /* End of Outputs for SubSystem: '<S953>/Fsft' */
        /* Transition: '<S961>:113' */
        /* Transition: '<S961>:115' */
        /* Transition: '<S961>:114' */
    }

    /* End of Chart: '<S957>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_ROL_Request_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_ROL_Request_ErrSts'
     */
    /* Transition: '<S961>:107' */
    rtb_TmpSignalConversionAtVe_ejc = Rte_Read_VeCRDB_b_MCPB_ROL_Request_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_ROL_Request_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S967>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_ROL_Request_SigSts_Value(&tmpRead_3o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S965>/Chart' */
    if ((((uint32)tmpRead_3o) & 3U) != 0U)
    {
        /* Transition: '<S967>:100' */
        /* Transition: '<S967>:103' */
        /* Transition: '<S967>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_ROL_Request_CallStatus = 2U;

        /* Event: '<S967>:39' */
        /* Transition: '<S967>:113' */
        /* Transition: '<S967>:115' */
        /* Transition: '<S967>:114' */
    }
    else
    {
        /* Transition: '<S967>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3o) & 4U) != 0U)
        {
            /* Transition: '<S967>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S967>:88' */
                /* Transition: '<S967>:111' */
                /* Call Fsft */
                VeCRDB_y_MCPB_ROL_Request_CallStatus = 2U;

                /* Event: '<S967>:39' */
                /* Transition: '<S967>:113' */
                /* Transition: '<S967>:115' */
                /* Transition: '<S967>:114' */
            }
            else
            {
                /* Transition: '<S967>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_ROL_Request_CallStatus = 3U;

                /* Event: '<S967>:40' */
                /* Transition: '<S967>:115' */
                /* Transition: '<S967>:114' */
            }
        }
        else
        {
            /* Transition: '<S967>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_ejc) == 133)
            {
                /* Transition: '<S967>:95' */
                /* Transition: '<S967>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_ROL_Request_CallStatus = 4U;

                /* Transition: '<S967>:114' */
            }
            else
            {
                /* Transition: '<S967>:120' */
                /* Transition: '<S967>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_ROL_Request_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S954>/Poke' */
                /* FunctionCaller: '<S968>/Function Caller' */
                /* Event: '<S967>:38' */
                Rte_Call_PokeRTMR_b_MCPB_ROL_Request_PokeRTMR_b_MCPB_ROL_Request
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_h);

                /* End of Outputs for SubSystem: '<S954>/Poke' */
            }
        }
    }

    /* End of Chart: '<S965>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_Rotor_Temp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_Rotor_Temp_ErrSts'
     */
    /* Transition: '<S967>:107' */
    rtb_TmpSignalConversionAtVeC_b1 = Rte_Read_VeCRDB_T_MCPB_Rotor_Temp_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__c1);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_Rotor_Temp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S973>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_Rotor_Temp_SigSts_Value(&tmpRead_3p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S969>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3p) & 3U) != 0U)
    {
        /* Transition: '<S973>:100' */
        /* Transition: '<S973>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S973>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3p) & 4U) != 0U)
        {
            /* Transition: '<S973>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S973>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S973>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_Rotor_Temp_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S955>/Tmot' */
                /* FunctionCaller: '<S976>/Function Caller' */
                /* Event: '<S973>:40' */
                Rte_Call_TmotINVR_b_MtrB_RotrTemp_TmotINVR_b_MtrB_RotrTemp();

                /* End of Outputs for SubSystem: '<S955>/Tmot' */
                /* Transition: '<S973>:115' */
                /* Transition: '<S973>:114' */
            }
        }
        else
        {
            /* Transition: '<S973>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_b1) == 133)
            {
                /* Transition: '<S973>:95' */
                /* Transition: '<S973>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_Rotor_Temp_CallStatus = 4U;

                /* Transition: '<S973>:114' */
            }
            else
            {
                /* Transition: '<S973>:120' */
                if ((((uint32)tmpRead_3p) & 8U) != 0U)
                {
                    /* Transition: '<S973>:122' */
                    /* Transition: '<S973>:125' */
                    FA_out_p5 = true;

                    /* Transition: '<S973>:126' */
                }
                else
                {
                    /* Transition: '<S973>:124' */
                    FA_out_p5 = false;
                }

                /* Transition: '<S973>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_Rotor_Temp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S955>/Poke' */
                /* FunctionCaller: '<S975>/Function Caller' */
                /* Event: '<S973>:38' */
                Rte_Call_PokeINVR_T_MtrB_RotrTemp_PokeINVR_T_MtrB_RotrTemp
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__c1, FA_out_p5);

                /* End of Outputs for SubSystem: '<S955>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S973>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_Rotor_Temp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S955>/Fsft' */
        /* FunctionCaller: '<S974>/Function Caller' */
        /* Event: '<S973>:39' */
        Rte_Call_FsftINVR_T_MtrB_RotrTemp_FsftINVR_T_MtrB_RotrTemp();

        /* End of Outputs for SubSystem: '<S955>/Fsft' */
        /* Transition: '<S973>:113' */
        /* Transition: '<S973>:115' */
        /* Transition: '<S973>:114' */
    }

    /* End of Chart: '<S969>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_Temp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_Temp_ErrSts'
     */
    /* Transition: '<S973>:107' */
    rtb_TmpSignalConversionAtVeC_nl = Rte_Read_VeCRDB_T_MCPB_Temp_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_Temp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S981>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_Temp_SigSts_Value(&tmpRead_3q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S977>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3q) & 3U) != 0U)
    {
        /* Transition: '<S981>:100' */
        /* Transition: '<S981>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S981>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3q) & 4U) != 0U)
        {
            /* Transition: '<S981>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S981>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S981>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_Temp_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S956>/Tmot' */
                /* FunctionCaller: '<S984>/Function Caller' */
                /* Event: '<S981>:40' */
                Rte_Call_TmotINVR_b_MtrB_Temp_TmotINVR_b_MtrB_Temp();

                /* End of Outputs for SubSystem: '<S956>/Tmot' */
                /* Transition: '<S981>:115' */
                /* Transition: '<S981>:114' */
            }
        }
        else
        {
            /* Transition: '<S981>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_nl) == 133)
            {
                /* Transition: '<S981>:95' */
                /* Transition: '<S981>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_Temp_CallStatus = 4U;

                /* Transition: '<S981>:114' */
            }
            else
            {
                /* Transition: '<S981>:120' */
                if ((((uint32)tmpRead_3q) & 8U) != 0U)
                {
                    /* Transition: '<S981>:122' */
                    /* Transition: '<S981>:125' */
                    FA_out_p5 = true;

                    /* Transition: '<S981>:126' */
                }
                else
                {
                    /* Transition: '<S981>:124' */
                    FA_out_p5 = false;
                }

                /* Transition: '<S981>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_Temp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S956>/Poke' */
                /* FunctionCaller: '<S983>/Function Caller' */
                /* Event: '<S981>:38' */
                Rte_Call_PokeINVR_T_MtrB_Temp_PokeINVR_T_MtrB_Temp
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_i, FA_out_p5);

                /* End of Outputs for SubSystem: '<S956>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S981>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_Temp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S956>/Fsft' */
        /* FunctionCaller: '<S982>/Function Caller' */
        /* Event: '<S981>:39' */
        Rte_Call_FsftINVR_T_MtrB_Temp_FsftINVR_T_MtrB_Temp();

        /* End of Outputs for SubSystem: '<S956>/Fsft' */
        /* Transition: '<S981>:113' */
        /* Transition: '<S981>:115' */
        /* Transition: '<S981>:114' */
    }

    /* End of Chart: '<S977>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngLoad_OBD_ePT_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngLoad_OBD_ePT_ErrSts'
     */
    /* Transition: '<S981>:107' */
    rtb_TmpSignalConversionAtVeS_mn = Rte_Read_VeSR1B_Pct_EngLoad_OBD_ePT_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_P_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngLoad_OBD_ePT_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S989>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngLoad_OBD_ePT_SigSts_Value(&tmpRead_3r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S987>/Chart' */
    if ((((uint32)tmpRead_3r) & 3U) != 0U)
    {
        /* Transition: '<S989>:100' */
        /* Transition: '<S989>:103' */
        /* Transition: '<S989>:111' */
        /* Call Fsft */
        VeSR1B_y_EngLoad_OBD_ePT_CallStatus = 2U;

        /* Event: '<S989>:39' */
        /* Transition: '<S989>:113' */
        /* Transition: '<S989>:115' */
        /* Transition: '<S989>:114' */
    }
    else
    {
        /* Transition: '<S989>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3r) & 4U) != 0U)
        {
            /* Transition: '<S989>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S989>:88' */
                /* Transition: '<S989>:111' */
                /* Call Fsft */
                VeSR1B_y_EngLoad_OBD_ePT_CallStatus = 2U;

                /* Event: '<S989>:39' */
                /* Transition: '<S989>:113' */
                /* Transition: '<S989>:115' */
                /* Transition: '<S989>:114' */
            }
            else
            {
                /* Transition: '<S989>:110' */
                /* Call Tmot */
                VeSR1B_y_EngLoad_OBD_ePT_CallStatus = 3U;

                /* Event: '<S989>:40' */
                /* Transition: '<S989>:115' */
                /* Transition: '<S989>:114' */
            }
        }
        else
        {
            /* Transition: '<S989>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_mn) == 133)
            {
                /* Transition: '<S989>:95' */
                /* Transition: '<S989>:116' */
                /* Call Nothing */
                VeSR1B_y_EngLoad_OBD_ePT_CallStatus = 4U;

                /* Transition: '<S989>:114' */
            }
            else
            {
                /* Transition: '<S989>:120' */
                /* Transition: '<S989>:117' */
                /* Call Poke */
                VeSR1B_y_EngLoad_OBD_ePT_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S985>/Poke' */
                /* FunctionCaller: '<S990>/Function Caller' */
                /* Event: '<S989>:38' */
                Rte_Call_PokeENGR_Pct_CalcLoad_OBD_PokeENGR_Pct_CalcLoad_OBD
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_P_j);

                /* End of Outputs for SubSystem: '<S985>/Poke' */
            }
        }
    }

    /* End of Chart: '<S987>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngOffTmPT_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngOffTmPT_ErrSts'
     */
    /* Transition: '<S989>:107' */
    rtb_TmpSignalConversionAtVeS_in = Rte_Read_VeSR1B_tmn_EngOffTmPT_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_tmn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EngOffTmPT_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S993>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngOffTmPT_SigSts_Value(&tmpRead_3s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S991>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_EngOffTmPTV'
     */
    if ((((uint32)tmpRead_3s) & 3U) != 0U)
    {
        /* Transition: '<S993>:100' */
        /* Transition: '<S993>:103' */
        /* Transition: '<S993>:111' */
        /* Call Fsft */
        VeSR1B_y_EngOffTmPT_CallStatus = 2U;

        /* Event: '<S993>:39' */
        /* Transition: '<S993>:113' */
        /* Transition: '<S993>:115' */
        /* Transition: '<S993>:114' */
    }
    else
    {
        /* Transition: '<S993>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3s) & 4U) != 0U)
        {
            /* Transition: '<S993>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S993>:88' */
                /* Transition: '<S993>:111' */
                /* Call Fsft */
                VeSR1B_y_EngOffTmPT_CallStatus = 2U;

                /* Event: '<S993>:39' */
                /* Transition: '<S993>:113' */
                /* Transition: '<S993>:115' */
                /* Transition: '<S993>:114' */
            }
            else
            {
                /* Transition: '<S993>:110' */
                /* Call Tmot */
                VeSR1B_y_EngOffTmPT_CallStatus = 3U;

                /* Event: '<S993>:40' */
                /* Transition: '<S993>:115' */
                /* Transition: '<S993>:114' */
            }
        }
        else
        {
            /* Transition: '<S993>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_in) == 133)
            {
                /* Transition: '<S993>:95' */
                /* Transition: '<S993>:116' */
                /* Call Nothing */
                VeSR1B_y_EngOffTmPT_CallStatus = 4U;

                /* Transition: '<S993>:114' */
            }
            else
            {
                /* Transition: '<S993>:120' */
                (void)Rte_Read_VeSR1B_b_EngOffTmPTV_Value(&FA_out_bv);

                /* Transition: '<S993>:117' */
                /* Call Poke */
                VeSR1B_y_EngOffTmPT_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S986>/Poke' */
                /* FunctionCaller: '<S994>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_EngOffTmPTV'
                 */
                /* Event: '<S993>:38' */
                Rte_Call_PokeENGR_t_EngOffTime_PokeENGR_t_EngOffTime
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_tmn, FA_out_bv);

                /* End of Outputs for SubSystem: '<S986>/Poke' */
            }
        }
    }

    /* End of Chart: '<S991>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PlockFailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PlockFailSts_ErrSts'
     */
    /* Transition: '<S993>:107' */
    rtb_TmpSignalConversionAtVeC_ex = Rte_Read_VeCRDB_y_PlockFailSts_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PlockFailSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1002>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PlockFailSts_SigSts_Value(&tmpRead_3t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S999>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3t) & 3U) != 0U)
    {
        /* Transition: '<S1002>:100' */
        /* Transition: '<S1002>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1002>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3t) & 4U) != 0U)
        {
            /* Transition: '<S1002>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1002>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1002>:110' */
                /* Call Tmot */
                VeCRDB_y_PlockFailSts_CallStatus = 3U;

                /* Event: '<S1002>:40' */
                /* Transition: '<S1002>:115' */
                /* Transition: '<S1002>:114' */
            }
        }
        else
        {
            /* Transition: '<S1002>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ex) == 133)
            {
                /* Transition: '<S1002>:95' */
                /* Transition: '<S1002>:116' */
                /* Call Nothing */
                VeCRDB_y_PlockFailSts_CallStatus = 4U;

                /* Transition: '<S1002>:114' */
            }
            else
            {
                /* Transition: '<S1002>:120' */
                if ((((uint32)tmpRead_3t) & 8U) != 0U)
                {
                    /* Transition: '<S1002>:122' */
                    /* Transition: '<S1002>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1002>:126' */
                }
                else
                {
                    /* Transition: '<S1002>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1002>:117' */
                /* Call Poke */
                VeCRDB_y_PlockFailSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S995>/Poke' */
                /* FunctionCaller: '<S1004>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1004>/Data Type Conversion'
                 */
                /* Event: '<S1002>:38' */
                Rte_Call_PokePPCR_e_Prmry_Park_Pawl_flt_Stat_PokePPCR_e_Prmry_Park_Pawl_flt_Stat
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_d,
                     FA_out_bv);

                /* End of Outputs for SubSystem: '<S995>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1002>:111' */
        /* Call Fsft */
        VeCRDB_y_PlockFailSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S995>/Fsft' */
        /* FunctionCaller: '<S1003>/Function Caller' */
        /* Event: '<S1002>:39' */
        Rte_Call_FsftPPCR_b_Prmry_Park_Pawl_flt_Stat_FsftPPCR_b_Prmry_Park_Pawl_flt_Stat
            ();

        /* End of Outputs for SubSystem: '<S995>/Fsft' */
        /* Transition: '<S1002>:113' */
        /* Transition: '<S1002>:115' */
        /* Transition: '<S1002>:114' */
    }

    /* End of Chart: '<S999>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_Plock_MotorPosSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_Plock_MotorPosSts_ErrSts'
     */
    /* Transition: '<S1002>:107' */
    rtb_TmpSignalConversionAtVeC_iw = Rte_Read_VeCRDB_y_Plock_MotorPosSts_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__lq);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_Plock_MotorPosSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1008>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_Plock_MotorPosSts_SigSts_Value(&tmpRead_3u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1005>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3u) & 3U) != 0U)
    {
        /* Transition: '<S1008>:100' */
        /* Transition: '<S1008>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1008>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3u) & 4U) != 0U)
        {
            /* Transition: '<S1008>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1008>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1008>:110' */
                /* Call Tmot */
                VeCRDB_y_Plock_MotorPosSts_CallStatus = 3U;

                /* Event: '<S1008>:40' */
                /* Transition: '<S1008>:115' */
                /* Transition: '<S1008>:114' */
            }
        }
        else
        {
            /* Transition: '<S1008>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_iw) == 133)
            {
                /* Transition: '<S1008>:95' */
                /* Transition: '<S1008>:116' */
                /* Call Nothing */
                VeCRDB_y_Plock_MotorPosSts_CallStatus = 4U;

                /* Transition: '<S1008>:114' */
            }
            else
            {
                /* Transition: '<S1008>:120' */
                if ((((uint32)tmpRead_3u) & 8U) != 0U)
                {
                    /* Transition: '<S1008>:122' */
                    /* Transition: '<S1008>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1008>:126' */
                }
                else
                {
                    /* Transition: '<S1008>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1008>:117' */
                /* Call Poke */
                VeCRDB_y_Plock_MotorPosSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S996>/Poke' */
                /* FunctionCaller: '<S1010>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1010>/Data Type Conversion'
                 */
                /* Event: '<S1008>:38' */
                Rte_Call_PokePPCR_e_Prmry_PP_Motor_Pos_Stat_PokePPCR_e_Prmry_PP_Motor_Pos_Stat
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__lq,
                     FA_out_bv);

                /* End of Outputs for SubSystem: '<S996>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1008>:111' */
        /* Call Fsft */
        VeCRDB_y_Plock_MotorPosSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S996>/Fsft' */
        /* FunctionCaller: '<S1009>/Function Caller' */
        /* Event: '<S1008>:39' */
        Rte_Call_FsftPPCR_b_Prmry_PP_Motor_Pos_Stat_FsftPPCR_b_Prmry_PP_Motor_Pos_Stat
            ();

        /* End of Outputs for SubSystem: '<S996>/Fsft' */
        /* Transition: '<S1008>:113' */
        /* Transition: '<S1008>:115' */
        /* Transition: '<S1008>:114' */
    }

    /* End of Chart: '<S1005>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_Plock_PosSensor_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_Plock_PosSensor_ErrSts'
     */
    /* Transition: '<S1008>:107' */
    rtb_TmpSignalConversionAtVeC_po = Rte_Read_VeCRDB_y_Plock_PosSensor_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__lu);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_Plock_PosSensor_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1014>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_Plock_PosSensor_SigSts_Value(&tmpRead_3v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1011>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3v) & 3U) != 0U)
    {
        /* Transition: '<S1014>:100' */
        /* Transition: '<S1014>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1014>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3v) & 4U) != 0U)
        {
            /* Transition: '<S1014>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1014>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1014>:110' */
                /* Call Tmot */
                VeCRDB_y_Plock_PosSensor_CallStatus = 3U;

                /* Event: '<S1014>:40' */
                /* Transition: '<S1014>:115' */
                /* Transition: '<S1014>:114' */
            }
        }
        else
        {
            /* Transition: '<S1014>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_po) == 133)
            {
                /* Transition: '<S1014>:95' */
                /* Transition: '<S1014>:116' */
                /* Call Nothing */
                VeCRDB_y_Plock_PosSensor_CallStatus = 4U;

                /* Transition: '<S1014>:114' */
            }
            else
            {
                /* Transition: '<S1014>:120' */
                if ((((uint32)tmpRead_3v) & 8U) != 0U)
                {
                    /* Transition: '<S1014>:122' */
                    /* Transition: '<S1014>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1014>:126' */
                }
                else
                {
                    /* Transition: '<S1014>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1014>:117' */
                /* Call Poke */
                VeCRDB_y_Plock_PosSensor_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S997>/Poke' */
                /* FunctionCaller: '<S1016>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1016>/Data Type Conversion'
                 */
                /* Event: '<S1014>:38' */
                Rte_Call_PokePPCR_e_Prmry_PP_Pos_Sensor_PokePPCR_e_Prmry_PP_Pos_Sensor
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__lu,
                     FA_out_bv);

                /* End of Outputs for SubSystem: '<S997>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1014>:111' */
        /* Call Fsft */
        VeCRDB_y_Plock_PosSensor_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S997>/Fsft' */
        /* FunctionCaller: '<S1015>/Function Caller' */
        /* Event: '<S1014>:39' */
        Rte_Call_FsftPPCR_b_Prmry_PP_Pos_Sensor_FsftPPCR_b_Prmry_PP_Pos_Sensor();

        /* End of Outputs for SubSystem: '<S997>/Fsft' */
        /* Transition: '<S1014>:113' */
        /* Transition: '<S1014>:115' */
        /* Transition: '<S1014>:114' */
    }

    /* End of Chart: '<S1011>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_Plock_fdbk_sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_Plock_fdbk_sts_ErrSts'
     */
    /* Transition: '<S1014>:107' */
    rtb_TmpSignalConversionAtVeC_pc = Rte_Read_VeCRDB_y_Plock_fdbk_sts_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_Plock_fdbk_sts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1020>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_Plock_fdbk_sts_SigSts_Value(&tmpRead_3w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1017>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3w) & 3U) != 0U)
    {
        /* Transition: '<S1020>:100' */
        /* Transition: '<S1020>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1020>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3w) & 4U) != 0U)
        {
            /* Transition: '<S1020>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1020>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1020>:110' */
                /* Call Tmot */
                VeCRDB_y_Plock_fdbk_sts_CallStatus = 3U;

                /* Event: '<S1020>:40' */
                /* Transition: '<S1020>:115' */
                /* Transition: '<S1020>:114' */
            }
        }
        else
        {
            /* Transition: '<S1020>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pc) == 133)
            {
                /* Transition: '<S1020>:95' */
                /* Transition: '<S1020>:116' */
                /* Call Nothing */
                VeCRDB_y_Plock_fdbk_sts_CallStatus = 4U;

                /* Transition: '<S1020>:114' */
            }
            else
            {
                /* Transition: '<S1020>:120' */
                if ((((uint32)tmpRead_3w) & 8U) != 0U)
                {
                    /* Transition: '<S1020>:122' */
                    /* Transition: '<S1020>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1020>:126' */
                }
                else
                {
                    /* Transition: '<S1020>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1020>:117' */
                /* Call Poke */
                VeCRDB_y_Plock_fdbk_sts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S998>/Poke' */
                /* FunctionCaller: '<S1022>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1022>/Data Type Conversion'
                 */
                /* Event: '<S1020>:38' */
                Rte_Call_PokePPCR_e_Prmry_Park_Pawl_Stat_PokePPCR_e_Prmry_Park_Pawl_Stat
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_b,
                     FA_out_bv);

                /* End of Outputs for SubSystem: '<S998>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1020>:111' */
        /* Call Fsft */
        VeCRDB_y_Plock_fdbk_sts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S998>/Fsft' */
        /* FunctionCaller: '<S1021>/Function Caller' */
        /* Event: '<S1020>:39' */
        Rte_Call_FsftPPCR_b_Prmry_Park_Pawl_Stat_FsftPPCR_b_Prmry_Park_Pawl_Stat
            ();

        /* End of Outputs for SubSystem: '<S998>/Fsft' */
        /* Transition: '<S1020>:113' */
        /* Transition: '<S1020>:115' */
        /* Transition: '<S1020>:114' */
    }

    /* End of Chart: '<S1017>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BstConvLwrIGBT_TF_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BstConvLwrIGBT_TF_ErrSts'
     */
    /* Transition: '<S1020>:107' */
    rtb_TmpSignalConversionAtVeC_lz = Rte_Read_VeCRDB_y_BstConvLwrIGBT_TF_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BstConvLwrIGBT_TF_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1038>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BstConvLwrIGBT_TF_SigSts_Value(&tmpRead_3x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1035>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3x) & 3U) != 0U)
    {
        /* Transition: '<S1038>:100' */
        /* Transition: '<S1038>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1038>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3x) & 4U) != 0U)
        {
            /* Transition: '<S1038>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1038>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1038>:110' */
                /* Call Tmot */
                VeCRDB_y_BstConvLwrIGBT_TF_CallStatus = 3U;

                /* Event: '<S1038>:40' */
                /* Transition: '<S1038>:115' */
                /* Transition: '<S1038>:114' */
            }
        }
        else
        {
            /* Transition: '<S1038>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lz) == 133)
            {
                /* Transition: '<S1038>:95' */
                /* Transition: '<S1038>:116' */
                /* Call Nothing */
                VeCRDB_y_BstConvLwrIGBT_TF_CallStatus = 4U;

                /* Transition: '<S1038>:114' */
            }
            else
            {
                /* Transition: '<S1038>:120' */
                if ((((uint32)tmpRead_3x) & 8U) != 0U)
                {
                    /* Transition: '<S1038>:122' */
                    /* Transition: '<S1038>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1038>:126' */
                }
                else
                {
                    /* Transition: '<S1038>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1038>:117' */
                /* Call Poke */
                VeCRDB_y_BstConvLwrIGBT_TF_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1023>/Poke' */
                /* FunctionCaller: '<S1040>/Function Caller' */
                /* Event: '<S1038>:38' */
                Rte_Call_PokeINVR_T_BstCnvtrLwrIGBT_TmpFltd_PokeINVR_T_BstCnvtrLwrIGBT_TmpFltd
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_B, FA_out_bv);

                /* End of Outputs for SubSystem: '<S1023>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1038>:111' */
        /* Call Fsft */
        VeCRDB_y_BstConvLwrIGBT_TF_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1023>/Fsft' */
        /* FunctionCaller: '<S1039>/Function Caller' */
        /* Event: '<S1038>:39' */
        Rte_Call_FsftINVR_T_BstCnvtrLwrIGBT_TmpFltd_FsftINVR_T_BstCnvtrLwrIGBT_TmpFltd
            ();

        /* End of Outputs for SubSystem: '<S1023>/Fsft' */
        /* Transition: '<S1038>:113' */
        /* Transition: '<S1038>:115' */
        /* Transition: '<S1038>:114' */
    }

    /* End of Chart: '<S1035>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BoostConvRctrTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BoostConvRctrTemp_ErrSts'
     */
    /* Transition: '<S1038>:107' */
    rtb_TmpSignalConversionAtVeC_mu = Rte_Read_VeCRDB_y_BoostConvRctrTemp_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BoostConvRctrTemp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1044>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BoostConvRctrTemp_SigSts_Value(&tmpRead_3y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1041>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3y) & 3U) != 0U)
    {
        /* Transition: '<S1044>:100' */
        /* Transition: '<S1044>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1044>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3y) & 4U) != 0U)
        {
            /* Transition: '<S1044>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1044>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1044>:110' */
                /* Call Tmot */
                VeCRDB_y_BoostConvRctrTemp_CallStatus = 3U;

                /* Event: '<S1044>:40' */
                /* Transition: '<S1044>:115' */
                /* Transition: '<S1044>:114' */
            }
        }
        else
        {
            /* Transition: '<S1044>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_mu) == 133)
            {
                /* Transition: '<S1044>:95' */
                /* Transition: '<S1044>:116' */
                /* Call Nothing */
                VeCRDB_y_BoostConvRctrTemp_CallStatus = 4U;

                /* Transition: '<S1044>:114' */
            }
            else
            {
                /* Transition: '<S1044>:120' */
                if ((((uint32)tmpRead_3y) & 8U) != 0U)
                {
                    /* Transition: '<S1044>:122' */
                    /* Transition: '<S1044>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1044>:126' */
                }
                else
                {
                    /* Transition: '<S1044>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1044>:117' */
                /* Call Poke */
                VeCRDB_y_BoostConvRctrTemp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1024>/Poke' */
                /* FunctionCaller: '<S1046>/Function Caller' */
                /* Event: '<S1044>:38' */
                Rte_Call_PokeINVR_T_BstCnvtrReactorTmp_PokeINVR_T_BstCnvtrReactorTmp
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_j, FA_out_bv);

                /* End of Outputs for SubSystem: '<S1024>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1044>:111' */
        /* Call Fsft */
        VeCRDB_y_BoostConvRctrTemp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1024>/Fsft' */
        /* FunctionCaller: '<S1045>/Function Caller' */
        /* Event: '<S1044>:39' */
        Rte_Call_FsftINVR_T_BstCnvtrReactorTmp_FsftINVR_T_BstCnvtrReactorTmp();

        /* End of Outputs for SubSystem: '<S1024>/Fsft' */
        /* Transition: '<S1044>:113' */
        /* Transition: '<S1044>:115' */
        /* Transition: '<S1044>:114' */
    }

    /* End of Chart: '<S1041>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BstConvUprIGBT_TF_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BstConvUprIGBT_TF_ErrSts'
     */
    /* Transition: '<S1044>:107' */
    rtb_TmpSignalConversionAtVeC_co = Rte_Read_VeCRDB_T_BstConvUprIGBT_TF_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__n4);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BstConvUprIGBT_TF_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1050>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BstConvUprIGBT_TF_SigSts_Value(&tmpRead_3z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1047>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3z) & 3U) != 0U)
    {
        /* Transition: '<S1050>:100' */
        /* Transition: '<S1050>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1050>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3z) & 4U) != 0U)
        {
            /* Transition: '<S1050>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1050>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1050>:110' */
                /* Call Tmot */
                VeCRDB_y_BstConvUprIGBT_TF_CallStatus = 3U;

                /* Event: '<S1050>:40' */
                /* Transition: '<S1050>:115' */
                /* Transition: '<S1050>:114' */
            }
        }
        else
        {
            /* Transition: '<S1050>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_co) == 133)
            {
                /* Transition: '<S1050>:95' */
                /* Transition: '<S1050>:116' */
                /* Call Nothing */
                VeCRDB_y_BstConvUprIGBT_TF_CallStatus = 4U;

                /* Transition: '<S1050>:114' */
            }
            else
            {
                /* Transition: '<S1050>:120' */
                if ((((uint32)tmpRead_3z) & 8U) != 0U)
                {
                    /* Transition: '<S1050>:122' */
                    /* Transition: '<S1050>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1050>:126' */
                }
                else
                {
                    /* Transition: '<S1050>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1050>:117' */
                /* Call Poke */
                VeCRDB_y_BstConvUprIGBT_TF_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1025>/Poke' */
                /* FunctionCaller: '<S1052>/Function Caller' */
                /* Event: '<S1050>:38' */
                Rte_Call_PokeINVR_T_BstCnvtrUpprIGBT_TmpFltd_PokeINVR_T_BstCnvtrUpprIGBT_TmpFltd
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__n4, FA_out_bv);

                /* End of Outputs for SubSystem: '<S1025>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1050>:111' */
        /* Call Fsft */
        VeCRDB_y_BstConvUprIGBT_TF_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1025>/Fsft' */
        /* FunctionCaller: '<S1051>/Function Caller' */
        /* Event: '<S1050>:39' */
        Rte_Call_FsftINVR_T_BstCnvtrUpprIGBT_TmpFltd_FsftINVR_T_BstCnvtrUpprIGBT_TmpFltd
            ();

        /* End of Outputs for SubSystem: '<S1025>/Fsft' */
        /* Transition: '<S1050>:113' */
        /* Transition: '<S1050>:115' */
        /* Transition: '<S1050>:114' */
    }

    /* End of Chart: '<S1047>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BoostCnvrFailrSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BoostCnvrFailrSts_ErrSts'
     */
    /* Transition: '<S1050>:107' */
    rtb_TmpSignalConversionAtVeC_dk = Rte_Read_VeCRDB_y_BoostCnvrFailrSts_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__jx);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_BoostCnvrFailrSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1056>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BoostCnvrFailrSts_SigSts_Value(&tmpRead_40);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1053>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_40) & 3U) != 0U)
    {
        /* Transition: '<S1056>:100' */
        /* Transition: '<S1056>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1056>:104' */
        /*  MM */
        if ((((uint32)tmpRead_40) & 4U) != 0U)
        {
            /* Transition: '<S1056>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1056>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1056>:110' */
                /* Call Tmot */
                VeCRDB_y_BoostCnvrFailrSts_CallStatus = 3U;

                /* Event: '<S1056>:40' */
                /* Transition: '<S1056>:115' */
                /* Transition: '<S1056>:114' */
            }
        }
        else
        {
            /* Transition: '<S1056>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dk) == 133)
            {
                /* Transition: '<S1056>:95' */
                /* Transition: '<S1056>:116' */
                /* Call Nothing */
                VeCRDB_y_BoostCnvrFailrSts_CallStatus = 4U;

                /* Transition: '<S1056>:114' */
            }
            else
            {
                /* Transition: '<S1056>:120' */
                /* Transition: '<S1056>:117' */
                /* Call Poke */
                VeCRDB_y_BoostCnvrFailrSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1026>/Poke' */
                /* FunctionCaller: '<S1058>/Function Caller' incorporates:
                 *  Constant: '<S1058>/Constant'
                 */
                /* Event: '<S1056>:38' */
                Rte_Call_PokeINVR_e_BstCnvtrFailSts_PokeINVR_e_BstCnvtrFailSts
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__jx, false);

                /* End of Outputs for SubSystem: '<S1026>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1056>:111' */
        /* Call Fsft */
        VeCRDB_y_BoostCnvrFailrSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1026>/Fsft' */
        /* FunctionCaller: '<S1057>/Function Caller' */
        /* Event: '<S1056>:39' */
        Rte_Call_FsftINVR_b_BstCnvtrFailSts_FsftINVR_b_BstCnvtrFailSts();

        /* End of Outputs for SubSystem: '<S1026>/Fsft' */
        /* Transition: '<S1056>:113' */
        /* Transition: '<S1056>:115' */
        /* Transition: '<S1056>:114' */
    }

    /* End of Chart: '<S1053>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_DMPI_TransmissionTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_DMPI_TransmissionTemp_ErrSts'
     */
    /* Transition: '<S1056>:107' */
    rtb_TmpSignalConversionAtVeC_op =
        Rte_Read_VeCRDB_b_DMPI_TransmissionTemp_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_D);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_DMPI_TransmissionTemp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1061>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_DMPI_TransmissionTemp_SigSts_Value(&tmpRead_41);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1059>/Chart' */
    if ((((uint32)tmpRead_41) & 3U) != 0U)
    {
        /* Transition: '<S1061>:100' */
        /* Transition: '<S1061>:103' */
        /* Transition: '<S1061>:111' */
        /* Call Fsft */
        VeCRDB_y_DMPI_TransmissionTemp_CallStatus = 2U;

        /* Event: '<S1061>:39' */
        /* Transition: '<S1061>:113' */
        /* Transition: '<S1061>:115' */
        /* Transition: '<S1061>:114' */
    }
    else
    {
        /* Transition: '<S1061>:104' */
        /*  MM */
        if ((((uint32)tmpRead_41) & 4U) != 0U)
        {
            /* Transition: '<S1061>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1061>:88' */
                /* Transition: '<S1061>:111' */
                /* Call Fsft */
                VeCRDB_y_DMPI_TransmissionTemp_CallStatus = 2U;

                /* Event: '<S1061>:39' */
                /* Transition: '<S1061>:113' */
                /* Transition: '<S1061>:115' */
                /* Transition: '<S1061>:114' */
            }
            else
            {
                /* Transition: '<S1061>:110' */
                /* Call Tmot */
                VeCRDB_y_DMPI_TransmissionTemp_CallStatus = 3U;

                /* Event: '<S1061>:40' */
                /* Transition: '<S1061>:115' */
                /* Transition: '<S1061>:114' */
            }
        }
        else
        {
            /* Transition: '<S1061>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_op) == 133)
            {
                /* Transition: '<S1061>:95' */
                /* Transition: '<S1061>:116' */
                /* Call Nothing */
                VeCRDB_y_DMPI_TransmissionTemp_CallStatus = 4U;

                /* Transition: '<S1061>:114' */
            }
            else
            {
                /* Transition: '<S1061>:120' */
                if ((((uint32)tmpRead_41) & 8U) != 0U)
                {
                    /* Transition: '<S1061>:122' */
                    /* Transition: '<S1061>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1061>:126' */
                }
                else
                {
                    /* Transition: '<S1061>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1061>:117' */
                /* Call Poke */
                VeCRDB_y_DMPI_TransmissionTemp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1027>/Poke' */
                /* FunctionCaller: '<S1062>/Function Caller' */
                /* Event: '<S1061>:38' */
                Rte_Call_PokeTMIR_T_TransOilTemp_PokeTMIR_T_TransOilTemp
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_D, FA_out_bv);

                /* End of Outputs for SubSystem: '<S1027>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1059>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_Output_Torque_Lim_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_Output_Torque_Lim_ErrSts'
     */
    /* Transition: '<S1061>:107' */
    rtb_TmpSignalConversionAtVe_hv4 = Rte_Read_VeCRDB_M_Output_Torque_Lim_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_O);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_Output_Torque_Lim_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1066>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_Output_Torque_Lim_SigSts_Value(&tmpRead_42);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1063>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_42) & 3U) != 0U)
    {
        /* Transition: '<S1066>:100' */
        /* Transition: '<S1066>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1066>:104' */
        /*  MM */
        if ((((uint32)tmpRead_42) & 4U) != 0U)
        {
            /* Transition: '<S1066>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1066>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1066>:110' */
                /* Call Tmot */
                VeCRDB_y_Output_Torque_Lim_CallStatus = 3U;

                /* Event: '<S1066>:40' */
                /* Transition: '<S1066>:115' */
                /* Transition: '<S1066>:114' */
            }
        }
        else
        {
            /* Transition: '<S1066>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_hv4) == 133)
            {
                /* Transition: '<S1066>:95' */
                /* Transition: '<S1066>:116' */
                /* Call Nothing */
                VeCRDB_y_Output_Torque_Lim_CallStatus = 4U;

                /* Transition: '<S1066>:114' */
            }
            else
            {
                /* Transition: '<S1066>:120' */
                if ((((uint32)tmpRead_42) & 8U) != 0U)
                {
                    /* Transition: '<S1066>:122' */
                    /* Transition: '<S1066>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1066>:126' */
                }
                else
                {
                    /* Transition: '<S1066>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1066>:117' */
                /* Call Poke */
                VeCRDB_y_Output_Torque_Lim_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1028>/Poke' */
                /* FunctionCaller: '<S1068>/Function Caller' */
                /* Event: '<S1066>:38' */
                Rte_Call_PokeSCCR_M_Output_Torque_Limit_PokeSCCR_M_Output_Torque_Limit
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_O, FA_out_bv);

                /* End of Outputs for SubSystem: '<S1028>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1066>:111' */
        /* Call Fsft */
        VeCRDB_y_Output_Torque_Lim_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1028>/Fsft' */
        /* FunctionCaller: '<S1067>/Function Caller' */
        /* Event: '<S1066>:39' */
        Rte_Call_FsftSCCR_M_Output_Torque_Limit_FsftSCCR_M_Output_Torque_Limit();

        /* End of Outputs for SubSystem: '<S1028>/Fsft' */
        /* Transition: '<S1066>:113' */
        /* Transition: '<S1066>:115' */
        /* Transition: '<S1066>:114' */
    }

    /* End of Chart: '<S1063>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PCUDrvRdyCmpltnSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PCUDrvRdyCmpltnSts_ErrSts'
     */
    /* Transition: '<S1066>:107' */
    rtb_TmpSignalConversionAtVeC_lm = Rte_Read_VeCRDB_b_PCUDrvRdyCmpltnSts_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PCUDrvRdyCmpltnSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1072>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PCUDrvRdyCmpltnSts_SigSts_Value(&tmpRead_43);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1069>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_43) & 3U) != 0U)
    {
        /* Transition: '<S1072>:100' */
        /* Transition: '<S1072>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1072>:104' */
        /*  MM */
        if ((((uint32)tmpRead_43) & 4U) != 0U)
        {
            /* Transition: '<S1072>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1072>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1072>:110' */
                /* Call Tmot */
                VeCRDB_y_PCUDrvRdyCmpltnSts_CallStatus = 3U;

                /* Event: '<S1072>:40' */
                /* Transition: '<S1072>:115' */
                /* Transition: '<S1072>:114' */
            }
        }
        else
        {
            /* Transition: '<S1072>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lm) == 133)
            {
                /* Transition: '<S1072>:95' */
                /* Transition: '<S1072>:116' */
                /* Call Nothing */
                VeCRDB_y_PCUDrvRdyCmpltnSts_CallStatus = 4U;

                /* Transition: '<S1072>:114' */
            }
            else
            {
                /* Transition: '<S1072>:120' */
                /* Transition: '<S1072>:117' */
                /* Call Poke */
                VeCRDB_y_PCUDrvRdyCmpltnSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1029>/Poke' */
                /* FunctionCaller: '<S1074>/Function Caller' */
                /* Event: '<S1072>:38' */
                Rte_Call_PokeINVR_b_DrvReadyCmplSts_PokeINVR_b_DrvReadyCmplSts
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_P);

                /* End of Outputs for SubSystem: '<S1029>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1072>:111' */
        /* Call Fsft */
        VeCRDB_y_PCUDrvRdyCmpltnSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1029>/Fsft' */
        /* FunctionCaller: '<S1073>/Function Caller' */
        /* Event: '<S1072>:39' */
        Rte_Call_FsftINVR_b_DrvReadyCmplSts_FsftINVR_b_DrvReadyCmplSts();

        /* End of Outputs for SubSystem: '<S1029>/Fsft' */
        /* Transition: '<S1072>:113' */
        /* Transition: '<S1072>:115' */
        /* Transition: '<S1072>:114' */
    }

    /* End of Chart: '<S1069>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PCU_MaxBoostdVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PCU_MaxBoostdVolt_ErrSts'
     */
    /* Transition: '<S1072>:107' */
    rtb_TmpSignalConversionAtVeC_as = Rte_Read_VeCRDB_U_PCU_MaxBoostdVolt_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PCU_MaxBoostdVolt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1078>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PCU_MaxBoostdVolt_SigSts_Value(&tmpRead_44);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1075>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_44) & 3U) != 0U)
    {
        /* Transition: '<S1078>:100' */
        /* Transition: '<S1078>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1078>:104' */
        /*  MM */
        if ((((uint32)tmpRead_44) & 4U) != 0U)
        {
            /* Transition: '<S1078>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1078>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1078>:110' */
                /* Call Tmot */
                VeCRDB_y_PCU_MaxBoostdVolt_CallStatus = 3U;

                /* Event: '<S1078>:40' */
                /* Transition: '<S1078>:115' */
                /* Transition: '<S1078>:114' */
            }
        }
        else
        {
            /* Transition: '<S1078>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_as) == 133)
            {
                /* Transition: '<S1078>:95' */
                /* Transition: '<S1078>:116' */
                /* Call Nothing */
                VeCRDB_y_PCU_MaxBoostdVolt_CallStatus = 4U;

                /* Transition: '<S1078>:114' */
            }
            else
            {
                /* Transition: '<S1078>:120' */
                if ((((uint32)tmpRead_44) & 8U) != 0U)
                {
                    /* Transition: '<S1078>:122' */
                    /* Transition: '<S1078>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1078>:126' */
                }
                else
                {
                    /* Transition: '<S1078>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1078>:117' */
                /* Call Poke */
                VeCRDB_y_PCU_MaxBoostdVolt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1030>/Poke' */
                /* FunctionCaller: '<S1080>/Function Caller' */
                /* Event: '<S1078>:38' */
                Rte_Call_PokeINVR_U_MaxBoostVolt_PokeINVR_U_MaxBoostVolt
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_P, FA_out_bv);

                /* End of Outputs for SubSystem: '<S1030>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1078>:111' */
        /* Call Fsft */
        VeCRDB_y_PCU_MaxBoostdVolt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1030>/Fsft' */
        /* FunctionCaller: '<S1079>/Function Caller' */
        /* Event: '<S1078>:39' */
        Rte_Call_FsftINVR_U_MaxBoostVolt_FsftINVR_U_MaxBoostVolt();

        /* End of Outputs for SubSystem: '<S1030>/Fsft' */
        /* Transition: '<S1078>:113' */
        /* Transition: '<S1078>:115' */
        /* Transition: '<S1078>:114' */
    }

    /* End of Chart: '<S1075>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PCU_MaxChrgPwrLmt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PCU_MaxChrgPwrLmt_ErrSts'
     */
    /* Transition: '<S1078>:107' */
    rtb_TmpSignalConversionAtVeC_os = Rte_Read_VeCRDB_P_PCU_MaxChrgPwrLmt_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PCU_MaxChrgPwrLmt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1084>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PCU_MaxChrgPwrLmt_SigSts_Value(&tmpRead_45);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1081>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_45) & 3U) != 0U)
    {
        /* Transition: '<S1084>:100' */
        /* Transition: '<S1084>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1084>:104' */
        /*  MM */
        if ((((uint32)tmpRead_45) & 4U) != 0U)
        {
            /* Transition: '<S1084>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1084>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1084>:110' */
                /* Call Tmot */
                VeCRDB_y_PCU_MaxChrgPwrLmt_CallStatus = 3U;

                /* Event: '<S1084>:40' */
                /* Transition: '<S1084>:115' */
                /* Transition: '<S1084>:114' */
            }
        }
        else
        {
            /* Transition: '<S1084>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_os) == 133)
            {
                /* Transition: '<S1084>:95' */
                /* Transition: '<S1084>:116' */
                /* Call Nothing */
                VeCRDB_y_PCU_MaxChrgPwrLmt_CallStatus = 4U;

                /* Transition: '<S1084>:114' */
            }
            else
            {
                /* Transition: '<S1084>:120' */
                if ((((uint32)tmpRead_45) & 8U) != 0U)
                {
                    /* Transition: '<S1084>:122' */
                    /* Transition: '<S1084>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1084>:126' */
                }
                else
                {
                    /* Transition: '<S1084>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1084>:117' */
                /* Call Poke */
                VeCRDB_y_PCU_MaxChrgPwrLmt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1031>/Poke' */
                /* FunctionCaller: '<S1087>/Function Caller' */
                /* Event: '<S1084>:38' */
                Rte_Call_PokeINVR_P_BstCnvtrChrgPwrLmt_PokeINVR_P_BstCnvtrChrgPwrLmt
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_P, FA_out_bv);

                /* FunctionCaller: '<S1088>/Function Caller' */
                Rte_Call_PokeINVR_P_BstCnvtrChrgPwrLmt_ST_PokeINVR_P_BstCnvtrChrgPwrLmt_ST
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_P, FA_out_bv);

                /* End of Outputs for SubSystem: '<S1031>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1084>:111' */
        /* Call Fsft */
        VeCRDB_y_PCU_MaxChrgPwrLmt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1031>/Fsft' */
        /* FunctionCaller: '<S1085>/Function Caller' */
        /* Event: '<S1084>:39' */
        Rte_Call_FsftINVR_P_BstCnvtrChrgPwrLmt_FsftINVR_P_BstCnvtrChrgPwrLmt();

        /* FunctionCaller: '<S1086>/Function Caller' */
        Rte_Call_FsftINVR_P_BstCnvtrChrgPwrLmt_ST_FsftINVR_P_BstCnvtrChrgPwrLmt_ST
            ();

        /* End of Outputs for SubSystem: '<S1031>/Fsft' */
        /* Transition: '<S1084>:113' */
        /* Transition: '<S1084>:115' */
        /* Transition: '<S1084>:114' */
    }

    /* End of Chart: '<S1081>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PCU_MaxDchaPwrLmt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PCU_MaxDchaPwrLmt_ErrSts'
     */
    /* Transition: '<S1084>:107' */
    rtb_TmpSignalConversionAtVeC_ap = Rte_Read_VeCRDB_P_PCU_MaxDchaPwrLmt_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PCU_MaxDchaPwrLmt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1092>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PCU_MaxDchaPwrLmt_SigSts_Value(&tmpRead_46);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1089>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_46) & 3U) != 0U)
    {
        /* Transition: '<S1092>:100' */
        /* Transition: '<S1092>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1092>:104' */
        /*  MM */
        if ((((uint32)tmpRead_46) & 4U) != 0U)
        {
            /* Transition: '<S1092>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1092>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1092>:110' */
                /* Call Tmot */
                VeCRDB_y_PCU_MaxDchaPwrLmt_CallStatus = 3U;

                /* Event: '<S1092>:40' */
                /* Transition: '<S1092>:115' */
                /* Transition: '<S1092>:114' */
            }
        }
        else
        {
            /* Transition: '<S1092>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ap) == 133)
            {
                /* Transition: '<S1092>:95' */
                /* Transition: '<S1092>:116' */
                /* Call Nothing */
                VeCRDB_y_PCU_MaxDchaPwrLmt_CallStatus = 4U;

                /* Transition: '<S1092>:114' */
            }
            else
            {
                /* Transition: '<S1092>:120' */
                if ((((uint32)tmpRead_46) & 8U) != 0U)
                {
                    /* Transition: '<S1092>:122' */
                    /* Transition: '<S1092>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1092>:126' */
                }
                else
                {
                    /* Transition: '<S1092>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1092>:117' */
                /* Call Poke */
                VeCRDB_y_PCU_MaxDchaPwrLmt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1032>/Poke' */
                /* FunctionCaller: '<S1094>/Function Caller' */
                /* Event: '<S1092>:38' */
                Rte_Call_PokeINVR_P_BstCnvtrDschrgPwrLmt_PokeINVR_P_BstCnvtrDschrgPwrLmt
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_l, FA_out_bv);

                /* End of Outputs for SubSystem: '<S1032>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1092>:111' */
        /* Call Fsft */
        VeCRDB_y_PCU_MaxDchaPwrLmt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1032>/Fsft' */
        /* FunctionCaller: '<S1093>/Function Caller' */
        /* Event: '<S1092>:39' */
        Rte_Call_FsftINVR_P_BstCnvtrDschrgPwrLmt_FsftINVR_P_BstCnvtrDschrgPwrLmt
            ();

        /* End of Outputs for SubSystem: '<S1032>/Fsft' */
        /* Transition: '<S1092>:113' */
        /* Transition: '<S1092>:115' */
        /* Transition: '<S1092>:114' */
    }

    /* End of Chart: '<S1089>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PCU_MaxDchaPwrLmtShrTrm_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PCU_MaxDchaPwrLmtShrTrm_ErrSts'
     */
    /* Transition: '<S1092>:107' */
    rtb_TmpSignalConversionAtVeC_pm =
        Rte_Read_VeCRDB_P_PCU_MaxDchaPwrLmtShrTrm_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PCU_MaxDchaPwrLmtShrTrm_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1098>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PCU_MaxDchaPwrLmtShrTrm_SigSts_Value(&tmpRead_47);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1095>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_47) & 3U) != 0U)
    {
        /* Transition: '<S1098>:100' */
        /* Transition: '<S1098>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1098>:104' */
        /*  MM */
        if ((((uint32)tmpRead_47) & 4U) != 0U)
        {
            /* Transition: '<S1098>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1098>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1098>:110' */
                /* Call Tmot */
                VeCRDB_y_PCU_MaxDchaPwrLmtShrTrm_CallStatus = 3U;

                /* Event: '<S1098>:40' */
                /* Transition: '<S1098>:115' */
                /* Transition: '<S1098>:114' */
            }
        }
        else
        {
            /* Transition: '<S1098>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pm) == 133)
            {
                /* Transition: '<S1098>:95' */
                /* Transition: '<S1098>:116' */
                /* Call Nothing */
                VeCRDB_y_PCU_MaxDchaPwrLmtShrTrm_CallStatus = 4U;

                /* Transition: '<S1098>:114' */
            }
            else
            {
                /* Transition: '<S1098>:120' */
                if ((((uint32)tmpRead_47) & 8U) != 0U)
                {
                    /* Transition: '<S1098>:122' */
                    /* Transition: '<S1098>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1098>:126' */
                }
                else
                {
                    /* Transition: '<S1098>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1098>:117' */
                /* Call Poke */
                VeCRDB_y_PCU_MaxDchaPwrLmtShrTrm_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1033>/Poke' */
                /* FunctionCaller: '<S1100>/Function Caller' */
                /* Event: '<S1098>:38' */
                Rte_Call_PokeINVR_P_BstCnvtrDschrgPwrLmt_ST_PokeINVR_P_BstCnvtrDschrgPwrLmt_ST
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_P_a, FA_out_bv);

                /* End of Outputs for SubSystem: '<S1033>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1098>:111' */
        /* Call Fsft */
        VeCRDB_y_PCU_MaxDchaPwrLmtShrTrm_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1033>/Fsft' */
        /* FunctionCaller: '<S1099>/Function Caller' */
        /* Event: '<S1098>:39' */
        Rte_Call_FsftINVR_P_BstCnvtrDschrgPwrLmt_ST_FsftINVR_P_BstCnvtrDschrgPwrLmt_ST
            ();

        /* End of Outputs for SubSystem: '<S1033>/Fsft' */
        /* Transition: '<S1098>:113' */
        /* Transition: '<S1098>:115' */
        /* Transition: '<S1098>:114' */
    }

    /* End of Chart: '<S1095>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PCU_Tmp_StopFlag_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PCU_Tmp_StopFlag_ErrSts'
     */
    /* Transition: '<S1098>:107' */
    rtb_TmpSignalConversionAtVeC_cg = Rte_Read_VeCRDB_b_PCU_Tmp_StopFlag_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__ha);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PCU_Tmp_StopFlag_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1104>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PCU_Tmp_StopFlag_SigSts_Value(&tmpRead_48);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1101>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_48) & 3U) != 0U)
    {
        /* Transition: '<S1104>:100' */
        /* Transition: '<S1104>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1104>:104' */
        /*  MM */
        if ((((uint32)tmpRead_48) & 4U) != 0U)
        {
            /* Transition: '<S1104>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1104>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1104>:110' */
                /* Call Tmot */
                VeCRDB_y_PCU_Tmp_StopFlag_CallStatus = 3U;

                /* Event: '<S1104>:40' */
                /* Transition: '<S1104>:115' */
                /* Transition: '<S1104>:114' */
            }
        }
        else
        {
            /* Transition: '<S1104>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_cg) == 133)
            {
                /* Transition: '<S1104>:95' */
                /* Transition: '<S1104>:116' */
                /* Call Nothing */
                VeCRDB_y_PCU_Tmp_StopFlag_CallStatus = 4U;

                /* Transition: '<S1104>:114' */
            }
            else
            {
                /* Transition: '<S1104>:120' */
                /* Transition: '<S1104>:117' */
                /* Call Poke */
                VeCRDB_y_PCU_Tmp_StopFlag_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1034>/Poke' */
                /* FunctionCaller: '<S1106>/Function Caller' */
                /* Event: '<S1104>:38' */
                Rte_Call_PokeINVR_b_DMPI_TempStopFlag_PokeINVR_b_DMPI_TempStopFlag
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__ha);

                /* End of Outputs for SubSystem: '<S1034>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1104>:111' */
        /* Call Fsft */
        VeCRDB_y_PCU_Tmp_StopFlag_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1034>/Fsft' */
        /* FunctionCaller: '<S1105>/Function Caller' */
        /* Event: '<S1104>:39' */
        Rte_Call_FsftINVR_b_DMPI_TempStopFlag_FsftINVR_b_DMPI_TempStopFlag();

        /* End of Outputs for SubSystem: '<S1034>/Fsft' */
        /* Transition: '<S1104>:113' */
        /* Transition: '<S1104>:115' */
        /* Transition: '<S1104>:114' */
    }

    /* End of Chart: '<S1101>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_3PS_Pos_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_3PS_Pos_ErrSts'
     */
    /* Transition: '<S1104>:107' */
    rtb_TmpSignalConversionAtVeC_fi = Rte_Read_VeCRDB_b_PIM_A_3PS_Pos_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__mj);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_3PS_Pos_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1133>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_3PS_Pos_SigSts_Value(&tmpRead_49);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1129>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_49) & 3U) != 0U)
    {
        /* Transition: '<S1133>:100' */
        /* Transition: '<S1133>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1133>:104' */
        /*  MM */
        if ((((uint32)tmpRead_49) & 4U) != 0U)
        {
            /* Transition: '<S1133>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1133>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1133>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_3PS_Pos_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1107>/Tmot' */
                /* FunctionCaller: '<S1136>/Function Caller' */
                /* Event: '<S1133>:40' */
                Rte_Call_TmotINVR_b_MtrAFlt_3PS_Pos_TmotINVR_b_MtrAFlt_3PS_Pos();

                /* End of Outputs for SubSystem: '<S1107>/Tmot' */
                /* Transition: '<S1133>:115' */
                /* Transition: '<S1133>:114' */
            }
        }
        else
        {
            /* Transition: '<S1133>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_fi) == 133)
            {
                /* Transition: '<S1133>:95' */
                /* Transition: '<S1133>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_3PS_Pos_CallStatus = 4U;

                /* Transition: '<S1133>:114' */
            }
            else
            {
                /* Transition: '<S1133>:120' */
                /* Transition: '<S1133>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_3PS_Pos_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1107>/Poke' */
                /* FunctionCaller: '<S1135>/Function Caller' */
                /* Event: '<S1133>:38' */
                Rte_Call_PokeINVR_b_MtrAFlt_3PS_Pos_PokeINVR_b_MtrAFlt_3PS_Pos
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__mj);

                /* End of Outputs for SubSystem: '<S1107>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1133>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_3PS_Pos_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1107>/Fsft' */
        /* FunctionCaller: '<S1134>/Function Caller' */
        /* Event: '<S1133>:39' */
        Rte_Call_FsftINVR_b_MtrAFlt_3PS_Pos_FsftINVR_b_MtrAFlt_3PS_Pos();

        /* End of Outputs for SubSystem: '<S1107>/Fsft' */
        /* Transition: '<S1133>:113' */
        /* Transition: '<S1133>:115' */
        /* Transition: '<S1133>:114' */
    }

    /* End of Chart: '<S1129>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_6SO_Status_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_6SO_Status_ErrSts'
     */
    /* Transition: '<S1133>:107' */
    rtb_TmpSignalConversionAtVeC_eb = Rte_Read_VeCRDB_y_PIM_A_6SO_Status_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__of);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_6SO_Status_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1140>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_6SO_Status_SigSts_Value(&tmpRead_4a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1137>/Chart' */
    if ((((uint32)tmpRead_4a) & 3U) != 0U)
    {
        /* Transition: '<S1140>:100' */
        /* Transition: '<S1140>:103' */
        /* Transition: '<S1140>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_6SO_Status_CallStatus = 2U;

        /* Event: '<S1140>:39' */
        /* Transition: '<S1140>:113' */
        /* Transition: '<S1140>:115' */
        /* Transition: '<S1140>:114' */
    }
    else
    {
        /* Transition: '<S1140>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4a) & 4U) != 0U)
        {
            /* Transition: '<S1140>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1140>:88' */
                /* Transition: '<S1140>:111' */
                /* Call Fsft */
                VeCRDB_y_PIM_A_6SO_Status_CallStatus = 2U;

                /* Event: '<S1140>:39' */
                /* Transition: '<S1140>:113' */
                /* Transition: '<S1140>:115' */
                /* Transition: '<S1140>:114' */
            }
            else
            {
                /* Transition: '<S1140>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_6SO_Status_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1108>/Tmot' */
                /* FunctionCaller: '<S1142>/Function Caller' */
                /* Event: '<S1140>:40' */
                Rte_Call_TmotINVR_b_MtrA_6SOEnbl_TmotINVR_b_MtrA_6SOEnbl();

                /* End of Outputs for SubSystem: '<S1108>/Tmot' */
                /* Transition: '<S1140>:115' */
                /* Transition: '<S1140>:114' */
            }
        }
        else
        {
            /* Transition: '<S1140>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_eb) == 133)
            {
                /* Transition: '<S1140>:95' */
                /* Transition: '<S1140>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_6SO_Status_CallStatus = 4U;

                /* Transition: '<S1140>:114' */
            }
            else
            {
                /* Transition: '<S1140>:120' */
                if ((((uint32)tmpRead_4a) & 8U) != 0U)
                {
                    /* Transition: '<S1140>:122' */
                    /* Transition: '<S1140>:125' */
                    FA_out_bv = true;

                    /* Transition: '<S1140>:126' */
                }
                else
                {
                    /* Transition: '<S1140>:124' */
                    FA_out_bv = false;
                }

                /* Transition: '<S1140>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_6SO_Status_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1108>/Poke' */
                /* FunctionCaller: '<S1141>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1141>/Data Type Conversion'
                 */
                /* Event: '<S1140>:38' */
                Rte_Call_PokeINVR_e_MtrA_6SOEnbl_PokeINVR_e_MtrA_6SOEnbl((sint16)
                    CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__of, FA_out_bv);

                /* End of Outputs for SubSystem: '<S1108>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1137>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_AccelRaw_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_AccelRaw_ErrSts'
     */
    /* Transition: '<S1140>:107' */
    rtb_TmpSignalConversionAtVeC_a5 = Rte_Read_VeCRDB_y_PIM_A_AccelRaw_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_AccelRaw_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1147>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_AccelRaw_SigSts_Value(&tmpRead_4b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1143>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_PIM_A_AccelRawV_FD11'
     */
    guard1 = false;
    if ((((uint32)tmpRead_4b) & 3U) != 0U)
    {
        /* Transition: '<S1147>:100' */
        /* Transition: '<S1147>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1147>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4b) & 4U) != 0U)
        {
            /* Transition: '<S1147>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1147>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1147>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_AccelRaw_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1109>/Tmot' */
                /* FunctionCaller: '<S1150>/Function Caller' */
                /* Event: '<S1147>:40' */
                Rte_Call_TmotMSPR_b_MtrA_AccelRaw_TmotMSPR_b_MtrA_AccelRaw();

                /* End of Outputs for SubSystem: '<S1109>/Tmot' */
                /* Transition: '<S1147>:115' */
                /* Transition: '<S1147>:114' */
            }
        }
        else
        {
            /* Transition: '<S1147>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_a5) == 133)
            {
                /* Transition: '<S1147>:95' */
                /* Transition: '<S1147>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_AccelRaw_CallStatus = 4U;

                /* Transition: '<S1147>:114' */
            }
            else
            {
                /* Transition: '<S1147>:120' */
                (void)Rte_Read_VeSR1B_b_PIM_A_AccelRawV_FD11_Value(&FA_out_h3);

                /* Transition: '<S1147>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_AccelRaw_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1109>/Poke' */
                /* FunctionCaller: '<S1149>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_PIM_A_AccelRawV_FD11'
                 */
                /* Event: '<S1147>:38' */
                Rte_Call_PokeMSPR_dn_MtrA_AccelRaw_PokeMSPR_dn_MtrA_AccelRaw
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_P, FA_out_h3);

                /* End of Outputs for SubSystem: '<S1109>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1147>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_AccelRaw_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1109>/Fsft' */
        /* FunctionCaller: '<S1148>/Function Caller' */
        /* Event: '<S1147>:39' */
        Rte_Call_FsftMSPR_dn_MtrA_AccelRaw_FsftMSPR_dn_MtrA_AccelRaw();

        /* End of Outputs for SubSystem: '<S1109>/Fsft' */
        /* Transition: '<S1147>:113' */
        /* Transition: '<S1147>:115' */
        /* Transition: '<S1147>:114' */
    }

    /* End of Chart: '<S1143>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_CoolantTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_CoolantTemp_ErrSts'
     */
    /* Transition: '<S1147>:107' */
    rtb_TmpSignalConversionAtVeC_ab = Rte_Read_VeCRDB_T_PIM_A_CoolantTemp_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_CoolantTemp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1154>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_CoolantTemp_SigSts_Value(&tmpRead_4c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1151>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4c) & 3U) != 0U)
    {
        /* Transition: '<S1154>:100' */
        /* Transition: '<S1154>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1154>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4c) & 4U) != 0U)
        {
            /* Transition: '<S1154>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1154>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1154>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_CoolantTemp_CallStatus = 3U;

                /* Event: '<S1154>:40' */
                /* Transition: '<S1154>:115' */
                /* Transition: '<S1154>:114' */
            }
        }
        else
        {
            /* Transition: '<S1154>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ab) == 133)
            {
                /* Transition: '<S1154>:95' */
                /* Transition: '<S1154>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_CoolantTemp_CallStatus = 4U;

                /* Transition: '<S1154>:114' */
            }
            else
            {
                /* Transition: '<S1154>:120' */
                if ((((uint32)tmpRead_4c) & 8U) != 0U)
                {
                    /* Transition: '<S1154>:122' */
                    /* Transition: '<S1154>:125' */
                    FA_out_h3 = true;

                    /* Transition: '<S1154>:126' */
                }
                else
                {
                    /* Transition: '<S1154>:124' */
                    FA_out_h3 = false;
                }

                /* Transition: '<S1154>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_CoolantTemp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1110>/Poke' */
                /* FunctionCaller: '<S1156>/Function Caller' */
                /* Event: '<S1154>:38' */
                Rte_Call_PokeINVR_T_MtrA_CoolantTemp_PokeINVR_T_MtrA_CoolantTemp
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_T_P, FA_out_h3);

                /* End of Outputs for SubSystem: '<S1110>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1154>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_CoolantTemp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1110>/Fsft' */
        /* FunctionCaller: '<S1155>/Function Caller' */
        /* Event: '<S1154>:39' */
        Rte_Call_FsftINVR_b_MtrA_CoolantTemp_FsftINVR_b_MtrA_CoolantTemp();

        /* End of Outputs for SubSystem: '<S1110>/Fsft' */
        /* Transition: '<S1154>:113' */
        /* Transition: '<S1154>:115' */
        /* Transition: '<S1154>:114' */
    }

    /* End of Chart: '<S1151>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMA_CptySpdDivVlt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMA_CptySpdDivVlt_ErrSts'
     */
    /* Transition: '<S1154>:107' */
    rtb_TmpSignalConversionAtVeC_be = Rte_Read_VeCRDB_n_PIMA_CptySpdDivVlt_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_n_P);

    /* SignalConversion generated from: '<S2>/VeSR1B_y_PIM_A_MtrIndex_FD11' incorporates:
     *  Inport: '<Root>/VeSR1B_y_PIM_A_MtrIndex_FD11'
     */
    (void)Rte_Read_VeSR1B_y_PIM_A_MtrIndex_FD11_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMA_CptySpdDivVlt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1160>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMA_CptySpdDivVlt_SigSts_Value(&tmpRead_4d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1157>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4d) & 3U) != 0U)
    {
        /* Transition: '<S1160>:100' */
        /* Transition: '<S1160>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1160>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4d) & 4U) != 0U)
        {
            /* Transition: '<S1160>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1160>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1160>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMA_CptySpdDivVlt_CallStatus = 3U;

                /* Event: '<S1160>:40' */
                /* Transition: '<S1160>:115' */
                /* Transition: '<S1160>:114' */
            }
        }
        else
        {
            /* Transition: '<S1160>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_be) == 133)
            {
                /* Transition: '<S1160>:95' */
                /* Transition: '<S1160>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMA_CptySpdDivVlt_CallStatus = 4U;

                /* Transition: '<S1160>:114' */
            }
            else
            {
                /* Transition: '<S1160>:120' */
                /* Transition: '<S1160>:117' */
                /* Call Poke */
                VeCRDB_y_PIMA_CptySpdDivVlt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1111>/Poke' */
                /* FunctionCaller: '<S1162>/Function Caller' */
                /* Event: '<S1160>:38' */
                Rte_Call_PokeMTIR_n_MtrACapabilitySpd_PokeMTIR_n_MtrACapabilitySpd
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_n_P,
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_P);

                /* End of Outputs for SubSystem: '<S1111>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1160>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMA_CptySpdDivVlt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1111>/Fsft' */
        /* FunctionCaller: '<S1161>/Function Caller' */
        /* Event: '<S1160>:39' */
        Rte_Call_FsftMTIR_n_MtrACapabilitySpd_FsftMTIR_n_MtrACapabilitySpd();

        /* End of Outputs for SubSystem: '<S1111>/Fsft' */
        /* Transition: '<S1160>:113' */
        /* Transition: '<S1160>:115' */
        /* Transition: '<S1160>:114' */
    }

    /* End of Chart: '<S1157>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_DC_Current_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_DC_Current_ErrSts'
     */
    /* Transition: '<S1160>:107' */
    rtb_TmpSignalConversionAtVeC_lp = Rte_Read_VeCRDB_I_PIM_A_DC_Current_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_I_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_DC_Current_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1167>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_DC_Current_SigSts_Value(&tmpRead_4e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1163>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_PIM_A_DC_Curr_V'
     */
    guard1 = false;
    if ((((uint32)tmpRead_4e) & 3U) != 0U)
    {
        /* Transition: '<S1167>:100' */
        /* Transition: '<S1167>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1167>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4e) & 4U) != 0U)
        {
            /* Transition: '<S1167>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1167>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1167>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_DC_Current_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1112>/Tmot' */
                /* FunctionCaller: '<S1170>/Function Caller' */
                /* Event: '<S1167>:40' */
                Rte_Call_TmotINVR_b_MtrA_DC_Crnt_TmotINVR_b_MtrA_DC_Crnt();

                /* End of Outputs for SubSystem: '<S1112>/Tmot' */
                /* Transition: '<S1167>:115' */
                /* Transition: '<S1167>:114' */
            }
        }
        else
        {
            /* Transition: '<S1167>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lp) == 133)
            {
                /* Transition: '<S1167>:95' */
                /* Transition: '<S1167>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_DC_Current_CallStatus = 4U;

                /* Transition: '<S1167>:114' */
            }
            else
            {
                /* Transition: '<S1167>:120' */
                (void)Rte_Read_VeCRDB_b_PIM_A_DC_Curr_V_Value(&FA_out_n);

                /* Transition: '<S1167>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_DC_Current_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1112>/Poke' */
                /* FunctionCaller: '<S1169>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_PIM_A_DC_Curr_V'
                 */
                /* Event: '<S1167>:38' */
                Rte_Call_PokeINVR_I_MtrA_DC_Crnt_PokeINVR_I_MtrA_DC_Crnt
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_I_P, FA_out_n);

                /* End of Outputs for SubSystem: '<S1112>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1167>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_DC_Current_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1112>/Fsft' */
        /* FunctionCaller: '<S1168>/Function Caller' */
        /* Event: '<S1167>:39' */
        Rte_Call_FsftINVR_I_MtrA_DC_Crnt_FsftINVR_I_MtrA_DC_Crnt();

        /* End of Outputs for SubSystem: '<S1112>/Fsft' */
        /* Transition: '<S1167>:113' */
        /* Transition: '<S1167>:115' */
        /* Transition: '<S1167>:114' */
    }

    /* End of Chart: '<S1163>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_DC_Voltage_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_DC_Voltage_ErrSts'
     */
    /* Transition: '<S1167>:107' */
    rtb_TmpSignalConversionAtVeC_b5 = Rte_Read_VeCRDB_U_PIM_A_DC_Voltage_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_DC_Voltage_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1175>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_DC_Voltage_SigSts_Value(&tmpRead_4f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1171>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_PIM_A_DC_Volt_V'
     */
    guard1 = false;
    if ((((uint32)tmpRead_4f) & 3U) != 0U)
    {
        /* Transition: '<S1175>:100' */
        /* Transition: '<S1175>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1175>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4f) & 4U) != 0U)
        {
            /* Transition: '<S1175>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1175>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1175>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_DC_Voltage_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1113>/Tmot' */
                /* FunctionCaller: '<S1178>/Function Caller' */
                /* Event: '<S1175>:40' */
                Rte_Call_TmotINVR_b_MtrA_DC_Volt_TmotINVR_b_MtrA_DC_Volt();

                /* End of Outputs for SubSystem: '<S1113>/Tmot' */
                /* Transition: '<S1175>:115' */
                /* Transition: '<S1175>:114' */
            }
        }
        else
        {
            /* Transition: '<S1175>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_b5) == 133)
            {
                /* Transition: '<S1175>:95' */
                /* Transition: '<S1175>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_DC_Voltage_CallStatus = 4U;

                /* Transition: '<S1175>:114' */
            }
            else
            {
                /* Transition: '<S1175>:120' */
                (void)Rte_Read_VeCRDB_b_PIM_A_DC_Volt_V_Value(&tmpRead_5l);

                /* Transition: '<S1175>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_DC_Voltage_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1113>/Poke' */
                /* FunctionCaller: '<S1177>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_PIM_A_DC_Volt_V'
                 */
                /* Event: '<S1175>:38' */
                Rte_Call_PokeINVR_U_MtrA_DC_Volt_PokeINVR_U_MtrA_DC_Volt
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_j, tmpRead_5l);

                /* End of Outputs for SubSystem: '<S1113>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1175>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_DC_Voltage_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1113>/Fsft' */
        /* FunctionCaller: '<S1176>/Function Caller' */
        /* Event: '<S1175>:39' */
        Rte_Call_FsftINVR_U_MtrA_DC_Volt_FsftINVR_U_MtrA_DC_Volt();

        /* End of Outputs for SubSystem: '<S1113>/Fsft' */
        /* Transition: '<S1175>:113' */
        /* Transition: '<S1175>:115' */
        /* Transition: '<S1175>:114' */
    }

    /* End of Chart: '<S1171>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_DerateReasn_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_DerateReasn_ErrSts'
     */
    /* Transition: '<S1175>:107' */
    rtb_TmpSignalConversionAtVeC_nu = Rte_Read_VeCRDB_y_PIM_A_DerateReasn_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_DerateReasn_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1181>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_DerateReasn_SigSts_Value(&tmpRead_4g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1179>/Chart' */
    if ((((uint32)tmpRead_4g) & 3U) != 0U)
    {
        /* Transition: '<S1181>:100' */
        /* Transition: '<S1181>:103' */
        /* Transition: '<S1181>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_DerateReasn_CallStatus = 2U;

        /* Event: '<S1181>:39' */
        /* Transition: '<S1181>:113' */
        /* Transition: '<S1181>:115' */
        /* Transition: '<S1181>:114' */
    }
    else
    {
        /* Transition: '<S1181>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4g) & 4U) != 0U)
        {
            /* Transition: '<S1181>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1181>:88' */
                /* Transition: '<S1181>:111' */
                /* Call Fsft */
                VeCRDB_y_PIM_A_DerateReasn_CallStatus = 2U;

                /* Event: '<S1181>:39' */
                /* Transition: '<S1181>:113' */
                /* Transition: '<S1181>:115' */
                /* Transition: '<S1181>:114' */
            }
            else
            {
                /* Transition: '<S1181>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_DerateReasn_CallStatus = 3U;

                /* Event: '<S1181>:40' */
                /* Transition: '<S1181>:115' */
                /* Transition: '<S1181>:114' */
            }
        }
        else
        {
            /* Transition: '<S1181>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_nu) == 133)
            {
                /* Transition: '<S1181>:95' */
                /* Transition: '<S1181>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_DerateReasn_CallStatus = 4U;

                /* Transition: '<S1181>:114' */
            }
            else
            {
                /* Transition: '<S1181>:120' */
                /* Transition: '<S1181>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_DerateReasn_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1114>/Poke' */
                /* FunctionCaller: '<S1182>/Function Caller' */
                /* Event: '<S1181>:38' */
                Rte_Call_PokeINVR_e_MtrA_DrtRsn_PokeINVR_e_MtrA_DrtRsn
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_n);

                /* End of Outputs for SubSystem: '<S1114>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1179>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMA_DratingFactr_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMA_DratingFactr_ErrSts'
     */
    /* Transition: '<S1181>:107' */
    rtb_TmpSignalConversionAtVeC_ml = Rte_Read_VeCRDB_h_PIMA_DratingFactr_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_h_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMA_DratingFactr_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1186>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMA_DratingFactr_SigSts_Value(&tmpRead_4h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1183>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4h) & 3U) != 0U)
    {
        /* Transition: '<S1186>:100' */
        /* Transition: '<S1186>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1186>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4h) & 4U) != 0U)
        {
            /* Transition: '<S1186>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1186>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1186>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMA_DratingFactr_CallStatus = 3U;

                /* Event: '<S1186>:40' */
                /* Transition: '<S1186>:115' */
                /* Transition: '<S1186>:114' */
            }
        }
        else
        {
            /* Transition: '<S1186>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ml) == 133)
            {
                /* Transition: '<S1186>:95' */
                /* Transition: '<S1186>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMA_DratingFactr_CallStatus = 4U;

                /* Transition: '<S1186>:114' */
            }
            else
            {
                /* Transition: '<S1186>:120' */
                /* Transition: '<S1186>:117' */
                /* Call Poke */
                VeCRDB_y_PIMA_DratingFactr_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1115>/Poke' */
                /* FunctionCaller: '<S1188>/Function Caller' */
                /* Event: '<S1186>:38' */
                Rte_Call_PokeMTIR_k_MtrADeratingFactor_PokeMTIR_k_MtrADeratingFactor
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_h_P);

                /* End of Outputs for SubSystem: '<S1115>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1186>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMA_DratingFactr_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1115>/Fsft' */
        /* FunctionCaller: '<S1187>/Function Caller' */
        /* Event: '<S1186>:39' */
        Rte_Call_FsftMTIR_k_MtrADeratingFactor_FsftMTIR_k_MtrADeratingFactor();

        /* End of Outputs for SubSystem: '<S1115>/Fsft' */
        /* Transition: '<S1186>:113' */
        /* Transition: '<S1186>:115' */
        /* Transition: '<S1186>:114' */
    }

    /* End of Chart: '<S1183>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_Dschrge_Sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_Dschrge_Sts_ErrSts'
     */
    /* Transition: '<S1186>:107' */
    rtb_TmpSignalConversionAtVeC_lu = Rte_Read_VeCRDB_y_PIM_A_Dschrge_Sts_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__il);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_Dschrge_Sts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1192>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_Dschrge_Sts_SigSts_Value(&tmpRead_4i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1189>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4i) & 3U) != 0U)
    {
        /* Transition: '<S1192>:100' */
        /* Transition: '<S1192>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1192>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4i) & 4U) != 0U)
        {
            /* Transition: '<S1192>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1192>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1192>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_Dschrge_Sts_CallStatus = 3U;

                /* Event: '<S1192>:40' */
                /* Transition: '<S1192>:115' */
                /* Transition: '<S1192>:114' */
            }
        }
        else
        {
            /* Transition: '<S1192>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lu) == 133)
            {
                /* Transition: '<S1192>:95' */
                /* Transition: '<S1192>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_Dschrge_Sts_CallStatus = 4U;

                /* Transition: '<S1192>:114' */
            }
            else
            {
                /* Transition: '<S1192>:120' */
                if ((((uint32)tmpRead_4i) & 8U) != 0U)
                {
                    /* Transition: '<S1192>:122' */
                    /* Transition: '<S1192>:125' */
                    FA_out_n = true;

                    /* Transition: '<S1192>:126' */
                }
                else
                {
                    /* Transition: '<S1192>:124' */
                    FA_out_n = false;
                }

                /* Transition: '<S1192>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_Dschrge_Sts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1116>/Poke' */
                /* FunctionCaller: '<S1194>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1194>/Data Type Conversion'
                 */
                /* Event: '<S1192>:38' */
                Rte_Call_PokeINVR_e_MtrA_Dschrge_Stat_PokeINVR_e_MtrA_Dschrge_Stat
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__il,
                     FA_out_n);

                /* End of Outputs for SubSystem: '<S1116>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1192>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_Dschrge_Sts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1116>/Fsft' */
        /* FunctionCaller: '<S1193>/Function Caller' */
        /* Event: '<S1192>:39' */
        Rte_Call_FsftINVR_e_MtrA_Dschrge_Stat_FsftINVR_e_MtrA_Dschrge_Stat();

        /* End of Outputs for SubSystem: '<S1116>/Fsft' */
        /* Transition: '<S1192>:113' */
        /* Transition: '<S1192>:115' */
        /* Transition: '<S1192>:114' */
    }

    /* End of Chart: '<S1189>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMA_HV_CnctrOpnRq_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMA_HV_CnctrOpnRq_ErrSts'
     */
    /* Transition: '<S1192>:107' */
    rtb_TmpSignalConversionAtVeC_c1 = Rte_Read_VeCRDB_b_PIMA_HV_CnctrOpnRq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMA_HV_CnctrOpnRq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1198>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMA_HV_CnctrOpnRq_SigSts_Value(&tmpRead_4j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1195>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4j) & 3U) != 0U)
    {
        /* Transition: '<S1198>:100' */
        /* Transition: '<S1198>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1198>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4j) & 4U) != 0U)
        {
            /* Transition: '<S1198>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1198>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1198>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMA_HV_CnctrOpnRq_CallStatus = 3U;

                /* Event: '<S1198>:40' */
                /* Transition: '<S1198>:115' */
                /* Transition: '<S1198>:114' */
            }
        }
        else
        {
            /* Transition: '<S1198>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_c1) == 133)
            {
                /* Transition: '<S1198>:95' */
                /* Transition: '<S1198>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMA_HV_CnctrOpnRq_CallStatus = 4U;

                /* Transition: '<S1198>:114' */
            }
            else
            {
                /* Transition: '<S1198>:120' */
                /* Transition: '<S1198>:117' */
                /* Call Poke */
                VeCRDB_y_PIMA_HV_CnctrOpnRq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1117>/Poke' */
                /* FunctionCaller: '<S1200>/Function Caller' */
                /* Event: '<S1198>:38' */
                Rte_Call_PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_PokeINVR_b_MtrAFlt_HV_CntctrOpnRq
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_k);

                /* End of Outputs for SubSystem: '<S1117>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1198>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMA_HV_CnctrOpnRq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1117>/Fsft' */
        /* FunctionCaller: '<S1199>/Function Caller' */
        /* Event: '<S1198>:39' */
        Rte_Call_FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_FsftINVR_b_MtrAFlt_HV_CntctrOpnRq
            ();

        /* End of Outputs for SubSystem: '<S1117>/Fsft' */
        /* Transition: '<S1198>:113' */
        /* Transition: '<S1198>:115' */
        /* Transition: '<S1198>:114' */
    }

    /* End of Chart: '<S1195>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMA_InterlockSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMA_InterlockSts_ErrSts'
     */
    /* Transition: '<S1198>:107' */
    rtb_TmpSignalConversionAtVe_ars = Rte_Read_VeCRDB_y_PIMA_InterlockSts_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__cm);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMA_InterlockSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1204>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMA_InterlockSts_SigSts_Value(&tmpRead_4k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1201>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4k) & 3U) != 0U)
    {
        /* Transition: '<S1204>:100' */
        /* Transition: '<S1204>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1204>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4k) & 4U) != 0U)
        {
            /* Transition: '<S1204>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1204>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1204>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMA_InterlockSts_CallStatus = 3U;

                /* Event: '<S1204>:40' */
                /* Transition: '<S1204>:115' */
                /* Transition: '<S1204>:114' */
            }
        }
        else
        {
            /* Transition: '<S1204>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_ars) == 133)
            {
                /* Transition: '<S1204>:95' */
                /* Transition: '<S1204>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMA_InterlockSts_CallStatus = 4U;

                /* Transition: '<S1204>:114' */
            }
            else
            {
                /* Transition: '<S1204>:120' */
                /* Transition: '<S1204>:117' */
                /* Call Poke */
                VeCRDB_y_PIMA_InterlockSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1118>/Poke' */
                /* FunctionCaller: '<S1206>/Function Caller' incorporates:
                 *  Constant: '<S1207>/Constant'
                 *  RelationalOperator: '<S1207>/Compare'
                 */
                /* Event: '<S1204>:38' */
                Rte_Call_PokeINVR_e_MCPA_HVILSts_PokeINVR_e_MCPA_HVILSts
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__cm, (((sint32)
                       CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__cm) == 3) ?
                     1 : 0);

                /* End of Outputs for SubSystem: '<S1118>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1204>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMA_InterlockSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1118>/Fsft' */
        /* FunctionCaller: '<S1205>/Function Caller' */
        /* Event: '<S1204>:39' */
        Rte_Call_FsftINVR_b_MCPA_HVILSts_FsftINVR_b_MCPA_HVILSts();

        /* End of Outputs for SubSystem: '<S1118>/Fsft' */
        /* Transition: '<S1204>:113' */
        /* Transition: '<S1204>:115' */
        /* Transition: '<S1204>:114' */
    }

    /* End of Chart: '<S1201>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_Invrtr_St_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_Invrtr_St_ErrSts'
     */
    /* Transition: '<S1204>:107' */
    rtb_TmpSignalConversionAtVeC_eg = Rte_Read_VeCRDB_y_PIM_A_Invrtr_St_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__oa);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_Invrtr_St_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1212>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_Invrtr_St_SigSts_Value(&tmpRead_4l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1208>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4l) & 3U) != 0U)
    {
        /* Transition: '<S1212>:100' */
        /* Transition: '<S1212>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1212>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4l) & 4U) != 0U)
        {
            /* Transition: '<S1212>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1212>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1212>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_Invrtr_St_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1119>/Tmot' */
                /* FunctionCaller: '<S1215>/Function Caller' */
                /* Event: '<S1212>:40' */
                Rte_Call_TmotINVR_b_MtrA_InvrtrSt_TmotINVR_b_MtrA_InvrtrSt();

                /* End of Outputs for SubSystem: '<S1119>/Tmot' */
                /* Transition: '<S1212>:115' */
                /* Transition: '<S1212>:114' */
            }
        }
        else
        {
            /* Transition: '<S1212>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_eg) == 133)
            {
                /* Transition: '<S1212>:95' */
                /* Transition: '<S1212>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_Invrtr_St_CallStatus = 4U;

                /* Transition: '<S1212>:114' */
            }
            else
            {
                /* Transition: '<S1212>:120' */
                /* Transition: '<S1212>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_Invrtr_St_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1119>/Poke' */
                /* FunctionCaller: '<S1214>/Function Caller' */
                /* Event: '<S1212>:38' */
                Rte_Call_PokeINVR_e_MtrA_InvrtrSt_PokeINVR_e_MtrA_InvrtrSt
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__oa);

                /* End of Outputs for SubSystem: '<S1119>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1212>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_Invrtr_St_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1119>/Fsft' */
        /* FunctionCaller: '<S1213>/Function Caller' */
        /* Event: '<S1212>:39' */
        Rte_Call_FsftINVR_e_MtrA_InvrtrSt_FsftINVR_e_MtrA_InvrtrSt();

        /* End of Outputs for SubSystem: '<S1119>/Fsft' */
        /* Transition: '<S1212>:113' */
        /* Transition: '<S1212>:115' */
        /* Transition: '<S1212>:114' */
    }

    /* End of Chart: '<S1208>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_MaxTorq_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_MaxTorq_ErrSts'
     */
    /* Transition: '<S1212>:107' */
    rtb_TmpSignalConversionAtVe_i2v = Rte_Read_VeCRDB_M_PIM_A_MaxTorq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_MaxTorq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1219>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_MaxTorq_SigSts_Value(&tmpRead_4m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1216>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4m) & 3U) != 0U)
    {
        /* Transition: '<S1219>:100' */
        /* Transition: '<S1219>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1219>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4m) & 4U) != 0U)
        {
            /* Transition: '<S1219>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1219>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1219>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_MaxTorq_CallStatus = 3U;

                /* Event: '<S1219>:40' */
                /* Transition: '<S1219>:115' */
                /* Transition: '<S1219>:114' */
            }
        }
        else
        {
            /* Transition: '<S1219>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_i2v) == 133)
            {
                /* Transition: '<S1219>:95' */
                /* Transition: '<S1219>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_MaxTorq_CallStatus = 4U;

                /* Transition: '<S1219>:114' */
            }
            else
            {
                /* Transition: '<S1219>:120' */
                /* Transition: '<S1219>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_MaxTorq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1120>/Poke' */
                /* FunctionCaller: '<S1221>/Function Caller' */
                /* Event: '<S1219>:38' */
                Rte_Call_PokeMTIR_M_MtrA_MaxTorq_PokeMTIR_M_MtrA_MaxTorq
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_P);

                /* End of Outputs for SubSystem: '<S1120>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1219>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_MaxTorq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1120>/Fsft' */
        /* FunctionCaller: '<S1220>/Function Caller' */
        /* Event: '<S1219>:39' */
        Rte_Call_FsftMTIR_M_MtrA_MaxTorq_FsftMTIR_M_MtrA_MaxTorq();

        /* End of Outputs for SubSystem: '<S1120>/Fsft' */
        /* Transition: '<S1219>:113' */
        /* Transition: '<S1219>:115' */
        /* Transition: '<S1219>:114' */
    }

    /* End of Chart: '<S1216>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_MinTorq_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_MinTorq_ErrSts'
     */
    /* Transition: '<S1219>:107' */
    rtb_TmpSignalConversionAtVeC_jg = Rte_Read_VeCRDB_M_PIM_A_MinTorq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_MinTorq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1225>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_MinTorq_SigSts_Value(&tmpRead_4n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1222>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4n) & 3U) != 0U)
    {
        /* Transition: '<S1225>:100' */
        /* Transition: '<S1225>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1225>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4n) & 4U) != 0U)
        {
            /* Transition: '<S1225>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1225>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1225>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_MinTorq_CallStatus = 3U;

                /* Event: '<S1225>:40' */
                /* Transition: '<S1225>:115' */
                /* Transition: '<S1225>:114' */
            }
        }
        else
        {
            /* Transition: '<S1225>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jg) == 133)
            {
                /* Transition: '<S1225>:95' */
                /* Transition: '<S1225>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_MinTorq_CallStatus = 4U;

                /* Transition: '<S1225>:114' */
            }
            else
            {
                /* Transition: '<S1225>:120' */
                /* Transition: '<S1225>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_MinTorq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1121>/Poke' */
                /* FunctionCaller: '<S1227>/Function Caller' */
                /* Event: '<S1225>:38' */
                Rte_Call_PokeMTIR_M_MtrA_MinTorq_PokeMTIR_M_MtrA_MinTorq
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_j);

                /* End of Outputs for SubSystem: '<S1121>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1225>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_MinTorq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1121>/Fsft' */
        /* FunctionCaller: '<S1226>/Function Caller' */
        /* Event: '<S1225>:39' */
        Rte_Call_FsftMTIR_M_MtrA_MinTorq_FsftMTIR_M_MtrA_MinTorq();

        /* End of Outputs for SubSystem: '<S1121>/Fsft' */
        /* Transition: '<S1225>:113' */
        /* Transition: '<S1225>:115' */
        /* Transition: '<S1225>:114' */
    }

    /* End of Chart: '<S1222>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMA_MtrMaxCptyTrq_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMA_MtrMaxCptyTrq_ErrSts'
     */
    /* Transition: '<S1225>:107' */
    rtb_TmpSignalConversionAtVe_ip5 = Rte_Read_VeCRDB_M_PIMA_MtrMaxCptyTrq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMA_MtrMaxCptyTrq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1231>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMA_MtrMaxCptyTrq_SigSts_Value(&tmpRead_4o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1228>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4o) & 3U) != 0U)
    {
        /* Transition: '<S1231>:100' */
        /* Transition: '<S1231>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1231>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4o) & 4U) != 0U)
        {
            /* Transition: '<S1231>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1231>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1231>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMA_MtrMaxCptyTrq_CallStatus = 3U;

                /* Event: '<S1231>:40' */
                /* Transition: '<S1231>:115' */
                /* Transition: '<S1231>:114' */
            }
        }
        else
        {
            /* Transition: '<S1231>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_ip5) == 133)
            {
                /* Transition: '<S1231>:95' */
                /* Transition: '<S1231>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMA_MtrMaxCptyTrq_CallStatus = 4U;

                /* Transition: '<S1231>:114' */
            }
            else
            {
                /* Transition: '<S1231>:120' */
                /* Transition: '<S1231>:117' */
                /* Call Poke */
                VeCRDB_y_PIMA_MtrMaxCptyTrq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1122>/Poke' */
                /* FunctionCaller: '<S1233>/Function Caller' */
                /* Event: '<S1231>:38' */
                Rte_Call_PokeMTIR_M_MtrACapabilityMax_PokeMTIR_M_MtrACapabilityMax
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_k,
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_P);

                /* End of Outputs for SubSystem: '<S1122>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1231>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMA_MtrMaxCptyTrq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1122>/Fsft' */
        /* FunctionCaller: '<S1232>/Function Caller' */
        /* Event: '<S1231>:39' */
        Rte_Call_FsftMTIR_M_MtrACapabilityMax_FsftMTIR_M_MtrACapabilityMax();

        /* End of Outputs for SubSystem: '<S1122>/Fsft' */
        /* Transition: '<S1231>:113' */
        /* Transition: '<S1231>:115' */
        /* Transition: '<S1231>:114' */
    }

    /* End of Chart: '<S1228>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMA_MtrMinCptyTrq_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMA_MtrMinCptyTrq_ErrSts'
     */
    /* Transition: '<S1231>:107' */
    rtb_TmpSignalConversionAtVeC_jl = Rte_Read_VeCRDB_M_PIMA_MtrMinCptyTrq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMA_MtrMinCptyTrq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1237>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMA_MtrMinCptyTrq_SigSts_Value(&tmpRead_4p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1234>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4p) & 3U) != 0U)
    {
        /* Transition: '<S1237>:100' */
        /* Transition: '<S1237>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1237>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4p) & 4U) != 0U)
        {
            /* Transition: '<S1237>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1237>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1237>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMA_MtrMinCptyTrq_CallStatus = 3U;

                /* Event: '<S1237>:40' */
                /* Transition: '<S1237>:115' */
                /* Transition: '<S1237>:114' */
            }
        }
        else
        {
            /* Transition: '<S1237>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jl) == 133)
            {
                /* Transition: '<S1237>:95' */
                /* Transition: '<S1237>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMA_MtrMinCptyTrq_CallStatus = 4U;

                /* Transition: '<S1237>:114' */
            }
            else
            {
                /* Transition: '<S1237>:120' */
                /* Transition: '<S1237>:117' */
                /* Call Poke */
                VeCRDB_y_PIMA_MtrMinCptyTrq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1123>/Poke' */
                /* FunctionCaller: '<S1239>/Function Caller' */
                /* Event: '<S1237>:38' */
                Rte_Call_PokeMTIR_M_MtrACapabilityMin_PokeMTIR_M_MtrACapabilityMin
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_n,
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_P);

                /* End of Outputs for SubSystem: '<S1123>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1237>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMA_MtrMinCptyTrq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1123>/Fsft' */
        /* FunctionCaller: '<S1238>/Function Caller' */
        /* Event: '<S1237>:39' */
        Rte_Call_FsftMTIR_M_MtrACapabilityMin_FsftMTIR_M_MtrACapabilityMin();

        /* End of Outputs for SubSystem: '<S1123>/Fsft' */
        /* Transition: '<S1237>:113' */
        /* Transition: '<S1237>:115' */
        /* Transition: '<S1237>:114' */
    }

    /* End of Chart: '<S1234>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_RPM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_RPM_ErrSts'
     */
    /* Transition: '<S1237>:107' */
    rtb_TmpSignalConversionAtVeC_df = Rte_Read_VeCRDB_n_PIM_A_RPM_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_n_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_RPM_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1244>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_RPM_SigSts_Value(&tmpRead_4q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1240>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_PIM_A_RPM_V'
     */
    guard1 = false;
    if ((((uint32)tmpRead_4q) & 3U) != 0U)
    {
        /* Transition: '<S1244>:100' */
        /* Transition: '<S1244>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1244>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4q) & 4U) != 0U)
        {
            /* Transition: '<S1244>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1244>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1244>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_RPM_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1124>/Tmot' */
                /* FunctionCaller: '<S1247>/Function Caller' */
                /* Event: '<S1244>:40' */
                Rte_Call_TmotMSPR_b_MtrA_SpdRaw_TmotMSPR_b_MtrA_SpdRaw();

                /* End of Outputs for SubSystem: '<S1124>/Tmot' */
                /* Transition: '<S1244>:115' */
                /* Transition: '<S1244>:114' */
            }
        }
        else
        {
            /* Transition: '<S1244>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_df) == 133)
            {
                /* Transition: '<S1244>:95' */
                /* Transition: '<S1244>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_RPM_CallStatus = 4U;

                /* Transition: '<S1244>:114' */
            }
            else
            {
                /* Transition: '<S1244>:120' */
                (void)Rte_Read_VeCRDB_b_PIM_A_RPM_V_Value(&FA_out_o);

                /* Transition: '<S1244>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_RPM_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1124>/Poke' */
                /* FunctionCaller: '<S1246>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_PIM_A_RPM_V'
                 */
                /* Event: '<S1244>:38' */
                Rte_Call_PokeMSPR_n_MtrA_SpdRaw_PokeMSPR_n_MtrA_SpdRaw
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_n_i, FA_out_o);

                /* End of Outputs for SubSystem: '<S1124>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1244>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_RPM_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1124>/Fsft' */
        /* FunctionCaller: '<S1245>/Function Caller' */
        /* Event: '<S1244>:39' */
        Rte_Call_FsftMSPR_n_MtrA_SpdRaw_FsftMSPR_n_MtrA_SpdRaw();

        /* End of Outputs for SubSystem: '<S1124>/Fsft' */
        /* Transition: '<S1244>:113' */
        /* Transition: '<S1244>:115' */
        /* Transition: '<S1244>:114' */
    }

    /* End of Chart: '<S1240>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_SPT_Stat_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_SPT_Stat_ErrSts'
     */
    /* Transition: '<S1244>:107' */
    rtb_TmpSignalConversionAtVeC_em = Rte_Read_VeCRDB_y_PIM_A_SPT_Stat_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_SPT_Stat_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1252>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_SPT_Stat_SigSts_Value(&tmpRead_4r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1248>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4r) & 3U) != 0U)
    {
        /* Transition: '<S1252>:100' */
        /* Transition: '<S1252>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1252>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4r) & 4U) != 0U)
        {
            /* Transition: '<S1252>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1252>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1252>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_SPT_Stat_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1125>/Tmot' */
                /* FunctionCaller: '<S1255>/Function Caller' */
                /* Event: '<S1252>:40' */
                Rte_Call_TmotINVR_b_MCPA_SPT_State_TmotINVR_b_MCPA_SPT_State();

                /* End of Outputs for SubSystem: '<S1125>/Tmot' */
                /* Transition: '<S1252>:115' */
                /* Transition: '<S1252>:114' */
            }
        }
        else
        {
            /* Transition: '<S1252>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_em) == 133)
            {
                /* Transition: '<S1252>:95' */
                /* Transition: '<S1252>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_SPT_Stat_CallStatus = 4U;

                /* Transition: '<S1252>:114' */
            }
            else
            {
                /* Transition: '<S1252>:120' */
                /* Transition: '<S1252>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_SPT_Stat_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1125>/Poke' */
                /* FunctionCaller: '<S1254>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1254>/Data Type Conversion'
                 */
                /* Event: '<S1252>:38' */
                Rte_Call_PokeINVR_e_MCPA_SPT_State_PokeINVR_e_MCPA_SPT_State
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_h);

                /* End of Outputs for SubSystem: '<S1125>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1252>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_SPT_Stat_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1125>/Fsft' */
        /* FunctionCaller: '<S1253>/Function Caller' */
        /* Event: '<S1252>:39' */
        Rte_Call_FsftINVR_e_MCPA_SPT_State_FsftINVR_e_MCPA_SPT_State();

        /* End of Outputs for SubSystem: '<S1125>/Fsft' */
        /* Transition: '<S1252>:113' */
        /* Transition: '<S1252>:115' */
        /* Transition: '<S1252>:114' */
    }

    /* End of Chart: '<S1248>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_Spd_Lim_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_Spd_Lim_ErrSts'
     */
    /* Transition: '<S1252>:107' */
    rtb_TmpSignalConversionAtVeC_dx = Rte_Read_VeCRDB_n_PIM_A_Spd_Lim_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_n_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_Spd_Lim_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1260>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_Spd_Lim_SigSts_Value(&tmpRead_4s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1256>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4s) & 3U) != 0U)
    {
        /* Transition: '<S1260>:100' */
        /* Transition: '<S1260>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1260>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4s) & 4U) != 0U)
        {
            /* Transition: '<S1260>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1260>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1260>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_Spd_Lim_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1126>/Tmot' */
                /* FunctionCaller: '<S1263>/Function Caller' */
                /* Event: '<S1260>:40' */
                Rte_Call_TmotMSPR_n_MaxP1SpdLmt_TmotMSPR_n_MaxP1SpdLmt();

                /* End of Outputs for SubSystem: '<S1126>/Tmot' */
                /* Transition: '<S1260>:115' */
                /* Transition: '<S1260>:114' */
            }
        }
        else
        {
            /* Transition: '<S1260>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dx) == 133)
            {
                /* Transition: '<S1260>:95' */
                /* Transition: '<S1260>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_Spd_Lim_CallStatus = 4U;

                /* Transition: '<S1260>:114' */
            }
            else
            {
                /* Transition: '<S1260>:120' */
                /* Transition: '<S1260>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_Spd_Lim_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1126>/Poke' */
                /* FunctionCaller: '<S1262>/Function Caller' */
                /* Event: '<S1260>:38' */
                Rte_Call_PokeMSPR_n_MaxP1SpdLmt_PokeMSPR_n_MaxP1SpdLmt
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_n_n);

                /* End of Outputs for SubSystem: '<S1126>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1260>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_Spd_Lim_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1126>/Fsft' */
        /* FunctionCaller: '<S1261>/Function Caller' */
        /* Event: '<S1260>:39' */
        Rte_Call_FsftMSPR_n_MaxP1SpdLmt_FsftMSPR_n_MaxP1SpdLmt();

        /* End of Outputs for SubSystem: '<S1126>/Fsft' */
        /* Transition: '<S1260>:113' */
        /* Transition: '<S1260>:115' */
        /* Transition: '<S1260>:114' */
    }

    /* End of Chart: '<S1256>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMA_TrqAchvdAEMD_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMA_TrqAchvdAEMD_ErrSts'
     */
    /* Transition: '<S1260>:107' */
    rtb_TmpSignalConversionAtVeC_dn = Rte_Read_VeCRDB_M_PIMA_TrqAchvdAEMD_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMA_TrqAchvdAEMD_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1268>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMA_TrqAchvdAEMD_SigSts_Value(&tmpRead_4t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1264>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_PIMA_TrqAchdAEMDV'
     */
    guard1 = false;
    if ((((uint32)tmpRead_4t) & 3U) != 0U)
    {
        /* Transition: '<S1268>:100' */
        /* Transition: '<S1268>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1268>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4t) & 4U) != 0U)
        {
            /* Transition: '<S1268>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1268>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1268>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMA_TrqAchvdAEMD_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1127>/Tmot' */
                /* FunctionCaller: '<S1271>/Function Caller' */
                /* Event: '<S1268>:40' */
                Rte_Call_TmotMTIR_b_MtrA_TorqAchieved_AEMD_TmotMTIR_b_MtrA_TorqAchieved_AEMD
                    ();

                /* End of Outputs for SubSystem: '<S1127>/Tmot' */
                /* Transition: '<S1268>:115' */
                /* Transition: '<S1268>:114' */
            }
        }
        else
        {
            /* Transition: '<S1268>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dn) == 133)
            {
                /* Transition: '<S1268>:95' */
                /* Transition: '<S1268>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMA_TrqAchvdAEMD_CallStatus = 4U;

                /* Transition: '<S1268>:114' */
            }
            else
            {
                /* Transition: '<S1268>:120' */
                (void)Rte_Read_VeCRDB_b_PIMA_TrqAchdAEMDV_Value(&tmpRead_5m);

                /* Transition: '<S1268>:117' */
                /* Call Poke */
                VeCRDB_y_PIMA_TrqAchvdAEMD_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1127>/Poke' */
                /* FunctionCaller: '<S1270>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_PIMA_TrqAchdAEMDV'
                 */
                /* Event: '<S1268>:38' */
                Rte_Call_PokeMTIR_M_MtrA_TorqAchieved_AEMD_PokeMTIR_M_MtrA_TorqAchieved_AEMD
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_d, tmpRead_5m);

                /* End of Outputs for SubSystem: '<S1127>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1268>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMA_TrqAchvdAEMD_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1127>/Fsft' */
        /* FunctionCaller: '<S1269>/Function Caller' */
        /* Event: '<S1268>:39' */
        Rte_Call_FsftMTIR_M_MtrA_TorqAchieved_AEMD_FsftMTIR_M_MtrA_TorqAchieved_AEMD
            ();

        /* End of Outputs for SubSystem: '<S1127>/Fsft' */
        /* Transition: '<S1268>:113' */
        /* Transition: '<S1268>:115' */
        /* Transition: '<S1268>:114' */
    }

    /* End of Chart: '<S1264>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_A_Trq_Achvd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_A_Trq_Achvd_ErrSts'
     */
    /* Transition: '<S1268>:107' */
    rtb_TmpSignalConversionAtVeC_ak = Rte_Read_VeCRDB_M_PIM_A_Trq_Achvd_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_A_Trq_Achvd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1275>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_A_Trq_Achvd_SigSts_Value(&tmpRead_4u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1272>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_PIM_A_TrqAchvd_V'
     */
    guard1 = false;
    if ((((uint32)tmpRead_4u) & 3U) != 0U)
    {
        /* Transition: '<S1275>:100' */
        /* Transition: '<S1275>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1275>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4u) & 4U) != 0U)
        {
            /* Transition: '<S1275>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1275>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1275>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_A_Trq_Achvd_CallStatus = 3U;

                /* Event: '<S1275>:40' */
                /* Transition: '<S1275>:115' */
                /* Transition: '<S1275>:114' */
            }
        }
        else
        {
            /* Transition: '<S1275>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ak) == 133)
            {
                /* Transition: '<S1275>:95' */
                /* Transition: '<S1275>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_A_Trq_Achvd_CallStatus = 4U;

                /* Transition: '<S1275>:114' */
            }
            else
            {
                /* Transition: '<S1275>:120' */
                (void)Rte_Read_VeCRDB_b_PIM_A_TrqAchvd_V_Value(&tmpRead_5n);

                /* Transition: '<S1275>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_A_Trq_Achvd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1128>/Poke' */
                /* FunctionCaller: '<S1277>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_PIM_A_TrqAchvd_V'
                 */
                /* Event: '<S1275>:38' */
                Rte_Call_PokeMTIR_M_MtrA_TorqAchieved_PokeMTIR_M_MtrA_TorqAchieved
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_a, tmpRead_5n);

                /* End of Outputs for SubSystem: '<S1128>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1275>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_A_Trq_Achvd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1128>/Fsft' */
        /* FunctionCaller: '<S1276>/Function Caller' */
        /* Event: '<S1275>:39' */
        Rte_Call_FsftMTIR_M_MtrA_TorqAchieved_FsftMTIR_M_MtrA_TorqAchieved();

        /* End of Outputs for SubSystem: '<S1128>/Fsft' */
        /* Transition: '<S1275>:113' */
        /* Transition: '<S1275>:115' */
        /* Transition: '<S1275>:114' */
    }

    /* End of Chart: '<S1272>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_3PS_Pos_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_3PS_Pos_ErrSts'
     */
    /* Transition: '<S1275>:107' */
    rtb_TmpSignalConversionAtVeC_bo = Rte_Read_VeCRDB_b_PIM_B_3PS_Pos_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_3PS_Pos_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1303>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_3PS_Pos_SigSts_Value(&tmpRead_4v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1299>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4v) & 3U) != 0U)
    {
        /* Transition: '<S1303>:100' */
        /* Transition: '<S1303>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1303>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4v) & 4U) != 0U)
        {
            /* Transition: '<S1303>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1303>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1303>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_3PS_Pos_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1278>/Tmot' */
                /* FunctionCaller: '<S1306>/Function Caller' */
                /* Event: '<S1303>:40' */
                Rte_Call_TmotINVR_b_MtrBFlt_3PS_Pos_TmotINVR_b_MtrBFlt_3PS_Pos();

                /* End of Outputs for SubSystem: '<S1278>/Tmot' */
                /* Transition: '<S1303>:115' */
                /* Transition: '<S1303>:114' */
            }
        }
        else
        {
            /* Transition: '<S1303>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bo) == 133)
            {
                /* Transition: '<S1303>:95' */
                /* Transition: '<S1303>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_3PS_Pos_CallStatus = 4U;

                /* Transition: '<S1303>:114' */
            }
            else
            {
                /* Transition: '<S1303>:120' */
                /* Transition: '<S1303>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_3PS_Pos_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1278>/Poke' */
                /* FunctionCaller: '<S1305>/Function Caller' */
                /* Event: '<S1303>:38' */
                Rte_Call_PokeINVR_b_MtrBFlt_3PS_Pos_PokeINVR_b_MtrBFlt_3PS_Pos
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_e);

                /* End of Outputs for SubSystem: '<S1278>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1303>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_3PS_Pos_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1278>/Fsft' */
        /* FunctionCaller: '<S1304>/Function Caller' */
        /* Event: '<S1303>:39' */
        Rte_Call_FsftINVR_b_MtrBFlt_3PS_Pos_FsftINVR_b_MtrBFlt_3PS_Pos();

        /* End of Outputs for SubSystem: '<S1278>/Fsft' */
        /* Transition: '<S1303>:113' */
        /* Transition: '<S1303>:115' */
        /* Transition: '<S1303>:114' */
    }

    /* End of Chart: '<S1299>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_6SO_Status_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_6SO_Status_ErrSts'
     */
    /* Transition: '<S1303>:107' */
    rtb_TmpSignalConversionAtVeC_jk = Rte_Read_VeCRDB_y_PIM_B_6SO_Status_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_6SO_Status_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1310>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_6SO_Status_SigSts_Value(&tmpRead_4w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1307>/Chart' */
    if ((((uint32)tmpRead_4w) & 3U) != 0U)
    {
        /* Transition: '<S1310>:100' */
        /* Transition: '<S1310>:103' */
        /* Transition: '<S1310>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_6SO_Status_CallStatus = 2U;

        /* Event: '<S1310>:39' */
        /* Transition: '<S1310>:113' */
        /* Transition: '<S1310>:115' */
        /* Transition: '<S1310>:114' */
    }
    else
    {
        /* Transition: '<S1310>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4w) & 4U) != 0U)
        {
            /* Transition: '<S1310>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1310>:88' */
                /* Transition: '<S1310>:111' */
                /* Call Fsft */
                VeCRDB_y_PIM_B_6SO_Status_CallStatus = 2U;

                /* Event: '<S1310>:39' */
                /* Transition: '<S1310>:113' */
                /* Transition: '<S1310>:115' */
                /* Transition: '<S1310>:114' */
            }
            else
            {
                /* Transition: '<S1310>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_6SO_Status_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1279>/Tmot' */
                /* FunctionCaller: '<S1312>/Function Caller' */
                /* Event: '<S1310>:40' */
                Rte_Call_TmotINVR_b_MtrB_6SOEnbl_TmotINVR_b_MtrB_6SOEnbl();

                /* End of Outputs for SubSystem: '<S1279>/Tmot' */
                /* Transition: '<S1310>:115' */
                /* Transition: '<S1310>:114' */
            }
        }
        else
        {
            /* Transition: '<S1310>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jk) == 133)
            {
                /* Transition: '<S1310>:95' */
                /* Transition: '<S1310>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_6SO_Status_CallStatus = 4U;

                /* Transition: '<S1310>:114' */
            }
            else
            {
                /* Transition: '<S1310>:120' */
                if ((((uint32)tmpRead_4w) & 8U) != 0U)
                {
                    /* Transition: '<S1310>:122' */
                    /* Transition: '<S1310>:125' */
                    FA_out_o = true;

                    /* Transition: '<S1310>:126' */
                }
                else
                {
                    /* Transition: '<S1310>:124' */
                    FA_out_o = false;
                }

                /* Transition: '<S1310>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_6SO_Status_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1279>/Poke' */
                /* FunctionCaller: '<S1311>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1311>/Data Type Conversion'
                 */
                /* Event: '<S1310>:38' */
                Rte_Call_PokeINVR_e_MtrB_6SOEnbl_PokeINVR_e_MtrB_6SOEnbl((sint16)
                    CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_k, FA_out_o);

                /* End of Outputs for SubSystem: '<S1279>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1307>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_AccelRaw_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_AccelRaw_ErrSts'
     */
    /* Transition: '<S1310>:107' */
    rtb_TmpSignalConversionAtVeC_bd = Rte_Read_VeCRDB_y_PIM_B_AccelRaw_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_AccelRaw_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1317>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_AccelRaw_SigSts_Value(&tmpRead_4x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1313>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_PIM_B_AccelRawV_FD11'
     */
    guard1 = false;
    if ((((uint32)tmpRead_4x) & 3U) != 0U)
    {
        /* Transition: '<S1317>:100' */
        /* Transition: '<S1317>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1317>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4x) & 4U) != 0U)
        {
            /* Transition: '<S1317>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1317>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1317>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_AccelRaw_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1280>/Tmot' */
                /* FunctionCaller: '<S1320>/Function Caller' */
                /* Event: '<S1317>:40' */
                Rte_Call_TmotMSPR_b_MtrB_AccelRaw_TmotMSPR_b_MtrB_AccelRaw();

                /* End of Outputs for SubSystem: '<S1280>/Tmot' */
                /* Transition: '<S1317>:115' */
                /* Transition: '<S1317>:114' */
            }
        }
        else
        {
            /* Transition: '<S1317>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bd) == 133)
            {
                /* Transition: '<S1317>:95' */
                /* Transition: '<S1317>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_AccelRaw_CallStatus = 4U;

                /* Transition: '<S1317>:114' */
            }
            else
            {
                /* Transition: '<S1317>:120' */
                (void)Rte_Read_VeSR1B_b_PIM_B_AccelRawV_FD11_Value(&tmpRead_5o);

                /* Transition: '<S1317>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_AccelRaw_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1280>/Poke' */
                /* FunctionCaller: '<S1319>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_PIM_B_AccelRawV_FD11'
                 */
                /* Event: '<S1317>:38' */
                Rte_Call_PokeMSPR_dn_MtrB_AccelRaw_PokeMSPR_dn_MtrB_AccelRaw
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_a, tmpRead_5o);

                /* End of Outputs for SubSystem: '<S1280>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1317>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_AccelRaw_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1280>/Fsft' */
        /* FunctionCaller: '<S1318>/Function Caller' */
        /* Event: '<S1317>:39' */
        Rte_Call_FsftMSPR_dn_MtrB_AccelRaw_FsftMSPR_dn_MtrB_AccelRaw();

        /* End of Outputs for SubSystem: '<S1280>/Fsft' */
        /* Transition: '<S1317>:113' */
        /* Transition: '<S1317>:115' */
        /* Transition: '<S1317>:114' */
    }

    /* End of Chart: '<S1313>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMB_CptySpdDivVlt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMB_CptySpdDivVlt_ErrSts'
     */
    /* Transition: '<S1317>:107' */
    rtb_TmpSignalConversionAtVeC_dr = Rte_Read_VeCRDB_n_PIMB_CptySpdDivVlt_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_n_f);

    /* SignalConversion generated from: '<S2>/VeSR1B_y_PIM_B_MtrIndex_FD11' incorporates:
     *  Inport: '<Root>/VeSR1B_y_PIM_B_MtrIndex_FD11'
     */
    (void)Rte_Read_VeSR1B_y_PIM_B_MtrIndex_FD11_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMB_CptySpdDivVlt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1324>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMB_CptySpdDivVlt_SigSts_Value(&tmpRead_4y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1321>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4y) & 3U) != 0U)
    {
        /* Transition: '<S1324>:100' */
        /* Transition: '<S1324>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1324>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4y) & 4U) != 0U)
        {
            /* Transition: '<S1324>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1324>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1324>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMB_CptySpdDivVlt_CallStatus = 3U;

                /* Event: '<S1324>:40' */
                /* Transition: '<S1324>:115' */
                /* Transition: '<S1324>:114' */
            }
        }
        else
        {
            /* Transition: '<S1324>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dr) == 133)
            {
                /* Transition: '<S1324>:95' */
                /* Transition: '<S1324>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMB_CptySpdDivVlt_CallStatus = 4U;

                /* Transition: '<S1324>:114' */
            }
            else
            {
                /* Transition: '<S1324>:120' */
                /* Transition: '<S1324>:117' */
                /* Call Poke */
                VeCRDB_y_PIMB_CptySpdDivVlt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1281>/Poke' */
                /* FunctionCaller: '<S1326>/Function Caller' */
                /* Event: '<S1324>:38' */
                Rte_Call_PokeMTIR_n_MtrBCapabilitySpd_PokeMTIR_n_MtrBCapabilitySpd
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_n_f,
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_h);

                /* End of Outputs for SubSystem: '<S1281>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1324>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMB_CptySpdDivVlt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1281>/Fsft' */
        /* FunctionCaller: '<S1325>/Function Caller' */
        /* Event: '<S1324>:39' */
        Rte_Call_FsftMTIR_n_MtrBCapabilitySpd_FsftMTIR_n_MtrBCapabilitySpd();

        /* End of Outputs for SubSystem: '<S1281>/Fsft' */
        /* Transition: '<S1324>:113' */
        /* Transition: '<S1324>:115' */
        /* Transition: '<S1324>:114' */
    }

    /* End of Chart: '<S1321>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_DC_Current_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_DC_Current_ErrSts'
     */
    /* Transition: '<S1324>:107' */
    rtb_TmpSignalConversionAtVeC_bn = Rte_Read_VeCRDB_I_PIM_B_DC_Current_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_I_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_DC_Current_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1331>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_DC_Current_SigSts_Value(&tmpRead_4z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1327>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_PIM_B_DC_Curr_V'
     */
    guard1 = false;
    if ((((uint32)tmpRead_4z) & 3U) != 0U)
    {
        /* Transition: '<S1331>:100' */
        /* Transition: '<S1331>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1331>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4z) & 4U) != 0U)
        {
            /* Transition: '<S1331>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1331>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1331>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_DC_Current_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1282>/Tmot' */
                /* FunctionCaller: '<S1334>/Function Caller' */
                /* Event: '<S1331>:40' */
                Rte_Call_TmotINVR_b_MtrB_DC_Crnt_TmotINVR_b_MtrB_DC_Crnt();

                /* End of Outputs for SubSystem: '<S1282>/Tmot' */
                /* Transition: '<S1331>:115' */
                /* Transition: '<S1331>:114' */
            }
        }
        else
        {
            /* Transition: '<S1331>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bn) == 133)
            {
                /* Transition: '<S1331>:95' */
                /* Transition: '<S1331>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_DC_Current_CallStatus = 4U;

                /* Transition: '<S1331>:114' */
            }
            else
            {
                /* Transition: '<S1331>:120' */
                (void)Rte_Read_VeCRDB_b_PIM_B_DC_Curr_V_Value(&tmpRead_5p);

                /* Transition: '<S1331>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_DC_Current_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1282>/Poke' */
                /* FunctionCaller: '<S1333>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_PIM_B_DC_Curr_V'
                 */
                /* Event: '<S1331>:38' */
                Rte_Call_PokeINVR_I_MtrB_DC_Crnt_PokeINVR_I_MtrB_DC_Crnt
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_I_j, tmpRead_5p);

                /* End of Outputs for SubSystem: '<S1282>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1331>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_DC_Current_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1282>/Fsft' */
        /* FunctionCaller: '<S1332>/Function Caller' */
        /* Event: '<S1331>:39' */
        Rte_Call_FsftINVR_I_MtrB_DC_Crnt_FsftINVR_I_MtrB_DC_Crnt();

        /* End of Outputs for SubSystem: '<S1282>/Fsft' */
        /* Transition: '<S1331>:113' */
        /* Transition: '<S1331>:115' */
        /* Transition: '<S1331>:114' */
    }

    /* End of Chart: '<S1327>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_DC_Voltage_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_DC_Voltage_ErrSts'
     */
    /* Transition: '<S1331>:107' */
    rtb_TmpSignalConversionAtVeC_d4 = Rte_Read_VeCRDB_U_PIM_B_DC_Voltage_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_DC_Voltage_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1339>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_DC_Voltage_SigSts_Value(&tmpRead_50);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1335>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_PIM_B_DC_Volt_V'
     */
    guard1 = false;
    if ((((uint32)tmpRead_50) & 3U) != 0U)
    {
        /* Transition: '<S1339>:100' */
        /* Transition: '<S1339>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1339>:104' */
        /*  MM */
        if ((((uint32)tmpRead_50) & 4U) != 0U)
        {
            /* Transition: '<S1339>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1339>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1339>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_DC_Voltage_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1283>/Tmot' */
                /* FunctionCaller: '<S1342>/Function Caller' */
                /* Event: '<S1339>:40' */
                Rte_Call_TmotINVR_b_MtrB_DC_Volt_TmotINVR_b_MtrB_DC_Volt();

                /* End of Outputs for SubSystem: '<S1283>/Tmot' */
                /* Transition: '<S1339>:115' */
                /* Transition: '<S1339>:114' */
            }
        }
        else
        {
            /* Transition: '<S1339>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_d4) == 133)
            {
                /* Transition: '<S1339>:95' */
                /* Transition: '<S1339>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_DC_Voltage_CallStatus = 4U;

                /* Transition: '<S1339>:114' */
            }
            else
            {
                /* Transition: '<S1339>:120' */
                (void)Rte_Read_VeCRDB_b_PIM_B_DC_Volt_V_Value(&tmpRead_5q);

                /* Transition: '<S1339>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_DC_Voltage_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1283>/Poke' */
                /* FunctionCaller: '<S1341>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_PIM_B_DC_Volt_V'
                 */
                /* Event: '<S1339>:38' */
                Rte_Call_PokeINVR_U_MtrB_DC_Volt_PokeINVR_U_MtrB_DC_Volt
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_U_c, tmpRead_5q);

                /* End of Outputs for SubSystem: '<S1283>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1339>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_DC_Voltage_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1283>/Fsft' */
        /* FunctionCaller: '<S1340>/Function Caller' */
        /* Event: '<S1339>:39' */
        Rte_Call_FsftINVR_U_MtrB_DC_Volt_FsftINVR_U_MtrB_DC_Volt();

        /* End of Outputs for SubSystem: '<S1283>/Fsft' */
        /* Transition: '<S1339>:113' */
        /* Transition: '<S1339>:115' */
        /* Transition: '<S1339>:114' */
    }

    /* End of Chart: '<S1335>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_DerateReasn_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_DerateReasn_ErrSts'
     */
    /* Transition: '<S1339>:107' */
    rtb_TmpSignalConversionAtVeC_la = Rte_Read_VeCRDB_y_PIM_B_DerateReasn_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__co);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_DerateReasn_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1345>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_DerateReasn_SigSts_Value(&tmpRead_51);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1343>/Chart' */
    if ((((uint32)tmpRead_51) & 3U) != 0U)
    {
        /* Transition: '<S1345>:100' */
        /* Transition: '<S1345>:103' */
        /* Transition: '<S1345>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_DerateReasn_CallStatus = 2U;

        /* Event: '<S1345>:39' */
        /* Transition: '<S1345>:113' */
        /* Transition: '<S1345>:115' */
        /* Transition: '<S1345>:114' */
    }
    else
    {
        /* Transition: '<S1345>:104' */
        /*  MM */
        if ((((uint32)tmpRead_51) & 4U) != 0U)
        {
            /* Transition: '<S1345>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1345>:88' */
                /* Transition: '<S1345>:111' */
                /* Call Fsft */
                VeCRDB_y_PIM_B_DerateReasn_CallStatus = 2U;

                /* Event: '<S1345>:39' */
                /* Transition: '<S1345>:113' */
                /* Transition: '<S1345>:115' */
                /* Transition: '<S1345>:114' */
            }
            else
            {
                /* Transition: '<S1345>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_DerateReasn_CallStatus = 3U;

                /* Event: '<S1345>:40' */
                /* Transition: '<S1345>:115' */
                /* Transition: '<S1345>:114' */
            }
        }
        else
        {
            /* Transition: '<S1345>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_la) == 133)
            {
                /* Transition: '<S1345>:95' */
                /* Transition: '<S1345>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_DerateReasn_CallStatus = 4U;

                /* Transition: '<S1345>:114' */
            }
            else
            {
                /* Transition: '<S1345>:120' */
                /* Transition: '<S1345>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_DerateReasn_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1284>/Poke' */
                /* FunctionCaller: '<S1346>/Function Caller' */
                /* Event: '<S1345>:38' */
                Rte_Call_PokeINVR_e_MtrB_DrtRsn_PokeINVR_e_MtrB_DrtRsn
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__co);

                /* End of Outputs for SubSystem: '<S1284>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1343>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMB_DratngFactor_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMB_DratngFactor_ErrSts'
     */
    /* Transition: '<S1345>:107' */
    rtb_TmpSignalConversionAtVeC_md = Rte_Read_VeCRDB_h_PIMB_DratngFactor_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_h_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMB_DratngFactor_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1350>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMB_DratngFactor_SigSts_Value(&tmpRead_52);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1347>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_52) & 3U) != 0U)
    {
        /* Transition: '<S1350>:100' */
        /* Transition: '<S1350>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1350>:104' */
        /*  MM */
        if ((((uint32)tmpRead_52) & 4U) != 0U)
        {
            /* Transition: '<S1350>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1350>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1350>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMB_DratngFactor_CallStatus = 3U;

                /* Event: '<S1350>:40' */
                /* Transition: '<S1350>:115' */
                /* Transition: '<S1350>:114' */
            }
        }
        else
        {
            /* Transition: '<S1350>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_md) == 133)
            {
                /* Transition: '<S1350>:95' */
                /* Transition: '<S1350>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMB_DratngFactor_CallStatus = 4U;

                /* Transition: '<S1350>:114' */
            }
            else
            {
                /* Transition: '<S1350>:120' */
                /* Transition: '<S1350>:117' */
                /* Call Poke */
                VeCRDB_y_PIMB_DratngFactor_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1285>/Poke' */
                /* FunctionCaller: '<S1352>/Function Caller' */
                /* Event: '<S1350>:38' */
                Rte_Call_PokeMTIR_k_MtrBDeratingFactor_PokeMTIR_k_MtrBDeratingFactor
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_h_k);

                /* End of Outputs for SubSystem: '<S1285>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1350>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMB_DratngFactor_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1285>/Fsft' */
        /* FunctionCaller: '<S1351>/Function Caller' */
        /* Event: '<S1350>:39' */
        Rte_Call_FsftMTIR_k_MtrBDeratingFactor_FsftMTIR_k_MtrBDeratingFactor();

        /* End of Outputs for SubSystem: '<S1285>/Fsft' */
        /* Transition: '<S1350>:113' */
        /* Transition: '<S1350>:115' */
        /* Transition: '<S1350>:114' */
    }

    /* End of Chart: '<S1347>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_Dschrge_Sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_Dschrge_Sts_ErrSts'
     */
    /* Transition: '<S1350>:107' */
    rtb_TmpSignalConversionAtVeC_nj = Rte_Read_VeCRDB_y_PIM_B_Dschrge_Sts_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__fa);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_Dschrge_Sts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1356>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_Dschrge_Sts_SigSts_Value(&tmpRead_53);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1353>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_53) & 3U) != 0U)
    {
        /* Transition: '<S1356>:100' */
        /* Transition: '<S1356>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1356>:104' */
        /*  MM */
        if ((((uint32)tmpRead_53) & 4U) != 0U)
        {
            /* Transition: '<S1356>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1356>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1356>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_Dschrge_Sts_CallStatus = 3U;

                /* Event: '<S1356>:40' */
                /* Transition: '<S1356>:115' */
                /* Transition: '<S1356>:114' */
            }
        }
        else
        {
            /* Transition: '<S1356>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_nj) == 133)
            {
                /* Transition: '<S1356>:95' */
                /* Transition: '<S1356>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_Dschrge_Sts_CallStatus = 4U;

                /* Transition: '<S1356>:114' */
            }
            else
            {
                /* Transition: '<S1356>:120' */
                /* Transition: '<S1356>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_Dschrge_Sts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1286>/Poke' */
                /* FunctionCaller: '<S1358>/Function Caller' incorporates:
                 *  Constant: '<S1358>/Constant'
                 *  DataTypeConversion: '<S1358>/Data Type Conversion'
                 */
                /* Event: '<S1356>:38' */
                Rte_Call_PokeINVR_e_MtrB_Dschrge_Stat_PokeINVR_e_MtrB_Dschrge_Stat
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__fa,
                     false);

                /* End of Outputs for SubSystem: '<S1286>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1356>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_Dschrge_Sts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1286>/Fsft' */
        /* FunctionCaller: '<S1357>/Function Caller' */
        /* Event: '<S1356>:39' */
        Rte_Call_FsftINVR_e_MtrB_Dschrge_Stat_FsftINVR_e_MtrB_Dschrge_Stat();

        /* End of Outputs for SubSystem: '<S1286>/Fsft' */
        /* Transition: '<S1356>:113' */
        /* Transition: '<S1356>:115' */
        /* Transition: '<S1356>:114' */
    }

    /* End of Chart: '<S1353>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMB_HV_CnctrOpnRq_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMB_HV_CnctrOpnRq_ErrSts'
     */
    /* Transition: '<S1356>:107' */
    rtb_TmpSignalConversionAtVeC_pi = Rte_Read_VeCRDB_b_PIMB_HV_CnctrOpnRq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__pu);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMB_HV_CnctrOpnRq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1363>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMB_HV_CnctrOpnRq_SigSts_Value(&tmpRead_54);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1359>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_54) & 3U) != 0U)
    {
        /* Transition: '<S1363>:100' */
        /* Transition: '<S1363>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1363>:104' */
        /*  MM */
        if ((((uint32)tmpRead_54) & 4U) != 0U)
        {
            /* Transition: '<S1363>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1363>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1363>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMB_HV_CnctrOpnRq_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1287>/Tmot' */
                /* FunctionCaller: '<S1366>/Function Caller' */
                /* Event: '<S1363>:40' */
                Rte_Call_TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_TmotINVR_b_MtrBFlt_HV_CntctrOpnRq
                    ();

                /* End of Outputs for SubSystem: '<S1287>/Tmot' */
                /* Transition: '<S1363>:115' */
                /* Transition: '<S1363>:114' */
            }
        }
        else
        {
            /* Transition: '<S1363>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pi) == 133)
            {
                /* Transition: '<S1363>:95' */
                /* Transition: '<S1363>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMB_HV_CnctrOpnRq_CallStatus = 4U;

                /* Transition: '<S1363>:114' */
            }
            else
            {
                /* Transition: '<S1363>:120' */
                /* Transition: '<S1363>:117' */
                /* Call Poke */
                VeCRDB_y_PIMB_HV_CnctrOpnRq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1287>/Poke' */
                /* FunctionCaller: '<S1365>/Function Caller' */
                /* Event: '<S1363>:38' */
                Rte_Call_PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_PokeINVR_b_MtrBFlt_HV_CntctrOpnRq
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__pu);

                /* End of Outputs for SubSystem: '<S1287>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1363>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMB_HV_CnctrOpnRq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1287>/Fsft' */
        /* FunctionCaller: '<S1364>/Function Caller' */
        /* Event: '<S1363>:39' */
        Rte_Call_FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_FsftINVR_b_MtrBFlt_HV_CntctrOpnRq
            ();

        /* End of Outputs for SubSystem: '<S1287>/Fsft' */
        /* Transition: '<S1363>:113' */
        /* Transition: '<S1363>:115' */
        /* Transition: '<S1363>:114' */
    }

    /* End of Chart: '<S1359>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMB_InterlockSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMB_InterlockSts_ErrSts'
     */
    /* Transition: '<S1363>:107' */
    rtb_TmpSignalConversionAtVe_o12 = Rte_Read_VeCRDB_y_PIMB_InterlockSts_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__a5);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMB_InterlockSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1370>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMB_InterlockSts_SigSts_Value(&tmpRead_55);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1367>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_55) & 3U) != 0U)
    {
        /* Transition: '<S1370>:100' */
        /* Transition: '<S1370>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1370>:104' */
        /*  MM */
        if ((((uint32)tmpRead_55) & 4U) != 0U)
        {
            /* Transition: '<S1370>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1370>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1370>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMB_InterlockSts_CallStatus = 3U;

                /* Event: '<S1370>:40' */
                /* Transition: '<S1370>:115' */
                /* Transition: '<S1370>:114' */
            }
        }
        else
        {
            /* Transition: '<S1370>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_o12) == 133)
            {
                /* Transition: '<S1370>:95' */
                /* Transition: '<S1370>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMB_InterlockSts_CallStatus = 4U;

                /* Transition: '<S1370>:114' */
            }
            else
            {
                /* Transition: '<S1370>:120' */
                /* Transition: '<S1370>:117' */
                /* Call Poke */
                VeCRDB_y_PIMB_InterlockSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1288>/Poke' */
                /* FunctionCaller: '<S1372>/Function Caller' incorporates:
                 *  Constant: '<S1373>/Constant'
                 *  RelationalOperator: '<S1373>/Compare'
                 */
                /* Event: '<S1370>:38' */
                Rte_Call_PokeINVR_e_MCPB_HVILSts_PokeINVR_e_MCPB_HVILSts
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__a5, (((sint32)
                       CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__a5) == 3) ?
                     1 : 0);

                /* End of Outputs for SubSystem: '<S1288>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1370>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMB_InterlockSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1288>/Fsft' */
        /* FunctionCaller: '<S1371>/Function Caller' */
        /* Event: '<S1370>:39' */
        Rte_Call_FsftINVR_b_MCPB_HVILSts_FsftINVR_b_MCPB_HVILSts();

        /* End of Outputs for SubSystem: '<S1288>/Fsft' */
        /* Transition: '<S1370>:113' */
        /* Transition: '<S1370>:115' */
        /* Transition: '<S1370>:114' */
    }

    /* End of Chart: '<S1367>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_Invrtr_St_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_Invrtr_St_ErrSts'
     */
    /* Transition: '<S1370>:107' */
    rtb_TmpSignalConversionAtVeC_am = Rte_Read_VeCRDB_y_PIM_B_Invrtr_St_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__dq);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_Invrtr_St_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1378>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_Invrtr_St_SigSts_Value(&tmpRead_56);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1374>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_56) & 3U) != 0U)
    {
        /* Transition: '<S1378>:100' */
        /* Transition: '<S1378>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1378>:104' */
        /*  MM */
        if ((((uint32)tmpRead_56) & 4U) != 0U)
        {
            /* Transition: '<S1378>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1378>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1378>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_Invrtr_St_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1289>/Tmot' */
                /* FunctionCaller: '<S1381>/Function Caller' */
                /* Event: '<S1378>:40' */
                Rte_Call_TmotINVR_b_MtrB_InvrtrSt_TmotINVR_b_MtrB_InvrtrSt();

                /* End of Outputs for SubSystem: '<S1289>/Tmot' */
                /* Transition: '<S1378>:115' */
                /* Transition: '<S1378>:114' */
            }
        }
        else
        {
            /* Transition: '<S1378>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_am) == 133)
            {
                /* Transition: '<S1378>:95' */
                /* Transition: '<S1378>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_Invrtr_St_CallStatus = 4U;

                /* Transition: '<S1378>:114' */
            }
            else
            {
                /* Transition: '<S1378>:120' */
                /* Transition: '<S1378>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_Invrtr_St_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1289>/Poke' */
                /* FunctionCaller: '<S1380>/Function Caller' */
                /* Event: '<S1378>:38' */
                Rte_Call_PokeINVR_e_MtrB_InvrtrSt_PokeINVR_e_MtrB_InvrtrSt
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__dq);

                /* End of Outputs for SubSystem: '<S1289>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1378>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_Invrtr_St_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1289>/Fsft' */
        /* FunctionCaller: '<S1379>/Function Caller' */
        /* Event: '<S1378>:39' */
        Rte_Call_FsftINVR_e_MtrB_InvrtrSt_FsftINVR_e_MtrB_InvrtrSt();

        /* End of Outputs for SubSystem: '<S1289>/Fsft' */
        /* Transition: '<S1378>:113' */
        /* Transition: '<S1378>:115' */
        /* Transition: '<S1378>:114' */
    }

    /* End of Chart: '<S1374>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_MaxTorq_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_MaxTorq_ErrSts'
     */
    /* Transition: '<S1378>:107' */
    rtb_TmpSignalConversionAtVeC_d3 = Rte_Read_VeCRDB_M_PIM_B_MaxTorq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_MaxTorq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1385>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_MaxTorq_SigSts_Value(&tmpRead_57);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1382>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_57) & 3U) != 0U)
    {
        /* Transition: '<S1385>:100' */
        /* Transition: '<S1385>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1385>:104' */
        /*  MM */
        if ((((uint32)tmpRead_57) & 4U) != 0U)
        {
            /* Transition: '<S1385>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1385>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1385>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_MaxTorq_CallStatus = 3U;

                /* Event: '<S1385>:40' */
                /* Transition: '<S1385>:115' */
                /* Transition: '<S1385>:114' */
            }
        }
        else
        {
            /* Transition: '<S1385>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_d3) == 133)
            {
                /* Transition: '<S1385>:95' */
                /* Transition: '<S1385>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_MaxTorq_CallStatus = 4U;

                /* Transition: '<S1385>:114' */
            }
            else
            {
                /* Transition: '<S1385>:120' */
                /* Transition: '<S1385>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_MaxTorq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1290>/Poke' */
                /* FunctionCaller: '<S1387>/Function Caller' */
                /* Event: '<S1385>:38' */
                Rte_Call_PokeMTIR_M_MtrB_MaxTorq_PokeMTIR_M_MtrB_MaxTorq
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_e);

                /* End of Outputs for SubSystem: '<S1290>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1385>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_MaxTorq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1290>/Fsft' */
        /* FunctionCaller: '<S1386>/Function Caller' */
        /* Event: '<S1385>:39' */
        Rte_Call_FsftMTIR_M_MtrB_MaxTorq_FsftMTIR_M_MtrB_MaxTorq();

        /* End of Outputs for SubSystem: '<S1290>/Fsft' */
        /* Transition: '<S1385>:113' */
        /* Transition: '<S1385>:115' */
        /* Transition: '<S1385>:114' */
    }

    /* End of Chart: '<S1382>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_MinTorq_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_MinTorq_ErrSts'
     */
    /* Transition: '<S1385>:107' */
    rtb_TmpSignalConversionAtVeC_bw = Rte_Read_VeCRDB_M_PIM_B_MinTorq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__n3);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_MinTorq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1391>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_MinTorq_SigSts_Value(&tmpRead_58);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1388>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_58) & 3U) != 0U)
    {
        /* Transition: '<S1391>:100' */
        /* Transition: '<S1391>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1391>:104' */
        /*  MM */
        if ((((uint32)tmpRead_58) & 4U) != 0U)
        {
            /* Transition: '<S1391>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1391>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1391>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_MinTorq_CallStatus = 3U;

                /* Event: '<S1391>:40' */
                /* Transition: '<S1391>:115' */
                /* Transition: '<S1391>:114' */
            }
        }
        else
        {
            /* Transition: '<S1391>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bw) == 133)
            {
                /* Transition: '<S1391>:95' */
                /* Transition: '<S1391>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_MinTorq_CallStatus = 4U;

                /* Transition: '<S1391>:114' */
            }
            else
            {
                /* Transition: '<S1391>:120' */
                /* Transition: '<S1391>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_MinTorq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1291>/Poke' */
                /* FunctionCaller: '<S1393>/Function Caller' */
                /* Event: '<S1391>:38' */
                Rte_Call_PokeMTIR_M_MtrB_MinTorq_PokeMTIR_M_MtrB_MinTorq
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__n3);

                /* End of Outputs for SubSystem: '<S1291>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1391>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_MinTorq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1291>/Fsft' */
        /* FunctionCaller: '<S1392>/Function Caller' */
        /* Event: '<S1391>:39' */
        Rte_Call_FsftMTIR_M_MtrB_MinTorq_FsftMTIR_M_MtrB_MinTorq();

        /* End of Outputs for SubSystem: '<S1291>/Fsft' */
        /* Transition: '<S1391>:113' */
        /* Transition: '<S1391>:115' */
        /* Transition: '<S1391>:114' */
    }

    /* End of Chart: '<S1388>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMB_MtrMaxCptyTrq_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMB_MtrMaxCptyTrq_ErrSts'
     */
    /* Transition: '<S1391>:107' */
    rtb_TmpSignalConversionAtVe_kkl = Rte_Read_VeCRDB_M_PIMB_MtrMaxCptyTrq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__jy);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMB_MtrMaxCptyTrq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1397>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMB_MtrMaxCptyTrq_SigSts_Value(&tmpRead_59);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1394>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_59) & 3U) != 0U)
    {
        /* Transition: '<S1397>:100' */
        /* Transition: '<S1397>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1397>:104' */
        /*  MM */
        if ((((uint32)tmpRead_59) & 4U) != 0U)
        {
            /* Transition: '<S1397>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1397>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1397>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMB_MtrMaxCptyTrq_CallStatus = 3U;

                /* Event: '<S1397>:40' */
                /* Transition: '<S1397>:115' */
                /* Transition: '<S1397>:114' */
            }
        }
        else
        {
            /* Transition: '<S1397>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_kkl) == 133)
            {
                /* Transition: '<S1397>:95' */
                /* Transition: '<S1397>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMB_MtrMaxCptyTrq_CallStatus = 4U;

                /* Transition: '<S1397>:114' */
            }
            else
            {
                /* Transition: '<S1397>:120' */
                /* Transition: '<S1397>:117' */
                /* Call Poke */
                VeCRDB_y_PIMB_MtrMaxCptyTrq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1292>/Poke' */
                /* FunctionCaller: '<S1399>/Function Caller' */
                /* Event: '<S1397>:38' */
                Rte_Call_PokeMTIR_M_MtrBCapabilityMax_PokeMTIR_M_MtrBCapabilityMax
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__jy,
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_h);

                /* End of Outputs for SubSystem: '<S1292>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1397>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMB_MtrMaxCptyTrq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1292>/Fsft' */
        /* FunctionCaller: '<S1398>/Function Caller' */
        /* Event: '<S1397>:39' */
        Rte_Call_FsftMTIR_M_MtrBCapabilityMax_FsftMTIR_M_MtrBCapabilityMax();

        /* End of Outputs for SubSystem: '<S1292>/Fsft' */
        /* Transition: '<S1397>:113' */
        /* Transition: '<S1397>:115' */
        /* Transition: '<S1397>:114' */
    }

    /* End of Chart: '<S1394>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMB_MtrMinCptyTrq_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMB_MtrMinCptyTrq_ErrSts'
     */
    /* Transition: '<S1397>:107' */
    rtb_TmpSignalConversionAtVeC_kv = Rte_Read_VeCRDB_M_PIMB_MtrMinCptyTrq_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__nr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMB_MtrMinCptyTrq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1403>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMB_MtrMinCptyTrq_SigSts_Value(&tmpRead_5a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1400>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5a) & 3U) != 0U)
    {
        /* Transition: '<S1403>:100' */
        /* Transition: '<S1403>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1403>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5a) & 4U) != 0U)
        {
            /* Transition: '<S1403>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1403>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1403>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMB_MtrMinCptyTrq_CallStatus = 3U;

                /* Event: '<S1403>:40' */
                /* Transition: '<S1403>:115' */
                /* Transition: '<S1403>:114' */
            }
        }
        else
        {
            /* Transition: '<S1403>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_kv) == 133)
            {
                /* Transition: '<S1403>:95' */
                /* Transition: '<S1403>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMB_MtrMinCptyTrq_CallStatus = 4U;

                /* Transition: '<S1403>:114' */
            }
            else
            {
                /* Transition: '<S1403>:120' */
                /* Transition: '<S1403>:117' */
                /* Call Poke */
                VeCRDB_y_PIMB_MtrMinCptyTrq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1293>/Poke' */
                /* FunctionCaller: '<S1405>/Function Caller' */
                /* Event: '<S1403>:38' */
                Rte_Call_PokeMTIR_M_MtrBCapabilityMin_PokeMTIR_M_MtrBCapabilityMin
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__nr,
                     CR2B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_h);

                /* End of Outputs for SubSystem: '<S1293>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1403>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMB_MtrMinCptyTrq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1293>/Fsft' */
        /* FunctionCaller: '<S1404>/Function Caller' */
        /* Event: '<S1403>:39' */
        Rte_Call_FsftMTIR_M_MtrBCapabilityMin_FsftMTIR_M_MtrBCapabilityMin();

        /* End of Outputs for SubSystem: '<S1293>/Fsft' */
        /* Transition: '<S1403>:113' */
        /* Transition: '<S1403>:115' */
        /* Transition: '<S1403>:114' */
    }

    /* End of Chart: '<S1400>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_RPM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_RPM_ErrSts'
     */
    /* Transition: '<S1403>:107' */
    rtb_TmpSignalConversionAtVe_b1m = Rte_Read_VeCRDB_n_PIM_B_RPM_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__iv);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_RPM_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1410>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_RPM_SigSts_Value(&tmpRead_5b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1406>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_PIM_B_RPM_V'
     */
    guard1 = false;
    if ((((uint32)tmpRead_5b) & 3U) != 0U)
    {
        /* Transition: '<S1410>:100' */
        /* Transition: '<S1410>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1410>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5b) & 4U) != 0U)
        {
            /* Transition: '<S1410>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1410>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1410>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_RPM_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1294>/Tmot' */
                /* FunctionCaller: '<S1413>/Function Caller' */
                /* Event: '<S1410>:40' */
                Rte_Call_TmotMSPR_b_MtrB_SpdRaw_TmotMSPR_b_MtrB_SpdRaw();

                /* End of Outputs for SubSystem: '<S1294>/Tmot' */
                /* Transition: '<S1410>:115' */
                /* Transition: '<S1410>:114' */
            }
        }
        else
        {
            /* Transition: '<S1410>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_b1m) == 133)
            {
                /* Transition: '<S1410>:95' */
                /* Transition: '<S1410>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_RPM_CallStatus = 4U;

                /* Transition: '<S1410>:114' */
            }
            else
            {
                /* Transition: '<S1410>:120' */
                (void)Rte_Read_VeCRDB_b_PIM_B_RPM_V_Value(&tmpRead_5r);

                /* Transition: '<S1410>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_RPM_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1294>/Poke' */
                /* FunctionCaller: '<S1412>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_PIM_B_RPM_V'
                 */
                /* Event: '<S1410>:38' */
                Rte_Call_PokeMSPR_n_MtrB_SpdRaw_PokeMSPR_n_MtrB_SpdRaw
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__iv, tmpRead_5r);

                /* End of Outputs for SubSystem: '<S1294>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1410>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_RPM_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1294>/Fsft' */
        /* FunctionCaller: '<S1411>/Function Caller' */
        /* Event: '<S1410>:39' */
        Rte_Call_FsftMSPR_n_MtrB_SpdRaw_FsftMSPR_n_MtrB_SpdRaw();

        /* End of Outputs for SubSystem: '<S1294>/Fsft' */
        /* Transition: '<S1410>:113' */
        /* Transition: '<S1410>:115' */
        /* Transition: '<S1410>:114' */
    }

    /* End of Chart: '<S1406>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_SPT_Stat_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_SPT_Stat_ErrSts'
     */
    /* Transition: '<S1410>:107' */
    rtb_TmpSignalConversionAtVe_dmj = Rte_Read_VeCRDB_y_PIM_B_SPT_Stat_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__bd);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_SPT_Stat_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1418>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_SPT_Stat_SigSts_Value(&tmpRead_5c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1414>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5c) & 3U) != 0U)
    {
        /* Transition: '<S1418>:100' */
        /* Transition: '<S1418>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1418>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5c) & 4U) != 0U)
        {
            /* Transition: '<S1418>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1418>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1418>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_SPT_Stat_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1295>/Tmot' */
                /* FunctionCaller: '<S1421>/Function Caller' */
                /* Event: '<S1418>:40' */
                Rte_Call_TmotINVR_b_MCPB_SPT_State_TmotINVR_b_MCPB_SPT_State();

                /* End of Outputs for SubSystem: '<S1295>/Tmot' */
                /* Transition: '<S1418>:115' */
                /* Transition: '<S1418>:114' */
            }
        }
        else
        {
            /* Transition: '<S1418>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_dmj) == 133)
            {
                /* Transition: '<S1418>:95' */
                /* Transition: '<S1418>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_SPT_Stat_CallStatus = 4U;

                /* Transition: '<S1418>:114' */
            }
            else
            {
                /* Transition: '<S1418>:120' */
                /* Transition: '<S1418>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_SPT_Stat_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1295>/Poke' */
                /* FunctionCaller: '<S1420>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1420>/Data Type Conversion'
                 */
                /* Event: '<S1418>:38' */
                Rte_Call_PokeINVR_e_MCPB_SPT_State_PokeINVR_e_MCPB_SPT_State
                    ((sint16)CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__bd);

                /* End of Outputs for SubSystem: '<S1295>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1418>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_SPT_Stat_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1295>/Fsft' */
        /* FunctionCaller: '<S1419>/Function Caller' */
        /* Event: '<S1418>:39' */
        Rte_Call_FsftINVR_e_MCPB_SPT_State_FsftINVR_e_MCPB_SPT_State();

        /* End of Outputs for SubSystem: '<S1295>/Fsft' */
        /* Transition: '<S1418>:113' */
        /* Transition: '<S1418>:115' */
        /* Transition: '<S1418>:114' */
    }

    /* End of Chart: '<S1414>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_Spd_Lim_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_Spd_Lim_ErrSts'
     */
    /* Transition: '<S1418>:107' */
    rtb_TmpSignalConversionAtVeC_le = Rte_Read_VeCRDB_n_PIM_B_Spd_Lim_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_n_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_Spd_Lim_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1426>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_Spd_Lim_SigSts_Value(&tmpRead_5d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1422>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5d) & 3U) != 0U)
    {
        /* Transition: '<S1426>:100' */
        /* Transition: '<S1426>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1426>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5d) & 4U) != 0U)
        {
            /* Transition: '<S1426>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1426>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1426>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_Spd_Lim_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1296>/Tmot' */
                /* FunctionCaller: '<S1429>/Function Caller' */
                /* Event: '<S1426>:40' */
                Rte_Call_TmotMSPR_n_MaxP2SpdLmt_TmotMSPR_n_MaxP2SpdLmt();

                /* End of Outputs for SubSystem: '<S1296>/Tmot' */
                /* Transition: '<S1426>:115' */
                /* Transition: '<S1426>:114' */
            }
        }
        else
        {
            /* Transition: '<S1426>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_le) == 133)
            {
                /* Transition: '<S1426>:95' */
                /* Transition: '<S1426>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_Spd_Lim_CallStatus = 4U;

                /* Transition: '<S1426>:114' */
            }
            else
            {
                /* Transition: '<S1426>:120' */
                /* Transition: '<S1426>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_Spd_Lim_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1296>/Poke' */
                /* FunctionCaller: '<S1428>/Function Caller' */
                /* Event: '<S1426>:38' */
                Rte_Call_PokeMSPR_n_MaxP2SpdLmt_PokeMSPR_n_MaxP2SpdLmt
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_n_h);

                /* End of Outputs for SubSystem: '<S1296>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1426>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_Spd_Lim_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1296>/Fsft' */
        /* FunctionCaller: '<S1427>/Function Caller' */
        /* Event: '<S1426>:39' */
        Rte_Call_FsftMSPR_n_MaxP2SpdLmt_FsftMSPR_n_MaxP2SpdLmt();

        /* End of Outputs for SubSystem: '<S1296>/Fsft' */
        /* Transition: '<S1426>:113' */
        /* Transition: '<S1426>:115' */
        /* Transition: '<S1426>:114' */
    }

    /* End of Chart: '<S1422>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIMB_TrqAchvdAEMD_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIMB_TrqAchvdAEMD_ErrSts'
     */
    /* Transition: '<S1426>:107' */
    rtb_TmpSignalConversionAtVeC_b3 = Rte_Read_VeCRDB_M_PIMB_TrqAchvdAEMD_Value(
        &CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIMB_TrqAchvdAEMD_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1434>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIMB_TrqAchvdAEMD_SigSts_Value(&tmpRead_5e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1430>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_PIMB_TrqAchdAEMDV'
     */
    guard1 = false;
    if ((((uint32)tmpRead_5e) & 3U) != 0U)
    {
        /* Transition: '<S1434>:100' */
        /* Transition: '<S1434>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1434>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5e) & 4U) != 0U)
        {
            /* Transition: '<S1434>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1434>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1434>:110' */
                /* Call Tmot */
                VeCRDB_y_PIMB_TrqAchvdAEMD_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1297>/Tmot' */
                /* FunctionCaller: '<S1437>/Function Caller' */
                /* Event: '<S1434>:40' */
                Rte_Call_TmotMTIR_b_MtrB_TorqAchieved_AEMD_TmotMTIR_b_MtrB_TorqAchieved_AEMD
                    ();

                /* End of Outputs for SubSystem: '<S1297>/Tmot' */
                /* Transition: '<S1434>:115' */
                /* Transition: '<S1434>:114' */
            }
        }
        else
        {
            /* Transition: '<S1434>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_b3) == 133)
            {
                /* Transition: '<S1434>:95' */
                /* Transition: '<S1434>:116' */
                /* Call Nothing */
                VeCRDB_y_PIMB_TrqAchvdAEMD_CallStatus = 4U;

                /* Transition: '<S1434>:114' */
            }
            else
            {
                /* Transition: '<S1434>:120' */
                (void)Rte_Read_VeCRDB_b_PIMB_TrqAchdAEMDV_Value(&tmpRead_5s);

                /* Transition: '<S1434>:117' */
                /* Call Poke */
                VeCRDB_y_PIMB_TrqAchvdAEMD_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1297>/Poke' */
                /* FunctionCaller: '<S1436>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_PIMB_TrqAchdAEMDV'
                 */
                /* Event: '<S1434>:38' */
                Rte_Call_PokeMTIR_M_MtrB_TorqAchieved_AEMD_PokeMTIR_M_MtrB_TorqAchieved_AEMD
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_M_p, tmpRead_5s);

                /* End of Outputs for SubSystem: '<S1297>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1434>:111' */
        /* Call Fsft */
        VeCRDB_y_PIMB_TrqAchvdAEMD_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1297>/Fsft' */
        /* FunctionCaller: '<S1435>/Function Caller' */
        /* Event: '<S1434>:39' */
        Rte_Call_FsftMTIR_M_MtrB_TorqAchieved_AEMD_FsftMTIR_M_MtrB_TorqAchieved_AEMD
            ();

        /* End of Outputs for SubSystem: '<S1297>/Fsft' */
        /* Transition: '<S1434>:113' */
        /* Transition: '<S1434>:115' */
        /* Transition: '<S1434>:114' */
    }

    /* End of Chart: '<S1430>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PIM_B_Trq_Achvd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PIM_B_Trq_Achvd_ErrSts'
     */
    /* Transition: '<S1434>:107' */
    rtb_TmpSignalConversionAtVeC_bl = Rte_Read_VeCRDB_M_PIM_B_Trq_Achvd_Value
        (&CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__en);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PIM_B_Trq_Achvd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1441>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PIM_B_Trq_Achvd_SigSts_Value(&tmpRead_5f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1438>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_PIM_B_TrqAchvd_V'
     */
    guard1 = false;
    if ((((uint32)tmpRead_5f) & 3U) != 0U)
    {
        /* Transition: '<S1441>:100' */
        /* Transition: '<S1441>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1441>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5f) & 4U) != 0U)
        {
            /* Transition: '<S1441>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1441>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1441>:110' */
                /* Call Tmot */
                VeCRDB_y_PIM_B_Trq_Achvd_CallStatus = 3U;

                /* Event: '<S1441>:40' */
                /* Transition: '<S1441>:115' */
                /* Transition: '<S1441>:114' */
            }
        }
        else
        {
            /* Transition: '<S1441>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bl) == 133)
            {
                /* Transition: '<S1441>:95' */
                /* Transition: '<S1441>:116' */
                /* Call Nothing */
                VeCRDB_y_PIM_B_Trq_Achvd_CallStatus = 4U;

                /* Transition: '<S1441>:114' */
            }
            else
            {
                /* Transition: '<S1441>:120' */
                (void)Rte_Read_VeCRDB_b_PIM_B_TrqAchvd_V_Value(&tmpRead_5t);

                /* Transition: '<S1441>:117' */
                /* Call Poke */
                VeCRDB_y_PIM_B_Trq_Achvd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1298>/Poke' */
                /* FunctionCaller: '<S1443>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_PIM_B_TrqAchvd_V'
                 */
                /* Event: '<S1441>:38' */
                Rte_Call_PokeMTIR_M_MtrB_TorqAchieved_PokeMTIR_M_MtrB_TorqAchieved
                    (CR2B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB__en, tmpRead_5t);

                /* End of Outputs for SubSystem: '<S1298>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1441>:111' */
        /* Call Fsft */
        VeCRDB_y_PIM_B_Trq_Achvd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1298>/Fsft' */
        /* FunctionCaller: '<S1442>/Function Caller' */
        /* Event: '<S1441>:39' */
        Rte_Call_FsftMTIR_M_MtrB_TorqAchieved_FsftMTIR_M_MtrB_TorqAchieved();

        /* End of Outputs for SubSystem: '<S1298>/Fsft' */
        /* Transition: '<S1441>:113' */
        /* Transition: '<S1441>:115' */
        /* Transition: '<S1441>:114' */
    }

    /* End of Chart: '<S1438>/Chart' */
    /* Transition: '<S1441>:107' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, CR2B_BLUEN_CODE) CR2B_BLUEN_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
