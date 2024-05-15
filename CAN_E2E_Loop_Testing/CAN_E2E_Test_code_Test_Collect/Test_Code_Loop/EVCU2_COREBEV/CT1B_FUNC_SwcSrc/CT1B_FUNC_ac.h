/*
 * File: CT1B_FUNC_ac.h
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

#ifndef RTW_HEADER_CT1B_FUNC_ac_h_
#define RTW_HEADER_CT1B_FUNC_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef CT1B_FUNC_ac_COMMON_INCLUDES_
#define CT1B_FUNC_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CT1B_FUNC.h"
#endif                                 /* CT1B_FUNC_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* MW_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */
#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_VrntCT1B_MotorADCCurrent_INVRIMtrADCCrnt
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_VrntCT1B_MotorADCCurrent_INVRIMtrCDCCrnt
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorADCCurrent', 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorADCCurrent_Vld' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorADCCurrent' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_VrntCT1B_MotorADCVoltage_INVRUMtrADCVolt
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_VrntCT1B_MotorADCVoltage_INVRUMtrCDCVolt
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorADCVoltage', 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorADCVoltage_Vld' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorADCVoltage' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_VrntCT1B_MotorAInverterState_INVReMtrAInvrtrSt
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_VrntCT1B_MotorAInverterState_INVReMtrCInvrtrSt
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorAInverterState' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorAInverterState'"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_VrntCT1B_MotorAInverterTemp_INVRTMtrAInvrtrTemp
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_VrntCT1B_MotorAInverterTemp_INVRTMtrCInvrtrTemp
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorAInverterTemp', 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorAInverterTemp_Vld' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorAInverterTemp' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_VrntCT1B_MotorARPM_MSPRnMtrASpd
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_VrntCT1B_MotorARPM_MSPRnMtrCSpd
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorARPM', 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorARPM_Vld' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorARPM' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrATemp
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_VrntCT1B_MotorATemperature_INVRTMtrCTemp
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorATemperature', 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorATemperature_Vld' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorATemperature' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_VrntCT1B_MotorATorqueAchieved_MTIRMMtrATorqAchieved
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_VrntCT1B_MotorATorqueAchieved_MTIRMMtrCTorqAchieved
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorATorqueAchieved', 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorATorqueAchieved_Vld' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/Vrnt_MotorATorqueAchieved' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrATemp
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_VrntCT1B_MCPATemp_INVRTMtrCTemp
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/MCPA_DATA2/Vrnt_MCPATemp', 'CT1B_FUNC_ac/SigMngt/MCPA_DATA2/Vrnt_MCPATemp_Vld' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CT1B_FUNC_ac/SigMngt/MCPA_DATA2/Vrnt_MCPATemp' and others"
#endif

