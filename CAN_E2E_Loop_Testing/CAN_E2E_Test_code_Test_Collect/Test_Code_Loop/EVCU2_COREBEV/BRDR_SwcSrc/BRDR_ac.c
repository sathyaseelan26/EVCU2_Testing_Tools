/*
 * File: BRDR_ac.c
 *
 * Code generated for Simulink model 'BRDR_ac'.
 *
 * Model version                  : 9.865
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:11:14 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BRDR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* Named constants for Truth Table: '<S330>/Sensor_Selection' */
#define BRDR_ac_False                  (false)

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_BRDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4) || Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_23 || Rte_SysCon_Variant_BRDR_28 || Rte_SysCon_Variant_BRDR_3 || Rte_SysCon_Variant_BRDR_6 || Rte_SysCon_Variant_BRDR_8

static volatile CONST(float32, BRDR_VAR_INIT) HeBRDR_t_MedTEH = 0.1F;/* Referenced by:
                                                                      * '<S1208>/Calib'
                                                                      * '<S358>/Calib'
                                                                      * '<S412>/Calib'
                                                                      * '<S601>/Calib'
                                                                      * '<S962>/Calib'
                                                                      * '<S938>/Calib'
                                                                      * '<S691>/Calib'
                                                                      * '<S811>/Calib'
                                                                      * '<S824>/Calib'
                                                                      * '<S976>/Calib'
                                                                      */

#endif

static volatile CONST(float32, BRDR_VAR_INIT) KaBRDR_T_TmpLvlMap[3] =
{
    10.0F, 10.0F, 10.0F
} ;                                    /* Referenced by: '<S516>/Calib' */

#if Rte_SysCon_Variant_BRDR_24

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_BatCltLvLSnsCkt_FailCnt =
    30U;                               /* Referenced by: '<S1180>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_24

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_BatCltLvLSnsCkt_SmpCnt =
    40U;                               /* Referenced by: '<S1181>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_ChillPerf_FailCnt = 0U;/* Referenced by: '<S576>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_ChillPerf_SmpCnt = 0U;/* Referenced by: '<S577>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28

static volatile CONST(sint16, BRDR_VAR_INIT) KeBRDR_Cnt_FltyTempSnsrs_BHOS_IUMPR
    = 1;                               /* Referenced by: '<S179>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12

static volatile CONST(sint16, BRDR_VAR_INIT) KeBRDR_Cnt_FltyTempSnsrs_BTIS_IUMPR
    = 1;                               /* Referenced by: '<S209>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

static volatile CONST(sint16, BRDR_VAR_INIT) KeBRDR_Cnt_FltyTempSnsrs_BTOS_IUMPR
    = 1;                               /* Referenced by: '<S237>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8

static volatile CONST(sint16, BRDR_VAR_INIT) KeBRDR_Cnt_FltyTempSnsrs_LTAP_IUMPR
    = 1;                               /* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HVBatCltLvLo_OC_FailCnt =
    40U;                               /* Referenced by: '<S1154>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HVBatCltLvLo_OC_SmpCnt =
    40U;                               /* Referenced by: '<S1155>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_28

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HV_BHOS_FailCnt = 30U;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_28

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HV_BHOS_SmpCnt = 75U;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_31

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HV_BTIS2_FailCnt = 30U;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_31

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HV_BTIS2_SmpCnt = 75U;/* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_12

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HV_BTIS_FailCnt = 30U;/* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_12

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HV_BTIS_SmpCnt = 75U;/* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_34

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HV_BTOS2_FailCnt = 30U;/* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_34

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HV_BTOS2_SmpCnt = 75U;/* Referenced by: '<S283>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_6

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HV_BTOS_FailCnt = 30U;/* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_6

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HV_BTOS_SmpCnt = 75U;/* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HeatExPerf_FailCnt = 0U;/* Referenced by: '<S1041>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HeatExPerf_SmpCnt = 0U;/* Referenced by: '<S1042>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 || Rte_SysCon_Variant_BRDR_4

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_HoldVehicle_Soak = 500U;/* Referenced by:
                                                                      * '<S388>/Calib'
                                                                      * '<S399>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BRDR_8

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_LTAP_FailCnt = 30U;/* Referenced by: '<S537>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_8

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_LTAP_SmpCnt = 75U;/* Referenced by: '<S538>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_PsvCool_FailCnt = 20U;/* Referenced by: '<S833>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(uint16, BRDR_VAR_INIT) KeBRDR_Cnt_PsvCool_SmpCnt = 30U;/* Referenced by: '<S834>/Calib' */

#endif

static volatile CONST(uint8, BRDR_VAR_INIT) KeBRDR_Cnt_TmpRatThrsld = 2U;/* Referenced by: '<S533>/Calib' */

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_I_RMSCurrent_Threshold =
    50.0F;                             /* Referenced by: '<S692>/Calib' */

#endif

#if (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_Pct_CPV_Closed = 10.0F;/* Referenced by: '<S913>/Calib' */

#endif

#if (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_Pct_CPV_Open = 70.0F;/* Referenced by: '<S914>/Calib' */

#endif

#if (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_Pct_CPV_OpenThreshold =
    80.0F;                             /* Referenced by:
                                        * '<S953>/Calib'
                                        * '<S926>/Calib'
                                        */

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_16 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_17 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_18 && Rte_SysCon_Variant_BRDR_19)

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_Pct_EXV_OpenThreshold =
    80.0F;                             /* Referenced by: '<S659>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_Pct_HT_CabVlvSts_D = 0.0F;/* Referenced by: '<S1225>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_Pct_HeatEx_OpnTresh = 0.7F;/* Referenced by: '<S880>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_AmbientTemp_LowThresh =
    30.0F;                             /* Referenced by: '<S676>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_5

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_BTIS_CellT_TmpLim = 4.0F;/* Referenced by: '<S341>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_BTIS_CoolPerfTh = 5.0F;/* Referenced by: '<S830>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_5

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_BTOS_BTIS_TmpLim = 4.0F;/* Referenced by:
                                                                      * '<S342>/Calib'
                                                                      * '<S347>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BRDR_5

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_BTOS_CellT_TmpLim = 4.0F;/* Referenced by: '<S348>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19) || (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3)

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_BatClntTmp_In = 37.0F;/* Referenced by:
                                                                      * '<S671>/Calib'
                                                                      * '<S677>/Calib'
                                                                      * '<S637>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_BatClntTmp_Out = 30.0F;/* Referenced by: '<S678>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_BattErrTh_Heating = 4.0F;/* Referenced by: '<S1029>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_16 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_17 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_18 && Rte_SysCon_Variant_BRDR_19)

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_CellOverTemp = 35.0F;/* Referenced by: '<S660>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_CellTempAvgUsed = 30.0F;/* Referenced by: '<S679>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_CellTempMax_Chk = 47.0F;/* Referenced by: '<S680>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_CellTempMax_Thresh =
    45.0F;                             /* Referenced by: '<S1021>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_CelltempMin_Thresh =
    20.0F;                             /* Referenced by: '<S1022>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_ChillPerfTemp = 4.0F;/* Referenced by: '<S702>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_HVBatTempMax = 255.0F;/* Referenced by: '<S881>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_HeaterPerfTemp = 20.0F;/* Referenced by:
                                                                      * '<S944>/Calib'
                                                                      * '<S954>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_HtPrfmnc_CellMinOff =
    3.0F;                              /* Referenced by:
                                        * '<S1030>/Calib'
                                        * '<S977>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_MaxCellPerfTemp = 46.0F;/* Referenced by: '<S703>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_MinCellPerfTemp = 0.0F;/* Referenced by: '<S945>/Calib' */

#endif

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_T_NoTempSel = 0.0F;
                                  /* Referenced by: '<S330>/Sensor_Selection' */

#if Rte_SysCon_Variant_BRDR_23 && Rte_SysCon_Variant_BRDR_33

static volatile CONST(float32, BRDR_VAR_INIT)
    KeBRDR_U_STGCktHiFltLim_BatBotlClnt = 4.75F;/* Referenced by: '<S1149>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_24

static volatile CONST(float32, BRDR_VAR_INIT)
    KeBRDR_U_STGCktLowFltLim_BatBotlClnt = 0.25F;/* Referenced by: '<S1178>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_W_HVC_HtrPwrLim = 2500.0F;/* Referenced by: '<S882>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_W_Htr3PwrLim_Thresh =
    2000.0F;                           /* Referenced by: '<S1034>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_W_HtrPwrLim_HtPrfmncFlt =
    4000.0F;                           /* Referenced by:
                                        * '<S1023>/Calib'
                                        * '<S978>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BCHPerf_TempRat = 0;/* Referenced by: '<S446>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BHOSDiag_Enbl_D = 0;/* Referenced by: '<S1271>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BHOSDiag_Enbl_SD = 0;/* Referenced by: '<S1272>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BHOSTmpPerf_IUMPR_D = 0;/* Referenced by: '<S1301>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BHOSTmpPerf_IUMPR_SD = 0;/* Referenced by: '<S1302>/Calib' */

#if Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BHOS_FA_EnblCnds = 1;/* Referenced by: '<S432>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BHOS_FA_FltCndsEnbl = 1;/* Referenced by: '<S337>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BHOS_FltDtct_D = 0;/* Referenced by: '<S1273>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BHOS_FltDtct_SD = 0;/* Referenced by: '<S1274>/Calib' */

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BHOS_TmpFltDsbl = 1;/* Referenced by: '<S644>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BPCMLINLOC_FA_D = 0;/* Referenced by: '<S1226>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BPCMLINLOC_FA_SD = 0;/* Referenced by: '<S1227>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BPCMLIN_LOC_SD = 0;/* Referenced by: '<S1228>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_2) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_35) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_2) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_35) || (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_2 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_2 && Rte_SysCon_Variant_BRDR_23) || (Rte_SysCon_Variant_BRDR_2 && Rte_SysCon_Variant_BRDR_4) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_35) || (Rte_SysCon_Variant_BRDR_23 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_23 && Rte_SysCon_Variant_BRDR_35) || (Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (Rte_SysCon_Variant_BRDR_35 && Rte_SysCon_Variant_BRDR_4)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BPCM_RedCommCheckEnbl = 1;/* Referenced by:
                                                                      * '<S27>/Calib'
                                                                      * '<S43>/Calib'
                                                                      * '<S50>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTIS2_FA_EnblCnds = 1;/* Referenced by: '<S463>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTIS2_FA_FltCndsEnbl = 1;/* Referenced by: '<S343>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTISPerf_IUMPR_D = 0;/* Referenced by: '<S1303>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTISPerf_IUMPR_SD = 0;/* Referenced by: '<S1304>/Calib' */

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTIS_CellTmpChk_Dsbl = 1;/* Referenced by: '<S1031>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_12

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTIS_FA_EnblCnds = 1;/* Referenced by: '<S452>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTIS_FA_FltCndsEnbl = 1;/* Referenced by: '<S340>/Calib' */

#if Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTIS_Perf_D = 1;/* Referenced by:
                                                                      * '<S254>/Calib'
                                                                      * '<S482>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTIS_TmpFltDsbl = 1;/* Referenced by: '<S649>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTIS_TmpFltDsbl_PsvCool =
    0;                                 /* Referenced by: '<S789>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOS2Diag_Enbl_D = 0;/* Referenced by: '<S1279>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOS2Diag_Enbl_SD = 0;/* Referenced by: '<S1280>/Calib' */

#if Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOS2_FA_EnblCnds = 1;/* Referenced by: '<S486>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOS2_FA_FltCndsEnbl = 1;/* Referenced by: '<S349>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOSDiag_Enbl_D = 0;/* Referenced by: '<S1281>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOSDiag_Enbl_SD = 0;/* Referenced by: '<S1282>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOSPerf_IUMPR_D = 0;/* Referenced by: '<S1305>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOSPerf_IUMPR_SD = 0;/* Referenced by: '<S1306>/Calib' */

#if Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOS_FA_EnblCnds = 1;/* Referenced by: '<S475>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOS_FA_FltCndsEnbl = 1;/* Referenced by: '<S346>/Calib' */

#if Rte_SysCon_Variant_BRDR_12 && Rte_SysCon_Variant_BRDR_5

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOS_Perf_D = 1;/* Referenced by:
                                                                      * '<S226>/Calib'
                                                                      * '<S459>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BRDR_4

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOS_SenCirHigh_D = 0;/* Referenced by: '<S389>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_4

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOS_SenCirLow_D = 0;/* Referenced by: '<S390>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BTOS_TmpFltDsbl = 1;/* Referenced by: '<S651>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattActvCool_FltEnbl = 1;/* Referenced by: '<S578>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattActvCool_XYEnbl = 1;/* Referenced by: '<S579>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattCoolActv_LtchEnbl = 0;/* Referenced by: '<S580>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattCoolLvlLow_LtchEnbl =
    0;                                 /* Referenced by: '<S1156>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_24

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_BattCoolLvlSnsCkt_LtchEnbl = 0;/* Referenced by: '<S1182>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_24

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattCoolLvlSnsCkt_XYEnbl =
    1;                                 /* Referenced by: '<S1183>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattCoolPerf_IUMPR_D = 0;/* Referenced by: '<S1307>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattCoolPerf_IUMPR_SD = 0;/* Referenced by: '<S1308>/Calib' */

#if Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_BattCoolPmpATempSnsrPerf_LtchEnbl = 0;/* Referenced by: '<S539>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_BattCoolPmpHtrBTempSnsrPerf_LtchEnbl = 0;/* Referenced by: '<S93>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattCoolPsv_LtchEnbl = 0;/* Referenced by: '<S835>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattHeatPerf_IUMPR_D = 0;/* Referenced by: '<S1309>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattHeatPerf_IUMPR_SD = 0;/* Referenced by: '<S1310>/Calib' */

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattHeat_IUMPR_Enbl = 0;/* Referenced by: '<S1075>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattHeat_LIN1_Ovrd = 0;/* Referenced by: '<S883>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattHeat_LtchEnbl = 0;/* Referenced by: '<S1043>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattHeat_XYEnbl = 1;/* Referenced by: '<S1044>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattHtrLOC_FA_D = 0;/* Referenced by: '<S1229>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattHtrLOC_FA_SD = 0;/* Referenced by: '<S1230>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattHtr_ClntTempOutFA_D =
    0;                                 /* Referenced by: '<S1231>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattHtr_ClntTempOutFA_SD =
    0;                                 /* Referenced by: '<S1232>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattHtr_LOC_SD = 0;/* Referenced by: '<S1233>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattPsvCool_FltEnbl = 1;/* Referenced by: '<S836>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BattPsvCool_XYEnbl = 1;/* Referenced by: '<S837>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BtlSnsrCktLoFlt_Dsbl = 0;/* Referenced by: '<S979>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BtlSnsrLoFlt_Dsbl = 0;/* Referenced by: '<S980>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_BtlSnsrLoFlt_Dsbl_TempRat
    = 1;                               /* Referenced by: '<S359>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_CabinVlv_FltDtct = 0;/* Referenced by: '<S884>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_ChillPerfCompLogicSel = 0;/* Referenced by: '<S704>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_ChillPerf_AmbFA_Ovrd = 0;/* Referenced by: '<S681>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_ChillPerf_AvgTmpFA_Ovrd =
    0;                                 /* Referenced by: '<S682>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_CoolOutTempSnsCkt_LtchEnbl = 1;/* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DiagGlblCndtnsValid_D = 1;/* Referenced by: '<S1234>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DiagGlblCndtnsValid_SD =
    0;                                 /* Referenced by: '<S1235>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblAmbientChk = 0;/* Referenced by: '<S683>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblBTISDelta_CoolPerf =
    0;                                 /* Referenced by:
                                        * '<S684>/Calib'
                                        * '<S718>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblBTOSDelta_CoolPerf =
    0;                                 /* Referenced by:
                                        * '<S685>/Calib'
                                        * '<S719>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblCellMin_HtPrfmncFlt =
    0;                                 /* Referenced by: '<S981>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_16 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_17 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_18 && Rte_SysCon_Variant_BRDR_19)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblCellOverTemp = 0;/* Referenced by: '<S661>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblCellTempAvg = 0;/* Referenced by: '<S686>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblCellTempMaxChk = 0;/* Referenced by: '<S687>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblCompSpdChk = 1;/* Referenced by: '<S638>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblDigFailSfe_D = 0;/* Referenced by: '<S1236>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblDigFailSfe_SD = 0;/* Referenced by: '<S1237>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_16 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_17 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_18 && Rte_SysCon_Variant_BRDR_19)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblEXV_Perf = 0;/* Referenced by: '<S662>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_16 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_17 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_18 && Rte_SysCon_Variant_BRDR_19)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblEXV_PosAct = 0;/* Referenced by: '<S663>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblHtrOutPrfmncFlt = 0;/* Referenced by: '<S982>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblHtrPrfmncFlt = 0;/* Referenced by: '<S983>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_DsblLINBusOffFA_BattClntLo = 0;/* Referenced by: '<S1209>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblLINBusOff_BattClntLo =
    0;                                 /* Referenced by: '<S1210>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_DsblLTAPDryRunFA_BattClntLo = 0;/* Referenced by: '<S1211>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblLTAPDryRun_BattClntLo
    = 0;                               /* Referenced by: '<S1212>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblLTAPFA_HtPrfmncFlt =
    0;                                 /* Referenced by: '<S984>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblLTAPPerf_BattClntLo =
    0;                                 /* Referenced by: '<S1213>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblLTAPTmp_HtPrfmncFlt =
    0;                                 /* Referenced by: '<S985>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblLTAP_LOCFA_BattClntLo
    = 0;                               /* Referenced by: '<S1214>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblLTAP_LOC_BattClntLo =
    0;                                 /* Referenced by: '<S1215>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblPECTOSFA_PsvCool = 0;/* Referenced by: '<S818>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblPPCTISFA_PsvCool = 0;/* Referenced by: '<S821>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblPPRat_PsvCool = 0;/* Referenced by: '<S795>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblThermSysEnbl_ClntLo =
    0;                                 /* Referenced by: '<S1216>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblThrmRly_TmpRat = 1;/* Referenced by: '<S375>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblThrmSysEnbl_ClntLo =
    1;                                 /* Referenced by: '<S1103>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_DsblThrmSysEnbl_TmpRat =
    1;                                 /* Referenced by: '<S376>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_BHOSEnbl_CoolPerf =
    1;                                 /* Referenced by: '<S645>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_BTISEnbl_CoolPerf =
    1;                                 /* Referenced by: '<S650>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_BTOSEnbl_CoolPerf =
    1;                                 /* Referenced by: '<S652>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_BatClntLo_ActvCool =
    0;                                 /* Referenced by: '<S621>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_BatClntLo_TempRat =
    1;                                 /* Referenced by: '<S360>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_LIN1LOC_PsvCool = 0;/* Referenced by: '<S796>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_LTAPEnbl_CoolPerf =
    1;                                 /* Referenced by: '<S653>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_Dsbl_LTAPPerfEnbl_CoolPerf = 1;/* Referenced by: '<S623>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_LTAPPrfmncFlt = 0;/* Referenced by: '<S986>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_PECTOSPerf_PsvCool =
    0;                                 /* Referenced by: '<S819>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_PPCTISPerf_PsvCool =
    0;                                 /* Referenced by: '<S822>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_PPDryRun_PsvCool = 0;/* Referenced by: '<S797>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_PPLOC_PsvCool = 0;/* Referenced by: '<S798>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_PPPerf_PsvCool = 0;/* Referenced by: '<S799>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_PPTempFAPsvCool = 0;/* Referenced by: '<S800>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_RMSCurrent = 0;/* Referenced by: '<S693>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Dsbl_RadFanFlt_PsvCool =
    0;                                 /* Referenced by: '<S775>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EACLosCommDsbl = 0;/* Referenced by: '<S610>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EACPerfDsbl = 0;/* Referenced by: '<S611>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_ECHPerf_FltDtct = 0;/* Referenced by: '<S904>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_4

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_ECM_LOC_D = 0;/* Referenced by: '<S391>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblACPerf_CoolPerf_IUMPR
    = 1;                               /* Referenced by: '<S742>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBHOSRat_HeatPerf_IUMPR = 1;/* Referenced by: '<S1076>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblBHOSTmp_ForBTIS_IUMPR
    = 1;                               /* Referenced by: '<S210>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblBHOSTmp_ForBTOS_IUMPR
    = 1;                               /* Referenced by: '<S238>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblBHOSTmp_ForLTAP_IUMPR
    = 1;                               /* Referenced by: '<S264>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblBHOS_LOC_BHOS_IUMPR =
    0;                                 /* Referenced by: '<S180>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBHOS_LOC_HeatPerf_IUMPR = 0;/* Referenced by: '<S1077>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBPCMLINBusOff_BHOS_IUMPR = 0;/* Referenced by: '<S181>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBPCMLINBusOff_CoolPerf_IUMPR = 0;/* Referenced by: '<S743>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBPCMLINBusOff_HeatPerf_IUMPR = 0;/* Referenced by: '<S1078>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBPCMLINBusOff_LTAP_IUMPR = 0;/* Referenced by: '<S265>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBPCM_LINBusOff_BTIS_IUMPR = 0;/* Referenced by: '<S211>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBPCM_LINBusOff_BTOS_IUMPR = 0;/* Referenced by: '<S239>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBTISTmp_HeatPerf_IUMPR = 1;/* Referenced by: '<S1079>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblBTIS_CoolPerf_IUMPR =
    0;                                 /* Referenced by: '<S744>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblBTIS_ForBHOS_IUMPR =
    1;                                 /* Referenced by: '<S182>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblBTIS_ForBTOS_IUMPR =
    1;                                 /* Referenced by: '<S240>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblBTIS_ForLTAP_IUMPR =
    1;                                 /* Referenced by: '<S266>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBTOSFlt_CoolPerf_IUMPR = 0;/* Referenced by: '<S745>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblBTOS_ForBHOS_IUMPR =
    1;                                 /* Referenced by: '<S183>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblBTOS_ForBTIS_IUMPR =
    1;                                 /* Referenced by: '<S212>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblBTOS_ForLTAP_IUMPR =
    1;                                 /* Referenced by: '<S267>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBatClntLo_CoolPerf_IUMPR = 0;/* Referenced by: '<S746>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBotlSnsrSTG_BHOS_IUMPR = 0;/* Referenced by: '<S184>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBotlSnsrSTG_BTIS_IUMPR = 0;/* Referenced by: '<S213>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBotlSnsrSTG_BTOS_IUMPR = 0;/* Referenced by: '<S241>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblBotlSnsrSTG_LTAP_IUMPR = 0;/* Referenced by: '<S268>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblChillVlvCktFlt_CoolPerf_IUMPR = 1;/* Referenced by: '<S747>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblChillerDiagSymp = 1;/* Referenced by: '<S705>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblClntLo_BHOS_IUMPR = 0;/* Referenced by: '<S185>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblClntLo_BTIS_IUMPR = 0;/* Referenced by: '<S214>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblClntLo_BTOS_IUMPR = 0;/* Referenced by: '<S242>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblClntLo_HeatPerf_IUMPR
    = 0;                               /* Referenced by: '<S1080>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblClntLo_LTAP_IUMPR = 0;/* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_28 || Rte_SysCon_Variant_BRDR_6 || Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblFltHealing_CANFA = 1;/* Referenced by:
                                                                      * '<S464>/Calib'
                                                                      * '<S487>/Calib'
                                                                      * '<S433>/Calib'
                                                                      * '<S453>/Calib'
                                                                      * '<S476>/Calib'
                                                                      * '<S498>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblHeatingPrfmncAppr1 =
    1;                                 /* Referenced by: '<S872>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblHeatingPrfmncAppr2 =
    1;                                 /* Referenced by: '<S987>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblHtrPerf_HeatPerf_IUMPR = 1;/* Referenced by: '<S1081>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblLOCEAC_CoolPerf_IUMPR
    = 1;                               /* Referenced by: '<S748>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblLTAPPerf_BHOS_IUMPR =
    1;                                 /* Referenced by: '<S186>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblLTAPPerf_BTIS_IUMPR =
    1;                                 /* Referenced by: '<S215>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblLTAPPerf_BTOS_IUMPR =
    1;                                 /* Referenced by: '<S243>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblLTAPPerf_CoolPerf_IUMPR = 1;/* Referenced by: '<S749>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblLTAPPerf_HeatPerf_IUMPR = 1;/* Referenced by: '<S1082>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblLTAPPerf_LTAP_IUMPR =
    1;                                 /* Referenced by: '<S270>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblLTAPTmpFlt_HeatPerf_IUMPR = 1;/* Referenced by: '<S1083>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblLTAPTmp_CoolPerf_IUMPR = 1;/* Referenced by: '<S750>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblLTAPTmp_ForBHOS_IUMPR
    = 1;                               /* Referenced by: '<S187>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblLTAPTmp_ForBTIS_IUMPR
    = 1;                               /* Referenced by: '<S216>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblLTAPTmp_ForBTOS_IUMPR
    = 1;                               /* Referenced by: '<S244>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblLTAP_LOC_BHOS_IUMPR =
    0;                                 /* Referenced by: '<S188>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblLTAP_LOC_BTIS_IUMPR =
    0;                                 /* Referenced by: '<S217>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblLTAP_LOC_BTOS_IUMPR =
    0;                                 /* Referenced by: '<S245>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblLTAP_LOC_CoolPerf_IUMPR = 0;/* Referenced by: '<S751>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblLTAP_LOC_HeatPerf_IUMPR = 0;/* Referenced by: '<S1084>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblLTAP_LOC_LTAP_IUMPR =
    0;                                 /* Referenced by: '<S271>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblLin1BusOff_CoolPerf_IUMPR = 0;/* Referenced by: '<S752>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblLtch_BTISCellMinChk =
    0;                                 /* Referenced by: '<S988>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblPECTOSCktFlt_CoolPerf_IUMPR = 0;/* Referenced by: '<S753>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblPECTOSPerf_CoolPerf_IUMPR = 0;/* Referenced by: '<S754>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblPPCTISCktFlt_CoolPerf_IUMPR = 0;/* Referenced by: '<S755>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblPPCTISPerf_CoolPerf_IUMPR = 0;/* Referenced by: '<S756>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblPmp_TmrOrEnblCond = 1;/* Referenced by: '<S1217>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblPressSnrCktFlt_CoolPerf_IUMPR = 1;/* Referenced by: '<S757>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblPressSnrPerfFlt_CoolPerf_IUMPR = 1;/* Referenced by: '<S758>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EnblPsvCoolDiag = 0;/* Referenced by: '<S831>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblPsvPmpDryRun_CoolPerf_IUMPR = 0;/* Referenced by: '<S759>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblPsvPmpLOC_CoolPerf_IUMPR = 0;/* Referenced by: '<S760>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblPsvPmpPerf_CoolPerf_IUMPR = 0;/* Referenced by: '<S761>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblPsvPmpRat_CoolPerf_IUMPR = 0;/* Referenced by: '<S762>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblRlyCktFlt_CoolPerf_IUMPR = 1;/* Referenced by: '<S763>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblRlyCktFlt_HeatPerf_IUMPR = 1;/* Referenced by: '<S1085>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblThrmlRlyCkt_BHOS_IUMPR = 1;/* Referenced by: '<S189>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblThrmlRlyCkt_BTIS_IUMPR = 1;/* Referenced by: '<S218>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblThrmlRlyCkt_BTOS_IUMPR = 1;/* Referenced by: '<S246>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EnblThrmlRlyCkt_LTAP_IUMPR = 1;/* Referenced by: '<S272>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Enbl_BTIS_ChillerPerf = 0;/* Referenced by:
                                                                      * '<S706>/Calib'
                                                                      * '<S639>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Enbl_BtlSnsrSG = 0;/* Referenced by: '<S1138>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Enbl_ChillPerf = 1;/* Referenced by: '<S707>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Enbl_CoolVlvFltChck = 0;/* Referenced by: '<S1035>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Enbl_TempRatEnblCond = 1;/* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_4

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EngOffTime_D = 0;/* Referenced by: '<S392>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EstRollAngleAtZeroSpd_FA_D = 0;/* Referenced by: '<S1238>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_EstRollAngleAtZeroSpd_FA_SD = 0;/* Referenced by: '<S1239>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EstRollAngleAtZeroSpd_SD =
    0;                                 /* Referenced by: '<S1240>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EstRollAngleFA_Ovrd = 0;/* Referenced by: '<S1104>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EstSlopeAngleFA_D = 0;/* Referenced by: '<S1241>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EstSlopeAngleFA_Ovrd = 0;/* Referenced by: '<S1105>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EstSlopeAngleFA_SD = 0;/* Referenced by: '<S1242>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_EstSlopeAngle_SD = 0;/* Referenced by: '<S1243>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_12

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HB_CT_SnsrPerf_LtchEnbl =
    1;                                 /* Referenced by: '<S141>/Calib' */

#endif

#if (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HB_PSC_CtrlValADsbl = 0;/* Referenced by: '<S921>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HTCVLeak_FltDsbl_D = 1;/* Referenced by: '<S382>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HTCV_LeakDTC_RatDiag_D =
    0;                                 /* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HT_CabVlvSts_SD = 0;/* Referenced by: '<S1244>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HVBatCltLvLo_OC_FltEn = 1;/* Referenced by: '<S1157>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HVBatCltLvLo_OC_XYEnbl =
    1;                                 /* Referenced by: '<S1158>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HVBatTempMaxEnbl = 0;/* Referenced by: '<S885>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BHOS_Flt = 1;/* Referenced by: '<S94>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BHOS_FltDtctEnbl = 0;/* Referenced by: '<S899>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BHOS_XYEnbl = 1;/* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_31

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTIS2_Flt = 1;/* Referenced by: '<S117>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTIS2_FltDtct_D = 0;/* Referenced by: '<S1275>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTIS2_FltDtct_SD = 0;/* Referenced by: '<S1276>/Calib' */

#if Rte_SysCon_Variant_BRDR_31

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTIS2_XYEnbl = 1;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_12

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTIS_Flt = 1;/* Referenced by: '<S142>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTIS_FltDtctDsbl = 0;/* Referenced by: '<S1006>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTIS_FltDtctEnbl = 0;/* Referenced by: '<S900>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTIS_FltDtct_D = 0;/* Referenced by: '<S1277>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTIS_FltDtct_SD = 0;/* Referenced by: '<S1278>/Calib' */

#if Rte_SysCon_Variant_BRDR_12

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTIS_XYEnbl = 1;/* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_34

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTOS2_Flt = 1;/* Referenced by: '<S284>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTOS2_FltDtct_D = 0;/* Referenced by: '<S1283>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTOS2_FltDtct_SD = 0;/* Referenced by: '<S1284>/Calib' */

#if Rte_SysCon_Variant_BRDR_34

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTOS2_XYEnbl = 1;/* Referenced by: '<S285>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTOS_Flt = 1;/* Referenced by: '<S309>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTOS_FltDtctEnbl = 0;/* Referenced by: '<S901>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTOS_FltDtct_D = 0;/* Referenced by: '<S1285>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTOS_FltDtct_SD = 0;/* Referenced by: '<S1286>/Calib' */

#if Rte_SysCon_Variant_BRDR_6

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_BTOS_XYEnbl = 1;/* Referenced by: '<S310>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HV_Bat_CltLvlLo_SD = 0;/* Referenced by: '<S1287>/Calib' */

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HeatEx_OpnTreshEnbl = 0;/* Referenced by: '<S886>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HeaterPerfDiag_DiffChk_D =
    0;                                 /* Referenced by: '<S946>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HeaterPerfDiag_DiffChk_SD
    = 0;                               /* Referenced by: '<S947>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HeaterPerf_FSymp_FrstSnsr
    = 0;                               /* Referenced by:
                                        * '<S948>/Calib'
                                        * '<S955>/Calib'
                                        * '<S927>/Calib'
                                        */

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HeaterPerf_FSymp_SecSnsr =
    0;                                 /* Referenced by:
                                        * '<S949>/Calib'
                                        * '<S956>/Calib'
                                        * '<S928>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_HeaterPerf_FSymp_SecSnsr_Clsd = 0;/* Referenced by:
                                                * '<S957>/Calib'
                                                * '<S929>/Calib'
                                                */

#endif

#if Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HeatingDelayEnbl = 1;/* Referenced by: '<S939>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HtrPwrLimDsbl = 0;/* Referenced by: '<S887>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_HtrPwrLimDsbl_HtPrfmnc =
    0;                                 /* Referenced by: '<S989>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_31

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_HybBattCooTempSnsrCPer_LtchEnbl = 0;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_34

static volatile CONST(boolean, BRDR_VAR_INIT)
    KeBRDR_b_HybBattCooTempSnsrDPer_LtchEnbl = 0;/* Referenced by: '<S286>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LINBusOffFA_ActvCool = 0;/* Referenced by: '<S647>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LINBusOffFA_HeatPerf = 1;/* Referenced by:
                                                                      * '<S894>/Calib'
                                                                      * '<S1012>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LINBusOffFA_PsvCool = 0;/* Referenced by: '<S786>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LINBusOffFA_TmpRat = 0;/* Referenced by: '<S379>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LINBusOff_ActvCool = 0;/* Referenced by: '<S648>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LINBusOff_HeatPerf = 1;/* Referenced by:
                                                                      * '<S895>/Calib'
                                                                      * '<S1013>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LINBusOff_PsvCool = 0;/* Referenced by: '<S787>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LINBusOff_TmpRat = 0;/* Referenced by: '<S380>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LOCBatHtrFA_HeatPerf = 1;/* Referenced by:
                                                                      * '<S891>/Calib'
                                                                      * '<S1009>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LOCBatHtrFA_TempRat = 0;/* Referenced by: '<S439>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LOCBatHtr_HeatPerf = 1;/* Referenced by:
                                                                      * '<S892>/Calib'
                                                                      * '<S1010>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BRDR_28

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LOCBatHtr_TempRat = 0;/* Referenced by: '<S440>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAPDiag_Enbl_D = 0;/* Referenced by: '<S1289>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAPDiag_Enbl_SD = 0;/* Referenced by: '<S1290>/Calib' */

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAPDryRun_FA_Ovrd = 0;/* Referenced by: '<S1106>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAPFltDtctDsbl = 1;/* Referenced by:
                                                                      * '<S873>/Calib'
                                                                      * '<S624>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAPFltDtctDsbl_PsvCool =
    0;                                 /* Referenced by: '<S809>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAPFunPerFltDtct_D = 0;/* Referenced by: '<S1245>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAPFunPerFltDtct_SD = 0;/* Referenced by: '<S1246>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAPLOC_FA_D = 0;/* Referenced by: '<S1247>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAPLOC_FA_SD = 0;/* Referenced by: '<S1248>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAPPerFltEnbl_D = 1;/* Referenced by: '<S362>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAPTmpPerf_IUMPR_D = 0;/* Referenced by: '<S1311>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAPTmpPerf_IUMPR_SD = 0;/* Referenced by: '<S1312>/Calib' */

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_ClntLoDsbl_PsvCool =
    0;                                 /* Referenced by: '<S803>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_DryRunDsbl = 0;/* Referenced by: '<S990>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_DryRunDsbl_ActvCool =
    0;                                 /* Referenced by: '<S622>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_DryRunDsbl_PsvCool =
    0;                                 /* Referenced by: '<S804>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_DryRunDsbl_TmpRat =
    0;                                 /* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_FA_EnblCnds = 1;/* Referenced by: '<S499>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_FA_FltCndsEnbl = 1;/* Referenced by: '<S350>/Calib' */

#if Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_Flt = 1;/* Referenced by: '<S540>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_FunPerFltDtct_D = 1;/* Referenced by: '<S364>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_LOCFA_ActvCool = 0;/* Referenced by: '<S656>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_LOCFA_HeatPerf = 1;/* Referenced by: '<S1015>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_LOCFA_PsvCool = 0;/* Referenced by: '<S806>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_LOC_ActvCool = 0;/* Referenced by: '<S657>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_LOC_HeatPerf = 1;/* Referenced by: '<S1016>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_LOC_PsvCool = 0;/* Referenced by: '<S807>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_LOC_SD = 0;/* Referenced by: '<S1249>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_LossCommFA_D = 0;/* Referenced by: '<S385>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_LossComm_D = 0;/* Referenced by: '<S386>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_PerfDsbl_TmpRat = 0;/* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_RqtLoLvDiag_Dial = 0;/* Referenced by: '<S1218>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_RqtLoLvDiag_SD = 0;/* Referenced by: '<S1219>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_Rqt_LoLv_Diag_D = 0;/* Referenced by: '<S1293>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_Rqt_LoLv_Diag_SD = 0;/* Referenced by: '<S1294>/Calib' */

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_TmpFADsbl = 0;/* Referenced by: '<S906>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_TmpFltDsbl = 1;/* Referenced by:
                                                                      * '<S907>/Calib'
                                                                      * '<S654>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_TmpFltDsbl_PsvCool =
    0;                                 /* Referenced by: '<S816>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_TmpFltDtct_D = 0;/* Referenced by: '<S1291>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_TmpFltDtct_SD = 0;/* Referenced by: '<S1292>/Calib' */

#if Rte_SysCon_Variant_BRDR_8

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LTAP_XYEnbl = 1;/* Referenced by: '<S541>/Calib' */

#endif

#if (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_LosCommHybPSCDsbl = 0;/* Referenced by: '<S922>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_MinCellPerfTempChk_Sel =
    0;                                 /* Referenced by: '<S950>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_MinCellPerfTempDiff_D = 0;/* Referenced by: '<S951>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_MinCellPerfTempDiff_SD =
    0;                                 /* Referenced by: '<S952>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_PostClrDiagDsbl_D = 0;/* Referenced by: '<S1250>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_PostClrDiagDsbl_SD = 0;/* Referenced by: '<S1251>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_PressSnsr_BaseDTCDsbl = 0;/* Referenced by: '<S615>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_PressSnsr_FltDsbl = 0;/* Referenced by: '<S616>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_PsvCoolDlyEnbl = 0;/* Referenced by: '<S825>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_RTC_CurrentTime_D = 0;/* Referenced by: '<S400>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_RqtLoLvDiag_tim_Dial = 0;/* Referenced by: '<S1113>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_RqtLoLvDiag_tim_SD = 0;/* Referenced by: '<S1114>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_SGSB_Desc_Dial = 0;/* Referenced by: '<S1118>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_SGSB_Desc_SD = 0;/* Referenced by: '<S1119>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_SelBTIS_BTOS = 0;/* Referenced by: '<S708>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_SelHeatPwrReq = 0;/* Referenced by: '<S991>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_SelLTAP_BHOS = 0;/* Referenced by: '<S709>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_SysVoltRange = 0;/* Referenced by: '<S1107>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_TBMS_AVG_D = 0;/* Referenced by: '<S401>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_4

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_TBMS_MAX_D = 0;/* Referenced by: '<S393>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_ThermalSysChkDsbl = 0;/* Referenced by: '<S1088>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_ThrmlRlyCtrlCkt_D = 0;/* Referenced by: '<S1224>/Calib' */

#endif

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_TmpRat_SelBHOS = 0;/* Referenced by: '<S507>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_TmpRat_SelBTIS1 = 1;/* Referenced by: '<S508>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_TmpRat_SelBTIS2 = 0;/* Referenced by: '<S509>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_TmpRat_SelBTOS1 = 1;/* Referenced by: '<S510>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_TmpRat_SelBTOS2 = 0;/* Referenced by: '<S511>/Calib' */
static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_TmpRat_SelLTAP = 1;/* Referenced by: '<S512>/Calib' */

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_UseHtr4PwrAct = 0;/* Referenced by: '<S1062>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_UseHtrPwrAct = 0;/* Referenced by: '<S1063>/Calib' */

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21)

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_UseSharedHtr = 1;/* Referenced by: '<S1064>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_VehPitchRoll_EnbApp_SD =
    1;                                 /* Referenced by: '<S1120>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_VehSpd_FA_D = 0;/* Referenced by: '<S1252>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_VehSpd_FA_Ovrd = 0;/* Referenced by: '<S1108>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_VehSpd_FA_SD = 0;/* Referenced by: '<S1253>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_VehicleSpd_SD = 0;/* Referenced by: '<S1254>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_VhcSpd_DisbDebnc_RST = 0;/* Referenced by: '<S1125>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Vlv1CktHiDsbl_CoolPerf =
    0;                                 /* Referenced by: '<S617>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(boolean, BRDR_VAR_INIT) KeBRDR_b_Vlv1CktLoDsbl_CoolPerf =
    0;                                 /* Referenced by: '<S618>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(TeBPCR_e_LIN_BusOff, BRDR_VAR_INIT) KeBRDR_e_BPCMLIN_LOC_D
    = CeBPCR_e_LIN_BusOff_Disabled;    /* Referenced by: '<S1255>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(TeBPCR_e_LOC_BatClntHtr, BRDR_VAR_INIT)
    KeBRDR_e_BattHtr_LOC_D = CeBPCR_e_LOC_BatClntHtr_False;/* Referenced by: '<S1256>/Calib' */

#endif

static volatile CONST(TeBRDR_e_BatCltLvlLo, BRDR_VAR_INIT)
    KeBRDR_e_HV_Bat_CltLvlLo_D = CeBRDR_e_BatCltLvlNotLo;/* Referenced by: '<S1288>/Calib' */

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(TePMPR_e_FTSNA, BRDR_VAR_INIT) KeBRDR_e_LTAPDryRun_Dry =
    CePMPR_e_FTSNA_True;               /* Referenced by: '<S1115>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(TeBPCR_e_LOC_BCP, BRDR_VAR_INIT) KeBRDR_e_LTAP_LOC_D =
    CeBPCR_e_LOC_BCP_False;            /* Referenced by: '<S1257>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static volatile CONST(sint8, BRDR_VAR_INIT) KeBRDR_i_HeaterPerf_ApprchSel = 1;/* Referenced by: '<S864>/Calib' */

#endif

static volatile CONST(sint8, BRDR_VAR_INIT) KeBRDR_i_Temp1_2_ThSel = 2;/* Referenced by: '<S517>/Calib' */
static volatile CONST(sint8, BRDR_VAR_INIT) KeBRDR_i_Temp1_3_ThSel = 3;/* Referenced by: '<S518>/Calib' */
static volatile CONST(sint8, BRDR_VAR_INIT) KeBRDR_i_Temp1_4_ThSel = 2;/* Referenced by: '<S519>/Calib' */
static volatile CONST(sint8, BRDR_VAR_INIT) KeBRDR_i_Temp1_5_ThSel = 3;/* Referenced by: '<S520>/Calib' */
static volatile CONST(sint8, BRDR_VAR_INIT) KeBRDR_i_Temp2_3_ThSel = 1;/* Referenced by: '<S521>/Calib' */
static volatile CONST(sint8, BRDR_VAR_INIT) KeBRDR_i_Temp2_4_ThSel = 1;/* Referenced by: '<S522>/Calib' */
static volatile CONST(sint8, BRDR_VAR_INIT) KeBRDR_i_Temp2_5_ThSel = 3;/* Referenced by: '<S523>/Calib' */
static volatile CONST(sint8, BRDR_VAR_INIT) KeBRDR_i_Temp3_4_ThSel = 1;/* Referenced by: '<S524>/Calib' */
static volatile CONST(sint8, BRDR_VAR_INIT) KeBRDR_i_Temp3_5_ThSel = 3;/* Referenced by: '<S525>/Calib' */
static volatile CONST(sint8, BRDR_VAR_INIT) KeBRDR_i_Temp4_5_ThSel = 3;/* Referenced by: '<S526>/Calib' */

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_n_CompSpdTh_CoolPerfDiag =
    1000.0F;                           /* Referenced by: '<S640>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_n_MinDiag_LTAP_RPM = 100.0F;/* Referenced by: '<S366>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_n_Min_LTAPRPM_PsvCool =
    100.0F;                            /* Referenced by: '<S812>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_n_PmpRPM_HeatingFlt =
    2500.0F;                           /* Referenced by: '<S992>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_phi_EstRollAngleAtZeroSpd_D
    = 0.0F;                            /* Referenced by: '<S1258>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(float32, BRDR_VAR_INIT)
    KeBRDR_phi_EstRollAngleAtZeroSpd_Lim = 3.0F;/* Referenced by: '<S1121>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_phi_EstSlopeAngle_D = 0.0F;/* Referenced by: '<S1259>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_phi_EstSlopeAngle_Lim =
    10.0F;                             /* Referenced by: '<S1122>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_28

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_BHOS_FA_DbncTime = 3.0F;/* Referenced by: '<S434>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_28

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_BTIS2_FA_DbncTime = 3.0F;/* Referenced by: '<S465>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_12

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_BTIS_FA_DbncTime = 3.0F;/* Referenced by: '<S454>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_28

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_BTOS2_FA_DbncTime = 3.0F;/* Referenced by: '<S488>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_6

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_BTOS_FA_DbncTime = 3.0F;/* Referenced by: '<S477>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT)
    KeBRDR_t_BattErrTh_BTISCooling_Dbnc = 10.0F;/* Referenced by: '<S602>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_BattErrTh_Heating_Dbnc =
    10.0F;                             /* Referenced by: '<S963>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_CoolingDelay_Tm = 120.0F;/* Referenced by: '<S603>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_HeatingDelay_Tm = 120.0F;/* Referenced by: '<S940>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_HeatingFlt_LTAPOnTm =
    120.0F;                            /* Referenced by: '<S993>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_HtPrfmncDly_Tm = 300.0F;/* Referenced by: '<S964>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_LTAPOnTm_ClntSnsrFlt =
    900.0F;                            /* Referenced by: '<S1220>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_8

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_LTAP_FA_DbncTime = 3.0F;/* Referenced by: '<S500>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_MinDiag_LTAPOnTime = 1.0F;/* Referenced by: '<S367>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_Min_LTAPOn_PsvCool = 5.0F;/* Referenced by: '<S813>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_OC_LoLvCltDet_DebTime =
    0.0F;                              /* Referenced by: '<S1139>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_PsvCoolDly_Tm = 120.0F;/* Referenced by: '<S826>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_RMSCurrent = 10.0F;/* Referenced by: '<S694>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(sint8, BRDR_VAR_INIT) KeBRDR_t_RMS_Sample = 50;
                                  /* Referenced by: '<S695>/Stateflow Chart1' */

#endif

#if !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_SG_LoLvCltDet_DebTime =
    1.0F;                              /* Referenced by: '<S1140>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_t_VehSpd_DebouTime = 0.0F;/* Referenced by: '<S1126>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15

static volatile CONST(uint32, BRDR_VAR_INIT) KeBRDR_t_VehicleSoakTime = 21600U;/* Referenced by: '<S402>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_4

static volatile CONST(uint32, BRDR_VAR_INIT) KeBRDR_tmn_VehicleSoakTime = 10U;/* Referenced by: '<S394>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_v_VehicleSpd_D = 0.0F;/* Referenced by: '<S1260>/Calib' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(float32, BRDR_VAR_INIT) KeBRDR_v_VehicleStationary_Lim =
    5.0F;                              /* Referenced by: '<S1127>/Calib' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KtBRDR_T_BTISDelta_CoolPerfTh[8] =
{
    35.0F, 35.0F, 35.0F, 35.0F, 35.0F, 35.0F, 35.0F, 35.0F
} ;                                    /* Referenced by: '<S720>/Vector' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KtBRDR_T_BTOSDelta_CoolPerfTh[8] =
{
    35.0F, 35.0F, 35.0F, 35.0F, 35.0F, 35.0F, 35.0F, 35.0F
} ;                                    /* Referenced by: '<S721>/Vector' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KtBRDR_T_CellTempMin_Heatthresh[6]
    =
{
    3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F
} ;                                    /* Referenced by: '<S1036>/Vector' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KtBRDR_T_ChillPerfTemp_BTIS[7] =
{
    3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F
} ;                                    /* Referenced by: '<S712>/Vector' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(float32, BRDR_VAR_INIT) KtBRDR_phi_VehPitchRoll_NrmlzEnb[9]
    =
{
    0.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F
} ;                                    /* Referenced by: '<S1123>/Vector' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KxBRDR_T_BTISDelta_CoolPerfTh[8] =
{
    0.001F, 5.0F, 10.0F, 20.0F, 30.0F, 40.0F, 45.0F, 50.0F
} ;                                    /* Referenced by: '<S720>/Vector' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KxBRDR_T_BTOSDelta_CoolPerfTh[8] =
{
    0.001F, 5.0F, 10.0F, 20.0F, 30.0F, 40.0F, 45.0F, 50.0F
} ;                                    /* Referenced by: '<S721>/Vector' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static volatile CONST(float32, BRDR_VAR_INIT) KxBRDR_T_CellTempMin_Heatthresh[6]
    =
{
    -25.0F, -20.0F, -15.0F, -10.0F, 0.0F, 5.0F
} ;                                    /* Referenced by: '<S1036>/Vector' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static volatile CONST(float32, BRDR_VAR_INIT) KxBRDR_T_ChillPerfTemp_BTIS[7] =
{
    0.0F, 15.0F, 25.0F, 30.0F, 40.0F, 45.0F, 55.0F
} ;                                    /* Referenced by: '<S712>/Vector' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(float32, BRDR_VAR_INIT) KxBRDR_phi_VehPitchRoll_NrmlzEnb[3]
    =
{
    0.001F, 3.0F, 6.0F
} ;                                    /* Referenced by: '<S1123>/Vector' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static volatile CONST(float32, BRDR_VAR_INIT) KyBRDR_phi_VehPitchRoll_NrmlzEnb[3]
    =
{
    0.001F, 3.0F, 6.0F
} ;                                    /* Referenced by: '<S1123>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_BRDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BRDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_BRDR_24

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_BatCltLvlSnsCkt_FailCnt;/* '<S1193>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_24

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_BatCltLvlSnsCkt_SmpCnt;/* '<S1194>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_BattHeatPerf_FailCnt;/* '<S1054>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_BattHeatPerf_SmplCnt;/* '<S1055>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_ChillPerfFailCnt;/* '<S590>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_ChillPerfSmplCnt;/* '<S591>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_HVBatCltLvLo_FailCnt;/* '<S1168>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_HVBatCltLvLo_SmpCnt;/* '<S1169>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_28

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_HV_BHOS_FailCnt;/* '<S105>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_28

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_HV_BHOS_SmpCnt;/* '<S106>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_31

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_HV_BTIS2_FailCnt;/* '<S129>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_31

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_HV_BTIS2_SmpCnt;/* '<S130>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_12

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_HV_BTIS_FailCnt;/* '<S153>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_12

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_HV_BTIS_SmpCnt;/* '<S154>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_34

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_HV_BTOS2_FailCnt;/* '<S296>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_34

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_HV_BTOS2_SmpCnt;/* '<S297>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_6

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_HV_BTOS_FailCnt;/* '<S320>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_6

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_HV_BTOS_SmpCnt;/* '<S321>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_8

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_LTAP_FailCnt;/* '<S551>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_8

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_LTAP_SmpCnt;/* '<S552>/Switch1' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_PsvCoolPerf_FailCnt;/* '<S847>/Switch1' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static VAR(uint16, BRDR_VAR_INIT) VeBRDR_Cnt_PsvCoolPerf_SmplCnt;/* '<S848>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static VAR(float32, BRDR_VAR_INIT) VeBRDR_I_RMS_BattCurr;/* '<S695>/Stateflow Chart1' */

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21)

static VAR(float32, BRDR_VAR_INIT) VeBRDR_P_HtrPower;/* '<S1061>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(float32, BRDR_VAR_INIT) VeBRDR_Pct_HT_CabVlvSts_AD;/* '<S5>/Switch2' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static VAR(float32, BRDR_VAR_INIT) VeBRDR_T_BTISDelta_Actv;/* '<S701>/Add1' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static VAR(float32, BRDR_VAR_INIT) VeBRDR_T_BTISDelta_CoolPrfmnc_Actv;/* '<S700>/Sum3' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static VAR(float32, BRDR_VAR_INIT) VeBRDR_T_BTISDelta_Psv;/* '<S770>/Sum1' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static VAR(float32, BRDR_VAR_INIT) VeBRDR_T_BTISErr;/* '<S1025>/Sum1' */

#endif

#if Rte_SysCon_Variant_BRDR_5

static VAR(float32, BRDR_VAR_INIT) VeBRDR_T_BTIS_BTOS_Abs_BTIS_Fault;/* '<S339>/Abs' */

#endif

#if Rte_SysCon_Variant_BRDR_5

static VAR(float32, BRDR_VAR_INIT) VeBRDR_T_BTIS_BTOS_Abs_BTOS_Fault;/* '<S345>/Abs' */

#endif

#if Rte_SysCon_Variant_BRDR_5

static VAR(float32, BRDR_VAR_INIT) VeBRDR_T_BTIS_BatModTemp_Abs;/* '<S339>/Abs1' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static VAR(float32, BRDR_VAR_INIT) VeBRDR_T_BTOSDelta_CoolPrfmnc_Actv;/* '<S700>/Sum4' */

#endif

#if Rte_SysCon_Variant_BRDR_5

static VAR(float32, BRDR_VAR_INIT) VeBRDR_T_BTOS_BatModTemp_Abs;/* '<S345>/Abs1' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static VAR(float32, BRDR_VAR_INIT) VeBRDR_T_CellTempMin_Delta;/* '<S1026>/Sum2' */

#endif

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BHOSFlt_Sym;/* '<S331>/Logical Operator' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BHOSTmpFA_Enbl;/* '<S421>/Gain' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BHOSTmpRat_Enbl;/* '<S422>/Gain' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BHOS_Perf_IUMPR;/* synthesized block */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BHOS_TmpDiagEnbl;/* '<S327>/Logical Operator3' */

#if Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BPCM_LINBusOff_ClntLow;/* '<S1091>/Logical5' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(TeBPCR_e_LIN_BusOff, BRDR_VAR_INIT) VeBRDR_b_BPCM_LIN_LOC;/* '<S5>/Switch9' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BPCM_LIN_LOC_FA;/* '<S5>/Switch13' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 || Rte_SysCon_Variant_BRDR_15 || (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_23 || Rte_SysCon_Variant_BRDR_4

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BPCM_NoCommErr;/* synthesized block */

#endif

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTIS2Flt_Sym;/* '<S333>/Logical Operator' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTIS2TmpFA_Enbl;/* '<S423>/Gain' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTIS2TmpRat_Enbl;/* '<S424>/Gain' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTIS2_TmpDiagEnbl;/* '<S327>/Logical Operator5' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTISFlt_Sym;
                               /* '<S332>/SigConvForSigProp_Variant_Source_0' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTISTmpFA_Enbl;/* '<S413>/Gain' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTISTmpRat_Enbl;/* '<S414>/Gain' */

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTIS_CoolPerfSymp;/* '<S770>/Logical2' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTIS_CoolPerfThSet_Actv;/* '<S700>/Comparison3' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTIS_CoolPerfThSet_Psv;/* '<S770>/Comparison2' */

#endif

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTIS_Perf_IUMPR;/* synthesized block */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTIS_TmpDiagEnbl;/* '<S327>/Logical Operator9' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTOS2Flt_Sym;/* '<S335>/Logical Operator' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTOS2TmpFA_Enbl;/* '<S415>/Gain' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTOS2TmpRat_Enbl;/* '<S416>/Gain' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTOS2_TmpDiagEnbl;/* '<S327>/Logical Operator7' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTOSFlt_Sym;
                               /* '<S334>/SigConvForSigProp_Variant_Source_0' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTOSTmpFA_Enbl;/* '<S419>/Gain' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTOSTmpRat_Enbl;/* '<S420>/Gain' */

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTOS_CoolPerfThSet_Actv;/* '<S700>/Comparison4' */

#endif

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTOS_Perf_IUMPR;/* synthesized block */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BTOS_TmpDiagEnbl;/* '<S327>/Logical Operator11' */

#if Rte_SysCon_Variant_BRDR_24

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BatCltLvlSnsCkt_FltDtct;/* '<S1184>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BattHtr_ClntTempOut_FA;/* '<S5>/Switch15' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(TeBPCR_e_LOC_BatClntHtr, BRDR_VAR_INIT) VeBRDR_b_BattHtr_LOC;/* '<S5>/Switch12' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_BattHtr_LOC_FA;/* '<S5>/Switch11' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_CellTempMin_ThrshChk;/* '<S1026>/Comparison4' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_ChillPerf;/* '<S699>/Comparison4' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_ChillPerfDiagChk;
                              /* '<S575>/SigConvForSigProp_Variant_Source9_0' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_ChillPerfDiagEnbl;/* '<S604>/Greater  Than2' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_ChillPerfDiagEnblPre;
                         /* '<S574>/SigConvForSigProp_ArchitectureSelector_0' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_ChillPerfSympSet;/* '<S699>/Logical16' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_ChillPerf_FltDtct;/* '<S581>/Relational Operator' */

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_ChillerPerf;/* '<S699>/Logical5' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_DsblDiagFailSafe;/* '<S5>/Switch' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD;/* '<S5>/Switch8' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_EstSlopeAngle_FA;/* '<S5>/Switch4' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HVBatCltLvLo_DiagEnbl;
                             /* '<S1098>/SigConvForSigProp_Variant_Source9_0' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HVBatCltLvLo_FltDtct;/* '<S1159>/Relational Operator' */

#endif

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HV_BHOS_FltDtct_BD;/* synthesized block */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HV_BTIS2_FltDtct_BD;/* synthesized block */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HV_BTIS_FltDtct_BD;/* synthesized block */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HV_BTOS2_FltDtct_BD;/* synthesized block */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HV_BTOS_FltDtct_BD;/* synthesized block */

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HeatPerfSym;/* '<S1026>/Logical2' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HeatPerf_FltDtct;/* '<S1045>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HeaterPerfDiag1Chk;
                              /* '<S866>/SigConvForSigProp_Variant_Source9_0' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HeaterPerfDiag1Enbl;/* '<S870>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HeaterPerfDiag1EnblPre;/* '<S865>/Logical' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HeaterPerfDiag_DiffChk;/* '<S942>/Switch2' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HeatingPerfDiagEnbl;/* '<S965>/Greater  Than2' */

#endif

#if Rte_SysCon_Variant_BRDR_21

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_HeatingPerfEnbl;
                              /* '<S958>/SigConvForSigProp_Variant_Source9_0' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_Htr3PwrLim_Chk;/* '<S1026>/Comparison1' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_IsDiagGlobalConditionsValid;/* '<S5>/Switch18' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAPDryRunFA_ClntLow;/* '<S1091>/Logical13' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAPDryRun_ClntLow;/* '<S1091>/Logical4' */

#endif

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAPFlt_Sym;/* '<S336>/Logical Operator' */

#if Rte_SysCon_Variant_BRDR_1

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAPFunPerFltDtct_AD;/* '<S5>/Switch16' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAPPerf_ClntLow;/* '<S1091>/Logical7' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAPRqt_LoLv_DiagLtch;/* '<S1221>/OR1' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAPRqt_LoLv_DiagRst;/* '<S1200>/AND' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAPRqt_LoLv_Diag_Dbnc;/* '<S1091>/Comparison1' */

#endif

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAPTmpFA_Enbl;/* '<S417>/Gain' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAPTmpRat_Enbl;/* '<S418>/Gain' */

#if Rte_SysCon_Variant_BRDR_1

static VAR(TeBPCR_e_LOC_BCP, BRDR_VAR_INIT) VeBRDR_b_LTAP_LOC;/* '<S5>/Switch10' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAP_LOC_ClntLow;/* '<S1091>/Logical26' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAP_LOC_FA;/* '<S5>/Switch14' */

#endif

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAP_Perf_IUMPR;/* synthesized block */

#if Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAP_Rqt_ClntLo;/* '<S1091>/Logical' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAP_Rqt_LoLv_DiagFin;/* '<S1091>/Logical10' */

#endif

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD;
                               /* '<S11>/SigConvForSigProp_Variant_Source2_0' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAP_TmpDiagEnbl;/* '<S327>/Logical Operator1' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LTAP_TmpFltDtct_BD;/* synthesized block */

#if !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_LoLvSG_LatchdImpct_delyd;/* '<S1148>/Gain' */

#endif

#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_MinCellPerfTempChk_AD;/* '<S942>/Switch' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_PostCodeClrDiagDsbl;/* '<S5>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_PsvCoolDiagEnbl;/* '<S566>/AND' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_PsvCoolDiagEnblPre;/* '<S769>/Logical' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_PsvCoolPerf_FltDtct;/* '<S838>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_RMSCurrent_EnblChk;/* '<S689>/Logical10' */

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_RMS_BattCurrEnbl;/* '<S689>/Comparison1' */

#endif

#if Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_23 || Rte_SysCon_Variant_BRDR_24 || Rte_SysCon_Variant_BRDR_28 || Rte_SysCon_Variant_BRDR_31 || Rte_SysCon_Variant_BRDR_34 || Rte_SysCon_Variant_BRDR_6 || Rte_SysCon_Variant_BRDR_8

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_ResetCnts;/* '<S14>/Gain' */

#endif

#if Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_23 || Rte_SysCon_Variant_BRDR_24 || Rte_SysCon_Variant_BRDR_28 || Rte_SysCon_Variant_BRDR_31 || Rte_SysCon_Variant_BRDR_34 || Rte_SysCon_Variant_BRDR_6 || Rte_SysCon_Variant_BRDR_8

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_ResetFOMs;/* '<S15>/Gain' */

#endif

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_S1_Rat_DTC_Enbl;/* '<S515>/Relational Operator5' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_S1_Rat_Flt;/* '<S515>/Relational Operator4' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_S2_Rat_DTC_Enbl;/* '<S515>/Relational Operator11' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_S2_Rat_Flt;/* '<S515>/Relational Operator10' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_S3_Rat_DTC_Enbl;/* '<S515>/Relational Operator13' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_S3_Rat_Flt;/* '<S515>/Relational Operator12' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_S4_Rat_DTC_Enbl;/* '<S515>/Relational Operator19' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_S4_Rat_Flt;/* '<S515>/Relational Operator18' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_S5_Rat_DTC_Enbl;/* '<S515>/Relational Operator25' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_S5_Rat_Flt;/* '<S515>/Relational Operator24' */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_TempRat_ComEnbl[4];/* synthesized block */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_TempRat_PerfEnbl;/* synthesized block */
static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_TempRat_PerfEnbl;/* synthesized block */

#if Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_ThrmSysEnbl_ClntLow;/* '<S1091>/AND2' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_VehSpd_FA;/* '<S5>/Switch3' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static VAR(boolean, BRDR_VAR_INIT) VeBRDR_b_Veh_Speed_Chk_delyd;/* '<S1132>/Gain' */

#endif

static VAR(TeBRDR_e_BatCltLvlLo, BRDR_VAR_INIT) VeBRDR_e_HV_Bat_CltLvlLo_BD;/* synthesized block */
static VAR(uint8, BRDR_VAR_INIT) VeBRDR_i_SnsrSel;/* '<S330>/Sensor_Selection' */

#if Rte_SysCon_Variant_BRDR_1

static VAR(float32, BRDR_VAR_INIT) VeBRDR_phi_EstRollAngleAtZeroSpd;/* '<S5>/Switch7' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static VAR(float32, BRDR_VAR_INIT) VeBRDR_phi_EstRollAngleAtZeroSpd_Abs;/* '<S1111>/Abs1' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(float32, BRDR_VAR_INIT) VeBRDR_phi_EstSlopeAngle;/* '<S5>/Switch6' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static VAR(float32, BRDR_VAR_INIT) VeBRDR_phi_EstSlopeAngle_Abs;/* '<S1111>/Abs' */

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

static VAR(float32, BRDR_VAR_INIT) VeBRDR_phi_VehPitchRoll_NrmlzEnb;/* '<S1123>/Vector' */

#endif

#if Rte_SysCon_Variant_BRDR_23

static VAR(float32, BRDR_VAR_INIT) VeBRDR_t_LTAPRqt_LoLv_DiagTm;/* '<S1222>/Switch1' */

#endif

#if Rte_SysCon_Variant_BRDR_1

static VAR(float32, BRDR_VAR_INIT) VeBRDR_v_VehSpd;/* '<S5>/Switch5' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BRDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_BRDR
#include "MemMap.h"

CONST(ConstB_BRDR_ac_T, BRDR_VAR_INIT) BRDR_ac_ConstB =
{
    CeDFIB_e_Init,                     /* '<S1315>/Constant' */
    CeDFIB_e_Init,                     /* '<S1316>/Constant' */
    CeDFIB_e_Init,                     /* '<S1317>/Constant' */
    CeDFIB_e_Init,                     /* '<S1318>/Constant' */
    CeDFIB_e_Init,                     /* '<S1319>/Constant' */
    CeDFIB_e_Init,                     /* '<S1320>/Constant' */
    CeDFIB_e_Init,                     /* '<S1321>/Constant' */
    CeDFIB_e_Init,                     /* '<S1322>/Constant' */
    CeDFIB_e_Init,                     /* '<S1323>/Constant' */
    CeDFIB_e_Init,                     /* '<S1324>/Constant' */
    CeBRDR_e_BatCltLvlNotLo            /* '<S1314>/Const10' */
};

#define STOP_SEC_CONST_UNSPECIFIED_BRDR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_BRDR
#include "MemMap.h"

CONST(ConstP_BRDR_ac_T, BRDR_VAR_INIT) BRDR_ac_ConstP =
{

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S1123>/Vector'
     */
    {
        2U, 2U
    },

#endif

#ifndef CONSTP_BRDR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_BRDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BRDR
#include "MemMap.h"

VAR(B_BRDR_ac_T, BRDR_VAR_INIT) BRDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BRDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BRDR
#include "MemMap.h"

VAR(DW_BRDR_ac_T, BRDR_VAR_INIT) BRDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BRDR
#include "MemMap.h"
#if Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_23 || Rte_SysCon_Variant_BRDR_24 || Rte_SysCon_Variant_BRDR_28 || Rte_SysCon_Variant_BRDR_31 || Rte_SysCon_Variant_BRDR_34 || Rte_SysCon_Variant_BRDR_6 || Rte_SysCon_Variant_BRDR_8

static FUNC(void, BRDR_CODE_LOCAL) BRDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BRDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_23 || Rte_SysCon_Variant_BRDR_24 || Rte_SysCon_Variant_BRDR_28 || Rte_SysCon_Variant_BRDR_31 || Rte_SysCon_Variant_BRDR_34 || Rte_SysCon_Variant_BRDR_6 || Rte_SysCon_Variant_BRDR_8

static FUNC(void, BRDR_CODE_LOCAL) BRDR_ac_Init_e(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BRDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_23 || Rte_SysCon_Variant_BRDR_24 || Rte_SysCon_Variant_BRDR_28 || Rte_SysCon_Variant_BRDR_31 || Rte_SysCon_Variant_BRDR_34 || Rte_SysCon_Variant_BRDR_6 || Rte_SysCon_Variant_BRDR_8

static FUNC(void, BRDR_CODE_LOCAL) BRDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BRDR_VAR_INIT)
    rty_FaultSts);

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19)

static FUNC(void, BRDR_CODE_LOCAL) BRDR_ac_BatClntTmpInLatch(VAR(boolean,
    AUTOMATIC) rtu_Enable, VAR(float32, AUTOMATIC) rtu_VeTRIR_T_HV_BatClntTmp_In,
    P2VAR(B_BatClntTmpInLatch_BRDR_ac_T, AUTOMATIC, BRDR_VAR_INIT) localB);

#endif

#if (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21)

static FUNC(void, BRDR_CODE_LOCAL) BRDR_ac_BTIS_Set(VAR(boolean, AUTOMATIC)
    rtu_Enable, VAR(float32, AUTOMATIC) rtu_In1, P2VAR(B_BTIS_Set_BRDR_ac_T,
    AUTOMATIC, BRDR_VAR_INIT) localB);

#endif

static FUNC(void, BRDR_CODE_LOCAL) BRDR_ac_SnsrRat_V02(void);

/*
 * Output and update for enable system:
 *    '<S96>/Fail'
 *    '<S120>/Fail'
 *    '<S144>/Fail'
 *    '<S287>/Fail'
 *    '<S311>/Fail'
 *    '<S542>/Fail'
 *    '<S581>/Fail'
 *    '<S838>/Fail'
 *    '<S1045>/Fail'
 *    '<S1159>/Fail'
 *    '<S1184>/Fail'
 */
#if Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_23 || Rte_SysCon_Variant_BRDR_24 || Rte_SysCon_Variant_BRDR_28 || Rte_SysCon_Variant_BRDR_31 || Rte_SysCon_Variant_BRDR_34 || Rte_SysCon_Variant_BRDR_6 || Rte_SysCon_Variant_BRDR_8

static FUNC(void, BRDR_CODE_LOCAL) BRDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BRDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S96>/Fail' incorporates:
     *  EnablePort: '<S101>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S101>/FaultSts' incorporates:
         *  Constant: '<S107>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S96>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S96>/Init'
 *    '<S120>/Init'
 *    '<S144>/Init'
 *    '<S287>/Init'
 *    '<S311>/Init'
 *    '<S542>/Init'
 *    '<S581>/Init'
 *    '<S838>/Init'
 *    '<S1045>/Init'
 *    '<S1159>/Init'
 *    '<S1184>/Init'
 */
#if Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_23 || Rte_SysCon_Variant_BRDR_24 || Rte_SysCon_Variant_BRDR_28 || Rte_SysCon_Variant_BRDR_31 || Rte_SysCon_Variant_BRDR_34 || Rte_SysCon_Variant_BRDR_6 || Rte_SysCon_Variant_BRDR_8

static FUNC(void, BRDR_CODE_LOCAL) BRDR_ac_Init_e(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BRDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S96>/Init' incorporates:
     *  EnablePort: '<S102>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S102>/FaultSts' incorporates:
         *  Constant: '<S108>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S96>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S96>/Pass'
 *    '<S120>/Pass'
 *    '<S144>/Pass'
 *    '<S287>/Pass'
 *    '<S311>/Pass'
 *    '<S542>/Pass'
 *    '<S581>/Pass'
 *    '<S838>/Pass'
 *    '<S1045>/Pass'
 *    '<S1159>/Pass'
 *    '<S1184>/Pass'
 */
#if Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_23 || Rte_SysCon_Variant_BRDR_24 || Rte_SysCon_Variant_BRDR_28 || Rte_SysCon_Variant_BRDR_31 || Rte_SysCon_Variant_BRDR_34 || Rte_SysCon_Variant_BRDR_6 || Rte_SysCon_Variant_BRDR_8

static FUNC(void, BRDR_CODE_LOCAL) BRDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BRDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S96>/Pass' incorporates:
     *  EnablePort: '<S103>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S103>/FaultSts' incorporates:
         *  Constant: '<S109>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S96>/Pass' */
}

#endif

/* Output and update for atomic system: '<S330>/SnsrRat_V02' */
static FUNC(void, BRDR_CODE_LOCAL) BRDR_ac_SnsrRat_V02(void)
{
    uint32 VeBRDR_b_S3_Rat_DTC_Enbl_tmp;

    /* RelationalOperator: '<S515>/Relational Operator10' incorporates:
     *  Abs: '<S515>/Abs4'
     *  Abs: '<S515>/Abs5'
     *  Abs: '<S515>/Abs6'
     *  Abs: '<S515>/Abs7'
     *  Constant: '<S533>/Calib'
     *  Logic: '<S515>/Logical Operator10'
     *  Logic: '<S515>/Logical Operator11'
     *  Logic: '<S515>/Logical Operator8'
     *  Logic: '<S515>/Logical Operator9'
     *  RelationalOperator: '<S515>/Relational Operator6'
     *  RelationalOperator: '<S515>/Relational Operator7'
     *  RelationalOperator: '<S515>/Relational Operator8'
     *  RelationalOperator: '<S515>/Relational Operator9'
     *  Sum: '<S515>/Subtract2'
     *  Sum: '<S515>/Sum4'
     *  Sum: '<S515>/Sum5'
     *  Sum: '<S515>/Sum6'
     *  Sum: '<S515>/Sum7'
     */
    VeBRDR_b_S2_Rat_Flt = (((sint32)((uint32)(((((uint32)(((fabsf
        (BRDR_ac_B.T_Sensor2_Temp - BRDR_ac_B.T_Sensor1_Temp) >=
        BRDR_ac_B.Selector1[0]) && (BRDR_ac_B.b_Sensor1_Enbl)) ? 1 : 0)) +
        ((uint32)(((fabsf(BRDR_ac_B.T_Sensor2_Temp - BRDR_ac_B.T_Sensor3_Temp) >=
                    BRDR_ac_B.Selector1[4]) && (BRDR_ac_B.b_Sensor3_Enbl)) ? 1 :
                  0))) + ((uint32)(((fabsf(BRDR_ac_B.T_Sensor2_Temp -
        BRDR_ac_B.T_Sensor4_Temp) >= BRDR_ac_B.Selector1[5]) &&
        (BRDR_ac_B.b_Sensor4_Enbl)) ? 1 : 0))) + ((uint32)(((fabsf
        (BRDR_ac_B.T_Sensor2_Temp - BRDR_ac_B.T_Sensor5_Temp) >=
        BRDR_ac_B.Selector1[6]) && (BRDR_ac_B.b_Sensor5_Enbl)) ? 1 : 0))))) >=
                           ((sint32)KeBRDR_Cnt_TmpRatThrsld));

    /* RelationalOperator: '<S515>/Relational Operator11' incorporates:
     *  Constant: '<S533>/Calib'
     *  DataTypeConversion: '<S515>/Data Type Conversion28'
     *  DataTypeConversion: '<S515>/Data Type Conversion29'
     *  DataTypeConversion: '<S515>/Data Type Conversion30'
     *  DataTypeConversion: '<S515>/Data Type Conversion31'
     *  Sum: '<S515>/Subtract3'
     */
    VeBRDR_b_S2_Rat_DTC_Enbl = (((sint32)((uint32)(((((uint32)
        (BRDR_ac_B.b_Sensor1_Enbl ? 1U : 0U)) + (BRDR_ac_B.b_Sensor3_Enbl ? 1U :
        0U)) + (BRDR_ac_B.b_Sensor4_Enbl ? 1U : 0U)) + (BRDR_ac_B.b_Sensor5_Enbl
        ? 1U : 0U)))) >= ((sint32)KeBRDR_Cnt_TmpRatThrsld));

    /* RelationalOperator: '<S515>/Relational Operator12' incorporates:
     *  Abs: '<S515>/Abs10'
     *  Abs: '<S515>/Abs11'
     *  Abs: '<S515>/Abs8'
     *  Abs: '<S515>/Abs9'
     *  Constant: '<S533>/Calib'
     *  Logic: '<S515>/Logical Operator16'
     *  Logic: '<S515>/Logical Operator17'
     *  Logic: '<S515>/Logical Operator22'
     *  Logic: '<S515>/Logical Operator23'
     *  RelationalOperator: '<S515>/Relational Operator14'
     *  RelationalOperator: '<S515>/Relational Operator15'
     *  RelationalOperator: '<S515>/Relational Operator16'
     *  RelationalOperator: '<S515>/Relational Operator17'
     *  Sum: '<S515>/Subtract4'
     *  Sum: '<S515>/Sum10'
     *  Sum: '<S515>/Sum11'
     *  Sum: '<S515>/Sum8'
     *  Sum: '<S515>/Sum9'
     */
    VeBRDR_b_S3_Rat_Flt = (((sint32)((uint32)(((((uint32)(((fabsf
        (BRDR_ac_B.T_Sensor3_Temp - BRDR_ac_B.T_Sensor1_Temp) >=
        BRDR_ac_B.Selector1[1]) && (BRDR_ac_B.b_Sensor1_Enbl)) ? 1 : 0)) +
        ((uint32)(((fabsf(BRDR_ac_B.T_Sensor3_Temp - BRDR_ac_B.T_Sensor2_Temp) >=
                    BRDR_ac_B.Selector1[4]) && (BRDR_ac_B.b_Sensor2_Enbl)) ? 1 :
                  0))) + ((uint32)(((fabsf(BRDR_ac_B.T_Sensor3_Temp -
        BRDR_ac_B.T_Sensor4_Temp) >= BRDR_ac_B.Selector1[7]) &&
        (BRDR_ac_B.b_Sensor4_Enbl)) ? 1 : 0))) + ((uint32)(((fabsf
        (BRDR_ac_B.T_Sensor3_Temp - BRDR_ac_B.T_Sensor5_Temp) >=
        BRDR_ac_B.Selector1[8]) && (BRDR_ac_B.b_Sensor5_Enbl)) ? 1 : 0))))) >=
                           ((sint32)KeBRDR_Cnt_TmpRatThrsld));

    /* Sum: '<S515>/Subtract5' incorporates:
     *  DataTypeConversion: '<S515>/Data Type Conversion20'
     *  DataTypeConversion: '<S515>/Data Type Conversion21'
     *  Sum: '<S515>/Subtract7'
     */
    VeBRDR_b_S3_Rat_DTC_Enbl_tmp = ((uint32)(BRDR_ac_B.b_Sensor1_Enbl ? 1U : 0U))
        + (BRDR_ac_B.b_Sensor2_Enbl ? 1U : 0U);

    /* RelationalOperator: '<S515>/Relational Operator13' incorporates:
     *  Constant: '<S533>/Calib'
     *  DataTypeConversion: '<S515>/Data Type Conversion22'
     *  DataTypeConversion: '<S515>/Data Type Conversion23'
     *  Sum: '<S515>/Subtract5'
     */
    VeBRDR_b_S3_Rat_DTC_Enbl = (((sint32)((uint32)((VeBRDR_b_S3_Rat_DTC_Enbl_tmp
        + (BRDR_ac_B.b_Sensor4_Enbl ? 1U : 0U)) + (BRDR_ac_B.b_Sensor5_Enbl ? 1U
        : 0U)))) >= ((sint32)KeBRDR_Cnt_TmpRatThrsld));

    /* RelationalOperator: '<S515>/Relational Operator18' incorporates:
     *  Abs: '<S515>/Abs12'
     *  Abs: '<S515>/Abs13'
     *  Abs: '<S515>/Abs14'
     *  Abs: '<S515>/Abs15'
     *  Constant: '<S533>/Calib'
     *  Logic: '<S515>/Logical Operator24'
     *  Logic: '<S515>/Logical Operator25'
     *  Logic: '<S515>/Logical Operator30'
     *  Logic: '<S515>/Logical Operator31'
     *  RelationalOperator: '<S515>/Relational Operator20'
     *  RelationalOperator: '<S515>/Relational Operator21'
     *  RelationalOperator: '<S515>/Relational Operator22'
     *  RelationalOperator: '<S515>/Relational Operator23'
     *  Sum: '<S515>/Subtract6'
     *  Sum: '<S515>/Sum12'
     *  Sum: '<S515>/Sum13'
     *  Sum: '<S515>/Sum14'
     *  Sum: '<S515>/Sum15'
     */
    VeBRDR_b_S4_Rat_Flt = (((sint32)((uint32)(((((uint32)(((fabsf
        (BRDR_ac_B.T_Sensor4_Temp - BRDR_ac_B.T_Sensor1_Temp) >=
        BRDR_ac_B.Selector1[2]) && (BRDR_ac_B.b_Sensor1_Enbl)) ? 1 : 0)) +
        ((uint32)(((fabsf(BRDR_ac_B.T_Sensor4_Temp - BRDR_ac_B.T_Sensor2_Temp) >=
                    BRDR_ac_B.Selector1[5]) && (BRDR_ac_B.b_Sensor2_Enbl)) ? 1 :
                  0))) + ((uint32)(((fabsf(BRDR_ac_B.T_Sensor4_Temp -
        BRDR_ac_B.T_Sensor3_Temp) >= BRDR_ac_B.Selector1[7]) &&
        (BRDR_ac_B.b_Sensor3_Enbl)) ? 1 : 0))) + ((uint32)(((fabsf
        (BRDR_ac_B.T_Sensor4_Temp - BRDR_ac_B.T_Sensor5_Temp) >=
        BRDR_ac_B.Selector1[9]) && (BRDR_ac_B.b_Sensor5_Enbl)) ? 1 : 0))))) >=
                           ((sint32)KeBRDR_Cnt_TmpRatThrsld));

    /* Sum: '<S515>/Subtract7' incorporates:
     *  DataTypeConversion: '<S515>/Data Type Conversion14'
     *  Sum: '<S515>/Subtract9'
     */
    VeBRDR_b_S3_Rat_DTC_Enbl_tmp += BRDR_ac_B.b_Sensor3_Enbl ? 1U : 0U;

    /* RelationalOperator: '<S515>/Relational Operator19' incorporates:
     *  Constant: '<S533>/Calib'
     *  DataTypeConversion: '<S515>/Data Type Conversion15'
     *  Sum: '<S515>/Subtract7'
     */
    VeBRDR_b_S4_Rat_DTC_Enbl = (((sint32)((uint32)(VeBRDR_b_S3_Rat_DTC_Enbl_tmp
        + (BRDR_ac_B.b_Sensor5_Enbl ? 1U : 0U)))) >= ((sint32)
        KeBRDR_Cnt_TmpRatThrsld));

    /* RelationalOperator: '<S515>/Relational Operator24' incorporates:
     *  Abs: '<S515>/Abs16'
     *  Abs: '<S515>/Abs17'
     *  Abs: '<S515>/Abs18'
     *  Abs: '<S515>/Abs19'
     *  Constant: '<S533>/Calib'
     *  Logic: '<S515>/Logical Operator32'
     *  Logic: '<S515>/Logical Operator33'
     *  Logic: '<S515>/Logical Operator38'
     *  Logic: '<S515>/Logical Operator39'
     *  RelationalOperator: '<S515>/Relational Operator26'
     *  RelationalOperator: '<S515>/Relational Operator27'
     *  RelationalOperator: '<S515>/Relational Operator28'
     *  RelationalOperator: '<S515>/Relational Operator29'
     *  Sum: '<S515>/Subtract8'
     *  Sum: '<S515>/Sum16'
     *  Sum: '<S515>/Sum17'
     *  Sum: '<S515>/Sum18'
     *  Sum: '<S515>/Sum19'
     */
    VeBRDR_b_S5_Rat_Flt = (((sint32)((uint32)(((((uint32)(((fabsf
        (BRDR_ac_B.T_Sensor5_Temp - BRDR_ac_B.T_Sensor1_Temp) >=
        BRDR_ac_B.Selector1[3]) && (BRDR_ac_B.b_Sensor1_Enbl)) ? 1 : 0)) +
        ((uint32)(((fabsf(BRDR_ac_B.T_Sensor5_Temp - BRDR_ac_B.T_Sensor2_Temp) >=
                    BRDR_ac_B.Selector1[6]) && (BRDR_ac_B.b_Sensor2_Enbl)) ? 1 :
                  0))) + ((uint32)(((fabsf(BRDR_ac_B.T_Sensor5_Temp -
        BRDR_ac_B.T_Sensor3_Temp) >= BRDR_ac_B.Selector1[8]) &&
        (BRDR_ac_B.b_Sensor3_Enbl)) ? 1 : 0))) + ((uint32)(((fabsf
        (BRDR_ac_B.T_Sensor5_Temp - BRDR_ac_B.T_Sensor4_Temp) >=
        BRDR_ac_B.Selector1[9]) && (BRDR_ac_B.b_Sensor4_Enbl)) ? 1 : 0))))) >=
                           ((sint32)KeBRDR_Cnt_TmpRatThrsld));

    /* RelationalOperator: '<S515>/Relational Operator25' incorporates:
     *  Constant: '<S533>/Calib'
     *  DataTypeConversion: '<S515>/Data Type Conversion7'
     *  Sum: '<S515>/Subtract9'
     */
    VeBRDR_b_S5_Rat_DTC_Enbl = (((sint32)((uint32)(VeBRDR_b_S3_Rat_DTC_Enbl_tmp
        + (BRDR_ac_B.b_Sensor4_Enbl ? 1U : 0U)))) >= ((sint32)
        KeBRDR_Cnt_TmpRatThrsld));

    /* RelationalOperator: '<S515>/Relational Operator4' incorporates:
     *  Abs: '<S515>/Abs'
     *  Abs: '<S515>/Abs1'
     *  Abs: '<S515>/Abs2'
     *  Abs: '<S515>/Abs3'
     *  Constant: '<S533>/Calib'
     *  Logic: '<S515>/Logical Operator'
     *  Logic: '<S515>/Logical Operator1'
     *  Logic: '<S515>/Logical Operator2'
     *  Logic: '<S515>/Logical Operator3'
     *  RelationalOperator: '<S515>/Relational Operator'
     *  RelationalOperator: '<S515>/Relational Operator1'
     *  RelationalOperator: '<S515>/Relational Operator2'
     *  RelationalOperator: '<S515>/Relational Operator3'
     *  Sum: '<S515>/Subtract'
     *  Sum: '<S515>/Sum'
     *  Sum: '<S515>/Sum1'
     *  Sum: '<S515>/Sum2'
     *  Sum: '<S515>/Sum3'
     */
    VeBRDR_b_S1_Rat_Flt = (((sint32)((uint32)(((((uint32)(((fabsf
        (BRDR_ac_B.T_Sensor1_Temp - BRDR_ac_B.T_Sensor2_Temp) >=
        BRDR_ac_B.Selector1[0]) && (BRDR_ac_B.b_Sensor2_Enbl)) ? 1 : 0)) +
        ((uint32)(((fabsf(BRDR_ac_B.T_Sensor1_Temp - BRDR_ac_B.T_Sensor3_Temp) >=
                    BRDR_ac_B.Selector1[1]) && (BRDR_ac_B.b_Sensor3_Enbl)) ? 1 :
                  0))) + ((uint32)(((fabsf(BRDR_ac_B.T_Sensor1_Temp -
        BRDR_ac_B.T_Sensor4_Temp) >= BRDR_ac_B.Selector1[2]) &&
        (BRDR_ac_B.b_Sensor4_Enbl)) ? 1 : 0))) + ((uint32)(((fabsf
        (BRDR_ac_B.T_Sensor1_Temp - BRDR_ac_B.T_Sensor5_Temp) >=
        BRDR_ac_B.Selector1[3]) && (BRDR_ac_B.b_Sensor5_Enbl)) ? 1 : 0))))) >=
                           ((sint32)KeBRDR_Cnt_TmpRatThrsld));

    /* RelationalOperator: '<S515>/Relational Operator5' incorporates:
     *  Constant: '<S533>/Calib'
     *  DataTypeConversion: '<S515>/Data Type Conversion36'
     *  DataTypeConversion: '<S515>/Data Type Conversion37'
     *  DataTypeConversion: '<S515>/Data Type Conversion38'
     *  DataTypeConversion: '<S515>/Data Type Conversion39'
     *  Sum: '<S515>/Subtract1'
     */
    VeBRDR_b_S1_Rat_DTC_Enbl = (((sint32)((uint32)(((((uint32)
        (BRDR_ac_B.b_Sensor2_Enbl ? 1U : 0U)) + (BRDR_ac_B.b_Sensor3_Enbl ? 1U :
        0U)) + (BRDR_ac_B.b_Sensor4_Enbl ? 1U : 0U)) + (BRDR_ac_B.b_Sensor5_Enbl
        ? 1U : 0U)))) >= ((sint32)KeBRDR_Cnt_TmpRatThrsld));
}

/*
 * Output and update for enable system:
 *    '<S700>/BatClntTmpInLatch'
 *    '<S1025>/BTIS_Set'
 */
#if (!Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19)

static FUNC(void, BRDR_CODE_LOCAL) BRDR_ac_BatClntTmpInLatch(VAR(boolean,
    AUTOMATIC) rtu_Enable, VAR(float32, AUTOMATIC) rtu_VeTRIR_T_HV_BatClntTmp_In,
    P2VAR(B_BatClntTmpInLatch_BRDR_ac_T, AUTOMATIC, BRDR_VAR_INIT) localB)
{
    /* Outputs for Enabled SubSystem: '<S700>/BatClntTmpInLatch' incorporates:
     *  EnablePort: '<S714>/Enable'
     */
    if (rtu_Enable)
    {
        /* Gain: '<S722>/Gain' */
        localB->Gain = rtu_VeTRIR_T_HV_BatClntTmp_In;
    }

    /* End of Outputs for SubSystem: '<S700>/BatClntTmpInLatch' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S770>/BTIS_Set'
 *    '<S1026>/Subsystem1'
 */
#if (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21)

static FUNC(void, BRDR_CODE_LOCAL) BRDR_ac_BTIS_Set(VAR(boolean, AUTOMATIC)
    rtu_Enable, VAR(float32, AUTOMATIC) rtu_In1, P2VAR(B_BTIS_Set_BRDR_ac_T,
    AUTOMATIC, BRDR_VAR_INIT) localB)
{
    /* Outputs for Enabled SubSystem: '<S770>/BTIS_Set' incorporates:
     *  EnablePort: '<S828>/Enable'
     */
    if (rtu_Enable)
    {
        /* Gain: '<S832>/Gain' */
        localB->Gain = rtu_In1;
    }

    /* End of Outputs for SubSystem: '<S770>/BTIS_Set' */
}

#endif

/* Model step function for TID1 */
FUNC(void, BRDR_CODE) BRDR_MedTEH(void) /* Explicit Task: MedTEH */
{
    /* local block i/o variables */
    float32 rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;

#if Rte_SysCon_Variant_BRDR_21

    float32 rtb_TmpSignalConversionAtVeBTRR_T_HV_B_e;

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

    float32 tmpRead;

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

    float32 tmpRead_0;

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4

    boolean tmpRead_1;

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21)

    float32 tmpRead_2;

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4

    boolean tmpRead_3;

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19

    boolean tmpRead_6;

#endif

#if (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

    float32 tmpRead_7;

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4

    boolean tmpRead_8;

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_16 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_17 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_18 && Rte_SysCon_Variant_BRDR_19)

    float32 tmpRead_9;

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_16 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_17 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_18 && Rte_SysCon_Variant_BRDR_19)

    float32 tmpRead_a;

#endif

#if (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_15) || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21

    uint32 tmpRead_b;

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

    float32 tmpRead_c;

#endif

#if Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

    float32 tmpRead_d;

#endif

#if (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_28 && Rte_SysCon_Variant_BRDR_3)

    boolean tmpRead_e;

#endif

#if (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_28 && Rte_SysCon_Variant_BRDR_3)

    boolean tmpRead_f;

#endif

#if (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_28 && Rte_SysCon_Variant_BRDR_3)

    boolean tmpRead_g;

#endif

#if (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_28 && Rte_SysCon_Variant_BRDR_3)

    boolean tmpRead_h;

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_15

    boolean tmpRead_i;

#endif

    boolean rtb_LogicalOperator1_b;
    boolean rtb_VM_Conditional_Signal_BPCM_Comm_0;

#if !Rte_SysCon_Variant_BRDR_3 || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_23 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4)

    boolean rtb_VM_Conditional_Signal_BPCM_Comm_1;

#endif

#if !Rte_SysCon_Variant_BRDR_15 || (!Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_28 || Rte_SysCon_Variant_BRDR_3 || Rte_SysCon_Variant_BRDR_4 || Rte_SysCon_Variant_BRDR_8

    boolean rtb_VariantMerge_For_Variant_Source_Vari;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) && Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || (Rte_SysCon_Variant_BRDR_12 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_19 || (Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21)

    boolean rtb_VariantMerge_For_Variant_Source_V_cw;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) && Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || (Rte_SysCon_Variant_BRDR_12 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_19 || (Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21)

    boolean rtb_VariantMerge_For_Variant_Source_Va_a;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) && Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || Rte_SysCon_Variant_BRDR_21 || (Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_6)

    boolean rtb_VariantMerge_For_Variant_Source_Va_p;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) && Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_6)

    boolean rtb_VariantMerge_For_Variant_Source_V_h3;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) && Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21)

    boolean rtb_VariantMerge_For_Variant_Source_V_os;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) && Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21)

    boolean rtb_VariantMerge_For_Variant_Source_Va_h;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) && Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || Rte_SysCon_Variant_BRDR_21

    boolean rtb_VariantMerge_For_Variant_Source_V_j2;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) && Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21

    boolean rtb_VariantMerge_For_Variant_Source_V_fx;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) && Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || Rte_SysCon_Variant_BRDR_19

    boolean rtb_VariantMerge_For_Variant_Source_V_hw;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) && Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || Rte_SysCon_Variant_BRDR_19

    boolean rtb_VariantMerge_For_Variant_Source_Va_c;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) && Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || Rte_SysCon_Variant_BRDR_19

    boolean rtb_VariantMerge_For_Variant_Source_Va_f;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) && Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8)

    boolean rtb_VariantMerge_For_Variant_Source_Va_o;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) && Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8)

    boolean rtb_VariantMerge_For_Variant_Source_V_dd;

#endif

    boolean rtb_VeBRDR_b_IsDiagGlobalConditionsValid;

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

    boolean rtb_LogicalOperator1;

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

    boolean rtb_LogicalOperator12;

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_3

    float32 rtb_TmpSignalConversionAtVePMIR_n_LTActv;

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

    boolean rtb_RelationalOperator;

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

    boolean rtb_LogicalOperator3;

#endif

#if !(!Rte_SysCon_Variant_BRDR_15) || !(!Rte_SysCon_Variant_BRDR_4) || !Rte_SysCon_Variant_BRDR_1 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4) || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_3

    boolean rtb_VeBRDR_b_LTAPFunPerFltDtct_AD;

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4) || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_3

    boolean rtb_TmpSignalConversionAtVeCPDR_b_LTAP_F;

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

    boolean rtb_LogicalOperator7;

#endif

    boolean rtb_VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD;
    boolean rtb_VeBRDR_b_EstSlopeAngle_FA;

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23) || Rte_SysCon_Variant_BRDR_19

    boolean rtb_LeBRDR_b_ThrmlRlyCtrlCkt;

#endif

#if !(!Rte_SysCon_Variant_BRDR_3) || !Rte_SysCon_Variant_BRDR_1 || !Rte_SysCon_Variant_BRDR_23 || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23)

    boolean rtb_VeBRDR_b_VehSpd_FA;

#endif

#if !(!Rte_SysCon_Variant_BRDR_3) || !Rte_SysCon_Variant_BRDR_1 || !Rte_SysCon_Variant_BRDR_23 || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23)

    float32 rtb_VeBRDR_phi_EstRollAngleAtZeroSpd;

#endif

#if !(!Rte_SysCon_Variant_BRDR_3) || !Rte_SysCon_Variant_BRDR_1 || !Rte_SysCon_Variant_BRDR_23 || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23)

    float32 rtb_VeBRDR_phi_EstSlopeAngle;

#endif

#if !(!Rte_SysCon_Variant_BRDR_3) || !Rte_SysCon_Variant_BRDR_1 || !Rte_SysCon_Variant_BRDR_23 || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23)

    float32 rtb_VeBRDR_v_VehSpd;

#endif

#if (!Rte_SysCon_Variant_BRDR_1 && (!(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_34) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_31) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_24) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_23 || Rte_SysCon_Variant_BRDR_24 || Rte_SysCon_Variant_BRDR_28 || Rte_SysCon_Variant_BRDR_31 || Rte_SysCon_Variant_BRDR_34 || (Rte_SysCon_Variant_BRDR_6 || (!Rte_SysCon_Variant_BRDR_8 && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_34) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_31) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_24) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || Rte_SysCon_Variant_BRDR_8

    boolean rtb_LeBRDR_b_MainRelayOK;

#endif

#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

    boolean rtb_LogicalOperator_ka;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_12 && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_8 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!(!Rte_SysCon_Variant_BRDR_3) && !Rte_SysCon_Variant_BRDR_23 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!(!Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_5) && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_8 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!(!Rte_SysCon_Variant_BRDR_4) && !Rte_SysCon_Variant_BRDR_12 && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_8 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!Rte_SysCon_Variant_BRDR_1 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) || (Rte_SysCon_Variant_BRDR_23 || (!Rte_SysCon_Variant_BRDR_19 && !(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_8 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_21 && !(!Rte_SysCon_Variant_BRDR_5) && !(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12)))

    boolean rtb_VeBRDR_b_BPCM_LIN_LOC_FA;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_12 && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_8 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!(!Rte_SysCon_Variant_BRDR_3) && !Rte_SysCon_Variant_BRDR_23 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!(!Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_5) && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_8 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!(!Rte_SysCon_Variant_BRDR_4) && !Rte_SysCon_Variant_BRDR_12 && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_8 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!Rte_SysCon_Variant_BRDR_1 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) || (Rte_SysCon_Variant_BRDR_23 || (!Rte_SysCon_Variant_BRDR_19 && !(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_8 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_21 && !(!Rte_SysCon_Variant_BRDR_5) && !(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12)))

    boolean rtb_VeBRDR_b_LTAP_LOC_FA;

#endif

#if Rte_SysCon_Variant_BRDR_28

    boolean rtb_LogicalOperator2_b;

#endif

#if !(!Rte_SysCon_Variant_BRDR_3) || !Rte_SysCon_Variant_BRDR_1 || !Rte_SysCon_Variant_BRDR_21 || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_24 || Rte_SysCon_Variant_BRDR_28

    boolean rtb_VeBRDR_b_BattHtr_LOC_FA;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_21) || (!(!Rte_SysCon_Variant_BRDR_3) && !Rte_SysCon_Variant_BRDR_21) || !Rte_SysCon_Variant_BRDR_1 || (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || Rte_SysCon_Variant_BRDR_28

    boolean rtb_VeBRDR_b_BattHtr_ClntTempOut_FA;

#endif

    boolean rtb_LogicalOperator3_d;
    boolean rtb_VariantMergeForOutportNo_LTAP_LOC;

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_8

    boolean rtb_TmpSignalConversionAtVePMIR_b_LTActv;

#endif

    boolean rtb_LogicalOperator2_my;

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_21

    boolean rtb_TmpSignalConversionAtVeTRIR_b_HV_Bat;

#endif

    boolean rtb_LogicalOperator2_ds;

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_6

    boolean rtb_TmpSignalConversionAtVeTRIR_b_HV_B_h;

#endif

    float32 rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j;
    boolean rtb_LogicalOperator2_k2;
    boolean rtb_LogicalOperator3_b4;
    boolean rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e;
    boolean rtb_TmpSignalConversionAtVeTRIR_b_HV_B_k;

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || Rte_SysCon_Variant_BRDR_5

    float32 rtb_Add1_n;

#endif

#if Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_5

    boolean rtb_RelationalOperator_d0;

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_19 || (Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_5)

    float32 rtb_TmpSignalConversionAtVeBTRR_T_HV_Bat;

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_5) || (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

    float32 rtb_TmpSignalConversionAtVeBTRR_T_CellTe;

#endif

#if (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || Rte_SysCon_Variant_BRDR_5 || Rte_SysCon_Variant_BRDR_6 || Rte_SysCon_Variant_BRDR_8

    boolean rtb_RelationalOperator_b;

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_3

    boolean rtb_TmpSignalConversionAtVeTMIR_b_MainRl;

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_23

    boolean rtb_TmpSignalConversionAtVePMTR_b_ThrmlS;

#endif

#if Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21

    boolean rtb_LeBRDR_b_ChillerHeat_RelayOK;

#endif

#if !(!Rte_SysCon_Variant_BRDR_14) || !(!Rte_SysCon_Variant_BRDR_3) || !Rte_SysCon_Variant_BRDR_1 || (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || !Rte_SysCon_Variant_BRDR_21

    float32 rtb_VeBRDR_Pct_HT_CabVlvSts_AD;

#endif

#if Rte_SysCon_Variant_BRDR_23 || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19)

    boolean rtb_TmpSignalConversionAtVePMIR_b_LTAc_a;

#endif

    boolean rtb_AND_ea;
    boolean rtb_AND_el;
    boolean rtb_AND_kc;

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23

    boolean rtb_Comparison2_dw;

#endif

    boolean rtb_AND_cs;

#if !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23

    boolean rtb_TmpSignalConversionAtVeTRIR_b_BatBot;

#endif

#if !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23

    boolean rtb_Logical3_pe;

#endif

#if Rte_SysCon_Variant_BRDR_23

    boolean rtb_VariantMerge_For_Variant_Source_Va_d;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_33) && Rte_SysCon_Variant_BRDR_23) || (Rte_SysCon_Variant_BRDR_23 && Rte_SysCon_Variant_BRDR_33) || Rte_SysCon_Variant_BRDR_24

    float32 rtb_TmpSignalConversionAtVeTRIR_U_BatBot;

#endif

#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_15 || Rte_SysCon_Variant_BRDR_19

    boolean rtb_TmpSignalConversionAtVeBTRR_b_CellTe;

#endif

#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4

    boolean rtb_LogicalOperator2_ct;

#endif

    float32 rtb_TmpSignalConversionAtVeHTIR_T_HVC_Ht;
    float32 rtb_TmpSignalConversionAtVePMIR_T_LTActv;

#if Rte_SysCon_Variant_BRDR_34 || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_12 && Rte_SysCon_Variant_BRDR_5)

    boolean rtb_LogicalOperator_bp;

#endif

#if (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_12 && Rte_SysCon_Variant_BRDR_5) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || Rte_SysCon_Variant_BRDR_34

    boolean rtb_VariantMerge_For_Variant_Source_Va_g;

#endif

#if Rte_SysCon_Variant_BRDR_34 || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6)

    boolean rtb_LogicalOperator_pj;

#endif

#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19) || (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3)

    boolean rtb_Logical2_cs;

#endif

#if Rte_SysCon_Variant_BRDR_19

    boolean rtb_LogicalOperator_ig;

#endif

#if Rte_SysCon_Variant_BRDR_19 || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21)

    float32 rtb_TmpSignalConversionAtVeAATR_T_EstAmb;

#endif

#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

    boolean rtb_Logical_f;

#endif

#if Rte_SysCon_Variant_BRDR_19

    boolean rtb_Switch_a;

#endif

#if Rte_SysCon_Variant_BRDR_19

    boolean rtb_UnitDelay1_g2;

#endif

#if (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

    float32 rtb_TmpSignalConversionAtVeTAIR_Pct_FrWy;

#endif

#if Rte_SysCon_Variant_BRDR_21

    boolean rtb_LogicalOperator4_p;

#endif

#if Rte_SysCon_Variant_BRDR_21

    boolean rtb_Comparison6_h;

#endif

#if Rte_SysCon_Variant_BRDR_24 || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21)

    boolean rtb_LogicalOperator5_d;

#endif

#if Rte_SysCon_Variant_BRDR_21

    boolean rtb_UnitDelay_je;

#endif

#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21

    boolean rtb_Logical;

#endif

#if Rte_SysCon_Variant_BRDR_21

    boolean rtb_UnitDelay1_d;

#endif

#if Rte_SysCon_Variant_BRDR_21

    boolean rtb_VariantMerge_For_Variant_Source_V_hs;

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

    boolean rtb_RelationalOperator3_aw;

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

    boolean rtb_AND_f2;

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

    boolean rtb_OR1_fq;

#endif

#if (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23)

    TePMPR_e_FTSNA rtb_TmpSignalConversionAtVePMIR_e_LTActv;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_3) && !Rte_SysCon_Variant_BRDR_23 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!(!Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_5) && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_8 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!(!Rte_SysCon_Variant_BRDR_4) && !Rte_SysCon_Variant_BRDR_12 && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_8 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!Rte_SysCon_Variant_BRDR_1 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_19 && !(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_8 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_21 && !(!Rte_SysCon_Variant_BRDR_5) && !(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12)) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) || (Rte_SysCon_Variant_BRDR_23 || (!Rte_SysCon_Variant_BRDR_19 && !(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_8 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_12 && !(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12)))

    TeBPCR_e_LIN_BusOff rtb_VeBRDR_b_BPCM_LIN_LOC;

#endif

#if (!(!Rte_SysCon_Variant_BRDR_3) && !Rte_SysCon_Variant_BRDR_23 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!(!Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_5) && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_8 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!(!Rte_SysCon_Variant_BRDR_4) && !Rte_SysCon_Variant_BRDR_12 && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_8 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!Rte_SysCon_Variant_BRDR_1 && (!(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12))) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_19 && !(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_8 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_21 && !(!Rte_SysCon_Variant_BRDR_5) && !(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12)) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) || (Rte_SysCon_Variant_BRDR_23 || (!Rte_SysCon_Variant_BRDR_19 && !(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_8 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_12 && !(!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) && !(Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) && !(!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) && !(!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12)))

    TeBPCR_e_LOC_BCP rtb_VeBRDR_b_LTAP_LOC;

#endif

#if !(!Rte_SysCon_Variant_BRDR_3) || !Rte_SysCon_Variant_BRDR_1 || !Rte_SysCon_Variant_BRDR_21 || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_28

    TeBPCR_e_LOC_BatClntHtr rtb_VeBRDR_b_BattHtr_LOC;

#endif

#if Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21

    TeTHMR_e_BatThrmlSt rtb_TmpSignalConversionAtVeTHMR_e_BatThr;

#endif

    sint32 rtb_Logical_d_tmp;
    TeBRDR_e_BatCltLvlLo tmp_0;
    boolean tmp[2];
    boolean rtb_VariantMerge_For_Variant_Source_V__0;
    boolean rtb_VariantMerge_For_Variant_Source_V__1;

#if Rte_SysCon_Variant_BRDR_19

    sint32 rtb_Logical_d_tmp_0;

#endif

#if Rte_SysCon_Variant_BRDR_19

    uint32 rtb_Logical_d_tmp_1;

#endif

#if Rte_SysCon_Variant_BRDR_19

    sint32 rtb_Logical_d_tmp_2;

#endif

#if Rte_SysCon_Variant_BRDR_19

    uint32 rtb_Logical_d_tmp_3;

#endif

#if Rte_SysCon_Variant_BRDR_19

    sint32 rtb_Logical_d_tmp_4;

#endif

#if Rte_SysCon_Variant_BRDR_19

    uint32 rtb_Logical_d_tmp_5;

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

    sint32 VeBRDR_b_PsvCoolDiagEnblPre_tmp;

#endif

#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19

    uint32 VeBRDR_b_PsvCoolDiagEnblPre_tmp_0;

#endif

#if Rte_SysCon_Variant_BRDR_19

    uint32 rtb_RelationalOperator3_a_tmp;

#endif

#if Rte_SysCon_Variant_BRDR_19

    uint32 rtb_Logical1_hj_tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/BRDR_MedTEH'
     */
    /* DataStoreWrite: '<S1>/Data Store Write1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattHeat'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattHeat_Value
        (&BRDR_ac_DW.StatusByte_BattHeat);

    /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCool'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCool_Value
        (&BRDR_ac_DW.StatusByte_BattCool);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff6' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBusPerf_Value
        (&BRDR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff5' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN5CommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN5CommBusPerf_Value
        (&BRDR_ac_DW.StatusByte_HiSpdFD_CAN5CommBusPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff4' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN11CommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN11CommBusPerf_Value
        (&BRDR_ac_DW.StatusByte_HiSpdFD_CAN11CommBusPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff3' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBus_Value
        (&BRDR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN5CommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN5CommBus_Value
        (&BRDR_ac_DW.StatusByte_HiSpdFD_CAN5CommBus);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN11CommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN11CommBus_Value
        (&BRDR_ac_DW.StatusByte_HiSpdFD_CAN11CommBus);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CoolPumAOvrSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPumAOvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPumAOvrSpd_Value
        (&BRDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CoolPmpATempSnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPmpATempSnsrPerf_Value
        (&BRDR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrPerf_Value
        (&BRDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommMtrElectCoolPmpA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommMtrElectCoolPmpA_Value
        (&BRDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigExpVlvActCtrCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigExpVlvActCtrCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigExpVlvActCtrCktPerf_Value
        (&BRDR_ac_DW.StatusByte_AC_RefrigExpVlvActCtrCktPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN3_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN3_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN3_BusOff_Value
        (&BRDR_ac_DW.StatusByte_LIN3_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommEAC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommEAC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommEAC_Value
        (&BRDR_ac_DW.StatusByte_LostCommEAC);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_EACPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EACPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EACPerf_Value
        (&BRDR_ac_DW.StatusByte_EACPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrAPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAPerf_Value
        (&BRDR_ac_DW.StatusByte_AC_RefrigPresSnsrAPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HeatingElmntPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HeatingElmntPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HeatingElmntPerf_Value
        (&BRDR_ac_DW.StatusByte_HeatingElmntPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrPerf_Value
        (&BRDR_ac_DW.StatusByte_CT_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommHybPSCCtrlValA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommHybPSCCtrlValA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommHybPSCCtrlValA_Value
        (&BRDR_ac_DW.StatusByte_LosCommHybPSCCtrlValA);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HB_PSC_CtrlValACktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_PSC_CtrlValACktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_PSC_CtrlValACktPerf_Value
        (&BRDR_ac_DW.StatusByte_HB_PSC_CtrlValACktPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvA_Perf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_Perf_Value
        (&BRDR_ac_DW.StatusByte_CoolantVlvA_Perf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolHeaterAPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolHeaterAPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolHeaterAPerf_Value
        (&BRDR_ac_DW.StatusByte_CoolHeaterAPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_ThrmlRlyCtrlCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt_Value
        (&BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolPmpPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpPerf_Value
        (&BRDR_ac_DW.StatusByte_BattCoolPmpPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolLvlLow' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolLvlLow'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolLvlLow_Value
        (&BRDR_ac_DW.StatusByte_BattCoolLvlLow);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommECM_A_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommECM_A_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommECM_A_BusB_Value
        (&BRDR_ac_DW.StatusByte_LostCommECM_A_BusB);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommHB_CooltHtr4' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_CooltHtr4'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_CooltHtr4_Value
        (&BRDR_ac_DW.StatusByte_LostCommHB_CooltHtr4);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN2_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN2_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN2_BusOff_Value
        (&BRDR_ac_DW.StatusByte_LIN2_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantHeaterBPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantHeaterBPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantHeaterBPerf_Value
        (&BRDR_ac_DW.StatusByte_CoolantHeaterBPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommHB_CoolPmp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_CoolPmp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_CoolPmp_Value
        (&BRDR_ac_DW.StatusByte_LostCommHB_CoolPmp);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN1_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&BRDR_ac_DW.StatusByte_LIN1_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HybBattCooTempSnsrDPer' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBattCooTempSnsrDPer'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBattCooTempSnsrDPer_Value
        (&BRDR_ac_DW.StatusByte_HybBattCooTempSnsrDPer);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HybBattCooTempSnsrCPer' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBattCooTempSnsrCPer'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBattCooTempSnsrCPer_Value
        (&BRDR_ac_DW.StatusByte_HybBattCooTempSnsrCPer);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HB_CT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_CT_SnsrPerf_Value
        (&BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolOutTempSnsCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolOutTempSnsCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolOutTempSnsCkt_Value
        (&BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolPmpHtrBTempSnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpHtrBTempSnsrPerf_Value
        (&BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolPmpATempSnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpATempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpATempSnsrPerf_Value
        (&BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvA_StkOpn' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_StkOpn'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_StkOpn_Value
        (&BRDR_ac_DW.StatusByte_CoolantVlvA_StkOpn);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolPmpOveSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpOveSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpOveSpd_Value
        (&BRDR_ac_DW.StatusByte_BattCoolPmpOveSpd);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CT_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktLo_Value
        (&BRDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CT_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktHi_Value
        (&BRDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HybBatPacCooOutTemSenCir' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBatPacCooOutTemSenCir'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBatPacCooOutTemSenCir_Value
        (&BRDR_ac_DW.StatusByte_HybBatPacCooOutTemSenCir);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HybBatPacCooOutTemSenCirHig' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBatPacCooOutTemSenCirHig'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBatPacCooOutTemSenCirHig_Value
        (&BRDR_ac_DW.StatusByte_HybBatPacCooOutTemSenCirHig);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HybBatPacCooInlTemSenCirLow' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBatPacCooInlTemSenCirLow'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBatPacCooInlTemSenCirLow_Value
        (&BRDR_ac_DW.StatusByte_HybBatPacCooInlTemSenCirLow);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HybBatPacCooInlTemSenCirHig' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBatPacCooInlTemSenCirHig'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBatPacCooInlTemSenCirHig_Value
        (&BRDR_ac_DW.StatusByte_HybBatPacCooInlTemSenCirHig);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolCtrlVlv1Ckt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1Ckt_Value
        (&BRDR_ac_DW.StatusByte_CoolCtrlVlv1Ckt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolCtrlVlv1CktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo_Value
        (&BRDR_ac_DW.StatusByte_CoolCtrlVlv1CktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolCtrlVlv1CktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi_Value
        (&BRDR_ac_DW.StatusByte_CoolCtrlVlv1CktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrCktLo_Value
        (&BRDR_ac_DW.StatusByte_CT_SnsrCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrCktHi_Value
        (&BRDR_ac_DW.StatusByte_CT_SnsrCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolLvlSnsCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolLvlSnsCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolLvlSnsCkt_Value
        (&BRDR_ac_DW.StatusByte_BattCoolLvlSnsCkt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrALo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo_Value
        (&BRDR_ac_DW.StatusByte_AC_RefrigPresSnsrALo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrAHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi_Value
        (&BRDR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&BRDR_ac_DW.StatusByte_LosCommBECM_A);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_CANC11_Value
        (&BRDR_ac_DW.StatusByte_LosCommBECM_A_CANC11);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_BECM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BECM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BECM_Value
        (&BRDR_ac_DW.StatusByte_InvData_BECM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_BECM_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BECM_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BECM_CANC11_Value
        (&BRDR_ac_DW.StatusByte_InvData_BECM_CANC11);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBus_B_Off' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBus_B_Off'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBus_B_Off_Value
        (&BRDR_ac_DW.StatusByte_CommBus_B_Off);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBusOff_Value
        (&BRDR_ac_DW.StatusByte_CommBusOff);

    /* SignalConversion generated from: '<S1>/VePMTR_b_ThrmlSystRly_EnblCmnd' */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_23

    /* SignalConversion generated from: '<S1>/VePMTR_b_ThrmlSystRly_EnblCmnd' incorporates:
     *  Inport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd'
     */
    (void)Rte_Read_VePMTR_b_ThrmlSystRly_EnblCmnd_Value
        (&rtb_TmpSignalConversionAtVePMTR_b_ThrmlS);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMTR_b_ThrmlSystRly_EnblCmnd' */

    /* SignalConversion generated from: '<S1>/VePMIR_n_LTActvPumpRPMAct' */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_3

    /* SignalConversion generated from: '<S1>/VePMIR_n_LTActvPumpRPMAct' incorporates:
     *  Inport: '<Root>/VePMIR_n_LTActvPumpRPMAct'
     */
    (void)Rte_Read_VePMIR_n_LTActvPumpRPMAct_Value
        (&rtb_TmpSignalConversionAtVePMIR_n_LTActv);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMIR_n_LTActvPumpRPMAct' */

    /* SignalConversion generated from: '<S1>/VeTRIR_b_HV_BatClntTmp_In_FA' */
#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_12

    /* SignalConversion generated from: '<S1>/VeTRIR_b_HV_BatClntTmp_In_FA' incorporates:
     *  Inport: '<Root>/VeTRIR_b_HV_BatClntTmp_In_FA'
     */
    (void)Rte_Read_VeTRIR_b_HV_BatClntTmp_In_FA_Value
        (&rtb_TmpSignalConversionAtVeTRIR_b_HV_Bat);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRIR_b_HV_BatClntTmp_In_FA' */

    /* SignalConversion generated from: '<S1>/VeTRIR_b_HV_BatClntTmp_Out_FA' */
#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || Rte_SysCon_Variant_BRDR_6

    /* SignalConversion generated from: '<S1>/VeTRIR_b_HV_BatClntTmp_Out_FA' incorporates:
     *  Inport: '<Root>/VeTRIR_b_HV_BatClntTmp_Out_FA'
     */
    (void)Rte_Read_VeTRIR_b_HV_BatClntTmp_Out_FA_Value
        (&rtb_TmpSignalConversionAtVeTRIR_b_HV_B_h);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRIR_b_HV_BatClntTmp_Out_FA' */

    /* SignalConversion generated from: '<S1>/VePMIR_T_LTActvPumpTemp' incorporates:
     *  Inport: '<Root>/VePMIR_T_LTActvPumpTemp'
     */
    (void)Rte_Read_VePMIR_T_LTActvPumpTemp_Value
        (&rtb_TmpSignalConversionAtVePMIR_T_LTActv);

    /* SignalConversion generated from: '<S1>/VeTRIR_T_HV_BatClntTmp_In' incorporates:
     *  Inport: '<Root>/VeTRIR_T_HV_BatClntTmp_In'
     */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmp_In_Value
        (&rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat);

    /* SignalConversion generated from: '<S1>/VeTRIR_T_HV_BatClntTmpOut' incorporates:
     *  Inport: '<Root>/VeTRIR_T_HV_BatClntTmpOut'
     */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmpOut_Value
        (&rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j);

    /* SignalConversion generated from: '<S1>/VePMIR_b_LTActvPumpTemp_FA' */
#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || Rte_SysCon_Variant_BRDR_8

    /* SignalConversion generated from: '<S1>/VePMIR_b_LTActvPumpTemp_FA' incorporates:
     *  Inport: '<Root>/VePMIR_b_LTActvPumpTemp_FA'
     */
    (void)Rte_Read_VePMIR_b_LTActvPumpTemp_FA_Value
        (&rtb_TmpSignalConversionAtVePMIR_b_LTActv);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMIR_b_LTActvPumpTemp_FA' */

    /* SignalConversion generated from: '<S1>/VePMIR_e_LTActvPumpDryRun' */
#if (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23)

    /* SignalConversion generated from: '<S1>/VePMIR_e_LTActvPumpDryRun' incorporates:
     *  Inport: '<Root>/VePMIR_e_LTActvPumpDryRun'
     */
    (void)Rte_Read_VePMIR_e_LTActvPumpDryRun_Value
        (&rtb_TmpSignalConversionAtVePMIR_e_LTActv);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMIR_e_LTActvPumpDryRun' */

    /* SignalConversion generated from: '<S1>/VeTRIR_b_BatBotlClntLoLvl_OC' */
#if !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23

    /* SignalConversion generated from: '<S1>/VeTRIR_b_BatBotlClntLoLvl_OC' incorporates:
     *  Inport: '<Root>/VeTRIR_b_BatBotlClntLoLvl_OC'
     */
    (void)Rte_Read_VeTRIR_b_BatBotlClntLoLvl_OC_Value
        (&rtb_TmpSignalConversionAtVeTRIR_b_BatBot);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRIR_b_BatBotlClntLoLvl_OC' */

    /* SignalConversion generated from: '<S1>/VePMIR_b_LTActvPumpDryRun_FA' */
#if Rte_SysCon_Variant_BRDR_23 || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19)

    /* SignalConversion generated from: '<S1>/VePMIR_b_LTActvPumpDryRun_FA' incorporates:
     *  Inport: '<Root>/VePMIR_b_LTActvPumpDryRun_FA'
     */
    (void)Rte_Read_VePMIR_b_LTActvPumpDryRun_FA_Value
        (&rtb_TmpSignalConversionAtVePMIR_b_LTAc_a);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMIR_b_LTActvPumpDryRun_FA' */

    /* SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt' */
#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_19 || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

    /* SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt' incorporates:
     *  Inport: '<Root>/VeTHMR_e_BatThrmlSt'
     */
    (void)Rte_Read_VeTHMR_e_BatThrmlSt_Value
        (&rtb_TmpSignalConversionAtVeTHMR_e_BatThr);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt' */

    /* SignalConversion generated from: '<S1>/VeBTRR_T_HV_BatModTempMax' */
#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || Rte_SysCon_Variant_BRDR_19 || (Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_5)

    /* SignalConversion generated from: '<S1>/VeBTRR_T_HV_BatModTempMax' incorporates:
     *  Inport: '<Root>/VeBTRR_T_HV_BatModTempMax'
     */
    (void)Rte_Read_VeBTRR_T_HV_BatModTempMax_Value
        (&rtb_TmpSignalConversionAtVeBTRR_T_HV_Bat);

#endif

    /* End of SignalConversion generated from: '<S1>/VeBTRR_T_HV_BatModTempMax' */

    /* SignalConversion generated from: '<S1>/VeBTRR_T_HV_BatModTempMin' */
#if Rte_SysCon_Variant_BRDR_21

    /* SignalConversion generated from: '<S1>/VeBTRR_T_HV_BatModTempMin' incorporates:
     *  Inport: '<Root>/VeBTRR_T_HV_BatModTempMin'
     */
    (void)Rte_Read_VeBTRR_T_HV_BatModTempMin_Value
        (&rtb_TmpSignalConversionAtVeBTRR_T_HV_B_e);

#endif

    /* End of SignalConversion generated from: '<S1>/VeBTRR_T_HV_BatModTempMin' */

    /* SignalConversion generated from: '<S1>/VeCPDR_b_LTAP_FunPer_ChkEnbl' */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4) || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_3

    /* SignalConversion generated from: '<S1>/VeCPDR_b_LTAP_FunPer_ChkEnbl' incorporates:
     *  Inport: '<Root>/VeCPDR_b_LTAP_FunPer_ChkEnbl'
     */
    (void)Rte_Read_VeCPDR_b_LTAP_FunPer_ChkEnbl_Value
        (&rtb_TmpSignalConversionAtVeCPDR_b_LTAP_F);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCPDR_b_LTAP_FunPer_ChkEnbl' */

    /* SignalConversion generated from: '<S1>/VeTRIR_b_HV_BatClntTmp2_InFA' incorporates:
     *  SignalConversion generated from: '<S1>/VeTRIR_b_HV_BatClntTmp2_OutFA'
     */
#if Rte_SysCon_Variant_BRDR_28

    /* SignalConversion generated from: '<S1>/VeTRIR_b_HV_BatClntTmp2_InFA' incorporates:
     *  Inport: '<Root>/VeTRIR_b_HV_BatClntTmp2_InFA'
     */
    (void)Rte_Read_VeTRIR_b_HV_BatClntTmp2_InFA_Value
        (&rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e);

    /* SignalConversion generated from: '<S1>/VeTRIR_b_HV_BatClntTmp2_OutFA' incorporates:
     *  Inport: '<Root>/VeTRIR_b_HV_BatClntTmp2_OutFA'
     */
    (void)Rte_Read_VeTRIR_b_HV_BatClntTmp2_OutFA_Value
        (&rtb_TmpSignalConversionAtVeTRIR_b_HV_B_k);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRIR_b_HV_BatClntTmp2_InFA' */

    /* SignalConversion generated from: '<S1>/VeHTIR_T_HVC_Htr4ClntOut_Temp' incorporates:
     *  Inport: '<Root>/VeHTIR_T_HVC_Htr4ClntOut_Temp'
     */
    (void)Rte_Read_VeHTIR_T_HVC_Htr4ClntOut_Temp_Value
        (&rtb_TmpSignalConversionAtVeHTIR_T_HVC_Ht);

    /* SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp' */
#if Rte_SysCon_Variant_BRDR_19 || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21)

    /* SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp' incorporates:
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value
        (&rtb_TmpSignalConversionAtVeAATR_T_EstAmb);

#endif

    /* End of SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp' */

    /* SignalConversion generated from: '<S1>/VeBTRR_T_CellTempAvgUsed' */
#if (!Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_5) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19)

    /* SignalConversion generated from: '<S1>/VeBTRR_T_CellTempAvgUsed' incorporates:
     *  Inport: '<Root>/VeBTRR_T_CellTempAvgUsed'
     */
    (void)Rte_Read_VeBTRR_T_CellTempAvgUsed_Value
        (&rtb_TmpSignalConversionAtVeBTRR_T_CellTe);

#endif

    /* End of SignalConversion generated from: '<S1>/VeBTRR_T_CellTempAvgUsed' */

    /* SignalConversion generated from: '<S1>/VeBTRR_b_CellTempAvgUsedFA' */
#if Rte_SysCon_Variant_BRDR_15

    /* SignalConversion generated from: '<S1>/VeBTRR_b_CellTempAvgUsedFA' incorporates:
     *  Inport: '<Root>/VeBTRR_b_CellTempAvgUsedFA'
     */
    (void)Rte_Read_VeBTRR_b_CellTempAvgUsedFA_Value
        (&rtb_TmpSignalConversionAtVeBTRR_b_CellTe);

#endif

    /* End of SignalConversion generated from: '<S1>/VeBTRR_b_CellTempAvgUsedFA' */

    /* SignalConversion generated from: '<S1>/VeTAIR_Pct_FrWyVlv_PstnAct' */
#if (Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

    /* SignalConversion generated from: '<S1>/VeTAIR_Pct_FrWyVlv_PstnAct' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_FrWyVlv_PstnAct'
     */
    (void)Rte_Read_VeTAIR_Pct_FrWyVlv_PstnAct_Value
        (&rtb_TmpSignalConversionAtVeTAIR_Pct_FrWy);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_Pct_FrWyVlv_PstnAct' */

    /* SignalConversion generated from: '<S1>/VeTRIR_U_BatBotlClnt_LoLvlVolt' */
#if Rte_SysCon_Variant_BRDR_24 || (Rte_SysCon_Variant_BRDR_23 && Rte_SysCon_Variant_BRDR_33)

    /* SignalConversion generated from: '<S1>/VeTRIR_U_BatBotlClnt_LoLvlVolt' incorporates:
     *  Inport: '<Root>/VeTRIR_U_BatBotlClnt_LoLvlVolt'
     */
    (void)Rte_Read_VeTRIR_U_BatBotlClnt_LoLvlVolt_Value
        (&rtb_TmpSignalConversionAtVeTRIR_U_BatBot);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRIR_U_BatBotlClnt_LoLvlVolt' */

    /* SignalConversion generated from: '<S1>/VeTMIR_b_MainRly_CmdReq' */
#if Rte_SysCon_Variant_BRDR_3

    /* SignalConversion generated from: '<S1>/VeTMIR_b_MainRly_CmdReq' incorporates:
     *  Inport: '<Root>/VeTMIR_b_MainRly_CmdReq'
     */
    (void)Rte_Read_VeTMIR_b_MainRly_CmdReq_Value
        (&rtb_TmpSignalConversionAtVeTMIR_b_MainRl);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTMIR_b_MainRly_CmdReq' */
#if Rte_SysCon_Variant_BRDR_1

    /* S-Function (fcgen): '<S1>/FcnCallGen' */
    /* Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid' */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        ((&(VeBRDR_b_IsDiagGlobalConditionsValid)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_FA' */
    (void)Rte_Read_VeBPCR_b_BPCM_LOC_BatClntHtr_FA_Value
        ((&(VeBRDR_b_BattHtr_LOC_FA)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA' */
    (void)Rte_Read_VeBPCR_b_BPCM_LOC_BCP_FA_Value((&(VeBRDR_b_LTAP_LOC_FA)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA' */
    (void)Rte_Read_VeBPCR_b_BPCM_LIN_BusOff_FA_Value((&(VeBRDR_b_BPCM_LIN_LOC_FA)));

    /* Inport: '<Root>/VeBPCR_e_BPCM_LOC_BatClntHtr' */
    (void)Rte_Read_VeBPCR_e_BPCM_LOC_BatClntHtr_Value((&(VeBRDR_b_BattHtr_LOC)));

    /* Inport: '<Root>/VeHTIR_b_HVC_Htr4ClntOut_Temp_FA' */
    (void)Rte_Read_VeHTIR_b_HVC_Htr4ClntOut_Temp_FA_Value
        ((&(VeBRDR_b_BattHtr_ClntTempOut_FA)));

    /* Inport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff' */
    (void)Rte_Read_VeBPCR_e_BPCM_LIN_BusOff_Value((&(VeBRDR_b_BPCM_LIN_LOC)));

    /* Inport: '<Root>/VeBPCR_e_BPCM_LOC_BCP' */
    (void)Rte_Read_VeBPCR_e_BPCM_LOC_BCP_Value((&(VeBRDR_b_LTAP_LOC)));

    /* Inport: '<Root>/VePLTR_b_EstRollAngleAtZeroSpdFA' */
    (void)Rte_Read_VePLTR_b_EstRollAngleAtZeroSpdFA_Value
        ((&(VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD)));

    /* Inport: '<Root>/VePLTR_phi_EstRollAngleAtZeroSpd' */
    (void)Rte_Read_VePLTR_phi_EstRollAngleAtZeroSpd_Value
        ((&(VeBRDR_phi_EstRollAngleAtZeroSpd)));

    /* Inport: '<Root>/VePLTR_phi_EstSlopeAngle' */
    (void)Rte_Read_VePLTR_phi_EstSlopeAngle_Value((&(VeBRDR_phi_EstSlopeAngle)));

    /* Inport: '<Root>/VeCSVR_v_VehSpd' */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value((&(VeBRDR_v_VehSpd)));

    /* Inport: '<Root>/VePLTR_b_EstSlopeAngleFA' */
    (void)Rte_Read_VePLTR_b_EstSlopeAngleFA_Value((&(VeBRDR_b_EstSlopeAngle_FA)));

    /* Inport: '<Root>/VeCSVR_b_VehSpdFA' */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value((&(VeBRDR_b_VehSpd_FA)));

    /* Inport: '<Root>/VeRCVR_Pct_HT_CabVlvSts' */
    (void)Rte_Read_VeRCVR_Pct_HT_CabVlvSts_Value((&(VeBRDR_Pct_HT_CabVlvSts_AD)));

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        ((&(VeBRDR_b_PostCodeClrDiagDsbl)));

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value((&(VeBRDR_b_DsblDiagFailSafe)));

    /* Inport: '<Root>/VeCPDR_b_LTAP_FunPer_FltDtct' */
    (void)Rte_Read_VeCPDR_b_LTAP_FunPer_FltDtct_Value
        ((&(VeBRDR_b_LTAPFunPerFltDtct_AD)));

    /* Outputs for Function Call SubSystem: '<S1>/Input' */
    /* Switch: '<S5>/Switch16' incorporates:
     *  Constant: '<S1246>/Calib'
     */
    if (KeBRDR_b_LTAPFunPerFltDtct_SD)
    {
        /* Switch: '<S5>/Switch16' incorporates:
         *  Constant: '<S1245>/Calib'
         *  Inport: '<Root>/VeCPDR_b_LTAP_FunPer_FltDtct'
         */
        VeBRDR_b_LTAPFunPerFltDtct_AD = KeBRDR_b_LTAPFunPerFltDtct_D;
    }

    /* End of Switch: '<S5>/Switch16' */

    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S1237>/Calib'
     */
    if (KeBRDR_b_DsblDigFailSfe_SD)
    {
        /* Switch: '<S5>/Switch' incorporates:
         *  Constant: '<S1236>/Calib'
         *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
         */
        VeBRDR_b_DsblDiagFailSafe = KeBRDR_b_DsblDigFailSfe_D;
    }

    /* End of Switch: '<S5>/Switch' */

    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S1251>/Calib'
     */
    if (KeBRDR_b_PostClrDiagDsbl_SD)
    {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Constant: '<S1250>/Calib'
         *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
         */
        VeBRDR_b_PostCodeClrDiagDsbl = KeBRDR_b_PostClrDiagDsbl_D;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S1244>/Calib'
     */
    if (KeBRDR_b_HT_CabVlvSts_SD)
    {
        /* Switch: '<S5>/Switch2' incorporates:
         *  Constant: '<S1225>/Calib'
         *  Inport: '<Root>/VeRCVR_Pct_HT_CabVlvSts'
         */
        VeBRDR_Pct_HT_CabVlvSts_AD = KeBRDR_Pct_HT_CabVlvSts_D;
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S1253>/Calib'
     */
    if (KeBRDR_b_VehSpd_FA_SD)
    {
        /* Switch: '<S5>/Switch3' incorporates:
         *  Constant: '<S1252>/Calib'
         *  Inport: '<Root>/VeCSVR_b_VehSpdFA'
         */
        VeBRDR_b_VehSpd_FA = KeBRDR_b_VehSpd_FA_D;
    }

    /* End of Switch: '<S5>/Switch3' */

    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S1242>/Calib'
     */
    if (KeBRDR_b_EstSlopeAngleFA_SD)
    {
        /* Switch: '<S5>/Switch4' incorporates:
         *  Constant: '<S1241>/Calib'
         *  Inport: '<Root>/VePLTR_b_EstSlopeAngleFA'
         */
        VeBRDR_b_EstSlopeAngle_FA = KeBRDR_b_EstSlopeAngleFA_D;
    }

    /* End of Switch: '<S5>/Switch4' */

    /* Switch: '<S5>/Switch5' incorporates:
     *  Constant: '<S1254>/Calib'
     */
    if (KeBRDR_b_VehicleSpd_SD)
    {
        /* Switch: '<S5>/Switch5' incorporates:
         *  Constant: '<S1260>/Calib'
         *  Inport: '<Root>/VeCSVR_v_VehSpd'
         */
        VeBRDR_v_VehSpd = KeBRDR_v_VehicleSpd_D;
    }

    /* End of Switch: '<S5>/Switch5' */

    /* Switch: '<S5>/Switch6' incorporates:
     *  Constant: '<S1243>/Calib'
     */
    if (KeBRDR_b_EstSlopeAngle_SD)
    {
        /* Switch: '<S5>/Switch6' incorporates:
         *  Constant: '<S1259>/Calib'
         *  Inport: '<Root>/VePLTR_phi_EstSlopeAngle'
         */
        VeBRDR_phi_EstSlopeAngle = KeBRDR_phi_EstSlopeAngle_D;
    }

    /* End of Switch: '<S5>/Switch6' */

    /* Switch: '<S5>/Switch7' incorporates:
     *  Constant: '<S1240>/Calib'
     */
    if (KeBRDR_b_EstRollAngleAtZeroSpd_SD)
    {
        /* Switch: '<S5>/Switch7' incorporates:
         *  Constant: '<S1258>/Calib'
         *  Inport: '<Root>/VePLTR_phi_EstRollAngleAtZeroSpd'
         */
        VeBRDR_phi_EstRollAngleAtZeroSpd = KeBRDR_phi_EstRollAngleAtZeroSpd_D;
    }

    /* End of Switch: '<S5>/Switch7' */

    /* Switch: '<S5>/Switch8' incorporates:
     *  Constant: '<S1239>/Calib'
     */
    if (KeBRDR_b_EstRollAngleAtZeroSpd_FA_SD)
    {
        /* Switch: '<S5>/Switch8' incorporates:
         *  Constant: '<S1238>/Calib'
         *  Inport: '<Root>/VePLTR_b_EstRollAngleAtZeroSpdFA'
         */
        VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD =
            KeBRDR_b_EstRollAngleAtZeroSpd_FA_D;
    }

    /* End of Switch: '<S5>/Switch8' */

    /* Switch: '<S5>/Switch10' incorporates:
     *  Constant: '<S1249>/Calib'
     */
    if (KeBRDR_b_LTAP_LOC_SD)
    {
        /* Switch: '<S5>/Switch10' incorporates:
         *  Constant: '<S1257>/Calib'
         *  Inport: '<Root>/VeBPCR_e_BPCM_LOC_BCP'
         */
        VeBRDR_b_LTAP_LOC = KeBRDR_e_LTAP_LOC_D;
    }

    /* End of Switch: '<S5>/Switch10' */

    /* Switch: '<S5>/Switch9' incorporates:
     *  Constant: '<S1228>/Calib'
     */
    if (KeBRDR_b_BPCMLIN_LOC_SD)
    {
        /* Switch: '<S5>/Switch9' incorporates:
         *  Constant: '<S1255>/Calib'
         *  Inport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff'
         */
        VeBRDR_b_BPCM_LIN_LOC = KeBRDR_e_BPCMLIN_LOC_D;
    }

    /* End of Switch: '<S5>/Switch9' */

    /* Switch: '<S5>/Switch15' incorporates:
     *  Constant: '<S1232>/Calib'
     */
    if (KeBRDR_b_BattHtr_ClntTempOutFA_SD)
    {
        /* Switch: '<S5>/Switch15' incorporates:
         *  Constant: '<S1231>/Calib'
         *  Inport: '<Root>/VeHTIR_b_HVC_Htr4ClntOut_Temp_FA'
         */
        VeBRDR_b_BattHtr_ClntTempOut_FA = KeBRDR_b_BattHtr_ClntTempOutFA_D;
    }

    /* End of Switch: '<S5>/Switch15' */

    /* Switch: '<S5>/Switch12' incorporates:
     *  Constant: '<S1233>/Calib'
     */
    if (KeBRDR_b_BattHtr_LOC_SD)
    {
        /* Switch: '<S5>/Switch12' incorporates:
         *  Constant: '<S1256>/Calib'
         *  Inport: '<Root>/VeBPCR_e_BPCM_LOC_BatClntHtr'
         */
        VeBRDR_b_BattHtr_LOC = KeBRDR_e_BattHtr_LOC_D;
    }

    /* End of Switch: '<S5>/Switch12' */

    /* Switch: '<S5>/Switch13' incorporates:
     *  Constant: '<S1227>/Calib'
     */
    if (KeBRDR_b_BPCMLINLOC_FA_SD)
    {
        /* Switch: '<S5>/Switch13' incorporates:
         *  Constant: '<S1226>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA'
         */
        VeBRDR_b_BPCM_LIN_LOC_FA = KeBRDR_b_BPCMLINLOC_FA_D;
    }

    /* End of Switch: '<S5>/Switch13' */

    /* Switch: '<S5>/Switch14' incorporates:
     *  Constant: '<S1248>/Calib'
     */
    if (KeBRDR_b_LTAPLOC_FA_SD)
    {
        /* Switch: '<S5>/Switch14' incorporates:
         *  Constant: '<S1247>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA'
         */
        VeBRDR_b_LTAP_LOC_FA = KeBRDR_b_LTAPLOC_FA_D;
    }

    /* End of Switch: '<S5>/Switch14' */

    /* Switch: '<S5>/Switch11' incorporates:
     *  Constant: '<S1230>/Calib'
     */
    if (KeBRDR_b_BattHtrLOC_FA_SD)
    {
        /* Switch: '<S5>/Switch11' incorporates:
         *  Constant: '<S1229>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_FA'
         */
        VeBRDR_b_BattHtr_LOC_FA = KeBRDR_b_BattHtrLOC_FA_D;
    }

    /* End of Switch: '<S5>/Switch11' */

    /* Switch: '<S5>/Switch18' incorporates:
     *  Constant: '<S1235>/Calib'
     */
    if (KeBRDR_b_DiagGlblCndtnsValid_SD)
    {
        /* Switch: '<S5>/Switch18' incorporates:
         *  Constant: '<S1234>/Calib'
         *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
         */
        VeBRDR_b_IsDiagGlobalConditionsValid = KeBRDR_b_DiagGlblCndtnsValid_D;
    }

    /* End of Switch: '<S5>/Switch18' */
    /* End of Outputs for SubSystem: '<S1>/Input' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */

    /* SignalConversion generated from: '<S4>/BPCM_Comm_Error' */
#if (!Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_23 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4)

    /* Logic: '<S473>/Logical Operator1' incorporates:
     *  Inport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_11'
     */
    (void)Rte_Read_VeDFIR_b_CANERRSTS_CANFD_11_Value(&rtb_LogicalOperator1_b);

#elif !Rte_SysCon_Variant_BRDR_3

    /* Logic: '<S473>/Logical Operator1' incorporates:
     *  SignalConversion generated from: '<S4>/BPCM_Comm_Error'
     */
    rtb_LogicalOperator1_b = false;

#endif

    /* End of SignalConversion generated from: '<S4>/BPCM_Comm_Error' */

    /* SignalConversion generated from: '<S7>/BPCM_Comm' incorporates:
     *  SignalConversion generated from: '<S4>/BPCM_Comm_Error'
     * */
#if (!Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_23 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4)

    /* VariantMerge generated from: '<S7>/BPCM_Comm' */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = rtb_LogicalOperator1_b;

    /* Logic: '<S473>/Logical Operator1' incorporates:
     *  Inport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_5'
     */
    (void)Rte_Read_VeDFIR_b_CANERRSTS_CANFD_5_Value(&rtb_LogicalOperator1_b);

#elif !Rte_SysCon_Variant_BRDR_3

    /* VariantMerge generated from: '<S7>/BPCM_Comm' incorporates:
     *  SignalConversion generated from: '<S7>/BPCM_Comm'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = false;

    /* Logic: '<S473>/Logical Operator1' incorporates:
     *  SignalConversion generated from: '<S4>/BPCM_Comm_Error'
     */
    rtb_LogicalOperator1_b = false;

#endif

    /* End of SignalConversion generated from: '<S7>/BPCM_Comm' */

    /* SignalConversion generated from: '<S7>/BPCM_Comm' */
#if (!Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_23 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4)

    /* VariantMerge generated from: '<S7>/BPCM_Comm' */
    rtb_VM_Conditional_Signal_BPCM_Comm_1 = rtb_LogicalOperator1_b;

#elif !Rte_SysCon_Variant_BRDR_3

    /* VariantMerge generated from: '<S7>/BPCM_Comm' incorporates:
     *  SignalConversion generated from: '<S7>/BPCM_Comm'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_1 = false;

#endif

    /* End of SignalConversion generated from: '<S7>/BPCM_Comm' */
#if !Rte_SysCon_Variant_BRDR_3 || Rte_SysCon_Variant_BRDR_15 || (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_23 || Rte_SysCon_Variant_BRDR_4

    /* Outputs for Atomic SubSystem: '<S7>/BPCM_Comm' */
#if Rte_SysCon_Variant_BRDR_3

    /* Outputs for Atomic SubSystem: '<S17>/BPCM_Check_M182' */
    /* VariantMerge generated from: '<S17>/LeBRDR_b_BPCM_NoCommErr' incorporates:
     *  Constant: '<S23>/Constant1'
     *  Constant: '<S23>/Constant2'
     *  Constant: '<S24>/Constant1'
     *  Constant: '<S24>/Constant2'
     *  Constant: '<S25>/Constant1'
     *  Constant: '<S25>/Constant2'
     *  Constant: '<S26>/Constant1'
     *  Constant: '<S26>/Constant2'
     *  Constant: '<S27>/Calib'
     *  DataStoreRead: '<S23>/StatusByte_InvData_BECM_CANC11'
     *  DataStoreRead: '<S24>/StatusByte_InvData_BECM'
     *  DataStoreRead: '<S25>/StatusByte_LosCommBECM_A_CANC11'
     *  DataStoreRead: '<S26>/StatusByte_LosCommBECM_A'
     *  Logic: '<S18>/Logical1'
     *  Logic: '<S18>/Logical13'
     *  Logic: '<S18>/Logical15'
     *  Logic: '<S18>/Logical2'
     *  Logic: '<S18>/Logical23'
     *  Logic: '<S18>/Logical26'
     *  Logic: '<S18>/Logical27'
     *  Logic: '<S18>/Logical28'
     *  Logic: '<S18>/Logical29'
     *  Logic: '<S23>/Logical Operator'
     *  Logic: '<S24>/Logical Operator'
     *  Logic: '<S25>/Logical Operator'
     *  Logic: '<S26>/Logical Operator'
     *  RelationalOperator: '<S23>/Relational Operator1'
     *  RelationalOperator: '<S23>/Relational Operator2'
     *  RelationalOperator: '<S24>/Relational Operator1'
     *  RelationalOperator: '<S24>/Relational Operator2'
     *  RelationalOperator: '<S25>/Relational Operator1'
     *  RelationalOperator: '<S25>/Relational Operator2'
     *  RelationalOperator: '<S26>/Relational Operator1'
     *  RelationalOperator: '<S26>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S23>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S23>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S24>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S24>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S25>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S25>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S26>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S26>/Bitwise Operator2'
     */
    VeBRDR_b_BPCM_NoCommErr = ((((!rtb_VM_Conditional_Signal_BPCM_Comm_0) &&
        (((((sint32)BRDR_ac_DW.StatusByte_LosCommBECM_A) & 1) <= 0) ||
         ((((uint32)BRDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) != 0U))) &&
        (((((sint32)BRDR_ac_DW.StatusByte_InvData_BECM) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_InvData_BECM) & 64U) != 0U))) ||
        ((((!rtb_VM_Conditional_Signal_BPCM_Comm_1) && (((((sint32)
        BRDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 64U) != 0U))) &&
          (((((sint32)BRDR_ac_DW.StatusByte_InvData_BECM_CANC11) & 1) <= 0) ||
           ((((uint32)BRDR_ac_DW.StatusByte_InvData_BECM_CANC11) & 64U) != 0U)))
         && (KeBRDR_b_BPCM_RedCommCheckEnbl)));

    /* End of Outputs for SubSystem: '<S17>/BPCM_Check_M182' */
#elif Rte_SysCon_Variant_BRDR_17

    /* Outputs for Atomic SubSystem: '<S17>/BPCM_Check_P2GEN4_JL' */
    /* VariantMerge generated from: '<S17>/LeBRDR_b_BPCM_NoCommErr' incorporates:
     *  Constant: '<S31>/Constant1'
     *  Constant: '<S31>/Constant2'
     *  Constant: '<S32>/Constant1'
     *  Constant: '<S32>/Constant2'
     *  Constant: '<S33>/Constant1'
     *  Constant: '<S33>/Constant2'
     *  Constant: '<S34>/Constant1'
     *  Constant: '<S34>/Constant2'
     *  DataStoreRead: '<S31>/StatusByte_InvData_BECM'
     *  DataStoreRead: '<S32>/StatusByte_LosCommBECM_A'
     *  DataStoreRead: '<S33>/StatusByte_HiSpdFD_CAN3CommBus'
     *  DataStoreRead: '<S34>/StatusByte_HiSpdFD_CAN3CommBusPerf'
     *  Logic: '<S20>/Logical1'
     *  Logic: '<S20>/Logical13'
     *  Logic: '<S20>/Logical15'
     *  Logic: '<S20>/Logical2'
     *  Logic: '<S20>/Logical23'
     *  Logic: '<S31>/Logical Operator'
     *  Logic: '<S32>/Logical Operator'
     *  Logic: '<S33>/Logical Operator'
     *  Logic: '<S34>/Logical Operator'
     *  RelationalOperator: '<S31>/Relational Operator1'
     *  RelationalOperator: '<S31>/Relational Operator2'
     *  RelationalOperator: '<S32>/Relational Operator1'
     *  RelationalOperator: '<S32>/Relational Operator2'
     *  RelationalOperator: '<S33>/Relational Operator1'
     *  RelationalOperator: '<S33>/Relational Operator2'
     *  RelationalOperator: '<S34>/Relational Operator1'
     *  RelationalOperator: '<S34>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S31>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S31>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S32>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S32>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S33>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S33>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S34>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S34>/Bitwise Operator2'
     */
    VeBRDR_b_BPCM_NoCommErr = ((((((((sint32)
        BRDR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 64U) != 0U)) &&
        (((((sint32)BRDR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 1) <= 0) ||
         ((((uint32)BRDR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 64U) != 0U))) &&
        (((((sint32)BRDR_ac_DW.StatusByte_LosCommBECM_A) & 1) <= 0) ||
         ((((uint32)BRDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) != 0U))) &&
        (((((sint32)BRDR_ac_DW.StatusByte_InvData_BECM) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_InvData_BECM) & 64U) != 0U)));

    /* End of Outputs for SubSystem: '<S17>/BPCM_Check_P2GEN4_JL' */
#elif Rte_SysCon_Variant_BRDR_35

    /* Outputs for Atomic SubSystem: '<S17>/BPCM_Check_PEGASUS_COREBEV_BLUEN' */
    /* VariantMerge generated from: '<S17>/LeBRDR_b_BPCM_NoCommErr' incorporates:
     *  Constant: '<S35>/Constant1'
     *  Constant: '<S35>/Constant2'
     *  Constant: '<S36>/Constant1'
     *  Constant: '<S36>/Constant2'
     *  Constant: '<S37>/Constant1'
     *  Constant: '<S37>/Constant2'
     *  Constant: '<S38>/Constant1'
     *  Constant: '<S38>/Constant2'
     *  Constant: '<S39>/Constant1'
     *  Constant: '<S39>/Constant2'
     *  Constant: '<S40>/Constant1'
     *  Constant: '<S40>/Constant2'
     *  Constant: '<S41>/Constant1'
     *  Constant: '<S41>/Constant2'
     *  Constant: '<S42>/Constant1'
     *  Constant: '<S42>/Constant2'
     *  Constant: '<S43>/Calib'
     *  DataStoreRead: '<S35>/StatusByte_InvData_BECM_CANC11'
     *  DataStoreRead: '<S36>/StatusByte_InvData_BECM'
     *  DataStoreRead: '<S37>/StatusByte_LosCommBECM_A_CANC11'
     *  DataStoreRead: '<S38>/StatusByte_LosCommBECM_A'
     *  DataStoreRead: '<S39>/StatusByte_HiSpdFD_CAN11CommBus'
     *  DataStoreRead: '<S40>/StatusByte_HiSpdFD_CAN11CommBusPerf'
     *  DataStoreRead: '<S41>/StatusByte_HiSpdFD_CAN5CommBus'
     *  DataStoreRead: '<S42>/StatusByte_HiSpdFD_CAN5CommBusPerf'
     *  Logic: '<S21>/Logical1'
     *  Logic: '<S21>/Logical2'
     *  Logic: '<S21>/Logical23'
     *  Logic: '<S21>/Logical29'
     *  Logic: '<S21>/Logical3'
     *  Logic: '<S21>/Logical4'
     *  Logic: '<S21>/Logical5'
     *  Logic: '<S21>/Logical6'
     *  Logic: '<S21>/Logical7'
     *  Logic: '<S21>/Logical8'
     *  Logic: '<S21>/Logical9'
     *  Logic: '<S35>/Logical Operator'
     *  Logic: '<S36>/Logical Operator'
     *  Logic: '<S37>/Logical Operator'
     *  Logic: '<S38>/Logical Operator'
     *  Logic: '<S39>/Logical Operator'
     *  Logic: '<S40>/Logical Operator'
     *  Logic: '<S41>/Logical Operator'
     *  Logic: '<S42>/Logical Operator'
     *  RelationalOperator: '<S35>/Relational Operator1'
     *  RelationalOperator: '<S35>/Relational Operator2'
     *  RelationalOperator: '<S36>/Relational Operator1'
     *  RelationalOperator: '<S36>/Relational Operator2'
     *  RelationalOperator: '<S37>/Relational Operator1'
     *  RelationalOperator: '<S37>/Relational Operator2'
     *  RelationalOperator: '<S38>/Relational Operator1'
     *  RelationalOperator: '<S38>/Relational Operator2'
     *  RelationalOperator: '<S39>/Relational Operator1'
     *  RelationalOperator: '<S39>/Relational Operator2'
     *  RelationalOperator: '<S40>/Relational Operator1'
     *  RelationalOperator: '<S40>/Relational Operator2'
     *  RelationalOperator: '<S41>/Relational Operator1'
     *  RelationalOperator: '<S41>/Relational Operator2'
     *  RelationalOperator: '<S42>/Relational Operator1'
     *  RelationalOperator: '<S42>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S35>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S35>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S36>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S36>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S37>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S37>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S38>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S38>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S39>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S39>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S40>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S40>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S42>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S42>/Bitwise Operator2'
     */
    VeBRDR_b_BPCM_NoCommErr = (((((((((sint32)
        BRDR_ac_DW.StatusByte_HiSpdFD_CAN11CommBusPerf) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_HiSpdFD_CAN11CommBusPerf) & 64U) != 0U)) &&
        (((((sint32)BRDR_ac_DW.StatusByte_HiSpdFD_CAN11CommBus) & 1) <= 0) ||
         ((((uint32)BRDR_ac_DW.StatusByte_HiSpdFD_CAN11CommBus) & 64U) != 0U))) &&
        (((((sint32)BRDR_ac_DW.StatusByte_InvData_BECM) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_InvData_BECM) & 64U) != 0U))) && (((((sint32)
        BRDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 64U) != 0U))) ||
        (((((((((sint32)BRDR_ac_DW.StatusByte_HiSpdFD_CAN5CommBusPerf) & 1) <= 0)
             || ((((uint32)BRDR_ac_DW.StatusByte_HiSpdFD_CAN5CommBusPerf) & 64U)
                 != 0U)) && (((((sint32)
        BRDR_ac_DW.StatusByte_HiSpdFD_CAN5CommBus) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_HiSpdFD_CAN5CommBus) & 64U) != 0U))) &&
           (((((sint32)BRDR_ac_DW.StatusByte_InvData_BECM_CANC11) & 1) <= 0) ||
            ((((uint32)BRDR_ac_DW.StatusByte_InvData_BECM_CANC11) & 64U) != 0U)))
          && (((((sint32)BRDR_ac_DW.StatusByte_LosCommBECM_A) & 1) <= 0) ||
              ((((uint32)BRDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) != 0U))) &&
         (KeBRDR_b_BPCM_RedCommCheckEnbl)));

    /* End of Outputs for SubSystem: '<S17>/BPCM_Check_PEGASUS_COREBEV_BLUEN' */
#elif Rte_SysCon_Variant_BRDR_2

    /* Outputs for Atomic SubSystem: '<S17>/BPCM_Check_VF_X250_HX250' */
    /* VariantMerge generated from: '<S17>/LeBRDR_b_BPCM_NoCommErr' incorporates:
     *  Constant: '<S44>/Constant1'
     *  Constant: '<S44>/Constant2'
     *  Constant: '<S45>/Constant1'
     *  Constant: '<S45>/Constant2'
     *  Constant: '<S46>/Constant1'
     *  Constant: '<S46>/Constant2'
     *  Constant: '<S47>/Constant1'
     *  Constant: '<S47>/Constant2'
     *  Constant: '<S48>/Constant1'
     *  Constant: '<S48>/Constant2'
     *  Constant: '<S49>/Constant1'
     *  Constant: '<S49>/Constant2'
     *  Constant: '<S50>/Calib'
     *  DataStoreRead: '<S44>/StatusByte_CommBusOff'
     *  DataStoreRead: '<S45>/StatusByte_CommBus_B_Off'
     *  DataStoreRead: '<S46>/StatusByte_InvData_BECM_CANC11'
     *  DataStoreRead: '<S47>/StatusByte_InvData_BECM'
     *  DataStoreRead: '<S48>/StatusByte_LosCommBECM_A_CANC11'
     *  DataStoreRead: '<S49>/StatusByte_LosCommBECM_A'
     *  Logic: '<S22>/Logical1'
     *  Logic: '<S22>/Logical2'
     *  Logic: '<S22>/Logical23'
     *  Logic: '<S22>/Logical29'
     *  Logic: '<S22>/Logical3'
     *  Logic: '<S22>/Logical4'
     *  Logic: '<S22>/Logical7'
     *  Logic: '<S22>/Logical8'
     *  Logic: '<S22>/Logical9'
     *  Logic: '<S44>/Logical Operator'
     *  Logic: '<S45>/Logical Operator'
     *  Logic: '<S46>/Logical Operator'
     *  Logic: '<S47>/Logical Operator'
     *  Logic: '<S48>/Logical Operator'
     *  Logic: '<S49>/Logical Operator'
     *  RelationalOperator: '<S44>/Relational Operator1'
     *  RelationalOperator: '<S44>/Relational Operator2'
     *  RelationalOperator: '<S45>/Relational Operator1'
     *  RelationalOperator: '<S45>/Relational Operator2'
     *  RelationalOperator: '<S46>/Relational Operator1'
     *  RelationalOperator: '<S46>/Relational Operator2'
     *  RelationalOperator: '<S47>/Relational Operator1'
     *  RelationalOperator: '<S47>/Relational Operator2'
     *  RelationalOperator: '<S48>/Relational Operator1'
     *  RelationalOperator: '<S48>/Relational Operator2'
     *  RelationalOperator: '<S49>/Relational Operator1'
     *  RelationalOperator: '<S49>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S44>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S44>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S45>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S45>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S46>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S46>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S47>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S47>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S48>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S48>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S49>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S49>/Bitwise Operator2'
     */
    VeBRDR_b_BPCM_NoCommErr = ((((((((sint32)BRDR_ac_DW.StatusByte_CommBusOff) &
        1) <= 0) || ((((uint32)BRDR_ac_DW.StatusByte_CommBusOff) & 64U) != 0U)) &&
        (((((sint32)BRDR_ac_DW.StatusByte_LosCommBECM_A) & 1) <= 0) ||
         ((((uint32)BRDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) != 0U))) &&
        (((((sint32)BRDR_ac_DW.StatusByte_InvData_BECM) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_InvData_BECM) & 64U) != 0U))) || ((((((((sint32)
        BRDR_ac_DW.StatusByte_CommBus_B_Off) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_CommBus_B_Off) & 64U) != 0U)) && (((((sint32)
        BRDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 64U) != 0U))) &&
        (((((sint32)BRDR_ac_DW.StatusByte_InvData_BECM_CANC11) & 1) <= 0) ||
         ((((uint32)BRDR_ac_DW.StatusByte_InvData_BECM_CANC11) & 64U) != 0U))) &&
        (KeBRDR_b_BPCM_RedCommCheckEnbl)));

    /* End of Outputs for SubSystem: '<S17>/BPCM_Check_VF_X250_HX250' */
#else

    /* Outputs for Atomic SubSystem: '<S17>/BPCM_Check_OtherPrograms' */
    /* VariantMerge generated from: '<S17>/LeBRDR_b_BPCM_NoCommErr' incorporates:
     *  Constant: '<S28>/Constant1'
     *  Constant: '<S28>/Constant2'
     *  Constant: '<S29>/Constant1'
     *  Constant: '<S29>/Constant2'
     *  Constant: '<S30>/Constant1'
     *  Constant: '<S30>/Constant2'
     *  DataStoreRead: '<S28>/StatusByte_CommBusOff'
     *  DataStoreRead: '<S29>/StatusByte_InvData_BECM'
     *  DataStoreRead: '<S30>/StatusByte_LosCommBECM_A'
     *  Logic: '<S19>/Logical1'
     *  Logic: '<S19>/Logical13'
     *  Logic: '<S19>/Logical15'
     *  Logic: '<S19>/Logical23'
     *  Logic: '<S28>/Logical Operator'
     *  Logic: '<S29>/Logical Operator'
     *  Logic: '<S30>/Logical Operator'
     *  RelationalOperator: '<S28>/Relational Operator1'
     *  RelationalOperator: '<S28>/Relational Operator2'
     *  RelationalOperator: '<S29>/Relational Operator1'
     *  RelationalOperator: '<S29>/Relational Operator2'
     *  RelationalOperator: '<S30>/Relational Operator1'
     *  RelationalOperator: '<S30>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S28>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S28>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S29>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S29>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S30>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S30>/Bitwise Operator2'
     */
    VeBRDR_b_BPCM_NoCommErr = (((((((sint32)BRDR_ac_DW.StatusByte_CommBusOff) &
        1) <= 0) || ((((uint32)BRDR_ac_DW.StatusByte_CommBusOff) & 64U) != 0U)) &&
        (((((sint32)BRDR_ac_DW.StatusByte_LosCommBECM_A) & 1) <= 0) ||
         ((((uint32)BRDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) != 0U))) &&
        (((((sint32)BRDR_ac_DW.StatusByte_InvData_BECM) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_InvData_BECM) & 64U) != 0U)));

    /* End of Outputs for SubSystem: '<S17>/BPCM_Check_OtherPrograms' */
#endif

    /* End of Outputs for SubSystem: '<S7>/BPCM_Comm' */
#endif

    /* S-Function (sfix_bitop): '<S67>/Bitwise Operator1' incorporates:
     *  Logic: '<S67>/Logical Operator'
     *  Logic: '<S74>/Logical Operator'
     *  RelationalOperator: '<S67>/Relational Operator1'
     *  RelationalOperator: '<S67>/Relational Operator2'
     *  RelationalOperator: '<S74>/Relational Operator1'
     *  RelationalOperator: '<S74>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S67>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S74>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S74>/Bitwise Operator2'
     *  SignalConversion generated from: '<S8>/Variant Source1'
     *  SignalConversion generated from: '<S8>/Variant Source'
     */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8)

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Constant: '<S67>/Constant1'
     *  Constant: '<S67>/Constant2'
     *  DataStoreRead: '<S67>/StatusByte_BattCoolLvlSnsCkt'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = (((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolLvlSnsCkt) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolLvlSnsCkt) & 64U) == 0U));

    /* VariantMerge generated from: '<S8>/Variant Source1' incorporates:
     *  Constant: '<S74>/Constant1'
     *  Constant: '<S74>/Constant2'
     *  DataStoreRead: '<S74>/StatusByte_HybBatPacCooInlTemSenCirLow'
     */
    rtb_VariantMerge_For_Variant_Source_V_cw = (((((sint32)
        BRDR_ac_DW.StatusByte_HybBatPacCooInlTemSenCirLow) & 1) > 0) &&
        ((((uint32)BRDR_ac_DW.StatusByte_HybBatPacCooInlTemSenCirLow) & 64U) ==
         0U));

#elif Rte_SysCon_Variant_BRDR_3

    /* VariantMerge generated from: '<S8>/Variant Source' incorporates:
     *  Inport: '<Root>/VeBSWR_b_BattCoolLvlSnsCkt'
     */
    (void)Rte_Read_VeBSWR_b_BattCoolLvlSnsCkt_Value
        (&rtb_VariantMerge_For_Variant_Source_Vari);

    /* VariantMerge generated from: '<S8>/Variant Source1' incorporates:
     *  Inport: '<Root>/VeBSWR_b_HB_CTIn_SnsrCktLo'
     */
    (void)Rte_Read_VeBSWR_b_HB_CTIn_SnsrCktLo_Value
        (&rtb_VariantMerge_For_Variant_Source_V_cw);

#endif

    /* End of S-Function (sfix_bitop): '<S67>/Bitwise Operator1' */

    /* S-Function (sfix_bitop): '<S73>/Bitwise Operator1' incorporates:
     *  Logic: '<S73>/Logical Operator'
     *  Logic: '<S76>/Logical Operator'
     *  RelationalOperator: '<S73>/Relational Operator1'
     *  RelationalOperator: '<S73>/Relational Operator2'
     *  RelationalOperator: '<S76>/Relational Operator1'
     *  RelationalOperator: '<S76>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S73>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S76>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S76>/Bitwise Operator2'
     *  SignalConversion generated from: '<S8>/Variant Source2'
     *  SignalConversion generated from: '<S8>/Variant Source3'
     */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8)

    /* VariantMerge generated from: '<S8>/Variant Source2' incorporates:
     *  Constant: '<S73>/Constant1'
     *  Constant: '<S73>/Constant2'
     *  DataStoreRead: '<S73>/StatusByte_HybBatPacCooInlTemSenCirHig'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a = (((((sint32)
        BRDR_ac_DW.StatusByte_HybBatPacCooInlTemSenCirHig) & 1) > 0) &&
        ((((uint32)BRDR_ac_DW.StatusByte_HybBatPacCooInlTemSenCirHig) & 64U) ==
         0U));

    /* VariantMerge generated from: '<S8>/Variant Source3' incorporates:
     *  Constant: '<S76>/Constant1'
     *  Constant: '<S76>/Constant2'
     *  DataStoreRead: '<S76>/StatusByte_HybBatPacCooOutTemSenCir'
     */
    rtb_VariantMerge_For_Variant_Source_Va_p = (((((sint32)
        BRDR_ac_DW.StatusByte_HybBatPacCooOutTemSenCir) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_HybBatPacCooOutTemSenCir) & 64U) == 0U));

#elif Rte_SysCon_Variant_BRDR_3

    /* VariantMerge generated from: '<S8>/Variant Source2' incorporates:
     *  Inport: '<Root>/VeBSWR_b_HB_CTIn_SnsrCktHi'
     */
    (void)Rte_Read_VeBSWR_b_HB_CTIn_SnsrCktHi_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_a);

    /* VariantMerge generated from: '<S8>/Variant Source3' incorporates:
     *  Inport: '<Root>/VeBSWR_b_HybBatPacCooOutTemSenCir'
     */
    (void)Rte_Read_VeBSWR_b_HybBatPacCooOutTemSenCir_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_p);

#endif

    /* End of S-Function (sfix_bitop): '<S73>/Bitwise Operator1' */

    /* S-Function (sfix_bitop): '<S75>/Bitwise Operator1' incorporates:
     *  Logic: '<S69>/Logical Operator'
     *  Logic: '<S75>/Logical Operator'
     *  RelationalOperator: '<S69>/Relational Operator1'
     *  RelationalOperator: '<S69>/Relational Operator2'
     *  RelationalOperator: '<S75>/Relational Operator1'
     *  RelationalOperator: '<S75>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S69>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S69>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S75>/Bitwise Operator2'
     *  SignalConversion generated from: '<S8>/Variant Source4'
     *  SignalConversion generated from: '<S8>/Variant Source5'
     */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8)

    /* VariantMerge generated from: '<S8>/Variant Source4' incorporates:
     *  Constant: '<S75>/Constant1'
     *  Constant: '<S75>/Constant2'
     *  DataStoreRead: '<S75>/StatusByte_HybBatPacCooOutTemSenCirHig'
     */
    rtb_VariantMerge_For_Variant_Source_V_h3 = (((((sint32)
        BRDR_ac_DW.StatusByte_HybBatPacCooOutTemSenCirHig) & 1) > 0) &&
        ((((uint32)BRDR_ac_DW.StatusByte_HybBatPacCooOutTemSenCirHig) & 64U) ==
         0U));

    /* VariantMerge generated from: '<S8>/Variant Source5' incorporates:
     *  Constant: '<S69>/Constant1'
     *  Constant: '<S69>/Constant2'
     *  DataStoreRead: '<S69>/StatusByte_CT_SnsrCktLo'
     */
    rtb_VariantMerge_For_Variant_Source_V_os = (((((sint32)
        BRDR_ac_DW.StatusByte_CT_SnsrCktLo) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_CT_SnsrCktLo) & 64U) == 0U));

#elif Rte_SysCon_Variant_BRDR_3

    /* VariantMerge generated from: '<S8>/Variant Source4' incorporates:
     *  Inport: '<Root>/VeBSWR_b_HybBatPacCooOutTemSenCirHig'
     */
    (void)Rte_Read_VeBSWR_b_HybBatPacCooOutTemSenCirHig_Value
        (&rtb_VariantMerge_For_Variant_Source_V_h3);

    /* VariantMerge generated from: '<S8>/Variant Source5' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeBSWR_b_CT_SnsrCktLo_Value
        (&rtb_VariantMerge_For_Variant_Source_V_os);

#endif

    /* End of S-Function (sfix_bitop): '<S75>/Bitwise Operator1' */

    /* S-Function (sfix_bitop): '<S68>/Bitwise Operator1' incorporates:
     *  Logic: '<S68>/Logical Operator'
     *  Logic: '<S72>/Logical Operator'
     *  RelationalOperator: '<S68>/Relational Operator1'
     *  RelationalOperator: '<S68>/Relational Operator2'
     *  RelationalOperator: '<S72>/Relational Operator1'
     *  RelationalOperator: '<S72>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S68>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S72>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S72>/Bitwise Operator2'
     *  SignalConversion generated from: '<S8>/Variant Source6'
     *  SignalConversion generated from: '<S8>/Variant Source7'
     */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8)

    /* VariantMerge generated from: '<S8>/Variant Source6' incorporates:
     *  Constant: '<S68>/Constant1'
     *  Constant: '<S68>/Constant2'
     *  DataStoreRead: '<S68>/StatusByte_CT_SnsrCktHi'
     */
    rtb_VariantMerge_For_Variant_Source_Va_h = (((((sint32)
        BRDR_ac_DW.StatusByte_CT_SnsrCktHi) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_CT_SnsrCktHi) & 64U) == 0U));

    /* VariantMerge generated from: '<S8>/Variant Source7' incorporates:
     *  Constant: '<S72>/Constant1'
     *  Constant: '<S72>/Constant2'
     *  DataStoreRead: '<S72>/StatusByte_CoolCtrlVlv1Ckt'
     */
    rtb_VariantMerge_For_Variant_Source_V_j2 = (((((sint32)
        BRDR_ac_DW.StatusByte_CoolCtrlVlv1Ckt) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_CoolCtrlVlv1Ckt) & 64U) == 0U));

#elif Rte_SysCon_Variant_BRDR_3

    /* VariantMerge generated from: '<S8>/Variant Source6' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeBSWR_b_CT_SnsrCktHi_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_h);

    /* VariantMerge generated from: '<S8>/Variant Source7' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CoolCtrlVlv1Ckt'
     */
    (void)Rte_Read_VeBSWR_b_CoolCtrlVlv1Ckt_Value
        (&rtb_VariantMerge_For_Variant_Source_V_j2);

#endif

    /* End of S-Function (sfix_bitop): '<S68>/Bitwise Operator1' */

    /* S-Function (sfix_bitop): '<S71>/Bitwise Operator1' incorporates:
     *  Logic: '<S70>/Logical Operator'
     *  Logic: '<S71>/Logical Operator'
     *  RelationalOperator: '<S70>/Relational Operator1'
     *  RelationalOperator: '<S70>/Relational Operator2'
     *  RelationalOperator: '<S71>/Relational Operator1'
     *  RelationalOperator: '<S71>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S70>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S70>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S71>/Bitwise Operator2'
     *  SignalConversion generated from: '<S8>/Variant Source8'
     *  SignalConversion generated from: '<S8>/Variant Source9'
     */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8)

    /* VariantMerge generated from: '<S8>/Variant Source8' incorporates:
     *  Constant: '<S71>/Constant1'
     *  Constant: '<S71>/Constant2'
     *  DataStoreRead: '<S71>/StatusByte_CoolCtrlVlv1CktLo'
     */
    rtb_VariantMerge_For_Variant_Source_V_fx = (((((sint32)
        BRDR_ac_DW.StatusByte_CoolCtrlVlv1CktLo) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_CoolCtrlVlv1CktLo) & 64U) == 0U));

    /* VariantMerge generated from: '<S8>/Variant Source9' incorporates:
     *  Constant: '<S70>/Constant1'
     *  Constant: '<S70>/Constant2'
     *  DataStoreRead: '<S70>/StatusByte_CoolCtrlVlv1CktHi'
     */
    rtb_VariantMerge_For_Variant_Source_V_hw = (((((sint32)
        BRDR_ac_DW.StatusByte_CoolCtrlVlv1CktHi) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_CoolCtrlVlv1CktHi) & 64U) == 0U));

#elif Rte_SysCon_Variant_BRDR_3

    /* VariantMerge generated from: '<S8>/Variant Source8' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CoolCtrlVlv1CktLo'
     */
    (void)Rte_Read_VeBSWR_b_CoolCtrlVlv1CktLo_Value
        (&rtb_VariantMerge_For_Variant_Source_V_fx);

    /* VariantMerge generated from: '<S8>/Variant Source9' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CoolCtrlVlv1CktHi'
     */
    (void)Rte_Read_VeBSWR_b_CoolCtrlVlv1CktHi_Value
        (&rtb_VariantMerge_For_Variant_Source_V_hw);

#endif

    /* End of S-Function (sfix_bitop): '<S71>/Bitwise Operator1' */

    /* S-Function (sfix_bitop): '<S66>/Bitwise Operator1' incorporates:
     *  Logic: '<S65>/Logical Operator'
     *  Logic: '<S66>/Logical Operator'
     *  RelationalOperator: '<S65>/Relational Operator1'
     *  RelationalOperator: '<S65>/Relational Operator2'
     *  RelationalOperator: '<S66>/Relational Operator1'
     *  RelationalOperator: '<S66>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S65>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S65>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S66>/Bitwise Operator2'
     *  SignalConversion generated from: '<S8>/Variant Source10'
     *  SignalConversion generated from: '<S8>/Variant Source11'
     */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8)

    /* VariantMerge generated from: '<S8>/Variant Source10' incorporates:
     *  Constant: '<S66>/Constant1'
     *  Constant: '<S66>/Constant2'
     *  DataStoreRead: '<S66>/StatusByte_AC_RefrigPresSnsrALo'
     */
    rtb_VariantMerge_For_Variant_Source_Va_c = (((((sint32)
        BRDR_ac_DW.StatusByte_AC_RefrigPresSnsrALo) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_AC_RefrigPresSnsrALo) & 64U) == 0U));

    /* VariantMerge generated from: '<S8>/Variant Source11' incorporates:
     *  Constant: '<S65>/Constant1'
     *  Constant: '<S65>/Constant2'
     *  DataStoreRead: '<S65>/StatusByte_AC_RefrigPresSnsrAHi'
     */
    rtb_VariantMerge_For_Variant_Source_Va_f = (((((sint32)
        BRDR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi) & 64U) == 0U));

#elif Rte_SysCon_Variant_BRDR_3

    /* VariantMerge generated from: '<S8>/Variant Source10' incorporates:
     *  Inport: '<Root>/VeBSWR_b_AC_RefrigPresSnsrALo'
     */
    (void)Rte_Read_VeBSWR_b_AC_RefrigPresSnsrALo_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_c);

    /* VariantMerge generated from: '<S8>/Variant Source11' incorporates:
     *  Inport: '<Root>/VeBSWR_b_AC_RefrigPresSnsrAHi'
     */
    (void)Rte_Read_VeBSWR_b_AC_RefrigPresSnsrAHi_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_f);

#endif

    /* End of S-Function (sfix_bitop): '<S66>/Bitwise Operator1' */

    /* S-Function (sfix_bitop): '<S77>/Bitwise Operator1' incorporates:
     *  Logic: '<S77>/Logical Operator'
     *  Logic: '<S78>/Logical Operator'
     *  RelationalOperator: '<S77>/Relational Operator1'
     *  RelationalOperator: '<S77>/Relational Operator2'
     *  RelationalOperator: '<S78>/Relational Operator1'
     *  RelationalOperator: '<S78>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S77>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S78>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S78>/Bitwise Operator2'
     *  SignalConversion generated from: '<S8>/Variant Source12'
     *  SignalConversion generated from: '<S8>/Variant Source13'
     */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_33 && Rte_SysCon_Variant_BRDR_23) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8)

    /* VariantMerge generated from: '<S8>/Variant Source12' incorporates:
     *  Constant: '<S77>/Constant1'
     *  Constant: '<S77>/Constant2'
     *  DataStoreRead: '<S77>/StatusByte_MtrElect_CT_SnsrCktHi'
     */
    rtb_VariantMerge_For_Variant_Source_Va_o = (((((sint32)
        BRDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktHi) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktHi) & 64U) == 0U));

    /* VariantMerge generated from: '<S8>/Variant Source13' incorporates:
     *  Constant: '<S78>/Constant1'
     *  Constant: '<S78>/Constant2'
     *  DataStoreRead: '<S78>/StatusByte_MtrElect_CT_SnsrCktLo'
     */
    rtb_VariantMerge_For_Variant_Source_V_dd = (((((sint32)
        BRDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktLo) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_MtrElect_CT_SnsrCktLo) & 64U) == 0U));

#elif Rte_SysCon_Variant_BRDR_3

    /* VariantMerge generated from: '<S8>/Variant Source12' incorporates:
     *  Inport: '<Root>/VeBSWR_b_MtrElect_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeBSWR_b_MtrElect_CT_SnsrCktHi_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_o);

    /* VariantMerge generated from: '<S8>/Variant Source13' incorporates:
     *  Inport: '<Root>/VeBSWR_b_MtrElect_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeBSWR_b_MtrElect_CT_SnsrCktLo_Value
        (&rtb_VariantMerge_For_Variant_Source_V_dd);

#endif

    /* End of S-Function (sfix_bitop): '<S77>/Bitwise Operator1' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_IsDiagGlobalConditionsValid' */
#if Rte_SysCon_Variant_BRDR_1

    /* VariantMerge generated from: '<S4>/VeBRDR_b_IsDiagGlobalConditionsValid' */
    rtb_VeBRDR_b_IsDiagGlobalConditionsValid =
        VeBRDR_b_IsDiagGlobalConditionsValid;

#else

    /* VariantMerge generated from: '<S4>/VeBRDR_b_IsDiagGlobalConditionsValid' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_IsDiagGlobalConditionsValid'
     */
    rtb_VeBRDR_b_IsDiagGlobalConditionsValid = false;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_IsDiagGlobalConditionsValid' */

    /* S-Function (sfix_bitop): '<S357>/Bitwise Operator2' incorporates:
     *  Logic: '<S351>/Logical Operator1'
     *  Logic: '<S351>/Logical Operator12'
     *  Logic: '<S351>/Logical Operator13'
     *  Logic: '<S351>/Logical Operator2'
     *  Logic: '<S351>/Logical Operator3'
     *  Logic: '<S354>/Logical Operator'
     *  Logic: '<S357>/Logical Operator'
     *  RelationalOperator: '<S351>/Relational Operator'
     *  RelationalOperator: '<S354>/Relational Operator1'
     *  RelationalOperator: '<S354>/Relational Operator2'
     *  RelationalOperator: '<S357>/Relational Operator1'
     *  RelationalOperator: '<S357>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S354>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S354>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S357>/Bitwise Operator1'
     */
#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

    /* Outputs for Atomic SubSystem: '<S351>/Timer Retrigger Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S351>/EdgeRising' */
    /* Logic: '<S351>/Logical Operator1' incorporates:
     *  Constant: '<S357>/Constant1'
     *  Constant: '<S357>/Constant2'
     *  Constant: '<S363>/Calib'
     *  DataStoreRead: '<S357>/StatusByte_BattCoolPmpOveSpd'
     */
    rtb_LogicalOperator1 = ((((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpOveSpd)
        & 1U) == 0U) || ((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpOveSpd) &
                          64U) != 0U)) || (KeBRDR_b_LTAP_DryRunDsbl_TmpRat));

    /* Logic: '<S351>/Logical Operator12' incorporates:
     *  Constant: '<S354>/Constant1'
     *  Constant: '<S354>/Constant2'
     *  Constant: '<S365>/Calib'
     *  DataStoreRead: '<S354>/StatusByte_BattCoolPmpPerf'
     */
    rtb_LogicalOperator12 = ((((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpPerf)
        & 1U) == 0U) || ((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U)
                         != 0U)) || (KeBRDR_b_LTAP_PerfDsbl_TmpRat));

    /* RelationalOperator: '<S351>/Relational Operator' incorporates:
     *  Constant: '<S366>/Calib'
     */
    rtb_RelationalOperator = (rtb_TmpSignalConversionAtVePMIR_n_LTActv >
        KeBRDR_n_MinDiag_LTAP_RPM);

    /* Logic: '<S355>/AND' incorporates:
     *  Logic: '<S355>/OR1'
     *  UnitDelay: '<S355>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = (rtb_RelationalOperator &&
        (!BRDR_ac_DW.UnitDelay_DSTATE_pf));

    /* Update for UnitDelay: '<S355>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_pf = rtb_RelationalOperator;

    /* Switch: '<S368>/Switch1' incorporates:
     *  Constant: '<S367>/Calib'
     *  Switch: '<S368>/Switch2'
     *  UnitDelay: '<S368>/Unit Delay'
     */
    if (rtb_VM_Conditional_Signal_BPCM_Comm_0)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_d = KeBRDR_t_MinDiag_LTAPOnTime;
    }
    else
    {
        if (rtb_RelationalOperator)
        {
            /* UnitDelay: '<S368>/Unit Delay' incorporates:
             *  Constant: '<S358>/Calib'
             *  Constant: '<S368>/Constant Value4'
             *  MinMax: '<S368>/Maximum'
             *  Sum: '<S368>/Subtraction'
             *  Switch: '<S368>/Switch2'
             */
            BRDR_ac_DW.UnitDelay_DSTATE_d = fmaxf(BRDR_ac_DW.UnitDelay_DSTATE_d
                - HeBRDR_t_MedTEH, 0.0F);
        }
    }

    /* End of Switch: '<S368>/Switch1' */

    /* Logic: '<S351>/Logical Operator3' incorporates:
     *  Constant: '<S368>/Constant Value2'
     *  RelationalOperator: '<S368>/Greater  Than1'
     *  UnitDelay: '<S368>/Unit Delay'
     */
    rtb_LogicalOperator3 = (BRDR_ac_DW.UnitDelay_DSTATE_d <= 0.0F);

    /* End of Outputs for SubSystem: '<S351>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S351>/Timer Retrigger Reset Enabled' */
#endif

    /* End of S-Function (sfix_bitop): '<S357>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_LTAPFunPerFltDtct_AD' */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_19) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_3)

    /* VariantMerge generated from: '<S4>/VeBRDR_b_LTAPFunPerFltDtct_AD' */
    rtb_VeBRDR_b_LTAPFunPerFltDtct_AD = VeBRDR_b_LTAPFunPerFltDtct_AD;

#elif (!(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_3) || (!(!Rte_SysCon_Variant_BRDR_4) && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_3) || !Rte_SysCon_Variant_BRDR_1

    /* VariantMerge generated from: '<S4>/VeBRDR_b_LTAPFunPerFltDtct_AD' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_LTAPFunPerFltDtct_AD'
     */
    rtb_VeBRDR_b_LTAPFunPerFltDtct_AD = false;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_LTAPFunPerFltDtct_AD' */

    /* Logic: '<S351>/Logical Operator4' incorporates:
     *  Logic: '<S351>/Logical Operator5'
     *  Logic: '<S351>/Logical Operator6'
     *  Logic: '<S351>/Logical Operator7'
     */
#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

    /* Logic: '<S351>/Logical Operator7' incorporates:
     *  Constant: '<S362>/Calib'
     *  Constant: '<S364>/Calib'
     */
    rtb_LogicalOperator7 = (((!rtb_VeBRDR_b_LTAPFunPerFltDtct_AD) ||
        (KeBRDR_b_LTAP_FunPerFltDtct_D)) &&
                            (rtb_TmpSignalConversionAtVeCPDR_b_LTAP_F ||
        (KeBRDR_b_LTAPPerFltEnbl_D)));

#endif

    /* End of Logic: '<S351>/Logical Operator4' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_EstSlopeAngle_FA'
     * */
#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23

    /* VariantMerge generated from: '<S4>/VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD' */
    rtb_VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD =
        VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD;

    /* VariantMerge generated from: '<S4>/VeBRDR_b_EstSlopeAngle_FA' */
    rtb_VeBRDR_b_EstSlopeAngle_FA = VeBRDR_b_EstSlopeAngle_FA;

#elif !(!Rte_SysCon_Variant_BRDR_3) || !Rte_SysCon_Variant_BRDR_1 || !Rte_SysCon_Variant_BRDR_23

    /* VariantMerge generated from: '<S4>/VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD'
     */
    rtb_VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD = false;

    /* VariantMerge generated from: '<S4>/VeBRDR_b_EstSlopeAngle_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_EstSlopeAngle_FA'
     */
    rtb_VeBRDR_b_EstSlopeAngle_FA = false;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD' */

    /* S-Function (sfix_bitop): '<S1223>/Bitwise Operator2' incorporates:
     *  Logic: '<S1223>/Logical Operator'
     *  Logic: '<S16>/Logical2'
     *  Logic: '<S16>/Logical_ThrmlRlyCtrlCkt'
     *  RelationalOperator: '<S1223>/Relational Operator1'
     *  RelationalOperator: '<S1223>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1223>/Bitwise Operator1'
     */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_23)

    /* Logic: '<S16>/Logical_ThrmlRlyCtrlCkt' incorporates:
     *  Constant: '<S1223>/Constant1'
     *  Constant: '<S1223>/Constant2'
     *  Constant: '<S1224>/Calib'
     *  DataStoreRead: '<S1223>/StatusByte_ThrmlRlyCtrlCkt'
     */
    rtb_LeBRDR_b_ThrmlRlyCtrlCkt = ((((((sint32)
        BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) != 0U)) ||
        (KeBRDR_b_ThrmlRlyCtrlCkt_D));

#endif

    /* End of S-Function (sfix_bitop): '<S1223>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_VehSpd_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_phi_EstRollAngleAtZeroSpd'
     */
#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23

    /* VariantMerge generated from: '<S4>/VeBRDR_b_VehSpd_FA' */
    rtb_VeBRDR_b_VehSpd_FA = VeBRDR_b_VehSpd_FA;

    /* VariantMerge generated from: '<S4>/VeBRDR_phi_EstRollAngleAtZeroSpd' */
    rtb_VeBRDR_phi_EstRollAngleAtZeroSpd = VeBRDR_phi_EstRollAngleAtZeroSpd;

#elif !(!Rte_SysCon_Variant_BRDR_3) || !Rte_SysCon_Variant_BRDR_1 || !Rte_SysCon_Variant_BRDR_23

    /* VariantMerge generated from: '<S4>/VeBRDR_b_VehSpd_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_VehSpd_FA'
     */
    rtb_VeBRDR_b_VehSpd_FA = false;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_VehSpd_FA' */

    /* SignalConversion generated from: '<S4>/VeBRDR_phi_EstSlopeAngle' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_phi_EstRollAngleAtZeroSpd'
     */
#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23

    /* VariantMerge generated from: '<S4>/VeBRDR_phi_EstSlopeAngle' */
    rtb_VeBRDR_phi_EstSlopeAngle = VeBRDR_phi_EstSlopeAngle;

#elif !(!Rte_SysCon_Variant_BRDR_3) || !Rte_SysCon_Variant_BRDR_1 || !Rte_SysCon_Variant_BRDR_23

    /* VariantMerge generated from: '<S4>/VeBRDR_phi_EstRollAngleAtZeroSpd' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_phi_EstRollAngleAtZeroSpd'
     */
    rtb_VeBRDR_phi_EstRollAngleAtZeroSpd = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_phi_EstSlopeAngle' */

    /* SignalConversion generated from: '<S4>/VeBRDR_v_VehSpd' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_phi_EstSlopeAngle'
     */
#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23

    /* VariantMerge generated from: '<S4>/VeBRDR_v_VehSpd' */
    rtb_VeBRDR_v_VehSpd = VeBRDR_v_VehSpd;

#elif !(!Rte_SysCon_Variant_BRDR_3) || !Rte_SysCon_Variant_BRDR_1 || !Rte_SysCon_Variant_BRDR_23

    /* VariantMerge generated from: '<S4>/VeBRDR_phi_EstSlopeAngle' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_phi_EstSlopeAngle'
     */
    rtb_VeBRDR_phi_EstSlopeAngle = 0.0F;

    /* VariantMerge generated from: '<S4>/VeBRDR_v_VehSpd' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_v_VehSpd'
     */
    rtb_VeBRDR_v_VehSpd = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_v_VehSpd' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_DsblDiagFailSafe' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_PostCodeClrDiagDsbl'
     * */
#if (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_24) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_31) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_34) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8)

    /* Logic: '<S473>/Logical Operator1' */
    rtb_LogicalOperator1_b = VeBRDR_b_DsblDiagFailSafe;

    /* Logic: '<S13>/Logical8' */
    rtb_LeBRDR_b_MainRelayOK = VeBRDR_b_PostCodeClrDiagDsbl;

#elif !Rte_SysCon_Variant_BRDR_1 || (!Rte_SysCon_Variant_BRDR_12 && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_24 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_31 && !Rte_SysCon_Variant_BRDR_34 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_8)

    /* Logic: '<S473>/Logical Operator1' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_DsblDiagFailSafe'
     */
    rtb_LogicalOperator1_b = false;

    /* Logic: '<S13>/Logical8' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_PostCodeClrDiagDsbl'
     */
    rtb_LeBRDR_b_MainRelayOK = false;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_DsblDiagFailSafe' */

    /* Logic: '<S12>/NOT4' incorporates:
     *  Gain: '<S14>/Gain'
     *  Gain: '<S15>/Gain'
     */
#if Rte_SysCon_Variant_BRDR_12 || Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21 || Rte_SysCon_Variant_BRDR_23 || Rte_SysCon_Variant_BRDR_24 || Rte_SysCon_Variant_BRDR_28 || Rte_SysCon_Variant_BRDR_31 || Rte_SysCon_Variant_BRDR_34 || Rte_SysCon_Variant_BRDR_6 || Rte_SysCon_Variant_BRDR_8

    /* Gain: '<S14>/Gain' */
    VeBRDR_b_ResetCnts = (rtb_LogicalOperator1_b || rtb_LeBRDR_b_MainRelayOK);

    /* Gain: '<S15>/Gain' */
    VeBRDR_b_ResetFOMs = rtb_LeBRDR_b_MainRelayOK;

#endif

    /* End of Logic: '<S12>/NOT4' */

    /* Outputs for Atomic SubSystem: '<S11>/BatCltLvlLo' */
#if Rte_SysCon_Variant_BRDR_23

    /* Outputs for Atomic SubSystem: '<S1089>/If_DTC_P2BE0' */
    /* Switch: '<S1109>/Switch1' incorporates:
     *  Abs: '<S1111>/Abs'
     *  Abs: '<S1111>/Abs1'
     *  Constant: '<S1111>/Constant Value4'
     *  Constant: '<S1113>/Calib'
     *  Constant: '<S1114>/Calib'
     *  Constant: '<S1115>/Calib'
     *  Constant: '<S1116>/Constant'
     *  Constant: '<S1117>/Constant'
     *  Constant: '<S1117>/Constant1'
     *  Constant: '<S1118>/Calib'
     *  Constant: '<S1119>/Calib'
     *  Constant: '<S1120>/Calib'
     *  Constant: '<S1121>/Calib'
     *  Constant: '<S1122>/Calib'
     *  Constant: '<S1125>/Calib'
     *  DataStoreRead: '<S1116>/VeDFIB_y_StatusByte_BattCoolLvlSnsCkt'
     *  DataStoreRead: '<S1117>/StatusByte_BattCoolLvlSnsCkt'
     *  Logic: '<S1101>/Logical'
     *  Logic: '<S1101>/Logical1'
     *  Logic: '<S1101>/Logical10'
     *  Logic: '<S1101>/Logical11'
     *  Logic: '<S1101>/Logical12'
     *  Logic: '<S1101>/Logical13'
     *  Logic: '<S1101>/Logical32'
     *  Logic: '<S1101>/Logical4'
     *  Logic: '<S1101>/Logical5'
     *  Logic: '<S1101>/Logical6'
     *  Logic: '<S1101>/Logical7'
     *  Logic: '<S1110>/Logical2'
     *  Logic: '<S1111>/Logical8'
     *  Logic: '<S1112>/Logical3'
     *  Logic: '<S1117>/Logical Operator'
     *  Logic: '<S1124>/Logical1'
     *  Logic: '<S1124>/Logical2'
     *  Lookup_n-D: '<S1123>/Vector'
     *  Product: '<S1124>/Product'
     *  RelationalOperator: '<S1109>/Comparison4'
     *  RelationalOperator: '<S1111>/Comparison1'
     *  RelationalOperator: '<S1111>/Comparison3'
     *  RelationalOperator: '<S1111>/Comparison5'
     *  RelationalOperator: '<S1112>/Comparison2'
     *  RelationalOperator: '<S1116>/Relational Operator'
     *  RelationalOperator: '<S1117>/Relational Operator'
     *  RelationalOperator: '<S1117>/Relational Operator1'
     *  RelationalOperator: '<S1124>/Comparison1'
     *  RelationalOperator: '<S1124>/Comparison4'
     *  S-Function (sfix_bitop): '<S1116>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S1117>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1117>/Bitwise Operator7'
     *  SignalConversion generated from: '<S1098>/Variant Source9'
     *  SignalConversion generated from: '<S1>/VePMIR_e_LTActvPumpDryRun'
     *  Switch: '<S1110>/Switch2'
     *  Switch: '<S1111>/Switch3'
     *  Switch: '<S1130>/Switch1'
     *  UnitDelay: '<S1124>/Unit Delay'
     *  UnitDelay: '<S1124>/Unit Delay2'
     */
#if !Rte_SysCon_Variant_BRDR_3

    /* Outputs for Enabled SubSystem: '<S1124>/Raw_SignalSet' */
    /* Outputs for Atomic SubSystem: '<S1124>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S1124>/Counter Reset  Enabled ' */
    /* RelationalOperator: '<S1112>/Comparison2' incorporates:
     *  Constant: '<S1127>/Calib'
     */
    rtb_Comparison2_dw = (rtb_VeBRDR_v_VehSpd < KeBRDR_v_VehicleStationary_Lim);

    /* Switch: '<S1128>/Switch2' incorporates:
     *  Constant: '<S1128>/Constant Value2'
     *  Switch: '<S1128>/Switch1'
     *  UnitDelay: '<S1124>/Unit Delay'
     *  UnitDelay: '<S1128>/Unit Delay'
     */
    if (rtb_Comparison2_dw != BRDR_ac_DW.UnitDelay_DSTATE_oom)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_pz = 0U;
    }
    else
    {
        /* UnitDelay: '<S1128>/Unit Delay' incorporates:
         *  Constant: '<S1128>/Constant Value1'
         *  Sum: '<S1128>/Subtraction'
         *  Switch: '<S1128>/Switch2'
         */
        BRDR_ac_DW.UnitDelay_DSTATE_pz = (uint16)(((uint32)
            BRDR_ac_DW.UnitDelay_DSTATE_pz) + 1U);
    }

    /* End of Switch: '<S1128>/Switch2' */

    /* RelationalOperator: '<S1124>/Comparison1' incorporates:
     *  Constant: '<S1124>/Constant Value'
     *  Constant: '<S1126>/Calib'
     *  UnitDelay: '<S1128>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = (((float32)
        BRDR_ac_DW.UnitDelay_DSTATE_pz) >= (KeBRDR_t_VehSpd_DebouTime * 10.0F));

    /* Logic: '<S1129>/AND' incorporates:
     *  Logic: '<S1129>/OR1'
     *  UnitDelay: '<S1129>/Unit Delay'
     */
    rtb_AND_cs = (rtb_VM_Conditional_Signal_BPCM_Comm_0 &&
                  (!BRDR_ac_DW.UnitDelay_DSTATE_f2));

    /* Update for UnitDelay: '<S1129>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_f2 = rtb_VM_Conditional_Signal_BPCM_Comm_0;
    BRDR_ac_DW.UnitDelay_DSTATE_oom = BRDR_ac_DW.UnitDelay2_DSTATE;
    BRDR_ac_DW.UnitDelay_DSTATE_oom = ((!KeBRDR_b_VhcSpd_DisbDebnc_RST) &&
        (BRDR_ac_DW.UnitDelay_DSTATE_oom));

    /* Outputs for Enabled SubSystem: '<S1124>/Raw_SignalSet' incorporates:
     *  EnablePort: '<S1131>/Enable'
     */
    if (rtb_AND_cs || (BRDR_ac_DW.UnitDelay_DSTATE_oom))
    {
        /* SignalConversion generated from: '<S1131>/Out1' incorporates:
         *  Constant: '<S1131>/Constant Value1'
         */
        BRDR_ac_B.OutportBufferForOut1 = false;

        /* Gain: '<S1132>/Gain' */
        VeBRDR_b_Veh_Speed_Chk_delyd = rtb_Comparison2_dw;
    }

    /* Abs: '<S1111>/Abs' incorporates:
     *  Constant: '<S1125>/Calib'
     *  UnitDelay: '<S1124>/Unit Delay'
     */
    VeBRDR_phi_EstSlopeAngle_Abs = fabsf(rtb_VeBRDR_phi_EstSlopeAngle);

    /* Abs: '<S1111>/Abs1' */
    VeBRDR_phi_EstRollAngleAtZeroSpd_Abs = fabsf
        (rtb_VeBRDR_phi_EstRollAngleAtZeroSpd);

    /* Lookup_n-D: '<S1123>/Vector' incorporates:
     *  Abs: '<S1111>/Abs'
     *  Abs: '<S1111>/Abs1'
     */
    VeBRDR_phi_VehPitchRoll_NrmlzEnb = look2_iflf_binlca_16a
        (VeBRDR_phi_EstSlopeAngle_Abs, VeBRDR_phi_EstRollAngleAtZeroSpd_Abs, ((
           const float32 *)&(KxBRDR_phi_VehPitchRoll_NrmlzEnb[0])), ((const
           float32 *)&(KyBRDR_phi_VehPitchRoll_NrmlzEnb[0])), ((const float32 *)
          &(KtBRDR_phi_VehPitchRoll_NrmlzEnb[0])),
         BRDR_ac_ConstP.Vector_maxIndex, 3U);
    if (KeBRDR_b_VehPitchRoll_EnbApp_SD)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_oom = ((VeBRDR_phi_EstSlopeAngle_Abs <
            KeBRDR_phi_EstSlopeAngle_Lim) &&
            (VeBRDR_phi_EstRollAngleAtZeroSpd_Abs <
             KeBRDR_phi_EstRollAngleAtZeroSpd_Lim));
    }
    else
    {
        BRDR_ac_DW.UnitDelay_DSTATE_oom = (VeBRDR_phi_VehPitchRoll_NrmlzEnb <
            10.0F);
    }

    if (KeBRDR_b_SGSB_Desc_SD)
    {
        rtb_AND_cs = KeBRDR_b_SGSB_Desc_Dial;
    }
    else
    {
        rtb_AND_cs = (((((sint32)BRDR_ac_DW.StatusByte_BattCoolLvlSnsCkt) & 2) >
                       0) || (((((uint32)BRDR_ac_DW.StatusByte_BattCoolLvlSnsCkt)
                                & 64U) == 0U) && ((((uint32)
                          BRDR_ac_DW.StatusByte_BattCoolLvlSnsCkt) & 2U) == 0U)));
    }

    if (KeBRDR_b_RqtLoLvDiag_tim_SD)
    {
        rtb_VM_Conditional_Signal_BPCM_Comm_0 = KeBRDR_b_RqtLoLvDiag_tim_Dial;
    }
    else
    {
        rtb_VM_Conditional_Signal_BPCM_Comm_0 =
            (rtb_TmpSignalConversionAtVePMIR_e_LTActv == KeBRDR_e_LTAPDryRun_Dry);
    }

    /* Logic: '<S1100>/AND1' incorporates:
     *  Constant: '<S1103>/Calib'
     *  Constant: '<S1104>/Calib'
     *  Constant: '<S1105>/Calib'
     *  Constant: '<S1106>/Calib'
     *  Constant: '<S1107>/Calib'
     *  Constant: '<S1108>/Calib'
     *  Constant: '<S1111>/Constant Value4'
     *  Constant: '<S1113>/Calib'
     *  Constant: '<S1114>/Calib'
     *  Constant: '<S1115>/Calib'
     *  Constant: '<S1116>/Constant'
     *  Constant: '<S1117>/Constant'
     *  Constant: '<S1117>/Constant1'
     *  Constant: '<S1118>/Calib'
     *  Constant: '<S1119>/Calib'
     *  Constant: '<S1120>/Calib'
     *  Constant: '<S1121>/Calib'
     *  Constant: '<S1122>/Calib'
     *  DataStoreRead: '<S1116>/VeDFIB_y_StatusByte_BattCoolLvlSnsCkt'
     *  DataStoreRead: '<S1117>/StatusByte_BattCoolLvlSnsCkt'
     *  Logic: '<S1110>/Logical2'
     *  Logic: '<S1111>/Logical8'
     *  Logic: '<S1117>/Logical Operator'
     *  RelationalOperator: '<S1109>/Comparison4'
     *  RelationalOperator: '<S1111>/Comparison1'
     *  RelationalOperator: '<S1111>/Comparison3'
     *  RelationalOperator: '<S1111>/Comparison5'
     *  RelationalOperator: '<S1116>/Relational Operator'
     *  RelationalOperator: '<S1117>/Relational Operator'
     *  RelationalOperator: '<S1117>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1116>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S1117>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1117>/Bitwise Operator7'
     *  SignalConversion generated from: '<S1>/VePMIR_e_LTActvPumpDryRun'
     *  UnitDelay: '<S1124>/Unit Delay'
     */
    rtb_AND_cs = (((((((((((rtb_VeBRDR_b_IsDiagGlobalConditionsValid ||
                            (KeBRDR_b_SysVoltRange)) &&
                           ((!rtb_TmpSignalConversionAtVePMIR_b_LTAc_a) ||
                            (KeBRDR_b_LTAPDryRun_FA_Ovrd))) &&
                          ((!rtb_VeBRDR_b_VehSpd_FA) || (KeBRDR_b_VehSpd_FA_Ovrd)))
                         && ((!rtb_VeBRDR_b_EstSlopeAngle_FA) ||
                          (KeBRDR_b_EstSlopeAngleFA_Ovrd))) &&
                        ((VeBRDR_b_Veh_Speed_Chk_delyd) && rtb_Comparison2_dw)) &&
                       (BRDR_ac_DW.UnitDelay_DSTATE_oom)) &&
                      ((!rtb_VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD) ||
                       (KeBRDR_b_EstRollAngleFA_Ovrd))) && rtb_AND_cs) &&
                    rtb_VM_Conditional_Signal_BPCM_Comm_0) &&
                   rtb_LeBRDR_b_ThrmlRlyCtrlCkt) &&
                  (rtb_TmpSignalConversionAtVePMTR_b_ThrmlS ||
                   (KeBRDR_b_DsblThrmSysEnbl_ClntLo)));

    /* End of Outputs for SubSystem: '<S1124>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S1124>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S1124>/Raw_SignalSet' */
#else

    /* Outputs for Atomic SubSystem: '<S1098>/EnableM182' */
    /* Logic: '<S1100>/AND1' incorporates:
     *  Logic: '<S1133>/AND'
     *  SignalConversion generated from: '<S1098>/Variant Source9'
     */
    rtb_AND_cs = rtb_VeBRDR_b_IsDiagGlobalConditionsValid;

    /* End of Outputs for SubSystem: '<S1098>/EnableM182' */
#endif

    /* End of Switch: '<S1109>/Switch1' */

    /* SignalConversion generated from: '<S1098>/Variant Source9' */
    VeBRDR_b_HVBatCltLvLo_DiagEnbl = rtb_AND_cs;

    /* UnitDelay: '<S1136>/Unit Delay' incorporates:
     *  Gain: '<S1144>/Gain'
     *  Gain: '<S1148>/Gain'
     *  Logic: '<S1134>/Logical2'
     *  Logic: '<S1134>/Logical3'
     *  Logic: '<S1136>/Logical2'
     *  Logic: '<S1137>/Logical2'
     *  Product: '<S1136>/Product'
     *  Product: '<S1137>/Product'
     *  RelationalOperator: '<S1135>/Comparison5'
     *  RelationalOperator: '<S1136>/Comparison1'
     *  RelationalOperator: '<S1136>/Comparison4'
     *  RelationalOperator: '<S1137>/Comparison1'
     *  RelationalOperator: '<S1137>/Comparison4'
     *  UnitDelay: '<S1137>/Unit Delay'
     */
#if !Rte_SysCon_Variant_BRDR_33

    /* Outputs for Enabled SubSystem: '<S1137>/Raw_SignalSet' */
    /* Outputs for Atomic SubSystem: '<S1137>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S1137>/Counter Reset  Enabled 1' */
    /* Outputs for Enabled SubSystem: '<S1136>/Raw_SignalSet' */
    /* Outputs for Atomic SubSystem: '<S1136>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S1136>/Counter Reset  Enabled ' */
    /* Switch: '<S1141>/Switch2' incorporates:
     *  Constant: '<S1141>/Constant Value2'
     *  Switch: '<S1141>/Switch1'
     *  UnitDelay: '<S1141>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeTRIR_b_BatBot !=
            BRDR_ac_DW.UnitDelay_DSTATE_fm)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_k = 0U;
    }
    else
    {
        /* UnitDelay: '<S1141>/Unit Delay' incorporates:
         *  Constant: '<S1141>/Constant Value1'
         *  Sum: '<S1141>/Subtraction'
         *  Switch: '<S1141>/Switch2'
         */
        BRDR_ac_DW.UnitDelay_DSTATE_k = (uint16)(((uint32)
            BRDR_ac_DW.UnitDelay_DSTATE_k) + 1U);
    }

    /* End of Switch: '<S1141>/Switch2' */

    /* RelationalOperator: '<S1136>/Comparison1' incorporates:
     *  Constant: '<S1136>/Constant Value'
     *  Constant: '<S1139>/Calib'
     *  UnitDelay: '<S1141>/Unit Delay'
     */
    rtb_AND_cs = (((float32)BRDR_ac_DW.UnitDelay_DSTATE_k) >=
                  (KeBRDR_t_OC_LoLvCltDet_DebTime * 10.0F));

    /* Logic: '<S1142>/AND' incorporates:
     *  Logic: '<S1142>/OR1'
     *  UnitDelay: '<S1142>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = (rtb_AND_cs &&
        (!BRDR_ac_DW.UnitDelay_DSTATE_he));

    /* Update for UnitDelay: '<S1142>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_he = rtb_AND_cs;

    /* Outputs for Enabled SubSystem: '<S1136>/Raw_SignalSet' incorporates:
     *  EnablePort: '<S1143>/Enable'
     */
    if (rtb_VM_Conditional_Signal_BPCM_Comm_0)
    {
        BRDR_ac_B.VeTRIR_b_BatBotlClntLoLvl_OC =
            rtb_TmpSignalConversionAtVeTRIR_b_BatBot;
    }

    /* Logic: '<S1134>/Logical3' incorporates:
     *  Constant: '<S1138>/Calib'
     *  Inport: '<S1143>/VeTRIR_b_BatBotlClntLoLvl_OC'
     */
    rtb_Logical3_pe = (rtb_VariantMerge_For_Variant_Source_Vari &&
                       (KeBRDR_b_Enbl_BtlSnsrSG));

    /* Switch: '<S1145>/Switch2' incorporates:
     *  Constant: '<S1145>/Constant Value2'
     *  Switch: '<S1145>/Switch1'
     *  UnitDelay: '<S1145>/Unit Delay'
     */
    if (rtb_Logical3_pe != BRDR_ac_DW.UnitDelay_DSTATE_dp)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_gc = 0U;
    }
    else
    {
        /* UnitDelay: '<S1145>/Unit Delay' incorporates:
         *  Constant: '<S1145>/Constant Value1'
         *  Sum: '<S1145>/Subtraction'
         *  Switch: '<S1145>/Switch2'
         */
        BRDR_ac_DW.UnitDelay_DSTATE_gc = (uint16)(((uint32)
            BRDR_ac_DW.UnitDelay_DSTATE_gc) + 1U);
    }

    /* End of Switch: '<S1145>/Switch2' */

    /* RelationalOperator: '<S1137>/Comparison1' incorporates:
     *  Constant: '<S1137>/Constant Value'
     *  Constant: '<S1140>/Calib'
     *  UnitDelay: '<S1145>/Unit Delay'
     */
    rtb_AND_cs = (((float32)BRDR_ac_DW.UnitDelay_DSTATE_gc) >=
                  (KeBRDR_t_SG_LoLvCltDet_DebTime * 10.0F));

    /* Logic: '<S1146>/AND' incorporates:
     *  Logic: '<S1146>/OR1'
     *  UnitDelay: '<S1146>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = (rtb_AND_cs &&
        (!BRDR_ac_DW.UnitDelay_DSTATE_dr));

    /* Update for UnitDelay: '<S1146>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_dr = rtb_AND_cs;

    /* Outputs for Enabled SubSystem: '<S1137>/Raw_SignalSet' incorporates:
     *  EnablePort: '<S1147>/Enable'
     */
    if (rtb_VM_Conditional_Signal_BPCM_Comm_0)
    {
        BRDR_ac_B.In1 = rtb_Logical3_pe;
    }

    /* Gain: '<S1148>/Gain' incorporates:
     *  Inport: '<S1147>/In1'
     */
    VeBRDR_b_LoLvSG_LatchdImpct_delyd = BRDR_ac_B.In1;

    /* VariantMerge generated from: '<S1099>/Variant Source9' */
    rtb_VariantMerge_For_Variant_Source_Va_d =
        ((BRDR_ac_B.VeTRIR_b_BatBotlClntLoLvl_OC) ||
         (VeBRDR_b_LoLvSG_LatchdImpct_delyd));

    /* End of Outputs for SubSystem: '<S1136>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S1136>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S1136>/Raw_SignalSet' */
    /* End of Outputs for SubSystem: '<S1137>/Counter Reset  Enabled 1' */
    /* End of Outputs for SubSystem: '<S1137>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1137>/Raw_SignalSet' */
#else

    /* VariantMerge generated from: '<S1099>/Variant Source9' incorporates:
     *  Constant: '<S1149>/Calib'
     *  RelationalOperator: '<S1135>/Comparison5'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d =
        (rtb_TmpSignalConversionAtVeTRIR_U_BatBot >
         KeBRDR_U_STGCktHiFltLim_BatBotlClnt);

#endif

    /* End of UnitDelay: '<S1136>/Unit Delay' */

    /* Outputs for Atomic SubSystem: '<S1095>/DiagMachine' */
    /* Logic: '<S1100>/AND1' incorporates:
     *  Constant: '<S1158>/Calib'
     */
    rtb_AND_cs = ((VeBRDR_b_HVBatCltLvLo_DiagEnbl) &&
                  (KeBRDR_b_HVBatCltLvLo_OC_XYEnbl));

    /* RelationalOperator: '<S1159>/Relational Operator3' incorporates:
     *  Constant: '<S1159>/Constant3'
     *  DataStoreRead: '<S1160>/StatusByte_BattCoolLvlLow'
     *  S-Function (sfix_bitop): '<S1159>/Bitwise Operator2'
     */
    rtb_VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD = ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S1159>/EdgeFalling1' */
    /* Logic: '<S1159>/Logical Operator' incorporates:
     *  Logic: '<S1162>/OR1'
     */
    rtb_VeBRDR_b_EstSlopeAngle_FA = !rtb_VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD;

    /* End of Outputs for SubSystem: '<S1159>/EdgeFalling1' */

    /* Logic: '<S1159>/Logical1' incorporates:
     *  Constant: '<S1156>/Calib'
     *  Constant: '<S1159>/Constant1'
     *  DataStoreRead: '<S1160>/StatusByte_BattCoolLvlLow'
     *  Logic: '<S1159>/Logical Operator'
     *  Logic: '<S1159>/Logical10'
     *  Logic: '<S1159>/Logical12'
     *  RelationalOperator: '<S1159>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1159>/Bitwise Operator3'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = (rtb_AND_cs &&
        ((!KeBRDR_b_BattCoolLvlLow_LtchEnbl) || (((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 1U) == 0U) ||
        rtb_VeBRDR_b_EstSlopeAngle_FA)));

    /* Outputs for Atomic SubSystem: '<S1159>/EdgeFalling1' */
    /* UnitDelay: '<S1162>/Unit Delay' incorporates:
     *  UnitDelay: '<S1124>/Unit Delay'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_oom = BRDR_ac_DW.UnitDelay_DSTATE_b3;

    /* Update for UnitDelay: '<S1162>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_b3 = rtb_VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD;

    /* Logic: '<S1159>/Logical5' incorporates:
     *  Logic: '<S1162>/AND'
     *  UnitDelay: '<S1124>/Unit Delay'
     */
    rtb_VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD = ((VeBRDR_b_ResetCnts) ||
        (rtb_VeBRDR_b_EstSlopeAngle_FA && (BRDR_ac_DW.UnitDelay_DSTATE_oom)));

    /* End of Outputs for SubSystem: '<S1159>/EdgeFalling1' */

    /* UnitDelay: '<S1161>/Unit Delay' incorporates:
     *  UnitDelay: '<S1124>/Unit Delay'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_oom = BRDR_ac_DW.UnitDelay_DSTATE_k5;

    /* Outputs for Atomic SubSystem: '<S1161>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1161>/Counter Reset  Enabled ' */
    /* Switch: '<S1168>/Switch1' incorporates:
     *  Constant: '<S1157>/Calib'
     *  Logic: '<S1100>/AND3'
     *  Logic: '<S1161>/Fail Counter Reset'
     *  Logic: '<S1161>/NOT6'
     *  Switch: '<S1168>/Switch2'
     *  Switch: '<S1169>/Switch1'
     *  UnitDelay: '<S1124>/Unit Delay'
     *  UnitDelay: '<S1161>/Unit Delay1'
     */
    if ((rtb_VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD ||
            (BRDR_ac_DW.UnitDelay_DSTATE_oom)) ||
            (BRDR_ac_DW.UnitDelay1_DSTATE_c))
    {
        /* Switch: '<S1168>/Switch1' incorporates:
         *  Constant: '<S1168>/Constant Value2'
         */
        VeBRDR_Cnt_HVBatCltLvLo_FailCnt = 0U;

        /* Switch: '<S1169>/Switch1' incorporates:
         *  Constant: '<S1169>/Constant Value2'
         */
        VeBRDR_Cnt_HVBatCltLvLo_SmpCnt = 0U;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_BPCM_Comm_0 &&
                (rtb_VariantMerge_For_Variant_Source_Va_d &&
                 (KeBRDR_b_HVBatCltLvLo_OC_FltEn)))
        {
            /* Switch: '<S1168>/Switch1' incorporates:
             *  Constant: '<S1168>/Constant Value1'
             *  Sum: '<S1168>/Subtraction'
             *  Switch: '<S1168>/Switch2'
             *  UnitDelay: '<S1168>/Unit Delay'
             */
            VeBRDR_Cnt_HVBatCltLvLo_FailCnt = (uint16)(((uint32)
                VeBRDR_Cnt_HVBatCltLvLo_FailCnt) + 1U);
        }

        /* Switch: '<S1169>/Switch2' */
        if (rtb_VM_Conditional_Signal_BPCM_Comm_0)
        {
            /* Switch: '<S1169>/Switch1' incorporates:
             *  Constant: '<S1169>/Constant Value1'
             *  Sum: '<S1169>/Subtraction'
             *  Switch: '<S1169>/Switch2'
             *  UnitDelay: '<S1169>/Unit Delay'
             */
            VeBRDR_Cnt_HVBatCltLvLo_SmpCnt = (uint16)(((uint32)
                VeBRDR_Cnt_HVBatCltLvLo_SmpCnt) + 1U);
        }

        /* End of Switch: '<S1169>/Switch2' */
    }

    /* End of Switch: '<S1168>/Switch1' */
    /* End of Outputs for SubSystem: '<S1161>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S1161>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1161>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1154>/Calib'
     */
    BRDR_ac_DW.UnitDelay1_DSTATE_c = (VeBRDR_Cnt_HVBatCltLvLo_FailCnt >=
        KeBRDR_Cnt_HVBatCltLvLo_OC_FailCnt);

    /* Logic: '<S1161>/NOT5' incorporates:
     *  Constant: '<S1155>/Calib'
     *  Logic: '<S1161>/NOT3'
     *  RelationalOperator: '<S1161>/Less Than  or Equal'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_k5 = ((VeBRDR_Cnt_HVBatCltLvLo_SmpCnt >=
        KeBRDR_Cnt_HVBatCltLvLo_OC_SmpCnt) && (!BRDR_ac_DW.UnitDelay1_DSTATE_c));

    /* Switch: '<S1174>/Switch1' incorporates:
     *  Constant: '<S1167>/Constant Value'
     *  DataStoreWrite: '<S1100>/Data Store Write3'
     *  Switch: '<S1173>/Switch1'
     */
    if (VeBRDR_b_ResetFOMs)
    {
        BRDR_ac_DW.NeBRDR_Cnt_HVBatCltLvLo_OC_MFOP = 0U;
    }
    else
    {
        if (BRDR_ac_DW.UnitDelay_DSTATE_k5)
        {
            /* MinMax: '<S1167>/Minimum2' incorporates:
             *  DataStoreRead: '<S1100>/Data Store Read1'
             *  Switch: '<S1173>/Switch1'
             */
            if (VeBRDR_Cnt_HVBatCltLvLo_FailCnt >
                    BRDR_ac_DW.NeBRDR_Cnt_HVBatCltLvLo_OC_MFOP)
            {
                /* DataStoreWrite: '<S1100>/Data Store Write3' incorporates:
                 *  Switch: '<S1173>/Switch1'
                 */
                BRDR_ac_DW.NeBRDR_Cnt_HVBatCltLvLo_OC_MFOP =
                    VeBRDR_Cnt_HVBatCltLvLo_FailCnt;
            }

            /* End of MinMax: '<S1167>/Minimum2' */
        }
    }

    /* End of Switch: '<S1174>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1159>/Pass' */
    BRDR_ac_Pass(BRDR_ac_DW.UnitDelay_DSTATE_k5,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_g);

    /* End of Outputs for SubSystem: '<S1159>/Pass' */

    /* Outputs for Enabled SubSystem: '<S1159>/Fail' */
    BRDR_ac_Fail(BRDR_ac_DW.UnitDelay1_DSTATE_c,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_g);

    /* End of Outputs for SubSystem: '<S1159>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1159>/Init' */
    BRDR_ac_Init_e(rtb_VeBRDR_b_EstRollAngleAtZeroSpd_FA_AD,
                   &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_g);

    /* End of Outputs for SubSystem: '<S1159>/Init' */

    /* RelationalOperator: '<S1159>/Relational Operator' incorporates:
     *  Constant: '<S1163>/Constant'
     *  VariantMerge generated from: '<S1089>/VeBRDR_e_FaultSts_BattCoolLvlLow'
     */
    VeBRDR_b_HVBatCltLvLo_FltDtct = (((uint32)
        BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_g) == CeDFIB_e_Fail);

    /* Switch: '<S1100>/Switch1' incorporates:
     *  Logic: '<S1100>/Logical2'
     *  Switch: '<S1100>/Switch2'
     */
    if (!rtb_AND_cs)
    {
        /* VariantMerge generated from: '<S1089>/HV_Bat_CltLvlLo' incorporates:
         *  Constant: '<S1151>/Constant'
         */
        VeBRDR_e_HV_Bat_CltLvlLo_BD = CeBRDR_e_BatCltLvlLo_SNA;
    }
    else if (VeBRDR_b_HVBatCltLvLo_FltDtct)
    {
        /* Switch: '<S1100>/Switch2' incorporates:
         *  Constant: '<S1152>/Constant'
         *  VariantMerge generated from: '<S1089>/HV_Bat_CltLvlLo'
         */
        VeBRDR_e_HV_Bat_CltLvlLo_BD = CeBRDR_e_BatCltLvlLo;
    }
    else
    {
        /* VariantMerge generated from: '<S1089>/HV_Bat_CltLvlLo' incorporates:
         *  Constant: '<S1153>/Constant'
         *  Switch: '<S1100>/Switch2'
         */
        VeBRDR_e_HV_Bat_CltLvlLo_BD = CeBRDR_e_BatCltLvlNotLo;
    }

    /* End of Switch: '<S1100>/Switch1' */
    /* End of Outputs for SubSystem: '<S1095>/DiagMachine' */

    /* Update for UnitDelay: '<S1124>/Unit Delay' incorporates:
     *  UnitDelay: '<S1124>/Unit Delay2'
     */
#if !Rte_SysCon_Variant_BRDR_3

    BRDR_ac_DW.UnitDelay_DSTATE_oom = rtb_Comparison2_dw;
    BRDR_ac_DW.UnitDelay2_DSTATE = BRDR_ac_B.OutportBufferForOut1;

#endif

    /* End of Update for UnitDelay: '<S1124>/Unit Delay' */

    /* Update for UnitDelay: '<S1136>/Unit Delay' incorporates:
     *  UnitDelay: '<S1137>/Unit Delay'
     */
#if !Rte_SysCon_Variant_BRDR_33

    BRDR_ac_DW.UnitDelay_DSTATE_fm = rtb_TmpSignalConversionAtVeTRIR_b_BatBot;
    BRDR_ac_DW.UnitDelay_DSTATE_dp = rtb_Logical3_pe;

#endif

    /* End of Update for UnitDelay: '<S1136>/Unit Delay' */
    /* End of Outputs for SubSystem: '<S1089>/If_DTC_P2BE0' */
#else

    /* Outputs for Atomic SubSystem: '<S1089>/DTC_P2BE0_Stub' */
    /* VariantMerge generated from: '<S1089>/VeBRDR_e_FaultSts_BattCoolLvlLow' incorporates:
     *  Constant: '<S1096>/Constant'
     */
    BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_g = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S1089>/HV_Bat_CltLvlLo' incorporates:
     *  Constant: '<S1097>/Constant'
     */
    VeBRDR_e_HV_Bat_CltLvlLo_BD = CeBRDR_e_BatCltLvlLo_SNA;

    /* End of Outputs for SubSystem: '<S1089>/DTC_P2BE0_Stub' */
#endif

    /* End of Outputs for SubSystem: '<S11>/BatCltLvlLo' */

    /* RelationalOperator: '<S351>/Relational Operator1' incorporates:
     *  Logic: '<S351>/Logical Operator'
     *  Logic: '<S351>/Logical Operator10'
     *  Logic: '<S351>/Logical Operator11'
     *  Logic: '<S351>/Logical Operator8'
     *  Logic: '<S351>/Logical Operator9'
     */
#if Rte_SysCon_Variant_BRDR_3 || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_4)

    /* Logic: '<S351>/Logical Operator' incorporates:
     *  Constant: '<S356>/Constant'
     *  Constant: '<S359>/Calib'
     *  Constant: '<S360>/Calib'
     *  Constant: '<S361>/Calib'
     *  VariantMerge generated from: '<S1089>/HV_Bat_CltLvlLo'
     */
    rtb_LogicalOperator_ka = ((((((((KeBRDR_b_Enbl_TempRatEnblCond) &&
        rtb_LogicalOperator1) && rtb_LogicalOperator12) &&
        rtb_RelationalOperator) && rtb_LogicalOperator3) && rtb_LogicalOperator7)
        && ((((uint32)VeBRDR_e_HV_Bat_CltLvlLo_BD) != CeBRDR_e_BatCltLvlLo) ||
            (KeBRDR_b_BtlSnsrLoFlt_Dsbl_TempRat))) &&
        ((!rtb_VariantMerge_For_Variant_Source_Vari) ||
         (KeBRDR_b_Dsbl_BatClntLo_TempRat)));

#endif

    /* End of RelationalOperator: '<S351>/Relational Operator1' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC_FA'
     */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23)

    /* VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC' incorporates:
     *  Switch: '<S5>/Switch9'
     */
    rtb_VeBRDR_b_BPCM_LIN_LOC = VeBRDR_b_BPCM_LIN_LOC;

    /* VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC_FA' */
    rtb_VeBRDR_b_BPCM_LIN_LOC_FA = VeBRDR_b_BPCM_LIN_LOC_FA;

#elif (!(!Rte_SysCon_Variant_BRDR_15) && !(!Rte_SysCon_Variant_BRDR_5) && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_8) || (!(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_12 && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_8) || (!(!Rte_SysCon_Variant_BRDR_3) && !Rte_SysCon_Variant_BRDR_23) || (!(!Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_5) && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_8) || (!(!Rte_SysCon_Variant_BRDR_4) && !Rte_SysCon_Variant_BRDR_12 && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_8) || !Rte_SysCon_Variant_BRDR_1

    /* VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC'
     */
    rtb_VeBRDR_b_BPCM_LIN_LOC = CeBPCR_e_LIN_BusOff_Disabled;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_LTAP_LOC' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC_FA'
     */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23)

    /* VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC' incorporates:
     *  Switch: '<S5>/Switch10'
     */
    rtb_VeBRDR_b_LTAP_LOC = VeBRDR_b_LTAP_LOC;

#elif (!(!Rte_SysCon_Variant_BRDR_15) && !(!Rte_SysCon_Variant_BRDR_5) && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_8) || (!(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_12 && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_8) || (!(!Rte_SysCon_Variant_BRDR_3) && !Rte_SysCon_Variant_BRDR_23) || (!(!Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_5) && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_8) || (!(!Rte_SysCon_Variant_BRDR_4) && !Rte_SysCon_Variant_BRDR_12 && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_8) || !Rte_SysCon_Variant_BRDR_1

    /* VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC_FA'
     */
    rtb_VeBRDR_b_BPCM_LIN_LOC_FA = false;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_LTAP_LOC' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_LTAP_LOC_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_LTAP_LOC'
     */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_1) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_12) || (!Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_6) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_8) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_23)

    /* VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC_FA' */
    rtb_VeBRDR_b_LTAP_LOC_FA = VeBRDR_b_LTAP_LOC_FA;

#elif (!(!Rte_SysCon_Variant_BRDR_15) && !(!Rte_SysCon_Variant_BRDR_5) && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_8) || (!(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_12 && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_8) || (!(!Rte_SysCon_Variant_BRDR_3) && !Rte_SysCon_Variant_BRDR_23) || (!(!Rte_SysCon_Variant_BRDR_4) && !(!Rte_SysCon_Variant_BRDR_5) && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_8) || (!(!Rte_SysCon_Variant_BRDR_4) && !Rte_SysCon_Variant_BRDR_12 && !Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_23 && !Rte_SysCon_Variant_BRDR_28 && !Rte_SysCon_Variant_BRDR_6 && !Rte_SysCon_Variant_BRDR_8) || !Rte_SysCon_Variant_BRDR_1

    /* VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_LTAP_LOC'
     */
    rtb_VeBRDR_b_LTAP_LOC = CeBPCR_e_LOC_BCP_False;

    /* VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeBRDR_b_LTAP_LOC_FA'
     */
    rtb_VeBRDR_b_LTAP_LOC_FA = false;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_LTAP_LOC_FA' */

    /* Outputs for Atomic SubSystem: '<S329>/ProgramEnableConds' */
#if Rte_SysCon_Variant_BRDR_3

    /* Outputs for Atomic SubSystem: '<S352>/Enable_M182' */
    /* Logic: '<S369>/Logical Operator' */
    VeBRDR_b_TempRat_ComEnbl[0] = (rtb_TmpSignalConversionAtVeTMIR_b_MainRl &&
        rtb_VeBRDR_b_IsDiagGlobalConditionsValid);

    /* VariantMerge generated from: '<S352>/b_PerfEnbl' incorporates:
     *  Logic: '<S369>/Logical Operator1'
     */
    VeBRDR_b_TempRat_PerfEnbl = ((VeBRDR_b_TempRat_ComEnbl[0]) &&
        rtb_LogicalOperator_ka);

    /* VariantMerge generated from: '<S352>/No_LTAP_LOC' incorporates:
     *  Constant: '<S369>/FALSE Constant2'
     */
    rtb_VariantMergeForOutportNo_LTAP_LOC = false;

    /* End of Outputs for SubSystem: '<S352>/Enable_M182' */
#elif Rte_SysCon_Variant_BRDR_4

    /* Outputs for Atomic SubSystem: '<S352>/Enable_P1P2p5' */
    /* Inport: '<Root>/VeENGR_b_EngOffTimeFA' */
    (void)Rte_Read_VeENGR_b_EngOffTimeFA_Value(&tmpRead_8);

    /* Inport: '<Root>/VeENGR_t_EngOffTime' */
    (void)Rte_Read_VeENGR_t_EngOffTime_Value(&tmpRead_4);

    /* Inport: '<Root>/VeBPCR_b_HV_BatModTempMaxFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatModTempMaxFA_Value(&tmpRead_3);

    /* RelationalOperator: '<S371>/Relational Operator' incorporates:
     *  Constant: '<S394>/Calib'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = (tmpRead_4 >= ((float32)
        KeBRDR_tmn_VehicleSoakTime));

    /* Outputs for Atomic SubSystem: '<S371>/EdgeRising' */
    /* Logic: '<S387>/AND' incorporates:
     *  Logic: '<S387>/OR1'
     *  UnitDelay: '<S387>/Unit Delay'
     */
    rtb_AND_cs = (rtb_VM_Conditional_Signal_BPCM_Comm_0 &&
                  (!BRDR_ac_DW.UnitDelay_DSTATE_af));

    /* Update for UnitDelay: '<S387>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_af = rtb_VM_Conditional_Signal_BPCM_Comm_0;

    /* End of Outputs for SubSystem: '<S371>/EdgeRising' */

    /* Logic: '<S371>/Logical Operator7' incorporates:
     *  Constant: '<S389>/Calib'
     *  Constant: '<S390>/Calib'
     *  Constant: '<S391>/Calib'
     *  Constant: '<S395>/Constant1'
     *  Constant: '<S395>/Constant2'
     *  DataStoreRead: '<S395>/StatusByte_LostCommECM_A_BusB'
     *  Logic: '<S371>/Logical Operator1'
     *  Logic: '<S371>/Logical Operator2'
     *  Logic: '<S371>/Logical Operator3'
     *  Logic: '<S371>/Logical Operator4'
     *  Logic: '<S371>/Logical Operator5'
     *  Logic: '<S371>/Logical Operator6'
     *  Logic: '<S395>/Logical Operator'
     *  RelationalOperator: '<S395>/Relational Operator1'
     *  RelationalOperator: '<S395>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S395>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S395>/Bitwise Operator2'
     */
    VeBRDR_b_TempRat_ComEnbl[0] =
        ((((((!rtb_VariantMerge_For_Variant_Source_Va_p) ||
             (KeBRDR_b_BTOS_SenCirLow_D)) &&
            ((!rtb_VariantMerge_For_Variant_Source_V_h3) ||
             (KeBRDR_b_BTOS_SenCirHigh_D))) && ((((((uint32)
                BRDR_ac_DW.StatusByte_LostCommECM_A_BusB) & 1U) == 0U) ||
             ((((uint32)BRDR_ac_DW.StatusByte_LostCommECM_A_BusB) & 64U) != 0U))
            || (KeBRDR_b_ECM_LOC_D))) && (VeBRDR_b_BPCM_NoCommErr)) &&
         rtb_VeBRDR_b_IsDiagGlobalConditionsValid);

    /* Outputs for Atomic SubSystem: '<S371>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S396>/EdgeFalling' */
    /* Logic: '<S397>/AND' incorporates:
     *  Logic: '<S397>/OR1'
     *  UnitDelay: '<S397>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = ((!rtb_AND_cs) &&
        (BRDR_ac_DW.UnitDelay_DSTATE_n5));

    /* Update for UnitDelay: '<S397>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_n5 = rtb_AND_cs;

    /* End of Outputs for SubSystem: '<S396>/EdgeFalling' */

    /* Switch: '<S396>/Switch' incorporates:
     *  Constant: '<S388>/Calib'
     *  Sum: '<S396>/Summation'
     *  UnitDelay: '<S396>/Unit Delay'
     */
    if (rtb_VM_Conditional_Signal_BPCM_Comm_0)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_pl = KeBRDR_Cnt_HoldVehicle_Soak;
    }
    else
    {
        /* Sum: '<S396>/Summation' incorporates:
         *  Constant: '<S396>/Constant Value'
         *  UnitDelay: '<S396>/Unit Delay'
         */
        rtb_Logical_d_tmp = ((sint32)BRDR_ac_DW.UnitDelay_DSTATE_pl) - 1;
        if ((((sint32)BRDR_ac_DW.UnitDelay_DSTATE_pl) - 1) < 0)
        {
            rtb_Logical_d_tmp = 0;
        }

        BRDR_ac_DW.UnitDelay_DSTATE_pl = (uint16)rtb_Logical_d_tmp;
    }

    /* End of Switch: '<S396>/Switch' */

    /* VariantMerge generated from: '<S352>/b_PerfEnbl' incorporates:
     *  Constant: '<S392>/Calib'
     *  Constant: '<S393>/Calib'
     *  Constant: '<S396>/Constant Value2'
     *  Logic: '<S371>/Logical Operator10'
     *  Logic: '<S371>/Logical Operator11'
     *  Logic: '<S371>/Logical Operator12'
     *  Logic: '<S371>/Logical Operator8'
     *  Logic: '<S371>/Logical Operator9'
     *  Logic: '<S396>/AND'
     *  RelationalOperator: '<S396>/Greater  Than'
     *  UnitDelay: '<S396>/Unit Delay'
     */
    VeBRDR_b_TempRat_PerfEnbl = ((((VeBRDR_b_TempRat_ComEnbl[0]) && ((!tmpRead_3)
        || (KeBRDR_b_TBMS_MAX_D))) && (rtb_AND_cs || (((sint32)
        BRDR_ac_DW.UnitDelay_DSTATE_pl) > 0))) && ((!tmpRead_8) ||
        (KeBRDR_b_EngOffTime_D)));

    /* End of Outputs for SubSystem: '<S371>/Turn Off Delay Sample' */

    /* VariantMerge generated from: '<S352>/No_LTAP_LOC' incorporates:
     *  Constant: '<S371>/FALSE Constant2'
     */
    rtb_VariantMergeForOutportNo_LTAP_LOC = false;

    /* End of Outputs for SubSystem: '<S352>/Enable_P1P2p5' */
#elif Rte_SysCon_Variant_BRDR_15

    /* Outputs for Atomic SubSystem: '<S352>/Enable_P1P4' */
    /* Inport: '<Root>/VePLTR_b_HCPOffTimeFA' */
    (void)Rte_Read_VePLTR_b_HCPOffTimeFA_Value(&tmpRead_i);

    /* Inport: '<Root>/VePLTR_t_HCPOffTime' */
    (void)Rte_Read_VePLTR_t_HCPOffTime_Value(&tmpRead_b);

    /* Logic: '<S372>/Logical Operator1' incorporates:
     *  Constant: '<S402>/Calib'
     *  Logic: '<S372>/Logical Operator2'
     *  RelationalOperator: '<S372>/Relational Operator'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = ((tmpRead_b >=
        KeBRDR_t_VehicleSoakTime) && (!tmpRead_i));

    /* Outputs for Atomic SubSystem: '<S372>/EdgeRising' */
    /* Logic: '<S398>/AND' incorporates:
     *  Logic: '<S398>/OR1'
     *  UnitDelay: '<S398>/Unit Delay'
     */
    rtb_AND_cs = (rtb_VM_Conditional_Signal_BPCM_Comm_0 &&
                  (!BRDR_ac_DW.UnitDelay_DSTATE_ml));

    /* Update for UnitDelay: '<S398>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_ml = rtb_VM_Conditional_Signal_BPCM_Comm_0;

    /* End of Outputs for SubSystem: '<S372>/EdgeRising' */

    /* Logic: '<S372>/Logical Operator5' */
    VeBRDR_b_TempRat_ComEnbl[0] = (rtb_VeBRDR_b_IsDiagGlobalConditionsValid &&
        (VeBRDR_b_BPCM_NoCommErr));

    /* Outputs for Atomic SubSystem: '<S372>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S403>/EdgeFalling' */
    /* Logic: '<S404>/AND' incorporates:
     *  Logic: '<S404>/OR1'
     *  UnitDelay: '<S404>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = ((!rtb_AND_cs) &&
        (BRDR_ac_DW.UnitDelay_DSTATE_pk0));

    /* Update for UnitDelay: '<S404>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_pk0 = rtb_AND_cs;

    /* End of Outputs for SubSystem: '<S403>/EdgeFalling' */

    /* Switch: '<S403>/Switch' incorporates:
     *  Constant: '<S399>/Calib'
     *  Sum: '<S403>/Summation'
     *  UnitDelay: '<S403>/Unit Delay'
     */
    if (rtb_VM_Conditional_Signal_BPCM_Comm_0)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_f = KeBRDR_Cnt_HoldVehicle_Soak;
    }
    else
    {
        /* Sum: '<S403>/Summation' incorporates:
         *  Constant: '<S403>/Constant Value'
         *  UnitDelay: '<S403>/Unit Delay'
         */
        rtb_Logical_d_tmp = ((sint32)BRDR_ac_DW.UnitDelay_DSTATE_f) - 1;
        if ((((sint32)BRDR_ac_DW.UnitDelay_DSTATE_f) - 1) < 0)
        {
            rtb_Logical_d_tmp = 0;
        }

        BRDR_ac_DW.UnitDelay_DSTATE_f = (uint16)rtb_Logical_d_tmp;
    }

    /* End of Switch: '<S403>/Switch' */
    /* End of Outputs for SubSystem: '<S372>/Turn Off Delay Sample' */

    /* Inport: '<Root>/VePLTR_b_RTC_CurrentTimeFA' */
    (void)Rte_Read_VePLTR_b_RTC_CurrentTimeFA_Value(&rtb_LogicalOperator2_ct);

    /* Outputs for Atomic SubSystem: '<S372>/Turn Off Delay Sample' */
    /* VariantMerge generated from: '<S352>/b_PerfEnbl' incorporates:
     *  Constant: '<S400>/Calib'
     *  Constant: '<S401>/Calib'
     *  Constant: '<S403>/Constant Value2'
     *  Logic: '<S372>/Logical Operator'
     *  Logic: '<S372>/Logical Operator10'
     *  Logic: '<S372>/Logical Operator3'
     *  Logic: '<S372>/Logical Operator4'
     *  Logic: '<S372>/Logical Operator9'
     *  Logic: '<S403>/AND'
     *  RelationalOperator: '<S403>/Greater  Than'
     *  UnitDelay: '<S403>/Unit Delay'
     */
    VeBRDR_b_TempRat_PerfEnbl = ((((VeBRDR_b_TempRat_ComEnbl[0]) &&
        ((!rtb_TmpSignalConversionAtVeBTRR_b_CellTe) || (KeBRDR_b_TBMS_AVG_D))) &&
        (rtb_AND_cs || (((sint32)BRDR_ac_DW.UnitDelay_DSTATE_f) > 0))) &&
        ((!rtb_LogicalOperator2_ct) || (KeBRDR_b_RTC_CurrentTime_D)));

    /* End of Outputs for SubSystem: '<S372>/Turn Off Delay Sample' */

    /* VariantMerge generated from: '<S352>/No_LTAP_LOC' incorporates:
     *  Constant: '<S372>/FALSE Constant1'
     */
    rtb_VariantMergeForOutportNo_LTAP_LOC = false;

    /* End of Outputs for SubSystem: '<S352>/Enable_P1P4' */
#else

    /* Outputs for Atomic SubSystem: '<S352>/Enable_OtherPrograms' */
    /* Inport: '<Root>/VeVLDR_b_HTCV_Leak_DiagEnbl' */
    (void)Rte_Read_VeVLDR_b_HTCV_Leak_DiagEnbl_Value(&tmpRead_1);

    /* Logic: '<S373>/Logical Operator3' incorporates:
     *  Constant: '<S378>/Constant'
     *  Constant: '<S379>/Calib'
     *  Constant: '<S380>/Calib'
     *  Logic: '<S373>/Logical Operator1'
     *  Logic: '<S373>/Logical Operator2'
     *  Logic: '<S373>/Logical Operator4'
     *  RelationalOperator: '<S373>/Relational Operator1'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC'
     */
    rtb_AND_cs = (((((uint32)rtb_VeBRDR_b_BPCM_LIN_LOC) ==
                    CeBPCR_e_LIN_BusOff_Disabled) || (KeBRDR_b_LINBusOff_TmpRat))
                  && ((!rtb_VeBRDR_b_BPCM_LIN_LOC_FA) ||
                      (KeBRDR_b_LINBusOffFA_TmpRat)));

    /* VariantMerge generated from: '<S352>/No_LTAP_LOC' incorporates:
     *  Constant: '<S384>/Constant'
     *  Constant: '<S385>/Calib'
     *  Constant: '<S386>/Calib'
     *  Logic: '<S377>/Logical Operator1'
     *  Logic: '<S377>/Logical Operator2'
     *  Logic: '<S377>/Logical Operator3'
     *  Logic: '<S377>/Logical Operator4'
     *  RelationalOperator: '<S377>/Relational Operator1'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC'
     */
    rtb_VariantMergeForOutportNo_LTAP_LOC = (((((uint32)rtb_VeBRDR_b_LTAP_LOC) ==
        CeBPCR_e_LOC_BCP_False) || (KeBRDR_b_LTAP_LossComm_D)) &&
        ((!rtb_VeBRDR_b_LTAP_LOC_FA) || (KeBRDR_b_LTAP_LossCommFA_D)));

    /* Logic: '<S370>/Logical Operator3' incorporates:
     *  Constant: '<S376>/Calib'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 =
        (rtb_TmpSignalConversionAtVePMTR_b_ThrmlS ||
         (KeBRDR_b_DsblThrmSysEnbl_TmpRat));

    /* Logic: '<S370>/Logical Operator2' incorporates:
     *  Constant: '<S375>/Calib'
     */
    rtb_LogicalOperator2_ct = (rtb_LeBRDR_b_ThrmlRlyCtrlCkt ||
        (KeBRDR_b_DsblThrmRly_TmpRat));

    /* VariantMerge generated from: '<S352>/b_PerfEnbl' incorporates:
     *  Constant: '<S381>/Constant1'
     *  Constant: '<S381>/Constant2'
     *  Constant: '<S382>/Calib'
     *  Constant: '<S383>/Calib'
     *  DataStoreRead: '<S381>/StatusByte_CoolantVlvA_StkOpn'
     *  Logic: '<S370>/Logical Operator'
     *  Logic: '<S374>/Logical Operator1'
     *  Logic: '<S374>/Logical Operator2'
     *  Logic: '<S374>/Logical Operator3'
     *  Logic: '<S374>/Logical Operator4'
     *  Logic: '<S381>/Logical Operator'
     *  RelationalOperator: '<S381>/Relational Operator1'
     *  RelationalOperator: '<S381>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S381>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S381>/Bitwise Operator2'
     */
    VeBRDR_b_TempRat_PerfEnbl = (((((((rtb_VM_Conditional_Signal_BPCM_Comm_0 &&
        rtb_AND_cs) && rtb_VariantMergeForOutportNo_LTAP_LOC) &&
        (VeBRDR_b_BPCM_NoCommErr)) && (((((((uint32)
        BRDR_ac_DW.StatusByte_CoolantVlvA_StkOpn) & 1U) == 0U) || ((((uint32)
        BRDR_ac_DW.StatusByte_CoolantVlvA_StkOpn) & 64U) != 0U)) ||
        (KeBRDR_b_HTCV_LeakDTC_RatDiag_D)) && (tmpRead_1 ||
        (KeBRDR_b_HTCVLeak_FltDsbl_D)))) && rtb_LogicalOperator2_ct) &&
        rtb_LogicalOperator_ka) && rtb_VeBRDR_b_IsDiagGlobalConditionsValid);

    /* Logic: '<S370>/Logical Operator1' */
    VeBRDR_b_TempRat_ComEnbl[0] = ((((rtb_VM_Conditional_Signal_BPCM_Comm_0 &&
        rtb_LogicalOperator2_ct) && rtb_AND_cs) && (VeBRDR_b_BPCM_NoCommErr)) &&
        rtb_VeBRDR_b_IsDiagGlobalConditionsValid);

    /* End of Outputs for SubSystem: '<S352>/Enable_OtherPrograms' */
#endif

    /* End of Outputs for SubSystem: '<S329>/ProgramEnableConds' */

    /* Logic: '<S13>/Logical4' incorporates:
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktHi'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktLo'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd'
     *  Logic: '<S13>/Logical5'
     *  Logic: '<S13>/Logical6'
     *  Logic: '<S13>/Logical7'
     *  Logic: '<S13>/Logical8'
     */
#if (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_28 && Rte_SysCon_Variant_BRDR_3)

    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktHi_Value(&tmpRead_e);
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktLo_Value(&tmpRead_f);
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd_Value(&tmpRead_g);
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt_Value(&tmpRead_h);

    /* Logic: '<S13>/Logical8' incorporates:
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktHi'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktLo'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd'
     */
    rtb_LeBRDR_b_MainRelayOK = ((((!tmpRead_e) && (!tmpRead_f)) && (!tmpRead_g))
        && (!tmpRead_h));

#endif

    /* End of Logic: '<S13>/Logical4' */

    /* S-Function (sfix_bitop): '<S441>/Bitwise Operator2' incorporates:
     *  Logic: '<S427>/Logical Operator1'
     *  Logic: '<S427>/Logical Operator3'
     *  Logic: '<S429>/Logical Operator1'
     *  Logic: '<S429>/Logical Operator2'
     *  Logic: '<S429>/Logical Operator3'
     *  Logic: '<S441>/Logical Operator'
     *  Logic: '<S443>/Logical Operator'
     *  Logic: '<S444>/Logical Operator'
     *  RelationalOperator: '<S441>/Relational Operator1'
     *  RelationalOperator: '<S441>/Relational Operator2'
     *  RelationalOperator: '<S443>/Relational Operator1'
     *  RelationalOperator: '<S443>/Relational Operator2'
     *  RelationalOperator: '<S444>/Relational Operator1'
     *  RelationalOperator: '<S444>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S441>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S443>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S443>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S444>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S444>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_BRDR_28 && Rte_SysCon_Variant_BRDR_3

    /* Logic: '<S473>/Logical Operator1' incorporates:
     *  Constant: '<S443>/Constant1'
     *  Constant: '<S443>/Constant2'
     *  Constant: '<S444>/Constant1'
     *  Constant: '<S444>/Constant2'
     *  DataStoreRead: '<S443>/StatusByte_LIN2_BusOff'
     *  DataStoreRead: '<S444>/StatusByte_LostCommHB_CooltHtr4'
     */
    rtb_LogicalOperator1_b = ((((((uint32)BRDR_ac_DW.StatusByte_LIN2_BusOff) &
        1U) == 0U) || ((((uint32)BRDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) != 0U))
        && (((((uint32)BRDR_ac_DW.StatusByte_LostCommHB_CooltHtr4) & 1U) == 0U) ||
            ((((uint32)BRDR_ac_DW.StatusByte_LostCommHB_CooltHtr4) & 64U) != 0U)));

    /* VariantMerge generated from: '<S11>/Variant Source2' incorporates:
     *  Constant: '<S441>/Constant1'
     *  Constant: '<S441>/Constant2'
     *  DataStoreRead: '<S441>/StatusByte_CoolantHeaterBPerf'
     */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = ((((VeBRDR_b_TempRat_PerfEnbl) &&
        rtb_LeBRDR_b_MainRelayOK) && (((((uint32)
        BRDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 1U) == 0U) || ((((uint32)
        BRDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 64U) != 0U))) &&
        rtb_LogicalOperator1_b);

#endif

    /* End of S-Function (sfix_bitop): '<S441>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_BattHtr_LOC' */
#if (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28)

    /* VariantMerge generated from: '<S4>/VeBRDR_b_BattHtr_LOC' incorporates:
     *  Switch: '<S5>/Switch12'
     */
    rtb_VeBRDR_b_BattHtr_LOC = VeBRDR_b_BattHtr_LOC;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_BattHtr_LOC' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_BattHtr_LOC' */
#if (!(!Rte_SysCon_Variant_BRDR_3) && !Rte_SysCon_Variant_BRDR_28) || !Rte_SysCon_Variant_BRDR_1 || (!Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_28)

    /* VariantMerge generated from: '<S4>/VeBRDR_b_BattHtr_LOC' */
    rtb_VeBRDR_b_BattHtr_LOC = CeBPCR_e_LOC_BatClntHtr_False;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_BattHtr_LOC' */

    /* RelationalOperator: '<S426>/Relational Operator' incorporates:
     *  Logic: '<S426>/Logical Operator2'
     */
#if Rte_SysCon_Variant_BRDR_28

    /* Logic: '<S426>/Logical Operator2' incorporates:
     *  Constant: '<S438>/Constant'
     *  Constant: '<S440>/Calib'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BattHtr_LOC'
     */
    rtb_LogicalOperator2_b = ((((uint32)rtb_VeBRDR_b_BattHtr_LOC) ==
        CeBPCR_e_LOC_BatClntHtr_False) || (KeBRDR_b_LOCBatHtr_TempRat));

#endif

    /* End of RelationalOperator: '<S426>/Relational Operator' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_BattHtr_LOC_FA' */
#if (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28)

    /* VariantMerge generated from: '<S4>/VeBRDR_b_BattHtr_LOC_FA' */
    rtb_VeBRDR_b_BattHtr_LOC_FA = VeBRDR_b_BattHtr_LOC_FA;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_BattHtr_LOC_FA' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_BattHtr_LOC_FA' */
#if (!(!Rte_SysCon_Variant_BRDR_3) && !Rte_SysCon_Variant_BRDR_28) || !Rte_SysCon_Variant_BRDR_1 || (!Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_28)

    /* VariantMerge generated from: '<S4>/VeBRDR_b_BattHtr_LOC_FA' */
    rtb_VeBRDR_b_BattHtr_LOC_FA = false;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_BattHtr_LOC_FA' */

    /* Logic: '<S426>/Logical Operator1' incorporates:
     *  Logic: '<S426>/Logical Operator'
     *  Logic: '<S426>/Logical Operator3'
     */
#if Rte_SysCon_Variant_BRDR_28

    /* VariantMerge generated from: '<S334>/Variant Source' incorporates:
     *  Constant: '<S439>/Calib'
     */
    VeBRDR_b_BTOSFlt_Sym = (rtb_LogicalOperator2_b &&
                            ((!rtb_VeBRDR_b_BattHtr_LOC_FA) ||
        (KeBRDR_b_LOCBatHtrFA_TempRat)));

#endif

    /* End of Logic: '<S426>/Logical Operator1' */

    /* Logic: '<S406>/Logical Operator3' */
#if Rte_SysCon_Variant_BRDR_28 && Rte_SysCon_Variant_BRDR_3

    /* Logic: '<S473>/Logical Operator1' */
    rtb_LogicalOperator1_b = (rtb_LogicalOperator1_b &&
        (VeBRDR_b_TempRat_ComEnbl[0]));

#endif

    /* End of Logic: '<S406>/Logical Operator3' */

    /* S-Function (sfix_bitop): '<S445>/Bitwise Operator2' incorporates:
     *  Logic: '<S430>/Logical Operator1'
     *  Logic: '<S430>/Logical Operator2'
     *  Logic: '<S430>/Logical Operator3'
     *  Logic: '<S445>/Logical Operator'
     *  RelationalOperator: '<S445>/Relational Operator1'
     *  RelationalOperator: '<S445>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S445>/Bitwise Operator1'
     *  SignalConversion generated from: '<S406>/Variant Source'
     */
#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_28

    /* VariantMerge generated from: '<S11>/Variant Source2' incorporates:
     *  Constant: '<S445>/Constant1'
     *  Constant: '<S445>/Constant2'
     *  Constant: '<S446>/Calib'
     *  DataStoreRead: '<S445>/StatusByte_CoolantHeaterBPerf'
     */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = (((VeBRDR_b_TempRat_PerfEnbl) &&
        (VeBRDR_b_BTOSFlt_Sym)) && ((((((uint32)
        BRDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 1U) == 0U) || ((((uint32)
        BRDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 64U) != 0U)) ||
        (KeBRDR_b_BCHPerf_TempRat)));

    /* Logic: '<S473>/Logical Operator1' */
    rtb_LogicalOperator1_b = VeBRDR_b_TempRat_ComEnbl[0];

#endif

    /* End of S-Function (sfix_bitop): '<S445>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_BattHtr_ClntTempOut_FA' */
#if (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_19) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_14 && Rte_SysCon_Variant_BRDR_21) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_28)

    /* VariantMerge generated from: '<S4>/VeBRDR_b_BattHtr_ClntTempOut_FA' */
    rtb_VeBRDR_b_BattHtr_ClntTempOut_FA = VeBRDR_b_BattHtr_ClntTempOut_FA;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_BattHtr_ClntTempOut_FA' */

    /* SignalConversion generated from: '<S4>/VeBRDR_b_BattHtr_ClntTempOut_FA' */
#if (!(!Rte_SysCon_Variant_BRDR_15) && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_28) || (!(!Rte_SysCon_Variant_BRDR_3) && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_28) || !Rte_SysCon_Variant_BRDR_1 || (!Rte_SysCon_Variant_BRDR_19 && !Rte_SysCon_Variant_BRDR_21 && !Rte_SysCon_Variant_BRDR_28)

    /* VariantMerge generated from: '<S4>/VeBRDR_b_BattHtr_ClntTempOut_FA' */
    rtb_VeBRDR_b_BattHtr_ClntTempOut_FA = false;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_b_BattHtr_ClntTempOut_FA' */

    /* Logic: '<S425>/Logical Operator3' incorporates:
     *  Constant: '<S433>/Calib'
     *  Logic: '<S425>/Logical Operator1'
     *  Logic: '<S425>/Logical Operator2'
     *  Logic: '<S425>/Logical Operator4'
     *  Logic: '<S425>/Logical Operator5'
     *  Logic: '<S428>/Logical Operator1'
     *  Logic: '<S428>/Logical Operator2'
     *  Logic: '<S428>/Logical Operator3'
     *  Logic: '<S442>/Logical Operator'
     *  RelationalOperator: '<S442>/Relational Operator1'
     *  RelationalOperator: '<S442>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S442>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S442>/Bitwise Operator2'
     *  SignalConversion generated from: '<S353>/Variant Source3'
     *  Switch: '<S425>/Switch'
     */
#if Rte_SysCon_Variant_BRDR_28

    /* Outputs for Atomic SubSystem: '<S425>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S425>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S425>/Turn On Delay Time' */
    /* Logic: '<S435>/NOT' */
    rtb_VariantMerge_For_Variant_Source_V__1 = (rtb_LogicalOperator1_b &&
        (VeBRDR_b_BTOSFlt_Sym));

    /* Logic: '<S425>/Logical Operator3' */
    rtb_LogicalOperator3_d = (rtb_VariantMerge_For_Variant_Source_V__1 &&
        rtb_VeBRDR_b_BattHtr_ClntTempOut_FA);

    /* Outputs for Atomic SubSystem: '<S436>/EdgeRising' */
    /* Logic: '<S437>/AND' incorporates:
     *  Logic: '<S437>/OR1'
     *  UnitDelay: '<S437>/Unit Delay'
     */
    rtb_AND_cs = (rtb_LogicalOperator3_d && (!BRDR_ac_DW.UnitDelay_DSTATE_pyn));

    /* Update for UnitDelay: '<S437>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_pyn = rtb_LogicalOperator3_d;

    /* End of Outputs for SubSystem: '<S436>/EdgeRising' */

    /* Switch: '<S436>/Switch1' incorporates:
     *  Constant: '<S412>/Calib'
     *  Constant: '<S434>/Calib'
     *  Constant: '<S436>/Constant Value1'
     *  Logic: '<S436>/OR'
     *  Logic: '<S436>/OR1'
     *  MinMax: '<S436>/Minimum'
     *  Sum: '<S436>/Summation'
     *  UnitDelay: '<S436>/Unit Delay'
     */
    if ((!rtb_LogicalOperator3_d) || rtb_AND_cs)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_py = 0.0F;
    }
    else
    {
        BRDR_ac_DW.UnitDelay_DSTATE_py = fminf(KeBRDR_t_BHOS_FA_DbncTime,
            HeBRDR_t_MedTEH + BRDR_ac_DW.UnitDelay_DSTATE_py);
    }

    /* End of Switch: '<S436>/Switch1' */

    /* Logic: '<S436>/AND' incorporates:
     *  Constant: '<S434>/Calib'
     *  RelationalOperator: '<S436>/Greater  Than'
     *  UnitDelay: '<S436>/Unit Delay'
     */
    rtb_LogicalOperator3_d = (rtb_LogicalOperator3_d &&
        (BRDR_ac_DW.UnitDelay_DSTATE_py >= KeBRDR_t_BHOS_FA_DbncTime));

    /* Logic: '<S431>/AND' incorporates:
     *  Logic: '<S431>/OR1'
     *  UnitDelay: '<S431>/Unit Delay'
     */
    rtb_AND_cs = (rtb_LogicalOperator3_d && (!BRDR_ac_DW.UnitDelay_DSTATE_ho));

    /* Update for UnitDelay: '<S431>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_ho = rtb_LogicalOperator3_d;

    /* Logic: '<S435>/OR1' incorporates:
     *  Logic: '<S435>/OR'
     *  UnitDelay: '<S435>/Unit Delay'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_ia = (rtb_AND_cs ||
        (rtb_VariantMerge_For_Variant_Source_V__1 &&
         (BRDR_ac_DW.UnitDelay_DSTATE_ia)));
    if (KeBRDR_b_EnblFltHealing_CANFA)
    {
        rtb_AND_cs = BRDR_ac_DW.UnitDelay_DSTATE_ia;
    }
    else
    {
        rtb_AND_cs = rtb_LogicalOperator3_d;
    }

    /* VariantMerge generated from: '<S334>/Variant Source' incorporates:
     *  Constant: '<S432>/Calib'
     *  Constant: '<S433>/Calib'
     */
    VeBRDR_b_BTOSFlt_Sym = ((KeBRDR_b_BHOS_FA_EnblCnds) && rtb_AND_cs);

    /* VariantMerge generated from: '<S353>/Variant Source3' */
    rtb_VariantMerge_For_Variant_Source_V__1 = VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD;

    /* Gain: '<S421>/Gain' incorporates:
     *  VariantMerge generated from: '<S353>/Variant Source3'
     */
    VeBRDR_b_BHOSTmpFA_Enbl = VeBRDR_b_BTOSFlt_Sym;

    /* Gain: '<S422>/Gain' incorporates:
     *  Constant: '<S442>/Constant1'
     *  Constant: '<S442>/Constant2'
     *  DataStoreRead: '<S442>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     *  VariantMerge generated from: '<S353>/Variant Source3'
     */
    VeBRDR_b_BHOSTmpRat_Enbl = (((VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD) && (((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) & 1U) == 0U) ||
        ((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) & 64U) !=
         0U))) && (!rtb_VeBRDR_b_BattHtr_ClntTempOut_FA));

    /* End of Outputs for SubSystem: '<S425>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S425>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S425>/Signal Latch On With Reset' */
#endif

    /* End of Logic: '<S425>/Logical Operator3' */

    /* SignalConversion generated from: '<S353>/Variant Source3' */
#if !Rte_SysCon_Variant_BRDR_28

    /* VariantMerge generated from: '<S353>/Variant Source3' incorporates:
     *  Constant: '<S405>/FALSE Constant4'
     */
    rtb_VariantMerge_For_Variant_Source_V__1 = false;

    /* Gain: '<S421>/Gain' incorporates:
     *  Constant: '<S405>/FALSE Constant2'
     *  VariantMerge generated from: '<S353>/Variant Source3'
     */
    VeBRDR_b_BHOSTmpFA_Enbl = false;

    /* Gain: '<S422>/Gain' incorporates:
     *  Constant: '<S405>/FALSE Constant1'
     *  VariantMerge generated from: '<S353>/Variant Source3'
     */
    VeBRDR_b_BHOSTmpRat_Enbl = false;

    /* VariantMerge generated from: '<S353>/Variant Source3' incorporates:
     *  Constant: '<S405>/FALSE Constant3'
     */
    rtb_LogicalOperator3_d = false;

#endif

    /* End of SignalConversion generated from: '<S353>/Variant Source3' */

    /* S-Function (sfix_bitop): '<S504>/Bitwise Operator2' incorporates:
     *  Logic: '<S493>/Logical Operator1'
     *  Logic: '<S495>/Logical Operator'
     *  Logic: '<S495>/Logical Operator1'
     *  Logic: '<S495>/Logical Operator2'
     *  Logic: '<S504>/Logical Operator'
     *  Logic: '<S505>/Logical Operator'
     *  RelationalOperator: '<S504>/Relational Operator1'
     *  RelationalOperator: '<S504>/Relational Operator2'
     *  RelationalOperator: '<S505>/Relational Operator1'
     *  RelationalOperator: '<S505>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S504>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S505>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S505>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8

    /* VariantMerge generated from: '<S11>/Variant Source2' incorporates:
     *  Constant: '<S504>/Constant1'
     *  Constant: '<S504>/Constant2'
     *  Constant: '<S505>/Constant1'
     *  Constant: '<S505>/Constant2'
     *  DataStoreRead: '<S504>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S505>/StatusByte_LostCommHB_CoolPmp'
     */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = ((((((uint32)
        BRDR_ac_DW.StatusByte_LIN1_BusOff) & 1U) == 0U) || ((((uint32)
        BRDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) != 0U)) && (((((uint32)
        BRDR_ac_DW.StatusByte_LostCommHB_CoolPmp) & 1U) == 0U) || ((((uint32)
        BRDR_ac_DW.StatusByte_LostCommHB_CoolPmp) & 64U) != 0U)));

    /* VariantMerge generated from: '<S334>/Variant Source' */
    VeBRDR_b_BTOSFlt_Sym = ((VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD) &&
                            (VeBRDR_b_TempRat_PerfEnbl));

#endif

    /* End of S-Function (sfix_bitop): '<S504>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S493>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S494>/Variant Source'
     */
#if !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_8

    /* VariantMerge generated from: '<S334>/Variant Source' */
    VeBRDR_b_BTOSFlt_Sym = VeBRDR_b_TempRat_PerfEnbl;

    /* VariantMerge generated from: '<S11>/Variant Source2' */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = rtb_VariantMergeForOutportNo_LTAP_LOC;

#endif

    /* End of SignalConversion generated from: '<S493>/Variant Source' */

    /* Logic: '<S494>/Logical Operator2' incorporates:
     *  Constant: '<S498>/Calib'
     *  Logic: '<S493>/Logical Operator2'
     *  Logic: '<S493>/Logical Operator3'
     *  Logic: '<S493>/Logical Operator4'
     *  Logic: '<S494>/Logical Operator1'
     *  Logic: '<S494>/Logical Operator3'
     *  Logic: '<S494>/Logical Operator4'
     *  Logic: '<S494>/Logical Operator5'
     *  Logic: '<S496>/Logical Operator'
     *  RelationalOperator: '<S496>/Relational Operator1'
     *  RelationalOperator: '<S496>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S496>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S496>/Bitwise Operator2'
     *  SignalConversion generated from: '<S353>/Variant Source'
     *  Switch: '<S494>/Switch'
     *  UnitDelay: '<S501>/Unit Delay'
     */
#if Rte_SysCon_Variant_BRDR_8

    /* Outputs for Atomic SubSystem: '<S494>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S494>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S494>/Turn On Delay Time' */
    /* Logic: '<S501>/NOT' */
    rtb_VariantMerge_For_Variant_Source_V__0 = ((VeBRDR_b_TempRat_ComEnbl[0]) &&
        (VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD));

    /* Logic: '<S494>/Logical Operator2' */
    rtb_LogicalOperator2_my = (rtb_VariantMerge_For_Variant_Source_V__0 &&
        rtb_TmpSignalConversionAtVePMIR_b_LTActv);

    /* Outputs for Atomic SubSystem: '<S502>/EdgeRising' */
    /* Logic: '<S503>/AND' incorporates:
     *  Logic: '<S503>/OR1'
     *  UnitDelay: '<S503>/Unit Delay'
     */
    rtb_AND_cs = (rtb_LogicalOperator2_my && (!BRDR_ac_DW.UnitDelay_DSTATE_dd));

    /* Update for UnitDelay: '<S503>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_dd = rtb_LogicalOperator2_my;

    /* End of Outputs for SubSystem: '<S502>/EdgeRising' */

    /* Switch: '<S502>/Switch1' incorporates:
     *  Constant: '<S412>/Calib'
     *  Constant: '<S500>/Calib'
     *  Constant: '<S502>/Constant Value1'
     *  Logic: '<S502>/OR'
     *  Logic: '<S502>/OR1'
     *  MinMax: '<S502>/Minimum'
     *  Sum: '<S502>/Summation'
     *  UnitDelay: '<S502>/Unit Delay'
     */
    if ((!rtb_LogicalOperator2_my) || rtb_AND_cs)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_i = 0.0F;
    }
    else
    {
        BRDR_ac_DW.UnitDelay_DSTATE_i = fminf(KeBRDR_t_LTAP_FA_DbncTime,
            HeBRDR_t_MedTEH + BRDR_ac_DW.UnitDelay_DSTATE_i);
    }

    /* End of Switch: '<S502>/Switch1' */

    /* Logic: '<S502>/AND' incorporates:
     *  Constant: '<S500>/Calib'
     *  RelationalOperator: '<S502>/Greater  Than'
     *  UnitDelay: '<S502>/Unit Delay'
     */
    rtb_LogicalOperator2_my = (rtb_LogicalOperator2_my &&
        (BRDR_ac_DW.UnitDelay_DSTATE_i >= KeBRDR_t_LTAP_FA_DbncTime));

    /* Logic: '<S497>/AND' incorporates:
     *  Logic: '<S497>/OR1'
     *  UnitDelay: '<S497>/Unit Delay'
     */
    rtb_AND_cs = (rtb_LogicalOperator2_my && (!BRDR_ac_DW.UnitDelay_DSTATE_hi));

    /* Update for UnitDelay: '<S497>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_hi = rtb_LogicalOperator2_my;

    /* Logic: '<S501>/OR1' incorporates:
     *  Logic: '<S501>/OR'
     *  UnitDelay: '<S501>/Unit Delay'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_bbh = (rtb_AND_cs ||
        (rtb_VariantMerge_For_Variant_Source_V__0 &&
         (BRDR_ac_DW.UnitDelay_DSTATE_bbh)));
    if (KeBRDR_b_EnblFltHealing_CANFA)
    {
        rtb_AND_cs = BRDR_ac_DW.UnitDelay_DSTATE_bbh;
    }
    else
    {
        rtb_AND_cs = rtb_LogicalOperator2_my;
    }

    /* VariantMerge generated from: '<S11>/Variant Source2' incorporates:
     *  Constant: '<S498>/Calib'
     *  Constant: '<S499>/Calib'
     *  UnitDelay: '<S501>/Unit Delay'
     */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = ((KeBRDR_b_LTAP_FA_EnblCnds) && rtb_AND_cs);

    /* VariantMerge generated from: '<S353>/Variant Source' */
    rtb_VariantMerge_For_Variant_Source_V__0 = VeBRDR_b_BTOSFlt_Sym;

    /* Gain: '<S417>/Gain' incorporates:
     *  VariantMerge generated from: '<S353>/Variant Source'
     */
    VeBRDR_b_LTAPTmpFA_Enbl = VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD;

    /* Gain: '<S418>/Gain' incorporates:
     *  Constant: '<S496>/Constant1'
     *  Constant: '<S496>/Constant2'
     *  DataStoreRead: '<S496>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  VariantMerge generated from: '<S353>/Variant Source'
     */
    VeBRDR_b_LTAPTmpRat_Enbl = (((VeBRDR_b_BTOSFlt_Sym) && (((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 1U) == 0U) ||
        ((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 64U) != 0U)))
        && (!rtb_TmpSignalConversionAtVePMIR_b_LTActv));

    /* End of Outputs for SubSystem: '<S494>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S494>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S494>/Signal Latch On With Reset' */
#endif

    /* End of Logic: '<S494>/Logical Operator2' */

    /* SignalConversion generated from: '<S353>/Variant Source' */
#if !Rte_SysCon_Variant_BRDR_8

    /* VariantMerge generated from: '<S353>/Variant Source' incorporates:
     *  Constant: '<S405>/FALSE Constant4'
     */
    rtb_VariantMerge_For_Variant_Source_V__0 = false;

    /* Gain: '<S417>/Gain' incorporates:
     *  Constant: '<S405>/FALSE Constant2'
     *  VariantMerge generated from: '<S353>/Variant Source'
     */
    VeBRDR_b_LTAPTmpFA_Enbl = false;

    /* Gain: '<S418>/Gain' incorporates:
     *  Constant: '<S405>/FALSE Constant1'
     *  VariantMerge generated from: '<S353>/Variant Source'
     */
    VeBRDR_b_LTAPTmpRat_Enbl = false;

    /* VariantMerge generated from: '<S353>/Variant Source' incorporates:
     *  Constant: '<S405>/FALSE Constant3'
     */
    rtb_LogicalOperator2_my = false;

#endif

    /* End of SignalConversion generated from: '<S353>/Variant Source' */

    /* Logic: '<S448>/Logical Operator' incorporates:
     *  Logic: '<S448>/Logical Operator1'
     *  Logic: '<S448>/Logical Operator2'
     */
#if Rte_SysCon_Variant_BRDR_12 && Rte_SysCon_Variant_BRDR_3

    /* VariantMerge generated from: '<S11>/Variant Source2' */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = (((VeBRDR_b_TempRat_PerfEnbl) &&
        (!rtb_VariantMerge_For_Variant_Source_V_cw)) &&
        (!rtb_VariantMerge_For_Variant_Source_Va_a));

#endif

    /* End of Logic: '<S448>/Logical Operator' */

    /* S-Function (sfix_bitop): '<S458>/Bitwise Operator2' incorporates:
     *  Logic: '<S449>/Logical Operator'
     *  Logic: '<S449>/Logical Operator1'
     *  Logic: '<S449>/Logical Operator2'
     *  Logic: '<S458>/Logical Operator'
     *  RelationalOperator: '<S458>/Relational Operator1'
     *  RelationalOperator: '<S458>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S458>/Bitwise Operator1'
     */
#if Rte_SysCon_Variant_BRDR_12 && Rte_SysCon_Variant_BRDR_5

    /* VariantMerge generated from: '<S11>/Variant Source2' incorporates:
     *  Constant: '<S458>/Constant1'
     *  Constant: '<S458>/Constant2'
     *  Constant: '<S459>/Calib'
     *  DataStoreRead: '<S458>/StatusByte_CoolOutTempSnsCkt'
     */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = ((VeBRDR_b_TempRat_PerfEnbl) &&
        ((((((uint32)BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1U) == 0U) ||
          ((((uint32)BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) != 0U)) ||
         (KeBRDR_b_BTOS_Perf_D)));

#endif

    /* End of S-Function (sfix_bitop): '<S458>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S407>/Variant Source' */
#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12

    /* VariantMerge generated from: '<S11>/Variant Source2' */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = VeBRDR_b_TempRat_PerfEnbl;

#endif

    /* End of SignalConversion generated from: '<S407>/Variant Source' */

    /* Logic: '<S447>/Logical Operator2' incorporates:
     *  Constant: '<S453>/Calib'
     *  Logic: '<S447>/Logical Operator1'
     *  Logic: '<S447>/Logical Operator5'
     *  Logic: '<S450>/Logical Operator'
     *  Logic: '<S450>/Logical Operator1'
     *  Logic: '<S450>/Logical Operator2'
     *  Logic: '<S460>/Logical Operator'
     *  RelationalOperator: '<S460>/Relational Operator1'
     *  RelationalOperator: '<S460>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S460>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S460>/Bitwise Operator2'
     *  SignalConversion generated from: '<S353>/Variant Source1'
     *  Switch: '<S447>/Switch'
     *  UnitDelay: '<S455>/Unit Delay'
     */
#if Rte_SysCon_Variant_BRDR_12

    /* Outputs for Atomic SubSystem: '<S447>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S447>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S447>/Turn On Delay Time' */
    /* Logic: '<S447>/Logical Operator2' */
    rtb_LogicalOperator2_ds = ((VeBRDR_b_TempRat_ComEnbl[0]) &&
        rtb_TmpSignalConversionAtVeTRIR_b_HV_Bat);

    /* Outputs for Atomic SubSystem: '<S456>/EdgeRising' */
    /* Logic: '<S457>/AND' incorporates:
     *  Logic: '<S457>/OR1'
     *  UnitDelay: '<S457>/Unit Delay'
     */
    rtb_AND_kc = (rtb_LogicalOperator2_ds && (!BRDR_ac_DW.UnitDelay_DSTATE_pc));

    /* Update for UnitDelay: '<S457>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_pc = rtb_LogicalOperator2_ds;

    /* End of Outputs for SubSystem: '<S456>/EdgeRising' */

    /* Switch: '<S456>/Switch1' incorporates:
     *  Constant: '<S412>/Calib'
     *  Constant: '<S454>/Calib'
     *  Constant: '<S456>/Constant Value1'
     *  Logic: '<S456>/OR'
     *  Logic: '<S456>/OR1'
     *  MinMax: '<S456>/Minimum'
     *  Sum: '<S456>/Summation'
     *  UnitDelay: '<S456>/Unit Delay'
     */
    if ((!rtb_LogicalOperator2_ds) || rtb_AND_kc)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_b4 = 0.0F;
    }
    else
    {
        BRDR_ac_DW.UnitDelay_DSTATE_b4 = fminf(KeBRDR_t_BTIS_FA_DbncTime,
            HeBRDR_t_MedTEH + BRDR_ac_DW.UnitDelay_DSTATE_b4);
    }

    /* End of Switch: '<S456>/Switch1' */

    /* Logic: '<S456>/AND' incorporates:
     *  Constant: '<S454>/Calib'
     *  RelationalOperator: '<S456>/Greater  Than'
     *  UnitDelay: '<S456>/Unit Delay'
     */
    rtb_LogicalOperator2_ds = (rtb_LogicalOperator2_ds &&
        (BRDR_ac_DW.UnitDelay_DSTATE_b4 >= KeBRDR_t_BTIS_FA_DbncTime));

    /* Logic: '<S451>/AND' incorporates:
     *  Logic: '<S451>/OR1'
     *  UnitDelay: '<S451>/Unit Delay'
     */
    rtb_AND_kc = (rtb_LogicalOperator2_ds && (!BRDR_ac_DW.UnitDelay_DSTATE_cm));

    /* Update for UnitDelay: '<S451>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_cm = rtb_LogicalOperator2_ds;

    /* Logic: '<S455>/OR1' incorporates:
     *  Logic: '<S455>/OR'
     *  UnitDelay: '<S455>/Unit Delay'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_lx = (rtb_AND_kc || ((VeBRDR_b_TempRat_ComEnbl[0])
        && (BRDR_ac_DW.UnitDelay_DSTATE_lx)));
    if (KeBRDR_b_EnblFltHealing_CANFA)
    {
        rtb_AND_cs = BRDR_ac_DW.UnitDelay_DSTATE_lx;
    }
    else
    {
        rtb_AND_cs = rtb_LogicalOperator2_ds;
    }

    /* VariantMerge generated from: '<S334>/Variant Source' incorporates:
     *  Constant: '<S452>/Calib'
     *  Constant: '<S453>/Calib'
     *  UnitDelay: '<S455>/Unit Delay'
     */
    VeBRDR_b_BTOSFlt_Sym = ((KeBRDR_b_BTIS_FA_EnblCnds) && rtb_AND_cs);

    /* VariantMerge generated from: '<S353>/Variant Source1' */
    rtb_AND_kc = VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD;

    /* Gain: '<S413>/Gain' incorporates:
     *  VariantMerge generated from: '<S353>/Variant Source1'
     */
    VeBRDR_b_BTISTmpFA_Enbl = VeBRDR_b_BTOSFlt_Sym;

    /* Gain: '<S414>/Gain' incorporates:
     *  Constant: '<S460>/Constant1'
     *  Constant: '<S460>/Constant2'
     *  DataStoreRead: '<S460>/StatusByte_HB_CT_SnsrPerf'
     *  VariantMerge generated from: '<S353>/Variant Source1'
     */
    VeBRDR_b_BTISTmpRat_Enbl = (((VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD) && (((((uint32)
        BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1U) == 0U) || ((((uint32)
        BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) != 0U))) &&
        (!rtb_TmpSignalConversionAtVeTRIR_b_HV_Bat));

    /* End of Outputs for SubSystem: '<S447>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S447>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S447>/Signal Latch On With Reset' */
#endif

    /* End of Logic: '<S447>/Logical Operator2' */

    /* SignalConversion generated from: '<S353>/Variant Source1' */
#if !Rte_SysCon_Variant_BRDR_12

    /* VariantMerge generated from: '<S353>/Variant Source1' incorporates:
     *  Constant: '<S405>/FALSE Constant4'
     */
    rtb_AND_kc = false;

    /* Gain: '<S413>/Gain' incorporates:
     *  Constant: '<S405>/FALSE Constant2'
     *  VariantMerge generated from: '<S353>/Variant Source1'
     */
    VeBRDR_b_BTISTmpFA_Enbl = false;

    /* Gain: '<S414>/Gain' incorporates:
     *  Constant: '<S405>/FALSE Constant1'
     *  VariantMerge generated from: '<S353>/Variant Source1'
     */
    VeBRDR_b_BTISTmpRat_Enbl = false;

    /* VariantMerge generated from: '<S353>/Variant Source1' incorporates:
     *  Constant: '<S405>/FALSE Constant3'
     */
    rtb_LogicalOperator2_ds = false;

#endif

    /* End of SignalConversion generated from: '<S353>/Variant Source1' */

    /* Logic: '<S471>/Logical Operator1' incorporates:
     *  Logic: '<S471>/Logical Operator2'
     *  Logic: '<S471>/Logical Operator3'
     */
#if Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_6

    /* VariantMerge generated from: '<S11>/Variant Source2' */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = (((VeBRDR_b_TempRat_PerfEnbl) &&
        (!rtb_VariantMerge_For_Variant_Source_Va_p)) &&
        (!rtb_VariantMerge_For_Variant_Source_V_h3));

#endif

    /* End of Logic: '<S471>/Logical Operator1' */

    /* S-Function (sfix_bitop): '<S481>/Bitwise Operator2' incorporates:
     *  Logic: '<S472>/Logical Operator1'
     *  Logic: '<S472>/Logical Operator2'
     *  Logic: '<S472>/Logical Operator3'
     *  Logic: '<S481>/Logical Operator'
     *  RelationalOperator: '<S481>/Relational Operator1'
     *  RelationalOperator: '<S481>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S481>/Bitwise Operator1'
     */
#if Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

    /* VariantMerge generated from: '<S11>/Variant Source2' incorporates:
     *  Constant: '<S481>/Constant1'
     *  Constant: '<S481>/Constant2'
     *  Constant: '<S482>/Calib'
     *  DataStoreRead: '<S481>/StatusByte_HB_CT_SnsrPerf'
     */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = ((VeBRDR_b_TempRat_PerfEnbl) &&
        ((((((uint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1U) == 0U) ||
          ((((uint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) != 0U)) ||
         (KeBRDR_b_BTIS_Perf_D)));

#endif

    /* End of S-Function (sfix_bitop): '<S481>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S409>/Variant Source' */
#if !Rte_SysCon_Variant_BRDR_3 && !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

    /* VariantMerge generated from: '<S11>/Variant Source2' */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = VeBRDR_b_TempRat_PerfEnbl;

#endif

    /* End of SignalConversion generated from: '<S409>/Variant Source' */

    /* Logic: '<S470>/Logical Operator2' incorporates:
     *  Constant: '<S476>/Calib'
     *  Logic: '<S470>/Logical Operator1'
     *  Logic: '<S470>/Logical Operator5'
     *  Logic: '<S473>/Logical Operator'
     *  Logic: '<S473>/Logical Operator1'
     *  Logic: '<S473>/Logical Operator2'
     *  Logic: '<S483>/Logical Operator'
     *  RelationalOperator: '<S483>/Relational Operator1'
     *  RelationalOperator: '<S483>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S483>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S483>/Bitwise Operator2'
     *  SignalConversion generated from: '<S353>/Variant Source2'
     *  Switch: '<S470>/Switch'
     *  UnitDelay: '<S478>/Unit Delay'
     */
#if Rte_SysCon_Variant_BRDR_6

    /* Outputs for Atomic SubSystem: '<S470>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S470>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S470>/Turn On Delay Time' */
    /* Logic: '<S470>/Logical Operator2' */
    rtb_LogicalOperator2_k2 = ((VeBRDR_b_TempRat_ComEnbl[0]) &&
        rtb_TmpSignalConversionAtVeTRIR_b_HV_B_h);

    /* Outputs for Atomic SubSystem: '<S479>/EdgeRising' */
    /* Logic: '<S480>/AND' incorporates:
     *  Logic: '<S480>/OR1'
     *  UnitDelay: '<S480>/Unit Delay'
     */
    rtb_AND_ea = (rtb_LogicalOperator2_k2 && (!BRDR_ac_DW.UnitDelay_DSTATE_c1));

    /* Update for UnitDelay: '<S480>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_c1 = rtb_LogicalOperator2_k2;

    /* End of Outputs for SubSystem: '<S479>/EdgeRising' */

    /* Switch: '<S479>/Switch1' incorporates:
     *  Constant: '<S412>/Calib'
     *  Constant: '<S477>/Calib'
     *  Constant: '<S479>/Constant Value1'
     *  Logic: '<S479>/OR'
     *  Logic: '<S479>/OR1'
     *  MinMax: '<S479>/Minimum'
     *  Sum: '<S479>/Summation'
     *  UnitDelay: '<S479>/Unit Delay'
     */
    if ((!rtb_LogicalOperator2_k2) || rtb_AND_ea)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_ph = 0.0F;
    }
    else
    {
        BRDR_ac_DW.UnitDelay_DSTATE_ph = fminf(KeBRDR_t_BTOS_FA_DbncTime,
            HeBRDR_t_MedTEH + BRDR_ac_DW.UnitDelay_DSTATE_ph);
    }

    /* End of Switch: '<S479>/Switch1' */

    /* Logic: '<S479>/AND' incorporates:
     *  Constant: '<S477>/Calib'
     *  RelationalOperator: '<S479>/Greater  Than'
     *  UnitDelay: '<S479>/Unit Delay'
     */
    rtb_LogicalOperator2_k2 = (rtb_LogicalOperator2_k2 &&
        (BRDR_ac_DW.UnitDelay_DSTATE_ph >= KeBRDR_t_BTOS_FA_DbncTime));

    /* Logic: '<S474>/AND' incorporates:
     *  Logic: '<S474>/OR1'
     *  UnitDelay: '<S474>/Unit Delay'
     */
    rtb_AND_ea = (rtb_LogicalOperator2_k2 && (!BRDR_ac_DW.UnitDelay_DSTATE_cb));

    /* Update for UnitDelay: '<S474>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_cb = rtb_LogicalOperator2_k2;

    /* Logic: '<S478>/OR1' incorporates:
     *  Logic: '<S478>/OR'
     *  UnitDelay: '<S478>/Unit Delay'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_li2 = (rtb_AND_ea || ((VeBRDR_b_TempRat_ComEnbl
        [0]) && (BRDR_ac_DW.UnitDelay_DSTATE_li2)));
    if (KeBRDR_b_EnblFltHealing_CANFA)
    {
        rtb_AND_cs = BRDR_ac_DW.UnitDelay_DSTATE_li2;
    }
    else
    {
        rtb_AND_cs = rtb_LogicalOperator2_k2;
    }

    /* VariantMerge generated from: '<S334>/Variant Source' incorporates:
     *  Constant: '<S475>/Calib'
     *  Constant: '<S476>/Calib'
     *  UnitDelay: '<S478>/Unit Delay'
     */
    VeBRDR_b_BTOSFlt_Sym = ((KeBRDR_b_BTOS_FA_EnblCnds) && rtb_AND_cs);

    /* VariantMerge generated from: '<S353>/Variant Source2' */
    rtb_AND_ea = VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD;

    /* Gain: '<S419>/Gain' incorporates:
     *  VariantMerge generated from: '<S353>/Variant Source2'
     */
    VeBRDR_b_BTOSTmpFA_Enbl = VeBRDR_b_BTOSFlt_Sym;

    /* Gain: '<S420>/Gain' incorporates:
     *  Constant: '<S483>/Constant1'
     *  Constant: '<S483>/Constant2'
     *  DataStoreRead: '<S483>/StatusByte_CoolOutTempSnsCkt'
     *  VariantMerge generated from: '<S353>/Variant Source2'
     */
    VeBRDR_b_BTOSTmpRat_Enbl = (((VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD) && (((((uint32)
        BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1U) == 0U) || ((((uint32)
        BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) != 0U))) &&
        (!rtb_TmpSignalConversionAtVeTRIR_b_HV_B_h));

    /* End of Outputs for SubSystem: '<S470>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S470>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S470>/Signal Latch On With Reset' */
#endif

    /* End of Logic: '<S470>/Logical Operator2' */

    /* SignalConversion generated from: '<S353>/Variant Source2' */
#if !Rte_SysCon_Variant_BRDR_6

    /* VariantMerge generated from: '<S353>/Variant Source2' incorporates:
     *  Constant: '<S405>/FALSE Constant4'
     */
    rtb_AND_ea = false;

    /* Gain: '<S419>/Gain' incorporates:
     *  Constant: '<S405>/FALSE Constant2'
     *  VariantMerge generated from: '<S353>/Variant Source2'
     */
    VeBRDR_b_BTOSTmpFA_Enbl = false;

    /* Gain: '<S420>/Gain' incorporates:
     *  Constant: '<S405>/FALSE Constant1'
     *  VariantMerge generated from: '<S353>/Variant Source2'
     */
    VeBRDR_b_BTOSTmpRat_Enbl = false;

    /* VariantMerge generated from: '<S353>/Variant Source2' incorporates:
     *  Constant: '<S405>/FALSE Constant3'
     */
    rtb_LogicalOperator2_k2 = false;

#endif

    /* End of SignalConversion generated from: '<S353>/Variant Source2' */

    /* Outputs for Atomic SubSystem: '<S410>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S410>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S410>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S408>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S408>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S408>/Turn On Delay Time' */
    /* Logic: '<S408>/Logical Operator3' incorporates:
     *  Constant: '<S464>/Calib'
     *  Constant: '<S486>/Calib'
     *  Constant: '<S487>/Calib'
     *  Constant: '<S491>/Constant1'
     *  Constant: '<S491>/Constant2'
     *  DataStoreRead: '<S491>/StatusByte_HybBattCooTempSnsrDPer'
     *  Logic: '<S408>/Logical Operator1'
     *  Logic: '<S408>/Logical Operator5'
     *  Logic: '<S410>/Logical Operator1'
     *  Logic: '<S410>/Logical Operator3'
     *  Logic: '<S410>/Logical Operator5'
     *  Logic: '<S462>/Logical Operator1'
     *  Logic: '<S462>/Logical Operator2'
     *  Logic: '<S462>/Logical Operator3'
     *  Logic: '<S468>/Logical Operator'
     *  Logic: '<S485>/Logical Operator1'
     *  Logic: '<S485>/Logical Operator2'
     *  Logic: '<S485>/Logical Operator3'
     *  Logic: '<S491>/Logical Operator'
     *  RelationalOperator: '<S468>/Relational Operator1'
     *  RelationalOperator: '<S468>/Relational Operator2'
     *  RelationalOperator: '<S491>/Relational Operator1'
     *  RelationalOperator: '<S491>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S468>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S468>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S491>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S491>/Bitwise Operator2'
     *  SignalConversion generated from: '<S353>/Variant Source4'
     *  Switch: '<S408>/Switch'
     *  Switch: '<S410>/Switch'
     *  UnitDelay: '<S466>/Unit Delay'
     *  UnitDelay: '<S489>/Unit Delay'
     */
#if Rte_SysCon_Variant_BRDR_28

    /* Logic: '<S408>/Logical Operator3' */
    rtb_LogicalOperator3_b4 = ((VeBRDR_b_TempRat_ComEnbl[0]) &&
        rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e);

    /* Outputs for Atomic SubSystem: '<S467>/EdgeRising' */
    /* Logic: '<S469>/AND' incorporates:
     *  Logic: '<S469>/OR1'
     *  UnitDelay: '<S469>/Unit Delay'
     */
    rtb_AND_el = (rtb_LogicalOperator3_b4 && (!BRDR_ac_DW.UnitDelay_DSTATE_gb));

    /* Update for UnitDelay: '<S469>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_gb = rtb_LogicalOperator3_b4;

    /* End of Outputs for SubSystem: '<S467>/EdgeRising' */

    /* Switch: '<S467>/Switch1' incorporates:
     *  Constant: '<S412>/Calib'
     *  Constant: '<S465>/Calib'
     *  Constant: '<S467>/Constant Value1'
     *  Logic: '<S467>/OR'
     *  Logic: '<S467>/OR1'
     *  MinMax: '<S467>/Minimum'
     *  Sum: '<S467>/Summation'
     *  UnitDelay: '<S467>/Unit Delay'
     */
    if ((!rtb_LogicalOperator3_b4) || rtb_AND_el)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_pu = 0.0F;
    }
    else
    {
        BRDR_ac_DW.UnitDelay_DSTATE_pu = fminf(KeBRDR_t_BTIS2_FA_DbncTime,
            HeBRDR_t_MedTEH + BRDR_ac_DW.UnitDelay_DSTATE_pu);
    }

    /* End of Switch: '<S467>/Switch1' */

    /* Logic: '<S467>/AND' incorporates:
     *  Constant: '<S465>/Calib'
     *  RelationalOperator: '<S467>/Greater  Than'
     *  UnitDelay: '<S467>/Unit Delay'
     */
    rtb_LogicalOperator3_b4 = (rtb_LogicalOperator3_b4 &&
        (BRDR_ac_DW.UnitDelay_DSTATE_pu >= KeBRDR_t_BTIS2_FA_DbncTime));

    /* Logic: '<S461>/AND' incorporates:
     *  Logic: '<S461>/OR1'
     *  UnitDelay: '<S461>/Unit Delay'
     */
    rtb_AND_el = (rtb_LogicalOperator3_b4 && (!BRDR_ac_DW.UnitDelay_DSTATE_kq));

    /* Update for UnitDelay: '<S461>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_kq = rtb_LogicalOperator3_b4;

    /* Logic: '<S466>/OR1' incorporates:
     *  Logic: '<S466>/OR'
     *  UnitDelay: '<S466>/Unit Delay'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_mx = (rtb_AND_el || ((VeBRDR_b_TempRat_ComEnbl[0])
        && (BRDR_ac_DW.UnitDelay_DSTATE_mx)));

    /* VariantMerge generated from: '<S334>/Variant Source' incorporates:
     *  Constant: '<S468>/Constant1'
     *  Constant: '<S468>/Constant2'
     *  DataStoreRead: '<S468>/StatusByte_HybBattCooTempSnsrCPer'
     */
    VeBRDR_b_BTOSFlt_Sym = (((VeBRDR_b_TempRat_PerfEnbl) && (((((uint32)
        BRDR_ac_DW.StatusByte_HybBattCooTempSnsrCPer) & 1U) == 0U) || ((((uint32)
        BRDR_ac_DW.StatusByte_HybBattCooTempSnsrCPer) & 64U) != 0U))) &&
                            (!rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e));

    /* VariantMerge generated from: '<S353>/Variant Source4' */
    rtb_AND_el = VeBRDR_b_TempRat_PerfEnbl;
    if (KeBRDR_b_EnblFltHealing_CANFA)
    {
        rtb_AND_cs = BRDR_ac_DW.UnitDelay_DSTATE_mx;
    }
    else
    {
        rtb_AND_cs = rtb_LogicalOperator3_b4;
    }

    /* Gain: '<S423>/Gain' incorporates:
     *  Constant: '<S463>/Calib'
     *  Constant: '<S464>/Calib'
     *  UnitDelay: '<S466>/Unit Delay'
     *  VariantMerge generated from: '<S353>/Variant Source4'
     */
    VeBRDR_b_BTIS2TmpFA_Enbl = ((KeBRDR_b_BTIS2_FA_EnblCnds) && rtb_AND_cs);

    /* Gain: '<S424>/Gain' incorporates:
     *  VariantMerge generated from: '<S353>/Variant Source4'
     */
    VeBRDR_b_BTIS2TmpRat_Enbl = VeBRDR_b_BTOSFlt_Sym;

    /* Logic: '<S410>/Logical Operator3' */
    rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e = ((VeBRDR_b_TempRat_PerfEnbl) &&
        rtb_TmpSignalConversionAtVeTRIR_b_HV_B_k);

    /* Outputs for Atomic SubSystem: '<S490>/EdgeRising' */
    /* Logic: '<S492>/AND' incorporates:
     *  Logic: '<S492>/OR1'
     *  UnitDelay: '<S492>/Unit Delay'
     */
    rtb_AND_cs = (rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e &&
                  (!BRDR_ac_DW.UnitDelay_DSTATE_lt));

    /* Update for UnitDelay: '<S492>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_lt = rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e;

    /* End of Outputs for SubSystem: '<S490>/EdgeRising' */

    /* Switch: '<S490>/Switch1' incorporates:
     *  Constant: '<S412>/Calib'
     *  Constant: '<S488>/Calib'
     *  Constant: '<S490>/Constant Value1'
     *  Logic: '<S490>/OR'
     *  Logic: '<S490>/OR1'
     *  MinMax: '<S490>/Minimum'
     *  Sum: '<S490>/Summation'
     *  UnitDelay: '<S490>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e) || rtb_AND_cs)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_pk = 0.0F;
    }
    else
    {
        BRDR_ac_DW.UnitDelay_DSTATE_pk = fminf(KeBRDR_t_BTOS2_FA_DbncTime,
            HeBRDR_t_MedTEH + BRDR_ac_DW.UnitDelay_DSTATE_pk);
    }

    /* End of Switch: '<S490>/Switch1' */

    /* Logic: '<S490>/AND' incorporates:
     *  Constant: '<S488>/Calib'
     *  RelationalOperator: '<S490>/Greater  Than'
     *  UnitDelay: '<S490>/Unit Delay'
     */
    VeBRDR_b_TempRat_ComEnbl[3] = (rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e &&
        (BRDR_ac_DW.UnitDelay_DSTATE_pk >= KeBRDR_t_BTOS2_FA_DbncTime));

    /* Logic: '<S484>/AND' incorporates:
     *  Logic: '<S484>/OR1'
     *  UnitDelay: '<S484>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e = ((VeBRDR_b_TempRat_ComEnbl[3]) &&
        (!BRDR_ac_DW.UnitDelay_DSTATE_iy));

    /* Update for UnitDelay: '<S484>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_iy = VeBRDR_b_TempRat_ComEnbl[3];

    /* Logic: '<S489>/OR1' incorporates:
     *  Logic: '<S489>/OR'
     *  UnitDelay: '<S489>/Unit Delay'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_li = (rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e ||
        ((VeBRDR_b_TempRat_PerfEnbl) && (BRDR_ac_DW.UnitDelay_DSTATE_li)));
    if (KeBRDR_b_EnblFltHealing_CANFA)
    {
        rtb_AND_cs = BRDR_ac_DW.UnitDelay_DSTATE_li;
    }
    else
    {
        rtb_AND_cs = VeBRDR_b_TempRat_ComEnbl[3];
    }

    VeBRDR_b_TempRat_ComEnbl[1] = ((KeBRDR_b_BTOS2_FA_EnblCnds) && rtb_AND_cs);
    VeBRDR_b_TempRat_ComEnbl[2] = (((VeBRDR_b_TempRat_ComEnbl[0]) && (((((uint32)
        BRDR_ac_DW.StatusByte_HybBattCooTempSnsrDPer) & 1U) == 0U) || ((((uint32)
        BRDR_ac_DW.StatusByte_HybBattCooTempSnsrDPer) & 64U) != 0U))) &&
        (!rtb_TmpSignalConversionAtVeTRIR_b_HV_B_k));

#endif

    /* End of Logic: '<S408>/Logical Operator3' */
    /* End of Outputs for SubSystem: '<S408>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S408>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S408>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S410>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S410>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S410>/Signal Latch On With Reset' */

    /* SignalConversion generated from: '<S353>/Variant Source4' incorporates:
     *  SignalConversion generated from: '<S353>/Variant Source5'
     */
#if !Rte_SysCon_Variant_BRDR_28

    /* VariantMerge generated from: '<S353>/Variant Source4' incorporates:
     *  Constant: '<S405>/FALSE Constant4'
     */
    rtb_AND_el = false;

    /* Gain: '<S423>/Gain' incorporates:
     *  Constant: '<S405>/FALSE Constant2'
     *  VariantMerge generated from: '<S353>/Variant Source4'
     */
    VeBRDR_b_BTIS2TmpFA_Enbl = false;

    /* Gain: '<S424>/Gain' incorporates:
     *  Constant: '<S405>/FALSE Constant1'
     *  VariantMerge generated from: '<S353>/Variant Source4'
     */
    VeBRDR_b_BTIS2TmpRat_Enbl = false;

    /* VariantMerge generated from: '<S353>/Variant Source4' incorporates:
     *  Constant: '<S405>/FALSE Constant3'
     */
    rtb_LogicalOperator3_b4 = false;

    /* VariantMerge generated from: '<S353>/Variant Source5' incorporates:
     *  Constant: '<S405>/FALSE Constant1'
     *  Constant: '<S405>/FALSE Constant2'
     *  Constant: '<S405>/FALSE Constant3'
     *  Constant: '<S405>/FALSE Constant4'
     */
    VeBRDR_b_TempRat_ComEnbl[0] = false;
    VeBRDR_b_TempRat_ComEnbl[1] = false;
    VeBRDR_b_TempRat_ComEnbl[2] = false;
    VeBRDR_b_TempRat_ComEnbl[3] = false;

#endif

    /* End of SignalConversion generated from: '<S353>/Variant Source4' */

    /* Gain: '<S416>/Gain' */
    VeBRDR_b_BTOS2TmpRat_Enbl = VeBRDR_b_TempRat_ComEnbl[2];

    /* Truth Table: '<S330>/Sensor_Selection' incorporates:
     *  Constant: '<S507>/Calib'
     *  Constant: '<S508>/Calib'
     *  Constant: '<S509>/Calib'
     *  Constant: '<S510>/Calib'
     *  Constant: '<S511>/Calib'
     *  Constant: '<S512>/Calib'
     *  Inport: '<Root>/VeTRIR_T_HV_BatClntTmp2_In'
     *  Inport: '<Root>/VeTRIR_T_HV_BatClntTmpOut2'
     */
    /* Truth Table Function 'BRDR_MedTEH/Diagnostic/BatteryLoopTempSensRationality/IfRationality/TempRat_FltSymptom_Controls/Sensor_Selection': '<S514>:1' */
    /*  LTAP Cal */
    /*  BTIS_1 Cal */
    /*  BTOS_1 Cal */
    /*  BTIS_2 Cal */
    /*  BTOS_2 Cal */
    /*  BHOS Cal */
    rtb_AND_cs = (((KeBRDR_b_TmpRat_SelLTAP) && (KeBRDR_b_TmpRat_SelBTIS1)) &&
                  (KeBRDR_b_TmpRat_SelBTOS1));
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = !KeBRDR_b_TmpRat_SelBTIS2;
    rtb_TmpSignalConversionAtVeTRIR_b_HV_B_k = !KeBRDR_b_TmpRat_SelBTOS2;
    rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e = ((rtb_AND_cs &&
        rtb_VM_Conditional_Signal_BPCM_Comm_0) &&
        rtb_TmpSignalConversionAtVeTRIR_b_HV_B_k);
    rtb_LogicalOperator1_b = !KeBRDR_b_TmpRat_SelBHOS;
    if (rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e && rtb_LogicalOperator1_b)
    {
        /* Condition '#1': '<S514>:1:13' */
        /* Condition '#2': '<S514>:1:17' */
        /* Condition '#3': '<S514>:1:21' */
        /* Decision 'D1': '<S514>:1:35' */
        /*  Sensor Sel 1 */
        /* Action '1': '<S514>:1:53' */
        BRDR_ac_B.T_Sensor1_Temp = rtb_TmpSignalConversionAtVePMIR_T_LTActv;

        /* Action '1': '<S514>:1:54' */
        BRDR_ac_B.T_Sensor2_Temp = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;

        /* Action '1': '<S514>:1:55' */
        BRDR_ac_B.T_Sensor3_Temp = rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j;

        /* Action '1': '<S514>:1:56' */
        BRDR_ac_B.T_Sensor4_Temp = KeBRDR_T_NoTempSel;

        /* Action '1': '<S514>:1:57' */
        BRDR_ac_B.T_Sensor5_Temp = KeBRDR_T_NoTempSel;

        /* Action '1': '<S514>:1:58' */
        BRDR_ac_B.b_Sensor1_Enbl = VeBRDR_b_LTAPTmpRat_Enbl;

        /* Action '1': '<S514>:1:59' */
        BRDR_ac_B.b_Sensor2_Enbl = VeBRDR_b_BTISTmpRat_Enbl;

        /* Action '1': '<S514>:1:60' */
        BRDR_ac_B.b_Sensor3_Enbl = VeBRDR_b_BTOSTmpRat_Enbl;

        /* Action '1': '<S514>:1:61' */
        BRDR_ac_B.b_Sensor4_Enbl = BRDR_ac_False;

        /* Action '1': '<S514>:1:62' */
        BRDR_ac_B.b_Sensor5_Enbl = BRDR_ac_False;

        /* Action '1': '<S514>:1:63' */
        VeBRDR_i_SnsrSel = 1U;
    }
    else if (rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e &&
             (KeBRDR_b_TmpRat_SelBHOS))
    {
        /* Condition '#1': '<S514>:1:13' */
        /* Condition '#2': '<S514>:1:17' */
        /* Condition '#3': '<S514>:1:21' */
        /* Decision 'D2': '<S514>:1:37' */
        /* Condition '#6': '<S514>:1:33' */
        /*  Sensor Sel 2 */
        /* Action '2': '<S514>:1:69' */
        BRDR_ac_B.T_Sensor1_Temp = rtb_TmpSignalConversionAtVePMIR_T_LTActv;

        /* Action '2': '<S514>:1:70' */
        BRDR_ac_B.T_Sensor2_Temp = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;

        /* Action '2': '<S514>:1:71' */
        BRDR_ac_B.T_Sensor3_Temp = rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j;

        /* Action '2': '<S514>:1:72' */
        BRDR_ac_B.T_Sensor4_Temp = rtb_TmpSignalConversionAtVeHTIR_T_HVC_Ht;

        /* Action '2': '<S514>:1:73' */
        BRDR_ac_B.T_Sensor5_Temp = KeBRDR_T_NoTempSel;

        /* Action '2': '<S514>:1:74' */
        BRDR_ac_B.b_Sensor1_Enbl = VeBRDR_b_LTAPTmpRat_Enbl;

        /* Action '2': '<S514>:1:75' */
        BRDR_ac_B.b_Sensor2_Enbl = VeBRDR_b_BTISTmpRat_Enbl;

        /* Action '2': '<S514>:1:76' */
        BRDR_ac_B.b_Sensor3_Enbl = VeBRDR_b_BTOSTmpRat_Enbl;

        /* Action '2': '<S514>:1:77' */
        BRDR_ac_B.b_Sensor4_Enbl = VeBRDR_b_BHOSTmpRat_Enbl;

        /* Action '2': '<S514>:1:78' */
        BRDR_ac_B.b_Sensor5_Enbl = BRDR_ac_False;

        /* Action '2': '<S514>:1:79' */
        VeBRDR_i_SnsrSel = 2U;
    }
    else
    {
        (void)Rte_Read_VeTRIR_T_HV_BatClntTmp2_In_Value
            (&BRDR_ac_B.T_Sensor4_Temp);
        (void)Rte_Read_VeTRIR_T_HV_BatClntTmpOut2_Value
            (&BRDR_ac_B.T_Sensor5_Temp);
        rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e = !KeBRDR_b_TmpRat_SelLTAP;
        if (((((rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e &&
                (KeBRDR_b_TmpRat_SelBTIS1)) && (KeBRDR_b_TmpRat_SelBTOS1)) &&
                (KeBRDR_b_TmpRat_SelBTIS2)) && (KeBRDR_b_TmpRat_SelBTOS2)) &&
                (KeBRDR_b_TmpRat_SelBHOS))
        {
            /* Decision 'D3': '<S514>:1:39' */
            /* Condition '#2': '<S514>:1:17' */
            /* Condition '#3': '<S514>:1:21' */
            /* Condition '#4': '<S514>:1:25' */
            /* Condition '#5': '<S514>:1:29' */
            /* Condition '#6': '<S514>:1:33' */
            /*  Sensor Sel 3 */
            /* Action '3': '<S514>:1:85' */
            BRDR_ac_B.T_Sensor1_Temp = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;

            /* Action '3': '<S514>:1:86' */
            BRDR_ac_B.T_Sensor2_Temp = rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j;

            /* Action '3': '<S514>:1:87' */
            BRDR_ac_B.T_Sensor3_Temp = BRDR_ac_B.T_Sensor4_Temp;

            /* Action '3': '<S514>:1:88' */
            BRDR_ac_B.T_Sensor4_Temp = BRDR_ac_B.T_Sensor5_Temp;

            /* Action '3': '<S514>:1:89' */
            BRDR_ac_B.T_Sensor5_Temp = rtb_TmpSignalConversionAtVeHTIR_T_HVC_Ht;

            /* Action '3': '<S514>:1:90' */
            BRDR_ac_B.b_Sensor1_Enbl = VeBRDR_b_BTISTmpRat_Enbl;

            /* Action '3': '<S514>:1:91' */
            BRDR_ac_B.b_Sensor2_Enbl = VeBRDR_b_BTOSTmpRat_Enbl;

            /* Action '3': '<S514>:1:92' */
            BRDR_ac_B.b_Sensor3_Enbl = VeBRDR_b_BTIS2TmpRat_Enbl;

            /* Action '3': '<S514>:1:93' */
            BRDR_ac_B.b_Sensor4_Enbl = VeBRDR_b_BTOS2TmpRat_Enbl;

            /* Action '3': '<S514>:1:94' */
            BRDR_ac_B.b_Sensor5_Enbl = VeBRDR_b_BHOSTmpRat_Enbl;

            /* Action '3': '<S514>:1:95' */
            VeBRDR_i_SnsrSel = 3U;
        }
        else if (((rtb_AND_cs && (KeBRDR_b_TmpRat_SelBTIS2)) &&
                  (KeBRDR_b_TmpRat_SelBTOS2)) && rtb_LogicalOperator1_b)
        {
            /* Condition '#1': '<S514>:1:13' */
            /* Condition '#2': '<S514>:1:17' */
            /* Condition '#3': '<S514>:1:21' */
            /* Condition '#4': '<S514>:1:25' */
            /* Condition '#5': '<S514>:1:29' */
            /* Decision 'D4': '<S514>:1:41' */
            /*  Sensor Sel 4 */
            /* Action '4': '<S514>:1:101' */
            BRDR_ac_B.T_Sensor1_Temp = rtb_TmpSignalConversionAtVePMIR_T_LTActv;

            /* Action '4': '<S514>:1:102' */
            BRDR_ac_B.T_Sensor2_Temp = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;

            /* Action '4': '<S514>:1:103' */
            BRDR_ac_B.T_Sensor3_Temp = rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j;

            /* Action '4': '<S514>:1:104' */
            /* Action '4': '<S514>:1:105' */
            /* Action '4': '<S514>:1:106' */
            BRDR_ac_B.b_Sensor1_Enbl = VeBRDR_b_LTAPTmpRat_Enbl;

            /* Action '4': '<S514>:1:107' */
            BRDR_ac_B.b_Sensor2_Enbl = VeBRDR_b_BTISTmpRat_Enbl;

            /* Action '4': '<S514>:1:108' */
            BRDR_ac_B.b_Sensor3_Enbl = VeBRDR_b_BTOSTmpRat_Enbl;

            /* Action '4': '<S514>:1:109' */
            BRDR_ac_B.b_Sensor4_Enbl = VeBRDR_b_BTIS2TmpRat_Enbl;

            /* Action '4': '<S514>:1:110' */
            BRDR_ac_B.b_Sensor5_Enbl = VeBRDR_b_BTOS2TmpRat_Enbl;

            /* Action '4': '<S514>:1:111' */
            VeBRDR_i_SnsrSel = 4U;
        }
        else if (((((rtb_TmpSignalConversionAtVeTRIR_b_HV_B_e &&
                     (!KeBRDR_b_TmpRat_SelBTIS1)) && (!KeBRDR_b_TmpRat_SelBTOS1))
                   && rtb_VM_Conditional_Signal_BPCM_Comm_0) &&
                  rtb_TmpSignalConversionAtVeTRIR_b_HV_B_k) &&
                 rtb_LogicalOperator1_b)
        {
            /* Decision 'D5': '<S514>:1:43' */
            /*  Sensor Sel 5 none selected */
            /* Action '5': '<S514>:1:117' */
            BRDR_ac_B.T_Sensor1_Temp = KeBRDR_T_NoTempSel;

            /* Action '5': '<S514>:1:118' */
            BRDR_ac_B.T_Sensor2_Temp = KeBRDR_T_NoTempSel;

            /* Action '5': '<S514>:1:119' */
            BRDR_ac_B.T_Sensor3_Temp = KeBRDR_T_NoTempSel;

            /* Action '5': '<S514>:1:120' */
            BRDR_ac_B.T_Sensor4_Temp = KeBRDR_T_NoTempSel;

            /* Action '5': '<S514>:1:121' */
            BRDR_ac_B.T_Sensor5_Temp = KeBRDR_T_NoTempSel;

            /* Action '5': '<S514>:1:122' */
            BRDR_ac_B.b_Sensor1_Enbl = BRDR_ac_False;

            /* Action '5': '<S514>:1:123' */
            BRDR_ac_B.b_Sensor2_Enbl = BRDR_ac_False;

            /* Action '5': '<S514>:1:124' */
            BRDR_ac_B.b_Sensor3_Enbl = BRDR_ac_False;

            /* Action '5': '<S514>:1:125' */
            BRDR_ac_B.b_Sensor4_Enbl = BRDR_ac_False;

            /* Action '5': '<S514>:1:126' */
            BRDR_ac_B.b_Sensor5_Enbl = BRDR_ac_False;

            /* Action '5': '<S514>:1:127' */
            VeBRDR_i_SnsrSel = 5U;
        }
        else
        {
            /* Decision 'D6': '<S514>:1:45' */
            /*  Default */
            /*  Sensor Sel 5 none selected */
            /* Action '5': '<S514>:1:117' */
            BRDR_ac_B.T_Sensor1_Temp = KeBRDR_T_NoTempSel;

            /* Action '5': '<S514>:1:118' */
            BRDR_ac_B.T_Sensor2_Temp = KeBRDR_T_NoTempSel;

            /* Action '5': '<S514>:1:119' */
            BRDR_ac_B.T_Sensor3_Temp = KeBRDR_T_NoTempSel;

            /* Action '5': '<S514>:1:120' */
            BRDR_ac_B.T_Sensor4_Temp = KeBRDR_T_NoTempSel;

            /* Action '5': '<S514>:1:121' */
            BRDR_ac_B.T_Sensor5_Temp = KeBRDR_T_NoTempSel;

            /* Action '5': '<S514>:1:122' */
            BRDR_ac_B.b_Sensor1_Enbl = BRDR_ac_False;

            /* Action '5': '<S514>:1:123' */
            BRDR_ac_B.b_Sensor2_Enbl = BRDR_ac_False;

            /* Action '5': '<S514>:1:124' */
            BRDR_ac_B.b_Sensor3_Enbl = BRDR_ac_False;

            /* Action '5': '<S514>:1:125' */
            BRDR_ac_B.b_Sensor4_Enbl = BRDR_ac_False;

            /* Action '5': '<S514>:1:126' */
            BRDR_ac_B.b_Sensor5_Enbl = BRDR_ac_False;

            /* Action '5': '<S514>:1:127' */
            VeBRDR_i_SnsrSel = 5U;
        }
    }

    /* End of Truth Table: '<S330>/Sensor_Selection' */

    /* Selector: '<S506>/Selector1' incorporates:
     *  Constant: '<S516>/Calib'
     *  Constant: '<S517>/Calib'
     *  Constant: '<S518>/Calib'
     *  Constant: '<S519>/Calib'
     *  Constant: '<S520>/Calib'
     *  Constant: '<S521>/Calib'
     *  Constant: '<S522>/Calib'
     *  Constant: '<S523>/Calib'
     *  Constant: '<S524>/Calib'
     *  Constant: '<S525>/Calib'
     *  Constant: '<S526>/Calib'
     *  SignalConversion generated from: '<S506>/Selector1'
     */
    BRDR_ac_B.Selector1[0] = KaBRDR_T_TmpLvlMap[KeBRDR_i_Temp1_2_ThSel - 1];
    BRDR_ac_B.Selector1[1] = KaBRDR_T_TmpLvlMap[KeBRDR_i_Temp1_3_ThSel - 1];
    BRDR_ac_B.Selector1[2] = KaBRDR_T_TmpLvlMap[KeBRDR_i_Temp1_4_ThSel - 1];
    BRDR_ac_B.Selector1[3] = KaBRDR_T_TmpLvlMap[KeBRDR_i_Temp1_5_ThSel - 1];
    BRDR_ac_B.Selector1[4] = KaBRDR_T_TmpLvlMap[KeBRDR_i_Temp2_3_ThSel - 1];
    BRDR_ac_B.Selector1[5] = KaBRDR_T_TmpLvlMap[KeBRDR_i_Temp2_4_ThSel - 1];
    BRDR_ac_B.Selector1[6] = KaBRDR_T_TmpLvlMap[KeBRDR_i_Temp2_5_ThSel - 1];
    BRDR_ac_B.Selector1[7] = KaBRDR_T_TmpLvlMap[KeBRDR_i_Temp3_4_ThSel - 1];
    BRDR_ac_B.Selector1[8] = KaBRDR_T_TmpLvlMap[KeBRDR_i_Temp3_5_ThSel - 1];
    BRDR_ac_B.Selector1[9] = KaBRDR_T_TmpLvlMap[KeBRDR_i_Temp4_5_ThSel - 1];

    /* Outputs for Atomic SubSystem: '<S330>/SnsrRat_V02' */
    BRDR_ac_SnsrRat_V02();

    /* End of Outputs for SubSystem: '<S330>/SnsrRat_V02' */

    /* Switch: '<S530>/Switch1' incorporates:
     *  Constant: '<S513>/Constant Value13'
     *  RelationalOperator: '<S513>/Comparison14'
     *  UnitDelay: '<S530>/Unit Delay'
     */
    if (((sint32)VeBRDR_i_SnsrSel) == 2)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_ku[0] = VeBRDR_b_S4_Rat_DTC_Enbl;
        BRDR_ac_DW.UnitDelay_DSTATE_ku[1] = VeBRDR_b_S4_Rat_Flt;
    }
    else
    {
        /* Switch: '<S530>/Switch2' incorporates:
         *  Constant: '<S513>/Constant Value14'
         *  RelationalOperator: '<S513>/Comparison12'
         *  UnitDelay: '<S530>/Unit Delay'
         */
        tmp[0] = VeBRDR_b_S5_Rat_DTC_Enbl;
        tmp[1] = VeBRDR_b_S5_Rat_Flt;
        if (((sint32)VeBRDR_i_SnsrSel) == 3)
        {
            for (rtb_Logical_d_tmp = 0; rtb_Logical_d_tmp < 2; rtb_Logical_d_tmp
                    ++)
            {
                BRDR_ac_DW.UnitDelay_DSTATE_ku[rtb_Logical_d_tmp] =
                    tmp[rtb_Logical_d_tmp];
            }
        }

        /* End of Switch: '<S530>/Switch2' */
    }

    /* End of Switch: '<S530>/Switch1' */

    /* Logic: '<S327>/Logical Operator3' incorporates:
     *  Logic: '<S327>/Logical Operator15'
     *  UnitDelay: '<S530>/Unit Delay'
     */
    VeBRDR_b_BHOS_TmpDiagEnbl = ((rtb_VariantMerge_For_Variant_Source_V__1 &&
        (BRDR_ac_DW.UnitDelay_DSTATE_ku[0])) || (VeBRDR_b_BHOSTmpFA_Enbl));

    /* Logic: '<S331>/Logical Operator' incorporates:
     *  Constant: '<S337>/Calib'
     *  Logic: '<S331>/Logical Operator1'
     *  UnitDelay: '<S530>/Unit Delay'
     */
    VeBRDR_b_BHOSFlt_Sym = ((BRDR_ac_DW.UnitDelay_DSTATE_ku[1]) ||
                            ((KeBRDR_b_BHOS_FA_FltCndsEnbl) &&
        rtb_LogicalOperator3_d));

    /* Outputs for Atomic SubSystem: '<S9>/BHOS_RatDiag' */
#if Rte_SysCon_Variant_BRDR_28

    /* Outputs for Atomic SubSystem: '<S79>/If_BHOS_DTC' */
    /* RelationalOperator: '<S96>/Relational Operator3' incorporates:
     *  Constant: '<S96>/Constant3'
     *  DataStoreRead: '<S97>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     *  S-Function (sfix_bitop): '<S96>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_V__1 = ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S96>/EdgeFalling1' */
    /* Logic: '<S96>/Logical Operator' incorporates:
     *  Logic: '<S99>/OR1'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HV_B_k =
        !rtb_VariantMerge_For_Variant_Source_V__1;

    /* End of Outputs for SubSystem: '<S96>/EdgeFalling1' */

    /* Logic: '<S96>/Logical1' incorporates:
     *  Constant: '<S93>/Calib'
     *  Constant: '<S95>/Calib'
     *  Constant: '<S96>/Constant1'
     *  DataStoreRead: '<S97>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     *  Logic: '<S89>/AND1'
     *  Logic: '<S96>/Logical Operator'
     *  Logic: '<S96>/Logical10'
     *  Logic: '<S96>/Logical12'
     *  RelationalOperator: '<S96>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S96>/Bitwise Operator3'
     */
    rtb_LogicalOperator3_d = (((VeBRDR_b_BHOS_TmpDiagEnbl) &&
        (KeBRDR_b_HV_BHOS_XYEnbl)) &&
        ((!KeBRDR_b_BattCoolPmpHtrBTempSnsrPerf_LtchEnbl) || (((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) & 1U) == 0U) ||
        rtb_TmpSignalConversionAtVeTRIR_b_HV_B_k)));

    /* Outputs for Atomic SubSystem: '<S96>/EdgeFalling1' */
    /* Logic: '<S99>/AND' incorporates:
     *  UnitDelay: '<S99>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HV_B_k =
        (rtb_TmpSignalConversionAtVeTRIR_b_HV_B_k &&
         (BRDR_ac_DW.UnitDelay_DSTATE_gf));

    /* Update for UnitDelay: '<S99>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_gf = rtb_VariantMerge_For_Variant_Source_V__1;

    /* End of Outputs for SubSystem: '<S96>/EdgeFalling1' */

    /* Logic: '<S96>/Logical5' */
    rtb_VariantMerge_For_Variant_Source_V__1 = ((VeBRDR_b_ResetCnts) ||
        rtb_TmpSignalConversionAtVeTRIR_b_HV_B_k);

    /* Outputs for Atomic SubSystem: '<S98>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S98>/Counter Reset  Enabled ' */
    /* Switch: '<S105>/Switch1' incorporates:
     *  Constant: '<S94>/Calib'
     *  Logic: '<S89>/AND3'
     *  Logic: '<S98>/Fail Counter Reset'
     *  Logic: '<S98>/NOT6'
     *  Switch: '<S105>/Switch2'
     *  Switch: '<S106>/Switch1'
     *  UnitDelay: '<S98>/Unit Delay'
     *  UnitDelay: '<S98>/Unit Delay1'
     */
    if ((rtb_VariantMerge_For_Variant_Source_V__1 ||
            (BRDR_ac_DW.UnitDelay_DSTATE_bt5)) ||
            (BRDR_ac_DW.UnitDelay1_DSTATE_cx))
    {
        /* Switch: '<S105>/Switch1' incorporates:
         *  Constant: '<S105>/Constant Value2'
         */
        VeBRDR_Cnt_HV_BHOS_FailCnt = 0U;

        /* Switch: '<S106>/Switch1' incorporates:
         *  Constant: '<S106>/Constant Value2'
         */
        VeBRDR_Cnt_HV_BHOS_SmpCnt = 0U;
    }
    else
    {
        if (rtb_LogicalOperator3_d && ((VeBRDR_b_BHOSFlt_Sym) &&
                (KeBRDR_b_HV_BHOS_Flt)))
        {
            /* Switch: '<S105>/Switch1' incorporates:
             *  Constant: '<S105>/Constant Value1'
             *  Sum: '<S105>/Subtraction'
             *  Switch: '<S105>/Switch2'
             *  UnitDelay: '<S105>/Unit Delay'
             */
            VeBRDR_Cnt_HV_BHOS_FailCnt = (uint16)(((uint32)
                VeBRDR_Cnt_HV_BHOS_FailCnt) + 1U);
        }

        /* Switch: '<S106>/Switch2' */
        if (rtb_LogicalOperator3_d)
        {
            /* Switch: '<S106>/Switch1' incorporates:
             *  Constant: '<S106>/Constant Value1'
             *  Sum: '<S106>/Subtraction'
             *  Switch: '<S106>/Switch2'
             *  UnitDelay: '<S106>/Unit Delay'
             */
            VeBRDR_Cnt_HV_BHOS_SmpCnt = (uint16)(((uint32)
                VeBRDR_Cnt_HV_BHOS_SmpCnt) + 1U);
        }

        /* End of Switch: '<S106>/Switch2' */
    }

    /* End of Switch: '<S105>/Switch1' */
    /* End of Outputs for SubSystem: '<S98>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S98>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S98>/Greater Than or Equal ' incorporates:
     *  Constant: '<S91>/Calib'
     */
    BRDR_ac_DW.UnitDelay1_DSTATE_cx = (VeBRDR_Cnt_HV_BHOS_FailCnt >=
        KeBRDR_Cnt_HV_BHOS_FailCnt);

    /* Logic: '<S98>/NOT5' incorporates:
     *  Constant: '<S92>/Calib'
     *  Logic: '<S98>/NOT3'
     *  RelationalOperator: '<S98>/Less Than  or Equal'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_bt5 = ((VeBRDR_Cnt_HV_BHOS_SmpCnt >=
        KeBRDR_Cnt_HV_BHOS_SmpCnt) && (!BRDR_ac_DW.UnitDelay1_DSTATE_cx));

    /* Switch: '<S111>/Switch1' incorporates:
     *  Constant: '<S104>/Constant Value'
     *  DataStoreWrite: '<S89>/Data Store Write3'
     *  Switch: '<S110>/Switch1'
     */
    if (VeBRDR_b_ResetFOMs)
    {
        BRDR_ac_DW.NeBRDR_Cnt_HV_BHOS_MFOP = 0U;
    }
    else
    {
        if (BRDR_ac_DW.UnitDelay_DSTATE_bt5)
        {
            /* MinMax: '<S104>/Minimum2' incorporates:
             *  DataStoreRead: '<S89>/Data Store Read1'
             *  Switch: '<S110>/Switch1'
             */
            if (VeBRDR_Cnt_HV_BHOS_FailCnt > BRDR_ac_DW.NeBRDR_Cnt_HV_BHOS_MFOP)
            {
                /* DataStoreWrite: '<S89>/Data Store Write3' incorporates:
                 *  Switch: '<S110>/Switch1'
                 */
                BRDR_ac_DW.NeBRDR_Cnt_HV_BHOS_MFOP = VeBRDR_Cnt_HV_BHOS_FailCnt;
            }

            /* End of MinMax: '<S104>/Minimum2' */
        }
    }

    /* End of Switch: '<S111>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S96>/Fail' */
    BRDR_ac_Fail(BRDR_ac_DW.UnitDelay1_DSTATE_cx,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_j);

    /* End of Outputs for SubSystem: '<S96>/Fail' */

    /* Outputs for Enabled SubSystem: '<S96>/Init' */
    BRDR_ac_Init_e(rtb_VariantMerge_For_Variant_Source_V__1,
                   &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_j);

    /* End of Outputs for SubSystem: '<S96>/Init' */

    /* Outputs for Enabled SubSystem: '<S96>/Pass' */
    BRDR_ac_Pass(BRDR_ac_DW.UnitDelay_DSTATE_bt5,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_j);

    /* End of Outputs for SubSystem: '<S96>/Pass' */

    /* VariantMerge generated from: '<S79>/b_HV_BHOS_FltDtct' incorporates:
     *  Constant: '<S100>/Constant'
     *  RelationalOperator: '<S96>/Relational Operator'
     *  VariantMerge generated from: '<S79>/VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf'
     */
    VeBRDR_b_HV_BHOS_FltDtct_BD = (((uint32)
        BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_j) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S79>/If_BHOS_DTC' */
#else

    /* Outputs for Atomic SubSystem: '<S79>/Else_Stub_DTC' */
    /* VariantMerge generated from: '<S79>/VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf' incorporates:
     *  Constant: '<S90>/Constant'
     */
    BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_j = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S79>/b_HV_BHOS_FltDtct' incorporates:
     *  Constant: '<S88>/FALSE Constant1'
     */
    VeBRDR_b_HV_BHOS_FltDtct_BD = false;

    /* End of Outputs for SubSystem: '<S79>/Else_Stub_DTC' */
#endif

    /* End of Outputs for SubSystem: '<S9>/BHOS_RatDiag' */

    /* Switch: '<S531>/Switch1' incorporates:
     *  Constant: '<S513>/Constant Value11'
     *  RelationalOperator: '<S513>/Comparison15'
     *  UnitDelay: '<S531>/Unit Delay'
     */
    if (((sint32)VeBRDR_i_SnsrSel) == 3)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_ps[0] = VeBRDR_b_S3_Rat_DTC_Enbl;
        BRDR_ac_DW.UnitDelay_DSTATE_ps[1] = VeBRDR_b_S3_Rat_Flt;
    }
    else
    {
        /* Switch: '<S531>/Switch2' incorporates:
         *  Constant: '<S513>/Constant Value12'
         *  RelationalOperator: '<S513>/Comparison13'
         *  UnitDelay: '<S531>/Unit Delay'
         */
        tmp[0] = VeBRDR_b_S4_Rat_DTC_Enbl;
        tmp[1] = VeBRDR_b_S4_Rat_Flt;
        if (((sint32)VeBRDR_i_SnsrSel) == 4)
        {
            for (rtb_Logical_d_tmp = 0; rtb_Logical_d_tmp < 2; rtb_Logical_d_tmp
                    ++)
            {
                BRDR_ac_DW.UnitDelay_DSTATE_ps[rtb_Logical_d_tmp] =
                    tmp[rtb_Logical_d_tmp];
            }
        }

        /* End of Switch: '<S531>/Switch2' */
    }

    /* End of Switch: '<S531>/Switch1' */

    /* Logic: '<S327>/Logical Operator5' incorporates:
     *  Logic: '<S327>/Logical Operator16'
     *  UnitDelay: '<S531>/Unit Delay'
     */
    VeBRDR_b_BTIS2_TmpDiagEnbl = ((rtb_AND_el &&
        (BRDR_ac_DW.UnitDelay_DSTATE_ps[0])) || (VeBRDR_b_BTIS2TmpFA_Enbl));

    /* Logic: '<S333>/Logical Operator' incorporates:
     *  Constant: '<S343>/Calib'
     *  Logic: '<S333>/Logical Operator1'
     *  UnitDelay: '<S531>/Unit Delay'
     */
    VeBRDR_b_BTIS2Flt_Sym = ((BRDR_ac_DW.UnitDelay_DSTATE_ps[1]) ||
        ((KeBRDR_b_BTIS2_FA_FltCndsEnbl) && rtb_LogicalOperator3_b4));

    /* Outputs for Atomic SubSystem: '<S9>/BTIS2_RatDiag' */
#if Rte_SysCon_Variant_BRDR_31

    /* Outputs for Atomic SubSystem: '<S80>/If_BTIS2_DTC' */
    /* RelationalOperator: '<S120>/Relational Operator3' incorporates:
     *  Constant: '<S120>/Constant3'
     *  DataStoreRead: '<S121>/StatusByte_HybBattCooTempSnsrCPer'
     *  S-Function (sfix_bitop): '<S120>/Bitwise Operator2'
     */
    rtb_AND_el = ((((uint32)BRDR_ac_DW.StatusByte_HybBattCooTempSnsrCPer) & 64U)
                  == 0U);

    /* Outputs for Atomic SubSystem: '<S120>/EdgeFalling1' */
    /* Logic: '<S120>/Logical Operator' incorporates:
     *  Logic: '<S123>/OR1'
     */
    rtb_LogicalOperator3_d = !rtb_AND_el;

    /* End of Outputs for SubSystem: '<S120>/EdgeFalling1' */

    /* Logic: '<S120>/Logical1' incorporates:
     *  Constant: '<S118>/Calib'
     *  Constant: '<S119>/Calib'
     *  Constant: '<S120>/Constant1'
     *  DataStoreRead: '<S121>/StatusByte_HybBattCooTempSnsrCPer'
     *  Logic: '<S113>/AND1'
     *  Logic: '<S120>/Logical Operator'
     *  Logic: '<S120>/Logical10'
     *  Logic: '<S120>/Logical12'
     *  RelationalOperator: '<S120>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S120>/Bitwise Operator3'
     */
    rtb_LogicalOperator3_b4 = (((VeBRDR_b_BTIS2_TmpDiagEnbl) &&
        (KeBRDR_b_HV_BTIS2_XYEnbl)) &&
        ((!KeBRDR_b_HybBattCooTempSnsrCPer_LtchEnbl) || (((((uint32)
        BRDR_ac_DW.StatusByte_HybBattCooTempSnsrCPer) & 1U) == 0U) ||
        rtb_LogicalOperator3_d)));

    /* Outputs for Atomic SubSystem: '<S120>/EdgeFalling1' */
    /* Logic: '<S123>/AND' incorporates:
     *  UnitDelay: '<S123>/Unit Delay'
     */
    rtb_LogicalOperator3_d = (rtb_LogicalOperator3_d &&
        (BRDR_ac_DW.UnitDelay_DSTATE_ko));

    /* Update for UnitDelay: '<S123>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_ko = rtb_AND_el;

    /* End of Outputs for SubSystem: '<S120>/EdgeFalling1' */

    /* Logic: '<S120>/Logical5' */
    rtb_AND_el = ((VeBRDR_b_ResetCnts) || rtb_LogicalOperator3_d);

    /* Outputs for Atomic SubSystem: '<S122>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S122>/Counter Reset  Enabled ' */
    /* Switch: '<S129>/Switch1' incorporates:
     *  Constant: '<S117>/Calib'
     *  Logic: '<S113>/AND3'
     *  Logic: '<S122>/Fail Counter Reset'
     *  Logic: '<S122>/NOT6'
     *  Switch: '<S129>/Switch2'
     *  Switch: '<S130>/Switch1'
     *  UnitDelay: '<S122>/Unit Delay'
     *  UnitDelay: '<S122>/Unit Delay1'
     */
    if ((rtb_AND_el || (BRDR_ac_DW.UnitDelay_DSTATE_ik)) ||
            (BRDR_ac_DW.UnitDelay1_DSTATE_f))
    {
        /* Switch: '<S129>/Switch1' incorporates:
         *  Constant: '<S129>/Constant Value2'
         */
        VeBRDR_Cnt_HV_BTIS2_FailCnt = 0U;

        /* Switch: '<S130>/Switch1' incorporates:
         *  Constant: '<S130>/Constant Value2'
         */
        VeBRDR_Cnt_HV_BTIS2_SmpCnt = 0U;
    }
    else
    {
        if (rtb_LogicalOperator3_b4 && ((VeBRDR_b_BTIS2Flt_Sym) &&
                (KeBRDR_b_HV_BTIS2_Flt)))
        {
            /* Switch: '<S129>/Switch1' incorporates:
             *  Constant: '<S129>/Constant Value1'
             *  Sum: '<S129>/Subtraction'
             *  Switch: '<S129>/Switch2'
             *  UnitDelay: '<S129>/Unit Delay'
             */
            VeBRDR_Cnt_HV_BTIS2_FailCnt = (uint16)(((uint32)
                VeBRDR_Cnt_HV_BTIS2_FailCnt) + 1U);
        }

        /* Switch: '<S130>/Switch2' */
        if (rtb_LogicalOperator3_b4)
        {
            /* Switch: '<S130>/Switch1' incorporates:
             *  Constant: '<S130>/Constant Value1'
             *  Sum: '<S130>/Subtraction'
             *  Switch: '<S130>/Switch2'
             *  UnitDelay: '<S130>/Unit Delay'
             */
            VeBRDR_Cnt_HV_BTIS2_SmpCnt = (uint16)(((uint32)
                VeBRDR_Cnt_HV_BTIS2_SmpCnt) + 1U);
        }

        /* End of Switch: '<S130>/Switch2' */
    }

    /* End of Switch: '<S129>/Switch1' */
    /* End of Outputs for SubSystem: '<S122>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S122>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S122>/Greater Than or Equal ' incorporates:
     *  Constant: '<S115>/Calib'
     */
    BRDR_ac_DW.UnitDelay1_DSTATE_f = (VeBRDR_Cnt_HV_BTIS2_FailCnt >=
        KeBRDR_Cnt_HV_BTIS2_FailCnt);

    /* Logic: '<S122>/NOT5' incorporates:
     *  Constant: '<S116>/Calib'
     *  Logic: '<S122>/NOT3'
     *  RelationalOperator: '<S122>/Less Than  or Equal'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_ik = ((VeBRDR_Cnt_HV_BTIS2_SmpCnt >=
        KeBRDR_Cnt_HV_BTIS2_SmpCnt) && (!BRDR_ac_DW.UnitDelay1_DSTATE_f));

    /* Switch: '<S135>/Switch1' incorporates:
     *  Constant: '<S128>/Constant Value'
     *  DataStoreWrite: '<S113>/Data Store Write3'
     *  Switch: '<S134>/Switch1'
     */
    if (VeBRDR_b_ResetFOMs)
    {
        BRDR_ac_DW.NeBRDR_Cnt_HV_BTIS2_MFOP = 0U;
    }
    else
    {
        if (BRDR_ac_DW.UnitDelay_DSTATE_ik)
        {
            /* MinMax: '<S128>/Minimum2' incorporates:
             *  DataStoreRead: '<S113>/Data Store Read1'
             *  Switch: '<S134>/Switch1'
             */
            if (VeBRDR_Cnt_HV_BTIS2_FailCnt >
                    BRDR_ac_DW.NeBRDR_Cnt_HV_BTIS2_MFOP)
            {
                /* DataStoreWrite: '<S113>/Data Store Write3' incorporates:
                 *  Switch: '<S134>/Switch1'
                 */
                BRDR_ac_DW.NeBRDR_Cnt_HV_BTIS2_MFOP =
                    VeBRDR_Cnt_HV_BTIS2_FailCnt;
            }

            /* End of MinMax: '<S128>/Minimum2' */
        }
    }

    /* End of Switch: '<S135>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S120>/Fail' */
    BRDR_ac_Fail(BRDR_ac_DW.UnitDelay1_DSTATE_f,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_i);

    /* End of Outputs for SubSystem: '<S120>/Fail' */

    /* Outputs for Enabled SubSystem: '<S120>/Init' */
    BRDR_ac_Init_e(rtb_AND_el,
                   &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_i);

    /* End of Outputs for SubSystem: '<S120>/Init' */

    /* Outputs for Enabled SubSystem: '<S120>/Pass' */
    BRDR_ac_Pass(BRDR_ac_DW.UnitDelay_DSTATE_ik,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_i);

    /* End of Outputs for SubSystem: '<S120>/Pass' */

    /* VariantMerge generated from: '<S80>/b_HV_BTIS2_FltDtct' incorporates:
     *  Constant: '<S124>/Constant'
     *  RelationalOperator: '<S120>/Relational Operator'
     *  VariantMerge generated from: '<S80>/VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer'
     */
    VeBRDR_b_HV_BTIS2_FltDtct_BD = (((uint32)
        BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_i) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S80>/If_BTIS2_DTC' */
#else

    /* Outputs for Atomic SubSystem: '<S80>/Else_Stub_DTC' */
    /* VariantMerge generated from: '<S80>/VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer' incorporates:
     *  Constant: '<S114>/Constant'
     */
    BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_i = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S80>/b_HV_BTIS2_FltDtct' incorporates:
     *  Constant: '<S112>/FALSE Constant2'
     */
    VeBRDR_b_HV_BTIS2_FltDtct_BD = false;

    /* End of Outputs for SubSystem: '<S80>/Else_Stub_DTC' */
#endif

    /* End of Outputs for SubSystem: '<S9>/BTIS2_RatDiag' */

    /* SignalConversion generated from: '<S327>/Variant Source' */
#if Rte_SysCon_Variant_BRDR_5

    /* VariantMerge generated from: '<S327>/Variant Source' */
    VeBRDR_b_TempRat_PerfEnbl = rtb_AND_kc;

#endif

    /* End of SignalConversion generated from: '<S327>/Variant Source' */

    /* Switch: '<S528>/Switch1' incorporates:
     *  Constant: '<S513>/Constant Value2'
     *  Constant: '<S513>/Constant Value4'
     *  Constant: '<S513>/Constant Value6'
     *  Logic: '<S513>/Logical3'
     *  RelationalOperator: '<S513>/Comparison3'
     *  RelationalOperator: '<S513>/Comparison5'
     *  RelationalOperator: '<S513>/Comparison7'
     *  UnitDelay: '<S528>/Unit Delay'
     */
    if (((((sint32)VeBRDR_i_SnsrSel) == 1) || (((sint32)VeBRDR_i_SnsrSel) == 2))
        || (((sint32)VeBRDR_i_SnsrSel) == 4))
    {
        BRDR_ac_DW.UnitDelay_DSTATE_cd[0] = VeBRDR_b_S2_Rat_DTC_Enbl;
        BRDR_ac_DW.UnitDelay_DSTATE_cd[1] = VeBRDR_b_S2_Rat_Flt;
    }
    else
    {
        /* Switch: '<S528>/Switch2' incorporates:
         *  Constant: '<S513>/Constant Value5'
         *  RelationalOperator: '<S513>/Comparison6'
         *  UnitDelay: '<S528>/Unit Delay'
         */
        tmp[0] = VeBRDR_b_S1_Rat_DTC_Enbl;
        tmp[1] = VeBRDR_b_S1_Rat_Flt;
        if (((sint32)VeBRDR_i_SnsrSel) == 3)
        {
            for (rtb_Logical_d_tmp = 0; rtb_Logical_d_tmp < 2; rtb_Logical_d_tmp
                    ++)
            {
                BRDR_ac_DW.UnitDelay_DSTATE_cd[rtb_Logical_d_tmp] =
                    tmp[rtb_Logical_d_tmp];
            }
        }

        /* End of Switch: '<S528>/Switch2' */
    }

    /* End of Switch: '<S528>/Switch1' */

    /* Logic: '<S327>/Logical Operator13' */
#if !Rte_SysCon_Variant_BRDR_5

    /* VariantMerge generated from: '<S327>/Variant Source' incorporates:
     *  UnitDelay: '<S528>/Unit Delay'
     */
    VeBRDR_b_TempRat_PerfEnbl = (rtb_AND_kc && (BRDR_ac_DW.UnitDelay_DSTATE_cd[0]));

#endif

    /* End of Logic: '<S327>/Logical Operator13' */

    /* Logic: '<S327>/Logical Operator9' */
    VeBRDR_b_BTIS_TmpDiagEnbl = ((VeBRDR_b_TempRat_PerfEnbl) ||
        (VeBRDR_b_BTISTmpFA_Enbl));

    /* Sum: '<S339>/Add' incorporates:
     *  Abs: '<S339>/Abs'
     *  RelationalOperator: '<S339>/Relational Operator'
     */
#if Rte_SysCon_Variant_BRDR_5

    /* Sum: '<S345>/Add1' */
    rtb_Add1_n = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat -
        rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j;

    /* Abs: '<S339>/Abs' */
    VeBRDR_T_BTIS_BTOS_Abs_BTIS_Fault = fabsf(rtb_Add1_n);

    /* RelationalOperator: '<S339>/Relational Operator' incorporates:
     *  Constant: '<S342>/Calib'
     */
    rtb_RelationalOperator_d0 = (VeBRDR_T_BTIS_BTOS_Abs_BTIS_Fault >
        KeBRDR_T_BTOS_BTIS_TmpLim);

#endif

    /* End of Sum: '<S339>/Add' */

    /* SignalConversion generated from: '<S339>/Variant Source' */
#if Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_5

    /* Sum: '<S345>/Add1' */
    rtb_Add1_n = rtb_TmpSignalConversionAtVeBTRR_T_HV_Bat;

#endif

    /* End of SignalConversion generated from: '<S339>/Variant Source' */

    /* SignalConversion generated from: '<S339>/Variant Source' */
#if !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_5

    /* Sum: '<S345>/Add1' */
    rtb_Add1_n = rtb_TmpSignalConversionAtVeBTRR_T_CellTe;

#endif

    /* End of SignalConversion generated from: '<S339>/Variant Source' */

    /* VariantMerge generated from: '<S11>/Variant Source2' incorporates:
     *  Constant: '<S340>/Calib'
     *  Logic: '<S332>/Logical Operator1'
     */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = ((KeBRDR_b_BTIS_FA_FltCndsEnbl) &&
        rtb_LogicalOperator2_ds);

    /* Sum: '<S339>/Add1' incorporates:
     *  Abs: '<S339>/Abs1'
     *  Logic: '<S339>/Logical Operator1'
     *  Logic: '<S339>/Logical Operator2'
     *  RelationalOperator: '<S339>/Relational Operator1'
     */
#if Rte_SysCon_Variant_BRDR_5

    /* Sum: '<S345>/Add1' */
    rtb_Add1_n = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat - rtb_Add1_n;

    /* Abs: '<S339>/Abs1' */
    VeBRDR_T_BTIS_BatModTemp_Abs = fabsf(rtb_Add1_n);

    /* Logic: '<S339>/Logical Operator2' incorporates:
     *  Constant: '<S341>/Calib'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = (rtb_RelationalOperator_d0 &&
        (VeBRDR_T_BTIS_BatModTemp_Abs > KeBRDR_T_BTIS_CellT_TmpLim));

    /* VariantMerge generated from: '<S334>/Variant Source' */
    VeBRDR_b_BTOSFlt_Sym = (rtb_VM_Conditional_Signal_BPCM_Comm_0 ||
                            (VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD));

#endif

    /* End of Sum: '<S339>/Add1' */

    /* Logic: '<S338>/Logical Operator2' */
#if !Rte_SysCon_Variant_BRDR_5

    /* VariantMerge generated from: '<S334>/Variant Source' incorporates:
     *  UnitDelay: '<S528>/Unit Delay'
     */
    VeBRDR_b_BTOSFlt_Sym = ((BRDR_ac_DW.UnitDelay_DSTATE_cd[1]) ||
                            (VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD));

#endif

    /* End of Logic: '<S338>/Logical Operator2' */

    /* SignalConversion generated from: '<S332>/Variant Source' */
    VeBRDR_b_BTISFlt_Sym = VeBRDR_b_BTOSFlt_Sym;

    /* Outputs for Atomic SubSystem: '<S9>/BTIS_RatDiag' */
#if Rte_SysCon_Variant_BRDR_12

    /* Outputs for Atomic SubSystem: '<S81>/If_BTIS_DTC' */
    /* RelationalOperator: '<S144>/Relational Operator3' incorporates:
     *  Constant: '<S144>/Constant3'
     *  DataStoreRead: '<S145>/StatusByte_HB_CT_SnsrPerf'
     *  S-Function (sfix_bitop): '<S144>/Bitwise Operator2'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = ((((uint32)
        BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S144>/EdgeFalling1' */
    /* Logic: '<S144>/Logical Operator' incorporates:
     *  Logic: '<S147>/OR1'
     */
    rtb_LogicalOperator2_ds = !rtb_VM_Conditional_Signal_BPCM_Comm_0;

    /* End of Outputs for SubSystem: '<S144>/EdgeFalling1' */

    /* Logic: '<S144>/Logical1' incorporates:
     *  Constant: '<S141>/Calib'
     *  Constant: '<S143>/Calib'
     *  Constant: '<S144>/Constant1'
     *  DataStoreRead: '<S145>/StatusByte_HB_CT_SnsrPerf'
     *  Logic: '<S137>/AND1'
     *  Logic: '<S144>/Logical Operator'
     *  Logic: '<S144>/Logical10'
     *  Logic: '<S144>/Logical12'
     *  RelationalOperator: '<S144>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S144>/Bitwise Operator3'
     */
    rtb_RelationalOperator_d0 = (((VeBRDR_b_BTIS_TmpDiagEnbl) &&
        (KeBRDR_b_HV_BTIS_XYEnbl)) && ((!KeBRDR_b_HB_CT_SnsrPerf_LtchEnbl) ||
        (((((uint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1U) == 0U) ||
         rtb_LogicalOperator2_ds)));

    /* Outputs for Atomic SubSystem: '<S144>/EdgeFalling1' */
    /* Logic: '<S147>/AND' incorporates:
     *  UnitDelay: '<S147>/Unit Delay'
     */
    rtb_LogicalOperator2_ds = (rtb_LogicalOperator2_ds &&
        (BRDR_ac_DW.UnitDelay_DSTATE_hd));

    /* Update for UnitDelay: '<S147>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_hd = rtb_VM_Conditional_Signal_BPCM_Comm_0;

    /* End of Outputs for SubSystem: '<S144>/EdgeFalling1' */

    /* Logic: '<S144>/Logical5' */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = ((VeBRDR_b_ResetCnts) ||
        rtb_LogicalOperator2_ds);

    /* Outputs for Atomic SubSystem: '<S146>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S146>/Counter Reset  Enabled ' */
    /* Switch: '<S153>/Switch1' incorporates:
     *  Constant: '<S142>/Calib'
     *  Logic: '<S137>/AND3'
     *  Logic: '<S146>/Fail Counter Reset'
     *  Logic: '<S146>/NOT6'
     *  Switch: '<S153>/Switch2'
     *  Switch: '<S154>/Switch1'
     *  UnitDelay: '<S146>/Unit Delay'
     *  UnitDelay: '<S146>/Unit Delay1'
     */
    if ((rtb_VM_Conditional_Signal_BPCM_Comm_0 ||
            (BRDR_ac_DW.UnitDelay_DSTATE_gl)) ||
            (BRDR_ac_DW.UnitDelay1_DSTATE_n0))
    {
        /* Switch: '<S153>/Switch1' incorporates:
         *  Constant: '<S153>/Constant Value2'
         */
        VeBRDR_Cnt_HV_BTIS_FailCnt = 0U;

        /* Switch: '<S154>/Switch1' incorporates:
         *  Constant: '<S154>/Constant Value2'
         */
        VeBRDR_Cnt_HV_BTIS_SmpCnt = 0U;
    }
    else
    {
        if (rtb_RelationalOperator_d0 && ((VeBRDR_b_BTISFlt_Sym) &&
                (KeBRDR_b_HV_BTIS_Flt)))
        {
            /* Switch: '<S153>/Switch1' incorporates:
             *  Constant: '<S153>/Constant Value1'
             *  Sum: '<S153>/Subtraction'
             *  Switch: '<S153>/Switch2'
             *  UnitDelay: '<S153>/Unit Delay'
             */
            VeBRDR_Cnt_HV_BTIS_FailCnt = (uint16)(((uint32)
                VeBRDR_Cnt_HV_BTIS_FailCnt) + 1U);
        }

        /* Switch: '<S154>/Switch2' */
        if (rtb_RelationalOperator_d0)
        {
            /* Switch: '<S154>/Switch1' incorporates:
             *  Constant: '<S154>/Constant Value1'
             *  Sum: '<S154>/Subtraction'
             *  Switch: '<S154>/Switch2'
             *  UnitDelay: '<S154>/Unit Delay'
             */
            VeBRDR_Cnt_HV_BTIS_SmpCnt = (uint16)(((uint32)
                VeBRDR_Cnt_HV_BTIS_SmpCnt) + 1U);
        }

        /* End of Switch: '<S154>/Switch2' */
    }

    /* End of Switch: '<S153>/Switch1' */
    /* End of Outputs for SubSystem: '<S146>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S146>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S146>/Greater Than or Equal ' incorporates:
     *  Constant: '<S139>/Calib'
     */
    BRDR_ac_DW.UnitDelay1_DSTATE_n0 = (VeBRDR_Cnt_HV_BTIS_FailCnt >=
        KeBRDR_Cnt_HV_BTIS_FailCnt);

    /* Logic: '<S146>/NOT5' incorporates:
     *  Constant: '<S140>/Calib'
     *  Logic: '<S146>/NOT3'
     *  RelationalOperator: '<S146>/Less Than  or Equal'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_gl = ((VeBRDR_Cnt_HV_BTIS_SmpCnt >=
        KeBRDR_Cnt_HV_BTIS_SmpCnt) && (!BRDR_ac_DW.UnitDelay1_DSTATE_n0));

    /* Switch: '<S159>/Switch1' incorporates:
     *  Constant: '<S152>/Constant Value'
     *  DataStoreWrite: '<S137>/Data Store Write'
     *  Switch: '<S158>/Switch1'
     */
    if (VeBRDR_b_ResetFOMs)
    {
        BRDR_ac_DW.NeBRDR_Cnt_HV_BTIS_MFOP = 0U;
    }
    else
    {
        if (BRDR_ac_DW.UnitDelay_DSTATE_gl)
        {
            /* MinMax: '<S152>/Minimum2' incorporates:
             *  DataStoreRead: '<S137>/Data Store Read'
             *  Switch: '<S158>/Switch1'
             */
            if (VeBRDR_Cnt_HV_BTIS_FailCnt > BRDR_ac_DW.NeBRDR_Cnt_HV_BTIS_MFOP)
            {
                /* DataStoreWrite: '<S137>/Data Store Write' incorporates:
                 *  Switch: '<S158>/Switch1'
                 */
                BRDR_ac_DW.NeBRDR_Cnt_HV_BTIS_MFOP = VeBRDR_Cnt_HV_BTIS_FailCnt;
            }

            /* End of MinMax: '<S152>/Minimum2' */
        }
    }

    /* End of Switch: '<S159>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S144>/Fail' */
    BRDR_ac_Fail(BRDR_ac_DW.UnitDelay1_DSTATE_n0,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_a);

    /* End of Outputs for SubSystem: '<S144>/Fail' */

    /* Outputs for Enabled SubSystem: '<S144>/Init' */
    BRDR_ac_Init_e(rtb_VM_Conditional_Signal_BPCM_Comm_0,
                   &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_a);

    /* End of Outputs for SubSystem: '<S144>/Init' */

    /* Outputs for Enabled SubSystem: '<S144>/Pass' */
    BRDR_ac_Pass(BRDR_ac_DW.UnitDelay_DSTATE_gl,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_a);

    /* End of Outputs for SubSystem: '<S144>/Pass' */

    /* VariantMerge generated from: '<S81>/b_HV_BTIS_FltDtct' incorporates:
     *  Constant: '<S148>/Constant'
     *  RelationalOperator: '<S144>/Relational Operator'
     *  VariantMerge generated from: '<S81>/VeBRDR_e_FaultSts_HB_CT_SnsrPerf'
     */
    VeBRDR_b_HV_BTIS_FltDtct_BD = (((uint32)
        BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_a) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S81>/If_BTIS_DTC' */
#else

    /* Outputs for Atomic SubSystem: '<S81>/Else_Stub_DTC' */
    /* VariantMerge generated from: '<S81>/VeBRDR_e_FaultSts_HB_CT_SnsrPerf' incorporates:
     *  Constant: '<S138>/Constant'
     */
    BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_a = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S81>/b_HV_BTIS_FltDtct' incorporates:
     *  Constant: '<S136>/FALSE Constant2'
     */
    VeBRDR_b_HV_BTIS_FltDtct_BD = false;

    /* End of Outputs for SubSystem: '<S81>/Else_Stub_DTC' */
#endif

    /* End of Outputs for SubSystem: '<S9>/BTIS_RatDiag' */

    /* Outputs for Atomic SubSystem: '<S9>/BTL_IUMPR' */
#if Rte_SysCon_Variant_BRDR_3

    /* Outputs for Atomic SubSystem: '<S82>/Else_IUMPR' */
    /* VariantMerge generated from: '<S82>/BTIS_Perf_IUMPR' incorporates:
     *  Constant: '<S160>/FALSE Constant'
     */
    VeBRDR_b_BTIS_Perf_IUMPR = false;

    /* VariantMerge generated from: '<S82>/BTOS_Perf_IUMPR' incorporates:
     *  Constant: '<S160>/FALSE Constant1'
     */
    VeBRDR_b_BTOS_Perf_IUMPR = false;

    /* VariantMerge generated from: '<S82>/LTAP_Perf_IUMPR' incorporates:
     *  Constant: '<S160>/FALSE Constant2'
     */
    VeBRDR_b_LTAP_Perf_IUMPR = false;

    /* VariantMerge generated from: '<S82>/BHOS_Perf_IUMPR' incorporates:
     *  Constant: '<S160>/FALSE Constant3'
     */
    VeBRDR_b_BHOS_Perf_IUMPR = false;

    /* End of Outputs for SubSystem: '<S82>/Else_IUMPR' */
#else

    /* Outputs for Atomic SubSystem: '<S82>/If_IUMPR' */
    /* S-Function (sfix_bitop): '<S177>/Bitwise Operator2' incorporates:
     *  Logic: '<S166>/Logical'
     *  Logic: '<S166>/Logical1'
     *  Logic: '<S166>/Logical10'
     *  Logic: '<S166>/Logical11'
     *  Logic: '<S166>/Logical12'
     *  Logic: '<S166>/Logical13'
     *  Logic: '<S166>/Logical14'
     *  Logic: '<S166>/Logical16'
     *  Logic: '<S166>/Logical2'
     *  Logic: '<S166>/Logical3'
     *  Logic: '<S166>/Logical4'
     *  Logic: '<S166>/Logical5'
     *  Logic: '<S166>/Logical7'
     *  Logic: '<S166>/Logical8'
     *  Logic: '<S166>/Logical9'
     *  Logic: '<S173>/Logical Operator'
     *  Logic: '<S174>/Logical Operator'
     *  Logic: '<S175>/Logical Operator'
     *  Logic: '<S176>/Logical Operator'
     *  Logic: '<S177>/Logical Operator'
     *  Logic: '<S178>/Logical Operator'
     *  RelationalOperator: '<S166>/Comparison1'
     *  RelationalOperator: '<S166>/Comparison2'
     *  RelationalOperator: '<S166>/Comparison3'
     *  RelationalOperator: '<S166>/Comparison4'
     *  RelationalOperator: '<S173>/Relational Operator1'
     *  RelationalOperator: '<S173>/Relational Operator2'
     *  RelationalOperator: '<S174>/Relational Operator1'
     *  RelationalOperator: '<S174>/Relational Operator2'
     *  RelationalOperator: '<S175>/Relational Operator1'
     *  RelationalOperator: '<S175>/Relational Operator2'
     *  RelationalOperator: '<S176>/Relational Operator1'
     *  RelationalOperator: '<S176>/Relational Operator2'
     *  RelationalOperator: '<S177>/Relational Operator1'
     *  RelationalOperator: '<S177>/Relational Operator2'
     *  RelationalOperator: '<S178>/Relational Operator1'
     *  RelationalOperator: '<S178>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S173>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S173>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S174>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S174>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S175>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S175>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S176>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S176>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S177>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S178>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S178>/Bitwise Operator2'
     *  Sum: '<S166>/Sum'
     *  Switch: '<S166>/Switch'
     *  Switch: '<S166>/Switch1'
     *  Switch: '<S166>/Switch2'
     */
#if Rte_SysCon_Variant_BRDR_28

    /* Outputs for Enabled SubSystem: '<S193>/Subsystem' */
    /* Outputs for Enabled SubSystem: '<S190>/Subsystem' */
    /* Outputs for Enabled SubSystem: '<S196>/Subsystem' */
    /* VariantMerge generated from: '<S82>/BHOS_Perf_IUMPR' incorporates:
     *  Constant: '<S173>/Constant1'
     *  Constant: '<S173>/Constant2'
     *  Constant: '<S174>/Constant1'
     *  Constant: '<S174>/Constant2'
     *  Constant: '<S175>/Constant1'
     *  Constant: '<S175>/Constant2'
     *  Constant: '<S176>/Constant1'
     *  Constant: '<S176>/Constant2'
     *  Constant: '<S177>/Constant1'
     *  Constant: '<S177>/Constant2'
     *  Constant: '<S178>/Constant1'
     *  Constant: '<S178>/Constant2'
     *  Constant: '<S179>/Calib'
     *  Constant: '<S180>/Calib'
     *  Constant: '<S181>/Calib'
     *  Constant: '<S182>/Calib'
     *  Constant: '<S183>/Calib'
     *  Constant: '<S184>/Calib'
     *  Constant: '<S185>/Calib'
     *  Constant: '<S186>/Calib'
     *  Constant: '<S187>/Calib'
     *  Constant: '<S188>/Calib'
     *  Constant: '<S189>/Calib'
     *  DataStoreRead: '<S173>/StatusByte_BattCoolLvlLow'
     *  DataStoreRead: '<S174>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S175>/StatusByte_BattCoolPmpPerf'
     *  DataStoreRead: '<S176>/StatusByte_CoolOutTempSnsCkt'
     *  DataStoreRead: '<S177>/StatusByte_HB_CT_SnsrPerf'
     *  DataStoreRead: '<S178>/StatusByte_ThrmlRlyCtrlCkt'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BattHtr_LOC'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC'
     */
    VeBRDR_b_BHOS_Perf_IUMPR = ((((((((((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U) == 0U)) &&
        (KeBRDR_b_EnblLTAPPerf_BHOS_IUMPR)) || ((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 64U) == 0U)) &&
        (KeBRDR_b_EnblClntLo_BHOS_IUMPR))) || ((((((sint32)
        BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) == 0U)) &&
        (KeBRDR_b_EnblThrmlRlyCkt_BHOS_IUMPR))) || (!VeBRDR_b_BPCM_NoCommErr)) ||
        (rtb_VariantMerge_For_Variant_Source_Vari &&
         (KeBRDR_b_EnblBotlSnsrSTG_BHOS_IUMPR))) || (((((uint32)
        rtb_VeBRDR_b_BPCM_LIN_LOC) != CeBPCR_e_LIN_BusOff_Disabled) ||
        rtb_VeBRDR_b_BPCM_LIN_LOC_FA) && (KeBRDR_b_EnblBPCMLINBusOff_BHOS_IUMPR)))
        || (((((uint32)rtb_VeBRDR_b_LTAP_LOC) != CeBPCR_e_LOC_BCP_False) ||
             rtb_VeBRDR_b_LTAP_LOC_FA) && (KeBRDR_b_EnblLTAP_LOC_BHOS_IUMPR))) ||
        (((((uint32)rtb_VeBRDR_b_BattHtr_LOC) != CeBPCR_e_LOC_BatClntHtr_False) ||
          rtb_VeBRDR_b_BattHtr_LOC_FA) && (KeBRDR_b_EnblBHOS_LOC_BHOS_IUMPR))) ||
        (((((sint32)(((((((sint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) > 0)
                       && ((((uint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U)
                           == 0U)) && (KeBRDR_b_EnblBTIS_ForBHOS_IUMPR)) ? 1 : 0))
           + ((sint32)(((((((sint32)BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1)
                          > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) == 0U)) &&
                        (KeBRDR_b_EnblBTOS_ForBHOS_IUMPR)) ? 1 : 0))) + ((sint32)
        (((((((sint32)BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 1) > 0) &&
           ((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 64U) ==
            0U)) && (KeBRDR_b_EnblLTAPTmp_ForBHOS_IUMPR)) ? 1 : 0))) >= ((sint32)
        KeBRDR_Cnt_FltyTempSnsrs_BHOS_IUMPR)));

    /* End of Outputs for SubSystem: '<S196>/Subsystem' */
    /* End of Outputs for SubSystem: '<S190>/Subsystem' */
    /* End of Outputs for SubSystem: '<S193>/Subsystem' */
#endif

    /* End of S-Function (sfix_bitop): '<S177>/Bitwise Operator2' */

    /* S-Function (sfix_bitop): '<S207>/Bitwise Operator2' incorporates:
     *  Logic: '<S199>/Logical'
     *  Logic: '<S199>/Logical1'
     *  Logic: '<S199>/Logical10'
     *  Logic: '<S199>/Logical11'
     *  Logic: '<S199>/Logical13'
     *  Logic: '<S199>/Logical14'
     *  Logic: '<S199>/Logical2'
     *  Logic: '<S199>/Logical3'
     *  Logic: '<S199>/Logical4'
     *  Logic: '<S199>/Logical5'
     *  Logic: '<S199>/Logical7'
     *  Logic: '<S199>/Logical8'
     *  Logic: '<S199>/Logical9'
     *  Logic: '<S203>/Logical Operator'
     *  Logic: '<S204>/Logical Operator'
     *  Logic: '<S205>/Logical Operator'
     *  Logic: '<S206>/Logical Operator'
     *  Logic: '<S207>/Logical Operator'
     *  Logic: '<S208>/Logical Operator'
     *  RelationalOperator: '<S199>/Comparison1'
     *  RelationalOperator: '<S199>/Comparison3'
     *  RelationalOperator: '<S199>/Comparison4'
     *  RelationalOperator: '<S203>/Relational Operator1'
     *  RelationalOperator: '<S203>/Relational Operator2'
     *  RelationalOperator: '<S204>/Relational Operator1'
     *  RelationalOperator: '<S204>/Relational Operator2'
     *  RelationalOperator: '<S205>/Relational Operator1'
     *  RelationalOperator: '<S205>/Relational Operator2'
     *  RelationalOperator: '<S206>/Relational Operator1'
     *  RelationalOperator: '<S206>/Relational Operator2'
     *  RelationalOperator: '<S207>/Relational Operator1'
     *  RelationalOperator: '<S207>/Relational Operator2'
     *  RelationalOperator: '<S208>/Relational Operator1'
     *  RelationalOperator: '<S208>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S203>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S203>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S204>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S204>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S205>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S205>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S206>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S206>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S207>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S208>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S208>/Bitwise Operator2'
     *  Sum: '<S199>/Sum'
     *  Switch: '<S199>/Switch'
     *  Switch: '<S199>/Switch1'
     *  Switch: '<S199>/Switch2'
     */
#if !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_12

    /* Outputs for Enabled SubSystem: '<S222>/Subsystem' */
    /* Outputs for Enabled SubSystem: '<S219>/Subsystem' */
    /* VariantMerge generated from: '<S82>/BTIS_Perf_IUMPR' incorporates:
     *  Constant: '<S203>/Constant1'
     *  Constant: '<S203>/Constant2'
     *  Constant: '<S204>/Constant1'
     *  Constant: '<S204>/Constant2'
     *  Constant: '<S205>/Constant1'
     *  Constant: '<S205>/Constant2'
     *  Constant: '<S206>/Constant1'
     *  Constant: '<S206>/Constant2'
     *  Constant: '<S207>/Constant1'
     *  Constant: '<S207>/Constant2'
     *  Constant: '<S208>/Constant1'
     *  Constant: '<S208>/Constant2'
     *  Constant: '<S209>/Calib'
     *  Constant: '<S210>/Calib'
     *  Constant: '<S211>/Calib'
     *  Constant: '<S212>/Calib'
     *  Constant: '<S213>/Calib'
     *  Constant: '<S214>/Calib'
     *  Constant: '<S215>/Calib'
     *  Constant: '<S216>/Calib'
     *  Constant: '<S217>/Calib'
     *  Constant: '<S218>/Calib'
     *  DataStoreRead: '<S203>/StatusByte_BattCoolLvlLow'
     *  DataStoreRead: '<S204>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S205>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     *  DataStoreRead: '<S206>/StatusByte_BattCoolPmpPerf'
     *  DataStoreRead: '<S207>/StatusByte_CoolOutTempSnsCkt'
     *  DataStoreRead: '<S208>/StatusByte_ThrmlRlyCtrlCkt'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC'
     */
    VeBRDR_b_BTIS_Perf_IUMPR = (((((((((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U) == 0U)) &&
        (KeBRDR_b_EnblLTAPPerf_BTIS_IUMPR)) || ((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 64U) == 0U)) &&
        (KeBRDR_b_EnblClntLo_BTIS_IUMPR))) || ((((((sint32)
        BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) == 0U)) &&
        (KeBRDR_b_EnblThrmlRlyCkt_BTIS_IUMPR))) || (!VeBRDR_b_BPCM_NoCommErr)) ||
        (rtb_VariantMerge_For_Variant_Source_Vari &&
         (KeBRDR_b_EnblBotlSnsrSTG_BTIS_IUMPR))) || (((((uint32)
        rtb_VeBRDR_b_BPCM_LIN_LOC) != CeBPCR_e_LIN_BusOff_Disabled) ||
        rtb_VeBRDR_b_BPCM_LIN_LOC_FA) && (KeBRDR_b_EnblBPCM_LINBusOff_BTIS_IUMPR)))
        || (((((uint32)rtb_VeBRDR_b_LTAP_LOC) != CeBPCR_e_LOC_BCP_False) ||
             rtb_VeBRDR_b_LTAP_LOC_FA) && (KeBRDR_b_EnblLTAP_LOC_BTIS_IUMPR))) ||
        (((((sint32)(((((((sint32)BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1) >
                        0) && ((((uint32)BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt)
        & 64U) == 0U)) && (KeBRDR_b_EnblBTOS_ForBTIS_IUMPR)) ? 1 : 0)) +
           ((sint32)(((((((sint32)BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf)
                         & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 64U) == 0U)) &&
                      (KeBRDR_b_EnblLTAPTmp_ForBTIS_IUMPR)) ? 1 : 0))) +
          ((sint32)(((((((sint32)
                         BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) & 1)
                       > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) & 64U) == 0U)) &&
                     (KeBRDR_b_EnblBHOSTmp_ForBTIS_IUMPR)) ? 1 : 0))) >=
         ((sint32)KeBRDR_Cnt_FltyTempSnsrs_BTIS_IUMPR)));

    /* End of Outputs for SubSystem: '<S219>/Subsystem' */
    /* End of Outputs for SubSystem: '<S222>/Subsystem' */
#endif

    /* End of S-Function (sfix_bitop): '<S207>/Bitwise Operator2' */

    /* S-Function (sfix_bitop): '<S225>/Bitwise Operator1' incorporates:
     *  Logic: '<S225>/Logical Operator'
     *  RelationalOperator: '<S225>/Relational Operator1'
     *  RelationalOperator: '<S225>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S225>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_BRDR_12 && Rte_SysCon_Variant_BRDR_5

    /* Logic: '<S225>/Logical Operator' incorporates:
     *  Constant: '<S225>/Constant1'
     *  Constant: '<S225>/Constant2'
     *  DataStoreRead: '<S225>/StatusByte_CoolOutTempSnsCkt'
     */
    rtb_LogicalOperator_bp = (((((sint32)BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt)
        & 1) > 0) && ((((uint32)BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) ==
                      0U));

#endif

    /* End of S-Function (sfix_bitop): '<S225>/Bitwise Operator1' */

    /* Logic: '<S200>/Logical1' */
#if !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_12 && Rte_SysCon_Variant_BRDR_5

    /* VariantMerge generated from: '<S228>/Variant Source' */
    rtb_VariantMerge_For_Variant_Source_Va_g = !VeBRDR_b_BPCM_NoCommErr;

#endif

    /* End of Logic: '<S200>/Logical1' */

    /* Logic: '<S200>/Logical11' */
#if Rte_SysCon_Variant_BRDR_12 && Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_5

    /* VariantMerge generated from: '<S228>/Variant Source' */
    rtb_VariantMerge_For_Variant_Source_Va_g = !VeBRDR_b_TempRat_ComEnbl[0];

#endif

    /* End of Logic: '<S200>/Logical11' */

    /* Logic: '<S200>/Logical2' incorporates:
     *  Logic: '<S200>/Logical8'
     */
#if Rte_SysCon_Variant_BRDR_12 && Rte_SysCon_Variant_BRDR_5

    /* VariantMerge generated from: '<S82>/BTIS_Perf_IUMPR' incorporates:
     *  Constant: '<S226>/Calib'
     */
    VeBRDR_b_BTIS_Perf_IUMPR = (rtb_VariantMerge_For_Variant_Source_Va_g ||
        (rtb_LogicalOperator_bp && (KeBRDR_b_BTOS_Perf_D)));

#endif

    /* End of Logic: '<S200>/Logical2' */

    /* S-Function (sfix_bitop): '<S235>/Bitwise Operator2' incorporates:
     *  Logic: '<S227>/Logical'
     *  Logic: '<S227>/Logical1'
     *  Logic: '<S227>/Logical10'
     *  Logic: '<S227>/Logical11'
     *  Logic: '<S227>/Logical13'
     *  Logic: '<S227>/Logical14'
     *  Logic: '<S227>/Logical2'
     *  Logic: '<S227>/Logical3'
     *  Logic: '<S227>/Logical4'
     *  Logic: '<S227>/Logical5'
     *  Logic: '<S227>/Logical7'
     *  Logic: '<S227>/Logical8'
     *  Logic: '<S227>/Logical9'
     *  Logic: '<S231>/Logical Operator'
     *  Logic: '<S232>/Logical Operator'
     *  Logic: '<S233>/Logical Operator'
     *  Logic: '<S234>/Logical Operator'
     *  Logic: '<S235>/Logical Operator'
     *  Logic: '<S236>/Logical Operator'
     *  RelationalOperator: '<S227>/Comparison1'
     *  RelationalOperator: '<S227>/Comparison3'
     *  RelationalOperator: '<S227>/Comparison4'
     *  RelationalOperator: '<S231>/Relational Operator1'
     *  RelationalOperator: '<S231>/Relational Operator2'
     *  RelationalOperator: '<S232>/Relational Operator1'
     *  RelationalOperator: '<S232>/Relational Operator2'
     *  RelationalOperator: '<S233>/Relational Operator1'
     *  RelationalOperator: '<S233>/Relational Operator2'
     *  RelationalOperator: '<S234>/Relational Operator1'
     *  RelationalOperator: '<S234>/Relational Operator2'
     *  RelationalOperator: '<S235>/Relational Operator1'
     *  RelationalOperator: '<S235>/Relational Operator2'
     *  RelationalOperator: '<S236>/Relational Operator1'
     *  RelationalOperator: '<S236>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S231>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S231>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S232>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S232>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S233>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S233>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S234>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S234>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S235>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S236>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S236>/Bitwise Operator2'
     *  Sum: '<S227>/Sum'
     *  Switch: '<S227>/Switch'
     *  Switch: '<S227>/Switch1'
     *  Switch: '<S227>/Switch2'
     */
#if !Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

    /* Outputs for Enabled SubSystem: '<S250>/Subsystem' */
    /* Outputs for Enabled SubSystem: '<S247>/Subsystem' */
    /* VariantMerge generated from: '<S82>/BTOS_Perf_IUMPR' incorporates:
     *  Constant: '<S231>/Constant1'
     *  Constant: '<S231>/Constant2'
     *  Constant: '<S232>/Constant1'
     *  Constant: '<S232>/Constant2'
     *  Constant: '<S233>/Constant1'
     *  Constant: '<S233>/Constant2'
     *  Constant: '<S234>/Constant1'
     *  Constant: '<S234>/Constant2'
     *  Constant: '<S235>/Constant1'
     *  Constant: '<S235>/Constant2'
     *  Constant: '<S236>/Constant1'
     *  Constant: '<S236>/Constant2'
     *  Constant: '<S237>/Calib'
     *  Constant: '<S238>/Calib'
     *  Constant: '<S239>/Calib'
     *  Constant: '<S240>/Calib'
     *  Constant: '<S241>/Calib'
     *  Constant: '<S242>/Calib'
     *  Constant: '<S243>/Calib'
     *  Constant: '<S244>/Calib'
     *  Constant: '<S245>/Calib'
     *  Constant: '<S246>/Calib'
     *  DataStoreRead: '<S231>/StatusByte_BattCoolLvlLow'
     *  DataStoreRead: '<S232>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S233>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     *  DataStoreRead: '<S234>/StatusByte_BattCoolPmpPerf'
     *  DataStoreRead: '<S235>/StatusByte_HB_CT_SnsrPerf'
     *  DataStoreRead: '<S236>/StatusByte_ThrmlRlyCtrlCkt'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC'
     */
    VeBRDR_b_BTOS_Perf_IUMPR = (((((((((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U) == 0U)) &&
        (KeBRDR_b_EnblLTAPPerf_BTOS_IUMPR)) || ((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 64U) == 0U)) &&
        (KeBRDR_b_EnblClntLo_BTOS_IUMPR))) || ((((((sint32)
        BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) == 0U)) &&
        (KeBRDR_b_EnblThrmlRlyCkt_BTOS_IUMPR))) || (!VeBRDR_b_BPCM_NoCommErr)) ||
        (rtb_VariantMerge_For_Variant_Source_Vari &&
         (KeBRDR_b_EnblBotlSnsrSTG_BTOS_IUMPR))) || (((((uint32)
        rtb_VeBRDR_b_BPCM_LIN_LOC) != CeBPCR_e_LIN_BusOff_Disabled) ||
        rtb_VeBRDR_b_BPCM_LIN_LOC_FA) && (KeBRDR_b_EnblBPCM_LINBusOff_BTOS_IUMPR)))
        || (((((uint32)rtb_VeBRDR_b_LTAP_LOC) != CeBPCR_e_LOC_BCP_False) ||
             rtb_VeBRDR_b_LTAP_LOC_FA) && (KeBRDR_b_EnblLTAP_LOC_BTOS_IUMPR))) ||
        (((((sint32)(((((((sint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) > 0)
                       && ((((uint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U)
                           == 0U)) && (KeBRDR_b_EnblBTIS_ForBTOS_IUMPR)) ? 1 : 0))
           + ((sint32)(((((((sint32)
                            BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 1)
                          > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 64U) == 0U)) &&
                        (KeBRDR_b_EnblLTAPTmp_ForBTOS_IUMPR)) ? 1 : 0))) +
          ((sint32)(((((((sint32)
                         BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) & 1)
                       > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) & 64U) == 0U)) &&
                     (KeBRDR_b_EnblBHOSTmp_ForBTOS_IUMPR)) ? 1 : 0))) >=
         ((sint32)KeBRDR_Cnt_FltyTempSnsrs_BTOS_IUMPR)));

    /* End of Outputs for SubSystem: '<S247>/Subsystem' */
    /* End of Outputs for SubSystem: '<S250>/Subsystem' */
#endif

    /* End of S-Function (sfix_bitop): '<S235>/Bitwise Operator2' */

    /* S-Function (sfix_bitop): '<S253>/Bitwise Operator1' incorporates:
     *  Logic: '<S253>/Logical Operator'
     *  RelationalOperator: '<S253>/Relational Operator1'
     *  RelationalOperator: '<S253>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

    /* Logic: '<S253>/Logical Operator' incorporates:
     *  Constant: '<S253>/Constant1'
     *  Constant: '<S253>/Constant2'
     *  DataStoreRead: '<S253>/StatusByte_HB_CT_SnsrPerf'
     */
    rtb_LogicalOperator_pj = (((((sint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) &
        1) > 0) && ((((uint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) == 0U));

#endif

    /* End of S-Function (sfix_bitop): '<S253>/Bitwise Operator1' */

    /* Logic: '<S228>/Logical1' */
#if !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

    /* VariantMerge generated from: '<S228>/Variant Source' */
    rtb_VariantMerge_For_Variant_Source_Va_g = !VeBRDR_b_BPCM_NoCommErr;

#endif

    /* End of Logic: '<S228>/Logical1' */

    /* Logic: '<S228>/Logical11' */
#if Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

    /* VariantMerge generated from: '<S228>/Variant Source' */
    rtb_VariantMerge_For_Variant_Source_Va_g = !VeBRDR_b_TempRat_ComEnbl[0];

#endif

    /* End of Logic: '<S228>/Logical11' */

    /* Logic: '<S228>/Logical2' incorporates:
     *  Logic: '<S228>/Logical8'
     */
#if Rte_SysCon_Variant_BRDR_5 && Rte_SysCon_Variant_BRDR_6

    /* VariantMerge generated from: '<S82>/BTOS_Perf_IUMPR' incorporates:
     *  Constant: '<S254>/Calib'
     */
    VeBRDR_b_BTOS_Perf_IUMPR = (rtb_VariantMerge_For_Variant_Source_Va_g ||
        (rtb_LogicalOperator_pj && (KeBRDR_b_BTIS_Perf_D)));

#endif

    /* End of Logic: '<S228>/Logical2' */

    /* S-Function (sfix_bitop): '<S261>/Bitwise Operator2' incorporates:
     *  Logic: '<S169>/Logical'
     *  Logic: '<S169>/Logical1'
     *  Logic: '<S169>/Logical10'
     *  Logic: '<S169>/Logical11'
     *  Logic: '<S169>/Logical13'
     *  Logic: '<S169>/Logical14'
     *  Logic: '<S169>/Logical2'
     *  Logic: '<S169>/Logical3'
     *  Logic: '<S169>/Logical4'
     *  Logic: '<S169>/Logical5'
     *  Logic: '<S169>/Logical7'
     *  Logic: '<S169>/Logical8'
     *  Logic: '<S169>/Logical9'
     *  Logic: '<S257>/Logical Operator'
     *  Logic: '<S258>/Logical Operator'
     *  Logic: '<S259>/Logical Operator'
     *  Logic: '<S260>/Logical Operator'
     *  Logic: '<S261>/Logical Operator'
     *  Logic: '<S262>/Logical Operator'
     *  RelationalOperator: '<S169>/Comparison1'
     *  RelationalOperator: '<S169>/Comparison3'
     *  RelationalOperator: '<S169>/Comparison4'
     *  RelationalOperator: '<S257>/Relational Operator1'
     *  RelationalOperator: '<S257>/Relational Operator2'
     *  RelationalOperator: '<S258>/Relational Operator1'
     *  RelationalOperator: '<S258>/Relational Operator2'
     *  RelationalOperator: '<S259>/Relational Operator1'
     *  RelationalOperator: '<S259>/Relational Operator2'
     *  RelationalOperator: '<S260>/Relational Operator1'
     *  RelationalOperator: '<S260>/Relational Operator2'
     *  RelationalOperator: '<S261>/Relational Operator1'
     *  RelationalOperator: '<S261>/Relational Operator2'
     *  RelationalOperator: '<S262>/Relational Operator1'
     *  RelationalOperator: '<S262>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S257>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S257>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S258>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S258>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S259>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S259>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S260>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S260>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S261>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S262>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S262>/Bitwise Operator2'
     *  Sum: '<S169>/Sum'
     *  Switch: '<S169>/Switch'
     *  Switch: '<S169>/Switch1'
     *  Switch: '<S169>/Switch2'
     */
#if Rte_SysCon_Variant_BRDR_8

    /* Outputs for Enabled SubSystem: '<S276>/Subsystem' */
    /* Outputs for Enabled SubSystem: '<S273>/Subsystem' */
    /* VariantMerge generated from: '<S82>/LTAP_Perf_IUMPR' incorporates:
     *  Constant: '<S257>/Constant1'
     *  Constant: '<S257>/Constant2'
     *  Constant: '<S258>/Constant1'
     *  Constant: '<S258>/Constant2'
     *  Constant: '<S259>/Constant1'
     *  Constant: '<S259>/Constant2'
     *  Constant: '<S260>/Constant1'
     *  Constant: '<S260>/Constant2'
     *  Constant: '<S261>/Constant1'
     *  Constant: '<S261>/Constant2'
     *  Constant: '<S262>/Constant1'
     *  Constant: '<S262>/Constant2'
     *  Constant: '<S263>/Calib'
     *  Constant: '<S264>/Calib'
     *  Constant: '<S265>/Calib'
     *  Constant: '<S266>/Calib'
     *  Constant: '<S267>/Calib'
     *  Constant: '<S268>/Calib'
     *  Constant: '<S269>/Calib'
     *  Constant: '<S270>/Calib'
     *  Constant: '<S271>/Calib'
     *  Constant: '<S272>/Calib'
     *  DataStoreRead: '<S257>/StatusByte_BattCoolLvlLow'
     *  DataStoreRead: '<S258>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     *  DataStoreRead: '<S259>/StatusByte_BattCoolPmpPerf'
     *  DataStoreRead: '<S260>/StatusByte_CoolOutTempSnsCkt'
     *  DataStoreRead: '<S261>/StatusByte_HB_CT_SnsrPerf'
     *  DataStoreRead: '<S262>/StatusByte_ThrmlRlyCtrlCkt'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC'
     */
    VeBRDR_b_LTAP_Perf_IUMPR = (((((((((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U) == 0U)) &&
        (KeBRDR_b_EnblLTAPPerf_LTAP_IUMPR)) || ((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 64U) == 0U)) &&
        (KeBRDR_b_EnblClntLo_LTAP_IUMPR))) || ((((((sint32)
        BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) == 0U)) &&
        (KeBRDR_b_EnblThrmlRlyCkt_LTAP_IUMPR))) || (!VeBRDR_b_BPCM_NoCommErr)) ||
        (rtb_VariantMerge_For_Variant_Source_Vari &&
         (KeBRDR_b_EnblBotlSnsrSTG_LTAP_IUMPR))) || (((((uint32)
        rtb_VeBRDR_b_BPCM_LIN_LOC) != CeBPCR_e_LIN_BusOff_Disabled) ||
        rtb_VeBRDR_b_BPCM_LIN_LOC_FA) && (KeBRDR_b_EnblBPCMLINBusOff_LTAP_IUMPR)))
        || (((((uint32)rtb_VeBRDR_b_LTAP_LOC) != CeBPCR_e_LOC_BCP_False) ||
             rtb_VeBRDR_b_LTAP_LOC_FA) && (KeBRDR_b_EnblLTAP_LOC_LTAP_IUMPR))) ||
        (((((sint32)(((((((sint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) > 0)
                       && ((((uint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U)
                           == 0U)) && (KeBRDR_b_EnblBTIS_ForLTAP_IUMPR)) ? 1 : 0))
           + ((sint32)(((((((sint32)BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1)
                          > 0) && ((((uint32)
        BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) == 0U)) &&
                        (KeBRDR_b_EnblBTOS_ForLTAP_IUMPR)) ? 1 : 0))) + ((sint32)
        (((((((sint32)BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) & 1) >
            0) && ((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf)
                    & 64U) == 0U)) && (KeBRDR_b_EnblBHOSTmp_ForLTAP_IUMPR)) ? 1 :
         0))) >= ((sint32)KeBRDR_Cnt_FltyTempSnsrs_LTAP_IUMPR)));

    /* End of Outputs for SubSystem: '<S273>/Subsystem' */
    /* End of Outputs for SubSystem: '<S276>/Subsystem' */
#endif

    /* End of S-Function (sfix_bitop): '<S261>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S161>/Variant Source1' */
#if !Rte_SysCon_Variant_BRDR_6

    /* VariantMerge generated from: '<S82>/BTOS_Perf_IUMPR' incorporates:
     *  Constant: '<S164>/FALSE Constant'
     */
    VeBRDR_b_BTOS_Perf_IUMPR = false;

#endif

    /* End of SignalConversion generated from: '<S161>/Variant Source1' */

    /* SignalConversion generated from: '<S161>/Variant Source2' */
#if !Rte_SysCon_Variant_BRDR_8

    /* VariantMerge generated from: '<S82>/LTAP_Perf_IUMPR' incorporates:
     *  Constant: '<S165>/FALSE Constant'
     */
    VeBRDR_b_LTAP_Perf_IUMPR = false;

#endif

    /* End of SignalConversion generated from: '<S161>/Variant Source2' */

    /* SignalConversion generated from: '<S161>/Variant Source3' */
#if !Rte_SysCon_Variant_BRDR_28

    /* VariantMerge generated from: '<S82>/BHOS_Perf_IUMPR' incorporates:
     *  Constant: '<S162>/FALSE Constant'
     */
    VeBRDR_b_BHOS_Perf_IUMPR = false;

#endif

    /* End of SignalConversion generated from: '<S161>/Variant Source3' */

    /* SignalConversion generated from: '<S161>/Variant Source4' */
#if !Rte_SysCon_Variant_BRDR_12

    /* VariantMerge generated from: '<S82>/BTIS_Perf_IUMPR' incorporates:
     *  Constant: '<S163>/FALSE Constant'
     */
    VeBRDR_b_BTIS_Perf_IUMPR = false;

#endif

    /* End of SignalConversion generated from: '<S161>/Variant Source4' */
    /* End of Outputs for SubSystem: '<S82>/If_IUMPR' */
#endif

    /* End of Outputs for SubSystem: '<S9>/BTL_IUMPR' */

    /* Switch: '<S532>/Switch1' incorporates:
     *  Constant: '<S513>/Constant Value15'
     *  RelationalOperator: '<S513>/Comparison17'
     *  UnitDelay: '<S532>/Unit Delay'
     */
    if (((sint32)VeBRDR_i_SnsrSel) == 3)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_i1[0] = VeBRDR_b_S4_Rat_DTC_Enbl;
        BRDR_ac_DW.UnitDelay_DSTATE_i1[1] = VeBRDR_b_S4_Rat_Flt;
    }
    else
    {
        /* Switch: '<S532>/Switch2' incorporates:
         *  Constant: '<S513>/Constant Value16'
         *  RelationalOperator: '<S513>/Comparison16'
         *  UnitDelay: '<S532>/Unit Delay'
         */
        tmp[0] = VeBRDR_b_S5_Rat_DTC_Enbl;
        tmp[1] = VeBRDR_b_S5_Rat_Flt;
        if (((sint32)VeBRDR_i_SnsrSel) == 4)
        {
            for (rtb_Logical_d_tmp = 0; rtb_Logical_d_tmp < 2; rtb_Logical_d_tmp
                    ++)
            {
                BRDR_ac_DW.UnitDelay_DSTATE_i1[rtb_Logical_d_tmp] =
                    tmp[rtb_Logical_d_tmp];
            }
        }

        /* End of Switch: '<S532>/Switch2' */
    }

    /* End of Switch: '<S532>/Switch1' */

    /* Gain: '<S415>/Gain' */
    VeBRDR_b_BTOS2TmpFA_Enbl = VeBRDR_b_TempRat_ComEnbl[1];

    /* Logic: '<S327>/Logical Operator7' incorporates:
     *  Logic: '<S327>/Logical Operator17'
     *  UnitDelay: '<S532>/Unit Delay'
     */
    VeBRDR_b_BTOS2_TmpDiagEnbl = (((VeBRDR_b_TempRat_ComEnbl[0]) &&
        (BRDR_ac_DW.UnitDelay_DSTATE_i1[0])) || (VeBRDR_b_BTOS2TmpFA_Enbl));

    /* Logic: '<S335>/Logical Operator' incorporates:
     *  Constant: '<S349>/Calib'
     *  Logic: '<S335>/Logical Operator1'
     *  UnitDelay: '<S532>/Unit Delay'
     */
    VeBRDR_b_BTOS2Flt_Sym = ((BRDR_ac_DW.UnitDelay_DSTATE_i1[1]) ||
        ((KeBRDR_b_BTOS2_FA_FltCndsEnbl) && (VeBRDR_b_TempRat_ComEnbl[3])));

    /* Outputs for Atomic SubSystem: '<S9>/BTOS2_RatDiag' */
#if Rte_SysCon_Variant_BRDR_34

    /* Outputs for Atomic SubSystem: '<S83>/If_BTOS2_DTC' */
    /* RelationalOperator: '<S287>/Relational Operator3' incorporates:
     *  Constant: '<S287>/Constant3'
     *  DataStoreRead: '<S288>/StatusByte_HybBattCooTempSnsrDPer'
     *  S-Function (sfix_bitop): '<S287>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_g = ((((uint32)
        BRDR_ac_DW.StatusByte_HybBattCooTempSnsrDPer) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S287>/EdgeFalling1' */
    /* Logic: '<S287>/Logical Operator' incorporates:
     *  Logic: '<S290>/OR1'
     */
    rtb_LogicalOperator_pj = !rtb_VariantMerge_For_Variant_Source_Va_g;

    /* End of Outputs for SubSystem: '<S287>/EdgeFalling1' */

    /* Logic: '<S287>/Logical1' incorporates:
     *  Constant: '<S285>/Calib'
     *  Constant: '<S286>/Calib'
     *  Constant: '<S287>/Constant1'
     *  DataStoreRead: '<S288>/StatusByte_HybBattCooTempSnsrDPer'
     *  Logic: '<S280>/AND1'
     *  Logic: '<S287>/Logical Operator'
     *  Logic: '<S287>/Logical10'
     *  Logic: '<S287>/Logical12'
     *  RelationalOperator: '<S287>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S287>/Bitwise Operator3'
     */
    rtb_LogicalOperator_bp = (((VeBRDR_b_BTOS2_TmpDiagEnbl) &&
        (KeBRDR_b_HV_BTOS2_XYEnbl)) &&
        ((!KeBRDR_b_HybBattCooTempSnsrDPer_LtchEnbl) || (((((uint32)
        BRDR_ac_DW.StatusByte_HybBattCooTempSnsrDPer) & 1U) == 0U) ||
        rtb_LogicalOperator_pj)));

    /* Outputs for Atomic SubSystem: '<S287>/EdgeFalling1' */
    /* Logic: '<S290>/AND' incorporates:
     *  UnitDelay: '<S290>/Unit Delay'
     */
    rtb_LogicalOperator_pj = (rtb_LogicalOperator_pj &&
        (BRDR_ac_DW.UnitDelay_DSTATE_iv));

    /* Update for UnitDelay: '<S290>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_iv = rtb_VariantMerge_For_Variant_Source_Va_g;

    /* End of Outputs for SubSystem: '<S287>/EdgeFalling1' */

    /* Logic: '<S287>/Logical5' */
    rtb_VariantMerge_For_Variant_Source_Va_g = ((VeBRDR_b_ResetCnts) ||
        rtb_LogicalOperator_pj);

    /* Outputs for Atomic SubSystem: '<S289>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S289>/Counter Reset  Enabled ' */
    /* Switch: '<S296>/Switch1' incorporates:
     *  Constant: '<S284>/Calib'
     *  Logic: '<S280>/AND3'
     *  Logic: '<S289>/Fail Counter Reset'
     *  Logic: '<S289>/NOT6'
     *  Switch: '<S296>/Switch2'
     *  Switch: '<S297>/Switch1'
     *  UnitDelay: '<S289>/Unit Delay'
     *  UnitDelay: '<S289>/Unit Delay1'
     */
    if ((rtb_VariantMerge_For_Variant_Source_Va_g ||
            (BRDR_ac_DW.UnitDelay_DSTATE_d5)) || (BRDR_ac_DW.UnitDelay1_DSTATE_n))
    {
        /* Switch: '<S296>/Switch1' incorporates:
         *  Constant: '<S296>/Constant Value2'
         */
        VeBRDR_Cnt_HV_BTOS2_FailCnt = 0U;

        /* Switch: '<S297>/Switch1' incorporates:
         *  Constant: '<S297>/Constant Value2'
         */
        VeBRDR_Cnt_HV_BTOS2_SmpCnt = 0U;
    }
    else
    {
        if (rtb_LogicalOperator_bp && ((VeBRDR_b_BTOS2Flt_Sym) &&
                (KeBRDR_b_HV_BTOS2_Flt)))
        {
            /* Switch: '<S296>/Switch1' incorporates:
             *  Constant: '<S296>/Constant Value1'
             *  Sum: '<S296>/Subtraction'
             *  Switch: '<S296>/Switch2'
             *  UnitDelay: '<S296>/Unit Delay'
             */
            VeBRDR_Cnt_HV_BTOS2_FailCnt = (uint16)(((uint32)
                VeBRDR_Cnt_HV_BTOS2_FailCnt) + 1U);
        }

        /* Switch: '<S297>/Switch2' */
        if (rtb_LogicalOperator_bp)
        {
            /* Switch: '<S297>/Switch1' incorporates:
             *  Constant: '<S297>/Constant Value1'
             *  Sum: '<S297>/Subtraction'
             *  Switch: '<S297>/Switch2'
             *  UnitDelay: '<S297>/Unit Delay'
             */
            VeBRDR_Cnt_HV_BTOS2_SmpCnt = (uint16)(((uint32)
                VeBRDR_Cnt_HV_BTOS2_SmpCnt) + 1U);
        }

        /* End of Switch: '<S297>/Switch2' */
    }

    /* End of Switch: '<S296>/Switch1' */
    /* End of Outputs for SubSystem: '<S289>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S289>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S289>/Greater Than or Equal ' incorporates:
     *  Constant: '<S282>/Calib'
     */
    BRDR_ac_DW.UnitDelay1_DSTATE_n = (VeBRDR_Cnt_HV_BTOS2_FailCnt >=
        KeBRDR_Cnt_HV_BTOS2_FailCnt);

    /* Logic: '<S289>/NOT5' incorporates:
     *  Constant: '<S283>/Calib'
     *  Logic: '<S289>/NOT3'
     *  RelationalOperator: '<S289>/Less Than  or Equal'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_d5 = ((VeBRDR_Cnt_HV_BTOS2_SmpCnt >=
        KeBRDR_Cnt_HV_BTOS2_SmpCnt) && (!BRDR_ac_DW.UnitDelay1_DSTATE_n));

    /* Switch: '<S302>/Switch1' incorporates:
     *  Constant: '<S295>/Constant Value'
     *  DataStoreWrite: '<S280>/Data Store Write3'
     *  Switch: '<S301>/Switch1'
     */
    if (VeBRDR_b_ResetFOMs)
    {
        BRDR_ac_DW.NeBRDR_Cnt_HV_BTOS2_MFOP = 0U;
    }
    else
    {
        if (BRDR_ac_DW.UnitDelay_DSTATE_d5)
        {
            /* MinMax: '<S295>/Minimum2' incorporates:
             *  DataStoreRead: '<S280>/Data Store Read1'
             *  Switch: '<S301>/Switch1'
             */
            if (VeBRDR_Cnt_HV_BTOS2_FailCnt >
                    BRDR_ac_DW.NeBRDR_Cnt_HV_BTOS2_MFOP)
            {
                /* DataStoreWrite: '<S280>/Data Store Write3' incorporates:
                 *  Switch: '<S301>/Switch1'
                 */
                BRDR_ac_DW.NeBRDR_Cnt_HV_BTOS2_MFOP =
                    VeBRDR_Cnt_HV_BTOS2_FailCnt;
            }

            /* End of MinMax: '<S295>/Minimum2' */
        }
    }

    /* End of Switch: '<S302>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S287>/Fail' */
    BRDR_ac_Fail(BRDR_ac_DW.UnitDelay1_DSTATE_n,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_c);

    /* End of Outputs for SubSystem: '<S287>/Fail' */

    /* Outputs for Enabled SubSystem: '<S287>/Init' */
    BRDR_ac_Init_e(rtb_VariantMerge_For_Variant_Source_Va_g,
                   &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_c);

    /* End of Outputs for SubSystem: '<S287>/Init' */

    /* Outputs for Enabled SubSystem: '<S287>/Pass' */
    BRDR_ac_Pass(BRDR_ac_DW.UnitDelay_DSTATE_d5,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_c);

    /* End of Outputs for SubSystem: '<S287>/Pass' */

    /* VariantMerge generated from: '<S83>/b_HV_BTOS2_FltDtct' incorporates:
     *  Constant: '<S291>/Constant'
     *  RelationalOperator: '<S287>/Relational Operator'
     *  VariantMerge generated from: '<S83>/VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer'
     */
    VeBRDR_b_HV_BTOS2_FltDtct_BD = (((uint32)
        BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_c) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S83>/If_BTOS2_DTC' */
#else

    /* Outputs for Atomic SubSystem: '<S83>/Else_Stub_DTC' */
    /* VariantMerge generated from: '<S83>/VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer' incorporates:
     *  Constant: '<S281>/Constant'
     */
    BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_c = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S83>/b_HV_BTOS2_FltDtct' incorporates:
     *  Constant: '<S279>/FALSE Constant2'
     */
    VeBRDR_b_HV_BTOS2_FltDtct_BD = false;

    /* End of Outputs for SubSystem: '<S83>/Else_Stub_DTC' */
#endif

    /* End of Outputs for SubSystem: '<S9>/BTOS2_RatDiag' */

    /* SignalConversion generated from: '<S327>/Variant Source1' */
#if Rte_SysCon_Variant_BRDR_5

    /* VariantMerge generated from: '<S334>/Variant Source' */
    VeBRDR_b_BTOSFlt_Sym = rtb_AND_ea;

#endif

    /* End of SignalConversion generated from: '<S327>/Variant Source1' */

    /* Switch: '<S529>/Switch1' incorporates:
     *  Constant: '<S513>/Constant Value10'
     *  Constant: '<S513>/Constant Value7'
     *  Constant: '<S513>/Constant Value8'
     *  Logic: '<S513>/Logical1'
     *  RelationalOperator: '<S513>/Comparison11'
     *  RelationalOperator: '<S513>/Comparison8'
     *  RelationalOperator: '<S513>/Comparison9'
     *  UnitDelay: '<S529>/Unit Delay'
     */
    if (((((sint32)VeBRDR_i_SnsrSel) == 1) || (((sint32)VeBRDR_i_SnsrSel) == 2))
        || (((sint32)VeBRDR_i_SnsrSel) == 4))
    {
        BRDR_ac_DW.UnitDelay_DSTATE_an[0] = VeBRDR_b_S3_Rat_DTC_Enbl;
        BRDR_ac_DW.UnitDelay_DSTATE_an[1] = VeBRDR_b_S3_Rat_Flt;
    }
    else
    {
        /* Switch: '<S529>/Switch2' incorporates:
         *  Constant: '<S513>/Constant Value9'
         *  RelationalOperator: '<S513>/Comparison10'
         *  UnitDelay: '<S529>/Unit Delay'
         */
        tmp[0] = VeBRDR_b_S2_Rat_DTC_Enbl;
        tmp[1] = VeBRDR_b_S2_Rat_Flt;
        if (((sint32)VeBRDR_i_SnsrSel) == 3)
        {
            for (rtb_Logical_d_tmp = 0; rtb_Logical_d_tmp < 2; rtb_Logical_d_tmp
                    ++)
            {
                BRDR_ac_DW.UnitDelay_DSTATE_an[rtb_Logical_d_tmp] =
                    tmp[rtb_Logical_d_tmp];
            }
        }

        /* End of Switch: '<S529>/Switch2' */
    }

    /* End of Switch: '<S529>/Switch1' */

    /* Logic: '<S327>/Logical Operator14' */
#if !Rte_SysCon_Variant_BRDR_5

    /* VariantMerge generated from: '<S334>/Variant Source' incorporates:
     *  UnitDelay: '<S529>/Unit Delay'
     */
    VeBRDR_b_BTOSFlt_Sym = (rtb_AND_ea && (BRDR_ac_DW.UnitDelay_DSTATE_an[0]));

#endif

    /* End of Logic: '<S327>/Logical Operator14' */

    /* Logic: '<S327>/Logical Operator11' */
    VeBRDR_b_BTOS_TmpDiagEnbl = ((VeBRDR_b_BTOSFlt_Sym) ||
        (VeBRDR_b_BTOSTmpFA_Enbl));

    /* Sum: '<S345>/Add' incorporates:
     *  Abs: '<S345>/Abs'
     *  RelationalOperator: '<S345>/Relational Operator'
     */
#if Rte_SysCon_Variant_BRDR_5

    /* Sum: '<S345>/Add1' */
    rtb_Add1_n = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat -
        rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j;

    /* Abs: '<S345>/Abs' */
    VeBRDR_T_BTIS_BTOS_Abs_BTOS_Fault = fabsf(rtb_Add1_n);

    /* RelationalOperator: '<S345>/Relational Operator' incorporates:
     *  Constant: '<S347>/Calib'
     */
    rtb_RelationalOperator_b = (VeBRDR_T_BTIS_BTOS_Abs_BTOS_Fault >
        KeBRDR_T_BTOS_BTIS_TmpLim);

#endif

    /* End of Sum: '<S345>/Add' */

    /* SignalConversion generated from: '<S345>/Variant Source' */
#if Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_5

    /* Sum: '<S345>/Add1' */
    rtb_Add1_n = rtb_TmpSignalConversionAtVeBTRR_T_HV_Bat;

#endif

    /* End of SignalConversion generated from: '<S345>/Variant Source' */

    /* SignalConversion generated from: '<S345>/Variant Source' */
#if !Rte_SysCon_Variant_BRDR_4 && Rte_SysCon_Variant_BRDR_5

    /* Sum: '<S345>/Add1' */
    rtb_Add1_n = rtb_TmpSignalConversionAtVeBTRR_T_CellTe;

#endif

    /* End of SignalConversion generated from: '<S345>/Variant Source' */

    /* VariantMerge generated from: '<S11>/Variant Source2' incorporates:
     *  Constant: '<S346>/Calib'
     *  Logic: '<S334>/Logical Operator1'
     */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = ((KeBRDR_b_BTOS_FA_FltCndsEnbl) &&
        rtb_LogicalOperator2_k2);

    /* Sum: '<S345>/Add1' incorporates:
     *  Abs: '<S345>/Abs1'
     *  Logic: '<S345>/Logical Operator1'
     *  Logic: '<S345>/Logical Operator2'
     *  RelationalOperator: '<S345>/Relational Operator1'
     */
#if Rte_SysCon_Variant_BRDR_5

    /* Sum: '<S345>/Add1' */
    rtb_Add1_n = rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j - rtb_Add1_n;

    /* Abs: '<S345>/Abs1' */
    VeBRDR_T_BTOS_BatModTemp_Abs = fabsf(rtb_Add1_n);

    /* Logic: '<S345>/Logical Operator2' incorporates:
     *  Constant: '<S348>/Calib'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = (rtb_RelationalOperator_b &&
        (VeBRDR_T_BTOS_BatModTemp_Abs > KeBRDR_T_BTOS_CellT_TmpLim));

    /* VariantMerge generated from: '<S334>/Variant Source' */
    VeBRDR_b_BTOSFlt_Sym = (rtb_VM_Conditional_Signal_BPCM_Comm_0 ||
                            (VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD));

#endif

    /* End of Sum: '<S345>/Add1' */

    /* Logic: '<S344>/Logical Operator2' */
#if !Rte_SysCon_Variant_BRDR_5

    /* VariantMerge generated from: '<S334>/Variant Source' incorporates:
     *  UnitDelay: '<S529>/Unit Delay'
     */
    VeBRDR_b_BTOSFlt_Sym = ((BRDR_ac_DW.UnitDelay_DSTATE_an[1]) ||
                            (VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD));

#endif

    /* End of Logic: '<S344>/Logical Operator2' */

    /* Outputs for Atomic SubSystem: '<S9>/BTOS_RatDiag' */
#if Rte_SysCon_Variant_BRDR_6

    /* Outputs for Atomic SubSystem: '<S84>/If_BTOS_DTC' */
    /* RelationalOperator: '<S311>/Relational Operator3' incorporates:
     *  Constant: '<S311>/Constant3'
     *  DataStoreRead: '<S312>/StatusByte_CoolOutTempSnsCkt'
     *  S-Function (sfix_bitop): '<S311>/Bitwise Operator2'
     */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = ((((uint32)
        BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S311>/EdgeFalling1' */
    /* Logic: '<S311>/Logical Operator' incorporates:
     *  Logic: '<S314>/OR1'
     */
    rtb_LogicalOperator2_k2 = !rtb_VM_Conditional_Signal_BPCM_Comm_0;

    /* End of Outputs for SubSystem: '<S311>/EdgeFalling1' */

    /* Logic: '<S311>/Logical1' incorporates:
     *  Constant: '<S308>/Calib'
     *  Constant: '<S310>/Calib'
     *  Constant: '<S311>/Constant1'
     *  DataStoreRead: '<S312>/StatusByte_CoolOutTempSnsCkt'
     *  Logic: '<S304>/AND1'
     *  Logic: '<S311>/Logical Operator'
     *  Logic: '<S311>/Logical10'
     *  Logic: '<S311>/Logical12'
     *  RelationalOperator: '<S311>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S311>/Bitwise Operator3'
     */
    rtb_RelationalOperator_b = (((VeBRDR_b_BTOS_TmpDiagEnbl) &&
        (KeBRDR_b_HV_BTOS_XYEnbl)) && ((!KeBRDR_b_CoolOutTempSnsCkt_LtchEnbl) ||
        (((((uint32)BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1U) == 0U) ||
         rtb_LogicalOperator2_k2)));

    /* Outputs for Atomic SubSystem: '<S311>/EdgeFalling1' */
    /* Logic: '<S314>/AND' incorporates:
     *  UnitDelay: '<S314>/Unit Delay'
     */
    rtb_LogicalOperator2_k2 = (rtb_LogicalOperator2_k2 &&
        (BRDR_ac_DW.UnitDelay_DSTATE_kn));

    /* Update for UnitDelay: '<S314>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_kn = rtb_VM_Conditional_Signal_BPCM_Comm_0;

    /* End of Outputs for SubSystem: '<S311>/EdgeFalling1' */

    /* Logic: '<S311>/Logical5' */
    rtb_VM_Conditional_Signal_BPCM_Comm_0 = ((VeBRDR_b_ResetCnts) ||
        rtb_LogicalOperator2_k2);

    /* Outputs for Atomic SubSystem: '<S313>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S313>/Counter Reset  Enabled ' */
    /* Switch: '<S320>/Switch1' incorporates:
     *  Constant: '<S309>/Calib'
     *  Logic: '<S304>/AND3'
     *  Logic: '<S313>/Fail Counter Reset'
     *  Logic: '<S313>/NOT6'
     *  Switch: '<S320>/Switch2'
     *  Switch: '<S321>/Switch1'
     *  UnitDelay: '<S313>/Unit Delay'
     *  UnitDelay: '<S313>/Unit Delay1'
     */
    if ((rtb_VM_Conditional_Signal_BPCM_Comm_0 ||
            (BRDR_ac_DW.UnitDelay_DSTATE_dx)) || (BRDR_ac_DW.UnitDelay1_DSTATE_k))
    {
        /* Switch: '<S320>/Switch1' incorporates:
         *  Constant: '<S320>/Constant Value2'
         */
        VeBRDR_Cnt_HV_BTOS_FailCnt = 0U;

        /* Switch: '<S321>/Switch1' incorporates:
         *  Constant: '<S321>/Constant Value2'
         */
        VeBRDR_Cnt_HV_BTOS_SmpCnt = 0U;
    }
    else
    {
        if (rtb_RelationalOperator_b && ((VeBRDR_b_BTOSFlt_Sym) &&
                (KeBRDR_b_HV_BTOS_Flt)))
        {
            /* Switch: '<S320>/Switch1' incorporates:
             *  Constant: '<S320>/Constant Value1'
             *  Sum: '<S320>/Subtraction'
             *  Switch: '<S320>/Switch2'
             *  UnitDelay: '<S320>/Unit Delay'
             */
            VeBRDR_Cnt_HV_BTOS_FailCnt = (uint16)(((uint32)
                VeBRDR_Cnt_HV_BTOS_FailCnt) + 1U);
        }

        /* Switch: '<S321>/Switch2' */
        if (rtb_RelationalOperator_b)
        {
            /* Switch: '<S321>/Switch1' incorporates:
             *  Constant: '<S321>/Constant Value1'
             *  Sum: '<S321>/Subtraction'
             *  Switch: '<S321>/Switch2'
             *  UnitDelay: '<S321>/Unit Delay'
             */
            VeBRDR_Cnt_HV_BTOS_SmpCnt = (uint16)(((uint32)
                VeBRDR_Cnt_HV_BTOS_SmpCnt) + 1U);
        }

        /* End of Switch: '<S321>/Switch2' */
    }

    /* End of Switch: '<S320>/Switch1' */
    /* End of Outputs for SubSystem: '<S313>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S313>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S313>/Greater Than or Equal ' incorporates:
     *  Constant: '<S306>/Calib'
     */
    BRDR_ac_DW.UnitDelay1_DSTATE_k = (VeBRDR_Cnt_HV_BTOS_FailCnt >=
        KeBRDR_Cnt_HV_BTOS_FailCnt);

    /* Logic: '<S313>/NOT5' incorporates:
     *  Constant: '<S307>/Calib'
     *  Logic: '<S313>/NOT3'
     *  RelationalOperator: '<S313>/Less Than  or Equal'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_dx = ((VeBRDR_Cnt_HV_BTOS_SmpCnt >=
        KeBRDR_Cnt_HV_BTOS_SmpCnt) && (!BRDR_ac_DW.UnitDelay1_DSTATE_k));

    /* Switch: '<S326>/Switch1' incorporates:
     *  Constant: '<S319>/Constant Value'
     *  DataStoreWrite: '<S304>/Data Store Write3'
     *  Switch: '<S325>/Switch1'
     */
    if (VeBRDR_b_ResetFOMs)
    {
        BRDR_ac_DW.NeBRDR_Cnt_HV_BTOS_MFOP = 0U;
    }
    else
    {
        if (BRDR_ac_DW.UnitDelay_DSTATE_dx)
        {
            /* MinMax: '<S319>/Minimum2' incorporates:
             *  DataStoreRead: '<S304>/Data Store Read1'
             *  Switch: '<S325>/Switch1'
             */
            if (VeBRDR_Cnt_HV_BTOS_FailCnt > BRDR_ac_DW.NeBRDR_Cnt_HV_BTOS_MFOP)
            {
                /* DataStoreWrite: '<S304>/Data Store Write3' incorporates:
                 *  Switch: '<S325>/Switch1'
                 */
                BRDR_ac_DW.NeBRDR_Cnt_HV_BTOS_MFOP = VeBRDR_Cnt_HV_BTOS_FailCnt;
            }

            /* End of MinMax: '<S319>/Minimum2' */
        }
    }

    /* End of Switch: '<S326>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S311>/Fail' */
    BRDR_ac_Fail(BRDR_ac_DW.UnitDelay1_DSTATE_k,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_b);

    /* End of Outputs for SubSystem: '<S311>/Fail' */

    /* Outputs for Enabled SubSystem: '<S311>/Init' */
    BRDR_ac_Init_e(rtb_VM_Conditional_Signal_BPCM_Comm_0,
                   &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_b);

    /* End of Outputs for SubSystem: '<S311>/Init' */

    /* Outputs for Enabled SubSystem: '<S311>/Pass' */
    BRDR_ac_Pass(BRDR_ac_DW.UnitDelay_DSTATE_dx,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_b);

    /* End of Outputs for SubSystem: '<S311>/Pass' */

    /* VariantMerge generated from: '<S84>/b_HV_BTOS_FltDtct' incorporates:
     *  Constant: '<S315>/Constant'
     *  RelationalOperator: '<S311>/Relational Operator'
     *  VariantMerge generated from: '<S84>/VeBRDR_e_FaultSts_CoolOutTempSnsCkt'
     */
    VeBRDR_b_HV_BTOS_FltDtct_BD = (((uint32)
        BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_b) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S84>/If_BTOS_DTC' */
#else

    /* Outputs for Atomic SubSystem: '<S84>/Else_Stub_DTC' */
    /* VariantMerge generated from: '<S84>/VeBRDR_e_FaultSts_CoolOutTempSnsCkt' incorporates:
     *  Constant: '<S305>/Constant'
     */
    BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_b = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S84>/b_HV_BTOS_FltDtct' incorporates:
     *  Constant: '<S303>/FALSE Constant2'
     */
    VeBRDR_b_HV_BTOS_FltDtct_BD = false;

    /* End of Outputs for SubSystem: '<S84>/Else_Stub_DTC' */
#endif

    /* End of Outputs for SubSystem: '<S9>/BTOS_RatDiag' */

    /* Switch: '<S527>/Switch1' incorporates:
     *  Constant: '<S513>/Constant Value'
     *  Constant: '<S513>/Constant Value1'
     *  Constant: '<S513>/Constant Value3'
     *  Logic: '<S513>/Logical Operator'
     *  RelationalOperator: '<S513>/Comparison1'
     *  RelationalOperator: '<S513>/Comparison2'
     *  RelationalOperator: '<S513>/Comparison4'
     *  UnitDelay: '<S527>/Unit Delay'
     */
    tmp[0] = VeBRDR_b_S1_Rat_DTC_Enbl;
    tmp[1] = VeBRDR_b_S1_Rat_Flt;
    if (((((sint32)VeBRDR_i_SnsrSel) == 1) || (((sint32)VeBRDR_i_SnsrSel) == 2))
        || (((sint32)VeBRDR_i_SnsrSel) == 4))
    {
        for (rtb_Logical_d_tmp = 0; rtb_Logical_d_tmp < 2; rtb_Logical_d_tmp++)
        {
            BRDR_ac_DW.UnitDelay_DSTATE_m[rtb_Logical_d_tmp] =
                tmp[rtb_Logical_d_tmp];
        }
    }

    /* End of Switch: '<S527>/Switch1' */

    /* Logic: '<S327>/Logical Operator1' incorporates:
     *  Logic: '<S327>/Logical Operator12'
     *  UnitDelay: '<S527>/Unit Delay'
     */
    VeBRDR_b_LTAP_TmpDiagEnbl = ((rtb_VariantMerge_For_Variant_Source_V__0 &&
        (BRDR_ac_DW.UnitDelay_DSTATE_m[0])) || (VeBRDR_b_LTAPTmpFA_Enbl));

    /* VariantMerge generated from: '<S11>/Variant Source2' incorporates:
     *  Constant: '<S350>/Calib'
     *  Logic: '<S336>/Logical Operator1'
     */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = ((KeBRDR_b_LTAP_FA_FltCndsEnbl) &&
        rtb_LogicalOperator2_my);

    /* Logic: '<S336>/Logical Operator' incorporates:
     *  UnitDelay: '<S527>/Unit Delay'
     */
    VeBRDR_b_LTAPFlt_Sym = ((BRDR_ac_DW.UnitDelay_DSTATE_m[1]) ||
                            (VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD));

    /* Outputs for Atomic SubSystem: '<S9>/LTAP_RatDiag' */
#if Rte_SysCon_Variant_BRDR_8

    /* Outputs for Atomic SubSystem: '<S87>/If_LTAP_DTC' */
    /* RelationalOperator: '<S542>/Relational Operator3' incorporates:
     *  Constant: '<S542>/Constant3'
     *  DataStoreRead: '<S543>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  S-Function (sfix_bitop): '<S542>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_V__0 = ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S542>/EdgeFalling1' */
    /* Logic: '<S542>/Logical Operator' incorporates:
     *  Logic: '<S545>/OR1'
     */
    rtb_RelationalOperator_b = !rtb_VariantMerge_For_Variant_Source_V__0;

    /* End of Outputs for SubSystem: '<S542>/EdgeFalling1' */

    /* Logic: '<S542>/Logical1' incorporates:
     *  Constant: '<S539>/Calib'
     *  Constant: '<S541>/Calib'
     *  Constant: '<S542>/Constant1'
     *  DataStoreRead: '<S543>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  Logic: '<S535>/AND1'
     *  Logic: '<S542>/Logical Operator'
     *  Logic: '<S542>/Logical10'
     *  Logic: '<S542>/Logical12'
     *  RelationalOperator: '<S542>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S542>/Bitwise Operator3'
     */
    rtb_LogicalOperator2_my = (((VeBRDR_b_LTAP_TmpDiagEnbl) &&
        (KeBRDR_b_LTAP_XYEnbl)) && ((!KeBRDR_b_BattCoolPmpATempSnsrPerf_LtchEnbl)
        || (((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 1U) ==
             0U) || rtb_RelationalOperator_b)));

    /* Outputs for Atomic SubSystem: '<S542>/EdgeFalling1' */
    /* Logic: '<S545>/AND' incorporates:
     *  UnitDelay: '<S545>/Unit Delay'
     */
    rtb_RelationalOperator_b = (rtb_RelationalOperator_b &&
        (BRDR_ac_DW.UnitDelay_DSTATE_bn));

    /* Update for UnitDelay: '<S545>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_bn = rtb_VariantMerge_For_Variant_Source_V__0;

    /* End of Outputs for SubSystem: '<S542>/EdgeFalling1' */

    /* Logic: '<S542>/Logical5' */
    rtb_VariantMerge_For_Variant_Source_V__0 = ((VeBRDR_b_ResetCnts) ||
        rtb_RelationalOperator_b);

    /* Outputs for Atomic SubSystem: '<S544>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S544>/Counter Reset  Enabled ' */
    /* Switch: '<S551>/Switch1' incorporates:
     *  Constant: '<S540>/Calib'
     *  Logic: '<S535>/AND3'
     *  Logic: '<S544>/Fail Counter Reset'
     *  Logic: '<S544>/NOT6'
     *  Switch: '<S551>/Switch2'
     *  Switch: '<S552>/Switch1'
     *  UnitDelay: '<S544>/Unit Delay'
     *  UnitDelay: '<S544>/Unit Delay1'
     */
    if ((rtb_VariantMerge_For_Variant_Source_V__0 ||
            (BRDR_ac_DW.UnitDelay_DSTATE_hz)) || (BRDR_ac_DW.UnitDelay1_DSTATE_a))
    {
        /* Switch: '<S551>/Switch1' incorporates:
         *  Constant: '<S551>/Constant Value2'
         */
        VeBRDR_Cnt_LTAP_FailCnt = 0U;

        /* Switch: '<S552>/Switch1' incorporates:
         *  Constant: '<S552>/Constant Value2'
         */
        VeBRDR_Cnt_LTAP_SmpCnt = 0U;
    }
    else
    {
        if (rtb_LogicalOperator2_my && ((VeBRDR_b_LTAPFlt_Sym) &&
                (KeBRDR_b_LTAP_Flt)))
        {
            /* Switch: '<S551>/Switch1' incorporates:
             *  Constant: '<S551>/Constant Value1'
             *  Sum: '<S551>/Subtraction'
             *  Switch: '<S551>/Switch2'
             *  UnitDelay: '<S551>/Unit Delay'
             */
            VeBRDR_Cnt_LTAP_FailCnt = (uint16)(((uint32)VeBRDR_Cnt_LTAP_FailCnt)
                + 1U);
        }

        /* Switch: '<S552>/Switch2' */
        if (rtb_LogicalOperator2_my)
        {
            /* Switch: '<S552>/Switch1' incorporates:
             *  Constant: '<S552>/Constant Value1'
             *  Sum: '<S552>/Subtraction'
             *  Switch: '<S552>/Switch2'
             *  UnitDelay: '<S552>/Unit Delay'
             */
            VeBRDR_Cnt_LTAP_SmpCnt = (uint16)(((uint32)VeBRDR_Cnt_LTAP_SmpCnt) +
                1U);
        }

        /* End of Switch: '<S552>/Switch2' */
    }

    /* End of Switch: '<S551>/Switch1' */
    /* End of Outputs for SubSystem: '<S544>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S544>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S544>/Greater Than or Equal ' incorporates:
     *  Constant: '<S537>/Calib'
     */
    BRDR_ac_DW.UnitDelay1_DSTATE_a = (VeBRDR_Cnt_LTAP_FailCnt >=
        KeBRDR_Cnt_LTAP_FailCnt);

    /* Logic: '<S544>/NOT5' incorporates:
     *  Constant: '<S538>/Calib'
     *  Logic: '<S544>/NOT3'
     *  RelationalOperator: '<S544>/Less Than  or Equal'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_hz = ((VeBRDR_Cnt_LTAP_SmpCnt >=
        KeBRDR_Cnt_LTAP_SmpCnt) && (!BRDR_ac_DW.UnitDelay1_DSTATE_a));

    /* Switch: '<S557>/Switch1' incorporates:
     *  Constant: '<S550>/Constant Value'
     *  DataStoreWrite: '<S535>/Data Store Write3'
     *  Switch: '<S556>/Switch1'
     */
    if (VeBRDR_b_ResetFOMs)
    {
        BRDR_ac_DW.NeBRDR_Cnt_LTAP_MFOP = 0U;
    }
    else
    {
        if (BRDR_ac_DW.UnitDelay_DSTATE_hz)
        {
            /* MinMax: '<S550>/Minimum2' incorporates:
             *  DataStoreRead: '<S535>/Data Store Read1'
             *  Switch: '<S556>/Switch1'
             */
            if (VeBRDR_Cnt_LTAP_FailCnt > BRDR_ac_DW.NeBRDR_Cnt_LTAP_MFOP)
            {
                /* DataStoreWrite: '<S535>/Data Store Write3' incorporates:
                 *  Switch: '<S556>/Switch1'
                 */
                BRDR_ac_DW.NeBRDR_Cnt_LTAP_MFOP = VeBRDR_Cnt_LTAP_FailCnt;
            }

            /* End of MinMax: '<S550>/Minimum2' */
        }
    }

    /* End of Switch: '<S557>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S542>/Fail' */
    BRDR_ac_Fail(BRDR_ac_DW.UnitDelay1_DSTATE_a,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_h);

    /* End of Outputs for SubSystem: '<S542>/Fail' */

    /* Outputs for Enabled SubSystem: '<S542>/Init' */
    BRDR_ac_Init_e(rtb_VariantMerge_For_Variant_Source_V__0,
                   &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_h);

    /* End of Outputs for SubSystem: '<S542>/Init' */

    /* Outputs for Enabled SubSystem: '<S542>/Pass' */
    BRDR_ac_Pass(BRDR_ac_DW.UnitDelay_DSTATE_hz,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_h);

    /* End of Outputs for SubSystem: '<S542>/Pass' */

    /* VariantMerge generated from: '<S87>/b_LTAP_TmpFltDtct' incorporates:
     *  Constant: '<S546>/Constant'
     *  RelationalOperator: '<S542>/Relational Operator'
     *  VariantMerge generated from: '<S87>/VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf'
     */
    VeBRDR_b_LTAP_TmpFltDtct_BD = (((uint32)
        BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_h) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S87>/If_LTAP_DTC' */
#else

    /* Outputs for Atomic SubSystem: '<S87>/Else_Stub_DTC' */
    /* VariantMerge generated from: '<S87>/VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf' incorporates:
     *  Constant: '<S536>/Constant'
     */
    BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_h = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S87>/b_LTAP_TmpFltDtct' incorporates:
     *  Constant: '<S534>/FALSE Constant2'
     */
    VeBRDR_b_LTAP_TmpFltDtct_BD = false;

    /* End of Outputs for SubSystem: '<S87>/Else_Stub_DTC' */
#endif

    /* End of Outputs for SubSystem: '<S9>/LTAP_RatDiag' */

    /* Logic: '<S1086>/Logical2' */
#if (Rte_SysCon_Variant_BRDR_19 && Rte_SysCon_Variant_BRDR_3) || (Rte_SysCon_Variant_BRDR_21 && Rte_SysCon_Variant_BRDR_3)

    /* VariantMerge generated from: '<S11>/Variant Source2' */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = (rtb_TmpSignalConversionAtVeTMIR_b_MainRl &&
        rtb_LeBRDR_b_MainRelayOK);

#endif

    /* End of Logic: '<S1086>/Logical2' */

    /* Logic: '<S1087>/Logical2' incorporates:
     *  Logic: '<S1087>/Logical1'
     */
#if (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_19) || (!Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_21)

    /* VariantMerge generated from: '<S11>/Variant Source2' incorporates:
     *  Constant: '<S1088>/Calib'
     */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = ((rtb_TmpSignalConversionAtVePMTR_b_ThrmlS ||
        (KeBRDR_b_ThermalSysChkDsbl)) && rtb_LeBRDR_b_ThrmlRlyCtrlCkt);

#endif

    /* End of Logic: '<S1087>/Logical2' */

    /* SignalConversion generated from: '<S560>/Variant Source9' */
#if Rte_SysCon_Variant_BRDR_19 || Rte_SysCon_Variant_BRDR_21

    /* SignalConversion generated from: '<S560>/Variant Source9' */
    rtb_LeBRDR_b_ChillerHeat_RelayOK = VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD;

#endif

    /* End of SignalConversion generated from: '<S560>/Variant Source9' */

    /* Outputs for Atomic SubSystem: '<S10>/Chiller_PerfDiag' */
#if Rte_SysCon_Variant_BRDR_19

    /* Outputs for Atomic SubSystem: '<S558>/If_Chiller_PerfDiag' */
    /* Outputs for Atomic SubSystem: '<S562>/PassiveCooling' */
    /* Outputs for Atomic SubSystem: '<S570>/If_PassiveCooling' */
    /* S-Function (sfix_bitop): '<S619>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S619>/StatusByte_BattCoolLvlLow'
     *  S-Function (sfix_bitop): '<S727>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S802>/Bitwise Operator2'
     */
    rtb_Logical_d_tmp = ((sint32)BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 1;

    /* S-Function (sfix_bitop): '<S619>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S619>/StatusByte_BattCoolLvlLow'
     *  S-Function (sfix_bitop): '<S727>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S802>/Bitwise Operator1'
     */
    tmpRead_b = ((uint32)BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 64U;

    /* End of Outputs for SubSystem: '<S570>/If_PassiveCooling' */
    /* End of Outputs for SubSystem: '<S562>/PassiveCooling' */

    /* S-Function (sfix_bitop): '<S614>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S614>/StatusByte_AC_RefrigPresSnsrAPerf'
     *  S-Function (sfix_bitop): '<S726>/Bitwise Operator2'
     */
    rtb_Logical_d_tmp_0 = ((sint32)BRDR_ac_DW.StatusByte_AC_RefrigPresSnsrAPerf)
        & 1;

    /* S-Function (sfix_bitop): '<S614>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S614>/StatusByte_AC_RefrigPresSnsrAPerf'
     *  S-Function (sfix_bitop): '<S726>/Bitwise Operator1'
     */
    rtb_Logical_d_tmp_1 = ((uint32)BRDR_ac_DW.StatusByte_AC_RefrigPresSnsrAPerf)
        & 64U;

    /* S-Function (sfix_bitop): '<S609>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S609>/StatusByte_LostCommEAC'
     *  S-Function (sfix_bitop): '<S736>/Bitwise Operator2'
     */
    rtb_Logical_d_tmp_2 = ((sint32)BRDR_ac_DW.StatusByte_LostCommEAC) & 1;

    /* S-Function (sfix_bitop): '<S609>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S609>/StatusByte_LostCommEAC'
     *  S-Function (sfix_bitop): '<S736>/Bitwise Operator1'
     */
    rtb_Logical_d_tmp_3 = ((uint32)BRDR_ac_DW.StatusByte_LostCommEAC) & 64U;

    /* S-Function (sfix_bitop): '<S608>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S608>/StatusByte_EACPerf'
     *  S-Function (sfix_bitop): '<S733>/Bitwise Operator2'
     */
    rtb_Logical_d_tmp_4 = ((sint32)BRDR_ac_DW.StatusByte_EACPerf) & 1;

    /* S-Function (sfix_bitop): '<S608>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S608>/StatusByte_EACPerf'
     *  S-Function (sfix_bitop): '<S733>/Bitwise Operator1'
     */
    rtb_Logical_d_tmp_5 = ((uint32)BRDR_ac_DW.StatusByte_EACPerf) & 64U;

    /* Outputs for Atomic SubSystem: '<S562>/PassiveCooling' */
    /* Outputs for Atomic SubSystem: '<S570>/If_PassiveCooling' */
    /* Logic: '<S597>/Logical' incorporates:
     *  Logic: '<S769>/Logical'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_MainRl =
        (rtb_VeBRDR_b_IsDiagGlobalConditionsValid &&
         rtb_LeBRDR_b_ChillerHeat_RelayOK);

    /* End of Outputs for SubSystem: '<S570>/If_PassiveCooling' */
    /* End of Outputs for SubSystem: '<S562>/PassiveCooling' */

    /* Logic: '<S597>/Logical' incorporates:
     *  Constant: '<S607>/Constant'
     *  Constant: '<S608>/Constant1'
     *  Constant: '<S608>/Constant2'
     *  Constant: '<S609>/Constant1'
     *  Constant: '<S609>/Constant2'
     *  Constant: '<S610>/Calib'
     *  Constant: '<S611>/Calib'
     *  Constant: '<S614>/Constant1'
     *  Constant: '<S614>/Constant2'
     *  Constant: '<S615>/Calib'
     *  Constant: '<S616>/Calib'
     *  Constant: '<S617>/Calib'
     *  Constant: '<S618>/Calib'
     *  Constant: '<S619>/Constant1'
     *  Constant: '<S619>/Constant2'
     *  Constant: '<S620>/Constant1'
     *  Constant: '<S620>/Constant2'
     *  Constant: '<S621>/Calib'
     *  Constant: '<S622>/Calib'
     *  Constant: '<S623>/Calib'
     *  Constant: '<S624>/Calib'
     *  DataStoreRead: '<S620>/StatusByte_BattCoolPmpOveSpd'
     *  Logic: '<S597>/Logical17'
     *  Logic: '<S597>/Logical18'
     *  Logic: '<S597>/Logical21'
     *  Logic: '<S597>/Logical22'
     *  Logic: '<S605>/Logical Operator'
     *  Logic: '<S605>/Logical14'
     *  Logic: '<S605>/Logical15'
     *  Logic: '<S605>/Logical20'
     *  Logic: '<S605>/Logical6'
     *  Logic: '<S605>/Logical8'
     *  Logic: '<S606>/Logical Operator'
     *  Logic: '<S606>/Logical1'
     *  Logic: '<S606>/Logical2'
     *  Logic: '<S606>/Logical3'
     *  Logic: '<S606>/Logical6'
     *  Logic: '<S608>/Logical Operator'
     *  Logic: '<S609>/Logical Operator'
     *  Logic: '<S612>/Logical1'
     *  Logic: '<S612>/Logical2'
     *  Logic: '<S612>/Logical23'
     *  Logic: '<S612>/Logical27'
     *  Logic: '<S612>/Logical28'
     *  Logic: '<S613>/Logical10'
     *  Logic: '<S613>/Logical25'
     *  Logic: '<S613>/Logical26'
     *  Logic: '<S613>/Logical4'
     *  Logic: '<S614>/Logical Operator'
     *  Logic: '<S619>/Logical Operator'
     *  Logic: '<S620>/Logical Operator'
     *  RelationalOperator: '<S597>/Comparison2'
     *  RelationalOperator: '<S608>/Relational Operator1'
     *  RelationalOperator: '<S608>/Relational Operator2'
     *  RelationalOperator: '<S609>/Relational Operator1'
     *  RelationalOperator: '<S609>/Relational Operator2'
     *  RelationalOperator: '<S614>/Relational Operator1'
     *  RelationalOperator: '<S614>/Relational Operator2'
     *  RelationalOperator: '<S619>/Relational Operator1'
     *  RelationalOperator: '<S619>/Relational Operator2'
     *  RelationalOperator: '<S620>/Relational Operator1'
     *  RelationalOperator: '<S620>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S608>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S608>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S609>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S609>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S614>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S614>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S619>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S619>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeCPDR_b_LTAP_F =
        ((((((((rtb_TmpSignalConversionAtVeTMIR_b_MainRl &&
                ((rtb_TmpSignalConversionAtVeCPDR_b_LTAP_F ||
                  (KeBRDR_b_Dsbl_LTAPPerfEnbl_CoolPerf)) &&
                 ((!rtb_VeBRDR_b_LTAPFunPerFltDtct_AD) ||
                  (KeBRDR_b_LTAPFltDtctDsbl)))) && (((uint32)
                 rtb_TmpSignalConversionAtVeTHMR_e_BatThr) ==
                CeTHMR_e_ActiveCooling)) && ((((rtb_Logical_d_tmp_0 <= 0) ||
                 (rtb_Logical_d_tmp_1 != 0U)) || (KeBRDR_b_PressSnsr_FltDsbl)) &&
               (((!rtb_VariantMerge_For_Variant_Source_Va_c) &&
                 (!rtb_VariantMerge_For_Variant_Source_Va_f)) ||
                (KeBRDR_b_PressSnsr_BaseDTCDsbl)))) && (((rtb_Logical_d_tmp_4 <=
                0) || (rtb_Logical_d_tmp_5 != 0U)) || (KeBRDR_b_EACPerfDsbl))) &&
            (((rtb_Logical_d_tmp_2 <= 0) || (rtb_Logical_d_tmp_3 != 0U)) ||
             (KeBRDR_b_EACLosCommDsbl))) && (((((((sint32)
                 BRDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 1) <= 0) ||
              ((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 64U) != 0U))
             || (KeBRDR_b_LTAP_DryRunDsbl_ActvCool)) && (((rtb_Logical_d_tmp <=
               0) || (tmpRead_b != 0U)) || (KeBRDR_b_Dsbl_BatClntLo_ActvCool))))
          && (((!rtb_VariantMerge_For_Variant_Source_V_fx) ||
               (KeBRDR_b_Vlv1CktLoDsbl_CoolPerf)) &&
              ((!rtb_VariantMerge_For_Variant_Source_V_hw) ||
               (KeBRDR_b_Vlv1CktHiDsbl_CoolPerf)))) && (VeBRDR_b_BPCM_NoCommErr));

    /* Outputs for Atomic SubSystem: '<S599>/Signal Latch On With Reset' */
    /* S-Function (sfix_bitop): '<S668>/Bitwise Operator2' incorporates:
     *  Logic: '<S599>/Logical Operator'
     *  Logic: '<S599>/Logical1'
     *  Logic: '<S599>/Logical11'
     *  Logic: '<S599>/Logical2'
     *  Logic: '<S599>/Logical3'
     *  Logic: '<S599>/Logical32'
     *  Logic: '<S599>/Logical4'
     *  Logic: '<S599>/Logical5'
     *  Logic: '<S666>/AND'
     *  Logic: '<S667>/Logical Operator'
     *  Logic: '<S668>/Logical Operator'
     *  Logic: '<S669>/Logical Operator'
     *  Logic: '<S670>/Logical Operator'
     *  RelationalOperator: '<S599>/Comparison2'
     *  RelationalOperator: '<S667>/Relational Operator1'
     *  RelationalOperator: '<S667>/Relational Operator2'
     *  RelationalOperator: '<S668>/Relational Operator1'
     *  RelationalOperator: '<S668>/Relational Operator2'
     *  RelationalOperator: '<S669>/Relational Operator1'
     *  RelationalOperator: '<S669>/Relational Operator2'
     *  RelationalOperator: '<S670>/Relational Operator1'
     *  RelationalOperator: '<S670>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S667>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S667>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S668>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S669>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S669>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S670>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S670>/Bitwise Operator2'
     *  UnitDelay: '<S599>/Unit Delay'
     *  UnitDelay: '<S672>/Unit Delay'
     */
#if Rte_SysCon_Variant_BRDR_3

    /* Logic: '<S599>/Logical11' incorporates:
     *  Constant: '<S668>/Constant1'
     *  Constant: '<S668>/Constant2'
     *  DataStoreRead: '<S668>/StatusByte_LIN1_BusOff'
     */
    rtb_VeBRDR_b_LTAPFunPerFltDtct_AD = (((((sint32)
        BRDR_ac_DW.StatusByte_LIN1_BusOff) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) != 0U));

    /* Logic: '<S599>/Logical1' incorporates:
     *  Constant: '<S670>/Constant1'
     *  Constant: '<S670>/Constant2'
     *  DataStoreRead: '<S670>/StatusByte_LostCommHB_CoolPmp'
     */
    rtb_LeBRDR_b_ThrmlRlyCtrlCkt = (((((sint32)
        BRDR_ac_DW.StatusByte_LostCommHB_CoolPmp) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_LostCommHB_CoolPmp) & 64U) != 0U));

    /* Logic: '<S599>/Logical2' incorporates:
     *  Constant: '<S667>/Constant1'
     *  Constant: '<S667>/Constant2'
     *  DataStoreRead: '<S667>/StatusByte_HB_CT_SnsrPerf'
     */
    rtb_LeBRDR_b_MainRelayOK = (((((sint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf)
        & 1) <= 0) || ((((uint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) !=
                       0U));

    /* Logic: '<S599>/Logical3' */
    rtb_VariantMerge_For_Variant_Source_V__0 =
        !rtb_VariantMerge_For_Variant_Source_V_cw;

    /* Logic: '<S599>/Logical4' */
    rtb_LogicalOperator2_my = !rtb_VariantMerge_For_Variant_Source_Va_a;

    /* Logic: '<S599>/Logical5' incorporates:
     *  Constant: '<S669>/Constant1'
     *  Constant: '<S669>/Constant2'
     *  DataStoreRead: '<S669>/StatusByte_LIN3_BusOff'
     */
    rtb_RelationalOperator_b = (((((sint32)BRDR_ac_DW.StatusByte_LIN3_BusOff) &
        1) <= 0) || ((((uint32)BRDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) != 0U));

    /* Logic: '<S628>/Logical2' incorporates:
     *  UnitDelay: '<S672>/Unit Delay'
     */
    rtb_Logical2_cs = BRDR_ac_DW.UnitDelay_DSTATE_if;

    /* Logic: '<S672>/OR1' incorporates:
     *  Constant: '<S671>/Calib'
     *  Logic: '<S672>/OR'
     *  UnitDelay: '<S672>/Unit Delay'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_if = ((rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat >
        KeBRDR_T_BatClntTmp_In) || ((BRDR_ac_DW.UnitDelay_DSTATE_c3w) &&
        (BRDR_ac_DW.UnitDelay_DSTATE_if)));
    BRDR_ac_DW.UnitDelay_DSTATE_c3w = (((((((rtb_VeBRDR_b_LTAPFunPerFltDtct_AD &&
        rtb_LeBRDR_b_ThrmlRlyCtrlCkt) && rtb_LeBRDR_b_MainRelayOK) &&
        rtb_VariantMerge_For_Variant_Source_V__0) && rtb_LogicalOperator2_my) &&
        rtb_RelationalOperator_b) && rtb_TmpSignalConversionAtVeCPDR_b_LTAP_F) &&
        (BRDR_ac_DW.UnitDelay_DSTATE_if));

    /* Logic: '<S572>/Logical Operator' incorporates:
     *  UnitDelay: '<S672>/Unit Delay'
     */
    rtb_LogicalOperator_ig = BRDR_ac_DW.UnitDelay_DSTATE_c3w;

#endif

    /* End of S-Function (sfix_bitop): '<S668>/Bitwise Operator2' */
    /* End of Outputs for SubSystem: '<S599>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S600>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S689>/Timer Retrigger Reset Enabled2' */
    /* Outputs for Atomic SubSystem: '<S689>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S695>/EdgeRising2' */
    /* Chart: '<S695>/Stateflow Chart1' incorporates:
     *  Constant: '<S674>/Constant1'
     *  Constant: '<S674>/Constant2'
     *  Constant: '<S675>/Constant1'
     *  Constant: '<S675>/Constant2'
     *  Constant: '<S676>/Calib'
     *  Constant: '<S680>/Calib'
     *  Constant: '<S681>/Calib'
     *  Constant: '<S682>/Calib'
     *  Constant: '<S683>/Calib'
     *  Constant: '<S684>/Calib'
     *  Constant: '<S685>/Calib'
     *  Constant: '<S687>/Calib'
     *  DataStoreRead: '<S674>/StatusByte_CoolOutTempSnsCkt'
     *  DataStoreRead: '<S675>/StatusByte_HB_CT_SnsrPerf'
     *  Inport: '<Root>/VeAATR_b_EstAmbAirTempFA'
     *  Inport: '<Root>/VeBPCR_I_HV_BatCurr'
     *  Logic: '<S600>/Logical Operator'
     *  Logic: '<S600>/Logical10'
     *  Logic: '<S600>/Logical11'
     *  Logic: '<S600>/Logical14'
     *  Logic: '<S600>/Logical2'
     *  Logic: '<S600>/Logical23'
     *  Logic: '<S600>/Logical25'
     *  Logic: '<S600>/Logical27'
     *  Logic: '<S600>/Logical28'
     *  Logic: '<S600>/Logical29'
     *  Logic: '<S600>/Logical30'
     *  Logic: '<S600>/Logical31'
     *  Logic: '<S600>/Logical32'
     *  Logic: '<S600>/Logical6'
     *  Logic: '<S600>/Logical7'
     *  Logic: '<S600>/Logical8'
     *  Logic: '<S600>/Logical9'
     *  Logic: '<S673>/AND'
     *  Logic: '<S674>/Logical Operator'
     *  Logic: '<S675>/Logical Operator'
     *  Logic: '<S689>/Logical10'
     *  Logic: '<S689>/Logical2'
     *  RelationalOperator: '<S600>/Comparison1'
     *  RelationalOperator: '<S600>/Comparison2'
     *  RelationalOperator: '<S600>/Comparison3'
     *  RelationalOperator: '<S600>/Comparison4'
     *  RelationalOperator: '<S600>/Comparison5'
     *  RelationalOperator: '<S674>/Relational Operator1'
     *  RelationalOperator: '<S674>/Relational Operator2'
     *  RelationalOperator: '<S675>/Relational Operator1'
     *  RelationalOperator: '<S675>/Relational Operator2'
     *  RelationalOperator: '<S689>/Comparison1'
     *  S-Function (sfix_bitop): '<S674>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S674>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S675>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S675>/Bitwise Operator2'
     *  UnitDelay: '<S600>/Unit Delay'
     *  UnitDelay: '<S688>/Unit Delay'
     */
#if Rte_SysCon_Variant_BRDR_15

    /* Logic: '<S697>/AND' incorporates:
     *  Logic: '<S697>/OR1'
     *  UnitDelay: '<S697>/Unit Delay'
     */
    rtb_LogicalOperator_ig = !BRDR_ac_DW.UnitDelay_DSTATE_c02;

    /* Update for UnitDelay: '<S697>/Unit Delay' incorporates:
     *  Constant: '<S695>/TRUE Constant'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_c02 = true;

    /* Gateway: BRDR_MedTEH/Diagnostic/Chiller_and_HeatExchanger_Diag/Chiller_PerfDiag/If_Chiller_PerfDiag/ActiveCooling/Enable_conditions/EnableP1P4/Subsystem7/Summation/Stateflow
       Chart1 */
    /* During: BRDR_MedTEH/Diagnostic/Chiller_and_HeatExchanger_Diag/Chiller_PerfDiag/If_Chiller_PerfDiag/ActiveCooling/Enable_conditions/EnableP1P4/Subsystem7/Summation/Stateflow
       Chart1 */
    /* Entry Internal: BRDR_MedTEH/Diagnostic/Chiller_and_HeatExchanger_Diag/Chiller_PerfDiag/If_Chiller_PerfDiag/ActiveCooling/Enable_conditions/EnableP1P4/Subsystem7/Summation/Stateflow
       Chart1 */
    /* Transition: '<S698>:153' */
    if (rtb_LogicalOperator_ig)
    {
        /* Transition: '<S698>:169' */
        /* Transition: '<S698>:161' */
        BRDR_ac_B.n = 0;
        BRDR_ac_B.sum = 0.0F;

        /* Transition: '<S698>:174' */
    }
    else
    {
        /* Transition: '<S698>:173' */
    }

    /* Transition: '<S698>:175' */
    if (BRDR_ac_B.n >= KeBRDR_t_RMS_Sample)
    {
        /* Transition: '<S698>:154' */
        /* Transition: '<S698>:155' */
        VeBRDR_I_RMS_BattCurr = sqrtf(BRDR_ac_B.sum / ((float32)
            KeBRDR_t_RMS_Sample));
        BRDR_ac_B.n = 0;
        BRDR_ac_B.sum = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeBPCR_I_HV_BatCurr_Value(&tmpRead_5);

        /* Transition: '<S698>:157' */
        BRDR_ac_B.sum += tmpRead_5 * tmpRead_5;
        BRDR_ac_B.n++;
    }

    /* RelationalOperator: '<S689>/Comparison1' incorporates:
     *  Constant: '<S692>/Calib'
     *  Inport: '<Root>/VeBPCR_I_HV_BatCurr'
     */
    VeBRDR_b_RMS_BattCurrEnbl = (VeBRDR_I_RMS_BattCurr <
        KeBRDR_I_RMSCurrent_Threshold);

    /* Logic: '<S628>/Logical2' incorporates:
     *  UnitDelay: '<S690>/Unit Delay'
     */
    rtb_Logical2_cs = BRDR_ac_DW.UnitDelay_DSTATE_aw;

    /* Update for UnitDelay: '<S690>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_aw = VeBRDR_b_RMS_BattCurrEnbl;

    /* Switch: '<S696>/Switch1' incorporates:
     *  Constant: '<S694>/Calib'
     *  Logic: '<S690>/AND'
     *  Logic: '<S690>/OR1'
     *  Switch: '<S696>/Switch2'
     *  UnitDelay: '<S696>/Unit Delay'
     */
    if ((!VeBRDR_b_RMS_BattCurrEnbl) && rtb_Logical2_cs)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_h3 = KeBRDR_t_RMSCurrent;
    }
    else
    {
        if (VeBRDR_b_RMS_BattCurrEnbl)
        {
            /* UnitDelay: '<S696>/Unit Delay' incorporates:
             *  Constant: '<S691>/Calib'
             *  Constant: '<S696>/Constant Value4'
             *  MinMax: '<S696>/Maximum'
             *  Sum: '<S696>/Subtraction'
             *  Switch: '<S696>/Switch2'
             */
            BRDR_ac_DW.UnitDelay_DSTATE_h3 = fmaxf
                (BRDR_ac_DW.UnitDelay_DSTATE_h3 - HeBRDR_t_MedTEH, 0.0F);
        }
    }

    /* End of Switch: '<S696>/Switch1' */

    /* Logic: '<S689>/Logical10' incorporates:
     *  Constant: '<S693>/Calib'
     *  Constant: '<S696>/Constant Value2'
     *  RelationalOperator: '<S696>/Greater  Than1'
     *  UnitDelay: '<S696>/Unit Delay'
     */
    VeBRDR_b_RMSCurrent_EnblChk = ((BRDR_ac_DW.UnitDelay_DSTATE_h3 <= 0.0F) ||
        (KeBRDR_b_Dsbl_RMSCurrent));
    (void)Rte_Read_VeAATR_b_EstAmbAirTempFA_Value(&tmpRead_6);

    /* Logic: '<S628>/Logical2' incorporates:
     *  Inport: '<Root>/VeAATR_b_EstAmbAirTempFA'
     *  UnitDelay: '<S688>/Unit Delay'
     */
    rtb_Logical2_cs = BRDR_ac_DW.UnitDelay_DSTATE_kz;

    /* Logic: '<S688>/OR1' incorporates:
     *  Constant: '<S677>/Calib'
     *  Constant: '<S678>/Calib'
     *  Constant: '<S679>/Calib'
     *  Constant: '<S684>/Calib'
     *  Constant: '<S685>/Calib'
     *  Constant: '<S686>/Calib'
     *  Logic: '<S688>/OR'
     *  UnitDelay: '<S688>/Unit Delay'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_kz =
        (((((rtb_TmpSignalConversionAtVeBTRR_T_CellTe > KeBRDR_T_CellTempAvgUsed)
            || (KeBRDR_b_DsblCellTempAvg)) &&
           ((rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat > KeBRDR_T_BatClntTmp_In) ||
            (KeBRDR_b_DsblBTISDelta_CoolPerf))) &&
          ((rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j > KeBRDR_T_BatClntTmp_Out) ||
           (KeBRDR_b_DsblBTOSDelta_CoolPerf))) ||
         ((BRDR_ac_DW.UnitDelay_DSTATE_bb) && (BRDR_ac_DW.UnitDelay_DSTATE_kz)));
    BRDR_ac_DW.UnitDelay_DSTATE_bb = ((((((((VeBRDR_b_RMSCurrent_EnblChk) &&
        ((rtb_TmpSignalConversionAtVeAATR_T_EstAmb >
          KeBRDR_T_AmbientTemp_LowThresh) || (KeBRDR_b_DsblAmbientChk))) &&
        ((rtb_TmpSignalConversionAtVeBTRR_T_HV_Bat < KeBRDR_T_CellTempMax_Chk) ||
         (KeBRDR_b_DsblCellTempMaxChk))) && (((((((sint32)
        BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) != 0U)) ||
        (KeBRDR_b_DsblBTISDelta_CoolPerf)) && ((((((sint32)
        BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) != 0U)) ||
        (KeBRDR_b_DsblBTOSDelta_CoolPerf)))) && ((!tmpRead_6) ||
        (KeBRDR_b_ChillPerf_AmbFA_Ovrd))) &&
        ((!rtb_TmpSignalConversionAtVeBTRR_b_CellTe) ||
         (KeBRDR_b_ChillPerf_AvgTmpFA_Ovrd))) &&
        rtb_TmpSignalConversionAtVeCPDR_b_LTAP_F) &&
        (BRDR_ac_DW.UnitDelay_DSTATE_kz));

    /* Logic: '<S572>/Logical Operator' incorporates:
     *  Constant: '<S674>/Constant1'
     *  Constant: '<S674>/Constant2'
     *  Constant: '<S675>/Constant1'
     *  Constant: '<S675>/Constant2'
     *  Constant: '<S676>/Calib'
     *  Constant: '<S680>/Calib'
     *  Constant: '<S681>/Calib'
     *  Constant: '<S682>/Calib'
     *  Constant: '<S683>/Calib'
     *  Constant: '<S684>/Calib'
     *  Constant: '<S685>/Calib'
     *  Constant: '<S687>/Calib'
     *  DataStoreRead: '<S674>/StatusByte_CoolOutTempSnsCkt'
     *  DataStoreRead: '<S675>/StatusByte_HB_CT_SnsrPerf'
     *  UnitDelay: '<S688>/Unit Delay'
     */
    rtb_LogicalOperator_ig = BRDR_ac_DW.UnitDelay_DSTATE_bb;

#endif

    /* End of Chart: '<S695>/Stateflow Chart1' */
    /* End of Outputs for SubSystem: '<S695>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S689>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S689>/Timer Retrigger Reset Enabled2' */
    /* End of Outputs for SubSystem: '<S600>/Signal Latch On With Reset' */

    /* Logic: '<S641>/Logical4' incorporates:
     *  Inport: '<Root>/VeTAIR_n_CompSpdFdb'
     *  Logic: '<S627>/Logical'
     *  Logic: '<S627>/Logical Operator'
     *  Logic: '<S627>/Logical Operator1'
     *  Logic: '<S627>/Logical10'
     *  Logic: '<S633>/Logical1'
     *  Logic: '<S633>/Logical2'
     *  Logic: '<S633>/Logical3'
     *  Logic: '<S633>/Logical4'
     *  Logic: '<S633>/Logical5'
     *  Logic: '<S633>/Logical6'
     *  Logic: '<S634>/Logical23'
     *  Logic: '<S634>/Logical25'
     *  Logic: '<S634>/Logical26'
     *  Logic: '<S634>/Logical29'
     *  Logic: '<S635>/Logical1'
     *  Logic: '<S635>/Logical2'
     *  Logic: '<S635>/Logical3'
     *  Logic: '<S635>/Logical4'
     *  Logic: '<S635>/Logical5'
     *  Logic: '<S635>/Logical6'
     *  Logic: '<S636>/Logical1'
     *  Logic: '<S636>/Logical2'
     *  Logic: '<S636>/Logical3'
     *  Logic: '<S636>/Logical4'
     *  Logic: '<S636>/Logical5'
     *  Logic: '<S636>/Logical6'
     *  Logic: '<S641>/Logical1'
     *  Logic: '<S641>/Logical2'
     *  Logic: '<S641>/Logical3'
     *  Logic: '<S641>/Logical5'
     *  Logic: '<S641>/Logical6'
     *  Logic: '<S642>/Logical27'
     *  Logic: '<S642>/Logical28'
     *  Logic: '<S642>/Logical30'
     *  Logic: '<S642>/Logical31'
     *  RelationalOperator: '<S627>/Comparison4'
     *  RelationalOperator: '<S627>/Comparison5'
     *  RelationalOperator: '<S634>/Comparison3'
     *  RelationalOperator: '<S642>/Comparison1'
     *  Switch: '<S627>/Switch2'
     *  UnitDelay: '<S627>/Unit Delay'
     */
#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3

    /* Outputs for Atomic SubSystem: '<S627>/Signal Latch On With Reset' */
    (void)Rte_Read_VeTAIR_n_CompSpdFdb_Value(&tmpRead);

    /* Logic: '<S643>/OR1' incorporates:
     *  Constant: '<S637>/Calib'
     *  Inport: '<Root>/VeTAIR_n_CompSpdFdb'
     *  Logic: '<S643>/OR'
     *  UnitDelay: '<S643>/Unit Delay'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_id = ((rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat >
        KeBRDR_T_BatClntTmp_In) || ((BRDR_ac_DW.UnitDelay_DSTATE_oi) &&
        (BRDR_ac_DW.UnitDelay_DSTATE_id)));

    /* Logic: '<S628>/Logical2' incorporates:
     *  Constant: '<S639>/Calib'
     *  UnitDelay: '<S643>/Unit Delay'
     */
    rtb_Logical2_cs = ((!KeBRDR_b_Enbl_BTIS_ChillerPerf) ||
                       (BRDR_ac_DW.UnitDelay_DSTATE_id));

    /* Logic: '<S627>/Logical' incorporates:
     *  Constant: '<S638>/Calib'
     *  Constant: '<S640>/Calib'
     *  Constant: '<S644>/Calib'
     *  Constant: '<S645>/Calib'
     *  Constant: '<S646>/Constant'
     *  Constant: '<S647>/Calib'
     *  Constant: '<S648>/Calib'
     *  Constant: '<S649>/Calib'
     *  Constant: '<S650>/Calib'
     *  Constant: '<S651>/Calib'
     *  Constant: '<S652>/Calib'
     *  Constant: '<S653>/Calib'
     *  Constant: '<S654>/Calib'
     *  Constant: '<S655>/Constant'
     *  Constant: '<S656>/Calib'
     *  Constant: '<S657>/Calib'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC'
     */
    rtb_Logical_f = (((((((((((VeBRDR_b_LTAP_TmpDiagEnbl) ||
        (KeBRDR_b_Dsbl_LTAPEnbl_CoolPerf)) && (((!VeBRDR_b_LTAP_TmpFltDtct_BD) &&
        (!rtb_TmpSignalConversionAtVePMIR_b_LTActv)) ||
        (KeBRDR_b_LTAP_TmpFltDsbl))) && (((VeBRDR_b_BTIS_TmpDiagEnbl) ||
        (KeBRDR_b_Dsbl_BTISEnbl_CoolPerf)) && (((!VeBRDR_b_HV_BTIS_FltDtct_BD) &&
        (!rtb_TmpSignalConversionAtVeTRIR_b_HV_Bat)) ||
        (KeBRDR_b_BTIS_TmpFltDsbl)))) && (((VeBRDR_b_BTOS_TmpDiagEnbl) ||
        (KeBRDR_b_Dsbl_BTOSEnbl_CoolPerf)) && (((!VeBRDR_b_HV_BTOS_FltDtct_BD) &&
        (!rtb_TmpSignalConversionAtVeTRIR_b_HV_B_h)) ||
        (KeBRDR_b_BTOS_TmpFltDsbl)))) && (((VeBRDR_b_BHOS_TmpDiagEnbl) ||
                            (KeBRDR_b_Dsbl_BHOSEnbl_CoolPerf)) &&
                           (((!VeBRDR_b_HV_BHOS_FltDtct_BD) &&
        (!rtb_VeBRDR_b_BattHtr_ClntTempOut_FA)) || (KeBRDR_b_BHOS_TmpFltDsbl))))
                         && (((((uint32)rtb_VeBRDR_b_BPCM_LIN_LOC) ==
                            CeBPCR_e_LIN_BusOff_Disabled) ||
                           (KeBRDR_b_LINBusOff_ActvCool)) &&
                          ((!rtb_VeBRDR_b_BPCM_LIN_LOC_FA) ||
                           (KeBRDR_b_LINBusOffFA_ActvCool)))) && (((((uint32)
                            rtb_VeBRDR_b_LTAP_LOC) == CeBPCR_e_LOC_BCP_False) ||
                          (KeBRDR_b_LTAP_LOC_ActvCool)) &&
                         ((!rtb_VeBRDR_b_LTAP_LOC_FA) ||
                          (KeBRDR_b_LTAP_LOCFA_ActvCool)))) &&
                       rtb_TmpSignalConversionAtVeCPDR_b_LTAP_F) && ((tmpRead >=
                        KeBRDR_n_CompSpdTh_CoolPerfDiag) ||
                       (KeBRDR_b_DsblCompSpdChk))) && rtb_Logical2_cs);

    /* End of Outputs for SubSystem: '<S627>/Signal Latch On With Reset' */
#endif

    /* End of Logic: '<S641>/Logical4' */

    /* S-Function (sfix_bitop): '<S664>/Bitwise Operator2' incorporates:
     *  Inport: '<Root>/VeBTRR_dT_CellOverTemp'
     *  Inport: '<Root>/VeTAIR_Pct_EXV_PosAct'
     *  Logic: '<S628>/Logical1'
     *  Logic: '<S628>/Logical2'
     *  Logic: '<S628>/Logical23'
     *  Logic: '<S628>/Logical25'
     *  Logic: '<S628>/Logical26'
     *  Logic: '<S628>/Logical27'
     *  Logic: '<S628>/Logical3'
     *  Logic: '<S658>/Logical Operator'
     *  Logic: '<S664>/Logical Operator'
     *  Logic: '<S665>/Logical Operator'
     *  RelationalOperator: '<S628>/Comparison1'
     *  RelationalOperator: '<S628>/Comparison3'
     *  RelationalOperator: '<S658>/Relational Operator1'
     *  RelationalOperator: '<S658>/Relational Operator2'
     *  RelationalOperator: '<S664>/Relational Operator1'
     *  RelationalOperator: '<S664>/Relational Operator2'
     *  RelationalOperator: '<S665>/Relational Operator1'
     *  RelationalOperator: '<S665>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S658>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S658>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S664>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S665>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S665>/Bitwise Operator2'
     */
#if (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_16) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_17) || (!Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_18)

    (void)Rte_Read_VeTAIR_Pct_EXV_PosAct_Value(&tmpRead_9);
    (void)Rte_Read_VeBTRR_dT_CellOverTemp_Value(&tmpRead_a);

    /* Logic: '<S628>/Logical2' incorporates:
     *  Constant: '<S658>/Constant1'
     *  Constant: '<S658>/Constant2'
     *  Constant: '<S659>/Calib'
     *  Constant: '<S660>/Calib'
     *  Constant: '<S661>/Calib'
     *  Constant: '<S662>/Calib'
     *  Constant: '<S663>/Calib'
     *  Constant: '<S664>/Constant1'
     *  Constant: '<S664>/Constant2'
     *  Constant: '<S665>/Constant1'
     *  Constant: '<S665>/Constant2'
     *  DataStoreRead: '<S658>/StatusByte_AC_RefrigExpVlvActCtrCktPerf'
     *  DataStoreRead: '<S664>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S665>/StatusByte_LIN2_BusOff'
     *  Inport: '<Root>/VeBTRR_dT_CellOverTemp'
     *  Inport: '<Root>/VeTAIR_Pct_EXV_PosAct'
     */
    rtb_Logical2_cs = (((((((((uint32)BRDR_ac_DW.StatusByte_LIN1_BusOff) & 1U) ==
                            0U) || ((((uint32)BRDR_ac_DW.StatusByte_LIN1_BusOff)
        & 64U) != 0U)) && (((((uint32)BRDR_ac_DW.StatusByte_LIN2_BusOff) & 1U) ==
                            0U) || ((((uint32)BRDR_ac_DW.StatusByte_LIN2_BusOff)
        & 64U) != 0U))) && ((((((sint32)
        BRDR_ac_DW.StatusByte_AC_RefrigExpVlvActCtrCktPerf) & 1) <= 0) ||
                           ((((uint32)
        BRDR_ac_DW.StatusByte_AC_RefrigExpVlvActCtrCktPerf) & 64U) != 0U)) ||
                            (KeBRDR_b_DsblEXV_Perf))) && ((tmpRead_9 >
                          KeBRDR_Pct_EXV_OpenThreshold) ||
                         (KeBRDR_b_DsblEXV_PosAct))) && ((tmpRead_a >
                         KeBRDR_T_CellOverTemp) || (KeBRDR_b_DsblCellOverTemp)));

#endif

    /* End of S-Function (sfix_bitop): '<S664>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S598>/ArchitectureSelector' */
#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_16

    /* Switch: '<S699>/Switch' */
    rtb_Switch_a = rtb_Logical2_cs;

#endif

    /* End of SignalConversion generated from: '<S598>/ArchitectureSelector' */

    /* SignalConversion generated from: '<S598>/ArchitectureSelector' */
#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_17

    /* Switch: '<S699>/Switch' */
    rtb_Switch_a = rtb_Logical2_cs;

#endif

    /* End of SignalConversion generated from: '<S598>/ArchitectureSelector' */

    /* SignalConversion generated from: '<S598>/ArchitectureSelector' */
#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_18

    /* Switch: '<S699>/Switch' */
    rtb_Switch_a = rtb_Logical2_cs;

#endif

    /* End of SignalConversion generated from: '<S598>/ArchitectureSelector' */

    /* S-Function (sfix_bitop): '<S630>/Bitwise Operator2' incorporates:
     *  Logic: '<S626>/Logical Operator'
     *  Logic: '<S626>/Logical1'
     *  Logic: '<S626>/Logical11'
     *  Logic: '<S626>/Logical2'
     *  Logic: '<S626>/Logical23'
     *  Logic: '<S629>/Logical Operator'
     *  Logic: '<S630>/Logical Operator'
     *  Logic: '<S631>/Logical Operator'
     *  Logic: '<S632>/Logical Operator'
     *  RelationalOperator: '<S629>/Relational Operator1'
     *  RelationalOperator: '<S629>/Relational Operator2'
     *  RelationalOperator: '<S630>/Relational Operator1'
     *  RelationalOperator: '<S630>/Relational Operator2'
     *  RelationalOperator: '<S631>/Relational Operator1'
     *  RelationalOperator: '<S631>/Relational Operator2'
     *  RelationalOperator: '<S632>/Relational Operator1'
     *  RelationalOperator: '<S632>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S629>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S629>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S630>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S631>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S631>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S632>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S632>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_14

    /* Switch: '<S699>/Switch' incorporates:
     *  Constant: '<S629>/Constant1'
     *  Constant: '<S629>/Constant2'
     *  Constant: '<S630>/Constant1'
     *  Constant: '<S630>/Constant2'
     *  Constant: '<S631>/Constant1'
     *  Constant: '<S631>/Constant2'
     *  Constant: '<S632>/Constant1'
     *  Constant: '<S632>/Constant2'
     *  DataStoreRead: '<S629>/StatusByte_AC_RefrigExpVlvActCtrCktPerf'
     *  DataStoreRead: '<S630>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S631>/StatusByte_LIN3_BusOff'
     *  DataStoreRead: '<S632>/StatusByte_LostCommHB_CoolPmp'
     */
    rtb_Switch_a = ((((((((sint32)BRDR_ac_DW.StatusByte_LIN1_BusOff) & 1) <= 0) ||
                       ((((uint32)BRDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) !=
                        0U)) && (((((sint32)BRDR_ac_DW.StatusByte_LIN3_BusOff) &
                         1) <= 0) || ((((uint32)
                          BRDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) != 0U))) &&
                     (((((sint32)BRDR_ac_DW.StatusByte_LostCommHB_CoolPmp) & 1) <=
                       0) || ((((uint32)BRDR_ac_DW.StatusByte_LostCommHB_CoolPmp)
                        & 64U) != 0U))) && (((((sint32)
                        BRDR_ac_DW.StatusByte_AC_RefrigExpVlvActCtrCktPerf) & 1)
                      <= 0) || ((((uint32)
                        BRDR_ac_DW.StatusByte_AC_RefrigExpVlvActCtrCktPerf) &
                       64U) != 0U)));

#endif

    /* End of S-Function (sfix_bitop): '<S630>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S598>/ArchitectureSelector' */
#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_16 && !Rte_SysCon_Variant_BRDR_17 && !Rte_SysCon_Variant_BRDR_18 && !Rte_SysCon_Variant_BRDR_3

    /* Switch: '<S699>/Switch' incorporates:
     *  Constant: '<S598>/TRUE Constant'
     */
    rtb_Switch_a = true;

#endif

    /* End of SignalConversion generated from: '<S598>/ArchitectureSelector' */

    /* Logic: '<S598>/Logical Operator' incorporates:
     *  Logic: '<S625>/AND'
     *  UnitDelay: '<S627>/Unit Delay'
     */
#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3

    BRDR_ac_DW.UnitDelay_DSTATE_oi = (rtb_Logical_f && rtb_Switch_a);

    /* Logic: '<S572>/Logical Operator' incorporates:
     *  UnitDelay: '<S627>/Unit Delay'
     */
    rtb_LogicalOperator_ig = BRDR_ac_DW.UnitDelay_DSTATE_oi;

#endif

    /* End of Logic: '<S598>/Logical Operator' */

    /* SignalConversion generated from: '<S574>/ArchitectureSelector' */
    VeBRDR_b_ChillPerfDiagEnblPre = rtb_LogicalOperator_ig;

    /* Switch: '<S604>/Switch1' incorporates:
     *  Logic: '<S574>/Logical Operator'
     */
    if (!VeBRDR_b_ChillPerfDiagEnblPre)
    {
        /* Switch: '<S604>/Switch1' incorporates:
         *  Constant: '<S604>/InitValue'
         */
        BRDR_ac_DW.UnitDelay_DSTATE_l = 0.0F;
    }
    else
    {
        /* Switch: '<S604>/Switch1' incorporates:
         *  Constant: '<S601>/Calib'
         *  Sum: '<S604>/Subtraction'
         *  Switch: '<S604>/Switch2'
         *  UnitDelay: '<S604>/Unit Delay'
         */
        BRDR_ac_DW.UnitDelay_DSTATE_l += HeBRDR_t_MedTEH;
    }

    /* End of Switch: '<S604>/Switch1' */

    /* RelationalOperator: '<S604>/Greater  Than2' incorporates:
     *  Constant: '<S603>/Calib'
     */
    VeBRDR_b_ChillPerfDiagEnbl = (BRDR_ac_DW.UnitDelay_DSTATE_l >
        KeBRDR_t_CoolingDelay_Tm);

    /* Logic: '<S572>/Logical Operator' incorporates:
     *  Constant: '<S579>/Calib'
     */
    rtb_LogicalOperator_ig = ((VeBRDR_b_ChillPerfDiagEnbl) &&
        (KeBRDR_b_BattActvCool_XYEnbl));

    /* Outputs for Atomic SubSystem: '<S562>/PassiveCooling' */
    /* Outputs for Atomic SubSystem: '<S570>/If_PassiveCooling' */
    /* S-Function (sfix_bitop): '<S581>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S582>/StatusByte_BattCool'
     *  S-Function (sfix_bitop): '<S838>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_a_tmp = ((uint32)BRDR_ac_DW.StatusByte_BattCool) &
        64U;

    /* End of Outputs for SubSystem: '<S570>/If_PassiveCooling' */
    /* End of Outputs for SubSystem: '<S562>/PassiveCooling' */

    /* RelationalOperator: '<S581>/Relational Operator3' incorporates:
     *  Constant: '<S581>/Constant3'
     *  S-Function (sfix_bitop): '<S581>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeCPDR_b_LTAP_F = (rtb_RelationalOperator3_a_tmp ==
        0U);

    /* Outputs for Atomic SubSystem: '<S581>/EdgeFalling1' */
    /* Logic: '<S581>/Logical Operator' incorporates:
     *  Logic: '<S584>/OR1'
     */
    rtb_VeBRDR_b_LTAPFunPerFltDtct_AD =
        !rtb_TmpSignalConversionAtVeCPDR_b_LTAP_F;

    /* End of Outputs for SubSystem: '<S581>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S562>/PassiveCooling' */
    /* Outputs for Atomic SubSystem: '<S570>/If_PassiveCooling' */
    /* S-Function (sfix_bitop): '<S581>/Bitwise Operator3' incorporates:
     *  DataStoreRead: '<S582>/StatusByte_BattCool'
     *  S-Function (sfix_bitop): '<S838>/Bitwise Operator3'
     */
    rtb_Logical1_hj_tmp = ((uint32)BRDR_ac_DW.StatusByte_BattCool) & 1U;

    /* End of Outputs for SubSystem: '<S570>/If_PassiveCooling' */
    /* End of Outputs for SubSystem: '<S562>/PassiveCooling' */

    /* Logic: '<S581>/Logical1' incorporates:
     *  Constant: '<S580>/Calib'
     *  Constant: '<S581>/Constant1'
     *  Logic: '<S581>/Logical Operator'
     *  Logic: '<S581>/Logical10'
     *  Logic: '<S581>/Logical12'
     *  RelationalOperator: '<S581>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S581>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeBTRR_b_CellTe = (rtb_LogicalOperator_ig &&
        ((!KeBRDR_b_BattCoolActv_LtchEnbl) || ((rtb_Logical1_hj_tmp == 0U) ||
        rtb_VeBRDR_b_LTAPFunPerFltDtct_AD)));

    /* RelationalOperator: '<S604>/Greater  Than1' incorporates:
     *  Constant: '<S602>/Calib'
     */
    rtb_LeBRDR_b_ThrmlRlyCtrlCkt = (BRDR_ac_DW.UnitDelay_DSTATE_l >
        KeBRDR_t_BattErrTh_BTISCooling_Dbnc);

    /* Sum: '<S700>/Sum3' incorporates:
     *  Logic: '<S700>/Logical3'
     *  Logic: '<S700>/Logical4'
     *  Logic: '<S700>/Logical9'
     *  Lookup_n-D: '<S720>/Vector'
     *  Lookup_n-D: '<S721>/Vector'
     *  RelationalOperator: '<S700>/Comparison3'
     *  RelationalOperator: '<S700>/Comparison4'
     *  Sum: '<S700>/Sum4'
     */
#if Rte_SysCon_Variant_BRDR_15

    /* Outputs for Enabled SubSystem: '<S700>/BatClntTmpOutLatch' */
    /* Outputs for Atomic SubSystem: '<S700>/EdgeRising2' */
    /* Outputs for Enabled SubSystem: '<S700>/BatClntTmpInLatch' */
    /* Outputs for Atomic SubSystem: '<S700>/EdgeRising1' */
    /* Logic: '<S716>/AND' incorporates:
     *  Logic: '<S716>/OR1'
     *  UnitDelay: '<S716>/Unit Delay'
     */
    rtb_Switch_a = (rtb_LeBRDR_b_ThrmlRlyCtrlCkt &&
                    (!BRDR_ac_DW.UnitDelay_DSTATE_dm));

    /* Update for UnitDelay: '<S716>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_dm = rtb_LeBRDR_b_ThrmlRlyCtrlCkt;
    BRDR_ac_BatClntTmpInLatch(rtb_Switch_a,
        rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat, &BRDR_ac_B.BatClntTmpInLatch);

    /* Sum: '<S700>/Sum3' */
    VeBRDR_T_BTISDelta_CoolPrfmnc_Actv = BRDR_ac_B.BatClntTmpInLatch.Gain -
        rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;

    /* RelationalOperator: '<S700>/Comparison3' incorporates:
     *  SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp'
     */
    VeBRDR_b_BTIS_CoolPerfThSet_Actv = (VeBRDR_T_BTISDelta_CoolPrfmnc_Actv <=
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeAATR_T_EstAmb, ((const
        float32 *)&(KxBRDR_T_BTISDelta_CoolPerfTh[0])), ((const float32 *)
        &(KtBRDR_T_BTISDelta_CoolPerfTh[0])), 7U));

    /* Switch: '<S699>/Switch' incorporates:
     *  UnitDelay: '<S717>/Unit Delay'
     */
    rtb_Switch_a = BRDR_ac_DW.UnitDelay_DSTATE_hs;

    /* Logic: '<S717>/AND' incorporates:
     *  Logic: '<S717>/OR1'
     *  UnitDelay: '<S717>/Unit Delay'
     */
    rtb_LeBRDR_b_MainRelayOK = (rtb_LeBRDR_b_ThrmlRlyCtrlCkt &&
        (!BRDR_ac_DW.UnitDelay_DSTATE_hs));

    /* Update for UnitDelay: '<S717>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_hs = rtb_LeBRDR_b_ThrmlRlyCtrlCkt;

    /* Outputs for Enabled SubSystem: '<S700>/BatClntTmpOutLatch' incorporates:
     *  EnablePort: '<S715>/Enable'
     */
    if (rtb_LeBRDR_b_MainRelayOK)
    {
        /* Gain: '<S723>/Gain' */
        BRDR_ac_B.Gain = rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j;
    }

    /* Sum: '<S700>/Sum4' */
    VeBRDR_T_BTOSDelta_CoolPrfmnc_Actv = BRDR_ac_B.Gain -
        rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j;

    /* RelationalOperator: '<S700>/Comparison4' incorporates:
     *  SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp'
     */
    VeBRDR_b_BTOS_CoolPerfThSet_Actv = (VeBRDR_T_BTOSDelta_CoolPrfmnc_Actv <=
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeAATR_T_EstAmb, ((const
        float32 *)&(KxBRDR_T_BTOSDelta_CoolPerfTh[0])), ((const float32 *)
        &(KtBRDR_T_BTOSDelta_CoolPerfTh[0])), 7U));

    /* UnitDelay: '<S583>/Unit Delay' incorporates:
     *  Constant: '<S718>/Calib'
     *  Constant: '<S719>/Calib'
     */
    VeBRDR_b_ChillPerfDiagChk = (((VeBRDR_b_BTIS_CoolPerfThSet_Actv) ||
        (KeBRDR_b_DsblBTISDelta_CoolPerf)) && ((VeBRDR_b_BTOS_CoolPerfThSet_Actv)
        || (KeBRDR_b_DsblBTOSDelta_CoolPerf)));

    /* End of Outputs for SubSystem: '<S700>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S700>/BatClntTmpInLatch' */
    /* End of Outputs for SubSystem: '<S700>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S700>/BatClntTmpOutLatch' */
#endif

    /* End of Sum: '<S700>/Sum3' */

    /* Sum: '<S701>/Add1' incorporates:
     *  Lookup_n-D: '<S712>/Vector'
     *  RelationalOperator: '<S701>/Comparison1'
     */
#if !Rte_SysCon_Variant_BRDR_15

    /* Outputs for Enabled SubSystem: '<S701>/BTIS_Set' */
    /* Outputs for Atomic SubSystem: '<S701>/EdgeRising2' */
    /* Logic: '<S711>/AND' incorporates:
     *  Logic: '<S711>/OR1'
     *  UnitDelay: '<S711>/Unit Delay'
     */
    rtb_Switch_a = (rtb_LeBRDR_b_ThrmlRlyCtrlCkt &&
                    (!BRDR_ac_DW.UnitDelay_DSTATE_c0));

    /* Update for UnitDelay: '<S711>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_c0 = rtb_LeBRDR_b_ThrmlRlyCtrlCkt;

    /* Outputs for Enabled SubSystem: '<S701>/BTIS_Set' incorporates:
     *  EnablePort: '<S710>/Enable'
     */
    if (rtb_Switch_a)
    {
        /* Gain: '<S713>/Gain' */
        BRDR_ac_B.Gain_n = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;
    }

    /* Sum: '<S701>/Add1' */
    VeBRDR_T_BTISDelta_Actv = BRDR_ac_B.Gain_n -
        rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;

    /* Switch: '<S699>/Switch' incorporates:
     *  SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp'
     */
    rtb_Switch_a = (VeBRDR_T_BTISDelta_Actv < look1_iflf_binlca_16a
                    (rtb_TmpSignalConversionAtVeAATR_T_EstAmb, ((const float32 *)
                      &(KxBRDR_T_ChillPerfTemp_BTIS[0])), ((const float32 *)
                      &(KtBRDR_T_ChillPerfTemp_BTIS[0])), 6U));

    /* End of Outputs for SubSystem: '<S701>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S701>/BTIS_Set' */
#endif

    /* End of Sum: '<S701>/Add1' */

    /* SignalConversion generated from: '<S699>/Variant Source' */
#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_3

    /* UnitDelay: '<S583>/Unit Delay1' */
    rtb_UnitDelay1_g2 = rtb_Switch_a;

#endif

    /* End of SignalConversion generated from: '<S699>/Variant Source' */

    /* Logic: '<S699>/Logical4' incorporates:
     *  Constant: '<S704>/Calib'
     *  Constant: '<S708>/Calib'
     *  Constant: '<S709>/Calib'
     *  Logic: '<S699>/Logical1'
     *  Logic: '<S699>/Logical11'
     *  Logic: '<S699>/Logical5'
     *  RelationalOperator: '<S699>/Comparison4'
     *  Sum: '<S699>/Add'
     *  Switch: '<S699>/Switch'
     *  Switch: '<S699>/Switch2'
     *  Switch: '<S699>/Switch3'
     */
#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3

    if (KeBRDR_b_SelLTAP_BHOS)
    {
        rtb_TmpSignalConversionAtVeBTRR_T_CellTe =
            rtb_TmpSignalConversionAtVePMIR_T_LTActv;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBTRR_T_CellTe =
            rtb_TmpSignalConversionAtVeHTIR_T_HVC_Ht;
    }

    if (KeBRDR_b_SelBTIS_BTOS)
    {
        rtb_Add1_n = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;
    }
    else
    {
        rtb_Add1_n = rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j;
    }

    /* RelationalOperator: '<S699>/Comparison4' incorporates:
     *  Constant: '<S702>/Calib'
     *  Constant: '<S708>/Calib'
     *  Constant: '<S709>/Calib'
     */
    VeBRDR_b_ChillPerf = ((rtb_TmpSignalConversionAtVeBTRR_T_CellTe - rtb_Add1_n)
                          > KeBRDR_T_ChillPerfTemp);
    if (KeBRDR_b_ChillPerfCompLogicSel)
    {
        rtb_AND_cs = !VeBRDR_b_ChillPerf;
    }
    else
    {
        rtb_AND_cs = VeBRDR_b_ChillPerf;
    }

    /* Logic: '<S699>/Logical5' incorporates:
     *  Constant: '<S704>/Calib'
     *  Constant: '<S707>/Calib'
     *  Logic: '<S699>/Logical11'
     */
    VeBRDR_b_ChillerPerf = (rtb_AND_cs && (KeBRDR_b_Enbl_ChillPerf));

    /* UnitDelay: '<S583>/Unit Delay1' incorporates:
     *  Constant: '<S706>/Calib'
     */
    rtb_UnitDelay1_g2 = ((rtb_Switch_a && (KeBRDR_b_Enbl_BTIS_ChillerPerf)) ||
                         (VeBRDR_b_ChillerPerf));

#endif

    /* End of Logic: '<S699>/Logical4' */

    /* RelationalOperator: '<S699>/Comparison1' incorporates:
     *  Logic: '<S699>/Logical16'
     *  Logic: '<S699>/Logical3'
     */
#if !Rte_SysCon_Variant_BRDR_15

    /* Logic: '<S699>/Logical16' incorporates:
     *  Constant: '<S703>/Calib'
     */
    VeBRDR_b_ChillPerfSympSet = (rtb_UnitDelay1_g2 &&
        (rtb_TmpSignalConversionAtVeBTRR_T_HV_Bat > KeBRDR_T_MaxCellPerfTemp));

    /* UnitDelay: '<S583>/Unit Delay' incorporates:
     *  Constant: '<S705>/Calib'
     */
    VeBRDR_b_ChillPerfDiagChk = ((VeBRDR_b_ChillPerfSympSet) &&
        (KeBRDR_b_EnblChillerDiagSymp));

#endif

    /* End of RelationalOperator: '<S699>/Comparison1' */

    /* Outputs for Atomic SubSystem: '<S581>/EdgeFalling1' */
    /* Logic: '<S584>/AND' incorporates:
     *  UnitDelay: '<S584>/Unit Delay'
     */
    rtb_UnitDelay1_g2 = (rtb_VeBRDR_b_LTAPFunPerFltDtct_AD &&
                         (BRDR_ac_DW.UnitDelay_DSTATE_fk));

    /* Update for UnitDelay: '<S584>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_fk = rtb_TmpSignalConversionAtVeCPDR_b_LTAP_F;

    /* End of Outputs for SubSystem: '<S581>/EdgeFalling1' */

    /* Logic: '<S581>/Logical5' */
    rtb_UnitDelay1_g2 = ((VeBRDR_b_ResetCnts) || rtb_UnitDelay1_g2);

    /* Outputs for Atomic SubSystem: '<S583>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S583>/Counter Reset  Enabled ' */
    /* Switch: '<S590>/Switch1' incorporates:
     *  Constant: '<S578>/Calib'
     *  Logic: '<S572>/Logical Operator2'
     *  Logic: '<S583>/Fail Counter Reset'
     *  Logic: '<S583>/NOT6'
     *  Switch: '<S590>/Switch2'
     *  Switch: '<S591>/Switch1'
     *  UnitDelay: '<S583>/Unit Delay'
     *  UnitDelay: '<S583>/Unit Delay1'
     */
    if ((rtb_UnitDelay1_g2 || (BRDR_ac_DW.UnitDelay_DSTATE_bo)) ||
            (BRDR_ac_DW.UnitDelay1_DSTATE_b))
    {
        /* Switch: '<S590>/Switch1' incorporates:
         *  Constant: '<S590>/Constant Value2'
         */
        VeBRDR_Cnt_ChillPerfFailCnt = 0U;

        /* Switch: '<S591>/Switch1' incorporates:
         *  Constant: '<S591>/Constant Value2'
         */
        VeBRDR_Cnt_ChillPerfSmplCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeBTRR_b_CellTe &&
                ((VeBRDR_b_ChillPerfDiagChk) && (KeBRDR_b_BattActvCool_FltEnbl)))
        {
            /* Switch: '<S590>/Switch1' incorporates:
             *  Constant: '<S590>/Constant Value1'
             *  Sum: '<S590>/Subtraction'
             *  Switch: '<S590>/Switch2'
             *  UnitDelay: '<S590>/Unit Delay'
             */
            VeBRDR_Cnt_ChillPerfFailCnt = (uint16)(((uint32)
                VeBRDR_Cnt_ChillPerfFailCnt) + 1U);
        }

        /* Switch: '<S591>/Switch2' */
        if (rtb_TmpSignalConversionAtVeBTRR_b_CellTe)
        {
            /* Switch: '<S591>/Switch1' incorporates:
             *  Constant: '<S591>/Constant Value1'
             *  Sum: '<S591>/Subtraction'
             *  Switch: '<S591>/Switch2'
             *  UnitDelay: '<S591>/Unit Delay'
             */
            VeBRDR_Cnt_ChillPerfSmplCnt = (uint16)(((uint32)
                VeBRDR_Cnt_ChillPerfSmplCnt) + 1U);
        }

        /* End of Switch: '<S591>/Switch2' */
    }

    /* End of Switch: '<S590>/Switch1' */
    /* End of Outputs for SubSystem: '<S583>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S583>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S583>/Greater Than or Equal ' incorporates:
     *  Constant: '<S576>/Calib'
     */
    BRDR_ac_DW.UnitDelay1_DSTATE_b = (VeBRDR_Cnt_ChillPerfFailCnt >=
        KeBRDR_Cnt_ChillPerf_FailCnt);

    /* Logic: '<S583>/NOT5' incorporates:
     *  Constant: '<S577>/Calib'
     *  Logic: '<S583>/NOT3'
     *  RelationalOperator: '<S583>/Less Than  or Equal'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_bo = ((VeBRDR_Cnt_ChillPerfSmplCnt >=
        KeBRDR_Cnt_ChillPerf_SmpCnt) && (!BRDR_ac_DW.UnitDelay1_DSTATE_b));

    /* Switch: '<S596>/Switch1' incorporates:
     *  Constant: '<S589>/Constant Value'
     *  DataStoreWrite: '<S572>/Data Store Write3'
     *  Switch: '<S595>/Switch1'
     */
    if (VeBRDR_b_ResetFOMs)
    {
        BRDR_ac_DW.NeBRDR_Cnt_ChillPerf_MFOP = 0U;
    }
    else
    {
        if (BRDR_ac_DW.UnitDelay_DSTATE_bo)
        {
            /* MinMax: '<S589>/Minimum2' incorporates:
             *  DataStoreRead: '<S572>/Data Store Read1'
             *  Switch: '<S595>/Switch1'
             */
            if (VeBRDR_Cnt_ChillPerfFailCnt >
                    BRDR_ac_DW.NeBRDR_Cnt_ChillPerf_MFOP)
            {
                /* DataStoreWrite: '<S572>/Data Store Write3' incorporates:
                 *  Switch: '<S595>/Switch1'
                 */
                BRDR_ac_DW.NeBRDR_Cnt_ChillPerf_MFOP =
                    VeBRDR_Cnt_ChillPerfFailCnt;
            }

            /* End of MinMax: '<S589>/Minimum2' */
        }
    }

    /* End of Switch: '<S596>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S581>/Fail' */
    BRDR_ac_Fail(BRDR_ac_DW.UnitDelay1_DSTATE_b, &BRDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S581>/Fail' */

    /* Outputs for Enabled SubSystem: '<S581>/Init' */
    BRDR_ac_Init_e(rtb_UnitDelay1_g2, &BRDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S581>/Init' */

    /* Outputs for Enabled SubSystem: '<S581>/Pass' */
    BRDR_ac_Pass(BRDR_ac_DW.UnitDelay_DSTATE_bo, &BRDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S581>/Pass' */

    /* RelationalOperator: '<S581>/Relational Operator' incorporates:
     *  Constant: '<S585>/Constant'
     *  Merge: '<S581>/Merge'
     */
    VeBRDR_b_ChillPerf_FltDtct = (((uint32)BRDR_ac_B.Merge) == CeDFIB_e_Fail);

    /* Switch: '<S604>/Switch3' incorporates:
     *  Constant: '<S603>/Calib'
     *  UnitDelay: '<S604>/Unit Delay'
     */
    if (VeBRDR_b_ChillPerfDiagEnbl)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_l = KeBRDR_t_CoolingDelay_Tm;
    }

    /* End of Switch: '<S604>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S562>/PassiveCooling' */
#if Rte_SysCon_Variant_BRDR_3

    /* Outputs for Atomic SubSystem: '<S570>/Else_PsvCool' */
    /* VariantMerge generated from: '<S570>/PsvCoolDiagEnbl' incorporates:
     *  Constant: '<S765>/FALSE Constant'
     */
    VeBRDR_b_PsvCoolDiagEnbl = false;

    /* VariantMerge generated from: '<S570>/e_FaultSts_BattCool_Psv' incorporates:
     *  Constant: '<S767>/Constant'
     */
    BRDR_ac_B.VariantMergeForOutporte_FaultSts_BattCoo = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S570>/Else_PsvCool' */
#endif

    /* Outputs for Atomic SubSystem: '<S570>/If_PassiveCooling' */
    /* RelationalOperator: '<S567>/Comparison3' incorporates:
     *  DataStoreRead: '<S729>/StatusByte_BattCoolPmpPerf'
     *  Inport: '<Root>/VeFSCR_b_RadFan_FltDtct'
     *  Inport: '<Root>/VePMIR_b_LTPsvPumpDryRun_FA'
     *  Inport: '<Root>/VePMIR_b_LTPsvPumpTemp_FA'
     *  Logic: '<S567>/Logical'
     *  Logic: '<S567>/Logical1'
     *  Logic: '<S567>/Logical10'
     *  Logic: '<S567>/Logical11'
     *  Logic: '<S567>/Logical12'
     *  Logic: '<S567>/Logical13'
     *  Logic: '<S567>/Logical14'
     *  Logic: '<S567>/Logical15'
     *  Logic: '<S567>/Logical16'
     *  Logic: '<S567>/Logical17'
     *  Logic: '<S567>/Logical18'
     *  Logic: '<S567>/Logical19'
     *  Logic: '<S567>/Logical2'
     *  Logic: '<S567>/Logical20'
     *  Logic: '<S567>/Logical21'
     *  Logic: '<S567>/Logical23'
     *  Logic: '<S567>/Logical24'
     *  Logic: '<S567>/Logical25'
     *  Logic: '<S567>/Logical26'
     *  Logic: '<S567>/Logical27'
     *  Logic: '<S567>/Logical28'
     *  Logic: '<S567>/Logical29'
     *  Logic: '<S567>/Logical3'
     *  Logic: '<S567>/Logical30'
     *  Logic: '<S567>/Logical31'
     *  Logic: '<S567>/Logical32'
     *  Logic: '<S567>/Logical33'
     *  Logic: '<S567>/Logical4'
     *  Logic: '<S567>/Logical5'
     *  Logic: '<S567>/Logical6'
     *  Logic: '<S567>/Logical7'
     *  Logic: '<S567>/Logical8'
     *  Logic: '<S567>/Logical9'
     *  Logic: '<S726>/Logical Operator'
     *  Logic: '<S727>/Logical Operator'
     *  Logic: '<S728>/Logical Operator'
     *  Logic: '<S729>/Logical Operator'
     *  Logic: '<S730>/Logical Operator'
     *  Logic: '<S731>/Logical Operator'
     *  Logic: '<S732>/Logical Operator'
     *  Logic: '<S733>/Logical Operator'
     *  Logic: '<S734>/Logical Operator'
     *  Logic: '<S735>/Logical Operator'
     *  Logic: '<S736>/Logical Operator'
     *  Logic: '<S737>/Logical Operator'
     *  Logic: '<S738>/Logical Operator'
     *  Logic: '<S739>/Logical Operator'
     *  Logic: '<S740>/Logical Operator'
     *  Logic: '<S741>/Logical Operator'
     *  Logic: '<S829>/AND'
     *  RelationalOperator: '<S567>/Comparison4'
     *  RelationalOperator: '<S726>/Relational Operator1'
     *  RelationalOperator: '<S726>/Relational Operator2'
     *  RelationalOperator: '<S727>/Relational Operator1'
     *  RelationalOperator: '<S727>/Relational Operator2'
     *  RelationalOperator: '<S728>/Relational Operator1'
     *  RelationalOperator: '<S728>/Relational Operator2'
     *  RelationalOperator: '<S729>/Relational Operator1'
     *  RelationalOperator: '<S729>/Relational Operator2'
     *  RelationalOperator: '<S730>/Relational Operator1'
     *  RelationalOperator: '<S730>/Relational Operator2'
     *  RelationalOperator: '<S731>/Relational Operator1'
     *  RelationalOperator: '<S731>/Relational Operator2'
     *  RelationalOperator: '<S732>/Relational Operator1'
     *  RelationalOperator: '<S732>/Relational Operator2'
     *  RelationalOperator: '<S733>/Relational Operator1'
     *  RelationalOperator: '<S733>/Relational Operator2'
     *  RelationalOperator: '<S734>/Relational Operator1'
     *  RelationalOperator: '<S734>/Relational Operator2'
     *  RelationalOperator: '<S735>/Relational Operator1'
     *  RelationalOperator: '<S735>/Relational Operator2'
     *  RelationalOperator: '<S736>/Relational Operator1'
     *  RelationalOperator: '<S736>/Relational Operator2'
     *  RelationalOperator: '<S737>/Relational Operator1'
     *  RelationalOperator: '<S737>/Relational Operator2'
     *  RelationalOperator: '<S738>/Relational Operator1'
     *  RelationalOperator: '<S738>/Relational Operator2'
     *  RelationalOperator: '<S739>/Relational Operator1'
     *  RelationalOperator: '<S739>/Relational Operator2'
     *  RelationalOperator: '<S740>/Relational Operator1'
     *  RelationalOperator: '<S740>/Relational Operator2'
     *  RelationalOperator: '<S741>/Relational Operator1'
     *  RelationalOperator: '<S741>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S726>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S726>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S727>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S727>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S728>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S728>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S729>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S729>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S730>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S730>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S731>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S731>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S732>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S732>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S733>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S733>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S734>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S734>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S735>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S735>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S736>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S736>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S737>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S737>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S738>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S738>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S739>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S739>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S740>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S740>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S741>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S741>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_BRDR_3

    (void)Rte_Read_VePMIR_b_LTPsvPumpDryRun_FA_Value(&rtb_OR1_fq);
    (void)Rte_Read_VePMIR_b_LTPsvPumpTemp_FA_Value(&rtb_RelationalOperator3_aw);
    (void)Rte_Read_VeFSCR_b_RadFan_FltDtct_Value(&rtb_AND_f2);

    /* RelationalOperator: '<S780>/Comparison1' incorporates:
     *  Constant: '<S812>/Calib'
     *  Inport: '<Root>/VeFSCR_b_RadFan_FltDtct'
     *  Inport: '<Root>/VePMIR_b_LTPsvPumpDryRun_FA'
     *  Inport: '<Root>/VePMIR_b_LTPsvPumpTemp_FA'
     */
    rtb_UnitDelay1_g2 = (rtb_TmpSignalConversionAtVePMIR_n_LTActv >
                         KeBRDR_n_Min_LTAPRPM_PsvCool);

    /* Outputs for Atomic SubSystem: '<S780>/EdgeRising1' */
    /* Logic: '<S810>/OR1' incorporates:
     *  UnitDelay: '<S810>/Unit Delay'
     */
    rtb_Switch_a = !BRDR_ac_DW.UnitDelay_DSTATE_fpo;

    /* Update for UnitDelay: '<S810>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_fpo = rtb_UnitDelay1_g2;

    /* Outputs for Atomic SubSystem: '<S780>/Timer Retrigger Reset Enabled1' */
    /* Switch: '<S814>/Switch1' incorporates:
     *  Constant: '<S813>/Calib'
     *  Logic: '<S810>/AND'
     *  Switch: '<S814>/Switch2'
     *  UnitDelay: '<S814>/Unit Delay'
     */
    if (rtb_UnitDelay1_g2 && rtb_Switch_a)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_p = KeBRDR_t_Min_LTAPOn_PsvCool;
    }
    else
    {
        if (rtb_UnitDelay1_g2)
        {
            /* UnitDelay: '<S814>/Unit Delay' incorporates:
             *  Constant: '<S811>/Calib'
             *  Constant: '<S814>/Constant Value4'
             *  MinMax: '<S814>/Maximum'
             *  Sum: '<S814>/Subtraction'
             *  Switch: '<S814>/Switch2'
             */
            BRDR_ac_DW.UnitDelay_DSTATE_p = fmaxf(BRDR_ac_DW.UnitDelay_DSTATE_p
                - HeBRDR_t_MedTEH, 0.0F);
        }
    }

    /* End of Switch: '<S814>/Switch1' */
    /* End of Outputs for SubSystem: '<S780>/Timer Retrigger Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S780>/EdgeRising1' */

    /* S-Function (sfix_bitop): '<S808>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S808>/StatusByte_BattCoolPmpPerf'
     *  S-Function (sfix_bitop): '<S790>/Bitwise Operator2'
     */
    VeBRDR_b_PsvCoolDiagEnblPre_tmp = ((sint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 1;

    /* S-Function (sfix_bitop): '<S808>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S808>/StatusByte_BattCoolPmpPerf'
     *  S-Function (sfix_bitop): '<S790>/Bitwise Operator1'
     */
    VeBRDR_b_PsvCoolDiagEnblPre_tmp_0 = ((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U;

    /* Outputs for Atomic SubSystem: '<S780>/Timer Retrigger Reset Enabled1' */
    /* Logic: '<S769>/Logical' incorporates:
     *  Constant: '<S774>/Constant'
     *  Constant: '<S775>/Calib'
     *  Constant: '<S785>/Constant'
     *  Constant: '<S786>/Calib'
     *  Constant: '<S787>/Calib'
     *  Constant: '<S788>/Constant1'
     *  Constant: '<S788>/Constant2'
     *  Constant: '<S789>/Calib'
     *  Constant: '<S790>/Constant1'
     *  Constant: '<S790>/Constant2'
     *  Constant: '<S791>/Constant1'
     *  Constant: '<S791>/Constant2'
     *  Constant: '<S792>/Constant1'
     *  Constant: '<S792>/Constant2'
     *  Constant: '<S793>/Constant1'
     *  Constant: '<S793>/Constant2'
     *  Constant: '<S794>/Constant1'
     *  Constant: '<S794>/Constant2'
     *  Constant: '<S795>/Calib'
     *  Constant: '<S796>/Calib'
     *  Constant: '<S797>/Calib'
     *  Constant: '<S798>/Calib'
     *  Constant: '<S799>/Calib'
     *  Constant: '<S800>/Calib'
     *  Constant: '<S801>/Constant'
     *  Constant: '<S802>/Constant1'
     *  Constant: '<S802>/Constant2'
     *  Constant: '<S803>/Calib'
     *  Constant: '<S804>/Calib'
     *  Constant: '<S805>/Constant'
     *  Constant: '<S806>/Calib'
     *  Constant: '<S807>/Calib'
     *  Constant: '<S808>/Constant1'
     *  Constant: '<S808>/Constant2'
     *  Constant: '<S809>/Calib'
     *  Constant: '<S814>/Constant Value2'
     *  Constant: '<S815>/Constant1'
     *  Constant: '<S815>/Constant2'
     *  Constant: '<S816>/Calib'
     *  Constant: '<S817>/Constant1'
     *  Constant: '<S817>/Constant2'
     *  Constant: '<S818>/Calib'
     *  Constant: '<S819>/Calib'
     *  Constant: '<S820>/Constant1'
     *  Constant: '<S820>/Constant2'
     *  Constant: '<S821>/Calib'
     *  Constant: '<S822>/Calib'
     *  DataStoreRead: '<S788>/StatusByte_HB_CT_SnsrPerf'
     *  DataStoreRead: '<S791>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S792>/StatusByte_LostCommMtrElectCoolPmpA'
     *  DataStoreRead: '<S793>/StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S794>/StatusByte_MtrElect_CoolPumAOvrSpd'
     *  DataStoreRead: '<S815>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S817>/StatusByte_CT_SnsrPerf'
     *  DataStoreRead: '<S820>/StatusByte_MtrElect_CT_SnsrPerf'
     *  Logic: '<S769>/Logical1'
     *  Logic: '<S769>/Logical8'
     *  Logic: '<S772>/Logical23'
     *  Logic: '<S772>/Logical25'
     *  Logic: '<S772>/Logical26'
     *  Logic: '<S772>/Logical29'
     *  Logic: '<S773>/Logical15'
     *  Logic: '<S773>/Logical17'
     *  Logic: '<S776>/Logical1'
     *  Logic: '<S776>/Logical10'
     *  Logic: '<S776>/Logical11'
     *  Logic: '<S776>/Logical12'
     *  Logic: '<S776>/Logical2'
     *  Logic: '<S776>/Logical23'
     *  Logic: '<S776>/Logical27'
     *  Logic: '<S776>/Logical28'
     *  Logic: '<S776>/Logical3'
     *  Logic: '<S776>/Logical4'
     *  Logic: '<S776>/Logical5'
     *  Logic: '<S776>/Logical6'
     *  Logic: '<S776>/Logical7'
     *  Logic: '<S776>/Logical8'
     *  Logic: '<S776>/Logical9'
     *  Logic: '<S777>/Logical1'
     *  Logic: '<S777>/Logical2'
     *  Logic: '<S777>/Logical23'
     *  Logic: '<S777>/Logical3'
     *  Logic: '<S777>/Logical4'
     *  Logic: '<S777>/Logical5'
     *  Logic: '<S778>/Logical27'
     *  Logic: '<S778>/Logical28'
     *  Logic: '<S778>/Logical30'
     *  Logic: '<S778>/Logical31'
     *  Logic: '<S779>/Logical10'
     *  Logic: '<S779>/Logical6'
     *  Logic: '<S780>/Logical1'
     *  Logic: '<S780>/Logical3'
     *  Logic: '<S781>/Logical11'
     *  Logic: '<S781>/Logical14'
     *  Logic: '<S782>/Logical1'
     *  Logic: '<S782>/Logical2'
     *  Logic: '<S782>/Logical23'
     *  Logic: '<S782>/Logical27'
     *  Logic: '<S782>/Logical28'
     *  Logic: '<S782>/Logical3'
     *  Logic: '<S782>/Logical4'
     *  Logic: '<S783>/Logical1'
     *  Logic: '<S783>/Logical2'
     *  Logic: '<S783>/Logical23'
     *  Logic: '<S783>/Logical27'
     *  Logic: '<S783>/Logical28'
     *  Logic: '<S783>/Logical3'
     *  Logic: '<S783>/Logical4'
     *  Logic: '<S788>/Logical Operator'
     *  Logic: '<S790>/Logical Operator'
     *  Logic: '<S791>/Logical Operator'
     *  Logic: '<S792>/Logical Operator'
     *  Logic: '<S793>/Logical Operator'
     *  Logic: '<S794>/Logical Operator'
     *  Logic: '<S802>/Logical Operator'
     *  Logic: '<S808>/Logical Operator'
     *  Logic: '<S815>/Logical Operator'
     *  Logic: '<S817>/Logical Operator'
     *  Logic: '<S820>/Logical Operator'
     *  RelationalOperator: '<S769>/Comparison2'
     *  RelationalOperator: '<S772>/Comparison3'
     *  RelationalOperator: '<S777>/Comparison1'
     *  RelationalOperator: '<S778>/Comparison1'
     *  RelationalOperator: '<S788>/Relational Operator1'
     *  RelationalOperator: '<S788>/Relational Operator2'
     *  RelationalOperator: '<S790>/Relational Operator1'
     *  RelationalOperator: '<S790>/Relational Operator2'
     *  RelationalOperator: '<S791>/Relational Operator1'
     *  RelationalOperator: '<S791>/Relational Operator2'
     *  RelationalOperator: '<S792>/Relational Operator1'
     *  RelationalOperator: '<S792>/Relational Operator2'
     *  RelationalOperator: '<S793>/Relational Operator1'
     *  RelationalOperator: '<S793>/Relational Operator2'
     *  RelationalOperator: '<S794>/Relational Operator1'
     *  RelationalOperator: '<S794>/Relational Operator2'
     *  RelationalOperator: '<S802>/Relational Operator1'
     *  RelationalOperator: '<S802>/Relational Operator2'
     *  RelationalOperator: '<S808>/Relational Operator1'
     *  RelationalOperator: '<S808>/Relational Operator2'
     *  RelationalOperator: '<S814>/Greater  Than1'
     *  RelationalOperator: '<S815>/Relational Operator1'
     *  RelationalOperator: '<S815>/Relational Operator2'
     *  RelationalOperator: '<S817>/Relational Operator1'
     *  RelationalOperator: '<S817>/Relational Operator2'
     *  RelationalOperator: '<S820>/Relational Operator1'
     *  RelationalOperator: '<S820>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S788>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S788>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S791>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S791>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S792>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S792>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S793>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S793>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S794>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S794>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S808>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S808>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S815>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S815>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S817>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S817>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S820>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S820>/Bitwise Operator2'
     *  SignalConversion generated from: '<S1>/VePMIR_e_LTActvPumpDryRun'
     *  UnitDelay: '<S814>/Unit Delay'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC'
     */
    VeBRDR_b_PsvCoolDiagEnblPre =
        (((((((((((((rtb_TmpSignalConversionAtVeTMIR_b_MainRl &&
                     (((VeBRDR_b_PsvCoolDiagEnblPre_tmp <= 0) ||
                       (VeBRDR_b_PsvCoolDiagEnblPre_tmp_0 != 0U)) ||
                      (KeBRDR_b_LTAPFltDtctDsbl_PsvCool))) && ((((((sint32)
                         BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 1) <=
                       0) || ((((uint32)
                         BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 64U)
                       != 0U)) || (KeBRDR_b_LTAP_TmpFltDsbl_PsvCool))) &&
                   (((uint32)rtb_TmpSignalConversionAtVeTHMR_e_BatThr) ==
                    CeTHMR_e_PassiveCooling)) && ((((((sint32)
                       BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) <= 0) ||
                    ((((uint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) !=
                     0U)) || (KeBRDR_b_BTIS_TmpFltDsbl_PsvCool))) &&
                 (VeBRDR_b_BPCM_NoCommErr)) && (((((uint32)
                    rtb_VeBRDR_b_BPCM_LIN_LOC) == CeBPCR_e_LIN_BusOff_Disabled) ||
                  (KeBRDR_b_LINBusOff_PsvCool)) &&
                 ((!rtb_VeBRDR_b_BPCM_LIN_LOC_FA) ||
                  (KeBRDR_b_LINBusOffFA_PsvCool)))) && (((((uint32)
                   rtb_VeBRDR_b_LTAP_LOC) == CeBPCR_e_LOC_BCP_False) ||
                 (KeBRDR_b_LTAP_LOC_PsvCool)) && ((!rtb_VeBRDR_b_LTAP_LOC_FA) ||
                 (KeBRDR_b_LTAP_LOCFA_PsvCool)))) &&
              ((((!rtb_TmpSignalConversionAtVePMIR_b_LTAc_a) && (((uint32)
                   rtb_TmpSignalConversionAtVePMIR_e_LTActv) ==
                  CePMPR_e_FTSNA_False)) || (KeBRDR_b_LTAP_DryRunDsbl_PsvCool)) &&
               (((rtb_Logical_d_tmp <= 0) || (tmpRead_b != 0U)) ||
                (KeBRDR_b_LTAP_ClntLoDsbl_PsvCool)))) && ((!rtb_AND_f2) ||
              (KeBRDR_b_Dsbl_RadFanFlt_PsvCool))) &&
            ((((!rtb_VariantMerge_For_Variant_Source_V_os) &&
               (!rtb_VariantMerge_For_Variant_Source_Va_h)) ||
              (KeBRDR_b_DsblPECTOSFA_PsvCool)) && ((((((sint32)
                  BRDR_ac_DW.StatusByte_CT_SnsrPerf) & 1) <= 0) || ((((uint32)
                  BRDR_ac_DW.StatusByte_CT_SnsrPerf) & 64U) != 0U)) ||
              (KeBRDR_b_Dsbl_PECTOSPerf_PsvCool)))) &&
           ((((!rtb_VariantMerge_For_Variant_Source_Va_o) &&
              (!rtb_VariantMerge_For_Variant_Source_V_dd)) ||
             (KeBRDR_b_DsblPPCTISFA_PsvCool)) && ((((((sint32)
                 BRDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 1) <= 0) ||
              ((((uint32)BRDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 64U) !=
               0U)) || (KeBRDR_b_Dsbl_PPCTISPerf_PsvCool)))) &&
          (((((((((((sint32)BRDR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf)
                   & 1) <= 0) || ((((uint32)
                    BRDR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf) & 64U)
                  != 0U)) || (KeBRDR_b_DsblPPRat_PsvCool)) &&
               (((VeBRDR_b_PsvCoolDiagEnblPre_tmp <= 0) ||
                 (VeBRDR_b_PsvCoolDiagEnblPre_tmp_0 != 0U)) ||
                (KeBRDR_b_Dsbl_PPPerf_PsvCool))) &&
              ((!rtb_RelationalOperator3_aw) || (KeBRDR_b_Dsbl_PPTempFAPsvCool)))
             && ((((((sint32)BRDR_ac_DW.StatusByte_LIN1_BusOff) & 1) <= 0) ||
                  ((((uint32)BRDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) != 0U)) ||
                 (KeBRDR_b_Dsbl_LIN1LOC_PsvCool))) && ((((((sint32)
                 BRDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA) & 1) <= 0) ||
              ((((uint32)BRDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA) & 64U)
               != 0U)) || (KeBRDR_b_Dsbl_PPLOC_PsvCool))) && (((((((sint32)
                 BRDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 1) <= 0) ||
              ((((uint32)BRDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 64U)
               != 0U)) && (!rtb_OR1_fq)) || (KeBRDR_b_Dsbl_PPDryRun_PsvCool)))) &&
         (rtb_UnitDelay1_g2 && (BRDR_ac_DW.UnitDelay_DSTATE_p <= 0.0F)));

    /* End of Outputs for SubSystem: '<S780>/Timer Retrigger Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S784>/EdgeRising' */
    /* Logic: '<S823>/OR1' incorporates:
     *  UnitDelay: '<S823>/Unit Delay'
     */
    rtb_OR1_fq = !BRDR_ac_DW.UnitDelay_DSTATE_bo2;

    /* Update for UnitDelay: '<S823>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_bo2 = VeBRDR_b_PsvCoolDiagEnblPre;

    /* Outputs for Atomic SubSystem: '<S784>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S827>/Switch1' incorporates:
     *  Constant: '<S826>/Calib'
     *  Logic: '<S823>/AND'
     *  Switch: '<S827>/Switch2'
     *  UnitDelay: '<S827>/Unit Delay'
     */
    if ((VeBRDR_b_PsvCoolDiagEnblPre) && rtb_OR1_fq)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_h = KeBRDR_t_PsvCoolDly_Tm;
    }
    else
    {
        if (VeBRDR_b_PsvCoolDiagEnblPre)
        {
            /* UnitDelay: '<S827>/Unit Delay' incorporates:
             *  Constant: '<S824>/Calib'
             *  Constant: '<S827>/Constant Value4'
             *  MinMax: '<S827>/Maximum'
             *  Sum: '<S827>/Subtraction'
             *  Switch: '<S827>/Switch2'
             */
            BRDR_ac_DW.UnitDelay_DSTATE_h = fmaxf(BRDR_ac_DW.UnitDelay_DSTATE_h
                - HeBRDR_t_MedTEH, 0.0F);
        }
    }

    /* End of Switch: '<S827>/Switch1' */
    /* End of Outputs for SubSystem: '<S784>/Timer Retrigger Reset Enabled' */
    /* End of Outputs for SubSystem: '<S784>/EdgeRising' */

    /* Switch: '<S784>/Switch1' incorporates:
     *  Constant: '<S825>/Calib'
     */
    if (KeBRDR_b_PsvCoolDlyEnbl)
    {
        /* Outputs for Atomic SubSystem: '<S784>/Timer Retrigger Reset Enabled' */
        /* VariantMerge generated from: '<S570>/PsvCoolDiagEnbl' incorporates:
         *  Constant: '<S827>/Constant Value2'
         *  Logic: '<S784>/Logical16'
         *  Logic: '<S784>/Logical24'
         *  RelationalOperator: '<S827>/Greater  Than1'
         *  UnitDelay: '<S827>/Unit Delay'
         */
        VeBRDR_b_PsvCoolDiagEnbl = ((VeBRDR_b_PsvCoolDiagEnblPre) &&
            (BRDR_ac_DW.UnitDelay_DSTATE_h <= 0.0F));

        /* End of Outputs for SubSystem: '<S784>/Timer Retrigger Reset Enabled' */
    }
    else
    {
        /* VariantMerge generated from: '<S570>/PsvCoolDiagEnbl' */
        VeBRDR_b_PsvCoolDiagEnbl = VeBRDR_b_PsvCoolDiagEnblPre;
    }

    /* End of Switch: '<S784>/Switch1' */

    /* RelationalOperator: '<S838>/Relational Operator3' incorporates:
     *  Constant: '<S838>/Constant3'
     */
    rtb_RelationalOperator3_aw = (rtb_RelationalOperator3_a_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S838>/EdgeFalling1' */
    /* Logic: '<S838>/Logical Operator' incorporates:
     *  Logic: '<S841>/OR1'
     */
    rtb_AND_f2 = !rtb_RelationalOperator3_aw;

    /* End of Outputs for SubSystem: '<S838>/EdgeFalling1' */

    /* Logic: '<S838>/Logical1' incorporates:
     *  Constant: '<S835>/Calib'
     *  Constant: '<S837>/Calib'
     *  Constant: '<S838>/Constant1'
     *  Logic: '<S771>/Logical Operator1'
     *  Logic: '<S838>/Logical Operator'
     *  Logic: '<S838>/Logical10'
     *  Logic: '<S838>/Logical12'
     *  RelationalOperator: '<S838>/Relational Operator1'
     */
    rtb_OR1_fq = (((VeBRDR_b_PsvCoolDiagEnbl) && (KeBRDR_b_BattPsvCool_XYEnbl)) &&
                  ((!KeBRDR_b_BattCoolPsv_LtchEnbl) || ((rtb_Logical1_hj_tmp ==
                     0U) || rtb_AND_f2)));

    /* Outputs for Atomic SubSystem: '<S770>/EdgeRising' */
    /* Logic: '<S829>/OR1' incorporates:
     *  UnitDelay: '<S829>/Unit Delay'
     */
    rtb_UnitDelay1_g2 = !BRDR_ac_DW.UnitDelay_DSTATE_ci;

    /* Update for UnitDelay: '<S829>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_ci = VeBRDR_b_PsvCoolDiagEnbl;

    /* Outputs for Enabled SubSystem: '<S770>/BTIS_Set' */
    BRDR_ac_BTIS_Set((VeBRDR_b_PsvCoolDiagEnbl) && rtb_UnitDelay1_g2,
                     rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat,
                     &BRDR_ac_B.BTIS_Set_a);

    /* End of Outputs for SubSystem: '<S770>/BTIS_Set' */
    /* End of Outputs for SubSystem: '<S770>/EdgeRising' */

    /* Sum: '<S770>/Sum1' incorporates:
     *  Logic: '<S829>/AND'
     */
    VeBRDR_T_BTISDelta_Psv = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat -
        BRDR_ac_B.BTIS_Set_a.Gain;

    /* RelationalOperator: '<S770>/Comparison2' incorporates:
     *  Constant: '<S830>/Calib'
     */
    VeBRDR_b_BTIS_CoolPerfThSet_Psv = (VeBRDR_T_BTISDelta_Psv >=
        KeBRDR_T_BTIS_CoolPerfTh);

    /* Logic: '<S770>/Logical2' incorporates:
     *  Constant: '<S831>/Calib'
     */
    VeBRDR_b_BTIS_CoolPerfSymp = ((VeBRDR_b_BTIS_CoolPerfThSet_Psv) &&
        (KeBRDR_b_EnblPsvCoolDiag));

    /* Outputs for Atomic SubSystem: '<S838>/EdgeFalling1' */
    /* Logic: '<S841>/AND' incorporates:
     *  UnitDelay: '<S841>/Unit Delay'
     */
    rtb_AND_f2 = (rtb_AND_f2 && (BRDR_ac_DW.UnitDelay_DSTATE_n1));

    /* Update for UnitDelay: '<S841>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_n1 = rtb_RelationalOperator3_aw;

    /* End of Outputs for SubSystem: '<S838>/EdgeFalling1' */

    /* Logic: '<S838>/Logical5' */
    rtb_RelationalOperator3_aw = ((VeBRDR_b_ResetCnts) || rtb_AND_f2);

    /* Outputs for Atomic SubSystem: '<S840>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S840>/Counter Reset  Enabled ' */
    /* Switch: '<S847>/Switch1' incorporates:
     *  Constant: '<S836>/Calib'
     *  Logic: '<S771>/Logical Operator2'
     *  Logic: '<S840>/Fail Counter Reset'
     *  Logic: '<S840>/NOT6'
     *  Switch: '<S847>/Switch2'
     *  Switch: '<S848>/Switch1'
     *  UnitDelay: '<S840>/Unit Delay'
     *  UnitDelay: '<S840>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_aw || (BRDR_ac_DW.UnitDelay_DSTATE_fp)) ||
            (BRDR_ac_DW.UnitDelay1_DSTATE_o))
    {
        /* Switch: '<S847>/Switch1' incorporates:
         *  Constant: '<S847>/Constant Value2'
         */
        VeBRDR_Cnt_PsvCoolPerf_FailCnt = 0U;

        /* Switch: '<S848>/Switch1' incorporates:
         *  Constant: '<S848>/Constant Value2'
         */
        VeBRDR_Cnt_PsvCoolPerf_SmplCnt = 0U;
    }
    else
    {
        if (rtb_OR1_fq && ((VeBRDR_b_BTIS_CoolPerfSymp) &&
                           (KeBRDR_b_BattPsvCool_FltEnbl)))
        {
            /* Switch: '<S847>/Switch1' incorporates:
             *  Constant: '<S847>/Constant Value1'
             *  Sum: '<S847>/Subtraction'
             *  Switch: '<S847>/Switch2'
             *  UnitDelay: '<S847>/Unit Delay'
             */
            VeBRDR_Cnt_PsvCoolPerf_FailCnt = (uint16)(((uint32)
                VeBRDR_Cnt_PsvCoolPerf_FailCnt) + 1U);
        }

        /* Switch: '<S848>/Switch2' */
        if (rtb_OR1_fq)
        {
            /* Switch: '<S848>/Switch1' incorporates:
             *  Constant: '<S848>/Constant Value1'
             *  Sum: '<S848>/Subtraction'
             *  Switch: '<S848>/Switch2'
             *  UnitDelay: '<S848>/Unit Delay'
             */
            VeBRDR_Cnt_PsvCoolPerf_SmplCnt = (uint16)(((uint32)
                VeBRDR_Cnt_PsvCoolPerf_SmplCnt) + 1U);
        }

        /* End of Switch: '<S848>/Switch2' */
    }

    /* End of Switch: '<S847>/Switch1' */
    /* End of Outputs for SubSystem: '<S840>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S840>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S840>/Greater Than or Equal ' incorporates:
     *  Constant: '<S833>/Calib'
     */
    BRDR_ac_DW.UnitDelay1_DSTATE_o = (VeBRDR_Cnt_PsvCoolPerf_FailCnt >=
        KeBRDR_Cnt_PsvCool_FailCnt);

    /* Logic: '<S840>/NOT5' incorporates:
     *  Constant: '<S834>/Calib'
     *  Logic: '<S840>/NOT3'
     *  RelationalOperator: '<S840>/Less Than  or Equal'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_fp = ((VeBRDR_Cnt_PsvCoolPerf_SmplCnt >=
        KeBRDR_Cnt_PsvCool_SmpCnt) && (!BRDR_ac_DW.UnitDelay1_DSTATE_o));

    /* Switch: '<S853>/Switch1' incorporates:
     *  Constant: '<S846>/Constant Value'
     *  DataStoreWrite: '<S771>/Data Store Write3'
     *  Switch: '<S852>/Switch1'
     */
    if (VeBRDR_b_ResetFOMs)
    {
        BRDR_ac_DW.NeBRDR_Cnt_ChillPerf_MFOP = 0U;
    }
    else
    {
        if (BRDR_ac_DW.UnitDelay_DSTATE_fp)
        {
            /* MinMax: '<S846>/Minimum2' incorporates:
             *  DataStoreRead: '<S771>/Data Store Read1'
             *  Switch: '<S852>/Switch1'
             */
            if (VeBRDR_Cnt_PsvCoolPerf_FailCnt >
                    BRDR_ac_DW.NeBRDR_Cnt_ChillPerf_MFOP)
            {
                /* DataStoreWrite: '<S771>/Data Store Write3' incorporates:
                 *  Switch: '<S852>/Switch1'
                 */
                BRDR_ac_DW.NeBRDR_Cnt_ChillPerf_MFOP =
                    VeBRDR_Cnt_PsvCoolPerf_FailCnt;
            }

            /* End of MinMax: '<S846>/Minimum2' */
        }
    }

    /* End of Switch: '<S853>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S838>/Fail' */
    BRDR_ac_Fail(BRDR_ac_DW.UnitDelay1_DSTATE_o,
                 &BRDR_ac_B.VariantMergeForOutporte_FaultSts_BattCoo);

    /* End of Outputs for SubSystem: '<S838>/Fail' */

    /* Outputs for Enabled SubSystem: '<S838>/Init' */
    BRDR_ac_Init_e(rtb_RelationalOperator3_aw,
                   &BRDR_ac_B.VariantMergeForOutporte_FaultSts_BattCoo);

    /* End of Outputs for SubSystem: '<S838>/Init' */

    /* Outputs for Enabled SubSystem: '<S838>/Pass' */
    BRDR_ac_Pass(BRDR_ac_DW.UnitDelay_DSTATE_fp,
                 &BRDR_ac_B.VariantMergeForOutporte_FaultSts_BattCoo);

    /* End of Outputs for SubSystem: '<S838>/Pass' */

    /* RelationalOperator: '<S838>/Relational Operator' incorporates:
     *  Constant: '<S842>/Constant'
     *  VariantMerge generated from: '<S570>/e_FaultSts_BattCool_Psv'
     */
    VeBRDR_b_PsvCoolPerf_FltDtct = (((uint32)
        BRDR_ac_B.VariantMergeForOutporte_FaultSts_BattCoo) == CeDFIB_e_Fail);
    VeBRDR_b_PsvCoolDiagEnblPre_tmp = ((sint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 1;
    rtb_RelationalOperator3_a_tmp = ((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U;

    /* VariantMerge generated from: '<S558>/BattCool_Perf_IUMPR' incorporates:
     *  Constant: '<S724>/Constant'
     *  Constant: '<S725>/Constant'
     *  Constant: '<S726>/Constant1'
     *  Constant: '<S726>/Constant2'
     *  Constant: '<S727>/Constant1'
     *  Constant: '<S727>/Constant2'
     *  Constant: '<S728>/Constant1'
     *  Constant: '<S728>/Constant2'
     *  Constant: '<S729>/Constant1'
     *  Constant: '<S729>/Constant2'
     *  Constant: '<S730>/Constant1'
     *  Constant: '<S730>/Constant2'
     *  Constant: '<S731>/Constant1'
     *  Constant: '<S731>/Constant2'
     *  Constant: '<S732>/Constant1'
     *  Constant: '<S732>/Constant2'
     *  Constant: '<S733>/Constant1'
     *  Constant: '<S733>/Constant2'
     *  Constant: '<S734>/Constant1'
     *  Constant: '<S734>/Constant2'
     *  Constant: '<S735>/Constant1'
     *  Constant: '<S735>/Constant2'
     *  Constant: '<S736>/Constant1'
     *  Constant: '<S736>/Constant2'
     *  Constant: '<S737>/Constant1'
     *  Constant: '<S737>/Constant2'
     *  Constant: '<S738>/Constant1'
     *  Constant: '<S738>/Constant2'
     *  Constant: '<S739>/Constant1'
     *  Constant: '<S739>/Constant2'
     *  Constant: '<S740>/Constant1'
     *  Constant: '<S740>/Constant2'
     *  Constant: '<S741>/Constant1'
     *  Constant: '<S741>/Constant2'
     *  Constant: '<S742>/Calib'
     *  Constant: '<S743>/Calib'
     *  Constant: '<S744>/Calib'
     *  Constant: '<S745>/Calib'
     *  Constant: '<S746>/Calib'
     *  Constant: '<S747>/Calib'
     *  Constant: '<S748>/Calib'
     *  Constant: '<S749>/Calib'
     *  Constant: '<S750>/Calib'
     *  Constant: '<S751>/Calib'
     *  Constant: '<S752>/Calib'
     *  Constant: '<S753>/Calib'
     *  Constant: '<S754>/Calib'
     *  Constant: '<S755>/Calib'
     *  Constant: '<S756>/Calib'
     *  Constant: '<S757>/Calib'
     *  Constant: '<S758>/Calib'
     *  Constant: '<S759>/Calib'
     *  Constant: '<S760>/Calib'
     *  Constant: '<S761>/Calib'
     *  Constant: '<S762>/Calib'
     *  Constant: '<S763>/Calib'
     *  DataStoreRead: '<S728>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S729>/StatusByte_BattCoolPmpPerf'
     *  DataStoreRead: '<S731>/StatusByte_CT_SnsrPerf'
     *  DataStoreRead: '<S732>/StatusByte_CoolOutTempSnsCkt'
     *  DataStoreRead: '<S734>/StatusByte_HB_CT_SnsrPerf'
     *  DataStoreRead: '<S735>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S737>/StatusByte_LostCommMtrElectCoolPmpA'
     *  DataStoreRead: '<S738>/StatusByte_MtrElect_CT_SnsrPerf'
     *  DataStoreRead: '<S739>/StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S740>/StatusByte_MtrElect_CoolPumAOvrSpd'
     *  DataStoreRead: '<S741>/StatusByte_ThrmlRlyCtrlCkt'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC'
     */
    BRDR_ac_B.VariantMergeForOutportBattCool_Perf_IUMP =
        (((((((((((((((VeBRDR_b_PsvCoolDiagEnblPre_tmp > 0) &&
                      (rtb_RelationalOperator3_a_tmp == 0U)) &&
                     (KeBRDR_b_EnblLTAPPerf_CoolPerf_IUMPR)) ||
                    (!VeBRDR_b_BPCM_NoCommErr)) || ((((((sint32)
                        BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 1) > 0)
                     && ((((uint32)
                           BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 64U)
                         == 0U)) && (KeBRDR_b_EnblLTAPTmp_CoolPerf_IUMPR))) ||
                  ((((((sint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) > 0) &&
                    ((((uint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) ==
                     0U)) && (KeBRDR_b_EnblBTIS_CoolPerf_IUMPR))) ||
                 ((((((sint32)BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) > 0) &&
                   ((((uint32)BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) ==
                    0U)) && (KeBRDR_b_EnblRlyCktFlt_CoolPerf_IUMPR))) ||
                ((((((sint32)BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1) > 0) &&
                  ((((uint32)BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) ==
                   0U)) && (KeBRDR_b_EnblBTOSFlt_CoolPerf_IUMPR))) ||
               (((rtb_Logical_d_tmp > 0) && (tmpRead_b == 0U)) &&
                (KeBRDR_b_EnblBatClntLo_CoolPerf_IUMPR))) ||
              ((((((rtb_VariantMerge_For_Variant_Source_Va_f ||
                    rtb_VariantMerge_For_Variant_Source_Va_c) &&
                   (KeBRDR_b_EnblPressSnrCktFlt_CoolPerf_IUMPR)) ||
                  (((rtb_Logical_d_tmp_0 > 0) && (rtb_Logical_d_tmp_1 == 0U)) &&
                   (KeBRDR_b_EnblPressSnrPerfFlt_CoolPerf_IUMPR))) ||
                 (((rtb_Logical_d_tmp_2 > 0) && (rtb_Logical_d_tmp_3 == 0U)) &&
                  (KeBRDR_b_EnblLOCEAC_CoolPerf_IUMPR))) ||
                (((rtb_Logical_d_tmp_4 > 0) && (rtb_Logical_d_tmp_5 == 0U)) &&
                 (KeBRDR_b_EnblACPerf_CoolPerf_IUMPR))) ||
               (rtb_VariantMerge_For_Variant_Source_V_hw &&
                (KeBRDR_b_EnblChillVlvCktFlt_CoolPerf_IUMPR)))) || (((((uint32)
                 rtb_VeBRDR_b_BPCM_LIN_LOC) != CeBPCR_e_LIN_BusOff_Disabled) ||
               rtb_VeBRDR_b_BPCM_LIN_LOC_FA) &&
              (KeBRDR_b_EnblBPCMLINBusOff_CoolPerf_IUMPR))) || (((((uint32)
                rtb_VeBRDR_b_LTAP_LOC) != CeBPCR_e_LOC_BCP_False) ||
              rtb_VeBRDR_b_LTAP_LOC_FA) && (KeBRDR_b_EnblLTAP_LOC_CoolPerf_IUMPR)))
           || (((rtb_VariantMerge_For_Variant_Source_Va_h ||
                 rtb_VariantMerge_For_Variant_Source_V_os) &&
                (KeBRDR_b_EnblPECTOSCktFlt_CoolPerf_IUMPR)) || ((((((sint32)
                 BRDR_ac_DW.StatusByte_CT_SnsrPerf) & 1) > 0) && ((((uint32)
                 BRDR_ac_DW.StatusByte_CT_SnsrPerf) & 64U) == 0U)) &&
             (KeBRDR_b_EnblPECTOSPerf_CoolPerf_IUMPR)))) ||
          (((rtb_VariantMerge_For_Variant_Source_Va_o ||
             rtb_VariantMerge_For_Variant_Source_V_dd) &&
            (KeBRDR_b_EnblPPCTISCktFlt_CoolPerf_IUMPR)) || ((((((sint32)
                BRDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 1) > 0) &&
             ((((uint32)BRDR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 64U) == 0U))
            && (KeBRDR_b_EnblPPCTISPerf_CoolPerf_IUMPR)))) || ((((((((((sint32)
                  BRDR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf) & 1) > 0)
               && ((((uint32)BRDR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf)
                    & 64U) == 0U)) && (KeBRDR_b_EnblPsvPmpRat_CoolPerf_IUMPR)) ||
             (((VeBRDR_b_PsvCoolDiagEnblPre_tmp > 0) &&
               (rtb_RelationalOperator3_a_tmp == 0U)) &&
              (KeBRDR_b_EnblPsvPmpPerf_CoolPerf_IUMPR))) || ((((((sint32)
                 BRDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
                 BRDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U)) &&
             (KeBRDR_b_EnblLin1BusOff_CoolPerf_IUMPR))) || ((((((sint32)
                BRDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA) & 1) > 0) &&
             ((((uint32)BRDR_ac_DW.StatusByte_LostCommMtrElectCoolPmpA) & 64U) ==
              0U)) && (KeBRDR_b_EnblPsvPmpLOC_CoolPerf_IUMPR))) || ((((((sint32)
               BRDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 1) > 0) &&
            ((((uint32)BRDR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 64U) ==
             0U)) && (KeBRDR_b_EnblPsvPmpDryRun_CoolPerf_IUMPR))));

#endif

    /* End of RelationalOperator: '<S567>/Comparison3' */
    /* End of Outputs for SubSystem: '<S570>/If_PassiveCooling' */
    /* End of Outputs for SubSystem: '<S562>/PassiveCooling' */

    /* If: '<S562>/If1' */
    if (rtb_LogicalOperator_ig)
    {
        /* Outputs for IfAction SubSystem: '<S562>/ActivePath_Enabled' incorporates:
         *  ActionPort: '<S565>/Action Port'
         */
        /* VariantMerge generated from: '<S558>/VeBRDR_e_FaultSts_BattCool' incorporates:
         *  Inport: '<S565>/e_FaultSts_BattCool_Actv'
         *  Merge: '<S581>/Merge'
         */
        BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_l = BRDR_ac_B.Merge;

        /* End of Outputs for SubSystem: '<S562>/ActivePath_Enabled' */
    }
    else if (VeBRDR_b_PsvCoolDiagEnbl)
    {
        /* Outputs for IfAction SubSystem: '<S562>/PassivePath_Enabled ' incorporates:
         *  ActionPort: '<S571>/Action Port'
         */
        /* VariantMerge generated from: '<S558>/VeBRDR_e_FaultSts_BattCool' incorporates:
         *  Inport: '<S571>/e_FaultSts_BattCool_Psv'
         *  VariantMerge generated from: '<S570>/e_FaultSts_BattCool_Psv'
         */
        BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_l =
            BRDR_ac_B.VariantMergeForOutporte_FaultSts_BattCoo;

        /* End of Outputs for SubSystem: '<S562>/PassivePath_Enabled ' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S562>/NotEnabled' incorporates:
         *  ActionPort: '<S569>/Action Port'
         */
        /* VariantMerge generated from: '<S558>/VeBRDR_e_FaultSts_BattCool' incorporates:
         *  Constant: '<S764>/Constant'
         *  SignalConversion generated from: '<S569>/e_FaultSts_BattCool_OutNotEnbl'
         */
        BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_l = CeDFIB_e_Init;

        /* End of Outputs for SubSystem: '<S562>/NotEnabled' */
    }

    /* End of If: '<S562>/If1' */

    /* SignalConversion generated from: '<S562>/Variant Source2' */
#if Rte_SysCon_Variant_BRDR_3

    /* VariantMerge generated from: '<S558>/BattCool_Perf_IUMPR' incorporates:
     *  Constant: '<S568>/FALSE Constant'
     */
    BRDR_ac_B.VariantMergeForOutportBattCool_Perf_IUMP = false;

#endif

    /* End of SignalConversion generated from: '<S562>/Variant Source2' */
    /* End of Outputs for SubSystem: '<S558>/If_Chiller_PerfDiag' */
#else

    /* Outputs for Atomic SubSystem: '<S558>/Else_ChillPerfDiag' */
    /* VariantMerge generated from: '<S558>/VeBRDR_e_FaultSts_BattCool' incorporates:
     *  Constant: '<S563>/Constant'
     */
    BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_l = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S558>/BattCool_Perf_IUMPR' incorporates:
     *  Constant: '<S561>/FALSE Constant'
     */
    BRDR_ac_B.VariantMergeForOutportBattCool_Perf_IUMP = false;

    /* End of Outputs for SubSystem: '<S558>/Else_ChillPerfDiag' */
#endif

    /* End of Outputs for SubSystem: '<S10>/Chiller_PerfDiag' */

    /* SignalConversion generated from: '<S4>/VeBRDR_Pct_HT_CabVlvSts_AD' */
#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3 && Rte_SysCon_Variant_BRDR_1 && Rte_SysCon_Variant_BRDR_21

    /* VariantMerge generated from: '<S4>/VeBRDR_Pct_HT_CabVlvSts_AD' */
    rtb_VeBRDR_Pct_HT_CabVlvSts_AD = VeBRDR_Pct_HT_CabVlvSts_AD;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_Pct_HT_CabVlvSts_AD' */

    /* SignalConversion generated from: '<S4>/VeBRDR_Pct_HT_CabVlvSts_AD' */
#if !(!Rte_SysCon_Variant_BRDR_14) || !(!Rte_SysCon_Variant_BRDR_3) || !Rte_SysCon_Variant_BRDR_1 || !Rte_SysCon_Variant_BRDR_21

    /* VariantMerge generated from: '<S4>/VeBRDR_Pct_HT_CabVlvSts_AD' */
    rtb_VeBRDR_Pct_HT_CabVlvSts_AD = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S4>/VeBRDR_Pct_HT_CabVlvSts_AD' */

    /* Outputs for Atomic SubSystem: '<S10>/HeatBatt_Perf_Diag' */
#if Rte_SysCon_Variant_BRDR_21

    /* Outputs for Atomic SubSystem: '<S559>/If_HeatBatt_Perf_Diag' */
    /* RelationalOperator: '<S908>/Comparison5' incorporates:
     *  Constant: '<S926>/Calib'
     *  Constant: '<S927>/Calib'
     *  Constant: '<S932>/Constant1'
     *  Constant: '<S932>/Constant2'
     *  Constant: '<S933>/Constant1'
     *  Constant: '<S933>/Constant2'
     *  DataStoreRead: '<S932>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     *  DataStoreRead: '<S933>/StatusByte_HB_CT_SnsrPerf'
     *  Logic: '<S869>/Logical1'
     *  Logic: '<S908>/Logical21'
     *  Logic: '<S908>/Logical5'
     *  Logic: '<S908>/Logical6'
     *  Logic: '<S909>/Logical12'
     *  Logic: '<S909>/Logical16'
     *  Logic: '<S909>/Logical2'
     *  Logic: '<S909>/Logical4'
     *  Logic: '<S909>/Logical5'
     *  Logic: '<S909>/Logical6'
     *  Logic: '<S909>/Logical7'
     *  Logic: '<S909>/Logical8'
     *  Logic: '<S909>/Logical9'
     *  Logic: '<S915>/Logical Operator'
     *  Logic: '<S916>/Logical Operator'
     *  Logic: '<S917>/Logical Operator'
     *  Logic: '<S918>/Logical Operator'
     *  Logic: '<S919>/Logical Operator'
     *  Logic: '<S920>/Logical Operator'
     *  Logic: '<S923>/Logical14'
     *  Logic: '<S923>/Logical15'
     *  Logic: '<S923>/Logical17'
     *  Logic: '<S924>/Logical1'
     *  Logic: '<S924>/Logical2'
     *  Logic: '<S924>/Logical23'
     *  Logic: '<S924>/Logical25'
     *  Logic: '<S930>/Logical15'
     *  Logic: '<S930>/Logical17'
     *  Logic: '<S930>/Logical18'
     *  Logic: '<S932>/Logical Operator'
     *  Logic: '<S933>/Logical Operator'
     *  Logic: '<S935>/Logical Operator'
     *  RelationalOperator: '<S908>/Comparison1'
     *  RelationalOperator: '<S908>/Comparison2'
     *  RelationalOperator: '<S908>/Comparison3'
     *  RelationalOperator: '<S910>/Comparison4'
     *  RelationalOperator: '<S915>/Relational Operator1'
     *  RelationalOperator: '<S915>/Relational Operator2'
     *  RelationalOperator: '<S916>/Relational Operator1'
     *  RelationalOperator: '<S916>/Relational Operator2'
     *  RelationalOperator: '<S917>/Relational Operator1'
     *  RelationalOperator: '<S917>/Relational Operator2'
     *  RelationalOperator: '<S918>/Relational Operator1'
     *  RelationalOperator: '<S918>/Relational Operator2'
     *  RelationalOperator: '<S919>/Relational Operator1'
     *  RelationalOperator: '<S919>/Relational Operator2'
     *  RelationalOperator: '<S920>/Relational Operator1'
     *  RelationalOperator: '<S920>/Relational Operator2'
     *  RelationalOperator: '<S932>/Relational Operator1'
     *  RelationalOperator: '<S932>/Relational Operator2'
     *  RelationalOperator: '<S933>/Relational Operator1'
     *  RelationalOperator: '<S933>/Relational Operator2'
     *  RelationalOperator: '<S935>/Relational Operator1'
     *  RelationalOperator: '<S935>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S915>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S915>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S916>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S916>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S917>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S917>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S918>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S918>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S919>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S919>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S920>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S920>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S932>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S932>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S933>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S933>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S935>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S935>/Bitwise Operator2'
     *  Switch: '<S910>/Switch'
     *  Switch: '<S910>/Switch4'
     */
#if Rte_SysCon_Variant_BRDR_14 || Rte_SysCon_Variant_BRDR_3

    if (rtb_TmpSignalConversionAtVeTAIR_Pct_FrWy > KeBRDR_Pct_CPV_OpenThreshold)
    {
        if (KeBRDR_b_HeaterPerf_FSymp_FrstSnsr)
        {
            rtb_AND_cs = ((((((sint32)
                              BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf)
                             & 1) <= 0) || ((((uint32)
                              BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf)
                             & 64U) != 0U)) &&
                          (!rtb_VeBRDR_b_BattHtr_ClntTempOut_FA));
        }
        else
        {
            rtb_AND_cs = (((((((sint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1)
                             <= 0) || ((((uint32)
                               BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) !=
                             0U)) && (!rtb_VariantMerge_For_Variant_Source_V_cw))
                          && (!rtb_VariantMerge_For_Variant_Source_Va_a));
        }

        /* Switch: '<S910>/Switch5' incorporates:
         *  Constant: '<S927>/Calib'
         *  Constant: '<S928>/Calib'
         *  Constant: '<S932>/Constant1'
         *  Constant: '<S932>/Constant2'
         *  Constant: '<S933>/Constant1'
         *  Constant: '<S933>/Constant2'
         *  Constant: '<S935>/Constant1'
         *  Constant: '<S935>/Constant2'
         *  Constant: '<S936>/Constant1'
         *  Constant: '<S936>/Constant2'
         *  DataStoreRead: '<S932>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
         *  DataStoreRead: '<S933>/StatusByte_HB_CT_SnsrPerf'
         *  DataStoreRead: '<S935>/StatusByte_BattCoolPmpATempSnsrPerf'
         *  DataStoreRead: '<S936>/StatusByte_CT_SnsrPerf'
         *  Logic: '<S923>/Logical14'
         *  Logic: '<S923>/Logical15'
         *  Logic: '<S923>/Logical17'
         *  Logic: '<S924>/Logical1'
         *  Logic: '<S924>/Logical2'
         *  Logic: '<S924>/Logical23'
         *  Logic: '<S924>/Logical25'
         *  Logic: '<S931>/Logical1'
         *  Logic: '<S931>/Logical2'
         *  Logic: '<S931>/Logical23'
         *  Logic: '<S931>/Logical25'
         *  Logic: '<S932>/Logical Operator'
         *  Logic: '<S933>/Logical Operator'
         *  Logic: '<S936>/Logical Operator'
         *  RelationalOperator: '<S932>/Relational Operator1'
         *  RelationalOperator: '<S932>/Relational Operator2'
         *  RelationalOperator: '<S933>/Relational Operator1'
         *  RelationalOperator: '<S933>/Relational Operator2'
         *  RelationalOperator: '<S936>/Relational Operator1'
         *  RelationalOperator: '<S936>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S932>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S932>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S933>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S933>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S936>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S936>/Bitwise Operator2'
         */
        if (KeBRDR_b_HeaterPerf_FSymp_SecSnsr)
        {
            rtb_VM_Conditional_Signal_BPCM_Comm_0 = (((((((sint32)
                BRDR_ac_DW.StatusByte_CT_SnsrPerf) & 1) <= 0) || ((((uint32)
                BRDR_ac_DW.StatusByte_CT_SnsrPerf) & 64U) != 0U)) &&
                (!rtb_VariantMerge_For_Variant_Source_V_os)) &&
                (!rtb_VariantMerge_For_Variant_Source_Va_h));
        }
        else
        {
            rtb_VM_Conditional_Signal_BPCM_Comm_0 = ((((((sint32)
                BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 1) <= 0) ||
                ((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 64U)
                 != 0U)) && (!rtb_TmpSignalConversionAtVePMIR_b_LTActv));
        }

        /* End of Switch: '<S910>/Switch5' */

        /* Logic: '<S961>/Logical Operator4' incorporates:
         *  Logic: '<S910>/Logical23'
         */
        rtb_LogicalOperator4_p = (rtb_AND_cs &&
            rtb_VM_Conditional_Signal_BPCM_Comm_0);
    }
    else
    {
        if (KeBRDR_b_HeaterPerf_FSymp_FrstSnsr)
        {
            rtb_AND_cs = ((((((sint32)
                              BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf)
                             & 1) <= 0) || ((((uint32)
                              BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf)
                             & 64U) != 0U)) &&
                          (!rtb_VeBRDR_b_BattHtr_ClntTempOut_FA));
        }
        else
        {
            rtb_AND_cs = (((((((sint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1)
                             <= 0) || ((((uint32)
                               BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) !=
                             0U)) && (!rtb_VariantMerge_For_Variant_Source_V_cw))
                          && (!rtb_VariantMerge_For_Variant_Source_Va_a));
        }

        /* Switch: '<S910>/Switch2' incorporates:
         *  Constant: '<S929>/Calib'
         *  Constant: '<S932>/Constant1'
         *  Constant: '<S932>/Constant2'
         *  Constant: '<S933>/Constant1'
         *  Constant: '<S933>/Constant2'
         *  Constant: '<S934>/Constant1'
         *  Constant: '<S934>/Constant2'
         *  Constant: '<S935>/Constant1'
         *  Constant: '<S935>/Constant2'
         *  DataStoreRead: '<S932>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
         *  DataStoreRead: '<S933>/StatusByte_HB_CT_SnsrPerf'
         *  DataStoreRead: '<S934>/StatusByte_CoolOutTempSnsCkt'
         *  DataStoreRead: '<S935>/StatusByte_BattCoolPmpATempSnsrPerf'
         *  Logic: '<S923>/Logical14'
         *  Logic: '<S923>/Logical15'
         *  Logic: '<S923>/Logical17'
         *  Logic: '<S924>/Logical1'
         *  Logic: '<S924>/Logical2'
         *  Logic: '<S924>/Logical23'
         *  Logic: '<S924>/Logical25'
         *  Logic: '<S925>/Logical1'
         *  Logic: '<S925>/Logical2'
         *  Logic: '<S925>/Logical23'
         *  Logic: '<S925>/Logical25'
         *  Logic: '<S932>/Logical Operator'
         *  Logic: '<S933>/Logical Operator'
         *  Logic: '<S934>/Logical Operator'
         *  RelationalOperator: '<S932>/Relational Operator1'
         *  RelationalOperator: '<S932>/Relational Operator2'
         *  RelationalOperator: '<S933>/Relational Operator1'
         *  RelationalOperator: '<S933>/Relational Operator2'
         *  RelationalOperator: '<S934>/Relational Operator1'
         *  RelationalOperator: '<S934>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S932>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S932>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S933>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S933>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S934>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S934>/Bitwise Operator2'
         */
        if (KeBRDR_b_HeaterPerf_FSymp_SecSnsr_Clsd)
        {
            rtb_VM_Conditional_Signal_BPCM_Comm_0 = (((((((sint32)
                BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1) <= 0) ||
                ((((uint32)BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) != 0U))
                && (!rtb_VariantMerge_For_Variant_Source_Va_p)) &&
                (!rtb_VariantMerge_For_Variant_Source_V_h3));
        }
        else
        {
            rtb_VM_Conditional_Signal_BPCM_Comm_0 = ((((((sint32)
                BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 1) <= 0) ||
                ((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 64U)
                 != 0U)) && (!rtb_TmpSignalConversionAtVePMIR_b_LTActv));
        }

        /* End of Switch: '<S910>/Switch2' */

        /* Logic: '<S961>/Logical Operator4' incorporates:
         *  Logic: '<S910>/Logical25'
         */
        rtb_LogicalOperator4_p = (rtb_AND_cs &&
            rtb_VM_Conditional_Signal_BPCM_Comm_0);
    }

    /* Logic: '<S961>/Logical Operator4' incorporates:
     *  Constant: '<S911>/Constant'
     *  Constant: '<S912>/Constant'
     *  Constant: '<S913>/Calib'
     *  Constant: '<S914>/Calib'
     *  Constant: '<S915>/Constant1'
     *  Constant: '<S915>/Constant2'
     *  Constant: '<S916>/Constant1'
     *  Constant: '<S916>/Constant2'
     *  Constant: '<S917>/Constant1'
     *  Constant: '<S917>/Constant2'
     *  Constant: '<S918>/Constant1'
     *  Constant: '<S918>/Constant2'
     *  Constant: '<S919>/Constant1'
     *  Constant: '<S919>/Constant2'
     *  Constant: '<S920>/Constant1'
     *  Constant: '<S920>/Constant2'
     *  Constant: '<S921>/Calib'
     *  Constant: '<S922>/Calib'
     *  Constant: '<S926>/Calib'
     *  Constant: '<S927>/Calib'
     *  Constant: '<S932>/Constant1'
     *  Constant: '<S932>/Constant2'
     *  Constant: '<S933>/Constant1'
     *  Constant: '<S933>/Constant2'
     *  DataStoreRead: '<S915>/StatusByte_BattCoolPmpOveSpd'
     *  DataStoreRead: '<S916>/StatusByte_CoolantHeaterBPerf'
     *  DataStoreRead: '<S917>/StatusByte_HB_PSC_CtrlValACktPerf'
     *  DataStoreRead: '<S918>/StatusByte_LIN2_BusOff'
     *  DataStoreRead: '<S919>/StatusByte_LosCommHybPSCCtrlValA'
     *  DataStoreRead: '<S920>/StatusByte_LostCommHB_CooltHtr4'
     *  DataStoreRead: '<S932>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     *  DataStoreRead: '<S933>/StatusByte_HB_CT_SnsrPerf'
     *  Logic: '<S923>/Logical14'
     *  Logic: '<S923>/Logical15'
     *  Logic: '<S923>/Logical17'
     *  Logic: '<S924>/Logical1'
     *  Logic: '<S924>/Logical2'
     *  Logic: '<S924>/Logical23'
     *  Logic: '<S924>/Logical25'
     *  Logic: '<S932>/Logical Operator'
     *  Logic: '<S933>/Logical Operator'
     *  RelationalOperator: '<S932>/Relational Operator1'
     *  RelationalOperator: '<S932>/Relational Operator2'
     *  RelationalOperator: '<S933>/Relational Operator1'
     *  RelationalOperator: '<S933>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S932>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S932>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S933>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S933>/Bitwise Operator2'
     */
    rtb_LogicalOperator4_p = (((((((uint32)
        rtb_TmpSignalConversionAtVeTHMR_e_BatThr) == CeTHMR_e_Heating) &&
        (rtb_TmpSignalConversionAtVeTAIR_Pct_FrWy <= KeBRDR_Pct_CPV_Closed)) ||
        ((((uint32)rtb_TmpSignalConversionAtVeTHMR_e_BatThr) ==
          CeTHMR_e_ActvPsvHeating) && (rtb_TmpSignalConversionAtVeTAIR_Pct_FrWy >=
        KeBRDR_Pct_CPV_Open))) && rtb_LogicalOperator4_p) && ((((((((((sint32)
        BRDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 64U) != 0U)) && (((((sint32)
        BRDR_ac_DW.StatusByte_LIN2_BusOff) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) != 0U))) && (((((sint32)
        BRDR_ac_DW.StatusByte_LostCommHB_CooltHtr4) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_LostCommHB_CooltHtr4) & 64U) != 0U))) &&
        ((((((sint32)BRDR_ac_DW.StatusByte_HB_PSC_CtrlValACktPerf) & 1) <= 0) ||
          ((((uint32)BRDR_ac_DW.StatusByte_HB_PSC_CtrlValACktPerf) & 64U) != 0U))
         || (KeBRDR_b_HB_PSC_CtrlValADsbl))) && ((((((sint32)
        BRDR_ac_DW.StatusByte_LosCommHybPSCCtrlValA) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_LosCommHybPSCCtrlValA) & 64U) != 0U)) ||
        (KeBRDR_b_LosCommHybPSCDsbl))) && (((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 64U) != 0U))));

#endif

    /* End of RelationalOperator: '<S908>/Comparison5' */

    /* SignalConversion generated from: '<S865>/Variant Source1' */
#if Rte_SysCon_Variant_BRDR_3

    /* RelationalOperator: '<S859>/Comparison6' */
    rtb_Comparison6_h = rtb_LogicalOperator4_p;

#endif

    /* End of SignalConversion generated from: '<S865>/Variant Source1' */

    /* SignalConversion generated from: '<S865>/Variant Source1' */
#if Rte_SysCon_Variant_BRDR_14

    /* RelationalOperator: '<S859>/Comparison6' */
    rtb_Comparison6_h = rtb_LogicalOperator4_p;

#endif

    /* End of SignalConversion generated from: '<S865>/Variant Source1' */

    /* Switch: '<S1061>/Switch1' incorporates:
     *  Constant: '<S1064>/Calib'
     *  Inport: '<Root>/VeHTIR_P_HVC_Htr4PwrAct'
     *  Inport: '<Root>/VeHTIR_P_HVC_HtrPwrAct'
     *  Inport: '<Root>/VeHTRR_P_HVC_HtrPwrLimit'
     *  Inport: '<Root>/VeHTRR_P_HV_Htr4PwrLimit'
     */
#if !Rte_SysCon_Variant_BRDR_15 || (!Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3)

    if (KeBRDR_b_UseSharedHtr)
    {
        (void)Rte_Read_VeHTIR_P_HVC_HtrPwrAct_Value(&tmpRead_2);
        (void)Rte_Read_VeHTRR_P_HVC_HtrPwrLimit_Value((&(VeBRDR_P_HtrPower)));

        /* Switch: '<S862>/Switch1' incorporates:
         *  Constant: '<S1063>/Calib'
         *  Inport: '<Root>/VeHTIR_P_HVC_HtrPwrAct'
         *  Inport: '<Root>/VeHTRR_P_HVC_HtrPwrLimit'
         */
        if (KeBRDR_b_UseHtrPwrAct)
        {
            /* Switch: '<S1061>/Switch1' incorporates:
             *  Inport: '<Root>/VeHTRR_P_HV_Htr4PwrLimit'
             */
            VeBRDR_P_HtrPower = tmpRead_2;
        }

        /* End of Switch: '<S862>/Switch1' */
    }
    else
    {
        (void)Rte_Read_VeHTRR_P_HV_Htr4PwrLimit_Value((&(VeBRDR_P_HtrPower)));
        (void)Rte_Read_VeHTIR_P_HVC_Htr4PwrAct_Value(&tmpRead_2);

        /* Switch: '<S862>/Switch2' incorporates:
         *  Constant: '<S1062>/Calib'
         *  Inport: '<Root>/VeHTIR_P_HVC_Htr4PwrAct'
         *  Inport: '<Root>/VeHTRR_P_HV_Htr4PwrLimit'
         */
        if (KeBRDR_b_UseHtr4PwrAct)
        {
            /* Switch: '<S1061>/Switch1' */
            VeBRDR_P_HtrPower = tmpRead_2;
        }

        /* End of Switch: '<S862>/Switch2' */
    }

#endif

    /* End of Switch: '<S1061>/Switch1' */

    /* S-Function (sfix_bitop): '<S879>/Bitwise Operator2' incorporates:
     *  Logic: '<S868>/Logical1'
     *  Logic: '<S868>/Logical10'
     *  Logic: '<S868>/Logical14'
     *  Logic: '<S868>/Logical16'
     *  Logic: '<S868>/Logical25'
     *  Logic: '<S868>/Logical8'
     *  Logic: '<S868>/Logical9'
     *  Logic: '<S874>/Logical31'
     *  Logic: '<S874>/Logical32'
     *  Logic: '<S874>/Logical33'
     *  Logic: '<S874>/Logical34'
     *  Logic: '<S875>/Logical23'
     *  Logic: '<S875>/Logical25'
     *  Logic: '<S875>/Logical26'
     *  Logic: '<S875>/Logical29'
     *  Logic: '<S876>/Logical Operator'
     *  Logic: '<S876>/Logical Operator1'
     *  Logic: '<S876>/Logical Operator2'
     *  Logic: '<S876>/Logical Operator3'
     *  Logic: '<S876>/Logical1'
     *  Logic: '<S876>/Logical12'
     *  Logic: '<S876>/Logical13'
     *  Logic: '<S876>/Logical2'
     *  Logic: '<S876>/Logical3'
     *  Logic: '<S876>/Logical4'
     *  Logic: '<S876>/Logical5'
     *  Logic: '<S876>/Logical6'
     *  Logic: '<S876>/Logical7'
     *  Logic: '<S877>/Logical1'
     *  Logic: '<S877>/Logical19'
     *  Logic: '<S877>/Logical2'
     *  Logic: '<S879>/Logical Operator'
     *  Logic: '<S888>/Logical Operator'
     *  Logic: '<S888>/Logical2'
     *  Logic: '<S888>/Logical20'
     *  Logic: '<S888>/Logical3'
     *  Logic: '<S888>/Logical5'
     *  Logic: '<S889>/Logical Operator'
     *  Logic: '<S896>/Logical Operator'
     *  Logic: '<S897>/Logical Operator'
     *  Logic: '<S898>/Logical Operator'
     *  Logic: '<S902>/Logical Operator'
     *  Logic: '<S903>/Logical Operator'
     *  Logic: '<S905>/Logical Operator'
     *  RelationalOperator: '<S868>/Comparison1'
     *  RelationalOperator: '<S868>/Comparison3'
     *  RelationalOperator: '<S868>/Comparison4'
     *  RelationalOperator: '<S868>/Comparison5'
     *  RelationalOperator: '<S874>/Comparison3'
     *  RelationalOperator: '<S875>/Comparison3'
     *  RelationalOperator: '<S879>/Relational Operator1'
     *  RelationalOperator: '<S879>/Relational Operator2'
     *  RelationalOperator: '<S889>/Relational Operator1'
     *  RelationalOperator: '<S889>/Relational Operator2'
     *  RelationalOperator: '<S896>/Relational Operator1'
     *  RelationalOperator: '<S896>/Relational Operator2'
     *  RelationalOperator: '<S897>/Relational Operator1'
     *  RelationalOperator: '<S897>/Relational Operator2'
     *  RelationalOperator: '<S898>/Relational Operator1'
     *  RelationalOperator: '<S898>/Relational Operator2'
     *  RelationalOperator: '<S902>/Relational Operator1'
     *  RelationalOperator: '<S902>/Relational Operator2'
     *  RelationalOperator: '<S903>/Relational Operator1'
     *  RelationalOperator: '<S903>/Relational Operator2'
     *  RelationalOperator: '<S905>/Relational Operator1'
     *  RelationalOperator: '<S905>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S879>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S889>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S889>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S896>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S896>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S897>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S897>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S898>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S898>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S902>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S902>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S903>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S903>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S905>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S905>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3

    /* Logic: '<S868>/Logical16' incorporates:
     *  Constant: '<S879>/Constant1'
     *  Constant: '<S879>/Constant2'
     *  Constant: '<S884>/Calib'
     *  DataStoreRead: '<S879>/StatusByte_CoolantVlvA_Perf'
     */
    rtb_TmpSignalConversionAtVeCPDR_b_LTAP_F = ((((((sint32)
        BRDR_ac_DW.StatusByte_CoolantVlvA_Perf) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_CoolantVlvA_Perf) & 64U) != 0U)) ||
        (KeBRDR_b_CabinVlv_FltDtct));

    /* Logic: '<S877>/Logical19' incorporates:
     *  Constant: '<S902>/Constant1'
     *  Constant: '<S902>/Constant2'
     *  Constant: '<S903>/Constant1'
     *  Constant: '<S903>/Constant2'
     *  Constant: '<S904>/Calib'
     *  DataStoreRead: '<S902>/StatusByte_CoolHeaterAPerf'
     *  DataStoreRead: '<S903>/StatusByte_CoolantHeaterBPerf'
     */
    rtb_TmpSignalConversionAtVeBTRR_b_CellTe = (((((((sint32)
        BRDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 64U) != 0U)) || (((((sint32)
        BRDR_ac_DW.StatusByte_CoolHeaterAPerf) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_CoolHeaterAPerf) & 64U) != 0U))) ||
        (KeBRDR_b_ECHPerf_FltDtct));

    /* Logic: '<S888>/Logical Operator' incorporates:
     *  Constant: '<S905>/Constant1'
     *  Constant: '<S905>/Constant2'
     *  Constant: '<S906>/Calib'
     *  Constant: '<S907>/Calib'
     *  DataStoreRead: '<S905>/StatusByte_BattCoolPmpATempSnsrPerf'
     */
    rtb_TmpSignalConversionAtVeTMIR_b_MainRl = (((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 64U) != 0U)) ||
        (KeBRDR_b_LTAP_TmpFltDsbl)) &&
        ((!rtb_TmpSignalConversionAtVePMIR_b_LTActv) || (KeBRDR_b_LTAP_TmpFADsbl)));

    /* Logic: '<S876>/Logical Operator' incorporates:
     *  Constant: '<S896>/Constant1'
     *  Constant: '<S896>/Constant2'
     *  Constant: '<S897>/Constant1'
     *  Constant: '<S897>/Constant2'
     *  Constant: '<S898>/Constant1'
     *  Constant: '<S898>/Constant2'
     *  Constant: '<S899>/Calib'
     *  Constant: '<S900>/Calib'
     *  Constant: '<S901>/Calib'
     *  DataStoreRead: '<S896>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     *  DataStoreRead: '<S897>/StatusByte_CoolOutTempSnsCkt'
     *  DataStoreRead: '<S898>/StatusByte_HB_CT_SnsrPerf'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HV_B_h = (((((((((sint32)
        BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) != 0U)) &&
        (!rtb_TmpSignalConversionAtVeTRIR_b_HV_Bat)) ||
        (KeBRDR_b_HV_BTIS_FltDtctEnbl)) && (((((((sint32)
        BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 64U) != 0U)) &&
        (!rtb_TmpSignalConversionAtVeTRIR_b_HV_B_h)) ||
        (KeBRDR_b_HV_BTOS_FltDtctEnbl))) && (((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) & 1) <= 0) ||
        ((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) & 64U) !=
         0U)) && (!rtb_VeBRDR_b_BattHtr_ClntTempOut_FA)) ||
        (KeBRDR_b_HV_BHOS_FltDtctEnbl)));

    /* Logic: '<S868>/Logical8' incorporates:
     *  Constant: '<S880>/Calib'
     *  Constant: '<S886>/Calib'
     */
    rtb_VeBRDR_b_BattHtr_ClntTempOut_FA = ((rtb_VeBRDR_Pct_HT_CabVlvSts_AD >
        KeBRDR_Pct_HeatEx_OpnTresh) || (KeBRDR_b_HeatEx_OpnTreshEnbl));

    /* Logic: '<S868>/Logical9' incorporates:
     *  Constant: '<S881>/Calib'
     *  Constant: '<S885>/Calib'
     */
    rtb_VariantMerge_For_Variant_Source_Va_p =
        ((rtb_TmpSignalConversionAtVeBTRR_T_HV_Bat < KeBRDR_T_HVBatTempMax) ||
         (KeBRDR_b_HVBatTempMaxEnbl));

    /* RelationalOperator: '<S859>/Comparison6' incorporates:
     *  Constant: '<S878>/Constant'
     *  Constant: '<S882>/Calib'
     *  Constant: '<S883>/Calib'
     *  Constant: '<S887>/Calib'
     *  Constant: '<S889>/Constant1'
     *  Constant: '<S889>/Constant2'
     *  Constant: '<S890>/Constant'
     *  Constant: '<S891>/Calib'
     *  Constant: '<S892>/Calib'
     *  Constant: '<S893>/Constant'
     *  Constant: '<S894>/Calib'
     *  Constant: '<S895>/Calib'
     *  DataStoreRead: '<S889>/StatusByte_LIN1_BusOff'
     *  SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BattHtr_LOC'
     */
    rtb_Comparison6_h = (((((((((((rtb_TmpSignalConversionAtVeCPDR_b_LTAP_F &&
        rtb_TmpSignalConversionAtVeBTRR_b_CellTe) &&
        rtb_TmpSignalConversionAtVeTMIR_b_MainRl) &&
        rtb_TmpSignalConversionAtVeTRIR_b_HV_B_h) &&
        rtb_VeBRDR_b_BattHtr_ClntTempOut_FA) &&
        rtb_VariantMerge_For_Variant_Source_Va_p) && ((VeBRDR_P_HtrPower >=
        KeBRDR_W_HVC_HtrPwrLim) || (KeBRDR_b_HtrPwrLimDsbl))) && (((uint32)
        rtb_TmpSignalConversionAtVeTHMR_e_BatThr) == CeTHMR_e_Heating)) &&
                            (VeBRDR_b_BPCM_NoCommErr)) && (((((uint32)
        rtb_VeBRDR_b_BPCM_LIN_LOC) == CeBPCR_e_LIN_BusOff_Disabled) ||
        (KeBRDR_b_LINBusOff_HeatPerf)) && ((!rtb_VeBRDR_b_BPCM_LIN_LOC_FA) ||
        (KeBRDR_b_LINBusOffFA_HeatPerf)))) && (((((uint32)
        rtb_VeBRDR_b_BattHtr_LOC) == CeBPCR_e_LOC_BatClntHtr_False) ||
                            (KeBRDR_b_LOCBatHtr_HeatPerf)) &&
                           ((!rtb_VeBRDR_b_BattHtr_LOC_FA) ||
                            (KeBRDR_b_LOCBatHtrFA_HeatPerf)))) && ((((((uint32)
        BRDR_ac_DW.StatusByte_LIN1_BusOff) & 1U) != 0U) && ((((uint32)
        BRDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U)) ||
                          (KeBRDR_b_BattHeat_LIN1_Ovrd)));

#endif

    /* End of S-Function (sfix_bitop): '<S879>/Bitwise Operator2' */

    /* Logic: '<S867>/Logical1' incorporates:
     *  Logic: '<S961>/Logical Operator5'
     *  Logic: '<S966>/Logical'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HV_B_h =
        (rtb_VeBRDR_b_IsDiagGlobalConditionsValid &&
         rtb_LeBRDR_b_ChillerHeat_RelayOK);

    /* S-Function (sfix_bitop): '<S871>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S871>/StatusByte_BattCoolPmpPerf'
     *  S-Function (sfix_bitop): '<S1071>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S974>/Bitwise Operator2'
     */
    rtb_Logical_d_tmp = ((sint32)BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 1;

    /* S-Function (sfix_bitop): '<S871>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S871>/StatusByte_BattCoolPmpPerf'
     *  S-Function (sfix_bitop): '<S1071>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S974>/Bitwise Operator1'
     */
    tmpRead_b = ((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U;

    /* Logic: '<S865>/Logical' incorporates:
     *  Constant: '<S871>/Constant1'
     *  Constant: '<S871>/Constant2'
     *  Constant: '<S872>/Calib'
     *  Constant: '<S873>/Calib'
     *  Logic: '<S867>/Logical1'
     *  Logic: '<S867>/Logical10'
     *  Logic: '<S867>/Logical4'
     *  Logic: '<S871>/Logical Operator'
     *  RelationalOperator: '<S871>/Relational Operator1'
     *  RelationalOperator: '<S871>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S871>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S871>/Bitwise Operator2'
     */
    VeBRDR_b_HeaterPerfDiag1EnblPre =
        (((rtb_TmpSignalConversionAtVeTRIR_b_HV_B_h && (((rtb_Logical_d_tmp <= 0)
             || (tmpRead_b != 0U)) || (KeBRDR_b_LTAPFltDtctDsbl))) &&
          (KeBRDR_b_EnblHeatingPrfmncAppr1)) && rtb_Comparison6_h);

    /* Outputs for Atomic SubSystem: '<S870>/EdgeRising1' */
    /* UnitDelay: '<S1033>/Unit Delay' incorporates:
     *  UnitDelay: '<S937>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Va_p = BRDR_ac_DW.UnitDelay_DSTATE_j3;

    /* Update for UnitDelay: '<S937>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_j3 = VeBRDR_b_HeaterPerfDiag1EnblPre;

    /* Outputs for Atomic SubSystem: '<S870>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S941>/Switch1' incorporates:
     *  Constant: '<S940>/Calib'
     *  Logic: '<S937>/AND'
     *  Logic: '<S937>/OR1'
     *  Switch: '<S941>/Switch2'
     *  UnitDelay: '<S941>/Unit Delay'
     */
    if ((VeBRDR_b_HeaterPerfDiag1EnblPre) &&
            (!rtb_VariantMerge_For_Variant_Source_Va_p))
    {
        BRDR_ac_DW.UnitDelay_DSTATE_g = KeBRDR_t_HeatingDelay_Tm;
    }
    else
    {
        if (VeBRDR_b_HeaterPerfDiag1EnblPre)
        {
            /* UnitDelay: '<S941>/Unit Delay' incorporates:
             *  Constant: '<S938>/Calib'
             *  Constant: '<S941>/Constant Value4'
             *  MinMax: '<S941>/Maximum'
             *  Sum: '<S941>/Subtraction'
             *  Switch: '<S941>/Switch2'
             */
            BRDR_ac_DW.UnitDelay_DSTATE_g = fmaxf(BRDR_ac_DW.UnitDelay_DSTATE_g
                - HeBRDR_t_MedTEH, 0.0F);
        }
    }

    /* End of Switch: '<S941>/Switch1' */
    /* End of Outputs for SubSystem: '<S870>/Timer Retrigger Reset Enabled' */
    /* End of Outputs for SubSystem: '<S870>/EdgeRising1' */

    /* Switch: '<S870>/Switch1' incorporates:
     *  Constant: '<S939>/Calib'
     */
    if (KeBRDR_b_HeatingDelayEnbl)
    {
        /* Outputs for Atomic SubSystem: '<S870>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S870>/Switch1' incorporates:
         *  Constant: '<S941>/Constant Value2'
         *  Logic: '<S870>/Logical13'
         *  Logic: '<S870>/Logical24'
         *  RelationalOperator: '<S941>/Greater  Than1'
         *  UnitDelay: '<S941>/Unit Delay'
         */
        VeBRDR_b_HeaterPerfDiag1Enbl = ((VeBRDR_b_HeaterPerfDiag1EnblPre) &&
            (BRDR_ac_DW.UnitDelay_DSTATE_g <= 0.0F));

        /* End of Outputs for SubSystem: '<S870>/Timer Retrigger Reset Enabled' */
    }
    else
    {
        /* Switch: '<S870>/Switch1' */
        VeBRDR_b_HeaterPerfDiag1Enbl = VeBRDR_b_HeaterPerfDiag1EnblPre;
    }

    /* End of Switch: '<S870>/Switch1' */

    /* RelationalOperator: '<S961>/Comparison3' incorporates:
     *  Inport: '<Root>/VeHTRR_P_HV_Htr3PwrAct'
     *  Logic: '<S1018>/Logical Operator'
     *  Logic: '<S1019>/Logical Operator'
     *  Logic: '<S1020>/Logical Operator'
     *  Logic: '<S961>/Logical Operator'
     *  Logic: '<S961>/Logical Operator1'
     *  Logic: '<S961>/Logical Operator2'
     *  Logic: '<S961>/Logical Operator3'
     *  Logic: '<S961>/Logical Operator4'
     *  Logic: '<S961>/Logical Operator5'
     *  Logic: '<S961>/Logical Operator6'
     *  RelationalOperator: '<S1018>/Relational Operator1'
     *  RelationalOperator: '<S1018>/Relational Operator2'
     *  RelationalOperator: '<S1019>/Relational Operator1'
     *  RelationalOperator: '<S1019>/Relational Operator2'
     *  RelationalOperator: '<S1020>/Relational Operator1'
     *  RelationalOperator: '<S1020>/Relational Operator2'
     *  RelationalOperator: '<S961>/Comparison1'
     *  RelationalOperator: '<S961>/Comparison2'
     *  RelationalOperator: '<S961>/Comparison4'
     *  S-Function (sfix_bitop): '<S1018>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1018>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1019>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1019>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1020>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1020>/Bitwise Operator2'
     *  SignalConversion generated from: '<S958>/Variant Source9'
     *  UnitDelay: '<S961>/Unit Delay'
     */
#if Rte_SysCon_Variant_BRDR_15

    /* Outputs for Atomic SubSystem: '<S961>/Signal Latch On With Reset' */
    (void)Rte_Read_VeHTRR_P_HV_Htr3PwrAct_Value(&tmpRead_d);

    /* Logic: '<S961>/Logical Operator4' incorporates:
     *  Inport: '<Root>/VeHTRR_P_HV_Htr3PwrAct'
     */
    rtb_LogicalOperator4_p = (rtb_VariantMerge_For_Variant_Source_V_j2 ||
        rtb_VariantMerge_For_Variant_Source_V_fx);

    /* Logic: '<S1024>/OR1' incorporates:
     *  Constant: '<S1022>/Calib'
     *  Logic: '<S1024>/OR'
     *  UnitDelay: '<S1024>/Unit Delay'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_ow = ((rtb_TmpSignalConversionAtVeBTRR_T_HV_B_e <
        KeBRDR_T_CelltempMin_Thresh) || ((BRDR_ac_DW.UnitDelay_DSTATE_o3) &&
        (BRDR_ac_DW.UnitDelay_DSTATE_ow)));

    /* Logic: '<S961>/Logical Operator5' incorporates:
     *  Constant: '<S1017>/Constant'
     *  Constant: '<S1018>/Constant1'
     *  Constant: '<S1018>/Constant2'
     *  Constant: '<S1019>/Constant1'
     *  Constant: '<S1019>/Constant2'
     *  Constant: '<S1020>/Constant1'
     *  Constant: '<S1020>/Constant2'
     *  Constant: '<S1021>/Calib'
     *  Constant: '<S1023>/Calib'
     *  DataStoreRead: '<S1018>/StatusByte_CommBusOff'
     *  DataStoreRead: '<S1019>/StatusByte_HeatingElmntPerf'
     *  DataStoreRead: '<S1020>/StatusByte_LosCommBECM_A'
     *  SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt'
     */
    rtb_LogicalOperator5_d = ((((((((rtb_TmpSignalConversionAtVeTRIR_b_HV_B_h &&
        (((uint32)rtb_TmpSignalConversionAtVeTHMR_e_BatThr) == CeTHMR_e_Heating))
        && (((((sint32)BRDR_ac_DW.StatusByte_HeatingElmntPerf) & 1) <= 0) ||
            ((((uint32)BRDR_ac_DW.StatusByte_HeatingElmntPerf) & 64U) != 0U))) &&
        (rtb_TmpSignalConversionAtVeBTRR_T_HV_Bat < KeBRDR_T_CellTempMax_Thresh))
        && (tmpRead_d >= KeBRDR_W_HtrPwrLim_HtPrfmncFlt)) && (((((sint32)
        BRDR_ac_DW.StatusByte_LosCommBECM_A) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) != 0U))) && (((((sint32)
        BRDR_ac_DW.StatusByte_CommBusOff) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_CommBusOff) & 64U) != 0U))) &&
        (!rtb_LogicalOperator4_p)) && (BRDR_ac_DW.UnitDelay_DSTATE_ow));

    /* UnitDelay: '<S1047>/Unit Delay' */
    rtb_UnitDelay_je = rtb_LogicalOperator5_d;

    /* End of Outputs for SubSystem: '<S961>/Signal Latch On With Reset' */
#endif

    /* End of RelationalOperator: '<S961>/Comparison3' */

    /* S-Function (sfix_bitop): '<S974>/Bitwise Operator2' incorporates:
     *  Constant: '<S988>/Calib'
     *  Constant: '<S991>/Calib'
     *  Inport: '<Root>/VeBTRR_P_BatHeatPwr_NeedLimtd'
     *  Logic: '<S966>/Logical'
     *  Logic: '<S966>/Logical1'
     *  Logic: '<S966>/Logical10'
     *  Logic: '<S966>/Logical11'
     *  Logic: '<S966>/Logical12'
     *  Logic: '<S966>/Logical14'
     *  Logic: '<S966>/Logical15'
     *  Logic: '<S966>/Logical16'
     *  Logic: '<S966>/Logical17'
     *  Logic: '<S966>/Logical18'
     *  Logic: '<S966>/Logical20'
     *  Logic: '<S966>/Logical23'
     *  Logic: '<S966>/Logical25'
     *  Logic: '<S966>/Logical27'
     *  Logic: '<S966>/Logical3'
     *  Logic: '<S966>/Logical4'
     *  Logic: '<S966>/Logical5'
     *  Logic: '<S966>/Logical6'
     *  Logic: '<S966>/Logical8'
     *  Logic: '<S966>/Logical9'
     *  Logic: '<S971>/Logical Operator'
     *  Logic: '<S972>/Logical Operator'
     *  Logic: '<S973>/Logical Operator'
     *  Logic: '<S974>/Logical Operator'
     *  Logic: '<S975>/Logical Operator'
     *  RelationalOperator: '<S966>/Comparison1'
     *  RelationalOperator: '<S966>/Comparison4'
     *  RelationalOperator: '<S966>/Comparison5'
     *  RelationalOperator: '<S966>/Comparison6'
     *  RelationalOperator: '<S971>/Relational Operator1'
     *  RelationalOperator: '<S971>/Relational Operator2'
     *  RelationalOperator: '<S972>/Relational Operator1'
     *  RelationalOperator: '<S972>/Relational Operator2'
     *  RelationalOperator: '<S973>/Relational Operator1'
     *  RelationalOperator: '<S973>/Relational Operator2'
     *  RelationalOperator: '<S974>/Relational Operator1'
     *  RelationalOperator: '<S974>/Relational Operator2'
     *  RelationalOperator: '<S975>/Relational Operator1'
     *  RelationalOperator: '<S975>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S971>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S971>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S972>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S972>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S973>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S973>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S974>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S975>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S975>/Bitwise Operator2'
     *  Sum: '<S966>/Sum'
     *  Switch: '<S966>/Switch2'
     *  Switch: '<S966>/Switch3'
     */
#if !Rte_SysCon_Variant_BRDR_15

    /* Outputs for Atomic SubSystem: '<S966>/Timer Retrigger Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S966>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S966>/Signal Latch On With Reset' */
    (void)Rte_Read_VeBTRR_P_BatHeatPwr_NeedLimtd_Value(&tmpRead_0);

    /* RelationalOperator: '<S966>/Comparison1' incorporates:
     *  Constant: '<S977>/Calib'
     *  Inport: '<Root>/VeBTRR_P_BatHeatPwr_NeedLimtd'
     */
    rtb_VariantMerge_For_Variant_Source_V_j2 =
        (rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat <=
         (rtb_TmpSignalConversionAtVeBTRR_T_HV_B_e +
          KeBRDR_T_HtPrfmnc_CellMinOff));

    /* Logic: '<S994>/OR1' incorporates:
     *  Logic: '<S994>/NOT'
     *  Logic: '<S994>/OR'
     *  UnitDelay: '<S994>/Unit Delay'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_ou = (rtb_VariantMerge_For_Variant_Source_V_j2 ||
        ((!VeBRDR_b_HeatPerf_FltDtct) && (BRDR_ac_DW.UnitDelay_DSTATE_ou)));

    /* RelationalOperator: '<S966>/Comparison5' incorporates:
     *  Constant: '<S992>/Calib'
     */
    rtb_VariantMerge_For_Variant_Source_V_fx =
        (rtb_TmpSignalConversionAtVePMIR_n_LTActv > KeBRDR_n_PmpRPM_HeatingFlt);

    /* Logic: '<S969>/AND' incorporates:
     *  Logic: '<S969>/OR1'
     *  UnitDelay: '<S969>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Va_p =
        (rtb_VariantMerge_For_Variant_Source_V_fx &&
         (!BRDR_ac_DW.UnitDelay_DSTATE_ec));

    /* Update for UnitDelay: '<S969>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_ec = rtb_VariantMerge_For_Variant_Source_V_fx;

    /* Switch: '<S995>/Switch1' incorporates:
     *  Constant: '<S993>/Calib'
     *  Switch: '<S995>/Switch2'
     *  UnitDelay: '<S995>/Unit Delay'
     */
    if (rtb_VariantMerge_For_Variant_Source_Va_p)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_c = KeBRDR_t_HeatingFlt_LTAPOnTm;
    }
    else
    {
        if (rtb_VariantMerge_For_Variant_Source_V_fx)
        {
            /* UnitDelay: '<S995>/Unit Delay' incorporates:
             *  Constant: '<S976>/Calib'
             *  Constant: '<S995>/Constant Value4'
             *  MinMax: '<S995>/Maximum'
             *  Sum: '<S995>/Subtraction'
             *  Switch: '<S995>/Switch2'
             */
            BRDR_ac_DW.UnitDelay_DSTATE_c = fmaxf(BRDR_ac_DW.UnitDelay_DSTATE_c
                - HeBRDR_t_MedTEH, 0.0F);
        }
    }

    /* End of Switch: '<S995>/Switch1' */
    if (!KeBRDR_b_SelHeatPwrReq)
    {
        tmpRead_0 = VeBRDR_P_HtrPower;
    }

    if (KeBRDR_b_EnblLtch_BTISCellMinChk)
    {
        rtb_VariantMerge_For_Variant_Source_V_j2 =
            BRDR_ac_DW.UnitDelay_DSTATE_ou;
    }

    /* Logic: '<S966>/Logical' incorporates:
     *  Constant: '<S970>/Constant'
     *  Constant: '<S971>/Constant1'
     *  Constant: '<S971>/Constant2'
     *  Constant: '<S972>/Constant1'
     *  Constant: '<S972>/Constant2'
     *  Constant: '<S973>/Constant1'
     *  Constant: '<S973>/Constant2'
     *  Constant: '<S974>/Constant1'
     *  Constant: '<S974>/Constant2'
     *  Constant: '<S975>/Constant1'
     *  Constant: '<S975>/Constant2'
     *  Constant: '<S978>/Calib'
     *  Constant: '<S979>/Calib'
     *  Constant: '<S980>/Calib'
     *  Constant: '<S981>/Calib'
     *  Constant: '<S982>/Calib'
     *  Constant: '<S983>/Calib'
     *  Constant: '<S984>/Calib'
     *  Constant: '<S985>/Calib'
     *  Constant: '<S986>/Calib'
     *  Constant: '<S987>/Calib'
     *  Constant: '<S988>/Calib'
     *  Constant: '<S989>/Calib'
     *  Constant: '<S990>/Calib'
     *  Constant: '<S991>/Calib'
     *  Constant: '<S995>/Constant Value2'
     *  DataStoreRead: '<S971>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S972>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     *  DataStoreRead: '<S973>/StatusByte_BattCoolPmpOveSpd'
     *  DataStoreRead: '<S975>/StatusByte_CoolantHeaterBPerf'
     *  RelationalOperator: '<S995>/Greater  Than1'
     *  UnitDelay: '<S995>/Unit Delay'
     *  VariantMerge generated from: '<S1089>/HV_Bat_CltLvlLo'
     */
    rtb_Logical = ((((((((((((((rtb_TmpSignalConversionAtVeTRIR_b_HV_B_h &&
        (((rtb_Logical_d_tmp <= 0) || (tmpRead_b != 0U)) ||
         (KeBRDR_b_Dsbl_LTAPPrfmncFlt))) && ((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 64U) != 0U)) ||
        (KeBRDR_b_LTAP_DryRunDsbl))) && ((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 64U) != 0U)) ||
        (KeBRDR_b_DsblLTAPTmp_HtPrfmncFlt))) &&
        ((!rtb_TmpSignalConversionAtVePMIR_b_LTActv) ||
         (KeBRDR_b_DsblLTAPFA_HtPrfmncFlt))) && ((tmpRead_0 >=
        KeBRDR_W_HtrPwrLim_HtPrfmncFlt) || (KeBRDR_b_HtrPwrLimDsbl_HtPrfmnc))) &&
                           (rtb_VariantMerge_For_Variant_Source_V_j2 ||
                            (KeBRDR_b_DsblCellMin_HtPrfmncFlt))) && ((((((sint32)
        BRDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 64U) != 0U)) ||
                           (KeBRDR_b_DsblHtrPrfmncFlt))) &&
                         rtb_VariantMerge_For_Variant_Source_V_fx) &&
                        (BRDR_ac_DW.UnitDelay_DSTATE_c <= 0.0F)) && ((((uint32)
                          VeBRDR_e_HV_Bat_CltLvlLo_BD) != CeBRDR_e_BatCltLvlLo) ||
                        (KeBRDR_b_BtlSnsrLoFlt_Dsbl))) &&
                      ((!rtb_VariantMerge_For_Variant_Source_Vari) ||
                       (KeBRDR_b_BtlSnsrCktLoFlt_Dsbl))) && ((((((sint32)
                          BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) & 1)
                        <= 0) || ((((uint32)
                          BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) &
                         64U) != 0U)) || (KeBRDR_b_DsblHtrOutPrfmncFlt))) &&
                    (VeBRDR_b_BPCM_NoCommErr)) &&
                   (KeBRDR_b_EnblHeatingPrfmncAppr2));

    /* End of Outputs for SubSystem: '<S966>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S966>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S966>/Timer Retrigger Reset Enabled1' */
#endif

    /* RelationalOperator: '<S967>/Comparison1' incorporates:
     *  Logic: '<S1000>/Logical Operator'
     *  Logic: '<S1001>/Logical Operator'
     *  Logic: '<S967>/Logical22'
     *  Logic: '<S967>/Logical26'
     *  Logic: '<S967>/Logical28'
     *  Logic: '<S967>/Logical29'
     *  Logic: '<S967>/Logical30'
     *  Logic: '<S967>/Logical31'
     *  Logic: '<S967>/Logical6'
     *  Logic: '<S967>/Logical7'
     *  Logic: '<S998>/Logical Operator'
     *  Logic: '<S999>/Logical Operator'
     *  RelationalOperator: '<S1000>/Relational Operator1'
     *  RelationalOperator: '<S1000>/Relational Operator2'
     *  RelationalOperator: '<S1001>/Relational Operator1'
     *  RelationalOperator: '<S1001>/Relational Operator2'
     *  RelationalOperator: '<S967>/Comparison2'
     *  RelationalOperator: '<S998>/Relational Operator1'
     *  RelationalOperator: '<S998>/Relational Operator2'
     *  RelationalOperator: '<S999>/Relational Operator1'
     *  RelationalOperator: '<S999>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1000>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1000>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1001>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1001>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S998>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S998>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S999>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S999>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_BRDR_15 && Rte_SysCon_Variant_BRDR_3

    /* UnitDelay: '<S1047>/Unit Delay1' incorporates:
     *  Constant: '<S1000>/Constant1'
     *  Constant: '<S1000>/Constant2'
     *  Constant: '<S1001>/Constant1'
     *  Constant: '<S1001>/Constant2'
     *  Constant: '<S996>/Constant'
     *  Constant: '<S997>/Constant'
     *  Constant: '<S998>/Constant1'
     *  Constant: '<S998>/Constant2'
     *  Constant: '<S999>/Constant1'
     *  Constant: '<S999>/Constant2'
     *  DataStoreRead: '<S1000>/StatusByte_LostCommHB_CoolPmp'
     *  DataStoreRead: '<S1001>/StatusByte_LostCommHB_CooltHtr4'
     *  DataStoreRead: '<S998>/StatusByte_HB_CT_SnsrPerf'
     *  DataStoreRead: '<S999>/StatusByte_LIN2_BusOff'
     */
    rtb_UnitDelay1_d = ((((((((((uint32)rtb_TmpSignalConversionAtVeTHMR_e_BatThr)
        == CeTHMR_e_Heating) || (((uint32)
        rtb_TmpSignalConversionAtVeTHMR_e_BatThr) == CeTHMR_e_ActvPsvHeating)) &&
        (((((sint32)BRDR_ac_DW.StatusByte_LIN2_BusOff) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) != 0U))) && (((((sint32)
        BRDR_ac_DW.StatusByte_LostCommHB_CooltHtr4) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_LostCommHB_CooltHtr4) & 64U) != 0U))) &&
                           (((((sint32)BRDR_ac_DW.StatusByte_LostCommHB_CoolPmp)
        & 1) <= 0) || ((((uint32)BRDR_ac_DW.StatusByte_LostCommHB_CoolPmp) & 64U)
                       != 0U))) && (((((sint32)
        BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) != 0U))) &&
                         (!rtb_VariantMerge_For_Variant_Source_V_cw)) &&
                        (!rtb_VariantMerge_For_Variant_Source_Va_a));

#endif

    /* End of RelationalOperator: '<S967>/Comparison1' */

    /* S-Function (sfix_bitop): '<S1005>/Bitwise Operator2' incorporates:
     *  Logic: '<S1002>/Logical31'
     *  Logic: '<S1002>/Logical32'
     *  Logic: '<S1002>/Logical33'
     *  Logic: '<S1002>/Logical34'
     *  Logic: '<S1003>/Logical23'
     *  Logic: '<S1003>/Logical25'
     *  Logic: '<S1003>/Logical26'
     *  Logic: '<S1003>/Logical29'
     *  Logic: '<S1005>/Logical Operator'
     *  Logic: '<S1007>/Logical27'
     *  Logic: '<S1007>/Logical28'
     *  Logic: '<S1007>/Logical30'
     *  Logic: '<S1007>/Logical31'
     *  Logic: '<S968>/Logical22'
     *  Logic: '<S968>/Logical31'
     *  Logic: '<S968>/Logical6'
     *  Logic: '<S968>/Logical7'
     *  RelationalOperator: '<S1002>/Comparison3'
     *  RelationalOperator: '<S1003>/Comparison3'
     *  RelationalOperator: '<S1005>/Relational Operator1'
     *  RelationalOperator: '<S1005>/Relational Operator2'
     *  RelationalOperator: '<S1007>/Comparison1'
     *  RelationalOperator: '<S968>/Comparison1'
     *  S-Function (sfix_bitop): '<S1005>/Bitwise Operator1'
     */
#if !Rte_SysCon_Variant_BRDR_15 && !Rte_SysCon_Variant_BRDR_3

    /* UnitDelay: '<S1047>/Unit Delay1' incorporates:
     *  Constant: '<S1004>/Constant'
     *  Constant: '<S1005>/Constant1'
     *  Constant: '<S1005>/Constant2'
     *  Constant: '<S1006>/Calib'
     *  Constant: '<S1008>/Constant'
     *  Constant: '<S1009>/Calib'
     *  Constant: '<S1010>/Calib'
     *  Constant: '<S1011>/Constant'
     *  Constant: '<S1012>/Calib'
     *  Constant: '<S1013>/Calib'
     *  Constant: '<S1014>/Constant'
     *  Constant: '<S1015>/Calib'
     *  Constant: '<S1016>/Calib'
     *  DataStoreRead: '<S1005>/StatusByte_HB_CT_SnsrPerf'
     *  SignalConversion generated from: '<S1>/VeTHMR_e_BatThrmlSt'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BattHtr_LOC'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC'
     */
    rtb_UnitDelay1_d = (((((((((((sint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) &
        1) <= 0) || ((((uint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) !=
                     0U)) && (!rtb_TmpSignalConversionAtVeTRIR_b_HV_Bat)) ||
                            (KeBRDR_b_HV_BTIS_FltDtctDsbl)) && (((((uint32)
        rtb_VeBRDR_b_BPCM_LIN_LOC) == CeBPCR_e_LIN_BusOff_Disabled) ||
        (KeBRDR_b_LINBusOff_HeatPerf)) && ((!rtb_VeBRDR_b_BPCM_LIN_LOC_FA) ||
        (KeBRDR_b_LINBusOffFA_HeatPerf)))) && (((((uint32)rtb_VeBRDR_b_LTAP_LOC)
        == CeBPCR_e_LOC_BCP_False) || (KeBRDR_b_LTAP_LOC_HeatPerf)) &&
                           ((!rtb_VeBRDR_b_LTAP_LOC_FA) ||
                            (KeBRDR_b_LTAP_LOCFA_HeatPerf)))) && (((((uint32)
        rtb_VeBRDR_b_BattHtr_LOC) == CeBPCR_e_LOC_BatClntHtr_False) ||
                           (KeBRDR_b_LOCBatHtr_HeatPerf)) &&
                          ((!rtb_VeBRDR_b_BattHtr_LOC_FA) ||
                           (KeBRDR_b_LOCBatHtrFA_HeatPerf)))) && (((uint32)
                          rtb_TmpSignalConversionAtVeTHMR_e_BatThr) ==
                         CeTHMR_e_Heating));

#endif

    /* End of S-Function (sfix_bitop): '<S1005>/Bitwise Operator2' */

    /* Logic: '<S960>/Logical31' */
#if !Rte_SysCon_Variant_BRDR_15

    /* UnitDelay: '<S1047>/Unit Delay' */
    rtb_UnitDelay_je = (rtb_Logical && rtb_UnitDelay1_d);

#endif

    /* End of Logic: '<S960>/Logical31' */

    /* SignalConversion generated from: '<S958>/Variant Source9' */
    VeBRDR_b_HeatingPerfEnbl = rtb_UnitDelay_je;

    /* Switch: '<S965>/Switch1' incorporates:
     *  Logic: '<S958>/Logical Operator'
     */
    if (!VeBRDR_b_HeatingPerfEnbl)
    {
        /* Switch: '<S965>/Switch1' incorporates:
         *  Constant: '<S965>/InitValue'
         */
        BRDR_ac_DW.UnitDelay_DSTATE_b = 0.0F;
    }
    else
    {
        /* Switch: '<S965>/Switch1' incorporates:
         *  Constant: '<S962>/Calib'
         *  Sum: '<S965>/Subtraction'
         *  Switch: '<S965>/Switch2'
         *  UnitDelay: '<S965>/Unit Delay'
         */
        BRDR_ac_DW.UnitDelay_DSTATE_b += HeBRDR_t_MedTEH;
    }

    /* End of Switch: '<S965>/Switch1' */

    /* RelationalOperator: '<S965>/Greater  Than2' incorporates:
     *  Constant: '<S964>/Calib'
     */
    VeBRDR_b_HeatingPerfDiagEnbl = (BRDR_ac_DW.UnitDelay_DSTATE_b >
        KeBRDR_t_HtPrfmncDly_Tm);

    /* Switch: '<S1039>/Switch1' incorporates:
     *  Constant: '<S864>/Calib'
     *  RelationalOperator: '<S859>/Comparison1'
     *  RelationalOperator: '<S859>/Comparison6'
     *  Switch: '<S1039>/Switch2'
     *  UnitDelay: '<S1039>/Unit Delay'
     */
    if (KeBRDR_i_HeaterPerf_ApprchSel == 1)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_gca = VeBRDR_b_HeaterPerfDiag1Enbl;
    }
    else
    {
        if (KeBRDR_i_HeaterPerf_ApprchSel == 2)
        {
            /* Switch: '<S1039>/Switch2' incorporates:
             *  UnitDelay: '<S1039>/Unit Delay'
             */
            BRDR_ac_DW.UnitDelay_DSTATE_gca = VeBRDR_b_HeatingPerfDiagEnbl;
        }
    }

    /* End of Switch: '<S1039>/Switch1' */

    /* RelationalOperator: '<S1045>/Relational Operator3' incorporates:
     *  Constant: '<S1045>/Constant3'
     *  DataStoreRead: '<S1046>/StatusByte_BattHeat'
     *  S-Function (sfix_bitop): '<S1045>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVePMIR_b_LTActv = ((((uint32)
        BRDR_ac_DW.StatusByte_BattHeat) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S1045>/EdgeFalling1' */
    /* Logic: '<S1045>/Logical Operator' incorporates:
     *  Logic: '<S1048>/OR1'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        !rtb_TmpSignalConversionAtVePMIR_b_LTActv;

    /* End of Outputs for SubSystem: '<S1045>/EdgeFalling1' */

    /* Logic: '<S1045>/Logical1' incorporates:
     *  Constant: '<S1043>/Calib'
     *  Constant: '<S1044>/Calib'
     *  Constant: '<S1045>/Constant1'
     *  DataStoreRead: '<S1046>/StatusByte_BattHeat'
     *  Logic: '<S1045>/Logical Operator'
     *  Logic: '<S1045>/Logical10'
     *  Logic: '<S1045>/Logical12'
     *  Logic: '<S859>/Logical Operator'
     *  RelationalOperator: '<S1045>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1045>/Bitwise Operator3'
     *  UnitDelay: '<S1039>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTRIR_b_HV_Bat =
        (((BRDR_ac_DW.UnitDelay_DSTATE_gca) && (KeBRDR_b_BattHeat_XYEnbl)) && ((
           !KeBRDR_b_BattHeat_LtchEnbl) || (((((uint32)
              BRDR_ac_DW.StatusByte_BattHeat) & 1U) == 0U) ||
           rtb_VariantMerge_For_Variant_Source_Vari)));

    /* Switch: '<S943>/Switch3' incorporates:
     *  Constant: '<S953>/Calib'
     *  Constant: '<S955>/Calib'
     *  Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
     *  RelationalOperator: '<S943>/Comparison1'
     *  Switch: '<S943>/Switch'
     */
#if Rte_SysCon_Variant_BRDR_14 || Rte_SysCon_Variant_BRDR_3

    if (rtb_TmpSignalConversionAtVeTAIR_Pct_FrWy > KeBRDR_Pct_CPV_OpenThreshold)
    {
        (void)Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value(&tmpRead_7);
        if (KeBRDR_b_HeaterPerf_FSymp_FrstSnsr)
        {
            rtb_TmpSignalConversionAtVeBTRR_T_CellTe =
                rtb_TmpSignalConversionAtVeHTIR_T_HVC_Ht;
        }
        else
        {
            rtb_TmpSignalConversionAtVeBTRR_T_CellTe =
                rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;
        }

        /* Switch: '<S943>/Switch4' incorporates:
         *  Constant: '<S955>/Calib'
         *  Constant: '<S956>/Calib'
         *  Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
         */
        if (!KeBRDR_b_HeaterPerf_FSymp_SecSnsr)
        {
            tmpRead_7 = rtb_TmpSignalConversionAtVePMIR_T_LTActv;
        }

        /* End of Switch: '<S943>/Switch4' */

        /* UnitDelay: '<S1047>/Unit Delay' incorporates:
         *  Constant: '<S954>/Calib'
         *  RelationalOperator: '<S943>/Comparison2'
         *  Sum: '<S943>/Add'
         */
        rtb_UnitDelay_je = ((rtb_TmpSignalConversionAtVeBTRR_T_CellTe -
                             tmpRead_7) < KeBRDR_T_HeaterPerfTemp);
    }
    else
    {
        if (KeBRDR_b_HeaterPerf_FSymp_FrstSnsr)
        {
            rtb_TmpSignalConversionAtVeBTRR_T_CellTe =
                rtb_TmpSignalConversionAtVeHTIR_T_HVC_Ht;
        }
        else
        {
            rtb_TmpSignalConversionAtVeBTRR_T_CellTe =
                rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;
        }

        /* Switch: '<S943>/Switch2' incorporates:
         *  Constant: '<S957>/Calib'
         */
        if (KeBRDR_b_HeaterPerf_FSymp_SecSnsr_Clsd)
        {
            rtb_Add1_n = rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j;
        }
        else
        {
            rtb_Add1_n = rtb_TmpSignalConversionAtVePMIR_T_LTActv;
        }

        /* End of Switch: '<S943>/Switch2' */

        /* UnitDelay: '<S1047>/Unit Delay' incorporates:
         *  Constant: '<S954>/Calib'
         *  RelationalOperator: '<S943>/Comparison3'
         *  Sum: '<S943>/Add1'
         */
        rtb_UnitDelay_je = ((rtb_TmpSignalConversionAtVeBTRR_T_CellTe -
                             rtb_Add1_n) < KeBRDR_T_HeaterPerfTemp);
    }

#endif

    /* End of Switch: '<S943>/Switch3' */

    /* SignalConversion generated from: '<S866>/Variant Source9' */
#if Rte_SysCon_Variant_BRDR_3

    /* UnitDelay: '<S1047>/Unit Delay1' */
    rtb_UnitDelay1_d = rtb_UnitDelay_je;

#endif

    /* End of SignalConversion generated from: '<S866>/Variant Source9' */

    /* SignalConversion generated from: '<S866>/Variant Source9' */
#if Rte_SysCon_Variant_BRDR_14

    /* UnitDelay: '<S1047>/Unit Delay1' */
    rtb_UnitDelay1_d = rtb_UnitDelay_je;

#endif

    /* End of SignalConversion generated from: '<S866>/Variant Source9' */

    /* Switch: '<S942>/Switch2' incorporates:
     *  Constant: '<S947>/Calib'
     *  Constant: '<S948>/Calib'
     *  Constant: '<S950>/Calib'
     *  Constant: '<S952>/Calib'
     *  Logic: '<S942>/Logical13'
     *  RelationalOperator: '<S942>/Comparison5'
     *  Switch: '<S942>/Switch'
     *  Switch: '<S942>/Switch1'
     *  Switch: '<S942>/Switch3'
     */
#if !Rte_SysCon_Variant_BRDR_14 && !Rte_SysCon_Variant_BRDR_3

    if (KeBRDR_b_HeaterPerfDiag_DiffChk_SD)
    {
        /* Switch: '<S942>/Switch2' incorporates:
         *  Constant: '<S946>/Calib'
         */
        VeBRDR_b_HeaterPerfDiag_DiffChk = KeBRDR_b_HeaterPerfDiag_DiffChk_D;
    }
    else
    {
        if (!KeBRDR_b_HeaterPerf_FSymp_FrstSnsr)
        {
            /* Switch: '<S942>/Switch3' */
            rtb_TmpSignalConversionAtVeHTIR_T_HVC_Ht =
                rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;
        }

        /* Switch: '<S942>/Switch4' incorporates:
         *  Constant: '<S949>/Calib'
         */
        if (KeBRDR_b_HeaterPerf_FSymp_SecSnsr)
        {
            rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j =
                rtb_TmpSignalConversionAtVePMIR_T_LTActv;
        }

        /* End of Switch: '<S942>/Switch4' */

        /* Switch: '<S942>/Switch2' incorporates:
         *  Constant: '<S944>/Calib'
         *  Logic: '<S942>/Logical11'
         *  RelationalOperator: '<S942>/Comparison4'
         *  Sum: '<S942>/Add'
         */
        VeBRDR_b_HeaterPerfDiag_DiffChk =
            ((rtb_TmpSignalConversionAtVeHTIR_T_HVC_Ht -
              rtb_TmpSignalConversionAtVeTRIR_T_HV_B_j) <=
             KeBRDR_T_HeaterPerfTemp);
    }

    if (KeBRDR_b_MinCellPerfTempDiff_SD)
    {
        /* Switch: '<S942>/Switch' incorporates:
         *  Constant: '<S951>/Calib'
         */
        VeBRDR_b_MinCellPerfTempChk_AD = KeBRDR_b_MinCellPerfTempDiff_D;
    }
    else if (KeBRDR_b_MinCellPerfTempChk_Sel)
    {
        /* Switch: '<S942>/Switch1' incorporates:
         *  Constant: '<S945>/Calib'
         *  Logic: '<S942>/Logical1'
         *  Switch: '<S942>/Switch'
         */
        VeBRDR_b_MinCellPerfTempChk_AD =
            (rtb_TmpSignalConversionAtVeBTRR_T_HV_B_e >=
             KeBRDR_T_MinCellPerfTemp);
    }
    else
    {
        /* Switch: '<S942>/Switch' incorporates:
         *  Constant: '<S945>/Calib'
         */
        VeBRDR_b_MinCellPerfTempChk_AD =
            (rtb_TmpSignalConversionAtVeBTRR_T_HV_B_e < KeBRDR_T_MinCellPerfTemp);
    }

    /* UnitDelay: '<S1047>/Unit Delay1' incorporates:
     *  Constant: '<S947>/Calib'
     *  Constant: '<S948>/Calib'
     *  Constant: '<S950>/Calib'
     *  Constant: '<S952>/Calib'
     *  Switch: '<S942>/Switch1'
     *  Switch: '<S942>/Switch3'
     */
    rtb_UnitDelay1_d = ((VeBRDR_b_HeaterPerfDiag_DiffChk) &&
                        (VeBRDR_b_MinCellPerfTempChk_AD));

#endif

    /* End of Switch: '<S942>/Switch2' */

    /* SignalConversion generated from: '<S866>/Variant Source9' */
    VeBRDR_b_HeaterPerfDiag1Chk = rtb_UnitDelay1_d;

    /* RelationalOperator: '<S1026>/Comparison1' incorporates:
     *  Inport: '<Root>/VeHTRR_P_HV_Htr3PwrLimit'
     */
#if Rte_SysCon_Variant_BRDR_15

    (void)Rte_Read_VeHTRR_P_HV_Htr3PwrLimit_Value(&tmpRead_c);

    /* RelationalOperator: '<S1026>/Comparison1' incorporates:
     *  Constant: '<S1034>/Calib'
     *  Inport: '<Root>/VeHTRR_P_HV_Htr3PwrLimit'
     */
    VeBRDR_b_Htr3PwrLim_Chk = (tmpRead_c > KeBRDR_W_Htr3PwrLim_Thresh);

#endif

    /* End of RelationalOperator: '<S1026>/Comparison1' */

    /* RelationalOperator: '<S965>/Greater  Than1' incorporates:
     *  Constant: '<S963>/Calib'
     */
    rtb_UnitDelay_je = (BRDR_ac_DW.UnitDelay_DSTATE_b >
                        KeBRDR_t_BattErrTh_Heating_Dbnc);

    /* Outputs for Enabled SubSystem: '<S1026>/Subsystem1' */
    /* Outputs for Atomic SubSystem: '<S1026>/EdgeRising1' */
    /* Sum: '<S1026>/Sum2' incorporates:
     *  Logic: '<S1026>/Logical2'
     *  Lookup_n-D: '<S1036>/Vector'
     *  RelationalOperator: '<S1026>/Comparison4'
     *  SignalConversion generated from: '<S958>/Variant Source1'
     */
#if Rte_SysCon_Variant_BRDR_15

    /* Logic: '<S1033>/AND' incorporates:
     *  Logic: '<S1033>/OR1'
     *  UnitDelay: '<S1033>/Unit Delay'
     */
    rtb_UnitDelay1_d = (rtb_UnitDelay_je && (!BRDR_ac_DW.UnitDelay_DSTATE_ev));

    /* Update for UnitDelay: '<S1033>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_ev = rtb_UnitDelay_je;
    BRDR_ac_BTIS_Set(rtb_UnitDelay1_d, rtb_TmpSignalConversionAtVeBTRR_T_HV_B_e,
                     &BRDR_ac_B.Subsystem1);

    /* Sum: '<S1026>/Sum2' */
    VeBRDR_T_CellTempMin_Delta = rtb_TmpSignalConversionAtVeBTRR_T_HV_B_e -
        BRDR_ac_B.Subsystem1.Gain;

    /* RelationalOperator: '<S1026>/Comparison4' incorporates:
     *  SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp'
     */
    VeBRDR_b_CellTempMin_ThrshChk = (VeBRDR_T_CellTempMin_Delta <
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeAATR_T_EstAmb, ((const
        float32 *)&(KxBRDR_T_CellTempMin_Heatthresh[0])), ((const float32 *)
        &(KtBRDR_T_CellTempMin_Heatthresh[0])), 5U));

    /* Logic: '<S1026>/Logical2' */
    VeBRDR_b_HeatPerfSym = ((VeBRDR_b_Htr3PwrLim_Chk) &&
                            (VeBRDR_b_CellTempMin_ThrshChk));

    /* UnitDelay: '<S1047>/Unit Delay1' */
    rtb_UnitDelay1_d = rtb_LogicalOperator4_p;

#endif

    /* End of Sum: '<S1026>/Sum2' */
    /* End of Outputs for SubSystem: '<S1026>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S1026>/Subsystem1' */

    /* SignalConversion generated from: '<S958>/Variant Source1' */
#if !Rte_SysCon_Variant_BRDR_15

    /* UnitDelay: '<S1047>/Unit Delay1' incorporates:
     *  Constant: '<S960>/FALSE Constant'
     */
    rtb_UnitDelay1_d = false;

#endif

    /* End of SignalConversion generated from: '<S958>/Variant Source1' */

    /* Logic: '<S1026>/Logical5' incorporates:
     *  Logic: '<S1026>/Logical6'
     */
#if Rte_SysCon_Variant_BRDR_15

    /* VariantMerge generated from: '<S959>/Variant Source9' incorporates:
     *  Constant: '<S1035>/Calib'
     */
    rtb_VariantMerge_For_Variant_Source_V_hs = ((VeBRDR_b_HeatPerfSym) ||
        (rtb_UnitDelay1_d && (KeBRDR_b_Enbl_CoolVlvFltChck)));

#endif

    /* End of Logic: '<S1026>/Logical5' */

    /* Sum: '<S1025>/Sum' incorporates:
     *  Logic: '<S1025>/Logical1'
     *  Logic: '<S1025>/Logical25'
     *  RelationalOperator: '<S1025>/Comparison1'
     *  RelationalOperator: '<S1025>/Comparison2'
     *  Sum: '<S1025>/Sum1'
     */
#if !Rte_SysCon_Variant_BRDR_15

    /* Outputs for Enabled SubSystem: '<S1025>/BTIS_Set' */
    /* Outputs for Atomic SubSystem: '<S1025>/EdgeRising' */
    /* Logic: '<S1025>/Logical25' incorporates:
     *  Constant: '<S1030>/Calib'
     *  Constant: '<S1031>/Calib'
     */
    rtb_LogicalOperator4_p = (rtb_UnitDelay_je &&
        ((rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat <=
          (rtb_TmpSignalConversionAtVeBTRR_T_HV_B_e +
           KeBRDR_T_HtPrfmnc_CellMinOff)) || (KeBRDR_b_BTIS_CellTmpChk_Dsbl)));

    /* Logic: '<S1028>/AND' incorporates:
     *  Logic: '<S1028>/OR1'
     *  UnitDelay: '<S1028>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_V_hs = (rtb_LogicalOperator4_p &&
        (!BRDR_ac_DW.UnitDelay_DSTATE_oj));

    /* Update for UnitDelay: '<S1028>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_oj = rtb_LogicalOperator4_p;
    BRDR_ac_BatClntTmpInLatch(rtb_VariantMerge_For_Variant_Source_V_hs,
        rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat, &BRDR_ac_B.BTIS_Set_e);

    /* Sum: '<S1025>/Sum1' */
    VeBRDR_T_BTISErr = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat -
        BRDR_ac_B.BTIS_Set_e.Gain;

    /* VariantMerge generated from: '<S959>/Variant Source9' incorporates:
     *  Constant: '<S1029>/Calib'
     */
    rtb_VariantMerge_For_Variant_Source_V_hs = (VeBRDR_T_BTISErr <=
        KeBRDR_T_BattErrTh_Heating);

    /* End of Outputs for SubSystem: '<S1025>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1025>/BTIS_Set' */
#endif

    /* End of Sum: '<S1025>/Sum' */

    /* Switch: '<S1040>/Switch1' incorporates:
     *  Constant: '<S864>/Calib'
     *  RelationalOperator: '<S859>/Comparison2'
     *  RelationalOperator: '<S859>/Comparison3'
     *  Switch: '<S1040>/Switch2'
     *  UnitDelay: '<S1040>/Unit Delay'
     */
    if (KeBRDR_i_HeaterPerf_ApprchSel == 1)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_ky = VeBRDR_b_HeaterPerfDiag1Chk;
    }
    else
    {
        if (KeBRDR_i_HeaterPerf_ApprchSel == 2)
        {
            /* Switch: '<S1040>/Switch2' incorporates:
             *  UnitDelay: '<S1040>/Unit Delay'
             */
            BRDR_ac_DW.UnitDelay_DSTATE_ky =
                rtb_VariantMerge_For_Variant_Source_V_hs;
        }
    }

    /* End of Switch: '<S1040>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S1045>/EdgeFalling1' */
    /* Logic: '<S1048>/AND' incorporates:
     *  UnitDelay: '<S1048>/Unit Delay'
     */
    rtb_LogicalOperator4_p = (rtb_VariantMerge_For_Variant_Source_Vari &&
        (BRDR_ac_DW.UnitDelay_DSTATE_bp2));

    /* Update for UnitDelay: '<S1048>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_bp2 = rtb_TmpSignalConversionAtVePMIR_b_LTActv;

    /* End of Outputs for SubSystem: '<S1045>/EdgeFalling1' */

    /* Logic: '<S1045>/Logical5' */
    rtb_LogicalOperator4_p = ((VeBRDR_b_ResetCnts) || rtb_LogicalOperator4_p);

    /* Outputs for Atomic SubSystem: '<S1047>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1047>/Counter Reset  Enabled ' */
    /* Switch: '<S1054>/Switch1' incorporates:
     *  Logic: '<S1047>/Fail Counter Reset'
     *  Logic: '<S1047>/NOT6'
     *  Switch: '<S1054>/Switch2'
     *  Switch: '<S1055>/Switch1'
     *  UnitDelay: '<S1040>/Unit Delay'
     *  UnitDelay: '<S1047>/Unit Delay'
     *  UnitDelay: '<S1047>/Unit Delay1'
     */
    if ((rtb_LogicalOperator4_p || (BRDR_ac_DW.UnitDelay_DSTATE_hv)) ||
            (BRDR_ac_DW.UnitDelay1_DSTATE_cd))
    {
        /* Switch: '<S1054>/Switch1' incorporates:
         *  Constant: '<S1054>/Constant Value2'
         */
        VeBRDR_Cnt_BattHeatPerf_FailCnt = 0U;

        /* Switch: '<S1055>/Switch1' incorporates:
         *  Constant: '<S1055>/Constant Value2'
         */
        VeBRDR_Cnt_BattHeatPerf_SmplCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeTRIR_b_HV_Bat &&
                (BRDR_ac_DW.UnitDelay_DSTATE_ky))
        {
            /* Switch: '<S1054>/Switch1' incorporates:
             *  Constant: '<S1054>/Constant Value1'
             *  Sum: '<S1054>/Subtraction'
             *  Switch: '<S1054>/Switch2'
             *  UnitDelay: '<S1054>/Unit Delay'
             */
            VeBRDR_Cnt_BattHeatPerf_FailCnt = (uint16)(((uint32)
                VeBRDR_Cnt_BattHeatPerf_FailCnt) + 1U);
        }

        /* Switch: '<S1055>/Switch2' */
        if (rtb_TmpSignalConversionAtVeTRIR_b_HV_Bat)
        {
            /* Switch: '<S1055>/Switch1' incorporates:
             *  Constant: '<S1055>/Constant Value1'
             *  Sum: '<S1055>/Subtraction'
             *  Switch: '<S1055>/Switch2'
             *  UnitDelay: '<S1055>/Unit Delay'
             */
            VeBRDR_Cnt_BattHeatPerf_SmplCnt = (uint16)(((uint32)
                VeBRDR_Cnt_BattHeatPerf_SmplCnt) + 1U);
        }

        /* End of Switch: '<S1055>/Switch2' */
    }

    /* End of Switch: '<S1054>/Switch1' */
    /* End of Outputs for SubSystem: '<S1047>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S1047>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1047>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1041>/Calib'
     */
    BRDR_ac_DW.UnitDelay1_DSTATE_cd = (VeBRDR_Cnt_BattHeatPerf_FailCnt >=
        KeBRDR_Cnt_HeatExPerf_FailCnt);

    /* Logic: '<S1047>/NOT5' incorporates:
     *  Constant: '<S1042>/Calib'
     *  Logic: '<S1047>/NOT3'
     *  RelationalOperator: '<S1047>/Less Than  or Equal'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_hv = ((VeBRDR_Cnt_BattHeatPerf_SmplCnt >=
        KeBRDR_Cnt_HeatExPerf_SmpCnt) && (!BRDR_ac_DW.UnitDelay1_DSTATE_cd));

    /* Switch: '<S1060>/Switch1' incorporates:
     *  Constant: '<S1053>/Constant Value'
     *  DataStoreWrite: '<S859>/Data Store Write3'
     *  Switch: '<S1059>/Switch1'
     */
    if (VeBRDR_b_ResetFOMs)
    {
        BRDR_ac_DW.NeBRDR_Cnt_HeatExPerf_MFOP = 0U;
    }
    else
    {
        if (BRDR_ac_DW.UnitDelay_DSTATE_hv)
        {
            /* MinMax: '<S1053>/Minimum2' incorporates:
             *  DataStoreRead: '<S859>/Data Store Read1'
             *  Switch: '<S1059>/Switch1'
             */
            if (VeBRDR_Cnt_BattHeatPerf_FailCnt >
                    BRDR_ac_DW.NeBRDR_Cnt_HeatExPerf_MFOP)
            {
                /* DataStoreWrite: '<S859>/Data Store Write3' incorporates:
                 *  Switch: '<S1059>/Switch1'
                 */
                BRDR_ac_DW.NeBRDR_Cnt_HeatExPerf_MFOP =
                    VeBRDR_Cnt_BattHeatPerf_FailCnt;
            }

            /* End of MinMax: '<S1053>/Minimum2' */
        }
    }

    /* End of Switch: '<S1060>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1045>/Fail' */
    BRDR_ac_Fail(BRDR_ac_DW.UnitDelay1_DSTATE_cd,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_p);

    /* End of Outputs for SubSystem: '<S1045>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1045>/Init' */
    BRDR_ac_Init_e(rtb_LogicalOperator4_p,
                   &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_p);

    /* End of Outputs for SubSystem: '<S1045>/Init' */

    /* Outputs for Enabled SubSystem: '<S1045>/Pass' */
    BRDR_ac_Pass(BRDR_ac_DW.UnitDelay_DSTATE_hv,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_p);

    /* End of Outputs for SubSystem: '<S1045>/Pass' */

    /* RelationalOperator: '<S1045>/Relational Operator' incorporates:
     *  Constant: '<S1049>/Constant'
     *  VariantMerge generated from: '<S559>/VeBRDR_e_FaultSts_BattHeat'
     */
    VeBRDR_b_HeatPerf_FltDtct = (((uint32)
        BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_p) == CeDFIB_e_Fail);

    /* Switch: '<S965>/Switch3' incorporates:
     *  Constant: '<S964>/Calib'
     *  UnitDelay: '<S965>/Unit Delay'
     */
    if (VeBRDR_b_HeatingPerfDiagEnbl)
    {
        BRDR_ac_DW.UnitDelay_DSTATE_b = KeBRDR_t_HtPrfmncDly_Tm;
    }

    /* End of Switch: '<S965>/Switch3' */

    /* RelationalOperator: '<S863>/Comparison2' incorporates:
     *  Logic: '<S1068>/Logical Operator'
     *  Logic: '<S1069>/Logical Operator'
     *  Logic: '<S1070>/Logical Operator'
     *  Logic: '<S1071>/Logical Operator'
     *  Logic: '<S1072>/Logical Operator'
     *  Logic: '<S1073>/Logical Operator'
     *  Logic: '<S1074>/Logical Operator'
     *  Logic: '<S863>/Logical'
     *  Logic: '<S863>/Logical1'
     *  Logic: '<S863>/Logical11'
     *  Logic: '<S863>/Logical12'
     *  Logic: '<S863>/Logical13'
     *  Logic: '<S863>/Logical16'
     *  Logic: '<S863>/Logical19'
     *  Logic: '<S863>/Logical2'
     *  Logic: '<S863>/Logical20'
     *  Logic: '<S863>/Logical22'
     *  Logic: '<S863>/Logical3'
     *  Logic: '<S863>/Logical4'
     *  Logic: '<S863>/Logical5'
     *  Logic: '<S863>/Logical6'
     *  Logic: '<S863>/Logical7'
     *  Logic: '<S863>/Logical8'
     *  RelationalOperator: '<S1068>/Relational Operator1'
     *  RelationalOperator: '<S1068>/Relational Operator2'
     *  RelationalOperator: '<S1069>/Relational Operator1'
     *  RelationalOperator: '<S1069>/Relational Operator2'
     *  RelationalOperator: '<S1070>/Relational Operator1'
     *  RelationalOperator: '<S1070>/Relational Operator2'
     *  RelationalOperator: '<S1071>/Relational Operator1'
     *  RelationalOperator: '<S1071>/Relational Operator2'
     *  RelationalOperator: '<S1072>/Relational Operator1'
     *  RelationalOperator: '<S1072>/Relational Operator2'
     *  RelationalOperator: '<S1073>/Relational Operator1'
     *  RelationalOperator: '<S1073>/Relational Operator2'
     *  RelationalOperator: '<S1074>/Relational Operator1'
     *  RelationalOperator: '<S1074>/Relational Operator2'
     *  RelationalOperator: '<S863>/Comparison3'
     *  RelationalOperator: '<S863>/Comparison4'
     *  S-Function (sfix_bitop): '<S1068>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1068>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1069>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1069>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1070>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1070>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1071>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1071>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1072>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1072>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1073>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1073>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1074>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1074>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_BRDR_3

    /* VariantMerge generated from: '<S559>/BattHeat_Perf_IUMPR' incorporates:
     *  Constant: '<S1065>/Constant'
     *  Constant: '<S1066>/Constant'
     *  Constant: '<S1067>/Constant'
     *  Constant: '<S1068>/Constant1'
     *  Constant: '<S1068>/Constant2'
     *  Constant: '<S1069>/Constant1'
     *  Constant: '<S1069>/Constant2'
     *  Constant: '<S1070>/Constant1'
     *  Constant: '<S1070>/Constant2'
     *  Constant: '<S1071>/Constant1'
     *  Constant: '<S1071>/Constant2'
     *  Constant: '<S1072>/Constant1'
     *  Constant: '<S1072>/Constant2'
     *  Constant: '<S1073>/Constant1'
     *  Constant: '<S1073>/Constant2'
     *  Constant: '<S1074>/Constant1'
     *  Constant: '<S1074>/Constant2'
     *  Constant: '<S1075>/Calib'
     *  Constant: '<S1076>/Calib'
     *  Constant: '<S1077>/Calib'
     *  Constant: '<S1078>/Calib'
     *  Constant: '<S1079>/Calib'
     *  Constant: '<S1080>/Calib'
     *  Constant: '<S1081>/Calib'
     *  Constant: '<S1082>/Calib'
     *  Constant: '<S1083>/Calib'
     *  Constant: '<S1084>/Calib'
     *  Constant: '<S1085>/Calib'
     *  DataStoreRead: '<S1068>/StatusByte_BattCoolLvlLow'
     *  DataStoreRead: '<S1069>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  DataStoreRead: '<S1070>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     *  DataStoreRead: '<S1072>/StatusByte_CoolantHeaterBPerf'
     *  DataStoreRead: '<S1073>/StatusByte_HB_CT_SnsrPerf'
     *  DataStoreRead: '<S1074>/StatusByte_ThrmlRlyCtrlCkt'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BattHtr_LOC'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC'
     */
    BRDR_ac_B.VariantMergeForOutportBattHeat_Perf_IUMP =
        ((((((((((((((rtb_Logical_d_tmp > 0) && (tmpRead_b == 0U)) &&
                    (KeBRDR_b_EnblLTAPPerf_HeatPerf_IUMPR)) || ((((((sint32)
                        BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 1) > 0)
                     && ((((uint32)
                           BRDR_ac_DW.StatusByte_BattCoolPmpATempSnsrPerf) & 64U)
                         == 0U)) && (KeBRDR_b_EnblLTAPTmpFlt_HeatPerf_IUMPR))) ||
                  ((((((sint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1) > 0) &&
                    ((((uint32)BRDR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 64U) ==
                     0U)) && (KeBRDR_b_EnblBTISTmp_HeatPerf_IUMPR))) ||
                 ((((((sint32)BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) > 0) &&
                   ((((uint32)BRDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) ==
                    0U)) && (KeBRDR_b_EnblRlyCktFlt_HeatPerf_IUMPR))) ||
                ((((((sint32)BRDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 1) > 0)
                  && ((((uint32)BRDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 64U)
                      == 0U)) && (KeBRDR_b_EnblHtrPerf_HeatPerf_IUMPR))) ||
               ((((((sint32)BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 1) > 0) &&
                 ((((uint32)BRDR_ac_DW.StatusByte_BattCoolLvlLow) & 64U) == 0U))
                && (KeBRDR_b_EnblClntLo_HeatPerf_IUMPR))) || ((((((sint32)
                   BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) & 1) > 0) &&
                ((((uint32)BRDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) &
                  64U) == 0U)) && (KeBRDR_b_EnblBHOSRat_HeatPerf_IUMPR))) ||
             (!VeBRDR_b_BPCM_NoCommErr)) || (((((uint32)
                rtb_VeBRDR_b_BPCM_LIN_LOC) != CeBPCR_e_LIN_BusOff_Disabled) ||
              rtb_VeBRDR_b_BPCM_LIN_LOC_FA) &&
             (KeBRDR_b_EnblBPCMLINBusOff_HeatPerf_IUMPR))) || (((((uint32)
               rtb_VeBRDR_b_LTAP_LOC) != CeBPCR_e_LOC_BCP_False) ||
             rtb_VeBRDR_b_LTAP_LOC_FA) && (KeBRDR_b_EnblLTAP_LOC_HeatPerf_IUMPR)))
          || (((((uint32)rtb_VeBRDR_b_BattHtr_LOC) !=
                CeBPCR_e_LOC_BatClntHtr_False) || rtb_VeBRDR_b_BattHtr_LOC_FA) &&
              (KeBRDR_b_EnblBHOS_LOC_HeatPerf_IUMPR))) &&
         (KeBRDR_b_BattHeat_IUMPR_Enbl));

#endif

    /* End of RelationalOperator: '<S863>/Comparison2' */

    /* SignalConversion generated from: '<S855>/Variant Source2' */
#if Rte_SysCon_Variant_BRDR_3

    /* VariantMerge generated from: '<S559>/BattHeat_Perf_IUMPR' incorporates:
     *  Constant: '<S861>/FALSE Constant'
     */
    BRDR_ac_B.VariantMergeForOutportBattHeat_Perf_IUMP = false;

#endif

    /* End of SignalConversion generated from: '<S855>/Variant Source2' */

    /* Update for UnitDelay: '<S961>/Unit Delay' */
#if Rte_SysCon_Variant_BRDR_15

    BRDR_ac_DW.UnitDelay_DSTATE_o3 = rtb_LogicalOperator5_d;

#endif

    /* End of Update for UnitDelay: '<S961>/Unit Delay' */
    /* End of Outputs for SubSystem: '<S559>/If_HeatBatt_Perf_Diag' */
#else

    /* Outputs for Atomic SubSystem: '<S559>/Else_HeatBtDiag' */
    /* VariantMerge generated from: '<S559>/VeBRDR_e_FaultSts_BattHeat' incorporates:
     *  Constant: '<S856>/Constant'
     */
    BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_p = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S559>/BattHeat_Perf_IUMPR' incorporates:
     *  Constant: '<S854>/FALSE Constant'
     */
    BRDR_ac_B.VariantMergeForOutportBattHeat_Perf_IUMP = false;

    /* End of Outputs for SubSystem: '<S559>/Else_HeatBtDiag' */
#endif

    /* End of Outputs for SubSystem: '<S10>/HeatBatt_Perf_Diag' */

    /* Outputs for Atomic SubSystem: '<S11>/BattCoolLvlSnsCkt' */
#if Rte_SysCon_Variant_BRDR_24

    /* Outputs for Atomic SubSystem: '<S1090>/If_DTC_P2BE2' */
    /* Outputs for Atomic SubSystem: '<S1176>/P2BE2_DiagMachine' */
    /* RelationalOperator: '<S1184>/Relational Operator3' incorporates:
     *  Constant: '<S1184>/Constant3'
     *  DataStoreRead: '<S1185>/StatusByte_BattCoolLvlSnsCkt'
     *  S-Function (sfix_bitop): '<S1184>/Bitwise Operator2'
     */
    rtb_VeBRDR_b_BattHtr_LOC_FA = ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolLvlSnsCkt) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S1184>/EdgeFalling1' */
    /* Logic: '<S1184>/Logical Operator' incorporates:
     *  Logic: '<S1187>/OR1'
     */
    rtb_LogicalOperator5_d = !rtb_VeBRDR_b_BattHtr_LOC_FA;

    /* End of Outputs for SubSystem: '<S1184>/EdgeFalling1' */

    /* Logic: '<S1184>/Logical1' incorporates:
     *  Constant: '<S1182>/Calib'
     *  Constant: '<S1183>/Calib'
     *  Constant: '<S1184>/Constant1'
     *  DataStoreRead: '<S1185>/StatusByte_BattCoolLvlSnsCkt'
     *  Logic: '<S1179>/Logical Operator'
     *  Logic: '<S1184>/Logical Operator'
     *  Logic: '<S1184>/Logical10'
     *  Logic: '<S1184>/Logical12'
     *  RelationalOperator: '<S1184>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1184>/Bitwise Operator3'
     */
    rtb_VeBRDR_b_IsDiagGlobalConditionsValid =
        ((rtb_VeBRDR_b_IsDiagGlobalConditionsValid &&
          (KeBRDR_b_BattCoolLvlSnsCkt_XYEnbl)) &&
         ((!KeBRDR_b_BattCoolLvlSnsCkt_LtchEnbl) || (((((uint32)
              BRDR_ac_DW.StatusByte_BattCoolLvlSnsCkt) & 1U) == 0U) ||
           rtb_LogicalOperator5_d)));

    /* Outputs for Atomic SubSystem: '<S1184>/EdgeFalling1' */
    /* Logic: '<S1187>/AND' incorporates:
     *  UnitDelay: '<S1187>/Unit Delay'
     */
    rtb_LogicalOperator5_d = (rtb_LogicalOperator5_d &&
        (BRDR_ac_DW.UnitDelay_DSTATE_db));

    /* Update for UnitDelay: '<S1187>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_db = rtb_VeBRDR_b_BattHtr_LOC_FA;

    /* End of Outputs for SubSystem: '<S1184>/EdgeFalling1' */

    /* Logic: '<S1184>/Logical5' */
    rtb_VeBRDR_b_BattHtr_LOC_FA = ((VeBRDR_b_ResetCnts) ||
        rtb_LogicalOperator5_d);

    /* Outputs for Atomic SubSystem: '<S1186>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1186>/Counter Reset  Enabled ' */
    /* Switch: '<S1193>/Switch1' incorporates:
     *  Constant: '<S1178>/Calib'
     *  Logic: '<S1186>/Fail Counter Reset'
     *  Logic: '<S1186>/NOT6'
     *  RelationalOperator: '<S1176>/Comparison5'
     *  Switch: '<S1193>/Switch2'
     *  Switch: '<S1194>/Switch1'
     *  UnitDelay: '<S1186>/Unit Delay'
     *  UnitDelay: '<S1186>/Unit Delay1'
     */
    if ((rtb_VeBRDR_b_BattHtr_LOC_FA || (BRDR_ac_DW.UnitDelay_DSTATE_fs)) ||
            (BRDR_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S1193>/Switch1' incorporates:
         *  Constant: '<S1193>/Constant Value2'
         */
        VeBRDR_Cnt_BatCltLvlSnsCkt_FailCnt = 0U;

        /* Switch: '<S1194>/Switch1' incorporates:
         *  Constant: '<S1194>/Constant Value2'
         */
        VeBRDR_Cnt_BatCltLvlSnsCkt_SmpCnt = 0U;
    }
    else
    {
        if (rtb_VeBRDR_b_IsDiagGlobalConditionsValid &&
                (rtb_TmpSignalConversionAtVeTRIR_U_BatBot <
                 KeBRDR_U_STGCktLowFltLim_BatBotlClnt))
        {
            /* Switch: '<S1193>/Switch1' incorporates:
             *  Constant: '<S1193>/Constant Value1'
             *  Sum: '<S1193>/Subtraction'
             *  Switch: '<S1193>/Switch2'
             *  UnitDelay: '<S1193>/Unit Delay'
             */
            VeBRDR_Cnt_BatCltLvlSnsCkt_FailCnt = (uint16)(((uint32)
                VeBRDR_Cnt_BatCltLvlSnsCkt_FailCnt) + 1U);
        }

        /* Switch: '<S1194>/Switch2' */
        if (rtb_VeBRDR_b_IsDiagGlobalConditionsValid)
        {
            /* Switch: '<S1194>/Switch1' incorporates:
             *  Constant: '<S1194>/Constant Value1'
             *  Sum: '<S1194>/Subtraction'
             *  Switch: '<S1194>/Switch2'
             *  UnitDelay: '<S1194>/Unit Delay'
             */
            VeBRDR_Cnt_BatCltLvlSnsCkt_SmpCnt = (uint16)(((uint32)
                VeBRDR_Cnt_BatCltLvlSnsCkt_SmpCnt) + 1U);
        }

        /* End of Switch: '<S1194>/Switch2' */
    }

    /* End of Switch: '<S1193>/Switch1' */
    /* End of Outputs for SubSystem: '<S1186>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S1186>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1186>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1180>/Calib'
     */
    BRDR_ac_DW.UnitDelay1_DSTATE = (VeBRDR_Cnt_BatCltLvlSnsCkt_FailCnt >=
        KeBRDR_Cnt_BatCltLvLSnsCkt_FailCnt);

    /* Logic: '<S1186>/NOT5' incorporates:
     *  Constant: '<S1181>/Calib'
     *  Logic: '<S1186>/NOT3'
     *  RelationalOperator: '<S1186>/Less Than  or Equal'
     */
    BRDR_ac_DW.UnitDelay_DSTATE_fs = ((VeBRDR_Cnt_BatCltLvlSnsCkt_SmpCnt >=
        KeBRDR_Cnt_BatCltLvLSnsCkt_SmpCnt) && (!BRDR_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S1199>/Switch1' incorporates:
     *  Constant: '<S1192>/Constant Value'
     *  DataStoreWrite: '<S1179>/Data Store Write3'
     *  Switch: '<S1198>/Switch1'
     */
    if (VeBRDR_b_ResetFOMs)
    {
        BRDR_ac_DW.NeBRDR_Cnt_HVBatCltLvlSnsCkt_MFOP = 0U;
    }
    else
    {
        if (BRDR_ac_DW.UnitDelay_DSTATE_fs)
        {
            /* MinMax: '<S1192>/Minimum2' incorporates:
             *  DataStoreRead: '<S1179>/Data Store Read1'
             *  Switch: '<S1198>/Switch1'
             */
            if (VeBRDR_Cnt_BatCltLvlSnsCkt_FailCnt >
                    BRDR_ac_DW.NeBRDR_Cnt_HVBatCltLvlSnsCkt_MFOP)
            {
                /* DataStoreWrite: '<S1179>/Data Store Write3' incorporates:
                 *  Switch: '<S1198>/Switch1'
                 */
                BRDR_ac_DW.NeBRDR_Cnt_HVBatCltLvlSnsCkt_MFOP =
                    VeBRDR_Cnt_BatCltLvlSnsCkt_FailCnt;
            }

            /* End of MinMax: '<S1192>/Minimum2' */
        }
    }

    /* End of Switch: '<S1199>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1184>/Fail' */
    BRDR_ac_Fail(BRDR_ac_DW.UnitDelay1_DSTATE,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S1184>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1184>/Init' */
    BRDR_ac_Init_e(rtb_VeBRDR_b_BattHtr_LOC_FA,
                   &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S1184>/Init' */

    /* Outputs for Enabled SubSystem: '<S1184>/Pass' */
    BRDR_ac_Pass(BRDR_ac_DW.UnitDelay_DSTATE_fs,
                 &BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S1184>/Pass' */

    /* RelationalOperator: '<S1184>/Relational Operator' incorporates:
     *  Constant: '<S1188>/Constant'
     *  VariantMerge generated from: '<S1090>/VeBRDR_e_FaultSts_BattCoolLvlSnsCkt'
     */
    VeBRDR_b_BatCltLvlSnsCkt_FltDtct = (((uint32)
        BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSts_) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S1176>/P2BE2_DiagMachine' */
    /* End of Outputs for SubSystem: '<S1090>/If_DTC_P2BE2' */
#else

    /* Outputs for Atomic SubSystem: '<S1090>/Else_DTC_P2BE2' */
    /* VariantMerge generated from: '<S1090>/VeBRDR_e_FaultSts_BattCoolLvlSnsCkt' incorporates:
     *  Constant: '<S1177>/Constant'
     */
    BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSts_ = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S1090>/Else_DTC_P2BE2' */
#endif

    /* End of Outputs for SubSystem: '<S11>/BattCoolLvlSnsCkt' */

    /* Logic: '<S1091>/AND2' incorporates:
     *  Constant: '<S1217>/Calib'
     *  Constant: '<S1219>/Calib'
     *  Logic: '<S1091>/Logical'
     *  Logic: '<S1091>/Logical1'
     *  Logic: '<S1091>/Logical10'
     *  Logic: '<S1091>/Logical11'
     *  Logic: '<S1091>/Logical12'
     *  Logic: '<S1091>/Logical13'
     *  Logic: '<S1091>/Logical14'
     *  Logic: '<S1091>/Logical2'
     *  Logic: '<S1091>/Logical23'
     *  Logic: '<S1091>/Logical24'
     *  Logic: '<S1091>/Logical25'
     *  Logic: '<S1091>/Logical26'
     *  Logic: '<S1091>/Logical3'
     *  Logic: '<S1091>/Logical4'
     *  Logic: '<S1091>/Logical5'
     *  Logic: '<S1091>/Logical6'
     *  Logic: '<S1091>/Logical7'
     *  Logic: '<S1091>/Logical8'
     *  Logic: '<S1201>/AND'
     *  Logic: '<S1201>/OR1'
     *  Logic: '<S1206>/Logical Operator'
     *  Logic: '<S1207>/Logical Operator'
     *  RelationalOperator: '<S1091>/Comparison1'
     *  RelationalOperator: '<S1091>/Comparison3'
     *  RelationalOperator: '<S1091>/Comparison4'
     *  RelationalOperator: '<S1091>/Comparison6'
     *  RelationalOperator: '<S1206>/Relational Operator1'
     *  RelationalOperator: '<S1206>/Relational Operator2'
     *  RelationalOperator: '<S1207>/Relational Operator1'
     *  RelationalOperator: '<S1207>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1206>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1206>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1207>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1207>/Bitwise Operator2'
     *  Switch: '<S1091>/Switch'
     *  Switch: '<S1091>/Switch1'
     *  UnitDelay: '<S1091>/Unit Delay'
     */
#if Rte_SysCon_Variant_BRDR_23

    /* Outputs for Atomic SubSystem: '<S1091>/Stop Watch Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S1091>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S1091>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S1091>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S1091>/EdgeRising' */
    /* Logic: '<S1091>/AND2' incorporates:
     *  Constant: '<S1216>/Calib'
     */
    VeBRDR_b_ThrmSysEnbl_ClntLow = (rtb_TmpSignalConversionAtVePMTR_b_ThrmlS ||
        (KeBRDR_b_DsblThermSysEnbl_ClntLo));

    /* Logic: '<S1091>/Logical5' incorporates:
     *  Constant: '<S1204>/Constant'
     *  Constant: '<S1209>/Calib'
     *  Constant: '<S1210>/Calib'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_BPCM_LIN_LOC'
     */
    VeBRDR_b_BPCM_LINBusOff_ClntLow = (((((uint32)rtb_VeBRDR_b_BPCM_LIN_LOC) ==
        CeBPCR_e_LIN_BusOff_Disabled) || (KeBRDR_b_DsblLINBusOff_BattClntLo)) &&
        ((!rtb_VeBRDR_b_BPCM_LIN_LOC_FA) || (KeBRDR_b_DsblLINBusOffFA_BattClntLo)));

    /* Logic: '<S1091>/Logical26' incorporates:
     *  Constant: '<S1205>/Constant'
     *  Constant: '<S1214>/Calib'
     *  Constant: '<S1215>/Calib'
     *  VariantMerge generated from: '<S4>/VeBRDR_b_LTAP_LOC'
     */
    VeBRDR_b_LTAP_LOC_ClntLow = (((((uint32)rtb_VeBRDR_b_LTAP_LOC) ==
        CeBPCR_e_LOC_BCP_False) || (KeBRDR_b_DsblLTAP_LOC_BattClntLo)) &&
        ((!rtb_VeBRDR_b_LTAP_LOC_FA) || (KeBRDR_b_DsblLTAP_LOCFA_BattClntLo)));

    /* Logic: '<S1091>/Logical7' incorporates:
     *  Constant: '<S1207>/Constant1'
     *  Constant: '<S1207>/Constant2'
     *  Constant: '<S1213>/Calib'
     *  DataStoreRead: '<S1207>/StatusByte_BattCoolPmpPerf'
     */
    VeBRDR_b_LTAPPerf_ClntLow = ((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U) != 0U)) ||
        (KeBRDR_b_DsblLTAPPerf_BattClntLo));

    /* Logic: '<S1091>/Logical13' incorporates:
     *  Constant: '<S1211>/Calib'
     */
    VeBRDR_b_LTAPDryRunFA_ClntLow = ((!rtb_TmpSignalConversionAtVePMIR_b_LTAc_a)
        || (KeBRDR_b_DsblLTAPDryRunFA_BattClntLo));

    /* Logic: '<S1091>/Logical4' incorporates:
     *  Constant: '<S1206>/Constant1'
     *  Constant: '<S1206>/Constant2'
     *  Constant: '<S1212>/Calib'
     *  DataStoreRead: '<S1206>/StatusByte_BattCoolPmpOveSpd'
     */
    VeBRDR_b_LTAPDryRun_ClntLow = ((((((sint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 1) <= 0) || ((((uint32)
        BRDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 64U) != 0U)) ||
        (KeBRDR_b_DsblLTAPDryRun_BattClntLo));

    /* Logic: '<S1091>/Logical' incorporates:
     *  Constant: '<S1203>/Constant'
     *  VariantMerge generated from: '<S1089>/HV_Bat_CltLvlLo'
     */
    VeBRDR_b_LTAP_Rqt_ClntLo = ((((((((VeBRDR_b_ThrmSysEnbl_ClntLow) &&
        (VeBRDR_b_BPCM_LINBusOff_ClntLow)) && (VeBRDR_b_BPCM_NoCommErr)) &&
        (VeBRDR_b_LTAP_LOC_ClntLow)) && (VeBRDR_b_LTAPPerf_ClntLow)) &&
        (VeBRDR_b_LTAPDryRunFA_ClntLow)) && (VeBRDR_b_LTAPDryRun_ClntLow)) &&
        (((uint32)VeBRDR_e_HV_Bat_CltLvlLo_BD) == CeBRDR_e_BatCltLvlLo));

    /* Logic: '<S1202>/AND' incorporates:
     *  Logic: '<S1202>/OR1'
     *  UnitDelay: '<S1202>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMTR_b_ThrmlS = ((VeBRDR_b_LTAP_Rqt_ClntLo) &&
        (!BRDR_ac_DW.UnitDelay_DSTATE_cs));

    /* Update for UnitDelay: '<S1202>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_cs = VeBRDR_b_LTAP_Rqt_ClntLo;

    /* VariantMerge generated from: '<S11>/Variant Source2' incorporates:
     *  UnitDelay: '<S1201>/Unit Delay'
     */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = BRDR_ac_DW.UnitDelay_DSTATE_pn;

    /* Update for UnitDelay: '<S1201>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_pn = VeBRDR_b_LTAP_Rqt_ClntLo;
    if (KeBRDR_b_EnblPmp_TmrOrEnblCond)
    {
        VeBRDR_b_LTAPRqt_LoLv_Diag_Dbnc = (((!VeBRDR_b_LTAP_Rqt_ClntLo) &&
            (VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD)) ||
            (VeBRDR_b_LTAPRqt_LoLv_Diag_Dbnc));
    }

    /* Logic: '<S1221>/OR1' incorporates:
     *  Constant: '<S1217>/Calib'
     *  Logic: '<S1091>/Logical14'
     *  Logic: '<S1201>/AND'
     *  Logic: '<S1201>/OR1'
     *  Logic: '<S1221>/NOT'
     *  Logic: '<S1221>/OR'
     *  UnitDelay: '<S1221>/Unit Delay'
     */
    VeBRDR_b_LTAPRqt_LoLv_DiagLtch = (rtb_TmpSignalConversionAtVePMTR_b_ThrmlS ||
        ((!VeBRDR_b_LTAPRqt_LoLv_Diag_Dbnc) && (VeBRDR_b_LTAPRqt_LoLv_DiagLtch)));

    /* Logic: '<S1200>/AND' incorporates:
     *  Logic: '<S1200>/OR1'
     *  UnitDelay: '<S1200>/Unit Delay'
     */
    VeBRDR_b_LTAPRqt_LoLv_DiagRst = ((!VeBRDR_b_LTAPRqt_LoLv_DiagLtch) &&
        (BRDR_ac_DW.UnitDelay_DSTATE_ef));

    /* Update for UnitDelay: '<S1200>/Unit Delay' */
    BRDR_ac_DW.UnitDelay_DSTATE_ef = VeBRDR_b_LTAPRqt_LoLv_DiagLtch;

    /* Switch: '<S1222>/Switch1' incorporates:
     *  Switch: '<S1222>/Switch2'
     */
    if (VeBRDR_b_LTAPRqt_LoLv_DiagRst)
    {
        /* Switch: '<S1222>/Switch1' incorporates:
         *  Constant: '<S1222>/Constant Value2'
         */
        VeBRDR_t_LTAPRqt_LoLv_DiagTm = 0.0F;
    }
    else
    {
        if (VeBRDR_b_LTAPRqt_LoLv_DiagLtch)
        {
            /* Switch: '<S1222>/Switch1' incorporates:
             *  Constant: '<S1208>/Calib'
             *  Sum: '<S1222>/Subtraction'
             *  Switch: '<S1222>/Switch2'
             *  UnitDelay: '<S1222>/Unit Delay'
             */
            VeBRDR_t_LTAPRqt_LoLv_DiagTm = HeBRDR_t_MedTEH +
                VeBRDR_t_LTAPRqt_LoLv_DiagTm;
        }
    }

    /* End of Switch: '<S1222>/Switch1' */

    /* RelationalOperator: '<S1091>/Comparison1' incorporates:
     *  Constant: '<S1220>/Calib'
     */
    VeBRDR_b_LTAPRqt_LoLv_Diag_Dbnc = (VeBRDR_t_LTAPRqt_LoLv_DiagTm >=
        KeBRDR_t_LTAPOnTm_ClntSnsrFlt);

    /* Logic: '<S1091>/Logical10' */
    VeBRDR_b_LTAP_Rqt_LoLv_DiagFin = ((VeBRDR_b_LTAPRqt_LoLv_DiagLtch) &&
        (!VeBRDR_b_LTAPRqt_LoLv_Diag_Dbnc));
    if (KeBRDR_b_LTAP_RqtLoLvDiag_SD)
    {
        /* VariantMerge generated from: '<S11>/Variant Source2' incorporates:
         *  Constant: '<S1218>/Calib'
         */
        VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = KeBRDR_b_LTAP_RqtLoLvDiag_Dial;
    }
    else
    {
        /* VariantMerge generated from: '<S11>/Variant Source2' */
        VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = VeBRDR_b_LTAP_Rqt_LoLv_DiagFin;
    }

    /* End of Outputs for SubSystem: '<S1091>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1091>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S1091>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S1091>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S1091>/Stop Watch Reset Enabled' */
#endif

    /* End of Logic: '<S1091>/AND2' */

    /* SignalConversion generated from: '<S11>/Variant Source2' */
#if !Rte_SysCon_Variant_BRDR_23

    /* VariantMerge generated from: '<S11>/Variant Source2' incorporates:
     *  Constant: '<S1092>/FALSE Constant1'
     */
    VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD = false;

#endif

    /* End of SignalConversion generated from: '<S11>/Variant Source2' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Switch: '<S1263>/Switch1' incorporates:
     *  Constant: '<S1272>/Calib'
     */
    if (KeBRDR_b_BHOSDiag_Enbl_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_BHOSDiag_Enbl' incorporates:
         *  Constant: '<S1271>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_BHOSDiag_Enbl'
         */
        (void)Rte_Write_VeBRDR_b_BHOSDiag_Enbl_Value(KeBRDR_b_BHOSDiag_Enbl_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_BHOSDiag_Enbl' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_BHOSDiag_Enbl'
         */
        (void)Rte_Write_VeBRDR_b_BHOSDiag_Enbl_Value(VeBRDR_b_BHOS_TmpDiagEnbl);
    }

    /* End of Switch: '<S1263>/Switch1' */

    /* Switch: '<S1265>/Switch2' incorporates:
     *  Constant: '<S1280>/Calib'
     */
    if (KeBRDR_b_BTOS2Diag_Enbl_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_BTOS2Diag_Enbl' incorporates:
         *  Constant: '<S1279>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_BTOS2Diag_Enbl'
         */
        (void)Rte_Write_VeBRDR_b_BTOS2Diag_Enbl_Value(KeBRDR_b_BTOS2Diag_Enbl_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_BTOS2Diag_Enbl' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_BTOS2Diag_Enbl'
         */
        (void)Rte_Write_VeBRDR_b_BTOS2Diag_Enbl_Value(VeBRDR_b_BTOS2_TmpDiagEnbl);
    }

    /* End of Switch: '<S1265>/Switch2' */

    /* Switch: '<S1265>/Switch1' incorporates:
     *  Constant: '<S1282>/Calib'
     */
    if (KeBRDR_b_BTOSDiag_Enbl_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_BTOSDiag_Enbl' incorporates:
         *  Constant: '<S1281>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_BTOSDiag_Enbl'
         */
        (void)Rte_Write_VeBRDR_b_BTOSDiag_Enbl_Value(KeBRDR_b_BTOSDiag_Enbl_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_BTOSDiag_Enbl' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_BTOSDiag_Enbl'
         */
        (void)Rte_Write_VeBRDR_b_BTOSDiag_Enbl_Value(VeBRDR_b_BTOS_TmpDiagEnbl);
    }

    /* End of Switch: '<S1265>/Switch1' */

    /* Switch: '<S1263>/Switch2' incorporates:
     *  Constant: '<S1274>/Calib'
     */
    if (KeBRDR_b_BHOS_FltDtct_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_HV_BHOS_FltDtct' incorporates:
         *  Constant: '<S1273>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_HV_BHOS_FltDtct'
         */
        (void)Rte_Write_VeBRDR_b_HV_BHOS_FltDtct_Value(KeBRDR_b_BHOS_FltDtct_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_HV_BHOS_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_HV_BHOS_FltDtct'
         */
        (void)Rte_Write_VeBRDR_b_HV_BHOS_FltDtct_Value
            (VeBRDR_b_HV_BHOS_FltDtct_BD);
    }

    /* End of Switch: '<S1263>/Switch2' */

    /* Switch: '<S1264>/Switch2' incorporates:
     *  Constant: '<S1276>/Calib'
     */
    if (KeBRDR_b_HV_BTIS2_FltDtct_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_HV_BTIS2_FltDtct' incorporates:
         *  Constant: '<S1275>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_HV_BTIS2_FltDtct'
         */
        (void)Rte_Write_VeBRDR_b_HV_BTIS2_FltDtct_Value
            (KeBRDR_b_HV_BTIS2_FltDtct_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_HV_BTIS2_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_HV_BTIS2_FltDtct'
         */
        (void)Rte_Write_VeBRDR_b_HV_BTIS2_FltDtct_Value
            (VeBRDR_b_HV_BTIS2_FltDtct_BD);
    }

    /* End of Switch: '<S1264>/Switch2' */

    /* Switch: '<S1264>/Switch1' incorporates:
     *  Constant: '<S1278>/Calib'
     */
    if (KeBRDR_b_HV_BTIS_FltDtct_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_HV_BTIS_FltDtct' incorporates:
         *  Constant: '<S1277>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_HV_BTIS_FltDtct'
         */
        (void)Rte_Write_VeBRDR_b_HV_BTIS_FltDtct_Value
            (KeBRDR_b_HV_BTIS_FltDtct_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_HV_BTIS_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_HV_BTIS_FltDtct'
         */
        (void)Rte_Write_VeBRDR_b_HV_BTIS_FltDtct_Value
            (VeBRDR_b_HV_BTIS_FltDtct_BD);
    }

    /* End of Switch: '<S1264>/Switch1' */

    /* Switch: '<S1266>/Switch2' incorporates:
     *  Constant: '<S1284>/Calib'
     */
    if (KeBRDR_b_HV_BTOS2_FltDtct_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_HV_BTOS2_FltDtct' incorporates:
         *  Constant: '<S1283>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_HV_BTOS2_FltDtct'
         */
        (void)Rte_Write_VeBRDR_b_HV_BTOS2_FltDtct_Value
            (KeBRDR_b_HV_BTOS2_FltDtct_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_HV_BTOS2_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_HV_BTOS2_FltDtct'
         */
        (void)Rte_Write_VeBRDR_b_HV_BTOS2_FltDtct_Value
            (VeBRDR_b_HV_BTOS2_FltDtct_BD);
    }

    /* End of Switch: '<S1266>/Switch2' */

    /* Switch: '<S1266>/Switch1' incorporates:
     *  Constant: '<S1286>/Calib'
     */
    if (KeBRDR_b_HV_BTOS_FltDtct_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_HV_BTOS_FltDtct' incorporates:
         *  Constant: '<S1285>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_HV_BTOS_FltDtct'
         */
        (void)Rte_Write_VeBRDR_b_HV_BTOS_FltDtct_Value
            (KeBRDR_b_HV_BTOS_FltDtct_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_HV_BTOS_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_HV_BTOS_FltDtct'
         */
        (void)Rte_Write_VeBRDR_b_HV_BTOS_FltDtct_Value
            (VeBRDR_b_HV_BTOS_FltDtct_BD);
    }

    /* End of Switch: '<S1266>/Switch1' */

    /* Switch: '<S1295>/Switch1' incorporates:
     *  Constant: '<S1302>/Calib'
     */
    if (KeBRDR_b_BHOSTmpPerf_IUMPR_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_IUMPR_BHOSPerf' incorporates:
         *  Constant: '<S1301>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_IUMPR_BHOSPerf'
         */
        (void)Rte_Write_VeBRDR_b_IUMPR_BHOSPerf_Value
            (KeBRDR_b_BHOSTmpPerf_IUMPR_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_IUMPR_BHOSPerf' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_IUMPR_BHOSPerf'
         */
        (void)Rte_Write_VeBRDR_b_IUMPR_BHOSPerf_Value(VeBRDR_b_BHOS_Perf_IUMPR);
    }

    /* End of Switch: '<S1295>/Switch1' */

    /* Switch: '<S1296>/Switch1' incorporates:
     *  Constant: '<S1304>/Calib'
     */
    if (KeBRDR_b_BTISPerf_IUMPR_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_IUMPR_BTISPerf' incorporates:
         *  Constant: '<S1303>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_IUMPR_BTISPerf'
         */
        (void)Rte_Write_VeBRDR_b_IUMPR_BTISPerf_Value(KeBRDR_b_BTISPerf_IUMPR_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_IUMPR_BTISPerf' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_IUMPR_BTISPerf'
         */
        (void)Rte_Write_VeBRDR_b_IUMPR_BTISPerf_Value(VeBRDR_b_BTIS_Perf_IUMPR);
    }

    /* End of Switch: '<S1296>/Switch1' */

    /* Switch: '<S1297>/Switch1' incorporates:
     *  Constant: '<S1306>/Calib'
     */
    if (KeBRDR_b_BTOSPerf_IUMPR_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_IUMPR_BTOSPerf' incorporates:
         *  Constant: '<S1305>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_IUMPR_BTOSPerf'
         */
        (void)Rte_Write_VeBRDR_b_IUMPR_BTOSPerf_Value(KeBRDR_b_BTOSPerf_IUMPR_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_IUMPR_BTOSPerf' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_IUMPR_BTOSPerf'
         */
        (void)Rte_Write_VeBRDR_b_IUMPR_BTOSPerf_Value(VeBRDR_b_BTOS_Perf_IUMPR);
    }

    /* End of Switch: '<S1297>/Switch1' */

    /* Switch: '<S1298>/Switch1' incorporates:
     *  Constant: '<S1308>/Calib'
     */
    if (KeBRDR_b_BattCoolPerf_IUMPR_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_IUMPR_BattCoolPerf' incorporates:
         *  Constant: '<S1307>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_IUMPR_BattCoolPerf'
         */
        (void)Rte_Write_VeBRDR_b_IUMPR_BattCoolPerf_Value
            (KeBRDR_b_BattCoolPerf_IUMPR_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_IUMPR_BattCoolPerf' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_IUMPR_BattCoolPerf'
         */
        (void)Rte_Write_VeBRDR_b_IUMPR_BattCoolPerf_Value
            (BRDR_ac_B.VariantMergeForOutportBattCool_Perf_IUMP);
    }

    /* End of Switch: '<S1298>/Switch1' */

    /* Switch: '<S1299>/Switch1' incorporates:
     *  Constant: '<S1310>/Calib'
     */
    if (KeBRDR_b_BattHeatPerf_IUMPR_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_IUMPR_BattHeatPerf' incorporates:
         *  Constant: '<S1309>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_IUMPR_BattHeatPerf'
         */
        (void)Rte_Write_VeBRDR_b_IUMPR_BattHeatPerf_Value
            (KeBRDR_b_BattHeatPerf_IUMPR_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_IUMPR_BattHeatPerf' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_IUMPR_BattHeatPerf'
         */
        (void)Rte_Write_VeBRDR_b_IUMPR_BattHeatPerf_Value
            (BRDR_ac_B.VariantMergeForOutportBattHeat_Perf_IUMP);
    }

    /* End of Switch: '<S1299>/Switch1' */

    /* Switch: '<S1300>/Switch1' incorporates:
     *  Constant: '<S1312>/Calib'
     */
    if (KeBRDR_b_LTAPTmpPerf_IUMPR_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_IUMPR_LTAP_TmpPerf' incorporates:
         *  Constant: '<S1311>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_IUMPR_LTAP_TmpPerf'
         */
        (void)Rte_Write_VeBRDR_b_IUMPR_LTAP_TmpPerf_Value
            (KeBRDR_b_LTAPTmpPerf_IUMPR_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_IUMPR_LTAP_TmpPerf' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_IUMPR_LTAP_TmpPerf'
         */
        (void)Rte_Write_VeBRDR_b_IUMPR_LTAP_TmpPerf_Value
            (VeBRDR_b_LTAP_Perf_IUMPR);
    }

    /* End of Switch: '<S1300>/Switch1' */

    /* Switch: '<S1268>/Switch1' incorporates:
     *  Constant: '<S1290>/Calib'
     */
    if (KeBRDR_b_LTAPDiag_Enbl_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_LTAPDiag_Enbl' incorporates:
         *  Constant: '<S1289>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_LTAPDiag_Enbl'
         */
        (void)Rte_Write_VeBRDR_b_LTAPDiag_Enbl_Value(KeBRDR_b_LTAPDiag_Enbl_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_LTAPDiag_Enbl' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_LTAPDiag_Enbl'
         */
        (void)Rte_Write_VeBRDR_b_LTAPDiag_Enbl_Value(VeBRDR_b_LTAP_TmpDiagEnbl);
    }

    /* End of Switch: '<S1268>/Switch1' */

    /* Switch: '<S1270>/Switch1' incorporates:
     *  Constant: '<S1294>/Calib'
     */
    if (KeBRDR_b_LTAP_Rqt_LoLv_Diag_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_LTAP_Rqt_LoLv_Diag' incorporates:
         *  Constant: '<S1293>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_LTAP_Rqt_LoLv_Diag'
         */
        (void)Rte_Write_VeBRDR_b_LTAP_Rqt_LoLv_Diag_Value
            (KeBRDR_b_LTAP_Rqt_LoLv_Diag_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_LTAP_Rqt_LoLv_Diag' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_LTAP_Rqt_LoLv_Diag'
         */
        (void)Rte_Write_VeBRDR_b_LTAP_Rqt_LoLv_Diag_Value
            (VeBRDR_b_LTAP_Rqt_LoLv_Diag_AD);
    }

    /* End of Switch: '<S1270>/Switch1' */

    /* Switch: '<S1269>/Switch1' incorporates:
     *  Constant: '<S1292>/Calib'
     */
    if (KeBRDR_b_LTAP_TmpFltDtct_SD)
    {
        /* Outport: '<Root>/VeBRDR_b_LTAP_TmpFltDtct' incorporates:
         *  Constant: '<S1291>/Calib'
         *  SignalConversion generated from: '<S1>/VeBRDR_b_LTAP_TmpFltDtct'
         */
        (void)Rte_Write_VeBRDR_b_LTAP_TmpFltDtct_Value
            (KeBRDR_b_LTAP_TmpFltDtct_D);
    }
    else
    {
        /* Outport: '<Root>/VeBRDR_b_LTAP_TmpFltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeBRDR_b_LTAP_TmpFltDtct'
         */
        (void)Rte_Write_VeBRDR_b_LTAP_TmpFltDtct_Value
            (VeBRDR_b_LTAP_TmpFltDtct_BD);
    }

    /* End of Switch: '<S1269>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBRDR_e_FaultSts_BattCool' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRDR_e_FaultSts_BattCool'
     *  VariantMerge generated from: '<S558>/VeBRDR_e_FaultSts_BattCool'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCool_Value
        (BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_l);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_BattCoolLvlLow' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRDR_e_FaultSts_BattCoolLvlLow'
     *  VariantMerge generated from: '<S1089>/VeBRDR_e_FaultSts_BattCoolLvlLow'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCoolLvlLow_Value
        (BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_g);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_BattCoolLvlSnsCkt' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRDR_e_FaultSts_BattCoolLvlSnsCkt'
     *  VariantMerge generated from: '<S1090>/VeBRDR_e_FaultSts_BattCoolLvlSnsCkt'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCoolLvlSnsCkt_Value
        (BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSts_);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf'
     *  VariantMerge generated from: '<S87>/VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf_Value
        (BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_h);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf'
     *  VariantMerge generated from: '<S79>/VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf_Value
        (BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_j);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_BattHeat' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRDR_e_FaultSts_BattHeat'
     *  VariantMerge generated from: '<S559>/VeBRDR_e_FaultSts_BattHeat'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattHeat_Value
        (BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_p);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_CoolOutTempSnsCkt' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRDR_e_FaultSts_CoolOutTempSnsCkt'
     *  VariantMerge generated from: '<S84>/VeBRDR_e_FaultSts_CoolOutTempSnsCkt'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_CoolOutTempSnsCkt_Value
        (BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_b);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_HB_CT_SnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRDR_e_FaultSts_HB_CT_SnsrPerf'
     *  VariantMerge generated from: '<S81>/VeBRDR_e_FaultSts_HB_CT_SnsrPerf'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_HB_CT_SnsrPerf_Value
        (BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_a);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer'
     *  VariantMerge generated from: '<S80>/VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer_Value
        (BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_i);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer'
     *  VariantMerge generated from: '<S83>/VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer_Value
        (BRDR_ac_B.VariantMergeForOutportVeBRDR_e_FaultSt_c);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Switch: '<S1267>/Switch1' incorporates:
     *  Constant: '<S1287>/Calib'
     *  Constant: '<S1288>/Calib'
     *  VariantMerge generated from: '<S1089>/HV_Bat_CltLvlLo'
     */
    if (KeBRDR_b_HV_Bat_CltLvlLo_SD)
    {
        tmp_0 = KeBRDR_e_HV_Bat_CltLvlLo_D;
    }
    else
    {
        tmp_0 = VeBRDR_e_HV_Bat_CltLvlLo_BD;
    }

    /* Outport: '<Root>/VeBRDR_e_HV_Bat_CltLvlLo' incorporates:
     *  SignalConversion generated from: '<S1>/VeBRDR_e_HV_Bat_CltLvlLo'
     *  Switch: '<S1267>/Switch1'
     */
    (void)Rte_Write_VeBRDR_e_HV_Bat_CltLvlLo_Value(tmp_0);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, BRDR_CODE) BRDR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/BRDR_PwrOff'
     */
    /* Outport: '<Root>/NeBRDR_Cnt_ChillPerf_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBRDR_Cnt_ChillPerf_MFOP'
     */
    (void)Rte_Write_NeBRDR_Cnt_ChillPerf_MFOP_NeBRDR_Cnt_ChillPerf_MFOP
        (BRDR_ac_DW.NeBRDR_Cnt_ChillPerf_MFOP);

    /* Outport: '<Root>/NeBRDR_Cnt_HVBatCltLvLo_OC_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBRDR_Cnt_HVBatCltLvLo_OC_MFOP'
     */
    (void)
        Rte_Write_NeBRDR_Cnt_HVBatCltLvLo_OC_MFOP_NeBRDR_Cnt_HVBatCltLvLo_OC_MFOP
        (BRDR_ac_DW.NeBRDR_Cnt_HVBatCltLvLo_OC_MFOP);

    /* Outport: '<Root>/NeBRDR_Cnt_HVBatCltLvlSnsCkt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBRDR_Cnt_HVBatCltLvlSnsCkt_MFOP'
     */
    (void)
        Rte_Write_NeBRDR_Cnt_HVBatCltLvlSnsCkt_MFOP_NeBRDR_Cnt_HVBatCltLvlSnsCkt_MFOP
        (BRDR_ac_DW.NeBRDR_Cnt_HVBatCltLvlSnsCkt_MFOP);

    /* Outport: '<Root>/NeBRDR_Cnt_HV_BTIS2_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBRDR_Cnt_HV_BTIS2_MFOP'
     */
    (void)Rte_Write_NeBRDR_Cnt_HV_BTIS2_MFOP_NeBRDR_Cnt_HV_BTIS2_MFOP
        (BRDR_ac_DW.NeBRDR_Cnt_HV_BTIS2_MFOP);

    /* Outport: '<Root>/NeBRDR_Cnt_HV_BTOS2_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBRDR_Cnt_HV_BTOS2_MFOP'
     */
    (void)Rte_Write_NeBRDR_Cnt_HV_BTOS2_MFOP_NeBRDR_Cnt_HV_BTOS2_MFOP
        (BRDR_ac_DW.NeBRDR_Cnt_HV_BTOS2_MFOP);

    /* Outport: '<Root>/NeBRDR_Cnt_HeatExPerf_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBRDR_Cnt_HeatExPerf_MFOP'
     */
    (void)Rte_Write_NeBRDR_Cnt_HeatExPerf_MFOP_NeBRDR_Cnt_HeatExPerf_MFOP
        (BRDR_ac_DW.NeBRDR_Cnt_HeatExPerf_MFOP);

    /* Outport: '<Root>/NeBRDR_Cnt_HV_BTIS_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read'
     */
    (void)Rte_Write_NeBRDR_Cnt_HV_BTIS_MFOP_NeBRDR_Cnt_HV_BTIS_MFOP
        (BRDR_ac_DW.NeBRDR_Cnt_HV_BTIS_MFOP);

    /* Outport: '<Root>/NeBRDR_Cnt_HV_BTOS_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read1'
     */
    (void)Rte_Write_NeBRDR_Cnt_HV_BTOS_MFOP_NeBRDR_Cnt_HV_BTOS_MFOP
        (BRDR_ac_DW.NeBRDR_Cnt_HV_BTOS_MFOP);

    /* Outport: '<Root>/NeBRDR_Cnt_LTAP_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read2'
     */
    (void)Rte_Write_NeBRDR_Cnt_LTAP_MFOP_NeBRDR_Cnt_LTAP_MFOP
        (BRDR_ac_DW.NeBRDR_Cnt_LTAP_MFOP);

    /* Outport: '<Root>/NeBRDR_Cnt_HV_BHOS_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read3'
     */
    (void)Rte_Write_NeBRDR_Cnt_HV_BHOS_MFOP_NeBRDR_Cnt_HV_BHOS_MFOP
        (BRDR_ac_DW.NeBRDR_Cnt_HV_BHOS_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, BRDR_CODE) BRDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BRDR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S1313>/Data Store Write3' incorporates:
     *  Inport: '<Root>/NeBRDR_Cnt_HV_BHOS_MFOP_PM_In'
     */
    (void)Rte_Read_NeBRDR_Cnt_HV_BHOS_MFOP_Rx_NeBRDR_Cnt_HV_BHOS_MFOP
        (&BRDR_ac_DW.NeBRDR_Cnt_HV_BHOS_MFOP);

    /* DataStoreWrite: '<S1313>/Data Store Write2' incorporates:
     *  Inport: '<Root>/NeBRDR_Cnt_LTAP_MFOP_PM_In'
     */
    (void)Rte_Read_NeBRDR_Cnt_LTAP_MFOP_Rx_NeBRDR_Cnt_LTAP_MFOP
        (&BRDR_ac_DW.NeBRDR_Cnt_LTAP_MFOP);

    /* DataStoreWrite: '<S1313>/Data Store Write' incorporates:
     *  Inport: '<Root>/NeBRDR_Cnt_HV_BTOS_MFOP_PM_In'
     */
    (void)Rte_Read_NeBRDR_Cnt_HV_BTOS_MFOP_Rx_NeBRDR_Cnt_HV_BTOS_MFOP
        (&BRDR_ac_DW.NeBRDR_Cnt_HV_BTOS_MFOP);

    /* DataStoreWrite: '<S1313>/Data Store Write4' incorporates:
     *  Inport: '<Root>/NeBRDR_Cnt_HV_BTIS_MFOP_PM_In'
     */
    (void)Rte_Read_NeBRDR_Cnt_HV_BTIS_MFOP_Rx_NeBRDR_Cnt_HV_BTIS_MFOP
        (&BRDR_ac_DW.NeBRDR_Cnt_HV_BTIS_MFOP);

    /* DataStoreWrite: '<S1313>/NeBRDR_Cnt_HeatExPerf_MFOP' incorporates:
     *  Inport: '<Root>/NeBRDR_Cnt_HeatExPerf_MFOP_PM_In'
     */
    (void)Rte_Read_NeBRDR_Cnt_HeatExPerf_MFOP_Rx_NeBRDR_Cnt_HeatExPerf_MFOP
        (&BRDR_ac_DW.NeBRDR_Cnt_HeatExPerf_MFOP);

    /* DataStoreWrite: '<S1313>/NeBRDR_Cnt_HV_BTOS2_MFOP' incorporates:
     *  Inport: '<Root>/NeBRDR_Cnt_HV_BTOS2_MFOP_PM_In'
     */
    (void)Rte_Read_NeBRDR_Cnt_HV_BTOS2_MFOP_Rx_NeBRDR_Cnt_HV_BTOS2_MFOP
        (&BRDR_ac_DW.NeBRDR_Cnt_HV_BTOS2_MFOP);

    /* DataStoreWrite: '<S1313>/NeBRDR_Cnt_HV_BTIS2_MFOP' incorporates:
     *  Inport: '<Root>/NeBRDR_Cnt_HV_BTIS2_MFOP_PM_In'
     */
    (void)Rte_Read_NeBRDR_Cnt_HV_BTIS2_MFOP_Rx_NeBRDR_Cnt_HV_BTIS2_MFOP
        (&BRDR_ac_DW.NeBRDR_Cnt_HV_BTIS2_MFOP);

    /* DataStoreWrite: '<S1313>/NeBRDR_Cnt_HVBatCltLvlSnsCkt_MFOP' incorporates:
     *  Inport: '<Root>/NeBRDR_Cnt_HVBatCltLvlSnsCkt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeBRDR_Cnt_HVBatCltLvlSnsCkt_MFOP_Rx_NeBRDR_Cnt_HVBatCltLvlSnsCkt_MFOP
        (&BRDR_ac_DW.NeBRDR_Cnt_HVBatCltLvlSnsCkt_MFOP);

    /* DataStoreWrite: '<S1313>/NeBRDR_Cnt_HVBatCltLvLo_OC_MFOP' incorporates:
     *  Inport: '<Root>/NeBRDR_Cnt_HVBatCltLvLo_OC_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeBRDR_Cnt_HVBatCltLvLo_OC_MFOP_Rx_NeBRDR_Cnt_HVBatCltLvLo_OC_MFOP
        (&BRDR_ac_DW.NeBRDR_Cnt_HVBatCltLvLo_OC_MFOP);

    /* DataStoreWrite: '<S1313>/NeBRDR_Cnt_ChillPerf_MFOP' incorporates:
     *  Inport: '<Root>/NeBRDR_Cnt_ChillPerf_MFOP_PM_In'
     */
    (void)Rte_Read_NeBRDR_Cnt_ChillPerf_MFOP_Rx_NeBRDR_Cnt_ChillPerf_MFOP
        (&BRDR_ac_DW.NeBRDR_Cnt_ChillPerf_MFOP);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1314>/VeBRDR_b_LTAPDiag_Enbl_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_LTAPDiag_Enbl_O = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_LTAP_TmpFltDtct_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_LTAP_TmpFltDtct = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_BTOSDiag_Enbl_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_BTOSDiag_Enbl_O = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_HV_BTOS_FltDtct_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_HV_BTOS_FltDtct = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_HV_BTIS_FltDtct_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_HV_BTIS_FltDtct = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_BHOSDiag_Enbl_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_BHOSDiag_Enbl_O = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_HV_BHOS_FltDtct_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_HV_BHOS_FltDtct = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_BTOS2Diag_Enbl_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_BTOS2Diag_Enbl_ = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_HV_BTOS2_FltDtct_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_HV_BTOS2_FltDtc = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_e_HV_Bat_CltLvlLo_Out_Init' incorporates:
     *  Constant: '<S1314>/Const10'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_HV_Bat_CltLvlLo = BRDR_ac_ConstB.Const10;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_LTAP_Rqt_LoLv_Diag_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_LTAP_Rqt_LoLv_D = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_IUMPR_BTISPerf_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_IUMPR_BTISPerf_ = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_IUMPR_BTOSPerf_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_IUMPR_BTOSPerf_ = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_IUMPR_LTAP_TmpPerf_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_IUMPR_LTAP_TmpP = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_IUMPR_BHOSPerf_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_IUMPR_BHOSPerf_ = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_IUMPR_BattCoolPerf_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_IUMPR_BattCoolP = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_IUMPR_BattHeatPerf_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_IUMPR_BattHeatP = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_b_HV_BTIS2_FltDtct_Out_Init' */
    BRDR_ac_B.OutportBufferForVeBRDR_b_HV_BTIS2_FltDtc = false;

    /* SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf' incorporates:
     *  Constant: '<S1315>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_BattCo = BRDR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf' incorporates:
     *  Constant: '<S1316>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_Batt_j =
        BRDR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_HB_CT_SnsrPerf' incorporates:
     *  Constant: '<S1317>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_HB_CT_ =
        BRDR_ac_ConstB.Constant_bc;

    /* SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer' incorporates:
     *  Constant: '<S1318>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_HybBat =
        BRDR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_CoolOutTempSnsCkt' incorporates:
     *  Constant: '<S1319>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_CoolOu =
        BRDR_ac_ConstB.Constant_b0;

    /* SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer' incorporates:
     *  Constant: '<S1320>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_HybB_p =
        BRDR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattHeat' incorporates:
     *  Constant: '<S1321>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_BattHe =
        BRDR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCool' incorporates:
     *  Constant: '<S1322>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_Batt_h =
        BRDR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCoolLvlLow' incorporates:
     *  Constant: '<S1323>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_Batt_l =
        BRDR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCoolLvlSnsCkt' incorporates:
     *  Constant: '<S1324>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_Batt_g =
        BRDR_ac_ConstB.Constant_m;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeBRDR_e_FaultSts_BattCool' incorporates:
     *  SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCool'
     *  SignalConversion generated from: '<S3>/R_VeBRDR_e_FaultSts_BattCool'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCool_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_Batt_h);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_BattCoolLvlLow' incorporates:
     *  SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCoolLvlLow'
     *  SignalConversion generated from: '<S3>/R_VeBRDR_e_FaultSts_BattCoolLvlLow'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCoolLvlLow_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_Batt_l);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_BattCoolLvlSnsCkt' incorporates:
     *  SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCoolLvlSnsCkt'
     *  SignalConversion generated from: '<S3>/R_VeBRDR_e_FaultSts_BattCoolLvlSnsCkt'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCoolLvlSnsCkt_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_Batt_g);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf'
     *  SignalConversion generated from: '<S3>/R_VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_BattCo);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf'
     *  SignalConversion generated from: '<S3>/R_VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_Batt_j);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_BattHeat' incorporates:
     *  SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattHeat'
     *  SignalConversion generated from: '<S3>/R_VeBRDR_e_FaultSts_BattHeat'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattHeat_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_BattHe);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_CoolOutTempSnsCkt' incorporates:
     *  SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_CoolOutTempSnsCkt'
     *  SignalConversion generated from: '<S3>/R_VeBRDR_e_FaultSts_CoolOutTempSnsCkt'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_CoolOutTempSnsCkt_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_CoolOu);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_HB_CT_SnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_HB_CT_SnsrPerf'
     *  SignalConversion generated from: '<S3>/R_VeBRDR_e_FaultSts_HB_CT_SnsrPerf'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_HB_CT_SnsrPerf_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_HB_CT_);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer' incorporates:
     *  SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer'
     *  SignalConversion generated from: '<S3>/R_VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_HybBat);

    /* Outport: '<Root>/VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer' incorporates:
     *  SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer'
     *  SignalConversion generated from: '<S3>/R_VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_HybB_p);

    /* Outport: '<Root>/VeBRDR_b_BHOSDiag_Enbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_BHOSDiag_Enbl_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_BHOSDiag_Enbl_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_BHOSDiag_Enbl_O);

    /* Outport: '<Root>/VeBRDR_b_BTOS2Diag_Enbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_BTOS2Diag_Enbl_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_BTOS2Diag_Enbl_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_BTOS2Diag_Enbl_);

    /* Outport: '<Root>/VeBRDR_b_BTOSDiag_Enbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_BTOSDiag_Enbl_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_BTOSDiag_Enbl_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_BTOSDiag_Enbl_O);

    /* Outport: '<Root>/VeBRDR_b_HV_BHOS_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_HV_BHOS_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_HV_BHOS_FltDtct_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_HV_BHOS_FltDtct);

    /* Outport: '<Root>/VeBRDR_b_HV_BTIS2_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_HV_BTIS2_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_HV_BTIS2_FltDtct_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_HV_BTIS2_FltDtc);

    /* Outport: '<Root>/VeBRDR_b_HV_BTIS_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_HV_BTIS_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_HV_BTIS_FltDtct_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_HV_BTIS_FltDtct);

    /* Outport: '<Root>/VeBRDR_b_HV_BTOS2_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_HV_BTOS2_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_HV_BTOS2_FltDtct_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_HV_BTOS2_FltDtc);

    /* Outport: '<Root>/VeBRDR_b_HV_BTOS_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_HV_BTOS_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_HV_BTOS_FltDtct_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_HV_BTOS_FltDtct);

    /* Outport: '<Root>/VeBRDR_b_IUMPR_BHOSPerf' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_IUMPR_BHOSPerf_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_IUMPR_BHOSPerf_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_IUMPR_BHOSPerf_);

    /* Outport: '<Root>/VeBRDR_b_IUMPR_BTISPerf' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_IUMPR_BTISPerf_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_IUMPR_BTISPerf_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_IUMPR_BTISPerf_);

    /* Outport: '<Root>/VeBRDR_b_IUMPR_BTOSPerf' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_IUMPR_BTOSPerf_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_IUMPR_BTOSPerf_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_IUMPR_BTOSPerf_);

    /* Outport: '<Root>/VeBRDR_b_IUMPR_BattCoolPerf' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_IUMPR_BattCoolPerf_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_IUMPR_BattCoolPerf_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_IUMPR_BattCoolP);

    /* Outport: '<Root>/VeBRDR_b_IUMPR_BattHeatPerf' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_IUMPR_BattHeatPerf_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_IUMPR_BattHeatPerf_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_IUMPR_BattHeatP);

    /* Outport: '<Root>/VeBRDR_b_IUMPR_LTAP_TmpPerf' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_IUMPR_LTAP_TmpPerf_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_IUMPR_LTAP_TmpPerf_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_IUMPR_LTAP_TmpP);

    /* Outport: '<Root>/VeBRDR_b_LTAPDiag_Enbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_LTAPDiag_Enbl_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_LTAPDiag_Enbl_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_LTAPDiag_Enbl_O);

    /* Outport: '<Root>/VeBRDR_b_LTAP_Rqt_LoLv_Diag' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_LTAP_Rqt_LoLv_Diag_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_LTAP_Rqt_LoLv_Diag_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_LTAP_Rqt_LoLv_D);

    /* Outport: '<Root>/VeBRDR_b_LTAP_TmpFltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeBRDR_b_LTAP_TmpFltDtct_Out_Init'
     */
    (void)Rte_Write_VeBRDR_b_LTAP_TmpFltDtct_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_b_LTAP_TmpFltDtct);

    /* Outport: '<Root>/VeBRDR_e_HV_Bat_CltLvlLo' incorporates:
     *  SignalConversion generated from: '<S1314>/VeBRDR_e_HV_Bat_CltLvlLo_Out_Init'
     *  SignalConversion generated from: '<S3>/VeBRDR_e_HV_Bat_CltLvlLo_Out_Init'
     */
    (void)Rte_Write_VeBRDR_e_HV_Bat_CltLvlLo_Value
        (BRDR_ac_B.OutportBufferForVeBRDR_e_HV_Bat_CltLvlLo);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, BRDR_CODE) BRDR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BRDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1314>/VeBRDR_e_HV_Bat_CltLvlLo_Out_Init' incorporates:
     *  Constant: '<S1314>/Const10'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_HV_Bat_CltLvlLo = BRDR_ac_ConstB.Const10;

    /* SystemInitialize for SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf' incorporates:
     *  Constant: '<S1315>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_BattCo = BRDR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf' incorporates:
     *  Constant: '<S1316>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_Batt_j =
        BRDR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_HB_CT_SnsrPerf' incorporates:
     *  Constant: '<S1317>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_HB_CT_ =
        BRDR_ac_ConstB.Constant_bc;

    /* SystemInitialize for SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer' incorporates:
     *  Constant: '<S1318>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_HybBat =
        BRDR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_CoolOutTempSnsCkt' incorporates:
     *  Constant: '<S1319>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_CoolOu =
        BRDR_ac_ConstB.Constant_b0;

    /* SystemInitialize for SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer' incorporates:
     *  Constant: '<S1320>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_HybB_p =
        BRDR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattHeat' incorporates:
     *  Constant: '<S1321>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_BattHe =
        BRDR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCool' incorporates:
     *  Constant: '<S1322>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_Batt_h =
        BRDR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCoolLvlLow' incorporates:
     *  Constant: '<S1323>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_Batt_l =
        BRDR_ac_ConstB.Constant_e;

    /* SystemInitialize for SignalConversion generated from: '<S1314>/VeBRDR_e_FaultSts_BattCoolLvlSnsCkt' incorporates:
     *  Constant: '<S1324>/Constant'
     */
    BRDR_ac_B.OutportBufferForVeBRDR_e_FaultSts_Batt_g =
        BRDR_ac_ConstB.Constant_m;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/BRDR_MedTEH'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */

    /* SystemInitialize for Atomic SubSystem: '<S11>/BatCltLvlLo' */
#if Rte_SysCon_Variant_BRDR_23

    /* SystemInitialize for Atomic SubSystem: '<S1089>/If_DTC_P2BE0' */
#if !Rte_SysCon_Variant_BRDR_3

    /* SystemInitialize for Enabled SubSystem: '<S1124>/Raw_SignalSet' */
    /* SystemInitialize for SignalConversion generated from: '<S1131>/Out1' incorporates:
     *  Outport: '<S1131>/Out1'
     */
    BRDR_ac_B.OutportBufferForOut1 = true;

    /* End of SystemInitialize for SubSystem: '<S1124>/Raw_SignalSet' */
#endif

    /* End of SystemInitialize for SubSystem: '<S1089>/If_DTC_P2BE0' */
#endif

    /* End of SystemInitialize for SubSystem: '<S11>/BatCltLvlLo' */

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* SystemInitialize for Outport: '<Root>/VeBRDR_e_HV_Bat_CltLvlLo' incorporates:
     *  Merge: '<Root>/Merge_Outport_10'
     */
    (void)Rte_Write_VeBRDR_e_HV_Bat_CltLvlLo_Value(CeBRDR_e_BatCltLvlNotLo);

    /* SystemInitialize for Outport: '<Root>/VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf' incorporates:
     *  Merge: '<Root>/M_VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCoolPmpATempSnsrPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf' incorporates:
     *  Merge: '<Root>/M_VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCoolPmpHtrBTempSnsrPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBRDR_e_FaultSts_HB_CT_SnsrPerf' incorporates:
     *  Merge: '<Root>/M_VeBRDR_e_FaultSts_HB_CT_SnsrPerf'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_HB_CT_SnsrPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer' incorporates:
     *  Merge: '<Root>/M_VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_HybBattCooTempSnsrCPer_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBRDR_e_FaultSts_CoolOutTempSnsCkt' incorporates:
     *  Merge: '<Root>/M_VeBRDR_e_FaultSts_CoolOutTempSnsCkt'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_CoolOutTempSnsCkt_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer' incorporates:
     *  Merge: '<Root>/M_VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_HybBattCooTempSnsrDPer_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBRDR_e_FaultSts_BattHeat' incorporates:
     *  Merge: '<Root>/M_VeBRDR_e_FaultSts_BattHeat'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattHeat_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBRDR_e_FaultSts_BattCool' incorporates:
     *  Merge: '<Root>/M_VeBRDR_e_FaultSts_BattCool'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCool_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBRDR_e_FaultSts_BattCoolLvlLow' incorporates:
     *  Merge: '<Root>/M_VeBRDR_e_FaultSts_BattCoolLvlLow'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCoolLvlLow_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBRDR_e_FaultSts_BattCoolLvlSnsCkt' incorporates:
     *  Merge: '<Root>/M_VeBRDR_e_FaultSts_BattCoolLvlSnsCkt'
     */
    (void)Rte_Write_VeBRDR_e_FaultSts_BattCoolLvlSnsCkt_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
