/*
 * File: CITR_ac.h
 *
 * Code generated for Simulink model 'CITR_ac'.
 *
 * Model version                  : 9.327
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:27:06 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CITR_ac_h_
#define RTW_HEADER_CITR_ac_h_
#include "Rte_Type.h"
#ifndef CITR_ac_COMMON_INCLUDES_
#define CITR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CITR.h"
#endif                                 /* CITR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S15>/FsftCITR_Pct_HU_ImmChrgTarget2Chrt' */
typedef struct
{
    boolean LeCITR_b_HU_ExtChrgTarget2FA_out;
                                /* '<S15>/FsftCITR_Pct_HU_ImmChrgTarget2Chrt' */
}
B_FsftCITR_Pct_HU_ImmChrgTarget2Chrt_C_T;

/* Block signals for system '<S17>/FsftCITR_Pct_TBM_ExtChrgTarget2Chrt' */
typedef struct
{
    boolean LeCITR_b_TBM_ExtChrgTarget2FA_out;
                               /* '<S17>/FsftCITR_Pct_TBM_ExtChrgTarget2Chrt' */
}
B_FsftCITR_Pct_TBM_ExtChrgTarget2Chrt__T;

/* Block signals for system '<S140>/FsftCITR_e_HU_ChrgSchedType1Chrt' */
typedef struct
{
    boolean LeCITR_b_HU_ChrgSchedType1FA_out;
                                 /* '<S140>/FsftCITR_e_HU_ChrgSchedType1Chrt' */
}
B_FsftCITR_e_HU_ChrgSchedType1Chrt_CIT_T;

