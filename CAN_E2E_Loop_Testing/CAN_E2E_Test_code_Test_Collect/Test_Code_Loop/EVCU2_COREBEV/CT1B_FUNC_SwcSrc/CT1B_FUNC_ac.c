/*
 * File: CT1B_FUNC_ac.c
 *
 * Code generated for Simulink model 'CT1B_FUNC_ac'.
 *
 * Model version                  : 1.45
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:32:52 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CT1B_FUNC_ac.h"



uint8 SendCANR_HTAuxPmpMontrngRPM_CT1B_FUNC_ac_Test_1;
boolean SendCANR_RACE_PREP_BATT_LVL_STS_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Sch_PreCondition_Sts_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_ClimateSchd2_Day_Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_Next_Climate_Time_Min_CT1B_FUNC_ac_Test_1;
float32 SendCANR_AirflowRequest_CT1B_FUNC_ac_Test_1;
float32 SendCANR_V2LInstantPwrDrawTrunk_CT1B_FUNC_ac_Test_1;
float32 SendCANR_RACE_PREP_EV_DEAC_TIME_CT1B_FUNC_ac_Test_1;
float32 SendCANR_ClimateSchd2DprtrHrSts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_Next_SchCabin_Temp_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_V2L_Frunk_Status_CT1B_FUNC_ac_Test_1;
float32 SendCANR_NxtExtChargeEndTimeMin_CT1B_FUNC_ac_Test_1;
float32 SendCANR_ElecCoolantHtrPwr_CT1B_FUNC_ac_Test_1;
float32 SendCANR_ClimatSchd2DprtrMinSts_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_DischrgingSysStatusFD3_CT1B_FUNC_ac_Test_1;
float32 SendCANR_Next_Chrg_Strt_Time_Hr_CT1B_FUNC_ac_Test_1;
boolean SendCANR_HTShtOffVlvReq_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Cooperative_Status_CT1B_FUNC_ac_Test_1;
float32 SendCANR_Start_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_2;
float32 SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_1;
float32 SendCANR_End_Time_Min1_Sts_CT1B_FUNC_ac_Test_1;
boolean SendCANR_Enabl_ClimateSchd2_Sts_CT1B_FUNC_ac_Test_1;
boolean SendCANR_HVBatCritCondT_CT1B_FUNC_ac_Test_1;
boolean SendCANR_RACE_PREP_EV_SYS_STS_CT1B_FUNC_ac_Test_1;
float32 SendCANR_ExternalChrgTarget1Sts_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Schedule_Day2_Sts_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_2;
float32 SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_2;
float32 SendCANR_Next_Chrg_End_Time_Min_CT1B_FUNC_ac_Test_1;
float32 SendCANR_V2V_Instant_Power_Draw_CT1B_FUNC_ac_Test_1;
float32 SendCANR_P2P_Timer_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Schedule_Day1_Sts_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Chargeport_Lock_Status_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_PwrSht_Prep_Prt_Cmplt_CT1B_FUNC_ac_Test_1;
float32 SendCANR_NextChrg_Strt_Time_Min_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_2;
uint8 SendCANR_ChargeScheduleType2Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_V2VTotalPowerTimehours_CT1B_FUNC_ac_Test_1;
float32 SendCANR_ClimSchd1Dprtr_Min_Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_Climate_Cabin_Temp1Sts_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_CbnPreconditionReqSts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_ClimateSchd1DprtrHrSts_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_1;
float32 SendCANR_ImmediatChrgTarget2Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorB_RPM_CT1B_FUNC_ac_Test_1;
boolean SendCANR_ChargeUntilFull2_Sts_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Next_Chrg_End_Time_Hr_CT1B_FUNC_ac_Test_1;
float32 SendCANR_NxtExtChargEndTimeHr_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_CompressorState_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Chrg_Schedule_Type1Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorB_TorqueAchieved_CT1B_FUNC_ac_Test_1;
float32 SendCANR_V2LTotalPowerTimehours_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Next_Charge_StartDay_CT1B_FUNC_ac_Test_1;
float32 SendCANR_HeaterCoreInletTemp_CT1B_FUNC_ac_Test_1;
float32 SendCANR_T4_Sensor_Temp_FD3_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_MotorB_InverterState_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorB_Temperature_CT1B_FUNC_ac_Test_1;
float32 SendCANR_V2LTotalPowerTimeminut_CT1B_FUNC_ac_Test_1;
float32 SendCANR_Start_Time_Min1_Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_V2LInstantPwrDrawFrunk_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_V2L_Trunk_Status_CT1B_FUNC_ac_Test_1;
float32 SendCANR_ImmediatChrgTarget1Sts_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_AllowClimateSchd1_Sts_CT1B_FUNC_ac_Test_1;
boolean SendCANR_RACE_PREP_RCE_TYP_STS_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Next_Chrg_EndDay_CT1B_FUNC_ac_Test_1;
float32 SendCANR_Start_Time_Min2_Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_NxtExternlChrgExtnlTgt_CT1B_FUNC_ac_Test_1;
float32 SendCANR_RACE_PRP_HVBTT_SOC_TGT_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_RELSD_FailureSts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_Climate_Cabin_Temp2Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_End_Time_Min2_Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MCPA_Temp_FD3_CT1B_FUNC_ac_Test_2;
float32 SendCANR_MCPA_Temp_FD3_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Racemode_Popup_PT_CT1B_FUNC_ac_Test_1;
float32 SendCANR_NxtExtnlChrgImediatTgt_CT1B_FUNC_ac_Test_1;
float32 SendCANR_RadiatorFanSts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_HTAuxPmpRPMAct_CT1B_FUNC_ac_Test_1;
float32 SendCANR_RACE_PREP_THERMAL_TGT_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorB_DC_Current_CT1B_FUNC_ac_Test_1;
float32 SendCANR_Start_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorB_InverterTemp_CT1B_FUNC_ac_Test_1;
boolean SendCANR_PnC_Reattepmt_Failure_CT1B_FUNC_ac_Test_1;
boolean SendCANR_PnC_Failure_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_RELSD_Status_CT1B_FUNC_ac_Test_1;
boolean SendCANR_ChargeUntilFull1_Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_ExternalChrgTarget2Sts_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Next_Climate_Day_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Launch_Hard_Btn_LED_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_ClimateSchd1_Day_Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_End_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1;
float32 SendCANR_Next_Climate_Time_Hr_CT1B_FUNC_ac_Test_1;
float32 SendCANR_V2VTotalPowerTimeminut_CT1B_FUNC_ac_Test_1;
boolean SendCANR_RACE_PREP_AMBIENT_TMP_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_2;
float32 SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_AllowClimateSchd2_Sts_CT1B_FUNC_ac_Test_1;
boolean SendCANR_Enbl_ClimateSchd1_Sts_CT1B_FUNC_ac_Test_1;
boolean SendCANR_Schedule_Confirmed1_CT1B_FUNC_ac_Test_1;
boolean SendCANR_Schedule_Confirmed2_CT1B_FUNC_ac_Test_1;
float32 SendCANR_End_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_NxtExternalChargEndDay_CT1B_FUNC_ac_Test_1;
float32 SendCANR_RearAirHtrPCBTemp_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_2;
float32 SendCANR_RearAirHtrCoreTemp_CT1B_FUNC_ac_Test_1;
float32 SendCANR_V2V_TotalPowerTimedays_CT1B_FUNC_ac_Test_1;
float32 SendCANR_RearAirHtrPwrCnsAct_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_HVBatCoolantLvlLo_DPT_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_2;
float32 SendCANR_V2L_Total_PwrTimedays_CT1B_FUNC_ac_Test_1;
float32 SendCANR_SchCond_Time_Till_Dep_CT1B_FUNC_ac_Test_1;
float32 SendCANR_ElecClntHtrInletTemp_CT1B_FUNC_ac_Test_1;
float32 SendCANR_MotorB_DC_Voltage_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Turtle_Speed_Limit_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_CabinConditioningSts_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_V2V_Status_CT1B_FUNC_ac_Test_1;
boolean SendCANR_FRfShVlvSts_CT1B_FUNC_ac_Test_1;
uint8 SendCANR_Nxt_ChargeScheduleType_CT1B_FUNC_ac_Test_1;

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Model step function for TID1 */
FUNC(void, CT1B_FUNC_CODE) CT1B_FUNC_FastTEF /* Explicit Task: FastTEF */
{
    float32 tmpRead_17;
    float32 tmpRead_18;
    float32 tmpRead_7;
    float32 tmpRead_8;
    float32 tmpRead_9;
    float32 tmpRead_a;
    float32 tmpRead_s;
    float32 tmpRead_x;
    float32 tmpRead_y;
    sint16 tmpRead_12;
    sint16 tmpRead_13;
    sint16 tmpRead_15;
    sint16 tmpRead_16;
    sint16 tmpRead_3;
    sint16 tmpRead_4;
    sint16 tmpRead_5;
    sint16 tmpRead_6;
    sint16 tmpRead_f;
    sint16 tmpRead_g;
    sint16 tmpRead_h;
    sint16 tmpRead_i;
    sint16 tmpRead_j;
    sint16 tmpRead_k;
    sint16 tmpRead_l;
    sint16 tmpRead_m;
    sint16 tmpRead_n;
    sint16 tmpRead_o;
    sint16 tmpRead_p;
    sint16 tmpRead_q;
    sint16 tmpRead_r;
    sint16 tmpRead_u;
    sint16 tmpRead_v;
    sint16 tmpRead_w;
    TeCITR_e_ChrgScheduleType tmpRead_1;
    TeCITR_e_ChrgScheduleType tmpRead_2;
    TeCITR_e_SchAllow tmpRead_10;
    TeCITR_e_SchAllow tmpRead_z;
    TeSCPR_e_NxtChrg_SchedType tmpRead_t;
    uint8 tmpRead_11;
    uint8 tmpRead_14;
    uint8 tmpRead_d;
    uint8 tmpRead_e;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_19;
    boolean tmpRead_1a;
    boolean tmpRead_b;
    boolean tmpRead_c;

#if Rte_SysCon_VrntCT1B_ReadyStatusEVCU2_VTHReFOTAReadySts

    TeVTHR_e_FOTA_ReadySts tmpRead_1b;

#endif

    TeOBCR_e_ChargeportLock_Sts tmpRead_1c;
    TeSCPR_e_Coop_Status tmpRead_1d;

#if Rte_SysCon_VrntCT1B_EVSEPower_OBCRPEVSEPwr

    float32 tmpRead_1e;

#endif

#if Rte_SysCon_VrntCT1B_EVChargeCurrent_OBCRIChrgCrntReqDelta

    float32 tmpRead_1f;

#endif

#if Rte_SysCon_VrntCT1B_EnergytoBattery_OBCRPPowertoBattery

    float32 tmpRead_1g;

#endif

#if Rte_SysCon_VrntCT1B_TotalBatteryCapacity_OBCRqBatteryAmpHrCap

    float32 tmpRead_1h;

#endif

    TeVTLR_e_DschrgSysSts tmpRead_1i;

#if Rte_SysCon_VrntCT1B_LaunchHardBtnLED_TIMReLaunchMdSwtchLED

    TeTIMR_e_LnchMdLED tmpRead_1j;

#endif

    boolean tmpRead_1k;
    boolean tmpRead_1l;

#if Rte_SysCon_VrntCT1B_RACEPREPAMBIENTTMP_TPCRbRacePrepAmbCheck

    boolean tmpRead_1m;

#endif

#if Rte_SysCon_VrntCT1B_RACEPREPBATTLVLSTS_OBCRbRacePrepBattLvlSts

    boolean tmpRead_1n;

#endif

#if Rte_SysCon_VrntCT1B_RACEPREPEVDEACTIME_TPCRtRacePrepDeacTime

    float32 tmpRead_1o;

#endif

#if Rte_SysCon_VrntCT1B_RACEPREPEVSYSTEMSTATUS_TPCRbRacePrepEVSysStatus

    boolean tmpRead_1p;

#endif

#if Rte_SysCon_VrntCT1B_RACEPREPHVBATTSOCTGT_TPCRTRacePrepSOCTrgt

    float32 tmpRead_1q;

#endif

#if Rte_SysCon_VrntCT1B_RACEPREPRACETYPESTS_TIMReRacePrepRaceTypeSts

    TeTIMR_e_RaceTypeSts tmpRead_1r;

#endif

#if Rte_SysCon_VrntCT1B_RACEPREPTHERMALTGT_TPCRTRacePrepThrmlTrgt

    float32 tmpRead_1s;

#endif

#if Rte_SysCon_VrntCT1B_RIACFANRange_ERERlACFanRange

    float32 tmpRead_1t;

#endif

#if Rte_SysCon_VrntCT1B_RIACFANRange_ERERlACFanRange

    boolean tmpRead_1u;

#endif

#if Rte_SysCon_VrntCT1B_RIAUDIORange_ERERlAudioRange

    float32 tmpRead_1v;

#endif

#if Rte_SysCon_VrntCT1B_RIAUDIORange_ERERlAudioRange

    boolean tmpRead_1w;

#endif

#if Rte_SysCon_VrntCT1B_RIDEFROSTRange_ERERlDefrostRange

    float32 tmpRead_1x;

#endif

#if Rte_SysCon_VrntCT1B_RIDEFROSTRange_ERERlDefrostRange

    boolean tmpRead_1y;

#endif

#if Rte_SysCon_VrntCT1B_RILIGHTSRange_ERERlLightsRange

    float32 tmpRead_1z;

#endif

#if Rte_SysCon_VrntCT1B_RILIGHTSRange_ERERlLightsRange

    boolean tmpRead_20;

#endif

#if Rte_SysCon_VrntCT1B_RIOTHERRange_ERERlOtherRange

    float32 tmpRead_21;

#endif

#if Rte_SysCon_VrntCT1B_RIOTHERRange_ERERlOtherRange

    boolean tmpRead_22;

#endif

#if Rte_SysCon_VrntCT1B_RISEATSWHLRange_ERERlSeatswhlRange

    float32 tmpRead_23;

#endif

#if Rte_SysCon_VrntCT1B_RISEATSWHLRange_ERERlSeatswhlRange

    boolean tmpRead_24;

#endif

#if Rte_SysCon_VrntCT1B_RITOTALRangeAdd_ERERlTotalRange

    float32 tmpRead_25;

#endif

#if Rte_SysCon_VrntCT1B_RITOTALRangeAdd_ERERlTotalRange

    boolean tmpRead_26;

#endif

    float32 tmpRead_2b;
    float32 tmpRead_2d;
    float32 tmpRead_2h;
    float32 tmpRead_2m;
    float32 tmpRead_2o;
    float32 tmpRead_2p;
    float32 tmpRead_2q;
    sint16 tmpRead_28;
    sint16 tmpRead_29;
    sint16 tmpRead_2r;
    TeBRDR_e_BatCltLvlLo tmpRead_2k;
    TePMPR_e_TFSNA tmpRead_2f;
    TeTAIR_e_CompStat tmpRead_2a;
    TeTIMR_e_RaceMode_Popup tmpRead_27;
    TeTPCR_e_SC_WakeUpSt tmpRead_2s;
    boolean tmpRead_2c;
    boolean tmpRead_2e;
    boolean tmpRead_2g;
    boolean tmpRead_2i;
    boolean tmpRead_2j;
    boolean tmpRead_2l;
    boolean tmpRead_2n;

#if Rte_SysCon_VrntCT1B_V2HDischargeCapacity_VTHRPV2HDschgCap

    float32 tmpRead_2t;

#endif

#if Rte_SysCon_VrntCT1B_MotorADCCurrent_INVRIMtrADCCrnt

    float32 tmpRead_2u;

#endif

#if Rte_SysCon_VrntCT1B_MotorADCCurrent_INVRIMtrCDCCrnt

    float32 tmpRead_2v;

#endif

#if Rte_SysCon_VrntCT1B_MotorADCCurrent_INVRIMtrADCCrnt

    boolean tmpRead_2w;

#endif

#if Rte_SysCon_VrntCT1B_MotorADCCurrent_INVRIMtrCDCCrnt

    boolean tmpRead_2x;

#endif

#if Rte_SysCon_VrntCT1B_MotorADCVoltage_INVRUMtrADCVolt

    float32 tmpRead_2y;

#endif

#if Rte_SysCon_VrntCT1B_MotorADCVoltage_INVRUMtrCDCVolt

    float32 tmpRead_2z;

#endif

#if Rte_SysCon_VrntCT1B_MotorADCVoltage_INVRUMtrADCVolt

    boolean tmpRead_30;

#endif

#if Rte_SysCon_VrntCT1B_MotorADCVoltage_INVRUMtrCDCVolt

    boolean tmpRead_31;

#endif

#if Rte_SysCon_VrntCT1B_MotorAInverterState_INVReMtrAInvrtrSt

    TeINVR_e_MtrInvrtrSt tmpRead_32;

#endif

#if Rte_SysCon_VrntCT1B_MotorAInverterState_INVReMtrCInvrtrSt

    TeINVR_e_MtrInvrtrSt tmpRead_33;

#endif

#if Rte_SysCon_VrntCT1B_MotorAInverterTemp_INVRTMtrAInvrtrTemp

    float32 tmpRead_34;

#endif

#if Rte_SysCon_VrntCT1B_MotorAInverterTemp_INVRTMtrCInvrtrTemp

    float32 tmpRead_35;

#endif

#if Rte_SysCon_VrntCT1B_MotorAInverterTemp_INVRTMtrAInvrtrTemp

    boolean tmpRead_36;

#endif

#if Rte_SysCon_VrntCT1B_MotorAInverterTemp_INVRTMtrCInvrtrTemp

    boolean tmpRead_37;

#endif

#if Rte_SysCon_VrntCT1B_MotorARPM_MSPRnMtrASpd

    float32 tmpRead_38;

#endif

#if Rte_SysCon_VrntCT1B_MotorARPM_MSPRnMtrCSpd

    float32 tmpRead_39;

#endif

#if Rte_SysCon_VrntCT1B_MotorARPM_MSPRnMtrASpd

    boolean tmpRead_3a;

#endif

#if Rte_SysCon_VrntCT1B_MotorARPM_MSPRnMtrCSpd

    boolean tmpRead_3b;

#endif

#if Rte_SysCon_VrntCT1B_MotorATorqueAchieved_MTIRMMtrATorqAchieved

    float32 tmpRead_3c;

#endif

#if Rte_SysCon_VrntCT1B_MotorATorqueAchieved_MTIRMMtrCTorqAchieved

    float32 tmpRead_3d;

#endif

#if Rte_SysCon_VrntCT1B_MotorATorqueAchieved_MTIRMMtrATorqAchieved

    boolean tmpRead_3e;

#endif

#if Rte_SysCon_VrntCT1B_MotorATorqueAchieved_MTIRMMtrCTorqAchieved

    boolean tmpRead_3f;

#endif

    float32 tmpRead_3g;
    float32 tmpRead_3i;
    float32 tmpRead_3l;
    float32 tmpRead_3n;
    float32 tmpRead_3p;
    float32 tmpRead_3r;
    float32 tmpRead_3t;
    float32 tmpRead_3u;
    TeINVR_e_MtrInvrtrSt tmpRead_3k;
    boolean tmpRead_3h;
    boolean tmpRead_3j;
    boolean tmpRead_3m;
    boolean tmpRead_3o;
    boolean tmpRead_3q;
    boolean tmpRead_3s;
    boolean tmpRead_3v;

#if Rte_SysCon_VrntCT1B_SystActualChargeLim_OBCRPActChargePowerLim

    float32 tmpRead_3w;

#endif

#if Rte_SysCon_VrntCT1B_SystActualChargeLim_OBCRPActChargePowerLim

    boolean tmpRead_3x;

#endif

#if Rte_SysCon_VrntCT1B_SystActualChargePwr_OBCRPActChargePower

    float32 tmpRead_3y;

#endif

#if Rte_SysCon_VrntCT1B_SystActualChargePwr_OBCRPActChargePower

    boolean tmpRead_3z;

#endif

#if Rte_SysCon_VrntCT1B_V2HInstantPowerDraw_VTHRPV2HInstPwrDraw

    float32 tmpRead_40;

#endif

#if Rte_SysCon_VrntCT1B_V2HReserveBatterySts_VTHRPctV2HResrvBattSts

    float32 tmpRead_41;

#endif

#if Rte_SysCon_VrntCT1B_V2HStatus_VTHReV2HSts

    TeVTHR_e_V2H_Sts tmpRead_42;

#endif

#if Rte_SysCon_VrntCT1B_V2HTotalPowerTimedays_VTHRtV2HTotPwrDays

    float32 tmpRead_43;

#endif

#if Rte_SysCon_VrntCT1B_V2HTotalPowerTimehours_VTHRtV2HTotPwrHrs

    float32 tmpRead_44;

#endif

#if Rte_SysCon_VrntCT1B_V2HTotalPowerTimeminutes_VTHRtV2HTotPwrMin

    float32 tmpRead_45;

#endif

#if Rte_SysCon_VrntCT1B_V2HmodeSts_VTHRbV2HMdSts

    boolean tmpRead_46;

#endif

    float32 tmpRead_48;
    float32 tmpRead_49;
    float32 tmpRead_4a;
    float32 tmpRead_4b;
    float32 tmpRead_4c;
    float32 tmpRead_4e;
    float32 tmpRead_4g;
    float32 tmpRead_4h;
    float32 tmpRead_4i;
    TeVDVR_e_VtoVStatus tmpRead_4f;
    TeVTLR_e_V2L_FrunkSts tmpRead_47;
    TeVTLR_e_V2L_TrunkSts tmpRead_4d;

#if Rte_SysCon_VrntCT1B_EstRangeFuel_ERERlEstRangeFuel

    float32 tmpRead_4j;

#endif

#if Rte_SysCon_VrntCT1B_EstRangeTotal_ERERlEstRangeTotal

    float32 tmpRead_4k;

#endif

    float32 tmpRead_4l;
    float32 tmpRead_4m;
    float32 tmpRead_4n;
    float32 tmpRead_4o;
    boolean tmpRead_4p;

#if Rte_SysCon_VrntCT1B_RELSDFailureSts_SABRyRELSDFailureSts

    uint8 tmpRead_4q;

#endif

#if Rte_SysCon_VrntCT1B_RELSDStatus_SABRyRELSDStatus

    uint8 tmpRead_4r;

#endif

#if Rte_SysCon_VrntCT1B_RELSDTgtTrq_SABRMRELSDTgtTrq

    float32 tmpRead_4s;

#endif

#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrATemp || Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrATemp

    float32 rtb_TmpSignalConversionAtVeINVR;

#endif

#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrCTemp || Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrCTemp

    float32 rtb_TmpSignalConversionAtVeIN_c;

#endif

#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrATemp || Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrATemp

    boolean rtb_TmpSignalConversionAtVeIN_j;

#endif

#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrCTemp || Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrCTemp

    boolean rtb_TmpSignalConversionAtVeIN_g;

#endif

    /* Inport: '<Root>/VeSCPR_b_Sch4_EnblSts' */
    Rte_Read_VeSCPR_b_Sch4_EnblSts_Value(&tmpRead_1a);

    /* Inport: '<Root>/VeSCPR_b_Sch3_EnblSts' */
    Rte_Read_VeSCPR_b_Sch3_EnblSts_Value(&tmpRead_19);

    /* Inport: '<Root>/VeSCPR_T_Sch4_DepTempSts' */
    Rte_Read_VeSCPR_T_Sch4_DepTempSts_Value(&tmpRead_18);

    /* Inport: '<Root>/VeSCPR_T_Sch3_DepTempSts' */
    Rte_Read_VeSCPR_T_Sch3_DepTempSts_Value(&tmpRead_17);

    /* Inport: '<Root>/VeSCPR_K_Sch4_DepMinSts' */
    Rte_Read_VeSCPR_K_Sch4_DepMinSts_Value(&tmpRead_16);

    /* Inport: '<Root>/VeSCPR_K_Sch4_DepHrSts' */
    Rte_Read_VeSCPR_K_Sch4_DepHrSts_Value(&tmpRead_15);

    /* Inport: '<Root>/VeSCPR_K_Sch4_DaySts' */
    Rte_Read_VeSCPR_K_Sch4_DaySts_Value(&tmpRead_14);

    /* Inport: '<Root>/VeSCPR_K_Sch3_DepMinSts' */
    Rte_Read_VeSCPR_K_Sch3_DepMinSts_Value(&tmpRead_13);

    /* Inport: '<Root>/VeSCPR_K_Sch3_DepHrSts' */
    Rte_Read_VeSCPR_K_Sch3_DepHrSts_Value(&tmpRead_12);

    /* Inport: '<Root>/VeSCPR_K_Sch3_DaySts' */
    Rte_Read_VeSCPR_K_Sch3_DaySts_Value(&tmpRead_11);

    /* Inport: '<Root>/VeSCPR_e_Sch4_AllowSts' */
    Rte_Read_VeSCPR_e_Sch4_AllowSts_Value(&tmpRead_10);

    /* Inport: '<Root>/VeSCPR_e_Sch3_AllowSts' */
    Rte_Read_VeSCPR_e_Sch3_AllowSts_Value(&tmpRead_z);

    /* Inport: '<Root>/VeSCPR_Pct_Ext_Next_ImmedSOC_Trgt' */
    Rte_Read_VeSCPR_Pct_Ext_Next_ImmedSOC_Trgt_Value(&tmpRead_y);

    /* Inport: '<Root>/VeSCPR_Pct_Ext_Next_ExtSOC_Trgt' */
    Rte_Read_VeSCPR_Pct_Ext_Next_ExtSOC_Trgt_Value(&tmpRead_x);

    /* Inport: '<Root>/VeSCPR_K_Ext_Next_StopTime_Day' */
    Rte_Read_VeSCPR_K_Ext_Next_StopTime_Day_Value(&tmpRead_w);

    /* Inport: '<Root>/VeSCPR_K_Ext_Next_StopTime_Min' */
    Rte_Read_VeSCPR_K_Ext_Next_StopTime_Min_Value(&tmpRead_v);

    /* Inport: '<Root>/VeSCPR_K_Ext_Next_StopTime_Hr' */
    Rte_Read_VeSCPR_K_Ext_Next_StopTime_Hr_Value(&tmpRead_u);

    /* Inport: '<Root>/VeSCPR_e_Next_ChrgSchType' */
    Rte_Read_VeSCPR_e_Next_ChrgSchType_Value(&tmpRead_t);

    /* Inport: '<Root>/VeSCPR_T_CabinTempSetPt' */
    Rte_Read_VeSCPR_T_CabinTempSetPt_Value(&tmpRead_s);

    /* Inport: '<Root>/VeSCPR_K_Next_Climate_Time_Min' */
    Rte_Read_VeSCPR_K_Next_Climate_Time_Min_Value(&tmpRead_r);

    /* Inport: '<Root>/VeSCPR_K_Next_Climate_Time_Hr' */
    Rte_Read_VeSCPR_K_Next_Climate_Time_Hr_Value(&tmpRead_q);

    /* Inport: '<Root>/VeSCPR_K_Next_Climate_Day' */
    Rte_Read_VeSCPR_K_Next_Climate_Day_Value(&tmpRead_p);

    /* Inport: '<Root>/VeSCPR_K_Next_SchStart_Time_Min' */
    Rte_Read_VeSCPR_K_Next_SchStart_Time_Min_Value(&tmpRead_o);

    /* Inport: '<Root>/VeSCPR_K_Next_SchStart_Time_Hr' */
    Rte_Read_VeSCPR_K_Next_SchStart_Time_Hr_Value(&tmpRead_n);

    /* Inport: '<Root>/VeSCPR_K_Next_Schedule_StartDay' */
    Rte_Read_VeSCPR_K_Next_Schedule_StartDay_Value(&tmpRead_m);

    /* Inport: '<Root>/VeSCPR_K_Next_SchEnd_Time_Min' */
    Rte_Read_VeSCPR_K_Next_SchEnd_Time_Min_Value(&tmpRead_l);

    /* Inport: '<Root>/VeSCPR_K_Next_SchEnd_Time_Hr' */
    Rte_Read_VeSCPR_K_Next_SchEnd_Time_Hr_Value(&tmpRead_k);

    /* Inport: '<Root>/VeSCPR_K_Next_Schedule_EndDay' */
    Rte_Read_VeSCPR_K_Next_Schedule_EndDay_Value(&tmpRead_j);

    /* Inport: '<Root>/VeSCPR_K_Sch2_Start_Time_Min_Sts' */
    Rte_Read_VeSCPR_K_Sch2_Start_Time_Min_Sts_Value(&tmpRead_i);

    /* Inport: '<Root>/VeSCPR_K_Sch1_Start_Time_Min_Sts' */
    Rte_Read_VeSCPR_K_Sch1_Start_Time_Min_Sts_Value(&tmpRead_h);

    /* Inport: '<Root>/VeSCPR_K_Sch2_Start_Time_Hr_Sts' */
    Rte_Read_VeSCPR_K_Sch2_Start_Time_Hr_Sts_Value(&tmpRead_g);

    /* Inport: '<Root>/VeSCPR_K_Sch1_Start_Time_Hr_Sts' */
    Rte_Read_VeSCPR_K_Sch1_Start_Time_Hr_Sts_Value(&tmpRead_f);

    /* Inport: '<Root>/VeSCPR_K_Sch2_Day_Sts' */
    Rte_Read_VeSCPR_K_Sch2_Day_Sts_Value(&tmpRead_e);

    /* Inport: '<Root>/VeSCPR_K_Sch1_Day_Sts' */
    Rte_Read_VeSCPR_K_Sch1_Day_Sts_Value(&tmpRead_d);

    /* Inport: '<Root>/VeSCPR_b_Sch2_Confirmed' */
    Rte_Read_VeSCPR_b_Sch2_Confirmed_Value(&tmpRead_c);

    /* Inport: '<Root>/VeSCPR_b_Sch1_Confirmed' */
    Rte_Read_VeSCPR_b_Sch1_Confirmed_Value(&tmpRead_b);

    /* Inport: '<Root>/VeSCPR_Pct_Sch2_ImmedSOC_Trgt_Sts' */
    Rte_Read_VeSCPR_Pct_Sch2_ImmedSOC_Trgt_Sts_Value(&tmpRead_a);

    /* Inport: '<Root>/VeSCPR_Pct_Sch1_ImmedSOC_Trgt_Sts' */
    Rte_Read_VeSCPR_Pct_Sch1_ImmedSOC_Trgt_Sts_Value(&tmpRead_9);

    /* Inport: '<Root>/VeSCPR_Pct_Sch2_ExtSOC_Trgt_Sts' */
    Rte_Read_VeSCPR_Pct_Sch2_ExtSOC_Trgt_Sts_Value(&tmpRead_8);

    /* Inport: '<Root>/VeSCPR_Pct_Sch1_ExtSOC_Trgt_Sts' */
    Rte_Read_VeSCPR_Pct_Sch1_ExtSOC_Trgt_Sts_Value(&tmpRead_7);

    /* Inport: '<Root>/VeSCPR_K_Sch2_End_Time_Min_Sts' */
    Rte_Read_VeSCPR_K_Sch2_End_Time_Min_Sts_Value(&tmpRead_6);

    /* Inport: '<Root>/VeSCPR_K_Sch1_End_Time_Min_Sts' */
    Rte_Read_VeSCPR_K_Sch1_End_Time_Min_Sts_Value(&tmpRead_5);

    /* Inport: '<Root>/VeSCPR_K_Sch2_End_Time_Hr_Sts' */
    Rte_Read_VeSCPR_K_Sch2_End_Time_Hr_Sts_Value(&tmpRead_4);

    /* Inport: '<Root>/VeSCPR_K_Sch1_End_Time_Hr_Sts' */
    Rte_Read_VeSCPR_K_Sch1_End_Time_Hr_Sts_Value(&tmpRead_3);

    /* Inport: '<Root>/VeSCPR_e_Sch2_ChrgSchType_Sts' */
    Rte_Read_VeSCPR_e_Sch2_ChrgSchType_Sts_Value(&tmpRead_2);

    /* Inport: '<Root>/VeSCPR_e_Sch1_ChrgSchType_Sts' */
    Rte_Read_VeSCPR_e_Sch1_ChrgSchType_Sts_Value(&tmpRead_1);

    /* Inport: '<Root>/VeSCPR_b_Sch2_ChargeUntilFull_Sts' */
    Rte_Read_VeSCPR_b_Sch2_ChargeUntilFull_Sts_Value(&tmpRead_0);

    /* Inport: '<Root>/VeSCPR_b_Sch1_ChargeUntilFull_Sts' */
    Rte_Read_VeSCPR_b_Sch1_ChargeUntilFull_Sts_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_ChargeUntilFull1_Sts' incorporates:
     *  DataTypeConversion: '<S19>/Data Type Conversion'
     */

tmpRead = SendCANR_ChargeUntilFull1_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_ChargeUntilFull1_Sts_SendCANR_ChargeUntilFull1_Sts        (tmpRead);

    /* Outport: '<Root>/SendCANR_ChargeUntilFull1_StsVld' incorporates:
     *  Logic: '<S19>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ChargeUntilFull1_StsVld_SendCANR_ChargeUntilFull1_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_ChargeUntilFull2_Sts' incorporates:
     *  DataTypeConversion: '<S20>/Data Type Conversion'
     */

tmpRead_0 = SendCANR_ChargeUntilFull2_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_ChargeUntilFull2_Sts_SendCANR_ChargeUntilFull2_Sts        (tmpRead_0);

    /* Outport: '<Root>/SendCANR_ChargeUntilFull2_StsVld' incorporates:
     *  Logic: '<S20>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ChargeUntilFull2_StsVld_SendCANR_ChargeUntilFull2_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_Chrg_Schedule_Type1Sts' incorporates:
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     *  Inport: '<Root>/VeSCPR_e_Sch1_ChrgSchType_Sts'
     */
    

tmpRead_1 = SendCANR_Chrg_Schedule_Type1Sts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_Chrg_Schedule_Type1Sts_SendCANR_Chrg_Schedule_Type1Sts        ((uint8)tmpRead_1);

    /* Outport: '<Root>/SendCANR_Chrg_Schedule_Type1StsVld' incorporates:
     *  Logic: '<S21>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Chrg_Schedule_Type1StsVld_SendCANR_Chrg_Schedule_Type1StsVld
        (true);

    /* Outport: '<Root>/SendCANR_ChargeScheduleType2Sts' incorporates:
     *  DataTypeConversion: '<S22>/Data Type Conversion'
     *  Inport: '<Root>/VeSCPR_e_Sch2_ChrgSchType_Sts'
     */
    

tmpRead_2 = SendCANR_ChargeScheduleType2Sts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_ChargeScheduleType2Sts_SendCANR_ChargeScheduleType2Sts        ((uint8)tmpRead_2);

    /* Outport: '<Root>/SendCANR_ChargeScheduleType2StsVld' incorporates:
     *  Logic: '<S22>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ChargeScheduleType2StsVld_SendCANR_ChargeScheduleType2StsVld
        (true);

    /* Outport: '<Root>/SendCANR_End_Time_Hr1_Sts' incorporates:
     *  DataTypeConversion: '<S23>/Data Type Conversion'
     */

tmpRead_3 = SendCANR_End_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_End_Time_Hr1_Sts_SendCANR_End_Time_Hr1_Sts((float32)
        tmpRead_3);

    /* Outport: '<Root>/SendCANR_End_Time_Hr1_StsVld' incorporates:
     *  Logic: '<S23>/Logical Operator'
     */
    Rte_Write_SendCANR_End_Time_Hr1_StsVld_SendCANR_End_Time_Hr1_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_End_Time_Hr2_Sts' incorporates:
     *  DataTypeConversion: '<S24>/Data Type Conversion'
     */

tmpRead_4 = SendCANR_End_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_End_Time_Hr2_Sts_SendCANR_End_Time_Hr2_Sts((float32)
        tmpRead_4);

    /* Outport: '<Root>/SendCANR_End_Time_Hr2_StsVld' incorporates:
     *  Logic: '<S24>/Logical Operator'
     */
    Rte_Write_SendCANR_End_Time_Hr2_StsVld_SendCANR_End_Time_Hr2_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_End_Time_Min1_Sts' incorporates:
     *  DataTypeConversion: '<S25>/Data Type Conversion'
     */

tmpRead_5 = SendCANR_End_Time_Min1_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_End_Time_Min1_Sts_SendCANR_End_Time_Min1_Sts        ((float32)tmpRead_5);

    /* Outport: '<Root>/SendCANR_End_Time_Min1_StsVld' incorporates:
     *  Logic: '<S25>/Logical Operator'
     */
    Rte_Write_SendCANR_End_Time_Min1_StsVld_SendCANR_End_Time_Min1_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_End_Time_Min2_Sts' incorporates:
     *  DataTypeConversion: '<S26>/Data Type Conversion'
     */

tmpRead_6 = SendCANR_End_Time_Min2_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_End_Time_Min2_Sts_SendCANR_End_Time_Min2_Sts        ((float32)tmpRead_6);

    /* Outport: '<Root>/SendCANR_End_Time_Min2_StsVld' incorporates:
     *  Logic: '<S26>/Logical Operator'
     */
    Rte_Write_SendCANR_End_Time_Min2_StsVld_SendCANR_End_Time_Min2_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_ExternalChrgTarget1Sts' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion'
     */
    

tmpRead_7 = SendCANR_ExternalChrgTarget1Sts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_ExternalChrgTarget1Sts_SendCANR_ExternalChrgTarget1Sts        (tmpRead_7);

    /* Outport: '<Root>/SendCANR_ExternalChrgTarget1StsVld' incorporates:
     *  Logic: '<S27>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ExternalChrgTarget1StsVld_SendCANR_ExternalChrgTarget1StsVld
        (true);

    /* Outport: '<Root>/SendCANR_ExternalChrgTarget2Sts' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion'
     */
    

tmpRead_8 = SendCANR_ExternalChrgTarget2Sts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_ExternalChrgTarget2Sts_SendCANR_ExternalChrgTarget2Sts        (tmpRead_8);

    /* Outport: '<Root>/SendCANR_ExternalChrgTarget2StsVld' incorporates:
     *  Logic: '<S28>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ExternalChrgTarget2StsVld_SendCANR_ExternalChrgTarget2StsVld
        (true);

    /* Outport: '<Root>/SendCANR_ImmediatChrgTarget1Sts' incorporates:
     *  DataTypeConversion: '<S29>/Data Type Conversion'
     */
    

tmpRead_9 = SendCANR_ImmediatChrgTarget1Sts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_ImmediatChrgTarget1Sts_SendCANR_ImmediatChrgTarget1Sts        (tmpRead_9);

    /* Outport: '<Root>/SendCANR_ImmediatChrgTarget1StsVld' incorporates:
     *  Logic: '<S29>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ImmediatChrgTarget1StsVld_SendCANR_ImmediatChrgTarget1StsVld
        (true);

    /* Outport: '<Root>/SendCANR_ImmediatChrgTarget2Sts' incorporates:
     *  DataTypeConversion: '<S30>/Data Type Conversion'
     */
    

tmpRead_a = SendCANR_ImmediatChrgTarget2Sts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_ImmediatChrgTarget2Sts_SendCANR_ImmediatChrgTarget2Sts        (tmpRead_a);

    /* Outport: '<Root>/SendCANR_ImmediatChrgTarget2StsVld' incorporates:
     *  Logic: '<S30>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ImmediatChrgTarget2StsVld_SendCANR_ImmediatChrgTarget2StsVld
        (true);

    /* Outport: '<Root>/SendCANR_Schedule_Confirmed1' incorporates:
     *  DataTypeConversion: '<S31>/Data Type Conversion'
     */

tmpRead_b = SendCANR_Schedule_Confirmed1_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Schedule_Confirmed1_SendCANR_Schedule_Confirmed1        (tmpRead_b);

    /* Outport: '<Root>/SendCANR_Schedule_Confirmed1Vld' incorporates:
     *  Logic: '<S31>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Schedule_Confirmed1Vld_SendCANR_Schedule_Confirmed1Vld
        (true);

    /* Outport: '<Root>/SendCANR_Schedule_Confirmed2' incorporates:
     *  DataTypeConversion: '<S32>/Data Type Conversion'
     */

tmpRead_c = SendCANR_Schedule_Confirmed2_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Schedule_Confirmed2_SendCANR_Schedule_Confirmed2        (tmpRead_c);

    /* Outport: '<Root>/SendCANR_Schedule_Confirmed2Vld' incorporates:
     *  Logic: '<S32>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Schedule_Confirmed2Vld_SendCANR_Schedule_Confirmed2Vld
        (true);

    /* Outport: '<Root>/SendCANR_Schedule_Day1_Sts' incorporates:
     *  DataTypeConversion: '<S33>/Data Type Conversion'
     */

tmpRead_d = SendCANR_Schedule_Day1_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Schedule_Day1_Sts_SendCANR_Schedule_Day1_Sts        (tmpRead_d);

    /* Outport: '<Root>/SendCANR_Schedule_Day1_StsVld' incorporates:
     *  Logic: '<S33>/Logical Operator'
     */
    Rte_Write_SendCANR_Schedule_Day1_StsVld_SendCANR_Schedule_Day1_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_Schedule_Day2_Sts' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion'
     */

tmpRead_e = SendCANR_Schedule_Day2_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Schedule_Day2_Sts_SendCANR_Schedule_Day2_Sts        (tmpRead_e);

    /* Outport: '<Root>/SendCANR_Schedule_Day2_StsVld' incorporates:
     *  Logic: '<S34>/Logical Operator'
     */
    Rte_Write_SendCANR_Schedule_Day2_StsVld_SendCANR_Schedule_Day2_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_Start_Time_Hr1_Sts' incorporates:
     *  DataTypeConversion: '<S35>/Data Type Conversion'
     */

tmpRead_f = SendCANR_Start_Time_Hr1_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Start_Time_Hr1_Sts_SendCANR_Start_Time_Hr1_Sts        ((float32)tmpRead_f);

    /* Outport: '<Root>/SendCANR_Start_Time_Hr1_StsVld' incorporates:
     *  Logic: '<S35>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Start_Time_Hr1_StsVld_SendCANR_Start_Time_Hr1_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_Start_Time_Hr2_Sts' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion'
     */

tmpRead_g = SendCANR_Start_Time_Hr2_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Start_Time_Hr2_Sts_SendCANR_Start_Time_Hr2_Sts        ((float32)tmpRead_g);

    /* Outport: '<Root>/SendCANR_Start_Time_Hr2_StsVld' incorporates:
     *  Logic: '<S36>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Start_Time_Hr2_StsVld_SendCANR_Start_Time_Hr2_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_Start_Time_Min1_Sts' incorporates:
     *  DataTypeConversion: '<S37>/Data Type Conversion'
     */

tmpRead_h = SendCANR_Start_Time_Min1_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Start_Time_Min1_Sts_SendCANR_Start_Time_Min1_Sts        ((float32)tmpRead_h);

    /* Outport: '<Root>/SendCANR_Start_Time_Min1_StsVld' incorporates:
     *  Logic: '<S37>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Start_Time_Min1_StsVld_SendCANR_Start_Time_Min1_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_Start_Time_Min2_Sts' incorporates:
     *  DataTypeConversion: '<S38>/Data Type Conversion'
     */

tmpRead_i = SendCANR_Start_Time_Min2_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Start_Time_Min2_Sts_SendCANR_Start_Time_Min2_Sts        ((float32)tmpRead_i);

    /* Outport: '<Root>/SendCANR_Start_Time_Min2_StsVld' incorporates:
     *  Logic: '<S38>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Start_Time_Min2_StsVld_SendCANR_Start_Time_Min2_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_Next_Chrg_EndDay' incorporates:
     *  DataTypeConversion: '<S39>/Data Type Conversion'
     */

tmpRead_j = SendCANR_Next_Chrg_EndDay_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Next_Chrg_EndDay_SendCANR_Next_Chrg_EndDay((uint8)
        tmpRead_j);

    /* Outport: '<Root>/SendCANR_Next_Chrg_EndDayVld' incorporates:
     *  Logic: '<S39>/Logical Operator'
     */
    Rte_Write_SendCANR_Next_Chrg_EndDayVld_SendCANR_Next_Chrg_EndDayVld
        (true);

    /* Outport: '<Root>/SendCANR_Next_Chrg_End_Time_Hr' incorporates:
     *  DataTypeConversion: '<S40>/Data Type Conversion'
     */
    

tmpRead_k = SendCANR_Next_Chrg_End_Time_Hr_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_Next_Chrg_End_Time_Hr_SendCANR_Next_Chrg_End_Time_Hr        ((uint8)tmpRead_k);

    /* Outport: '<Root>/SendCANR_Next_Chrg_End_Time_HrVld' incorporates:
     *  Logic: '<S40>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Next_Chrg_End_Time_HrVld_SendCANR_Next_Chrg_End_Time_HrVld
        (true);

    /* Outport: '<Root>/SendCANR_Next_Chrg_End_Time_Min' incorporates:
     *  DataTypeConversion: '<S41>/Data Type Conversion'
     */
    

tmpRead_l = SendCANR_Next_Chrg_End_Time_Min_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_Next_Chrg_End_Time_Min_SendCANR_Next_Chrg_End_Time_Min        ((float32)tmpRead_l);

    /* Outport: '<Root>/SendCANR_Next_Chrg_End_Time_MinVld' incorporates:
     *  Logic: '<S41>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Next_Chrg_End_Time_MinVld_SendCANR_Next_Chrg_End_Time_MinVld
        (true);

    /* Outport: '<Root>/SendCANR_Next_Charge_StartDay' incorporates:
     *  DataTypeConversion: '<S42>/Data Type Conversion'
     */

tmpRead_m = SendCANR_Next_Charge_StartDay_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Next_Charge_StartDay_SendCANR_Next_Charge_StartDay        ((uint8)tmpRead_m);

    /* Outport: '<Root>/SendCANR_Next_Charge_StartDayVld' incorporates:
     *  Logic: '<S42>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Next_Charge_StartDayVld_SendCANR_Next_Charge_StartDayVld
        (true);

    /* Outport: '<Root>/SendCANR_Next_Chrg_Strt_Time_Hr' incorporates:
     *  DataTypeConversion: '<S43>/Data Type Conversion'
     */
    

tmpRead_n = SendCANR_Next_Chrg_Strt_Time_Hr_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_Next_Chrg_Strt_Time_Hr_SendCANR_Next_Chrg_Strt_Time_Hr        ((float32)tmpRead_n);

    /* Outport: '<Root>/SendCANR_Next_Chrg_Strt_Time_HrVld' incorporates:
     *  Logic: '<S43>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Next_Chrg_Strt_Time_HrVld_SendCANR_Next_Chrg_Strt_Time_HrVld
        (true);

    /* Outport: '<Root>/SendCANR_NextChrg_Strt_Time_Min' incorporates:
     *  DataTypeConversion: '<S44>/Data Type Conversion'
     */
    

tmpRead_o = SendCANR_NextChrg_Strt_Time_Min_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_NextChrg_Strt_Time_Min_SendCANR_NextChrg_Strt_Time_Min        ((float32)tmpRead_o);

    /* Outport: '<Root>/SendCANR_NextChrg_Strt_Time_MinVld' incorporates:
     *  Logic: '<S44>/Logical Operator'
     */
    
        Rte_Write_SendCANR_NextChrg_Strt_Time_MinVld_SendCANR_NextChrg_Strt_Time_MinVld
        (true);

    /* Outport: '<Root>/SendCANR_Next_Climate_Day' incorporates:
     *  DataTypeConversion: '<S45>/Data Type Conversion'
     */

tmpRead_p = SendCANR_Next_Climate_Day_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Next_Climate_Day_SendCANR_Next_Climate_Day((uint8)
        tmpRead_p);

    /* Outport: '<Root>/SendCANR_Next_Climate_DayVld' incorporates:
     *  Logic: '<S45>/Logical Operator'
     */
    Rte_Write_SendCANR_Next_Climate_DayVld_SendCANR_Next_Climate_DayVld
        (true);

    /* Outport: '<Root>/SendCANR_Next_Climate_Time_Hr' incorporates:
     *  DataTypeConversion: '<S46>/Data Type Conversion'
     */

tmpRead_q = SendCANR_Next_Climate_Time_Hr_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Next_Climate_Time_Hr_SendCANR_Next_Climate_Time_Hr        ((float32)tmpRead_q);

    /* Outport: '<Root>/SendCANR_Next_Climate_Time_HrVld' incorporates:
     *  Logic: '<S46>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Next_Climate_Time_HrVld_SendCANR_Next_Climate_Time_HrVld
        (true);

    /* Outport: '<Root>/SendCANR_Next_Climate_Time_Min' incorporates:
     *  DataTypeConversion: '<S47>/Data Type Conversion'
     */
    

tmpRead_r = SendCANR_Next_Climate_Time_Min_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_Next_Climate_Time_Min_SendCANR_Next_Climate_Time_Min        ((float32)tmpRead_r);

    /* Outport: '<Root>/SendCANR_Next_Climate_Time_MinVld' incorporates:
     *  Logic: '<S47>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Next_Climate_Time_MinVld_SendCANR_Next_Climate_Time_MinVld
        (true);

    /* Outport: '<Root>/SendCANR_Next_SchCabin_Temp' incorporates:
     *  DataTypeConversion: '<S48>/Data Type Conversion'
     */

tmpRead_s = SendCANR_Next_SchCabin_Temp_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Next_SchCabin_Temp_SendCANR_Next_SchCabin_Temp        (tmpRead_s);

    /* Outport: '<Root>/SendCANR_Next_SchCabin_TempVld' incorporates:
     *  Logic: '<S48>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Next_SchCabin_TempVld_SendCANR_Next_SchCabin_TempVld
        (true);

    /* Outport: '<Root>/SendCANR_Nxt_ChargeScheduleType' incorporates:
     *  DataTypeConversion: '<S49>/Data Type Conversion'
     *  Inport: '<Root>/VeSCPR_e_Next_ChrgSchType'
     */
    

tmpRead_t = SendCANR_Nxt_ChargeScheduleType_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_Nxt_ChargeScheduleType_SendCANR_Nxt_ChargeScheduleType        ((uint8)tmpRead_t);

    /* Outport: '<Root>/SendCANR_Nxt_ChargeScheduleTypeVld' incorporates:
     *  Logic: '<S49>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Nxt_ChargeScheduleTypeVld_SendCANR_Nxt_ChargeScheduleTypeVld
        (true);

    /* Outport: '<Root>/SendCANR_NxtExtChargEndTimeHr' incorporates:
     *  DataTypeConversion: '<S50>/Data Type Conversion'
     */

tmpRead_u = SendCANR_NxtExtChargEndTimeHr_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_NxtExtChargEndTimeHr_SendCANR_NxtExtChargEndTimeHr        ((float32)tmpRead_u);

    /* Outport: '<Root>/SendCANR_NxtExtChargEndTimeHrVld' incorporates:
     *  Logic: '<S50>/Logical Operator'
     */
    
        Rte_Write_SendCANR_NxtExtChargEndTimeHrVld_SendCANR_NxtExtChargEndTimeHrVld
        (true);

    /* Outport: '<Root>/SendCANR_NxtExtChargeEndTimeMin' incorporates:
     *  DataTypeConversion: '<S51>/Data Type Conversion'
     */
    

tmpRead_v = SendCANR_NxtExtChargeEndTimeMin_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_NxtExtChargeEndTimeMin_SendCANR_NxtExtChargeEndTimeMin        ((float32)tmpRead_v);

    /* Outport: '<Root>/SendCANR_NxtExtChargeEndTimeMinVld' incorporates:
     *  Logic: '<S51>/Logical Operator'
     */
    
        Rte_Write_SendCANR_NxtExtChargeEndTimeMinVld_SendCANR_NxtExtChargeEndTimeMinVld
        (true);

    /* Outport: '<Root>/SendCANR_NxtExternalChargEndDay' incorporates:
     *  DataTypeConversion: '<S52>/Data Type Conversion'
     */
    

tmpRead_w = SendCANR_NxtExternalChargEndDay_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_NxtExternalChargEndDay_SendCANR_NxtExternalChargEndDay        ((uint8)tmpRead_w);

    /* Outport: '<Root>/SendCANR_NxtExternalChargEndDayVld' incorporates:
     *  Logic: '<S52>/Logical Operator'
     */
    
        Rte_Write_SendCANR_NxtExternalChargEndDayVld_SendCANR_NxtExternalChargEndDayVld
        (true);

    /* Outport: '<Root>/SendCANR_NxtExternlChrgExtnlTgt' incorporates:
     *  DataTypeConversion: '<S53>/Data Type Conversion'
     */
    

tmpRead_x = SendCANR_NxtExternlChrgExtnlTgt_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_NxtExternlChrgExtnlTgt_SendCANR_NxtExternlChrgExtnlTgt        (tmpRead_x);

    /* Outport: '<Root>/SendCANR_NxtExternlChrgExtnlTgtVld' incorporates:
     *  Logic: '<S53>/Logical Operator'
     */
    
        Rte_Write_SendCANR_NxtExternlChrgExtnlTgtVld_SendCANR_NxtExternlChrgExtnlTgtVld
        (true);

    /* Outport: '<Root>/SendCANR_NxtExtnlChrgImediatTgt' incorporates:
     *  DataTypeConversion: '<S54>/Data Type Conversion'
     */
    

tmpRead_y = SendCANR_NxtExtnlChrgImediatTgt_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_NxtExtnlChrgImediatTgt_SendCANR_NxtExtnlChrgImediatTgt        (tmpRead_y);

    /* Outport: '<Root>/SendCANR_NxtExtnlChrgImediatTgtVld' incorporates:
     *  Logic: '<S54>/Logical Operator'
     */
    
        Rte_Write_SendCANR_NxtExtnlChrgImediatTgtVld_SendCANR_NxtExtnlChrgImediatTgtVld
        (true);

    /* Outport: '<Root>/SendCANR_AllowClimateSchd1_Sts' incorporates:
     *  DataTypeConversion: '<S55>/Data Type Conversion'
     *  Inport: '<Root>/VeSCPR_e_Sch3_AllowSts'
     */
    

tmpRead_z = SendCANR_AllowClimateSchd1_Sts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_AllowClimateSchd1_Sts_SendCANR_AllowClimateSchd1_Sts        ((uint8)tmpRead_z);

    /* Outport: '<Root>/SendCANR_AllowClimateSchd1_StsVld' incorporates:
     *  Logic: '<S55>/Logical Operator'
     */
    
        Rte_Write_SendCANR_AllowClimateSchd1_StsVld_SendCANR_AllowClimateSchd1_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_AllowClimateSchd2_Sts' incorporates:
     *  DataTypeConversion: '<S56>/Data Type Conversion'
     *  Inport: '<Root>/VeSCPR_e_Sch4_AllowSts'
     */
    

tmpRead_10 = SendCANR_AllowClimateSchd2_Sts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_AllowClimateSchd2_Sts_SendCANR_AllowClimateSchd2_Sts        ((uint8)tmpRead_10);

    /* Outport: '<Root>/SendCANR_AllowClimateSchd2_StsVld' incorporates:
     *  Logic: '<S56>/Logical Operator'
     */
    
        Rte_Write_SendCANR_AllowClimateSchd2_StsVld_SendCANR_AllowClimateSchd2_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_ClimateSchd1_Day_Sts' incorporates:
     *  DataTypeConversion: '<S57>/Data Type Conversion'
     */

tmpRead_11 = SendCANR_ClimateSchd1_Day_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_ClimateSchd1_Day_Sts_SendCANR_ClimateSchd1_Day_Sts        (tmpRead_11);

    /* Outport: '<Root>/SendCANR_ClimateSchd1_Day_StsVld' incorporates:
     *  Logic: '<S57>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ClimateSchd1_Day_StsVld_SendCANR_ClimateSchd1_Day_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_ClimateSchd1DprtrHrSts' incorporates:
     *  DataTypeConversion: '<S58>/Data Type Conversion'
     */
    

tmpRead_12 = SendCANR_ClimateSchd1DprtrHrSts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_ClimateSchd1DprtrHrSts_SendCANR_ClimateSchd1DprtrHrSts        ((float32)tmpRead_12);

    /* Outport: '<Root>/SendCANR_ClimateSchd1DprtrHrStsVld' incorporates:
     *  Logic: '<S58>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ClimateSchd1DprtrHrStsVld_SendCANR_ClimateSchd1DprtrHrStsVld
        (true);

    /* Outport: '<Root>/SendCANR_ClimSchd1Dprtr_Min_Sts' incorporates:
     *  DataTypeConversion: '<S59>/Data Type Conversion'
     */
    

tmpRead_13 = SendCANR_ClimSchd1Dprtr_Min_Sts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_ClimSchd1Dprtr_Min_Sts_SendCANR_ClimSchd1Dprtr_Min_Sts        ((float32)tmpRead_13);

    /* Outport: '<Root>/SendCANR_ClimSchd1Dprtr_Min_StsVld' incorporates:
     *  Logic: '<S59>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ClimSchd1Dprtr_Min_StsVld_SendCANR_ClimSchd1Dprtr_Min_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_ClimateSchd2_Day_Sts' incorporates:
     *  DataTypeConversion: '<S60>/Data Type Conversion'
     */

tmpRead_14 = SendCANR_ClimateSchd2_Day_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_ClimateSchd2_Day_Sts_SendCANR_ClimateSchd2_Day_Sts        (tmpRead_14);

    /* Outport: '<Root>/SendCANR_ClimateSchd2_Day_StsVld' incorporates:
     *  Logic: '<S60>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ClimateSchd2_Day_StsVld_SendCANR_ClimateSchd2_Day_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_ClimateSchd2DprtrHrSts' incorporates:
     *  DataTypeConversion: '<S61>/Data Type Conversion'
     */
    

tmpRead_15 = SendCANR_ClimateSchd2DprtrHrSts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_ClimateSchd2DprtrHrSts_SendCANR_ClimateSchd2DprtrHrSts        ((float32)tmpRead_15);

    /* Outport: '<Root>/SendCANR_ClimateSchd2DprtrHrStsVld' incorporates:
     *  Logic: '<S61>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ClimateSchd2DprtrHrStsVld_SendCANR_ClimateSchd2DprtrHrStsVld
        (true);

    /* Outport: '<Root>/SendCANR_ClimatSchd2DprtrMinSts' incorporates:
     *  DataTypeConversion: '<S62>/Data Type Conversion'
     */
    

tmpRead_16 = SendCANR_ClimatSchd2DprtrMinSts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_ClimatSchd2DprtrMinSts_SendCANR_ClimatSchd2DprtrMinSts        ((float32)tmpRead_16);

    /* Outport: '<Root>/SendCANR_ClimatSchd2DprtrMinStsVld' incorporates:
     *  Logic: '<S62>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ClimatSchd2DprtrMinStsVld_SendCANR_ClimatSchd2DprtrMinStsVld
        (true);

    /* Outport: '<Root>/SendCANR_Climate_Cabin_Temp1Sts' incorporates:
     *  DataTypeConversion: '<S63>/Data Type Conversion'
     */
    

tmpRead_17 = SendCANR_Climate_Cabin_Temp1Sts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_Climate_Cabin_Temp1Sts_SendCANR_Climate_Cabin_Temp1Sts        (tmpRead_17);

    /* Outport: '<Root>/SendCANR_Climate_Cabin_Temp1StsVld' incorporates:
     *  Logic: '<S63>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Climate_Cabin_Temp1StsVld_SendCANR_Climate_Cabin_Temp1StsVld
        (true);

    /* Outport: '<Root>/SendCANR_Climate_Cabin_Temp2Sts' incorporates:
     *  DataTypeConversion: '<S64>/Data Type Conversion'
     */
    

tmpRead_18 = SendCANR_Climate_Cabin_Temp2Sts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_Climate_Cabin_Temp2Sts_SendCANR_Climate_Cabin_Temp2Sts        (tmpRead_18);

    /* Outport: '<Root>/SendCANR_Climate_Cabin_Temp2StsVld' incorporates:
     *  Logic: '<S64>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Climate_Cabin_Temp2StsVld_SendCANR_Climate_Cabin_Temp2StsVld
        (true);

    /* Outport: '<Root>/SendCANR_Enbl_ClimateSchd1_Sts' incorporates:
     *  DataTypeConversion: '<S65>/Data Type Conversion'
     */
    

tmpRead_19 = SendCANR_Enbl_ClimateSchd1_Sts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_Enbl_ClimateSchd1_Sts_SendCANR_Enbl_ClimateSchd1_Sts        (tmpRead_19);

    /* Outport: '<Root>/SendCANR_Enbl_ClimateSchd1_StsVld' incorporates:
     *  Logic: '<S65>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Enbl_ClimateSchd1_StsVld_SendCANR_Enbl_ClimateSchd1_StsVld
        (true);

    /* Outport: '<Root>/SendCANR_Enabl_ClimateSchd2_Sts' incorporates:
     *  DataTypeConversion: '<S66>/Data Type Conversion'
     */
    

tmpRead_1a = SendCANR_Enabl_ClimateSchd2_Sts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_Enabl_ClimateSchd2_Sts_SendCANR_Enabl_ClimateSchd2_Sts        (tmpRead_1a);

    /* Outport: '<Root>/SendCANR_Enabl_ClimateSchd2_StsVld' incorporates:
     *  Logic: '<S66>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Enabl_ClimateSchd2_StsVld_SendCANR_Enabl_ClimateSchd2_StsVld
        (true);

    /* DataTypeConversion: '<S67>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTHR_e_FOTA_ReadySts'
     *  Logic: '<S68>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_ReadyStatusEVCU2_VTHReFOTAReadySts

    Rte_Read_VeVTHR_e_FOTA_ReadySts_Value(&tmpRead_1b);

    /* Outport: '<Root>/SendCANR_Ready_Status_EVCU2' incorporates:
     *  Inport: '<Root>/VeVTHR_e_FOTA_ReadySts'
     */
    Rte_Write_SendCANR_Ready_Status_EVCU2_SendCANR_Ready_Status_EVCU2
        ((uint8)tmpRead_1b);

    /* Outport: '<Root>/SendCANR_Ready_Status_EVCU2Vld' */
    
        Rte_Write_SendCANR_Ready_Status_EVCU2Vld_SendCANR_Ready_Status_EVCU2Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S67>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSCPR_e_CoopChrgStatus' */
    Rte_Read_VeSCPR_e_CoopChrgStatus_Value(&tmpRead_1d);

    /* Inport: '<Root>/VeOBCR_e_ChargeportLock_Sts' */
    Rte_Read_VeOBCR_e_ChargeportLock_Sts_Value(&tmpRead_1c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_Chargeport_Lock_Status' incorporates:
     *  DataTypeConversion: '<S69>/Data Type Conversion'
     *  Inport: '<Root>/VeOBCR_e_ChargeportLock_Sts'
     */
    

tmpRead_1c = SendCANR_Chargeport_Lock_Status_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_Chargeport_Lock_Status_SendCANR_Chargeport_Lock_Status        ((uint8)tmpRead_1c);

    /* Outport: '<Root>/SendCANR_Chargeport_Lock_StatusVld' incorporates:
     *  Logic: '<S69>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Chargeport_Lock_StatusVld_SendCANR_Chargeport_Lock_StatusVld
        (true);

    /* Outport: '<Root>/SendCANR_Cooperative_Status' incorporates:
     *  DataTypeConversion: '<S70>/Data Type Conversion'
     *  Inport: '<Root>/VeSCPR_e_CoopChrgStatus'
     */

tmpRead_1d = SendCANR_Cooperative_Status_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Cooperative_Status_SendCANR_Cooperative_Status        ((uint8)tmpRead_1d);

    /* Outport: '<Root>/SendCANR_Cooperative_StatusVld' incorporates:
     *  Logic: '<S70>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Cooperative_StatusVld_SendCANR_Cooperative_StatusVld
        (true);

    /* DataTypeConversion: '<S73>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeOBCR_P_EVSEPwr'
     *  Logic: '<S74>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_EVSEPower_OBCRPEVSEPwr

    Rte_Read_VeOBCR_P_EVSEPwr_Value(&tmpRead_1e);

    /* Outport: '<Root>/SendCANR_EVSE_Power' incorporates:
     *  Inport: '<Root>/VeOBCR_P_EVSEPwr'
     */
    Rte_Write_SendCANR_EVSE_Power_SendCANR_EVSE_Power(tmpRead_1e);

    /* Outport: '<Root>/SendCANR_EVSE_PowerVld' */
    Rte_Write_SendCANR_EVSE_PowerVld_SendCANR_EVSE_PowerVld(false);

#endif

    /* End of DataTypeConversion: '<S73>/Data Type Conversion' */

    /* DataTypeConversion: '<S71>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeOBCR_I_ChrgCrntReqDelta'
     *  Logic: '<S72>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_EVChargeCurrent_OBCRIChrgCrntReqDelta

    Rte_Read_VeOBCR_I_ChrgCrntReqDelta_Value(&tmpRead_1f);

    /* Outport: '<Root>/SendCANR_EV_Charge_Current' incorporates:
     *  Inport: '<Root>/VeOBCR_I_ChrgCrntReqDelta'
     */
    Rte_Write_SendCANR_EV_Charge_Current_SendCANR_EV_Charge_Current
        (tmpRead_1f);

    /* Outport: '<Root>/SendCANR_EV_Charge_CurrentVld' */
    Rte_Write_SendCANR_EV_Charge_CurrentVld_SendCANR_EV_Charge_CurrentVld
        (false);

#endif

    /* End of DataTypeConversion: '<S71>/Data Type Conversion' */

    /* DataTypeConversion: '<S75>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeOBCR_P_PowertoBattery'
     *  Logic: '<S76>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_EnergytoBattery_OBCRPPowertoBattery

    Rte_Read_VeOBCR_P_PowertoBattery_Value(&tmpRead_1g);

    /* Outport: '<Root>/SendCANR_Energy_to_Battery' incorporates:
     *  Inport: '<Root>/VeOBCR_P_PowertoBattery'
     */
    Rte_Write_SendCANR_Energy_to_Battery_SendCANR_Energy_to_Battery
        (tmpRead_1g);

    /* Outport: '<Root>/SendCANR_Energy_to_BatteryVld' */
    Rte_Write_SendCANR_Energy_to_BatteryVld_SendCANR_Energy_to_BatteryVld
        (false);

#endif

    /* End of DataTypeConversion: '<S75>/Data Type Conversion' */

    /* DataTypeConversion: '<S77>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeOBCR_q_BatteryAmpHrCap'
     *  Logic: '<S78>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_TotalBatteryCapacity_OBCRqBatteryAmpHrCap

    Rte_Read_VeOBCR_q_BatteryAmpHrCap_Value(&tmpRead_1h);

    /* Outport: '<Root>/SendCANR_Total_Battery_Capacity' incorporates:
     *  Inport: '<Root>/VeOBCR_q_BatteryAmpHrCap'
     */
    
        Rte_Write_SendCANR_Total_Battery_Capacity_SendCANR_Total_Battery_Capacity
        (tmpRead_1h);

    /* Outport: '<Root>/SendCANR_Total_Battery_CapacityVld' */
    
        Rte_Write_SendCANR_Total_Battery_CapacityVld_SendCANR_Total_Battery_CapacityVld
        (false);

#endif

    /* End of DataTypeConversion: '<S77>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeVTLR_e_DschrgSysSts' */
    Rte_Read_VeVTLR_e_DschrgSysSts_Value(&tmpRead_1i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_DischrgingSysStatusFD3' incorporates:
     *  DataTypeConversion: '<S79>/Data Type Conversion'
     *  Inport: '<Root>/VeVTLR_e_DschrgSysSts'
     */
    

tmpRead_1i = SendCANR_DischrgingSysStatusFD3_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_DischrgingSysStatusFD3_SendCANR_DischrgingSysStatusFD3        ((uint8)tmpRead_1i);

    /* Outport: '<Root>/SendCANR_DischrgingSysStatusFD3Vld' incorporates:
     *  Logic: '<S79>/Logical Operator'
     */
    
        Rte_Write_SendCANR_DischrgingSysStatusFD3Vld_SendCANR_DischrgingSysStatusFD3Vld
        (true);

    /* DataTypeConversion: '<S80>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeTIMR_e_LaunchMdSwtchLED'
     *  Logic: '<S81>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_LaunchHardBtnLED_TIMReLaunchMdSwtchLED

    Rte_Read_VeTIMR_e_LaunchMdSwtchLED_Value(&tmpRead_1j);

    /* Outport: '<Root>/SendCANR_Launch_Hard_Btn_LED' incorporates:
     *  Inport: '<Root>/VeTIMR_e_LaunchMdSwtchLED'
     */

tmpRead_1j = SendCANR_Launch_Hard_Btn_LED_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Launch_Hard_Btn_LED_SendCANR_Launch_Hard_Btn_LED        ((uint8)tmpRead_1j);

    /* Outport: '<Root>/SendCANR_Launch_Hard_Btn_LED_Vld' */
    
        Rte_Write_SendCANR_Launch_Hard_Btn_LED_Vld_SendCANR_Launch_Hard_Btn_LED_Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S80>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeOBCR_b_PnCRetryFail' */
    Rte_Read_VeOBCR_b_PnCRetryFail_Value(&tmpRead_1l);

    /* Inport: '<Root>/VeOBCR_b_PnCFailure' */
    Rte_Read_VeOBCR_b_PnCFailure_Value(&tmpRead_1k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_PnC_Failure' incorporates:
     *  DataTypeConversion: '<S82>/Data Type Conversion'
     */

tmpRead_1k = SendCANR_PnC_Failure_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_PnC_Failure_SendCANR_PnC_Failure(tmpRead_1k);

    /* Outport: '<Root>/SendCANR_PnC_FailureVld' incorporates:
     *  Logic: '<S82>/Logical Operator'
     */
    Rte_Write_SendCANR_PnC_FailureVld_SendCANR_PnC_FailureVld(true);

    /* Outport: '<Root>/SendCANR_PnC_Reattepmt_Failure' incorporates:
     *  DataTypeConversion: '<S83>/Data Type Conversion'
     */
    

tmpRead_1l = SendCANR_PnC_Reattepmt_Failure_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_PnC_Reattepmt_Failure_SendCANR_PnC_Reattepmt_Failure        (tmpRead_1l);

    /* Outport: '<Root>/SendCANR_PnC_Reattepmt_FailureVld' incorporates:
     *  Logic: '<S83>/Logical Operator'
     */
    
        Rte_Write_SendCANR_PnC_Reattepmt_FailureVld_SendCANR_PnC_Reattepmt_FailureVld
        (true);

    /* DataTypeConversion: '<S84>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeTPCR_b_RacePrepAmbCheck'
     *  Logic: '<S85>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RACEPREPAMBIENTTMP_TPCRbRacePrepAmbCheck

    Rte_Read_VeTPCR_b_RacePrepAmbCheck_Value(&tmpRead_1m);

    /* Outport: '<Root>/SendCANR_RACE_PREP_AMBIENT_TMP' incorporates:
     *  Inport: '<Root>/VeTPCR_b_RacePrepAmbCheck'
     */
    

tmpRead_1m = SendCANR_RACE_PREP_AMBIENT_TMP_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_RACE_PREP_AMBIENT_TMP_SendCANR_RACE_PREP_AMBIENT_TMP        (tmpRead_1m);

    /* Outport: '<Root>/SendCANR_RACE_PREP_AMBIENT_TMP_Vld' */
    
        Rte_Write_SendCANR_RACE_PREP_AMBIENT_TMP_Vld_SendCANR_RACE_PREP_AMBIENT_TMP_Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S84>/Data Type Conversion' */

    /* DataTypeConversion: '<S86>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeOBCR_b_RacePrepBattLvlSts'
     *  Logic: '<S87>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RACEPREPBATTLVLSTS_OBCRbRacePrepBattLvlSts

    Rte_Read_VeOBCR_b_RacePrepBattLvlSts_Value(&tmpRead_1n);

    /* Outport: '<Root>/SendCANR_RACE_PREP_BATT_LVL_STS' incorporates:
     *  Inport: '<Root>/VeOBCR_b_RacePrepBattLvlSts'
     */
    

tmpRead_1n = SendCANR_RACE_PREP_BATT_LVL_STS_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_RACE_PREP_BATT_LVL_STS_SendCANR_RACE_PREP_BATT_LVL_STS        (tmpRead_1n);

    /* Outport: '<Root>/SendCANR_RACE_PREP_BATT_LVL_STS_Vld' */
    
        Rte_Write_SendCANR_RACE_PREP_BATT_LVL_STS_Vld_SendCANR_RACE_PREP_BATT_LVL_STS_Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S86>/Data Type Conversion' */

    /* DataTypeConversion: '<S88>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeTPCR_t_RacePrep_DeacTime'
     *  Logic: '<S89>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RACEPREPEVDEACTIME_TPCRtRacePrepDeacTime

    Rte_Read_VeTPCR_t_RacePrep_DeacTime_Value(&tmpRead_1o);

    /* Outport: '<Root>/SendCANR_RACE_PREP_EV_DEAC_TIME' incorporates:
     *  Inport: '<Root>/VeTPCR_t_RacePrep_DeacTime'
     */
    

tmpRead_1o = SendCANR_RACE_PREP_EV_DEAC_TIME_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_RACE_PREP_EV_DEAC_TIME_SendCANR_RACE_PREP_EV_DEAC_TIME        (tmpRead_1o);

    /* Outport: '<Root>/SendCANR_RACE_PREP_EV_DEAC_TIME_Vld' */
    
        Rte_Write_SendCANR_RACE_PREP_EV_DEAC_TIME_Vld_SendCANR_RACE_PREP_EV_DEAC_TIME_Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S88>/Data Type Conversion' */

    /* DataTypeConversion: '<S90>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeTPCR_b_RacePrepEVSysStatus'
     *  Logic: '<S91>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RACEPREPEVSYSTEMSTATUS_TPCRbRacePrepEVSysStatus

    Rte_Read_VeTPCR_b_RacePrepEVSysStatus_Value(&tmpRead_1p);

    /* Outport: '<Root>/SendCANR_RACE_PREP_EV_SYS_STS' incorporates:
     *  Inport: '<Root>/VeTPCR_b_RacePrepEVSysStatus'
     */

tmpRead_1p = SendCANR_RACE_PREP_EV_SYS_STS_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_RACE_PREP_EV_SYS_STS_SendCANR_RACE_PREP_EV_SYS_STS        (tmpRead_1p);

    /* Outport: '<Root>/SendCANR_RACE_PREP_EV_SYS_STS_Vld' */
    
        Rte_Write_SendCANR_RACE_PREP_EV_SYS_STS_Vld_SendCANR_RACE_PREP_EV_SYS_STS_Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S90>/Data Type Conversion' */

    /* DataTypeConversion: '<S92>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeTPCR_T_RacePrep_SOCTrgt'
     *  Logic: '<S93>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RACEPREPHVBATTSOCTGT_TPCRTRacePrepSOCTrgt

    Rte_Read_VeTPCR_T_RacePrep_SOCTrgt_Value(&tmpRead_1q);

    /* Outport: '<Root>/SendCANR_RACE_PRP_HVBTT_SOC_TGT' incorporates:
     *  Inport: '<Root>/VeTPCR_T_RacePrep_SOCTrgt'
     */
    

tmpRead_1q = SendCANR_RACE_PRP_HVBTT_SOC_TGT_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_RACE_PRP_HVBTT_SOC_TGT_SendCANR_RACE_PRP_HVBTT_SOC_TGT        (tmpRead_1q);

    /* Outport: '<Root>/SendCANR_RACE_PRP_HVBTT_SOC_TGT_Vld' */
    
        Rte_Write_SendCANR_RACE_PRP_HVBTT_SOC_TGT_Vld_SendCANR_RACE_PRP_HVBTT_SOC_TGT_Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S92>/Data Type Conversion' */

    /* DataTypeConversion: '<S94>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RacePrepRaceTypeSts'
     *  Logic: '<S95>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RACEPREPRACETYPESTS_TIMReRacePrepRaceTypeSts

    Rte_Read_VeTIMR_e_RacePrepRaceTypeSts_Value(&tmpRead_1r);

    /* Outport: '<Root>/SendCANR_RACE_PREP_RCE_TYP_STS' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RacePrepRaceTypeSts'
     */
    

tmpRead_1r = SendCANR_RACE_PREP_RCE_TYP_STS_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_RACE_PREP_RCE_TYP_STS_SendCANR_RACE_PREP_RCE_TYP_STS        (((sint32)tmpRead_1r) != 0);

    /* Outport: '<Root>/SendCANR_RACE_PREP_RCE_TYP_STS_Vld' */
    
        Rte_Write_SendCANR_RACE_PREP_RCE_TYP_STS_Vld_SendCANR_RACE_PREP_RCE_TYP_STS_Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S94>/Data Type Conversion' */

    /* DataTypeConversion: '<S96>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeTPCR_T_RacePrep_ThrmlTrgt'
     *  Logic: '<S97>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RACEPREPTHERMALTGT_TPCRTRacePrepThrmlTrgt

    Rte_Read_VeTPCR_T_RacePrep_ThrmlTrgt_Value(&tmpRead_1s);

    /* Outport: '<Root>/SendCANR_RACE_PREP_THERMAL_TGT' incorporates:
     *  Inport: '<Root>/VeTPCR_T_RacePrep_ThrmlTrgt'
     */
    

tmpRead_1s = SendCANR_RACE_PREP_THERMAL_TGT_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_RACE_PREP_THERMAL_TGT_SendCANR_RACE_PREP_THERMAL_TGT        (tmpRead_1s);

    /* Outport: '<Root>/SendCANR_RACE_PREP_THERMAL_TGT_Vld' */
    
        Rte_Write_SendCANR_RACE_PREP_THERMAL_TGT_Vld_SendCANR_RACE_PREP_THERMAL_TGT_Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S96>/Data Type Conversion' */

    /* DataTypeConversion: '<S98>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeERER_b_ACFanRange_SNA'
     *  Inport: '<Root>/VeERER_l_AC_Fan_Range'
     *  Logic: '<S99>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RIACFANRange_ERERlACFanRange

    Rte_Read_VeERER_l_AC_Fan_Range_Value(&tmpRead_1t);

    /* Outport: '<Root>/SendCANR_RI_AC_FAN_Range' incorporates:
     *  Inport: '<Root>/VeERER_l_AC_Fan_Range'
     */
    Rte_Write_SendCANR_RI_AC_FAN_Range_SendCANR_RI_AC_FAN_Range(tmpRead_1t);
    Rte_Read_VeERER_b_ACFanRange_SNA_Value(&tmpRead_1u);

    /* Outport: '<Root>/SendCANR_RI_AC_FAN_RangeVld' incorporates:
     *  Inport: '<Root>/VeERER_b_ACFanRange_SNA'
     */
    Rte_Write_SendCANR_RI_AC_FAN_RangeVld_SendCANR_RI_AC_FAN_RangeVld
        (!tmpRead_1u);

#endif

    /* End of DataTypeConversion: '<S98>/Data Type Conversion' */

    /* DataTypeConversion: '<S100>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeERER_b_AudioRange_SNA'
     *  Inport: '<Root>/VeERER_l_Audio_Range'
     *  Logic: '<S101>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RIAUDIORange_ERERlAudioRange

    Rte_Read_VeERER_l_Audio_Range_Value(&tmpRead_1v);

    /* Outport: '<Root>/SendCANR_RI_AUDIO_Range' incorporates:
     *  Inport: '<Root>/VeERER_l_Audio_Range'
     */
    Rte_Write_SendCANR_RI_AUDIO_Range_SendCANR_RI_AUDIO_Range(tmpRead_1v);
    Rte_Read_VeERER_b_AudioRange_SNA_Value(&tmpRead_1w);

    /* Outport: '<Root>/SendCANR_RI_AUDIO_RangeVld' incorporates:
     *  Inport: '<Root>/VeERER_b_AudioRange_SNA'
     */
    Rte_Write_SendCANR_RI_AUDIO_RangeVld_SendCANR_RI_AUDIO_RangeVld
        (!tmpRead_1w);

#endif

    /* End of DataTypeConversion: '<S100>/Data Type Conversion' */

    /* DataTypeConversion: '<S102>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeERER_b_DefrostRange_SNA'
     *  Inport: '<Root>/VeERER_l_Defrost_Range'
     *  Logic: '<S103>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RIDEFROSTRange_ERERlDefrostRange

    Rte_Read_VeERER_l_Defrost_Range_Value(&tmpRead_1x);

    /* Outport: '<Root>/SendCANR_RI_DEFROST_Range' incorporates:
     *  Inport: '<Root>/VeERER_l_Defrost_Range'
     */
    Rte_Write_SendCANR_RI_DEFROST_Range_SendCANR_RI_DEFROST_Range
        (tmpRead_1x);
    Rte_Read_VeERER_b_DefrostRange_SNA_Value(&tmpRead_1y);

    /* Outport: '<Root>/SendCANR_RI_DEFROST_RangeVld' incorporates:
     *  Inport: '<Root>/VeERER_b_DefrostRange_SNA'
     */
    Rte_Write_SendCANR_RI_DEFROST_RangeVld_SendCANR_RI_DEFROST_RangeVld
        (!tmpRead_1y);

#endif

    /* End of DataTypeConversion: '<S102>/Data Type Conversion' */

    /* DataTypeConversion: '<S104>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeERER_b_LightsRange_SNA'
     *  Inport: '<Root>/VeERER_l_Lights_Range'
     *  Logic: '<S105>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RILIGHTSRange_ERERlLightsRange

    Rte_Read_VeERER_l_Lights_Range_Value(&tmpRead_1z);

    /* Outport: '<Root>/SendCANR_RI_LIGHTS_Range' incorporates:
     *  Inport: '<Root>/VeERER_l_Lights_Range'
     */
    Rte_Write_SendCANR_RI_LIGHTS_Range_SendCANR_RI_LIGHTS_Range(tmpRead_1z);
    Rte_Read_VeERER_b_LightsRange_SNA_Value(&tmpRead_20);

    /* Outport: '<Root>/SendCANR_RI_LIGHTS_RangeVld' incorporates:
     *  Inport: '<Root>/VeERER_b_LightsRange_SNA'
     */
    Rte_Write_SendCANR_RI_LIGHTS_RangeVld_SendCANR_RI_LIGHTS_RangeVld
        (!tmpRead_20);

#endif

    /* End of DataTypeConversion: '<S104>/Data Type Conversion' */

    /* DataTypeConversion: '<S106>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeERER_b_OtherRange_SNA'
     *  Inport: '<Root>/VeERER_l_Other_Range'
     *  Logic: '<S107>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RIOTHERRange_ERERlOtherRange

    Rte_Read_VeERER_l_Other_Range_Value(&tmpRead_21);

    /* Outport: '<Root>/SendCANR_RI_OTHER_Range' incorporates:
     *  Inport: '<Root>/VeERER_l_Other_Range'
     */
    Rte_Write_SendCANR_RI_OTHER_Range_SendCANR_RI_OTHER_Range(tmpRead_21);
    Rte_Read_VeERER_b_OtherRange_SNA_Value(&tmpRead_22);

    /* Outport: '<Root>/SendCANR_RI_OTHER_RangeVld' incorporates:
     *  Inport: '<Root>/VeERER_b_OtherRange_SNA'
     */
    Rte_Write_SendCANR_RI_OTHER_RangeVld_SendCANR_RI_OTHER_RangeVld
        (!tmpRead_22);

#endif

    /* End of DataTypeConversion: '<S106>/Data Type Conversion' */

    /* DataTypeConversion: '<S108>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeERER_b_SeatswhlRange_SNA'
     *  Inport: '<Root>/VeERER_l_Seatswhl_Range'
     *  Logic: '<S109>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RISEATSWHLRange_ERERlSeatswhlRange

    Rte_Read_VeERER_l_Seatswhl_Range_Value(&tmpRead_23);

    /* Outport: '<Root>/SendCANR_RI_SEATSWHL_Range' incorporates:
     *  Inport: '<Root>/VeERER_l_Seatswhl_Range'
     */
    Rte_Write_SendCANR_RI_SEATSWHL_Range_SendCANR_RI_SEATSWHL_Range
        (tmpRead_23);
    Rte_Read_VeERER_b_SeatswhlRange_SNA_Value(&tmpRead_24);

    /* Outport: '<Root>/SendCANR_RI_SEATSWHL_RangeVld' incorporates:
     *  Inport: '<Root>/VeERER_b_SeatswhlRange_SNA'
     */
    Rte_Write_SendCANR_RI_SEATSWHL_RangeVld_SendCANR_RI_SEATSWHL_RangeVld(
        !tmpRead_24);

#endif

    /* End of DataTypeConversion: '<S108>/Data Type Conversion' */

    /* DataTypeConversion: '<S110>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeERER_b_TotalRange_SNA'
     *  Inport: '<Root>/VeERER_l_Total_Range'
     *  Logic: '<S111>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RITOTALRangeAdd_ERERlTotalRange

    Rte_Read_VeERER_l_Total_Range_Value(&tmpRead_25);

    /* Outport: '<Root>/SendCANR_RI_TOTAL_Range_Add' incorporates:
     *  Inport: '<Root>/VeERER_l_Total_Range'
     */
    Rte_Write_SendCANR_RI_TOTAL_Range_Add_SendCANR_RI_TOTAL_Range_Add
        (tmpRead_25);
    Rte_Read_VeERER_b_TotalRange_SNA_Value(&tmpRead_26);

    /* Outport: '<Root>/SendCANR_RI_TOTAL_Range_AddVld' incorporates:
     *  Inport: '<Root>/VeERER_b_TotalRange_SNA'
     */
    
        Rte_Write_SendCANR_RI_TOTAL_Range_AddVld_SendCANR_RI_TOTAL_Range_AddVld(
        !tmpRead_26);

#endif

    /* End of DataTypeConversion: '<S110>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTHMR_e_SC_WkUp' */
    Rte_Read_VeTHMR_e_SC_WkUp_Value(&tmpRead_2s);

    /* Inport: '<Root>/VeTPCR_t_TimeToDeparture' */
    Rte_Read_VeTPCR_t_TimeToDeparture_Value(&tmpRead_2r);

    /* Inport: '<Root>/VeHTRR_Pct_HV_Htr2PwrAct' */
    Rte_Read_VeHTRR_Pct_HV_Htr2PwrAct_Value(&tmpRead_2q);

    /* Inport: '<Root>/VeHTIR_T_Htr2_PCBTemp' */
    Rte_Read_VeHTIR_T_Htr2_PCBTemp_Value(&tmpRead_2p);

    /* Inport: '<Root>/VeHTIR_T_Htr2CoreTemp' */
    Rte_Read_VeHTIR_T_Htr2CoreTemp_Value(&tmpRead_2o);

    /* Inport: '<Root>/VeTRIR_b_HtrCorClnt_TmpIn_FA' */
    Rte_Read_VeTRIR_b_HtrCorClnt_TmpIn_FA_Value(&tmpRead_2n);

    /* Inport: '<Root>/VeTRIR_T_HtrCorClnt_TmpIn' */
    Rte_Read_VeTRIR_T_HtrCorClnt_TmpIn_Value(&tmpRead_2m);

    /* Inport: '<Root>/VeTHMR_b_HV_BatTempCrit_Cond' */
    Rte_Read_VeTHMR_b_HV_BatTempCrit_Cond_Value(&tmpRead_2l);

    /* Inport: '<Root>/VeTHMR_e_HV_Bat_CltLvlLo' */
    Rte_Read_VeTHMR_e_HV_Bat_CltLvlLo_Value(&tmpRead_2k);

    /* Inport: '<Root>/VeRCVR_b_HT_Shtoff_VlvCmd' */
    Rte_Read_VeRCVR_b_HT_Shtoff_VlvCmd_Value(&tmpRead_2j);

    /* Inport: '<Root>/VePMIR_b_HTAuxPumpRPMAct_FA' */
    Rte_Read_VePMIR_b_HTAuxPumpRPMAct_FA_Value(&tmpRead_2i);

    /* Inport: '<Root>/VePMIR_n_HTAuxPumpRPMAct' */
    Rte_Read_VePMIR_n_HTAuxPumpRPMAct_Value(&tmpRead_2h);

    /* Inport: '<Root>/VePMIR_b_HTAuxPumpMntrRPM_FA' */
    Rte_Read_VePMIR_b_HTAuxPumpMntrRPM_FA_Value(&tmpRead_2g);

    /* Inport: '<Root>/VePMIR_e_HTAuxPumpMntrRPM' */
    Rte_Read_VePMIR_e_HTAuxPumpMntrRPM_Value(&tmpRead_2f);

    /* Inport: '<Root>/VeRCVR_b_FtRfgtShtoff_VlvSts' */
    Rte_Read_VeRCVR_b_FtRfgtShtoff_VlvSts_Value(&tmpRead_2e);

    /* Inport: '<Root>/VeHTRR_P_HVC_HtrPwrAct' */
    Rte_Read_VeHTRR_P_HVC_HtrPwrAct_Value(&tmpRead_2d);

    /* Inport: '<Root>/VeTMIR_b_ElecClntHtr_TmpIn_FA' */
    Rte_Read_VeTMIR_b_ElecClntHtr_TmpIn_FA_Value(&tmpRead_2c);

    /* Inport: '<Root>/VeTMIR_T_ElecClntHtr_TmpIn' */
    Rte_Read_VeTMIR_T_ElecClntHtr_TmpIn_Value(&tmpRead_2b);

    /* Inport: '<Root>/VeTAIR_e_CompStat' */
    Rte_Read_VeTAIR_e_CompStat_Value(&tmpRead_2a);

    /* Inport: '<Root>/VeTHMR_e_CabinPreCondReqMsg' */
    Rte_Read_VeTHMR_e_CabinPreCondReqMsg_Value(&tmpRead_29);

    /* Inport: '<Root>/VeTHMR_e_CabinPreCondReqStat' */
    Rte_Read_VeTHMR_e_CabinPreCondReqStat_Value(&tmpRead_28);

    /* Inport: '<Root>/VeTIMR_e_RaceMdPopUp' */
    Rte_Read_VeTIMR_e_RaceMdPopUp_Value(&tmpRead_27);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_Racemode_Popup_PT' incorporates:
     *  DataTypeConversion: '<S112>/Data Type Conversion'
     *  Inport: '<Root>/VeTIMR_e_RaceMdPopUp'
     */

(uint8 = SendCANR_Racemode_Popup_PT_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Racemode_Popup_PT_SendCANR_Racemode_Popup_PT((uint8)
        tmpRead_27);

    /* Outport: '<Root>/SendCANR_Racemode_Popup_PT_Vld' incorporates:
     *  Logic: '<S112>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Racemode_Popup_PT_Vld_SendCANR_Racemode_Popup_PT_Vld
        (true);

    /* Outport: '<Root>/SendCANR_CabinConditioningSts' incorporates:
     *  DataTypeConversion: '<S113>/Data Type Conversion'
     */

tmpRead_28 = SendCANR_CabinConditioningSts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_CabinConditioningSts_SendCANR_CabinConditioningSts        ((uint8)tmpRead_28);

    /* Outport: '<Root>/SendCANR_CabinConditioningStsVld' incorporates:
     *  Logic: '<S113>/Logical Operator'
     */
    
        Rte_Write_SendCANR_CabinConditioningStsVld_SendCANR_CabinConditioningStsVld
        (true);

    /* Outport: '<Root>/SendCANR_CbnPreconditionReqSts' incorporates:
     *  DataTypeConversion: '<S114>/Data Type Conversion'
     */
    

tmpRead_29 = SendCANR_CbnPreconditionReqSts_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_CbnPreconditionReqSts_SendCANR_CbnPreconditionReqSts        ((uint8)tmpRead_29);

    /* Outport: '<Root>/SendCANR_CbnPreconditionReqStsVld' incorporates:
     *  Logic: '<S114>/Logical Operator'
     */
    
        Rte_Write_SendCANR_CbnPreconditionReqStsVld_SendCANR_CbnPreconditionReqStsVld
        (true);

    /* Outport: '<Root>/SendCANR_CompressorState' incorporates:
     *  DataTypeConversion: '<S115>/Data Type Conversion'
     *  Inport: '<Root>/VeTAIR_e_CompStat'
     */

(uint8 = SendCANR_CompressorState_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_CompressorState_SendCANR_CompressorState((uint8)
        tmpRead_2a);

    /* Outport: '<Root>/SendCANR_CompressorStateVld' incorporates:
     *  Logic: '<S115>/Logical Operator'
     */
    Rte_Write_SendCANR_CompressorStateVld_SendCANR_CompressorStateVld(true);

    /* Outport: '<Root>/SendCANR_ElecClntHtrInletTemp' incorporates:
     *  DataTypeConversion: '<S116>/Data Type Conversion'
     */

tmpRead_2b = SendCANR_ElecClntHtrInletTemp_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_ElecClntHtrInletTemp_SendCANR_ElecClntHtrInletTemp        (tmpRead_2b);

    /* Outport: '<Root>/SendCANR_ElecClntHtrInletTempVld' incorporates:
     *  Logic: '<S116>/Logical Operator'
     */
    
        Rte_Write_SendCANR_ElecClntHtrInletTempVld_SendCANR_ElecClntHtrInletTempVld
        (!tmpRead_2c);

    /* Outport: '<Root>/SendCANR_ElecCoolantHtrPwr' incorporates:
     *  DataTypeConversion: '<S117>/Data Type Conversion'
     */

tmpRead_2d = SendCANR_ElecCoolantHtrPwr_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_ElecCoolantHtrPwr_SendCANR_ElecCoolantHtrPwr        (tmpRead_2d);

    /* Outport: '<Root>/SendCANR_ElecCoolantHtrPwrVld' incorporates:
     *  Logic: '<S117>/Logical Operator'
     */
    Rte_Write_SendCANR_ElecCoolantHtrPwrVld_SendCANR_ElecCoolantHtrPwrVld
        (true);

    /* Outport: '<Root>/SendCANR_FRfShVlvSts' incorporates:
     *  DataTypeConversion: '<S118>/Data Type Conversion'
     */

tmpRead_2e = SendCANR_FRfShVlvSts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_FRfShVlvSts_SendCANR_FRfShVlvSts(tmpRead_2e);

    /* Outport: '<Root>/SendCANR_FRfShVlvStsVld' incorporates:
     *  Logic: '<S118>/Logical Operator'
     */
    Rte_Write_SendCANR_FRfShVlvStsVld_SendCANR_FRfShVlvStsVld(true);

    /* Outport: '<Root>/SendCANR_HTAuxPmpMontrngRPM' incorporates:
     *  DataTypeConversion: '<S119>/Data Type Conversion'
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpMntrRPM'
     */

tmpRead_2f = SendCANR_HTAuxPmpMontrngRPM_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HTAuxPmpMontrngRPM_SendCANR_HTAuxPmpMontrngRPM        ((uint8)tmpRead_2f);

    /* Outport: '<Root>/SendCANR_HTAuxPmpMontrngRPM_Vld' incorporates:
     *  Logic: '<S119>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HTAuxPmpMontrngRPM_Vld_SendCANR_HTAuxPmpMontrngRPM_Vld
        (!tmpRead_2g);

    /* Outport: '<Root>/SendCANR_HTAuxPmpRPMAct' incorporates:
     *  DataTypeConversion: '<S120>/Data Type Conversion'
     */

tmpRead_2h = SendCANR_HTAuxPmpRPMAct_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HTAuxPmpRPMAct_SendCANR_HTAuxPmpRPMAct(tmpRead_2h);

    /* Outport: '<Root>/SendCANR_HTAuxPmpRPMActVld' incorporates:
     *  Logic: '<S120>/Logical Operator'
     */
    Rte_Write_SendCANR_HTAuxPmpRPMActVld_SendCANR_HTAuxPmpRPMActVld
        (!tmpRead_2i);

    /* Outport: '<Root>/SendCANR_HTShtOffVlvReq' incorporates:
     *  DataTypeConversion: '<S121>/Data Type Conversion'
     */

tmpRead_2j = SendCANR_HTShtOffVlvReq_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HTShtOffVlvReq_SendCANR_HTShtOffVlvReq(tmpRead_2j);

    /* Outport: '<Root>/SendCANR_HTShtOffVlvReqVld' incorporates:
     *  Logic: '<S121>/Logical Operator'
     */
    Rte_Write_SendCANR_HTShtOffVlvReqVld_SendCANR_HTShtOffVlvReqVld(true);

    /* Outport: '<Root>/SendCANR_HVBatCoolantLvlLo_DPT' incorporates:
     *  DataTypeConversion: '<S122>/Data Type Conversion'
     *  Inport: '<Root>/VeTHMR_e_HV_Bat_CltLvlLo'
     */
    

tmpRead_2k = SendCANR_HVBatCoolantLvlLo_DPT_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_HVBatCoolantLvlLo_DPT_SendCANR_HVBatCoolantLvlLo_DPT        ((uint8)tmpRead_2k);

    /* Outport: '<Root>/SendCANR_HVBatCoolantLvlLo_DPT_Vld' incorporates:
     *  Logic: '<S122>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HVBatCoolantLvlLo_DPT_Vld_SendCANR_HVBatCoolantLvlLo_DPT_Vld
        (true);

    /* Outport: '<Root>/SendCANR_HVBatCritCondT' incorporates:
     *  DataTypeConversion: '<S123>/Data Type Conversion'
     */

tmpRead_2l = SendCANR_HVBatCritCondT_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HVBatCritCondT_SendCANR_HVBatCritCondT(tmpRead_2l);

    /* Outport: '<Root>/SendCANR_HVBatCritCondT_Vld' incorporates:
     *  Logic: '<S123>/Logical Operator'
     */
    Rte_Write_SendCANR_HVBatCritCondT_Vld_SendCANR_HVBatCritCondT_Vld(true);

    /* Outport: '<Root>/SendCANR_HeaterCoreInletTemp' incorporates:
     *  DataTypeConversion: '<S124>/Data Type Conversion'
     */

tmpRead_2m = SendCANR_HeaterCoreInletTemp_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_HeaterCoreInletTemp_SendCANR_HeaterCoreInletTemp        (tmpRead_2m);

    /* Outport: '<Root>/SendCANR_HeaterCoreInletTempVld' incorporates:
     *  Logic: '<S124>/Logical Operator'
     */
    
        Rte_Write_SendCANR_HeaterCoreInletTempVld_SendCANR_HeaterCoreInletTempVld
        (!tmpRead_2n);

    /* Outport: '<Root>/SendCANR_RearAirHtrCoreTemp' incorporates:
     *  DataTypeConversion: '<S125>/Data Type Conversion'
     */

tmpRead_2o = SendCANR_RearAirHtrCoreTemp_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_RearAirHtrCoreTemp_SendCANR_RearAirHtrCoreTemp        (tmpRead_2o);

    /* Outport: '<Root>/SendCANR_RearAirHtrCoreTempVld' incorporates:
     *  Logic: '<S125>/Logical Operator'
     */
    
        Rte_Write_SendCANR_RearAirHtrCoreTempVld_SendCANR_RearAirHtrCoreTempVld
        (true);

    /* Outport: '<Root>/SendCANR_RearAirHtrPCBTemp' incorporates:
     *  DataTypeConversion: '<S126>/Data Type Conversion'
     */

tmpRead_2p = SendCANR_RearAirHtrPCBTemp_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_RearAirHtrPCBTemp_SendCANR_RearAirHtrPCBTemp        (tmpRead_2p);

    /* Outport: '<Root>/SendCANR_RearAirHtrPCBTempVld' incorporates:
     *  Logic: '<S126>/Logical Operator'
     */
    Rte_Write_SendCANR_RearAirHtrPCBTempVld_SendCANR_RearAirHtrPCBTempVld
        (true);

    /* Outport: '<Root>/SendCANR_RearAirHtrPwrCnsAct' incorporates:
     *  DataTypeConversion: '<S127>/Data Type Conversion'
     */

tmpRead_2q = SendCANR_RearAirHtrPwrCnsAct_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_RearAirHtrPwrCnsAct_SendCANR_RearAirHtrPwrCnsAct        (tmpRead_2q);

    /* Outport: '<Root>/SendCANR_RearAirHtrPwrCnsActVld' incorporates:
     *  Logic: '<S127>/Logical Operator'
     */
    
        Rte_Write_SendCANR_RearAirHtrPwrCnsActVld_SendCANR_RearAirHtrPwrCnsActVld
        (true);

    /* Outport: '<Root>/SendCANR_SchCond_Time_Till_Dep' incorporates:
     *  DataTypeConversion: '<S128>/Data Type Conversion'
     */
    

tmpRead_2r = SendCANR_SchCond_Time_Till_Dep_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_SchCond_Time_Till_Dep_SendCANR_SchCond_Time_Till_Dep        ((float32)tmpRead_2r);

    /* Outport: '<Root>/SendCANR_SchCond_Time_Till_DepVld' incorporates:
     *  Logic: '<S128>/Logical Operator'
     */
    
        Rte_Write_SendCANR_SchCond_Time_Till_DepVld_SendCANR_SchCond_Time_Till_DepVld
        (true);

    /* Outport: '<Root>/SendCANR_Sch_PreCondition_Sts' incorporates:
     *  DataTypeConversion: '<S129>/Data Type Conversion'
     *  Inport: '<Root>/VeTHMR_e_SC_WkUp'
     */

tmpRead_2s = SendCANR_Sch_PreCondition_Sts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Sch_PreCondition_Sts_SendCANR_Sch_PreCondition_Sts        ((uint8)tmpRead_2s);

    /* Outport: '<Root>/SendCANR_Sch_PreCondition_StsVld' incorporates:
     *  Logic: '<S129>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Sch_PreCondition_StsVld_SendCANR_Sch_PreCondition_StsVld
        (true);

    /* DataTypeConversion: '<S130>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTHR_P_V2H_DschgCap'
     *  Logic: '<S131>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_V2HDischargeCapacity_VTHRPV2HDschgCap

    Rte_Read_VeVTHR_P_V2H_DschgCap_Value(&tmpRead_2t);

    /* Outport: '<Root>/SendCANR_V2H_Discharge_Capacity' incorporates:
     *  Inport: '<Root>/VeVTHR_P_V2H_DschgCap'
     */
    
        Rte_Write_SendCANR_V2H_Discharge_Capacity_SendCANR_V2H_Discharge_Capacity
        (tmpRead_2t);

    /* Outport: '<Root>/SendCANR_V2H_Discharge_CapacityVld' */
    
        Rte_Write_SendCANR_V2H_Discharge_CapacityVld_SendCANR_V2H_Discharge_CapacityVld
        (false);

#endif

    /* End of DataTypeConversion: '<S130>/Data Type Conversion' */

    /* DataTypeConversion: '<S132>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeINVR_I_MtrA_DC_Crnt'
     */
#if Rte_SysCon_VrntCT1B_MotorADCCurrent_INVRIMtrADCCrnt

    Rte_Read_VeINVR_I_MtrA_DC_Crnt_Value(&tmpRead_2u);

    /* Outport: '<Root>/SendCANR_MotorA_DC_Current' incorporates:
     *  Inport: '<Root>/VeINVR_I_MtrA_DC_Crnt'
     */

tmpRead_2u = SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MotorA_DC_Current_SendCANR_MotorA_DC_Current        (tmpRead_2u);

#endif

    /* End of DataTypeConversion: '<S132>/Data Type Conversion' */

    /* DataTypeConversion: '<S134>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeINVR_I_MtrC_DC_Crnt'
     */
#if Rte_SysCon_VrntCT1B_MotorADCCurrent_INVRIMtrCDCCrnt

    Rte_Read_VeINVR_I_MtrC_DC_Crnt_Value(&tmpRead_2v);

    /* Outport: '<Root>/SendCANR_MotorA_DC_Current' incorporates:
     *  Inport: '<Root>/VeINVR_I_MtrC_DC_Crnt'
     */

tmpRead_2v = SendCANR_MotorA_DC_Current_CT1B_FUNC_ac_Test_2;
    Rte_Write_SendCANR_MotorA_DC_Current_SendCANR_MotorA_DC_Current        (tmpRead_2v);

#endif

    /* End of DataTypeConversion: '<S134>/Data Type Conversion' */

    /* Logic: '<S133>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_DC_CrntFA'
     */
#if Rte_SysCon_VrntCT1B_MotorADCCurrent_INVRIMtrADCCrnt

    Rte_Read_VeINVR_b_MtrA_DC_CrntFA_Value(&tmpRead_2w);

    /* Outport: '<Root>/SendCANR_MotorA_DC_CurrentVld' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_DC_CrntFA'
     */
    Rte_Write_SendCANR_MotorA_DC_CurrentVld_SendCANR_MotorA_DC_CurrentVld(
        !tmpRead_2w);

#endif

    /* End of Logic: '<S133>/Logical Operator' */

    /* Logic: '<S135>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrC_DC_CrntFA'
     */
#if Rte_SysCon_VrntCT1B_MotorADCCurrent_INVRIMtrCDCCrnt

    Rte_Read_VeINVR_b_MtrC_DC_CrntFA_Value(&tmpRead_2x);

    /* Outport: '<Root>/SendCANR_MotorA_DC_CurrentVld' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrC_DC_CrntFA'
     */
    Rte_Write_SendCANR_MotorA_DC_CurrentVld_SendCANR_MotorA_DC_CurrentVld(
        !tmpRead_2x);

#endif

    /* End of Logic: '<S135>/Logical Operator' */

    /* DataTypeConversion: '<S136>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeINVR_U_MtrA_DC_Volt'
     */
#if Rte_SysCon_VrntCT1B_MotorADCVoltage_INVRUMtrADCVolt

    Rte_Read_VeINVR_U_MtrA_DC_Volt_Value(&tmpRead_2y);

    /* Outport: '<Root>/SendCANR_MotorA_DC_Voltage' incorporates:
     *  Inport: '<Root>/VeINVR_U_MtrA_DC_Volt'
     */

tmpRead_2y = SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MotorA_DC_Voltage_SendCANR_MotorA_DC_Voltage        (tmpRead_2y);

#endif

    /* End of DataTypeConversion: '<S136>/Data Type Conversion' */

    /* DataTypeConversion: '<S138>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeINVR_U_MtrC_DC_Volt'
     */
#if Rte_SysCon_VrntCT1B_MotorADCVoltage_INVRUMtrCDCVolt

    Rte_Read_VeINVR_U_MtrC_DC_Volt_Value(&tmpRead_2z);

    /* Outport: '<Root>/SendCANR_MotorA_DC_Voltage' incorporates:
     *  Inport: '<Root>/VeINVR_U_MtrC_DC_Volt'
     */

tmpRead_2z = SendCANR_MotorA_DC_Voltage_CT1B_FUNC_ac_Test_2;
    Rte_Write_SendCANR_MotorA_DC_Voltage_SendCANR_MotorA_DC_Voltage        (tmpRead_2z);

#endif

    /* End of DataTypeConversion: '<S138>/Data Type Conversion' */

    /* Logic: '<S137>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_DC_VoltFA'
     */
#if Rte_SysCon_VrntCT1B_MotorADCVoltage_INVRUMtrADCVolt

    Rte_Read_VeINVR_b_MtrA_DC_VoltFA_Value(&tmpRead_30);

    /* Outport: '<Root>/SendCANR_MotorA_DC_VoltageVld' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_DC_VoltFA'
     */
    Rte_Write_SendCANR_MotorA_DC_VoltageVld_SendCANR_MotorA_DC_VoltageVld(
        !tmpRead_30);

#endif

    /* End of Logic: '<S137>/Logical Operator' */

    /* Logic: '<S139>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrC_DC_VoltFA'
     */
#if Rte_SysCon_VrntCT1B_MotorADCVoltage_INVRUMtrCDCVolt

    Rte_Read_VeINVR_b_MtrC_DC_VoltFA_Value(&tmpRead_31);

    /* Outport: '<Root>/SendCANR_MotorA_DC_VoltageVld' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrC_DC_VoltFA'
     */
    Rte_Write_SendCANR_MotorA_DC_VoltageVld_SendCANR_MotorA_DC_VoltageVld(
        !tmpRead_31);

#endif

    /* End of Logic: '<S139>/Logical Operator' */

    /* DataTypeConversion: '<S140>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     */
#if Rte_SysCon_VrntCT1B_MotorAInverterState_INVReMtrAInvrtrSt

    Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&tmpRead_32);

    /* Outport: '<Root>/SendCANR_MotorA_InverterState' incorporates:
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     */

tmpRead_32 = SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MotorA_InverterState_SendCANR_MotorA_InverterState        ((uint8)tmpRead_32);

#endif

    /* End of DataTypeConversion: '<S140>/Data Type Conversion' */

    /* DataTypeConversion: '<S141>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeINVR_e_MtrC_InvrtrSt'
     *  Logic: '<S142>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_MotorAInverterState_INVReMtrCInvrtrSt

    Rte_Read_VeINVR_e_MtrC_InvrtrSt_Value(&tmpRead_33);

    /* Outport: '<Root>/SendCANR_MotorA_InverterState' incorporates:
     *  Inport: '<Root>/VeINVR_e_MtrC_InvrtrSt'
     */

tmpRead_33 = SendCANR_MotorA_InverterState_CT1B_FUNC_ac_Test_2;
    Rte_Write_SendCANR_MotorA_InverterState_SendCANR_MotorA_InverterState        ((uint8)tmpRead_33);

    /* Outport: '<Root>/SendCANR_MotorA_InverterStateVld' */
    
        Rte_Write_SendCANR_MotorA_InverterStateVld_SendCANR_MotorA_InverterStateVld
        (false);

#endif

    /* End of DataTypeConversion: '<S141>/Data Type Conversion' */

    /* DataTypeConversion: '<S143>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
     */
#if Rte_SysCon_VrntCT1B_MotorAInverterTemp_INVRTMtrAInvrtrTemp

    Rte_Read_VeINVR_T_MtrA_InvrtrTemp_Value(&tmpRead_34);

    /* Outport: '<Root>/SendCANR_MotorA_InverterTemp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
     */

tmpRead_34 = SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MotorA_InverterTemp_SendCANR_MotorA_InverterTemp        (tmpRead_34);

#endif

    /* End of DataTypeConversion: '<S143>/Data Type Conversion' */

    /* DataTypeConversion: '<S145>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrC_InvrtrTemp'
     */
#if Rte_SysCon_VrntCT1B_MotorAInverterTemp_INVRTMtrCInvrtrTemp

    Rte_Read_VeINVR_T_MtrC_InvrtrTemp_Value(&tmpRead_35);

    /* Outport: '<Root>/SendCANR_MotorA_InverterTemp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrC_InvrtrTemp'
     */

tmpRead_35 = SendCANR_MotorA_InverterTemp_CT1B_FUNC_ac_Test_2;
    Rte_Write_SendCANR_MotorA_InverterTemp_SendCANR_MotorA_InverterTemp        (tmpRead_35);

#endif

    /* End of DataTypeConversion: '<S145>/Data Type Conversion' */

    /* Logic: '<S144>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_InvrtrTempFA'
     */
#if Rte_SysCon_VrntCT1B_MotorAInverterTemp_INVRTMtrAInvrtrTemp

    Rte_Read_VeINVR_b_MtrA_InvrtrTempFA_Value(&tmpRead_36);

    /* Outport: '<Root>/SendCANR_MotorA_InverterTempVld' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_InvrtrTempFA'
     */
    
        Rte_Write_SendCANR_MotorA_InverterTempVld_SendCANR_MotorA_InverterTempVld
        (!tmpRead_36);

#endif

    /* End of Logic: '<S144>/Logical Operator' */

    /* Logic: '<S146>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrC_InvrtrTempFA'
     */
#if Rte_SysCon_VrntCT1B_MotorAInverterTemp_INVRTMtrCInvrtrTemp

    Rte_Read_VeINVR_b_MtrC_InvrtrTempFA_Value(&tmpRead_37);

    /* Outport: '<Root>/SendCANR_MotorA_InverterTempVld' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrC_InvrtrTempFA'
     */
    
        Rte_Write_SendCANR_MotorA_InverterTempVld_SendCANR_MotorA_InverterTempVld
        (!tmpRead_37);

#endif

    /* End of Logic: '<S146>/Logical Operator' */

    /* DataTypeConversion: '<S147>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     */
#if Rte_SysCon_VrntCT1B_MotorARPM_MSPRnMtrASpd

    Rte_Read_VeMSPR_n_MtrA_Spd_Value(&tmpRead_38);

    /* Outport: '<Root>/SendCANR_MotorA_RPM' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     */

tmpRead_38 = SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MotorA_RPM_SendCANR_MotorA_RPM(tmpRead_38);

#endif

    /* End of DataTypeConversion: '<S147>/Data Type Conversion' */

    /* DataTypeConversion: '<S149>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrC_Spd'
     */
#if Rte_SysCon_VrntCT1B_MotorARPM_MSPRnMtrCSpd

    Rte_Read_VeMSPR_n_MtrC_Spd_Value(&tmpRead_39);

    /* Outport: '<Root>/SendCANR_MotorA_RPM' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrC_Spd'
     */

tmpRead_39 = SendCANR_MotorA_RPM_CT1B_FUNC_ac_Test_2;
    Rte_Write_SendCANR_MotorA_RPM_SendCANR_MotorA_RPM(tmpRead_39);

#endif

    /* End of DataTypeConversion: '<S149>/Data Type Conversion' */

    /* Logic: '<S148>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeMSPR_b_MtrA_SpdFA'
     */
#if Rte_SysCon_VrntCT1B_MotorARPM_MSPRnMtrASpd

    Rte_Read_VeMSPR_b_MtrA_SpdFA_Value(&tmpRead_3a);

    /* Outport: '<Root>/SendCANR_MotorA_RPM_Vld' incorporates:
     *  Inport: '<Root>/VeMSPR_b_MtrA_SpdFA'
     */
    Rte_Write_SendCANR_MotorA_RPM_Vld_SendCANR_MotorA_RPM_Vld(!tmpRead_3a);

#endif

    /* End of Logic: '<S148>/Logical Operator' */

    /* Logic: '<S150>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeMSPR_b_MtrC_SpdFA'
     */
#if Rte_SysCon_VrntCT1B_MotorARPM_MSPRnMtrCSpd

    Rte_Read_VeMSPR_b_MtrC_SpdFA_Value(&tmpRead_3b);

    /* Outport: '<Root>/SendCANR_MotorA_RPM_Vld' incorporates:
     *  Inport: '<Root>/VeMSPR_b_MtrC_SpdFA'
     */
    Rte_Write_SendCANR_MotorA_RPM_Vld_SendCANR_MotorA_RPM_Vld(!tmpRead_3b);

#endif

    /* End of Logic: '<S150>/Logical Operator' */

    /* SignalConversion generated from: '<S2>/VeINVR_T_MtrA_Temp' */
#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrATemp || Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrATemp

    /* SignalConversion generated from: '<S2>/VeINVR_T_MtrA_Temp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
     */
    Rte_Read_VeINVR_T_MtrA_Temp_Value(&rtb_TmpSignalConversionAtVeINVR);

#endif

    /* End of SignalConversion generated from: '<S2>/VeINVR_T_MtrA_Temp' */

    /* DataTypeConversion: '<S151>/Data Type Conversion' */
#if Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrATemp

    /* Outport: '<Root>/SendCANR_MotorA_Temperature' */

rtb_TmpSignalConversionAtVeINVR = SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MotorA_Temperature_SendCANR_MotorA_Temperature        (rtb_TmpSignalConversionAtVeINVR);

#endif

    /* End of DataTypeConversion: '<S151>/Data Type Conversion' */

    /* SignalConversion generated from: '<S2>/VeINVR_T_MtrC_Temp' */
#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrCTemp || Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrCTemp

    /* SignalConversion generated from: '<S2>/VeINVR_T_MtrC_Temp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrC_Temp'
     */
    Rte_Read_VeINVR_T_MtrC_Temp_Value(&rtb_TmpSignalConversionAtVeIN_c);

#endif

    /* End of SignalConversion generated from: '<S2>/VeINVR_T_MtrC_Temp' */

    /* DataTypeConversion: '<S153>/Data Type Conversion' */
#if Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrCTemp

    /* Outport: '<Root>/SendCANR_MotorA_Temperature' */

rtb_TmpSignalConversionAtVeIN_c = SendCANR_MotorA_Temperature_CT1B_FUNC_ac_Test_2;
    Rte_Write_SendCANR_MotorA_Temperature_SendCANR_MotorA_Temperature        (rtb_TmpSignalConversionAtVeIN_c);

#endif

    /* End of DataTypeConversion: '<S153>/Data Type Conversion' */

    /* SignalConversion generated from: '<S2>/VeINVR_b_MtrA_TempFA' */
#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrATemp || Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrATemp

    /* SignalConversion generated from: '<S2>/VeINVR_b_MtrA_TempFA' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_TempFA'
     */
    Rte_Read_VeINVR_b_MtrA_TempFA_Value(&rtb_TmpSignalConversionAtVeIN_j);

#endif

    /* End of SignalConversion generated from: '<S2>/VeINVR_b_MtrA_TempFA' */

    /* Logic: '<S152>/Logical Operator' */
#if Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrATemp

    /* Outport: '<Root>/SendCANR_MotorA_TemperatureVld' */
    
        Rte_Write_SendCANR_MotorA_TemperatureVld_SendCANR_MotorA_TemperatureVld(
        !rtb_TmpSignalConversionAtVeIN_j);

#endif

    /* End of Logic: '<S152>/Logical Operator' */

    /* SignalConversion generated from: '<S2>/VeINVR_b_MtrC_TempFA' */
#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrCTemp || Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrCTemp

    /* SignalConversion generated from: '<S2>/VeINVR_b_MtrC_TempFA' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrC_TempFA'
     */
    Rte_Read_VeINVR_b_MtrC_TempFA_Value(&rtb_TmpSignalConversionAtVeIN_g);

#endif

    /* End of SignalConversion generated from: '<S2>/VeINVR_b_MtrC_TempFA' */

    /* Logic: '<S154>/Logical Operator' */
#if Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrCTemp

    /* Outport: '<Root>/SendCANR_MotorA_TemperatureVld' */
    
        Rte_Write_SendCANR_MotorA_TemperatureVld_SendCANR_MotorA_TemperatureVld(
        !rtb_TmpSignalConversionAtVeIN_g);

#endif

    /* End of Logic: '<S154>/Logical Operator' */

    /* DataTypeConversion: '<S155>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved'
     */
#if Rte_SysCon_VrntCT1B_MotorATorqueAchieved_MTIRMMtrATorqAchieved

    Rte_Read_VeMTIR_M_MtrA_TorqAchieved_Value(&tmpRead_3c);

    /* Outport: '<Root>/SendCANR_MotorA_TorqueAchieved' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved'
     */
    

tmpRead_3c = SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_MotorA_TorqueAchieved_SendCANR_MotorA_TorqueAchieved        (tmpRead_3c);

#endif

    /* End of DataTypeConversion: '<S155>/Data Type Conversion' */

    /* DataTypeConversion: '<S157>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrC_TorqAchieved'
     */
#if Rte_SysCon_VrntCT1B_MotorATorqueAchieved_MTIRMMtrCTorqAchieved

    Rte_Read_VeMTIR_M_MtrC_TorqAchieved_Value(&tmpRead_3d);

    /* Outport: '<Root>/SendCANR_MotorA_TorqueAchieved' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrC_TorqAchieved'
     */
    

tmpRead_3d = SendCANR_MotorA_TorqueAchieved_CT1B_FUNC_ac_Test_2;
        Rte_Write_SendCANR_MotorA_TorqueAchieved_SendCANR_MotorA_TorqueAchieved        (tmpRead_3d);

#endif

    /* End of DataTypeConversion: '<S157>/Data Type Conversion' */

    /* Logic: '<S156>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeMTIR_b_MtrA_TorqAchievedFA'
     */
#if Rte_SysCon_VrntCT1B_MotorATorqueAchieved_MTIRMMtrATorqAchieved

    Rte_Read_VeMTIR_b_MtrA_TorqAchievedFA_Value(&tmpRead_3e);

    /* Outport: '<Root>/SendCANR_MotorA_TorqueAchievedVld' incorporates:
     *  Inport: '<Root>/VeMTIR_b_MtrA_TorqAchievedFA'
     */
    
        Rte_Write_SendCANR_MotorA_TorqueAchievedVld_SendCANR_MotorA_TorqueAchievedVld
        (!tmpRead_3e);

#endif

    /* End of Logic: '<S156>/Logical Operator' */

    /* Logic: '<S158>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeMTIR_b_MtrC_TorqAchievedFA'
     */
#if Rte_SysCon_VrntCT1B_MotorATorqueAchieved_MTIRMMtrCTorqAchieved

    Rte_Read_VeMTIR_b_MtrC_TorqAchievedFA_Value(&tmpRead_3f);

    /* Outport: '<Root>/SendCANR_MotorA_TorqueAchievedVld' incorporates:
     *  Inport: '<Root>/VeMTIR_b_MtrC_TorqAchievedFA'
     */
    
        Rte_Write_SendCANR_MotorA_TorqueAchievedVld_SendCANR_MotorA_TorqueAchievedVld
        (!tmpRead_3f);

#endif

    /* End of Logic: '<S158>/Logical Operator' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMTIR_b_MtrB_TorqAchievedFA' */
    Rte_Read_VeMTIR_b_MtrB_TorqAchievedFA_Value(&tmpRead_3s);

    /* Inport: '<Root>/VeMTIR_M_MtrB_TorqAchieved' */
    Rte_Read_VeMTIR_M_MtrB_TorqAchieved_Value(&tmpRead_3r);

    /* Inport: '<Root>/VeINVR_b_MtrB_TempFA' */
    Rte_Read_VeINVR_b_MtrB_TempFA_Value(&tmpRead_3q);

    /* Inport: '<Root>/VeINVR_T_MtrB_Temp' */
    Rte_Read_VeINVR_T_MtrB_Temp_Value(&tmpRead_3p);

    /* Inport: '<Root>/VeMSPR_b_MtrB_SpdFA' */
    Rte_Read_VeMSPR_b_MtrB_SpdFA_Value(&tmpRead_3o);

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    Rte_Read_VeMSPR_n_MtrB_Spd_Value(&tmpRead_3n);

    /* Inport: '<Root>/VeINVR_b_MtrB_InvrtrTempFA' */
    Rte_Read_VeINVR_b_MtrB_InvrtrTempFA_Value(&tmpRead_3m);

    /* Inport: '<Root>/VeINVR_T_MtrB_InvrtrTemp' */
    Rte_Read_VeINVR_T_MtrB_InvrtrTemp_Value(&tmpRead_3l);

    /* Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt' */
    Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value(&tmpRead_3k);

    /* Inport: '<Root>/VeINVR_b_MtrB_DC_VoltFA' */
    Rte_Read_VeINVR_b_MtrB_DC_VoltFA_Value(&tmpRead_3j);

    /* Inport: '<Root>/VeINVR_U_MtrB_DC_Volt' */
    Rte_Read_VeINVR_U_MtrB_DC_Volt_Value(&tmpRead_3i);

    /* Inport: '<Root>/VeINVR_b_MtrB_DC_CrntFA' */
    Rte_Read_VeINVR_b_MtrB_DC_CrntFA_Value(&tmpRead_3h);

    /* Inport: '<Root>/VeINVR_I_MtrB_DC_Crnt' */
    Rte_Read_VeINVR_I_MtrB_DC_Crnt_Value(&tmpRead_3g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_MotorB_DC_Current' incorporates:
     *  DataTypeConversion: '<S159>/Data Type Conversion'
     */

tmpRead_3g = SendCANR_MotorB_DC_Current_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MotorB_DC_Current_SendCANR_MotorB_DC_Current        (tmpRead_3g);

    /* Outport: '<Root>/SendCANR_MotorB_DC_CurrentVld' incorporates:
     *  Logic: '<S159>/Logical Operator'
     */
    Rte_Write_SendCANR_MotorB_DC_CurrentVld_SendCANR_MotorB_DC_CurrentVld(
        !tmpRead_3h);

    /* Outport: '<Root>/SendCANR_MotorB_DC_Voltage' incorporates:
     *  DataTypeConversion: '<S160>/Data Type Conversion'
     */

tmpRead_3i = SendCANR_MotorB_DC_Voltage_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MotorB_DC_Voltage_SendCANR_MotorB_DC_Voltage        (tmpRead_3i);

    /* Outport: '<Root>/SendCANR_MotorB_DC_VoltageVld' incorporates:
     *  Logic: '<S160>/Logical Operator'
     */
    Rte_Write_SendCANR_MotorB_DC_VoltageVld_SendCANR_MotorB_DC_VoltageVld(
        !tmpRead_3j);

    /* Outport: '<Root>/SendCANR_MotorB_InverterState' incorporates:
     *  DataTypeConversion: '<S161>/Data Type Conversion'
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     */

tmpRead_3k = SendCANR_MotorB_InverterState_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MotorB_InverterState_SendCANR_MotorB_InverterState        ((uint8)tmpRead_3k);

    /* Outport: '<Root>/SendCANR_MotorB_InverterStateVld' incorporates:
     *  Logic: '<S161>/Logical Operator'
     */
    
        Rte_Write_SendCANR_MotorB_InverterStateVld_SendCANR_MotorB_InverterStateVld
        (true);

    /* Outport: '<Root>/SendCANR_MotorB_InverterTemp' incorporates:
     *  DataTypeConversion: '<S162>/Data Type Conversion'
     */

tmpRead_3l = SendCANR_MotorB_InverterTemp_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MotorB_InverterTemp_SendCANR_MotorB_InverterTemp        (tmpRead_3l);

    /* Outport: '<Root>/SendCANR_MotorB_InverterTempVld' incorporates:
     *  Logic: '<S162>/Logical Operator'
     */
    
        Rte_Write_SendCANR_MotorB_InverterTempVld_SendCANR_MotorB_InverterTempVld
        (!tmpRead_3m);

    /* Outport: '<Root>/SendCANR_MotorB_RPM' incorporates:
     *  DataTypeConversion: '<S163>/Data Type Conversion'
     */

tmpRead_3n = SendCANR_MotorB_RPM_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MotorB_RPM_SendCANR_MotorB_RPM(tmpRead_3n);

    /* Outport: '<Root>/SendCANR_MotorB_RPM_Vld' incorporates:
     *  Logic: '<S163>/Logical Operator'
     */
    Rte_Write_SendCANR_MotorB_RPM_Vld_SendCANR_MotorB_RPM_Vld(!tmpRead_3o);

    /* Outport: '<Root>/SendCANR_MotorB_Temperature' incorporates:
     *  DataTypeConversion: '<S164>/Data Type Conversion'
     */

tmpRead_3p = SendCANR_MotorB_Temperature_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MotorB_Temperature_SendCANR_MotorB_Temperature        (tmpRead_3p);

    /* Outport: '<Root>/SendCANR_MotorB_TemperatureVld' incorporates:
     *  Logic: '<S164>/Logical Operator'
     */
    
        Rte_Write_SendCANR_MotorB_TemperatureVld_SendCANR_MotorB_TemperatureVld(
        !tmpRead_3q);

    /* Outport: '<Root>/SendCANR_MotorB_TorqueAchieved' incorporates:
     *  DataTypeConversion: '<S165>/Data Type Conversion'
     */
    

tmpRead_3r = SendCANR_MotorB_TorqueAchieved_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_MotorB_TorqueAchieved_SendCANR_MotorB_TorqueAchieved        (tmpRead_3r);

    /* Outport: '<Root>/SendCANR_MotorB_TorqueAchievedVld' incorporates:
     *  Logic: '<S165>/Logical Operator'
     */
    
        Rte_Write_SendCANR_MotorB_TorqueAchievedVld_SendCANR_MotorB_TorqueAchievedVld
        (!tmpRead_3s);

    /* DataTypeConversion: '<S172>/Data Type Conversion' */
#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrATemp

    /* Outport: '<Root>/SendCANR_MCPA_Temp_FD3' */

rtb_TmpSignalConversionAtVeINVR = SendCANR_MCPA_Temp_FD3_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_MCPA_Temp_FD3_SendCANR_MCPA_Temp_FD3        (rtb_TmpSignalConversionAtVeINVR);

#endif

    /* End of DataTypeConversion: '<S172>/Data Type Conversion' */

    /* DataTypeConversion: '<S174>/Data Type Conversion' */
#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrCTemp

    /* Outport: '<Root>/SendCANR_MCPA_Temp_FD3' */

rtb_TmpSignalConversionAtVeIN_c = SendCANR_MCPA_Temp_FD3_CT1B_FUNC_ac_Test_2;
    Rte_Write_SendCANR_MCPA_Temp_FD3_SendCANR_MCPA_Temp_FD3        (rtb_TmpSignalConversionAtVeIN_c);

#endif

    /* End of DataTypeConversion: '<S174>/Data Type Conversion' */

    /* Logic: '<S173>/Logical Operator' */
#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrATemp

    /* Outport: '<Root>/SendCANR_MCPA_Temp_FD3Vld' */
    Rte_Write_SendCANR_MCPA_Temp_FD3Vld_SendCANR_MCPA_Temp_FD3Vld
        (!rtb_TmpSignalConversionAtVeIN_j);

#endif

    /* End of Logic: '<S173>/Logical Operator' */

    /* Logic: '<S175>/Logical Operator' */
#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrCTemp

    /* Outport: '<Root>/SendCANR_MCPA_Temp_FD3Vld' */
    Rte_Write_SendCANR_MCPA_Temp_FD3Vld_SendCANR_MCPA_Temp_FD3Vld
        (!rtb_TmpSignalConversionAtVeIN_g);

#endif

    /* End of Logic: '<S175>/Logical Operator' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTAIR_b_RadFanSts_FA' */
    Rte_Read_VeTAIR_b_RadFanSts_FA_Value(&tmpRead_3v);

    /* Inport: '<Root>/VeTAIR_Pct_RadFanSts' */
    Rte_Read_VeTAIR_Pct_RadFanSts_Value(&tmpRead_3u);

    /* Inport: '<Root>/VeTHMR_Pct_AirFlowReq' */
    Rte_Read_VeTHMR_Pct_AirFlowReq_Value(&tmpRead_3t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_AirflowRequest' incorporates:
     *  DataTypeConversion: '<S166>/Data Type Conversion'
     */

tmpRead_3t = SendCANR_AirflowRequest_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_AirflowRequest_SendCANR_AirflowRequest(tmpRead_3t);

    /* Outport: '<Root>/SendCANR_AirflowRequestVld' incorporates:
     *  Logic: '<S166>/Logical Operator'
     */
    Rte_Write_SendCANR_AirflowRequestVld_SendCANR_AirflowRequestVld(true);

    /* Outport: '<Root>/SendCANR_RadiatorFanSts' incorporates:
     *  DataTypeConversion: '<S167>/Data Type Conversion'
     */

tmpRead_3u = SendCANR_RadiatorFanSts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_RadiatorFanSts_SendCANR_RadiatorFanSts(tmpRead_3u);

    /* Outport: '<Root>/SendCANR_RadiatorFanStsVld' incorporates:
     *  Logic: '<S167>/Logical Operator'
     */
    Rte_Write_SendCANR_RadiatorFanStsVld_SendCANR_RadiatorFanStsVld
        (!tmpRead_3v);

    /* DataTypeConversion: '<S168>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeOBCR_P_ActChargePowerLim'
     *  Inport: '<Root>/VeOBCR_b_ActChargePowerLimFA'
     *  Logic: '<S169>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_SystActualChargeLim_OBCRPActChargePowerLim

    Rte_Read_VeOBCR_P_ActChargePowerLim_Value(&tmpRead_3w);

    /* Outport: '<Root>/SendCANR_Syst_Actual_Charge_Lim' incorporates:
     *  Inport: '<Root>/VeOBCR_P_ActChargePowerLim'
     */
    
        Rte_Write_SendCANR_Syst_Actual_Charge_Lim_SendCANR_Syst_Actual_Charge_Lim
        (tmpRead_3w);
    Rte_Read_VeOBCR_b_ActChargePowerLimFA_Value(&tmpRead_3x);

    /* Outport: '<Root>/SendCANR_Syst_Actual_Charge_LimVld' incorporates:
     *  Inport: '<Root>/VeOBCR_b_ActChargePowerLimFA'
     */
    
        Rte_Write_SendCANR_Syst_Actual_Charge_LimVld_SendCANR_Syst_Actual_Charge_LimVld
        (!tmpRead_3x);

#endif

    /* End of DataTypeConversion: '<S168>/Data Type Conversion' */

    /* DataTypeConversion: '<S170>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeOBCR_P_ActChargePower'
     *  Inport: '<Root>/VeOBCR_b_ActChargePowerFA'
     *  Logic: '<S171>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_SystActualChargePwr_OBCRPActChargePower

    Rte_Read_VeOBCR_P_ActChargePower_Value(&tmpRead_3y);

    /* Outport: '<Root>/SendCANR_Syst_Actual_Charge_Pwr' incorporates:
     *  Inport: '<Root>/VeOBCR_P_ActChargePower'
     */
    
        Rte_Write_SendCANR_Syst_Actual_Charge_Pwr_SendCANR_Syst_Actual_Charge_Pwr
        (tmpRead_3y);
    Rte_Read_VeOBCR_b_ActChargePowerFA_Value(&tmpRead_3z);

    /* Outport: '<Root>/SendCANR_Syst_Actual_Charge_PwrVld' incorporates:
     *  Inport: '<Root>/VeOBCR_b_ActChargePowerFA'
     */
    
        Rte_Write_SendCANR_Syst_Actual_Charge_PwrVld_SendCANR_Syst_Actual_Charge_PwrVld
        (!tmpRead_3z);

#endif

    /* End of DataTypeConversion: '<S170>/Data Type Conversion' */

    /* DataTypeConversion: '<S176>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTHR_P_V2H_InstPwrDraw'
     *  Logic: '<S177>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_V2HInstantPowerDraw_VTHRPV2HInstPwrDraw

    Rte_Read_VeVTHR_P_V2H_InstPwrDraw_Value(&tmpRead_40);

    /* Outport: '<Root>/SendCANR_V2H_Instant_Power_Draw' incorporates:
     *  Inport: '<Root>/VeVTHR_P_V2H_InstPwrDraw'
     */
    
        Rte_Write_SendCANR_V2H_Instant_Power_Draw_SendCANR_V2H_Instant_Power_Draw
        (tmpRead_40);

    /* Outport: '<Root>/SendCANR_V2H_Instant_Power_DrawVld' */
    
        Rte_Write_SendCANR_V2H_Instant_Power_DrawVld_SendCANR_V2H_Instant_Power_DrawVld
        (false);

#endif

    /* End of DataTypeConversion: '<S176>/Data Type Conversion' */

    /* DataTypeConversion: '<S178>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTHR_Pct_V2H_ResrvBattSts'
     *  Logic: '<S179>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_V2HReserveBatterySts_VTHRPctV2HResrvBattSts

    Rte_Read_VeVTHR_Pct_V2H_ResrvBattSts_Value(&tmpRead_41);

    /* Outport: '<Root>/SendCANR_V2H_Reserve_BatterySts' incorporates:
     *  Inport: '<Root>/VeVTHR_Pct_V2H_ResrvBattSts'
     */
    
        Rte_Write_SendCANR_V2H_Reserve_BatterySts_SendCANR_V2H_Reserve_BatterySts
        (tmpRead_41);

    /* Outport: '<Root>/SendCANR_V2H_Reserve_BatteryStsVld' */
    
        Rte_Write_SendCANR_V2H_Reserve_BatteryStsVld_SendCANR_V2H_Reserve_BatteryStsVld
        (false);

#endif

    /* End of DataTypeConversion: '<S178>/Data Type Conversion' */

    /* DataTypeConversion: '<S180>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTHR_e_V2H_Sts'
     *  Logic: '<S181>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_V2HStatus_VTHReV2HSts

    Rte_Read_VeVTHR_e_V2H_Sts_Value(&tmpRead_42);

    /* Outport: '<Root>/SendCANR_V2H_Status' incorporates:
     *  Inport: '<Root>/VeVTHR_e_V2H_Sts'
     */
    Rte_Write_SendCANR_V2H_Status_SendCANR_V2H_Status((uint8)tmpRead_42);

    /* Outport: '<Root>/SendCANR_V2H_StatusVld' */
    Rte_Write_SendCANR_V2H_StatusVld_SendCANR_V2H_StatusVld(false);

#endif

    /* End of DataTypeConversion: '<S180>/Data Type Conversion' */

    /* DataTypeConversion: '<S182>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTHR_t_V2H_TotPwrDays'
     *  Logic: '<S183>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_V2HTotalPowerTimedays_VTHRtV2HTotPwrDays

    Rte_Read_VeVTHR_t_V2H_TotPwrDays_Value(&tmpRead_43);

    /* Outport: '<Root>/SendCANR_V2H_TotalPowerTimedays' incorporates:
     *  Inport: '<Root>/VeVTHR_t_V2H_TotPwrDays'
     */
    
        Rte_Write_SendCANR_V2H_TotalPowerTimedays_SendCANR_V2H_TotalPowerTimedays
        (tmpRead_43);

    /* Outport: '<Root>/SendCANR_V2H_TotalPowerTimedaysVld' */
    
        Rte_Write_SendCANR_V2H_TotalPowerTimedaysVld_SendCANR_V2H_TotalPowerTimedaysVld
        (false);

#endif

    /* End of DataTypeConversion: '<S182>/Data Type Conversion' */

    /* DataTypeConversion: '<S184>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTHR_t_V2H_TotPwrHrs'
     *  Logic: '<S185>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_V2HTotalPowerTimehours_VTHRtV2HTotPwrHrs

    Rte_Read_VeVTHR_t_V2H_TotPwrHrs_Value(&tmpRead_44);

    /* Outport: '<Root>/SendCANR_V2HTotalPowerTimehours' incorporates:
     *  Inport: '<Root>/VeVTHR_t_V2H_TotPwrHrs'
     */
    
        Rte_Write_SendCANR_V2HTotalPowerTimehours_SendCANR_V2HTotalPowerTimehours
        (tmpRead_44);

    /* Outport: '<Root>/SendCANR_V2HTotalPowerTimehoursVld' */
    
        Rte_Write_SendCANR_V2HTotalPowerTimehoursVld_SendCANR_V2HTotalPowerTimehoursVld
        (false);

#endif

    /* End of DataTypeConversion: '<S184>/Data Type Conversion' */

    /* DataTypeConversion: '<S186>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTHR_t_V2H_TotPwrMin'
     *  Logic: '<S187>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_V2HTotalPowerTimeminutes_VTHRtV2HTotPwrMin

    Rte_Read_VeVTHR_t_V2H_TotPwrMin_Value(&tmpRead_45);

    /* Outport: '<Root>/SendCANR_V2HTotalPowerTimeminut' incorporates:
     *  Inport: '<Root>/VeVTHR_t_V2H_TotPwrMin'
     */
    
        Rte_Write_SendCANR_V2HTotalPowerTimeminut_SendCANR_V2HTotalPowerTimeminut
        (tmpRead_45);

    /* Outport: '<Root>/SendCANR_V2HTotalPowerTimeminutVld' */
    
        Rte_Write_SendCANR_V2HTotalPowerTimeminutVld_SendCANR_V2HTotalPowerTimeminutVld
        (false);

#endif

    /* End of DataTypeConversion: '<S186>/Data Type Conversion' */

    /* DataTypeConversion: '<S188>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeVTHR_b_V2H_MdSts'
     *  Logic: '<S189>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_V2HmodeSts_VTHRbV2HMdSts

    Rte_Read_VeVTHR_b_V2H_MdSts_Value(&tmpRead_46);

    /* Outport: '<Root>/SendCANR_V2H_mode_Sts' incorporates:
     *  Inport: '<Root>/VeVTHR_b_V2H_MdSts'
     */
    Rte_Write_SendCANR_V2H_mode_Sts_SendCANR_V2H_mode_Sts(tmpRead_46);

    /* Outport: '<Root>/SendCANR_V2H_mode_StsVld' */
    Rte_Write_SendCANR_V2H_mode_StsVld_SendCANR_V2H_mode_StsVld(false);

#endif

    /* End of DataTypeConversion: '<S188>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeVDVR_t_V2V_TotalPwrTimeMin' */
    Rte_Read_VeVDVR_t_V2V_TotalPwrTimeMin_Value(&tmpRead_4i);

    /* Inport: '<Root>/VeVDVR_t_V2V_TotalPwrTimeHs' */
    Rte_Read_VeVDVR_t_V2V_TotalPwrTimeHs_Value(&tmpRead_4h);

    /* Inport: '<Root>/VeVDVR_t_V2V_TotalPwrTimeDay' */
    Rte_Read_VeVDVR_t_V2V_TotalPwrTimeDay_Value(&tmpRead_4g);

    /* Inport: '<Root>/VeVDVR_e_V2V_Status' */
    Rte_Read_VeVDVR_e_V2V_Status_Value(&tmpRead_4f);

    /* Inport: '<Root>/VeVDVR_P_V2V_InstPwrDraw' */
    Rte_Read_VeVDVR_P_V2V_InstPwrDraw_Value(&tmpRead_4e);

    /* Inport: '<Root>/VeVTLR_e_TrunkSts' */
    Rte_Read_VeVTLR_e_TrunkSts_Value(&tmpRead_4d);

    /* Inport: '<Root>/VeVTLR_t_DschrgMins' */
    Rte_Read_VeVTLR_t_DschrgMins_Value(&tmpRead_4c);

    /* Inport: '<Root>/VeVTLR_t_DschrgHrs' */
    Rte_Read_VeVTLR_t_DschrgHrs_Value(&tmpRead_4b);

    /* Inport: '<Root>/VeVTLR_t_DschrgDays' */
    Rte_Read_VeVTLR_t_DschrgDays_Value(&tmpRead_4a);

    /* Inport: '<Root>/VeVTLR_P_InstantPwr_IDCM' */
    Rte_Read_VeVTLR_P_InstantPwr_IDCM_Value(&tmpRead_49);

    /* Inport: '<Root>/VeVTLR_P_InstantPwr_PPIM' */
    Rte_Read_VeVTLR_P_InstantPwr_PPIM_Value(&tmpRead_48);

    /* Inport: '<Root>/VeVTLR_e_FrunkSts' */
    Rte_Read_VeVTLR_e_FrunkSts_Value(&tmpRead_47);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_V2L_Frunk_Status' incorporates:
     *  DataTypeConversion: '<S190>/Data Type Conversion'
     *  Inport: '<Root>/VeVTLR_e_FrunkSts'
     */

(uint8 = SendCANR_V2L_Frunk_Status_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_V2L_Frunk_Status_SendCANR_V2L_Frunk_Status((uint8)
        tmpRead_47);

    /* Outport: '<Root>/SendCANR_V2L_Frunk_StatusVld' incorporates:
     *  Logic: '<S190>/Logical Operator'
     */
    Rte_Write_SendCANR_V2L_Frunk_StatusVld_SendCANR_V2L_Frunk_StatusVld
        (true);

    /* Outport: '<Root>/SendCANR_V2LInstantPwrDrawFrunk' incorporates:
     *  DataTypeConversion: '<S191>/Data Type Conversion'
     */
    

tmpRead_48 = SendCANR_V2LInstantPwrDrawFrunk_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_V2LInstantPwrDrawFrunk_SendCANR_V2LInstantPwrDrawFrunk        (tmpRead_48);

    /* Outport: '<Root>/SendCANR_V2LInstantPwrDrawFrunkVld' incorporates:
     *  Logic: '<S191>/Logical Operator'
     */
    
        Rte_Write_SendCANR_V2LInstantPwrDrawFrunkVld_SendCANR_V2LInstantPwrDrawFrunkVld
        (true);

    /* Outport: '<Root>/SendCANR_V2LInstantPwrDrawTrunk' incorporates:
     *  DataTypeConversion: '<S192>/Data Type Conversion'
     */
    

tmpRead_49 = SendCANR_V2LInstantPwrDrawTrunk_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_V2LInstantPwrDrawTrunk_SendCANR_V2LInstantPwrDrawTrunk        (tmpRead_49);

    /* Outport: '<Root>/SendCANR_V2LInstantPwrDrawTrunkVld' incorporates:
     *  Logic: '<S192>/Logical Operator'
     */
    
        Rte_Write_SendCANR_V2LInstantPwrDrawTrunkVld_SendCANR_V2LInstantPwrDrawTrunkVld
        (true);

    /* Outport: '<Root>/SendCANR_V2L_Total_PwrTimedays' incorporates:
     *  DataTypeConversion: '<S193>/Data Type Conversion'
     */
    

tmpRead_4a = SendCANR_V2L_Total_PwrTimedays_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_V2L_Total_PwrTimedays_SendCANR_V2L_Total_PwrTimedays        (tmpRead_4a);

    /* Outport: '<Root>/SendCANR_V2L_Total_PwrTimedaysVld' incorporates:
     *  Logic: '<S193>/Logical Operator'
     */
    
        Rte_Write_SendCANR_V2L_Total_PwrTimedaysVld_SendCANR_V2L_Total_PwrTimedaysVld
        (true);

    /* Outport: '<Root>/SendCANR_V2LTotalPowerTimehours' incorporates:
     *  DataTypeConversion: '<S194>/Data Type Conversion'
     */
    

tmpRead_4b = SendCANR_V2LTotalPowerTimehours_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_V2LTotalPowerTimehours_SendCANR_V2LTotalPowerTimehours        (tmpRead_4b);

    /* Outport: '<Root>/SendCANR_V2LTotalPowerTimehoursVld' incorporates:
     *  Logic: '<S194>/Logical Operator'
     */
    
        Rte_Write_SendCANR_V2LTotalPowerTimehoursVld_SendCANR_V2LTotalPowerTimehoursVld
        (true);

    /* Outport: '<Root>/SendCANR_V2LTotalPowerTimeminut' incorporates:
     *  DataTypeConversion: '<S195>/Data Type Conversion'
     */
    

tmpRead_4c = SendCANR_V2LTotalPowerTimeminut_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_V2LTotalPowerTimeminut_SendCANR_V2LTotalPowerTimeminut        (tmpRead_4c);

    /* Outport: '<Root>/SendCANR_V2LTotalPowerTimeminutVld' incorporates:
     *  Logic: '<S195>/Logical Operator'
     */
    
        Rte_Write_SendCANR_V2LTotalPowerTimeminutVld_SendCANR_V2LTotalPowerTimeminutVld
        (true);

    /* Outport: '<Root>/SendCANR_V2L_Trunk_Status' incorporates:
     *  DataTypeConversion: '<S196>/Data Type Conversion'
     *  Inport: '<Root>/VeVTLR_e_TrunkSts'
     */

(uint8 = SendCANR_V2L_Trunk_Status_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_V2L_Trunk_Status_SendCANR_V2L_Trunk_Status((uint8)
        tmpRead_4d);

    /* Outport: '<Root>/SendCANR_V2L_Trunk_StatusVld' incorporates:
     *  Logic: '<S196>/Logical Operator'
     */
    Rte_Write_SendCANR_V2L_Trunk_StatusVld_SendCANR_V2L_Trunk_StatusVld
        (true);

    /* Outport: '<Root>/SendCANR_V2V_Instant_Power_Draw' incorporates:
     *  DataTypeConversion: '<S197>/Data Type Conversion'
     */
    

tmpRead_4e = SendCANR_V2V_Instant_Power_Draw_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_V2V_Instant_Power_Draw_SendCANR_V2V_Instant_Power_Draw        (tmpRead_4e);

    /* Outport: '<Root>/SendCANR_V2V_Instant_Power_DrawVld' incorporates:
     *  Logic: '<S197>/Logical Operator'
     */
    
        Rte_Write_SendCANR_V2V_Instant_Power_DrawVld_SendCANR_V2V_Instant_Power_DrawVld
        (true);

    /* Outport: '<Root>/SendCANR_V2V_Status' incorporates:
     *  DataTypeConversion: '<S198>/Data Type Conversion'
     *  Inport: '<Root>/VeVDVR_e_V2V_Status'
     */

tmpRead_4f = SendCANR_V2V_Status_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_V2V_Status_SendCANR_V2V_Status((uint8)tmpRead_4f);

    /* Outport: '<Root>/SendCANR_V2V_StatusVld' incorporates:
     *  Logic: '<S198>/Logical Operator'
     */
    Rte_Write_SendCANR_V2V_StatusVld_SendCANR_V2V_StatusVld(true);

    /* Outport: '<Root>/SendCANR_V2V_TotalPowerTimedays' incorporates:
     *  DataTypeConversion: '<S199>/Data Type Conversion'
     */
    

tmpRead_4g = SendCANR_V2V_TotalPowerTimedays_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_V2V_TotalPowerTimedays_SendCANR_V2V_TotalPowerTimedays        (tmpRead_4g);

    /* Outport: '<Root>/SendCANR_V2V_TotalPowerTimedaysVld' incorporates:
     *  Logic: '<S199>/Logical Operator'
     */
    
        Rte_Write_SendCANR_V2V_TotalPowerTimedaysVld_SendCANR_V2V_TotalPowerTimedaysVld
        (true);

    /* Outport: '<Root>/SendCANR_V2VTotalPowerTimehours' incorporates:
     *  DataTypeConversion: '<S200>/Data Type Conversion'
     */
    

tmpRead_4h = SendCANR_V2VTotalPowerTimehours_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_V2VTotalPowerTimehours_SendCANR_V2VTotalPowerTimehours        (tmpRead_4h);

    /* Outport: '<Root>/SendCANR_V2VTotalPowerTimehoursVld' incorporates:
     *  Logic: '<S200>/Logical Operator'
     */
    
        Rte_Write_SendCANR_V2VTotalPowerTimehoursVld_SendCANR_V2VTotalPowerTimehoursVld
        (true);

    /* Outport: '<Root>/SendCANR_V2VTotalPowerTimeminut' incorporates:
     *  DataTypeConversion: '<S201>/Data Type Conversion'
     */
    

tmpRead_4i = SendCANR_V2VTotalPowerTimeminut_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_V2VTotalPowerTimeminut_SendCANR_V2VTotalPowerTimeminut        (tmpRead_4i);

    /* Outport: '<Root>/SendCANR_V2VTotalPowerTimeminutVld' incorporates:
     *  Logic: '<S201>/Logical Operator'
     */
    
        Rte_Write_SendCANR_V2VTotalPowerTimeminutVld_SendCANR_V2VTotalPowerTimeminutVld
        (true);

    /* DataTypeConversion: '<S202>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeERER_l_EstRange_Fuel'
     *  Logic: '<S203>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_EstRangeFuel_ERERlEstRangeFuel

    Rte_Read_VeERER_l_EstRange_Fuel_Value(&tmpRead_4j);

    /* Outport: '<Root>/SendCANR_EstRange_Fuel' incorporates:
     *  Inport: '<Root>/VeERER_l_EstRange_Fuel'
     */
    Rte_Write_SendCANR_EstRange_Fuel_SendCANR_EstRange_Fuel(tmpRead_4j);

    /* Outport: '<Root>/SendCANR_EstRange_FuelVld' */
    Rte_Write_SendCANR_EstRange_FuelVld_SendCANR_EstRange_FuelVld(false);

#endif

    /* End of DataTypeConversion: '<S202>/Data Type Conversion' */

    /* DataTypeConversion: '<S204>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeERER_l_EstRange_Total'
     *  Logic: '<S205>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_EstRangeTotal_ERERlEstRangeTotal

    Rte_Read_VeERER_l_EstRange_Total_Value(&tmpRead_4k);

    /* Outport: '<Root>/SendCANR_EstRange_Total' incorporates:
     *  Inport: '<Root>/VeERER_l_EstRange_Total'
     */
    Rte_Write_SendCANR_EstRange_Total_SendCANR_EstRange_Total(tmpRead_4k);

    /* Outport: '<Root>/SendCANR_EstRange_TotalVld' */
    Rte_Write_SendCANR_EstRange_TotalVld_SendCANR_EstRange_TotalVld(false);

#endif

    /* End of DataTypeConversion: '<S204>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA' */
    Rte_Read_VeTMIR_b_OnBrdChrg_ClntTmpIn_FA_Value(&tmpRead_4p);

    /* Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn' */
    Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value(&tmpRead_4o);

    /* Inport: '<Root>/VeASLR_v_TurtleMdSpdLim' */
    Rte_Read_VeASLR_v_TurtleMdSpdLim_Value(&tmpRead_4n);

    /* Inport: '<Root>/VeEBMR_Pct_PwrSht_Prep' */
    Rte_Read_VeEBMR_Pct_PwrSht_Prep_Value(&tmpRead_4m);

    /* Inport: '<Root>/VeEBMR_t_PrepCntDwn' */
    Rte_Read_VeEBMR_t_PrepCntDwn_Value(&tmpRead_4l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Outport: '<Root>/SendCANR_P2P_Timer' incorporates:
     *  DataTypeConversion: '<S206>/Data Type Conversion'
     */

tmpRead_4l = SendCANR_P2P_Timer_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_P2P_Timer_SendCANR_P2P_Timer(tmpRead_4l);

    /* Outport: '<Root>/SendCANR_P2P_TimerVld' incorporates:
     *  Logic: '<S206>/Logical Operator'
     */
    Rte_Write_SendCANR_P2P_TimerVld_SendCANR_P2P_TimerVld(true);

    /* DataTypeConversion: '<S207>/Data Type Conversion' */
    tmpRead_18 = fmodf(floorf(tmpRead_4m), 256.0F);

    /* Outport: '<Root>/SendCANR_PwrSht_Prep_Prt_Cmplt' incorporates:
     *  DataTypeConversion: '<S207>/Data Type Conversion'
     */
    

tmpRead_18 = SendCANR_PwrSht_Prep_Prt_Cmplt_CT1B_FUNC_ac_Test_1;
        Rte_Write_SendCANR_PwrSht_Prep_Prt_Cmplt_SendCANR_PwrSht_Prep_Prt_Cmplt        ((uint8)((sint32)((tmpRead_18 < 0.0F) ? ((sint32)((uint8)((sint32)
              (-((sint32)((sint8)((uint8)((float32)(-tmpRead_18))))))))) :
                          ((sint32)((uint8)tmpRead_18)))));

    /* Outport: '<Root>/SendCANR_PwrSht_Prep_Prt_CmpltVld' incorporates:
     *  Logic: '<S207>/Logical Operator'
     */
    
        Rte_Write_SendCANR_PwrSht_Prep_Prt_CmpltVld_SendCANR_PwrSht_Prep_Prt_CmpltVld
        (true);

    /* DataTypeConversion: '<S208>/Data Type Conversion' */
    tmpRead_18 = fmodf(floorf(tmpRead_4n), 256.0F);

    /* Outport: '<Root>/SendCANR_Turtle_Speed_Limit' incorporates:
     *  DataTypeConversion: '<S208>/Data Type Conversion'
     */

 tmpRead_18= SendCANR_Turtle_Speed_Limit_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_Turtle_Speed_Limit_SendCANR_Turtle_Speed_Limit        ((uint8)((sint32)((tmpRead_18 < 0.0F) ? ((sint32)((uint8)((sint32)
              (-((sint32)((sint8)((uint8)((float32)(-tmpRead_18))))))))) :
                          ((sint32)((uint8)tmpRead_18)))));

    /* Outport: '<Root>/SendCANR_Turtle_Speed_LimitVld' incorporates:
     *  Logic: '<S208>/Logical Operator'
     */
    
        Rte_Write_SendCANR_Turtle_Speed_LimitVld_SendCANR_Turtle_Speed_LimitVld
        (true);

    /* Outport: '<Root>/SendCANR_T4_Sensor_Temp_FD3' incorporates:
     *  DataTypeConversion: '<S209>/Data Type Conversion'
     */

tmpRead_4o = SendCANR_T4_Sensor_Temp_FD3_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_T4_Sensor_Temp_FD3_SendCANR_T4_Sensor_Temp_FD3        (tmpRead_4o);

    /* Outport: '<Root>/SendCANR_T4_Sensor_Temp_FD3Vld' incorporates:
     *  Logic: '<S209>/Logical Operator'
     */
    
        Rte_Write_SendCANR_T4_Sensor_Temp_FD3Vld_SendCANR_T4_Sensor_Temp_FD3Vld(
        !tmpRead_4p);

    /* DataTypeConversion: '<S210>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeSABR_y_RELSD_FailureSts'
     *  Logic: '<S211>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RELSDFailureSts_SABRyRELSDFailureSts

    Rte_Read_VeSABR_y_RELSD_FailureSts_Value(&tmpRead_4q);

    /* Outport: '<Root>/SendCANR_RELSD_FailureSts' incorporates:
     *  Inport: '<Root>/VeSABR_y_RELSD_FailureSts'
     */

tmpRead_4q = SendCANR_RELSD_FailureSts_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_RELSD_FailureSts_SendCANR_RELSD_FailureSts        (tmpRead_4q);

    /* Outport: '<Root>/SendCANR_RELSD_FailureStsVld' */
    Rte_Write_SendCANR_RELSD_FailureStsVld_SendCANR_RELSD_FailureStsVld
        (false);

#endif

    /* End of DataTypeConversion: '<S210>/Data Type Conversion' */

    /* DataTypeConversion: '<S212>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeSABR_y_RELSD_Status'
     *  Logic: '<S213>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RELSDStatus_SABRyRELSDStatus

    Rte_Read_VeSABR_y_RELSD_Status_Value(&tmpRead_4r);

    /* Outport: '<Root>/SendCANR_RELSD_Status' incorporates:
     *  Inport: '<Root>/VeSABR_y_RELSD_Status'
     */

tmpRead_4r = SendCANR_RELSD_Status_CT1B_FUNC_ac_Test_1;
    Rte_Write_SendCANR_RELSD_Status_SendCANR_RELSD_Status(tmpRead_4r);

    /* Outport: '<Root>/SendCANR_RELSD_StatusVld' */
    Rte_Write_SendCANR_RELSD_StatusVld_SendCANR_RELSD_StatusVld(false);

#endif

    /* End of DataTypeConversion: '<S212>/Data Type Conversion' */

    /* DataTypeConversion: '<S214>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeSABR_M_RELSD_TgtTrq'
     *  Logic: '<S215>/Logical Operator'
     */
#if Rte_SysCon_VrntCT1B_RELSDTgtTrq_SABRMRELSDTgtTrq

    Rte_Read_VeSABR_M_RELSD_TgtTrq_Value(&tmpRead_4s);

    /* Outport: '<Root>/SendCANR_RELSD_TgtTrq_FD3' incorporates:
     *  Inport: '<Root>/VeSABR_M_RELSD_TgtTrq'
     */
    Rte_Write_SendCANR_RELSD_TgtTrq_FD3_SendCANR_RELSD_TgtTrq_FD3
        (tmpRead_4s);

    /* Outport: '<Root>/SendCANR_RELSD_TgtTrq_FD3Vld' */
    Rte_Write_SendCANR_RELSD_TgtTrq_FD3Vld_SendCANR_RELSD_TgtTrq_FD3Vld
        (false);

#endif

    /* End of DataTypeConversion: '<S214>/Data Type Conversion' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, CT1B_FUNC_CODE) CT1B_FUNC_ac_Init
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
