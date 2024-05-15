/*
 * File: SRDB_BLUEN_ac.h
 *
 * Code generated for Simulink model 'SRDB_BLUEN_ac'.
 *
 * Model version                  : 1.122
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:52:34 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SRDB_BLUEN_ac_h_
#define RTW_HEADER_SRDB_BLUEN_ac_h_
#ifndef SRDB_BLUEN_ac_COMMON_INCLUDES_
#define SRDB_BLUEN_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_SRDB_BLUEN.h"
#endif                                 /* SRDB_BLUEN_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

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
 * '<Root>' : 'SRDB_BLUEN_ac'
 * '<S1>'   : 'SRDB_BLUEN_ac/Initialize Function'
 * '<S2>'   : 'SRDB_BLUEN_ac/SigMngt'
 * '<S3>'   : 'SRDB_BLUEN_ac/SigMngt/SRDB_FUNC_FastTEF_StartCheckpoint'
 * '<S4>'   : 'SRDB_BLUEN_ac/SigMngt/SRDB_FUNC_FastTEF_StopCheckpoint'
 * '<S5>'   : 'SRDB_BLUEN_ac/SigMngt/SigMngt1'
 * '<S6>'   : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_CtrlSts_Fbk'
 * '<S7>'   : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_FailureReason'
 * '<S8>'   : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_FailureType'
 * '<S9>'   : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_HV_V_Fbk'
 * '<S10>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_LV_V_Fbk'
 * '<S11>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_CntctrsMidTrmOpeningWarn'
 * '<S12>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_CntctrsShtTrmOpeningWarn'
 * '<S13>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Current'
 * '<S14>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_InternalVoltage'
 * '<S15>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_SOC'
 * '<S16>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Max'
 * '<S17>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Min'
 * '<S18>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Trac_Bus_Sts'
 * '<S19>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/KeSRDB_b_RedundancyEnbl'
 * '<S20>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/MCPA_Temp'
 * '<S21>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_6SO_Status'
 * '<S22>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_HV_CnctrOpn_Req'
 * '<S23>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Invrtr_State'
 * '<S24>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_MaxTorq'
 * '<S25>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_MinTorq'
 * '<S26>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_RPM'
 * '<S27>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_RPM_V'
 * '<S28>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Torque_Achieved'
 * '<S29>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Torque_Achieved_V'
 * '<S30>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_HV_CnctrOpn_Req'
 * '<S31>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Invrtr_State'
 * '<S32>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_MaxTorq'
 * '<S33>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_MinTorq'
 * '<S34>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_RPM'
 * '<S35>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_RPM_V'
 * '<S36>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Torque_Achieved'
 * '<S37>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Torque_Achieved_V'
 * '<S38>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_CtrlSts_Fbk/ArbtrLogic_Redundancy_Protected'
 * '<S39>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_CtrlSts_Fbk/Compare To Zero'
 * '<S40>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_CtrlSts_Fbk/Subsystem'
 * '<S41>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_CtrlSts_Fbk/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S42>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_FailureReason/ArbtrLogic_Redundancy_Protected'
 * '<S43>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_FailureReason/Compare To Zero'
 * '<S44>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_FailureReason/Subsystem'
 * '<S45>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_FailureReason/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S46>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_FailureType/ArbtrLogic_Redundancy_Protected'
 * '<S47>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_FailureType/Compare To Zero'
 * '<S48>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_FailureType/Subsystem'
 * '<S49>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_FailureType/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S50>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_HV_V_Fbk/ArbtrLogic_Redundancy_Protected'
 * '<S51>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_HV_V_Fbk/Compare To Zero'
 * '<S52>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_HV_V_Fbk/Subsystem'
 * '<S53>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_HV_V_Fbk/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S54>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_LV_V_Fbk/ArbtrLogic_Redundancy_Protected'
 * '<S55>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_LV_V_Fbk/Compare To Zero'
 * '<S56>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_LV_V_Fbk/Subsystem'
 * '<S57>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/APM_LV_V_Fbk/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S58>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_CntctrsMidTrmOpeningWarn/ArbtrLogic_Redundancy_Protected'
 * '<S59>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_CntctrsMidTrmOpeningWarn/Compare To Zero'
 * '<S60>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_CntctrsMidTrmOpeningWarn/Subsystem'
 * '<S61>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_CntctrsMidTrmOpeningWarn/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S62>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_CntctrsShtTrmOpeningWarn/ArbtrLogic_Redundancy_Protected'
 * '<S63>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_CntctrsShtTrmOpeningWarn/Compare To Zero'
 * '<S64>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_CntctrsShtTrmOpeningWarn/Subsystem'
 * '<S65>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_CntctrsShtTrmOpeningWarn/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S66>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Current/ArbtrLogic_Redundancy_Protected'
 * '<S67>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Current/Compare To Zero'
 * '<S68>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Current/Subsystem'
 * '<S69>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Current/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S70>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_InternalVoltage/ArbtrLogic_Redundancy_Protected'
 * '<S71>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_InternalVoltage/Compare To Zero'
 * '<S72>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_InternalVoltage/Subsystem'
 * '<S73>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_InternalVoltage/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S74>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_SOC/ArbtrLogic_Redundancy_Protected'
 * '<S75>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_SOC/Compare To Zero'
 * '<S76>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_SOC/Subsystem'
 * '<S77>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_SOC/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S78>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Max/ArbtrLogic_Redundancy_Protected'
 * '<S79>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Max/Compare To Zero'
 * '<S80>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Max/Subsystem'
 * '<S81>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Max/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S82>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Min/ArbtrLogic_Redundancy_Protected'
 * '<S83>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Min/Compare To Zero'
 * '<S84>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Min/Subsystem'
 * '<S85>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Min/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S86>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Trac_Bus_Sts/ArbtrLogic_Redundancy_Protected'
 * '<S87>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Trac_Bus_Sts/Compare To Zero'
 * '<S88>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Trac_Bus_Sts/Subsystem'
 * '<S89>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/BPCM_HV_Trac_Bus_Sts/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S90>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/MCPA_Temp/ArbtrLogic_Redundancy_Protected'
 * '<S91>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/MCPA_Temp/Compare To Zero'
 * '<S92>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/MCPA_Temp/Subsystem'
 * '<S93>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/MCPA_Temp/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S94>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_6SO_Status/ArbtrLogic_Redundancy_Protected'
 * '<S95>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_6SO_Status/Compare To Zero'
 * '<S96>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_6SO_Status/Subsystem'
 * '<S97>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_6SO_Status/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S98>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_HV_CnctrOpn_Req/ArbtrLogic_Redundancy_Protected'
 * '<S99>'  : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_HV_CnctrOpn_Req/Compare To Zero'
 * '<S100>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_HV_CnctrOpn_Req/Subsystem'
 * '<S101>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_HV_CnctrOpn_Req/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S102>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Invrtr_State/ArbtrLogic_Redundancy_Protected'
 * '<S103>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Invrtr_State/Compare To Zero'
 * '<S104>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Invrtr_State/Subsystem'
 * '<S105>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Invrtr_State/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S106>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_MaxTorq/ArbtrLogic_Redundancy_Protected'
 * '<S107>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_MaxTorq/Compare To Zero'
 * '<S108>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_MaxTorq/Subsystem'
 * '<S109>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_MaxTorq/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S110>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_MinTorq/ArbtrLogic_Redundancy_Protected'
 * '<S111>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_MinTorq/Compare To Zero'
 * '<S112>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_MinTorq/Subsystem'
 * '<S113>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_MinTorq/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S114>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_RPM/ArbtrLogic_Redundancy_Protected'
 * '<S115>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_RPM/Compare To Zero'
 * '<S116>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_RPM/Subsystem'
 * '<S117>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_RPM/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S118>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_RPM_V/ArbtrLogic_Redundancy_Protected'
 * '<S119>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_RPM_V/Compare To Zero'
 * '<S120>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_RPM_V/Subsystem'
 * '<S121>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_RPM_V/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S122>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Torque_Achieved/ArbtrLogic_Redundancy_Protected'
 * '<S123>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Torque_Achieved/Compare To Zero'
 * '<S124>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Torque_Achieved/Subsystem'
 * '<S125>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Torque_Achieved/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S126>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Torque_Achieved_V/ArbtrLogic_Redundancy_Protected'
 * '<S127>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Torque_Achieved_V/Compare To Zero'
 * '<S128>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Torque_Achieved_V/Subsystem'
 * '<S129>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_A_Torque_Achieved_V/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S130>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_HV_CnctrOpn_Req/ArbtrLogic_Redundancy_Protected'
 * '<S131>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_HV_CnctrOpn_Req/Compare To Zero'
 * '<S132>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_HV_CnctrOpn_Req/Subsystem'
 * '<S133>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_HV_CnctrOpn_Req/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S134>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Invrtr_State/ArbtrLogic_Redundancy_Protected'
 * '<S135>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Invrtr_State/Compare To Zero'
 * '<S136>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Invrtr_State/Subsystem'
 * '<S137>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Invrtr_State/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S138>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_MaxTorq/ArbtrLogic_Redundancy_Protected'
 * '<S139>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_MaxTorq/Compare To Zero'
 * '<S140>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_MaxTorq/Subsystem'
 * '<S141>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_MaxTorq/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S142>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_MinTorq/ArbtrLogic_Redundancy_Protected'
 * '<S143>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_MinTorq/Compare To Zero'
 * '<S144>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_MinTorq/Subsystem'
 * '<S145>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_MinTorq/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S146>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_RPM/ArbtrLogic_Redundancy_Protected'
 * '<S147>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_RPM/Compare To Zero'
 * '<S148>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_RPM/Subsystem'
 * '<S149>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_RPM/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S150>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_RPM_V/ArbtrLogic_Redundancy_Protected'
 * '<S151>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_RPM_V/Compare To Zero'
 * '<S152>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_RPM_V/Subsystem'
 * '<S153>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_RPM_V/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S154>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Torque_Achieved/ArbtrLogic_Redundancy_Protected'
 * '<S155>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Torque_Achieved/Compare To Zero'
 * '<S156>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Torque_Achieved/Subsystem'
 * '<S157>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Torque_Achieved/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S158>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Torque_Achieved_V/ArbtrLogic_Redundancy_Protected'
 * '<S159>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Torque_Achieved_V/Compare To Zero'
 * '<S160>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Torque_Achieved_V/Subsystem'
 * '<S161>' : 'SRDB_BLUEN_ac/SigMngt/SigMngt1/PIM_B_Torque_Achieved_V/ArbtrLogic_Redundancy_Protected/Chart'
 */
#endif                                 /* RTW_HEADER_SRDB_BLUEN_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