/* Block signals (default storage) */
typedef struct tag_B_CITR_ac_T
{
    float32 LeCITR_U_ChrgPortLock_StsB_out;
                                 /* '<S251>/PokeCITR_U_ChrgPortLock_StsBChrt' */
    float32 LeCITR_T_TBM_Sch4_CabTemp_out;
                                  /* '<S250>/PokeCITR_T_TBM_Sch4_CabTempChrt' */
    float32 LeCITR_T_TBM_Sch3_CabTemp_out;
                                  /* '<S249>/PokeCITR_T_TBM_Sch3_CabTempChrt' */
    float32 LeCITR_T_TBM_Sch2_CabTemp_out;
                                  /* '<S248>/PokeCITR_T_TBM_Sch2_CabTempChrt' */
    float32 LeCITR_T_TBM_Sch1_CabTemp_out;
                                  /* '<S247>/PokeCITR_T_TBM_Sch1_CabTempChrt' */
    float32 LeCITR_T_HU_Sch4_CabTemp_out;
                                   /* '<S246>/PokeCITR_T_HU_Sch4_CabTempChrt' */
    float32 LeCITR_T_HU_Sch3_CabTemp_out;
                                   /* '<S245>/PokeCITR_T_HU_Sch3_CabTempChrt' */
    float32 LeCITR_T_HU_Sch2_CabTemp_out;
                                   /* '<S244>/PokeCITR_T_HU_Sch2_CabTempChrt' */
    float32 LeCITR_T_HU_Sch1_CabTemp_out;
                                   /* '<S243>/PokeCITR_T_HU_Sch1_CabTempChrt' */
    float32 LeCITR_Pct_V2VRsrvBatt_out;
                                     /* '<S242>/PokeCITR_Pct_V2VRsrvBattChrt' */
    float32 LeCITR_Pct_V2LRsrvBatt_out;
                                     /* '<S241>/PokeCITR_Pct_V2LRsrvBattChrt' */
    float32 LeCITR_Pct_V2HRsrvBatt_out;
                                     /* '<S240>/PokeCITR_Pct_V2HRsrvBattChrt' */
    float32 LeCITR_Pct_TBM_ImmChrgTarget2_out;
                              /* '<S239>/PokeCITR_Pct_TBM_ImmChrgTarget2Chrt' */
    float32 LeCITR_Pct_TBM_ImmChrgTarget1_out;
                              /* '<S238>/PokeCITR_Pct_TBM_ImmChrgTarget1Chrt' */
    float32 LeCITR_Pct_TBM_ExtChrgTarget2_out;
                              /* '<S237>/PokeCITR_Pct_TBM_ExtChrgTarget2Chrt' */
    float32 LeCITR_Pct_TBM_ExtChrgTarget1_out;
                              /* '<S236>/PokeCITR_Pct_TBM_ExtChrgTarget1Chrt' */
    float32 LeCITR_Pct_HU_ImmChrgTarget2_out;
                               /* '<S235>/PokeCITR_Pct_HU_ImmChrgTarget2Chrt' */
    float32 LeCITR_Pct_HU_ImmChrgTarget1_out;
                               /* '<S234>/PokeCITR_Pct_HU_ImmChrgTarget1Chrt' */
    float32 LeCITR_Pct_HU_ExtChrgTarget2_out;
                               /* '<S233>/PokeCITR_Pct_HU_ExtChrgTarget2Chrt' */
    float32 LeCITR_Pct_HU_ExtChrgTarget1_out;
                               /* '<S232>/PokeCITR_Pct_HU_ExtChrgTarget1Chrt' */
    float32 LeCITR_P_PPRatedPower_out;/* '<S231>/PokeCITR_P_PPRatedPowerChrt' */
    float32 LeCITR_P_PP2RatedPower_out;
                                     /* '<S230>/PokeCITR_P_PP2RatedPowerChrt' */
    float32 LeCITR_P_ChargingDestinationPwr_out;
                            /* '<S229>/PokeCITR_P_ChargingDestinationPwrChrt' */
    float32 LeCITR_K_Date_Day1_out;    /* '<S181>/PokeCITR_K_Date_Day1Chrt' */
    float32 LeCITR_K_DateTmDay_out;    /* '<S175>/PokeCITR_K_DateTmDayChrt' */
    float32 LeCITR_I_PPCurrentDrawSens2_out;
                                /* '<S173>/PokeCITR_I_PPCurrentDrawSens2Chrt' */
    float32 LeCITR_I_PPCurrentDrawSens1_out;
                                /* '<S172>/PokeCITR_I_PPCurrentDrawSens1Chrt' */
    float32 LeCITR_I_PP2CurrentDrawSens2_out;
                               /* '<S171>/PokeCITR_I_PP2CurrentDrawSens2Chrt' */
    float32 LeCITR_I_PP2CurrentDrawSens1_out;
                               /* '<S170>/PokeCITR_I_PP2CurrentDrawSens1Chrt' */
    float32 OutportBufferForV2HRsrvBatt_Init;/* '<S496>/Constant Value2' */
    float32 OutportBufferForV2LRsrvBatt_Init;/* '<S496>/Constant Value26' */
    float32 OutportBufferForV2VRsrvBatt_Init;/* '<S496>/Constant Value27' */
    float32 OutportBufferForPPCurrentDrawSens1_Init;/* '<S496>/Constant Value19' */
    float32 OutportBufferForPPCurrentDrawSens2_Init;/* '<S496>/Constant Value43' */
    float32 OutportBufferForPPRatedPower_Init;/* '<S496>/Constant Value50' */
    float32 OutportBufferForPP2CurrentDrawSens1_Init;/* '<S496>/Constant Value52' */
    float32 OutportBufferForPP2CurrentDrawSens2_Init;/* '<S496>/Constant Value66' */
    float32 OutportBufferForPP2RatedPower_Init;/* '<S496>/Constant Value73' */
    float32 OutportBufferForHU_ExtChrgTarget1_Init;/* '<S489>/Constant Value2' */
    float32 OutportBufferForHU_ExtChrgTarget2_Init;/* '<S489>/Constant Value4' */
    float32 OutportBufferForHU_ImmChrgTarget1_Init;/* '<S489>/Constant Value7' */
    float32 OutportBufferForHU_ImmChrgTarget2_Init;/* '<S489>/Constant Value9' */
    float32 OutportBufferForTBM_ExtChrgTarget1_Init;/* '<S489>/Constant Value19' */
    float32 OutportBufferForTBM_ExtChrgTarget2_Init;/* '<S489>/Constant Value28' */
    float32 OutportBufferForTBM_ImmChrgTarget1_Init;/* '<S489>/Constant Value21' */
    float32 OutportBufferForTBM_ImmChrgTarget2_Init;/* '<S489>/Constant Value29' */
    float32 OutportBufferForDate_Day1_Init;/* '<S504>/Constant Value' */
    float32 OutportBufferForDate_Day2_Init;/* '<S504>/Constant Value1' */
    float32 OutportBufferForDate_Month1_Init;/* '<S504>/Constant Value2' */
    float32 OutportBufferForDate_Month2_Init;/* '<S504>/Constant Value3' */
    float32 OutportBufferForDate_Year1_Init;/* '<S504>/Constant Value4' */
    float32 OutportBufferForDate_Year2_Init;/* '<S504>/Constant Value5' */
    float32 OutportBufferForDate_Year3_Init;/* '<S504>/Constant Value6' */
    float32 OutportBufferForDate_Year4_Init;/* '<S504>/Constant Value7' */
    float32 OutportBufferForTime_Hr1_Init;/* '<S504>/Constant Value8' */
    float32 OutportBufferForTime_Hr2_Init;/* '<S504>/Constant Value9' */
    float32 OutportBufferForTime_Min1_Init;/* '<S504>/Constant Value10' */
    float32 OutportBufferForTime_Min2_Init;/* '<S504>/Constant Value11' */
    float32 OutportBufferForDateTmDay_Init;/* '<S504>/Constant Value16' */
    float32 OutportBufferForDateTmMon_Init;/* '<S504>/Constant Value19' */
    float32 OutportBufferForDateTmYear_Init;/* '<S504>/Constant Value20' */
    float32 OutportBufferForDateTmHour_Init;/* '<S504>/Constant Value21' */
    float32 OutportBufferForDateTmMin_Init;/* '<S504>/Constant Value22' */
    float32 OutportBufferForDateTmSec_Init;/* '<S504>/Constant Value23' */
    float32 OutportBufferForChargingDestinationPwr_I;/* '<S504>/Constant Value24' */
    float32 OutportBufferForTBM_Sch4_Temperature_Ini;/* '<S502>/Constant Value17' */
    float32 OutportBufferForTBM_Sch3_Temperature_Ini;/* '<S500>/Constant Value17' */
    float32 OutportBufferForTBM_Sch2_Temperature_Ini;/* '<S498>/Constant Value17' */
    float32 OutportBufferForTBM_Sch1_Temperature_Ini;/* '<S492>/Constant Value17' */
    float32 OutportBufferForHU_Sch4_Temperature_Init;/* '<S501>/Constant Value17' */
    float32 OutportBufferForHU_Sch3_Temperature_Init;/* '<S499>/Constant Value17' */
    float32 OutportBufferForHU_Sch2_Temperature_Init;/* '<S497>/Constant Value17' */
    float32 OutportBufferForHU_Sch1_Temperature_Init;/* '<S491>/Constant Value17' */
    float32 OutportBufferForChrgPortLock_StsB_Init;/* '<S493>/Constant Value54' */
    sint16 LeCITR_K_TBM_Sch4_Start_Time_Min_out;
                           /* '<S224>/PokeCITR_K_TBM_Sch4_Start_Time_MinChrt' */
    sint16 LeCITR_K_TBM_Sch4_Start_Time_Hr_out;
                            /* '<S223>/PokeCITR_K_TBM_Sch4_Start_Time_HrChrt' */
    sint16 LeCITR_K_TBM_Sch3_Start_Time_Min_out;
                           /* '<S221>/PokeCITR_K_TBM_Sch3_Start_Time_MinChrt' */
    sint16 LeCITR_K_TBM_Sch3_Start_Time_Hr_out;
                            /* '<S220>/PokeCITR_K_TBM_Sch3_Start_Time_HrChrt' */
    sint16 LeCITR_K_TBM_Sch3_End_Time_Min_out;
                             /* '<S219>/PokeCITR_K_TBM_Sch3_End_Time_MinChrt' */
    sint16 LeCITR_K_TBM_Sch3_End_Time_Hr_out;
                              /* '<S218>/PokeCITR_K_TBM_Sch3_End_Time_HrChrt' */
    sint16 LeCITR_K_TBM_Sch2_Start_Time_Min_out;
                           /* '<S216>/PokeCITR_K_TBM_Sch2_Start_Time_MinChrt' */
    sint16 LeCITR_K_TBM_Sch2_Start_Time_Hr_out;
                            /* '<S215>/PokeCITR_K_TBM_Sch2_Start_Time_HrChrt' */
    sint16 LeCITR_K_TBM_Sch2_End_Time_Min_out;
                             /* '<S214>/PokeCITR_K_TBM_Sch2_End_Time_MinChrt' */
    sint16 LeCITR_K_TBM_Sch2_End_Time_Hr_out;
                              /* '<S213>/PokeCITR_K_TBM_Sch2_End_Time_HrChrt' */
    sint16 LeCITR_K_TBM_Sch1_Start_Time_Min_out;
                           /* '<S211>/PokeCITR_K_TBM_Sch1_Start_Time_MinChrt' */
    sint16 LeCITR_K_TBM_Sch1_Start_Time_Hr_out;
                            /* '<S210>/PokeCITR_K_TBM_Sch1_Start_Time_HrChrt' */
    sint16 LeCITR_K_TBM_Sch1_End_Time_Min_out;
                             /* '<S209>/PokeCITR_K_TBM_Sch1_End_Time_MinChrt' */
    sint16 LeCITR_K_TBM_Sch1_End_Time_Hr_out;
                              /* '<S208>/PokeCITR_K_TBM_Sch1_End_Time_HrChrt' */
    sint16 LeCITR_K_HU_Sch4_Start_Time_Min_out;
                            /* '<S206>/PokeCITR_K_HU_Sch4_Start_Time_MinChrt' */
    sint16 LeCITR_K_HU_Sch4_Start_Time_Hr_out;
                             /* '<S205>/PokeCITR_K_HU_Sch4_Start_Time_HrChrt' */
    sint16 LeCITR_K_HU_Sch3_Start_Time_Min_out;
                            /* '<S203>/PokeCITR_K_HU_Sch3_Start_Time_MinChrt' */
    sint16 LeCITR_K_HU_Sch3_Start_Time_Hr_out;
                             /* '<S202>/PokeCITR_K_HU_Sch3_Start_Time_HrChrt' */
    sint16 LeCITR_K_HU_Sch3_End_Time_Min_out;
                              /* '<S201>/PokeCITR_K_HU_Sch3_End_Time_MinChrt' */
    sint16 LeCITR_K_HU_Sch3_End_Time_Hr_out;
                               /* '<S200>/PokeCITR_K_HU_Sch3_End_Time_HrChrt' */
    sint16 LeCITR_K_HU_Sch2_Start_Time_Min_out;
                            /* '<S198>/PokeCITR_K_HU_Sch2_Start_Time_MinChrt' */
    sint16 LeCITR_K_HU_Sch2_Start_Time_Hr_out;
                             /* '<S197>/PokeCITR_K_HU_Sch2_Start_Time_HrChrt' */
    sint16 LeCITR_K_HU_Sch2_End_Time_Min_out;
                              /* '<S196>/PokeCITR_K_HU_Sch2_End_Time_MinChrt' */
    sint16 LeCITR_K_HU_Sch2_End_Time_Hr_out;
                               /* '<S195>/PokeCITR_K_HU_Sch2_End_Time_HrChrt' */
    sint16 LeCITR_K_HU_Sch1_Start_Time_Min_out;
                            /* '<S193>/PokeCITR_K_HU_Sch1_Start_Time_MinChrt' */
    sint16 LeCITR_K_HU_Sch1_Start_Time_Hr_out;
                             /* '<S192>/PokeCITR_K_HU_Sch1_Start_Time_HrChrt' */
    sint16 LeCITR_K_HU_Sch1_End_Time_Min_out;
                              /* '<S191>/PokeCITR_K_HU_Sch1_End_Time_MinChrt' */
    sint16 LeCITR_K_HU_Sch1_End_Time_Hr_out;
                               /* '<S190>/PokeCITR_K_HU_Sch1_End_Time_HrChrt' */
    sint16 OutportBufferForSch4_TBM_Start_Time_Hr_I;/* '<S502>/Constant Value10' */
    sint16 OutportBufferForSch4_TBM_Start_Time_Min_;/* '<S502>/Constant Value11' */
    sint16 OutportBufferForSch3_TBM_Start_Time_Hr_I;/* '<S500>/Constant Value3' */
    sint16 OutportBufferForSch3_TBM_Start_Time_Min_;/* '<S500>/Constant Value4' */
    sint16 OutportBufferForSch3_TBM_End_Time_Hr_Ini;/* '<S500>/Constant Value10' */
    sint16 OutportBufferForSch3_TBM_End_Time_Min_In;/* '<S500>/Constant Value11' */
    sint16 OutportBufferForSch2_TBM_Start_Time_Hr_I;/* '<S498>/Constant Value3' */
    sint16 OutportBufferForSch2_TBM_Start_Time_Min_;/* '<S498>/Constant Value4' */
    sint16 OutportBufferForSch2_TBM_End_Time_Hr_Ini;/* '<S498>/Constant Value10' */
    sint16 OutportBufferForSch2_TBM_End_Time_Min_In;/* '<S498>/Constant Value11' */
    sint16 OutportBufferForSch1_TBM_Start_Time_Hr_I;/* '<S492>/Constant Value3' */
    sint16 OutportBufferForSch1_TBM_Start_Time_Min_;/* '<S492>/Constant Value4' */
    sint16 OutportBufferForSch1_TBM_End_Time_Hr_Ini;/* '<S492>/Constant Value10' */
    sint16 OutportBufferForSch1_TBM_End_Time_Min_In;/* '<S492>/Constant Value11' */
    sint16 OutportBufferForSch4_HU_Start_Time_Hr_In;/* '<S501>/Constant Value3' */
    sint16 OutportBufferForSch4_HU_Start_Time_Min_I;/* '<S501>/Constant Value5' */
    sint16 OutportBufferForSch3_HU_Start_Time_Hr_In;/* '<S499>/Constant Value4' */
    sint16 OutportBufferForSch3_HU_Start_Time_Min_I;/* '<S499>/Constant Value5' */
    sint16 OutportBufferForSch3_HU_End_Time_Hr_Init;/* '<S499>/Constant Value10' */
    sint16 OutportBufferForSch3_HU_End_Time_Min_Ini;/* '<S499>/Constant Value3' */
    sint16 OutportBufferForSch2_HU_Start_Time_Hr_In;/* '<S497>/Constant Value3' */
    sint16 OutportBufferForSch2_HU_Start_Time_Min_I;/* '<S497>/Constant Value4' */
    sint16 OutportBufferForSch2_HU_End_Time_Hr_Init;/* '<S497>/Constant Value10' */
    sint16 OutportBufferForSch2_HU_End_Time_Min_Ini;/* '<S497>/Constant Value11' */
    sint16 OutportBufferForSch1_HU_Start_Time_Hr_In;/* '<S491>/Constant Value3' */
    sint16 OutportBufferForSch1_HU_Start_Time_Min_I;/* '<S491>/Constant Value4' */
    sint16 OutportBufferForSch1_HU_End_Time_Hr_Init;/* '<S491>/Constant Value10' */
    sint16 OutportBufferForSch1_HU_End_Time_Min_Ini;/* '<S491>/Constant Value11' */
    sint16 OutportBufferForChrgPortHbridgeFlt_Init;/* '<S493>/Constant Value8' */
    uint8 LeCITR_t_TimeToCharge_out;  /* '<S424>/PokeCITR_t_TimeToChargeChrt' */
    uint8 LeCITR_l_DistanceToCharge_out;
                                  /* '<S423>/PokeCITR_l_DistanceToChargeChrt' */
    uint8 LeCITR_K_TBM_Sch4_Day_out;  /* '<S222>/PokeCITR_K_TBM_Sch4_DayChrt' */
    uint8 LeCITR_K_TBM_Sch3_Day_out;  /* '<S217>/PokeCITR_K_TBM_Sch3_DayChrt' */
    uint8 LeCITR_K_TBM_Sch2_Day_out;  /* '<S212>/PokeCITR_K_TBM_Sch2_DayChrt' */
    uint8 LeCITR_K_TBM_Sch1_Day_out;  /* '<S207>/PokeCITR_K_TBM_Sch1_DayChrt' */
    uint8 LeCITR_K_HU_Sch4_Day_out;    /* '<S204>/PokeCITR_K_HU_Sch4_DayChrt' */
    uint8 LeCITR_K_HU_Sch3_Day_out;    /* '<S199>/PokeCITR_K_HU_Sch3_DayChrt' */
    uint8 LeCITR_K_HU_Sch2_Day_out;    /* '<S194>/PokeCITR_K_HU_Sch2_DayChrt' */
    uint8 LeCITR_K_HU_Sch1_Day_out;    /* '<S189>/PokeCITR_K_HU_Sch1_DayChrt' */
    uint8 OutportBufferForDistanceToCharge_Init;/* '<S504>/Constant Value29' */
    uint8 OutportBufferForTimeToCharge_Init;/* '<S504>/Constant Value30' */
    uint8 OutportBufferForSch4_TBM_Day_Init;/* '<S502>/Constant Value4' */
    uint8 OutportBufferForSch3_TBM_Day_Init;/* '<S500>/Constant Value5' */
    uint8 OutportBufferForSch2_TBM_Day_Init;/* '<S498>/Constant Value5' */
    uint8 OutportBufferForSch1_TBM_Day_Init;/* '<S492>/Constant Value5' */
    uint8 OutportBufferForSch4_HU_Day_Init;/* '<S501>/Constant Value4' */
    uint8 OutportBufferForSch3_HU_Day_Init;/* '<S499>/Constant Value11' */
    uint8 OutportBufferForSch2_HU_Day_Init;/* '<S497>/Constant Value5' */
    uint8 OutportBufferForSch1_HU_Day_Init;/* '<S491>/Constant Value5' */
    uint8 OutportBufferForDCEOL_SgnlRcvd_Init;/* '<S493>/Constant Value' */
    boolean LeCITR_b_PowerLimit_ReqSgnl_2Rcvd;
                                  /* '<S414>/PokeCITR_e_PowerLimit_Req_2Chrt' */
    boolean LeCITR_b_PowerLimit_ReqSgnl_Rcvd;
                                    /* '<S413>/PokeCITR_e_PowerLimit_ReqChrt' */
    boolean LeCITR_b_DoorLockLastElSts_2Sgnl_Rcvd;
                               /* '<S382>/PokeCITR_e_DoorLockLastElSts_2Chrt' */
    boolean LeCITR_b_DoorLockLastElStsSgnl_Rcvd;
                                 /* '<S381>/PokeCITR_e_DoorLockLastElStsChrt' */
    boolean LeCITR_b_V2VSubmit_out;    /* '<S345>/PokeCITR_b_V2VSubmitChrt' */
    boolean LeCITR_b_V2VReq_out;       /* '<S344>/PokeCITR_b_V2VReqChrt' */
    boolean LeCITR_b_V2VModeReq_out;   /* '<S343>/PokeCITR_b_V2VModeReqChrt' */
    boolean LeCITR_b_V2L_FrunkReq_out;/* '<S342>/PokeCITR_b_V2L_FrunkReqChrt' */
    boolean LeCITR_b_V2L_AllReq_out;   /* '<S341>/PokeCITR_b_V2L_AllReqChrt' */
    boolean LeCITR_b_V2LTrunkReq_out;  /* '<S340>/PokeCITR_b_V2LTrunkReqChrt' */
    boolean LeCITR_b_V2LSubmit_out;    /* '<S339>/PokeCITR_b_V2LSubmitChrt' */
    boolean LeCITR_b_V2LModeReq_out;   /* '<S338>/PokeCITR_b_V2LModeReqChrt' */
    boolean LeCITR_b_V2HSubmit_out;    /* '<S337>/PokeCITR_b_V2HSubmitChrt' */
    boolean LeCITR_b_V2HReq_out;       /* '<S336>/PokeCITR_b_V2HReqChrt' */
    boolean LeCITR_b_V2HModeReq_out;   /* '<S335>/PokeCITR_b_V2HModeReqChrt' */
    boolean LeCITR_b_TBMStopChrg_out;  /* '<S316>/PokeCITR_b_TBMStopChrgChrt' */
    boolean LeCITR_b_RsErrSPP2_out;    /* '<S314>/PokeCITR_b_RsErrSPP2Chrt' */
    boolean LeCITR_b_RsErrSPP2FA_out;  /* '<S314>/PokeCITR_b_RsErrSPP2Chrt' */
    boolean LeCITR_b_RsErrSPP_out;     /* '<S313>/PokeCITR_b_RsErrSPPChrt' */
    boolean LeCITR_b_RsErrSPPFA_out;   /* '<S313>/PokeCITR_b_RsErrSPPChrt' */
    boolean LeCITR_b_PP_LIN_Parity_Err_out;
                                 /* '<S312>/PokeCITR_b_PP_LIN_Parity_ErrChrt' */
    boolean LeCITR_b_PP_LIN_Data_Err_out;
                                   /* '<S311>/PokeCITR_b_PP_LIN_Data_ErrChrt' */
    boolean LeCITR_b_PP_LIN_Cksm_Err_out;
                                   /* '<S310>/PokeCITR_b_PP_LIN_Cksm_ErrChrt' */
    boolean LeCITR_b_PP_Gnd_Fault_Det_out;
                                  /* '<S309>/PokeCITR_b_PP_Gnd_Fault_DetChrt' */
    boolean LeCITR_b_PPLidSwitchSts240_out;
                                 /* '<S308>/PokeCITR_b_PPLidSwitchSts240Chrt' */
    boolean LeCITR_b_PPLidSwitchSts120B_out;
                                /* '<S307>/PokeCITR_b_PPLidSwitchSts120BChrt' */
    boolean LeCITR_b_PPLidSwitchSts120A_out;
                                /* '<S306>/PokeCITR_b_PPLidSwitchSts120AChrt' */
    boolean LeCITR_b_PPButtonSts_out;  /* '<S305>/PokeCITR_b_PPButtonStsChrt' */
    boolean LeCITR_b_PPACPresentSens2_out;
                                  /* '<S304>/PokeCITR_b_PPACPresentSens2Chrt' */
    boolean LeCITR_b_PPACPresentSens2FA_out;
                                  /* '<S304>/PokeCITR_b_PPACPresentSens2Chrt' */
    boolean LeCITR_b_PPACPresentSens1_out;
                                  /* '<S303>/PokeCITR_b_PPACPresentSens1Chrt' */
    boolean LeCITR_b_PPACPresentSens1FA_out;
                                  /* '<S303>/PokeCITR_b_PPACPresentSens1Chrt' */
    boolean LeCITR_b_PP2_LIN_Parity_Err_out;
                                /* '<S302>/PokeCITR_b_PP2_LIN_Parity_ErrChrt' */
    boolean LeCITR_b_PP2_LIN_Data_Err_out;
                                  /* '<S301>/PokeCITR_b_PP2_LIN_Data_ErrChrt' */
    boolean LeCITR_b_PP2_LIN_Cksm_Err_out;
                                  /* '<S300>/PokeCITR_b_PP2_LIN_Cksm_ErrChrt' */
    boolean LeCITR_b_PP2_Gnd_Fault_Det_out;
                                 /* '<S299>/PokeCITR_b_PP2_Gnd_Fault_DetChrt' */
    boolean LeCITR_b_PP2LidSwitchSts120B_out;
                               /* '<S298>/PokeCITR_b_PP2LidSwitchSts120BChrt' */
    boolean LeCITR_b_PP2LidSwitchSts120A_out;
                               /* '<S297>/PokeCITR_b_PP2LidSwitchSts120AChrt' */
    boolean LeCITR_b_PP2LidSwitchSts240_out;
                                /* '<S296>/PokeCITR_b_PP2LidSwitchSts240Chrt' */
    boolean LeCITR_b_PP2ButtonSts_out;/* '<S295>/PokeCITR_b_PP2ButtonStsChrt' */
    boolean LeCITR_b_PP2ACPresentSens2_out;
                                 /* '<S294>/PokeCITR_b_PP2ACPresentSens2Chrt' */
    boolean LeCITR_b_PP2ACPresentSens2FA_out;
                                 /* '<S294>/PokeCITR_b_PP2ACPresentSens2Chrt' */
    boolean LeCITR_b_PP2ACPresentSens1_out;
                                 /* '<S293>/PokeCITR_b_PP2ACPresentSens1Chrt' */
    boolean LeCITR_b_PP2ACPresentSens1FA_out;
                                 /* '<S293>/PokeCITR_b_PP2ACPresentSens1Chrt' */
    boolean LeCITR_b_CoopCh_VehLocation_out;
                                /* '<S271>/PokeCITR_b_CoopCh_VehLocationChrt' */
    boolean LeCITR_b_ChrgPortLock_StsC_out;
                                 /* '<S268>/PokeCITR_b_ChrgPortLock_StsCChrt' */
    boolean LeCITR_b_TBM_Sch4_DaySgnl_Rcvd;
                                      /* '<S222>/PokeCITR_K_TBM_Sch4_DayChrt' */
    boolean LeCITR_b_TBM_Sch3_DaySgnl_Rcvd;
                                      /* '<S217>/PokeCITR_K_TBM_Sch3_DayChrt' */
    boolean LeCITR_b_TBM_Sch2_DaySgnl_Rcvd;
                                      /* '<S212>/PokeCITR_K_TBM_Sch2_DayChrt' */
    boolean LeCITR_b_TBM_Sch1_DaySgnl_Rcvd;
                                      /* '<S207>/PokeCITR_K_TBM_Sch1_DayChrt' */
    boolean LeCITR_b_HU_Sch4_DaySgnl_Rcvd;/* '<S204>/PokeCITR_K_HU_Sch4_DayChrt' */
    boolean LeCITR_b_HU_Sch3_DaySgnl_Rcvd;/* '<S199>/PokeCITR_K_HU_Sch3_DayChrt' */
    boolean LeCITR_b_HU_Sch2_DaySgnl_Rcvd;/* '<S194>/PokeCITR_K_HU_Sch2_DayChrt' */
    boolean LeCITR_b_HU_Sch1_DaySgnl_Rcvd;/* '<S189>/PokeCITR_K_HU_Sch1_DayChrt' */
    boolean LeCITR_b_Date_Day1Sgnl_Rcvd;/* '<S181>/PokeCITR_K_Date_Day1Chrt' */
    boolean LeCITR_b_DateTmDaySgnl_Rcvd;/* '<S175>/PokeCITR_K_DateTmDayChrt' */
    boolean OutportBufferForV2HModeReq_Init;/* '<S496>/Constant Value28' */
    boolean OutportBufferForV2HModeReq_FA_Init;/* '<S496>/Constant Value6' */
    boolean OutportBufferForV2HReq_Init;/* '<S496>/Constant Value29' */
    boolean OutportBufferForV2HReq_FA_Init;/* '<S496>/Constant Value1' */
    boolean OutportBufferForV2HRsrvBatt_FA_Init;/* '<S496>/Constant Value3' */
    boolean OutportBufferForV2HSubmit_Init;/* '<S496>/Constant Value4' */
    boolean OutportBufferForV2HSubmit_FA_Init;/* '<S496>/Constant Value5' */
    boolean OutportBufferForV2L_AllReq_Init;/* '<S496>/Constant Value7' */
    boolean OutportBufferForV2L_AllReq_FA_Init;/* '<S496>/Constant Value8' */
    boolean OutportBufferForV2L_FrunkReq_Init;/* '<S496>/Constant Value9' */
    boolean OutportBufferForV2L_FrunkReq_FA_Init;/* '<S496>/Constant Value10' */
    boolean OutportBufferForV2LModeReq_Init;/* '<S496>/Constant Value11' */
    boolean OutportBufferForV2LModeReq_FA_Init;/* '<S496>/Constant Value12' */
    boolean OutportBufferForV2LRsrvBatt_FA_Init;/* '<S496>/Constant Value13' */
    boolean OutportBufferForV2LSubmit_Init;/* '<S496>/Constant Value25' */
    boolean OutportBufferForV2LSubmit_FA_Init;/* '<S496>/Constant Value14' */
    boolean OutportBufferForV2LTrunkReq_Init;/* '<S496>/Constant Value16' */
    boolean OutportBufferForV2LTrunkReq_FA_Init;/* '<S496>/Constant Value15' */
    boolean OutportBufferForV2VModeReq_Init;/* '<S496>/Constant Value30' */
    boolean OutportBufferForV2VModeReq_FA_Init;/* '<S496>/Constant Value17' */
    boolean OutportBufferForV2VReq_Init;/* '<S496>/Constant Value31' */
    boolean OutportBufferForV2VReq_FA_Init;/* '<S496>/Constant Value18' */
    boolean OutportBufferForV2VRsrvBatt_FA_Init;/* '<S496>/Constant Value20' */
    boolean OutportBufferForV2VSubmit_Init;/* '<S496>/Constant Value23' */
    boolean OutportBufferForV2VSubmit_FA_Init;/* '<S496>/Constant Value24' */
    boolean OutportBufferForPPCurrentDrawSens1_FA_In;/* '<S496>/Constant Value21' */
    boolean OutportBufferForPPButtonSts_Init;/* '<S496>/Constant Value22' */
    boolean OutportBufferForPPButtonSts_FA_Init;/* '<S496>/Constant Value32' */
    boolean OutportBufferForPPLidSwitchSts120A_Init;/* '<S496>/Constant Value33' */
    boolean OutportBufferForPPLidSwitchSts120A_FA_In;/* '<S496>/Constant Value34' */
    boolean OutportBufferForPPLidSwitchSts120B_Init;/* '<S496>/Constant Value35' */
    boolean OutportBufferForPPLidSwitchSts120B_FA_In;/* '<S496>/Constant Value36' */
    boolean OutportBufferForPPLidSwitchSts240_Init;/* '<S496>/Constant Value37' */
    boolean OutportBufferForPPLidSwitchSts240_FA_Ini;/* '<S496>/Constant Value38' */
    boolean OutportBufferForPPACPresentSens1_Init;/* '<S496>/Constant Value39' */
    boolean OutportBufferForPPACPresentSens1_FA_Init;/* '<S496>/Constant Value40' */
    boolean OutportBufferForPPACPresentSens2_Init;/* '<S496>/Constant Value41' */
    boolean OutportBufferForPPACPresentSens2_FA_Init;/* '<S496>/Constant Value42' */
    boolean OutportBufferForPPCurrentDrawSens2_FA_In;/* '<S496>/Constant Value44' */
    boolean OutportBufferForPPFaultRsn_FA_Init;/* '<S496>/Constant Value45' */
    boolean OutportBufferForPPFault_FA_Init;/* '<S496>/Constant Value46' */
    boolean OutportBufferForPPLEDFault_FA_Init;/* '<S496>/Constant Value47' */
    boolean OutportBufferForRsErrSPP_Init;/* '<S496>/Constant Value48' */
    boolean OutportBufferForRsErrSPP_FA_Init;/* '<S496>/Constant Value49' */
    boolean OutportBufferForPPRatedPower_FA_Init;/* '<S496>/Constant Value51' */
    boolean OutportBufferForPP2CurrentDrawSens1_FA_I;/* '<S496>/Constant Value53' */
    boolean OutportBufferForPP2ButtonSts_Init;/* '<S496>/Constant Value54' */
    boolean OutportBufferForPP2ButtonSts_FA_Init;/* '<S496>/Constant Value55' */
    boolean OutportBufferForPP2LidSwitchSts120A_Init;/* '<S496>/Constant Value56' */
    boolean OutportBufferForPP2LidSwitchSts120A_FA_I;/* '<S496>/Constant Value57' */
    boolean OutportBufferForPP2LidSwitchSts120B_Init;/* '<S496>/Constant Value58' */
    boolean OutportBufferForPP2LidSwitchSts120B_FA_I;/* '<S496>/Constant Value59' */
    boolean OutportBufferForPP2LidSwitchSts240_Init;/* '<S496>/Constant Value60' */
    boolean OutportBufferForPP2LidSwitchSts240_FA_In;/* '<S496>/Constant Value61' */
    boolean OutportBufferForPP2ACPresentSens1_Init;/* '<S496>/Constant Value62' */
    boolean OutportBufferForPP2ACPresentSens1_FA_Ini;/* '<S496>/Constant Value63' */
    boolean OutportBufferForPP2ACPresentSens2_Init;/* '<S496>/Constant Value64' */
    boolean OutportBufferForPP2ACPresentSens2_FA_Ini;/* '<S496>/Constant Value65' */
    boolean OutportBufferForPP2CurrentDrawSens2_FA_I;/* '<S496>/Constant Value67' */
    boolean OutportBufferForPP2FaultRsn_FA_Init;/* '<S496>/Constant Value68' */
    boolean OutportBufferForPP2Fault_FA_Init;/* '<S496>/Constant Value69' */
    boolean OutportBufferForPP2LEDFault_FA_Init;/* '<S496>/Constant Value70' */
    boolean OutportBufferForRsErrSPP2_Init;/* '<S496>/Constant Value71' */
    boolean OutportBufferForRsErrSPP2_FA_Init;/* '<S496>/Constant Value72' */
    boolean OutportBufferForPP2RatedPower_FA_Init;/* '<S496>/Constant Value74' */
    boolean OutportBufferForPP_LED_A_Feedback_FA_Ini;/* '<S496>/Constant Value75' */
    boolean OutportBufferForPP_LED_B_Feedback_FA_Ini;/* '<S496>/Constant Value76' */
    boolean OutportBufferForPP_LED_C_Feedback_FA_Ini;/* '<S496>/Constant Value77' */
    boolean OutportBufferForPP_LED_A_FailStatus_FA_I;/* '<S496>/Constant Value78' */
    boolean OutportBufferForPP_LED_B_FailStatus_FA_I;/* '<S496>/Constant Value79' */
    boolean OutportBufferForPP_LED_C_FailStatus_FA_I;/* '<S496>/Constant Value80' */
    boolean OutportBufferForPP_LED_A_Color_Feedback_;/* '<S496>/Constant Value81' */
    boolean OutportBufferForPP_LED_B_Color_Feedback_;/* '<S496>/Constant Value82' */
    boolean OutportBufferForPP_LED_C_Color_Feedback_;/* '<S496>/Constant Value83' */
    boolean OutportBufferForPP_LIN_Checksum_Error_In;/* '<S496>/Constant Value84' */
    boolean OutportBufferForPP_LIN_Checksum_Error_FA;/* '<S496>/Constant Value85' */
    boolean OutportBufferForPP_LIN_Data_Error_Init;/* '<S496>/Constant Value86' */
    boolean OutportBufferForPP_LIN_Data_Error_FA_Ini;/* '<S496>/Constant Value87' */
    boolean OutportBufferForPP_LIN_Parity_Error_Init;/* '<S496>/Constant Value88' */
    boolean OutportBufferForPP_LIN_Parity_Error_FA_I;/* '<S496>/Constant Value89' */
    boolean OutportBufferForPP_Gnd_Fault_Detected_In;/* '<S496>/Constant Value90' */
    boolean OutportBufferForPP_Gnd_Fault_Detected_FA;/* '<S496>/Constant Value91' */
    boolean OutportBufferForPP2_LED_A_Feedback_FA_In;/* '<S496>/Constant Value92' */
    boolean OutportBufferForPP2_LED_B_Feedback_FA_In;/* '<S496>/Constant Value93' */
    boolean OutportBufferForPP2_LED_A_FailStatus_FA_;/* '<S496>/Constant Value94' */
    boolean OutportBufferForPP2_LED_B_FailStatus_FA_;/* '<S496>/Constant Value95' */
    boolean OutportBufferForPP2_LED_A_Color_Feedback;/* '<S496>/Constant Value96' */
    boolean OutportBufferForPP2_LED_B_Color_Feedback;/* '<S496>/Constant Value97' */
    boolean OutportBufferForPP2_LIN_Checksum_Error_I;/* '<S496>/Constant Value98' */
    boolean OutportBufferForPP2_LIN_Checksum_Error_F;/* '<S496>/Constant Value99' */
    boolean OutportBufferForPP2_LIN_Data_Error_Init;/* '<S496>/Constant Value100' */
    boolean OutportBufferForPP2_LIN_Data_Error_FA_In;/* '<S496>/Constant Value101' */
    boolean OutportBufferForPP2_LIN_Parity_Error_Ini;/* '<S496>/Constant Value102' */
    boolean OutportBufferForPP2_LIN_Parity_Error_FA_;/* '<S496>/Constant Value103' */
    boolean OutportBufferForPP2_Gnd_Fault_Detected_I;/* '<S496>/Constant Value104' */
    boolean OutportBufferForPP2_Gnd_Fault_Detected_F;/* '<S496>/Constant Value105' */
    boolean OutportBufferForVeCITR_b_DoorLockLastElS;/* '<S503>/Const2' */
    boolean OutportBufferForVeCITR_b_Lock_Sense_Out_;/* '<S503>/Const3' */
    boolean OutportBufferForVeCITR_b_PwrLimReq_FA_Ou;/* '<S503>/Const5' */
    boolean OutportBufferForVeCITR_b_PwrLimReq_SgnlR;/* '<S503>/Const6' */
    boolean OutportBufferForVeCITR_b_ChrgPortDoorSts;/* '<S503>/Const7' */
    boolean OutportBufferForVeCITR_b_PortLockBCM_Cmd;/* '<S503>/Const8' */
    boolean OutportBufferForVeCITR_b_HBridge_ChrgPor;/* '<S503>/Const10' */
    boolean OutportBufferForVeCITR_b_ChrgPortLockSts;/* '<S503>/Const11' */
    boolean OutportBufferForVeCITR_b_ChrgPortLockS_k;/* '<S503>/Const12' */
    boolean OutportBufferForVeCITR_b_ChrgPortSts_Out;/* '<S503>/Const13' */
    boolean OutportBufferForLockSense_write;/* '<S503>/Const' */
    boolean OutportBufferForHU_ChrgSchedType1_FA_Ini;/* '<S489>/Constant Value6' */
    boolean OutportBufferForHU_ChrgSchedType2_FA_Ini;/* '<S489>/Constant Value1' */
    boolean OutportBufferForHU_ExtChrgTarget1_FA_Ini;/* '<S489>/Constant Value3' */
    boolean OutportBufferForHU_ExtChrgTarget2_FA_Ini;/* '<S489>/Constant Value5' */
    boolean OutportBufferForHU_ImmChrgTarget1_FA_Ini;/* '<S489>/Constant Value8' */
    boolean OutportBufferForHU_ImmChrgTarget2_FA_Ini;/* '<S489>/Constant Value10' */
    boolean OutportBufferForCoopCh_VehLocation_Init;/* '<S489>/Constant Value11' */
    boolean OutportBufferForCoopCh_VehLocation_FA_In;/* '<S489>/Constant Value12' */
    boolean OutportBufferForRmtChrgPortLkCmd_FA_Init;/* '<S489>/Constant Value13' */
    boolean OutportBufferForRmtChrgPortLkCmd_SgnlRcv;/* '<S489>/Constant Value27' */
    boolean OutportBufferForCoopCh_ChrgCmd_FA_Init;/* '<S489>/Constant Value14' */
    boolean OutportBufferForTBMStopChrg_Init;/* '<S489>/Constant Value16' */
    boolean OutportBufferForTBMStopChrg_FA_Init;/* '<S489>/Constant Value15' */
    boolean OutportBufferForTBM_ChrgSchedType1_FA_In;/* '<S489>/Constant Value17' */
    boolean OutportBufferForTBM_ChrgSchedType2_FA_In;/* '<S489>/Constant Value18' */
    boolean OutportBufferForTBM_ExtChrgTarget1_FA_In;/* '<S489>/Constant Value20' */
    boolean OutportBufferForTBM_ExtChrgTarget2_FA_In;/* '<S489>/Constant Value22' */
    boolean OutportBufferForTBM_ImmChrgTarget1_FA_In;/* '<S489>/Constant Value24' */
    boolean OutportBufferForTBM_ImmChrgTarget2_FA_In;/* '<S489>/Constant Value26' */
    boolean OutportBufferForDate_Day1_FA_Init;/* '<S504>/Constant Value13' */
    boolean OutportBufferForDate_Day1_SgnlRcvd_Init;/* '<S504>/Constant Value14' */
    boolean OutportBufferForChrgNow_Init;/* '<S504>/Constant Value12' */
    boolean OutportBufferForTBM_ChrgNow_Init;/* '<S504>/Constant Value15' */
    boolean OutportBufferForDateTmDay_FA_Init;/* '<S504>/Constant Value17' */
    boolean OutportBufferForDateTmDay_SgnlRcvd_Init;/* '<S504>/Constant Value18' */
    boolean OutportBufferForDateTmFormat_FA_Init;/* '<S504>/Constant Value25' */
    boolean OutportBufferForChargingDestinationPwr_F;/* '<S504>/Constant Value26' */
    boolean OutportBufferForDistanceToCharge_FA_Init;/* '<S504>/Constant Value27' */
    boolean OutportBufferForTimeToCharge_FA_Init;/* '<S504>/Constant Value28' */
    boolean OutportBufferForFOTA_Install_Type_FA_Ini;/* '<S504>/Constant Value31' */
    boolean OutportBufferForSch4_TBM_Enbl_Init;/* '<S502>/Constant Value1' */
    boolean OutportBufferForSch4_TBM_Submit_Init;/* '<S502>/Constant Value2' */
    boolean OutportBufferForSch4_TBM_Day_FA_Init;/* '<S502>/Constant Value8' */
    boolean OutportBufferForSch4_TBM_Day_SgnlRcvd_In;/* '<S502>/Constant Value9' */
    boolean OutportBufferForTBM_Sch4_Start_Time_HrFA;/* '<S502>/Constant Value6' */
    boolean OutportBufferForTBM_Sch4_Start_Time_MinF;/* '<S502>/Constant Value7' */
    boolean OutportBufferForTBM_Sch4_TemperatureFA_I;/* '<S502>/Constant Value18' */
    boolean OutportBufferForTBM_Sch4_AllowFA_Init;/* '<S502>/Constant Value19' */
    boolean OutportBufferForSch3_TBM_Priority_Init;/* '<S500>/Constant Value' */
    boolean OutportBufferForSch3_TBM_ChargeUntilFull;/* '<S500>/Constant Value13' */
    boolean OutportBufferForSch3_TBM_Do_Not_Repeat_I;/* '<S500>/Constant Value14' */
    boolean OutportBufferForSch3_TBM_Enbl_Init;/* '<S500>/Constant Value1' */
    boolean OutportBufferForSch3_TBM_Submit_Init;/* '<S500>/Constant Value2' */
    boolean OutportBufferForSch3_TBM_Day_FA_Init;/* '<S500>/Constant Value8' */
    boolean OutportBufferForSch3_TBM_Day_SgnlRcvd_In;/* '<S500>/Constant Value9' */
    boolean OutportBufferForTBM_Sch3_Start_Time_HrFA;/* '<S500>/Constant Value6' */
    boolean OutportBufferForTBM_Sch3_Start_Time_MinF;/* '<S500>/Constant Value7' */
    boolean OutportBufferForTBM_Sch3_End_Time_HrFA_I;/* '<S500>/Constant Value12' */
    boolean OutportBufferForTBM_Sch3_End_Time_MinFA_;/* '<S500>/Constant Value15' */
    boolean OutportBufferForTBM_Sch3_TypeFA_Init;/* '<S500>/Constant Value16' */
    boolean OutportBufferForTBM_Sch3_TemperatureFA_I;/* '<S500>/Constant Value18' */
    boolean OutportBufferForTBM_Sch3_AllowFA_Init;/* '<S500>/Constant Value19' */
    boolean OutportBufferForSch2_TBM_Priority_Init;/* '<S498>/Constant Value' */
    boolean OutportBufferForSch2_TBM_ChargeUntilFull;/* '<S498>/Constant Value13' */
    boolean OutportBufferForSch2_TBM_Do_Not_Repeat_I;/* '<S498>/Constant Value14' */
    boolean OutportBufferForSch2_TBM_Enbl_Init;/* '<S498>/Constant Value1' */
    boolean OutportBufferForSch2_TBM_Submit_Init;/* '<S498>/Constant Value2' */
    boolean OutportBufferForSch2_TBM_Day_FA_Init;/* '<S498>/Constant Value8' */
    boolean OutportBufferForSch2_TBM_Day_SgnlRcvd_In;/* '<S498>/Constant Value9' */
    boolean OutportBufferForTBM_Sch2_Start_Time_HrFA;/* '<S498>/Constant Value6' */
    boolean OutportBufferForTBM_Sch2_Start_Time_MinF;/* '<S498>/Constant Value7' */
    boolean OutportBufferForTBM_Sch2_End_Time_HrFA_I;/* '<S498>/Constant Value12' */
    boolean OutportBufferForTBM_Sch2_End_Time_MinFA_;/* '<S498>/Constant Value15' */
    boolean OutportBufferForTBM_Sch2_TypeFA_Init;/* '<S498>/Constant Value16' */
    boolean OutportBufferForTBM_Sch2_TemperatureFA_I;/* '<S498>/Constant Value18' */
    boolean OutportBufferForSch1_TBM_Priority_Init;/* '<S492>/Constant Value' */
    boolean OutportBufferForSch1_TBM_ChargeUntilFull;/* '<S492>/Constant Value13' */
    boolean OutportBufferForSch1_TBM_Do_Not_Repeat_I;/* '<S492>/Constant Value14' */
    boolean OutportBufferForSch1_TBM_Enbl_Init;/* '<S492>/Constant Value1' */
    boolean OutportBufferForSch1_TBM_Submit_Init;/* '<S492>/Constant Value2' */
    boolean OutportBufferForSch1_TBM_Day_FA_Init;/* '<S492>/Constant Value8' */
    boolean OutportBufferForSch1_TBM_Day_SgnlRcvd_In;/* '<S492>/Constant Value9' */
    boolean OutportBufferForTBM_Sch1_Start_Time_HrFA;/* '<S492>/Constant Value6' */
    boolean OutportBufferForTBM_Sch1_Start_Time_MinF;/* '<S492>/Constant Value7' */
    boolean OutportBufferForTBM_Sch1_End_Time_HrFA_I;/* '<S492>/Constant Value12' */
    boolean OutportBufferForTBM_Sch1_End_Time_MinFA_;/* '<S492>/Constant Value15' */
    boolean OutportBufferForTBM_Sch1_TypeFA_Init;/* '<S492>/Constant Value16' */
    boolean OutportBufferForTBM_Sch1_TemperatureFA_I;/* '<S492>/Constant Value18' */
    boolean OutportBufferForSch4_HU_Enbl_Init;/* '<S501>/Constant Value1' */
    boolean OutportBufferForSch4_HU_Submit_Init;/* '<S501>/Constant Value2' */
    boolean OutportBufferForSch4_HU_Day_FA_Init;/* '<S501>/Constant Value8' */
    boolean OutportBufferForSch4_HU_Day_SgnlRcvd_Ini;/* '<S501>/Constant Value9' */
    boolean OutportBufferForHU_Sch4_Start_Time_HrFA_;/* '<S501>/Constant Value6' */
    boolean OutportBufferForHU_Sch4_Start_Time_MinFA;/* '<S501>/Constant Value7' */
    boolean OutportBufferForHU_Sch4_TemperatureFA_In;/* '<S501>/Constant Value18' */
    boolean OutportBufferForHU_Sch4_AllowFA_Init;/* '<S501>/Constant Value19' */
    boolean OutportBufferForSch3_HU_Priority_Init;/* '<S499>/Constant Value' */
    boolean OutportBufferForSch3_HU_ChargeUntilFull_;/* '<S499>/Constant Value13' */
    boolean OutportBufferForSch3_HU_Do_Not_Repeat_In;/* '<S499>/Constant Value14' */
    boolean OutportBufferForSch3_HU_Enbl_Init;/* '<S499>/Constant Value1' */
    boolean OutportBufferForSch3_HU_Submit_Init;/* '<S499>/Constant Value2' */
    boolean OutportBufferForSch3_HU_Day_FA_Init;/* '<S499>/Constant Value8' */
    boolean OutportBufferForSch3_HU_Day_SgnlRcvd_Ini;/* '<S499>/Constant Value9' */
    boolean OutportBufferForHU_Sch3_Start_Time_HrFA_;/* '<S499>/Constant Value6' */
    boolean OutportBufferForHU_Sch3_Start_Time_MinFA;/* '<S499>/Constant Value7' */
    boolean OutportBufferForHU_Sch3_End_Time_HrFA_In;/* '<S499>/Constant Value12' */
    boolean OutportBufferForHU_Sch3_End_Time_MinFA_I;/* '<S499>/Constant Value15' */
    boolean OutportBufferForHU_Sch3_TypeFA_Init;/* '<S499>/Constant Value16' */
    boolean OutportBufferForHU_Sch3_TemperatureFA_In;/* '<S499>/Constant Value18' */
    boolean OutportBufferForHU_Sch3_AllowFA_Init;/* '<S499>/Constant Value19' */
    boolean OutportBufferForSch2_HU_Priority_Init;/* '<S497>/Constant Value' */
    boolean OutportBufferForSch2_HU_ChargeUntilFull_;/* '<S497>/Constant Value13' */
    boolean OutportBufferForSch2_HU_Do_Not_Repeat_In;/* '<S497>/Constant Value14' */
    boolean OutportBufferForSch2_HU_Enbl_Init;/* '<S497>/Constant Value1' */
    boolean OutportBufferForSch2_HU_Submit_Init;/* '<S497>/Constant Value2' */
    boolean OutportBufferForSch2_HU_Day_FA_Init;/* '<S497>/Constant Value8' */
    boolean OutportBufferForSch2_HU_Day_SgnlRcvd_Ini;/* '<S497>/Constant Value9' */
    boolean OutportBufferForHU_Sch2_Start_Time_HrFA_;/* '<S497>/Constant Value6' */
    boolean OutportBufferForHU_Sch2_Start_Time_MinFA;/* '<S497>/Constant Value7' */
    boolean OutportBufferForHU_Sch2_End_Time_HrFA_In;/* '<S497>/Constant Value12' */
    boolean OutportBufferForHU_Sch2_End_Time_MinFA_I;/* '<S497>/Constant Value15' */
    boolean OutportBufferForHU_Sch2_TypeFA_Init;/* '<S497>/Constant Value16' */
    boolean OutportBufferForHU_Sch2_TemperatureFA_In;/* '<S497>/Constant Value18' */
    boolean OutportBufferForSch1_HU_Priority_Init;/* '<S491>/Constant Value' */
    boolean OutportBufferForSch1_HU_ChargeUntilFull_;/* '<S491>/Constant Value13' */
    boolean OutportBufferForSch1_HU_Do_Not_Repeat_In;/* '<S491>/Constant Value14' */
    boolean OutportBufferForSch1_HU_Enbl_Init;/* '<S491>/Constant Value1' */
    boolean OutportBufferForSch1_HU_Submit_Init;/* '<S491>/Constant Value2' */
    boolean OutportBufferForSch1_HU_Day_FA_Init;/* '<S491>/Constant Value8' */
    boolean OutportBufferForSch1_HU_Day_SgnlRcvd_Ini;/* '<S491>/Constant Value9' */
    boolean OutportBufferForHU_Sch1_Start_Time_HrFA_;/* '<S491>/Constant Value6' */
    boolean OutportBufferForHU_Sch1_Start_Time_MinFA;/* '<S491>/Constant Value7' */
    boolean OutportBufferForHU_Sch1_End_Time_HrFA_In;/* '<S491>/Constant Value12' */
    boolean OutportBufferForHU_Sch1_End_Time_MinFA_I;/* '<S491>/Constant Value15' */
    boolean OutportBufferForHU_Sch1_TypeFA_Init;/* '<S491>/Constant Value16' */
    boolean OutportBufferForHU_Sch1_TemperatureFA_In;/* '<S491>/Constant Value18' */
    boolean OutportBufferForCPIM_RedLED_Sts_Init;/* '<S495>/Constant Value' */
    boolean OutportBufferForCPIM_GreenLED_Sts_Init;/* '<S495>/Constant Value1' */
    boolean OutportBufferForCPIM_BlueLED_Sts_Init;/* '<S495>/Constant Value2' */
    boolean OutportBufferForCPIM_UnderVolt_Init;/* '<S495>/Constant Value3' */
    boolean OutportBufferForCPIM_OverTemp_Init;/* '<S495>/Constant Value4' */
    boolean OutportBufferForCPIM_LINParityErr_Init;/* '<S495>/Constant Value5' */
    boolean OutportBufferForCPIM_LINChkSumErr_Init;/* '<S495>/Constant Value6' */
    boolean OutportBufferForCPIM_LINDataErr_Init;/* '<S495>/Constant Value7' */
    boolean OutportBufferForCPIM_Icon1_FailSts;/* '<S495>/Constant Value8' */
    boolean OutportBufferForCPIM_Icon2_FailSts;/* '<S495>/Constant Value9' */
    boolean OutportBufferForBCIM_UnderVolt_Init;/* '<S495>/Constant Value11' */
    boolean OutportBufferForBCIM_OverTemp_Init;/* '<S495>/Constant Value12' */
    boolean OutportBufferForBCIM_LINParityErr_Init;/* '<S495>/Constant Value13' */
    boolean OutportBufferForBCIM_LINChkSumErr_Init;/* '<S495>/Constant Value14' */
    boolean OutportBufferForBCIM_LINDataErr_Init;/* '<S495>/Constant Value15' */
    boolean OutportBufferForCPIM_Ind1_FdbkFA;/* '<S495>/Constant Value20' */
    boolean OutportBufferForCPIM_Ind2_FdbkFA;/* '<S495>/Constant Value21' */
    boolean OutportBufferForCPIM_Ind3_FdbkFA;/* '<S495>/Constant Value10' */
    boolean OutportBufferForCPIM_Ind4_FdbkFA;/* '<S495>/Constant Value16' */
    boolean OutportBufferForCPIM_Ind5_FdbkFA;/* '<S495>/Constant Value17' */
    boolean OutportBufferForCPIM_Ind_Ind_Color_FdbkF;/* '<S495>/Constant Value18' */
    boolean OutportBufferForCPIM_Icon1_StsFA;/* '<S495>/Constant Value19' */
    boolean OutportBufferForCPIM_Icon2_StsFA;/* '<S495>/Constant Value22' */
    boolean OutportBufferForBCIM_Ind1_FdbkFA;/* '<S495>/Constant Value23' */
    boolean OutportBufferForBCIM_Ind2_FdbkFA;/* '<S495>/Constant Value24' */
    boolean OutportBufferForBCIM_Ind3_FdbkFA;/* '<S495>/Constant Value25' */
    boolean OutportBufferForBCIM_Ind4_FdbkFA;/* '<S495>/Constant Value26' */
    boolean OutportBufferForBCIM_Ind5_FdbkFA;/* '<S495>/Constant Value27' */
    boolean OutportBufferForBCIM_Ind_Color_FdbkFA;/* '<S495>/Constant Value28' */
    boolean OutportBufferForDoorLockLastElSts_FA_Ini;/* '<S493>/Constant Value12' */
    boolean OutportBufferForDoorLockLastElSts_SgnlRc;/* '<S493>/Constant Value6' */
    boolean OutportBufferForDoorLockLastElSts_2_FA_I;/* '<S493>/Constant Value13' */
    boolean OutportBufferForDoorLockLastElSts_2_Sgnl;/* '<S493>/Constant Value10' */
    boolean OutportBufferForChrgPort_BCM_Cmd_Init;/* '<S493>/Constant Value42' */
    boolean OutportBufferForChrgPort_BCM_Cmd_SgnlRcv;/* '<S493>/Constant Value11' */
    boolean OutportBufferForDrv_Dr_Unlocking_Init;/* '<S493>/Constant Value44' */
    boolean OutportBufferForChrgPort_Sense_Init;/* '<S493>/Constant Value48' */
    boolean OutportBufferForChrgPortLock_StsB_FA_Ini;/* '<S493>/Constant Value55' */
    boolean OutportBufferForChrgPortLock_StsC_Init;/* '<S493>/Constant Value4' */
    boolean OutportBufferForChrgPortLock_StsC_FA_Ini;/* '<S493>/Constant Value60' */
    boolean OutportBufferForChrgPortButton_Sts_Init;/* '<S493>/Constant Value2' */
    boolean OutportBufferForChrgPortButton_FailSts_I;/* '<S493>/Constant Value1' */
    boolean OutportBufferForPwrLimReq_FA_Init;/* '<S493>/Constant Value3' */
    boolean OutportBufferForPwrLimReq_SgnlRcvd_Init;/* '<S493>/Constant Value5' */
    boolean OutportBufferForPwrLimReq_FA_2_Init;/* '<S493>/Constant Value14' */
    boolean OutportBufferForPwrLimReq_SgnlRcvd_2_Ini;/* '<S493>/Constant Value15' */
    boolean OutportBufferForChrgPortLock_FailStsFA;/* '<S493>/Constant Value9' */
    boolean OutportBufferForDVC_ChrgPortRq_Init;/* '<S493>/Constant Value16' */
    boolean OutportBufferForSOC_Max_Lev_Init;/* '<S493>/KeCITR_b_SOC_Max_Lev_Init' */
    boolean OutportBufferForSOC_Max_Lev_FA_Init;/* '<S493>/Constant Value18' */
    boolean OutportBufferForDC_PwrLev_Init;/* '<S493>/Constant Value19' */
    boolean OutportBufferForDC_PwrLev_FA_Init;/* '<S493>/Constant Value7' */
    boolean OutportBufferForDC_PwrLev_SgnlRcvd_Init;/* '<S493>/Constant Value17' */
    boolean OutportBufferForChrgrFlapSts_FA_Init;/* '<S493>/Constant Value20' */
    boolean OutportBufferForHBridge_ChrgPortLck_Cal;/* '<S452>/ChrgPortLock_TypeB' */
    TeVTLR_e_PowerPanel2_Fault LeCITR_e_PP2Fault_out;/* '<S392>/PokeCITR_e_PP2FaultChrt' */
    TeVTLR_e_PowerPanel2_Fault OutportBufferForPP2Fault_Init;/* '<S496>/Enumerated_Constant3' */
    TeVTLR_e_PowerPanel1_Fault LeCITR_e_PPFault_out;/* '<S401>/PokeCITR_e_PPFaultChrt' */
    TeVTLR_e_PowerPanel1_Fault OutportBufferForPPFault_Init;/* '<S496>/Enumerated_Constant1' */
    TeODCR_e_IO_CntrlSt OutportBufferForBCIM_IO_Init;/* '<S494>/Enumerated_Constant8' */
    TeODCR_e_IO_CntrlSt OutportBufferForCPIM_IO_Init;/* '<S494>/Enumerated_Constant31' */
    TeODCR_e_IO_CntrlSt OutportBufferForDVC_ChrgPort_IO_Init;/* '<S493>/Enumerated_Constant5' */
    TeOBCR_e_PwrLimReq LeCITR_e_PowerLimit_Req_2_out;
                                  /* '<S414>/PokeCITR_e_PowerLimit_Req_2Chrt' */
    TeOBCR_e_PwrLimReq LeCITR_e_PowerLimit_Req_out;
                                    /* '<S413>/PokeCITR_e_PowerLimit_ReqChrt' */
    TeOBCR_e_PwrLimReq OutportBufferForVeCITR_e_PwrLimReq_Out_I;/* '<S503>/Const4' */
    TeOBCR_e_PwrLimReq SignalConversion2;/* '<S493>/Signal Conversion2' */
    TeOBCR_e_PwrLimReq SignalConversion3;/* '<S493>/Signal Conversion3' */
    TeOBCR_e_DoorLockSts LeCITR_e_DoorLockLastElSts_2_out;
                               /* '<S382>/PokeCITR_e_DoorLockLastElSts_2Chrt' */
    TeOBCR_e_DoorLockSts LeCITR_e_DoorLockLastElSts_out;
                                 /* '<S381>/PokeCITR_e_DoorLockLastElStsChrt' */
    TeOBCR_e_DoorLockSts OutportBufferForVeCITR_e_DoorLockLastElS;/* '<S503>/Const1' */
    TeOBCR_e_DoorLockSts SignalConversion;/* '<S493>/Signal Conversion' */
    TeOBCR_e_DoorLockSts SignalConversion1;/* '<S493>/Signal Conversion1' */
    TeOBCR_e_DCChrg_TestSts OutportBufferForDCChrg_TestSts_Init;/* '<S493>/Enumerated_Constant6' */
    TeOBCR_e_ChrgPortLock_Sts OutportBufferForVeCITR_e_ChrgPortLock_St;/* '<S503>/Const9' */
    TeCITR_e_SchType LeCITR_e_TBM_Sch3_Type_out;
                                     /* '<S421>/PokeCITR_e_TBM_Sch3_TypeChrt' */
    TeCITR_e_SchType LeCITR_e_TBM_Sch2_Type_out;
                                     /* '<S419>/PokeCITR_e_TBM_Sch2_TypeChrt' */
    TeCITR_e_SchType LeCITR_e_TBM_Sch1_Type_out;
                                     /* '<S418>/PokeCITR_e_TBM_Sch1_TypeChrt' */
    TeCITR_e_SchType LeCITR_e_HU_Sch3_Type_out;
                                      /* '<S390>/PokeCITR_e_HU_Sch3_TypeChrt' */
    TeCITR_e_SchType LeCITR_e_HU_Sch2_Type_out;
                                      /* '<S388>/PokeCITR_e_HU_Sch2_TypeChrt' */
    TeCITR_e_SchType LeCITR_e_HU_Sch1_Type_out;
                                      /* '<S387>/PokeCITR_e_HU_Sch1_TypeChrt' */
    TeCITR_e_SchType OutportBufferForSch3_TBM_Type_Init;/* '<S500>/Enumerated_Constant' */
    TeCITR_e_SchType OutportBufferForSch2_TBM_Type_Init;/* '<S498>/Enumerated_Constant' */
    TeCITR_e_SchType OutportBufferForSch1_TBM_Type_Init;/* '<S492>/Enumerated_Constant' */
    TeCITR_e_SchType OutportBufferForSch3_HU_Type_Init;/* '<S499>/Enumerated_Constant' */
    TeCITR_e_SchType OutportBufferForSch2_HU_Type_Init;/* '<S497>/Enumerated_Constant' */
    TeCITR_e_SchType OutportBufferForSch1_HU_Type_Init;/* '<S491>/Enumerated_Constant' */
    TeCITR_e_SchAllow LeCITR_e_TBM_Sch4_Allow_out;
                                    /* '<S422>/PokeCITR_e_TBM_Sch4_AllowChrt' */
    TeCITR_e_SchAllow LeCITR_e_TBM_Sch3_Allow_out;
                                    /* '<S420>/PokeCITR_e_TBM_Sch3_AllowChrt' */
    TeCITR_e_SchAllow LeCITR_e_HU_Sch4_Allow_out;
                                     /* '<S391>/PokeCITR_e_HU_Sch4_AllowChrt' */
    TeCITR_e_SchAllow LeCITR_e_HU_Sch3_Allow_out;
                                     /* '<S389>/PokeCITR_e_HU_Sch3_AllowChrt' */
    TeCITR_e_SchAllow OutportBufferForTBM_Sch4_Allow_Init;/* '<S502>/Enumerated_Constant1' */
    TeCITR_e_SchAllow OutportBufferForTBM_Sch3_Allow_Init;/* '<S500>/Enumerated_Constant1' */
    TeCITR_e_SchAllow OutportBufferForHU_Sch4_Allow_Init;/* '<S501>/Enumerated_Constant1' */
    TeCITR_e_SchAllow OutportBufferForHU_Sch3_Allow_Init;/* '<S499>/Enumerated_Constant1' */
    TeCITR_e_RmtChargePortCmd LeCITR_e_RmtChrgPortLkCmd_out;
                                  /* '<S415>/PokeCITR_e_RmtChrgPortLkCmdChrt' */
    TeCITR_e_RmtChargePortCmd OutportBufferForRmtChrgPortLkCmd_Init;/* '<S489>/Enumerated_Constant3' */
    TeCITR_e_RRM_VP_Level OutportBufferForRRM_VP_Level_Init;/* '<S493>/Enumerated_Constant2' */
    TeCITR_e_PP_LED_Fault LeCITR_e_PPLEDFault_out;/* '<S403>/PokeCITR_e_PPLEDFaultChrt' */
    TeCITR_e_PP_LED_Fault LeCITR_e_PP2LEDFault_out;/* '<S394>/PokeCITR_e_PP2LEDFaultChrt' */
    TeCITR_e_PP_LED_Fault OutportBufferForPPLEDFault_Init;/* '<S496>/Enumerated_Constant2' */
    TeCITR_e_PP_LED_Fault OutportBufferForPP2LEDFault_Init;/* '<S496>/Enumerated_Constant4' */
    TeCITR_e_PP_LED_Color_Fdbk LeCITR_e_PP_LED_C_ColorFeedback_out;
                            /* '<S410>/PokeCITR_e_PP_LED_C_ColorFeedbackChrt' */
    TeCITR_e_PP_LED_Color_Fdbk LeCITR_e_PP_LED_B_ColorFeedback_out;
                            /* '<S407>/PokeCITR_e_PP_LED_B_ColorFeedbackChrt' */
    TeCITR_e_PP_LED_Color_Fdbk LeCITR_e_PP_LED_A_ColorFeedback_out;
                            /* '<S404>/PokeCITR_e_PP_LED_A_ColorFeedbackChrt' */
    TeCITR_e_PP_LED_Color_Fdbk LeCITR_e_PP2_LED_B_ColorFeedback_out;
                           /* '<S398>/PokeCITR_e_PP2_LED_B_ColorFeedbackChrt' */
    TeCITR_e_PP_LED_Color_Fdbk LeCITR_e_PP2_LED_A_ColorFeedback_out;
                           /* '<S395>/PokeCITR_e_PP2_LED_A_ColorFeedbackChrt' */
    TeCITR_e_PP_LED_Color_Fdbk OutportBufferForPP_LED_A_Color_Feedbac_j;/* '<S496>/Enumerated_Constant13' */
    TeCITR_e_PP_LED_Color_Fdbk OutportBufferForPP_LED_B_Color_Feedbac_j;/* '<S496>/Enumerated_Constant14' */
    TeCITR_e_PP_LED_Color_Fdbk OutportBufferForPP_LED_C_Color_Feedbac_c;/* '<S496>/Enumerated_Constant15' */
    TeCITR_e_PP_LED_Color_Fdbk OutportBufferForPP2_LED_A_Color_Feedba_p;/* '<S496>/Enumerated_Constant20' */
    TeCITR_e_PP_LED_Color_Fdbk OutportBufferForPP2_LED_B_Color_Feedba_g;/* '<S496>/Enumerated_Constant21' */
    TeCITR_e_PPFaultRsn LeCITR_e_PPFaultRsn_out;/* '<S402>/PokeCITR_e_PPFaultRsnChrt' */
    TeCITR_e_PPFaultRsn LeCITR_e_PP2FaultRsn_out;/* '<S393>/PokeCITR_e_PP2FaultRsnChrt' */
    TeCITR_e_PPFaultRsn OutportBufferForPPFaultRsn_Init;/* '<S496>/Enumerated_Constant7' */
    TeCITR_e_PPFaultRsn OutportBufferForPP2FaultRsn_Init;/* '<S496>/Enumerated_Constant5' */
    TeCITR_e_FOTA_Install_Type OutportBufferForFOTA_Install_Type_Init;/* '<S504>/Enumerated_Constant7' */
    TeCITR_e_FOTA_Install_Status OutportBufferForFOTA_Install_Status_Init;/* '<S504>/Enumerated_Constant8' */
    TeCITR_e_DateTmFormat LeCITR_e_DateTmFormat_out;
                                      /* '<S380>/PokeCITR_e_DateTmFormatChrt' */
    TeCITR_e_DateTmFormat OutportBufferForDateTmFormat_Init;/* '<S504>/Enumerated_Constant' */
    TeCITR_e_CoopChargeCmd LeCITR_e_CoopCh_ChrgCmd_out;
                                    /* '<S376>/PokeCITR_e_CoopCh_ChrgCmdChrt' */
    TeCITR_e_CoopChargeCmd OutportBufferForCoopCh_ChrgCmd_Init;/* '<S489>/Enumerated_Constant4' */
    TeCITR_e_ChrgrFlapSts LeCITR_e_ChrgrFlapSts_out;
                                      /* '<S375>/PokeCITR_e_ChrgrFlapStsChrt' */
    TeCITR_e_ChrgrFlapSts OutportBufferForChrgrFlapSts_Init;/* '<S493>/Enumerated_Constant7' */
    TeCITR_e_ChrgScheduleType LeCITR_e_TBM_ChrgSchedType2_out;
                                /* '<S417>/PokeCITR_e_TBM_ChrgSchedType2Chrt' */
    TeCITR_e_ChrgScheduleType LeCITR_e_TBM_ChrgSchedType1_out;
                                /* '<S416>/PokeCITR_e_TBM_ChrgSchedType1Chrt' */
    TeCITR_e_ChrgScheduleType LeCITR_e_HU_ChrgSchedType2_out;
                                 /* '<S386>/PokeCITR_e_HU_ChrgSchedType2Chrt' */
    TeCITR_e_ChrgScheduleType LeCITR_e_HU_ChrgSchedType1_out;
                                 /* '<S385>/PokeCITR_e_HU_ChrgSchedType1Chrt' */
    TeCITR_e_ChrgScheduleType OutportBufferForHU_ChrgSchedType1_Init;/* '<S489>/Enumerated_Constant2' */
    TeCITR_e_ChrgScheduleType OutportBufferForHU_ChrgSchedType2_Init;/* '<S489>/Enumerated_Constant1' */
    TeCITR_e_ChrgScheduleType OutportBufferForTBM_ChrgSchedType1_Init;/* '<S489>/Enumerated_Constant5' */
    TeCITR_e_ChrgScheduleType OutportBufferForTBM_ChrgSchedType2_Init;/* '<S489>/Enumerated_Constant6' */
    TeCITR_e_ChrgPortLck_FailSts LeCITR_e_ChrgPortLock_FailSts_out;
                              /* '<S374>/PokeCITR_e_ChrgPortLock_FailStsChrt' */
    TeCITR_e_ChrgPortLck_FailSts OutportBufferForChrgPortLock_FailSts_Ini;/* '<S493>/Enumerated_Constant1' */
    TeCITR_e_ChrgPortDoor_Sts LeCITR_e_ChrgPortDoor_Sts_out;
                                  /* '<S373>/PokeCITR_e_ChrgPortDoor_StsChrt' */
    TeCITR_e_ChrgPortDoor_Sts OutportBufferForChrgPortDoorSts_Init;/* '<S493>/Enumerated_Constant4' */
    TeCITR_e_CPIM_LED_Sts LeCITR_e_PP_LED_C_FailSts_out;
                                  /* '<S411>/PokeCITR_e_PP_LED_C_FailStsChrt' */
    TeCITR_e_CPIM_LED_Sts LeCITR_e_PP_LED_B_FailSts_out;
                                  /* '<S408>/PokeCITR_e_PP_LED_B_FailStsChrt' */
    TeCITR_e_CPIM_LED_Sts LeCITR_e_PP_LED_A_FailSts_out;
                                  /* '<S405>/PokeCITR_e_PP_LED_A_FailStsChrt' */
    TeCITR_e_CPIM_LED_Sts LeCITR_e_PP2_LED_B_FailSts_out;
                                 /* '<S399>/PokeCITR_e_PP2_LED_B_FailStsChrt' */
    TeCITR_e_CPIM_LED_Sts LeCITR_e_PP2_LED_A_FailSts_out;
                                 /* '<S396>/PokeCITR_e_PP2_LED_A_FailStsChrt' */
    TeCITR_e_CPIM_LED_Sts OutportBufferForPP_LED_A_FailStatus_Init;/* '<S496>/Enumerated_Constant10' */
    TeCITR_e_CPIM_LED_Sts OutportBufferForPP_LED_B_FailStatus_Init;/* '<S496>/Enumerated_Constant11' */
    TeCITR_e_CPIM_LED_Sts OutportBufferForPP_LED_C_FailStatus_Init;/* '<S496>/Enumerated_Constant12' */
    TeCITR_e_CPIM_LED_Sts OutportBufferForPP2_LED_A_FailStatus_Ini;/* '<S496>/Enumerated_Constant18' */
    TeCITR_e_CPIM_LED_Sts OutportBufferForPP2_LED_B_FailStatus_Ini;/* '<S496>/Enumerated_Constant19' */
    TeCITR_e_CPIM_LED_Sts OutportBufferForCPIM_RedLED_FailSts_Init;/* '<S495>/Enumerated_Constant' */
    TeCITR_e_CPIM_LED_Sts OutportBufferForCPIM_GreenLED_FailSts_In;/* '<S495>/Enumerated_Constant1' */
    TeCITR_e_CPIM_LED_Sts OutportBufferForCPIM_BlueLED_FailSts_Ini;/* '<S495>/Enumerated_Constant2' */
    TeCITR_e_CPIM_LED_Sts OutportBufferForCPIM_Ind1_FailSts;/* '<S495>/Enumerated_Constant3' */
    TeCITR_e_CPIM_LED_Sts OutportBufferForCPIM_Ind2_FailSts;/* '<S495>/Enumerated_Constant4' */
    TeCITR_e_CPIM_LED_Sts OutportBufferForCPIM_Ind3_FailSts;/* '<S495>/Enumerated_Constant5' */
    TeCITR_e_CPIM_LED_Sts OutportBufferForCPIM_Ind4_FailSts;/* '<S495>/Enumerated_Constant6' */
    TeCITR_e_CPIM_LED_Sts OutportBufferForCPIM_Ind5_FailSts;/* '<S495>/Enumerated_Constant7' */
    TeCITR_e_CPIM_Indication LeCITR_e_PP_LED_C_Feedback_out;
                                 /* '<S412>/PokeCITR_e_PP_LED_C_FeedbackChrt' */
    TeCITR_e_CPIM_Indication LeCITR_e_PP_LED_B_Feedback_out;
                                 /* '<S409>/PokeCITR_e_PP_LED_B_FeedbackChrt' */
    TeCITR_e_CPIM_Indication LeCITR_e_PP_LED_A_Feedback_out;
                                 /* '<S406>/PokeCITR_e_PP_LED_A_FeedbackChrt' */
    TeCITR_e_CPIM_Indication LeCITR_e_PP2_LED_B_Feedback_out;
                                /* '<S400>/PokeCITR_e_PP2_LED_B_FeedbackChrt' */
    TeCITR_e_CPIM_Indication LeCITR_e_PP2_LED_A_Feedback_out;
                                /* '<S397>/PokeCITR_e_PP2_LED_A_FeedbackChrt' */
    TeCITR_e_CPIM_Indication LeCITR_e_CPIM_Ind5_Fdbk_out;
                                    /* '<S370>/PokeCITR_e_CPIM_Ind5_FdbkChrt' */
    TeCITR_e_CPIM_Indication LeCITR_e_CPIM_Ind4_Fdbk_out;
                                    /* '<S368>/PokeCITR_e_CPIM_Ind4_FdbkChrt' */
    TeCITR_e_CPIM_Indication LeCITR_e_CPIM_Ind3_Fdbk_out;
                                    /* '<S366>/PokeCITR_e_CPIM_Ind3_FdbkChrt' */
    TeCITR_e_CPIM_Indication LeCITR_e_CPIM_Ind2_Fdbk_out;
                                    /* '<S364>/PokeCITR_e_CPIM_Ind2_FdbkChrt' */
    TeCITR_e_CPIM_Indication LeCITR_e_CPIM_Ind1_Fdbk_out;
                                    /* '<S362>/PokeCITR_e_CPIM_Ind1_FdbkChrt' */
    TeCITR_e_CPIM_Indication OutportBufferForPP_LED_A_Feedback_Init;/* '<S496>/Enumerated_Constant6' */
    TeCITR_e_CPIM_Indication OutportBufferForPP_LED_B_Feedback_Init;/* '<S496>/Enumerated_Constant8' */
    TeCITR_e_CPIM_Indication OutportBufferForPP_LED_C_Feedback_Init;/* '<S496>/Enumerated_Constant9' */
    TeCITR_e_CPIM_Indication OutportBufferForPP2_LED_A_Feedback_Init;/* '<S496>/Enumerated_Constant16' */
    TeCITR_e_CPIM_Indication OutportBufferForPP2_LED_B_Feedback_Init;/* '<S496>/Enumerated_Constant17' */
    TeCITR_e_CPIM_Indication OutportBufferForDVC_CPIM_Ind1_Init;/* '<S494>/Enumerated_Constant9' */
    TeCITR_e_CPIM_Indication OutportBufferForDVC_CPIM_Ind2_Init;/* '<S494>/Enumerated_Constant10' */
    TeCITR_e_CPIM_Indication OutportBufferForDVC_CPIM_Ind3_Init;/* '<S494>/Enumerated_Constant11' */
    TeCITR_e_CPIM_Indication OutportBufferForDVC_CPIM_Ind4_Init;/* '<S494>/Enumerated_Constant12' */
    TeCITR_e_CPIM_Indication OutportBufferForDVC_CPIM_Ind5_Init;/* '<S494>/Enumerated_Constant15' */
    TeCITR_e_CPIM_Indication OutportBufferForCPIM_Ind1_Fdbk;/* '<S495>/Enumerated_Constant8' */
    TeCITR_e_CPIM_Indication OutportBufferForCPIM_Ind2_Fdbk;/* '<S495>/Enumerated_Constant9' */
    TeCITR_e_CPIM_Indication OutportBufferForCPIM_Ind3_Fdbk;/* '<S495>/Enumerated_Constant10' */
    TeCITR_e_CPIM_Indication OutportBufferForCPIM_Ind4_Fdbk;/* '<S495>/Enumerated_Constant11' */
    TeCITR_e_CPIM_Indication OutportBufferForCPIM_Ind5_Fdbk;/* '<S495>/Enumerated_Constant12' */
    TeCITR_e_CPIM_Icon_Ind LeCITR_e_CPIM_Icon2_Sts_out;
                                    /* '<S360>/PokeCITR_e_CPIM_Icon2_StsChrt' */
    TeCITR_e_CPIM_Icon_Ind LeCITR_e_CPIM_Icon1_Sts_out;
                                    /* '<S359>/PokeCITR_e_CPIM_Icon1_StsChrt' */
    TeCITR_e_CPIM_Icon_Ind OutportBufferForDVC_CPIM_IconI1_Init;/* '<S494>/Enumerated_Constant17' */
    TeCITR_e_CPIM_Icon_Ind OutportBufferForDVC_CPIM_IconI2_Init;/* '<S494>/Enumerated_Constant14' */
    TeCITR_e_CPIM_Icon_Ind OutportBufferForCPIM_Icon1_Sts;/* '<S495>/Enumerated_Constant14' */
    TeCITR_e_CPIM_Icon_Ind OutportBufferForCPIM_Icon2_Sts;/* '<S495>/Enumerated_Constant15' */
    TeCITR_e_CPIM_Color LeCITR_e_CPIM_Ind_Color_Fdbk_out;
                               /* '<S371>/PokeCITR_e_CPIM_Ind_Color_FdbkChrt' */
    TeCITR_e_CPIM_Color OutportBufferForDVC_CPIM_Color_Init;/* '<S494>/Enumerated_Constant13' */
    TeCITR_e_CPIM_Color OutportBufferForCPIM_Ind_Ind_Color_Fdbk;/* '<S495>/Enumerated_Constant13' */
    TeCITR_e_CPIM_BlinkRate OutportBufferForDVC_CPIM_BlinkRate_Init;/* '<S494>/Enumerated_Constant1' */
    TeCITR_e_BCIM_LED_Sts OutportBufferForBCIM_Ind1_FailSts;/* '<S495>/Enumerated_Constant22' */
    TeCITR_e_BCIM_LED_Sts OutportBufferForBCIM_Ind2_FailSts;/* '<S495>/Enumerated_Constant23' */
    TeCITR_e_BCIM_LED_Sts OutportBufferForBCIM_Ind3_FailSts;/* '<S495>/Enumerated_Constant24' */
    TeCITR_e_BCIM_LED_Sts OutportBufferForBCIM_Ind4_FailSts;/* '<S495>/Enumerated_Constant25' */
    TeCITR_e_BCIM_LED_Sts OutportBufferForBCIM_Ind5_FailSts;/* '<S495>/Enumerated_Constant18' */
    TeCITR_e_BCIM_Indication LeCITR_e_BCIM_Ind5_Fdbk_out;
                                    /* '<S355>/PokeCITR_e_BCIM_Ind5_FdbkChrt' */
    TeCITR_e_BCIM_Indication LeCITR_e_BCIM_Ind4_Fdbk_out;
                                    /* '<S353>/PokeCITR_e_BCIM_Ind4_FdbkChrt' */
    TeCITR_e_BCIM_Indication LeCITR_e_BCIM_Ind3_Fdbk_out;
                                    /* '<S351>/PokeCITR_e_BCIM_Ind3_FdbkChrt' */
    TeCITR_e_BCIM_Indication LeCITR_e_BCIM_Ind2_Fdbk_out;
                                    /* '<S349>/PokeCITR_e_BCIM_Ind2_FdbkChrt' */
    TeCITR_e_BCIM_Indication LeCITR_e_BCIM_Ind1_Fdbk_out;
                                    /* '<S347>/PokeCITR_e_BCIM_Ind1_FdbkChrt' */
    TeCITR_e_BCIM_Indication OutportBufferForBCIM_Ind1_Init;/* '<S494>/Enumerated_Constant16' */
    TeCITR_e_BCIM_Indication OutportBufferForBCIM_Ind2_Init;/* '<S494>/Enumerated_Constant26' */
    TeCITR_e_BCIM_Indication OutportBufferForBCIM_Ind3_Init;/* '<S494>/Enumerated_Constant27' */
    TeCITR_e_BCIM_Indication OutportBufferForBCIM_Ind4_Init;/* '<S494>/Enumerated_Constant28' */
    TeCITR_e_BCIM_Indication OutportBufferForBCIM_Ind5_Init;/* '<S494>/Enumerated_Constant29' */
    TeCITR_e_BCIM_Indication OutportBufferForBCIM_Ind1_Fdbk;/* '<S495>/Enumerated_Constant16' */
    TeCITR_e_BCIM_Indication OutportBufferForBCIM_Ind2_Fdbk;/* '<S495>/Enumerated_Constant17' */
    TeCITR_e_BCIM_Indication OutportBufferForBCIM_Ind3_Fdbk;/* '<S495>/Enumerated_Constant19' */
    TeCITR_e_BCIM_Indication OutportBufferForBCIM_Ind4_Fdbk;/* '<S495>/Enumerated_Constant20' */
    TeCITR_e_BCIM_Indication OutportBufferForBCIM_Ind5_Fdbk;/* '<S495>/Enumerated_Constant21' */
    TeCITR_e_BCIM_Color LeCITR_e_BCIM_Ind_Color_Fdbk_out;
                               /* '<S356>/PokeCITR_e_BCIM_Ind_Color_FdbkChrt' */
    TeCITR_e_BCIM_Color OutportBufferForBCIM_Color_Init;/* '<S494>/Enumerated_Constant2' */
    TeCITR_e_BCIM_Color OutportBufferForBCIM_Ind_Color_Fdbk;/* '<S495>/Enumerated_Constant26' */
    TeCITR_e_BCIM_BlinkRate OutportBufferForBCIM_BlinkRate_Init;/* '<S494>/Enumerated_Constant30' */
    B_FsftCITR_Pct_HU_ImmChrgTarget2Chrt_C_T
        sf_FsftCITR_Pct_HU_ImmChrgTarget1Chrt;
                                /* '<S14>/FsftCITR_Pct_HU_ImmChrgTarget1Chrt' */
    B_FsftCITR_Pct_HU_ImmChrgTarget2Chrt_C_T
        sf_FsftCITR_Pct_HU_ExtChrgTarget2Chrt;
                                /* '<S13>/FsftCITR_Pct_HU_ExtChrgTarget2Chrt' */
    B_FsftCITR_Pct_HU_ImmChrgTarget2Chrt_C_T
        sf_FsftCITR_b_CoopCh_VehLocationChrt;
                                 /* '<S26>/FsftCITR_b_CoopCh_VehLocationChrt' */
    B_FsftCITR_e_HU_ChrgSchedType1Chrt_CIT_T sf_FsftCITR_e_HU_ChrgSchedType2Chrt;
                                 /* '<S141>/FsftCITR_e_HU_ChrgSchedType2Chrt' */
    B_FsftCITR_e_HU_ChrgSchedType1Chrt_CIT_T sf_FsftCITR_e_HU_ChrgSchedType1Chrt;
                                 /* '<S140>/FsftCITR_e_HU_ChrgSchedType1Chrt' */
    B_FsftCITR_Pct_TBM_ExtChrgTarget2Chrt__T
        sf_FsftCITR_Pct_TBM_ImmChrgTarget1Chrt;
                               /* '<S18>/FsftCITR_Pct_TBM_ImmChrgTarget1Chrt' */
    B_FsftCITR_Pct_TBM_ExtChrgTarget2Chrt__T
        sf_FsftCITR_Pct_TBM_ExtChrgTarget2Chrt;
                               /* '<S17>/FsftCITR_Pct_TBM_ExtChrgTarget2Chrt' */
    B_FsftCITR_Pct_HU_ImmChrgTarget2Chrt_C_T
        sf_FsftCITR_Pct_HU_ImmChrgTarget2Chrt;
                                /* '<S15>/FsftCITR_Pct_HU_ImmChrgTarget2Chrt' */
}
B_CITR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CITR_ac_T
{
    uint16 UnitDelay_DSTATE;           /* '<S463>/Unit Delay' */
    uint16 UnitDelay_DSTATE_b;         /* '<S474>/Unit Delay' */
    uint16 UnitDelay_DSTATE_o;         /* '<S449>/Unit Delay' */
    uint16 UnitDelay_DSTATE_g;         /* '<S448>/Unit Delay' */
    uint8 UnitDelay_DSTATE_b2;         /* '<S425>/Unit Delay' */
    boolean UnitDelay_DSTATE_f;        /* '<S488>/Unit Delay' */
    boolean UnitDelay_DSTATE_n;        /* '<S475>/Unit Delay' */
    boolean UnitDelay_DSTATE_l;        /* '<S451>/Unit Delay' */
    boolean UnitDelay_DSTATE_h;        /* '<S450>/Unit Delay' */
    boolean NeCITR_b_Lock_Status;      /* '<Root>/DSM_NeCITR_b_Lock_Status' */
    boolean NeCITR_b_PortLockBCM_Cmd;/* '<Root>/DSM_NeCITR_b_PortLockBCM_Cmd' */
}
DW_CITR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeVTLR_e_PowerPanel2_Fault Constant;/* '<S581>/Constant' */
    const TeVTLR_e_PowerPanel1_Fault Constant_i;/* '<S567>/Constant' */
    const TeODCR_e_IO_CntrlSt Constant_k;/* '<S538>/Constant' */
    const TeODCR_e_IO_CntrlSt Constant_n;/* '<S537>/Constant' */
    const TeODCR_e_IO_CntrlSt Constant_l;/* '<S516>/Constant' */
    const TeOBCR_e_PwrLimReq Const4;   /* '<S503>/Const4' */
    const TeOBCR_e_DoorLockSts Const1; /* '<S503>/Const1' */
    const TeOBCR_e_DCChrg_TestSts Constant_h;/* '<S517>/Constant' */
    const TeOBCR_e_ChrgPortLock_Sts Const9;/* '<S503>/Const9' */
    const TeCITR_e_SchType Constant_j; /* '<S592>/Constant' */
    const TeCITR_e_SchType Constant_b; /* '<S589>/Constant' */
    const TeCITR_e_SchType Constant_js;/* '<S512>/Constant' */
    const TeCITR_e_SchType Constant_e; /* '<S590>/Constant' */
    const TeCITR_e_SchType Constant_d; /* '<S588>/Constant' */
    const TeCITR_e_SchType Constant_f; /* '<S511>/Constant' */
    const TeCITR_e_SchAllow Constant_c;/* '<S595>/Constant' */
    const TeCITR_e_SchAllow Constant_cd;/* '<S593>/Constant' */
    const TeCITR_e_SchAllow Constant_o;/* '<S594>/Constant' */
    const TeCITR_e_SchAllow Constant_jy;/* '<S591>/Constant' */
    const TeCITR_e_RmtChargePortCmd Constant_ig;/* '<S507>/Constant' */
    const TeCITR_e_RRM_VP_Level Constant_bi;/* '<S514>/Constant' */
    const TeCITR_e_PP_LED_Fault Constant_g;/* '<S578>/Constant' */
    const TeCITR_e_PP_LED_Fault Constant_c0;/* '<S582>/Constant' */
    const TeCITR_e_PP_LED_Color_Fdbk Constant_gy;/* '<S571>/Constant' */
    const TeCITR_e_PP_LED_Color_Fdbk Constant_ou;/* '<S572>/Constant' */
    const TeCITR_e_PP_LED_Color_Fdbk Constant_dj;/* '<S573>/Constant' */
    const TeCITR_e_PP_LED_Color_Fdbk Constant_fr;/* '<S579>/Constant' */
    const TeCITR_e_PP_LED_Color_Fdbk Constant_je;/* '<S580>/Constant' */
    const TeCITR_e_PPFaultRsn Constant_a;/* '<S585>/Constant' */
    const TeCITR_e_PPFaultRsn Constant_iv;/* '<S583>/Constant' */
    const TeCITR_e_FOTA_Install_Type Constant_i0;/* '<S597>/Constant' */
    const TeCITR_e_FOTA_Install_Status Constant_gq;/* '<S598>/Constant' */
    const TeCITR_e_DateTmFormat Constant_ni;/* '<S596>/Constant' */
    const TeCITR_e_CoopChargeCmd Constant_em;/* '<S508>/Constant' */
    const TeCITR_e_ChrgrFlapSts Constant_fs;/* '<S518>/Constant' */
    const TeCITR_e_ChrgScheduleType Constant_le;/* '<S506>/Constant' */
    const TeCITR_e_ChrgScheduleType Constant_kf;/* '<S505>/Constant' */
    const TeCITR_e_ChrgScheduleType Constant_in;/* '<S509>/Constant' */
    const TeCITR_e_ChrgScheduleType Constant_m;/* '<S510>/Constant' */
    const TeCITR_e_ChrgPortLck_FailSts Constant_by;/* '<S513>/Constant' */
    const TeCITR_e_ChrgPortDoor_Sts Constant_m0;/* '<S515>/Constant' */
    const TeCITR_e_CPIM_LED_Sts Constant_hb;/* '<S568>/Constant' */
    const TeCITR_e_CPIM_LED_Sts Constant_im;/* '<S569>/Constant' */
    const TeCITR_e_CPIM_LED_Sts Constant_ge;/* '<S570>/Constant' */
    const TeCITR_e_CPIM_LED_Sts Constant_nh;/* '<S576>/Constant' */
    const TeCITR_e_CPIM_LED_Sts Constant_kx;/* '<S577>/Constant' */
    const TeCITR_e_CPIM_LED_Sts Constant_kr;/* '<S540>/Constant' */
    const TeCITR_e_CPIM_LED_Sts Constant_ev;/* '<S541>/Constant' */
    const TeCITR_e_CPIM_LED_Sts Constant_jeh;/* '<S552>/Constant' */
    const TeCITR_e_CPIM_LED_Sts Constant_c3;/* '<S560>/Constant' */
    const TeCITR_e_CPIM_LED_Sts Constant_er;/* '<S561>/Constant' */
    const TeCITR_e_CPIM_LED_Sts Constant_hx;/* '<S562>/Constant' */
    const TeCITR_e_CPIM_LED_Sts Constant_m2;/* '<S563>/Constant' */
    const TeCITR_e_CPIM_LED_Sts Constant_es;/* '<S564>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_cm;/* '<S584>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_nu;/* '<S586>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_h3;/* '<S587>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_cr;/* '<S574>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_am;/* '<S575>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_gl;/* '<S539>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_lq;/* '<S523>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_p;/* '<S524>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_eo;/* '<S525>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_nx;/* '<S528>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_fw;/* '<S565>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_lj;/* '<S566>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_d5;/* '<S542>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_cz;/* '<S543>/Constant' */
    const TeCITR_e_CPIM_Indication Constant_oz;/* '<S544>/Constant' */
    const TeCITR_e_CPIM_Icon_Ind Constant_ng;/* '<S530>/Constant' */
    const TeCITR_e_CPIM_Icon_Ind Constant_os;/* '<S527>/Constant' */
    const TeCITR_e_CPIM_Icon_Ind Constant_li;/* '<S546>/Constant' */
    const TeCITR_e_CPIM_Icon_Ind Constant_cg;/* '<S547>/Constant' */
    const TeCITR_e_CPIM_Color Constant_f2;/* '<S526>/Constant' */
    const TeCITR_e_CPIM_Color Constant_cp;/* '<S545>/Constant' */
    const TeCITR_e_CPIM_BlinkRate Constant_m3;/* '<S522>/Constant' */
    const TeCITR_e_BCIM_LED_Sts Constant_nz;/* '<S555>/Constant' */
    const TeCITR_e_BCIM_LED_Sts Constant_il;/* '<S556>/Constant' */
    const TeCITR_e_BCIM_LED_Sts Constant_e0;/* '<S557>/Constant' */
    const TeCITR_e_BCIM_LED_Sts Constant_gs;/* '<S558>/Constant' */
    const TeCITR_e_BCIM_LED_Sts Constant_de;/* '<S550>/Constant' */
    const TeCITR_e_BCIM_Indication Constant_ms;/* '<S529>/Constant' */
    const TeCITR_e_BCIM_Indication Constant_gf;/* '<S532>/Constant' */
    const TeCITR_e_BCIM_Indication Constant_ne;/* '<S533>/Constant' */
    const TeCITR_e_BCIM_Indication Constant_hc;/* '<S534>/Constant' */
    const TeCITR_e_BCIM_Indication Constant_id;/* '<S535>/Constant' */
    const TeCITR_e_BCIM_Indication Constant_hl;/* '<S548>/Constant' */
    const TeCITR_e_BCIM_Indication Constant_k0;/* '<S549>/Constant' */
    const TeCITR_e_BCIM_Indication Constant_niv;/* '<S551>/Constant' */
    const TeCITR_e_BCIM_Indication Constant_ic;/* '<S553>/Constant' */
    const TeCITR_e_BCIM_Indication Constant_j3;/* '<S554>/Constant' */
    const TeCITR_e_BCIM_Color Constant_ok;/* '<S531>/Constant' */
    const TeCITR_e_BCIM_Color Constant_k1;/* '<S559>/Constant' */
    const TeCITR_e_BCIM_BlinkRate Constant_k2;/* '<S536>/Constant' */
}
ConstB_CITR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CITR
#include "MemMap.h"

