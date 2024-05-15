/*
 * File: CR1B_BLUEN_ac.c
 *
 * Code generated for Simulink model 'CR1B_BLUEN_ac'.
 *
 * Model version                  : 1.60
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:48:10 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CR1B_BLUEN_ac.h"



boolean VeCANR_b_Year1_TLM_TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_TotalOdometer_FD3TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_Day1_TLM_TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_GPS_Date_Month_FD3TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_Minute2_TLM_TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_GPS_Date_Day_FD3TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_Hour2_TLM_TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_Year4_TLM_TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_GPS_UTC_Minute_FD3TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_Hour1_TLM_TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_Minute1_TLM_TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_Month1_TLM_TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_Year2_TLM_TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_GPS_UTC_Second_FD3TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_GPS_Date_Year_FD3TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_Month2_TLM_TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_GPS_UTC_Hour_FD3TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_Year3_TLM_TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_b_Day2_TLM_TO_CR1B_BLUEN_ac_Test_1;
boolean VeCANR_l_TotalOdometer_FD3_CR1B_BLUEN_ac_Test_1;



uint8 VeCANR_y_Minute1_TLM_CR1B_BLUEN_ac_Test_1;
uint8 VeCANR_y_Year3_TLM_CR1B_BLUEN_ac_Test_1;
uint8 VeCANR_y_Month1_TLM_CR1B_BLUEN_ac_Test_1;
uint8 VeCANR_y_Month2_TLM_CR1B_BLUEN_ac_Test_1;
uint8 VeCANR_y_Hour1_TLM_CR1B_BLUEN_ac_Test_1;
uint8 VeCANR_y_Year1_TLM_CR1B_BLUEN_ac_Test_1;
float32 VeCANR_cmp_GPS_Date_Month_FD3_CR1B_BLUEN_ac_Test_1;
float32 VeCANR_t_GPS_Date_Day_FD3_CR1B_BLUEN_ac_Test_1;
float32 VeCANR_l_TotalOdometer_FD3_CR1B_BLUEN_ac_Test_1;
uint8 VeCANR_y_Day2_TLM_CR1B_BLUEN_ac_Test_1;
uint8 VeCANR_y_Year4_TLM_CR1B_BLUEN_ac_Test_1;
uint8 VeCANR_y_Hour2_TLM_CR1B_BLUEN_ac_Test_1;
float32 VeCANR_t_GPS_Date_Year_FD3_CR1B_BLUEN_ac_Test_1;
uint8 VeCANR_y_Day1_TLM_CR1B_BLUEN_ac_Test_1;
float32 VeCANR_t_GPS_UTC_Minute_FD3_CR1B_BLUEN_ac_Test_1;
uint8 VeCANR_y_Minute2_TLM_CR1B_BLUEN_ac_Test_1;
float32 VeCANR_t_GPS_UTC_Second_FD3_CR1B_BLUEN_ac_Test_1;
uint8 VeCANR_y_Year2_TLM_CR1B_BLUEN_ac_Test_1;
float32 VeCANR_t_GPS_UTC_Hour_FD3_CR1B_BLUEN_ac_Test_1;

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CR1B_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, CR1B_BLUEN_VAR_INIT) KeCR1B_b_CanLocStatusBypEnbl
    = 0;                               /* Referenced by:
                                        * '<S25>/Calib'
                                        * '<S555>/Calib'
                                        */
static volatile CONST(TePWMD_e_CanLocStatus, CR1B_BLUEN_VAR_INIT)
    KeCR1B_e_CanLocStatus = CePWMD_e_LOC_Disable;/* Referenced by:
                                                  * '<S26>/Calib'
                                                  * '<S556>/Calib'
                                                  */

#define STOP_SEC_CALIB_UNSPECIFIED_CR1B_BLUEN
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR1B_BLUEN
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_ControEncodingRsp_CallStatus;/* '<S964>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_Day1_TLM_CallStatus;/* '<S453>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_Day2_TLM_CallStatus;/* '<S461>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_GPS_Date_Day_FD3_CallStatus;/* '<S465>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_GPS_Date_Month_FD3_CallStatus;/* '<S471>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_GPS_Date_Year_FD3_CallStatus;/* '<S477>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_GPS_UTC_Hour_FD3_CallStatus;/* '<S483>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_GPS_UTC_Minute_FD3_CallStatus;/* '<S489>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_GPS_UTC_Second_FD3_CallStatus;/* '<S495>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_Hour1_TLM_CallStatus;/* '<S501>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_Hour2_TLM_CallStatus;/* '<S505>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_ImmoParkReq_CallStatus;/* '<S967>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_MKKey1org21_CallStatus;/* '<S971>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_MKKey2org22_CallStatus;/* '<S974>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_MKKey_3_CallStatus;/* '<S977>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_MKKey_4_CallStatus;/* '<S980>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_MKKey_5_CallStatus;/* '<S983>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_MKKey_6_CallStatus;/* '<S986>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_Minute1_TLM_CallStatus;/* '<S509>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_Minute2_TLM_CallStatus;/* '<S513>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_Month1_TLM_CallStatus;/* '<S517>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_Month2_TLM_CallStatus;/* '<S521>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_TotalOdometer_FD3_CallStatus;/* '<S356>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_Year1_TLM_CallStatus;/* '<S525>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_Year2_TLM_CallStatus;/* '<S529>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_Year3_TLM_CallStatus;/* '<S533>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCANR_y_Year4_TLM_CallStatus;/* '<S537>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCRDB_y_CompressionTest_CallStatus;/* '<S215>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCRDB_y_ECM_LHOM_Trans_W_CallStatus;/* '<S219>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCRDB_y_EngTrq_Enbl_Rq_TCM_W_CallStatus;/* '<S229>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCRDB_y_EngineSpeed_W_CallStatus;/* '<S233>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCRDB_y_Engine_Stall_Detected_CallStatus;/* '<S239>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCRDB_y_EssEngSt_CallStatus;/* '<S243>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeCRDB_y_EssEngStopIsNotAllwdID_CallStatus;/* '<S253>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCRDB_y_EssEngStopIsNotAllwd_CallStatus;/* '<S247>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeCRDB_y_EssEngStrtIsNotAllwdID_CallStatus;/* '<S265>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCRDB_y_EssEngStrtIsNotAllwd_CallStatus;/* '<S259>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeCRDB_y_LV12PwrFreeRq_W_CallStatus;/* '<S271>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_ABSActive_FD3_CallStatus;/* '<S708>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_ABSFailSts_FD3_CallStatus;/* '<S870>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_ACC_On_CallStatus;/* '<S566>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_AHH_Ready_Status_CallStatus;/* '<S714>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_AHP_EnblReq_CallStatus;/* '<S609>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_APCM_Stat_FD3_CallStatus;/* '<S56>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_ASRActive_FD3_CallStatus;/* '<S856>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_AWDSysStat_CallStatus;/* '<S998>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_AcceleratorSts_CallStatus;/* '<S572>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_BarPrsAbs_FD3_CallStatus;/* '<S399>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_BonnetAjarRawValSts_8_CallStatus;/* '<S115>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_BonnetSts_CallStatus;/* '<S173>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_BrakeBoostPressure_FD3_CallStatus;/* '<S720>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_BrakePdlPosn_FD3_CallStatus;/* '<S937>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_BrakePedalPressure_FD3_CallStatus;/* '<S726>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_Brake_MaxRegen_Ready_CallStatus;/* '<S732>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_Braking_Mode_Req_CallStatus;/* '<S121>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_BrkPdl_Flt_FD3_CallStatus;/* '<S943>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_BrkPdl_Stat_FD3_CallStatus;/* '<S949>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_BrkTrq_Driver_FD3_CallStatus;/* '<S672>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_BrkTrq_FD3_CallStatus;/* '<S666>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_Brk_Stat_FD3_CallStatus;/* '<S738>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_CCMFailSts_CallStatus;/* '<S1004>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_CmdIgnSts_CallStatus;/* '<S77>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_CmdtBrkFrictAxlTorqFD3_CallStatus;/* '<S888>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_CompressorACReqSts_CallStatus;/* '<S83>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_CruiseControlFailSts_CallStatus;/* '<S576>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_CruiseControlOnOffSts_CallStatus;/* '<S580>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_CrusCnclSwitch_CallStatus;/* '<S584>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_CurrBattFailStatus_CallStatus;/* '<S291>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_DAY_LGT_MD_CallStatus;/* '<S87>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_DEFROST_SEL_CallStatus;/* '<S615>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_DRV_DR_UNLOCKING_CallStatus;/* '<S127>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_DRV_TEMP_DR_POS_CallStatus;/* '<S619>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_DeceleratorSts_CallStatus;/* '<S588>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_DisplayedSpeedLimSts_CallStatus;/* '<S363>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_DoorLockLastElSts_CallStatus;/* '<S179>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_DriverDoorSts_CallStatus;/* '<S187>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_DriverEngineOffRequest_CallStatus;/* '<S429>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_DrvLnMinTrqMd_CallStatus;/* '<S1008>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_DrvLnTrqRq_Axle_CallStatus;/* '<S1014>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_DrvrReqdAxlTrq_BSM_FD3_CallStatus;/* '<S898>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_DrvrRqAxlTqEnbdBSM_FD3_CallStatus;/* '<S894>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_EPBSts_FD3_CallStatus;/* '<S862>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_ESCActive_FD3_CallStatus;/* '<S744>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_ESCFailSts_FD3_CallStatus;/* '<S874>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_EVAP_TEMP_P1C_CallStatus;/* '<S154>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_EVRDesiredSetpoint_CallStatus;/* '<S223>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_EngIntAirTmp_FD3_CallStatus;/* '<S405>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_EstCatCnvTmp_CallStatus;/* '<S411>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_EvapTempTar_CallStatus;/* '<S625>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_ExtBrkReqsDisabled_FD3_CallStatus;/* '<S678>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_ExternalTempAD_Voltage_CallStatus;/* '<S160>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_FOTA_Install_Type_CallStatus;/* '<S277>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_FOTA_Installation_Sts_CallStatus;/* '<S283>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_Ft_RrCouplTrq_Act_FD3_CallStatus;/* '<S1020>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_HAS_OnOffSts_CallStatus;/* '<S631>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_HVAC_Blwr_Perct_CallStatus;/* '<S637>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_HtrCorTmp_InTgt_CallStatus;/* '<S643>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_IBS3_Ibatt_CallStatus;/* '<S297>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_IBS3_SOC_Accuracy_CallStatus;/* '<S325>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_IBS3_SOC_CallStatus;/* '<S319>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_IBS3_TempFailStatus_CallStatus;/* '<S337>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_IBS3_Vbatt_CallStatus;/* '<S305>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_IBS3_y_BATT_CallStatus;/* '<S329>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_IMPACTCommand_FD3_CallStatus;/* '<S343>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_IMPACTConfirm_FD3_CallStatus;/* '<S349>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_ImpendingSkid_CallStatus;/* '<S750>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_KeyInIgnSts_CallStatus;/* '<S134>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_LHFWheelSpeed_FD3_CallStatus;/* '<S790>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_LHF_Spin_FD3_CallStatus;/* '<S796>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_LHF_WhlSnsrFailSts_FD3_CallStatus;/* '<S802>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_LHRWheelSpeed_FD3_CallStatus;/* '<S806>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_LHR_Spin_FD3_CallStatus;/* '<S812>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_LHR_WhlSnsrFailSts_FD3_CallStatus;/* '<S818>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_LatAcceltn_BSM_FD3_CallStatus;/* '<S754>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_LongAcceltn_BSM_FD3_CallStatus;/* '<S760>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_MRM_STATUS_C2_CallStatus;/* '<S47>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_MRM_STATUS_FD3_CallStatus;/* '<S33>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_OAT_PT_Est_FD3_CallStatus;/* '<S415>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_OPD_Hold_Status_CallStatus;/* '<S904>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_PAS_TEMP_DR_POS_CallStatus;/* '<S649>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_PN14_LS_Actv_CallStatus;/* '<S92>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_PRNDFailSts_FD3_CallStatus;/* '<S62>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_PTU_State_CallStatus;/* '<S1026>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_ParkingGearShiftReq_BSM_CallStatus;/* '<S766>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_PowerModeSts_CallStatus;/* '<S193>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_PreCondCabinSts_CallStatus;/* '<S100>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_PwrLev_CallStatus;/* '<S373>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_RDU_State_CallStatus;/* '<S1032>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_RHFWheelSpeed_FD3_CallStatus;/* '<S822>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_RHF_Spin_FD3_CallStatus;/* '<S828>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_RHF_WhlSnsrFailSts_FD3_CallStatus;/* '<S834>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_RHRWheelSpeed_FD3_CallStatus;/* '<S838>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_RHR_Spin_FD3_CallStatus;/* '<S844>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_RHR_WhlSnsrFailSts_FD3_CallStatus;/* '<S850>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_RHatchSts_CallStatus;/* '<S197>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_Regen_AxleTorque_Req_CallStatus;/* '<S910>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_RemStActvSts_R_CallStatus;/* '<S140>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_ResumeSwitch_CallStatus;/* '<S592>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_SBR1RowDrvrSeatSts_FD3_CallStatus;/* '<S422>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_SCCActvSts_CallStatus;/* '<S146>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_SOC_Max_Lev_CallStatus;/* '<S381>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_SelectSpdSts_CallStatus;/* '<S684>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_ShiftLeverPosnReq_FD3_CallStatus;/* '<S68>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_SpeedLimiterOnOffSts_CallStatus;/* '<S596>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_SpeedSyncRq_CallStatus;/* '<S1038>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_Speed_Unit_CallStatus;/* '<S387>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_TCASERANGESTATUS_CallStatus;/* '<S1051>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_TCASE_TargetRangeState_CallStatus;/* '<S1044>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_TSRSts_CallStatus;/* '<S40>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_TerrainSwStat_CallStatus;/* '<S108>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_TotalAxleMaxRq_BSM_FD3_CallStatus;/* '<S916>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_TotalAxleMinRq_BSM_FD3_CallStatus;/* '<S922>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_TotalAxle_Rq_BSM_FD3_CallStatus;/* '<S928>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_Traffic_Sign_Info_CallStatus;/* '<S391>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_VEH_INT_TEMP_CallStatus;/* '<S655>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT)
    VeSR1B_y_VehicleSpeedVSOSig_FD3_CallStatus;/* '<S772>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_VehicleStandStillSts_CallStatus;/* '<S690>/Chart' */
static VAR(uint8, CR1B_BLUEN_VAR_INIT) VeSR1B_y_VoltBattFailStatus_CallStatus;/* '<S311>/Chart' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR1B_BLUEN
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR1B_BLUEN
#include "MemMap.h"

VAR(B_CR1B_BLUEN_ac_T, CR1B_BLUEN_VAR_INIT) CR1B_BLUEN_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR1B_BLUEN
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, CR1B_BLUEN_CODE) CR1B_BLUEN_FastTEF(void) /* Explicit Task: FastTEF */
{
    /* local block i/o variables */
    uint8 rtb_TmpSignalConversionAtVeS_md;
    uint8 rtb_TmpSignalConversionAtVeS_jy;
    uint8 rtb_TmpSignalConversionAtVeS_bx;
    uint8 rtb_TmpSignalConversionAtVeS_ka;
    uint8 rtb_TmpSignalConversionAtVe_oli;
    uint8 rtb_TmpSignalConversionAtVeS_fi;
    uint8 rtb_TmpSignalConversionAtVeS_df;
    uint8 rtb_TmpSignalConversionAtVeS_do;
    uint8 rtb_TmpSignalConversionAtVeS_ei;
    uint8 rtb_TmpSignalConversionAtVeS_ji;
    uint8 rtb_TmpSignalConversionAtVeS_eh;
    uint8 rtb_TmpSignalConversionAtVeS_nb;
    uint8 rtb_TmpSignalConversionAtVeS_ih;
    uint8 rtb_TmpSignalConversionAtVeS_dv;
    uint8 rtb_TmpSignalConversionAtVeS_e2;
    uint8 rtb_TmpSignalConversionAtVeS_f0;
    uint8 rtb_TmpSignalConversionAtVeS_m4;
    uint8 rtb_TmpSignalConversionAtVeS_i3;
    uint8 rtb_TmpSignalConversionAtVeS_ia;
    uint8 rtb_TmpSignalConversionAtVeS_en;
    uint8 rtb_TmpSignalConversionAtVeS_ex;
    uint8 rtb_TmpSignalConversionAtVeS_kh;
    uint8 rtb_TmpSignalConversionAtVe_nbk;
    uint8 rtb_TmpSignalConversionAtVeS_da;
    uint8 rtb_TmpSignalConversionAtVeS_kk;
    uint8 rtb_TmpSignalConversionAtVeS_ba;
    uint8 rtb_TmpSignalConversionAtVeS_fn;
    uint8 rtb_TmpSignalConversionAtVeS_es;
    uint8 rtb_TmpSignalConversionAtVe_ewe;
    uint8 rtb_TmpSignalConversionAtVeS_i0;
    uint8 rtb_TmpSignalConversionAtVeS_od;
    uint8 rtb_TmpSignalConversionAtVeS_mt;
    uint8 rtb_TmpSignalConversionAtVeS_cp;
    uint8 rtb_TmpSignalConversionAtVe_ddb;
    uint8 rtb_TmpSignalConversionAtVeS_b5;
    uint8 rtb_TmpSignalConversionAtVeS_px;
    uint8 rtb_TmpSignalConversionAtVeS_kn;
    uint8 rtb_TmpSignalConversionAtVeS_n0;
    uint8 rtb_TmpSignalConversionAtVeS_dj;
    uint8 rtb_TmpSignalConversionAtVeS_d5;
    uint8 rtb_TmpSignalConversionAtVeS_lv;
    uint8 rtb_TmpSignalConversionAtVe_end;
    uint8 rtb_TmpSignalConversionAtVeS_pm;
    uint8 rtb_TmpSignalConversionAtVeS_cb;
    uint8 rtb_TmpSignalConversionAtVeS_lx;
    uint8 rtb_TmpSignalConversionAtVeS_eb;
    uint8 rtb_TmpSignalConversionAtVeS_go;
    uint8 rtb_TmpSignalConversionAtVeS_fb;
    uint8 rtb_TmpSignalConversionAtVeS_b4;
    uint8 rtb_TmpSignalConversionAtVeS_k4;
    uint8 rtb_TmpSignalConversionAtVeS_l4;
    uint8 rtb_TmpSignalConversionAtVe_chw;
    uint8 rtb_TmpSignalConversionAtVeS_pu;
    uint8 rtb_TmpSignalConversionAtVeS_ao;
    uint8 rtb_TmpSignalConversionAtVe_nv0;
    uint8 rtb_TmpSignalConversionAtVeS_aj;
    uint8 rtb_TmpSignalConversionAtVeS_gk;
    uint8 rtb_TmpSignalConversionAtVeS_k2;
    uint8 rtb_TmpSignalConversionAtVeS_ez;
    uint8 rtb_TmpSignalConversionAtVeS_bu;
    uint8 rtb_TmpSignalConversionAtVeS_fz;
    uint8 rtb_TmpSignalConversionAtVe_ofb;
    uint8 rtb_TmpSignalConversionAtVeS_ev;
    uint8 rtb_TmpSignalConversionAtVeS_ai;
    uint8 rtb_TmpSignalConversionAtVeS_fw;
    uint8 rtb_TmpSignalConversionAtVeS_ej;
    uint8 rtb_TmpSignalConversionAtVeSR_h;
    uint8 rtb_TmpSignalConversionAtVe_of2;
    uint8 rtb_TmpSignalConversionAtVe_ali;
    uint8 rtb_TmpSignalConversionAtVeS_h3;
    uint8 rtb_TmpSignalConversionAtVeS_pw;
    uint8 rtb_TmpSignalConversionAtVe_gql;
    uint8 rtb_TmpSignalConversionAtVe_nbw;
    uint8 rtb_TmpSignalConversionAtVeS_g2;
    uint8 rtb_TmpSignalConversionAtVe_o3i;
    uint8 rtb_TmpSignalConversionAtVe_lez;
    uint8 rtb_TmpSignalConversionAtVeS_fg;
    uint8 rtb_TmpSignalConversionAtVe_day;
    uint8 rtb_TmpSignalConversionAtVeS_fa;
    TePWMD_e_CanLocStatus rtb_Switch_i;
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
    uint8 tmpRead_3;
    uint8 tmpRead_4;
    uint8 tmpRead_5;
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
    boolean FA_out_bu;
    boolean FA_out_jw4;
    boolean guard1 = false;
    boolean rtb_RelationalOperator_a;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* SignalConversion generated from: '<S3>/VeSR1B_e_ACC_On_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ACC_On_ErrSts'
     */
    rtb_TmpSignalConversionAtVeS_md = Rte_Read_VeSR1B_b_ACC_On_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_A);

    /* Switch: '<S557>/Switch' incorporates:
     *  Constant: '<S555>/Calib'
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    if (KeCR1B_b_CanLocStatusBypEnbl)
    {
        /* Switch: '<S557>/Switch' incorporates:
         *  Constant: '<S556>/Calib'
         */
        rtb_Switch_i = KeCR1B_e_CanLocStatus;
    }
    else
    {
        (void)Rte_Read_VeCANR_e_CanLocEnblStatus_VeCANR_e_CanLocEnblStatus
            (&tmpRead);

        /* Switch: '<S557>/Switch' incorporates:
         *  DataTypeConversion: '<S3>/Data Type Conversion'
         *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
         */
        rtb_Switch_i = (TePWMD_e_CanLocStatus)tmpRead;
    }

    /* End of Switch: '<S557>/Switch' */

    /* RelationalOperator: '<S3>/Relational Operator' incorporates:
     *  Constant: '<S554>/Constant'
     *  Switch: '<S557>/Switch'
     */
    rtb_RelationalOperator_a = (((uint32)rtb_Switch_i) == CePWMD_e_LOC_Enable);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ACC_On_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S569>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ACC_On_SigSts_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S566>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_0) & 3U) != 0U)
    {
        /* Transition: '<S569>:100' */
        /* Transition: '<S569>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S569>:104' */
        /*  MM */
        if ((((uint32)tmpRead_0) & 4U) != 0U)
        {
            /* Transition: '<S569>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S569>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S569>:110' */
                /* Call Tmot */
                VeSR1B_y_ACC_On_CallStatus = 3U;

                /* Event: '<S569>:40' */
                /* Transition: '<S569>:115' */
                /* Transition: '<S569>:114' */
            }
        }
        else
        {
            /* Transition: '<S569>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_md) == 133)
            {
                /* Transition: '<S569>:95' */
                /* Transition: '<S569>:116' */
                /* Call Nothing */
                VeSR1B_y_ACC_On_CallStatus = 4U;

                /* Transition: '<S569>:114' */
            }
            else
            {
                /* Transition: '<S569>:120' */
                /* Transition: '<S569>:117' */
                /* Call Poke */
                VeSR1B_y_ACC_On_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S558>/Poke' */
                /* FunctionCaller: '<S571>/Function Caller' */
                /* Event: '<S569>:38' */
                Rte_Call_PokePLTR_b_ACC_On_PokePLTR_b_ACC_On
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_A);

                /* End of Outputs for SubSystem: '<S558>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S569>:111' */
        /* Call Fsft */
        VeSR1B_y_ACC_On_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S558>/Fsft' */
        /* FunctionCaller: '<S570>/Function Caller' */
        /* Event: '<S569>:39' */
        Rte_Call_FsftPLTR_b_ACC_On_FsftPLTR_b_ACC_On();

        /* End of Outputs for SubSystem: '<S558>/Fsft' */
        /* Transition: '<S569>:113' */
        /* Transition: '<S569>:115' */
        /* Transition: '<S569>:114' */
    }

    /* End of Chart: '<S566>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_AcceleratorSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_AcceleratorSts_ErrSts'
     */
    /* Transition: '<S569>:107' */
    rtb_TmpSignalConversionAtVeS_jy = Rte_Read_VeSR1B_b_AcceleratorSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ba);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_AcceleratorSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S574>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_AcceleratorSts_SigSts_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S572>/Chart' */
    if ((((uint32)tmpRead_1) & 3U) != 0U)
    {
        /* Transition: '<S574>:100' */
        /* Transition: '<S574>:103' */
        /* Transition: '<S574>:111' */
        /* Call Fsft */
        VeSR1B_y_AcceleratorSts_CallStatus = 2U;

        /* Event: '<S574>:39' */
        /* Transition: '<S574>:113' */
        /* Transition: '<S574>:115' */
        /* Transition: '<S574>:114' */
    }
    else
    {
        /* Transition: '<S574>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1) & 4U) != 0U)
        {
            /* Transition: '<S574>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S574>:88' */
                /* Transition: '<S574>:111' */
                /* Call Fsft */
                VeSR1B_y_AcceleratorSts_CallStatus = 2U;

                /* Event: '<S574>:39' */
                /* Transition: '<S574>:113' */
                /* Transition: '<S574>:115' */
                /* Transition: '<S574>:114' */
            }
            else
            {
                /* Transition: '<S574>:110' */
                /* Call Tmot */
                VeSR1B_y_AcceleratorSts_CallStatus = 3U;

                /* Event: '<S574>:40' */
                /* Transition: '<S574>:115' */
                /* Transition: '<S574>:114' */
            }
        }
        else
        {
            /* Transition: '<S574>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_jy) == 133)
            {
                /* Transition: '<S574>:95' */
                /* Transition: '<S574>:116' */
                /* Call Nothing */
                VeSR1B_y_AcceleratorSts_CallStatus = 4U;

                /* Transition: '<S574>:114' */
            }
            else
            {
                /* Transition: '<S574>:120' */
                /* Transition: '<S574>:117' */
                /* Call Poke */
                VeSR1B_y_AcceleratorSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S559>/Poke' */
                /* FunctionCaller: '<S575>/Function Caller' */
                /* Event: '<S574>:38' */
                Rte_Call_PokeCCTR_b_CcAccelSts_PokeCCTR_b_CcAccelSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ba);

                /* End of Outputs for SubSystem: '<S559>/Poke' */
            }
        }
    }

    /* End of Chart: '<S572>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_CruiseControlFailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_CruiseControlFailSts_ErrSts'
     */
    /* Transition: '<S574>:107' */
    rtb_TmpSignalConversionAtVeS_bx =
        Rte_Read_VeSR1B_b_CruiseControlFailSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_CruiseControlFailSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S578>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_CruiseControlFailSts_SigSts_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S576>/Chart' */
    if ((((uint32)tmpRead_2) & 3U) != 0U)
    {
        /* Transition: '<S578>:100' */
        /* Transition: '<S578>:103' */
        /* Transition: '<S578>:111' */
        /* Call Fsft */
        VeSR1B_y_CruiseControlFailSts_CallStatus = 2U;

        /* Event: '<S578>:39' */
        /* Transition: '<S578>:113' */
        /* Transition: '<S578>:115' */
        /* Transition: '<S578>:114' */
    }
    else
    {
        /* Transition: '<S578>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2) & 4U) != 0U)
        {
            /* Transition: '<S578>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S578>:88' */
                /* Transition: '<S578>:111' */
                /* Call Fsft */
                VeSR1B_y_CruiseControlFailSts_CallStatus = 2U;

                /* Event: '<S578>:39' */
                /* Transition: '<S578>:113' */
                /* Transition: '<S578>:115' */
                /* Transition: '<S578>:114' */
            }
            else
            {
                /* Transition: '<S578>:110' */
                /* Call Tmot */
                VeSR1B_y_CruiseControlFailSts_CallStatus = 3U;

                /* Event: '<S578>:40' */
                /* Transition: '<S578>:115' */
                /* Transition: '<S578>:114' */
            }
        }
        else
        {
            /* Transition: '<S578>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_bx) == 133)
            {
                /* Transition: '<S578>:95' */
                /* Transition: '<S578>:116' */
                /* Call Nothing */
                VeSR1B_y_CruiseControlFailSts_CallStatus = 4U;

                /* Transition: '<S578>:114' */
            }
            else
            {
                /* Transition: '<S578>:120' */
                /* Transition: '<S578>:117' */
                /* Call Poke */
                VeSR1B_y_CruiseControlFailSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S560>/Poke' */
                /* FunctionCaller: '<S579>/Function Caller' */
                /* Event: '<S578>:38' */
                Rte_Call_PokeCCTR_b_CcFailSts_PokeCCTR_b_CcFailSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_c);

                /* End of Outputs for SubSystem: '<S560>/Poke' */
            }
        }
    }

    /* End of Chart: '<S576>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_CruiseControlOnOffSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_CruiseControlOnOffSts_ErrSts'
     */
    /* Transition: '<S578>:107' */
    rtb_TmpSignalConversionAtVeS_ka =
        Rte_Read_VeSR1B_b_CruiseControlOnOffSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_CruiseControlOnOffSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S582>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_CruiseControlOnOffSts_SigSts_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S580>/Chart' */
    if ((((uint32)tmpRead_3) & 3U) != 0U)
    {
        /* Transition: '<S582>:100' */
        /* Transition: '<S582>:103' */
        /* Transition: '<S582>:111' */
        /* Call Fsft */
        VeSR1B_y_CruiseControlOnOffSts_CallStatus = 2U;

        /* Event: '<S582>:39' */
        /* Transition: '<S582>:113' */
        /* Transition: '<S582>:115' */
        /* Transition: '<S582>:114' */
    }
    else
    {
        /* Transition: '<S582>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3) & 4U) != 0U)
        {
            /* Transition: '<S582>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S582>:88' */
                /* Transition: '<S582>:111' */
                /* Call Fsft */
                VeSR1B_y_CruiseControlOnOffSts_CallStatus = 2U;

                /* Event: '<S582>:39' */
                /* Transition: '<S582>:113' */
                /* Transition: '<S582>:115' */
                /* Transition: '<S582>:114' */
            }
            else
            {
                /* Transition: '<S582>:110' */
                /* Call Tmot */
                VeSR1B_y_CruiseControlOnOffSts_CallStatus = 3U;

                /* Event: '<S582>:40' */
                /* Transition: '<S582>:115' */
                /* Transition: '<S582>:114' */
            }
        }
        else
        {
            /* Transition: '<S582>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ka) == 133)
            {
                /* Transition: '<S582>:95' */
                /* Transition: '<S582>:116' */
                /* Call Nothing */
                VeSR1B_y_CruiseControlOnOffSts_CallStatus = 4U;

                /* Transition: '<S582>:114' */
            }
            else
            {
                /* Transition: '<S582>:120' */
                /* Transition: '<S582>:117' */
                /* Call Poke */
                VeSR1B_y_CruiseControlOnOffSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S561>/Poke' */
                /* FunctionCaller: '<S583>/Function Caller' */
                /* Event: '<S582>:38' */
                Rte_Call_PokeCCTR_b_CcOnOffSts_PokeCCTR_b_CcOnOffSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_n);

                /* End of Outputs for SubSystem: '<S561>/Poke' */
            }
        }
    }

    /* End of Chart: '<S580>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_CrusCnclSwitch_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_CrusCnclSwitch_ErrSts'
     */
    /* Transition: '<S582>:107' */
    rtb_TmpSignalConversionAtVe_oli = Rte_Read_VeSR1B_b_CrusCnclSwitch_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_CrusCnclSwitch_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S586>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_CrusCnclSwitch_SigSts_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S584>/Chart' */
    if ((((uint32)tmpRead_4) & 3U) != 0U)
    {
        /* Transition: '<S586>:100' */
        /* Transition: '<S586>:103' */
        /* Transition: '<S586>:111' */
        /* Call Fsft */
        VeSR1B_y_CrusCnclSwitch_CallStatus = 2U;

        /* Event: '<S586>:39' */
        /* Transition: '<S586>:113' */
        /* Transition: '<S586>:115' */
        /* Transition: '<S586>:114' */
    }
    else
    {
        /* Transition: '<S586>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4) & 4U) != 0U)
        {
            /* Transition: '<S586>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S586>:88' */
                /* Transition: '<S586>:111' */
                /* Call Fsft */
                VeSR1B_y_CrusCnclSwitch_CallStatus = 2U;

                /* Event: '<S586>:39' */
                /* Transition: '<S586>:113' */
                /* Transition: '<S586>:115' */
                /* Transition: '<S586>:114' */
            }
            else
            {
                /* Transition: '<S586>:110' */
                /* Call Tmot */
                VeSR1B_y_CrusCnclSwitch_CallStatus = 3U;

                /* Event: '<S586>:40' */
                /* Transition: '<S586>:115' */
                /* Transition: '<S586>:114' */
            }
        }
        else
        {
            /* Transition: '<S586>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_oli) == 133)
            {
                /* Transition: '<S586>:95' */
                /* Transition: '<S586>:116' */
                /* Call Nothing */
                VeSR1B_y_CrusCnclSwitch_CallStatus = 4U;

                /* Transition: '<S586>:114' */
            }
            else
            {
                /* Transition: '<S586>:120' */
                /* Transition: '<S586>:117' */
                /* Call Poke */
                VeSR1B_y_CrusCnclSwitch_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S562>/Poke' */
                /* FunctionCaller: '<S587>/Function Caller' */
                /* Event: '<S586>:38' */
                Rte_Call_PokeCCTR_b_CcCancelSw_PokeCCTR_b_CcCancelSw
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_g);

                /* End of Outputs for SubSystem: '<S562>/Poke' */
            }
        }
    }

    /* End of Chart: '<S584>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_DeceleratorSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DeceleratorSts_ErrSts'
     */
    /* Transition: '<S586>:107' */
    rtb_TmpSignalConversionAtVeS_fi = Rte_Read_VeSR1B_b_DeceleratorSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__fw);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_DeceleratorSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S590>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DeceleratorSts_SigSts_Value(&tmpRead_5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S588>/Chart' */
    if ((((uint32)tmpRead_5) & 3U) != 0U)
    {
        /* Transition: '<S590>:100' */
        /* Transition: '<S590>:103' */
        /* Transition: '<S590>:111' */
        /* Call Fsft */
        VeSR1B_y_DeceleratorSts_CallStatus = 2U;

        /* Event: '<S590>:39' */
        /* Transition: '<S590>:113' */
        /* Transition: '<S590>:115' */
        /* Transition: '<S590>:114' */
    }
    else
    {
        /* Transition: '<S590>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5) & 4U) != 0U)
        {
            /* Transition: '<S590>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S590>:88' */
                /* Transition: '<S590>:111' */
                /* Call Fsft */
                VeSR1B_y_DeceleratorSts_CallStatus = 2U;

                /* Event: '<S590>:39' */
                /* Transition: '<S590>:113' */
                /* Transition: '<S590>:115' */
                /* Transition: '<S590>:114' */
            }
            else
            {
                /* Transition: '<S590>:110' */
                /* Call Tmot */
                VeSR1B_y_DeceleratorSts_CallStatus = 3U;

                /* Event: '<S590>:40' */
                /* Transition: '<S590>:115' */
                /* Transition: '<S590>:114' */
            }
        }
        else
        {
            /* Transition: '<S590>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fi) == 133)
            {
                /* Transition: '<S590>:95' */
                /* Transition: '<S590>:116' */
                /* Call Nothing */
                VeSR1B_y_DeceleratorSts_CallStatus = 4U;

                /* Transition: '<S590>:114' */
            }
            else
            {
                /* Transition: '<S590>:120' */
                /* Transition: '<S590>:117' */
                /* Call Poke */
                VeSR1B_y_DeceleratorSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S563>/Poke' */
                /* FunctionCaller: '<S591>/Function Caller' */
                /* Event: '<S590>:38' */
                Rte_Call_PokeCCTR_b_CcDecelSts_PokeCCTR_b_CcDecelSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__fw);

                /* End of Outputs for SubSystem: '<S563>/Poke' */
            }
        }
    }

    /* End of Chart: '<S588>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_ResumeSwitch_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ResumeSwitch_ErrSts'
     */
    /* Transition: '<S590>:107' */
    rtb_TmpSignalConversionAtVeS_df = Rte_Read_VeSR1B_b_ResumeSwitch_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ResumeSwitch_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S594>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ResumeSwitch_SigSts_Value(&tmpRead_6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S592>/Chart' */
    if ((((uint32)tmpRead_6) & 3U) != 0U)
    {
        /* Transition: '<S594>:100' */
        /* Transition: '<S594>:103' */
        /* Transition: '<S594>:111' */
        /* Call Fsft */
        VeSR1B_y_ResumeSwitch_CallStatus = 2U;

        /* Event: '<S594>:39' */
        /* Transition: '<S594>:113' */
        /* Transition: '<S594>:115' */
        /* Transition: '<S594>:114' */
    }
    else
    {
        /* Transition: '<S594>:104' */
        /*  MM */
        if ((((uint32)tmpRead_6) & 4U) != 0U)
        {
            /* Transition: '<S594>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S594>:88' */
                /* Transition: '<S594>:111' */
                /* Call Fsft */
                VeSR1B_y_ResumeSwitch_CallStatus = 2U;

                /* Event: '<S594>:39' */
                /* Transition: '<S594>:113' */
                /* Transition: '<S594>:115' */
                /* Transition: '<S594>:114' */
            }
            else
            {
                /* Transition: '<S594>:110' */
                /* Call Tmot */
                VeSR1B_y_ResumeSwitch_CallStatus = 3U;

                /* Event: '<S594>:40' */
                /* Transition: '<S594>:115' */
                /* Transition: '<S594>:114' */
            }
        }
        else
        {
            /* Transition: '<S594>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_df) == 133)
            {
                /* Transition: '<S594>:95' */
                /* Transition: '<S594>:116' */
                /* Call Nothing */
                VeSR1B_y_ResumeSwitch_CallStatus = 4U;

                /* Transition: '<S594>:114' */
            }
            else
            {
                /* Transition: '<S594>:120' */
                /* Transition: '<S594>:117' */
                /* Call Poke */
                VeSR1B_y_ResumeSwitch_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S564>/Poke' */
                /* FunctionCaller: '<S595>/Function Caller' */
                /* Event: '<S594>:38' */
                Rte_Call_PokeCCTR_b_CcResumeSw_PokeCCTR_b_CcResumeSw
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_d);

                /* End of Outputs for SubSystem: '<S564>/Poke' */
            }
        }
    }

    /* End of Chart: '<S592>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_SpeedLimiterOnOffSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_SpeedLimiterOnOffSts_ErrSts'
     */
    /* Transition: '<S594>:107' */
    rtb_TmpSignalConversionAtVeS_do =
        Rte_Read_VeSR1B_b_SpeedLimiterOnOffSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__kh);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_SpeedLimiterOnOffSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S598>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_SpeedLimiterOnOffSts_SigSts_Value(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S596>/Chart' */
    if ((((uint32)tmpRead_7) & 3U) != 0U)
    {
        /* Transition: '<S598>:100' */
        /* Transition: '<S598>:103' */
        /* Transition: '<S598>:111' */
        /* Call Fsft */
        VeSR1B_y_SpeedLimiterOnOffSts_CallStatus = 2U;

        /* Event: '<S598>:39' */
        /* Transition: '<S598>:113' */
        /* Transition: '<S598>:115' */
        /* Transition: '<S598>:114' */
    }
    else
    {
        /* Transition: '<S598>:104' */
        /*  MM */
        if ((((uint32)tmpRead_7) & 4U) != 0U)
        {
            /* Transition: '<S598>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S598>:88' */
                /* Transition: '<S598>:111' */
                /* Call Fsft */
                VeSR1B_y_SpeedLimiterOnOffSts_CallStatus = 2U;

                /* Event: '<S598>:39' */
                /* Transition: '<S598>:113' */
                /* Transition: '<S598>:115' */
                /* Transition: '<S598>:114' */
            }
            else
            {
                /* Transition: '<S598>:110' */
                /* Call Tmot */
                VeSR1B_y_SpeedLimiterOnOffSts_CallStatus = 3U;

                /* Event: '<S598>:40' */
                /* Transition: '<S598>:115' */
                /* Transition: '<S598>:114' */
            }
        }
        else
        {
            /* Transition: '<S598>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_do) == 133)
            {
                /* Transition: '<S598>:95' */
                /* Transition: '<S598>:116' */
                /* Call Nothing */
                VeSR1B_y_SpeedLimiterOnOffSts_CallStatus = 4U;

                /* Transition: '<S598>:114' */
            }
            else
            {
                /* Transition: '<S598>:120' */
                /* Transition: '<S598>:117' */
                /* Call Poke */
                VeSR1B_y_SpeedLimiterOnOffSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S565>/Poke' */
                /* FunctionCaller: '<S599>/Function Caller' */
                /* Event: '<S598>:38' */
                Rte_Call_PokeASLR_b_SpdLmtrOnOffSts_PokeASLR_b_SpdLmtrOnOffSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__kh);

                /* End of Outputs for SubSystem: '<S565>/Poke' */
            }
        }
    }

    /* End of Chart: '<S596>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_AHP_EnblReq_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_AHP_EnblReq_ErrSts'
     */
    /* Transition: '<S598>:107' */
    rtb_TmpSignalConversionAtVeS_ei = Rte_Read_VeSR1B_y_AHP_EnblReq_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_AHP_EnblReq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S612>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_AHP_EnblReq_SigSts_Value(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S609>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_8) & 3U) != 0U)
    {
        /* Transition: '<S612>:100' */
        /* Transition: '<S612>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S612>:104' */
        /*  MM */
        if ((((uint32)tmpRead_8) & 4U) != 0U)
        {
            /* Transition: '<S612>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S612>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S612>:110' */
                /* Call Tmot */
                VeSR1B_y_AHP_EnblReq_CallStatus = 3U;

                /* Event: '<S612>:40' */
                /* Transition: '<S612>:115' */
                /* Transition: '<S612>:114' */
            }
        }
        else
        {
            /* Transition: '<S612>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ei) == 133)
            {
                /* Transition: '<S612>:95' */
                /* Transition: '<S612>:116' */
                /* Call Nothing */
                VeSR1B_y_AHP_EnblReq_CallStatus = 4U;

                /* Transition: '<S612>:114' */
            }
            else
            {
                /* Transition: '<S612>:120' */
                if ((((uint32)tmpRead_8) & 8U) != 0U)
                {
                    /* Transition: '<S612>:122' */
                    /* Transition: '<S612>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S612>:126' */
                }
                else
                {
                    /* Transition: '<S612>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S612>:117' */
                /* Call Poke */
                VeSR1B_y_AHP_EnblReq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S600>/Poke' */
                /* FunctionCaller: '<S614>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S614>/Data Type Conversion'
                 */
                /* Event: '<S612>:38' */
                Rte_Call_PokeTRIR_b_AHP_EnblReq_PokeTRIR_b_AHP_EnblReq((((sint32)
                    CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_o) != 0) ? 1 :
                    0, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S600>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S612>:111' */
        /* Call Fsft */
        VeSR1B_y_AHP_EnblReq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S600>/Fsft' */
        /* FunctionCaller: '<S613>/Function Caller' */
        /* Event: '<S612>:39' */
        Rte_Call_FsftTRIR_b_AHP_EnblReq_FsftTRIR_b_AHP_EnblReq();

        /* End of Outputs for SubSystem: '<S600>/Fsft' */
        /* Transition: '<S612>:113' */
        /* Transition: '<S612>:115' */
        /* Transition: '<S612>:114' */
    }

    /* End of Chart: '<S609>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_DEFROST_SEL_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DEFROST_SEL_ErrSts'
     */
    /* Transition: '<S612>:107' */
    rtb_TmpSignalConversionAtVeS_ji = Rte_Read_VeSR1B_b_DEFROST_SEL_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_DEFROST_SEL_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S617>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DEFROST_SEL_SigSts_Value(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S615>/Chart' */
    if ((((uint32)tmpRead_9) & 3U) != 0U)
    {
        /* Transition: '<S617>:100' */
        /* Transition: '<S617>:103' */
        /* Transition: '<S617>:111' */
        /* Call Fsft */
        VeSR1B_y_DEFROST_SEL_CallStatus = 2U;

        /* Event: '<S617>:39' */
        /* Transition: '<S617>:113' */
        /* Transition: '<S617>:115' */
        /* Transition: '<S617>:114' */
    }
    else
    {
        /* Transition: '<S617>:104' */
        /*  MM */
        if ((((uint32)tmpRead_9) & 4U) != 0U)
        {
            /* Transition: '<S617>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S617>:88' */
                /* Transition: '<S617>:111' */
                /* Call Fsft */
                VeSR1B_y_DEFROST_SEL_CallStatus = 2U;

                /* Event: '<S617>:39' */
                /* Transition: '<S617>:113' */
                /* Transition: '<S617>:115' */
                /* Transition: '<S617>:114' */
            }
            else
            {
                /* Transition: '<S617>:110' */
                /* Call Tmot */
                VeSR1B_y_DEFROST_SEL_CallStatus = 3U;

                /* Event: '<S617>:40' */
                /* Transition: '<S617>:115' */
                /* Transition: '<S617>:114' */
            }
        }
        else
        {
            /* Transition: '<S617>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ji) == 133)
            {
                /* Transition: '<S617>:95' */
                /* Transition: '<S617>:116' */
                /* Call Nothing */
                VeSR1B_y_DEFROST_SEL_CallStatus = 4U;

                /* Transition: '<S617>:114' */
            }
            else
            {
                /* Transition: '<S617>:120' */
                /* Transition: '<S617>:117' */
                /* Call Poke */
                VeSR1B_y_DEFROST_SEL_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S601>/Poke' */
                /* FunctionCaller: '<S618>/Function Caller' */
                /* Event: '<S617>:38' */
                Rte_Call_PokeTAIR_b_WinshldDfrst_PokeTAIR_b_WinshldDfrst
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_e);

                /* End of Outputs for SubSystem: '<S601>/Poke' */
            }
        }
    }

    /* End of Chart: '<S615>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_DRV_TEMP_DR_POS_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DRV_TEMP_DR_POS_ErrSts'
     */
    /* Transition: '<S617>:107' */
    rtb_TmpSignalConversionAtVeS_eh = Rte_Read_VeSR1B_Pct_DRV_TEMP_DR_POS_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_P_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_DRV_TEMP_DR_POS_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S622>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DRV_TEMP_DR_POS_SigSts_Value(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S619>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_a) & 3U) != 0U)
    {
        /* Transition: '<S622>:100' */
        /* Transition: '<S622>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S622>:104' */
        /*  MM */
        if ((((uint32)tmpRead_a) & 4U) != 0U)
        {
            /* Transition: '<S622>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S622>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S622>:110' */
                /* Call Tmot */
                VeSR1B_y_DRV_TEMP_DR_POS_CallStatus = 3U;

                /* Event: '<S622>:40' */
                /* Transition: '<S622>:115' */
                /* Transition: '<S622>:114' */
            }
        }
        else
        {
            /* Transition: '<S622>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_eh) == 133)
            {
                /* Transition: '<S622>:95' */
                /* Transition: '<S622>:116' */
                /* Call Nothing */
                VeSR1B_y_DRV_TEMP_DR_POS_CallStatus = 4U;

                /* Transition: '<S622>:114' */
            }
            else
            {
                /* Transition: '<S622>:120' */
                if ((((uint32)tmpRead_a) & 8U) != 0U)
                {
                    /* Transition: '<S622>:122' */
                    /* Transition: '<S622>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S622>:126' */
                }
                else
                {
                    /* Transition: '<S622>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S622>:117' */
                /* Call Poke */
                VeSR1B_y_DRV_TEMP_DR_POS_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S602>/Poke' */
                /* FunctionCaller: '<S624>/Function Caller' */
                /* Event: '<S622>:38' */
                Rte_Call_PokeTAIR_Pct_DrvTmpDr_Pos_PokeTAIR_Pct_DrvTmpDr_Pos
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_P_o, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S602>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S622>:111' */
        /* Call Fsft */
        VeSR1B_y_DRV_TEMP_DR_POS_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S602>/Fsft' */
        /* FunctionCaller: '<S623>/Function Caller' */
        /* Event: '<S622>:39' */
        Rte_Call_FsftTAIR_Pct_DrvTmpDr_Pos_FsftTAIR_Pct_DrvTmpDr_Pos();

        /* End of Outputs for SubSystem: '<S602>/Fsft' */
        /* Transition: '<S622>:113' */
        /* Transition: '<S622>:115' */
        /* Transition: '<S622>:114' */
    }

    /* End of Chart: '<S619>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_EvapTempTar_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EvapTempTar_ErrSts'
     */
    /* Transition: '<S622>:107' */
    rtb_TmpSignalConversionAtVeS_nb = Rte_Read_VeSR1B_T_EvapTempTar_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EvapTempTar_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S628>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EvapTempTar_SigSts_Value(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S625>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_b) & 3U) != 0U)
    {
        /* Transition: '<S628>:100' */
        /* Transition: '<S628>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S628>:104' */
        /*  MM */
        if ((((uint32)tmpRead_b) & 4U) != 0U)
        {
            /* Transition: '<S628>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S628>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S628>:110' */
                /* Call Tmot */
                VeSR1B_y_EvapTempTar_CallStatus = 3U;

                /* Event: '<S628>:40' */
                /* Transition: '<S628>:115' */
                /* Transition: '<S628>:114' */
            }
        }
        else
        {
            /* Transition: '<S628>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_nb) == 133)
            {
                /* Transition: '<S628>:95' */
                /* Transition: '<S628>:116' */
                /* Call Nothing */
                VeSR1B_y_EvapTempTar_CallStatus = 4U;

                /* Transition: '<S628>:114' */
            }
            else
            {
                /* Transition: '<S628>:120' */
                if ((((uint32)tmpRead_b) & 8U) != 0U)
                {
                    /* Transition: '<S628>:122' */
                    /* Transition: '<S628>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S628>:126' */
                }
                else
                {
                    /* Transition: '<S628>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S628>:117' */
                /* Call Poke */
                VeSR1B_y_EvapTempTar_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S603>/Poke' */
                /* FunctionCaller: '<S630>/Function Caller' */
                /* Event: '<S628>:38' */
                Rte_Call_PokeTAIR_T_FtEvapTmp_Tgt_PokeTAIR_T_FtEvapTmp_Tgt
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_n, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S603>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S628>:111' */
        /* Call Fsft */
        VeSR1B_y_EvapTempTar_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S603>/Fsft' */
        /* FunctionCaller: '<S629>/Function Caller' */
        /* Event: '<S628>:39' */
        Rte_Call_FsftTAIR_T_FtEvapTmp_Tgt_FsftTAIR_T_FtEvapTmp_Tgt();

        /* End of Outputs for SubSystem: '<S603>/Fsft' */
        /* Transition: '<S628>:113' */
        /* Transition: '<S628>:115' */
        /* Transition: '<S628>:114' */
    }

    /* End of Chart: '<S625>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_HAS_OnOffSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_HAS_OnOffSts_ErrSts'
     */
    /* Transition: '<S628>:107' */
    rtb_TmpSignalConversionAtVeS_ih = Rte_Read_VeSR1B_b_HAS_OnOffSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_HAS_OnOffSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S634>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_HAS_OnOffSts_SigSts_Value(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S631>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_c) & 3U) != 0U)
    {
        /* Transition: '<S634>:100' */
        /* Transition: '<S634>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S634>:104' */
        /*  MM */
        if ((((uint32)tmpRead_c) & 4U) != 0U)
        {
            /* Transition: '<S634>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S634>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S634>:110' */
                /* Call Tmot */
                VeSR1B_y_HAS_OnOffSts_CallStatus = 3U;

                /* Event: '<S634>:40' */
                /* Transition: '<S634>:115' */
                /* Transition: '<S634>:114' */
            }
        }
        else
        {
            /* Transition: '<S634>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ih) == 133)
            {
                /* Transition: '<S634>:95' */
                /* Transition: '<S634>:116' */
                /* Call Nothing */
                VeSR1B_y_HAS_OnOffSts_CallStatus = 4U;

                /* Transition: '<S634>:114' */
            }
            else
            {
                /* Transition: '<S634>:120' */
                /* Transition: '<S634>:117' */
                /* Call Poke */
                VeSR1B_y_HAS_OnOffSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S604>/Poke' */
                /* FunctionCaller: '<S636>/Function Caller' */
                /* Event: '<S634>:38' */
                Rte_Call_PokeASLR_b_LaneCenteringOnOffSts_PokeASLR_b_LaneCenteringOnOffSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_H);

                /* End of Outputs for SubSystem: '<S604>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S634>:111' */
        /* Call Fsft */
        VeSR1B_y_HAS_OnOffSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S604>/Fsft' */
        /* FunctionCaller: '<S635>/Function Caller' */
        /* Event: '<S634>:39' */
        Rte_Call_FsftASLR_b_LaneCenteringOnOffSts_FsftASLR_b_LaneCenteringOnOffSts
            ();

        /* End of Outputs for SubSystem: '<S604>/Fsft' */
        /* Transition: '<S634>:113' */
        /* Transition: '<S634>:115' */
        /* Transition: '<S634>:114' */
    }

    /* End of Chart: '<S631>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_HVAC_Blwr_Perct_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_HVAC_Blwr_Perct_ErrSts'
     */
    /* Transition: '<S634>:107' */
    rtb_TmpSignalConversionAtVeS_dv = Rte_Read_VeSR1B_Pct_HVAC_Blwr_Perct_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_P_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_HVAC_Blwr_Perct_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S640>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_HVAC_Blwr_Perct_SigSts_Value(&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S637>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_d) & 3U) != 0U)
    {
        /* Transition: '<S640>:100' */
        /* Transition: '<S640>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S640>:104' */
        /*  MM */
        if ((((uint32)tmpRead_d) & 4U) != 0U)
        {
            /* Transition: '<S640>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S640>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S640>:110' */
                /* Call Tmot */
                VeSR1B_y_HVAC_Blwr_Perct_CallStatus = 3U;

                /* Event: '<S640>:40' */
                /* Transition: '<S640>:115' */
                /* Transition: '<S640>:114' */
            }
        }
        else
        {
            /* Transition: '<S640>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_dv) == 133)
            {
                /* Transition: '<S640>:95' */
                /* Transition: '<S640>:116' */
                /* Call Nothing */
                VeSR1B_y_HVAC_Blwr_Perct_CallStatus = 4U;

                /* Transition: '<S640>:114' */
            }
            else
            {
                /* Transition: '<S640>:120' */
                if ((((uint32)tmpRead_d) & 8U) != 0U)
                {
                    /* Transition: '<S640>:122' */
                    /* Transition: '<S640>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S640>:126' */
                }
                else
                {
                    /* Transition: '<S640>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S640>:117' */
                /* Call Poke */
                VeSR1B_y_HVAC_Blwr_Perct_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S605>/Poke' */
                /* FunctionCaller: '<S642>/Function Caller' */
                /* Event: '<S640>:38' */
                Rte_Call_PokeTAIR_Pct_FrtBlwrCmd_PokeTAIR_Pct_FrtBlwrCmd
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_P_a, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S605>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S640>:111' */
        /* Call Fsft */
        VeSR1B_y_HVAC_Blwr_Perct_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S605>/Fsft' */
        /* FunctionCaller: '<S641>/Function Caller' */
        /* Event: '<S640>:39' */
        Rte_Call_FsftTAIR_Pct_FrtBlwrCmd_FsftTAIR_Pct_FrtBlwrCmd();

        /* End of Outputs for SubSystem: '<S605>/Fsft' */
        /* Transition: '<S640>:113' */
        /* Transition: '<S640>:115' */
        /* Transition: '<S640>:114' */
    }

    /* End of Chart: '<S637>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_HtrCorTmp_InTgt_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_HtrCorTmp_InTgt_ErrSts'
     */
    /* Transition: '<S640>:107' */
    rtb_TmpSignalConversionAtVeS_e2 = Rte_Read_VeSR1B_T_HtrCorTmp_InTgt_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_HtrCorTmp_InTgt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S646>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_HtrCorTmp_InTgt_SigSts_Value(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S643>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_e) & 3U) != 0U)
    {
        /* Transition: '<S646>:100' */
        /* Transition: '<S646>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S646>:104' */
        /*  MM */
        if ((((uint32)tmpRead_e) & 4U) != 0U)
        {
            /* Transition: '<S646>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S646>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S646>:110' */
                /* Call Tmot */
                VeSR1B_y_HtrCorTmp_InTgt_CallStatus = 3U;

                /* Event: '<S646>:40' */
                /* Transition: '<S646>:115' */
                /* Transition: '<S646>:114' */
            }
        }
        else
        {
            /* Transition: '<S646>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_e2) == 133)
            {
                /* Transition: '<S646>:95' */
                /* Transition: '<S646>:116' */
                /* Call Nothing */
                VeSR1B_y_HtrCorTmp_InTgt_CallStatus = 4U;

                /* Transition: '<S646>:114' */
            }
            else
            {
                /* Transition: '<S646>:120' */
                if ((((uint32)tmpRead_e) & 8U) != 0U)
                {
                    /* Transition: '<S646>:122' */
                    /* Transition: '<S646>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S646>:126' */
                }
                else
                {
                    /* Transition: '<S646>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S646>:117' */
                /* Call Poke */
                VeSR1B_y_HtrCorTmp_InTgt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S606>/Poke' */
                /* FunctionCaller: '<S648>/Function Caller' */
                /* Event: '<S646>:38' */
                Rte_Call_PokeTAIR_T_HtrCoreTmp_Tgt_PokeTAIR_T_HtrCoreTmp_Tgt
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_H, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S606>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S646>:111' */
        /* Call Fsft */
        VeSR1B_y_HtrCorTmp_InTgt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S606>/Fsft' */
        /* FunctionCaller: '<S647>/Function Caller' */
        /* Event: '<S646>:39' */
        Rte_Call_FsftTAIR_T_HtrCoreTmp_Tgt_FsftTAIR_T_HtrCoreTmp_Tgt();

        /* End of Outputs for SubSystem: '<S606>/Fsft' */
        /* Transition: '<S646>:113' */
        /* Transition: '<S646>:115' */
        /* Transition: '<S646>:114' */
    }

    /* End of Chart: '<S643>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_PAS_TEMP_DR_POS_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_PAS_TEMP_DR_POS_ErrSts'
     */
    /* Transition: '<S646>:107' */
    rtb_TmpSignalConversionAtVeS_f0 = Rte_Read_VeSR1B_Pct_PAS_TEMP_DR_POS_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_P_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_PAS_TEMP_DR_POS_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S652>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_PAS_TEMP_DR_POS_SigSts_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S649>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_f) & 3U) != 0U)
    {
        /* Transition: '<S652>:100' */
        /* Transition: '<S652>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S652>:104' */
        /*  MM */
        if ((((uint32)tmpRead_f) & 4U) != 0U)
        {
            /* Transition: '<S652>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S652>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S652>:110' */
                /* Call Tmot */
                VeSR1B_y_PAS_TEMP_DR_POS_CallStatus = 3U;

                /* Event: '<S652>:40' */
                /* Transition: '<S652>:115' */
                /* Transition: '<S652>:114' */
            }
        }
        else
        {
            /* Transition: '<S652>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_f0) == 133)
            {
                /* Transition: '<S652>:95' */
                /* Transition: '<S652>:116' */
                /* Call Nothing */
                VeSR1B_y_PAS_TEMP_DR_POS_CallStatus = 4U;

                /* Transition: '<S652>:114' */
            }
            else
            {
                /* Transition: '<S652>:120' */
                if ((((uint32)tmpRead_f) & 8U) != 0U)
                {
                    /* Transition: '<S652>:122' */
                    /* Transition: '<S652>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S652>:126' */
                }
                else
                {
                    /* Transition: '<S652>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S652>:117' */
                /* Call Poke */
                VeSR1B_y_PAS_TEMP_DR_POS_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S607>/Poke' */
                /* FunctionCaller: '<S654>/Function Caller' */
                /* Event: '<S652>:38' */
                Rte_Call_PokeTAIR_Pct_PasTmpDr_Pos_PokeTAIR_Pct_PasTmpDr_Pos
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_P_i, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S607>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S652>:111' */
        /* Call Fsft */
        VeSR1B_y_PAS_TEMP_DR_POS_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S607>/Fsft' */
        /* FunctionCaller: '<S653>/Function Caller' */
        /* Event: '<S652>:39' */
        Rte_Call_FsftTAIR_Pct_PasTmpDr_Pos_FsftTAIR_Pct_PasTmpDr_Pos();

        /* End of Outputs for SubSystem: '<S607>/Fsft' */
        /* Transition: '<S652>:113' */
        /* Transition: '<S652>:115' */
        /* Transition: '<S652>:114' */
    }

    /* End of Chart: '<S649>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_VEH_INT_TEMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_VEH_INT_TEMP_ErrSts'
     */
    /* Transition: '<S652>:107' */
    rtb_TmpSignalConversionAtVeS_m4 = Rte_Read_VeSR1B_T_VEH_INT_TEMP_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_V);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_VEH_INT_TEMP_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S658>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_VEH_INT_TEMP_SigSts_Value(&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S655>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_g) & 3U) != 0U)
    {
        /* Transition: '<S658>:100' */
        /* Transition: '<S658>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S658>:104' */
        /*  MM */
        if ((((uint32)tmpRead_g) & 4U) != 0U)
        {
            /* Transition: '<S658>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S658>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S658>:110' */
                /* Call Tmot */
                VeSR1B_y_VEH_INT_TEMP_CallStatus = 3U;

                /* Event: '<S658>:40' */
                /* Transition: '<S658>:115' */
                /* Transition: '<S658>:114' */
            }
        }
        else
        {
            /* Transition: '<S658>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_m4) == 133)
            {
                /* Transition: '<S658>:95' */
                /* Transition: '<S658>:116' */
                /* Call Nothing */
                VeSR1B_y_VEH_INT_TEMP_CallStatus = 4U;

                /* Transition: '<S658>:114' */
            }
            else
            {
                /* Transition: '<S658>:120' */
                if ((((uint32)tmpRead_g) & 8U) != 0U)
                {
                    /* Transition: '<S658>:122' */
                    /* Transition: '<S658>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S658>:126' */
                }
                else
                {
                    /* Transition: '<S658>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S658>:117' */
                /* Call Poke */
                VeSR1B_y_VEH_INT_TEMP_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S608>/Poke' */
                /* FunctionCaller: '<S660>/Function Caller' */
                /* Event: '<S658>:38' */
                Rte_Call_PokeTAIR_T_VhIntTmp_PokeTAIR_T_VhIntTmp
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_V, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S608>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S658>:111' */
        /* Call Fsft */
        VeSR1B_y_VEH_INT_TEMP_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S608>/Fsft' */
        /* FunctionCaller: '<S659>/Function Caller' */
        /* Event: '<S658>:39' */
        Rte_Call_FsftTAIR_T_VhIntTmp_FsftTAIR_T_VhIntTmp();

        /* End of Outputs for SubSystem: '<S608>/Fsft' */
        /* Transition: '<S658>:113' */
        /* Transition: '<S658>:115' */
        /* Transition: '<S658>:114' */
    }

    /* End of Chart: '<S655>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_BrkTrq_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_BrkTrq_FD3_ErrSts'
     */
    /* Transition: '<S658>:107' */
    rtb_TmpSignalConversionAtVeS_i3 = Rte_Read_VeSR1B_M_BrkTrq_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_BrkTrq_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S669>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_BrkTrq_FD3_SigSts_Value(&tmpRead_h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S666>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_h) & 3U) != 0U)
    {
        /* Transition: '<S669>:100' */
        /* Transition: '<S669>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S669>:104' */
        /*  MM */
        if ((((uint32)tmpRead_h) & 4U) != 0U)
        {
            /* Transition: '<S669>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S669>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S669>:110' */
                /* Call Tmot */
                VeSR1B_y_BrkTrq_FD3_CallStatus = 3U;

                /* Event: '<S669>:40' */
                /* Transition: '<S669>:115' */
                /* Transition: '<S669>:114' */
            }
        }
        else
        {
            /* Transition: '<S669>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_i3) == 133)
            {
                /* Transition: '<S669>:95' */
                /* Transition: '<S669>:116' */
                /* Call Nothing */
                VeSR1B_y_BrkTrq_FD3_CallStatus = 4U;

                /* Transition: '<S669>:114' */
            }
            else
            {
                /* Transition: '<S669>:120' */
                if ((((uint32)tmpRead_h) & 8U) != 0U)
                {
                    /* Transition: '<S669>:122' */
                    /* Transition: '<S669>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S669>:126' */
                }
                else
                {
                    /* Transition: '<S669>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S669>:117' */
                /* Call Poke */
                VeSR1B_y_BrkTrq_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S661>/Poke' */
                /* FunctionCaller: '<S671>/Function Caller' */
                /* Event: '<S669>:38' */
                Rte_Call_PokeBTQR_M_DrvrIntndedTotBrkTrq_PokeBTQR_M_DrvrIntndedTotBrkTrq
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_B, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S661>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S669>:111' */
        /* Call Fsft */
        VeSR1B_y_BrkTrq_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S661>/Fsft' */
        /* FunctionCaller: '<S670>/Function Caller' */
        /* Event: '<S669>:39' */
        Rte_Call_FsftBTQR_M_DrvrIntndedTotBrkTrq_FsftBTQR_M_DrvrIntndedTotBrkTrq
            ();

        /* End of Outputs for SubSystem: '<S661>/Fsft' */
        /* Transition: '<S669>:113' */
        /* Transition: '<S669>:115' */
        /* Transition: '<S669>:114' */
    }

    /* End of Chart: '<S666>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_BrkTrq_Driver_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_BrkTrq_Driver_FD3_ErrSts'
     */
    /* Transition: '<S669>:107' */
    rtb_TmpSignalConversionAtVeS_ia = Rte_Read_VeSR1B_M_BrkTrq_Driver_FD3_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_BrkTrq_Driver_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S675>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_BrkTrq_Driver_FD3_SigSts_Value(&tmpRead_i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S672>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_i) & 3U) != 0U)
    {
        /* Transition: '<S675>:100' */
        /* Transition: '<S675>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S675>:104' */
        /*  MM */
        if ((((uint32)tmpRead_i) & 4U) != 0U)
        {
            /* Transition: '<S675>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S675>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S675>:110' */
                /* Call Tmot */
                VeSR1B_y_BrkTrq_Driver_FD3_CallStatus = 3U;

                /* Event: '<S675>:40' */
                /* Transition: '<S675>:115' */
                /* Transition: '<S675>:114' */
            }
        }
        else
        {
            /* Transition: '<S675>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ia) == 133)
            {
                /* Transition: '<S675>:95' */
                /* Transition: '<S675>:116' */
                /* Call Nothing */
                VeSR1B_y_BrkTrq_Driver_FD3_CallStatus = 4U;

                /* Transition: '<S675>:114' */
            }
            else
            {
                /* Transition: '<S675>:120' */
                if ((((uint32)tmpRead_i) & 8U) != 0U)
                {
                    /* Transition: '<S675>:122' */
                    /* Transition: '<S675>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S675>:126' */
                }
                else
                {
                    /* Transition: '<S675>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S675>:117' */
                /* Call Poke */
                VeSR1B_y_BrkTrq_Driver_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S662>/Poke' */
                /* FunctionCaller: '<S677>/Function Caller' */
                /* Event: '<S675>:38' */
                Rte_Call_PokeBTQR_M_BrkTrq_Driver_PokeBTQR_M_BrkTrq_Driver
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_g, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S662>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S675>:111' */
        /* Call Fsft */
        VeSR1B_y_BrkTrq_Driver_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S662>/Fsft' */
        /* FunctionCaller: '<S676>/Function Caller' */
        /* Event: '<S675>:39' */
        Rte_Call_FsftBTQR_M_BrkTrq_Driver_FsftBTQR_M_BrkTrq_Driver();

        /* End of Outputs for SubSystem: '<S662>/Fsft' */
        /* Transition: '<S675>:113' */
        /* Transition: '<S675>:115' */
        /* Transition: '<S675>:114' */
    }

    /* End of Chart: '<S672>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_ExtBrkReqsDisabled_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ExtBrkReqsDisabled_FD3_ErrSts'
     */
    /* Transition: '<S675>:107' */
    rtb_TmpSignalConversionAtVeS_en =
        Rte_Read_VeSR1B_y_ExtBrkReqsDisabled_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ExtBrkReqsDisabled_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S681>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ExtBrkReqsDisabled_FD3_SigSts_Value(&tmpRead_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S678>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_j) & 3U) != 0U)
    {
        /* Transition: '<S681>:100' */
        /* Transition: '<S681>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S681>:104' */
        /*  MM */
        if ((((uint32)tmpRead_j) & 4U) != 0U)
        {
            /* Transition: '<S681>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S681>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S681>:110' */
                /* Call Tmot */
                VeSR1B_y_ExtBrkReqsDisabled_FD3_CallStatus = 3U;

                /* Event: '<S681>:40' */
                /* Transition: '<S681>:115' */
                /* Transition: '<S681>:114' */
            }
        }
        else
        {
            /* Transition: '<S681>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_en) == 133)
            {
                /* Transition: '<S681>:95' */
                /* Transition: '<S681>:116' */
                /* Call Nothing */
                VeSR1B_y_ExtBrkReqsDisabled_FD3_CallStatus = 4U;

                /* Transition: '<S681>:114' */
            }
            else
            {
                /* Transition: '<S681>:120' */
                if ((((uint32)tmpRead_j) & 8U) != 0U)
                {
                    /* Transition: '<S681>:122' */
                    /* Transition: '<S681>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S681>:126' */
                }
                else
                {
                    /* Transition: '<S681>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S681>:117' */
                /* Call Poke */
                VeSR1B_y_ExtBrkReqsDisabled_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S663>/Poke' */
                /* FunctionCaller: '<S683>/Function Caller' */
                /* Event: '<S681>:38' */
                Rte_Call_PokeBRKR_e_ExtBrkReqOff_PokeBRKR_e_ExtBrkReqOff
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_E, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S663>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S681>:111' */
        /* Call Fsft */
        VeSR1B_y_ExtBrkReqsDisabled_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S663>/Fsft' */
        /* FunctionCaller: '<S682>/Function Caller' */
        /* Event: '<S681>:39' */
        Rte_Call_FsftBRKR_e_ExtBrkReqOff_FsftBRKR_e_ExtBrkReqOff();

        /* End of Outputs for SubSystem: '<S663>/Fsft' */
        /* Transition: '<S681>:113' */
        /* Transition: '<S681>:115' */
        /* Transition: '<S681>:114' */
    }

    /* End of Chart: '<S678>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_SelectSpdSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_SelectSpdSts_ErrSts'
     */
    /* Transition: '<S681>:107' */
    rtb_TmpSignalConversionAtVeS_ex = Rte_Read_VeSR1B_y_SelectSpdSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_SelectSpdSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S687>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_SelectSpdSts_SigSts_Value(&tmpRead_k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S684>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_k) & 3U) != 0U)
    {
        /* Transition: '<S687>:100' */
        /* Transition: '<S687>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S687>:104' */
        /*  MM */
        if ((((uint32)tmpRead_k) & 4U) != 0U)
        {
            /* Transition: '<S687>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S687>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S687>:110' */
                /* Call Tmot */
                VeSR1B_y_SelectSpdSts_CallStatus = 3U;

                /* Event: '<S687>:40' */
                /* Transition: '<S687>:115' */
                /* Transition: '<S687>:114' */
            }
        }
        else
        {
            /* Transition: '<S687>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ex) == 133)
            {
                /* Transition: '<S687>:95' */
                /* Transition: '<S687>:116' */
                /* Call Nothing */
                VeSR1B_y_SelectSpdSts_CallStatus = 4U;

                /* Transition: '<S687>:114' */
            }
            else
            {
                /* Transition: '<S687>:120' */
                if ((((uint32)tmpRead_k) & 8U) != 0U)
                {
                    /* Transition: '<S687>:122' */
                    /* Transition: '<S687>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S687>:126' */
                }
                else
                {
                    /* Transition: '<S687>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S687>:117' */
                /* Call Poke */
                VeSR1B_y_SelectSpdSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S664>/Poke' */
                /* FunctionCaller: '<S689>/Function Caller' */
                /* Event: '<S687>:38' */
                Rte_Call_PokePLTR_e_SelectSpdSts_PokePLTR_e_SelectSpdSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_d, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S664>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S687>:111' */
        /* Call Fsft */
        VeSR1B_y_SelectSpdSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S664>/Fsft' */
        /* FunctionCaller: '<S688>/Function Caller' */
        /* Event: '<S687>:39' */
        Rte_Call_FsftPLTR_e_SelectSpdSts_FsftPLTR_e_SelectSpdSts();

        /* End of Outputs for SubSystem: '<S664>/Fsft' */
        /* Transition: '<S687>:113' */
        /* Transition: '<S687>:115' */
        /* Transition: '<S687>:114' */
    }

    /* End of Chart: '<S684>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_VehicleStandStillSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_VehicleStandStillSts_ErrSts'
     */
    /* Transition: '<S687>:107' */
    rtb_TmpSignalConversionAtVeS_kh =
        Rte_Read_VeSR1B_y_VehicleStandStillSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_V);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_VehicleStandStillSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S693>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_VehicleStandStillSts_SigSts_Value(&tmpRead_l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S690>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_l) & 3U) != 0U)
    {
        /* Transition: '<S693>:100' */
        /* Transition: '<S693>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S693>:104' */
        /*  MM */
        if ((((uint32)tmpRead_l) & 4U) != 0U)
        {
            /* Transition: '<S693>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S693>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S693>:110' */
                /* Call Tmot */
                VeSR1B_y_VehicleStandStillSts_CallStatus = 3U;

                /* Event: '<S693>:40' */
                /* Transition: '<S693>:115' */
                /* Transition: '<S693>:114' */
            }
        }
        else
        {
            /* Transition: '<S693>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_kh) == 133)
            {
                /* Transition: '<S693>:95' */
                /* Transition: '<S693>:116' */
                /* Call Nothing */
                VeSR1B_y_VehicleStandStillSts_CallStatus = 4U;

                /* Transition: '<S693>:114' */
            }
            else
            {
                /* Transition: '<S693>:120' */
                if ((((uint32)tmpRead_l) & 8U) != 0U)
                {
                    /* Transition: '<S693>:122' */
                    /* Transition: '<S693>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S693>:126' */
                }
                else
                {
                    /* Transition: '<S693>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S693>:117' */
                /* Call Poke */
                VeSR1B_y_VehicleStandStillSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S665>/Poke' */
                /* FunctionCaller: '<S695>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S695>/Data Type Conversion'
                 */
                /* Event: '<S693>:38' */
                Rte_Call_PokeBRKR_b_VehicleStandStillSts_PokeBRKR_b_VehicleStandStillSts
                    ((((sint32)CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_V)
                      != 0) ? 1 : 0, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S665>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S693>:111' */
        /* Call Fsft */
        VeSR1B_y_VehicleStandStillSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S665>/Fsft' */
        /* FunctionCaller: '<S694>/Function Caller' */
        /* Event: '<S693>:39' */
        Rte_Call_FsftBRKR_b_VehicleStandStillSts_FsftBRKR_b_VehicleStandStillSts
            ();

        /* End of Outputs for SubSystem: '<S665>/Fsft' */
        /* Transition: '<S693>:113' */
        /* Transition: '<S693>:115' */
        /* Transition: '<S693>:114' */
    }

    /* End of Chart: '<S690>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_ABSActive_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ABSActive_FD3_ErrSts'
     */
    /* Transition: '<S693>:107' */
    rtb_TmpSignalConversionAtVe_nbk = Rte_Read_VeSR1B_b_ABSActive_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ABSActive_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S711>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ABSActive_FD3_SigSts_Value(&tmpRead_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S708>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_m) & 3U) != 0U)
    {
        /* Transition: '<S711>:100' */
        /* Transition: '<S711>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S711>:104' */
        /*  MM */
        if ((((uint32)tmpRead_m) & 4U) != 0U)
        {
            /* Transition: '<S711>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S711>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S711>:110' */
                /* Call Tmot */
                VeSR1B_y_ABSActive_FD3_CallStatus = 3U;

                /* Event: '<S711>:40' */
                /* Transition: '<S711>:115' */
                /* Transition: '<S711>:114' */
            }
        }
        else
        {
            /* Transition: '<S711>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_nbk) == 133)
            {
                /* Transition: '<S711>:95' */
                /* Transition: '<S711>:116' */
                /* Call Nothing */
                VeSR1B_y_ABSActive_FD3_CallStatus = 4U;

                /* Transition: '<S711>:114' */
            }
            else
            {
                /* Transition: '<S711>:120' */
                /* Transition: '<S711>:117' */
                /* Call Poke */
                VeSR1B_y_ABSActive_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S696>/Poke' */
                /* FunctionCaller: '<S713>/Function Caller' incorporates:
                 *  Constant: '<S713>/Constant'
                 */
                /* Event: '<S711>:38' */
                Rte_Call_PokeBRKR_b_ABSActive_PokeBRKR_b_ABSActive
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_a, false);

                /* End of Outputs for SubSystem: '<S696>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S711>:111' */
        /* Call Fsft */
        VeSR1B_y_ABSActive_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S696>/Fsft' */
        /* FunctionCaller: '<S712>/Function Caller' */
        /* Event: '<S711>:39' */
        Rte_Call_FsftBRKR_b_ABSActive_FsftBRKR_b_ABSActive();

        /* End of Outputs for SubSystem: '<S696>/Fsft' */
        /* Transition: '<S711>:113' */
        /* Transition: '<S711>:115' */
        /* Transition: '<S711>:114' */
    }

    /* End of Chart: '<S708>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_AHH_Ready_Status_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_AHH_Ready_Status_ErrSts'
     */
    /* Transition: '<S711>:107' */
    rtb_TmpSignalConversionAtVeS_da = Rte_Read_VeSR1B_y_AHH_Ready_Status_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ol);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_AHH_Ready_Status_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S717>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_AHH_Ready_Status_SigSts_Value(&tmpRead_n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S714>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_n) & 3U) != 0U)
    {
        /* Transition: '<S717>:100' */
        /* Transition: '<S717>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S717>:104' */
        /*  MM */
        if ((((uint32)tmpRead_n) & 4U) != 0U)
        {
            /* Transition: '<S717>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S717>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S717>:110' */
                /* Call Tmot */
                VeSR1B_y_AHH_Ready_Status_CallStatus = 3U;

                /* Event: '<S717>:40' */
                /* Transition: '<S717>:115' */
                /* Transition: '<S717>:114' */
            }
        }
        else
        {
            /* Transition: '<S717>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_da) == 133)
            {
                /* Transition: '<S717>:95' */
                /* Transition: '<S717>:116' */
                /* Call Nothing */
                VeSR1B_y_AHH_Ready_Status_CallStatus = 4U;

                /* Transition: '<S717>:114' */
            }
            else
            {
                /* Transition: '<S717>:120' */
                if ((((uint32)tmpRead_n) & 8U) != 0U)
                {
                    /* Transition: '<S717>:122' */
                    /* Transition: '<S717>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S717>:126' */
                }
                else
                {
                    /* Transition: '<S717>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S717>:117' */
                /* Call Poke */
                VeSR1B_y_AHH_Ready_Status_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S697>/Poke' */
                /* FunctionCaller: '<S719>/Function Caller' */
                /* Event: '<S717>:38' */
                Rte_Call_PokeBRKR_e_AHH_Ready_Status_PokeBRKR_e_AHH_Ready_Status
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ol, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S697>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S717>:111' */
        /* Call Fsft */
        VeSR1B_y_AHH_Ready_Status_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S697>/Fsft' */
        /* FunctionCaller: '<S718>/Function Caller' */
        /* Event: '<S717>:39' */
        Rte_Call_FsftBRKR_e_AHH_Ready_Status_FsftBRKR_e_AHH_Ready_Status();

        /* End of Outputs for SubSystem: '<S697>/Fsft' */
        /* Transition: '<S717>:113' */
        /* Transition: '<S717>:115' */
        /* Transition: '<S717>:114' */
    }

    /* End of Chart: '<S714>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_BrakeBoostPressure_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_BrakeBoostPressure_FD3_ErrSts'
     */
    /* Transition: '<S717>:107' */
    rtb_TmpSignalConversionAtVeS_kk =
        Rte_Read_VeSR1B_pbar_BrakeBoostPressure_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_pba);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_BrakeBoostPressure_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S723>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_BrakeBoostPressure_FD3_SigSts_Value(&tmpRead_o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S720>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_o) & 3U) != 0U)
    {
        /* Transition: '<S723>:100' */
        /* Transition: '<S723>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S723>:104' */
        /*  MM */
        if ((((uint32)tmpRead_o) & 4U) != 0U)
        {
            /* Transition: '<S723>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S723>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S723>:110' */
                /* Call Tmot */
                VeSR1B_y_BrakeBoostPressure_FD3_CallStatus = 3U;

                /* Event: '<S723>:40' */
                /* Transition: '<S723>:115' */
                /* Transition: '<S723>:114' */
            }
        }
        else
        {
            /* Transition: '<S723>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_kk) == 133)
            {
                /* Transition: '<S723>:95' */
                /* Transition: '<S723>:116' */
                /* Call Nothing */
                VeSR1B_y_BrakeBoostPressure_FD3_CallStatus = 4U;

                /* Transition: '<S723>:114' */
            }
            else
            {
                /* Transition: '<S723>:120' */
                if ((((uint32)tmpRead_o) & 8U) != 0U)
                {
                    /* Transition: '<S723>:122' */
                    /* Transition: '<S723>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S723>:126' */
                }
                else
                {
                    /* Transition: '<S723>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S723>:117' */
                /* Call Poke */
                VeSR1B_y_BrakeBoostPressure_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S698>/Poke' */
                /* FunctionCaller: '<S725>/Function Caller' */
                /* Event: '<S723>:38' */
                Rte_Call_PokeBRKR_P_BrkPrss_PokeBRKR_P_BrkPrss
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_pba, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S698>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S723>:111' */
        /* Call Fsft */
        VeSR1B_y_BrakeBoostPressure_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S698>/Fsft' */
        /* FunctionCaller: '<S724>/Function Caller' */
        /* Event: '<S723>:39' */
        Rte_Call_FsftBRKR_P_BrkPrss_FsftBRKR_P_BrkPrss();

        /* End of Outputs for SubSystem: '<S698>/Fsft' */
        /* Transition: '<S723>:113' */
        /* Transition: '<S723>:115' */
        /* Transition: '<S723>:114' */
    }

    /* End of Chart: '<S720>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_BrakePedalPressure_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_BrakePedalPressure_FD3_ErrSts'
     */
    /* Transition: '<S723>:107' */
    rtb_TmpSignalConversionAtVeS_ba =
        Rte_Read_VeSR1B_pbar_BrakePedalPressure_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_p_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_BrakePedalPressure_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S729>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_BrakePedalPressure_FD3_SigSts_Value(&tmpRead_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S726>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_p) & 3U) != 0U)
    {
        /* Transition: '<S729>:100' */
        /* Transition: '<S729>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S729>:104' */
        /*  MM */
        if ((((uint32)tmpRead_p) & 4U) != 0U)
        {
            /* Transition: '<S729>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S729>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S729>:110' */
                /* Call Tmot */
                VeSR1B_y_BrakePedalPressure_FD3_CallStatus = 3U;

                /* Event: '<S729>:40' */
                /* Transition: '<S729>:115' */
                /* Transition: '<S729>:114' */
            }
        }
        else
        {
            /* Transition: '<S729>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ba) == 133)
            {
                /* Transition: '<S729>:95' */
                /* Transition: '<S729>:116' */
                /* Call Nothing */
                VeSR1B_y_BrakePedalPressure_FD3_CallStatus = 4U;

                /* Transition: '<S729>:114' */
            }
            else
            {
                /* Transition: '<S729>:120' */
                if ((((uint32)tmpRead_p) & 8U) != 0U)
                {
                    /* Transition: '<S729>:122' */
                    /* Transition: '<S729>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S729>:126' */
                }
                else
                {
                    /* Transition: '<S729>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S729>:117' */
                /* Call Poke */
                VeSR1B_y_BrakePedalPressure_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S699>/Poke' */
                /* FunctionCaller: '<S731>/Function Caller' */
                /* Event: '<S729>:38' */
                Rte_Call_PokeBRKR_pbar_BrakePedalPressure_PokeBRKR_pbar_BrakePedalPressure
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_p_f, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S699>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S729>:111' */
        /* Call Fsft */
        VeSR1B_y_BrakePedalPressure_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S699>/Fsft' */
        /* FunctionCaller: '<S730>/Function Caller' */
        /* Event: '<S729>:39' */
        Rte_Call_FsftBRKR_pbar_BrakePedalPressure_FsftBRKR_pbar_BrakePedalPressure
            ();

        /* End of Outputs for SubSystem: '<S699>/Fsft' */
        /* Transition: '<S729>:113' */
        /* Transition: '<S729>:115' */
        /* Transition: '<S729>:114' */
    }

    /* End of Chart: '<S726>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_Brake_MaxRegen_Ready_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_Brake_MaxRegen_Ready_ErrSts'
     */
    /* Transition: '<S729>:107' */
    rtb_TmpSignalConversionAtVeS_fn =
        Rte_Read_VeSR1B_y_Brake_MaxRegen_Ready_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_Brake_MaxRegen_Ready_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S735>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Brake_MaxRegen_Ready_SigSts_Value(&tmpRead_q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S732>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_q) & 3U) != 0U)
    {
        /* Transition: '<S735>:100' */
        /* Transition: '<S735>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S735>:104' */
        /*  MM */
        if ((((uint32)tmpRead_q) & 4U) != 0U)
        {
            /* Transition: '<S735>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S735>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S735>:110' */
                /* Call Tmot */
                VeSR1B_y_Brake_MaxRegen_Ready_CallStatus = 3U;

                /* Event: '<S735>:40' */
                /* Transition: '<S735>:115' */
                /* Transition: '<S735>:114' */
            }
        }
        else
        {
            /* Transition: '<S735>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fn) == 133)
            {
                /* Transition: '<S735>:95' */
                /* Transition: '<S735>:116' */
                /* Call Nothing */
                VeSR1B_y_Brake_MaxRegen_Ready_CallStatus = 4U;

                /* Transition: '<S735>:114' */
            }
            else
            {
                /* Transition: '<S735>:120' */
                /* Transition: '<S735>:117' */
                /* Call Poke */
                VeSR1B_y_Brake_MaxRegen_Ready_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S700>/Poke' */
                /* FunctionCaller: '<S737>/Function Caller' incorporates:
                 *  Constant: '<S737>/Constant'
                 *  DataTypeConversion: '<S737>/Data Type Conversion'
                 */
                /* Event: '<S735>:38' */
                Rte_Call_PokeBRKR_b_AeCoastReady_PokeBRKR_b_AeCoastReady
                    ((((sint32)CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_a)
                      != 0) ? 1 : 0, false);

                /* End of Outputs for SubSystem: '<S700>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S735>:111' */
        /* Call Fsft */
        VeSR1B_y_Brake_MaxRegen_Ready_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S700>/Fsft' */
        /* FunctionCaller: '<S736>/Function Caller' */
        /* Event: '<S735>:39' */
        Rte_Call_FsftBRKR_b_AeCoastReady_FsftBRKR_b_AeCoastReady();

        /* End of Outputs for SubSystem: '<S700>/Fsft' */
        /* Transition: '<S735>:113' */
        /* Transition: '<S735>:115' */
        /* Transition: '<S735>:114' */
    }

    /* End of Chart: '<S732>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_Brk_Stat_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_Brk_Stat_FD3_ErrSts'
     */
    /* Transition: '<S735>:107' */
    rtb_TmpSignalConversionAtVeS_es = Rte_Read_VeSR1B_y_Brk_Stat_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__db);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_Brk_Stat_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S741>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Brk_Stat_FD3_SigSts_Value(&tmpRead_r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S738>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_r) & 3U) != 0U)
    {
        /* Transition: '<S741>:100' */
        /* Transition: '<S741>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S741>:104' */
        /*  MM */
        if ((((uint32)tmpRead_r) & 4U) != 0U)
        {
            /* Transition: '<S741>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S741>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S741>:110' */
                /* Call Tmot */
                VeSR1B_y_Brk_Stat_FD3_CallStatus = 3U;

                /* Event: '<S741>:40' */
                /* Transition: '<S741>:115' */
                /* Transition: '<S741>:114' */
            }
        }
        else
        {
            /* Transition: '<S741>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_es) == 133)
            {
                /* Transition: '<S741>:95' */
                /* Transition: '<S741>:116' */
                /* Call Nothing */
                VeSR1B_y_Brk_Stat_FD3_CallStatus = 4U;

                /* Transition: '<S741>:114' */
            }
            else
            {
                /* Transition: '<S741>:120' */
                if ((((uint32)tmpRead_r) & 8U) != 0U)
                {
                    /* Transition: '<S741>:122' */
                    /* Transition: '<S741>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S741>:126' */
                }
                else
                {
                    /* Transition: '<S741>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S741>:117' */
                /* Call Poke */
                VeSR1B_y_Brk_Stat_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S701>/Poke' */
                /* FunctionCaller: '<S743>/Function Caller' */
                /* Event: '<S741>:38' */
                Rte_Call_PokeBRKR_e_BrkPedalStat2_PokeBRKR_e_BrkPedalStat2
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__db, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S701>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S741>:111' */
        /* Call Fsft */
        VeSR1B_y_Brk_Stat_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S701>/Fsft' */
        /* FunctionCaller: '<S742>/Function Caller' */
        /* Event: '<S741>:39' */
        Rte_Call_FsftBRKR_b_BrkPedalStat2_FsftBRKR_b_BrkPedalStat2();

        /* End of Outputs for SubSystem: '<S701>/Fsft' */
        /* Transition: '<S741>:113' */
        /* Transition: '<S741>:115' */
        /* Transition: '<S741>:114' */
    }

    /* End of Chart: '<S738>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_ESCActive_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ESCActive_FD3_ErrSts'
     */
    /* Transition: '<S741>:107' */
    rtb_TmpSignalConversionAtVe_ewe = Rte_Read_VeSR1B_b_ESCActive_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ESCActive_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S747>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ESCActive_FD3_SigSts_Value(&tmpRead_s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S744>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_s) & 3U) != 0U)
    {
        /* Transition: '<S747>:100' */
        /* Transition: '<S747>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S747>:104' */
        /*  MM */
        if ((((uint32)tmpRead_s) & 4U) != 0U)
        {
            /* Transition: '<S747>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S747>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S747>:110' */
                /* Call Tmot */
                VeSR1B_y_ESCActive_FD3_CallStatus = 3U;

                /* Event: '<S747>:40' */
                /* Transition: '<S747>:115' */
                /* Transition: '<S747>:114' */
            }
        }
        else
        {
            /* Transition: '<S747>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_ewe) == 133)
            {
                /* Transition: '<S747>:95' */
                /* Transition: '<S747>:116' */
                /* Call Nothing */
                VeSR1B_y_ESCActive_FD3_CallStatus = 4U;

                /* Transition: '<S747>:114' */
            }
            else
            {
                /* Transition: '<S747>:120' */
                /* Transition: '<S747>:117' */
                /* Call Poke */
                VeSR1B_y_ESCActive_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S702>/Poke' */
                /* FunctionCaller: '<S749>/Function Caller' incorporates:
                 *  Constant: '<S749>/Constant'
                 */
                /* Event: '<S747>:38' */
                Rte_Call_PokeBRKR_b_ESCActive_PokeBRKR_b_ESCActive
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_E, false);

                /* End of Outputs for SubSystem: '<S702>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S747>:111' */
        /* Call Fsft */
        VeSR1B_y_ESCActive_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S702>/Fsft' */
        /* FunctionCaller: '<S748>/Function Caller' */
        /* Event: '<S747>:39' */
        Rte_Call_FsftBRKR_b_ESCActive_FsftBRKR_b_ESCActive();

        /* End of Outputs for SubSystem: '<S702>/Fsft' */
        /* Transition: '<S747>:113' */
        /* Transition: '<S747>:115' */
        /* Transition: '<S747>:114' */
    }

    /* End of Chart: '<S744>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_ImpendingSkid_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ImpendingSkid_ErrSts'
     */
    /* Transition: '<S747>:107' */
    rtb_TmpSignalConversionAtVeS_i0 = Rte_Read_VeSR1B_b_ImpendingSkid_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__gt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ImpendingSkid_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S752>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ImpendingSkid_SigSts_Value(&tmpRead_t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S750>/Chart' */
    if ((((uint32)tmpRead_t) & 3U) != 0U)
    {
        /* Transition: '<S752>:100' */
        /* Transition: '<S752>:103' */
        /* Transition: '<S752>:111' */
        /* Call Fsft */
        VeSR1B_y_ImpendingSkid_CallStatus = 2U;

        /* Event: '<S752>:39' */
        /* Transition: '<S752>:113' */
        /* Transition: '<S752>:115' */
        /* Transition: '<S752>:114' */
    }
    else
    {
        /* Transition: '<S752>:104' */
        /*  MM */
        if ((((uint32)tmpRead_t) & 4U) != 0U)
        {
            /* Transition: '<S752>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S752>:88' */
                /* Transition: '<S752>:111' */
                /* Call Fsft */
                VeSR1B_y_ImpendingSkid_CallStatus = 2U;

                /* Event: '<S752>:39' */
                /* Transition: '<S752>:113' */
                /* Transition: '<S752>:115' */
                /* Transition: '<S752>:114' */
            }
            else
            {
                /* Transition: '<S752>:110' */
                /* Call Tmot */
                VeSR1B_y_ImpendingSkid_CallStatus = 3U;

                /* Event: '<S752>:40' */
                /* Transition: '<S752>:115' */
                /* Transition: '<S752>:114' */
            }
        }
        else
        {
            /* Transition: '<S752>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_i0) == 133)
            {
                /* Transition: '<S752>:95' */
                /* Transition: '<S752>:116' */
                /* Call Nothing */
                VeSR1B_y_ImpendingSkid_CallStatus = 4U;

                /* Transition: '<S752>:114' */
            }
            else
            {
                /* Transition: '<S752>:120' */
                /* Transition: '<S752>:117' */
                /* Call Poke */
                VeSR1B_y_ImpendingSkid_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S703>/Poke' */
                /* FunctionCaller: '<S753>/Function Caller' */
                /* Event: '<S752>:38' */
                Rte_Call_PokeBRKR_b_ImpndSkid_PokeBRKR_b_ImpndSkid
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__gt);

                /* End of Outputs for SubSystem: '<S703>/Poke' */
            }
        }
    }

    /* End of Chart: '<S750>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_LatAcceltn_BSM_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LatAcceltn_BSM_FD3_ErrSts'
     */
    /* Transition: '<S752>:107' */
    rtb_TmpSignalConversionAtVeS_od = Rte_Read_VeSR1B_a_LatAcceltn_BSM_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_a_L);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_LatAcceltn_BSM_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S757>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LatAcceltn_BSM_FD3_SigSts_Value(&tmpRead_u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S754>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_u) & 3U) != 0U)
    {
        /* Transition: '<S757>:100' */
        /* Transition: '<S757>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S757>:104' */
        /*  MM */
        if ((((uint32)tmpRead_u) & 4U) != 0U)
        {
            /* Transition: '<S757>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S757>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S757>:110' */
                /* Call Tmot */
                VeSR1B_y_LatAcceltn_BSM_FD3_CallStatus = 3U;

                /* Event: '<S757>:40' */
                /* Transition: '<S757>:115' */
                /* Transition: '<S757>:114' */
            }
        }
        else
        {
            /* Transition: '<S757>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_od) == 133)
            {
                /* Transition: '<S757>:95' */
                /* Transition: '<S757>:116' */
                /* Call Nothing */
                VeSR1B_y_LatAcceltn_BSM_FD3_CallStatus = 4U;

                /* Transition: '<S757>:114' */
            }
            else
            {
                /* Transition: '<S757>:120' */
                if ((((uint32)tmpRead_u) & 8U) != 0U)
                {
                    /* Transition: '<S757>:122' */
                    /* Transition: '<S757>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S757>:126' */
                }
                else
                {
                    /* Transition: '<S757>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S757>:117' */
                /* Call Poke */
                VeSR1B_y_LatAcceltn_BSM_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S704>/Poke' */
                /* FunctionCaller: '<S759>/Function Caller' */
                /* Event: '<S757>:38' */
                Rte_Call_PokePLTR_a_TransAccel_PokePLTR_a_TransAccel
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_a_L, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S704>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S757>:111' */
        /* Call Fsft */
        VeSR1B_y_LatAcceltn_BSM_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S704>/Fsft' */
        /* FunctionCaller: '<S758>/Function Caller' */
        /* Event: '<S757>:39' */
        Rte_Call_FsftPLTR_a_TransAccel_FsftPLTR_a_TransAccel();

        /* End of Outputs for SubSystem: '<S704>/Fsft' */
        /* Transition: '<S757>:113' */
        /* Transition: '<S757>:115' */
        /* Transition: '<S757>:114' */
    }

    /* End of Chart: '<S754>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_LongAcceltn_BSM_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LongAcceltn_BSM_FD3_ErrSts'
     */
    /* Transition: '<S757>:107' */
    rtb_TmpSignalConversionAtVeS_mt =
        Rte_Read_VeSR1B_a_LongAcceltn_BSM_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_a_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_LongAcceltn_BSM_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S763>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LongAcceltn_BSM_FD3_SigSts_Value(&tmpRead_v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S760>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_v) & 3U) != 0U)
    {
        /* Transition: '<S763>:100' */
        /* Transition: '<S763>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S763>:104' */
        /*  MM */
        if ((((uint32)tmpRead_v) & 4U) != 0U)
        {
            /* Transition: '<S763>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S763>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S763>:110' */
                /* Call Tmot */
                VeSR1B_y_LongAcceltn_BSM_FD3_CallStatus = 3U;

                /* Event: '<S763>:40' */
                /* Transition: '<S763>:115' */
                /* Transition: '<S763>:114' */
            }
        }
        else
        {
            /* Transition: '<S763>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_mt) == 133)
            {
                /* Transition: '<S763>:95' */
                /* Transition: '<S763>:116' */
                /* Call Nothing */
                VeSR1B_y_LongAcceltn_BSM_FD3_CallStatus = 4U;

                /* Transition: '<S763>:114' */
            }
            else
            {
                /* Transition: '<S763>:120' */
                if ((((uint32)tmpRead_v) & 8U) != 0U)
                {
                    /* Transition: '<S763>:122' */
                    /* Transition: '<S763>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S763>:126' */
                }
                else
                {
                    /* Transition: '<S763>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S763>:117' */
                /* Call Poke */
                VeSR1B_y_LongAcceltn_BSM_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S705>/Poke' */
                /* FunctionCaller: '<S765>/Function Caller' */
                /* Event: '<S763>:38' */
                Rte_Call_PokePLTR_a_LongAccel_PokePLTR_a_LongAccel
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_a_o, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S705>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S763>:111' */
        /* Call Fsft */
        VeSR1B_y_LongAcceltn_BSM_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S705>/Fsft' */
        /* FunctionCaller: '<S764>/Function Caller' */
        /* Event: '<S763>:39' */
        Rte_Call_FsftPLTR_a_LongAccel_FsftPLTR_a_LongAccel();

        /* End of Outputs for SubSystem: '<S705>/Fsft' */
        /* Transition: '<S763>:113' */
        /* Transition: '<S763>:115' */
        /* Transition: '<S763>:114' */
    }

    /* End of Chart: '<S760>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_ParkingGearShiftReq_BSM_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ParkingGearShiftReq_BSM_ErrSts'
     */
    /* Transition: '<S763>:107' */
    rtb_TmpSignalConversionAtVeS_cp =
        Rte_Read_VeSR1B_y_ParkingGearShiftReq_BSM_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__al);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ParkingGearShiftReq_BSM_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S769>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ParkingGearShiftReq_BSM_SigSts_Value(&tmpRead_w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S766>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_w) & 3U) != 0U)
    {
        /* Transition: '<S769>:100' */
        /* Transition: '<S769>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S769>:104' */
        /*  MM */
        if ((((uint32)tmpRead_w) & 4U) != 0U)
        {
            /* Transition: '<S769>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S769>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S769>:110' */
                /* Call Tmot */
                VeSR1B_y_ParkingGearShiftReq_BSM_CallStatus = 3U;

                /* Event: '<S769>:40' */
                /* Transition: '<S769>:115' */
                /* Transition: '<S769>:114' */
            }
        }
        else
        {
            /* Transition: '<S769>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_cp) == 133)
            {
                /* Transition: '<S769>:95' */
                /* Transition: '<S769>:116' */
                /* Call Nothing */
                VeSR1B_y_ParkingGearShiftReq_BSM_CallStatus = 4U;

                /* Transition: '<S769>:114' */
            }
            else
            {
                /* Transition: '<S769>:120' */
                if ((((uint32)tmpRead_w) & 8U) != 0U)
                {
                    /* Transition: '<S769>:122' */
                    /* Transition: '<S769>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S769>:126' */
                }
                else
                {
                    /* Transition: '<S769>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S769>:117' */
                /* Call Poke */
                VeSR1B_y_ParkingGearShiftReq_BSM_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S706>/Poke' */
                /* FunctionCaller: '<S771>/Function Caller' */
                /* Event: '<S769>:38' */
                Rte_Call_PokePLTR_e_ParkingGearShiftReq_BSM_PokePLTR_e_ParkingGearShiftReq_BSM
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__al, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S706>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S769>:111' */
        /* Call Fsft */
        VeSR1B_y_ParkingGearShiftReq_BSM_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S706>/Fsft' */
        /* FunctionCaller: '<S770>/Function Caller' */
        /* Event: '<S769>:39' */
        Rte_Call_FsftPLTR_e_ParkingGearShiftReq_BSM_FsftPLTR_e_ParkingGearShiftReq_BSM
            ();

        /* End of Outputs for SubSystem: '<S706>/Fsft' */
        /* Transition: '<S769>:113' */
        /* Transition: '<S769>:115' */
        /* Transition: '<S769>:114' */
    }

    /* End of Chart: '<S766>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_VehicleSpeedVSOSig_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_VehicleSpeedVSOSig_FD3_ErrSts'
     */
    /* Transition: '<S769>:107' */
    rtb_TmpSignalConversionAtVe_ddb =
        Rte_Read_VeSR1B_v_VehicleSpeedVSOSig_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_v_V);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_VehicleSpeedVSOSig_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S775>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_VehicleSpeedVSOSig_FD3_SigSts_Value(&tmpRead_x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S772>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_x) & 3U) != 0U)
    {
        /* Transition: '<S775>:100' */
        /* Transition: '<S775>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S775>:104' */
        /*  MM */
        if ((((uint32)tmpRead_x) & 4U) != 0U)
        {
            /* Transition: '<S775>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S775>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S775>:110' */
                /* Call Tmot */
                VeSR1B_y_VehicleSpeedVSOSig_FD3_CallStatus = 3U;

                /* Event: '<S775>:40' */
                /* Transition: '<S775>:115' */
                /* Transition: '<S775>:114' */
            }
        }
        else
        {
            /* Transition: '<S775>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_ddb) == 133)
            {
                /* Transition: '<S775>:95' */
                /* Transition: '<S775>:116' */
                /* Call Nothing */
                VeSR1B_y_VehicleSpeedVSOSig_FD3_CallStatus = 4U;

                /* Transition: '<S775>:114' */
            }
            else
            {
                /* Transition: '<S775>:120' */
                if ((((uint32)tmpRead_x) & 8U) != 0U)
                {
                    /* Transition: '<S775>:122' */
                    /* Transition: '<S775>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S775>:126' */
                }
                else
                {
                    /* Transition: '<S775>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S775>:117' */
                /* Call Poke */
                VeSR1B_y_VehicleSpeedVSOSig_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S707>/Poke' */
                /* FunctionCaller: '<S777>/Function Caller' */
                /* Event: '<S775>:38' */
                Rte_Call_PokeCSVR_v_CanSigVehSpd_PokeCSVR_v_CanSigVehSpd
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_v_V, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S707>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S775>:111' */
        /* Call Fsft */
        VeSR1B_y_VehicleSpeedVSOSig_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S707>/Fsft' */
        /* FunctionCaller: '<S776>/Function Caller' */
        /* Event: '<S775>:39' */
        Rte_Call_FsftCSVR_v_CanSigVehSpd_FsftCSVR_v_CanSigVehSpd();

        /* End of Outputs for SubSystem: '<S707>/Fsft' */
        /* Transition: '<S775>:113' */
        /* Transition: '<S775>:115' */
        /* Transition: '<S775>:114' */
    }

    /* End of Chart: '<S772>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_LHFWheelSpeed_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LHFWheelSpeed_FD3_ErrSts'
     */
    /* Transition: '<S775>:107' */
    rtb_TmpSignalConversionAtVeS_b5 = Rte_Read_VeSR1B_v_LHFWheelSpeed_FD3_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_v_L);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_LHFWheelSpeed_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S793>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LHFWheelSpeed_FD3_SigSts_Value(&tmpRead_y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S790>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_y) & 3U) != 0U)
    {
        /* Transition: '<S793>:100' */
        /* Transition: '<S793>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S793>:104' */
        /*  MM */
        if ((((uint32)tmpRead_y) & 4U) != 0U)
        {
            /* Transition: '<S793>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S793>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S793>:110' */
                /* Call Tmot */
                VeSR1B_y_LHFWheelSpeed_FD3_CallStatus = 3U;

                /* Event: '<S793>:40' */
                /* Transition: '<S793>:115' */
                /* Transition: '<S793>:114' */
            }
        }
        else
        {
            /* Transition: '<S793>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_b5) == 133)
            {
                /* Transition: '<S793>:95' */
                /* Transition: '<S793>:116' */
                /* Call Nothing */
                VeSR1B_y_LHFWheelSpeed_FD3_CallStatus = 4U;

                /* Transition: '<S793>:114' */
            }
            else
            {
                /* Transition: '<S793>:120' */
                if ((((uint32)tmpRead_y) & 8U) != 0U)
                {
                    /* Transition: '<S793>:122' */
                    /* Transition: '<S793>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S793>:126' */
                }
                else
                {
                    /* Transition: '<S793>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S793>:117' */
                /* Call Poke */
                VeSR1B_y_LHFWheelSpeed_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S778>/Poke' */
                /* FunctionCaller: '<S795>/Function Caller' */
                /* Event: '<S793>:38' */
                Rte_Call_PokeCSVR_n_LeftFrontWhl_PokeCSVR_n_LeftFrontWhl
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_v_L, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S778>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S793>:111' */
        /* Call Fsft */
        VeSR1B_y_LHFWheelSpeed_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S778>/Fsft' */
        /* FunctionCaller: '<S794>/Function Caller' */
        /* Event: '<S793>:39' */
        Rte_Call_FsftCSVR_n_LeftFrontWhl_FsftCSVR_n_LeftFrontWhl();

        /* End of Outputs for SubSystem: '<S778>/Fsft' */
        /* Transition: '<S793>:113' */
        /* Transition: '<S793>:115' */
        /* Transition: '<S793>:114' */
    }

    /* End of Chart: '<S790>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_LHF_Spin_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LHF_Spin_FD3_ErrSts'
     */
    /* Transition: '<S793>:107' */
    rtb_TmpSignalConversionAtVeS_px = Rte_Read_VeSR1B_y_LHF_Spin_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_L);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_LHF_Spin_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S799>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LHF_Spin_FD3_SigSts_Value(&tmpRead_z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S796>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_z) & 3U) != 0U)
    {
        /* Transition: '<S799>:100' */
        /* Transition: '<S799>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S799>:104' */
        /*  MM */
        if ((((uint32)tmpRead_z) & 4U) != 0U)
        {
            /* Transition: '<S799>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S799>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S799>:110' */
                /* Call Tmot */
                VeSR1B_y_LHF_Spin_FD3_CallStatus = 3U;

                /* Event: '<S799>:40' */
                /* Transition: '<S799>:115' */
                /* Transition: '<S799>:114' */
            }
        }
        else
        {
            /* Transition: '<S799>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_px) == 133)
            {
                /* Transition: '<S799>:95' */
                /* Transition: '<S799>:116' */
                /* Call Nothing */
                VeSR1B_y_LHF_Spin_FD3_CallStatus = 4U;

                /* Transition: '<S799>:114' */
            }
            else
            {
                /* Transition: '<S799>:120' */
                if ((((uint32)tmpRead_z) & 8U) != 0U)
                {
                    /* Transition: '<S799>:122' */
                    /* Transition: '<S799>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S799>:126' */
                }
                else
                {
                    /* Transition: '<S799>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S799>:117' */
                /* Call Poke */
                VeSR1B_y_LHF_Spin_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S779>/Poke' */
                /* FunctionCaller: '<S801>/Function Caller' */
                /* Event: '<S799>:38' */
                Rte_Call_PokeCSVR_e_LeftFrontWhlDir_PokeCSVR_e_LeftFrontWhlDir
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_L, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S779>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S799>:111' */
        /* Call Fsft */
        VeSR1B_y_LHF_Spin_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S779>/Fsft' */
        /* FunctionCaller: '<S800>/Function Caller' */
        /* Event: '<S799>:39' */
        Rte_Call_FsftCSVR_e_LeftFrontWhlDir_FsftCSVR_e_LeftFrontWhlDir();

        /* End of Outputs for SubSystem: '<S779>/Fsft' */
        /* Transition: '<S799>:113' */
        /* Transition: '<S799>:115' */
        /* Transition: '<S799>:114' */
    }

    /* End of Chart: '<S796>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_LHF_WhlSnsrFailSts_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LHF_WhlSnsrFailSts_FD3_ErrSts'
     */
    /* Transition: '<S799>:107' */
    rtb_TmpSignalConversionAtVeS_kn =
        Rte_Read_VeSR1B_b_LHF_WhlSnsrFailSts_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_L);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_LHF_WhlSnsrFailSts_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S804>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LHF_WhlSnsrFailSts_FD3_SigSts_Value(&tmpRead_10);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S802>/Chart' */
    if ((((uint32)tmpRead_10) & 3U) != 0U)
    {
        /* Transition: '<S804>:100' */
        /* Transition: '<S804>:103' */
        /* Transition: '<S804>:111' */
        /* Call Fsft */
        VeSR1B_y_LHF_WhlSnsrFailSts_FD3_CallStatus = 2U;

        /* Event: '<S804>:39' */
        /* Transition: '<S804>:113' */
        /* Transition: '<S804>:115' */
        /* Transition: '<S804>:114' */
    }
    else
    {
        /* Transition: '<S804>:104' */
        /*  MM */
        if ((((uint32)tmpRead_10) & 4U) != 0U)
        {
            /* Transition: '<S804>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S804>:88' */
                /* Transition: '<S804>:111' */
                /* Call Fsft */
                VeSR1B_y_LHF_WhlSnsrFailSts_FD3_CallStatus = 2U;

                /* Event: '<S804>:39' */
                /* Transition: '<S804>:113' */
                /* Transition: '<S804>:115' */
                /* Transition: '<S804>:114' */
            }
            else
            {
                /* Transition: '<S804>:110' */
                /* Call Tmot */
                VeSR1B_y_LHF_WhlSnsrFailSts_FD3_CallStatus = 3U;

                /* Event: '<S804>:40' */
                /* Transition: '<S804>:115' */
                /* Transition: '<S804>:114' */
            }
        }
        else
        {
            /* Transition: '<S804>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_kn) == 133)
            {
                /* Transition: '<S804>:95' */
                /* Transition: '<S804>:116' */
                /* Call Nothing */
                VeSR1B_y_LHF_WhlSnsrFailSts_FD3_CallStatus = 4U;

                /* Transition: '<S804>:114' */
            }
            else
            {
                /* Transition: '<S804>:120' */
                /* Transition: '<S804>:117' */
                /* Call Poke */
                VeSR1B_y_LHF_WhlSnsrFailSts_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S780>/Poke' */
                /* FunctionCaller: '<S805>/Function Caller' */
                /* Event: '<S804>:38' */
                Rte_Call_PokeCSVR_b_WheelSensorFailStsLHF_PokeCSVR_b_WheelSensorFailStsLHF
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_L);

                /* End of Outputs for SubSystem: '<S780>/Poke' */
            }
        }
    }

    /* End of Chart: '<S802>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_LHRWheelSpeed_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LHRWheelSpeed_FD3_ErrSts'
     */
    /* Transition: '<S804>:107' */
    rtb_TmpSignalConversionAtVeS_n0 = Rte_Read_VeSR1B_v_LHRWheelSpeed_FD3_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_v_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_LHRWheelSpeed_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S809>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LHRWheelSpeed_FD3_SigSts_Value(&tmpRead_11);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S806>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_11) & 3U) != 0U)
    {
        /* Transition: '<S809>:100' */
        /* Transition: '<S809>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S809>:104' */
        /*  MM */
        if ((((uint32)tmpRead_11) & 4U) != 0U)
        {
            /* Transition: '<S809>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S809>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S809>:110' */
                /* Call Tmot */
                VeSR1B_y_LHRWheelSpeed_FD3_CallStatus = 3U;

                /* Event: '<S809>:40' */
                /* Transition: '<S809>:115' */
                /* Transition: '<S809>:114' */
            }
        }
        else
        {
            /* Transition: '<S809>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_n0) == 133)
            {
                /* Transition: '<S809>:95' */
                /* Transition: '<S809>:116' */
                /* Call Nothing */
                VeSR1B_y_LHRWheelSpeed_FD3_CallStatus = 4U;

                /* Transition: '<S809>:114' */
            }
            else
            {
                /* Transition: '<S809>:120' */
                if ((((uint32)tmpRead_11) & 8U) != 0U)
                {
                    /* Transition: '<S809>:122' */
                    /* Transition: '<S809>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S809>:126' */
                }
                else
                {
                    /* Transition: '<S809>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S809>:117' */
                /* Call Poke */
                VeSR1B_y_LHRWheelSpeed_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S781>/Poke' */
                /* FunctionCaller: '<S811>/Function Caller' */
                /* Event: '<S809>:38' */
                Rte_Call_PokeCSVR_n_LeftRearWhl_PokeCSVR_n_LeftRearWhl
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_v_d, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S781>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S809>:111' */
        /* Call Fsft */
        VeSR1B_y_LHRWheelSpeed_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S781>/Fsft' */
        /* FunctionCaller: '<S810>/Function Caller' */
        /* Event: '<S809>:39' */
        Rte_Call_FsftCSVR_n_LeftRearWhl_FsftCSVR_n_LeftRearWhl();

        /* End of Outputs for SubSystem: '<S781>/Fsft' */
        /* Transition: '<S809>:113' */
        /* Transition: '<S809>:115' */
        /* Transition: '<S809>:114' */
    }

    /* End of Chart: '<S806>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_LHR_Spin_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LHR_Spin_FD3_ErrSts'
     */
    /* Transition: '<S809>:107' */
    rtb_TmpSignalConversionAtVeS_dj = Rte_Read_VeSR1B_y_LHR_Spin_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_LHR_Spin_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S815>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LHR_Spin_FD3_SigSts_Value(&tmpRead_12);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S812>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_12) & 3U) != 0U)
    {
        /* Transition: '<S815>:100' */
        /* Transition: '<S815>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S815>:104' */
        /*  MM */
        if ((((uint32)tmpRead_12) & 4U) != 0U)
        {
            /* Transition: '<S815>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S815>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S815>:110' */
                /* Call Tmot */
                VeSR1B_y_LHR_Spin_FD3_CallStatus = 3U;

                /* Event: '<S815>:40' */
                /* Transition: '<S815>:115' */
                /* Transition: '<S815>:114' */
            }
        }
        else
        {
            /* Transition: '<S815>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_dj) == 133)
            {
                /* Transition: '<S815>:95' */
                /* Transition: '<S815>:116' */
                /* Call Nothing */
                VeSR1B_y_LHR_Spin_FD3_CallStatus = 4U;

                /* Transition: '<S815>:114' */
            }
            else
            {
                /* Transition: '<S815>:120' */
                if ((((uint32)tmpRead_12) & 8U) != 0U)
                {
                    /* Transition: '<S815>:122' */
                    /* Transition: '<S815>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S815>:126' */
                }
                else
                {
                    /* Transition: '<S815>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S815>:117' */
                /* Call Poke */
                VeSR1B_y_LHR_Spin_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S782>/Poke' */
                /* FunctionCaller: '<S817>/Function Caller' */
                /* Event: '<S815>:38' */
                Rte_Call_PokeCSVR_e_LeftRearWhlDir_PokeCSVR_e_LeftRearWhlDir
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_k, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S782>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S815>:111' */
        /* Call Fsft */
        VeSR1B_y_LHR_Spin_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S782>/Fsft' */
        /* FunctionCaller: '<S816>/Function Caller' */
        /* Event: '<S815>:39' */
        Rte_Call_FsftCSVR_e_LeftRearWhlDir_FsftCSVR_e_LeftRearWhlDir();

        /* End of Outputs for SubSystem: '<S782>/Fsft' */
        /* Transition: '<S815>:113' */
        /* Transition: '<S815>:115' */
        /* Transition: '<S815>:114' */
    }

    /* End of Chart: '<S812>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_LHR_WhlSnsrFailSts_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_LHR_WhlSnsrFailSts_FD3_ErrSts'
     */
    /* Transition: '<S815>:107' */
    rtb_TmpSignalConversionAtVeS_d5 =
        Rte_Read_VeSR1B_b_LHR_WhlSnsrFailSts_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__nv);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_LHR_WhlSnsrFailSts_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S820>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LHR_WhlSnsrFailSts_FD3_SigSts_Value(&tmpRead_13);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S818>/Chart' */
    if ((((uint32)tmpRead_13) & 3U) != 0U)
    {
        /* Transition: '<S820>:100' */
        /* Transition: '<S820>:103' */
        /* Transition: '<S820>:111' */
        /* Call Fsft */
        VeSR1B_y_LHR_WhlSnsrFailSts_FD3_CallStatus = 2U;

        /* Event: '<S820>:39' */
        /* Transition: '<S820>:113' */
        /* Transition: '<S820>:115' */
        /* Transition: '<S820>:114' */
    }
    else
    {
        /* Transition: '<S820>:104' */
        /*  MM */
        if ((((uint32)tmpRead_13) & 4U) != 0U)
        {
            /* Transition: '<S820>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S820>:88' */
                /* Transition: '<S820>:111' */
                /* Call Fsft */
                VeSR1B_y_LHR_WhlSnsrFailSts_FD3_CallStatus = 2U;

                /* Event: '<S820>:39' */
                /* Transition: '<S820>:113' */
                /* Transition: '<S820>:115' */
                /* Transition: '<S820>:114' */
            }
            else
            {
                /* Transition: '<S820>:110' */
                /* Call Tmot */
                VeSR1B_y_LHR_WhlSnsrFailSts_FD3_CallStatus = 3U;

                /* Event: '<S820>:40' */
                /* Transition: '<S820>:115' */
                /* Transition: '<S820>:114' */
            }
        }
        else
        {
            /* Transition: '<S820>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_d5) == 133)
            {
                /* Transition: '<S820>:95' */
                /* Transition: '<S820>:116' */
                /* Call Nothing */
                VeSR1B_y_LHR_WhlSnsrFailSts_FD3_CallStatus = 4U;

                /* Transition: '<S820>:114' */
            }
            else
            {
                /* Transition: '<S820>:120' */
                /* Transition: '<S820>:117' */
                /* Call Poke */
                VeSR1B_y_LHR_WhlSnsrFailSts_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S783>/Poke' */
                /* FunctionCaller: '<S821>/Function Caller' */
                /* Event: '<S820>:38' */
                Rte_Call_PokeCSVR_b_WheelSensorFailStsLHR_PokeCSVR_b_WheelSensorFailStsLHR
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__nv);

                /* End of Outputs for SubSystem: '<S783>/Poke' */
            }
        }
    }

    /* End of Chart: '<S818>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_RHFWheelSpeed_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_RHFWheelSpeed_FD3_ErrSts'
     */
    /* Transition: '<S820>:107' */
    rtb_TmpSignalConversionAtVeS_lv = Rte_Read_VeSR1B_v_RHFWheelSpeed_FD3_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_v_R);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_RHFWheelSpeed_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S825>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_RHFWheelSpeed_FD3_SigSts_Value(&tmpRead_14);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S822>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_14) & 3U) != 0U)
    {
        /* Transition: '<S825>:100' */
        /* Transition: '<S825>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S825>:104' */
        /*  MM */
        if ((((uint32)tmpRead_14) & 4U) != 0U)
        {
            /* Transition: '<S825>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S825>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S825>:110' */
                /* Call Tmot */
                VeSR1B_y_RHFWheelSpeed_FD3_CallStatus = 3U;

                /* Event: '<S825>:40' */
                /* Transition: '<S825>:115' */
                /* Transition: '<S825>:114' */
            }
        }
        else
        {
            /* Transition: '<S825>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_lv) == 133)
            {
                /* Transition: '<S825>:95' */
                /* Transition: '<S825>:116' */
                /* Call Nothing */
                VeSR1B_y_RHFWheelSpeed_FD3_CallStatus = 4U;

                /* Transition: '<S825>:114' */
            }
            else
            {
                /* Transition: '<S825>:120' */
                if ((((uint32)tmpRead_14) & 8U) != 0U)
                {
                    /* Transition: '<S825>:122' */
                    /* Transition: '<S825>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S825>:126' */
                }
                else
                {
                    /* Transition: '<S825>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S825>:117' */
                /* Call Poke */
                VeSR1B_y_RHFWheelSpeed_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S784>/Poke' */
                /* FunctionCaller: '<S827>/Function Caller' */
                /* Event: '<S825>:38' */
                Rte_Call_PokeCSVR_n_RightFrontWhl_PokeCSVR_n_RightFrontWhl
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_v_R, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S784>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S825>:111' */
        /* Call Fsft */
        VeSR1B_y_RHFWheelSpeed_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S784>/Fsft' */
        /* FunctionCaller: '<S826>/Function Caller' */
        /* Event: '<S825>:39' */
        Rte_Call_FsftCSVR_n_RightFrontWhl_FsftCSVR_n_RightFrontWhl();

        /* End of Outputs for SubSystem: '<S784>/Fsft' */
        /* Transition: '<S825>:113' */
        /* Transition: '<S825>:115' */
        /* Transition: '<S825>:114' */
    }

    /* End of Chart: '<S822>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_RHF_Spin_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_RHF_Spin_FD3_ErrSts'
     */
    /* Transition: '<S825>:107' */
    rtb_TmpSignalConversionAtVe_end = Rte_Read_VeSR1B_y_RHF_Spin_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_R);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_RHF_Spin_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S831>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_RHF_Spin_FD3_SigSts_Value(&tmpRead_15);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S828>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_15) & 3U) != 0U)
    {
        /* Transition: '<S831>:100' */
        /* Transition: '<S831>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S831>:104' */
        /*  MM */
        if ((((uint32)tmpRead_15) & 4U) != 0U)
        {
            /* Transition: '<S831>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S831>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S831>:110' */
                /* Call Tmot */
                VeSR1B_y_RHF_Spin_FD3_CallStatus = 3U;

                /* Event: '<S831>:40' */
                /* Transition: '<S831>:115' */
                /* Transition: '<S831>:114' */
            }
        }
        else
        {
            /* Transition: '<S831>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_end) == 133)
            {
                /* Transition: '<S831>:95' */
                /* Transition: '<S831>:116' */
                /* Call Nothing */
                VeSR1B_y_RHF_Spin_FD3_CallStatus = 4U;

                /* Transition: '<S831>:114' */
            }
            else
            {
                /* Transition: '<S831>:120' */
                if ((((uint32)tmpRead_15) & 8U) != 0U)
                {
                    /* Transition: '<S831>:122' */
                    /* Transition: '<S831>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S831>:126' */
                }
                else
                {
                    /* Transition: '<S831>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S831>:117' */
                /* Call Poke */
                VeSR1B_y_RHF_Spin_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S785>/Poke' */
                /* FunctionCaller: '<S833>/Function Caller' */
                /* Event: '<S831>:38' */
                Rte_Call_PokeCSVR_e_RightFrontWhlDir_PokeCSVR_e_RightFrontWhlDir
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_R, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S785>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S831>:111' */
        /* Call Fsft */
        VeSR1B_y_RHF_Spin_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S785>/Fsft' */
        /* FunctionCaller: '<S832>/Function Caller' */
        /* Event: '<S831>:39' */
        Rte_Call_FsftCSVR_e_RightFrontWhlDir_FsftCSVR_e_RightFrontWhlDir();

        /* End of Outputs for SubSystem: '<S785>/Fsft' */
        /* Transition: '<S831>:113' */
        /* Transition: '<S831>:115' */
        /* Transition: '<S831>:114' */
    }

    /* End of Chart: '<S828>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_RHF_WhlSnsrFailSts_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_RHF_WhlSnsrFailSts_FD3_ErrSts'
     */
    /* Transition: '<S831>:107' */
    rtb_TmpSignalConversionAtVeS_pm =
        Rte_Read_VeSR1B_b_RHF_WhlSnsrFailSts_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__pd);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_RHF_WhlSnsrFailSts_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S836>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_RHF_WhlSnsrFailSts_FD3_SigSts_Value(&tmpRead_16);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S834>/Chart' */
    if ((((uint32)tmpRead_16) & 3U) != 0U)
    {
        /* Transition: '<S836>:100' */
        /* Transition: '<S836>:103' */
        /* Transition: '<S836>:111' */
        /* Call Fsft */
        VeSR1B_y_RHF_WhlSnsrFailSts_FD3_CallStatus = 2U;

        /* Event: '<S836>:39' */
        /* Transition: '<S836>:113' */
        /* Transition: '<S836>:115' */
        /* Transition: '<S836>:114' */
    }
    else
    {
        /* Transition: '<S836>:104' */
        /*  MM */
        if ((((uint32)tmpRead_16) & 4U) != 0U)
        {
            /* Transition: '<S836>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S836>:88' */
                /* Transition: '<S836>:111' */
                /* Call Fsft */
                VeSR1B_y_RHF_WhlSnsrFailSts_FD3_CallStatus = 2U;

                /* Event: '<S836>:39' */
                /* Transition: '<S836>:113' */
                /* Transition: '<S836>:115' */
                /* Transition: '<S836>:114' */
            }
            else
            {
                /* Transition: '<S836>:110' */
                /* Call Tmot */
                VeSR1B_y_RHF_WhlSnsrFailSts_FD3_CallStatus = 3U;

                /* Event: '<S836>:40' */
                /* Transition: '<S836>:115' */
                /* Transition: '<S836>:114' */
            }
        }
        else
        {
            /* Transition: '<S836>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_pm) == 133)
            {
                /* Transition: '<S836>:95' */
                /* Transition: '<S836>:116' */
                /* Call Nothing */
                VeSR1B_y_RHF_WhlSnsrFailSts_FD3_CallStatus = 4U;

                /* Transition: '<S836>:114' */
            }
            else
            {
                /* Transition: '<S836>:120' */
                /* Transition: '<S836>:117' */
                /* Call Poke */
                VeSR1B_y_RHF_WhlSnsrFailSts_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S786>/Poke' */
                /* FunctionCaller: '<S837>/Function Caller' */
                /* Event: '<S836>:38' */
                Rte_Call_PokeCSVR_b_WheelSensorFailStsRHF_PokeCSVR_b_WheelSensorFailStsRHF
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__pd);

                /* End of Outputs for SubSystem: '<S786>/Poke' */
            }
        }
    }

    /* End of Chart: '<S834>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_RHRWheelSpeed_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_RHRWheelSpeed_FD3_ErrSts'
     */
    /* Transition: '<S836>:107' */
    rtb_TmpSignalConversionAtVeS_cb = Rte_Read_VeSR1B_v_RHRWheelSpeed_FD3_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_v_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_RHRWheelSpeed_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S841>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_RHRWheelSpeed_FD3_SigSts_Value(&tmpRead_17);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S838>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_17) & 3U) != 0U)
    {
        /* Transition: '<S841>:100' */
        /* Transition: '<S841>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S841>:104' */
        /*  MM */
        if ((((uint32)tmpRead_17) & 4U) != 0U)
        {
            /* Transition: '<S841>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S841>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S841>:110' */
                /* Call Tmot */
                VeSR1B_y_RHRWheelSpeed_FD3_CallStatus = 3U;

                /* Event: '<S841>:40' */
                /* Transition: '<S841>:115' */
                /* Transition: '<S841>:114' */
            }
        }
        else
        {
            /* Transition: '<S841>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_cb) == 133)
            {
                /* Transition: '<S841>:95' */
                /* Transition: '<S841>:116' */
                /* Call Nothing */
                VeSR1B_y_RHRWheelSpeed_FD3_CallStatus = 4U;

                /* Transition: '<S841>:114' */
            }
            else
            {
                /* Transition: '<S841>:120' */
                if ((((uint32)tmpRead_17) & 8U) != 0U)
                {
                    /* Transition: '<S841>:122' */
                    /* Transition: '<S841>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S841>:126' */
                }
                else
                {
                    /* Transition: '<S841>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S841>:117' */
                /* Call Poke */
                VeSR1B_y_RHRWheelSpeed_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S787>/Poke' */
                /* FunctionCaller: '<S843>/Function Caller' */
                /* Event: '<S841>:38' */
                Rte_Call_PokeCSVR_n_RightRearWhl_PokeCSVR_n_RightRearWhl
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_v_a, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S787>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S841>:111' */
        /* Call Fsft */
        VeSR1B_y_RHRWheelSpeed_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S787>/Fsft' */
        /* FunctionCaller: '<S842>/Function Caller' */
        /* Event: '<S841>:39' */
        Rte_Call_FsftCSVR_n_RightRearWhl_FsftCSVR_n_RightRearWhl();

        /* End of Outputs for SubSystem: '<S787>/Fsft' */
        /* Transition: '<S841>:113' */
        /* Transition: '<S841>:115' */
        /* Transition: '<S841>:114' */
    }

    /* End of Chart: '<S838>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_RHR_Spin_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_RHR_Spin_FD3_ErrSts'
     */
    /* Transition: '<S841>:107' */
    rtb_TmpSignalConversionAtVeS_lx = Rte_Read_VeSR1B_y_RHR_Spin_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__il);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_RHR_Spin_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S847>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_RHR_Spin_FD3_SigSts_Value(&tmpRead_18);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S844>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_18) & 3U) != 0U)
    {
        /* Transition: '<S847>:100' */
        /* Transition: '<S847>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S847>:104' */
        /*  MM */
        if ((((uint32)tmpRead_18) & 4U) != 0U)
        {
            /* Transition: '<S847>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S847>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S847>:110' */
                /* Call Tmot */
                VeSR1B_y_RHR_Spin_FD3_CallStatus = 3U;

                /* Event: '<S847>:40' */
                /* Transition: '<S847>:115' */
                /* Transition: '<S847>:114' */
            }
        }
        else
        {
            /* Transition: '<S847>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_lx) == 133)
            {
                /* Transition: '<S847>:95' */
                /* Transition: '<S847>:116' */
                /* Call Nothing */
                VeSR1B_y_RHR_Spin_FD3_CallStatus = 4U;

                /* Transition: '<S847>:114' */
            }
            else
            {
                /* Transition: '<S847>:120' */
                if ((((uint32)tmpRead_18) & 8U) != 0U)
                {
                    /* Transition: '<S847>:122' */
                    /* Transition: '<S847>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S847>:126' */
                }
                else
                {
                    /* Transition: '<S847>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S847>:117' */
                /* Call Poke */
                VeSR1B_y_RHR_Spin_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S788>/Poke' */
                /* FunctionCaller: '<S849>/Function Caller' */
                /* Event: '<S847>:38' */
                Rte_Call_PokeCSVR_e_RightRearWhlDir_PokeCSVR_e_RightRearWhlDir
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__il, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S788>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S847>:111' */
        /* Call Fsft */
        VeSR1B_y_RHR_Spin_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S788>/Fsft' */
        /* FunctionCaller: '<S848>/Function Caller' */
        /* Event: '<S847>:39' */
        Rte_Call_FsftCSVR_e_RightRearWhlDir_FsftCSVR_e_RightRearWhlDir();

        /* End of Outputs for SubSystem: '<S788>/Fsft' */
        /* Transition: '<S847>:113' */
        /* Transition: '<S847>:115' */
        /* Transition: '<S847>:114' */
    }

    /* End of Chart: '<S844>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_RHR_WhlSnsrFailSts_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_RHR_WhlSnsrFailSts_FD3_ErrSts'
     */
    /* Transition: '<S847>:107' */
    rtb_TmpSignalConversionAtVeS_eb =
        Rte_Read_VeSR1B_b_RHR_WhlSnsrFailSts_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ar);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_RHR_WhlSnsrFailSts_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S852>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_RHR_WhlSnsrFailSts_FD3_SigSts_Value(&tmpRead_19);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S850>/Chart' */
    if ((((uint32)tmpRead_19) & 3U) != 0U)
    {
        /* Transition: '<S852>:100' */
        /* Transition: '<S852>:103' */
        /* Transition: '<S852>:111' */
        /* Call Fsft */
        VeSR1B_y_RHR_WhlSnsrFailSts_FD3_CallStatus = 2U;

        /* Event: '<S852>:39' */
        /* Transition: '<S852>:113' */
        /* Transition: '<S852>:115' */
        /* Transition: '<S852>:114' */
    }
    else
    {
        /* Transition: '<S852>:104' */
        /*  MM */
        if ((((uint32)tmpRead_19) & 4U) != 0U)
        {
            /* Transition: '<S852>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S852>:88' */
                /* Transition: '<S852>:111' */
                /* Call Fsft */
                VeSR1B_y_RHR_WhlSnsrFailSts_FD3_CallStatus = 2U;

                /* Event: '<S852>:39' */
                /* Transition: '<S852>:113' */
                /* Transition: '<S852>:115' */
                /* Transition: '<S852>:114' */
            }
            else
            {
                /* Transition: '<S852>:110' */
                /* Call Tmot */
                VeSR1B_y_RHR_WhlSnsrFailSts_FD3_CallStatus = 3U;

                /* Event: '<S852>:40' */
                /* Transition: '<S852>:115' */
                /* Transition: '<S852>:114' */
            }
        }
        else
        {
            /* Transition: '<S852>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_eb) == 133)
            {
                /* Transition: '<S852>:95' */
                /* Transition: '<S852>:116' */
                /* Call Nothing */
                VeSR1B_y_RHR_WhlSnsrFailSts_FD3_CallStatus = 4U;

                /* Transition: '<S852>:114' */
            }
            else
            {
                /* Transition: '<S852>:120' */
                /* Transition: '<S852>:117' */
                /* Call Poke */
                VeSR1B_y_RHR_WhlSnsrFailSts_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S789>/Poke' */
                /* FunctionCaller: '<S853>/Function Caller' */
                /* Event: '<S852>:38' */
                Rte_Call_PokeCSVR_b_WheelSensorFailStsRHR_PokeCSVR_b_WheelSensorFailStsRHR
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ar);

                /* End of Outputs for SubSystem: '<S789>/Poke' */
            }
        }
    }

    /* End of Chart: '<S850>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_ASRActive_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ASRActive_FD3_ErrSts'
     */
    /* Transition: '<S852>:107' */
    rtb_TmpSignalConversionAtVeS_go = Rte_Read_VeSR1B_b_ASRActive_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ASRActive_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S859>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ASRActive_FD3_SigSts_Value(&tmpRead_1a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S856>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1a) & 3U) != 0U)
    {
        /* Transition: '<S859>:100' */
        /* Transition: '<S859>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S859>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1a) & 4U) != 0U)
        {
            /* Transition: '<S859>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S859>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S859>:110' */
                /* Call Tmot */
                VeSR1B_y_ASRActive_FD3_CallStatus = 3U;

                /* Event: '<S859>:40' */
                /* Transition: '<S859>:115' */
                /* Transition: '<S859>:114' */
            }
        }
        else
        {
            /* Transition: '<S859>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_go) == 133)
            {
                /* Transition: '<S859>:95' */
                /* Transition: '<S859>:116' */
                /* Call Nothing */
                VeSR1B_y_ASRActive_FD3_CallStatus = 4U;

                /* Transition: '<S859>:114' */
            }
            else
            {
                /* Transition: '<S859>:120' */
                /* Transition: '<S859>:117' */
                /* Call Poke */
                VeSR1B_y_ASRActive_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S854>/Poke' */
                /* FunctionCaller: '<S861>/Function Caller' incorporates:
                 *  Constant: '<S861>/Constant'
                 */
                /* Event: '<S859>:38' */
                Rte_Call_PokeBRKR_b_ASRActive_PokeBRKR_b_ASRActive
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_i, false);

                /* End of Outputs for SubSystem: '<S854>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S859>:111' */
        /* Call Fsft */
        VeSR1B_y_ASRActive_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S854>/Fsft' */
        /* FunctionCaller: '<S860>/Function Caller' */
        /* Event: '<S859>:39' */
        Rte_Call_FsftBRKR_b_ASRActive_FsftBRKR_b_ASRActive();

        /* End of Outputs for SubSystem: '<S854>/Fsft' */
        /* Transition: '<S859>:113' */
        /* Transition: '<S859>:115' */
        /* Transition: '<S859>:114' */
    }

    /* End of Chart: '<S856>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_EPBSts_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EPBSts_FD3_ErrSts'
     */
    /* Transition: '<S859>:107' */
    rtb_TmpSignalConversionAtVeS_fb = Rte_Read_VeSR1B_y_EPBSts_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__pq);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_EPBSts_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S865>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EPBSts_FD3_SigSts_Value(&tmpRead_1b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S862>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1b) & 3U) != 0U)
    {
        /* Transition: '<S865>:100' */
        /* Transition: '<S865>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S865>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1b) & 4U) != 0U)
        {
            /* Transition: '<S865>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S865>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S865>:110' */
                /* Call Tmot */
                VeSR1B_y_EPBSts_FD3_CallStatus = 3U;

                /* Event: '<S865>:40' */
                /* Transition: '<S865>:115' */
                /* Transition: '<S865>:114' */
            }
        }
        else
        {
            /* Transition: '<S865>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fb) == 133)
            {
                /* Transition: '<S865>:95' */
                /* Transition: '<S865>:116' */
                /* Call Nothing */
                VeSR1B_y_EPBSts_FD3_CallStatus = 4U;

                /* Transition: '<S865>:114' */
            }
            else
            {
                /* Transition: '<S865>:120' */
                if ((((uint32)tmpRead_1b) & 8U) != 0U)
                {
                    /* Transition: '<S865>:122' */
                    /* Transition: '<S865>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S865>:126' */
                }
                else
                {
                    /* Transition: '<S865>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S865>:117' */
                /* Call Poke */
                VeSR1B_y_EPBSts_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S855>/Poke' */
                /* FunctionCaller: '<S867>/Function Caller' */
                /* Event: '<S865>:38' */
                Rte_Call_PokePLTR_e_EPBHoldSt_PokePLTR_e_EPBHoldSt
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__pq, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S855>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S865>:111' */
        /* Call Fsft */
        VeSR1B_y_EPBSts_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S855>/Fsft' */
        /* FunctionCaller: '<S866>/Function Caller' */
        /* Event: '<S865>:39' */
        Rte_Call_FsftPLTR_e_EPBHoldSt_FsftPLTR_e_EPBHoldSt();

        /* End of Outputs for SubSystem: '<S855>/Fsft' */
        /* Transition: '<S865>:113' */
        /* Transition: '<S865>:115' */
        /* Transition: '<S865>:114' */
    }

    /* End of Chart: '<S862>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_ABSFailSts_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ABSFailSts_FD3_ErrSts'
     */
    /* Transition: '<S865>:107' */
    rtb_TmpSignalConversionAtVeS_b4 = Rte_Read_VeSR1B_b_ABSFailSts_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ma);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ABSFailSts_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S872>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ABSFailSts_FD3_SigSts_Value(&tmpRead_1c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S870>/Chart' */
    if ((((uint32)tmpRead_1c) & 3U) != 0U)
    {
        /* Transition: '<S872>:100' */
        /* Transition: '<S872>:103' */
        /* Transition: '<S872>:111' */
        /* Call Fsft */
        VeSR1B_y_ABSFailSts_FD3_CallStatus = 2U;

        /* Event: '<S872>:39' */
        /* Transition: '<S872>:113' */
        /* Transition: '<S872>:115' */
        /* Transition: '<S872>:114' */
    }
    else
    {
        /* Transition: '<S872>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1c) & 4U) != 0U)
        {
            /* Transition: '<S872>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S872>:88' */
                /* Transition: '<S872>:111' */
                /* Call Fsft */
                VeSR1B_y_ABSFailSts_FD3_CallStatus = 2U;

                /* Event: '<S872>:39' */
                /* Transition: '<S872>:113' */
                /* Transition: '<S872>:115' */
                /* Transition: '<S872>:114' */
            }
            else
            {
                /* Transition: '<S872>:110' */
                /* Call Tmot */
                VeSR1B_y_ABSFailSts_FD3_CallStatus = 3U;

                /* Event: '<S872>:40' */
                /* Transition: '<S872>:115' */
                /* Transition: '<S872>:114' */
            }
        }
        else
        {
            /* Transition: '<S872>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_b4) == 133)
            {
                /* Transition: '<S872>:95' */
                /* Transition: '<S872>:116' */
                /* Call Nothing */
                VeSR1B_y_ABSFailSts_FD3_CallStatus = 4U;

                /* Transition: '<S872>:114' */
            }
            else
            {
                /* Transition: '<S872>:120' */
                /* Transition: '<S872>:117' */
                /* Call Poke */
                VeSR1B_y_ABSFailSts_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S868>/Poke' */
                /* FunctionCaller: '<S873>/Function Caller' */
                /* Event: '<S872>:38' */
                Rte_Call_PokeBRKR_b_ABSFailSts_PokeBRKR_b_ABSFailSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ma);

                /* End of Outputs for SubSystem: '<S868>/Poke' */
            }
        }
    }

    /* End of Chart: '<S870>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_ESCFailSts_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ESCFailSts_FD3_ErrSts'
     */
    /* Transition: '<S872>:107' */
    rtb_TmpSignalConversionAtVeS_k4 = Rte_Read_VeSR1B_b_ESCFailSts_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__m3);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ESCFailSts_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S877>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ESCFailSts_FD3_SigSts_Value(&tmpRead_1d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S874>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1d) & 3U) != 0U)
    {
        /* Transition: '<S877>:100' */
        /* Transition: '<S877>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S877>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1d) & 4U) != 0U)
        {
            /* Transition: '<S877>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S877>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S877>:110' */
                /* Call Tmot */
                VeSR1B_y_ESCFailSts_FD3_CallStatus = 3U;

                /* Event: '<S877>:40' */
                /* Transition: '<S877>:115' */
                /* Transition: '<S877>:114' */
            }
        }
        else
        {
            /* Transition: '<S877>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_k4) == 133)
            {
                /* Transition: '<S877>:95' */
                /* Transition: '<S877>:116' */
                /* Call Nothing */
                VeSR1B_y_ESCFailSts_FD3_CallStatus = 4U;

                /* Transition: '<S877>:114' */
            }
            else
            {
                /* Transition: '<S877>:120' */
                /* Transition: '<S877>:117' */
                /* Call Poke */
                VeSR1B_y_ESCFailSts_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S869>/Poke' */
                /* FunctionCaller: '<S879>/Function Caller' */
                /* Event: '<S877>:38' */
                Rte_Call_PokeBRKR_b_ESCFailSts_PokeBRKR_b_ESCFailSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__m3);

                /* End of Outputs for SubSystem: '<S869>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S877>:111' */
        /* Call Fsft */
        VeSR1B_y_ESCFailSts_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S869>/Fsft' */
        /* FunctionCaller: '<S878>/Function Caller' */
        /* Event: '<S877>:39' */
        Rte_Call_FsftBRKR_b_ESCFailSts_FsftBRKR_b_ESCFailSts();

        /* End of Outputs for SubSystem: '<S869>/Fsft' */
        /* Transition: '<S877>:113' */
        /* Transition: '<S877>:115' */
        /* Transition: '<S877>:114' */
    }

    /* End of Chart: '<S874>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_CmdtBrkFrictAxlTorqFD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_CmdtBrkFrictAxlTorqFD3_ErrSts'
     */
    /* Transition: '<S877>:107' */
    rtb_TmpSignalConversionAtVeS_l4 =
        Rte_Read_VeSR1B_M_CmdtBrkFrictAxlTorqFD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_CmdtBrkFrictAxlTorqFD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S891>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_CmdtBrkFrictAxlTorqFD3_SigSts_Value(&tmpRead_1e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S888>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1e) & 3U) != 0U)
    {
        /* Transition: '<S891>:100' */
        /* Transition: '<S891>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S891>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1e) & 4U) != 0U)
        {
            /* Transition: '<S891>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S891>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S891>:110' */
                /* Call Tmot */
                VeSR1B_y_CmdtBrkFrictAxlTorqFD3_CallStatus = 3U;

                /* Event: '<S891>:40' */
                /* Transition: '<S891>:115' */
                /* Transition: '<S891>:114' */
            }
        }
        else
        {
            /* Transition: '<S891>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_l4) == 133)
            {
                /* Transition: '<S891>:95' */
                /* Transition: '<S891>:116' */
                /* Call Nothing */
                VeSR1B_y_CmdtBrkFrictAxlTorqFD3_CallStatus = 4U;

                /* Transition: '<S891>:114' */
            }
            else
            {
                /* Transition: '<S891>:120' */
                if ((((uint32)tmpRead_1e) & 8U) != 0U)
                {
                    /* Transition: '<S891>:122' */
                    /* Transition: '<S891>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S891>:126' */
                }
                else
                {
                    /* Transition: '<S891>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S891>:117' */
                /* Call Poke */
                VeSR1B_y_CmdtBrkFrictAxlTorqFD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S880>/Poke' */
                /* FunctionCaller: '<S893>/Function Caller' */
                /* Event: '<S891>:38' */
                Rte_Call_PokeBTQR_M_DrvrIntndedFricBrkTrq_PokeBTQR_M_DrvrIntndedFricBrkTrq
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_C, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S880>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S891>:111' */
        /* Call Fsft */
        VeSR1B_y_CmdtBrkFrictAxlTorqFD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S880>/Fsft' */
        /* FunctionCaller: '<S892>/Function Caller' */
        /* Event: '<S891>:39' */
        Rte_Call_FsftBTQR_M_DrvrIntndedFricBrkTrq_FsftBTQR_M_DrvrIntndedFricBrkTrq
            ();

        /* End of Outputs for SubSystem: '<S880>/Fsft' */
        /* Transition: '<S891>:113' */
        /* Transition: '<S891>:115' */
        /* Transition: '<S891>:114' */
    }

    /* End of Chart: '<S888>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_DrvrRqAxlTqEnbdBSM_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DrvrRqAxlTqEnbdBSM_FD3_ErrSts'
     */
    /* Transition: '<S891>:107' */
    rtb_TmpSignalConversionAtVe_chw =
        Rte_Read_VeSR1B_y_DrvrRqAxlTqEnbdBSM_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_DrvrRqAxlTqEnbdBSM_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S896>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DrvrRqAxlTqEnbdBSM_FD3_SigSts_Value(&tmpRead_1f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S894>/Chart' */
    if ((((uint32)tmpRead_1f) & 3U) != 0U)
    {
        /* Transition: '<S896>:100' */
        /* Transition: '<S896>:103' */
        /* Transition: '<S896>:111' */
        /* Call Fsft */
        VeSR1B_y_DrvrRqAxlTqEnbdBSM_FD3_CallStatus = 2U;

        /* Event: '<S896>:39' */
        /* Transition: '<S896>:113' */
        /* Transition: '<S896>:115' */
        /* Transition: '<S896>:114' */
    }
    else
    {
        /* Transition: '<S896>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1f) & 4U) != 0U)
        {
            /* Transition: '<S896>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S896>:88' */
                /* Transition: '<S896>:111' */
                /* Call Fsft */
                VeSR1B_y_DrvrRqAxlTqEnbdBSM_FD3_CallStatus = 2U;

                /* Event: '<S896>:39' */
                /* Transition: '<S896>:113' */
                /* Transition: '<S896>:115' */
                /* Transition: '<S896>:114' */
            }
            else
            {
                /* Transition: '<S896>:110' */
                /* Call Tmot */
                VeSR1B_y_DrvrRqAxlTqEnbdBSM_FD3_CallStatus = 3U;

                /* Event: '<S896>:40' */
                /* Transition: '<S896>:115' */
                /* Transition: '<S896>:114' */
            }
        }
        else
        {
            /* Transition: '<S896>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_chw) == 133)
            {
                /* Transition: '<S896>:95' */
                /* Transition: '<S896>:116' */
                /* Call Nothing */
                VeSR1B_y_DrvrRqAxlTqEnbdBSM_FD3_CallStatus = 4U;

                /* Transition: '<S896>:114' */
            }
            else
            {
                /* Transition: '<S896>:120' */
                /* Transition: '<S896>:117' */
                /* Call Poke */
                VeSR1B_y_DrvrRqAxlTqEnbdBSM_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S881>/Poke' */
                /* FunctionCaller: '<S897>/Function Caller' */
                /* Event: '<S896>:38' */
                Rte_Call_PokePLTR_e_BSM_AxleTrq_Enbld_PokePLTR_e_BSM_AxleTrq_Enbld
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_h);

                /* End of Outputs for SubSystem: '<S881>/Poke' */
            }
        }
    }

    /* End of Chart: '<S894>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_DrvrReqdAxlTrq_BSM_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DrvrReqdAxlTrq_BSM_FD3_ErrSts'
     */
    /* Transition: '<S896>:107' */
    rtb_TmpSignalConversionAtVeS_pu =
        Rte_Read_VeSR1B_M_DrvrReqdAxlTrq_BSM_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_D);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_DrvrReqdAxlTrq_BSM_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S901>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DrvrReqdAxlTrq_BSM_FD3_SigSts_Value(&tmpRead_1g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S898>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1g) & 3U) != 0U)
    {
        /* Transition: '<S901>:100' */
        /* Transition: '<S901>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S901>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1g) & 4U) != 0U)
        {
            /* Transition: '<S901>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S901>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S901>:110' */
                /* Call Tmot */
                VeSR1B_y_DrvrReqdAxlTrq_BSM_FD3_CallStatus = 3U;

                /* Event: '<S901>:40' */
                /* Transition: '<S901>:115' */
                /* Transition: '<S901>:114' */
            }
        }
        else
        {
            /* Transition: '<S901>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_pu) == 133)
            {
                /* Transition: '<S901>:95' */
                /* Transition: '<S901>:116' */
                /* Call Nothing */
                VeSR1B_y_DrvrReqdAxlTrq_BSM_FD3_CallStatus = 4U;

                /* Transition: '<S901>:114' */
            }
            else
            {
                /* Transition: '<S901>:120' */
                if ((((uint32)tmpRead_1g) & 8U) != 0U)
                {
                    /* Transition: '<S901>:122' */
                    /* Transition: '<S901>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S901>:126' */
                }
                else
                {
                    /* Transition: '<S901>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S901>:117' */
                /* Call Poke */
                VeSR1B_y_DrvrReqdAxlTrq_BSM_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S882>/Poke' */
                /* FunctionCaller: '<S903>/Function Caller' */
                /* Event: '<S901>:38' */
                Rte_Call_PokeCCTR_M_ACCTrq_BSM_PokeCCTR_M_ACCTrq_BSM
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_D, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S882>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S901>:111' */
        /* Call Fsft */
        VeSR1B_y_DrvrReqdAxlTrq_BSM_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S882>/Fsft' */
        /* FunctionCaller: '<S902>/Function Caller' */
        /* Event: '<S901>:39' */
        Rte_Call_FsftCCTR_M_ACCTrq_BSM_FsftCCTR_M_ACCTrq_BSM();

        /* End of Outputs for SubSystem: '<S882>/Fsft' */
        /* Transition: '<S901>:113' */
        /* Transition: '<S901>:115' */
        /* Transition: '<S901>:114' */
    }

    /* End of Chart: '<S898>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_OPD_Hold_Status_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_OPD_Hold_Status_ErrSts'
     */
    /* Transition: '<S901>:107' */
    rtb_TmpSignalConversionAtVeS_ao = Rte_Read_VeSR1B_y_OPD_Hold_Status_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_O);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_OPD_Hold_Status_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S907>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_OPD_Hold_Status_SigSts_Value(&tmpRead_1h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S904>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1h) & 3U) != 0U)
    {
        /* Transition: '<S907>:100' */
        /* Transition: '<S907>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S907>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1h) & 4U) != 0U)
        {
            /* Transition: '<S907>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S907>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S907>:110' */
                /* Call Tmot */
                VeSR1B_y_OPD_Hold_Status_CallStatus = 3U;

                /* Event: '<S907>:40' */
                /* Transition: '<S907>:115' */
                /* Transition: '<S907>:114' */
            }
        }
        else
        {
            /* Transition: '<S907>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ao) == 133)
            {
                /* Transition: '<S907>:95' */
                /* Transition: '<S907>:116' */
                /* Call Nothing */
                VeSR1B_y_OPD_Hold_Status_CallStatus = 4U;

                /* Transition: '<S907>:114' */
            }
            else
            {
                /* Transition: '<S907>:120' */
                if ((((uint32)tmpRead_1h) & 8U) != 0U)
                {
                    /* Transition: '<S907>:122' */
                    /* Transition: '<S907>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S907>:126' */
                }
                else
                {
                    /* Transition: '<S907>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S907>:117' */
                /* Call Poke */
                VeSR1B_y_OPD_Hold_Status_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S883>/Poke' */
                /* FunctionCaller: '<S909>/Function Caller' */
                /* Event: '<S907>:38' */
                Rte_Call_PokeBRKR_e_OPDHoldStatus_PokeBRKR_e_OPDHoldStatus
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_O, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S883>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S907>:111' */
        /* Call Fsft */
        VeSR1B_y_OPD_Hold_Status_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S883>/Fsft' */
        /* FunctionCaller: '<S908>/Function Caller' */
        /* Event: '<S907>:39' */
        Rte_Call_FsftBRKR_e_OPDHoldStatus_FsftBRKR_e_OPDHoldStatus();

        /* End of Outputs for SubSystem: '<S883>/Fsft' */
        /* Transition: '<S907>:113' */
        /* Transition: '<S907>:115' */
        /* Transition: '<S907>:114' */
    }

    /* End of Chart: '<S904>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_Regen_AxleTorque_Req_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_Regen_AxleTorque_Req_ErrSts'
     */
    /* Transition: '<S907>:107' */
    rtb_TmpSignalConversionAtVe_nv0 =
        Rte_Read_VeSR1B_M_Regen_AxleTorque_Req_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_R);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_Regen_AxleTorque_Req_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S913>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Regen_AxleTorque_Req_SigSts_Value(&tmpRead_1i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S910>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1i) & 3U) != 0U)
    {
        /* Transition: '<S913>:100' */
        /* Transition: '<S913>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S913>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1i) & 4U) != 0U)
        {
            /* Transition: '<S913>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S913>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S913>:110' */
                /* Call Tmot */
                VeSR1B_y_Regen_AxleTorque_Req_CallStatus = 3U;

                /* Event: '<S913>:40' */
                /* Transition: '<S913>:115' */
                /* Transition: '<S913>:114' */
            }
        }
        else
        {
            /* Transition: '<S913>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_nv0) == 133)
            {
                /* Transition: '<S913>:95' */
                /* Transition: '<S913>:116' */
                /* Call Nothing */
                VeSR1B_y_Regen_AxleTorque_Req_CallStatus = 4U;

                /* Transition: '<S913>:114' */
            }
            else
            {
                /* Transition: '<S913>:120' */
                if ((((uint32)tmpRead_1i) & 8U) != 0U)
                {
                    /* Transition: '<S913>:122' */
                    /* Transition: '<S913>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S913>:126' */
                }
                else
                {
                    /* Transition: '<S913>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S913>:117' */
                /* Call Poke */
                VeSR1B_y_Regen_AxleTorque_Req_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S884>/Poke' */
                /* FunctionCaller: '<S915>/Function Caller' */
                /* Event: '<S913>:38' */
                Rte_Call_PokeBTQR_M_RegenBrkAxleTrqReq_PokeBTQR_M_RegenBrkAxleTrqReq
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_R, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S884>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S913>:111' */
        /* Call Fsft */
        VeSR1B_y_Regen_AxleTorque_Req_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S884>/Fsft' */
        /* FunctionCaller: '<S914>/Function Caller' */
        /* Event: '<S913>:39' */
        Rte_Call_FsftBTQR_M_RegenBrkAxleTrqReq_FsftBTQR_M_RegenBrkAxleTrqReq();

        /* End of Outputs for SubSystem: '<S884>/Fsft' */
        /* Transition: '<S913>:113' */
        /* Transition: '<S913>:115' */
        /* Transition: '<S913>:114' */
    }

    /* End of Chart: '<S910>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_TotalAxleMaxRq_BSM_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_TotalAxleMaxRq_BSM_FD3_ErrSts'
     */
    /* Transition: '<S913>:107' */
    rtb_TmpSignalConversionAtVeS_aj =
        Rte_Read_VeSR1B_b_TotalAxleMaxRq_BSM_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__gb);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_TotalAxleMaxRq_BSM_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S919>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_TotalAxleMaxRq_BSM_FD3_SigSts_Value(&tmpRead_1j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S916>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1j) & 3U) != 0U)
    {
        /* Transition: '<S919>:100' */
        /* Transition: '<S919>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S919>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1j) & 4U) != 0U)
        {
            /* Transition: '<S919>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S919>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S919>:110' */
                /* Call Tmot */
                VeSR1B_y_TotalAxleMaxRq_BSM_FD3_CallStatus = 3U;

                /* Event: '<S919>:40' */
                /* Transition: '<S919>:115' */
                /* Transition: '<S919>:114' */
            }
        }
        else
        {
            /* Transition: '<S919>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_aj) == 133)
            {
                /* Transition: '<S919>:95' */
                /* Transition: '<S919>:116' */
                /* Call Nothing */
                VeSR1B_y_TotalAxleMaxRq_BSM_FD3_CallStatus = 4U;

                /* Transition: '<S919>:114' */
            }
            else
            {
                /* Transition: '<S919>:120' */
                /* Transition: '<S919>:117' */
                /* Call Poke */
                VeSR1B_y_TotalAxleMaxRq_BSM_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S885>/Poke' */
                /* FunctionCaller: '<S921>/Function Caller' incorporates:
                 *  Constant: '<S921>/Constant'
                 */
                /* Event: '<S919>:38' */
                Rte_Call_PokeSCCR_b_FrntAxlMaxRq_PokeSCCR_b_FrntAxlMaxRq
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__gb, false);

                /* End of Outputs for SubSystem: '<S885>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S919>:111' */
        /* Call Fsft */
        VeSR1B_y_TotalAxleMaxRq_BSM_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S885>/Fsft' */
        /* FunctionCaller: '<S920>/Function Caller' */
        /* Event: '<S919>:39' */
        Rte_Call_FsftSCCR_b_FrntAxlMaxRq_FsftSCCR_b_FrntAxlMaxRq();

        /* End of Outputs for SubSystem: '<S885>/Fsft' */
        /* Transition: '<S919>:113' */
        /* Transition: '<S919>:115' */
        /* Transition: '<S919>:114' */
    }

    /* End of Chart: '<S916>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_TotalAxleMinRq_BSM_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_TotalAxleMinRq_BSM_FD3_ErrSts'
     */
    /* Transition: '<S919>:107' */
    rtb_TmpSignalConversionAtVeS_gk =
        Rte_Read_VeSR1B_b_TotalAxleMinRq_BSM_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__d1);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_TotalAxleMinRq_BSM_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S925>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_TotalAxleMinRq_BSM_FD3_SigSts_Value(&tmpRead_1k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S922>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1k) & 3U) != 0U)
    {
        /* Transition: '<S925>:100' */
        /* Transition: '<S925>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S925>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1k) & 4U) != 0U)
        {
            /* Transition: '<S925>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S925>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S925>:110' */
                /* Call Tmot */
                VeSR1B_y_TotalAxleMinRq_BSM_FD3_CallStatus = 3U;

                /* Event: '<S925>:40' */
                /* Transition: '<S925>:115' */
                /* Transition: '<S925>:114' */
            }
        }
        else
        {
            /* Transition: '<S925>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_gk) == 133)
            {
                /* Transition: '<S925>:95' */
                /* Transition: '<S925>:116' */
                /* Call Nothing */
                VeSR1B_y_TotalAxleMinRq_BSM_FD3_CallStatus = 4U;

                /* Transition: '<S925>:114' */
            }
            else
            {
                /* Transition: '<S925>:120' */
                /* Transition: '<S925>:117' */
                /* Call Poke */
                VeSR1B_y_TotalAxleMinRq_BSM_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S886>/Poke' */
                /* FunctionCaller: '<S927>/Function Caller' incorporates:
                 *  Constant: '<S927>/Constant'
                 */
                /* Event: '<S925>:38' */
                Rte_Call_PokeSCCR_b_FrntAxlMinRq_PokeSCCR_b_FrntAxlMinRq
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__d1, false);

                /* End of Outputs for SubSystem: '<S886>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S925>:111' */
        /* Call Fsft */
        VeSR1B_y_TotalAxleMinRq_BSM_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S886>/Fsft' */
        /* FunctionCaller: '<S926>/Function Caller' */
        /* Event: '<S925>:39' */
        Rte_Call_FsftSCCR_b_FrntAxlMinRq_FsftSCCR_b_FrntAxlMinRq();

        /* End of Outputs for SubSystem: '<S886>/Fsft' */
        /* Transition: '<S925>:113' */
        /* Transition: '<S925>:115' */
        /* Transition: '<S925>:114' */
    }

    /* End of Chart: '<S922>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_TotalAxle_Rq_BSM_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_TotalAxle_Rq_BSM_FD3_ErrSts'
     */
    /* Transition: '<S925>:107' */
    rtb_TmpSignalConversionAtVeS_k2 =
        Rte_Read_VeSR1B_M_TotalAxle_Rq_BSM_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_T);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_TotalAxle_Rq_BSM_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S931>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_TotalAxle_Rq_BSM_FD3_SigSts_Value(&tmpRead_1l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S928>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1l) & 3U) != 0U)
    {
        /* Transition: '<S931>:100' */
        /* Transition: '<S931>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S931>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1l) & 4U) != 0U)
        {
            /* Transition: '<S931>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S931>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S931>:110' */
                /* Call Tmot */
                VeSR1B_y_TotalAxle_Rq_BSM_FD3_CallStatus = 3U;

                /* Event: '<S931>:40' */
                /* Transition: '<S931>:115' */
                /* Transition: '<S931>:114' */
            }
        }
        else
        {
            /* Transition: '<S931>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_k2) == 133)
            {
                /* Transition: '<S931>:95' */
                /* Transition: '<S931>:116' */
                /* Call Nothing */
                VeSR1B_y_TotalAxle_Rq_BSM_FD3_CallStatus = 4U;

                /* Transition: '<S931>:114' */
            }
            else
            {
                /* Transition: '<S931>:120' */
                if ((((uint32)tmpRead_1l) & 8U) != 0U)
                {
                    /* Transition: '<S931>:122' */
                    /* Transition: '<S931>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S931>:126' */
                }
                else
                {
                    /* Transition: '<S931>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S931>:117' */
                /* Call Poke */
                VeSR1B_y_TotalAxle_Rq_BSM_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S887>/Poke' */
                /* FunctionCaller: '<S933>/Function Caller' */
                /* Event: '<S931>:38' */
                Rte_Call_PokeSCCR_M_FrntAxlRq_PokeSCCR_M_FrntAxlRq
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_T, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S887>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S931>:111' */
        /* Call Fsft */
        VeSR1B_y_TotalAxle_Rq_BSM_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S887>/Fsft' */
        /* FunctionCaller: '<S932>/Function Caller' */
        /* Event: '<S931>:39' */
        Rte_Call_FsftSCCR_M_FrntAxlRq_FsftSCCR_M_FrntAxlRq();

        /* End of Outputs for SubSystem: '<S887>/Fsft' */
        /* Transition: '<S931>:113' */
        /* Transition: '<S931>:115' */
        /* Transition: '<S931>:114' */
    }

    /* End of Chart: '<S928>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_BrakePdlPosn_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_BrakePdlPosn_FD3_ErrSts'
     */
    /* Transition: '<S931>:107' */
    rtb_TmpSignalConversionAtVeS_ez = Rte_Read_VeSR1B_Pct_BrakePdlPosn_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_P_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_BrakePdlPosn_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S940>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_BrakePdlPosn_FD3_SigSts_Value(&tmpRead_1m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S937>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1m) & 3U) != 0U)
    {
        /* Transition: '<S940>:100' */
        /* Transition: '<S940>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S940>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1m) & 4U) != 0U)
        {
            /* Transition: '<S940>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S940>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S940>:110' */
                /* Call Tmot */
                VeSR1B_y_BrakePdlPosn_FD3_CallStatus = 3U;

                /* Event: '<S940>:40' */
                /* Transition: '<S940>:115' */
                /* Transition: '<S940>:114' */
            }
        }
        else
        {
            /* Transition: '<S940>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ez) == 133)
            {
                /* Transition: '<S940>:95' */
                /* Transition: '<S940>:116' */
                /* Call Nothing */
                VeSR1B_y_BrakePdlPosn_FD3_CallStatus = 4U;

                /* Transition: '<S940>:114' */
            }
            else
            {
                /* Transition: '<S940>:120' */
                if ((((uint32)tmpRead_1m) & 8U) != 0U)
                {
                    /* Transition: '<S940>:122' */
                    /* Transition: '<S940>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S940>:126' */
                }
                else
                {
                    /* Transition: '<S940>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S940>:117' */
                /* Call Poke */
                VeSR1B_y_BrakePdlPosn_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S934>/Poke' */
                /* FunctionCaller: '<S942>/Function Caller' */
                /* Event: '<S940>:38' */
                Rte_Call_PokeBRKR_Pct_BrkTravelSts_PokeBRKR_Pct_BrkTravelSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_P_m, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S934>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S940>:111' */
        /* Call Fsft */
        VeSR1B_y_BrakePdlPosn_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S934>/Fsft' */
        /* FunctionCaller: '<S941>/Function Caller' */
        /* Event: '<S940>:39' */
        Rte_Call_FsftBRKR_b_BrkTravelSts_FsftBRKR_b_BrkTravelSts();

        /* End of Outputs for SubSystem: '<S934>/Fsft' */
        /* Transition: '<S940>:113' */
        /* Transition: '<S940>:115' */
        /* Transition: '<S940>:114' */
    }

    /* End of Chart: '<S937>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_BrkPdl_Flt_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_BrkPdl_Flt_FD3_ErrSts'
     */
    /* Transition: '<S940>:107' */
    rtb_TmpSignalConversionAtVeS_bu = Rte_Read_VeSR1B_b_BrkPdl_Flt_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__cc);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_BrkPdl_Flt_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S946>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_BrkPdl_Flt_FD3_SigSts_Value(&tmpRead_1n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S943>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1n) & 3U) != 0U)
    {
        /* Transition: '<S946>:100' */
        /* Transition: '<S946>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S946>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1n) & 4U) != 0U)
        {
            /* Transition: '<S946>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S946>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S946>:110' */
                /* Call Tmot */
                VeSR1B_y_BrkPdl_Flt_FD3_CallStatus = 3U;

                /* Event: '<S946>:40' */
                /* Transition: '<S946>:115' */
                /* Transition: '<S946>:114' */
            }
        }
        else
        {
            /* Transition: '<S946>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_bu) == 133)
            {
                /* Transition: '<S946>:95' */
                /* Transition: '<S946>:116' */
                /* Call Nothing */
                VeSR1B_y_BrkPdl_Flt_FD3_CallStatus = 4U;

                /* Transition: '<S946>:114' */
            }
            else
            {
                /* Transition: '<S946>:120' */
                /* Transition: '<S946>:117' */
                /* Call Poke */
                VeSR1B_y_BrkPdl_Flt_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S935>/Poke' */
                /* FunctionCaller: '<S948>/Function Caller' incorporates:
                 *  Constant: '<S948>/Constant'
                 */
                /* Event: '<S946>:38' */
                Rte_Call_PokeBRKR_b_BrkPdlFlt_PokeBRKR_b_BrkPdlFlt
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__cc, false);

                /* End of Outputs for SubSystem: '<S935>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S946>:111' */
        /* Call Fsft */
        VeSR1B_y_BrkPdl_Flt_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S935>/Fsft' */
        /* FunctionCaller: '<S947>/Function Caller' */
        /* Event: '<S946>:39' */
        Rte_Call_FsftBRKR_b_BrkPdlFlt_FsftBRKR_b_BrkPdlFlt();

        /* End of Outputs for SubSystem: '<S935>/Fsft' */
        /* Transition: '<S946>:113' */
        /* Transition: '<S946>:115' */
        /* Transition: '<S946>:114' */
    }

    /* End of Chart: '<S943>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_BrkPdl_Stat_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_BrkPdl_Stat_FD3_ErrSts'
     */
    /* Transition: '<S946>:107' */
    rtb_TmpSignalConversionAtVeS_fz = Rte_Read_VeSR1B_y_BrkPdl_Stat_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__o3);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_BrkPdl_Stat_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S952>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_BrkPdl_Stat_FD3_SigSts_Value(&tmpRead_1o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S949>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1o) & 3U) != 0U)
    {
        /* Transition: '<S952>:100' */
        /* Transition: '<S952>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S952>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1o) & 4U) != 0U)
        {
            /* Transition: '<S952>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S952>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S952>:110' */
                /* Call Tmot */
                VeSR1B_y_BrkPdl_Stat_FD3_CallStatus = 3U;

                /* Event: '<S952>:40' */
                /* Transition: '<S952>:115' */
                /* Transition: '<S952>:114' */
            }
        }
        else
        {
            /* Transition: '<S952>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fz) == 133)
            {
                /* Transition: '<S952>:95' */
                /* Transition: '<S952>:116' */
                /* Call Nothing */
                VeSR1B_y_BrkPdl_Stat_FD3_CallStatus = 4U;

                /* Transition: '<S952>:114' */
            }
            else
            {
                /* Transition: '<S952>:120' */
                if ((((uint32)tmpRead_1o) & 8U) != 0U)
                {
                    /* Transition: '<S952>:122' */
                    /* Transition: '<S952>:125' */
                    FA_out_jw4 = true;

                    /* Transition: '<S952>:126' */
                }
                else
                {
                    /* Transition: '<S952>:124' */
                    FA_out_jw4 = false;
                }

                /* Transition: '<S952>:117' */
                /* Call Poke */
                VeSR1B_y_BrkPdl_Stat_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S936>/Poke' */
                /* FunctionCaller: '<S954>/Function Caller' */
                /* Event: '<S952>:38' */
                Rte_Call_PokeBRKR_e_BrkPedalDscrtInpt_PokeBRKR_e_BrkPedalDscrtInpt
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__o3, FA_out_jw4);

                /* End of Outputs for SubSystem: '<S936>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S952>:111' */
        /* Call Fsft */
        VeSR1B_y_BrkPdl_Stat_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S936>/Fsft' */
        /* FunctionCaller: '<S953>/Function Caller' */
        /* Event: '<S952>:39' */
        Rte_Call_FsftBRKR_b_BrkPedalDscrtInpt_FsftBRKR_b_BrkPedalDscrtInpt();

        /* End of Outputs for SubSystem: '<S936>/Fsft' */
        /* Transition: '<S952>:113' */
        /* Transition: '<S952>:115' */
        /* Transition: '<S952>:114' */
    }

    /* End of Chart: '<S949>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_y_ControlEncodingRsp' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ControlEncodingRsp'
     */
    /* Transition: '<S952>:107' */
    rtb_TmpSignalConversionAtVe_ofb = Rte_Read_VeSR1B_y_ControlEncodingRsp_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__f4);

    /* SignalConversion generated from: '<S3>/VeSR1B_y_MKKey1org21' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MKKey1org21'
     */
    rtb_TmpSignalConversionAtVeS_ev = Rte_Read_VeSR1B_y_MKKey1org21_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ii);

    /* SignalConversion generated from: '<S3>/VeSR1B_y_MKKey2org22' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MKKey2org22'
     */
    rtb_TmpSignalConversionAtVeS_ai = Rte_Read_VeSR1B_y_MKKey2org22_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__nt);

    /* SignalConversion generated from: '<S3>/VeSR1B_y_MKKey_3' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MKKey_3'
     */
    rtb_TmpSignalConversionAtVeS_fw = Rte_Read_VeSR1B_y_MKKey_3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__kx);

    /* SignalConversion generated from: '<S3>/VeSR1B_y_MKKey_4' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MKKey_4'
     */
    rtb_TmpSignalConversionAtVeS_ej = Rte_Read_VeSR1B_y_MKKey_4_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__op);

    /* SignalConversion generated from: '<S3>/VeSR1B_y_MKKey_5' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MKKey_5'
     */
    rtb_TmpSignalConversionAtVeSR_h = Rte_Read_VeSR1B_y_MKKey_5_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__eb);

    /* SignalConversion generated from: '<S3>/VeSR1B_y_MKKey_6' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MKKey_6'
     */
    rtb_TmpSignalConversionAtVe_of2 = Rte_Read_VeSR1B_y_MKKey_6_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__oc);

    /* SignalConversion generated from: '<S3>/VeSR1B_b_ImmoParkReq' incorporates:
     *  Inport: '<Root>/VeSR1B_b_ImmoParkReq'
     */
    rtb_TmpSignalConversionAtVe_ali = Rte_Read_VeSR1B_b_ImmoParkReq_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ms);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_b_IMMO_CODE_RESPONSE_NewEvent' */
    (void)Rte_Read_VeSR1B_b_IMMO_CODE_RESPONSE_NewEvent_Value(&FA_out_bu);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Outputs for Enabled SubSystem: '<S550>/IMMO_CODE_RESPONSE' incorporates:
     *  EnablePort: '<S955>/Enable'
     */
    if (FA_out_bu)
    {
        /* Inport: '<Root>/VeSR1B_y_ControlEncodingRsp_SigSts' */
        /* Gateway: ArbtrLogic_Protected/Chart */
        /* During: ArbtrLogic_Protected/Chart */
        /* Entry Internal: ArbtrLogic_Protected/Chart */
        /* Transition: '<S966>:99' */
        /*  CRC | MC
           [(SigSts&0x1) | (SigSts&0x2)] */
        (void)Rte_Read_VeSR1B_y_ControlEncodingRsp_SigSts_Value(&tmpRead_1z);

        /* Chart: '<S964>/Chart' */
        if ((((uint32)tmpRead_1z) & 3U) != 0U)
        {
            /* Transition: '<S966>:100' */
            /* Transition: '<S966>:103' */
            /* Transition: '<S966>:111' */
            /* Call Fsft */
            VeCANR_y_ControEncodingRsp_CallStatus = 2U;

            /* Event: '<S966>:39' */
            /* Transition: '<S966>:113' */
            /* Transition: '<S966>:115' */
            /* Transition: '<S966>:114' */
        }
        else
        {
            /* Transition: '<S966>:104' */
            /*  MM */
            if ((((uint32)tmpRead_1z) & 4U) != 0U)
            {
                /* Transition: '<S966>:96' */
                if (rtb_RelationalOperator_a)
                {
                    /* Transition: '<S966>:88' */
                    /* Transition: '<S966>:111' */
                    /* Call Fsft */
                    VeCANR_y_ControEncodingRsp_CallStatus = 2U;

                    /* Event: '<S966>:39' */
                    /* Transition: '<S966>:113' */
                    /* Transition: '<S966>:115' */
                    /* Transition: '<S966>:114' */
                }
                else
                {
                    /* Transition: '<S966>:110' */
                    /* Call Tmot */
                    VeCANR_y_ControEncodingRsp_CallStatus = 3U;

                    /* Event: '<S966>:40' */
                    /* Transition: '<S966>:115' */
                    /* Transition: '<S966>:114' */
                }
            }
            else
            {
                /* Transition: '<S966>:75' */
                if (((sint32)rtb_TmpSignalConversionAtVe_ofb) == 133)
                {
                    /* Transition: '<S966>:95' */
                    /* Transition: '<S966>:116' */
                    /* Call Nothing */
                    VeCANR_y_ControEncodingRsp_CallStatus = 4U;

                    /* Transition: '<S966>:114' */
                }
                else
                {
                    /* Transition: '<S966>:120' */
                    /* Transition: '<S966>:117' */
                    /* Call Poke */
                    VeCANR_y_ControEncodingRsp_CallStatus = 1U;

                    /* Outputs for Function Call SubSystem: '<S956>/Poke' */
                    /* FunctionCaller: '<S965>/Function Caller' */
                    /* Event: '<S966>:38' */
                    Rte_Call_PokeIMOR_y_CntrlEncdResp_PokeIMOR_y_CntrlEncdResp
                        (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__f4);

                    /* End of Outputs for SubSystem: '<S956>/Poke' */
                }
            }
        }

        /* End of Chart: '<S964>/Chart' */

        /* Inport: '<Root>/VeSR1B_y_ImmoParkReq_SigSts' */
        /* Transition: '<S966>:107' */
        /* Gateway: ArbtrLogic_Protected/Chart */
        /* During: ArbtrLogic_Protected/Chart */
        /* Entry Internal: ArbtrLogic_Protected/Chart */
        /* Transition: '<S970>:99' */
        /*  CRC | MC
           [(SigSts&0x1) | (SigSts&0x2)] */
        (void)Rte_Read_VeSR1B_y_ImmoParkReq_SigSts_Value(&tmpRead_26);

        /* Chart: '<S967>/Chart' */
        guard1 = false;
        if ((((uint32)tmpRead_26) & 3U) != 0U)
        {
            /* Transition: '<S970>:100' */
            /* Transition: '<S970>:103' */
            guard1 = true;
        }
        else
        {
            /* Transition: '<S970>:104' */
            /*  MM */
            if ((((uint32)tmpRead_26) & 4U) != 0U)
            {
                /* Transition: '<S970>:96' */
                if (rtb_RelationalOperator_a)
                {
                    /* Transition: '<S970>:88' */
                    guard1 = true;
                }
                else
                {
                    /* Transition: '<S970>:110' */
                    /* Call Tmot */
                    VeCANR_y_ImmoParkReq_CallStatus = 3U;

                    /* Event: '<S970>:40' */
                    /* Transition: '<S970>:115' */
                    /* Transition: '<S970>:114' */
                }
            }
            else
            {
                /* Transition: '<S970>:75' */
                if (((sint32)rtb_TmpSignalConversionAtVe_ali) == 133)
                {
                    /* Transition: '<S970>:95' */
                    /* Transition: '<S970>:116' */
                    /* Call Nothing */
                    VeCANR_y_ImmoParkReq_CallStatus = 4U;

                    /* Transition: '<S970>:114' */
                }
                else
                {
                    /* Transition: '<S970>:120' */
                    /* Transition: '<S970>:117' */
                    /* Call Poke */
                    VeCANR_y_ImmoParkReq_CallStatus = 1U;

                    /* Outputs for Function Call SubSystem: '<S957>/Poke' */
                    /* FunctionCaller: '<S969>/Function Caller' */
                    /* Event: '<S970>:38' */
                    Rte_Call_PokePLTR_b_ImmoParkReq_PokePLTR_b_ImmoParkReq
                        (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ms);

                    /* End of Outputs for SubSystem: '<S957>/Poke' */
                }
            }
        }

        if (guard1)
        {
            /* Transition: '<S970>:111' */
            /* Call Fsft */
            VeCANR_y_ImmoParkReq_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S957>/Fsft' */
            /* FunctionCaller: '<S968>/Function Caller' */
            /* Event: '<S970>:39' */
            Rte_Call_FsftPLTR_b_ImmoParkReq_FsftPLTR_b_ImmoParkReq();

            /* End of Outputs for SubSystem: '<S957>/Fsft' */
            /* Transition: '<S970>:113' */
            /* Transition: '<S970>:115' */
            /* Transition: '<S970>:114' */
        }

        /* End of Chart: '<S967>/Chart' */

        /* Inport: '<Root>/VeSR1B_y_MKKey1org21_SigSts' */
        /* Transition: '<S970>:107' */
        /* Gateway: ArbtrLogic_Protected/Chart */
        /* During: ArbtrLogic_Protected/Chart */
        /* Entry Internal: ArbtrLogic_Protected/Chart */
        /* Transition: '<S973>:99' */
        /*  CRC | MC
           [(SigSts&0x1) | (SigSts&0x2)] */
        (void)Rte_Read_VeSR1B_y_MKKey1org21_SigSts_Value(&tmpRead_20);

        /* Chart: '<S971>/Chart' */
        if ((((uint32)tmpRead_20) & 3U) != 0U)
        {
            /* Transition: '<S973>:100' */
            /* Transition: '<S973>:103' */
            /* Transition: '<S973>:111' */
            /* Call Fsft */
            VeCANR_y_MKKey1org21_CallStatus = 2U;

            /* Event: '<S973>:39' */
            /* Transition: '<S973>:113' */
            /* Transition: '<S973>:115' */
            /* Transition: '<S973>:114' */
        }
        else
        {
            /* Transition: '<S973>:104' */
            /*  MM */
            if ((((uint32)tmpRead_20) & 4U) != 0U)
            {
                /* Transition: '<S973>:96' */
                if (rtb_RelationalOperator_a)
                {
                    /* Transition: '<S973>:88' */
                    /* Transition: '<S973>:111' */
                    /* Call Fsft */
                    VeCANR_y_MKKey1org21_CallStatus = 2U;

                    /* Event: '<S973>:39' */
                    /* Transition: '<S973>:113' */
                    /* Transition: '<S973>:115' */
                    /* Transition: '<S973>:114' */
                }
                else
                {
                    /* Transition: '<S973>:110' */
                    /* Call Tmot */
                    VeCANR_y_MKKey1org21_CallStatus = 3U;

                    /* Event: '<S973>:40' */
                    /* Transition: '<S973>:115' */
                    /* Transition: '<S973>:114' */
                }
            }
            else
            {
                /* Transition: '<S973>:75' */
                if (((sint32)rtb_TmpSignalConversionAtVeS_ev) == 133)
                {
                    /* Transition: '<S973>:95' */
                    /* Transition: '<S973>:116' */
                    /* Call Nothing */
                    VeCANR_y_MKKey1org21_CallStatus = 4U;

                    /* Transition: '<S973>:114' */
                }
                else
                {
                    /* Transition: '<S973>:120' */
                    /* Transition: '<S973>:117' */
                    /* Call Poke */
                    VeCANR_y_MKKey1org21_CallStatus = 1U;

                    /* Outputs for Function Call SubSystem: '<S958>/Poke' */
                    /* FunctionCaller: '<S972>/Function Caller' */
                    /* Event: '<S973>:38' */
                    Rte_Call_PokeIMOR_y_MMKey1org21_PokeIMOR_y_MMKey1org21
                        (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ii);

                    /* End of Outputs for SubSystem: '<S958>/Poke' */
                }
            }
        }

        /* End of Chart: '<S971>/Chart' */

        /* Inport: '<Root>/VeSR1B_y_MKKey2org22_SigSts' */
        /* Transition: '<S973>:107' */
        /* Gateway: ArbtrLogic_Protected/Chart */
        /* During: ArbtrLogic_Protected/Chart */
        /* Entry Internal: ArbtrLogic_Protected/Chart */
        /* Transition: '<S976>:99' */
        /*  CRC | MC
           [(SigSts&0x1) | (SigSts&0x2)] */
        (void)Rte_Read_VeSR1B_y_MKKey2org22_SigSts_Value(&tmpRead_21);

        /* Chart: '<S974>/Chart' */
        if ((((uint32)tmpRead_21) & 3U) != 0U)
        {
            /* Transition: '<S976>:100' */
            /* Transition: '<S976>:103' */
            /* Transition: '<S976>:111' */
            /* Call Fsft */
            VeCANR_y_MKKey2org22_CallStatus = 2U;

            /* Event: '<S976>:39' */
            /* Transition: '<S976>:113' */
            /* Transition: '<S976>:115' */
            /* Transition: '<S976>:114' */
        }
        else
        {
            /* Transition: '<S976>:104' */
            /*  MM */
            if ((((uint32)tmpRead_21) & 4U) != 0U)
            {
                /* Transition: '<S976>:96' */
                if (rtb_RelationalOperator_a)
                {
                    /* Transition: '<S976>:88' */
                    /* Transition: '<S976>:111' */
                    /* Call Fsft */
                    VeCANR_y_MKKey2org22_CallStatus = 2U;

                    /* Event: '<S976>:39' */
                    /* Transition: '<S976>:113' */
                    /* Transition: '<S976>:115' */
                    /* Transition: '<S976>:114' */
                }
                else
                {
                    /* Transition: '<S976>:110' */
                    /* Call Tmot */
                    VeCANR_y_MKKey2org22_CallStatus = 3U;

                    /* Event: '<S976>:40' */
                    /* Transition: '<S976>:115' */
                    /* Transition: '<S976>:114' */
                }
            }
            else
            {
                /* Transition: '<S976>:75' */
                if (((sint32)rtb_TmpSignalConversionAtVeS_ai) == 133)
                {
                    /* Transition: '<S976>:95' */
                    /* Transition: '<S976>:116' */
                    /* Call Nothing */
                    VeCANR_y_MKKey2org22_CallStatus = 4U;

                    /* Transition: '<S976>:114' */
                }
                else
                {
                    /* Transition: '<S976>:120' */
                    /* Transition: '<S976>:117' */
                    /* Call Poke */
                    VeCANR_y_MKKey2org22_CallStatus = 1U;

                    /* Outputs for Function Call SubSystem: '<S959>/Poke' */
                    /* FunctionCaller: '<S975>/Function Caller' */
                    /* Event: '<S976>:38' */
                    Rte_Call_PokeIMOR_y_MMKey1org22_PokeIMOR_y_MMKey1org22
                        (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__nt);

                    /* End of Outputs for SubSystem: '<S959>/Poke' */
                }
            }
        }

        /* End of Chart: '<S974>/Chart' */

        /* Inport: '<Root>/VeSR1B_y_MKKey_3_SigSts' */
        /* Transition: '<S976>:107' */
        /* Gateway: ArbtrLogic_Protected/Chart */
        /* During: ArbtrLogic_Protected/Chart */
        /* Entry Internal: ArbtrLogic_Protected/Chart */
        /* Transition: '<S979>:99' */
        /*  CRC | MC
           [(SigSts&0x1) | (SigSts&0x2)] */
        (void)Rte_Read_VeSR1B_y_MKKey_3_SigSts_Value(&tmpRead_22);

        /* Chart: '<S977>/Chart' */
        if ((((uint32)tmpRead_22) & 3U) != 0U)
        {
            /* Transition: '<S979>:100' */
            /* Transition: '<S979>:103' */
            /* Transition: '<S979>:111' */
            /* Call Fsft */
            VeCANR_y_MKKey_3_CallStatus = 2U;

            /* Event: '<S979>:39' */
            /* Transition: '<S979>:113' */
            /* Transition: '<S979>:115' */
            /* Transition: '<S979>:114' */
        }
        else
        {
            /* Transition: '<S979>:104' */
            /*  MM */
            if ((((uint32)tmpRead_22) & 4U) != 0U)
            {
                /* Transition: '<S979>:96' */
                if (rtb_RelationalOperator_a)
                {
                    /* Transition: '<S979>:88' */
                    /* Transition: '<S979>:111' */
                    /* Call Fsft */
                    VeCANR_y_MKKey_3_CallStatus = 2U;

                    /* Event: '<S979>:39' */
                    /* Transition: '<S979>:113' */
                    /* Transition: '<S979>:115' */
                    /* Transition: '<S979>:114' */
                }
                else
                {
                    /* Transition: '<S979>:110' */
                    /* Call Tmot */
                    VeCANR_y_MKKey_3_CallStatus = 3U;

                    /* Event: '<S979>:40' */
                    /* Transition: '<S979>:115' */
                    /* Transition: '<S979>:114' */
                }
            }
            else
            {
                /* Transition: '<S979>:75' */
                if (((sint32)rtb_TmpSignalConversionAtVeS_fw) == 133)
                {
                    /* Transition: '<S979>:95' */
                    /* Transition: '<S979>:116' */
                    /* Call Nothing */
                    VeCANR_y_MKKey_3_CallStatus = 4U;

                    /* Transition: '<S979>:114' */
                }
                else
                {
                    /* Transition: '<S979>:120' */
                    /* Transition: '<S979>:117' */
                    /* Call Poke */
                    VeCANR_y_MKKey_3_CallStatus = 1U;

                    /* Outputs for Function Call SubSystem: '<S960>/Poke' */
                    /* FunctionCaller: '<S978>/Function Caller' */
                    /* Event: '<S979>:38' */
                    Rte_Call_PokeIMOR_y_MMKey_3_PokeIMOR_y_MMKey_3
                        (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__kx);

                    /* End of Outputs for SubSystem: '<S960>/Poke' */
                }
            }
        }

        /* End of Chart: '<S977>/Chart' */

        /* Inport: '<Root>/VeSR1B_y_MKKey_4_SigSts' */
        /* Transition: '<S979>:107' */
        /* Gateway: ArbtrLogic_Protected/Chart */
        /* During: ArbtrLogic_Protected/Chart */
        /* Entry Internal: ArbtrLogic_Protected/Chart */
        /* Transition: '<S982>:99' */
        /*  CRC | MC
           [(SigSts&0x1) | (SigSts&0x2)] */
        (void)Rte_Read_VeSR1B_y_MKKey_4_SigSts_Value(&tmpRead_23);

        /* Chart: '<S980>/Chart' */
        if ((((uint32)tmpRead_23) & 3U) != 0U)
        {
            /* Transition: '<S982>:100' */
            /* Transition: '<S982>:103' */
            /* Transition: '<S982>:111' */
            /* Call Fsft */
            VeCANR_y_MKKey_4_CallStatus = 2U;

            /* Event: '<S982>:39' */
            /* Transition: '<S982>:113' */
            /* Transition: '<S982>:115' */
            /* Transition: '<S982>:114' */
        }
        else
        {
            /* Transition: '<S982>:104' */
            /*  MM */
            if ((((uint32)tmpRead_23) & 4U) != 0U)
            {
                /* Transition: '<S982>:96' */
                if (rtb_RelationalOperator_a)
                {
                    /* Transition: '<S982>:88' */
                    /* Transition: '<S982>:111' */
                    /* Call Fsft */
                    VeCANR_y_MKKey_4_CallStatus = 2U;

                    /* Event: '<S982>:39' */
                    /* Transition: '<S982>:113' */
                    /* Transition: '<S982>:115' */
                    /* Transition: '<S982>:114' */
                }
                else
                {
                    /* Transition: '<S982>:110' */
                    /* Call Tmot */
                    VeCANR_y_MKKey_4_CallStatus = 3U;

                    /* Event: '<S982>:40' */
                    /* Transition: '<S982>:115' */
                    /* Transition: '<S982>:114' */
                }
            }
            else
            {
                /* Transition: '<S982>:75' */
                if (((sint32)rtb_TmpSignalConversionAtVeS_ej) == 133)
                {
                    /* Transition: '<S982>:95' */
                    /* Transition: '<S982>:116' */
                    /* Call Nothing */
                    VeCANR_y_MKKey_4_CallStatus = 4U;

                    /* Transition: '<S982>:114' */
                }
                else
                {
                    /* Transition: '<S982>:120' */
                    /* Transition: '<S982>:117' */
                    /* Call Poke */
                    VeCANR_y_MKKey_4_CallStatus = 1U;

                    /* Outputs for Function Call SubSystem: '<S961>/Poke' */
                    /* FunctionCaller: '<S981>/Function Caller' */
                    /* Event: '<S982>:38' */
                    Rte_Call_PokeIMOR_y_MMKey_4_PokeIMOR_y_MMKey_4
                        (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__op);

                    /* End of Outputs for SubSystem: '<S961>/Poke' */
                }
            }
        }

        /* End of Chart: '<S980>/Chart' */

        /* Inport: '<Root>/VeSR1B_y_MKKey_5_SigSts' */
        /* Transition: '<S982>:107' */
        /* Gateway: ArbtrLogic_Protected/Chart */
        /* During: ArbtrLogic_Protected/Chart */
        /* Entry Internal: ArbtrLogic_Protected/Chart */
        /* Transition: '<S985>:99' */
        /*  CRC | MC
           [(SigSts&0x1) | (SigSts&0x2)] */
        (void)Rte_Read_VeSR1B_y_MKKey_5_SigSts_Value(&tmpRead_24);

        /* Chart: '<S983>/Chart' */
        if ((((uint32)tmpRead_24) & 3U) != 0U)
        {
            /* Transition: '<S985>:100' */
            /* Transition: '<S985>:103' */
            /* Transition: '<S985>:111' */
            /* Call Fsft */
            VeCANR_y_MKKey_5_CallStatus = 2U;

            /* Event: '<S985>:39' */
            /* Transition: '<S985>:113' */
            /* Transition: '<S985>:115' */
            /* Transition: '<S985>:114' */
        }
        else
        {
            /* Transition: '<S985>:104' */
            /*  MM */
            if ((((uint32)tmpRead_24) & 4U) != 0U)
            {
                /* Transition: '<S985>:96' */
                if (rtb_RelationalOperator_a)
                {
                    /* Transition: '<S985>:88' */
                    /* Transition: '<S985>:111' */
                    /* Call Fsft */
                    VeCANR_y_MKKey_5_CallStatus = 2U;

                    /* Event: '<S985>:39' */
                    /* Transition: '<S985>:113' */
                    /* Transition: '<S985>:115' */
                    /* Transition: '<S985>:114' */
                }
                else
                {
                    /* Transition: '<S985>:110' */
                    /* Call Tmot */
                    VeCANR_y_MKKey_5_CallStatus = 3U;

                    /* Event: '<S985>:40' */
                    /* Transition: '<S985>:115' */
                    /* Transition: '<S985>:114' */
                }
            }
            else
            {
                /* Transition: '<S985>:75' */
                if (((sint32)rtb_TmpSignalConversionAtVeSR_h) == 133)
                {
                    /* Transition: '<S985>:95' */
                    /* Transition: '<S985>:116' */
                    /* Call Nothing */
                    VeCANR_y_MKKey_5_CallStatus = 4U;

                    /* Transition: '<S985>:114' */
                }
                else
                {
                    /* Transition: '<S985>:120' */
                    /* Transition: '<S985>:117' */
                    /* Call Poke */
                    VeCANR_y_MKKey_5_CallStatus = 1U;

                    /* Outputs for Function Call SubSystem: '<S962>/Poke' */
                    /* FunctionCaller: '<S984>/Function Caller' */
                    /* Event: '<S985>:38' */
                    Rte_Call_PokeIMOR_y_MMKey_5_PokeIMOR_y_MMKey_5
                        (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__eb);

                    /* End of Outputs for SubSystem: '<S962>/Poke' */
                }
            }
        }

        /* End of Chart: '<S983>/Chart' */

        /* Inport: '<Root>/VeSR1B_y_MKKey_6_SigSts' */
        /* Transition: '<S985>:107' */
        /* Gateway: ArbtrLogic_Protected/Chart */
        /* During: ArbtrLogic_Protected/Chart */
        /* Entry Internal: ArbtrLogic_Protected/Chart */
        /* Transition: '<S988>:99' */
        /*  CRC | MC
           [(SigSts&0x1) | (SigSts&0x2)] */
        (void)Rte_Read_VeSR1B_y_MKKey_6_SigSts_Value(&tmpRead_25);

        /* Chart: '<S986>/Chart' */
        if ((((uint32)tmpRead_25) & 3U) != 0U)
        {
            /* Transition: '<S988>:100' */
            /* Transition: '<S988>:103' */
            /* Transition: '<S988>:111' */
            /* Call Fsft */
            VeCANR_y_MKKey_6_CallStatus = 2U;

            /* Event: '<S988>:39' */
            /* Transition: '<S988>:113' */
            /* Transition: '<S988>:115' */
            /* Transition: '<S988>:114' */
        }
        else
        {
            /* Transition: '<S988>:104' */
            /*  MM */
            if ((((uint32)tmpRead_25) & 4U) != 0U)
            {
                /* Transition: '<S988>:96' */
                if (rtb_RelationalOperator_a)
                {
                    /* Transition: '<S988>:88' */
                    /* Transition: '<S988>:111' */
                    /* Call Fsft */
                    VeCANR_y_MKKey_6_CallStatus = 2U;

                    /* Event: '<S988>:39' */
                    /* Transition: '<S988>:113' */
                    /* Transition: '<S988>:115' */
                    /* Transition: '<S988>:114' */
                }
                else
                {
                    /* Transition: '<S988>:110' */
                    /* Call Tmot */
                    VeCANR_y_MKKey_6_CallStatus = 3U;

                    /* Event: '<S988>:40' */
                    /* Transition: '<S988>:115' */
                    /* Transition: '<S988>:114' */
                }
            }
            else
            {
                /* Transition: '<S988>:75' */
                if (((sint32)rtb_TmpSignalConversionAtVe_of2) == 133)
                {
                    /* Transition: '<S988>:95' */
                    /* Transition: '<S988>:116' */
                    /* Call Nothing */
                    VeCANR_y_MKKey_6_CallStatus = 4U;

                    /* Transition: '<S988>:114' */
                }
                else
                {
                    /* Transition: '<S988>:120' */
                    /* Transition: '<S988>:117' */
                    /* Call Poke */
                    VeCANR_y_MKKey_6_CallStatus = 1U;

                    /* Outputs for Function Call SubSystem: '<S963>/Poke' */
                    /* FunctionCaller: '<S987>/Function Caller' */
                    /* Event: '<S988>:38' */
                    Rte_Call_PokeIMOR_y_MMKey_6_PokeIMOR_y_MMKey_6
                        (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__oc);

                    /* End of Outputs for SubSystem: '<S963>/Poke' */
                }
            }
        }

        /* End of Chart: '<S986>/Chart' */
        /* Transition: '<S988>:107' */
    }

    /* End of Outputs for SubSystem: '<S550>/IMMO_CODE_RESPONSE' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_AWDSysStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_AWDSysStat_ErrSts'
     */
    rtb_TmpSignalConversionAtVeS_h3 = Rte_Read_VeSR1B_y_AWDSysStat_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_AWDSysStat_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1001>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_AWDSysStat_SigSts_Value(&tmpRead_1p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S998>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1p) & 3U) != 0U)
    {
        /* Transition: '<S1001>:100' */
        /* Transition: '<S1001>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1001>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1p) & 4U) != 0U)
        {
            /* Transition: '<S1001>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S1001>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1001>:110' */
                /* Call Tmot */
                VeSR1B_y_AWDSysStat_CallStatus = 3U;

                /* Event: '<S1001>:40' */
                /* Transition: '<S1001>:115' */
                /* Transition: '<S1001>:114' */
            }
        }
        else
        {
            /* Transition: '<S1001>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_h3) == 133)
            {
                /* Transition: '<S1001>:95' */
                /* Transition: '<S1001>:116' */
                /* Call Nothing */
                VeSR1B_y_AWDSysStat_CallStatus = 4U;

                /* Transition: '<S1001>:114' */
            }
            else
            {
                /* Transition: '<S1001>:120' */
                if ((((uint32)tmpRead_1p) & 8U) != 0U)
                {
                    /* Transition: '<S1001>:122' */
                    /* Transition: '<S1001>:125' */
                    FA_out_bu = true;

                    /* Transition: '<S1001>:126' */
                }
                else
                {
                    /* Transition: '<S1001>:124' */
                    FA_out_bu = false;
                }

                /* Transition: '<S1001>:117' */
                /* Call Poke */
                VeSR1B_y_AWDSysStat_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S989>/Poke' */
                /* FunctionCaller: '<S1003>/Function Caller' */
                /* Event: '<S1001>:38' */
                Rte_Call_PokeFWDR_e_TCASE_STAT_PokeFWDR_e_TCASE_STAT
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_j, FA_out_bu);

                /* End of Outputs for SubSystem: '<S989>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1001>:111' */
        /* Call Fsft */
        VeSR1B_y_AWDSysStat_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S989>/Fsft' */
        /* FunctionCaller: '<S1002>/Function Caller' */
        /* Event: '<S1001>:39' */
        Rte_Call_FsftFWDR_e_TCASE_STAT_FsftFWDR_e_TCASE_STAT();

        /* End of Outputs for SubSystem: '<S989>/Fsft' */
        /* Transition: '<S1001>:113' */
        /* Transition: '<S1001>:115' */
        /* Transition: '<S1001>:114' */
    }

    /* End of Chart: '<S998>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_CCMFailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_CCMFailSts_ErrSts'
     */
    /* Transition: '<S1001>:107' */
    rtb_TmpSignalConversionAtVeS_pw = Rte_Read_VeSR1B_b_CCMFailSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_m3h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_CCMFailSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1006>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_CCMFailSts_SigSts_Value(&tmpRead_1q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S1004>/Chart' */
    if ((((uint32)tmpRead_1q) & 3U) != 0U)
    {
        /* Transition: '<S1006>:100' */
        /* Transition: '<S1006>:103' */
        /* Transition: '<S1006>:111' */
        /* Call Fsft */
        VeSR1B_y_CCMFailSts_CallStatus = 2U;

        /* Event: '<S1006>:39' */
        /* Transition: '<S1006>:113' */
        /* Transition: '<S1006>:115' */
        /* Transition: '<S1006>:114' */
    }
    else
    {
        /* Transition: '<S1006>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1q) & 4U) != 0U)
        {
            /* Transition: '<S1006>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S1006>:88' */
                /* Transition: '<S1006>:111' */
                /* Call Fsft */
                VeSR1B_y_CCMFailSts_CallStatus = 2U;

                /* Event: '<S1006>:39' */
                /* Transition: '<S1006>:113' */
                /* Transition: '<S1006>:115' */
                /* Transition: '<S1006>:114' */
            }
            else
            {
                /* Transition: '<S1006>:110' */
                /* Call Tmot */
                VeSR1B_y_CCMFailSts_CallStatus = 3U;

                /* Event: '<S1006>:40' */
                /* Transition: '<S1006>:115' */
                /* Transition: '<S1006>:114' */
            }
        }
        else
        {
            /* Transition: '<S1006>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_pw) == 133)
            {
                /* Transition: '<S1006>:95' */
                /* Transition: '<S1006>:116' */
                /* Call Nothing */
                VeSR1B_y_CCMFailSts_CallStatus = 4U;

                /* Transition: '<S1006>:114' */
            }
            else
            {
                /* Transition: '<S1006>:120' */
                /* Transition: '<S1006>:117' */
                /* Call Poke */
                VeSR1B_y_CCMFailSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S990>/Poke' */
                /* FunctionCaller: '<S1007>/Function Caller' */
                /* Event: '<S1006>:38' */
                Rte_Call_PokeFWDR_b_CCMFailSts_PokeFWDR_b_CCMFailSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_m3h);

                /* End of Outputs for SubSystem: '<S990>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1004>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_DrvLnMinTrqMd_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DrvLnMinTrqMd_ErrSts'
     */
    /* Transition: '<S1006>:107' */
    rtb_TmpSignalConversionAtVe_gql = Rte_Read_VeSR1B_b_DrvLnMinTrqMd_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__kd);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_DrvLnMinTrqMd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1011>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DrvLnMinTrqMd_SigSts_Value(&tmpRead_1r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S1008>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1r) & 3U) != 0U)
    {
        /* Transition: '<S1011>:100' */
        /* Transition: '<S1011>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1011>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1r) & 4U) != 0U)
        {
            /* Transition: '<S1011>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S1011>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1011>:110' */
                /* Call Tmot */
                VeSR1B_y_DrvLnMinTrqMd_CallStatus = 3U;

                /* Event: '<S1011>:40' */
                /* Transition: '<S1011>:115' */
                /* Transition: '<S1011>:114' */
            }
        }
        else
        {
            /* Transition: '<S1011>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_gql) == 133)
            {
                /* Transition: '<S1011>:95' */
                /* Transition: '<S1011>:116' */
                /* Call Nothing */
                VeSR1B_y_DrvLnMinTrqMd_CallStatus = 4U;

                /* Transition: '<S1011>:114' */
            }
            else
            {
                /* Transition: '<S1011>:120' */
                /* Transition: '<S1011>:117' */
                /* Call Poke */
                VeSR1B_y_DrvLnMinTrqMd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S991>/Poke' */
                /* FunctionCaller: '<S1013>/Function Caller' */
                /* Event: '<S1011>:38' */
                Rte_Call_PokeTINR_b_DrvLnMinTrqMd_PokeTINR_b_DrvLnMinTrqMd
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__kd);

                /* End of Outputs for SubSystem: '<S991>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1011>:111' */
        /* Call Fsft */
        VeSR1B_y_DrvLnMinTrqMd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S991>/Fsft' */
        /* FunctionCaller: '<S1012>/Function Caller' */
        /* Event: '<S1011>:39' */
        Rte_Call_FsftTINR_b_DrvLnMinTrqMd_FsftTINR_b_DrvLnMinTrqMd();

        /* End of Outputs for SubSystem: '<S991>/Fsft' */
        /* Transition: '<S1011>:113' */
        /* Transition: '<S1011>:115' */
        /* Transition: '<S1011>:114' */
    }

    /* End of Chart: '<S1008>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_DrvLnTrqRq_Axle_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DrvLnTrqRq_Axle_ErrSts'
     */
    /* Transition: '<S1011>:107' */
    rtb_TmpSignalConversionAtVe_nbw = Rte_Read_VeSR1B_M_DrvLnTrqRq_Axle_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__gf);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_DrvLnTrqRq_Axle_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1017>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DrvLnTrqRq_Axle_SigSts_Value(&tmpRead_1s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S1014>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1s) & 3U) != 0U)
    {
        /* Transition: '<S1017>:100' */
        /* Transition: '<S1017>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1017>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1s) & 4U) != 0U)
        {
            /* Transition: '<S1017>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S1017>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1017>:110' */
                /* Call Tmot */
                VeSR1B_y_DrvLnTrqRq_Axle_CallStatus = 3U;

                /* Event: '<S1017>:40' */
                /* Transition: '<S1017>:115' */
                /* Transition: '<S1017>:114' */
            }
        }
        else
        {
            /* Transition: '<S1017>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_nbw) == 133)
            {
                /* Transition: '<S1017>:95' */
                /* Transition: '<S1017>:116' */
                /* Call Nothing */
                VeSR1B_y_DrvLnTrqRq_Axle_CallStatus = 4U;

                /* Transition: '<S1017>:114' */
            }
            else
            {
                /* Transition: '<S1017>:120' */
                if ((((uint32)tmpRead_1s) & 8U) != 0U)
                {
                    /* Transition: '<S1017>:122' */
                    /* Transition: '<S1017>:125' */
                    FA_out_bu = true;

                    /* Transition: '<S1017>:126' */
                }
                else
                {
                    /* Transition: '<S1017>:124' */
                    FA_out_bu = false;
                }

                /* Transition: '<S1017>:117' */
                /* Call Poke */
                VeSR1B_y_DrvLnTrqRq_Axle_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S992>/Poke' */
                /* FunctionCaller: '<S1019>/Function Caller' */
                /* Event: '<S1017>:38' */
                Rte_Call_PokeTINR_M_DrvLnTrqRq_Axle_PokeTINR_M_DrvLnTrqRq_Axle
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__gf, FA_out_bu);

                /* End of Outputs for SubSystem: '<S992>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1017>:111' */
        /* Call Fsft */
        VeSR1B_y_DrvLnTrqRq_Axle_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S992>/Fsft' */
        /* FunctionCaller: '<S1018>/Function Caller' */
        /* Event: '<S1017>:39' */
        Rte_Call_FsftTINR_b_DrvLnTrqRq_Axle_FsftTINR_b_DrvLnTrqRq_Axle();

        /* End of Outputs for SubSystem: '<S992>/Fsft' */
        /* Transition: '<S1017>:113' */
        /* Transition: '<S1017>:115' */
        /* Transition: '<S1017>:114' */
    }

    /* End of Chart: '<S1014>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_Ft_RrCouplTrq_Act_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_Ft_RrCouplTrq_Act_FD3_ErrSts'
     */
    /* Transition: '<S1017>:107' */
    rtb_TmpSignalConversionAtVeS_g2 =
        Rte_Read_VeSR1B_M_Ft_RrCouplTrq_Act_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_F);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_Ft_RrCouplTrq_Act_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1023>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Ft_RrCouplTrq_Act_FD3_SigSts_Value(&tmpRead_1t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S1020>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1t) & 3U) != 0U)
    {
        /* Transition: '<S1023>:100' */
        /* Transition: '<S1023>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1023>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1t) & 4U) != 0U)
        {
            /* Transition: '<S1023>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S1023>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1023>:110' */
                /* Call Tmot */
                VeSR1B_y_Ft_RrCouplTrq_Act_FD3_CallStatus = 3U;

                /* Event: '<S1023>:40' */
                /* Transition: '<S1023>:115' */
                /* Transition: '<S1023>:114' */
            }
        }
        else
        {
            /* Transition: '<S1023>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_g2) == 133)
            {
                /* Transition: '<S1023>:95' */
                /* Transition: '<S1023>:116' */
                /* Call Nothing */
                VeSR1B_y_Ft_RrCouplTrq_Act_FD3_CallStatus = 4U;

                /* Transition: '<S1023>:114' */
            }
            else
            {
                /* Transition: '<S1023>:120' */
                /* Transition: '<S1023>:117' */
                /* Call Poke */
                VeSR1B_y_Ft_RrCouplTrq_Act_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S993>/Poke' */
                /* FunctionCaller: '<S1025>/Function Caller' incorporates:
                 *  Constant: '<S1025>/Constant'
                 */
                /* Event: '<S1023>:38' */
                Rte_Call_PokeFWDR_M_FricTrqClutch_PokeFWDR_M_FricTrqClutch
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_M_F, false);

                /* End of Outputs for SubSystem: '<S993>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1023>:111' */
        /* Call Fsft */
        VeSR1B_y_Ft_RrCouplTrq_Act_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S993>/Fsft' */
        /* FunctionCaller: '<S1024>/Function Caller' */
        /* Event: '<S1023>:39' */
        Rte_Call_FsftFWDR_b_FricTrqClutch_FsftFWDR_b_FricTrqClutch();

        /* End of Outputs for SubSystem: '<S993>/Fsft' */
        /* Transition: '<S1023>:113' */
        /* Transition: '<S1023>:115' */
        /* Transition: '<S1023>:114' */
    }

    /* End of Chart: '<S1020>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_PTU_State_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_PTU_State_ErrSts'
     */
    /* Transition: '<S1023>:107' */
    rtb_TmpSignalConversionAtVe_o3i = Rte_Read_VeSR1B_y_PTU_State_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_PTU_State_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1029>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_PTU_State_SigSts_Value(&tmpRead_1u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S1026>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1u) & 3U) != 0U)
    {
        /* Transition: '<S1029>:100' */
        /* Transition: '<S1029>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1029>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1u) & 4U) != 0U)
        {
            /* Transition: '<S1029>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S1029>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1029>:110' */
                /* Call Tmot */
                VeSR1B_y_PTU_State_CallStatus = 3U;

                /* Event: '<S1029>:40' */
                /* Transition: '<S1029>:115' */
                /* Transition: '<S1029>:114' */
            }
        }
        else
        {
            /* Transition: '<S1029>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_o3i) == 133)
            {
                /* Transition: '<S1029>:95' */
                /* Transition: '<S1029>:116' */
                /* Call Nothing */
                VeSR1B_y_PTU_State_CallStatus = 4U;

                /* Transition: '<S1029>:114' */
            }
            else
            {
                /* Transition: '<S1029>:120' */
                if ((((uint32)tmpRead_1u) & 8U) != 0U)
                {
                    /* Transition: '<S1029>:122' */
                    /* Transition: '<S1029>:125' */
                    FA_out_bu = true;

                    /* Transition: '<S1029>:126' */
                }
                else
                {
                    /* Transition: '<S1029>:124' */
                    FA_out_bu = false;
                }

                /* Transition: '<S1029>:117' */
                /* Call Poke */
                VeSR1B_y_PTU_State_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S994>/Poke' */
                /* FunctionCaller: '<S1031>/Function Caller' */
                /* Event: '<S1029>:38' */
                Rte_Call_PokeFWDR_e_PTU_State_PokeFWDR_e_PTU_State
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_m, FA_out_bu);

                /* End of Outputs for SubSystem: '<S994>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1029>:111' */
        /* Call Fsft */
        VeSR1B_y_PTU_State_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S994>/Fsft' */
        /* FunctionCaller: '<S1030>/Function Caller' */
        /* Event: '<S1029>:39' */
        Rte_Call_FsftFWDR_e_PTU_State_FsftFWDR_e_PTU_State();

        /* End of Outputs for SubSystem: '<S994>/Fsft' */
        /* Transition: '<S1029>:113' */
        /* Transition: '<S1029>:115' */
        /* Transition: '<S1029>:114' */
    }

    /* End of Chart: '<S1026>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_RDU_State_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_RDU_State_ErrSts'
     */
    /* Transition: '<S1029>:107' */
    rtb_TmpSignalConversionAtVe_lez = Rte_Read_VeSR1B_y_RDU_State_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__oy);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_RDU_State_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1035>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_RDU_State_SigSts_Value(&tmpRead_1v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S1032>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1v) & 3U) != 0U)
    {
        /* Transition: '<S1035>:100' */
        /* Transition: '<S1035>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1035>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1v) & 4U) != 0U)
        {
            /* Transition: '<S1035>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S1035>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1035>:110' */
                /* Call Tmot */
                VeSR1B_y_RDU_State_CallStatus = 3U;

                /* Event: '<S1035>:40' */
                /* Transition: '<S1035>:115' */
                /* Transition: '<S1035>:114' */
            }
        }
        else
        {
            /* Transition: '<S1035>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_lez) == 133)
            {
                /* Transition: '<S1035>:95' */
                /* Transition: '<S1035>:116' */
                /* Call Nothing */
                VeSR1B_y_RDU_State_CallStatus = 4U;

                /* Transition: '<S1035>:114' */
            }
            else
            {
                /* Transition: '<S1035>:120' */
                if ((((uint32)tmpRead_1v) & 8U) != 0U)
                {
                    /* Transition: '<S1035>:122' */
                    /* Transition: '<S1035>:125' */
                    FA_out_bu = true;

                    /* Transition: '<S1035>:126' */
                }
                else
                {
                    /* Transition: '<S1035>:124' */
                    FA_out_bu = false;
                }

                /* Transition: '<S1035>:117' */
                /* Call Poke */
                VeSR1B_y_RDU_State_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S995>/Poke' */
                /* FunctionCaller: '<S1037>/Function Caller' */
                /* Event: '<S1035>:38' */
                Rte_Call_PokeFWDR_e_RDU_State_PokeFWDR_e_RDU_State
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__oy, FA_out_bu);

                /* End of Outputs for SubSystem: '<S995>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1035>:111' */
        /* Call Fsft */
        VeSR1B_y_RDU_State_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S995>/Fsft' */
        /* FunctionCaller: '<S1036>/Function Caller' */
        /* Event: '<S1035>:39' */
        Rte_Call_FsftFWDR_e_RDU_State_FsftFWDR_e_RDU_State();

        /* End of Outputs for SubSystem: '<S995>/Fsft' */
        /* Transition: '<S1035>:113' */
        /* Transition: '<S1035>:115' */
        /* Transition: '<S1035>:114' */
    }

    /* End of Chart: '<S1032>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_SpeedSyncRq_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_SpeedSyncRq_ErrSts'
     */
    /* Transition: '<S1035>:107' */
    rtb_TmpSignalConversionAtVeS_fg = Rte_Read_VeSR1B_y_SpeedSyncRq_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__m1);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_SpeedSyncRq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1041>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_SpeedSyncRq_SigSts_Value(&tmpRead_1w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S1038>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1w) & 3U) != 0U)
    {
        /* Transition: '<S1041>:100' */
        /* Transition: '<S1041>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1041>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1w) & 4U) != 0U)
        {
            /* Transition: '<S1041>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S1041>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1041>:110' */
                /* Call Tmot */
                VeSR1B_y_SpeedSyncRq_CallStatus = 3U;

                /* Event: '<S1041>:40' */
                /* Transition: '<S1041>:115' */
                /* Transition: '<S1041>:114' */
            }
        }
        else
        {
            /* Transition: '<S1041>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fg) == 133)
            {
                /* Transition: '<S1041>:95' */
                /* Transition: '<S1041>:116' */
                /* Call Nothing */
                VeSR1B_y_SpeedSyncRq_CallStatus = 4U;

                /* Transition: '<S1041>:114' */
            }
            else
            {
                /* Transition: '<S1041>:120' */
                if ((((uint32)tmpRead_1w) & 8U) != 0U)
                {
                    /* Transition: '<S1041>:122' */
                    /* Transition: '<S1041>:125' */
                    FA_out_bu = true;

                    /* Transition: '<S1041>:126' */
                }
                else
                {
                    /* Transition: '<S1041>:124' */
                    FA_out_bu = false;
                }

                /* Transition: '<S1041>:117' */
                /* Call Poke */
                VeSR1B_y_SpeedSyncRq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S996>/Poke' */
                /* FunctionCaller: '<S1043>/Function Caller' */
                /* Event: '<S1041>:38' */
                Rte_Call_PokeFWDR_e_SpeedSyncReq_PokeFWDR_e_SpeedSyncReq
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__m1, FA_out_bu);

                /* End of Outputs for SubSystem: '<S996>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1041>:111' */
        /* Call Fsft */
        VeSR1B_y_SpeedSyncRq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S996>/Fsft' */
        /* FunctionCaller: '<S1042>/Function Caller' */
        /* Event: '<S1041>:39' */
        Rte_Call_FsftFWDR_e_SpeedSyncReq_FsftFWDR_e_SpeedSyncReq();

        /* End of Outputs for SubSystem: '<S996>/Fsft' */
        /* Transition: '<S1041>:113' */
        /* Transition: '<S1041>:115' */
        /* Transition: '<S1041>:114' */
    }

    /* End of Chart: '<S1038>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_TCASE_TargetRangeState_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_TCASE_TargetRangeState_ErrSts'
     */
    /* Transition: '<S1041>:107' */
    rtb_TmpSignalConversionAtVe_day =
        Rte_Read_VeSR1B_y_TCASE_TargetRangeState_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__dw);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_TCASE_TargetRangeState_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1047>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_TCASE_TargetRangeState_SigSts_Value(&tmpRead_1x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S1044>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1x) & 3U) != 0U)
    {
        /* Transition: '<S1047>:100' */
        /* Transition: '<S1047>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1047>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1x) & 4U) != 0U)
        {
            /* Transition: '<S1047>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S1047>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1047>:110' */
                /* Call Tmot */
                VeSR1B_y_TCASE_TargetRangeState_CallStatus = 3U;

                /* Event: '<S1047>:40' */
                /* Transition: '<S1047>:115' */
                /* Transition: '<S1047>:114' */
            }
        }
        else
        {
            /* Transition: '<S1047>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_day) == 133)
            {
                /* Transition: '<S1047>:95' */
                /* Transition: '<S1047>:116' */
                /* Call Nothing */
                VeSR1B_y_TCASE_TargetRangeState_CallStatus = 4U;

                /* Transition: '<S1047>:114' */
            }
            else
            {
                /* Transition: '<S1047>:120' */
                if ((((uint32)tmpRead_1x) & 8U) != 0U)
                {
                    /* Transition: '<S1047>:122' */
                    /* Transition: '<S1047>:125' */
                    FA_out_bu = true;

                    /* Transition: '<S1047>:126' */
                }
                else
                {
                    /* Transition: '<S1047>:124' */
                    FA_out_bu = false;
                }

                /* Transition: '<S1047>:117' */
                /* Call Poke */
                VeSR1B_y_TCASE_TargetRangeState_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S997>/Poke' */
                /* FunctionCaller: '<S1049>/Function Caller' */
                /* Event: '<S1047>:38' */
                Rte_Call_PokeFWDR_e_TCASE_TargetRangeState_PokeFWDR_e_TCASE_TargetRangeState
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__dw, FA_out_bu);

                /* End of Outputs for SubSystem: '<S997>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1047>:111' */
        /* Call Fsft */
        VeSR1B_y_TCASE_TargetRangeState_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S997>/Fsft' */
        /* FunctionCaller: '<S1048>/Function Caller' */
        /* Event: '<S1047>:39' */
        Rte_Call_FsftFWDR_e_TCASE_TargetRangeState_FsftFWDR_e_TCASE_TargetRangeState
            ();

        /* End of Outputs for SubSystem: '<S997>/Fsft' */
        /* Transition: '<S1047>:113' */
        /* Transition: '<S1047>:115' */
        /* Transition: '<S1047>:114' */
    }

    /* End of Chart: '<S1044>/Chart' */

    /* SignalConversion generated from: '<S3>/VeSR1B_e_TCASERANGESTATUS_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_TCASERANGESTATUS_ErrSts'
     */
    /* Transition: '<S1047>:107' */
    rtb_TmpSignalConversionAtVeS_fa = Rte_Read_VeSR1B_y_TCASERANGESTATUS_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__dq);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_TCASERANGESTATUS_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1054>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_TCASERANGESTATUS_SigSts_Value(&tmpRead_1y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt1'
     */
    /* Chart: '<S1051>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1y) & 3U) != 0U)
    {
        /* Transition: '<S1054>:100' */
        /* Transition: '<S1054>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1054>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1y) & 4U) != 0U)
        {
            /* Transition: '<S1054>:96' */
            if (rtb_RelationalOperator_a)
            {
                /* Transition: '<S1054>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1054>:110' */
                /* Call Tmot */
                VeSR1B_y_TCASERANGESTATUS_CallStatus = 3U;

                /* Event: '<S1054>:40' */
                /* Transition: '<S1054>:115' */
                /* Transition: '<S1054>:114' */
            }
        }
        else
        {
            /* Transition: '<S1054>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fa) == 133)
            {
                /* Transition: '<S1054>:95' */
                /* Transition: '<S1054>:116' */
                /* Call Nothing */
                VeSR1B_y_TCASERANGESTATUS_CallStatus = 4U;

                /* Transition: '<S1054>:114' */
            }
            else
            {
                /* Transition: '<S1054>:120' */
                if ((((uint32)tmpRead_1y) & 8U) != 0U)
                {
                    /* Transition: '<S1054>:122' */
                    /* Transition: '<S1054>:125' */
                    rtb_RelationalOperator_a = true;

                    /* Transition: '<S1054>:126' */
                }
                else
                {
                    /* Transition: '<S1054>:124' */
                    rtb_RelationalOperator_a = false;
                }

                /* Transition: '<S1054>:117' */
                /* Call Poke */
                VeSR1B_y_TCASERANGESTATUS_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1050>/Poke' */
                /* FunctionCaller: '<S1056>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1056>/Data Type Conversion'
                 */
                /* Event: '<S1054>:38' */
                Rte_Call_PokeFWDR_e_TcaseRange_Stat_PokeFWDR_e_TcaseRange_Stat
                    ((sint16)CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__dq,
                     rtb_RelationalOperator_a);

                /* End of Outputs for SubSystem: '<S1050>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1054>:111' */
        /* Call Fsft */
        VeSR1B_y_TCASERANGESTATUS_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1050>/Fsft' */
        /* FunctionCaller: '<S1055>/Function Caller' */
        /* Event: '<S1054>:39' */
        Rte_Call_FsftFWDR_e_TcaseRange_Stat_FsftFWDR_e_TcaseRange_Stat();

        /* End of Outputs for SubSystem: '<S1050>/Fsft' */
        /* Transition: '<S1054>:113' */
        /* Transition: '<S1054>:115' */
        /* Transition: '<S1054>:114' */
    }

    /* End of Chart: '<S1051>/Chart' */
    /* Transition: '<S1054>:107' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model step function for TID2 */
FUNC(void, CR1B_BLUEN_CODE) CR1B_BLUEN_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
    uint8 rtb_TmpSignalConversionAtVeSR1B;
    uint8 rtb_TmpSignalConversionAtVeSR_c;
    uint8 rtb_TmpSignalConversionAtVeSR_f;
    uint8 rtb_TmpSignalConversionAtVeSR_n;
    uint8 rtb_TmpSignalConversionAtVeSR_e;
    uint8 rtb_TmpSignalConversionAtVeS_nv;
    uint8 rtb_TmpSignalConversionAtVeSR_l;
    uint8 rtb_TmpSignalConversionAtVeS_e3;
    uint8 rtb_TmpSignalConversionAtVeSR_a;
    uint8 rtb_TmpSignalConversionAtVeSR_p;
    uint8 rtb_TmpSignalConversionAtVeS_ck;
    uint8 rtb_TmpSignalConversionAtVeS_a3;
    uint8 rtb_TmpSignalConversionAtVeSR_g;
    uint8 rtb_TmpSignalConversionAtVeS_p5;
    uint8 rtb_TmpSignalConversionAtVeSR_i;
    uint8 rtb_TmpSignalConversionAtVeS_cy;
    uint8 rtb_TmpSignalConversionAtVeSR_d;
    uint8 rtb_TmpSignalConversionAtVeS_i4;
    uint8 rtb_TmpSignalConversionAtVeSR_j;
    uint8 rtb_TmpSignalConversionAtVeS_p2;
    uint8 rtb_TmpSignalConversionAtVeSR_o;
    uint8 rtb_TmpSignalConversionAtVeS_iw;
    uint8 rtb_TmpSignalConversionAtVeS_of;
    uint8 rtb_TmpSignalConversionAtVeSR_m;
    uint8 rtb_TmpSignalConversionAtVeS_lf;
    uint8 rtb_TmpSignalConversionAtVeCRDB;
    uint8 rtb_TmpSignalConversionAtVeCR_o;
    uint8 rtb_TmpSignalConversionAtVeS_d0;
    uint8 rtb_TmpSignalConversionAtVeCR_c;
    uint8 rtb_TmpSignalConversionAtVeCR_g;
    uint8 rtb_TmpSignalConversionAtVeCR_d;
    uint8 rtb_TmpSignalConversionAtVeCR_p;
    uint8 rtb_TmpSignalConversionAtVeCR_h;
    uint8 rtb_TmpSignalConversionAtVeCR_k;
    uint8 rtb_TmpSignalConversionAtVeC_k3;
    uint8 rtb_TmpSignalConversionAtVeCR_n;
    uint8 rtb_TmpSignalConversionAtVeC_hs;
    uint8 rtb_TmpSignalConversionAtVeS_oq;
    uint8 rtb_TmpSignalConversionAtVeS_gq;
    uint8 rtb_TmpSignalConversionAtVeSR_b;
    uint8 rtb_TmpSignalConversionAtVeS_al;
    uint8 rtb_TmpSignalConversionAtVeS_io;
    uint8 rtb_TmpSignalConversionAtVeS_gx;
    uint8 rtb_TmpSignalConversionAtVeS_an;
    uint8 rtb_TmpSignalConversionAtVeS_mh;
    uint8 rtb_TmpSignalConversionAtVeS_ew;
    uint8 rtb_TmpSignalConversionAtVeS_dd;
    uint8 rtb_TmpSignalConversionAtVeS_le;
    uint8 rtb_TmpSignalConversionAtVeS_pr;
    uint8 rtb_TmpSignalConversionAtVeCANR;
    uint8 rtb_TmpSignalConversionAtVeS_o3;
    uint8 rtb_TmpSignalConversionAtVeS_ch;
    uint8 rtb_TmpSignalConversionAtVe_les;
    uint8 rtb_TmpSignalConversionAtVeS_in;
    uint8 rtb_TmpSignalConversionAtVeS_m0;
    uint8 rtb_TmpSignalConversionAtVeS_dl;
    uint8 rtb_TmpSignalConversionAtVeS_m1;
    uint8 rtb_TmpSignalConversionAtVeS_ol;
    uint8 rtb_TmpSignalConversionAtVeS_fp;
    uint8 rtb_TmpSignalConversionAtVeSR_k;
    uint8 rtb_TmpSignalConversionAtVeS_on;
    uint8 rtb_TmpSignalConversionAtVeCA_m;
    uint8 rtb_TmpSignalConversionAtVeCA_p;
    uint8 rtb_TmpSignalConversionAtVeC_pk;
    uint8 rtb_TmpSignalConversionAtVeC_mm;
    uint8 rtb_TmpSignalConversionAtVeC_pe;
    uint8 rtb_TmpSignalConversionAtVeCA_c;
    uint8 rtb_TmpSignalConversionAtVeCA_a;
    uint8 rtb_TmpSignalConversionAtVeCA_g;
    uint8 rtb_TmpSignalConversionAtVeC_g5;
    uint8 rtb_TmpSignalConversionAtVeC_m3;
    uint8 rtb_TmpSignalConversionAtVeCA_n;
    uint8 rtb_TmpSignalConversionAtVeCA_o;
    uint8 rtb_TmpSignalConversionAtVeCA_l;
    uint8 rtb_TmpSignalConversionAtVeC_gh;
    uint8 rtb_TmpSignalConversionAtVeC_m4;
    uint8 rtb_TmpSignalConversionAtVeC_g4;
    uint8 rtb_TmpSignalConversionAtVeCA_d;
    uint8 rtb_TmpSignalConversionAtVeCA_k;
    TePWMD_e_CanLocStatus rtb_Switch;
    uint8 tmpRead;
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
    boolean FA_out_cz;
    boolean FA_out_d;
    boolean FA_out_d1;
    boolean FA_out_ec;
    boolean FA_out_fr;
    boolean FA_out_j;
    boolean FA_out_k0;
    boolean FA_out_k2;
    boolean FA_out_kb;
    boolean FA_out_m;
    boolean guard1 = false;
    boolean rtb_RelationalOperator;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_20;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_8;
    boolean tmpRead_9;
    boolean tmpRead_a;
    boolean tmpRead_b;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* SignalConversion generated from: '<S2>/VeSR1B_e_MRM_STATUS_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_MRM_STATUS_FD3_ErrSts'
     */
    rtb_TmpSignalConversionAtVeSR1B = Rte_Read_VeSR1B_y_MRM_STATUS_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_M);

    /* Switch: '<S30>/Switch' incorporates:
     *  Constant: '<S25>/Calib'
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    if (KeCR1B_b_CanLocStatusBypEnbl)
    {
        /* Switch: '<S30>/Switch' incorporates:
         *  Constant: '<S26>/Calib'
         */
        rtb_Switch = KeCR1B_e_CanLocStatus;
    }
    else
    {
        (void)Rte_Read_VeCANR_e_CanLocEnblStatus_VeCANR_e_CanLocEnblStatus
            (&tmpRead);

        /* Switch: '<S30>/Switch' incorporates:
         *  DataTypeConversion: '<S2>/Data Type Conversion'
         *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
         */
        rtb_Switch = (TePWMD_e_CanLocStatus)tmpRead;
    }

    /* End of Switch: '<S30>/Switch' */

    /* RelationalOperator: '<S2>/Relational Operator' incorporates:
     *  Constant: '<S17>/Constant'
     *  Switch: '<S30>/Switch'
     */
    rtb_RelationalOperator = (((uint32)rtb_Switch) == CePWMD_e_LOC_Enable);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_MRM_STATUS_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S36>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MRM_STATUS_FD3_SigSts_Value(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S33>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_c) & 3U) != 0U)
    {
        /* Transition: '<S36>:100' */
        /* Transition: '<S36>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S36>:104' */
        /*  MM */
        if ((((uint32)tmpRead_c) & 4U) != 0U)
        {
            /* Transition: '<S36>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S36>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S36>:110' */
                /* Call Tmot */
                VeSR1B_y_MRM_STATUS_FD3_CallStatus = 3U;

                /* Event: '<S36>:40' */
                /* Transition: '<S36>:115' */
                /* Transition: '<S36>:114' */
            }
        }
        else
        {
            /* Transition: '<S36>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR1B) == 133)
            {
                /* Transition: '<S36>:95' */
                /* Transition: '<S36>:116' */
                /* Call Nothing */
                VeSR1B_y_MRM_STATUS_FD3_CallStatus = 4U;

                /* Transition: '<S36>:114' */
            }
            else
            {
                /* Transition: '<S36>:120' */
                if ((((uint32)tmpRead_c) & 8U) != 0U)
                {
                    /* Transition: '<S36>:122' */
                    /* Transition: '<S36>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S36>:126' */
                }
                else
                {
                    /* Transition: '<S36>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S36>:117' */
                /* Call Poke */
                VeSR1B_y_MRM_STATUS_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S32>/Poke' */
                /* FunctionCaller: '<S38>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S38>/Data Type Conversion'
                 */
                /* Event: '<S36>:38' */
                Rte_Call_PokePLTR_e_MRM_Status_PokePLTR_e_MRM_Status((uint16)
                    CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_M, FA_out_fr);

                /* End of Outputs for SubSystem: '<S32>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S36>:111' */
        /* Call Fsft */
        VeSR1B_y_MRM_STATUS_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S32>/Fsft' */
        /* FunctionCaller: '<S37>/Function Caller' */
        /* Event: '<S36>:39' */
        Rte_Call_FsftPLTR_e_MRM_Status_FsftPLTR_e_MRM_Status();

        /* End of Outputs for SubSystem: '<S32>/Fsft' */
        /* Transition: '<S36>:113' */
        /* Transition: '<S36>:115' */
        /* Transition: '<S36>:114' */
    }

    /* End of Chart: '<S33>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_TSRSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_TSRSts_ErrSts'
     */
    /* Transition: '<S36>:107' */
    rtb_TmpSignalConversionAtVeSR_c = Rte_Read_VeSR1B_y_TSRSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_T);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_TSRSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S43>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_TSRSts_SigSts_Value(&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S40>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_d) & 3U) != 0U)
    {
        /* Transition: '<S43>:100' */
        /* Transition: '<S43>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S43>:104' */
        /*  MM */
        if ((((uint32)tmpRead_d) & 4U) != 0U)
        {
            /* Transition: '<S43>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S43>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S43>:110' */
                /* Call Tmot */
                VeSR1B_y_TSRSts_CallStatus = 3U;

                /* Event: '<S43>:40' */
                /* Transition: '<S43>:115' */
                /* Transition: '<S43>:114' */
            }
        }
        else
        {
            /* Transition: '<S43>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_c) == 133)
            {
                /* Transition: '<S43>:95' */
                /* Transition: '<S43>:116' */
                /* Call Nothing */
                VeSR1B_y_TSRSts_CallStatus = 4U;

                /* Transition: '<S43>:114' */
            }
            else
            {
                /* Transition: '<S43>:120' */
                /* Transition: '<S43>:117' */
                /* Call Poke */
                VeSR1B_y_TSRSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S39>/Poke' */
                /* FunctionCaller: '<S45>/Function Caller' */
                /* Event: '<S43>:38' */
                Rte_Call_PokeASLR_e_TSRSts_PokeASLR_e_TSRSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_T);

                /* End of Outputs for SubSystem: '<S39>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S43>:111' */
        /* Call Fsft */
        VeSR1B_y_TSRSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S39>/Fsft' */
        /* FunctionCaller: '<S44>/Function Caller' */
        /* Event: '<S43>:39' */
        Rte_Call_FsftASLR_b_TSRSts_FsftASLR_b_TSRSts();

        /* End of Outputs for SubSystem: '<S39>/Fsft' */
        /* Transition: '<S43>:113' */
        /* Transition: '<S43>:115' */
        /* Transition: '<S43>:114' */
    }

    /* End of Chart: '<S40>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_MRM_STATUS_C2_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_MRM_STATUS_C2_ErrSts'
     */
    /* Transition: '<S43>:107' */
    rtb_TmpSignalConversionAtVeSR_f = Rte_Read_VeSR1B_y_MRM_STATUS_C2_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_MRM_STATUS_C2_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S50>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MRM_STATUS_C2_SigSts_Value(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S47>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_e) & 3U) != 0U)
    {
        /* Transition: '<S50>:100' */
        /* Transition: '<S50>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S50>:104' */
        /*  MM */
        if ((((uint32)tmpRead_e) & 4U) != 0U)
        {
            /* Transition: '<S50>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S50>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S50>:110' */
                /* Call Tmot */
                VeSR1B_y_MRM_STATUS_C2_CallStatus = 3U;

                /* Event: '<S50>:40' */
                /* Transition: '<S50>:115' */
                /* Transition: '<S50>:114' */
            }
        }
        else
        {
            /* Transition: '<S50>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_f) == 133)
            {
                /* Transition: '<S50>:95' */
                /* Transition: '<S50>:116' */
                /* Call Nothing */
                VeSR1B_y_MRM_STATUS_C2_CallStatus = 4U;

                /* Transition: '<S50>:114' */
            }
            else
            {
                /* Transition: '<S50>:120' */
                if ((((uint32)tmpRead_e) & 8U) != 0U)
                {
                    /* Transition: '<S50>:122' */
                    /* Transition: '<S50>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S50>:126' */
                }
                else
                {
                    /* Transition: '<S50>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S50>:117' */
                /* Call Poke */
                VeSR1B_y_MRM_STATUS_C2_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S46>/Poke' */
                /* FunctionCaller: '<S52>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S52>/Data Type Conversion'
                 */
                /* Event: '<S50>:38' */
                Rte_Call_PokePLTR_e_MRM_Status_C2_PokePLTR_e_MRM_Status_C2
                    ((uint16)CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_i,
                     FA_out_fr);

                /* End of Outputs for SubSystem: '<S46>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S50>:111' */
        /* Call Fsft */
        VeSR1B_y_MRM_STATUS_C2_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S46>/Fsft' */
        /* FunctionCaller: '<S51>/Function Caller' */
        /* Event: '<S50>:39' */
        Rte_Call_FsftPLTR_e_MRM_Status_C2_FsftPLTR_e_MRM_Status_C2();

        /* End of Outputs for SubSystem: '<S46>/Fsft' */
        /* Transition: '<S50>:113' */
        /* Transition: '<S50>:115' */
        /* Transition: '<S50>:114' */
    }

    /* End of Chart: '<S47>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_APCM_Stat_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_APCM_Stat_FD3_ErrSts'
     */
    /* Transition: '<S50>:107' */
    rtb_TmpSignalConversionAtVeSR_n = Rte_Read_VeSR1B_y_APCM_Stat_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_APCM_Stat_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S59>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_APCM_Stat_FD3_SigSts_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S56>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_f) & 3U) != 0U)
    {
        /* Transition: '<S59>:100' */
        /* Transition: '<S59>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S59>:104' */
        /*  MM */
        if ((((uint32)tmpRead_f) & 4U) != 0U)
        {
            /* Transition: '<S59>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S59>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S59>:110' */
                /* Call Tmot */
                VeSR1B_y_APCM_Stat_FD3_CallStatus = 3U;

                /* Event: '<S59>:40' */
                /* Transition: '<S59>:115' */
                /* Transition: '<S59>:114' */
            }
        }
        else
        {
            /* Transition: '<S59>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_n) == 133)
            {
                /* Transition: '<S59>:95' */
                /* Transition: '<S59>:116' */
                /* Call Nothing */
                VeSR1B_y_APCM_Stat_FD3_CallStatus = 4U;

                /* Transition: '<S59>:114' */
            }
            else
            {
                /* Transition: '<S59>:120' */
                if ((((uint32)tmpRead_f) & 8U) != 0U)
                {
                    /* Transition: '<S59>:122' */
                    /* Transition: '<S59>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S59>:126' */
                }
                else
                {
                    /* Transition: '<S59>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S59>:117' */
                /* Call Poke */
                VeSR1B_y_APCM_Stat_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S53>/Poke' */
                /* FunctionCaller: '<S61>/Function Caller' */
                /* Event: '<S59>:38' */
                Rte_Call_PokePLTR_e_Prmry_AutoPosCorrMd_PokePLTR_e_Prmry_AutoPosCorrMd
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_A, FA_out_fr);

                /* End of Outputs for SubSystem: '<S53>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S59>:111' */
        /* Call Fsft */
        VeSR1B_y_APCM_Stat_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S53>/Fsft' */
        /* FunctionCaller: '<S60>/Function Caller' */
        /* Event: '<S59>:39' */
        Rte_Call_FsftPLTR_b_Prmry_AutoPosCorrMd_FsftPLTR_b_Prmry_AutoPosCorrMd();

        /* End of Outputs for SubSystem: '<S53>/Fsft' */
        /* Transition: '<S59>:113' */
        /* Transition: '<S59>:115' */
        /* Transition: '<S59>:114' */
    }

    /* End of Chart: '<S56>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_PRNDFailSts_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_PRNDFailSts_FD3_ErrSts'
     */
    /* Transition: '<S59>:107' */
    rtb_TmpSignalConversionAtVeSR_e = Rte_Read_VeSR1B_b_PRNDFailSts_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_PRNDFailSts_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S65>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_PRNDFailSts_FD3_SigSts_Value(&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S62>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_g) & 3U) != 0U)
    {
        /* Transition: '<S65>:100' */
        /* Transition: '<S65>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S65>:104' */
        /*  MM */
        if ((((uint32)tmpRead_g) & 4U) != 0U)
        {
            /* Transition: '<S65>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S65>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S65>:110' */
                /* Call Tmot */
                VeSR1B_y_PRNDFailSts_FD3_CallStatus = 3U;

                /* Event: '<S65>:40' */
                /* Transition: '<S65>:115' */
                /* Transition: '<S65>:114' */
            }
        }
        else
        {
            /* Transition: '<S65>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_e) == 133)
            {
                /* Transition: '<S65>:95' */
                /* Transition: '<S65>:116' */
                /* Call Nothing */
                VeSR1B_y_PRNDFailSts_FD3_CallStatus = 4U;

                /* Transition: '<S65>:114' */
            }
            else
            {
                /* Transition: '<S65>:120' */
                /* Transition: '<S65>:117' */
                /* Call Poke */
                VeSR1B_y_PRNDFailSts_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S54>/Poke' */
                /* FunctionCaller: '<S67>/Function Caller' */
                /* Event: '<S65>:38' */
                Rte_Call_PokePLTR_b_Prmry_PRNDFailSts_PokePLTR_b_Prmry_PRNDFailSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_P);

                /* End of Outputs for SubSystem: '<S54>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S65>:111' */
        /* Call Fsft */
        VeSR1B_y_PRNDFailSts_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S54>/Fsft' */
        /* FunctionCaller: '<S66>/Function Caller' */
        /* Event: '<S65>:39' */
        Rte_Call_FsftPLTR_b_Prmry_PRNDFailSts_FsftPLTR_b_Prmry_PRNDFailSts();

        /* End of Outputs for SubSystem: '<S54>/Fsft' */
        /* Transition: '<S65>:113' */
        /* Transition: '<S65>:115' */
        /* Transition: '<S65>:114' */
    }

    /* End of Chart: '<S62>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ShiftLeverPosnReq_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ShiftLeverPosnReq_FD3_ErrSts'
     */
    /* Transition: '<S65>:107' */
    rtb_TmpSignalConversionAtVeS_nv =
        Rte_Read_VeSR1B_y_ShiftLeverPosnReq_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_S);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ShiftLeverPosnReq_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S71>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ShiftLeverPosnReq_FD3_SigSts_Value(&tmpRead_h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S68>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_h) & 3U) != 0U)
    {
        /* Transition: '<S71>:100' */
        /* Transition: '<S71>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S71>:104' */
        /*  MM */
        if ((((uint32)tmpRead_h) & 4U) != 0U)
        {
            /* Transition: '<S71>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S71>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S71>:110' */
                /* Call Tmot */
                VeSR1B_y_ShiftLeverPosnReq_FD3_CallStatus = 3U;

                /* Event: '<S71>:40' */
                /* Transition: '<S71>:115' */
                /* Transition: '<S71>:114' */
            }
        }
        else
        {
            /* Transition: '<S71>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_nv) == 133)
            {
                /* Transition: '<S71>:95' */
                /* Transition: '<S71>:116' */
                /* Call Nothing */
                VeSR1B_y_ShiftLeverPosnReq_FD3_CallStatus = 4U;

                /* Transition: '<S71>:114' */
            }
            else
            {
                /* Transition: '<S71>:120' */
                if ((((uint32)tmpRead_h) & 8U) != 0U)
                {
                    /* Transition: '<S71>:122' */
                    /* Transition: '<S71>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S71>:126' */
                }
                else
                {
                    /* Transition: '<S71>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S71>:117' */
                /* Call Poke */
                VeSR1B_y_ShiftLeverPosnReq_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S55>/Poke' */
                /* FunctionCaller: '<S73>/Function Caller' */
                /* Event: '<S71>:38' */
                Rte_Call_PokePLTR_e_Prmry_TransShiftPstn_PokePLTR_e_Prmry_TransShiftPstn
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_S, FA_out_fr);

                /* End of Outputs for SubSystem: '<S55>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S71>:111' */
        /* Call Fsft */
        VeSR1B_y_ShiftLeverPosnReq_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S55>/Fsft' */
        /* FunctionCaller: '<S72>/Function Caller' */
        /* Event: '<S71>:39' */
        Rte_Call_FsftPLTR_b_Prmry_TransShiftPstn_FsftPLTR_b_Prmry_TransShiftPstn
            ();

        /* End of Outputs for SubSystem: '<S55>/Fsft' */
        /* Transition: '<S71>:113' */
        /* Transition: '<S71>:115' */
        /* Transition: '<S71>:114' */
    }

    /* End of Chart: '<S68>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_CmdIgnSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_CmdIgnSts_ErrSts'
     */
    /* Transition: '<S71>:107' */
    rtb_TmpSignalConversionAtVeSR_l = Rte_Read_VeSR1B_y_CmdIgnSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_CmdIgnSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S80>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_CmdIgnSts_SigSts_Value(&tmpRead_i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S77>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_i) & 3U) != 0U)
    {
        /* Transition: '<S80>:100' */
        /* Transition: '<S80>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S80>:104' */
        /*  MM */
        if ((((uint32)tmpRead_i) & 4U) != 0U)
        {
            /* Transition: '<S80>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S80>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S80>:110' */
                /* Call Tmot */
                VeSR1B_y_CmdIgnSts_CallStatus = 3U;

                /* Event: '<S80>:40' */
                /* Transition: '<S80>:115' */
                /* Transition: '<S80>:114' */
            }
        }
        else
        {
            /* Transition: '<S80>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_l) == 133)
            {
                /* Transition: '<S80>:95' */
                /* Transition: '<S80>:116' */
                /* Call Nothing */
                VeSR1B_y_CmdIgnSts_CallStatus = 4U;

                /* Transition: '<S80>:114' */
            }
            else
            {
                /* Transition: '<S80>:120' */
                if ((((uint32)tmpRead_i) & 8U) != 0U)
                {
                    /* Transition: '<S80>:122' */
                    /* Transition: '<S80>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S80>:126' */
                }
                else
                {
                    /* Transition: '<S80>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S80>:117' */
                /* Call Poke */
                VeSR1B_y_CmdIgnSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S74>/Poke' */
                /* FunctionCaller: '<S82>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S82>/Data Type Conversion'
                 */
                /* Event: '<S80>:38' */
                Rte_Call_PokePMDR_e_PowerModeRaw_PokePMDR_e_PowerModeRaw((sint16)
                    CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_C, FA_out_fr);

                /* End of Outputs for SubSystem: '<S74>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S80>:111' */
        /* Call Fsft */
        VeSR1B_y_CmdIgnSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S74>/Fsft' */
        /* FunctionCaller: '<S81>/Function Caller' */
        /* Event: '<S80>:39' */
        Rte_Call_FsftPMDR_e_PowerModeRaw_FsftPMDR_e_PowerModeRaw();

        /* End of Outputs for SubSystem: '<S74>/Fsft' */
        /* Transition: '<S80>:113' */
        /* Transition: '<S80>:115' */
        /* Transition: '<S80>:114' */
    }

    /* End of Chart: '<S77>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_CompressorACReqSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_CompressorACReqSts_ErrSts'
     */
    /* Transition: '<S80>:107' */
    rtb_TmpSignalConversionAtVeS_e3 = Rte_Read_VeSR1B_b_CompressorACReqSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_CompressorACReqSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S85>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_CompressorACReqSts_SigSts_Value(&tmpRead_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S83>/Chart' */
    if ((((uint32)tmpRead_j) & 3U) != 0U)
    {
        /* Transition: '<S85>:100' */
        /* Transition: '<S85>:103' */
        /* Transition: '<S85>:111' */
        /* Call Fsft */
        VeSR1B_y_CompressorACReqSts_CallStatus = 2U;

        /* Event: '<S85>:39' */
        /* Transition: '<S85>:113' */
        /* Transition: '<S85>:115' */
        /* Transition: '<S85>:114' */
    }
    else
    {
        /* Transition: '<S85>:104' */
        /*  MM */
        if ((((uint32)tmpRead_j) & 4U) != 0U)
        {
            /* Transition: '<S85>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S85>:88' */
                /* Transition: '<S85>:111' */
                /* Call Fsft */
                VeSR1B_y_CompressorACReqSts_CallStatus = 2U;

                /* Event: '<S85>:39' */
                /* Transition: '<S85>:113' */
                /* Transition: '<S85>:115' */
                /* Transition: '<S85>:114' */
            }
            else
            {
                /* Transition: '<S85>:110' */
                /* Call Tmot */
                VeSR1B_y_CompressorACReqSts_CallStatus = 3U;

                /* Event: '<S85>:40' */
                /* Transition: '<S85>:115' */
                /* Transition: '<S85>:114' */
            }
        }
        else
        {
            /* Transition: '<S85>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_e3) == 133)
            {
                /* Transition: '<S85>:95' */
                /* Transition: '<S85>:116' */
                /* Call Nothing */
                VeSR1B_y_CompressorACReqSts_CallStatus = 4U;

                /* Transition: '<S85>:114' */
            }
            else
            {
                /* Transition: '<S85>:120' */
                /* Transition: '<S85>:117' */
                /* Call Poke */
                VeSR1B_y_CompressorACReqSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S75>/Poke' */
                /* FunctionCaller: '<S86>/Function Caller' */
                /* Event: '<S85>:38' */
                Rte_Call_PokeTAIR_b_ACCompReq_PokeTAIR_b_ACCompReq
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_C);

                /* End of Outputs for SubSystem: '<S75>/Poke' */
            }
        }
    }

    /* End of Chart: '<S83>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_DAY_LGT_MD_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DAY_LGT_MD_ErrSts'
     */
    /* Transition: '<S85>:107' */
    rtb_TmpSignalConversionAtVeSR_a = Rte_Read_VeSR1B_b_DAY_LGT_MD_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_D);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_DAY_LGT_MD_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S89>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DAY_LGT_MD_SigSts_Value(&tmpRead_k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S87>/Chart' */
    if ((((uint32)tmpRead_k) & 3U) != 0U)
    {
        /* Transition: '<S89>:100' */
        /* Transition: '<S89>:103' */
        /* Transition: '<S89>:111' */
        /* Call Fsft */
        VeSR1B_y_DAY_LGT_MD_CallStatus = 2U;

        /* Event: '<S89>:39' */
        /* Transition: '<S89>:113' */
        /* Transition: '<S89>:115' */
        /* Transition: '<S89>:114' */
    }
    else
    {
        /* Transition: '<S89>:104' */
        /*  MM */
        if ((((uint32)tmpRead_k) & 4U) != 0U)
        {
            /* Transition: '<S89>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S89>:88' */
                /* Transition: '<S89>:111' */
                /* Call Fsft */
                VeSR1B_y_DAY_LGT_MD_CallStatus = 2U;

                /* Event: '<S89>:39' */
                /* Transition: '<S89>:113' */
                /* Transition: '<S89>:115' */
                /* Transition: '<S89>:114' */
            }
            else
            {
                /* Transition: '<S89>:110' */
                /* Call Tmot */
                VeSR1B_y_DAY_LGT_MD_CallStatus = 3U;

                /* Event: '<S89>:40' */
                /* Transition: '<S89>:115' */
                /* Transition: '<S89>:114' */
            }
        }
        else
        {
            /* Transition: '<S89>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_a) == 133)
            {
                /* Transition: '<S89>:95' */
                /* Transition: '<S89>:116' */
                /* Call Nothing */
                VeSR1B_y_DAY_LGT_MD_CallStatus = 4U;

                /* Transition: '<S89>:114' */
            }
            else
            {
                /* Transition: '<S89>:120' */
                /* Transition: '<S89>:117' */
                /* Call Poke */
                VeSR1B_y_DAY_LGT_MD_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S76>/Poke' */
                /* FunctionCaller: '<S90>/Function Caller' */
                /* Event: '<S89>:38' */
                Rte_Call_PokePLTR_b_InternalLightSts_PokePLTR_b_InternalLightSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_D);

                /* End of Outputs for SubSystem: '<S76>/Poke' */
            }
        }
    }

    /* End of Chart: '<S87>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_PN14_LS_Actv_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_PN14_LS_Actv_ErrSts'
     */
    /* Transition: '<S89>:107' */
    rtb_TmpSignalConversionAtVeSR_p = Rte_Read_VeSR1B_b_PN14_LS_Actv_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_PN14_LS_Actv_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S95>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_PN14_LS_Actv_SigSts_Value(&tmpRead_l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S92>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_l) & 3U) != 0U)
    {
        /* Transition: '<S95>:100' */
        /* Transition: '<S95>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S95>:104' */
        /*  MM */
        if ((((uint32)tmpRead_l) & 4U) != 0U)
        {
            /* Transition: '<S95>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S95>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S95>:110' */
                /* Call Tmot */
                VeSR1B_y_PN14_LS_Actv_CallStatus = 3U;

                /* Event: '<S95>:40' */
                /* Transition: '<S95>:115' */
                /* Transition: '<S95>:114' */
            }
        }
        else
        {
            /* Transition: '<S95>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_p) == 133)
            {
                /* Transition: '<S95>:95' */
                /* Transition: '<S95>:116' */
                /* Call Nothing */
                VeSR1B_y_PN14_LS_Actv_CallStatus = 4U;

                /* Transition: '<S95>:114' */
            }
            else
            {
                /* Transition: '<S95>:120' */
                /* Transition: '<S95>:117' */
                /* Call Poke */
                VeSR1B_y_PN14_LS_Actv_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S91>/Poke' */
                /* FunctionCaller: '<S97>/Function Caller' */
                /* Event: '<S95>:38' */
                Rte_Call_PokeTRIR_b_LoadShed_PokeTRIR_b_LoadShed
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_p);

                /* End of Outputs for SubSystem: '<S91>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S95>:111' */
        /* Call Fsft */
        VeSR1B_y_PN14_LS_Actv_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S91>/Fsft' */
        /* FunctionCaller: '<S96>/Function Caller' */
        /* Event: '<S95>:39' */
        Rte_Call_FsftTRIR_b_LoadShed_FsftTRIR_b_LoadShed();

        /* End of Outputs for SubSystem: '<S91>/Fsft' */
        /* Transition: '<S95>:113' */
        /* Transition: '<S95>:115' */
        /* Transition: '<S95>:114' */
    }

    /* End of Chart: '<S92>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_PreCondCabinSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_PreCondCabinSts_ErrSts'
     */
    /* Transition: '<S95>:107' */
    rtb_TmpSignalConversionAtVeS_ck = Rte_Read_VeSR1B_y_PreCondCabinSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_PreCondCabinSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S104>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_PreCondCabinSts_SigSts_Value(&tmpRead_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S100>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_m) & 3U) != 0U)
    {
        /* Transition: '<S104>:100' */
        /* Transition: '<S104>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S104>:104' */
        /*  MM */
        if ((((uint32)tmpRead_m) & 4U) != 0U)
        {
            /* Transition: '<S104>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S104>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S104>:110' */
                /* Call Tmot */
                VeSR1B_y_PreCondCabinSts_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S98>/Tmot' */
                /* FunctionCaller: '<S107>/Function Caller' */
                /* Event: '<S104>:40' */
                Rte_Call_TmotTRIR_b_HVACPrecCondSts_TmotTRIR_b_HVACPrecCondSts();

                /* End of Outputs for SubSystem: '<S98>/Tmot' */
                /* Transition: '<S104>:115' */
                /* Transition: '<S104>:114' */
            }
        }
        else
        {
            /* Transition: '<S104>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ck) == 133)
            {
                /* Transition: '<S104>:95' */
                /* Transition: '<S104>:116' */
                /* Call Nothing */
                VeSR1B_y_PreCondCabinSts_CallStatus = 4U;

                /* Transition: '<S104>:114' */
            }
            else
            {
                /* Transition: '<S104>:120' */
                if ((((uint32)tmpRead_m) & 8U) != 0U)
                {
                    /* Transition: '<S104>:122' */
                    /* Transition: '<S104>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S104>:126' */
                }
                else
                {
                    /* Transition: '<S104>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S104>:117' */
                /* Call Poke */
                VeSR1B_y_PreCondCabinSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S98>/Poke' */
                /* FunctionCaller: '<S106>/Function Caller' */
                /* Event: '<S104>:38' */
                Rte_Call_PokeTRIR_e_HVACPrecCondSts_PokeTRIR_e_HVACPrecCondSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_P, FA_out_fr);

                /* End of Outputs for SubSystem: '<S98>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S104>:111' */
        /* Call Fsft */
        VeSR1B_y_PreCondCabinSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S98>/Fsft' */
        /* FunctionCaller: '<S105>/Function Caller' */
        /* Event: '<S104>:39' */
        Rte_Call_FsftTRIR_b_HVACPrecCondSts_FsftTRIR_b_HVACPrecCondSts();

        /* End of Outputs for SubSystem: '<S98>/Fsft' */
        /* Transition: '<S104>:113' */
        /* Transition: '<S104>:115' */
        /* Transition: '<S104>:114' */
    }

    /* End of Chart: '<S100>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_TerrainSwStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_TerrainSwStat_ErrSts'
     */
    /* Transition: '<S104>:107' */
    rtb_TmpSignalConversionAtVeS_a3 = Rte_Read_VeSR1B_y_TerrainSwStat_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_TerrainSwStat_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S110>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_TerrainSwStat_SigSts_Value(&tmpRead_n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S108>/Chart' */
    if ((((uint32)tmpRead_n) & 3U) != 0U)
    {
        /* Transition: '<S110>:100' */
        /* Transition: '<S110>:103' */
        /* Transition: '<S110>:111' */
        /* Call Fsft */
        VeSR1B_y_TerrainSwStat_CallStatus = 2U;

        /* Event: '<S110>:39' */
        /* Transition: '<S110>:113' */
        /* Transition: '<S110>:115' */
        /* Transition: '<S110>:114' */
    }
    else
    {
        /* Transition: '<S110>:104' */
        /*  MM */
        if ((((uint32)tmpRead_n) & 4U) != 0U)
        {
            /* Transition: '<S110>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S110>:88' */
                /* Transition: '<S110>:111' */
                /* Call Fsft */
                VeSR1B_y_TerrainSwStat_CallStatus = 2U;

                /* Event: '<S110>:39' */
                /* Transition: '<S110>:113' */
                /* Transition: '<S110>:115' */
                /* Transition: '<S110>:114' */
            }
            else
            {
                /* Transition: '<S110>:110' */
                /* Call Tmot */
                VeSR1B_y_TerrainSwStat_CallStatus = 3U;

                /* Event: '<S110>:40' */
                /* Transition: '<S110>:115' */
                /* Transition: '<S110>:114' */
            }
        }
        else
        {
            /* Transition: '<S110>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_a3) == 133)
            {
                /* Transition: '<S110>:95' */
                /* Transition: '<S110>:116' */
                /* Call Nothing */
                VeSR1B_y_TerrainSwStat_CallStatus = 4U;

                /* Transition: '<S110>:114' */
            }
            else
            {
                /* Transition: '<S110>:120' */
                if ((((uint32)tmpRead_n) & 8U) != 0U)
                {
                    /* Transition: '<S110>:122' */
                    /* Transition: '<S110>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S110>:126' */
                }
                else
                {
                    /* Transition: '<S110>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S110>:117' */
                /* Call Poke */
                VeSR1B_y_TerrainSwStat_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S99>/Poke' */
                /* FunctionCaller: '<S111>/Function Caller' */
                /* Event: '<S110>:38' */
                Rte_Call_PokeTIMR_e_TrrnToggleMdSwitch_PokeTIMR_e_TrrnToggleMdSwitch
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_e, FA_out_fr);

                /* End of Outputs for SubSystem: '<S99>/Poke' */
            }
        }
    }

    /* End of Chart: '<S108>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_BonnetAjarRawValSts_8_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_BonnetAjarRawValSts_8_ErrSts'
     */
    /* Transition: '<S110>:107' */
    rtb_TmpSignalConversionAtVeSR_g =
        Rte_Read_VeSR1B_U_BonnetAjarRawValSts_8_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_U_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_BonnetAjarRawValSts_8_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S118>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_BonnetAjarRawValSts_8_SigSts_Value(&tmpRead_o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S115>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_o) & 3U) != 0U)
    {
        /* Transition: '<S118>:100' */
        /* Transition: '<S118>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S118>:104' */
        /*  MM */
        if ((((uint32)tmpRead_o) & 4U) != 0U)
        {
            /* Transition: '<S118>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S118>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S118>:110' */
                /* Call Tmot */
                VeSR1B_y_BonnetAjarRawValSts_8_CallStatus = 3U;

                /* Event: '<S118>:40' */
                /* Transition: '<S118>:115' */
                /* Transition: '<S118>:114' */
            }
        }
        else
        {
            /* Transition: '<S118>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_g) == 133)
            {
                /* Transition: '<S118>:95' */
                /* Transition: '<S118>:116' */
                /* Call Nothing */
                VeSR1B_y_BonnetAjarRawValSts_8_CallStatus = 4U;

                /* Transition: '<S118>:114' */
            }
            else
            {
                /* Transition: '<S118>:120' */
                /* Transition: '<S118>:117' */
                /* Call Poke */
                VeSR1B_y_BonnetAjarRawValSts_8_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S112>/Poke' */
                /* FunctionCaller: '<S120>/Function Caller' incorporates:
                 *  Constant: '<S120>/Constant'
                 */
                /* Event: '<S118>:38' */
                Rte_Call_PokeHSWR_U_CBC_BntAjrRwVlStsVolt_PokeHSWR_U_CBC_BntAjrRwVlStsVolt
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_U_B, false);

                /* End of Outputs for SubSystem: '<S112>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S118>:111' */
        /* Call Fsft */
        VeSR1B_y_BonnetAjarRawValSts_8_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S112>/Fsft' */
        /* FunctionCaller: '<S119>/Function Caller' */
        /* Event: '<S118>:39' */
        Rte_Call_FsftHSWR_b_CBC_BntAjrRwVlStsVolt_FsftHSWR_b_CBC_BntAjrRwVlStsVolt
            ();

        /* End of Outputs for SubSystem: '<S112>/Fsft' */
        /* Transition: '<S118>:113' */
        /* Transition: '<S118>:115' */
        /* Transition: '<S118>:114' */
    }

    /* End of Chart: '<S115>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_Braking_Mode_Req_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_Braking_Mode_Req_ErrSts'
     */
    /* Transition: '<S118>:107' */
    rtb_TmpSignalConversionAtVeS_p5 = Rte_Read_VeSR1B_y_Braking_Mode_Req_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_Braking_Mode_Req_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S124>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Braking_Mode_Req_SigSts_Value(&tmpRead_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S121>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_p) & 3U) != 0U)
    {
        /* Transition: '<S124>:100' */
        /* Transition: '<S124>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S124>:104' */
        /*  MM */
        if ((((uint32)tmpRead_p) & 4U) != 0U)
        {
            /* Transition: '<S124>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S124>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S124>:110' */
                /* Call Tmot */
                VeSR1B_y_Braking_Mode_Req_CallStatus = 3U;

                /* Event: '<S124>:40' */
                /* Transition: '<S124>:115' */
                /* Transition: '<S124>:114' */
            }
        }
        else
        {
            /* Transition: '<S124>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_p5) == 133)
            {
                /* Transition: '<S124>:95' */
                /* Transition: '<S124>:116' */
                /* Call Nothing */
                VeSR1B_y_Braking_Mode_Req_CallStatus = 4U;

                /* Transition: '<S124>:114' */
            }
            else
            {
                /* Transition: '<S124>:120' */
                if ((((uint32)tmpRead_p) & 8U) != 0U)
                {
                    /* Transition: '<S124>:122' */
                    /* Transition: '<S124>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S124>:126' */
                }
                else
                {
                    /* Transition: '<S124>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S124>:117' */
                /* Call Poke */
                VeSR1B_y_Braking_Mode_Req_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S113>/Poke' */
                /* FunctionCaller: '<S126>/Function Caller' */
                /* Event: '<S124>:38' */
                Rte_Call_PokeDMIR_e_BrakingMdReq_PokeDMIR_e_BrakingMdReq
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_B, FA_out_fr);

                /* End of Outputs for SubSystem: '<S113>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S124>:111' */
        /* Call Fsft */
        VeSR1B_y_Braking_Mode_Req_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S113>/Fsft' */
        /* FunctionCaller: '<S125>/Function Caller' */
        /* Event: '<S124>:39' */
        Rte_Call_FsftDMIR_e_Braking_Mode_Req_FsftDMIR_e_Braking_Mode_Req();

        /* End of Outputs for SubSystem: '<S113>/Fsft' */
        /* Transition: '<S124>:113' */
        /* Transition: '<S124>:115' */
        /* Transition: '<S124>:114' */
    }

    /* End of Chart: '<S121>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_DRV_DR_UNLOCKING_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DRV_DR_UNLOCKING_ErrSts'
     */
    /* Transition: '<S124>:107' */
    rtb_TmpSignalConversionAtVeSR_i = Rte_Read_VeSR1B_b_DRV_DR_UNLOCKING_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_DRV_DR_UNLOCKING_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S129>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DRV_DR_UNLOCKING_SigSts_Value(&tmpRead_q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S127>/Chart' */
    if ((((uint32)tmpRead_q) & 3U) != 0U)
    {
        /* Transition: '<S129>:100' */
        /* Transition: '<S129>:103' */
        /* Transition: '<S129>:111' */
        /* Call Fsft */
        VeSR1B_y_DRV_DR_UNLOCKING_CallStatus = 2U;

        /* Event: '<S129>:39' */
        /* Transition: '<S129>:113' */
        /* Transition: '<S129>:115' */
        /* Transition: '<S129>:114' */
    }
    else
    {
        /* Transition: '<S129>:104' */
        /*  MM */
        if ((((uint32)tmpRead_q) & 4U) != 0U)
        {
            /* Transition: '<S129>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S129>:88' */
                /* Transition: '<S129>:111' */
                /* Call Fsft */
                VeSR1B_y_DRV_DR_UNLOCKING_CallStatus = 2U;

                /* Event: '<S129>:39' */
                /* Transition: '<S129>:113' */
                /* Transition: '<S129>:115' */
                /* Transition: '<S129>:114' */
            }
            else
            {
                /* Transition: '<S129>:110' */
                /* Call Tmot */
                VeSR1B_y_DRV_DR_UNLOCKING_CallStatus = 3U;

                /* Event: '<S129>:40' */
                /* Transition: '<S129>:115' */
                /* Transition: '<S129>:114' */
            }
        }
        else
        {
            /* Transition: '<S129>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_i) == 133)
            {
                /* Transition: '<S129>:95' */
                /* Transition: '<S129>:116' */
                /* Call Nothing */
                VeSR1B_y_DRV_DR_UNLOCKING_CallStatus = 4U;

                /* Transition: '<S129>:114' */
            }
            else
            {
                /* Transition: '<S129>:120' */
                /* Transition: '<S129>:117' */
                /* Call Poke */
                VeSR1B_y_DRV_DR_UNLOCKING_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S114>/Poke' */
                /* FunctionCaller: '<S130>/Function Caller' */
                /* Event: '<S129>:38' */
                Rte_Call_PokeCITR_b_Drv_Dr_Unlocking_PokeCITR_b_Drv_Dr_Unlocking
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_b);

                /* End of Outputs for SubSystem: '<S114>/Poke' */
            }
        }
    }

    /* End of Chart: '<S127>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_KeyInIgnSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_KeyInIgnSts_ErrSts'
     */
    /* Transition: '<S129>:107' */
    rtb_TmpSignalConversionAtVeS_cy = Rte_Read_VeSR1B_y_KeyInIgnSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_K);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_KeyInIgnSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S137>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_KeyInIgnSts_SigSts_Value(&tmpRead_r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S134>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_r) & 3U) != 0U)
    {
        /* Transition: '<S137>:100' */
        /* Transition: '<S137>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S137>:104' */
        /*  MM */
        if ((((uint32)tmpRead_r) & 4U) != 0U)
        {
            /* Transition: '<S137>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S137>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S137>:110' */
                /* Call Tmot */
                VeSR1B_y_KeyInIgnSts_CallStatus = 3U;

                /* Event: '<S137>:40' */
                /* Transition: '<S137>:115' */
                /* Transition: '<S137>:114' */
            }
        }
        else
        {
            /* Transition: '<S137>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_cy) == 133)
            {
                /* Transition: '<S137>:95' */
                /* Transition: '<S137>:116' */
                /* Call Nothing */
                VeSR1B_y_KeyInIgnSts_CallStatus = 4U;

                /* Transition: '<S137>:114' */
            }
            else
            {
                /* Transition: '<S137>:120' */
                if ((((uint32)tmpRead_r) & 8U) != 0U)
                {
                    /* Transition: '<S137>:122' */
                    /* Transition: '<S137>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S137>:126' */
                }
                else
                {
                    /* Transition: '<S137>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S137>:117' */
                /* Call Poke */
                VeSR1B_y_KeyInIgnSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S131>/Poke' */
                /* FunctionCaller: '<S139>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S139>/Data Type Conversion'
                 */
                /* Event: '<S137>:38' */
                Rte_Call_PokePMDR_e_KeyInIgn_PokePMDR_e_KeyInIgn((sint16)
                    CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_K, FA_out_fr);

                /* End of Outputs for SubSystem: '<S131>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S137>:111' */
        /* Call Fsft */
        VeSR1B_y_KeyInIgnSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S131>/Fsft' */
        /* FunctionCaller: '<S138>/Function Caller' */
        /* Event: '<S137>:39' */
        Rte_Call_FsftPMDR_e_KeyInIgn_FsftPMDR_e_KeyInIgn();

        /* End of Outputs for SubSystem: '<S131>/Fsft' */
        /* Transition: '<S137>:113' */
        /* Transition: '<S137>:115' */
        /* Transition: '<S137>:114' */
    }

    /* End of Chart: '<S134>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_RemStActvSts_R_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_RemStActvSts_R_ErrSts'
     */
    /* Transition: '<S137>:107' */
    rtb_TmpSignalConversionAtVeSR_d = Rte_Read_VeSR1B_b_RemStActvSts_R_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_R);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_RemStActvSts_R_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S143>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_RemStActvSts_R_SigSts_Value(&tmpRead_s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S140>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_s) & 3U) != 0U)
    {
        /* Transition: '<S143>:100' */
        /* Transition: '<S143>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S143>:104' */
        /*  MM */
        if ((((uint32)tmpRead_s) & 4U) != 0U)
        {
            /* Transition: '<S143>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S143>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S143>:110' */
                /* Call Tmot */
                VeSR1B_y_RemStActvSts_R_CallStatus = 3U;

                /* Event: '<S143>:40' */
                /* Transition: '<S143>:115' */
                /* Transition: '<S143>:114' */
            }
        }
        else
        {
            /* Transition: '<S143>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_d) == 133)
            {
                /* Transition: '<S143>:95' */
                /* Transition: '<S143>:116' */
                /* Call Nothing */
                VeSR1B_y_RemStActvSts_R_CallStatus = 4U;

                /* Transition: '<S143>:114' */
            }
            else
            {
                /* Transition: '<S143>:120' */
                /* Transition: '<S143>:117' */
                /* Call Poke */
                VeSR1B_y_RemStActvSts_R_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S132>/Poke' */
                /* FunctionCaller: '<S145>/Function Caller' */
                /* Event: '<S143>:38' */
                Rte_Call_PokePLTR_b_RmtVehStartReq_PokePLTR_b_RmtVehStartReq
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_R);

                /* End of Outputs for SubSystem: '<S132>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S143>:111' */
        /* Call Fsft */
        VeSR1B_y_RemStActvSts_R_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S132>/Fsft' */
        /* FunctionCaller: '<S144>/Function Caller' */
        /* Event: '<S143>:39' */
        Rte_Call_FsftPLTR_b_RmtVehStartReq_FsftPLTR_b_RmtVehStartReq();

        /* End of Outputs for SubSystem: '<S132>/Fsft' */
        /* Transition: '<S143>:113' */
        /* Transition: '<S143>:115' */
        /* Transition: '<S143>:114' */
    }

    /* End of Chart: '<S140>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_SCCActvSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_SCCActvSts_ErrSts'
     */
    /* Transition: '<S143>:107' */
    rtb_TmpSignalConversionAtVeS_i4 = Rte_Read_VeSR1B_b_SCCActvSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_S);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_SCCActvSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S149>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_SCCActvSts_SigSts_Value(&tmpRead_t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S146>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_t) & 3U) != 0U)
    {
        /* Transition: '<S149>:100' */
        /* Transition: '<S149>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S149>:104' */
        /*  MM */
        if ((((uint32)tmpRead_t) & 4U) != 0U)
        {
            /* Transition: '<S149>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S149>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S149>:110' */
                /* Call Tmot */
                VeSR1B_y_SCCActvSts_CallStatus = 3U;

                /* Event: '<S149>:40' */
                /* Transition: '<S149>:115' */
                /* Transition: '<S149>:114' */
            }
        }
        else
        {
            /* Transition: '<S149>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_i4) == 133)
            {
                /* Transition: '<S149>:95' */
                /* Transition: '<S149>:116' */
                /* Call Nothing */
                VeSR1B_y_SCCActvSts_CallStatus = 4U;

                /* Transition: '<S149>:114' */
            }
            else
            {
                /* Transition: '<S149>:120' */
                /* Transition: '<S149>:117' */
                /* Call Poke */
                VeSR1B_y_SCCActvSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S133>/Poke' */
                /* FunctionCaller: '<S151>/Function Caller' */
                /* Event: '<S149>:38' */
                Rte_Call_PokeTRIR_b_SCCActv_PokeTRIR_b_SCCActv
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_S);

                /* End of Outputs for SubSystem: '<S133>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S149>:111' */
        /* Call Fsft */
        VeSR1B_y_SCCActvSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S133>/Fsft' */
        /* FunctionCaller: '<S150>/Function Caller' */
        /* Event: '<S149>:39' */
        Rte_Call_FsftTRIR_b_SCCActv_FsftTRIR_b_SCCActv();

        /* End of Outputs for SubSystem: '<S133>/Fsft' */
        /* Transition: '<S149>:113' */
        /* Transition: '<S149>:115' */
        /* Transition: '<S149>:114' */
    }

    /* End of Chart: '<S146>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EVAP_TEMP_P1C_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EVAP_TEMP_P1C_ErrSts'
     */
    /* Transition: '<S149>:107' */
    rtb_TmpSignalConversionAtVeSR_j = Rte_Read_VeSR1B_T_EVAP_TEMP_P1C_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_EVAP_TEMP_P1C_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S157>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EVAP_TEMP_P1C_SigSts_Value(&tmpRead_u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S154>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_u) & 3U) != 0U)
    {
        /* Transition: '<S157>:100' */
        /* Transition: '<S157>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S157>:104' */
        /*  MM */
        if ((((uint32)tmpRead_u) & 4U) != 0U)
        {
            /* Transition: '<S157>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S157>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S157>:110' */
                /* Call Tmot */
                VeSR1B_y_EVAP_TEMP_P1C_CallStatus = 3U;

                /* Event: '<S157>:40' */
                /* Transition: '<S157>:115' */
                /* Transition: '<S157>:114' */
            }
        }
        else
        {
            /* Transition: '<S157>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_j) == 133)
            {
                /* Transition: '<S157>:95' */
                /* Transition: '<S157>:116' */
                /* Call Nothing */
                VeSR1B_y_EVAP_TEMP_P1C_CallStatus = 4U;

                /* Transition: '<S157>:114' */
            }
            else
            {
                /* Transition: '<S157>:120' */
                if ((((uint32)tmpRead_u) & 8U) != 0U)
                {
                    /* Transition: '<S157>:122' */
                    /* Transition: '<S157>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S157>:126' */
                }
                else
                {
                    /* Transition: '<S157>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S157>:117' */
                /* Call Poke */
                VeSR1B_y_EVAP_TEMP_P1C_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S152>/Poke' */
                /* FunctionCaller: '<S159>/Function Caller' */
                /* Event: '<S157>:38' */
                Rte_Call_PokeTAIR_T_FtEvapTmp_PokeTAIR_T_FtEvapTmp
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_E, FA_out_fr);

                /* End of Outputs for SubSystem: '<S152>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S157>:111' */
        /* Call Fsft */
        VeSR1B_y_EVAP_TEMP_P1C_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S152>/Fsft' */
        /* FunctionCaller: '<S158>/Function Caller' */
        /* Event: '<S157>:39' */
        Rte_Call_FsftTAIR_T_FtEvapTmp_FsftTAIR_T_FtEvapTmp();

        /* End of Outputs for SubSystem: '<S152>/Fsft' */
        /* Transition: '<S157>:113' */
        /* Transition: '<S157>:115' */
        /* Transition: '<S157>:114' */
    }

    /* End of Chart: '<S154>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ExternalTempAD_Voltage_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ExternalTempAD_Voltage_ErrSts'
     */
    /* Transition: '<S157>:107' */
    rtb_TmpSignalConversionAtVeS_p2 =
        Rte_Read_VeSR1B_U_ExternalTempAD_Voltage_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_U_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ExternalTempAD_Voltage_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S164>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ExternalTempAD_Voltage_SigSts_Value(&tmpRead_v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S160>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_v) & 3U) != 0U)
    {
        /* Transition: '<S164>:100' */
        /* Transition: '<S164>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S164>:104' */
        /*  MM */
        if ((((uint32)tmpRead_v) & 4U) != 0U)
        {
            /* Transition: '<S164>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S164>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S164>:110' */
                /* Call Tmot */
                VeSR1B_y_ExternalTempAD_Voltage_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S153>/Tmot' */
                /* FunctionCaller: '<S167>/Function Caller' */
                /* Event: '<S164>:40' */
                Rte_Call_TmotAATR_U_CBC_AmbientAirVolt_TmotAATR_U_CBC_AmbientAirVolt
                    ();

                /* End of Outputs for SubSystem: '<S153>/Tmot' */
                /* Transition: '<S164>:115' */
                /* Transition: '<S164>:114' */
            }
        }
        else
        {
            /* Transition: '<S164>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_p2) == 133)
            {
                /* Transition: '<S164>:95' */
                /* Transition: '<S164>:116' */
                /* Call Nothing */
                VeSR1B_y_ExternalTempAD_Voltage_CallStatus = 4U;

                /* Transition: '<S164>:114' */
            }
            else
            {
                /* Transition: '<S164>:120' */
                /* Transition: '<S164>:117' */
                /* Call Poke */
                VeSR1B_y_ExternalTempAD_Voltage_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S153>/Poke' */
                /* FunctionCaller: '<S166>/Function Caller' incorporates:
                 *  Constant: '<S166>/Constant'
                 */
                /* Event: '<S164>:38' */
                Rte_Call_PokeAATR_U_CBC_AmbientAirVolt_PokeAATR_U_CBC_AmbientAirVolt
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_U_E, false);

                /* End of Outputs for SubSystem: '<S153>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S164>:111' */
        /* Call Fsft */
        VeSR1B_y_ExternalTempAD_Voltage_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S153>/Fsft' */
        /* FunctionCaller: '<S165>/Function Caller' */
        /* Event: '<S164>:39' */
        Rte_Call_FsftAATR_U_CBC_AmbientAirVolt_FsftAATR_U_CBC_AmbientAirVolt();

        /* End of Outputs for SubSystem: '<S153>/Fsft' */
        /* Transition: '<S164>:113' */
        /* Transition: '<S164>:115' */
        /* Transition: '<S164>:114' */
    }

    /* End of Chart: '<S160>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_BonnetSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_BonnetSts_ErrSts'
     */
    /* Transition: '<S164>:107' */
    rtb_TmpSignalConversionAtVeSR_o = Rte_Read_VeSR1B_b_BonnetSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_BonnetSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S176>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_BonnetSts_SigSts_Value(&tmpRead_w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S173>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_w) & 3U) != 0U)
    {
        /* Transition: '<S176>:100' */
        /* Transition: '<S176>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S176>:104' */
        /*  MM */
        if ((((uint32)tmpRead_w) & 4U) != 0U)
        {
            /* Transition: '<S176>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S176>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S176>:110' */
                /* Call Tmot */
                VeSR1B_y_BonnetSts_CallStatus = 3U;

                /* Event: '<S176>:40' */
                /* Transition: '<S176>:115' */
                /* Transition: '<S176>:114' */
            }
        }
        else
        {
            /* Transition: '<S176>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_o) == 133)
            {
                /* Transition: '<S176>:95' */
                /* Transition: '<S176>:116' */
                /* Call Nothing */
                VeSR1B_y_BonnetSts_CallStatus = 4U;

                /* Transition: '<S176>:114' */
            }
            else
            {
                /* Transition: '<S176>:120' */
                /* Transition: '<S176>:117' */
                /* Call Poke */
                VeSR1B_y_BonnetSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S168>/Poke' */
                /* FunctionCaller: '<S178>/Function Caller' incorporates:
                 *  Constant: '<S178>/Constant'
                 *  DataTypeConversion: '<S178>/Data Type Conversion'
                 */
                /* Event: '<S176>:38' */
                Rte_Call_PokeHSWR_e_RedntHdSwStat_PokeHSWR_e_RedntHdSwStat
                    ((sint16)CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_B,
                     false);

                /* End of Outputs for SubSystem: '<S168>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S176>:111' */
        /* Call Fsft */
        VeSR1B_y_BonnetSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S168>/Fsft' */
        /* FunctionCaller: '<S177>/Function Caller' */
        /* Event: '<S176>:39' */
        Rte_Call_FsftHSWR_e_RedntHdSwStat_FsftHSWR_e_RedntHdSwStat();

        /* End of Outputs for SubSystem: '<S168>/Fsft' */
        /* Transition: '<S176>:113' */
        /* Transition: '<S176>:115' */
        /* Transition: '<S176>:114' */
    }

    /* End of Chart: '<S173>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_DoorLockLastElSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DoorLockLastElSts_ErrSts'
     */
    /* Transition: '<S176>:107' */
    rtb_TmpSignalConversionAtVeS_iw = Rte_Read_VeSR1B_y_DoorLockLastElSts_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_D);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_DoorLockLastElSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S183>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DoorLockLastElSts_SigSts_Value(&tmpRead_x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S179>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_x) & 3U) != 0U)
    {
        /* Transition: '<S183>:100' */
        /* Transition: '<S183>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S183>:104' */
        /*  MM */
        if ((((uint32)tmpRead_x) & 4U) != 0U)
        {
            /* Transition: '<S183>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S183>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S183>:110' */
                /* Call Tmot */
                VeSR1B_y_DoorLockLastElSts_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S169>/Tmot' */
                /* FunctionCaller: '<S186>/Function Caller' */
                /* Event: '<S183>:40' */
                Rte_Call_TmotCITR_e_DoorLockLastElSts_TmotCITR_e_DoorLockLastElSts
                    ();

                /* End of Outputs for SubSystem: '<S169>/Tmot' */
                /* Transition: '<S183>:115' */
                /* Transition: '<S183>:114' */
            }
        }
        else
        {
            /* Transition: '<S183>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_iw) == 133)
            {
                /* Transition: '<S183>:95' */
                /* Transition: '<S183>:116' */
                /* Call Nothing */
                VeSR1B_y_DoorLockLastElSts_CallStatus = 4U;

                /* Transition: '<S183>:114' */
            }
            else
            {
                /* Transition: '<S183>:120' */
                if ((((uint32)tmpRead_x) & 8U) != 0U)
                {
                    /* Transition: '<S183>:122' */
                    /* Transition: '<S183>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S183>:126' */
                }
                else
                {
                    /* Transition: '<S183>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S183>:117' */
                /* Call Poke */
                VeSR1B_y_DoorLockLastElSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S169>/Poke' */
                /* FunctionCaller: '<S185>/Function Caller' */
                /* Event: '<S183>:38' */
                Rte_Call_PokeCITR_e_DoorLockLastElSts_PokeCITR_e_DoorLockLastElSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_D, FA_out_fr);

                /* End of Outputs for SubSystem: '<S169>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S183>:111' */
        /* Call Fsft */
        VeSR1B_y_DoorLockLastElSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S169>/Fsft' */
        /* FunctionCaller: '<S184>/Function Caller' */
        /* Event: '<S183>:39' */
        Rte_Call_FsftCITR_e_DoorLockLastElSts_FsftCITR_e_DoorLockLastElSts();

        /* End of Outputs for SubSystem: '<S169>/Fsft' */
        /* Transition: '<S183>:113' */
        /* Transition: '<S183>:115' */
        /* Transition: '<S183>:114' */
    }

    /* End of Chart: '<S179>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_DriverDoorSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DriverDoorSts_ErrSts'
     */
    /* Transition: '<S183>:107' */
    rtb_TmpSignalConversionAtVeS_of = Rte_Read_VeSR1B_b_DriverDoorSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_DriverDoorSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S190>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DriverDoorSts_SigSts_Value(&tmpRead_y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S187>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_y) & 3U) != 0U)
    {
        /* Transition: '<S190>:100' */
        /* Transition: '<S190>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S190>:104' */
        /*  MM */
        if ((((uint32)tmpRead_y) & 4U) != 0U)
        {
            /* Transition: '<S190>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S190>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S190>:110' */
                /* Call Tmot */
                VeSR1B_y_DriverDoorSts_CallStatus = 3U;

                /* Event: '<S190>:40' */
                /* Transition: '<S190>:115' */
                /* Transition: '<S190>:114' */
            }
        }
        else
        {
            /* Transition: '<S190>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_of) == 133)
            {
                /* Transition: '<S190>:95' */
                /* Transition: '<S190>:116' */
                /* Call Nothing */
                VeSR1B_y_DriverDoorSts_CallStatus = 4U;

                /* Transition: '<S190>:114' */
            }
            else
            {
                /* Transition: '<S190>:120' */
                /* Transition: '<S190>:117' */
                /* Call Poke */
                VeSR1B_y_DriverDoorSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S170>/Poke' */
                /* FunctionCaller: '<S192>/Function Caller' */
                /* Event: '<S190>:38' */
                Rte_Call_PokePLTR_b_DrvDrAjar_PokePLTR_b_DrvDrAjar
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_h);

                /* End of Outputs for SubSystem: '<S170>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S190>:111' */
        /* Call Fsft */
        VeSR1B_y_DriverDoorSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S170>/Fsft' */
        /* FunctionCaller: '<S191>/Function Caller' */
        /* Event: '<S190>:39' */
        Rte_Call_FsftPLTR_b_DrvDrAjar_FsftPLTR_b_DrvDrAjar();

        /* End of Outputs for SubSystem: '<S170>/Fsft' */
        /* Transition: '<S190>:113' */
        /* Transition: '<S190>:115' */
        /* Transition: '<S190>:114' */
    }

    /* End of Chart: '<S187>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_PowerModeSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_PowerModeSts_ErrSts'
     */
    /* Transition: '<S190>:107' */
    rtb_TmpSignalConversionAtVeSR_m = Rte_Read_VeSR1B_y_PowerModeSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_PowerModeSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S195>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_PowerModeSts_SigSts_Value(&tmpRead_z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S193>/Chart' */
    if ((((uint32)tmpRead_z) & 3U) != 0U)
    {
        /* Transition: '<S195>:100' */
        /* Transition: '<S195>:103' */
        /* Transition: '<S195>:111' */
        /* Call Fsft */
        VeSR1B_y_PowerModeSts_CallStatus = 2U;

        /* Event: '<S195>:39' */
        /* Transition: '<S195>:113' */
        /* Transition: '<S195>:115' */
        /* Transition: '<S195>:114' */
    }
    else
    {
        /* Transition: '<S195>:104' */
        /*  MM */
        if ((((uint32)tmpRead_z) & 4U) != 0U)
        {
            /* Transition: '<S195>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S195>:88' */
                /* Transition: '<S195>:111' */
                /* Call Fsft */
                VeSR1B_y_PowerModeSts_CallStatus = 2U;

                /* Event: '<S195>:39' */
                /* Transition: '<S195>:113' */
                /* Transition: '<S195>:115' */
                /* Transition: '<S195>:114' */
            }
            else
            {
                /* Transition: '<S195>:110' */
                /* Call Tmot */
                VeSR1B_y_PowerModeSts_CallStatus = 3U;

                /* Event: '<S195>:40' */
                /* Transition: '<S195>:115' */
                /* Transition: '<S195>:114' */
            }
        }
        else
        {
            /* Transition: '<S195>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_m) == 133)
            {
                /* Transition: '<S195>:95' */
                /* Transition: '<S195>:116' */
                /* Call Nothing */
                VeSR1B_y_PowerModeSts_CallStatus = 4U;

                /* Transition: '<S195>:114' */
            }
            else
            {
                /* Transition: '<S195>:120' */
                /* Transition: '<S195>:117' */
                /* Call Poke */
                VeSR1B_y_PowerModeSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S171>/Poke' */
                /* FunctionCaller: '<S196>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S196>/Data Type Conversion'
                 */
                /* Event: '<S195>:38' */
                Rte_Call_PokePLTR_e_ShipingMode_PokePLTR_e_ShipingMode((sint16)
                    CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_n);

                /* End of Outputs for SubSystem: '<S171>/Poke' */
            }
        }
    }

    /* End of Chart: '<S193>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_RHatchSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_RHatchSts_ErrSts'
     */
    /* Transition: '<S195>:107' */
    rtb_TmpSignalConversionAtVeS_lf = Rte_Read_VeSR1B_b_RHatchSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_RHatchSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S200>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_RHatchSts_SigSts_Value(&tmpRead_10);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S197>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_10) & 3U) != 0U)
    {
        /* Transition: '<S200>:100' */
        /* Transition: '<S200>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S200>:104' */
        /*  MM */
        if ((((uint32)tmpRead_10) & 4U) != 0U)
        {
            /* Transition: '<S200>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S200>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S200>:110' */
                /* Call Tmot */
                VeSR1B_y_RHatchSts_CallStatus = 3U;

                /* Event: '<S200>:40' */
                /* Transition: '<S200>:115' */
                /* Transition: '<S200>:114' */
            }
        }
        else
        {
            /* Transition: '<S200>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_lf) == 133)
            {
                /* Transition: '<S200>:95' */
                /* Transition: '<S200>:116' */
                /* Call Nothing */
                VeSR1B_y_RHatchSts_CallStatus = 4U;

                /* Transition: '<S200>:114' */
            }
            else
            {
                /* Transition: '<S200>:120' */
                /* Transition: '<S200>:117' */
                /* Call Poke */
                VeSR1B_y_RHatchSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S172>/Poke' */
                /* FunctionCaller: '<S202>/Function Caller' */
                /* Event: '<S200>:38' */
                Rte_Call_PokeTRIR_b_TrunkStatus_PokeTRIR_b_TrunkStatus
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_k);

                /* End of Outputs for SubSystem: '<S172>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S200>:111' */
        /* Call Fsft */
        VeSR1B_y_RHatchSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S172>/Fsft' */
        /* FunctionCaller: '<S201>/Function Caller' */
        /* Event: '<S200>:39' */
        Rte_Call_FsftTRIR_b_TrunkStatus_FsftTRIR_b_TrunkStatus();

        /* End of Outputs for SubSystem: '<S172>/Fsft' */
        /* Transition: '<S200>:113' */
        /* Transition: '<S200>:115' */
        /* Transition: '<S200>:114' */
    }

    /* End of Chart: '<S197>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_CompressionTest_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_CompressionTest_ErrSts'
     */
    /* Transition: '<S200>:107' */
    rtb_TmpSignalConversionAtVeCRDB = Rte_Read_VeCRDB_b_CompressionTest_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_CompressionTest_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S217>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_CompressionTest_SigSts_Value(&tmpRead_11);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S215>/Chart' */
    if ((((uint32)tmpRead_11) & 3U) != 0U)
    {
        /* Transition: '<S217>:100' */
        /* Transition: '<S217>:103' */
        /* Transition: '<S217>:111' */
        /* Call Fsft */
        VeCRDB_y_CompressionTest_CallStatus = 2U;

        /* Event: '<S217>:39' */
        /* Transition: '<S217>:113' */
        /* Transition: '<S217>:115' */
        /* Transition: '<S217>:114' */
    }
    else
    {
        /* Transition: '<S217>:104' */
        /*  MM */
        if ((((uint32)tmpRead_11) & 4U) != 0U)
        {
            /* Transition: '<S217>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S217>:88' */
                /* Transition: '<S217>:111' */
                /* Call Fsft */
                VeCRDB_y_CompressionTest_CallStatus = 2U;

                /* Event: '<S217>:39' */
                /* Transition: '<S217>:113' */
                /* Transition: '<S217>:115' */
                /* Transition: '<S217>:114' */
            }
            else
            {
                /* Transition: '<S217>:110' */
                /* Call Tmot */
                VeCRDB_y_CompressionTest_CallStatus = 3U;

                /* Event: '<S217>:40' */
                /* Transition: '<S217>:115' */
                /* Transition: '<S217>:114' */
            }
        }
        else
        {
            /* Transition: '<S217>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCRDB) == 133)
            {
                /* Transition: '<S217>:95' */
                /* Transition: '<S217>:116' */
                /* Call Nothing */
                VeCRDB_y_CompressionTest_CallStatus = 4U;

                /* Transition: '<S217>:114' */
            }
            else
            {
                /* Transition: '<S217>:120' */
                /* Transition: '<S217>:117' */
                /* Call Poke */
                VeCRDB_y_CompressionTest_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S203>/Poke' */
                /* FunctionCaller: '<S218>/Function Caller' */
                /* Event: '<S217>:38' */
                Rte_Call_PokeENGR_b_CmprssnTest_PokeENGR_b_CmprssnTest
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_C);

                /* End of Outputs for SubSystem: '<S203>/Poke' */
            }
        }
    }

    /* End of Chart: '<S215>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ECM_LHOM_Trans_W_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ECM_LHOM_Trans_W_ErrSts'
     */
    /* Transition: '<S217>:107' */
    rtb_TmpSignalConversionAtVeCR_o = Rte_Read_VeCRDB_y_ECM_LHOM_Trans_W_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_ECM_LHOM_Trans_W_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S221>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ECM_LHOM_Trans_W_SigSts_Value(&tmpRead_12);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S219>/Chart' */
    if ((((uint32)tmpRead_12) & 3U) != 0U)
    {
        /* Transition: '<S221>:100' */
        /* Transition: '<S221>:103' */
        /* Transition: '<S221>:111' */
        /* Call Fsft */
        VeCRDB_y_ECM_LHOM_Trans_W_CallStatus = 2U;

        /* Event: '<S221>:39' */
        /* Transition: '<S221>:113' */
        /* Transition: '<S221>:115' */
        /* Transition: '<S221>:114' */
    }
    else
    {
        /* Transition: '<S221>:104' */
        /*  MM */
        if ((((uint32)tmpRead_12) & 4U) != 0U)
        {
            /* Transition: '<S221>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S221>:88' */
                /* Transition: '<S221>:111' */
                /* Call Fsft */
                VeCRDB_y_ECM_LHOM_Trans_W_CallStatus = 2U;

                /* Event: '<S221>:39' */
                /* Transition: '<S221>:113' */
                /* Transition: '<S221>:115' */
                /* Transition: '<S221>:114' */
            }
            else
            {
                /* Transition: '<S221>:110' */
                /* Call Tmot */
                VeCRDB_y_ECM_LHOM_Trans_W_CallStatus = 3U;

                /* Event: '<S221>:40' */
                /* Transition: '<S221>:115' */
                /* Transition: '<S221>:114' */
            }
        }
        else
        {
            /* Transition: '<S221>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_o) == 133)
            {
                /* Transition: '<S221>:95' */
                /* Transition: '<S221>:116' */
                /* Call Nothing */
                VeCRDB_y_ECM_LHOM_Trans_W_CallStatus = 4U;

                /* Transition: '<S221>:114' */
            }
            else
            {
                /* Transition: '<S221>:120' */
                /* Transition: '<S221>:117' */
                /* Call Poke */
                VeCRDB_y_ECM_LHOM_Trans_W_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S204>/Poke' */
                /* FunctionCaller: '<S222>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S222>/Data Type Conversion'
                 */
                /* Event: '<S221>:38' */
                Rte_Call_PokeENGR_i_ECM_LHOM_Trans_PokeENGR_i_ECM_LHOM_Trans
                    ((sint16)CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_E);

                /* End of Outputs for SubSystem: '<S204>/Poke' */
            }
        }
    }

    /* End of Chart: '<S219>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EVRDesiredSetpoint_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EVRDesiredSetpoint_ErrSts'
     */
    /* Transition: '<S221>:107' */
    rtb_TmpSignalConversionAtVeS_d0 = Rte_Read_VeSR1B_U_EVRDesiredSetpoint_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_U_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_EVRDesiredSetpoint_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S226>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EVRDesiredSetpoint_SigSts_Value(&tmpRead_13);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S223>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_13) & 3U) != 0U)
    {
        /* Transition: '<S226>:100' */
        /* Transition: '<S226>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S226>:104' */
        /*  MM */
        if ((((uint32)tmpRead_13) & 4U) != 0U)
        {
            /* Transition: '<S226>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S226>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S226>:110' */
                /* Call Tmot */
                VeSR1B_y_EVRDesiredSetpoint_CallStatus = 3U;

                /* Event: '<S226>:40' */
                /* Transition: '<S226>:115' */
                /* Transition: '<S226>:114' */
            }
        }
        else
        {
            /* Transition: '<S226>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_d0) == 133)
            {
                /* Transition: '<S226>:95' */
                /* Transition: '<S226>:116' */
                /* Call Nothing */
                VeSR1B_y_EVRDesiredSetpoint_CallStatus = 4U;

                /* Transition: '<S226>:114' */
            }
            else
            {
                /* Transition: '<S226>:120' */
                if ((((uint32)tmpRead_13) & 8U) != 0U)
                {
                    /* Transition: '<S226>:122' */
                    /* Transition: '<S226>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S226>:126' */
                }
                else
                {
                    /* Transition: '<S226>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S226>:117' */
                /* Call Poke */
                VeSR1B_y_EVRDesiredSetpoint_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S205>/Poke' */
                /* FunctionCaller: '<S228>/Function Caller' */
                /* Event: '<S226>:38' */
                Rte_Call_PokeIDCR_U_EVRDesVSetP_PokeIDCR_U_EVRDesVSetP
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_U_n, FA_out_fr);

                /* End of Outputs for SubSystem: '<S205>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S226>:111' */
        /* Call Fsft */
        VeSR1B_y_EVRDesiredSetpoint_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S205>/Fsft' */
        /* FunctionCaller: '<S227>/Function Caller' */
        /* Event: '<S226>:39' */
        Rte_Call_FsftIDCR_U_EVRDesVSetP_FsftIDCR_U_EVRDesVSetP();

        /* End of Outputs for SubSystem: '<S205>/Fsft' */
        /* Transition: '<S226>:113' */
        /* Transition: '<S226>:115' */
        /* Transition: '<S226>:114' */
    }

    /* End of Chart: '<S223>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EngTrq_Enbl_Rq_TCM_W_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EngTrq_Enbl_Rq_TCM_W_ErrSts'
     */
    /* Transition: '<S226>:107' */
    rtb_TmpSignalConversionAtVeCR_c =
        Rte_Read_VeCRDB_b_EngTrq_Enbl_Rq_TCM_W_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EngTrq_Enbl_Rq_TCM_W_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S231>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EngTrq_Enbl_Rq_TCM_W_SigSts_Value(&tmpRead_14);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S229>/Chart' */
    if ((((uint32)tmpRead_14) & 3U) != 0U)
    {
        /* Transition: '<S231>:100' */
        /* Transition: '<S231>:103' */
        /* Transition: '<S231>:111' */
        /* Call Fsft */
        VeCRDB_y_EngTrq_Enbl_Rq_TCM_W_CallStatus = 2U;

        /* Event: '<S231>:39' */
        /* Transition: '<S231>:113' */
        /* Transition: '<S231>:115' */
        /* Transition: '<S231>:114' */
    }
    else
    {
        /* Transition: '<S231>:104' */
        /*  MM */
        if ((((uint32)tmpRead_14) & 4U) != 0U)
        {
            /* Transition: '<S231>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S231>:88' */
                /* Transition: '<S231>:111' */
                /* Call Fsft */
                VeCRDB_y_EngTrq_Enbl_Rq_TCM_W_CallStatus = 2U;

                /* Event: '<S231>:39' */
                /* Transition: '<S231>:113' */
                /* Transition: '<S231>:115' */
                /* Transition: '<S231>:114' */
            }
            else
            {
                /* Transition: '<S231>:110' */
                /* Call Tmot */
                VeCRDB_y_EngTrq_Enbl_Rq_TCM_W_CallStatus = 3U;

                /* Event: '<S231>:40' */
                /* Transition: '<S231>:115' */
                /* Transition: '<S231>:114' */
            }
        }
        else
        {
            /* Transition: '<S231>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_c) == 133)
            {
                /* Transition: '<S231>:95' */
                /* Transition: '<S231>:116' */
                /* Call Nothing */
                VeCRDB_y_EngTrq_Enbl_Rq_TCM_W_CallStatus = 4U;

                /* Transition: '<S231>:114' */
            }
            else
            {
                /* Transition: '<S231>:120' */
                /* Transition: '<S231>:117' */
                /* Call Poke */
                VeCRDB_y_EngTrq_Enbl_Rq_TCM_W_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S206>/Poke' */
                /* FunctionCaller: '<S232>/Function Caller' */
                /* Event: '<S231>:38' */
                Rte_Call_PokeENGR_b_EngTrq_Enbl_Rq_TCM_PokeENGR_b_EngTrq_Enbl_Rq_TCM
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_E);

                /* End of Outputs for SubSystem: '<S206>/Poke' */
            }
        }
    }

    /* End of Chart: '<S229>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EngineSpeed_W_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EngineSpeed_W_ErrSts'
     */
    /* Transition: '<S231>:107' */
    rtb_TmpSignalConversionAtVeCR_g = Rte_Read_VeCRDB_d_EngineSpeed_W_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_d_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EngineSpeed_W_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S236>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EngineSpeed_W_SigSts_Value(&tmpRead_15);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S233>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_15) & 3U) != 0U)
    {
        /* Transition: '<S236>:100' */
        /* Transition: '<S236>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S236>:104' */
        /*  MM */
        if ((((uint32)tmpRead_15) & 4U) != 0U)
        {
            /* Transition: '<S236>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S236>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S236>:110' */
                /* Call Tmot */
                VeCRDB_y_EngineSpeed_W_CallStatus = 3U;

                /* Event: '<S236>:40' */
                /* Transition: '<S236>:115' */
                /* Transition: '<S236>:114' */
            }
        }
        else
        {
            /* Transition: '<S236>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_g) == 133)
            {
                /* Transition: '<S236>:95' */
                /* Transition: '<S236>:116' */
                /* Call Nothing */
                VeCRDB_y_EngineSpeed_W_CallStatus = 4U;

                /* Transition: '<S236>:114' */
            }
            else
            {
                /* Transition: '<S236>:120' */
                if ((((uint32)tmpRead_15) & 8U) != 0U)
                {
                    /* Transition: '<S236>:122' */
                    /* Transition: '<S236>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S236>:126' */
                }
                else
                {
                    /* Transition: '<S236>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S236>:117' */
                /* Call Poke */
                VeCRDB_y_EngineSpeed_W_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S207>/Poke' */
                /* FunctionCaller: '<S238>/Function Caller' */
                /* Event: '<S236>:38' */
                Rte_Call_PokeESPR_n_EngineSpeed_PokeESPR_n_EngineSpeed
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_d_E, FA_out_fr);

                /* End of Outputs for SubSystem: '<S207>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S236>:111' */
        /* Call Fsft */
        VeCRDB_y_EngineSpeed_W_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S207>/Fsft' */
        /* FunctionCaller: '<S237>/Function Caller' */
        /* Event: '<S236>:39' */
        Rte_Call_FsftESPR_n_EngineSpeed_FsftESPR_n_EngineSpeed();

        /* End of Outputs for SubSystem: '<S207>/Fsft' */
        /* Transition: '<S236>:113' */
        /* Transition: '<S236>:115' */
        /* Transition: '<S236>:114' */
    }

    /* End of Chart: '<S233>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_Engine_Stall_Detected_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_Engine_Stall_Detected_ErrSts'
     */
    /* Transition: '<S236>:107' */
    rtb_TmpSignalConversionAtVeCR_d =
        Rte_Read_VeCRDB_b_Engine_Stall_Detected_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_Engine_Stall_Detected_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S241>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_Engine_Stall_Detected_SigSts_Value(&tmpRead_16);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S239>/Chart' */
    if ((((uint32)tmpRead_16) & 3U) != 0U)
    {
        /* Transition: '<S241>:100' */
        /* Transition: '<S241>:103' */
        /* Transition: '<S241>:111' */
        /* Call Fsft */
        VeCRDB_y_Engine_Stall_Detected_CallStatus = 2U;

        /* Event: '<S241>:39' */
        /* Transition: '<S241>:113' */
        /* Transition: '<S241>:115' */
        /* Transition: '<S241>:114' */
    }
    else
    {
        /* Transition: '<S241>:104' */
        /*  MM */
        if ((((uint32)tmpRead_16) & 4U) != 0U)
        {
            /* Transition: '<S241>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S241>:88' */
                /* Transition: '<S241>:111' */
                /* Call Fsft */
                VeCRDB_y_Engine_Stall_Detected_CallStatus = 2U;

                /* Event: '<S241>:39' */
                /* Transition: '<S241>:113' */
                /* Transition: '<S241>:115' */
                /* Transition: '<S241>:114' */
            }
            else
            {
                /* Transition: '<S241>:110' */
                /* Call Tmot */
                VeCRDB_y_Engine_Stall_Detected_CallStatus = 3U;

                /* Event: '<S241>:40' */
                /* Transition: '<S241>:115' */
                /* Transition: '<S241>:114' */
            }
        }
        else
        {
            /* Transition: '<S241>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_d) == 133)
            {
                /* Transition: '<S241>:95' */
                /* Transition: '<S241>:116' */
                /* Call Nothing */
                VeCRDB_y_Engine_Stall_Detected_CallStatus = 4U;

                /* Transition: '<S241>:114' */
            }
            else
            {
                /* Transition: '<S241>:120' */
                /* Transition: '<S241>:117' */
                /* Call Poke */
                VeCRDB_y_Engine_Stall_Detected_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S208>/Poke' */
                /* FunctionCaller: '<S242>/Function Caller' */
                /* Event: '<S241>:38' */
                Rte_Call_PokeENGR_b_EngineStallDetected_PokeENGR_b_EngineStallDetected
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_i);

                /* End of Outputs for SubSystem: '<S208>/Poke' */
            }
        }
    }

    /* End of Chart: '<S239>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EssEngSt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EssEngSt_ErrSts'
     */
    /* Transition: '<S241>:107' */
    rtb_TmpSignalConversionAtVeCR_p = Rte_Read_VeCRDB_y_EssEngSt_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EssEngSt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S245>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EssEngSt_SigSts_Value(&tmpRead_17);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S243>/Chart' */
    if ((((uint32)tmpRead_17) & 3U) != 0U)
    {
        /* Transition: '<S245>:100' */
        /* Transition: '<S245>:103' */
        /* Transition: '<S245>:111' */
        /* Call Fsft */
        VeCRDB_y_EssEngSt_CallStatus = 2U;

        /* Event: '<S245>:39' */
        /* Transition: '<S245>:113' */
        /* Transition: '<S245>:115' */
        /* Transition: '<S245>:114' */
    }
    else
    {
        /* Transition: '<S245>:104' */
        /*  MM */
        if ((((uint32)tmpRead_17) & 4U) != 0U)
        {
            /* Transition: '<S245>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S245>:88' */
                /* Transition: '<S245>:111' */
                /* Call Fsft */
                VeCRDB_y_EssEngSt_CallStatus = 2U;

                /* Event: '<S245>:39' */
                /* Transition: '<S245>:113' */
                /* Transition: '<S245>:115' */
                /* Transition: '<S245>:114' */
            }
            else
            {
                /* Transition: '<S245>:110' */
                /* Call Tmot */
                VeCRDB_y_EssEngSt_CallStatus = 3U;

                /* Event: '<S245>:40' */
                /* Transition: '<S245>:115' */
                /* Transition: '<S245>:114' */
            }
        }
        else
        {
            /* Transition: '<S245>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_p) == 133)
            {
                /* Transition: '<S245>:95' */
                /* Transition: '<S245>:116' */
                /* Call Nothing */
                VeCRDB_y_EssEngSt_CallStatus = 4U;

                /* Transition: '<S245>:114' */
            }
            else
            {
                /* Transition: '<S245>:120' */
                /* Transition: '<S245>:117' */
                /* Call Poke */
                VeCRDB_y_EssEngSt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S209>/Poke' */
                /* FunctionCaller: '<S246>/Function Caller' */
                /* Event: '<S245>:38' */
                Rte_Call_PokeENGR_e_ESSEngSt_PokeENGR_e_ESSEngSt
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_o);

                /* End of Outputs for SubSystem: '<S209>/Poke' */
            }
        }
    }

    /* End of Chart: '<S243>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EssEngStopIsNotAllwd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EssEngStopIsNotAllwd_ErrSts'
     */
    /* Transition: '<S245>:107' */
    rtb_TmpSignalConversionAtVeCR_h =
        Rte_Read_VeCRDB_b_EssEngStopIsNotAllwd_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EssEngStopIsNotAllwd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S250>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EssEngStopIsNotAllwd_SigSts_Value(&tmpRead_18);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S247>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_18) & 3U) != 0U)
    {
        /* Transition: '<S250>:100' */
        /* Transition: '<S250>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S250>:104' */
        /*  MM */
        if ((((uint32)tmpRead_18) & 4U) != 0U)
        {
            /* Transition: '<S250>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S250>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S250>:110' */
                /* Call Tmot */
                VeCRDB_y_EssEngStopIsNotAllwd_CallStatus = 3U;

                /* Event: '<S250>:40' */
                /* Transition: '<S250>:115' */
                /* Transition: '<S250>:114' */
            }
        }
        else
        {
            /* Transition: '<S250>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_h) == 133)
            {
                /* Transition: '<S250>:95' */
                /* Transition: '<S250>:116' */
                /* Call Nothing */
                VeCRDB_y_EssEngStopIsNotAllwd_CallStatus = 4U;

                /* Transition: '<S250>:114' */
            }
            else
            {
                /* Transition: '<S250>:120' */
                /* Transition: '<S250>:117' */
                /* Call Poke */
                VeCRDB_y_EssEngStopIsNotAllwd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S210>/Poke' */
                /* FunctionCaller: '<S252>/Function Caller' incorporates:
                 *  Constant: '<S252>/Constant'
                 */
                /* Event: '<S250>:38' */
                Rte_Call_PokeENGR_b_StpNotAllwd_PokeENGR_b_StpNotAllwd
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_l, false);

                /* End of Outputs for SubSystem: '<S210>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S250>:111' */
        /* Call Fsft */
        VeCRDB_y_EssEngStopIsNotAllwd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S210>/Fsft' */
        /* FunctionCaller: '<S251>/Function Caller' */
        /* Event: '<S250>:39' */
        Rte_Call_FsftENGR_b_StpNotAllwd_FsftENGR_b_StpNotAllwd();

        /* End of Outputs for SubSystem: '<S210>/Fsft' */
        /* Transition: '<S250>:113' */
        /* Transition: '<S250>:115' */
        /* Transition: '<S250>:114' */
    }

    /* End of Chart: '<S247>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EssEngStopIsNotAllwdID_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EssEngStopIsNotAllwdID_ErrSts'
     */
    /* Transition: '<S250>:107' */
    rtb_TmpSignalConversionAtVeCR_k =
        Rte_Read_VeCRDB_y_EssEngStopIsNotAllwdID_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EssEngStopIsNotAllwdID_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S256>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EssEngStopIsNotAllwdID_SigSts_Value(&tmpRead_19);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S253>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_19) & 3U) != 0U)
    {
        /* Transition: '<S256>:100' */
        /* Transition: '<S256>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S256>:104' */
        /*  MM */
        if ((((uint32)tmpRead_19) & 4U) != 0U)
        {
            /* Transition: '<S256>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S256>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S256>:110' */
                /* Call Tmot */
                VeCRDB_y_EssEngStopIsNotAllwdID_CallStatus = 3U;

                /* Event: '<S256>:40' */
                /* Transition: '<S256>:115' */
                /* Transition: '<S256>:114' */
            }
        }
        else
        {
            /* Transition: '<S256>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_k) == 133)
            {
                /* Transition: '<S256>:95' */
                /* Transition: '<S256>:116' */
                /* Call Nothing */
                VeCRDB_y_EssEngStopIsNotAllwdID_CallStatus = 4U;

                /* Transition: '<S256>:114' */
            }
            else
            {
                /* Transition: '<S256>:120' */
                if ((((uint32)tmpRead_19) & 8U) != 0U)
                {
                    /* Transition: '<S256>:122' */
                    /* Transition: '<S256>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S256>:126' */
                }
                else
                {
                    /* Transition: '<S256>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S256>:117' */
                /* Call Poke */
                VeCRDB_y_EssEngStopIsNotAllwdID_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S211>/Poke' */
                /* FunctionCaller: '<S258>/Function Caller' */
                /* Event: '<S256>:38' */
                Rte_Call_PokeENGR_e_StpNotAllwdID_PokeENGR_e_StpNotAllwdID
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_a, FA_out_fr);

                /* End of Outputs for SubSystem: '<S211>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S256>:111' */
        /* Call Fsft */
        VeCRDB_y_EssEngStopIsNotAllwdID_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S211>/Fsft' */
        /* FunctionCaller: '<S257>/Function Caller' */
        /* Event: '<S256>:39' */
        Rte_Call_FsftENGR_b_StpNotAllwdID_FsftENGR_b_StpNotAllwdID();

        /* End of Outputs for SubSystem: '<S211>/Fsft' */
        /* Transition: '<S256>:113' */
        /* Transition: '<S256>:115' */
        /* Transition: '<S256>:114' */
    }

    /* End of Chart: '<S253>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EssEngStrtIsNotAllwd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EssEngStrtIsNotAllwd_ErrSts'
     */
    /* Transition: '<S256>:107' */
    rtb_TmpSignalConversionAtVeC_k3 =
        Rte_Read_VeCRDB_b_EssEngStrtIsNotAllwd_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EssEngStrtIsNotAllwd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S262>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EssEngStrtIsNotAllwd_SigSts_Value(&tmpRead_1a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S259>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1a) & 3U) != 0U)
    {
        /* Transition: '<S262>:100' */
        /* Transition: '<S262>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S262>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1a) & 4U) != 0U)
        {
            /* Transition: '<S262>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S262>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S262>:110' */
                /* Call Tmot */
                VeCRDB_y_EssEngStrtIsNotAllwd_CallStatus = 3U;

                /* Event: '<S262>:40' */
                /* Transition: '<S262>:115' */
                /* Transition: '<S262>:114' */
            }
        }
        else
        {
            /* Transition: '<S262>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_k3) == 133)
            {
                /* Transition: '<S262>:95' */
                /* Transition: '<S262>:116' */
                /* Call Nothing */
                VeCRDB_y_EssEngStrtIsNotAllwd_CallStatus = 4U;

                /* Transition: '<S262>:114' */
            }
            else
            {
                /* Transition: '<S262>:120' */
                /* Transition: '<S262>:117' */
                /* Call Poke */
                VeCRDB_y_EssEngStrtIsNotAllwd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S212>/Poke' */
                /* FunctionCaller: '<S264>/Function Caller' incorporates:
                 *  Constant: '<S264>/Constant'
                 */
                /* Event: '<S262>:38' */
                Rte_Call_PokeENGR_b_StrtNotAllwd_PokeENGR_b_StrtNotAllwd
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_k, false);

                /* End of Outputs for SubSystem: '<S212>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S262>:111' */
        /* Call Fsft */
        VeCRDB_y_EssEngStrtIsNotAllwd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S212>/Fsft' */
        /* FunctionCaller: '<S263>/Function Caller' */
        /* Event: '<S262>:39' */
        Rte_Call_FsftENGR_b_StrtNotAllwd_FsftENGR_b_StrtNotAllwd();

        /* End of Outputs for SubSystem: '<S212>/Fsft' */
        /* Transition: '<S262>:113' */
        /* Transition: '<S262>:115' */
        /* Transition: '<S262>:114' */
    }

    /* End of Chart: '<S259>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EssEngStrtIsNotAllwdID_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EssEngStrtIsNotAllwdID_ErrSts'
     */
    /* Transition: '<S262>:107' */
    rtb_TmpSignalConversionAtVeCR_n =
        Rte_Read_VeCRDB_y_EssEngStrtIsNotAllwdID_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EssEngStrtIsNotAllwdID_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S268>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EssEngStrtIsNotAllwdID_SigSts_Value(&tmpRead_1b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S265>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1b) & 3U) != 0U)
    {
        /* Transition: '<S268>:100' */
        /* Transition: '<S268>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S268>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1b) & 4U) != 0U)
        {
            /* Transition: '<S268>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S268>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S268>:110' */
                /* Call Tmot */
                VeCRDB_y_EssEngStrtIsNotAllwdID_CallStatus = 3U;

                /* Event: '<S268>:40' */
                /* Transition: '<S268>:115' */
                /* Transition: '<S268>:114' */
            }
        }
        else
        {
            /* Transition: '<S268>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_n) == 133)
            {
                /* Transition: '<S268>:95' */
                /* Transition: '<S268>:116' */
                /* Call Nothing */
                VeCRDB_y_EssEngStrtIsNotAllwdID_CallStatus = 4U;

                /* Transition: '<S268>:114' */
            }
            else
            {
                /* Transition: '<S268>:120' */
                if ((((uint32)tmpRead_1b) & 8U) != 0U)
                {
                    /* Transition: '<S268>:122' */
                    /* Transition: '<S268>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S268>:126' */
                }
                else
                {
                    /* Transition: '<S268>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S268>:117' */
                /* Call Poke */
                VeCRDB_y_EssEngStrtIsNotAllwdID_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S213>/Poke' */
                /* FunctionCaller: '<S270>/Function Caller' */
                /* Event: '<S268>:38' */
                Rte_Call_PokeENGR_e_StrtNotAllwdID_PokeENGR_e_StrtNotAllwdID
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_y_i, FA_out_fr);

                /* End of Outputs for SubSystem: '<S213>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S268>:111' */
        /* Call Fsft */
        VeCRDB_y_EssEngStrtIsNotAllwdID_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S213>/Fsft' */
        /* FunctionCaller: '<S269>/Function Caller' */
        /* Event: '<S268>:39' */
        Rte_Call_FsftENGR_b_StrtNotAllwdID_FsftENGR_b_StrtNotAllwdID();

        /* End of Outputs for SubSystem: '<S213>/Fsft' */
        /* Transition: '<S268>:113' */
        /* Transition: '<S268>:115' */
        /* Transition: '<S268>:114' */
    }

    /* End of Chart: '<S265>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_LV12PwrFreeRq_W_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_LV12PwrFreeRq_W_ErrSts'
     */
    /* Transition: '<S268>:107' */
    rtb_TmpSignalConversionAtVeC_hs = Rte_Read_VeCRDB_b_LV12PwrFreeRq_W_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_L);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_LV12PwrFreeRq_W_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S273>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_LV12PwrFreeRq_W_SigSts_Value(&tmpRead_1c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S271>/Chart' */
    if ((((uint32)tmpRead_1c) & 3U) != 0U)
    {
        /* Transition: '<S273>:100' */
        /* Transition: '<S273>:103' */
        /* Transition: '<S273>:111' */
        /* Call Fsft */
        VeCRDB_y_LV12PwrFreeRq_W_CallStatus = 2U;

        /* Event: '<S273>:39' */
        /* Transition: '<S273>:113' */
        /* Transition: '<S273>:115' */
        /* Transition: '<S273>:114' */
    }
    else
    {
        /* Transition: '<S273>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1c) & 4U) != 0U)
        {
            /* Transition: '<S273>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S273>:88' */
                /* Transition: '<S273>:111' */
                /* Call Fsft */
                VeCRDB_y_LV12PwrFreeRq_W_CallStatus = 2U;

                /* Event: '<S273>:39' */
                /* Transition: '<S273>:113' */
                /* Transition: '<S273>:115' */
                /* Transition: '<S273>:114' */
            }
            else
            {
                /* Transition: '<S273>:110' */
                /* Call Tmot */
                VeCRDB_y_LV12PwrFreeRq_W_CallStatus = 3U;

                /* Event: '<S273>:40' */
                /* Transition: '<S273>:115' */
                /* Transition: '<S273>:114' */
            }
        }
        else
        {
            /* Transition: '<S273>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hs) == 133)
            {
                /* Transition: '<S273>:95' */
                /* Transition: '<S273>:116' */
                /* Call Nothing */
                VeCRDB_y_LV12PwrFreeRq_W_CallStatus = 4U;

                /* Transition: '<S273>:114' */
            }
            else
            {
                /* Transition: '<S273>:120' */
                /* Transition: '<S273>:117' */
                /* Call Poke */
                VeCRDB_y_LV12PwrFreeRq_W_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S214>/Poke' */
                /* FunctionCaller: '<S274>/Function Caller' */
                /* Event: '<S273>:38' */
                Rte_Call_PokeENGR_b_LV12PwrFreeRq_PokeENGR_b_LV12PwrFreeRq
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCRDB_b_L);

                /* End of Outputs for SubSystem: '<S214>/Poke' */
            }
        }
    }

    /* End of Chart: '<S271>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_FOTA_Install_Type_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_FOTA_Install_Type_ErrSts'
     */
    /* Transition: '<S273>:107' */
    rtb_TmpSignalConversionAtVeS_oq = Rte_Read_VeSR1B_y_FOTA_Install_Type_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_F);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_FOTA_Install_Type_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S280>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_FOTA_Install_Type_SigSts_Value(&tmpRead_1d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S277>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1d) & 3U) != 0U)
    {
        /* Transition: '<S280>:100' */
        /* Transition: '<S280>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S280>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1d) & 4U) != 0U)
        {
            /* Transition: '<S280>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S280>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S280>:110' */
                /* Call Tmot */
                VeSR1B_y_FOTA_Install_Type_CallStatus = 3U;

                /* Event: '<S280>:40' */
                /* Transition: '<S280>:115' */
                /* Transition: '<S280>:114' */
            }
        }
        else
        {
            /* Transition: '<S280>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_oq) == 133)
            {
                /* Transition: '<S280>:95' */
                /* Transition: '<S280>:116' */
                /* Call Nothing */
                VeSR1B_y_FOTA_Install_Type_CallStatus = 4U;

                /* Transition: '<S280>:114' */
            }
            else
            {
                /* Transition: '<S280>:120' */
                /* Transition: '<S280>:117' */
                /* Call Poke */
                VeSR1B_y_FOTA_Install_Type_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S275>/Poke' */
                /* FunctionCaller: '<S282>/Function Caller' */
                /* Event: '<S280>:38' */
                Rte_Call_PokeCITR_e_FOTA_Install_Type_PokeCITR_e_FOTA_Install_Type
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_F);

                /* End of Outputs for SubSystem: '<S275>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S280>:111' */
        /* Call Fsft */
        VeSR1B_y_FOTA_Install_Type_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S275>/Fsft' */
        /* FunctionCaller: '<S281>/Function Caller' */
        /* Event: '<S280>:39' */
        Rte_Call_FsftCITR_e_FOTA_Install_Type_FsftCITR_e_FOTA_Install_Type();

        /* End of Outputs for SubSystem: '<S275>/Fsft' */
        /* Transition: '<S280>:113' */
        /* Transition: '<S280>:115' */
        /* Transition: '<S280>:114' */
    }

    /* End of Chart: '<S277>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_FOTA_Installation_Sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_FOTA_Installation_Sts_ErrSts'
     */
    /* Transition: '<S280>:107' */
    rtb_TmpSignalConversionAtVeS_gq =
        Rte_Read_VeSR1B_y_FOTA_Installation_Sts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ea);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_FOTA_Installation_Sts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S285>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_FOTA_Installation_Sts_SigSts_Value(&tmpRead_1e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S283>/Chart' */
    if ((((uint32)tmpRead_1e) & 3U) != 0U)
    {
        /* Transition: '<S285>:100' */
        /* Transition: '<S285>:103' */
        /* Transition: '<S285>:111' */
        /* Call Fsft */
        VeSR1B_y_FOTA_Installation_Sts_CallStatus = 2U;

        /* Event: '<S285>:39' */
        /* Transition: '<S285>:113' */
        /* Transition: '<S285>:115' */
        /* Transition: '<S285>:114' */
    }
    else
    {
        /* Transition: '<S285>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1e) & 4U) != 0U)
        {
            /* Transition: '<S285>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S285>:88' */
                /* Transition: '<S285>:111' */
                /* Call Fsft */
                VeSR1B_y_FOTA_Installation_Sts_CallStatus = 2U;

                /* Event: '<S285>:39' */
                /* Transition: '<S285>:113' */
                /* Transition: '<S285>:115' */
                /* Transition: '<S285>:114' */
            }
            else
            {
                /* Transition: '<S285>:110' */
                /* Call Tmot */
                VeSR1B_y_FOTA_Installation_Sts_CallStatus = 3U;

                /* Event: '<S285>:40' */
                /* Transition: '<S285>:115' */
                /* Transition: '<S285>:114' */
            }
        }
        else
        {
            /* Transition: '<S285>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_gq) == 133)
            {
                /* Transition: '<S285>:95' */
                /* Transition: '<S285>:116' */
                /* Call Nothing */
                VeSR1B_y_FOTA_Installation_Sts_CallStatus = 4U;

                /* Transition: '<S285>:114' */
            }
            else
            {
                /* Transition: '<S285>:120' */
                /* Transition: '<S285>:117' */
                /* Call Poke */
                VeSR1B_y_FOTA_Installation_Sts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S276>/Poke' */
                /* FunctionCaller: '<S286>/Function Caller' */
                /* Event: '<S285>:38' */
                Rte_Call_PokeCITR_e_FOTA_Installation_Status_PokeCITR_e_FOTA_Installation_Status
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ea);

                /* End of Outputs for SubSystem: '<S276>/Poke' */
            }
        }
    }

    /* End of Chart: '<S283>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_CurrBattFailStatus_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_CurrBattFailStatus_ErrSts'
     */
    /* Transition: '<S285>:107' */
    rtb_TmpSignalConversionAtVeSR_b = Rte_Read_VeSR1B_b_CurrBattFailStatus_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_CurrBattFailStatus_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S294>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_CurrBattFailStatus_SigSts_Value(&tmpRead_1f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S291>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1f) & 3U) != 0U)
    {
        /* Transition: '<S294>:100' */
        /* Transition: '<S294>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S294>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1f) & 4U) != 0U)
        {
            /* Transition: '<S294>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S294>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S294>:110' */
                /* Call Tmot */
                VeSR1B_y_CurrBattFailStatus_CallStatus = 3U;

                /* Event: '<S294>:40' */
                /* Transition: '<S294>:115' */
                /* Transition: '<S294>:114' */
            }
        }
        else
        {
            /* Transition: '<S294>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_b) == 133)
            {
                /* Transition: '<S294>:95' */
                /* Transition: '<S294>:116' */
                /* Call Nothing */
                VeSR1B_y_CurrBattFailStatus_CallStatus = 4U;

                /* Transition: '<S294>:114' */
            }
            else
            {
                /* Transition: '<S294>:120' */
                /* Transition: '<S294>:117' */
                /* Call Poke */
                VeSR1B_y_CurrBattFailStatus_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S287>/Poke' */
                /* FunctionCaller: '<S296>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S296>/Data Type Conversion'
                 *  DataTypeConversion: '<S296>/Data Type Conversion1'
                 */
                /* Event: '<S294>:38' */
                Rte_Call_PokeIDCR_e_IBS_Current_Status_PokeIDCR_e_IBS_Current_Status
                    ((TeGENR_e_IBS_Current_Status)
                     CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_o);

                /* End of Outputs for SubSystem: '<S287>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S294>:111' */
        /* Call Fsft */
        VeSR1B_y_CurrBattFailStatus_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S287>/Fsft' */
        /* FunctionCaller: '<S295>/Function Caller' */
        /* Event: '<S294>:39' */
        Rte_Call_FsftIDCR_e_IBS_Current_Status_FsftIDCR_e_IBS_Current_Status();

        /* End of Outputs for SubSystem: '<S287>/Fsft' */
        /* Transition: '<S294>:113' */
        /* Transition: '<S294>:115' */
        /* Transition: '<S294>:114' */
    }

    /* End of Chart: '<S291>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_IBS3_Ibatt_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_IBS3_Ibatt_ErrSts'
     */
    /* Transition: '<S294>:107' */
    rtb_TmpSignalConversionAtVeS_al = Rte_Read_VeSR1B_I_IBS3_Ibatt_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_I_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_IBS3_Ibatt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S301>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_IBS3_Ibatt_SigSts_Value(&tmpRead_1g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S297>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1g) & 3U) != 0U)
    {
        /* Transition: '<S301>:100' */
        /* Transition: '<S301>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S301>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1g) & 4U) != 0U)
        {
            /* Transition: '<S301>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S301>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S301>:110' */
                /* Call Tmot */
                VeSR1B_y_IBS3_Ibatt_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S288>/Tmot' */
                /* FunctionCaller: '<S304>/Function Caller' */
                /* Event: '<S301>:40' */
                Rte_Call_TmotIDCR_I_IBS_I_Batt_TmotIDCR_I_IBS_I_Batt();

                /* End of Outputs for SubSystem: '<S288>/Tmot' */
                /* Transition: '<S301>:115' */
                /* Transition: '<S301>:114' */
            }
        }
        else
        {
            /* Transition: '<S301>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_al) == 133)
            {
                /* Transition: '<S301>:95' */
                /* Transition: '<S301>:116' */
                /* Call Nothing */
                VeSR1B_y_IBS3_Ibatt_CallStatus = 4U;

                /* Transition: '<S301>:114' */
            }
            else
            {
                /* Transition: '<S301>:120' */
                if ((((uint32)tmpRead_1g) & 8U) != 0U)
                {
                    /* Transition: '<S301>:122' */
                    /* Transition: '<S301>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S301>:126' */
                }
                else
                {
                    /* Transition: '<S301>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S301>:117' */
                /* Call Poke */
                VeSR1B_y_IBS3_Ibatt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S288>/Poke' */
                /* FunctionCaller: '<S303>/Function Caller' */
                /* Event: '<S301>:38' */
                Rte_Call_PokeIDCR_I_IBS_I_Batt_PokeIDCR_I_IBS_I_Batt
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_I_I, FA_out_fr);

                /* End of Outputs for SubSystem: '<S288>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S301>:111' */
        /* Call Fsft */
        VeSR1B_y_IBS3_Ibatt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S288>/Fsft' */
        /* FunctionCaller: '<S302>/Function Caller' */
        /* Event: '<S301>:39' */
        Rte_Call_FsftIDCR_b_IBS_b_Batt_FsftIDCR_b_IBS_b_Batt();

        /* End of Outputs for SubSystem: '<S288>/Fsft' */
        /* Transition: '<S301>:113' */
        /* Transition: '<S301>:115' */
        /* Transition: '<S301>:114' */
    }

    /* End of Chart: '<S297>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_IBS3_Vbatt_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_IBS3_Vbatt_ErrSts'
     */
    /* Transition: '<S301>:107' */
    rtb_TmpSignalConversionAtVeS_io = Rte_Read_VeSR1B_U_IBS3_Vbatt_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_U_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_IBS3_Vbatt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S308>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_IBS3_Vbatt_SigSts_Value(&tmpRead_1h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S305>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1h) & 3U) != 0U)
    {
        /* Transition: '<S308>:100' */
        /* Transition: '<S308>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S308>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1h) & 4U) != 0U)
        {
            /* Transition: '<S308>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S308>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S308>:110' */
                /* Call Tmot */
                VeSR1B_y_IBS3_Vbatt_CallStatus = 3U;

                /* Event: '<S308>:40' */
                /* Transition: '<S308>:115' */
                /* Transition: '<S308>:114' */
            }
        }
        else
        {
            /* Transition: '<S308>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_io) == 133)
            {
                /* Transition: '<S308>:95' */
                /* Transition: '<S308>:116' */
                /* Call Nothing */
                VeSR1B_y_IBS3_Vbatt_CallStatus = 4U;

                /* Transition: '<S308>:114' */
            }
            else
            {
                /* Transition: '<S308>:120' */
                if ((((uint32)tmpRead_1h) & 8U) != 0U)
                {
                    /* Transition: '<S308>:122' */
                    /* Transition: '<S308>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S308>:126' */
                }
                else
                {
                    /* Transition: '<S308>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S308>:117' */
                /* Call Poke */
                VeSR1B_y_IBS3_Vbatt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S289>/Poke' */
                /* FunctionCaller: '<S310>/Function Caller' */
                /* Event: '<S308>:38' */
                Rte_Call_PokeIDCR_U_IBS_BattVolt_PokeIDCR_U_IBS_BattVolt
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_U_I, FA_out_fr);

                /* End of Outputs for SubSystem: '<S289>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S308>:111' */
        /* Call Fsft */
        VeSR1B_y_IBS3_Vbatt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S289>/Fsft' */
        /* FunctionCaller: '<S309>/Function Caller' */
        /* Event: '<S308>:39' */
        Rte_Call_FsftIDCR_U_IBS_BattVolt_FsftIDCR_U_IBS_BattVolt();

        /* End of Outputs for SubSystem: '<S289>/Fsft' */
        /* Transition: '<S308>:113' */
        /* Transition: '<S308>:115' */
        /* Transition: '<S308>:114' */
    }

    /* End of Chart: '<S305>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_VoltBattFailStatus_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_VoltBattFailStatus_ErrSts'
     */
    /* Transition: '<S308>:107' */
    rtb_TmpSignalConversionAtVeS_gx = Rte_Read_VeSR1B_b_VoltBattFailStatus_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_V);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_VoltBattFailStatus_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S313>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_VoltBattFailStatus_SigSts_Value(&tmpRead_1i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S311>/Chart' */
    if ((((uint32)tmpRead_1i) & 3U) != 0U)
    {
        /* Transition: '<S313>:100' */
        /* Transition: '<S313>:103' */
        /* Transition: '<S313>:111' */
        /* Call Fsft */
        VeSR1B_y_VoltBattFailStatus_CallStatus = 2U;

        /* Event: '<S313>:39' */
        /* Transition: '<S313>:113' */
        /* Transition: '<S313>:115' */
        /* Transition: '<S313>:114' */
    }
    else
    {
        /* Transition: '<S313>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1i) & 4U) != 0U)
        {
            /* Transition: '<S313>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S313>:88' */
                /* Transition: '<S313>:111' */
                /* Call Fsft */
                VeSR1B_y_VoltBattFailStatus_CallStatus = 2U;

                /* Event: '<S313>:39' */
                /* Transition: '<S313>:113' */
                /* Transition: '<S313>:115' */
                /* Transition: '<S313>:114' */
            }
            else
            {
                /* Transition: '<S313>:110' */
                /* Call Tmot */
                VeSR1B_y_VoltBattFailStatus_CallStatus = 3U;

                /* Event: '<S313>:40' */
                /* Transition: '<S313>:115' */
                /* Transition: '<S313>:114' */
            }
        }
        else
        {
            /* Transition: '<S313>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_gx) == 133)
            {
                /* Transition: '<S313>:95' */
                /* Transition: '<S313>:116' */
                /* Call Nothing */
                VeSR1B_y_VoltBattFailStatus_CallStatus = 4U;

                /* Transition: '<S313>:114' */
            }
            else
            {
                /* Transition: '<S313>:120' */
                /* Transition: '<S313>:117' */
                /* Call Poke */
                VeSR1B_y_VoltBattFailStatus_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S290>/Poke' */
                /* FunctionCaller: '<S314>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S314>/Data Type Conversion'
                 */
                /* Event: '<S313>:38' */
                Rte_Call_PokeIDCR_e_IBS_BattVoltSts_PokeIDCR_e_IBS_BattVoltSts
                    ((sint16)CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_V);

                /* End of Outputs for SubSystem: '<S290>/Poke' */
            }
        }
    }

    /* End of Chart: '<S311>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_IBS3_SOC_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_IBS3_SOC_ErrSts'
     */
    /* Transition: '<S313>:107' */
    rtb_TmpSignalConversionAtVeS_an = Rte_Read_VeSR1B_Pct_IBS3_SOC_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_Pct);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_IBS3_SOC_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S322>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_IBS3_SOC_SigSts_Value(&tmpRead_1j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S319>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1j) & 3U) != 0U)
    {
        /* Transition: '<S322>:100' */
        /* Transition: '<S322>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S322>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1j) & 4U) != 0U)
        {
            /* Transition: '<S322>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S322>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S322>:110' */
                /* Call Tmot */
                VeSR1B_y_IBS3_SOC_CallStatus = 3U;

                /* Event: '<S322>:40' */
                /* Transition: '<S322>:115' */
                /* Transition: '<S322>:114' */
            }
        }
        else
        {
            /* Transition: '<S322>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_an) == 133)
            {
                /* Transition: '<S322>:95' */
                /* Transition: '<S322>:116' */
                /* Call Nothing */
                VeSR1B_y_IBS3_SOC_CallStatus = 4U;

                /* Transition: '<S322>:114' */
            }
            else
            {
                /* Transition: '<S322>:120' */
                if ((((uint32)tmpRead_1j) & 8U) != 0U)
                {
                    /* Transition: '<S322>:122' */
                    /* Transition: '<S322>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S322>:126' */
                }
                else
                {
                    /* Transition: '<S322>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S322>:117' */
                /* Call Poke */
                VeSR1B_y_IBS3_SOC_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S315>/Poke' */
                /* FunctionCaller: '<S324>/Function Caller' */
                /* Event: '<S322>:38' */
                Rte_Call_PokeIDCR_Pct_IBS_BattSOC_PokeIDCR_Pct_IBS_BattSOC
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_Pct, FA_out_fr);

                /* End of Outputs for SubSystem: '<S315>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S322>:111' */
        /* Call Fsft */
        VeSR1B_y_IBS3_SOC_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S315>/Fsft' */
        /* FunctionCaller: '<S323>/Function Caller' */
        /* Event: '<S322>:39' */
        Rte_Call_FsftIDCR_Pct_IBS_BattSOC_FsftIDCR_Pct_IBS_BattSOC();

        /* End of Outputs for SubSystem: '<S315>/Fsft' */
        /* Transition: '<S322>:113' */
        /* Transition: '<S322>:115' */
        /* Transition: '<S322>:114' */
    }

    /* End of Chart: '<S319>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_IBS3_SOC_Accuracy_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_IBS3_SOC_Accuracy_ErrSts'
     */
    /* Transition: '<S322>:107' */
    rtb_TmpSignalConversionAtVeS_mh = Rte_Read_VeSR1B_b_IBS3_SOC_Accuracy_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_IBS3_SOC_Accuracy_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S327>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_IBS3_SOC_Accuracy_SigSts_Value(&tmpRead_1k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S325>/Chart' */
    if ((((uint32)tmpRead_1k) & 3U) != 0U)
    {
        /* Transition: '<S327>:100' */
        /* Transition: '<S327>:103' */
        /* Transition: '<S327>:111' */
        /* Call Fsft */
        VeSR1B_y_IBS3_SOC_Accuracy_CallStatus = 2U;

        /* Event: '<S327>:39' */
        /* Transition: '<S327>:113' */
        /* Transition: '<S327>:115' */
        /* Transition: '<S327>:114' */
    }
    else
    {
        /* Transition: '<S327>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1k) & 4U) != 0U)
        {
            /* Transition: '<S327>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S327>:88' */
                /* Transition: '<S327>:111' */
                /* Call Fsft */
                VeSR1B_y_IBS3_SOC_Accuracy_CallStatus = 2U;

                /* Event: '<S327>:39' */
                /* Transition: '<S327>:113' */
                /* Transition: '<S327>:115' */
                /* Transition: '<S327>:114' */
            }
            else
            {
                /* Transition: '<S327>:110' */
                /* Call Tmot */
                VeSR1B_y_IBS3_SOC_Accuracy_CallStatus = 3U;

                /* Event: '<S327>:40' */
                /* Transition: '<S327>:115' */
                /* Transition: '<S327>:114' */
            }
        }
        else
        {
            /* Transition: '<S327>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_mh) == 133)
            {
                /* Transition: '<S327>:95' */
                /* Transition: '<S327>:116' */
                /* Call Nothing */
                VeSR1B_y_IBS3_SOC_Accuracy_CallStatus = 4U;

                /* Transition: '<S327>:114' */
            }
            else
            {
                /* Transition: '<S327>:120' */
                /* Transition: '<S327>:117' */
                /* Call Poke */
                VeSR1B_y_IBS3_SOC_Accuracy_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S316>/Poke' */
                /* FunctionCaller: '<S328>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S328>/Data Type Conversion'
                 */
                /* Event: '<S327>:38' */
                Rte_Call_PokeIDCR_e_IBS_BattSocAcc_PokeIDCR_e_IBS_BattSocAcc
                    ((sint16)CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_I);

                /* End of Outputs for SubSystem: '<S316>/Poke' */
            }
        }
    }

    /* End of Chart: '<S325>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_IBS3_T_BATT_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_IBS3_T_BATT_ErrSts'
     */
    /* Transition: '<S327>:107' */
    rtb_TmpSignalConversionAtVeS_ew = Rte_Read_VeSR1B_T_IBS3_T_BATT_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_IBS3_T_BATT_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S333>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_IBS3_T_BATT_SigSts_Value(&tmpRead_1l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S329>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1l) & 3U) != 0U)
    {
        /* Transition: '<S333>:100' */
        /* Transition: '<S333>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S333>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1l) & 4U) != 0U)
        {
            /* Transition: '<S333>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S333>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S333>:110' */
                /* Call Tmot */
                VeSR1B_y_IBS3_y_BATT_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S317>/Tmot' */
                /* FunctionCaller: '<S336>/Function Caller' */
                /* Event: '<S333>:40' */
                Rte_Call_TmotIDCR_b_IBS_BattTemp_TmotIDCR_b_IBS_BattTemp();

                /* End of Outputs for SubSystem: '<S317>/Tmot' */
                /* Transition: '<S333>:115' */
                /* Transition: '<S333>:114' */
            }
        }
        else
        {
            /* Transition: '<S333>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ew) == 133)
            {
                /* Transition: '<S333>:95' */
                /* Transition: '<S333>:116' */
                /* Call Nothing */
                VeSR1B_y_IBS3_y_BATT_CallStatus = 4U;

                /* Transition: '<S333>:114' */
            }
            else
            {
                /* Transition: '<S333>:120' */
                if ((((uint32)tmpRead_1l) & 8U) != 0U)
                {
                    /* Transition: '<S333>:122' */
                    /* Transition: '<S333>:125' */
                    FA_out_fr = true;

                    /* Transition: '<S333>:126' */
                }
                else
                {
                    /* Transition: '<S333>:124' */
                    FA_out_fr = false;
                }

                /* Transition: '<S333>:117' */
                /* Call Poke */
                VeSR1B_y_IBS3_y_BATT_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S317>/Poke' */
                /* FunctionCaller: '<S335>/Function Caller' */
                /* Event: '<S333>:38' */
                Rte_Call_PokeIDCR_t_IBS_BattTemp_PokeIDCR_t_IBS_BattTemp
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_I, FA_out_fr);

                /* End of Outputs for SubSystem: '<S317>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S333>:111' */
        /* Call Fsft */
        VeSR1B_y_IBS3_y_BATT_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S317>/Fsft' */
        /* FunctionCaller: '<S334>/Function Caller' */
        /* Event: '<S333>:39' */
        Rte_Call_FsftIDCR_b_IBS_BattTemp_FsftIDCR_b_IBS_BattTemp();

        /* End of Outputs for SubSystem: '<S317>/Fsft' */
        /* Transition: '<S333>:113' */
        /* Transition: '<S333>:115' */
        /* Transition: '<S333>:114' */
    }

    /* End of Chart: '<S329>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_IBS3_TempFailStatus_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_IBS3_TempFailStatus_ErrSts'
     */
    /* Transition: '<S333>:107' */
    rtb_TmpSignalConversionAtVeS_dd =
        Rte_Read_VeSR1B_b_IBS3_TempFailStatus_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_IBS3_TempFailStatus_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S339>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_IBS3_TempFailStatus_SigSts_Value(&tmpRead_1m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S337>/Chart' */
    if ((((uint32)tmpRead_1m) & 3U) != 0U)
    {
        /* Transition: '<S339>:100' */
        /* Transition: '<S339>:103' */
        /* Transition: '<S339>:111' */
        /* Call Fsft */
        VeSR1B_y_IBS3_TempFailStatus_CallStatus = 2U;

        /* Event: '<S339>:39' */
        /* Transition: '<S339>:113' */
        /* Transition: '<S339>:115' */
        /* Transition: '<S339>:114' */
    }
    else
    {
        /* Transition: '<S339>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1m) & 4U) != 0U)
        {
            /* Transition: '<S339>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S339>:88' */
                /* Transition: '<S339>:111' */
                /* Call Fsft */
                VeSR1B_y_IBS3_TempFailStatus_CallStatus = 2U;

                /* Event: '<S339>:39' */
                /* Transition: '<S339>:113' */
                /* Transition: '<S339>:115' */
                /* Transition: '<S339>:114' */
            }
            else
            {
                /* Transition: '<S339>:110' */
                /* Call Tmot */
                VeSR1B_y_IBS3_TempFailStatus_CallStatus = 3U;

                /* Event: '<S339>:40' */
                /* Transition: '<S339>:115' */
                /* Transition: '<S339>:114' */
            }
        }
        else
        {
            /* Transition: '<S339>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_dd) == 133)
            {
                /* Transition: '<S339>:95' */
                /* Transition: '<S339>:116' */
                /* Call Nothing */
                VeSR1B_y_IBS3_TempFailStatus_CallStatus = 4U;

                /* Transition: '<S339>:114' */
            }
            else
            {
                /* Transition: '<S339>:120' */
                /* Transition: '<S339>:117' */
                /* Call Poke */
                VeSR1B_y_IBS3_TempFailStatus_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S318>/Poke' */
                /* FunctionCaller: '<S340>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S340>/Data Type Conversion'
                 *  DataTypeConversion: '<S340>/Data Type Conversion1'
                 */
                /* Event: '<S339>:38' */
                Rte_Call_PokeIDCR_e_IBS_BattTempSts_PokeIDCR_e_IBS_BattTempSts
                    ((TeGENR_e_IBS_BattTempSts)
                     CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_m);

                /* End of Outputs for SubSystem: '<S318>/Poke' */
            }
        }
    }

    /* End of Chart: '<S337>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_IMPACTCommand_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_IMPACTCommand_FD3_ErrSts'
     */
    /* Transition: '<S339>:107' */
    rtb_TmpSignalConversionAtVeS_le = Rte_Read_VeSR1B_b_IMPACTCommand_FD3_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__hv);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_IMPACTCommand_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S346>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_IMPACTCommand_FD3_SigSts_Value(&tmpRead_1n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S343>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1n) & 3U) != 0U)
    {
        /* Transition: '<S346>:100' */
        /* Transition: '<S346>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S346>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1n) & 4U) != 0U)
        {
            /* Transition: '<S346>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S346>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S346>:110' */
                /* Call Tmot */
                VeSR1B_y_IMPACTCommand_FD3_CallStatus = 3U;

                /* Event: '<S346>:40' */
                /* Transition: '<S346>:115' */
                /* Transition: '<S346>:114' */
            }
        }
        else
        {
            /* Transition: '<S346>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_le) == 133)
            {
                /* Transition: '<S346>:95' */
                /* Transition: '<S346>:116' */
                /* Call Nothing */
                VeSR1B_y_IMPACTCommand_FD3_CallStatus = 4U;

                /* Transition: '<S346>:114' */
            }
            else
            {
                /* Transition: '<S346>:120' */
                /* Transition: '<S346>:117' */
                /* Call Poke */
                VeSR1B_y_IMPACTCommand_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S341>/Poke' */
                /* FunctionCaller: '<S348>/Function Caller' */
                /* Event: '<S346>:38' */
                Rte_Call_PokeIMPR_b_VehImpactDetected_C2_PokeIMPR_b_VehImpactDetected_C2
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__hv);

                /* End of Outputs for SubSystem: '<S341>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S346>:111' */
        /* Call Fsft */
        VeSR1B_y_IMPACTCommand_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S341>/Fsft' */
        /* FunctionCaller: '<S347>/Function Caller' */
        /* Event: '<S346>:39' */
        Rte_Call_FsftIMPR_b_VehImpactDetected_C2_FsftIMPR_b_VehImpactDetected_C2
            ();

        /* End of Outputs for SubSystem: '<S341>/Fsft' */
        /* Transition: '<S346>:113' */
        /* Transition: '<S346>:115' */
        /* Transition: '<S346>:114' */
    }

    /* End of Chart: '<S343>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_IMPACTConfirm_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_IMPACTConfirm_FD3_ErrSts'
     */
    /* Transition: '<S346>:107' */
    rtb_TmpSignalConversionAtVeS_pr = Rte_Read_VeSR1B_b_IMPACTConfirm_FD3_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__m4);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_IMPACTConfirm_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S352>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_IMPACTConfirm_FD3_SigSts_Value(&tmpRead_1o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S349>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1o) & 3U) != 0U)
    {
        /* Transition: '<S352>:100' */
        /* Transition: '<S352>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S352>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1o) & 4U) != 0U)
        {
            /* Transition: '<S352>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S352>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S352>:110' */
                /* Call Tmot */
                VeSR1B_y_IMPACTConfirm_FD3_CallStatus = 3U;

                /* Event: '<S352>:40' */
                /* Transition: '<S352>:115' */
                /* Transition: '<S352>:114' */
            }
        }
        else
        {
            /* Transition: '<S352>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_pr) == 133)
            {
                /* Transition: '<S352>:95' */
                /* Transition: '<S352>:116' */
                /* Call Nothing */
                VeSR1B_y_IMPACTConfirm_FD3_CallStatus = 4U;

                /* Transition: '<S352>:114' */
            }
            else
            {
                /* Transition: '<S352>:120' */
                /* Transition: '<S352>:117' */
                /* Call Poke */
                VeSR1B_y_IMPACTConfirm_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S342>/Poke' */
                /* FunctionCaller: '<S354>/Function Caller' */
                /* Event: '<S352>:38' */
                Rte_Call_PokeIMPR_b_ImpactToggle_C2_PokeIMPR_b_ImpactToggle_C2
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__m4);

                /* End of Outputs for SubSystem: '<S342>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S352>:111' */
        /* Call Fsft */
        VeSR1B_y_IMPACTConfirm_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S342>/Fsft' */
        /* FunctionCaller: '<S353>/Function Caller' */
        /* Event: '<S352>:39' */
        Rte_Call_FsftIMPR_b_ImpactToggle_C2_FsftIMPR_b_ImpactToggle_C2();

        /* End of Outputs for SubSystem: '<S342>/Fsft' */
        /* Transition: '<S352>:113' */
        /* Transition: '<S352>:115' */
        /* Transition: '<S352>:114' */
    }

    /* End of Chart: '<S349>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_TotalOdometer_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_TotalOdometer_FD3_ErrSts'
     */
    /* Transition: '<S352>:107' */
    rtb_TmpSignalConversionAtVeCANR =
        Rte_Read_VeCANR_l_TotalOdometer_FD3_VeCANR_l_TotalOdometer_FD3
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_l_T);

VeCANR_l_TotalOdometer_FD3_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_l_T;

VeCANR_l_TotalOdometer_FD3_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_l_T;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_TotalOdometer_FD3TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S359>:1' */
    (void)Rte_Read_VeCANR_b_TotalOdometer_FD3TO_VeCANR_b_TotalOdometer_FD3TO
        (&FA_out_ec);

VeCANR_b_TotalOdometer_FD3TO_CR1B_BLUEN_ac_Test_1 = FA_out_ec;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S356>/Chart' */
    if (FA_out_ec)
    {
        /* Transition: '<S359>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S359>:6' */
            /* Transition: '<S359>:25' */
            /* Call Fsft */
            VeCANR_y_TotalOdometer_FD3_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S355>/Fsft' */
            /* FunctionCaller: '<S360>/Function Caller' */
            /* Event: '<S359>:39' */
            Rte_Call_FsftPLTR_l_Odometer_Km_FsftPLTR_l_Odometer_Km();

            /* End of Outputs for SubSystem: '<S355>/Fsft' */
            /* Transition: '<S359>:29' */
        }
        else
        {
            /* Transition: '<S359>:30' */
            /* Call Tmot */
            VeCANR_y_TotalOdometer_FD3_CallStatus = 3U;

            /* Event: '<S359>:40' */
        }

        /* Transition: '<S359>:36' */
        /* Transition: '<S359>:23' */
    }
    else
    {
        /* Transition: '<S359>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCANR) == 133)
        {
            /* Transition: '<S359>:33' */
            /* Transition: '<S359>:35' */
            /* Call Nothing */
            VeCANR_y_TotalOdometer_FD3_CallStatus = 4U;

            /* Transition: '<S359>:23' */
        }
        else
        {
            /* Transition: '<S359>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeCANR) == 1)
            {
                /* Transition: '<S359>:48' */
                /* Transition: '<S359>:53' */
                FA_out_ec = true;

                /* Transition: '<S359>:56' */
            }
            else
            {
                /* Transition: '<S359>:52' */
            }

            /* Transition: '<S359>:37' */
            /* Call Poke */
            VeCANR_y_TotalOdometer_FD3_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S355>/Poke' */
            /* FunctionCaller: '<S361>/Function Caller' */
            /* Event: '<S359>:38' */
            Rte_Call_PokePLTR_l_Odometer_Km_PokePLTR_l_Odometer_Km
                (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_l_T, FA_out_ec);

            /* End of Outputs for SubSystem: '<S355>/Poke' */
        }
    }

    /* End of Chart: '<S356>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_DisplayedSpeedLimSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DisplayedSpeedLimSts_ErrSts'
     */
    /* Transition: '<S359>:19' */
    rtb_TmpSignalConversionAtVeS_o3 =
        Rte_Read_VeSR1B_y_DisplayedSpeedLimSts_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_DisplayedSpeedLimSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S366>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DisplayedSpeedLimSts_SigSts_Value(&tmpRead_1p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S363>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1p) & 3U) != 0U)
    {
        /* Transition: '<S366>:100' */
        /* Transition: '<S366>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S366>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1p) & 4U) != 0U)
        {
            /* Transition: '<S366>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S366>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S366>:110' */
                /* Call Tmot */
                VeSR1B_y_DisplayedSpeedLimSts_CallStatus = 3U;

                /* Event: '<S366>:40' */
                /* Transition: '<S366>:115' */
                /* Transition: '<S366>:114' */
            }
        }
        else
        {
            /* Transition: '<S366>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_o3) == 133)
            {
                /* Transition: '<S366>:95' */
                /* Transition: '<S366>:116' */
                /* Call Nothing */
                VeSR1B_y_DisplayedSpeedLimSts_CallStatus = 4U;

                /* Transition: '<S366>:114' */
            }
            else
            {
                /* Transition: '<S366>:120' */
                /* Transition: '<S366>:117' */
                /* Call Poke */
                VeSR1B_y_DisplayedSpeedLimSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S362>/Poke' */
                /* FunctionCaller: '<S368>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S368>/Data Type Conversion'
                 */
                /* Event: '<S366>:38' */
                Rte_Call_PokeASLR_e_DsplydSpdLimSts_PokeASLR_e_DsplydSpdLimSts
                    ((sint16)CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_f);

                /* End of Outputs for SubSystem: '<S362>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S366>:111' */
        /* Call Fsft */
        VeSR1B_y_DisplayedSpeedLimSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S362>/Fsft' */
        /* FunctionCaller: '<S367>/Function Caller' */
        /* Event: '<S366>:39' */
        Rte_Call_FsftASLR_b_DsplydSpdLimSts_FsftASLR_b_DsplydSpdLimSts();

        /* End of Outputs for SubSystem: '<S362>/Fsft' */
        /* Transition: '<S366>:113' */
        /* Transition: '<S366>:115' */
        /* Transition: '<S366>:114' */
    }

    /* End of Chart: '<S363>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_PwrLev_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_PwrLev_ErrSts'
     */
    /* Transition: '<S366>:107' */
    rtb_TmpSignalConversionAtVeS_ch = Rte_Read_VeSR1B_y_PwrLev_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ig);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_PwrLev_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S377>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_PwrLev_SigSts_Value(&tmpRead_1q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S373>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1q) & 3U) != 0U)
    {
        /* Transition: '<S377>:100' */
        /* Transition: '<S377>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S377>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1q) & 4U) != 0U)
        {
            /* Transition: '<S377>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S377>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S377>:110' */
                /* Call Tmot */
                VeSR1B_y_PwrLev_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S369>/Tmot' */
                /* FunctionCaller: '<S380>/Function Caller' */
                /* Event: '<S377>:40' */
                Rte_Call_TmotCITR_e_PowerLimitReq_TmotCITR_e_PowerLimitReq();

                /* End of Outputs for SubSystem: '<S369>/Tmot' */
                /* Transition: '<S377>:115' */
                /* Transition: '<S377>:114' */
            }
        }
        else
        {
            /* Transition: '<S377>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ch) == 133)
            {
                /* Transition: '<S377>:95' */
                /* Transition: '<S377>:116' */
                /* Call Nothing */
                VeSR1B_y_PwrLev_CallStatus = 4U;

                /* Transition: '<S377>:114' */
            }
            else
            {
                /* Transition: '<S377>:120' */
                /* Transition: '<S377>:117' */
                /* Call Poke */
                VeSR1B_y_PwrLev_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S369>/Poke' */
                /* FunctionCaller: '<S379>/Function Caller' incorporates:
                 *  Constant: '<S379>/Constant'
                 */
                /* Event: '<S377>:38' */
                Rte_Call_PokeCITR_e_PowerLimit_Req_PokeCITR_e_PowerLimit_Req
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__ig, false);

                /* End of Outputs for SubSystem: '<S369>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S377>:111' */
        /* Call Fsft */
        VeSR1B_y_PwrLev_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S369>/Fsft' */
        /* FunctionCaller: '<S378>/Function Caller' */
        /* Event: '<S377>:39' */
        Rte_Call_FsftCITR_e_PowerLimitReq_FsftCITR_e_PowerLimitReq();

        /* End of Outputs for SubSystem: '<S369>/Fsft' */
        /* Transition: '<S377>:113' */
        /* Transition: '<S377>:115' */
        /* Transition: '<S377>:114' */
    }

    /* End of Chart: '<S373>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_SOC_Max_Lev_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_SOC_Max_Lev_ErrSts'
     */
    /* Transition: '<S377>:107' */
    rtb_TmpSignalConversionAtVe_les = Rte_Read_VeSR1B_b_SOC_Max_Lev_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_SOC_Max_Lev_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S384>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_SOC_Max_Lev_SigSts_Value(&tmpRead_1r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S381>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1r) & 3U) != 0U)
    {
        /* Transition: '<S384>:100' */
        /* Transition: '<S384>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S384>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1r) & 4U) != 0U)
        {
            /* Transition: '<S384>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S384>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S384>:110' */
                /* Call Tmot */
                VeSR1B_y_SOC_Max_Lev_CallStatus = 3U;

                /* Event: '<S384>:40' */
                /* Transition: '<S384>:115' */
                /* Transition: '<S384>:114' */
            }
        }
        else
        {
            /* Transition: '<S384>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_les) == 133)
            {
                /* Transition: '<S384>:95' */
                /* Transition: '<S384>:116' */
                /* Call Nothing */
                VeSR1B_y_SOC_Max_Lev_CallStatus = 4U;

                /* Transition: '<S384>:114' */
            }
            else
            {
                /* Transition: '<S384>:120' */
                /* Transition: '<S384>:117' */
                /* Call Poke */
                VeSR1B_y_SOC_Max_Lev_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S370>/Poke' */
                /* FunctionCaller: '<S386>/Function Caller' */
                /* Event: '<S384>:38' */
                Rte_Call_PokeCITR_b_SOC_Max_Lev_PokeCITR_b_SOC_Max_Lev
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_f);

                /* End of Outputs for SubSystem: '<S370>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S384>:111' */
        /* Call Fsft */
        VeSR1B_y_SOC_Max_Lev_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S370>/Fsft' */
        /* FunctionCaller: '<S385>/Function Caller' */
        /* Event: '<S384>:39' */
        Rte_Call_FsftCITR_b_SOC_Max_Lev_FsftCITR_b_SOC_Max_Lev();

        /* End of Outputs for SubSystem: '<S370>/Fsft' */
        /* Transition: '<S384>:113' */
        /* Transition: '<S384>:115' */
        /* Transition: '<S384>:114' */
    }

    /* End of Chart: '<S381>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_Speed_Unit_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_Speed_Unit_ErrSts'
     */
    /* Transition: '<S384>:107' */
    rtb_TmpSignalConversionAtVeS_in = Rte_Read_VeSR1B_b_Speed_Unit_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__he);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_Speed_Unit_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S389>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Speed_Unit_SigSts_Value(&tmpRead_1s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S387>/Chart' */
    if ((((uint32)tmpRead_1s) & 3U) != 0U)
    {
        /* Transition: '<S389>:100' */
        /* Transition: '<S389>:103' */
        /* Transition: '<S389>:111' */
        /* Call Fsft */
        VeSR1B_y_Speed_Unit_CallStatus = 2U;

        /* Event: '<S389>:39' */
        /* Transition: '<S389>:113' */
        /* Transition: '<S389>:115' */
        /* Transition: '<S389>:114' */
    }
    else
    {
        /* Transition: '<S389>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1s) & 4U) != 0U)
        {
            /* Transition: '<S389>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S389>:88' */
                /* Transition: '<S389>:111' */
                /* Call Fsft */
                VeSR1B_y_Speed_Unit_CallStatus = 2U;

                /* Event: '<S389>:39' */
                /* Transition: '<S389>:113' */
                /* Transition: '<S389>:115' */
                /* Transition: '<S389>:114' */
            }
            else
            {
                /* Transition: '<S389>:110' */
                /* Call Tmot */
                VeSR1B_y_Speed_Unit_CallStatus = 3U;

                /* Event: '<S389>:40' */
                /* Transition: '<S389>:115' */
                /* Transition: '<S389>:114' */
            }
        }
        else
        {
            /* Transition: '<S389>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_in) == 133)
            {
                /* Transition: '<S389>:95' */
                /* Transition: '<S389>:116' */
                /* Call Nothing */
                VeSR1B_y_Speed_Unit_CallStatus = 4U;

                /* Transition: '<S389>:114' */
            }
            else
            {
                /* Transition: '<S389>:120' */
                /* Transition: '<S389>:117' */
                /* Call Poke */
                VeSR1B_y_Speed_Unit_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S371>/Poke' */
                /* FunctionCaller: '<S390>/Function Caller' */
                /* Event: '<S389>:38' */
                Rte_Call_PokePLTR_b_SpeedUnit_PokePLTR_b_SpeedUnit
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__he);

                /* End of Outputs for SubSystem: '<S371>/Poke' */
            }
        }
    }

    /* End of Chart: '<S387>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_Traffic_Sign_Info_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_Traffic_Sign_Info_ErrSts'
     */
    /* Transition: '<S389>:107' */
    rtb_TmpSignalConversionAtVeS_m0 = Rte_Read_VeSR1B_b_Traffic_Sign_Info_Value(
        &CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_T);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_Traffic_Sign_Info_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S393>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Traffic_Sign_Info_SigSts_Value(&tmpRead_1t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S391>/Chart' */
    if ((((uint32)tmpRead_1t) & 3U) != 0U)
    {
        /* Transition: '<S393>:100' */
        /* Transition: '<S393>:103' */
        /* Transition: '<S393>:111' */
        /* Call Fsft */
        VeSR1B_y_Traffic_Sign_Info_CallStatus = 2U;

        /* Event: '<S393>:39' */
        /* Transition: '<S393>:113' */
        /* Transition: '<S393>:115' */
        /* Transition: '<S393>:114' */
    }
    else
    {
        /* Transition: '<S393>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1t) & 4U) != 0U)
        {
            /* Transition: '<S393>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S393>:88' */
                /* Transition: '<S393>:111' */
                /* Call Fsft */
                VeSR1B_y_Traffic_Sign_Info_CallStatus = 2U;

                /* Event: '<S393>:39' */
                /* Transition: '<S393>:113' */
                /* Transition: '<S393>:115' */
                /* Transition: '<S393>:114' */
            }
            else
            {
                /* Transition: '<S393>:110' */
                /* Call Tmot */
                VeSR1B_y_Traffic_Sign_Info_CallStatus = 3U;

                /* Event: '<S393>:40' */
                /* Transition: '<S393>:115' */
                /* Transition: '<S393>:114' */
            }
        }
        else
        {
            /* Transition: '<S393>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_m0) == 133)
            {
                /* Transition: '<S393>:95' */
                /* Transition: '<S393>:116' */
                /* Call Nothing */
                VeSR1B_y_Traffic_Sign_Info_CallStatus = 4U;

                /* Transition: '<S393>:114' */
            }
            else
            {
                /* Transition: '<S393>:120' */
                /* Transition: '<S393>:117' */
                /* Call Poke */
                VeSR1B_y_Traffic_Sign_Info_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S372>/Poke' */
                /* FunctionCaller: '<S394>/Function Caller' */
                /* Event: '<S393>:38' */
                Rte_Call_PokeASLR_b_TSR_Req_PokeASLR_b_TSR_Req
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_b_T);

                /* End of Outputs for SubSystem: '<S372>/Poke' */
            }
        }
    }

    /* End of Chart: '<S391>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_BarPrsAbs_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_BarPrsAbs_FD3_ErrSts'
     */
    /* Transition: '<S393>:107' */
    rtb_TmpSignalConversionAtVeS_dl = Rte_Read_VeSR1B_p_BarPrsAbs_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_p_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_BarPrsAbs_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S402>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_BarPrsAbs_FD3_SigSts_Value(&tmpRead_1u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S399>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_BarPrsAbsV'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1u) & 3U) != 0U)
    {
        /* Transition: '<S402>:100' */
        /* Transition: '<S402>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S402>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1u) & 4U) != 0U)
        {
            /* Transition: '<S402>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S402>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S402>:110' */
                /* Call Tmot */
                VeSR1B_y_BarPrsAbs_FD3_CallStatus = 3U;

                /* Event: '<S402>:40' */
                /* Transition: '<S402>:115' */
                /* Transition: '<S402>:114' */
            }
        }
        else
        {
            /* Transition: '<S402>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_dl) == 133)
            {
                /* Transition: '<S402>:95' */
                /* Transition: '<S402>:116' */
                /* Call Nothing */
                VeSR1B_y_BarPrsAbs_FD3_CallStatus = 4U;

                /* Transition: '<S402>:114' */
            }
            else
            {
                /* Transition: '<S402>:120' */
                (void)Rte_Read_VeSR1B_b_BarPrsAbsV_Value(&FA_out_k0);

                /* Transition: '<S402>:117' */
                /* Call Poke */
                VeSR1B_y_BarPrsAbs_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S395>/Poke' */
                /* FunctionCaller: '<S404>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_BarPrsAbsV'
                 */
                /* Event: '<S402>:38' */
                Rte_Call_PokePLTR_p_AmbientAirPrs_PokePLTR_p_AmbientAirPrs
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_p_B, FA_out_k0);

                /* End of Outputs for SubSystem: '<S395>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S402>:111' */
        /* Call Fsft */
        VeSR1B_y_BarPrsAbs_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S395>/Fsft' */
        /* FunctionCaller: '<S403>/Function Caller' */
        /* Event: '<S402>:39' */
        Rte_Call_FsftPLTR_p_AmbientAirPrs_FsftPLTR_p_AmbientAirPrs();

        /* End of Outputs for SubSystem: '<S395>/Fsft' */
        /* Transition: '<S402>:113' */
        /* Transition: '<S402>:115' */
        /* Transition: '<S402>:114' */
    }

    /* End of Chart: '<S399>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EngIntAirTmp_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EngIntAirTmp_FD3_ErrSts'
     */
    /* Transition: '<S402>:107' */
    rtb_TmpSignalConversionAtVeS_m1 = Rte_Read_VeSR1B_T_EngIntAirTmp_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_EngIntAirTmp_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S408>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngIntAirTmp_FD3_SigSts_Value(&tmpRead_1v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S405>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_EngIntAirTmpV'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1v) & 3U) != 0U)
    {
        /* Transition: '<S408>:100' */
        /* Transition: '<S408>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S408>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1v) & 4U) != 0U)
        {
            /* Transition: '<S408>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S408>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S408>:110' */
                /* Call Tmot */
                VeSR1B_y_EngIntAirTmp_FD3_CallStatus = 3U;

                /* Event: '<S408>:40' */
                /* Transition: '<S408>:115' */
                /* Transition: '<S408>:114' */
            }
        }
        else
        {
            /* Transition: '<S408>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_m1) == 133)
            {
                /* Transition: '<S408>:95' */
                /* Transition: '<S408>:116' */
                /* Call Nothing */
                VeSR1B_y_EngIntAirTmp_FD3_CallStatus = 4U;

                /* Transition: '<S408>:114' */
            }
            else
            {
                /* Transition: '<S408>:120' */
                (void)Rte_Read_VeSR1B_b_EngIntAirTmpV_Value(&tmpRead_20);

                /* Transition: '<S408>:117' */
                /* Call Poke */
                VeSR1B_y_EngIntAirTmp_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S396>/Poke' */
                /* FunctionCaller: '<S410>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_EngIntAirTmpV'
                 */
                /* Event: '<S408>:38' */
                Rte_Call_PokeENGR_T_InductionAirTemp_PokeENGR_T_InductionAirTemp
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_k, tmpRead_20);

                /* End of Outputs for SubSystem: '<S396>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S408>:111' */
        /* Call Fsft */
        VeSR1B_y_EngIntAirTmp_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S396>/Fsft' */
        /* FunctionCaller: '<S409>/Function Caller' */
        /* Event: '<S408>:39' */
        Rte_Call_FsftENGR_T_InductionAirTemp_FsftENGR_T_InductionAirTemp();

        /* End of Outputs for SubSystem: '<S396>/Fsft' */
        /* Transition: '<S408>:113' */
        /* Transition: '<S408>:115' */
        /* Transition: '<S408>:114' */
    }

    /* End of Chart: '<S405>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EstCatCnvTmp_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EstCatCnvTmp_ErrSts'
     */
    /* Transition: '<S408>:107' */
    rtb_TmpSignalConversionAtVeS_ol = Rte_Read_VeSR1B_T_EstCatCnvTmp_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_EstCatCnvTmp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S413>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EstCatCnvTmp_SigSts_Value(&tmpRead_1w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S411>/Chart' */
    if ((((uint32)tmpRead_1w) & 3U) != 0U)
    {
        /* Transition: '<S413>:100' */
        /* Transition: '<S413>:103' */
        /* Transition: '<S413>:111' */
        /* Call Fsft */
        VeSR1B_y_EstCatCnvTmp_CallStatus = 2U;

        /* Event: '<S413>:39' */
        /* Transition: '<S413>:113' */
        /* Transition: '<S413>:115' */
        /* Transition: '<S413>:114' */
    }
    else
    {
        /* Transition: '<S413>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1w) & 4U) != 0U)
        {
            /* Transition: '<S413>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S413>:88' */
                /* Transition: '<S413>:111' */
                /* Call Fsft */
                VeSR1B_y_EstCatCnvTmp_CallStatus = 2U;

                /* Event: '<S413>:39' */
                /* Transition: '<S413>:113' */
                /* Transition: '<S413>:115' */
                /* Transition: '<S413>:114' */
            }
            else
            {
                /* Transition: '<S413>:110' */
                /* Call Tmot */
                VeSR1B_y_EstCatCnvTmp_CallStatus = 3U;

                /* Event: '<S413>:40' */
                /* Transition: '<S413>:115' */
                /* Transition: '<S413>:114' */
            }
        }
        else
        {
            /* Transition: '<S413>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ol) == 133)
            {
                /* Transition: '<S413>:95' */
                /* Transition: '<S413>:116' */
                /* Call Nothing */
                VeSR1B_y_EstCatCnvTmp_CallStatus = 4U;

                /* Transition: '<S413>:114' */
            }
            else
            {
                /* Transition: '<S413>:120' */
                if ((((uint32)tmpRead_1w) & 8U) != 0U)
                {
                    /* Transition: '<S413>:122' */
                    /* Transition: '<S413>:125' */
                    FA_out_k0 = true;

                    /* Transition: '<S413>:126' */
                }
                else
                {
                    /* Transition: '<S413>:124' */
                    FA_out_k0 = false;
                }

                /* Transition: '<S413>:117' */
                /* Call Poke */
                VeSR1B_y_EstCatCnvTmp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S397>/Poke' */
                /* FunctionCaller: '<S414>/Function Caller' */
                /* Event: '<S413>:38' */
                Rte_Call_PokeENGR_T_CatalystTemp_PokeENGR_T_CatalystTemp
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_l, FA_out_k0);

                /* End of Outputs for SubSystem: '<S397>/Poke' */
            }
        }
    }

    /* End of Chart: '<S411>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_OAT_PT_Est_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_OAT_PT_Est_FD3_ErrSts'
     */
    /* Transition: '<S413>:107' */
    rtb_TmpSignalConversionAtVeS_fp = Rte_Read_VeSR1B_T_OAT_PT_Est_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_O);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_OAT_PT_Est_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S418>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_OAT_PT_Est_FD3_SigSts_Value(&tmpRead_1x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S415>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_OAT_PT_EstV_FD3'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1x) & 3U) != 0U)
    {
        /* Transition: '<S418>:100' */
        /* Transition: '<S418>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S418>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1x) & 4U) != 0U)
        {
            /* Transition: '<S418>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S418>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S418>:110' */
                /* Call Tmot */
                VeSR1B_y_OAT_PT_Est_FD3_CallStatus = 3U;

                /* Event: '<S418>:40' */
                /* Transition: '<S418>:115' */
                /* Transition: '<S418>:114' */
            }
        }
        else
        {
            /* Transition: '<S418>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fp) == 133)
            {
                /* Transition: '<S418>:95' */
                /* Transition: '<S418>:116' */
                /* Call Nothing */
                VeSR1B_y_OAT_PT_Est_FD3_CallStatus = 4U;

                /* Transition: '<S418>:114' */
            }
            else
            {
                /* Transition: '<S418>:120' */
                (void)Rte_Read_VeSR1B_b_OAT_PT_EstV_FD3_Value(&FA_out_d1);

                /* Transition: '<S418>:117' */
                /* Call Poke */
                VeSR1B_y_OAT_PT_Est_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S398>/Poke' */
                /* FunctionCaller: '<S420>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_OAT_PT_EstV_FD3'
                 */
                /* Event: '<S418>:38' */
                Rte_Call_PokeAATR_T_ECM_AmbientAirTemp_PokeAATR_T_ECM_AmbientAirTemp
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_T_O, FA_out_d1);

                /* End of Outputs for SubSystem: '<S398>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S418>:111' */
        /* Call Fsft */
        VeSR1B_y_OAT_PT_Est_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S398>/Fsft' */
        /* FunctionCaller: '<S419>/Function Caller' */
        /* Event: '<S418>:39' */
        Rte_Call_FsftAATR_T_ECM_AmbientAirTemp_FsftAATR_T_ECM_AmbientAirTemp();

        /* End of Outputs for SubSystem: '<S398>/Fsft' */
        /* Transition: '<S418>:113' */
        /* Transition: '<S418>:115' */
        /* Transition: '<S418>:114' */
    }

    /* End of Chart: '<S415>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_SBR1RowDrvrSeatSts_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_SBR1RowDrvrSeatSts_FD3_ErrSts'
     */
    /* Transition: '<S418>:107' */
    rtb_TmpSignalConversionAtVeSR_k =
        Rte_Read_VeSR1B_y_SBR1RowDrvrSeatSts_FD3_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_SBR1RowDrvrSeatSts_FD3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S425>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_SBR1RowDrvrSeatSts_FD3_SigSts_Value(&tmpRead_1y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S422>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1y) & 3U) != 0U)
    {
        /* Transition: '<S425>:100' */
        /* Transition: '<S425>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S425>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1y) & 4U) != 0U)
        {
            /* Transition: '<S425>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S425>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S425>:110' */
                /* Call Tmot */
                VeSR1B_y_SBR1RowDrvrSeatSts_FD3_CallStatus = 3U;

                /* Event: '<S425>:40' */
                /* Transition: '<S425>:115' */
                /* Transition: '<S425>:114' */
            }
        }
        else
        {
            /* Transition: '<S425>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_k) == 133)
            {
                /* Transition: '<S425>:95' */
                /* Transition: '<S425>:116' */
                /* Call Nothing */
                VeSR1B_y_SBR1RowDrvrSeatSts_FD3_CallStatus = 4U;

                /* Transition: '<S425>:114' */
            }
            else
            {
                /* Transition: '<S425>:120' */
                if ((((uint32)tmpRead_1y) & 8U) != 0U)
                {
                    /* Transition: '<S425>:122' */
                    /* Transition: '<S425>:125' */
                    FA_out_d1 = true;

                    /* Transition: '<S425>:126' */
                }
                else
                {
                    /* Transition: '<S425>:124' */
                    FA_out_d1 = false;
                }

                /* Transition: '<S425>:117' */
                /* Call Poke */
                VeSR1B_y_SBR1RowDrvrSeatSts_FD3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S421>/Poke' */
                /* FunctionCaller: '<S427>/Function Caller' */
                /* Event: '<S425>:38' */
                Rte_Call_PokePLTR_b_DriverSeatBeltSts_PokePLTR_b_DriverSeatBeltSts
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B_y_p, FA_out_d1);

                /* End of Outputs for SubSystem: '<S421>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S425>:111' */
        /* Call Fsft */
        VeSR1B_y_SBR1RowDrvrSeatSts_FD3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S421>/Fsft' */
        /* FunctionCaller: '<S426>/Function Caller' */
        /* Event: '<S425>:39' */
        Rte_Call_FsftPLTR_e_DriverSeatBeltSts_FsftPLTR_e_DriverSeatBeltSts();

        /* End of Outputs for SubSystem: '<S421>/Fsft' */
        /* Transition: '<S425>:113' */
        /* Transition: '<S425>:115' */
        /* Transition: '<S425>:114' */
    }

    /* End of Chart: '<S422>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_DriverEngineOffRequest_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DriverEngineOffRequest_ErrSts'
     */
    /* Transition: '<S425>:107' */
    rtb_TmpSignalConversionAtVeS_on =
        Rte_Read_VeSR1B_b_DriverEngineOffRequest_Value
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__hy);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_DriverEngineOffRequest_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S432>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DriverEngineOffRequest_SigSts_Value(&tmpRead_1z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S429>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1z) & 3U) != 0U)
    {
        /* Transition: '<S432>:100' */
        /* Transition: '<S432>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S432>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1z) & 4U) != 0U)
        {
            /* Transition: '<S432>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S432>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S432>:110' */
                /* Call Tmot */
                VeSR1B_y_DriverEngineOffRequest_CallStatus = 3U;

                /* Event: '<S432>:40' */
                /* Transition: '<S432>:115' */
                /* Transition: '<S432>:114' */
            }
        }
        else
        {
            /* Transition: '<S432>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_on) == 133)
            {
                /* Transition: '<S432>:95' */
                /* Transition: '<S432>:116' */
                /* Call Nothing */
                VeSR1B_y_DriverEngineOffRequest_CallStatus = 4U;

                /* Transition: '<S432>:114' */
            }
            else
            {
                /* Transition: '<S432>:120' */
                /* Transition: '<S432>:117' */
                /* Call Poke */
                VeSR1B_y_DriverEngineOffRequest_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S428>/Poke' */
                /* FunctionCaller: '<S434>/Function Caller' */
                /* Event: '<S432>:38' */
                Rte_Call_PokePMDR_b_EngOffRq_C_PokePMDR_b_EngOffRq_C
                    (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeSR1B__hy);

                /* End of Outputs for SubSystem: '<S428>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S432>:111' */
        /* Call Fsft */
        VeSR1B_y_DriverEngineOffRequest_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S428>/Fsft' */
        /* FunctionCaller: '<S433>/Function Caller' */
        /* Event: '<S432>:39' */
        Rte_Call_FsftPMDR_b_EngOffRq_C_FsftPMDR_b_EngOffRq_C();

        /* End of Outputs for SubSystem: '<S428>/Fsft' */
        /* Transition: '<S432>:113' */
        /* Transition: '<S432>:115' */
        /* Transition: '<S432>:114' */
    }

    /* End of Chart: '<S429>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_Day1_TLM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_Day1_TLM_ErrSts'
     */
    /* Transition: '<S432>:107' */
    rtb_TmpSignalConversionAtVeCA_m =
        Rte_Read_VeCANR_y_Day1_TLM_VeCANR_y_Day1_TLM
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_D);

VeCANR_y_Day1_TLM_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_D;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_Day1_TLM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S457>:1' */
    (void)Rte_Read_VeCANR_b_Day1_TLM_TO_VeCANR_b_Day1_TLM_TO(&FA_out_cz);

VeCANR_b_Day1_TLM_TO_CR1B_BLUEN_ac_Test_1 = FA_out_cz;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S453>/Chart' */
    if (FA_out_cz)
    {
        /* Transition: '<S457>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S457>:6' */
            /* Transition: '<S457>:25' */
            /* Call Fsft */
            VeCANR_y_Day1_TLM_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S435>/Fsft' */
            /* FunctionCaller: '<S458>/Function Caller' */
            /* Event: '<S457>:39' */
            Rte_Call_FsftCITR_b_Date_Day1_FsftCITR_b_Date_Day1();

            /* End of Outputs for SubSystem: '<S435>/Fsft' */
            /* Transition: '<S457>:29' */
        }
        else
        {
            /* Transition: '<S457>:30' */
            /* Call Tmot */
            VeCANR_y_Day1_TLM_CallStatus = 3U;

            /* Outputs for Function Call SubSystem: '<S435>/Tmot' */
            /* FunctionCaller: '<S460>/Function Caller' */
            /* Event: '<S457>:40' */
            Rte_Call_TmotCITR_b_Date_Day1_TmotCITR_b_Date_Day1();

            /* End of Outputs for SubSystem: '<S435>/Tmot' */
        }

        /* Transition: '<S457>:36' */
        /* Transition: '<S457>:23' */
    }
    else
    {
        /* Transition: '<S457>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_m) == 133)
        {
            /* Transition: '<S457>:33' */
            /* Transition: '<S457>:35' */
            /* Call Nothing */
            VeCANR_y_Day1_TLM_CallStatus = 4U;

            /* Transition: '<S457>:23' */
        }
        else
        {
            /* Transition: '<S457>:46' */
            /* Transition: '<S457>:37' */
            /* Call Poke */
            VeCANR_y_Day1_TLM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S435>/Poke' */
            /* FunctionCaller: '<S459>/Function Caller' incorporates:
             *  Constant: '<S459>/Constant'
             *  DataTypeConversion: '<S459>/Data Type Conversion'
             */
            /* Event: '<S457>:38' */
            Rte_Call_PokeCITR_K_Date_Day1_PokeCITR_K_Date_Day1((float32)
                CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_D, false);

            /* End of Outputs for SubSystem: '<S435>/Poke' */
        }
    }

    /* End of Chart: '<S453>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_Day2_TLM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_Day2_TLM_ErrSts'
     */
    /* Transition: '<S457>:19' */
    rtb_TmpSignalConversionAtVeCA_p =
        Rte_Read_VeCANR_y_Day2_TLM_VeCANR_y_Day2_TLM
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_f);

VeCANR_y_Day2_TLM_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_f;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_Day2_TLM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S463>:1' */
    (void)Rte_Read_VeCANR_b_Day2_TLM_TO_VeCANR_b_Day2_TLM_TO(&tmpRead_0);

VeCANR_b_Day2_TLM_TO_CR1B_BLUEN_ac_Test_1 = tmpRead_0;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S461>/Chart' */
    if (tmpRead_0)
    {
        /* Transition: '<S463>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S463>:6' */
            /* Transition: '<S463>:25' */
            /* Call Fsft */
            VeCANR_y_Day2_TLM_CallStatus = 2U;

            /* Event: '<S463>:39' */
            /* Transition: '<S463>:29' */
        }
        else
        {
            /* Transition: '<S463>:30' */
            /* Call Tmot */
            VeCANR_y_Day2_TLM_CallStatus = 3U;

            /* Event: '<S463>:40' */
        }

        /* Transition: '<S463>:36' */
        /* Transition: '<S463>:23' */
    }
    else
    {
        /* Transition: '<S463>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_p) == 133)
        {
            /* Transition: '<S463>:33' */
            /* Transition: '<S463>:35' */
            /* Call Nothing */
            VeCANR_y_Day2_TLM_CallStatus = 4U;

            /* Transition: '<S463>:23' */
        }
        else
        {
            /* Transition: '<S463>:46' */
            /* Transition: '<S463>:37' */
            /* Call Poke */
            VeCANR_y_Day2_TLM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S436>/Poke' */
            /* FunctionCaller: '<S464>/Function Caller' incorporates:
             *  DataTypeConversion: '<S464>/Data Type Conversion'
             */
            /* Event: '<S463>:38' */
            Rte_Call_PokeCITR_K_Date_Day2_PokeCITR_K_Date_Day2((float32)
                CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_f);

            /* End of Outputs for SubSystem: '<S436>/Poke' */
        }
    }

    /* End of Chart: '<S461>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_GPS_Date_Day_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_GPS_Date_Day_FD3_ErrSts'
     */
    /* Transition: '<S463>:19' */
    rtb_TmpSignalConversionAtVeC_pk =
        Rte_Read_VeCANR_t_GPS_Date_Day_FD3_VeCANR_t_GPS_Date_Day_FD3
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_G);

VeCANR_t_GPS_Date_Day_FD3_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_G;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_GPS_Date_Day_FD3TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S468>:1' */
    (void)Rte_Read_VeCANR_b_GPS_Date_Day_FD3TO_VeCANR_b_GPS_Date_Day_FD3TO
        (&tmpRead_1);

VeCANR_b_GPS_Date_Day_FD3TO_CR1B_BLUEN_ac_Test_1 = tmpRead_1;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S465>/Chart' */
    if (tmpRead_1)
    {
        /* Transition: '<S468>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S468>:6' */
            /* Transition: '<S468>:25' */
            /* Call Fsft */
            VeCANR_y_GPS_Date_Day_FD3_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S437>/Fsft' */
            /* FunctionCaller: '<S469>/Function Caller' */
            /* Event: '<S468>:39' */
            Rte_Call_FsftPLTR_tdy_GPS_Date_Day_FsftPLTR_tdy_GPS_Date_Day();

            /* End of Outputs for SubSystem: '<S437>/Fsft' */
            /* Transition: '<S468>:29' */
        }
        else
        {
            /* Transition: '<S468>:30' */
            /* Call Tmot */
            VeCANR_y_GPS_Date_Day_FD3_CallStatus = 3U;

            /* Event: '<S468>:40' */
        }

        /* Transition: '<S468>:36' */
        /* Transition: '<S468>:23' */
    }
    else
    {
        /* Transition: '<S468>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeC_pk) == 133)
        {
            /* Transition: '<S468>:33' */
            /* Transition: '<S468>:35' */
            /* Call Nothing */
            VeCANR_y_GPS_Date_Day_FD3_CallStatus = 4U;

            /* Transition: '<S468>:23' */
        }
        else
        {
            /* Transition: '<S468>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pk) == 1)
            {
                /* Transition: '<S468>:48' */
                /* Transition: '<S468>:53' */
                FA_out_cz = true;

                /* Transition: '<S468>:56' */
            }
            else
            {
                /* Transition: '<S468>:52' */
                FA_out_cz = false;
            }

            /* Transition: '<S468>:37' */
            /* Call Poke */
            VeCANR_y_GPS_Date_Day_FD3_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S437>/Poke' */
            /* FunctionCaller: '<S470>/Function Caller' */
            /* Event: '<S468>:38' */
            Rte_Call_PokePLTR_tdy_GPS_Date_Day_PokePLTR_tdy_GPS_Date_Day
                (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_G, FA_out_cz);

            /* End of Outputs for SubSystem: '<S437>/Poke' */
        }
    }

    /* End of Chart: '<S465>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_GPS_Date_Month_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_GPS_Date_Month_FD3_ErrSts'
     */
    /* Transition: '<S468>:19' */
    rtb_TmpSignalConversionAtVeC_mm =
        Rte_Read_VeCANR_cmp_GPS_Date_Month_FD3_VeCANR_cmp_GPS_Date_Month_FD3
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_cmp);

VeCANR_cmp_GPS_Date_Month_FD3_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_cmp;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_GPS_Date_Month_FD3TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S474>:1' */
    (void)Rte_Read_VeCANR_b_GPS_Date_Month_FD3TO_VeCANR_b_GPS_Date_Month_FD3TO
        (&FA_out_k2);

VeCANR_b_GPS_Date_Month_FD3TO_CR1B_BLUEN_ac_Test_1 = FA_out_k2;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S471>/Chart' */
    if (FA_out_k2)
    {
        /* Transition: '<S474>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S474>:6' */
            /* Transition: '<S474>:25' */
            /* Call Fsft */
            VeCANR_y_GPS_Date_Month_FD3_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S438>/Fsft' */
            /* FunctionCaller: '<S475>/Function Caller' */
            /* Event: '<S474>:39' */
            Rte_Call_FsftPLTR_tmt_GPS_Date_Month_FsftPLTR_tmt_GPS_Date_Month();

            /* End of Outputs for SubSystem: '<S438>/Fsft' */
            /* Transition: '<S474>:29' */
        }
        else
        {
            /* Transition: '<S474>:30' */
            /* Call Tmot */
            VeCANR_y_GPS_Date_Month_FD3_CallStatus = 3U;

            /* Event: '<S474>:40' */
        }

        /* Transition: '<S474>:36' */
        /* Transition: '<S474>:23' */
    }
    else
    {
        /* Transition: '<S474>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeC_mm) == 133)
        {
            /* Transition: '<S474>:33' */
            /* Transition: '<S474>:35' */
            /* Call Nothing */
            VeCANR_y_GPS_Date_Month_FD3_CallStatus = 4U;

            /* Transition: '<S474>:23' */
        }
        else
        {
            /* Transition: '<S474>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_mm) == 1)
            {
                /* Transition: '<S474>:48' */
                /* Transition: '<S474>:53' */
                FA_out_k2 = true;

                /* Transition: '<S474>:56' */
            }
            else
            {
                /* Transition: '<S474>:52' */
            }

            /* Transition: '<S474>:37' */
            /* Call Poke */
            VeCANR_y_GPS_Date_Month_FD3_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S438>/Poke' */
            /* FunctionCaller: '<S476>/Function Caller' */
            /* Event: '<S474>:38' */
            Rte_Call_PokePLTR_tmt_GPS_Date_Month_PokePLTR_tmt_GPS_Date_Month
                (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_cmp, FA_out_k2);

            /* End of Outputs for SubSystem: '<S438>/Poke' */
        }
    }

    /* End of Chart: '<S471>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_GPS_Date_Year_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_GPS_Date_Year_FD3_ErrSts'
     */
    /* Transition: '<S474>:19' */
    rtb_TmpSignalConversionAtVeC_pe =
        Rte_Read_VeCANR_t_GPS_Date_Year_FD3_VeCANR_t_GPS_Date_Year_FD3
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_m);

VeCANR_t_GPS_Date_Year_FD3_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_m;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_GPS_Date_Year_FD3TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S480>:1' */
    (void)Rte_Read_VeCANR_b_GPS_Date_Year_FD3TO_VeCANR_b_GPS_Date_Year_FD3TO
        (&FA_out_kb);

VeCANR_b_GPS_Date_Year_FD3TO_CR1B_BLUEN_ac_Test_1 = FA_out_kb;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S477>/Chart' */
    if (FA_out_kb)
    {
        /* Transition: '<S480>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S480>:6' */
            /* Transition: '<S480>:25' */
            /* Call Fsft */
            VeCANR_y_GPS_Date_Year_FD3_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S439>/Fsft' */
            /* FunctionCaller: '<S481>/Function Caller' */
            /* Event: '<S480>:39' */
            Rte_Call_FsftPLTR_tyr_GPS_Date_Year_FsftPLTR_tyr_GPS_Date_Year();

            /* End of Outputs for SubSystem: '<S439>/Fsft' */
            /* Transition: '<S480>:29' */
        }
        else
        {
            /* Transition: '<S480>:30' */
            /* Call Tmot */
            VeCANR_y_GPS_Date_Year_FD3_CallStatus = 3U;

            /* Event: '<S480>:40' */
        }

        /* Transition: '<S480>:36' */
        /* Transition: '<S480>:23' */
    }
    else
    {
        /* Transition: '<S480>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeC_pe) == 133)
        {
            /* Transition: '<S480>:33' */
            /* Transition: '<S480>:35' */
            /* Call Nothing */
            VeCANR_y_GPS_Date_Year_FD3_CallStatus = 4U;

            /* Transition: '<S480>:23' */
        }
        else
        {
            /* Transition: '<S480>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pe) == 1)
            {
                /* Transition: '<S480>:48' */
                /* Transition: '<S480>:53' */
                FA_out_kb = true;

                /* Transition: '<S480>:56' */
            }
            else
            {
                /* Transition: '<S480>:52' */
            }

            /* Transition: '<S480>:37' */
            /* Call Poke */
            VeCANR_y_GPS_Date_Year_FD3_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S439>/Poke' */
            /* FunctionCaller: '<S482>/Function Caller' */
            /* Event: '<S480>:38' */
            Rte_Call_PokePLTR_tyr_GPS_Date_Year_PokePLTR_tyr_GPS_Date_Year
                (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_m, FA_out_kb);

            /* End of Outputs for SubSystem: '<S439>/Poke' */
        }
    }

    /* End of Chart: '<S477>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_GPS_UTC_Hour_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_GPS_UTC_Hour_FD3_ErrSts'
     */
    /* Transition: '<S480>:19' */
    rtb_TmpSignalConversionAtVeCA_c =
        Rte_Read_VeCANR_t_GPS_UTC_Hour_FD3_VeCANR_t_GPS_UTC_Hour_FD3
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_l);

VeCANR_t_GPS_UTC_Hour_FD3_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_l;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_GPS_UTC_Hour_FD3TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S486>:1' */
    (void)Rte_Read_VeCANR_b_GPS_UTC_Hour_FD3TO_VeCANR_b_GPS_UTC_Hour_FD3TO
        (&FA_out_m);

VeCANR_b_GPS_UTC_Hour_FD3TO_CR1B_BLUEN_ac_Test_1 = FA_out_m;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S483>/Chart' */
    if (FA_out_m)
    {
        /* Transition: '<S486>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S486>:6' */
            /* Transition: '<S486>:25' */
            /* Call Fsft */
            VeCANR_y_GPS_UTC_Hour_FD3_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S440>/Fsft' */
            /* FunctionCaller: '<S487>/Function Caller' */
            /* Event: '<S486>:39' */
            Rte_Call_FsftPLTR_thr_GPS_UTC_Hour_FsftPLTR_thr_GPS_UTC_Hour();

            /* End of Outputs for SubSystem: '<S440>/Fsft' */
            /* Transition: '<S486>:29' */
        }
        else
        {
            /* Transition: '<S486>:30' */
            /* Call Tmot */
            VeCANR_y_GPS_UTC_Hour_FD3_CallStatus = 3U;

            /* Event: '<S486>:40' */
        }

        /* Transition: '<S486>:36' */
        /* Transition: '<S486>:23' */
    }
    else
    {
        /* Transition: '<S486>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_c) == 133)
        {
            /* Transition: '<S486>:33' */
            /* Transition: '<S486>:35' */
            /* Call Nothing */
            VeCANR_y_GPS_UTC_Hour_FD3_CallStatus = 4U;

            /* Transition: '<S486>:23' */
        }
        else
        {
            /* Transition: '<S486>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeCA_c) == 1)
            {
                /* Transition: '<S486>:48' */
                /* Transition: '<S486>:53' */
                FA_out_m = true;

                /* Transition: '<S486>:56' */
            }
            else
            {
                /* Transition: '<S486>:52' */
            }

            /* Transition: '<S486>:37' */
            /* Call Poke */
            VeCANR_y_GPS_UTC_Hour_FD3_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S440>/Poke' */
            /* FunctionCaller: '<S488>/Function Caller' */
            /* Event: '<S486>:38' */
            Rte_Call_PokePLTR_thr_GPS_UTC_Hour_PokePLTR_thr_GPS_UTC_Hour
                (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_l, FA_out_m);

            /* End of Outputs for SubSystem: '<S440>/Poke' */
        }
    }

    /* End of Chart: '<S483>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_GPS_UTC_Minute_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_GPS_UTC_Minute_FD3_ErrSts'
     */
    /* Transition: '<S486>:19' */
    rtb_TmpSignalConversionAtVeCA_a =
        Rte_Read_VeCANR_t_GPS_UTC_Minute_FD3_VeCANR_t_GPS_UTC_Minute_FD3
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_c);

VeCANR_t_GPS_UTC_Minute_FD3_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_c;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_GPS_UTC_Minute_FD3TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S492>:1' */
    (void)Rte_Read_VeCANR_b_GPS_UTC_Minute_FD3TO_VeCANR_b_GPS_UTC_Minute_FD3TO
        (&FA_out_j);

VeCANR_b_GPS_UTC_Minute_FD3TO_CR1B_BLUEN_ac_Test_1 = FA_out_j;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S489>/Chart' */
    if (FA_out_j)
    {
        /* Transition: '<S492>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S492>:6' */
            /* Transition: '<S492>:25' */
            /* Call Fsft */
            VeCANR_y_GPS_UTC_Minute_FD3_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S441>/Fsft' */
            /* FunctionCaller: '<S493>/Function Caller' */
            /* Event: '<S492>:39' */
            Rte_Call_FsftPLTR_tmn_GPS_UTC_Minute_FsftPLTR_tmn_GPS_UTC_Minute();

            /* End of Outputs for SubSystem: '<S441>/Fsft' */
            /* Transition: '<S492>:29' */
        }
        else
        {
            /* Transition: '<S492>:30' */
            /* Call Tmot */
            VeCANR_y_GPS_UTC_Minute_FD3_CallStatus = 3U;

            /* Event: '<S492>:40' */
        }

        /* Transition: '<S492>:36' */
        /* Transition: '<S492>:23' */
    }
    else
    {
        /* Transition: '<S492>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_a) == 133)
        {
            /* Transition: '<S492>:33' */
            /* Transition: '<S492>:35' */
            /* Call Nothing */
            VeCANR_y_GPS_UTC_Minute_FD3_CallStatus = 4U;

            /* Transition: '<S492>:23' */
        }
        else
        {
            /* Transition: '<S492>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeCA_a) == 1)
            {
                /* Transition: '<S492>:48' */
                /* Transition: '<S492>:53' */
                FA_out_j = true;

                /* Transition: '<S492>:56' */
            }
            else
            {
                /* Transition: '<S492>:52' */
            }

            /* Transition: '<S492>:37' */
            /* Call Poke */
            VeCANR_y_GPS_UTC_Minute_FD3_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S441>/Poke' */
            /* FunctionCaller: '<S494>/Function Caller' */
            /* Event: '<S492>:38' */
            Rte_Call_PokePLTR_tmn_GPS_UTC_Minute_PokePLTR_tmn_GPS_UTC_Minute
                (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_c, FA_out_j);

            /* End of Outputs for SubSystem: '<S441>/Poke' */
        }
    }

    /* End of Chart: '<S489>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_GPS_UTC_Second_FD3_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_GPS_UTC_Second_FD3_ErrSts'
     */
    /* Transition: '<S492>:19' */
    rtb_TmpSignalConversionAtVeCA_g =
        Rte_Read_VeCANR_t_GPS_UTC_Second_FD3_VeCANR_t_GPS_UTC_Second_FD3
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_k);

VeCANR_t_GPS_UTC_Second_FD3_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_k;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_GPS_UTC_Second_FD3TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S498>:1' */
    (void)Rte_Read_VeCANR_b_GPS_UTC_Second_FD3TO_VeCANR_b_GPS_UTC_Second_FD3TO
        (&FA_out_d);

VeCANR_b_GPS_UTC_Second_FD3TO_CR1B_BLUEN_ac_Test_1 = FA_out_d;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S495>/Chart' */
    if (FA_out_d)
    {
        /* Transition: '<S498>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S498>:6' */
            /* Transition: '<S498>:25' */
            /* Call Fsft */
            VeCANR_y_GPS_UTC_Second_FD3_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S442>/Fsft' */
            /* FunctionCaller: '<S499>/Function Caller' */
            /* Event: '<S498>:39' */
            Rte_Call_FsftPLTR_t_GPS_UTC_Second_FsftPLTR_t_GPS_UTC_Second();

            /* End of Outputs for SubSystem: '<S442>/Fsft' */
            /* Transition: '<S498>:29' */
        }
        else
        {
            /* Transition: '<S498>:30' */
            /* Call Tmot */
            VeCANR_y_GPS_UTC_Second_FD3_CallStatus = 3U;

            /* Event: '<S498>:40' */
        }

        /* Transition: '<S498>:36' */
        /* Transition: '<S498>:23' */
    }
    else
    {
        /* Transition: '<S498>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_g) == 133)
        {
            /* Transition: '<S498>:33' */
            /* Transition: '<S498>:35' */
            /* Call Nothing */
            VeCANR_y_GPS_UTC_Second_FD3_CallStatus = 4U;

            /* Transition: '<S498>:23' */
        }
        else
        {
            /* Transition: '<S498>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeCA_g) == 1)
            {
                /* Transition: '<S498>:48' */
                /* Transition: '<S498>:53' */
                FA_out_d = true;

                /* Transition: '<S498>:56' */
            }
            else
            {
                /* Transition: '<S498>:52' */
            }

            /* Transition: '<S498>:37' */
            /* Call Poke */
            VeCANR_y_GPS_UTC_Second_FD3_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S442>/Poke' */
            /* FunctionCaller: '<S500>/Function Caller' */
            /* Event: '<S498>:38' */
            Rte_Call_PokePLTR_t_GPS_UTC_Second_PokePLTR_t_GPS_UTC_Second
                (CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_t_k, FA_out_d);

            /* End of Outputs for SubSystem: '<S442>/Poke' */
        }
    }

    /* End of Chart: '<S495>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_Hour1_TLM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_Hour1_TLM_ErrSts'
     */
    /* Transition: '<S498>:19' */
    rtb_TmpSignalConversionAtVeC_g5 =
        Rte_Read_VeCANR_y_Hour1_TLM_VeCANR_y_Hour1_TLM
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_H);

VeCANR_y_Hour1_TLM_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_H;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_Hour1_TLM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S503>:1' */
    (void)Rte_Read_VeCANR_b_Hour1_TLM_TO_VeCANR_b_Hour1_TLM_TO(&tmpRead_2);

VeCANR_b_Hour1_TLM_TO_CR1B_BLUEN_ac_Test_1 = tmpRead_2;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S501>/Chart' */
    if (tmpRead_2)
    {
        /* Transition: '<S503>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S503>:6' */
            /* Transition: '<S503>:25' */
            /* Call Fsft */
            VeCANR_y_Hour1_TLM_CallStatus = 2U;

            /* Event: '<S503>:39' */
            /* Transition: '<S503>:29' */
        }
        else
        {
            /* Transition: '<S503>:30' */
            /* Call Tmot */
            VeCANR_y_Hour1_TLM_CallStatus = 3U;

            /* Event: '<S503>:40' */
        }

        /* Transition: '<S503>:36' */
        /* Transition: '<S503>:23' */
    }
    else
    {
        /* Transition: '<S503>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeC_g5) == 133)
        {
            /* Transition: '<S503>:33' */
            /* Transition: '<S503>:35' */
            /* Call Nothing */
            VeCANR_y_Hour1_TLM_CallStatus = 4U;

            /* Transition: '<S503>:23' */
        }
        else
        {
            /* Transition: '<S503>:46' */
            /* Transition: '<S503>:37' */
            /* Call Poke */
            VeCANR_y_Hour1_TLM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S443>/Poke' */
            /* FunctionCaller: '<S504>/Function Caller' incorporates:
             *  DataTypeConversion: '<S504>/Data Type Conversion'
             */
            /* Event: '<S503>:38' */
            Rte_Call_PokeCITR_K_Time_Hour1_PokeCITR_K_Time_Hour1((float32)
                CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_H);

            /* End of Outputs for SubSystem: '<S443>/Poke' */
        }
    }

    /* End of Chart: '<S501>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_Hour2_TLM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_Hour2_TLM_ErrSts'
     */
    /* Transition: '<S503>:19' */
    rtb_TmpSignalConversionAtVeC_m3 =
        Rte_Read_VeCANR_y_Hour2_TLM_VeCANR_y_Hour2_TLM
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_d);

VeCANR_y_Hour2_TLM_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_d;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_Hour2_TLM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S507>:1' */
    (void)Rte_Read_VeCANR_b_Hour2_TLM_TO_VeCANR_b_Hour2_TLM_TO(&tmpRead_3);

VeCANR_b_Hour2_TLM_TO_CR1B_BLUEN_ac_Test_1 = tmpRead_3;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S505>/Chart' */
    if (tmpRead_3)
    {
        /* Transition: '<S507>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S507>:6' */
            /* Transition: '<S507>:25' */
            /* Call Fsft */
            VeCANR_y_Hour2_TLM_CallStatus = 2U;

            /* Event: '<S507>:39' */
            /* Transition: '<S507>:29' */
        }
        else
        {
            /* Transition: '<S507>:30' */
            /* Call Tmot */
            VeCANR_y_Hour2_TLM_CallStatus = 3U;

            /* Event: '<S507>:40' */
        }

        /* Transition: '<S507>:36' */
        /* Transition: '<S507>:23' */
    }
    else
    {
        /* Transition: '<S507>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeC_m3) == 133)
        {
            /* Transition: '<S507>:33' */
            /* Transition: '<S507>:35' */
            /* Call Nothing */
            VeCANR_y_Hour2_TLM_CallStatus = 4U;

            /* Transition: '<S507>:23' */
        }
        else
        {
            /* Transition: '<S507>:46' */
            /* Transition: '<S507>:37' */
            /* Call Poke */
            VeCANR_y_Hour2_TLM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S444>/Poke' */
            /* FunctionCaller: '<S508>/Function Caller' incorporates:
             *  DataTypeConversion: '<S508>/Data Type Conversion'
             */
            /* Event: '<S507>:38' */
            Rte_Call_PokeCITR_K_Time_Hour2_PokeCITR_K_Time_Hour2((float32)
                CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_d);

            /* End of Outputs for SubSystem: '<S444>/Poke' */
        }
    }

    /* End of Chart: '<S505>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_Minute1_TLM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_Minute1_TLM_ErrSts'
     */
    /* Transition: '<S507>:19' */
    rtb_TmpSignalConversionAtVeCA_n =
        Rte_Read_VeCANR_y_Minute1_TLM_VeCANR_y_Minute1_TLM
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_M);

VeCANR_y_Minute1_TLM_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_M;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_Minute1_TLM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S511>:1' */
    (void)Rte_Read_VeCANR_b_Minute1_TLM_TO_VeCANR_b_Minute1_TLM_TO(&tmpRead_4);

VeCANR_b_Minute1_TLM_TO_CR1B_BLUEN_ac_Test_1 = tmpRead_4;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S509>/Chart' */
    if (tmpRead_4)
    {
        /* Transition: '<S511>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S511>:6' */
            /* Transition: '<S511>:25' */
            /* Call Fsft */
            VeCANR_y_Minute1_TLM_CallStatus = 2U;

            /* Event: '<S511>:39' */
            /* Transition: '<S511>:29' */
        }
        else
        {
            /* Transition: '<S511>:30' */
            /* Call Tmot */
            VeCANR_y_Minute1_TLM_CallStatus = 3U;

            /* Event: '<S511>:40' */
        }

        /* Transition: '<S511>:36' */
        /* Transition: '<S511>:23' */
    }
    else
    {
        /* Transition: '<S511>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_n) == 133)
        {
            /* Transition: '<S511>:33' */
            /* Transition: '<S511>:35' */
            /* Call Nothing */
            VeCANR_y_Minute1_TLM_CallStatus = 4U;

            /* Transition: '<S511>:23' */
        }
        else
        {
            /* Transition: '<S511>:46' */
            /* Transition: '<S511>:37' */
            /* Call Poke */
            VeCANR_y_Minute1_TLM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S445>/Poke' */
            /* FunctionCaller: '<S512>/Function Caller' incorporates:
             *  DataTypeConversion: '<S512>/Data Type Conversion'
             */
            /* Event: '<S511>:38' */
            Rte_Call_PokeCITR_K_Time_Minute1_PokeCITR_K_Time_Minute1((float32)
                CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_M);

            /* End of Outputs for SubSystem: '<S445>/Poke' */
        }
    }

    /* End of Chart: '<S509>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_Minute2_TLM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_Minute2_TLM_ErrSts'
     */
    /* Transition: '<S511>:19' */
    rtb_TmpSignalConversionAtVeCA_o =
        Rte_Read_VeCANR_y_Minute2_TLM_VeCANR_y_Minute2_TLM
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_c);

VeCANR_y_Minute2_TLM_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_c;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_Minute2_TLM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S515>:1' */
    (void)Rte_Read_VeCANR_b_Minute2_TLM_TO_VeCANR_b_Minute2_TLM_TO(&tmpRead_5);

VeCANR_b_Minute2_TLM_TO_CR1B_BLUEN_ac_Test_1 = tmpRead_5;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S513>/Chart' */
    if (tmpRead_5)
    {
        /* Transition: '<S515>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S515>:6' */
            /* Transition: '<S515>:25' */
            /* Call Fsft */
            VeCANR_y_Minute2_TLM_CallStatus = 2U;

            /* Event: '<S515>:39' */
            /* Transition: '<S515>:29' */
        }
        else
        {
            /* Transition: '<S515>:30' */
            /* Call Tmot */
            VeCANR_y_Minute2_TLM_CallStatus = 3U;

            /* Event: '<S515>:40' */
        }

        /* Transition: '<S515>:36' */
        /* Transition: '<S515>:23' */
    }
    else
    {
        /* Transition: '<S515>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_o) == 133)
        {
            /* Transition: '<S515>:33' */
            /* Transition: '<S515>:35' */
            /* Call Nothing */
            VeCANR_y_Minute2_TLM_CallStatus = 4U;

            /* Transition: '<S515>:23' */
        }
        else
        {
            /* Transition: '<S515>:46' */
            /* Transition: '<S515>:37' */
            /* Call Poke */
            VeCANR_y_Minute2_TLM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S446>/Poke' */
            /* FunctionCaller: '<S516>/Function Caller' incorporates:
             *  DataTypeConversion: '<S516>/Data Type Conversion'
             */
            /* Event: '<S515>:38' */
            Rte_Call_PokeCITR_K_Time_Minute2_PokeCITR_K_Time_Minute2((float32)
                CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_c);

            /* End of Outputs for SubSystem: '<S446>/Poke' */
        }
    }

    /* End of Chart: '<S513>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_Month1_TLM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_Month1_TLM_ErrSts'
     */
    /* Transition: '<S515>:19' */
    rtb_TmpSignalConversionAtVeCA_l =
        Rte_Read_VeCANR_y_Month1_TLM_VeCANR_y_Month1_TLM
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_l);

VeCANR_y_Month1_TLM_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_l;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_Month1_TLM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S519>:1' */
    (void)Rte_Read_VeCANR_b_Month1_TLM_TO_VeCANR_b_Month1_TLM_TO(&tmpRead_6);

VeCANR_b_Month1_TLM_TO_CR1B_BLUEN_ac_Test_1 = tmpRead_6;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S517>/Chart' */
    if (tmpRead_6)
    {
        /* Transition: '<S519>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S519>:6' */
            /* Transition: '<S519>:25' */
            /* Call Fsft */
            VeCANR_y_Month1_TLM_CallStatus = 2U;

            /* Event: '<S519>:39' */
            /* Transition: '<S519>:29' */
        }
        else
        {
            /* Transition: '<S519>:30' */
            /* Call Tmot */
            VeCANR_y_Month1_TLM_CallStatus = 3U;

            /* Event: '<S519>:40' */
        }

        /* Transition: '<S519>:36' */
        /* Transition: '<S519>:23' */
    }
    else
    {
        /* Transition: '<S519>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_l) == 133)
        {
            /* Transition: '<S519>:33' */
            /* Transition: '<S519>:35' */
            /* Call Nothing */
            VeCANR_y_Month1_TLM_CallStatus = 4U;

            /* Transition: '<S519>:23' */
        }
        else
        {
            /* Transition: '<S519>:46' */
            /* Transition: '<S519>:37' */
            /* Call Poke */
            VeCANR_y_Month1_TLM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S447>/Poke' */
            /* FunctionCaller: '<S520>/Function Caller' incorporates:
             *  DataTypeConversion: '<S520>/Data Type Conversion'
             */
            /* Event: '<S519>:38' */
            Rte_Call_PokeCITR_K_Date_Month1_PokeCITR_K_Date_Month1((float32)
                CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_l);

            /* End of Outputs for SubSystem: '<S447>/Poke' */
        }
    }

    /* End of Chart: '<S517>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_Month2_TLM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_Month2_TLM_ErrSts'
     */
    /* Transition: '<S519>:19' */
    rtb_TmpSignalConversionAtVeC_gh =
        Rte_Read_VeCANR_y_Month2_TLM_VeCANR_y_Month2_TLM
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_h);

VeCANR_y_Month2_TLM_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_h;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_Month2_TLM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S523>:1' */
    (void)Rte_Read_VeCANR_b_Month2_TLM_TO_VeCANR_b_Month2_TLM_TO(&tmpRead_7);

VeCANR_b_Month2_TLM_TO_CR1B_BLUEN_ac_Test_1 = tmpRead_7;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S521>/Chart' */
    if (tmpRead_7)
    {
        /* Transition: '<S523>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S523>:6' */
            /* Transition: '<S523>:25' */
            /* Call Fsft */
            VeCANR_y_Month2_TLM_CallStatus = 2U;

            /* Event: '<S523>:39' */
            /* Transition: '<S523>:29' */
        }
        else
        {
            /* Transition: '<S523>:30' */
            /* Call Tmot */
            VeCANR_y_Month2_TLM_CallStatus = 3U;

            /* Event: '<S523>:40' */
        }

        /* Transition: '<S523>:36' */
        /* Transition: '<S523>:23' */
    }
    else
    {
        /* Transition: '<S523>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeC_gh) == 133)
        {
            /* Transition: '<S523>:33' */
            /* Transition: '<S523>:35' */
            /* Call Nothing */
            VeCANR_y_Month2_TLM_CallStatus = 4U;

            /* Transition: '<S523>:23' */
        }
        else
        {
            /* Transition: '<S523>:46' */
            /* Transition: '<S523>:37' */
            /* Call Poke */
            VeCANR_y_Month2_TLM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S448>/Poke' */
            /* FunctionCaller: '<S524>/Function Caller' incorporates:
             *  DataTypeConversion: '<S524>/Data Type Conversion'
             */
            /* Event: '<S523>:38' */
            Rte_Call_PokeCITR_K_Date_Month2_PokeCITR_K_Date_Month2((float32)
                CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_h);

            /* End of Outputs for SubSystem: '<S448>/Poke' */
        }
    }

    /* End of Chart: '<S521>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_Year1_TLM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_Year1_TLM_ErrSts'
     */
    /* Transition: '<S523>:19' */
    rtb_TmpSignalConversionAtVeC_m4 =
        Rte_Read_VeCANR_y_Year1_TLM_VeCANR_y_Year1_TLM
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_Y);

VeCANR_y_Year1_TLM_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_Y;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_Year1_TLM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S527>:1' */
    (void)Rte_Read_VeCANR_b_Year1_TLM_TO_VeCANR_b_Year1_TLM_TO(&tmpRead_8);

VeCANR_b_Year1_TLM_TO_CR1B_BLUEN_ac_Test_1 = tmpRead_8;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S525>/Chart' */
    if (tmpRead_8)
    {
        /* Transition: '<S527>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S527>:6' */
            /* Transition: '<S527>:25' */
            /* Call Fsft */
            VeCANR_y_Year1_TLM_CallStatus = 2U;

            /* Event: '<S527>:39' */
            /* Transition: '<S527>:29' */
        }
        else
        {
            /* Transition: '<S527>:30' */
            /* Call Tmot */
            VeCANR_y_Year1_TLM_CallStatus = 3U;

            /* Event: '<S527>:40' */
        }

        /* Transition: '<S527>:36' */
        /* Transition: '<S527>:23' */
    }
    else
    {
        /* Transition: '<S527>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeC_m4) == 133)
        {
            /* Transition: '<S527>:33' */
            /* Transition: '<S527>:35' */
            /* Call Nothing */
            VeCANR_y_Year1_TLM_CallStatus = 4U;

            /* Transition: '<S527>:23' */
        }
        else
        {
            /* Transition: '<S527>:46' */
            /* Transition: '<S527>:37' */
            /* Call Poke */
            VeCANR_y_Year1_TLM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S449>/Poke' */
            /* FunctionCaller: '<S528>/Function Caller' incorporates:
             *  DataTypeConversion: '<S528>/Data Type Conversion'
             */
            /* Event: '<S527>:38' */
            Rte_Call_PokeCITR_K_Date_Year1_PokeCITR_K_Date_Year1((float32)
                CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_Y);

            /* End of Outputs for SubSystem: '<S449>/Poke' */
        }
    }

    /* End of Chart: '<S525>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_Year2_TLM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_Year2_TLM_ErrSts'
     */
    /* Transition: '<S527>:19' */
    rtb_TmpSignalConversionAtVeC_g4 =
        Rte_Read_VeCANR_y_Year2_TLM_VeCANR_y_Year2_TLM
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_g);

VeCANR_y_Year2_TLM_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_g;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_Year2_TLM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S531>:1' */
    (void)Rte_Read_VeCANR_b_Year2_TLM_TO_VeCANR_b_Year2_TLM_TO(&tmpRead_9);

VeCANR_b_Year2_TLM_TO_CR1B_BLUEN_ac_Test_1 = tmpRead_9;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S529>/Chart' */
    if (tmpRead_9)
    {
        /* Transition: '<S531>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S531>:6' */
            /* Transition: '<S531>:25' */
            /* Call Fsft */
            VeCANR_y_Year2_TLM_CallStatus = 2U;

            /* Event: '<S531>:39' */
            /* Transition: '<S531>:29' */
        }
        else
        {
            /* Transition: '<S531>:30' */
            /* Call Tmot */
            VeCANR_y_Year2_TLM_CallStatus = 3U;

            /* Event: '<S531>:40' */
        }

        /* Transition: '<S531>:36' */
        /* Transition: '<S531>:23' */
    }
    else
    {
        /* Transition: '<S531>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeC_g4) == 133)
        {
            /* Transition: '<S531>:33' */
            /* Transition: '<S531>:35' */
            /* Call Nothing */
            VeCANR_y_Year2_TLM_CallStatus = 4U;

            /* Transition: '<S531>:23' */
        }
        else
        {
            /* Transition: '<S531>:46' */
            /* Transition: '<S531>:37' */
            /* Call Poke */
            VeCANR_y_Year2_TLM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S450>/Poke' */
            /* FunctionCaller: '<S532>/Function Caller' incorporates:
             *  DataTypeConversion: '<S532>/Data Type Conversion'
             */
            /* Event: '<S531>:38' */
            Rte_Call_PokeCITR_K_Date_Year2_PokeCITR_K_Date_Year2((float32)
                CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_g);

            /* End of Outputs for SubSystem: '<S450>/Poke' */
        }
    }

    /* End of Chart: '<S529>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_Year3_TLM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_Year3_TLM_ErrSts'
     */
    /* Transition: '<S531>:19' */
    rtb_TmpSignalConversionAtVeCA_d =
        Rte_Read_VeCANR_y_Year3_TLM_VeCANR_y_Year3_TLM
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR__lr);

VeCANR_y_Year3_TLM_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR__lr;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_Year3_TLM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S535>:1' */
    (void)Rte_Read_VeCANR_b_Year3_TLM_TO_VeCANR_b_Year3_TLM_TO(&tmpRead_a);

VeCANR_b_Year3_TLM_TO_CR1B_BLUEN_ac_Test_1 = tmpRead_a;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S533>/Chart' */
    if (tmpRead_a)
    {
        /* Transition: '<S535>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S535>:6' */
            /* Transition: '<S535>:25' */
            /* Call Fsft */
            VeCANR_y_Year3_TLM_CallStatus = 2U;

            /* Event: '<S535>:39' */
            /* Transition: '<S535>:29' */
        }
        else
        {
            /* Transition: '<S535>:30' */
            /* Call Tmot */
            VeCANR_y_Year3_TLM_CallStatus = 3U;

            /* Event: '<S535>:40' */
        }

        /* Transition: '<S535>:36' */
        /* Transition: '<S535>:23' */
    }
    else
    {
        /* Transition: '<S535>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_d) == 133)
        {
            /* Transition: '<S535>:33' */
            /* Transition: '<S535>:35' */
            /* Call Nothing */
            VeCANR_y_Year3_TLM_CallStatus = 4U;

            /* Transition: '<S535>:23' */
        }
        else
        {
            /* Transition: '<S535>:46' */
            /* Transition: '<S535>:37' */
            /* Call Poke */
            VeCANR_y_Year3_TLM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S451>/Poke' */
            /* FunctionCaller: '<S536>/Function Caller' incorporates:
             *  DataTypeConversion: '<S536>/Data Type Conversion'
             */
            /* Event: '<S535>:38' */
            Rte_Call_PokeCITR_K_Date_Year3_PokeCITR_K_Date_Year3((float32)
                CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR__lr);

            /* End of Outputs for SubSystem: '<S451>/Poke' */
        }
    }

    /* End of Chart: '<S533>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_Year4_TLM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_Year4_TLM_ErrSts'
     */
    /* Transition: '<S535>:19' */
    rtb_TmpSignalConversionAtVeCA_k =
        Rte_Read_VeCANR_y_Year4_TLM_VeCANR_y_Year4_TLM
        (&CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_b);

VeCANR_y_Year4_TLM_CR1B_BLUEN_ac_Test_1 = CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_b;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_Year4_TLM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S539>:1' */
    (void)Rte_Read_VeCANR_b_Year4_TLM_TO_VeCANR_b_Year4_TLM_TO(&tmpRead_b);

VeCANR_b_Year4_TLM_TO_CR1B_BLUEN_ac_Test_1 = tmpRead_b;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S537>/Chart' */
    if (tmpRead_b)
    {
        /* Transition: '<S539>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S539>:6' */
            /* Transition: '<S539>:25' */
            /* Call Fsft */
            VeCANR_y_Year4_TLM_CallStatus = 2U;

            /* Event: '<S539>:39' */
            /* Transition: '<S539>:29' */
        }
        else
        {
            /* Transition: '<S539>:30' */
            /* Call Tmot */
            VeCANR_y_Year4_TLM_CallStatus = 3U;

            /* Event: '<S539>:40' */
        }

        /* Transition: '<S539>:36' */
        /* Transition: '<S539>:23' */
    }
    else
    {
        /* Transition: '<S539>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_k) == 133)
        {
            /* Transition: '<S539>:33' */
            /* Transition: '<S539>:35' */
            /* Call Nothing */
            VeCANR_y_Year4_TLM_CallStatus = 4U;

            /* Transition: '<S539>:23' */
        }
        else
        {
            /* Transition: '<S539>:46' */
            /* Transition: '<S539>:37' */
            /* Call Poke */
            VeCANR_y_Year4_TLM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S452>/Poke' */
            /* FunctionCaller: '<S540>/Function Caller' incorporates:
             *  DataTypeConversion: '<S540>/Data Type Conversion'
             */
            /* Event: '<S539>:38' */
            Rte_Call_PokeCITR_K_Date_Year4_PokeCITR_K_Date_Year4((float32)
                CR1B_BLUEN_ac_B.TmpSignalConversionAtVeCANR_y_b);

            /* End of Outputs for SubSystem: '<S452>/Poke' */
        }
    }

    /* End of Chart: '<S537>/Chart' */
    /* Transition: '<S539>:19' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model initialize function */
FUNC(void, CR1B_BLUEN_CODE) CR1B_BLUEN_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