/* MW_END_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

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
 * '<Root>' : 'CT1B_FUNC_ac'
 * '<S1>'   : 'CT1B_FUNC_ac/Initialize Function'
 * '<S2>'   : 'CT1B_FUNC_ac/SigMngt'
 * '<S3>'   : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1'
 * '<S4>'   : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT'
 * '<S5>'   : 'CT1B_FUNC_ac/SigMngt/CLIMATE_SCHEDULE_HCP1'
 * '<S6>'   : 'CT1B_FUNC_ac/SigMngt/FOTA_RSP_EVCU2'
 * '<S7>'   : 'CT1B_FUNC_ac/SigMngt/HCP_CHARGING_STAT'
 * '<S8>'   : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2'
 * '<S9>'   : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC'
 * '<S10>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_POWERTRAIN6'
 * '<S11>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS'
 * '<S12>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_THERMAL_COMMAND'
 * '<S13>'  : 'CT1B_FUNC_ac/SigMngt/J1979_03_CARB_2'
 * '<S14>'  : 'CT1B_FUNC_ac/SigMngt/MCPA_DATA2'
 * '<S15>'  : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU'
 * '<S16>'  : 'CT1B_FUNC_ac/SigMngt/VDCM_HMI2'
 * '<S17>'  : 'CT1B_FUNC_ac/SigMngt/VDCM_PWT3'
 * '<S18>'  : 'CT1B_FUNC_ac/SigMngt/VEHDYN_FD_1'
 * '<S19>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/ChargeUntilFull1_Sts'
 * '<S20>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/ChargeUntilFull2_Sts'
 * '<S21>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/Charge_Schedule_Type1_Sts'
 * '<S22>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/Charge_Schedule_Type2_Sts'
 * '<S23>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/End_Time_Hr1_Sts'
 * '<S24>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/End_Time_Hr2_Sts'
 * '<S25>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/End_Time_Min1_Sts'
 * '<S26>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/End_Time_Min2_Sts'
 * '<S27>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/External_ChargeTarget1_Sts'
 * '<S28>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/External_ChargeTarget2_Sts'
 * '<S29>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/Immediate_ChargeTarget1_Sts'
 * '<S30>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/Immediate_ChargeTarget2_Sts'
 * '<S31>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/Schedule_Confirmed1'
 * '<S32>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/Schedule_Confirmed2'
 * '<S33>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/Schedule_Day1_Sts'
 * '<S34>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/Schedule_Day2_Sts'
 * '<S35>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/Start_Time_Hr1_Sts'
 * '<S36>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/Start_Time_Hr2_Sts'
 * '<S37>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/Start_Time_Min1_Sts'
 * '<S38>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_HCP1/Start_Time_Min2_Sts'
 * '<S39>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Next_Charge_EndDay'
 * '<S40>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Next_Charge_End_Time_Hr'
 * '<S41>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Next_Charge_End_Time_Min'
 * '<S42>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Next_Charge_StartDay'
 * '<S43>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Next_Charge_Start_Time_Hr'
 * '<S44>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Next_Charge_Start_Time_Min'
 * '<S45>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Next_Climate_Day'
 * '<S46>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Next_Climate_Time_Hr'
 * '<S47>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Next_Climate_Time_Min'
 * '<S48>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Next_SchCabin_Temp'
 * '<S49>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Nxt_Charge_Schedule_Type'
 * '<S50>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Nxt_Ext_Charge_End_Time_Hr'
 * '<S51>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Nxt_Ext_Charge_End_Time_Min'
 * '<S52>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Nxt_External_Charge_EndDay'
 * '<S53>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Nxt_External_Charge_ExternalTgt'
 * '<S54>'  : 'CT1B_FUNC_ac/SigMngt/CHARGE_SCHEDULE_NEXT/Nxt_External_Charge_ImmediateTgt'
 * '<S55>'  : 'CT1B_FUNC_ac/SigMngt/CLIMATE_SCHEDULE_HCP1/AllowClimateSchd1_Sts'
 * '<S56>'  : 'CT1B_FUNC_ac/SigMngt/CLIMATE_SCHEDULE_HCP1/AllowClimateSchd2_Sts'
 * '<S57>'  : 'CT1B_FUNC_ac/SigMngt/CLIMATE_SCHEDULE_HCP1/ClimateSchd1_Day_Sts'
 * '<S58>'  : 'CT1B_FUNC_ac/SigMngt/CLIMATE_SCHEDULE_HCP1/ClimateSchd1_Departure_Hr_Sts'
 * '<S59>'  : 'CT1B_FUNC_ac/SigMngt/CLIMATE_SCHEDULE_HCP1/ClimateSchd1_Departure_Min_Sts'
 * '<S60>'  : 'CT1B_FUNC_ac/SigMngt/CLIMATE_SCHEDULE_HCP1/ClimateSchd2_Day_Sts'
 * '<S61>'  : 'CT1B_FUNC_ac/SigMngt/CLIMATE_SCHEDULE_HCP1/ClimateSchd2_Departure_Hr_Sts'
 * '<S62>'  : 'CT1B_FUNC_ac/SigMngt/CLIMATE_SCHEDULE_HCP1/ClimateSchd2_Departure_Min_Sts'
 * '<S63>'  : 'CT1B_FUNC_ac/SigMngt/CLIMATE_SCHEDULE_HCP1/Climate_Cabin_Temp1_Sts'
 * '<S64>'  : 'CT1B_FUNC_ac/SigMngt/CLIMATE_SCHEDULE_HCP1/Climate_Cabin_Temp2_Sts'
 * '<S65>'  : 'CT1B_FUNC_ac/SigMngt/CLIMATE_SCHEDULE_HCP1/Enable_ClimateSchd1_Sts'
 * '<S66>'  : 'CT1B_FUNC_ac/SigMngt/CLIMATE_SCHEDULE_HCP1/Enable_ClimateSchd2_Sts'
 * '<S67>'  : 'CT1B_FUNC_ac/SigMngt/FOTA_RSP_EVCU2/ReadyStatusEVCU2_VTHReFOTAReadySts'
 * '<S68>'  : 'CT1B_FUNC_ac/SigMngt/FOTA_RSP_EVCU2/ReadyStatusEVCU2_dflt_VTHReFOTAReadySts_Vld'
 * '<S69>'  : 'CT1B_FUNC_ac/SigMngt/HCP_CHARGING_STAT/Chargeport_Lock_Status'
 * '<S70>'  : 'CT1B_FUNC_ac/SigMngt/HCP_CHARGING_STAT/Cooperative_Status'
 * '<S71>'  : 'CT1B_FUNC_ac/SigMngt/HCP_CHARGING_STAT/EVChargeCurrent_OBCRIChrgCrntReqDelta'
 * '<S72>'  : 'CT1B_FUNC_ac/SigMngt/HCP_CHARGING_STAT/EVChargeCurrent_dflt_OBCRIChrgCrntReqDelta_Vld'
 * '<S73>'  : 'CT1B_FUNC_ac/SigMngt/HCP_CHARGING_STAT/EVSEPower_OBCRPEVSEPwr'
 * '<S74>'  : 'CT1B_FUNC_ac/SigMngt/HCP_CHARGING_STAT/EVSEPower_dflt_OBCRPEVSEPwr_Vld'
 * '<S75>'  : 'CT1B_FUNC_ac/SigMngt/HCP_CHARGING_STAT/EnergytoBattery_OBCRPPowertoBattery'
 * '<S76>'  : 'CT1B_FUNC_ac/SigMngt/HCP_CHARGING_STAT/EnergytoBattery_dflt_OBCRPPowertoBattery_Vld'
 * '<S77>'  : 'CT1B_FUNC_ac/SigMngt/HCP_CHARGING_STAT/TotalBatteryCapacity_OBCRqBatteryAmpHrCap'
 * '<S78>'  : 'CT1B_FUNC_ac/SigMngt/HCP_CHARGING_STAT/TotalBatteryCapacity_dflt_OBCRqBatteryAmpHrCap_Vld'
 * '<S79>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/DischargingSysStatus'
 * '<S80>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/LaunchHardBtnLED_TIMReLaunchMdSwtchLED'
 * '<S81>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/LaunchHardBtnLED_dflt_TIMReLaunchMdSwtchLED_Vld'
 * '<S82>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/PnC_Failure'
 * '<S83>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/PnC_Reattepmt_Failure'
 * '<S84>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPAMBIENTTMP_TPCRbRacePrepAmbCheck'
 * '<S85>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPAMBIENTTMP_dflt_TPCRbRacePrepAmbCheck_Vld'
 * '<S86>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPBATTLVLSTS_OBCRbRacePrepBattLvlSts'
 * '<S87>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPBATTLVLSTS_dflt_OBCRbRacePrepBattLvlSts_Vld'
 * '<S88>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPEVDEACTIME_TPCRtRacePrepDeacTime'
 * '<S89>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPEVDEACTIME_dflt_TPCRtRacePrepDeacTime_Vld'
 * '<S90>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPEVSYSTEMSTATUS_TPCRbRacePrepEVSysStatus'
 * '<S91>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPEVSYSTEMSTATUS_dflt_TPCRbRacePrepEVSysStatus_Vld'
 * '<S92>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPHVBATTSOCTGT_TPCRTRacePrepSOCTrgt'
 * '<S93>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPHVBATTSOCTGT_dflt_TPCRTRacePrepSOCTrgt_Vld'
 * '<S94>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPRACETYPESTS_TIMReRacePrepRaceTypeSts'
 * '<S95>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPRACETYPESTS_dflt_TIMReRacePrepRaceTypeSts_Vld'
 * '<S96>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPTHERMALTGT_TPCRTRacePrepThrmlTrgt'
 * '<S97>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RACEPREPTHERMALTGT_dflt_TPCRTRacePrepThrmlTrgt_Vld'
 * '<S98>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RIACFANRange_ERERlACFanRange'
 * '<S99>'  : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RIACFANRange_ERERlACFanRange_Vld'
 * '<S100>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RIAUDIORange_ERERlAudioRange'
 * '<S101>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RIAUDIORange_ERERlAudioRange_Vld'
 * '<S102>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RIDEFROSTRange_ERERlDefrostRange'
 * '<S103>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RIDEFROSTRange_ERERlDefrostRange_Vld'
 * '<S104>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RILIGHTSRange_ERERlLightsRange'
 * '<S105>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RILIGHTSRange_ERERlLightsRange_Vld'
 * '<S106>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RIOTHERRange_ERERlOtherRange'
 * '<S107>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RIOTHERRange_ERERlOtherRange_Vld'
 * '<S108>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RISEATSWHLRange_ERERlSeatswhlRange'
 * '<S109>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RISEATSWHLRange_ERERlSeatswhlRange_Vld'
 * '<S110>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RITOTALRangeAdd_ERERlTotalRange'
 * '<S111>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/RITOTALRangeAdd_ERERlTotalRange_Vld'
 * '<S112>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/Racemode_Popup_PT'
 * '<S113>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/CabinConditioningSts'
 * '<S114>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/CabinPreconditionReqSts'
 * '<S115>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/CompressorState'
 * '<S116>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/ElecClntHtrInletTemp'
 * '<S117>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/ElecCoolantHtrPwr'
 * '<S118>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/FRfShVlvSts'
 * '<S119>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/HTAuxPmpMontrngRPM'
 * '<S120>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/HTAuxPmpRPMAct'
 * '<S121>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/HTShtOffVlvReq'
 * '<S122>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/HVBatCoolantLevelLow_DPT'
 * '<S123>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/HVBatCritCondT'
 * '<S124>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/HeaterCoreInletTemp'
 * '<S125>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/RearAirHtrCoreTemp'
 * '<S126>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/RearAirHtrPCBTemp'
 * '<S127>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/RearAirHtrPwrCnsAct'
 * '<S128>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/SchCond_Time_Till_Dep'
 * '<S129>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_HVAC/Sch_PreCondition_Sts'
 * '<S130>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_POWERTRAIN6/V2HDischargeCapacity_VTHRPV2HDschgCap'
 * '<S131>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_POWERTRAIN6/V2HDischargeCapacity_dflt_VTHRPV2HDschgCap_Vld'
 * '<S132>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorADCCurrent_INVRIMtrADCCrnt'
 * '<S133>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorADCCurrent_INVRIMtrADCCrnt_Vld'
 * '<S134>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorADCCurrent_INVRIMtrCDCCrnt'
 * '<S135>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorADCCurrent_INVRIMtrCDCCrnt_Vld'
 * '<S136>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorADCVoltage_INVRUMtrADCVolt'
 * '<S137>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorADCVoltage_INVRUMtrADCVolt_Vld'
 * '<S138>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorADCVoltage_INVRUMtrCDCVolt'
 * '<S139>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorADCVoltage_INVRUMtrCDCVolt_Vld'
 * '<S140>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorAInverterState_INVReMtrAInvrtrSt'
 * '<S141>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorAInverterState_INVReMtrCInvrtrSt'
 * '<S142>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorAInverterState_dflt_INVReMtrAInvrtrSt_Vld'
 * '<S143>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorAInverterTemp_INVRTMtrAInvrtrTemp'
 * '<S144>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorAInverterTemp_INVRTMtrAInvrtrTemp_Vld'
 * '<S145>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorAInverterTemp_INVRTMtrCInvrtrTemp'
 * '<S146>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorAInverterTemp_INVRTMtrCInvrtrTemp_Vld'
 * '<S147>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorARPM_MSPRnMtrASpd'
 * '<S148>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorARPM_MSPRnMtrASpd_Vld'
 * '<S149>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorARPM_MSPRnMtrCSpd'
 * '<S150>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorARPM_MSPRnMtrCSpd_Vld'
 * '<S151>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorATemperature_INVRTMtrATemp'
 * '<S152>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorATemperature_INVRTMtrATemp_Vld'
 * '<S153>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorATemperature_INVRTMtrCTemp'
 * '<S154>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorATemperature_INVRTMtrCTemp_Vld'
 * '<S155>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorATorqueAchieved_MTIRMMtrATorqAchieved'
 * '<S156>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorATorqueAchieved_MTIRMMtrATorqAchieved_Vld'
 * '<S157>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorATorqueAchieved_MTIRMMtrCTorqAchieved'
 * '<S158>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorATorqueAchieved_MTIRMMtrCTorqAchieved_Vld'
 * '<S159>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_DC_Current'
 * '<S160>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_DC_Voltage'
 * '<S161>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_InverterState'
 * '<S162>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_InverterTemp'
 * '<S163>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_RPM'
 * '<S164>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_Temperature'
 * '<S165>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_RM_MOTORS/MotorB_TorqueAchieved'
 * '<S166>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_THERMAL_COMMAND/AirflowRequest'
 * '<S167>' : 'CT1B_FUNC_ac/SigMngt/HYBRID_THERMAL_COMMAND/RadiatorFanSts'
 * '<S168>' : 'CT1B_FUNC_ac/SigMngt/J1979_03_CARB_2/SystActualChargeLim_OBCRPActChargePowerLim'
 * '<S169>' : 'CT1B_FUNC_ac/SigMngt/J1979_03_CARB_2/SystActualChargeLim_OBCRPActChargePowerLim_Vld'
 * '<S170>' : 'CT1B_FUNC_ac/SigMngt/J1979_03_CARB_2/SystActualChargePwr_OBCRPActChargePower'
 * '<S171>' : 'CT1B_FUNC_ac/SigMngt/J1979_03_CARB_2/SystActualChargePwr_OBCRPActChargePower_Vld'
 * '<S172>' : 'CT1B_FUNC_ac/SigMngt/MCPA_DATA2/MCPATemp_INVRTMtrATemp'
 * '<S173>' : 'CT1B_FUNC_ac/SigMngt/MCPA_DATA2/MCPATemp_INVRTMtrATemp_Vld'
 * '<S174>' : 'CT1B_FUNC_ac/SigMngt/MCPA_DATA2/MCPATemp_INVRTMtrCTemp'
 * '<S175>' : 'CT1B_FUNC_ac/SigMngt/MCPA_DATA2/MCPATemp_INVRTMtrCTemp_Vld'
 * '<S176>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HInstantPowerDraw_VTHRPV2HInstPwrDraw'
 * '<S177>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HInstantPowerDraw_dflt_VTHRPV2HInstPwrDraw_Vld'
 * '<S178>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HReserveBatterySts_VTHRPctV2HResrvBattSts'
 * '<S179>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HReserveBatterySts_dflt_VTHRPctV2HResrvBattSts_Vld'
 * '<S180>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HStatus_VTHReV2HSts'
 * '<S181>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HStatus_dflt_VTHReV2HSts_Vld'
 * '<S182>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HTotalPowerTimedays_VTHRtV2HTotPwrDays'
 * '<S183>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HTotalPowerTimedays_dflt_VTHRtV2HTotPwrDays_Vld'
 * '<S184>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HTotalPowerTimehours_VTHRtV2HTotPwrHrs'
 * '<S185>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HTotalPowerTimehours_dflt_VTHRtV2HTotPwrHrs_Vld'
 * '<S186>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HTotalPowerTimeminutes_VTHRtV2HTotPwrMin'
 * '<S187>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HTotalPowerTimeminutes_dflt_VTHRtV2HTotPwrMin_Vld'
 * '<S188>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HmodeSts_VTHRbV2HMdSts'
 * '<S189>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2HmodeSts_dflt_VTHRbV2HMdSts_Vld'
 * '<S190>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2L_Frunk_Status'
 * '<S191>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2L_Instant_Power_Draw_Frunk'
 * '<S192>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2L_Instant_Power_Draw_Trunk'
 * '<S193>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2L_Total_Power_Time_days'
 * '<S194>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2L_Total_Power_Time_hours'
 * '<S195>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2L_Total_Power_Time_minutes'
 * '<S196>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2L_Trunk_Status'
 * '<S197>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2V_Instant_Power_Draw'
 * '<S198>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2V_Status'
 * '<S199>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2V_Total_Power_Time_days'
 * '<S200>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2V_Total_Power_Time_hours'
 * '<S201>' : 'CT1B_FUNC_ac/SigMngt/V2X_EVCU/V2V_Total_Power_Time_minutes'
 * '<S202>' : 'CT1B_FUNC_ac/SigMngt/VDCM_HMI2/EstRangeFuel_ERERlEstRangeFuel'
 * '<S203>' : 'CT1B_FUNC_ac/SigMngt/VDCM_HMI2/EstRangeFuel_dflt_ERERlEstRangeFuel_Vld'
 * '<S204>' : 'CT1B_FUNC_ac/SigMngt/VDCM_HMI2/EstRangeTotal_ERERlEstRangeTotal'
 * '<S205>' : 'CT1B_FUNC_ac/SigMngt/VDCM_HMI2/EstRangeTotal_dflt_ERERlEstRangeTotal_Vld'
 * '<S206>' : 'CT1B_FUNC_ac/SigMngt/VDCM_HMI2/P2P_Timer'
 * '<S207>' : 'CT1B_FUNC_ac/SigMngt/VDCM_HMI2/PwrSht_Prep_Percent_Complete'
 * '<S208>' : 'CT1B_FUNC_ac/SigMngt/VDCM_HMI2/Turtle_Speed_Limit'
 * '<S209>' : 'CT1B_FUNC_ac/SigMngt/VDCM_PWT3/T4_Sensor_Temp'
 * '<S210>' : 'CT1B_FUNC_ac/SigMngt/VEHDYN_FD_1/RELSDFailureSts_SABRyRELSDFailureSts'
 * '<S211>' : 'CT1B_FUNC_ac/SigMngt/VEHDYN_FD_1/RELSDFailureSts_dflt_SABRyRELSDFailureSts_Vld'
 * '<S212>' : 'CT1B_FUNC_ac/SigMngt/VEHDYN_FD_1/RELSDStatus_SABRyRELSDStatus'
 * '<S213>' : 'CT1B_FUNC_ac/SigMngt/VEHDYN_FD_1/RELSDStatus_dflt_SABRyRELSDStatus_Vld'
 * '<S214>' : 'CT1B_FUNC_ac/SigMngt/VEHDYN_FD_1/RELSDTgtTrq_SABRMRELSDTgtTrq'
 * '<S215>' : 'CT1B_FUNC_ac/SigMngt/VEHDYN_FD_1/RELSDTgtTrq_dflt_SABRMRELSDTgtTrq_Vld'
 */
#endif                                 /* RTW_HEADER_CT1B_FUNC_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