extern VAR(B_CITR_ac_T, CITR_VAR_INIT) CITR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CITR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CITR
#include "MemMap.h"

extern VAR(DW_CITR_ac_T, CITR_VAR_INIT) CITR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CITR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_CITR
#include "MemMap.h"

extern CONST(ConstB_CITR_ac_T, CITR_VAR_INIT) CITR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_CITR
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
 * '<Root>' : 'CITR_ac'
 * '<S1>'   : 'CITR_ac/CITR_FastTEF'
 * '<S2>'   : 'CITR_ac/CITR_MedTED'
 * '<S3>'   : 'CITR_ac/CITR_PwrOff'
 * '<S4>'   : 'CITR_ac/CITR_PwrOn'
 * '<S5>'   : 'CITR_ac/FsftCITR_I_PP2CurrentDrawSens1'
 * '<S6>'   : 'CITR_ac/FsftCITR_I_PP2CurrentDrawSens2'
 * '<S7>'   : 'CITR_ac/FsftCITR_I_PPCurrentDrawSens1'
 * '<S8>'   : 'CITR_ac/FsftCITR_I_PPCurrentDrawSens2'
 * '<S9>'   : 'CITR_ac/FsftCITR_P_ChargingDestinationPwr'
 * '<S10>'  : 'CITR_ac/FsftCITR_P_PP2RatedPower'
 * '<S11>'  : 'CITR_ac/FsftCITR_P_PPRatedPower'
 * '<S12>'  : 'CITR_ac/FsftCITR_Pct_HU_ExtChrgTarget1'
 * '<S13>'  : 'CITR_ac/FsftCITR_Pct_HU_ExtChrgTarget2'
 * '<S14>'  : 'CITR_ac/FsftCITR_Pct_HU_ImmChrgTarget1'
 * '<S15>'  : 'CITR_ac/FsftCITR_Pct_HU_ImmChrgTarget2'
 * '<S16>'  : 'CITR_ac/FsftCITR_Pct_TBM_ExtChrgTarget1'
 * '<S17>'  : 'CITR_ac/FsftCITR_Pct_TBM_ExtChrgTarget2'
 * '<S18>'  : 'CITR_ac/FsftCITR_Pct_TBM_ImmChrgTarget1'
 * '<S19>'  : 'CITR_ac/FsftCITR_Pct_TBM_ImmChrgTarget2'
 * '<S20>'  : 'CITR_ac/FsftCITR_Pct_V2HRsrvBatt'
 * '<S21>'  : 'CITR_ac/FsftCITR_Pct_V2LRsrvBatt'
 * '<S22>'  : 'CITR_ac/FsftCITR_Pct_V2VRsrvBatt'
 * '<S23>'  : 'CITR_ac/FsftCITR_b_ChrgPortDoor_Sts'
 * '<S24>'  : 'CITR_ac/FsftCITR_b_ChrgPortLock_StsC'
 * '<S25>'  : 'CITR_ac/FsftCITR_b_ChrgPort_BCM_Cmd'
 * '<S26>'  : 'CITR_ac/FsftCITR_b_CoopCh_VehLocation'
 * '<S27>'  : 'CITR_ac/FsftCITR_b_DC_PwrLev'
 * '<S28>'  : 'CITR_ac/FsftCITR_b_DateTmDay'
 * '<S29>'  : 'CITR_ac/FsftCITR_b_DateTmFormat'
 * '<S30>'  : 'CITR_ac/FsftCITR_b_Date_Day1'
 * '<S31>'  : 'CITR_ac/FsftCITR_b_HU_Sch1_CabTemp'
 * '<S32>'  : 'CITR_ac/FsftCITR_b_HU_Sch1_Day'
 * '<S33>'  : 'CITR_ac/FsftCITR_b_HU_Sch1_End_Time_Hr'
 * '<S34>'  : 'CITR_ac/FsftCITR_b_HU_Sch1_End_Time_Min'
 * '<S35>'  : 'CITR_ac/FsftCITR_b_HU_Sch1_Start_Time_Hr'
 * '<S36>'  : 'CITR_ac/FsftCITR_b_HU_Sch1_Start_Time_Min'
 * '<S37>'  : 'CITR_ac/FsftCITR_b_HU_Sch1_Type'
 * '<S38>'  : 'CITR_ac/FsftCITR_b_HU_Sch2_CabTemp'
 * '<S39>'  : 'CITR_ac/FsftCITR_b_HU_Sch2_Day'
 * '<S40>'  : 'CITR_ac/FsftCITR_b_HU_Sch2_End_Time_Hr'
 * '<S41>'  : 'CITR_ac/FsftCITR_b_HU_Sch2_End_Time_Min'
 * '<S42>'  : 'CITR_ac/FsftCITR_b_HU_Sch2_Start_Time_Hr'
 * '<S43>'  : 'CITR_ac/FsftCITR_b_HU_Sch2_Start_Time_Min'
 * '<S44>'  : 'CITR_ac/FsftCITR_b_HU_Sch2_Type'
 * '<S45>'  : 'CITR_ac/FsftCITR_b_HU_Sch3_Allow'
 * '<S46>'  : 'CITR_ac/FsftCITR_b_HU_Sch3_CabTemp'
 * '<S47>'  : 'CITR_ac/FsftCITR_b_HU_Sch3_Day'
 * '<S48>'  : 'CITR_ac/FsftCITR_b_HU_Sch3_End_Time_Hr'
 * '<S49>'  : 'CITR_ac/FsftCITR_b_HU_Sch3_End_Time_Min'
 * '<S50>'  : 'CITR_ac/FsftCITR_b_HU_Sch3_Start_Time_Hr'
 * '<S51>'  : 'CITR_ac/FsftCITR_b_HU_Sch3_Start_Time_Min'
 * '<S52>'  : 'CITR_ac/FsftCITR_b_HU_Sch3_Type'
 * '<S53>'  : 'CITR_ac/FsftCITR_b_HU_Sch4_Allow'
 * '<S54>'  : 'CITR_ac/FsftCITR_b_HU_Sch4_CabTemp'
 * '<S55>'  : 'CITR_ac/FsftCITR_b_HU_Sch4_Day'
 * '<S56>'  : 'CITR_ac/FsftCITR_b_HU_Sch4_Start_Time_Hr'
 * '<S57>'  : 'CITR_ac/FsftCITR_b_HU_Sch4_Start_Time_Min'
 * '<S58>'  : 'CITR_ac/FsftCITR_b_PP2ACPresentSens1'
 * '<S59>'  : 'CITR_ac/FsftCITR_b_PP2ACPresentSens2'
 * '<S60>'  : 'CITR_ac/FsftCITR_b_PP2ButtonSts'
 * '<S61>'  : 'CITR_ac/FsftCITR_b_PP2LidSwitchSts'
 * '<S62>'  : 'CITR_ac/FsftCITR_b_PP2LidSwitchSts120A'
 * '<S63>'  : 'CITR_ac/FsftCITR_b_PP2LidSwitchSts120B'
 * '<S64>'  : 'CITR_ac/FsftCITR_b_PP2_Gnd_Fault_Det'
 * '<S65>'  : 'CITR_ac/FsftCITR_b_PP2_LIN_Cksm_Err'
 * '<S66>'  : 'CITR_ac/FsftCITR_b_PP2_LIN_Data_Err'
 * '<S67>'  : 'CITR_ac/FsftCITR_b_PP2_LIN_Parity_Err'
 * '<S68>'  : 'CITR_ac/FsftCITR_b_PPACPresentSens1'
 * '<S69>'  : 'CITR_ac/FsftCITR_b_PPACPresentSens2'
 * '<S70>'  : 'CITR_ac/FsftCITR_b_PPButtonSts'
 * '<S71>'  : 'CITR_ac/FsftCITR_b_PPLidSwitchSts120A'
 * '<S72>'  : 'CITR_ac/FsftCITR_b_PPLidSwitchSts120B'
 * '<S73>'  : 'CITR_ac/FsftCITR_b_PPLidSwitchSts240'
 * '<S74>'  : 'CITR_ac/FsftCITR_b_PP_Gnd_Fault_Det'
 * '<S75>'  : 'CITR_ac/FsftCITR_b_PP_LIN_Cksm_Err'
 * '<S76>'  : 'CITR_ac/FsftCITR_b_PP_LIN_Data_Err'
 * '<S77>'  : 'CITR_ac/FsftCITR_b_PP_LIN_Parity_Err'
 * '<S78>'  : 'CITR_ac/FsftCITR_b_RsErrSPP'
 * '<S79>'  : 'CITR_ac/FsftCITR_b_RsErrSPP2'
 * '<S80>'  : 'CITR_ac/FsftCITR_b_SOC_Max_Lev'
 * '<S81>'  : 'CITR_ac/FsftCITR_b_TBMStopChrg'
 * '<S82>'  : 'CITR_ac/FsftCITR_b_TBM_Sch1_CabTemp'
 * '<S83>'  : 'CITR_ac/FsftCITR_b_TBM_Sch1_Day'
 * '<S84>'  : 'CITR_ac/FsftCITR_b_TBM_Sch1_End_Time_Hr'
 * '<S85>'  : 'CITR_ac/FsftCITR_b_TBM_Sch1_End_Time_Min'
 * '<S86>'  : 'CITR_ac/FsftCITR_b_TBM_Sch1_Start_Time_Hr'
 * '<S87>'  : 'CITR_ac/FsftCITR_b_TBM_Sch1_Start_Time_Min'
 * '<S88>'  : 'CITR_ac/FsftCITR_b_TBM_Sch1_Type'
 * '<S89>'  : 'CITR_ac/FsftCITR_b_TBM_Sch2_CabTemp'
 * '<S90>'  : 'CITR_ac/FsftCITR_b_TBM_Sch2_Day'
 * '<S91>'  : 'CITR_ac/FsftCITR_b_TBM_Sch2_End_Time_Hr'
 * '<S92>'  : 'CITR_ac/FsftCITR_b_TBM_Sch2_End_Time_Min'
 * '<S93>'  : 'CITR_ac/FsftCITR_b_TBM_Sch2_Start_Time_Hr'
 * '<S94>'  : 'CITR_ac/FsftCITR_b_TBM_Sch2_Start_Time_Min'
 * '<S95>'  : 'CITR_ac/FsftCITR_b_TBM_Sch2_Type'
 * '<S96>'  : 'CITR_ac/FsftCITR_b_TBM_Sch3_Allow'
 * '<S97>'  : 'CITR_ac/FsftCITR_b_TBM_Sch3_CabTemp'
 * '<S98>'  : 'CITR_ac/FsftCITR_b_TBM_Sch3_Day'
 * '<S99>'  : 'CITR_ac/FsftCITR_b_TBM_Sch3_End_Time_Hr'
 * '<S100>' : 'CITR_ac/FsftCITR_b_TBM_Sch3_End_Time_Min'
 * '<S101>' : 'CITR_ac/FsftCITR_b_TBM_Sch3_Start_Time_Hr'
 * '<S102>' : 'CITR_ac/FsftCITR_b_TBM_Sch3_Start_Time_Min'
 * '<S103>' : 'CITR_ac/FsftCITR_b_TBM_Sch3_Type'
 * '<S104>' : 'CITR_ac/FsftCITR_b_TBM_Sch4_Allow'
 * '<S105>' : 'CITR_ac/FsftCITR_b_TBM_Sch4_CabTemp'
 * '<S106>' : 'CITR_ac/FsftCITR_b_TBM_Sch4_Day'
 * '<S107>' : 'CITR_ac/FsftCITR_b_TBM_Sch4_Start_Time_Hr'
 * '<S108>' : 'CITR_ac/FsftCITR_b_TBM_Sch4_Start_Time_Min'
 * '<S109>' : 'CITR_ac/FsftCITR_b_V2HModeReq'
 * '<S110>' : 'CITR_ac/FsftCITR_b_V2HReq'
 * '<S111>' : 'CITR_ac/FsftCITR_b_V2HSubmit'
 * '<S112>' : 'CITR_ac/FsftCITR_b_V2LModeReq'
 * '<S113>' : 'CITR_ac/FsftCITR_b_V2LSubmit'
 * '<S114>' : 'CITR_ac/FsftCITR_b_V2LTrunkReq'
 * '<S115>' : 'CITR_ac/FsftCITR_b_V2L_AllReq'
 * '<S116>' : 'CITR_ac/FsftCITR_b_V2L_FrunkReq'
 * '<S117>' : 'CITR_ac/FsftCITR_b_V2VModeReq'
 * '<S118>' : 'CITR_ac/FsftCITR_b_V2VReq'
 * '<S119>' : 'CITR_ac/FsftCITR_b_V2VSubmit'
 * '<S120>' : 'CITR_ac/FsftCITR_e_BCIM_Ind1_Fdbk'
 * '<S121>' : 'CITR_ac/FsftCITR_e_BCIM_Ind2_Fdbk'
 * '<S122>' : 'CITR_ac/FsftCITR_e_BCIM_Ind3_Fdbk'
 * '<S123>' : 'CITR_ac/FsftCITR_e_BCIM_Ind4_Fdbk'
 * '<S124>' : 'CITR_ac/FsftCITR_e_BCIM_Ind5_Fdbk'
 * '<S125>' : 'CITR_ac/FsftCITR_e_BCIM_Ind_Color_Fdbk'
 * '<S126>' : 'CITR_ac/FsftCITR_e_CPIM_Icon1_Sts'
 * '<S127>' : 'CITR_ac/FsftCITR_e_CPIM_Icon2_Sts'
 * '<S128>' : 'CITR_ac/FsftCITR_e_CPIM_Ind1_Fdbk'
 * '<S129>' : 'CITR_ac/FsftCITR_e_CPIM_Ind2_Fdbk'
 * '<S130>' : 'CITR_ac/FsftCITR_e_CPIM_Ind3_Fdbk'
 * '<S131>' : 'CITR_ac/FsftCITR_e_CPIM_Ind4_Fdbk'
 * '<S132>' : 'CITR_ac/FsftCITR_e_CPIM_Ind5_Fdbk'
 * '<S133>' : 'CITR_ac/FsftCITR_e_CPIM_Ind_Color_Fdbk'
 * '<S134>' : 'CITR_ac/FsftCITR_e_ChrgPortLock_FailSts'
 * '<S135>' : 'CITR_ac/FsftCITR_e_ChrgrFlapSts'
 * '<S136>' : 'CITR_ac/FsftCITR_e_CoopCh_ChrgCmd'
 * '<S137>' : 'CITR_ac/FsftCITR_e_DoorLockLastElSts'
 * '<S138>' : 'CITR_ac/FsftCITR_e_DoorLockLastElSts_2'
 * '<S139>' : 'CITR_ac/FsftCITR_e_FOTA_Install_Type'
 * '<S140>' : 'CITR_ac/FsftCITR_e_HU_ChrgSchedType1'
 * '<S141>' : 'CITR_ac/FsftCITR_e_HU_ChrgSchedType2'
 * '<S142>' : 'CITR_ac/FsftCITR_e_PP2Fault'
 * '<S143>' : 'CITR_ac/FsftCITR_e_PP2FaultRsn'
 * '<S144>' : 'CITR_ac/FsftCITR_e_PP2LEDFault'
 * '<S145>' : 'CITR_ac/FsftCITR_e_PP2_LED_A_ColorFeedback'
 * '<S146>' : 'CITR_ac/FsftCITR_e_PP2_LED_A_FailSts'
 * '<S147>' : 'CITR_ac/FsftCITR_e_PP2_LED_A_Feedback'
 * '<S148>' : 'CITR_ac/FsftCITR_e_PP2_LED_B_FailSts'
 * '<S149>' : 'CITR_ac/FsftCITR_e_PP2_LED_B_Feedback'
 * '<S150>' : 'CITR_ac/FsftCITR_e_PPFault'
 * '<S151>' : 'CITR_ac/FsftCITR_e_PPFaultRsn'
 * '<S152>' : 'CITR_ac/FsftCITR_e_PPLEDFault'
 * '<S153>' : 'CITR_ac/FsftCITR_e_PP_LED_A_ColorFeedback'
 * '<S154>' : 'CITR_ac/FsftCITR_e_PP_LED_A_FailSts'
 * '<S155>' : 'CITR_ac/FsftCITR_e_PP_LED_A_Feedback'
 * '<S156>' : 'CITR_ac/FsftCITR_e_PP_LED_B_ColorFeedback'
 * '<S157>' : 'CITR_ac/FsftCITR_e_PP_LED_B_ColorFeedback1'
 * '<S158>' : 'CITR_ac/FsftCITR_e_PP_LED_B_FailSts'
 * '<S159>' : 'CITR_ac/FsftCITR_e_PP_LED_B_Feedback'
 * '<S160>' : 'CITR_ac/FsftCITR_e_PP_LED_C_ColorFeedback'
 * '<S161>' : 'CITR_ac/FsftCITR_e_PP_LED_C_FailSts'
 * '<S162>' : 'CITR_ac/FsftCITR_e_PP_LED_C_Feedback'
 * '<S163>' : 'CITR_ac/FsftCITR_e_PowerLimitReq'
 * '<S164>' : 'CITR_ac/FsftCITR_e_PowerLimitReq_2'
 * '<S165>' : 'CITR_ac/FsftCITR_e_RmtChrgPortLkCmd'
 * '<S166>' : 'CITR_ac/FsftCITR_e_TBM_ChrgSchedType1'
 * '<S167>' : 'CITR_ac/FsftCITR_e_TBM_ChrgSchedType2'
 * '<S168>' : 'CITR_ac/FsftCITR_l_DistanceToCharge'
 * '<S169>' : 'CITR_ac/FsftCITR_t_TimeToCharge'
 * '<S170>' : 'CITR_ac/PokeCITR_I_PP2CurrentDrawSens1'
 * '<S171>' : 'CITR_ac/PokeCITR_I_PP2CurrentDrawSens2'
 * '<S172>' : 'CITR_ac/PokeCITR_I_PPCurrentDrawSens1'
 * '<S173>' : 'CITR_ac/PokeCITR_I_PPCurrentDrawSens2'
 * '<S174>' : 'CITR_ac/PokeCITR_K_ChrgPortHbridgeFlt'
 * '<S175>' : 'CITR_ac/PokeCITR_K_DateTmDay'
 * '<S176>' : 'CITR_ac/PokeCITR_K_DateTmHour'
 * '<S177>' : 'CITR_ac/PokeCITR_K_DateTmMin'
 * '<S178>' : 'CITR_ac/PokeCITR_K_DateTmMon'
 * '<S179>' : 'CITR_ac/PokeCITR_K_DateTmSec'
 * '<S180>' : 'CITR_ac/PokeCITR_K_DateTmYear'
 * '<S181>' : 'CITR_ac/PokeCITR_K_Date_Day1'
 * '<S182>' : 'CITR_ac/PokeCITR_K_Date_Day2'
 * '<S183>' : 'CITR_ac/PokeCITR_K_Date_Month1'
 * '<S184>' : 'CITR_ac/PokeCITR_K_Date_Month2'
 * '<S185>' : 'CITR_ac/PokeCITR_K_Date_Year1'
 * '<S186>' : 'CITR_ac/PokeCITR_K_Date_Year2'
 * '<S187>' : 'CITR_ac/PokeCITR_K_Date_Year3'
 * '<S188>' : 'CITR_ac/PokeCITR_K_Date_Year4'
 * '<S189>' : 'CITR_ac/PokeCITR_K_HU_Sch1_Day'
 * '<S190>' : 'CITR_ac/PokeCITR_K_HU_Sch1_End_Time_Hr'
 * '<S191>' : 'CITR_ac/PokeCITR_K_HU_Sch1_End_Time_Min'
 * '<S192>' : 'CITR_ac/PokeCITR_K_HU_Sch1_Start_Time_Hr'
 * '<S193>' : 'CITR_ac/PokeCITR_K_HU_Sch1_Start_Time_Min'
 * '<S194>' : 'CITR_ac/PokeCITR_K_HU_Sch2_Day'
 * '<S195>' : 'CITR_ac/PokeCITR_K_HU_Sch2_End_Time_Hr'
 * '<S196>' : 'CITR_ac/PokeCITR_K_HU_Sch2_End_Time_Min'
 * '<S197>' : 'CITR_ac/PokeCITR_K_HU_Sch2_Start_Time_Hr'
 * '<S198>' : 'CITR_ac/PokeCITR_K_HU_Sch2_Start_Time_Min'
 * '<S199>' : 'CITR_ac/PokeCITR_K_HU_Sch3_Day'
 * '<S200>' : 'CITR_ac/PokeCITR_K_HU_Sch3_End_Time_Hr'
 * '<S201>' : 'CITR_ac/PokeCITR_K_HU_Sch3_End_Time_Min'
 * '<S202>' : 'CITR_ac/PokeCITR_K_HU_Sch3_Start_Time_Hr'
 * '<S203>' : 'CITR_ac/PokeCITR_K_HU_Sch3_Start_Time_Min'
 * '<S204>' : 'CITR_ac/PokeCITR_K_HU_Sch4_Day'
 * '<S205>' : 'CITR_ac/PokeCITR_K_HU_Sch4_Start_Time_Hr'
 * '<S206>' : 'CITR_ac/PokeCITR_K_HU_Sch4_Start_Time_Min'
 * '<S207>' : 'CITR_ac/PokeCITR_K_TBM_Sch1_Day'
 * '<S208>' : 'CITR_ac/PokeCITR_K_TBM_Sch1_End_Time_Hr'
 * '<S209>' : 'CITR_ac/PokeCITR_K_TBM_Sch1_End_Time_Min'
 * '<S210>' : 'CITR_ac/PokeCITR_K_TBM_Sch1_Start_Time_Hr'
 * '<S211>' : 'CITR_ac/PokeCITR_K_TBM_Sch1_Start_Time_Min'
 * '<S212>' : 'CITR_ac/PokeCITR_K_TBM_Sch2_Day'
 * '<S213>' : 'CITR_ac/PokeCITR_K_TBM_Sch2_End_Time_Hr'
 * '<S214>' : 'CITR_ac/PokeCITR_K_TBM_Sch2_End_Time_Min'
 * '<S215>' : 'CITR_ac/PokeCITR_K_TBM_Sch2_Start_Time_Hr'
 * '<S216>' : 'CITR_ac/PokeCITR_K_TBM_Sch2_Start_Time_Min'
 * '<S217>' : 'CITR_ac/PokeCITR_K_TBM_Sch3_Day'
 * '<S218>' : 'CITR_ac/PokeCITR_K_TBM_Sch3_End_Time_Hr'
 * '<S219>' : 'CITR_ac/PokeCITR_K_TBM_Sch3_End_Time_Min'
 * '<S220>' : 'CITR_ac/PokeCITR_K_TBM_Sch3_Start_Time_Hr'
 * '<S221>' : 'CITR_ac/PokeCITR_K_TBM_Sch3_Start_Time_Min'
 * '<S222>' : 'CITR_ac/PokeCITR_K_TBM_Sch4_Day'
 * '<S223>' : 'CITR_ac/PokeCITR_K_TBM_Sch4_Start_Time_Hr'
 * '<S224>' : 'CITR_ac/PokeCITR_K_TBM_Sch4_Start_Time_Min'
 * '<S225>' : 'CITR_ac/PokeCITR_K_Time_Hour1'
 * '<S226>' : 'CITR_ac/PokeCITR_K_Time_Hour2'
 * '<S227>' : 'CITR_ac/PokeCITR_K_Time_Minute1'
 * '<S228>' : 'CITR_ac/PokeCITR_K_Time_Minute2'
 * '<S229>' : 'CITR_ac/PokeCITR_P_ChargingDestinationPwr'
 * '<S230>' : 'CITR_ac/PokeCITR_P_PP2RatedPower'
 * '<S231>' : 'CITR_ac/PokeCITR_P_PPRatedPower'
 * '<S232>' : 'CITR_ac/PokeCITR_Pct_HU_ExtChrgTarget1'
 * '<S233>' : 'CITR_ac/PokeCITR_Pct_HU_ExtChrgTarget2'
 * '<S234>' : 'CITR_ac/PokeCITR_Pct_HU_ImmChrgTarget1'
 * '<S235>' : 'CITR_ac/PokeCITR_Pct_HU_ImmChrgTarget2'
 * '<S236>' : 'CITR_ac/PokeCITR_Pct_TBM_ExtChrgTarget1'
 * '<S237>' : 'CITR_ac/PokeCITR_Pct_TBM_ExtChrgTarget2'
 * '<S238>' : 'CITR_ac/PokeCITR_Pct_TBM_ImmChrgTarget1'
 * '<S239>' : 'CITR_ac/PokeCITR_Pct_TBM_ImmChrgTarget2'
 * '<S240>' : 'CITR_ac/PokeCITR_Pct_V2HRsrvBatt'
 * '<S241>' : 'CITR_ac/PokeCITR_Pct_V2LRsrvBatt'
 * '<S242>' : 'CITR_ac/PokeCITR_Pct_V2VRsrvBatt'
 * '<S243>' : 'CITR_ac/PokeCITR_T_HU_Sch1_CabTemp'
 * '<S244>' : 'CITR_ac/PokeCITR_T_HU_Sch2_CabTemp'
 * '<S245>' : 'CITR_ac/PokeCITR_T_HU_Sch3_CabTemp'
 * '<S246>' : 'CITR_ac/PokeCITR_T_HU_Sch4_CabTemp'
 * '<S247>' : 'CITR_ac/PokeCITR_T_TBM_Sch1_CabTemp'
 * '<S248>' : 'CITR_ac/PokeCITR_T_TBM_Sch2_CabTemp'
 * '<S249>' : 'CITR_ac/PokeCITR_T_TBM_Sch3_CabTemp'
 * '<S250>' : 'CITR_ac/PokeCITR_T_TBM_Sch4_CabTemp'
 * '<S251>' : 'CITR_ac/PokeCITR_U_ChrgPortLock_StsB'
 * '<S252>' : 'CITR_ac/PokeCITR_b_BCIM_LIN_Chksum_Error'
 * '<S253>' : 'CITR_ac/PokeCITR_b_BCIM_LIN_Data_Error'
 * '<S254>' : 'CITR_ac/PokeCITR_b_BCIM_LIN_Parity_Error'
 * '<S255>' : 'CITR_ac/PokeCITR_b_BCIM_Over_Temp'
 * '<S256>' : 'CITR_ac/PokeCITR_b_BCIM_Undervolt'
 * '<S257>' : 'CITR_ac/PokeCITR_b_CPIM_BlueLED_Sts'
 * '<S258>' : 'CITR_ac/PokeCITR_b_CPIM_GreenLED_Sts'
 * '<S259>' : 'CITR_ac/PokeCITR_b_CPIM_LINChkSumErr'
 * '<S260>' : 'CITR_ac/PokeCITR_b_CPIM_LINDataErr'
 * '<S261>' : 'CITR_ac/PokeCITR_b_CPIM_LINParityErr'
 * '<S262>' : 'CITR_ac/PokeCITR_b_CPIM_OverTemp'
 * '<S263>' : 'CITR_ac/PokeCITR_b_CPIM_RedLED_Sts'
 * '<S264>' : 'CITR_ac/PokeCITR_b_CPIM_UnderVolt'
 * '<S265>' : 'CITR_ac/PokeCITR_b_ChargeNow'
 * '<S266>' : 'CITR_ac/PokeCITR_b_ChrgPortButton_FailSts'
 * '<S267>' : 'CITR_ac/PokeCITR_b_ChrgPortButton_Sts'
 * '<S268>' : 'CITR_ac/PokeCITR_b_ChrgPortLock_StsC'
 * '<S269>' : 'CITR_ac/PokeCITR_b_ChrgPort_BCM_Cmd'
 * '<S270>' : 'CITR_ac/PokeCITR_b_ChrgPort_Fdbk'
 * '<S271>' : 'CITR_ac/PokeCITR_b_CoopCh_VehLocation'
 * '<S272>' : 'CITR_ac/PokeCITR_b_DC_PwrLev'
 * '<S273>' : 'CITR_ac/PokeCITR_b_Drv_Dr_Unlocking'
 * '<S274>' : 'CITR_ac/PokeCITR_b_HU_Sch1_ChargeUntilFull'
 * '<S275>' : 'CITR_ac/PokeCITR_b_HU_Sch1_Do_Not_Repeat'
 * '<S276>' : 'CITR_ac/PokeCITR_b_HU_Sch1_Enbl'
 * '<S277>' : 'CITR_ac/PokeCITR_b_HU_Sch1_Priority'
 * '<S278>' : 'CITR_ac/PokeCITR_b_HU_Sch1_Submit'
 * '<S279>' : 'CITR_ac/PokeCITR_b_HU_Sch2_ChargeUntilFull'
 * '<S280>' : 'CITR_ac/PokeCITR_b_HU_Sch2_Do_Not_Repeat'
 * '<S281>' : 'CITR_ac/PokeCITR_b_HU_Sch2_Enbl'
 * '<S282>' : 'CITR_ac/PokeCITR_b_HU_Sch2_Priority'
 * '<S283>' : 'CITR_ac/PokeCITR_b_HU_Sch2_Submit'
 * '<S284>' : 'CITR_ac/PokeCITR_b_HU_Sch3_ChargeUntilFull'
 * '<S285>' : 'CITR_ac/PokeCITR_b_HU_Sch3_Do_Not_Repeat'
 * '<S286>' : 'CITR_ac/PokeCITR_b_HU_Sch3_Enbl'
 * '<S287>' : 'CITR_ac/PokeCITR_b_HU_Sch3_Priority'
 * '<S288>' : 'CITR_ac/PokeCITR_b_HU_Sch3_Submit'
 * '<S289>' : 'CITR_ac/PokeCITR_b_HU_Sch4_Enbl'
 * '<S290>' : 'CITR_ac/PokeCITR_b_HU_Sch4_Submit'
 * '<S291>' : 'CITR_ac/PokeCITR_b_Icon1_FailSts'
 * '<S292>' : 'CITR_ac/PokeCITR_b_Icon2_FailSts'
 * '<S293>' : 'CITR_ac/PokeCITR_b_PP2ACPresentSens1'
 * '<S294>' : 'CITR_ac/PokeCITR_b_PP2ACPresentSens2'
 * '<S295>' : 'CITR_ac/PokeCITR_b_PP2ButtonSts'
 * '<S296>' : 'CITR_ac/PokeCITR_b_PP2LidSwitchSts'
 * '<S297>' : 'CITR_ac/PokeCITR_b_PP2LidSwitchSts120A'
 * '<S298>' : 'CITR_ac/PokeCITR_b_PP2LidSwitchSts120B'
 * '<S299>' : 'CITR_ac/PokeCITR_b_PP2_Gnd_Fault_Det'
 * '<S300>' : 'CITR_ac/PokeCITR_b_PP2_LIN_Cksm_Err'
 * '<S301>' : 'CITR_ac/PokeCITR_b_PP2_LIN_Data_Err'
 * '<S302>' : 'CITR_ac/PokeCITR_b_PP2_LIN_Parity_Err'
 * '<S303>' : 'CITR_ac/PokeCITR_b_PPACPresentSens1'
 * '<S304>' : 'CITR_ac/PokeCITR_b_PPACPresentSens2'
 * '<S305>' : 'CITR_ac/PokeCITR_b_PPButtonSts'
 * '<S306>' : 'CITR_ac/PokeCITR_b_PPLidSwitchSts120A'
 * '<S307>' : 'CITR_ac/PokeCITR_b_PPLidSwitchSts120B'
 * '<S308>' : 'CITR_ac/PokeCITR_b_PPLidSwitchSts240'
 * '<S309>' : 'CITR_ac/PokeCITR_b_PP_Gnd_Fault_Det'
 * '<S310>' : 'CITR_ac/PokeCITR_b_PP_LIN_Cksm_Err'
 * '<S311>' : 'CITR_ac/PokeCITR_b_PP_LIN_Data_Err'
 * '<S312>' : 'CITR_ac/PokeCITR_b_PP_LIN_Parity_Err'
 * '<S313>' : 'CITR_ac/PokeCITR_b_RsErrSPP'
 * '<S314>' : 'CITR_ac/PokeCITR_b_RsErrSPP2'
 * '<S315>' : 'CITR_ac/PokeCITR_b_SOC_Max_Lev'
 * '<S316>' : 'CITR_ac/PokeCITR_b_TBMStopChrg'
 * '<S317>' : 'CITR_ac/PokeCITR_b_TBM_Charge_Now'
 * '<S318>' : 'CITR_ac/PokeCITR_b_TBM_Sch1_ChargeUntilFull'
 * '<S319>' : 'CITR_ac/PokeCITR_b_TBM_Sch1_Do_Not_Repeat'
 * '<S320>' : 'CITR_ac/PokeCITR_b_TBM_Sch1_Enbl'
 * '<S321>' : 'CITR_ac/PokeCITR_b_TBM_Sch1_Priority'
 * '<S322>' : 'CITR_ac/PokeCITR_b_TBM_Sch1_Submit'
 * '<S323>' : 'CITR_ac/PokeCITR_b_TBM_Sch2_ChargeUntilFull'
 * '<S324>' : 'CITR_ac/PokeCITR_b_TBM_Sch2_Do_Not_Repeat'
 * '<S325>' : 'CITR_ac/PokeCITR_b_TBM_Sch2_Enbl'
 * '<S326>' : 'CITR_ac/PokeCITR_b_TBM_Sch2_Priority'
 * '<S327>' : 'CITR_ac/PokeCITR_b_TBM_Sch2_Submit'
 * '<S328>' : 'CITR_ac/PokeCITR_b_TBM_Sch3_ChargeUntilFull'
 * '<S329>' : 'CITR_ac/PokeCITR_b_TBM_Sch3_Do_Not_Repeat'
 * '<S330>' : 'CITR_ac/PokeCITR_b_TBM_Sch3_Enbl'
 * '<S331>' : 'CITR_ac/PokeCITR_b_TBM_Sch3_Priority'
 * '<S332>' : 'CITR_ac/PokeCITR_b_TBM_Sch3_Submit'
 * '<S333>' : 'CITR_ac/PokeCITR_b_TBM_Sch4_Enbl'
 * '<S334>' : 'CITR_ac/PokeCITR_b_TBM_Sch4_Submit'
 * '<S335>' : 'CITR_ac/PokeCITR_b_V2HModeReq'
 * '<S336>' : 'CITR_ac/PokeCITR_b_V2HReq'
 * '<S337>' : 'CITR_ac/PokeCITR_b_V2HSubmit'
 * '<S338>' : 'CITR_ac/PokeCITR_b_V2LModeReq'
 * '<S339>' : 'CITR_ac/PokeCITR_b_V2LSubmit'
 * '<S340>' : 'CITR_ac/PokeCITR_b_V2LTrunkReq'
 * '<S341>' : 'CITR_ac/PokeCITR_b_V2L_AllReq'
 * '<S342>' : 'CITR_ac/PokeCITR_b_V2L_FrunkReq'
 * '<S343>' : 'CITR_ac/PokeCITR_b_V2VModeReq'
 * '<S344>' : 'CITR_ac/PokeCITR_b_V2VReq'
 * '<S345>' : 'CITR_ac/PokeCITR_b_V2VSubmit'
 * '<S346>' : 'CITR_ac/PokeCITR_e_BCIM_Ind1_FailSts'
 * '<S347>' : 'CITR_ac/PokeCITR_e_BCIM_Ind1_Fdbk'
 * '<S348>' : 'CITR_ac/PokeCITR_e_BCIM_Ind2_FailSts'
 * '<S349>' : 'CITR_ac/PokeCITR_e_BCIM_Ind2_Fdbk'
 * '<S350>' : 'CITR_ac/PokeCITR_e_BCIM_Ind3_FailSts'
 * '<S351>' : 'CITR_ac/PokeCITR_e_BCIM_Ind3_Fdbk'
 * '<S352>' : 'CITR_ac/PokeCITR_e_BCIM_Ind4_FailSts'
 * '<S353>' : 'CITR_ac/PokeCITR_e_BCIM_Ind4_Fdbk'
 * '<S354>' : 'CITR_ac/PokeCITR_e_BCIM_Ind5_FailSts'
 * '<S355>' : 'CITR_ac/PokeCITR_e_BCIM_Ind5_Fdbk'
 * '<S356>' : 'CITR_ac/PokeCITR_e_BCIM_Ind_Color_Fdbk'
 * '<S357>' : 'CITR_ac/PokeCITR_e_CPIM_BlueLED_FailSts'
 * '<S358>' : 'CITR_ac/PokeCITR_e_CPIM_GreenLED_FailSts'
 * '<S359>' : 'CITR_ac/PokeCITR_e_CPIM_Icon1_Sts'
 * '<S360>' : 'CITR_ac/PokeCITR_e_CPIM_Icon2_Sts'
 * '<S361>' : 'CITR_ac/PokeCITR_e_CPIM_Ind1_FailSts'
 * '<S362>' : 'CITR_ac/PokeCITR_e_CPIM_Ind1_Fdbk'
 * '<S363>' : 'CITR_ac/PokeCITR_e_CPIM_Ind2_FailSts'
 * '<S364>' : 'CITR_ac/PokeCITR_e_CPIM_Ind2_Fdbk'
 * '<S365>' : 'CITR_ac/PokeCITR_e_CPIM_Ind3_FailSts'
 * '<S366>' : 'CITR_ac/PokeCITR_e_CPIM_Ind3_Fdbk'
 * '<S367>' : 'CITR_ac/PokeCITR_e_CPIM_Ind4_FailSts'
 * '<S368>' : 'CITR_ac/PokeCITR_e_CPIM_Ind4_Fdbk'
 * '<S369>' : 'CITR_ac/PokeCITR_e_CPIM_Ind5_FailSts'
 * '<S370>' : 'CITR_ac/PokeCITR_e_CPIM_Ind5_Fdbk'
 * '<S371>' : 'CITR_ac/PokeCITR_e_CPIM_Ind_Color_Fdbk'
 * '<S372>' : 'CITR_ac/PokeCITR_e_CPIM_RedLED_FailSts'
 * '<S373>' : 'CITR_ac/PokeCITR_e_ChrgPortDoor_Sts'
 * '<S374>' : 'CITR_ac/PokeCITR_e_ChrgPortLock_FailSts'
 * '<S375>' : 'CITR_ac/PokeCITR_e_ChrgrFlapSts'
 * '<S376>' : 'CITR_ac/PokeCITR_e_CoopCh_ChrgCmd'
 * '<S377>' : 'CITR_ac/PokeCITR_e_DVC_IO_BCIM'
 * '<S378>' : 'CITR_ac/PokeCITR_e_DVC_IO_BCIM_JL'
 * '<S379>' : 'CITR_ac/PokeCITR_e_DVC_IO_CPIM'
 * '<S380>' : 'CITR_ac/PokeCITR_e_DateTmFormat'
 * '<S381>' : 'CITR_ac/PokeCITR_e_DoorLockLastElSts'
 * '<S382>' : 'CITR_ac/PokeCITR_e_DoorLockLastElSts_2'
 * '<S383>' : 'CITR_ac/PokeCITR_e_FOTA_Install_Type'
 * '<S384>' : 'CITR_ac/PokeCITR_e_FOTA_Installation_Status'
 * '<S385>' : 'CITR_ac/PokeCITR_e_HU_ChrgSchedType1'
 * '<S386>' : 'CITR_ac/PokeCITR_e_HU_ChrgSchedType2'
 * '<S387>' : 'CITR_ac/PokeCITR_e_HU_Sch1_Type'
 * '<S388>' : 'CITR_ac/PokeCITR_e_HU_Sch2_Type'
 * '<S389>' : 'CITR_ac/PokeCITR_e_HU_Sch3_Allow'
 * '<S390>' : 'CITR_ac/PokeCITR_e_HU_Sch3_Type'
 * '<S391>' : 'CITR_ac/PokeCITR_e_HU_Sch4_Allow'
 * '<S392>' : 'CITR_ac/PokeCITR_e_PP2Fault'
 * '<S393>' : 'CITR_ac/PokeCITR_e_PP2FaultRsn'
 * '<S394>' : 'CITR_ac/PokeCITR_e_PP2LEDFault'
 * '<S395>' : 'CITR_ac/PokeCITR_e_PP2_LED_A_ColorFeedback'
 * '<S396>' : 'CITR_ac/PokeCITR_e_PP2_LED_A_FailSts'
 * '<S397>' : 'CITR_ac/PokeCITR_e_PP2_LED_A_Feedback'
 * '<S398>' : 'CITR_ac/PokeCITR_e_PP2_LED_B_ColorFeedback'
 * '<S399>' : 'CITR_ac/PokeCITR_e_PP2_LED_B_FailSts'
 * '<S400>' : 'CITR_ac/PokeCITR_e_PP2_LED_B_Feedback'
 * '<S401>' : 'CITR_ac/PokeCITR_e_PPFault'
 * '<S402>' : 'CITR_ac/PokeCITR_e_PPFaultRsn'
 * '<S403>' : 'CITR_ac/PokeCITR_e_PPLEDFault'
 * '<S404>' : 'CITR_ac/PokeCITR_e_PP_LED_A_ColorFeedback'
 * '<S405>' : 'CITR_ac/PokeCITR_e_PP_LED_A_FailSts'
 * '<S406>' : 'CITR_ac/PokeCITR_e_PP_LED_A_Feedback'
 * '<S407>' : 'CITR_ac/PokeCITR_e_PP_LED_B_ColorFeedback'
 * '<S408>' : 'CITR_ac/PokeCITR_e_PP_LED_B_FailSts'
 * '<S409>' : 'CITR_ac/PokeCITR_e_PP_LED_B_Feedback'
 * '<S410>' : 'CITR_ac/PokeCITR_e_PP_LED_C_ColorFeedback'
 * '<S411>' : 'CITR_ac/PokeCITR_e_PP_LED_C_FailSts'
 * '<S412>' : 'CITR_ac/PokeCITR_e_PP_LED_C_Feedback'
 * '<S413>' : 'CITR_ac/PokeCITR_e_PowerLimit_Req'
 * '<S414>' : 'CITR_ac/PokeCITR_e_PowerLimit_Req_2'
 * '<S415>' : 'CITR_ac/PokeCITR_e_RmtChrgPortLkCmd'
 * '<S416>' : 'CITR_ac/PokeCITR_e_TBM_ChrgSchedType1'
 * '<S417>' : 'CITR_ac/PokeCITR_e_TBM_ChrgSchedType2'
 * '<S418>' : 'CITR_ac/PokeCITR_e_TBM_Sch1_Type'
 * '<S419>' : 'CITR_ac/PokeCITR_e_TBM_Sch2_Type'
 * '<S420>' : 'CITR_ac/PokeCITR_e_TBM_Sch3_Allow'
 * '<S421>' : 'CITR_ac/PokeCITR_e_TBM_Sch3_Type'
 * '<S422>' : 'CITR_ac/PokeCITR_e_TBM_Sch4_Allow'
 * '<S423>' : 'CITR_ac/PokeCITR_l_DistanceToCharge'
 * '<S424>' : 'CITR_ac/PokeCITR_t_TimeToCharge'
 * '<S425>' : 'CITR_ac/Poke_DID_RWDB604_DCChrg_TestSts_DidWrite'
 * '<S426>' : 'CITR_ac/Runnable_Charge_Port_Lock'
 * '<S427>' : 'CITR_ac/TmotCITR_b_ChrgPort_BCM_Cmd'
 * '<S428>' : 'CITR_ac/TmotCITR_b_DC_PwrLev'
 * '<S429>' : 'CITR_ac/TmotCITR_b_DateTmDay'
 * '<S430>' : 'CITR_ac/TmotCITR_b_Date_Day1'
 * '<S431>' : 'CITR_ac/TmotCITR_b_HU_Sch1_Day'
 * '<S432>' : 'CITR_ac/TmotCITR_b_HU_Sch2_Day'
 * '<S433>' : 'CITR_ac/TmotCITR_b_HU_Sch3_Day'
 * '<S434>' : 'CITR_ac/TmotCITR_b_HU_Sch4_Day'
 * '<S435>' : 'CITR_ac/TmotCITR_b_TBM_Sch1_Day'
 * '<S436>' : 'CITR_ac/TmotCITR_b_TBM_Sch2_Day'
 * '<S437>' : 'CITR_ac/TmotCITR_b_TBM_Sch3_Day'
 * '<S438>' : 'CITR_ac/TmotCITR_b_TBM_Sch4_Day'
 * '<S439>' : 'CITR_ac/TmotCITR_e_DoorLockLastElSts'
 * '<S440>' : 'CITR_ac/TmotCITR_e_DoorLockLastElSts_2'
 * '<S441>' : 'CITR_ac/TmotCITR_e_PowerLimitReq'
 * '<S442>' : 'CITR_ac/TmotCITR_e_PowerLimitReq_2'
 * '<S443>' : 'CITR_ac/TmotCITR_e_RmtChrgPortLkCmd'
 * '<S444>' : 'CITR_ac/CITR_FastTEF/InitBlock1'
 * '<S445>' : 'CITR_ac/CITR_FastTEF/InitBlock1/Enumerated_Constant'
 * '<S446>' : 'CITR_ac/CITR_FastTEF/InitBlock1/KeCITR_Cnt_DbncLockSense'
 * '<S447>' : 'CITR_ac/CITR_FastTEF/InitBlock1/KeCITR_Cnt_DbncLockSenseOff'
 * '<S448>' : 'CITR_ac/CITR_FastTEF/InitBlock1/Turn Off Delay Sample'
 * '<S449>' : 'CITR_ac/CITR_FastTEF/InitBlock1/Turn On Delay Sample3'
 * '<S450>' : 'CITR_ac/CITR_FastTEF/InitBlock1/Turn Off Delay Sample/EdgeFalling1'
 * '<S451>' : 'CITR_ac/CITR_FastTEF/InitBlock1/Turn On Delay Sample3/EdgeRising'
 * '<S452>' : 'CITR_ac/CITR_MedTED/ChrgPort'
 * '<S453>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLk_TpSel'
 * '<S454>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLock_TypeA'
 * '<S455>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLock_TypeB'
 * '<S456>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLock_TypeC'
 * '<S457>' : 'CITR_ac/CITR_MedTED/ChrgPort/KaCITR_e_RRM_VP_Level'
 * '<S458>' : 'CITR_ac/CITR_MedTED/ChrgPort/KeCITR_Cnt_Dbnc_BCM_Cmd'
 * '<S459>' : 'CITR_ac/CITR_MedTED/ChrgPort/KeCITR_b_DoorLockLastElSts_P1P4_GC'
 * '<S460>' : 'CITR_ac/CITR_MedTED/ChrgPort/KeCITR_b_PwrLimReq_P1P4_GC'
 * '<S461>' : 'CITR_ac/CITR_MedTED/ChrgPort/KeCITR_e_ChrgPortLock_Type'
 * '<S462>' : 'CITR_ac/CITR_MedTED/ChrgPort/StsDtrmn_TypeB'
 * '<S463>' : 'CITR_ac/CITR_MedTED/ChrgPort/Turn On Delay Sample1'
 * '<S464>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLk_TpSel/Enumerated Value'
 * '<S465>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLk_TpSel/Enumerated Value1'
 * '<S466>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLk_TpSel/Enumerated Value2'
 * '<S467>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLk_TpSel/Enumerated Value4'
 * '<S468>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLk_TpSel/IfThenElseif'
 * '<S469>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLk_TpSel/IfThenElseif1'
 * '<S470>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLk_TpSel/IfThenElseif2'
 * '<S471>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLock_TypeA/Enumerated Value4'
 * '<S472>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLock_TypeA/KeCITR_Cnt_DbncPortReset'
 * '<S473>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLock_TypeA/Signal Latch On With Reset1'
 * '<S474>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLock_TypeA/Turn On Delay Sample2'
 * '<S475>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLock_TypeA/Turn On Delay Sample2/EdgeRising'
 * '<S476>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLock_TypeB/Enumerated Value'
 * '<S477>' : 'CITR_ac/CITR_MedTED/ChrgPort/ChrgPortLock_TypeB/KeCITR_b_HBridge_ChrgPortLck'
 * '<S478>' : 'CITR_ac/CITR_MedTED/ChrgPort/StsDtrmn_TypeB/ClosedInterval'
 * '<S479>' : 'CITR_ac/CITR_MedTED/ChrgPort/StsDtrmn_TypeB/ClosedInterval1'
 * '<S480>' : 'CITR_ac/CITR_MedTED/ChrgPort/StsDtrmn_TypeB/Enumerated Value'
 * '<S481>' : 'CITR_ac/CITR_MedTED/ChrgPort/StsDtrmn_TypeB/Enumerated Value1'
 * '<S482>' : 'CITR_ac/CITR_MedTED/ChrgPort/StsDtrmn_TypeB/Enumerated Value2'
 * '<S483>' : 'CITR_ac/CITR_MedTED/ChrgPort/StsDtrmn_TypeB/IfThenElseif'
 * '<S484>' : 'CITR_ac/CITR_MedTED/ChrgPort/StsDtrmn_TypeB/KeCITR_U_LockStsDtrmn_MnLim'
 * '<S485>' : 'CITR_ac/CITR_MedTED/ChrgPort/StsDtrmn_TypeB/KeCITR_U_LockStsDtrmn_MxLim'
 * '<S486>' : 'CITR_ac/CITR_MedTED/ChrgPort/StsDtrmn_TypeB/KeCITR_U_UnLockStsDtrmn_MnLim'
 * '<S487>' : 'CITR_ac/CITR_MedTED/ChrgPort/StsDtrmn_TypeB/KeCITR_U_UnLockStsDtrmn_MxLim'
 * '<S488>' : 'CITR_ac/CITR_MedTED/ChrgPort/Turn On Delay Sample1/EdgeRising'
 * '<S489>' : 'CITR_ac/CITR_PwrOn/Cooperative_Charging_Init'
 * '<S490>' : 'CITR_ac/CITR_PwrOn/DSM_Init'
 * '<S491>' : 'CITR_ac/CITR_PwrOn/Init'
 * '<S492>' : 'CITR_ac/CITR_PwrOn/Init1'
 * '<S493>' : 'CITR_ac/CITR_PwrOn/InitBlock'
 * '<S494>' : 'CITR_ac/CITR_PwrOn/InitBlock1'
 * '<S495>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock'
 * '<S496>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init'
 * '<S497>' : 'CITR_ac/CITR_PwrOn/Schdule2__Init'
 * '<S498>' : 'CITR_ac/CITR_PwrOn/Schdule2__Init1'
 * '<S499>' : 'CITR_ac/CITR_PwrOn/Schdule3__Init'
 * '<S500>' : 'CITR_ac/CITR_PwrOn/Schdule3__Init1'
 * '<S501>' : 'CITR_ac/CITR_PwrOn/Schdule4__Init'
 * '<S502>' : 'CITR_ac/CITR_PwrOn/Schdule4__Init1'
 * '<S503>' : 'CITR_ac/CITR_PwrOn/Sub_Out_Init'
 * '<S504>' : 'CITR_ac/CITR_PwrOn/VehicleDateTime__Init'
 * '<S505>' : 'CITR_ac/CITR_PwrOn/Cooperative_Charging_Init/Enumerated_Constant1'
 * '<S506>' : 'CITR_ac/CITR_PwrOn/Cooperative_Charging_Init/Enumerated_Constant2'
 * '<S507>' : 'CITR_ac/CITR_PwrOn/Cooperative_Charging_Init/Enumerated_Constant3'
 * '<S508>' : 'CITR_ac/CITR_PwrOn/Cooperative_Charging_Init/Enumerated_Constant4'
 * '<S509>' : 'CITR_ac/CITR_PwrOn/Cooperative_Charging_Init/Enumerated_Constant5'
 * '<S510>' : 'CITR_ac/CITR_PwrOn/Cooperative_Charging_Init/Enumerated_Constant6'
 * '<S511>' : 'CITR_ac/CITR_PwrOn/Init/Enumerated_Constant'
 * '<S512>' : 'CITR_ac/CITR_PwrOn/Init1/Enumerated_Constant'
 * '<S513>' : 'CITR_ac/CITR_PwrOn/InitBlock/Enumerated_Constant1'
 * '<S514>' : 'CITR_ac/CITR_PwrOn/InitBlock/Enumerated_Constant2'
 * '<S515>' : 'CITR_ac/CITR_PwrOn/InitBlock/Enumerated_Constant4'
 * '<S516>' : 'CITR_ac/CITR_PwrOn/InitBlock/Enumerated_Constant5'
 * '<S517>' : 'CITR_ac/CITR_PwrOn/InitBlock/Enumerated_Constant6'
 * '<S518>' : 'CITR_ac/CITR_PwrOn/InitBlock/Enumerated_Constant7'
 * '<S519>' : 'CITR_ac/CITR_PwrOn/InitBlock/KeCITR_b_SOC_Max_Lev_Init'
 * '<S520>' : 'CITR_ac/CITR_PwrOn/InitBlock/KeCITR_e_DoorLkSts_Init'
 * '<S521>' : 'CITR_ac/CITR_PwrOn/InitBlock/KeCITR_e_PwrLimReq_Init'
 * '<S522>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant1'
 * '<S523>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant10'
 * '<S524>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant11'
 * '<S525>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant12'
 * '<S526>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant13'
 * '<S527>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant14'
 * '<S528>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant15'
 * '<S529>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant16'
 * '<S530>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant17'
 * '<S531>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant2'
 * '<S532>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant26'
 * '<S533>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant27'
 * '<S534>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant28'
 * '<S535>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant29'
 * '<S536>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant30'
 * '<S537>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant31'
 * '<S538>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant8'
 * '<S539>' : 'CITR_ac/CITR_PwrOn/InitBlock1/Enumerated_Constant9'
 * '<S540>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant'
 * '<S541>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant1'
 * '<S542>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant10'
 * '<S543>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant11'
 * '<S544>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant12'
 * '<S545>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant13'
 * '<S546>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant14'
 * '<S547>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant15'
 * '<S548>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant16'
 * '<S549>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant17'
 * '<S550>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant18'
 * '<S551>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant19'
 * '<S552>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant2'
 * '<S553>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant20'
 * '<S554>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant21'
 * '<S555>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant22'
 * '<S556>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant23'
 * '<S557>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant24'
 * '<S558>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant25'
 * '<S559>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant26'
 * '<S560>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant3'
 * '<S561>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant4'
 * '<S562>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant5'
 * '<S563>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant6'
 * '<S564>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant7'
 * '<S565>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant8'
 * '<S566>' : 'CITR_ac/CITR_PwrOn/LEDInd_Pokes__InitBlock/Enumerated_Constant9'
 * '<S567>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant1'
 * '<S568>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant10'
 * '<S569>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant11'
 * '<S570>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant12'
 * '<S571>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant13'
 * '<S572>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant14'
 * '<S573>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant15'
 * '<S574>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant16'
 * '<S575>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant17'
 * '<S576>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant18'
 * '<S577>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant19'
 * '<S578>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant2'
 * '<S579>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant20'
 * '<S580>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant21'
 * '<S581>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant3'
 * '<S582>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant4'
 * '<S583>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant5'
 * '<S584>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant6'
 * '<S585>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant7'
 * '<S586>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant8'
 * '<S587>' : 'CITR_ac/CITR_PwrOn/PowerPanel_Init/Enumerated_Constant9'
 * '<S588>' : 'CITR_ac/CITR_PwrOn/Schdule2__Init/Enumerated_Constant'
 * '<S589>' : 'CITR_ac/CITR_PwrOn/Schdule2__Init1/Enumerated_Constant'
 * '<S590>' : 'CITR_ac/CITR_PwrOn/Schdule3__Init/Enumerated_Constant'
 * '<S591>' : 'CITR_ac/CITR_PwrOn/Schdule3__Init/Enumerated_Constant1'
 * '<S592>' : 'CITR_ac/CITR_PwrOn/Schdule3__Init1/Enumerated_Constant'
 * '<S593>' : 'CITR_ac/CITR_PwrOn/Schdule3__Init1/Enumerated_Constant1'
 * '<S594>' : 'CITR_ac/CITR_PwrOn/Schdule4__Init/Enumerated_Constant1'
 * '<S595>' : 'CITR_ac/CITR_PwrOn/Schdule4__Init1/Enumerated_Constant1'
 * '<S596>' : 'CITR_ac/CITR_PwrOn/VehicleDateTime__Init/Enumerated_Constant'
 * '<S597>' : 'CITR_ac/CITR_PwrOn/VehicleDateTime__Init/Enumerated_Constant7'
 * '<S598>' : 'CITR_ac/CITR_PwrOn/VehicleDateTime__Init/Enumerated_Constant8'
 * '<S599>' : 'CITR_ac/FsftCITR_I_PP2CurrentDrawSens1/FsftCITR_I_PP2CurrentDrawSens1Chrt'
 * '<S600>' : 'CITR_ac/FsftCITR_I_PP2CurrentDrawSens2/FsftCITR_I_PP2CurrentDrawSens2Chrt'
 * '<S601>' : 'CITR_ac/FsftCITR_I_PPCurrentDrawSens1/FsftCITR_I_PPCurrentDrawSens1Chrt'
 * '<S602>' : 'CITR_ac/FsftCITR_I_PPCurrentDrawSens2/FsftCITR_I_PPCurrentDrawSens2Chrt'
 * '<S603>' : 'CITR_ac/FsftCITR_P_ChargingDestinationPwr/FsftCITR_P_ChargingDestinationPwrChrt'
 * '<S604>' : 'CITR_ac/FsftCITR_P_PP2RatedPower/FsftCITR_P_PP2RatedPowerChrt'
 * '<S605>' : 'CITR_ac/FsftCITR_P_PPRatedPower/FsftCITR_P_PPRatedPowerChrt'
 * '<S606>' : 'CITR_ac/FsftCITR_Pct_HU_ExtChrgTarget1/FsftCITR_Pct_HU_ExtChrgTarget1Chrt'
 * '<S607>' : 'CITR_ac/FsftCITR_Pct_HU_ExtChrgTarget2/FsftCITR_Pct_HU_ExtChrgTarget2Chrt'
 * '<S608>' : 'CITR_ac/FsftCITR_Pct_HU_ImmChrgTarget1/FsftCITR_Pct_HU_ImmChrgTarget1Chrt'
 * '<S609>' : 'CITR_ac/FsftCITR_Pct_HU_ImmChrgTarget2/FsftCITR_Pct_HU_ImmChrgTarget2Chrt'
 * '<S610>' : 'CITR_ac/FsftCITR_Pct_TBM_ExtChrgTarget1/FsftCITR_Pct_TBM_ExtChrgTarget1Chrt'
 * '<S611>' : 'CITR_ac/FsftCITR_Pct_TBM_ExtChrgTarget2/FsftCITR_Pct_TBM_ExtChrgTarget2Chrt'
 * '<S612>' : 'CITR_ac/FsftCITR_Pct_TBM_ImmChrgTarget1/FsftCITR_Pct_TBM_ImmChrgTarget1Chrt'
 * '<S613>' : 'CITR_ac/FsftCITR_Pct_TBM_ImmChrgTarget2/FsftCITR_Pct_TBM_ImmChrgTarget2Chrt'
 * '<S614>' : 'CITR_ac/FsftCITR_Pct_V2HRsrvBatt/FsftCITR_Pct_V2HRsrvBattChrt'
 * '<S615>' : 'CITR_ac/FsftCITR_Pct_V2LRsrvBatt/FsftCITR_Pct_V2LRsrvBattChrt'
 * '<S616>' : 'CITR_ac/FsftCITR_Pct_V2VRsrvBatt/FsftCITR_Pct_V2VRsrvBattChrt'
 * '<S617>' : 'CITR_ac/FsftCITR_b_ChrgPortDoor_Sts/FsftCITR_b_ChrgPortDoor_StsChrt'
 * '<S618>' : 'CITR_ac/FsftCITR_b_ChrgPortLock_StsC/FsftCITR_b_ChrgPortLock_StsCChrt'
 * '<S619>' : 'CITR_ac/FsftCITR_b_ChrgPort_BCM_Cmd/FsftCITR_b_ChrgPort_BCM_CmdChrt'
 * '<S620>' : 'CITR_ac/FsftCITR_b_CoopCh_VehLocation/FsftCITR_b_CoopCh_VehLocationChrt'
 * '<S621>' : 'CITR_ac/FsftCITR_b_DC_PwrLev/FsftCITR_b_DC_PwrLevChrt'
 * '<S622>' : 'CITR_ac/FsftCITR_b_DateTmDay/FsftCITR_b_DateTmDayChrt'
 * '<S623>' : 'CITR_ac/FsftCITR_b_DateTmFormat/FsftCITR_b_DateTmFormatChrt'
 * '<S624>' : 'CITR_ac/FsftCITR_b_Date_Day1/FsftCITR_b_Date_Day1Chrt'
 * '<S625>' : 'CITR_ac/FsftCITR_b_HU_Sch1_CabTemp/FsftCITR_b_HU_Sch1_CabTempChrt'
 * '<S626>' : 'CITR_ac/FsftCITR_b_HU_Sch1_Day/FsftCITR_b_HU_Sch1_DayChrt'
 * '<S627>' : 'CITR_ac/FsftCITR_b_HU_Sch1_End_Time_Hr/FsftCITR_b_HU_Sch1_End_Time_HrChrt'
 * '<S628>' : 'CITR_ac/FsftCITR_b_HU_Sch1_End_Time_Min/FsftCITR_b_HU_Sch1_End_Time_MinChrt'
 * '<S629>' : 'CITR_ac/FsftCITR_b_HU_Sch1_Start_Time_Hr/FsftCITR_b_HU_Sch1_Start_Time_HrChrt'
 * '<S630>' : 'CITR_ac/FsftCITR_b_HU_Sch1_Start_Time_Min/FsftCITR_b_HU_Sch1_Start_Time_MinChrt'
 * '<S631>' : 'CITR_ac/FsftCITR_b_HU_Sch1_Type/FsftCITR_b_HU_Sch1_TypeChrt'
 * '<S632>' : 'CITR_ac/FsftCITR_b_HU_Sch2_CabTemp/FsftCITR_b_HU_Sch2_CabTempChrt'
 * '<S633>' : 'CITR_ac/FsftCITR_b_HU_Sch2_Day/FsftCITR_b_HU_Sch2_DayChrt'
 * '<S634>' : 'CITR_ac/FsftCITR_b_HU_Sch2_End_Time_Hr/FsftCITR_b_HU_Sch2_End_Time_HrChrt'
 * '<S635>' : 'CITR_ac/FsftCITR_b_HU_Sch2_End_Time_Min/FsftCITR_b_HU_Sch2_End_Time_MinChrt'
 * '<S636>' : 'CITR_ac/FsftCITR_b_HU_Sch2_Start_Time_Hr/FsftCITR_b_HU_Sch2_Start_Time_HrChrt'
 * '<S637>' : 'CITR_ac/FsftCITR_b_HU_Sch2_Start_Time_Min/FsftCITR_b_HU_Sch2_Start_Time_MinChrt'
 * '<S638>' : 'CITR_ac/FsftCITR_b_HU_Sch2_Type/FsftCITR_b_HU_Sch2_TypeChrt'
 * '<S639>' : 'CITR_ac/FsftCITR_b_HU_Sch3_Allow/FsftCITR_b_HU_Sch3_AllowChrt'
 * '<S640>' : 'CITR_ac/FsftCITR_b_HU_Sch3_CabTemp/FsftCITR_b_HU_Sch3_CabTempChrt'
 * '<S641>' : 'CITR_ac/FsftCITR_b_HU_Sch3_Day/FsftCITR_b_HU_Sch3_DayChrt'
 * '<S642>' : 'CITR_ac/FsftCITR_b_HU_Sch3_End_Time_Hr/FsftCITR_b_HU_Sch3_End_Time_HrChrt'
 * '<S643>' : 'CITR_ac/FsftCITR_b_HU_Sch3_End_Time_Min/FsftCITR_b_HU_Sch3_End_Time_MinChrt'
 * '<S644>' : 'CITR_ac/FsftCITR_b_HU_Sch3_Start_Time_Hr/FsftCITR_b_HU_Sch3_Start_Time_HrChrt'
 * '<S645>' : 'CITR_ac/FsftCITR_b_HU_Sch3_Start_Time_Min/FsftCITR_b_HU_Sch3_Start_Time_MinChrt'
 * '<S646>' : 'CITR_ac/FsftCITR_b_HU_Sch3_Type/FsftCITR_b_HU_Sch3_TypeChrt'
 * '<S647>' : 'CITR_ac/FsftCITR_b_HU_Sch4_Allow/FsftCITR_b_HU_Sch4_AllowChrt'
 * '<S648>' : 'CITR_ac/FsftCITR_b_HU_Sch4_CabTemp/FsftCITR_b_HU_Sch4_CabTempChrt'
 * '<S649>' : 'CITR_ac/FsftCITR_b_HU_Sch4_Day/FsftCITR_b_HU_Sch4_DayChrt'
 * '<S650>' : 'CITR_ac/FsftCITR_b_HU_Sch4_Start_Time_Hr/FsftCITR_b_HU_Sch4_Start_Time_HrChrt'
 * '<S651>' : 'CITR_ac/FsftCITR_b_HU_Sch4_Start_Time_Min/FsftCITR_b_HU_Sch4_Start_Time_MinChrt'
 * '<S652>' : 'CITR_ac/FsftCITR_b_PP2ACPresentSens1/FsftCITR_b_PP2ACPresentSens1Chrt'
 * '<S653>' : 'CITR_ac/FsftCITR_b_PP2ACPresentSens2/FsftCITR_b_PP2ACPresentSens2Chrt'
 * '<S654>' : 'CITR_ac/FsftCITR_b_PP2ButtonSts/FsftCITR_b_PP2ButtonStsChrt'
 * '<S655>' : 'CITR_ac/FsftCITR_b_PP2LidSwitchSts/FsftCITR_b_PP2LidSwitchSts240Chrt'
 * '<S656>' : 'CITR_ac/FsftCITR_b_PP2LidSwitchSts120A/FsftCITR_b_PP2LidSwitchSts120AChrt'
 * '<S657>' : 'CITR_ac/FsftCITR_b_PP2LidSwitchSts120B/FsftCITR_b_PP2LidSwitchSts120BChrt'
 * '<S658>' : 'CITR_ac/FsftCITR_b_PP2_Gnd_Fault_Det/FsftCITR_b_PP2_Gnd_Fault_DetChrt'
 * '<S659>' : 'CITR_ac/FsftCITR_b_PP2_LIN_Cksm_Err/FsftCITR_b_PP2_LIN_Cksm_ErrChrt'
 * '<S660>' : 'CITR_ac/FsftCITR_b_PP2_LIN_Data_Err/FsftCITR_b_PP2_LIN_Data_ErrChrt'
 * '<S661>' : 'CITR_ac/FsftCITR_b_PP2_LIN_Parity_Err/FsftCITR_b_PP2_LIN_Parity_ErrChrt'
 * '<S662>' : 'CITR_ac/FsftCITR_b_PPACPresentSens1/FsftCITR_b_PPACPresentSens1Chrt'
 * '<S663>' : 'CITR_ac/FsftCITR_b_PPACPresentSens2/FsftCITR_b_PPACPresentSens2Chrt'
 * '<S664>' : 'CITR_ac/FsftCITR_b_PPButtonSts/FsftCITR_b_PPButtonStsChrt'
 * '<S665>' : 'CITR_ac/FsftCITR_b_PPLidSwitchSts120A/FsftCITR_b_PPLidSwitchSts120AChrt'
 * '<S666>' : 'CITR_ac/FsftCITR_b_PPLidSwitchSts120B/FsftCITR_b_PPLidSwitchSts120BChrt'
 * '<S667>' : 'CITR_ac/FsftCITR_b_PPLidSwitchSts240/FsftCITR_b_PPLidSwitchSts240Chrt'
 * '<S668>' : 'CITR_ac/FsftCITR_b_PP_Gnd_Fault_Det/FsftCITR_b_PP_Gnd_Fault_DetChrt'
 * '<S669>' : 'CITR_ac/FsftCITR_b_PP_LIN_Cksm_Err/FsftCITR_b_PP_LIN_Cksm_ErrChrt'
 * '<S670>' : 'CITR_ac/FsftCITR_b_PP_LIN_Data_Err/FsftCITR_b_PP_LIN_Data_ErrChrt'
 * '<S671>' : 'CITR_ac/FsftCITR_b_PP_LIN_Parity_Err/FsftCITR_b_PP_LIN_Parity_ErrChrt'
 * '<S672>' : 'CITR_ac/FsftCITR_b_RsErrSPP/FsftCITR_b_RsErrSPPChrt'
 * '<S673>' : 'CITR_ac/FsftCITR_b_RsErrSPP2/FsftCITR_b_RsErrSPP2Chrt'
 * '<S674>' : 'CITR_ac/FsftCITR_b_SOC_Max_Lev/FsftCITR_b_SOC_Max_LevChrt'
 * '<S675>' : 'CITR_ac/FsftCITR_b_TBMStopChrg/FsftCITR_b_TBMStopChrgChrt'
 * '<S676>' : 'CITR_ac/FsftCITR_b_TBM_Sch1_CabTemp/FsftCITR_b_TBM_Sch1_CabTempChrt'
 * '<S677>' : 'CITR_ac/FsftCITR_b_TBM_Sch1_Day/FsftCITR_b_TBM_Sch1_DayChrt'
 * '<S678>' : 'CITR_ac/FsftCITR_b_TBM_Sch1_End_Time_Hr/FsftCITR_b_TBM_Sch1_End_Time_HrChrt'
 * '<S679>' : 'CITR_ac/FsftCITR_b_TBM_Sch1_End_Time_Min/FsftCITR_b_TBM_Sch1_End_Time_MinChrt'
 * '<S680>' : 'CITR_ac/FsftCITR_b_TBM_Sch1_Start_Time_Hr/FsftCITR_b_TBM_Sch1_Start_Time_HrChrt'
 * '<S681>' : 'CITR_ac/FsftCITR_b_TBM_Sch1_Start_Time_Min/FsftCITR_b_TBM_Sch1_Start_Time_MinChrt'
 * '<S682>' : 'CITR_ac/FsftCITR_b_TBM_Sch1_Type/FsftCITR_b_TBM_Sch1_TypeChrt'
 * '<S683>' : 'CITR_ac/FsftCITR_b_TBM_Sch2_CabTemp/FsftCITR_b_TBM_Sch2_CabTempChrt'
 * '<S684>' : 'CITR_ac/FsftCITR_b_TBM_Sch2_Day/FsftCITR_b_TBM_Sch2_DayChrt'
 * '<S685>' : 'CITR_ac/FsftCITR_b_TBM_Sch2_End_Time_Hr/FsftCITR_b_TBM_Sch2_End_Time_HrChrt'
 * '<S686>' : 'CITR_ac/FsftCITR_b_TBM_Sch2_End_Time_Min/FsftCITR_b_TBM_Sch2_End_Time_MinChrt'
 * '<S687>' : 'CITR_ac/FsftCITR_b_TBM_Sch2_Start_Time_Hr/FsftCITR_b_TBM_Sch2_Start_Time_HrChrt'
 * '<S688>' : 'CITR_ac/FsftCITR_b_TBM_Sch2_Start_Time_Min/FsftCITR_b_TBM_Sch2_Start_Time_MinChrt'
 * '<S689>' : 'CITR_ac/FsftCITR_b_TBM_Sch2_Type/FsftCITR_b_TBM_Sch2_TypeChrt'
 * '<S690>' : 'CITR_ac/FsftCITR_b_TBM_Sch3_Allow/FsftCITR_b_TBM_Sch3_AllowChrt'
 * '<S691>' : 'CITR_ac/FsftCITR_b_TBM_Sch3_CabTemp/FsftCITR_b_TBM_Sch3_CabTempChrt'
 * '<S692>' : 'CITR_ac/FsftCITR_b_TBM_Sch3_Day/FsftCITR_b_TBM_Sch3_DayChrt'
 * '<S693>' : 'CITR_ac/FsftCITR_b_TBM_Sch3_End_Time_Hr/FsftCITR_b_TBM_Sch3_End_Time_HrChrt'
 * '<S694>' : 'CITR_ac/FsftCITR_b_TBM_Sch3_End_Time_Min/FsftCITR_b_TBM_Sch3_End_Time_MinChrt'
 * '<S695>' : 'CITR_ac/FsftCITR_b_TBM_Sch3_Start_Time_Hr/FsftCITR_b_TBM_Sch3_Start_Time_HrChrt'
 * '<S696>' : 'CITR_ac/FsftCITR_b_TBM_Sch3_Start_Time_Min/FsftCITR_b_TBM_Sch3_Start_Time_MinChrt'
 * '<S697>' : 'CITR_ac/FsftCITR_b_TBM_Sch3_Type/FsftCITR_b_TBM_Sch3_TypeChrt'
 * '<S698>' : 'CITR_ac/FsftCITR_b_TBM_Sch4_Allow/FsftCITR_b_TBM_Sch4_AllowChrt'
 * '<S699>' : 'CITR_ac/FsftCITR_b_TBM_Sch4_CabTemp/FsftCITR_b_TBM_Sch4_CabTempChrt'
 * '<S700>' : 'CITR_ac/FsftCITR_b_TBM_Sch4_Day/FsftCITR_b_TBM_Sch4_DayChrt'
 * '<S701>' : 'CITR_ac/FsftCITR_b_TBM_Sch4_Start_Time_Hr/FsftCITR_b_TBM_Sch4_Start_Time_HrChrt'
 * '<S702>' : 'CITR_ac/FsftCITR_b_TBM_Sch4_Start_Time_Min/FsftCITR_b_TBM_Sch4_Start_Time_MinChrt'
 * '<S703>' : 'CITR_ac/FsftCITR_b_V2HModeReq/FsftCITR_b_V2HModeReqChrt'
 * '<S704>' : 'CITR_ac/FsftCITR_b_V2HReq/FsftCITR_b_V2HReqChrt'
 * '<S705>' : 'CITR_ac/FsftCITR_b_V2HSubmit/FsftCITR_b_V2HSubmitChrt'
 * '<S706>' : 'CITR_ac/FsftCITR_b_V2LModeReq/FsftCITR_b_V2LModeReqChrt'
 * '<S707>' : 'CITR_ac/FsftCITR_b_V2LSubmit/FsftCITR_b_V2LSubmitChrt'
 * '<S708>' : 'CITR_ac/FsftCITR_b_V2LTrunkReq/FsftCITR_b_V2LTrunkReqChrt'
 * '<S709>' : 'CITR_ac/FsftCITR_b_V2L_AllReq/FsftCITR_b_V2L_AllReqChrt'
 * '<S710>' : 'CITR_ac/FsftCITR_b_V2L_FrunkReq/FsftCITR_b_V2L_FrunkReqChrt'
 * '<S711>' : 'CITR_ac/FsftCITR_b_V2VModeReq/FsftCITR_b_V2VModeReqChrt'
 * '<S712>' : 'CITR_ac/FsftCITR_b_V2VReq/FsftCITR_b_V2VReqChrt'
 * '<S713>' : 'CITR_ac/FsftCITR_b_V2VSubmit/FsftCITR_b_V2VSubmitChrt'
 * '<S714>' : 'CITR_ac/FsftCITR_e_BCIM_Ind1_Fdbk/FsftCITR_e_BCIM_Ind1_FdbkChrt'
 * '<S715>' : 'CITR_ac/FsftCITR_e_BCIM_Ind2_Fdbk/FsftCITR_e_BCIM_Ind2_FdbkChrt'
 * '<S716>' : 'CITR_ac/FsftCITR_e_BCIM_Ind3_Fdbk/FsftCITR_e_BCIM_Ind3_FdbkChrt'
 * '<S717>' : 'CITR_ac/FsftCITR_e_BCIM_Ind4_Fdbk/FsftCITR_e_BCIM_Ind4_FdbkChrt'
 * '<S718>' : 'CITR_ac/FsftCITR_e_BCIM_Ind5_Fdbk/FsftCITR_e_BCIM_Ind5_FdbkChrt'
 * '<S719>' : 'CITR_ac/FsftCITR_e_BCIM_Ind_Color_Fdbk/FsftCITR_e_BCIM_Ind_Color_FdbkChrt'
 * '<S720>' : 'CITR_ac/FsftCITR_e_CPIM_Icon1_Sts/FsftCITR_e_CPIM_Icon1_StsChrt'
 * '<S721>' : 'CITR_ac/FsftCITR_e_CPIM_Icon2_Sts/FsftCITR_e_CPIM_Icon2_StsChrt'
 * '<S722>' : 'CITR_ac/FsftCITR_e_CPIM_Ind1_Fdbk/FsftCITR_e_CPIM_Ind1_FdbkChrt'
 * '<S723>' : 'CITR_ac/FsftCITR_e_CPIM_Ind2_Fdbk/FsftCITR_e_CPIM_Ind2_FdbkChrt'
 * '<S724>' : 'CITR_ac/FsftCITR_e_CPIM_Ind3_Fdbk/FsftCITR_e_CPIM_Ind3_FdbkChrt'
 * '<S725>' : 'CITR_ac/FsftCITR_e_CPIM_Ind4_Fdbk/FsftCITR_e_CPIM_Ind4_FdbkChrt'
 * '<S726>' : 'CITR_ac/FsftCITR_e_CPIM_Ind5_Fdbk/FsftCITR_e_CPIM_Ind5_FdbkChrt'
 * '<S727>' : 'CITR_ac/FsftCITR_e_CPIM_Ind_Color_Fdbk/FsftCITR_e_CPIM_Ind_Color_FdbkChrt'
 * '<S728>' : 'CITR_ac/FsftCITR_e_ChrgPortLock_FailSts/FsftCITR_e_ChrgPortLock_FailStsChrt'
 * '<S729>' : 'CITR_ac/FsftCITR_e_ChrgrFlapSts/FsftCITR_e_ChrgrFlapStsChrt'
 * '<S730>' : 'CITR_ac/FsftCITR_e_CoopCh_ChrgCmd/FsftCITR_e_CoopCh_ChrgCmdChrt'
 * '<S731>' : 'CITR_ac/FsftCITR_e_DoorLockLastElSts/FsftCITR_e_DoorLockLastElStsChrt'
 * '<S732>' : 'CITR_ac/FsftCITR_e_DoorLockLastElSts_2/FsftCITR_e_DoorLockLastElSts_2Chrt'
 * '<S733>' : 'CITR_ac/FsftCITR_e_FOTA_Install_Type/FsftCITR_e_FOTA_Install_TypeChrt'
 * '<S734>' : 'CITR_ac/FsftCITR_e_HU_ChrgSchedType1/FsftCITR_e_HU_ChrgSchedType1Chrt'
 * '<S735>' : 'CITR_ac/FsftCITR_e_HU_ChrgSchedType2/FsftCITR_e_HU_ChrgSchedType2Chrt'
 * '<S736>' : 'CITR_ac/FsftCITR_e_PP2Fault/FsftCITR_e_PP2FaultChrt'
 * '<S737>' : 'CITR_ac/FsftCITR_e_PP2FaultRsn/FsftCITR_e_PP2FaultRsnChrt'
 * '<S738>' : 'CITR_ac/FsftCITR_e_PP2LEDFault/FsftCITR_e_PP2LEDFaultChrt'
 * '<S739>' : 'CITR_ac/FsftCITR_e_PP2_LED_A_ColorFeedback/FsftCITR_e_PP2_LED_A_ColorFeedbackChrt'
 * '<S740>' : 'CITR_ac/FsftCITR_e_PP2_LED_A_FailSts/FsftCITR_e_PP2_LED_A_FailStsChrt'
 * '<S741>' : 'CITR_ac/FsftCITR_e_PP2_LED_A_Feedback/FsftCITR_e_PP2_LED_A_FeedbackChrt'
 * '<S742>' : 'CITR_ac/FsftCITR_e_PP2_LED_B_FailSts/FsftCITR_e_PP2_LED_B_FailStsChrt'
 * '<S743>' : 'CITR_ac/FsftCITR_e_PP2_LED_B_Feedback/FsftCITR_e_PP2_LED_B_FeedbackChrt'
 * '<S744>' : 'CITR_ac/FsftCITR_e_PPFault/FsftCITR_e_PPFaultChrt'
 * '<S745>' : 'CITR_ac/FsftCITR_e_PPFaultRsn/FsftCITR_e_PPFaultRsnChrt'
 * '<S746>' : 'CITR_ac/FsftCITR_e_PPLEDFault/FsftCITR_e_PPLEDFaultChrt'
 * '<S747>' : 'CITR_ac/FsftCITR_e_PP_LED_A_ColorFeedback/FsftCITR_e_PP_LED_A_ColorFeedbackChrt'
 * '<S748>' : 'CITR_ac/FsftCITR_e_PP_LED_A_FailSts/FsftCITR_e_PP_LED_A_FailStsChrt'
 * '<S749>' : 'CITR_ac/FsftCITR_e_PP_LED_A_Feedback/FsftCITR_e_PP_LED_A_FeedbackChrt'
 * '<S750>' : 'CITR_ac/FsftCITR_e_PP_LED_B_ColorFeedback/FsftCITR_e_PP_LED_B_ColorFeedbackChrt'
 * '<S751>' : 'CITR_ac/FsftCITR_e_PP_LED_B_ColorFeedback1/FsftCITR_e_PP2_LED_B_ColorFeedbackChrt'
 * '<S752>' : 'CITR_ac/FsftCITR_e_PP_LED_B_FailSts/FsftCITR_e_PP_LED_B_FailStsChrt'
 * '<S753>' : 'CITR_ac/FsftCITR_e_PP_LED_B_Feedback/FsftCITR_e_PP_LED_B_FeedbackChrt'
 * '<S754>' : 'CITR_ac/FsftCITR_e_PP_LED_C_ColorFeedback/FsftCITR_e_PP_LED_C_ColorFeedbackChrt'
 * '<S755>' : 'CITR_ac/FsftCITR_e_PP_LED_C_FailSts/FsftCITR_e_PP_LED_C_FailStsChrt'
 * '<S756>' : 'CITR_ac/FsftCITR_e_PP_LED_C_Feedback/FsftCITR_e_PP_LED_C_FeedbackChrt'
 * '<S757>' : 'CITR_ac/FsftCITR_e_PowerLimitReq/FsftCITR_e_PowerLimitReqChrt'
 * '<S758>' : 'CITR_ac/FsftCITR_e_PowerLimitReq_2/FsftCITR_e_PowerLimitReq_2Chrt'
 * '<S759>' : 'CITR_ac/FsftCITR_e_RmtChrgPortLkCmd/FsftCITR_e_RmtChrgPortLkCmdChrt'
 * '<S760>' : 'CITR_ac/FsftCITR_e_TBM_ChrgSchedType1/FsftCITR_e_TBM_ChrgSchedType1Chrt'
 * '<S761>' : 'CITR_ac/FsftCITR_e_TBM_ChrgSchedType2/FsftCITR_e_TBM_ChrgSchedType2Chrt'
 * '<S762>' : 'CITR_ac/FsftCITR_l_DistanceToCharge/FsftCITR_l_DistanceToChargeChrt'
 * '<S763>' : 'CITR_ac/FsftCITR_t_TimeToCharge/FsftCITR_t_TimeToChargeChrt'
 * '<S764>' : 'CITR_ac/PokeCITR_I_PP2CurrentDrawSens1/PokeCITR_I_PP2CurrentDrawSens1Chrt'
 * '<S765>' : 'CITR_ac/PokeCITR_I_PP2CurrentDrawSens2/PokeCITR_I_PP2CurrentDrawSens2Chrt'
 * '<S766>' : 'CITR_ac/PokeCITR_I_PPCurrentDrawSens1/PokeCITR_I_PPCurrentDrawSens1Chrt'
 * '<S767>' : 'CITR_ac/PokeCITR_I_PPCurrentDrawSens2/PokeCITR_I_PPCurrentDrawSens2Chrt'
 * '<S768>' : 'CITR_ac/PokeCITR_K_ChrgPortHbridgeFlt/PokeCITR_K_ChrgPortHbridgeFltChrt'
 * '<S769>' : 'CITR_ac/PokeCITR_K_DateTmDay/PokeCITR_K_DateTmDayChrt'
 * '<S770>' : 'CITR_ac/PokeCITR_K_DateTmHour/PokeCITR_K_DateTmHourChrt'
 * '<S771>' : 'CITR_ac/PokeCITR_K_DateTmMin/PokeCITR_K_DateTmMinChrt'
 * '<S772>' : 'CITR_ac/PokeCITR_K_DateTmMon/PokeCITR_K_DateTmMonChrt'
 * '<S773>' : 'CITR_ac/PokeCITR_K_DateTmSec/PokeCITR_K_DateTmSecChrt'
 * '<S774>' : 'CITR_ac/PokeCITR_K_DateTmYear/PokeCITR_K_DateTmYearChrt'
 * '<S775>' : 'CITR_ac/PokeCITR_K_Date_Day1/PokeCITR_K_Date_Day1Chrt'
 * '<S776>' : 'CITR_ac/PokeCITR_K_Date_Day2/PokeCITR_K_Date_Day2Chrt'
 * '<S777>' : 'CITR_ac/PokeCITR_K_Date_Month1/PokeCITR_K_Date_Month1Chrt'
 * '<S778>' : 'CITR_ac/PokeCITR_K_Date_Month2/PokeCITR_K_Date_Month2Chrt'
 * '<S779>' : 'CITR_ac/PokeCITR_K_Date_Year1/PokeCITR_K_Date_Year1Chrt'
 * '<S780>' : 'CITR_ac/PokeCITR_K_Date_Year2/PokeCITR_K_Date_Year2Chrt'
 * '<S781>' : 'CITR_ac/PokeCITR_K_Date_Year3/PokeCITR_K_Date_Year3Chrt'
 * '<S782>' : 'CITR_ac/PokeCITR_K_Date_Year4/PokeCITR_K_Date_Year4Chrt'
 * '<S783>' : 'CITR_ac/PokeCITR_K_HU_Sch1_Day/PokeCITR_K_HU_Sch1_DayChrt'
 * '<S784>' : 'CITR_ac/PokeCITR_K_HU_Sch1_End_Time_Hr/PokeCITR_K_HU_Sch1_End_Time_HrChrt'
 * '<S785>' : 'CITR_ac/PokeCITR_K_HU_Sch1_End_Time_Min/PokeCITR_K_HU_Sch1_End_Time_MinChrt'
 * '<S786>' : 'CITR_ac/PokeCITR_K_HU_Sch1_Start_Time_Hr/PokeCITR_K_HU_Sch1_Start_Time_HrChrt'
 * '<S787>' : 'CITR_ac/PokeCITR_K_HU_Sch1_Start_Time_Min/PokeCITR_K_HU_Sch1_Start_Time_MinChrt'
 * '<S788>' : 'CITR_ac/PokeCITR_K_HU_Sch2_Day/PokeCITR_K_HU_Sch2_DayChrt'
 * '<S789>' : 'CITR_ac/PokeCITR_K_HU_Sch2_End_Time_Hr/PokeCITR_K_HU_Sch2_End_Time_HrChrt'
 * '<S790>' : 'CITR_ac/PokeCITR_K_HU_Sch2_End_Time_Min/PokeCITR_K_HU_Sch2_End_Time_MinChrt'
 * '<S791>' : 'CITR_ac/PokeCITR_K_HU_Sch2_Start_Time_Hr/PokeCITR_K_HU_Sch2_Start_Time_HrChrt'
 * '<S792>' : 'CITR_ac/PokeCITR_K_HU_Sch2_Start_Time_Min/PokeCITR_K_HU_Sch2_Start_Time_MinChrt'
 * '<S793>' : 'CITR_ac/PokeCITR_K_HU_Sch3_Day/PokeCITR_K_HU_Sch3_DayChrt'
 * '<S794>' : 'CITR_ac/PokeCITR_K_HU_Sch3_End_Time_Hr/PokeCITR_K_HU_Sch3_End_Time_HrChrt'
 * '<S795>' : 'CITR_ac/PokeCITR_K_HU_Sch3_End_Time_Min/PokeCITR_K_HU_Sch3_End_Time_MinChrt'
 * '<S796>' : 'CITR_ac/PokeCITR_K_HU_Sch3_Start_Time_Hr/PokeCITR_K_HU_Sch3_Start_Time_HrChrt'
 * '<S797>' : 'CITR_ac/PokeCITR_K_HU_Sch3_Start_Time_Min/PokeCITR_K_HU_Sch3_Start_Time_MinChrt'
 * '<S798>' : 'CITR_ac/PokeCITR_K_HU_Sch4_Day/PokeCITR_K_HU_Sch4_DayChrt'
 * '<S799>' : 'CITR_ac/PokeCITR_K_HU_Sch4_Start_Time_Hr/PokeCITR_K_HU_Sch4_Start_Time_HrChrt'
 * '<S800>' : 'CITR_ac/PokeCITR_K_HU_Sch4_Start_Time_Min/PokeCITR_K_HU_Sch4_Start_Time_MinChrt'
 * '<S801>' : 'CITR_ac/PokeCITR_K_TBM_Sch1_Day/PokeCITR_K_TBM_Sch1_DayChrt'
 * '<S802>' : 'CITR_ac/PokeCITR_K_TBM_Sch1_End_Time_Hr/PokeCITR_K_TBM_Sch1_End_Time_HrChrt'
 * '<S803>' : 'CITR_ac/PokeCITR_K_TBM_Sch1_End_Time_Min/PokeCITR_K_TBM_Sch1_End_Time_MinChrt'
 * '<S804>' : 'CITR_ac/PokeCITR_K_TBM_Sch1_Start_Time_Hr/PokeCITR_K_TBM_Sch1_Start_Time_HrChrt'
 * '<S805>' : 'CITR_ac/PokeCITR_K_TBM_Sch1_Start_Time_Min/PokeCITR_K_TBM_Sch1_Start_Time_MinChrt'
 * '<S806>' : 'CITR_ac/PokeCITR_K_TBM_Sch2_Day/PokeCITR_K_TBM_Sch2_DayChrt'
 * '<S807>' : 'CITR_ac/PokeCITR_K_TBM_Sch2_End_Time_Hr/PokeCITR_K_TBM_Sch2_End_Time_HrChrt'
 * '<S808>' : 'CITR_ac/PokeCITR_K_TBM_Sch2_End_Time_Min/PokeCITR_K_TBM_Sch2_End_Time_MinChrt'
 * '<S809>' : 'CITR_ac/PokeCITR_K_TBM_Sch2_Start_Time_Hr/PokeCITR_K_TBM_Sch2_Start_Time_HrChrt'
 * '<S810>' : 'CITR_ac/PokeCITR_K_TBM_Sch2_Start_Time_Min/PokeCITR_K_TBM_Sch2_Start_Time_MinChrt'
 * '<S811>' : 'CITR_ac/PokeCITR_K_TBM_Sch3_Day/PokeCITR_K_TBM_Sch3_DayChrt'
 * '<S812>' : 'CITR_ac/PokeCITR_K_TBM_Sch3_End_Time_Hr/PokeCITR_K_TBM_Sch3_End_Time_HrChrt'
 * '<S813>' : 'CITR_ac/PokeCITR_K_TBM_Sch3_End_Time_Min/PokeCITR_K_TBM_Sch3_End_Time_MinChrt'
 * '<S814>' : 'CITR_ac/PokeCITR_K_TBM_Sch3_Start_Time_Hr/PokeCITR_K_TBM_Sch3_Start_Time_HrChrt'
 * '<S815>' : 'CITR_ac/PokeCITR_K_TBM_Sch3_Start_Time_Min/PokeCITR_K_TBM_Sch3_Start_Time_MinChrt'
 * '<S816>' : 'CITR_ac/PokeCITR_K_TBM_Sch4_Day/PokeCITR_K_TBM_Sch4_DayChrt'
 * '<S817>' : 'CITR_ac/PokeCITR_K_TBM_Sch4_Start_Time_Hr/PokeCITR_K_TBM_Sch4_Start_Time_HrChrt'
 * '<S818>' : 'CITR_ac/PokeCITR_K_TBM_Sch4_Start_Time_Min/PokeCITR_K_TBM_Sch4_Start_Time_MinChrt'
 * '<S819>' : 'CITR_ac/PokeCITR_K_Time_Hour1/PokeCITR_K_Time_Hour1Chrt'
 * '<S820>' : 'CITR_ac/PokeCITR_K_Time_Hour2/PokeCITR_K_Time_Hour2Chrt'
 * '<S821>' : 'CITR_ac/PokeCITR_K_Time_Minute1/PokeCITR_K_Time_Minute1Chrt'
 * '<S822>' : 'CITR_ac/PokeCITR_K_Time_Minute2/PokeCITR_K_Time_Minute2Chrt'
 * '<S823>' : 'CITR_ac/PokeCITR_P_ChargingDestinationPwr/PokeCITR_P_ChargingDestinationPwrChrt'
 * '<S824>' : 'CITR_ac/PokeCITR_P_PP2RatedPower/PokeCITR_P_PP2RatedPowerChrt'
 * '<S825>' : 'CITR_ac/PokeCITR_P_PPRatedPower/PokeCITR_P_PPRatedPowerChrt'
 * '<S826>' : 'CITR_ac/PokeCITR_Pct_HU_ExtChrgTarget1/PokeCITR_Pct_HU_ExtChrgTarget1Chrt'
 * '<S827>' : 'CITR_ac/PokeCITR_Pct_HU_ExtChrgTarget2/PokeCITR_Pct_HU_ExtChrgTarget2Chrt'
 * '<S828>' : 'CITR_ac/PokeCITR_Pct_HU_ImmChrgTarget1/PokeCITR_Pct_HU_ImmChrgTarget1Chrt'
 * '<S829>' : 'CITR_ac/PokeCITR_Pct_HU_ImmChrgTarget2/PokeCITR_Pct_HU_ImmChrgTarget2Chrt'
 * '<S830>' : 'CITR_ac/PokeCITR_Pct_TBM_ExtChrgTarget1/PokeCITR_Pct_TBM_ExtChrgTarget1Chrt'
 * '<S831>' : 'CITR_ac/PokeCITR_Pct_TBM_ExtChrgTarget2/PokeCITR_Pct_TBM_ExtChrgTarget2Chrt'
 * '<S832>' : 'CITR_ac/PokeCITR_Pct_TBM_ImmChrgTarget1/PokeCITR_Pct_TBM_ImmChrgTarget1Chrt'
 * '<S833>' : 'CITR_ac/PokeCITR_Pct_TBM_ImmChrgTarget2/PokeCITR_Pct_TBM_ImmChrgTarget2Chrt'
 * '<S834>' : 'CITR_ac/PokeCITR_Pct_V2HRsrvBatt/PokeCITR_Pct_V2HRsrvBattChrt'
 * '<S835>' : 'CITR_ac/PokeCITR_Pct_V2LRsrvBatt/PokeCITR_Pct_V2LRsrvBattChrt'
 * '<S836>' : 'CITR_ac/PokeCITR_Pct_V2VRsrvBatt/PokeCITR_Pct_V2VRsrvBattChrt'
 * '<S837>' : 'CITR_ac/PokeCITR_T_HU_Sch1_CabTemp/PokeCITR_T_HU_Sch1_CabTempChrt'
 * '<S838>' : 'CITR_ac/PokeCITR_T_HU_Sch2_CabTemp/PokeCITR_T_HU_Sch2_CabTempChrt'
 * '<S839>' : 'CITR_ac/PokeCITR_T_HU_Sch3_CabTemp/PokeCITR_T_HU_Sch3_CabTempChrt'
 * '<S840>' : 'CITR_ac/PokeCITR_T_HU_Sch4_CabTemp/PokeCITR_T_HU_Sch4_CabTempChrt'
 * '<S841>' : 'CITR_ac/PokeCITR_T_TBM_Sch1_CabTemp/PokeCITR_T_TBM_Sch1_CabTempChrt'
 * '<S842>' : 'CITR_ac/PokeCITR_T_TBM_Sch2_CabTemp/PokeCITR_T_TBM_Sch2_CabTempChrt'
 * '<S843>' : 'CITR_ac/PokeCITR_T_TBM_Sch3_CabTemp/PokeCITR_T_TBM_Sch3_CabTempChrt'
 * '<S844>' : 'CITR_ac/PokeCITR_T_TBM_Sch4_CabTemp/PokeCITR_T_TBM_Sch4_CabTempChrt'
 * '<S845>' : 'CITR_ac/PokeCITR_U_ChrgPortLock_StsB/PokeCITR_U_ChrgPortLock_StsBChrt'
 * '<S846>' : 'CITR_ac/PokeCITR_b_BCIM_LIN_Chksum_Error/PokeCITR_b_BCIM_LIN_Chksum_ErrorChrt'
 * '<S847>' : 'CITR_ac/PokeCITR_b_BCIM_LIN_Data_Error/PokeCITR_b_BCIM_LIN_Data_ErrorChrt'
 * '<S848>' : 'CITR_ac/PokeCITR_b_BCIM_LIN_Parity_Error/PokeCITR_b_BCIM_LIN_Parity_ErrorChrt'
 * '<S849>' : 'CITR_ac/PokeCITR_b_BCIM_Over_Temp/PokeCITR_b_BCIM_Over_TempChrt'
 * '<S850>' : 'CITR_ac/PokeCITR_b_BCIM_Undervolt/PokeCITR_b_BCIM_UndervoltChrt'
 * '<S851>' : 'CITR_ac/PokeCITR_b_CPIM_BlueLED_Sts/PokeCITR_b_CPIM_BlueLED_StsChrt'
 * '<S852>' : 'CITR_ac/PokeCITR_b_CPIM_GreenLED_Sts/PokeCITR_b_CPIM_GreenLED_StsChrt'
 * '<S853>' : 'CITR_ac/PokeCITR_b_CPIM_LINChkSumErr/PokeCITR_b_CPIM_LINChkSumErrChrt'
 * '<S854>' : 'CITR_ac/PokeCITR_b_CPIM_LINDataErr/PokeCITR_b_CPIM_LINDataErrChrt'
 * '<S855>' : 'CITR_ac/PokeCITR_b_CPIM_LINParityErr/PokeCITR_b_CPIM_LINParityErrChrt'
 * '<S856>' : 'CITR_ac/PokeCITR_b_CPIM_OverTemp/PokeCITR_b_CPIM_OverTempChrt'
 * '<S857>' : 'CITR_ac/PokeCITR_b_CPIM_RedLED_Sts/PokeCITR_b_CPIM_RedLED_StsChrt'
 * '<S858>' : 'CITR_ac/PokeCITR_b_CPIM_UnderVolt/PokeCITR_b_CPIM_UnderVoltChrt'
 * '<S859>' : 'CITR_ac/PokeCITR_b_ChargeNow/PokeCITR_b_ChargeNowChrt'
 * '<S860>' : 'CITR_ac/PokeCITR_b_ChrgPortButton_FailSts/PokeCITR_b_ChrgPortButton_FailStsChrt'
 * '<S861>' : 'CITR_ac/PokeCITR_b_ChrgPortButton_Sts/PokeCITR_b_ChrgPortButton_StsChrt'
 * '<S862>' : 'CITR_ac/PokeCITR_b_ChrgPortLock_StsC/PokeCITR_b_ChrgPortLock_StsCChrt'
 * '<S863>' : 'CITR_ac/PokeCITR_b_ChrgPort_BCM_Cmd/PokeCITR_b_ChrgPort_BCM_CmdChrt'
 * '<S864>' : 'CITR_ac/PokeCITR_b_ChrgPort_Fdbk/PokeCITR_b_ChrgPort_FdbkChrt'
 * '<S865>' : 'CITR_ac/PokeCITR_b_CoopCh_VehLocation/PokeCITR_b_CoopCh_VehLocationChrt'
 * '<S866>' : 'CITR_ac/PokeCITR_b_DC_PwrLev/PokeCITR_b_DC_PwrLevChrt'
 * '<S867>' : 'CITR_ac/PokeCITR_b_Drv_Dr_Unlocking/PokeCITR_b_Drv_Dr_UnlockingChrt'
 * '<S868>' : 'CITR_ac/PokeCITR_b_HU_Sch1_ChargeUntilFull/PokeCITR_b_HU_Sch1_ChargeUntilFullChrt'
 * '<S869>' : 'CITR_ac/PokeCITR_b_HU_Sch1_Do_Not_Repeat/PokeCITR_b_HU_Sch1_Do_Not_RepeatChrt'
 * '<S870>' : 'CITR_ac/PokeCITR_b_HU_Sch1_Enbl/PokeCITR_b_HU_Sch1_EnblChrt'
 * '<S871>' : 'CITR_ac/PokeCITR_b_HU_Sch1_Priority/PokeCITR_b_HU_Sch1_PriorityChrt'
 * '<S872>' : 'CITR_ac/PokeCITR_b_HU_Sch1_Submit/PokeCITR_b_HU_Sch1_SubmitChrt'
 * '<S873>' : 'CITR_ac/PokeCITR_b_HU_Sch2_ChargeUntilFull/PokeCITR_b_HU_Sch2_ChargeUntilFullChrt'
 * '<S874>' : 'CITR_ac/PokeCITR_b_HU_Sch2_Do_Not_Repeat/PokeCITR_b_HU_Sch2_Do_Not_RepeatChrt'
 * '<S875>' : 'CITR_ac/PokeCITR_b_HU_Sch2_Enbl/PokeCITR_b_HU_Sch2_EnblChrt'
 * '<S876>' : 'CITR_ac/PokeCITR_b_HU_Sch2_Priority/PokeCITR_b_HU_Sch2_PriorityChrt'
 * '<S877>' : 'CITR_ac/PokeCITR_b_HU_Sch2_Submit/PokeCITR_b_HU_Sch2_SubmitChrt'
 * '<S878>' : 'CITR_ac/PokeCITR_b_HU_Sch3_ChargeUntilFull/PokeCITR_b_HU_Sch3_ChargeUntilFullChrt'
 * '<S879>' : 'CITR_ac/PokeCITR_b_HU_Sch3_Do_Not_Repeat/PokeCITR_b_HU_Sch3_Do_Not_RepeatChrt'
 * '<S880>' : 'CITR_ac/PokeCITR_b_HU_Sch3_Enbl/PokeCITR_b_HU_Sch3_EnblChrt'
 * '<S881>' : 'CITR_ac/PokeCITR_b_HU_Sch3_Priority/PokeCITR_b_HU_Sch3_PriorityChrt'
 * '<S882>' : 'CITR_ac/PokeCITR_b_HU_Sch3_Submit/PokeCITR_b_HU_Sch3_SubmitChrt'
 * '<S883>' : 'CITR_ac/PokeCITR_b_HU_Sch4_Enbl/PokeCITR_b_HU_Sch4_EnblChrt'
 * '<S884>' : 'CITR_ac/PokeCITR_b_HU_Sch4_Submit/PokeCITR_b_HU_Sch4_SubmitChrt'
 * '<S885>' : 'CITR_ac/PokeCITR_b_Icon1_FailSts/PokeCITR_b_Icon1_FailStsChrt'
 * '<S886>' : 'CITR_ac/PokeCITR_b_Icon2_FailSts/PokeCITR_b_Icon2_FailStsChrt'
 * '<S887>' : 'CITR_ac/PokeCITR_b_PP2ACPresentSens1/PokeCITR_b_PP2ACPresentSens1Chrt'
 * '<S888>' : 'CITR_ac/PokeCITR_b_PP2ACPresentSens2/PokeCITR_b_PP2ACPresentSens2Chrt'
 * '<S889>' : 'CITR_ac/PokeCITR_b_PP2ButtonSts/PokeCITR_b_PP2ButtonStsChrt'
 * '<S890>' : 'CITR_ac/PokeCITR_b_PP2LidSwitchSts/PokeCITR_b_PP2LidSwitchSts240Chrt'
 * '<S891>' : 'CITR_ac/PokeCITR_b_PP2LidSwitchSts120A/PokeCITR_b_PP2LidSwitchSts120AChrt'
 * '<S892>' : 'CITR_ac/PokeCITR_b_PP2LidSwitchSts120B/PokeCITR_b_PP2LidSwitchSts120BChrt'
 * '<S893>' : 'CITR_ac/PokeCITR_b_PP2_Gnd_Fault_Det/PokeCITR_b_PP2_Gnd_Fault_DetChrt'
 * '<S894>' : 'CITR_ac/PokeCITR_b_PP2_LIN_Cksm_Err/PokeCITR_b_PP2_LIN_Cksm_ErrChrt'
 * '<S895>' : 'CITR_ac/PokeCITR_b_PP2_LIN_Data_Err/PokeCITR_b_PP2_LIN_Data_ErrChrt'
 * '<S896>' : 'CITR_ac/PokeCITR_b_PP2_LIN_Parity_Err/PokeCITR_b_PP2_LIN_Parity_ErrChrt'
 * '<S897>' : 'CITR_ac/PokeCITR_b_PPACPresentSens1/PokeCITR_b_PPACPresentSens1Chrt'
 * '<S898>' : 'CITR_ac/PokeCITR_b_PPACPresentSens2/PokeCITR_b_PPACPresentSens2Chrt'
 * '<S899>' : 'CITR_ac/PokeCITR_b_PPButtonSts/PokeCITR_b_PPButtonStsChrt'
 * '<S900>' : 'CITR_ac/PokeCITR_b_PPLidSwitchSts120A/PokeCITR_b_PPLidSwitchSts120AChrt'
 * '<S901>' : 'CITR_ac/PokeCITR_b_PPLidSwitchSts120B/PokeCITR_b_PPLidSwitchSts120BChrt'
 * '<S902>' : 'CITR_ac/PokeCITR_b_PPLidSwitchSts240/PokeCITR_b_PPLidSwitchSts240Chrt'
 * '<S903>' : 'CITR_ac/PokeCITR_b_PP_Gnd_Fault_Det/PokeCITR_b_PP_Gnd_Fault_DetChrt'
 * '<S904>' : 'CITR_ac/PokeCITR_b_PP_LIN_Cksm_Err/PokeCITR_b_PP_LIN_Cksm_ErrChrt'
 * '<S905>' : 'CITR_ac/PokeCITR_b_PP_LIN_Data_Err/PokeCITR_b_PP_LIN_Data_ErrChrt'
 * '<S906>' : 'CITR_ac/PokeCITR_b_PP_LIN_Parity_Err/PokeCITR_b_PP_LIN_Parity_ErrChrt'
 * '<S907>' : 'CITR_ac/PokeCITR_b_RsErrSPP/PokeCITR_b_RsErrSPPChrt'
 * '<S908>' : 'CITR_ac/PokeCITR_b_RsErrSPP2/PokeCITR_b_RsErrSPP2Chrt'
 * '<S909>' : 'CITR_ac/PokeCITR_b_SOC_Max_Lev/PokeCITR_b_SOC_Max_LevChrt'
 * '<S910>' : 'CITR_ac/PokeCITR_b_TBMStopChrg/PokeCITR_b_TBMStopChrgChrt'
 * '<S911>' : 'CITR_ac/PokeCITR_b_TBM_Charge_Now/PokeCITR_b_TBM_Charge_NowChrt'
 * '<S912>' : 'CITR_ac/PokeCITR_b_TBM_Sch1_ChargeUntilFull/PokeCITR_b_TBM_Sch1_ChargeUntilFullChrt'
 * '<S913>' : 'CITR_ac/PokeCITR_b_TBM_Sch1_Do_Not_Repeat/PokeCITR_b_TBM_Sch1_Do_Not_RepeatChrt'
 * '<S914>' : 'CITR_ac/PokeCITR_b_TBM_Sch1_Enbl/PokeCITR_b_TBM_Sch1_EnblChrt'
 * '<S915>' : 'CITR_ac/PokeCITR_b_TBM_Sch1_Priority/PokeCITR_b_TBM_Sch1_PriorityChrt'
 * '<S916>' : 'CITR_ac/PokeCITR_b_TBM_Sch1_Submit/PokeCITR_b_TBM_Sch1_SubmitChrt'
 * '<S917>' : 'CITR_ac/PokeCITR_b_TBM_Sch2_ChargeUntilFull/PokeCITR_b_TBM_Sch2_ChargeUntilFullChrt'
 * '<S918>' : 'CITR_ac/PokeCITR_b_TBM_Sch2_Do_Not_Repeat/PokeCITR_b_TBM_Sch2_Do_Not_RepeatChrt'
 * '<S919>' : 'CITR_ac/PokeCITR_b_TBM_Sch2_Enbl/PokeCITR_b_TBM_Sch2_EnblChrt'
 * '<S920>' : 'CITR_ac/PokeCITR_b_TBM_Sch2_Priority/PokeCITR_b_TBM_Sch2_PriorityChrt'
 * '<S921>' : 'CITR_ac/PokeCITR_b_TBM_Sch2_Submit/PokeCITR_b_TBM_Sch2_SubmitChrt'
 * '<S922>' : 'CITR_ac/PokeCITR_b_TBM_Sch3_ChargeUntilFull/PokeCITR_b_TBM_Sch3_ChargeUntilFullChrt'
 * '<S923>' : 'CITR_ac/PokeCITR_b_TBM_Sch3_Do_Not_Repeat/PokeCITR_b_TBM_Sch3_Do_Not_RepeatChrt'
 * '<S924>' : 'CITR_ac/PokeCITR_b_TBM_Sch3_Enbl/PokeCITR_b_TBM_Sch3_EnblChrt'
 * '<S925>' : 'CITR_ac/PokeCITR_b_TBM_Sch3_Priority/PokeCITR_b_TBM_Sch3_PriorityChrt'
 * '<S926>' : 'CITR_ac/PokeCITR_b_TBM_Sch3_Submit/PokeCITR_b_TBM_Sch3_SubmitChrt'
 * '<S927>' : 'CITR_ac/PokeCITR_b_TBM_Sch4_Enbl/PokeCITR_b_TBM_Sch4_EnblChrt'
 * '<S928>' : 'CITR_ac/PokeCITR_b_TBM_Sch4_Submit/PokeCITR_b_TBM_Sch4_SubmitChrt'
 * '<S929>' : 'CITR_ac/PokeCITR_b_V2HModeReq/PokeCITR_b_V2HModeReqChrt'
 * '<S930>' : 'CITR_ac/PokeCITR_b_V2HReq/PokeCITR_b_V2HReqChrt'
 * '<S931>' : 'CITR_ac/PokeCITR_b_V2HSubmit/PokeCITR_b_V2HSubmitChrt'
 * '<S932>' : 'CITR_ac/PokeCITR_b_V2LModeReq/PokeCITR_b_V2LModeReqChrt'
 * '<S933>' : 'CITR_ac/PokeCITR_b_V2LSubmit/PokeCITR_b_V2LSubmitChrt'
 * '<S934>' : 'CITR_ac/PokeCITR_b_V2LTrunkReq/PokeCITR_b_V2LTrunkReqChrt'
 * '<S935>' : 'CITR_ac/PokeCITR_b_V2L_AllReq/PokeCITR_b_V2L_AllReqChrt'
 * '<S936>' : 'CITR_ac/PokeCITR_b_V2L_FrunkReq/PokeCITR_b_V2L_FrunkReqChrt'
 * '<S937>' : 'CITR_ac/PokeCITR_b_V2VModeReq/PokeCITR_b_V2VModeReqChrt'
 * '<S938>' : 'CITR_ac/PokeCITR_b_V2VReq/PokeCITR_b_V2VReqChrt'
 * '<S939>' : 'CITR_ac/PokeCITR_b_V2VSubmit/PokeCITR_b_V2VSubmitChrt'
 * '<S940>' : 'CITR_ac/PokeCITR_e_BCIM_Ind1_FailSts/PokeCITR_e_BCIM_Ind1_FailStsChrt'
 * '<S941>' : 'CITR_ac/PokeCITR_e_BCIM_Ind1_Fdbk/PokeCITR_e_BCIM_Ind1_FdbkChrt'
 * '<S942>' : 'CITR_ac/PokeCITR_e_BCIM_Ind2_FailSts/PokeCITR_e_BCIM_Ind2_FailStsChrt'
 * '<S943>' : 'CITR_ac/PokeCITR_e_BCIM_Ind2_Fdbk/PokeCITR_e_BCIM_Ind2_FdbkChrt'
 * '<S944>' : 'CITR_ac/PokeCITR_e_BCIM_Ind3_FailSts/PokeCITR_e_BCIM_Ind3_FailStsChrt'
 * '<S945>' : 'CITR_ac/PokeCITR_e_BCIM_Ind3_Fdbk/PokeCITR_e_BCIM_Ind3_FdbkChrt'
 * '<S946>' : 'CITR_ac/PokeCITR_e_BCIM_Ind4_FailSts/PokeCITR_e_BCIM_Ind4_FailStsChrt'
 * '<S947>' : 'CITR_ac/PokeCITR_e_BCIM_Ind4_Fdbk/PokeCITR_e_BCIM_Ind4_FdbkChrt'
 * '<S948>' : 'CITR_ac/PokeCITR_e_BCIM_Ind5_FailSts/PokeCITR_e_BCIM_Ind5_FailStsChrt'
 * '<S949>' : 'CITR_ac/PokeCITR_e_BCIM_Ind5_Fdbk/PokeCITR_e_BCIM_Ind5_FdbkChrt'
 * '<S950>' : 'CITR_ac/PokeCITR_e_BCIM_Ind_Color_Fdbk/PokeCITR_e_BCIM_Ind_Color_FdbkChrt'
 * '<S951>' : 'CITR_ac/PokeCITR_e_CPIM_BlueLED_FailSts/PokeCITR_e_CPIM_BlueLED_FailStsChrt'
 * '<S952>' : 'CITR_ac/PokeCITR_e_CPIM_GreenLED_FailSts/PokeCITR_e_CPIM_GreenLED_FailStsChrt'
 * '<S953>' : 'CITR_ac/PokeCITR_e_CPIM_Icon1_Sts/PokeCITR_e_CPIM_Icon1_StsChrt'
 * '<S954>' : 'CITR_ac/PokeCITR_e_CPIM_Icon2_Sts/PokeCITR_e_CPIM_Icon2_StsChrt'
 * '<S955>' : 'CITR_ac/PokeCITR_e_CPIM_Ind1_FailSts/PokeCITR_e_CPIM_Ind1_FailStsChrt'
 * '<S956>' : 'CITR_ac/PokeCITR_e_CPIM_Ind1_Fdbk/PokeCITR_e_CPIM_Ind1_FdbkChrt'
 * '<S957>' : 'CITR_ac/PokeCITR_e_CPIM_Ind2_FailSts/PokeCITR_e_CPIM_Ind2_FailStsChrt'
 * '<S958>' : 'CITR_ac/PokeCITR_e_CPIM_Ind2_Fdbk/PokeCITR_e_CPIM_Ind2_FdbkChrt'
 * '<S959>' : 'CITR_ac/PokeCITR_e_CPIM_Ind3_FailSts/PokeCITR_e_CPIM_Ind3_FailStsChrt'
 * '<S960>' : 'CITR_ac/PokeCITR_e_CPIM_Ind3_Fdbk/PokeCITR_e_CPIM_Ind3_FdbkChrt'
 * '<S961>' : 'CITR_ac/PokeCITR_e_CPIM_Ind4_FailSts/PokeCITR_e_CPIM_Ind4_FailStsChrt'
 * '<S962>' : 'CITR_ac/PokeCITR_e_CPIM_Ind4_Fdbk/PokeCITR_e_CPIM_Ind4_FdbkChrt'
 * '<S963>' : 'CITR_ac/PokeCITR_e_CPIM_Ind5_FailSts/PokeCITR_e_CPIM_Ind5_FailStsChrt'
 * '<S964>' : 'CITR_ac/PokeCITR_e_CPIM_Ind5_Fdbk/PokeCITR_e_CPIM_Ind5_FdbkChrt'
 * '<S965>' : 'CITR_ac/PokeCITR_e_CPIM_Ind_Color_Fdbk/PokeCITR_e_CPIM_Ind_Color_FdbkChrt'
 * '<S966>' : 'CITR_ac/PokeCITR_e_CPIM_RedLED_FailSts/PokeCITR_e_CPIM_RedLED_FailStsChrt'
 * '<S967>' : 'CITR_ac/PokeCITR_e_ChrgPortDoor_Sts/PokeCITR_e_ChrgPortDoor_StsChrt'
 * '<S968>' : 'CITR_ac/PokeCITR_e_ChrgPortLock_FailSts/PokeCITR_e_ChrgPortLock_FailStsChrt'
 * '<S969>' : 'CITR_ac/PokeCITR_e_ChrgrFlapSts/PokeCITR_e_ChrgrFlapStsChrt'
 * '<S970>' : 'CITR_ac/PokeCITR_e_CoopCh_ChrgCmd/PokeCITR_e_CoopCh_ChrgCmdChrt'
 * '<S971>' : 'CITR_ac/PokeCITR_e_DVC_IO_BCIM/PokeCITR_e_DVC_IO_BCIMChrt'
 * '<S972>' : 'CITR_ac/PokeCITR_e_DVC_IO_BCIM_JL/PokeCITR_e_DVC_IO_BCIM_JLChrt'
 * '<S973>' : 'CITR_ac/PokeCITR_e_DVC_IO_CPIM/PokeCITR_e_DVC_IO_CPIMChrt'
 * '<S974>' : 'CITR_ac/PokeCITR_e_DateTmFormat/PokeCITR_e_DateTmFormatChrt'
 * '<S975>' : 'CITR_ac/PokeCITR_e_DoorLockLastElSts/KaCITR_e_DoorLockLastElSts'
 * '<S976>' : 'CITR_ac/PokeCITR_e_DoorLockLastElSts/PokeCITR_e_DoorLockLastElStsChrt'
 * '<S977>' : 'CITR_ac/PokeCITR_e_DoorLockLastElSts_2/KaCITR_e_DoorLockLastElSts'
 * '<S978>' : 'CITR_ac/PokeCITR_e_DoorLockLastElSts_2/PokeCITR_e_DoorLockLastElSts_2Chrt'
 * '<S979>' : 'CITR_ac/PokeCITR_e_FOTA_Install_Type/PokeCITR_e_FOTA_Install_TypeChrt'
 * '<S980>' : 'CITR_ac/PokeCITR_e_FOTA_Installation_Status/PokeCITR_e_FOTA_Installation_StatusChrt'
 * '<S981>' : 'CITR_ac/PokeCITR_e_HU_ChrgSchedType1/PokeCITR_e_HU_ChrgSchedType1Chrt'
 * '<S982>' : 'CITR_ac/PokeCITR_e_HU_ChrgSchedType2/PokeCITR_e_HU_ChrgSchedType2Chrt'
 * '<S983>' : 'CITR_ac/PokeCITR_e_HU_Sch1_Type/PokeCITR_e_HU_Sch1_TypeChrt'
 * '<S984>' : 'CITR_ac/PokeCITR_e_HU_Sch2_Type/PokeCITR_e_HU_Sch2_TypeChrt'
 * '<S985>' : 'CITR_ac/PokeCITR_e_HU_Sch3_Allow/PokeCITR_e_HU_Sch3_AllowChrt'
 * '<S986>' : 'CITR_ac/PokeCITR_e_HU_Sch3_Type/PokeCITR_e_HU_Sch3_TypeChrt'
 * '<S987>' : 'CITR_ac/PokeCITR_e_HU_Sch4_Allow/PokeCITR_e_HU_Sch4_AllowChrt'
 * '<S988>' : 'CITR_ac/PokeCITR_e_PP2Fault/PokeCITR_e_PP2FaultChrt'
 * '<S989>' : 'CITR_ac/PokeCITR_e_PP2FaultRsn/PokeCITR_e_PP2FaultRsnChrt'
 * '<S990>' : 'CITR_ac/PokeCITR_e_PP2LEDFault/PokeCITR_e_PP2LEDFaultChrt'
 * '<S991>' : 'CITR_ac/PokeCITR_e_PP2_LED_A_ColorFeedback/PokeCITR_e_PP2_LED_A_ColorFeedbackChrt'
 * '<S992>' : 'CITR_ac/PokeCITR_e_PP2_LED_A_FailSts/PokeCITR_e_PP2_LED_A_FailStsChrt'
 * '<S993>' : 'CITR_ac/PokeCITR_e_PP2_LED_A_Feedback/PokeCITR_e_PP2_LED_A_FeedbackChrt'
 * '<S994>' : 'CITR_ac/PokeCITR_e_PP2_LED_B_ColorFeedback/PokeCITR_e_PP2_LED_B_ColorFeedbackChrt'
 * '<S995>' : 'CITR_ac/PokeCITR_e_PP2_LED_B_FailSts/PokeCITR_e_PP2_LED_B_FailStsChrt'
 * '<S996>' : 'CITR_ac/PokeCITR_e_PP2_LED_B_Feedback/PokeCITR_e_PP2_LED_B_FeedbackChrt'
 * '<S997>' : 'CITR_ac/PokeCITR_e_PPFault/PokeCITR_e_PPFaultChrt'
 * '<S998>' : 'CITR_ac/PokeCITR_e_PPFaultRsn/PokeCITR_e_PPFaultRsnChrt'
 * '<S999>' : 'CITR_ac/PokeCITR_e_PPLEDFault/PokeCITR_e_PPLEDFaultChrt'
 * '<S1000>' : 'CITR_ac/PokeCITR_e_PP_LED_A_ColorFeedback/PokeCITR_e_PP_LED_A_ColorFeedbackChrt'
 * '<S1001>' : 'CITR_ac/PokeCITR_e_PP_LED_A_FailSts/PokeCITR_e_PP_LED_A_FailStsChrt'
 * '<S1002>' : 'CITR_ac/PokeCITR_e_PP_LED_A_Feedback/PokeCITR_e_PP_LED_A_FeedbackChrt'
 * '<S1003>' : 'CITR_ac/PokeCITR_e_PP_LED_B_ColorFeedback/PokeCITR_e_PP_LED_B_ColorFeedbackChrt'
 * '<S1004>' : 'CITR_ac/PokeCITR_e_PP_LED_B_FailSts/PokeCITR_e_PP_LED_B_FailStsChrt'
 * '<S1005>' : 'CITR_ac/PokeCITR_e_PP_LED_B_Feedback/PokeCITR_e_PP_LED_B_FeedbackChrt'
 * '<S1006>' : 'CITR_ac/PokeCITR_e_PP_LED_C_ColorFeedback/PokeCITR_e_PP_LED_C_ColorFeedbackChrt'
 * '<S1007>' : 'CITR_ac/PokeCITR_e_PP_LED_C_FailSts/PokeCITR_e_PP_LED_C_FailStsChrt'
 * '<S1008>' : 'CITR_ac/PokeCITR_e_PP_LED_C_Feedback/PokeCITR_e_PP_LED_C_FeedbackChrt'
 * '<S1009>' : 'CITR_ac/PokeCITR_e_PowerLimit_Req/KaCITR_e_PowerLimit_Req'
 * '<S1010>' : 'CITR_ac/PokeCITR_e_PowerLimit_Req/PokeCITR_e_PowerLimit_ReqChrt'
 * '<S1011>' : 'CITR_ac/PokeCITR_e_PowerLimit_Req_2/KaCITR_e_PowerLimit_Req'
 * '<S1012>' : 'CITR_ac/PokeCITR_e_PowerLimit_Req_2/PokeCITR_e_PowerLimit_Req_2Chrt'
 * '<S1013>' : 'CITR_ac/PokeCITR_e_RmtChrgPortLkCmd/PokeCITR_e_RmtChrgPortLkCmdChrt'
 * '<S1014>' : 'CITR_ac/PokeCITR_e_TBM_ChrgSchedType1/PokeCITR_e_TBM_ChrgSchedType1Chrt'
 * '<S1015>' : 'CITR_ac/PokeCITR_e_TBM_ChrgSchedType2/PokeCITR_e_TBM_ChrgSchedType2Chrt'
 * '<S1016>' : 'CITR_ac/PokeCITR_e_TBM_Sch1_Type/PokeCITR_e_TBM_Sch1_TypeChrt'
 * '<S1017>' : 'CITR_ac/PokeCITR_e_TBM_Sch2_Type/PokeCITR_e_TBM_Sch2_TypeChrt'
 * '<S1018>' : 'CITR_ac/PokeCITR_e_TBM_Sch3_Allow/PokeCITR_e_TBM_Sch3_AllowChrt'
 * '<S1019>' : 'CITR_ac/PokeCITR_e_TBM_Sch3_Type/PokeCITR_e_TBM_Sch3_TypeChrt'
 * '<S1020>' : 'CITR_ac/PokeCITR_e_TBM_Sch4_Allow/PokeCITR_e_TBM_Sch4_AllowChrt'
 * '<S1021>' : 'CITR_ac/PokeCITR_l_DistanceToCharge/PokeCITR_l_DistanceToChargeChrt'
 * '<S1022>' : 'CITR_ac/PokeCITR_t_TimeToCharge/PokeCITR_t_TimeToChargeChrt'
 * '<S1023>' : 'CITR_ac/Runnable_Charge_Port_Lock/Enumerated Constant'
 * '<S1024>' : 'CITR_ac/Runnable_Charge_Port_Lock/Enumerated Constant1'
 * '<S1025>' : 'CITR_ac/Runnable_Charge_Port_Lock/Enumerated Constant2'
 * '<S1026>' : 'CITR_ac/Runnable_Charge_Port_Lock/Enumerated Constant3'
 * '<S1027>' : 'CITR_ac/Runnable_Charge_Port_Lock/Enumerated Constant4'
 * '<S1028>' : 'CITR_ac/Runnable_Charge_Port_Lock/Enumerated Constant5'
 * '<S1029>' : 'CITR_ac/Runnable_Charge_Port_Lock/Enumerated Constant6'
 * '<S1030>' : 'CITR_ac/TmotCITR_b_ChrgPort_BCM_Cmd/TmotCITR_b_ChrgPort_BCM_CmdChrt'
 * '<S1031>' : 'CITR_ac/TmotCITR_b_DC_PwrLev/TmotCITR_b_DC_PwrLevChrt'
 * '<S1032>' : 'CITR_ac/TmotCITR_b_DateTmDay/TmotCITR_b_DateTmDayChrt'
 * '<S1033>' : 'CITR_ac/TmotCITR_b_Date_Day1/TmotCITR_b_Date_Day1Chrt'
 * '<S1034>' : 'CITR_ac/TmotCITR_b_HU_Sch1_Day/TmotCITR_b_HU_Sch1_DayChrt'
 * '<S1035>' : 'CITR_ac/TmotCITR_b_HU_Sch2_Day/TmotCITR_b_HU_Sch2_DayChrt'
 * '<S1036>' : 'CITR_ac/TmotCITR_b_HU_Sch3_Day/TmotCITR_b_HU_Sch3_DayChrt'
 * '<S1037>' : 'CITR_ac/TmotCITR_b_HU_Sch4_Day/TmotCITR_b_HU_Sch4_DayChrt'
 * '<S1038>' : 'CITR_ac/TmotCITR_b_TBM_Sch1_Day/TmotCITR_b_TBM_Sch1_DayChrt'
 * '<S1039>' : 'CITR_ac/TmotCITR_b_TBM_Sch2_Day/TmotCITR_b_TBM_Sch2_DayChrt'
 * '<S1040>' : 'CITR_ac/TmotCITR_b_TBM_Sch3_Day/TmotCITR_b_TBM_Sch3_DayChrt'
 * '<S1041>' : 'CITR_ac/TmotCITR_b_TBM_Sch4_Day/TmotCITR_b_TBM_Sch4_DayChrt'
 * '<S1042>' : 'CITR_ac/TmotCITR_e_DoorLockLastElSts/TmotCITR_e_DoorLockLastElStsChrt'
 * '<S1043>' : 'CITR_ac/TmotCITR_e_DoorLockLastElSts_2/TmotCITR_e_DoorLockLastElSts_2Chrt'
 * '<S1044>' : 'CITR_ac/TmotCITR_e_PowerLimitReq/TmotCITR_e_PowerLimitReqChrt'
 * '<S1045>' : 'CITR_ac/TmotCITR_e_PowerLimitReq_2/TmotCITR_e_PowerLimitReq_2Chrt'
 * '<S1046>' : 'CITR_ac/TmotCITR_e_RmtChrgPortLkCmd/TmotCITR_e_RmtChrgPortLkCmdChrt'
 */
#endif                                 /* RTW_HEADER_CITR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
